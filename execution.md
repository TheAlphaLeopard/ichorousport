# execution.md — Ichorous (GameMaker YYC → "ichorweb" web port + RE decompile pipeline)

> Living record of steps, processes, tools and progress. Companion record:
> `C:\Users\blind\Downloads\jams'\horsey\horsey-main\stick-it-to-the-stick-man-windows-officetower\execution.md`
> (Stick It To The Stickman Unity WebGL port — same session, same methodology).
> Last updated: 2026-11-09

## 0. What this project is

- **Ichorous** — GameMaker 2024.14.1 **YYC** build (GML compiled to native x64 machine code in the game exe; zero
  logic in `data.win` — no `CODE`/`VARI`/`FUNC` chunks).
- End goal: **ichorweb** (web port, empty at `C:\Users\blind\Downloads\ichorous\ichorweb\`) + mod-manager groundwork.
- Toolchain basis: everything asset-level flows through **yoyolib** (in-repo, UndertaleModLib+Underanalyzer based);
  everything logic-level flows through **Ghidra headless passes** documented in `RE_DECOMP_PLAN.md`.

## 1. Key paths

| What | Where |
|---|---|
| Project root | `C:\Users\blind\Downloads\ichorous\` |
| RE plan (detailed pass notes) | `RE_DECOMP_PLAN.md` — read this for pass internals |
| Ghidra project | `ghidra-proj\` (project `ichorous`, program `Ichorous.exe`; all passes saved) |
| Ghidra scripts | `ghidra-scripts\` (`FirstPass.java`, `Pass3Redo.java`, `PreSet.java`) |
| Asset dump | `ichourous_decompiled\` (`MANIFEST.json` + raw files + ghidra pass CSVs) |
| Decompiled C (pass 3) | `ichourous_decompiled\c_code\` — 5,492 files, 46.5 MB + `ghidra_pass3_index.csv` |
| Script registry map | `ichourous_decompiled\ghidra_pass2_scriptmap.csv` (gml name ↔ native addr; parse addr from col[2]) |
| YYC ABI proof | `ichourous_decompiled\abi_probe.c` — `(void* self, void* other, RValue* result)` |
| yoyolib (data.win CLI) | `yoyolib\` — build with .NET 10 SDK (`dotnet build YoyoLib.sln -c Release`) |
| Web port target | `ichorweb\` — empty, work starts today |

NOTE: a **superseded copy** of the asset dump exists at
`...\stick-it-to-the-stick-man-windows-officetower\ichourous_decompiled\` (identical `data.win` + `MANIFEST.json`
hashes; no Ghidra artifacts). Treat `Downloads\ichorous\ichourous_decompiled` as canonical.

## 2. Toolchain

| Tool | Where | Job |
|---|---|---|
| Ghidra 12.2 PUBLIC | `C:\Users\blind\Tools\ghidra_12.2_PUBLIC\support\analyzeHeadless.bat` | native analysis of `Ichorous.exe` (YYC logic) |
| JDK 25 | `C:\Users\blind\Tools\jdk-25` | JAVA_HOME for Ghidra |
| .NET SDK 10.0.403 | `C:\Users\blind\tools\dotnet` (installed 2026-11-09) | yoyolib build |
| ilspycmd 11.2.0.10050 | `%USERPROFILE%\.dotnet\tools` | managed decompilation (helper DLLs) |
| Emscripten 6.0.13 | `C:\Users\blind\Tools\emsdk` (`emsdk activate latest` 2026-11-09) | future wasm steps of ichorweb |
| UndertaleModLib 0.9.2 / Underanalyzer | via yoyolib | data.win parsing + (if VM) GML decompile |

**GameMaker engine: NOT installed and NOT needed** (details §6).

## 3. Progress log

- 2026-11-07 — asset dump created (custom IchorousDumper, UndertaleModLib 0.9.2). Assets only — YYC build.
- 2026-11-08 — **PASS 1** (survey) done: 19,447 gml strings mined; 12,443 pointer rows; registry lives in .data
  name-table runs, not code xrefs.
- 2026-11-08 — **PASS 2** (registry recovery) done in ~2 s: **6,213 functions renamed** to exact `gml_*` names,
  unmatched 0. `ghidra_pass2_scriptmap.csv` = the registry map. YYC ABI pinned via `abi_probe.c`:
  script = `(self, other, &resultRValue)`; RValue = 8-byte double + type tag, result buffer zero-initialized.
- 2026-11-08 — **PASS 3** (batch decompile) done in ~109 min: **5,492/5,555 ok (98.9%)**, 63 timeout failures
  (all re-runnable, zero codegen errors) → `pass3-failures.md`. Audit clean (verify-pass3.ps1, both directions
  closed vs scriptmap; 3,063 names differ only by `@`→`_` Ghidra symbol rule).
- 2026-11-08 — PASS 3 REDO launched for the 63 timeouts **died at startup**: Ghidra rejected the launch args
  (`HeadlessOptions.setRunFilesScriptsNoImport`: "invalid filename specified") — full script path passed where
  only a `-scriptPath`-rooted file name is accepted. Fixed 2026-11-09 (see §4).
- 2026-11-09 — toolchain unblocked (wifi): .NET 10 SDK + ilspycmd + emsdk installed; yoyolib build started;
  **PASS 3 REDO relaunch with corrected headless args**.
- 2026-11-09 — `execution.md` created (this file).

## 4. Relaunch procedure (PASS 3 REDO — the invocation that works)

```bat
set JAVA_HOME=C:\Users\blind\Tools\jdk-25
C:\Users\blind\Tools\ghidra_12.2_PUBLIC\support\analyzeHeadless.bat ^
  C:\Users\blind\Downloads\ichorous\ghidra-proj ichorous ^
  -process Ichorous.exe -noanalysis ^
  -scriptPath C:\Users\blind\Downloads\ichorous\ghidra-scripts ^
  -postScript Pass3Redo.java
```

Rules learned:
- `-postScript` takes ONLY a file name inside `-scriptPath` (never a full path — that is what killed the first run).
- `-noanalysis` is required on `-process` runs; the pass-1 auto-analysis (1010 s) is already saved in the project.
- Output: `ghidra_pass3redo_index.csv` + repaired files in `c_code\`; worst case 63×300 s ≈ 5 h, typically far less.
- After completion: merge statuses into the final index and regenerate `pass3-failures.md`.

## 5. Next steps (ichorweb begins)

1. PASS 3 REDO completion → 100% function coverage (background, today).
2. Build yoyolib → make `yoyo` CLI available (validate with `yoyo info` on `ichourous_decompiled\raw\data.win`).
3. Design & scaffold `ichorweb\`:
   - static webhost (rooms/sprites/atlas/sounds loaders), room-graph navigation (75 rooms),
   - GameMaker-alike runtime shim (instances/events/step-room-draw loop) driven by rooms.json + objects.json,
   - logic layer: script-by-script recovery/translation from `c_code\` (registry map as the index),
     starting from the room graph + object event tables (prioritize.player/camera/input/UI systems,
     then per-room gameplay systems).
4. Mod-friendly externals (`dialogue_config.json`, `en.json`, audio `.dat`) served as plain files (needs an
   audiogroup `.dat` reader — available inside yoyolib).

## 6. GameMaker engine — do we need it? **No.**

- yoyolib (UndertaleModLib) parses `data.win` completely for YYC builds — nothing more to gain from the IDE.
- A YYC game cannot be imported/decompiled back into the GameMaker IDE, so the IDE provides no recovery path.
- GML logic recovery is covered by Ghidra passes 1–3 (native code, 98.9% pseudo-C + registry map).
- The web port (ichorweb) is our own runtime over dumped assets — GameMaker's IDE/wasm export is not part of it.
- Only revisit this if we change strategy to "recover full GML sources and rebuild in the engine" (not planned).

## 7. Conventions

- `raw\` stays byte-original (hashes in `MANIFEST.json`); all outputs live outside `raw\`.
- Ghidra project saved after every pass — never re-run 17-min auto-analysis on `-process` runs.
- Names: runtime `@` in gml symbol names maps to `_` in Ghidra/decompiled filenames (`replace('@','_')`).
- scriptmap CSV quirk: rows are 6 fields but the header names 4 columns — the function address is column **2**.
