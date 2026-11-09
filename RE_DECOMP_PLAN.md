# Ichorous — reverse-engineering / decompile plan (GameMaker YYC)

Goal: full usable GML-level decompile of **Ichorous** (options.i­tch / itch.io GameMaker 2024.14.1 **YYC** build)
as step 1 toward a **mod manager** (hooks call into the recovered script registry).

## Ground truth (verified)
- `raw/Ichorous.exe` — 27.86 MB, PE x64, **no export table**, contains all game logic as native code.
- `raw/data.win` — 10.02 MB, chunk layout fully enumerated: **no CODE chunk** (true YYC), assets only
  (SPRT/BGND/SOND/OBJT/ROOM/STRG/TXTR/AUDO …).
- exe strings: **8,082 `gml_Script_*` + 902 `gml_Object_*` symbols** (8,984 unique) in `ghidra_symbols_gml.txt`.
- `scripts/scripts.json` — 5,313 SCPT entries `{id,name,code_entry:null}`; contains both authored script
  names and runtime `gml_Script_*` symbol entries (pairs pattern, ids sequential).
- object symbol coverage 322/339 objects (17 have no code: oBgGrub, oCamNode, etc.).
- No `mods` handling in engine strings (0 hits) → mod support must be injected at code level;
  the GM script registry inside the exe is the hook point (execute-string / registry replay possible).
- External mod-friendly files shipped with game: `dialogue_config.json`, `en.json` (gettext-style);
  3 audio groups as separate `.dat`.

## Toolchain
- Ghidra 12.2 PUBLIC: `C:\Users\blind\Tools\ghidra_12.2_PUBLIC\support\analyzeHeadless.bat`
- JDK 25: `C:\Users\blind\Tools\jdk-25` (set JAVA_HOME before launching)
- Scripts: `C:\Users\blind\Downloads\ichorous\ghidra-scripts\` (PreSet.java = trims expensive analyzers)
- Project: `C:\Users\blind\Downloads\ichorous\ghidra-proj\` (ichorous project; program "Ichorous.exe")

## Passes
1. **PASS 1 — survey (running)** `analyzeHeadless` import `raw\Ichorous.exe` + auto-analysis
   (Decompiler Parameter ID + Non-Returning-Discovered OFF for speed), then postScript
   `FirstPass.java`:
   - raw byte-scan of all initialized blocks for `gml_*` strings → labels `STR_*`
   - `ichourous_decompiled/ghidra_pass1_strings.csv` (addr, value, bucket, xref_count, first froms)
   - `ghidra_pass1_pointers.csv` (every 8/4-byte word in data blocks equal to a gml string VA →
     the static name tables / registry arrays appear as dense address runs here)
   - `ghidra_pass1_functions.csv` (per-function count of distinct gml names referenced —
     top entries = boot-time registry-builder functions)
2. **PASS 2 — registry recovery** (next, after pass 1 numbers):
   - identify the registry init function(s) from `ghidra_pass1_functions.csv` top rows
   - decompile them + mmap the static tables (runs in `ghidra_pass1_pointers.csv`) to produce
     **script-id ↔ gml name ↔ native function address** map for all scripts
   - second headless `-process` run: rename functions to their `gml_Script_*`/`gml_Object_*`
     names in the project (permanent annotation).
3. **PASS 3 — batch decompile** → pseudo-C per script under `ichourous_decompiled/c_code/`
   (per-script `.c` files, index CSV). Pin the YYC call ABI (self/other/result/args layout) from a
   trivial decompiled function → needed for mod hook design.
4. **PASS 4 — mod-manager hook design** (after registry map): plan for injected DLL that
   replays/wraps registry entries; plus data-level modding now (dialogue_config.json/en.json/audio
   .dat) which needs no code hooks.

## Status log
- 2026-11-08: pass 1 headless launched (PID wrapper 15840, java 8068). Watcher shell refreshes
  `ghidra-proj/watch-status.txt` every 30 s and terminates on "FirstPass done".
- 2026-11-08: pass 1 compile failed on `getReferencesTo` returning ReferenceIterator (12.2 API);
  **auto-analysis itself succeeded & saved (1010 s)** → reran as
  `-process Ichorous.exe -noanalysis -postScript FirstPass.java` (wrapper PID 30824) →
  **FirstPass done in 2,603 ms**.
- PASS 1 ARTIFACTS in `ichourous_decompiled\`:
  - `ghidra_pass1_strings.csv` (19,447 rows: addr,value,bucket,xref_count,first_froms)
  - `ghidra_pass1_pointers.csv` (**12,443 rows** — dense 64-bit runs of `gml_Script_*` name
    pointers around 0x1419ee… = the YYC script name tables; also closure structs
    `gml_Script_anon@…`/`____struct___…_40_…`)
  - `ghidra_pass1_functions.csv` (6,079 functions with distinct gml-string refs; code xrefs max
    out ~3 per func → registry lives in DATA tables, not code — pass 2 must mine runs in
    pointers.csv, not the function tally)
- PASS 2 PLAN (next): from pointers.csv group adjacent rows into arrays (stride-8 runs per
  section); for each run check neighbors in .text for function-pointer arrays; rename each
  function to its `gml_Script_*` name; batch-decompile into `ichourous_decompiled\c_code\`.
- PASS 2 DONE (2026-11-08, ~2 s runtime after 3 tiny compile fixups):
  - `SecondPass.java` classifies every aligned qword in data blocks (STR = value equals a gml
    string VA; CODEPTR = value inside .text AND at a function entry), finds name-table runs,
    pairs each name with function-entry CODEPTRs within ±5 slots, majority-votes per name,
    **renames 6,213 functions to their exact GML names** (unmatched: 0), saves project.
  - `ghidra_pass2_scriptmap.csv` — THE registry map: gml name ↔ native function address
    (this is the future mod-manager hook table).
  - `ghidra_pass2_cells.csv` (1.1 MB) + `ghidra_pass2_runs.csv` (name-table runs in .data,
    e.g. 0x141a0f..–0x141a55.. neighborhoods).
  - `abi_probe.c` — smallest renamed `gml_Script*` decompiled; YYC script ABI pinned:
    `undefined8 * gml_Script_name(void* self, void* other, undefined8* result)`
    (result buffer zeroed: `*result = 0; *(int*)(result+0xC) = 0` — RValue double+type tag).
    Mod hooks therefore call registered functions with (self, other, &resultRValue).
- PASS 3 PLAN: batch-decompile all 6,213 renamed functions via DecompInterface in a headless
  `-process` pass → per-file pseudo-C under `ichourous_decompiled\c_code\` + index CSV
  (name, address, instruction span). Use the scriptmap CSV as the driver list.
- PASS 3 API pin remains: decompile one trivial script to lock the YYC ABI (self/other/args) for
  the mod-manager hook layer.

## PASS 3 STATUS (2026-11-08 night): DONE ✅ 5,492/5,555 decompiled (98.9%), 63 failed (all re-runnable)
- Final line in ghidra-proj/pass3-out.log: `ThirdPass done: 5555 functions  ok=5492  fail=63
  in 6525318 ms` (~108.8 min). Ghidra project SAVED for /Ichorous.exe (no analysis re-run).
- Inventory verified on disk: 5,493 .c files under ichourous_decompiled\c_code\ (5,492 pass-3
  outputs + abi_probe.c) + ichourous_decompiled\ghidra_pass3_index.csv
  (name, entry, span_bytes, status, bytes). Plan bar ">=90% ok" PASSED.
- ALL 63 failures share one status: `Exception while decompiling <entry>: process: timeout`
  = per-function decompiler timeout on giant bodies (struct-builder Create chains, Scribble
  text engine, Input plugin, TrueState/boss/enemy state machines, savedata get/set, ImGui) -
  ZERO codegen errors => every one re-runnable. PASS 4 backlog: raise per-function time
  budget, decompile ONLY the flagged entries, splice outputs into c_code. Full list:
  ichourous_decompiled\pass3-failures.md.

## PASS 3 AUDIT (2026-11-08 night): VERIFIED CLEAN
- Machine audit (verify-pass3.ps1) of every output: index 5,555 rows = 5,492 ok + 63 fail;
  c_code = 5,492 files / 46.5 MB / 0 orphans; per-file header check (`// <name> @ 0x<entry>`)
  passes for ALL ok rows: 0 missing, 0 empty, 0 header/address mismatch, 0 truncated bodies,
  0 stray files for the 63 failed rows, 0 duplicate-filename collisions.
- Registry proof (scriptmap <-> pass3 index): 5,555 rows CLOSED BOTH DIRECTIONS - every pass3
  entry exists in scriptmap at the same address, and every scriptmap address is a pass3 entry.
  3,063 pairs differ ONLY in name spelling: scriptmap keeps GameMaker's `@` separators
  (runtime symbol `gml_Script_anon@46@gml_Object_oEnemyCageCharger_Other_76`) while the Ghidra
  rename writes `anon_46_` (Ghidra symbols cannot use `@`). Downstream match rule:
  runtime name -> `runtimeName.replace('@', '_')`; names > 150 chars map to files
  `<first150><entry-hex>.c`.
- scriptmap CSV quirk: header says name,func_addr,votes,rename_result but rows are 6 fields -
  name,'',addr,'','','yes' (extra empty field slides addr into the `votes` header position).
  Parse col[2] as the address. (Func-addr column data is fine; only the header/row shape is off.)

## PASS 3 REDO (timeout 30 s -> 300 s): RUNNING (analyzeHeadless pid 14944, GHIDRA pass3redo-out.log)
- Pass3Redo.java: reads pass3_index, redoes ONLY non-ok rows, same file-naming rule plus a
  collision guard (never overwrites a file whose header embeds a different entry; suffixes
  with entry hex instead). Writes ghidra_pass3redo_index.csv. Worst case 63 x 300 s ~ 5 h,
  typically far less. On completion: merge statuses into a final index + regenerate
  pass3-failures.md + update this section.

## NEXT (user-owned): PASS 4 = mod-manager hook design (scriptmap + pinned ABI) - NOT assistant scope.

- Driver list changed vs plan: ThirdPass enumerates FUNCTIONS matching gml_Script_*/gml_Object_*/
  gml_Global*/gml_Room* from the FunctionManager = 5,555 targets (some of the 6,213 pass-2
  renames are duplicated name variants / non-script helpers; scriptmap.csv remains the full map).
- Output: per-function pseudo-C at ichourous_decompiled/c_code/<name>.c (names >150 chars get
  entry-address suffix) + ghidra_pass3_index.csv (name,entry,span_bytes,status,bytes[kind of
  decompiled C length]). Progress printed every 200 functions.
- No compile step for C output; failures logged per-row in the index CSV status column.
- AFTER PASS 3 (mod-manager path): build hook layer from ghidra_pass2_scriptmap.csv (name
  <-> native addr) + pinned ABI from abi_probe.c (call: (self, other, &RValue)));
  external-text modding (dialogue_config.json/en.json/audio .dat) needs no hooks.
