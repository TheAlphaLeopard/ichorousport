// gml_Script_InputVerbStateByteLength @ 0x14037be40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputVerbStateByteLength
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  uint local_res20;
  undefined4 uVar19;
  longlong **pplVar18;
  longlong **pplVar20;
  ulonglong uVar21;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  double local_268;
  uint local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  char *local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined4 local_224;
  longlong local_218;
  byte local_20c;
  longlong local_208;
  byte local_1fc;
  longlong local_1f8;
  byte local_1ec;
  undefined8 local_1e8;
  byte local_1dc;
  undefined1 local_1d8 [12];
  byte local_1cc;
  longlong local_1c8;
  undefined4 local_1bc;
  longlong local_1b8;
  uint uStack_1ac;
  undefined4 local_1a8;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  uint local_188 [2];
  undefined8 *local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  longlong local_168;
  uint local_15c;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  undefined8 *local_140;
  undefined1 *local_138;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  uint local_f0;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined1 local_90 [16];
  longlong local_80;
  
  iVar16 = 0;
  local_1a8 = 0;
  local_240 = "gml_Script_InputVerbStateArray";
  local_248 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_248;
  local_238 = 0x10;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_188,param_4,2,param_5);
  uVar19 = 1;
  _eh_vector_constructor_iterator_(&local_218,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_res20 = 0xffffff;
  uStack_1ac = 0xffffff;
  local_1b8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_25c = 0xffffff;
  local_268 = 0.0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_26c = 0;
  local_278 = 0;
  local_24c = 0;
  local_258 = 0;
  local_224 = 0;
  local_230 = 0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde868) &&
     (_Init_thread_header(&DAT_141dde868), DAT_141dde868 == -1)) {
    DAT_141dde878 = (longlong *)FUN_140e63aa0(DAT_1419f3e98);
    _Init_thread_footer(&DAT_141dde868);
  }
  puVar12 = local_180;
  uVar15 = local_188[0];
  local_238 = 0x10;
  if ((int)local_188[0] < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*local_180;
  }
  iVar5 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 == 0) {
    local_238 = 0x10;
    uStack_27c = 0xd;
    local_288 = 0x3ff0000000000000;
    if ((int)uVar15 < 1) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)*puVar12;
      if (&local_288 == puVar9) goto LAB_14037c0a2;
    }
    local_a8 = 0x3ff0000000000000;
    uStack_a0 = uStack_280;
    uStack_9c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_a8);
  }
LAB_14037c0a2:
  if ((int)uVar15 < 2) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)puVar12[1];
  }
  iVar5 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 == 0) {
    if ((int)uVar15 < 2) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)puVar12[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    *puVar9 = 0;
  }
  if (DAT_141ddc150 == '\0') {
    FUN_140e64380(DAT_141dde878,"gml_Script_InputVerbStateArray");
    FUN_140e64380(local_res8,"gml_Script_InputVerbStateArray");
  }
  local_238 = 0x12;
  if (DAT_141ddc150 == '\0') {
    DAT_141ddc150 = '\x01';
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
    plVar7 = (longlong *)(**(code **)(*DAT_141dde878 + 0x10))(DAT_141dde878,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde878);
    plVar8 = (longlong *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (local_res8,local_res10,&local_278,0,0);
    if (plVar8 != plVar7) {
      local_288 = *plVar8;
      uStack_280 = (undefined4)plVar8[1];
      uStack_27c = *(undefined4 *)((longlong)plVar8 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar7);
      }
      FUN_140041b80(plVar7,&local_288);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_258 = 0;
    local_250 = 0;
    local_24c = 5;
    plVar7 = (longlong *)(**(code **)(*DAT_141dde878 + 0x10))(DAT_141dde878,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde878);
    plVar8 = (longlong *)gml_Script___InputTrace(local_res8,local_res10,&local_258,0,0);
    if (plVar8 != plVar7) {
      local_288 = *plVar8;
      uStack_280 = (undefined4)plVar8[1];
      uStack_27c = *(undefined4 *)((longlong)plVar8 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar7);
      }
      FUN_140041b80(plVar7,&local_288);
    }
    FUN_140e60910(1);
    puVar9 = (undefined8 *)(**(code **)(*DAT_141dde878 + 0x10))(DAT_141dde878,DAT_1419f3e88);
    FUN_140e609c0(DAT_141dde878);
    FUN_140e645a0(&local_288,gml_GlobalScript_InputVerbStateByteLength,0);
    if (&local_288 != puVar9) {
      local_a8 = local_288;
      uStack_a0 = uStack_280;
      uStack_9c = uStack_27c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_a8);
    }
    if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_230);
    }
    local_230 = 0;
    local_228 = 0;
    local_224 = 5;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    plVar7 = (longlong *)(**(code **)(*DAT_141dde878 + 8))(DAT_141dde878,DAT_1419f3e88);
    plVar8 = (longlong *)(**(code **)(*DAT_141dde878 + 0x10))(DAT_141dde878,DAT_1419f3f08);
    uVar19 = 0;
    plVar10 = (longlong *)gml_Script_InputVerbGetBindingName(local_res8,local_res10,&local_178,0,0);
    if (plVar10 != &local_218) {
      local_288 = *plVar10;
      uStack_280 = (undefined4)plVar10[1];
      uStack_27c = *(undefined4 *)((longlong)plVar10 + 0xc);
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_288);
    }
    local_158 = &local_218;
    if (plVar7 != &local_208) {
      local_288 = *plVar7;
      uStack_280 = (undefined4)plVar7[1];
      uStack_27c = *(undefined4 *)((longlong)plVar7 + 0xc);
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_288);
    }
    local_150 = &local_208;
    FUN_140e609c0(DAT_141dde878);
    uVar11 = CONCAT44(uVar19,DAT_1419fd628);
    plVar7 = (longlong *)FUN_140e634e0(local_res8,local_res10,&local_230,2,uVar11,&local_158);
    uVar19 = (undefined4)((ulonglong)uVar11 >> 0x20);
    if (plVar7 != plVar8) {
      local_288 = *plVar7;
      uStack_280 = (undefined4)plVar7[1];
      uStack_27c = *(undefined4 *)((longlong)plVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar8);
      }
      FUN_140041b80(plVar8,&local_288);
    }
    FUN_140e60910(1);
    uVar15 = local_188[0];
  }
  local_238 = 4;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  if ((int)uVar15 < 2) {
    plVar7 = &DAT_1419df7b0;
LAB_14037c523:
    local_288 = *plVar7;
    uStack_280 = (undefined4)plVar7[1];
    uStack_27c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_288);
  }
  else {
    plVar7 = (longlong *)puVar12[1];
    if (plVar7 != &local_218) goto LAB_14037c523;
  }
  local_158 = &local_218;
  pplVar20 = &local_158;
  pplVar18 = (longlong **)CONCAT44(uVar19,DAT_141a014a8);
  uVar11 = FUN_140e634e0(local_res8,local_res10,&local_278,1,pplVar18,pplVar20);
  cVar4 = FUN_140e491e0(uVar11);
  if (cVar4 == '\0') {
    local_238 = 5;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    uVar19 = (undefined4)((ulonglong)pplVar18 >> 0x20);
    local_258 = 0;
    local_250 = 0;
    local_24c = 5;
    if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_230);
    }
    local_230 = 0;
    local_228 = 0;
    local_224 = 5;
    if ((int)uVar15 < 2) {
      plVar7 = &DAT_1419df7b0;
LAB_14037c611:
      local_288 = *plVar7;
      uStack_280 = (undefined4)plVar7[1];
      uStack_27c = *(undefined4 *)((longlong)plVar7 + 0xc);
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_288);
    }
    else {
      plVar7 = (longlong *)puVar12[1];
      if (plVar7 != &local_208) goto LAB_14037c611;
    }
    local_150 = &local_208;
    local_288 = CONCAT44(uRam0000000141dd1e3c,_DAT_141dd1e38);
    uStack_280 = uRam0000000141dd1e40;
    uStack_27c = DAT_141dd1e44;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_288);
    local_148 = &local_1f8;
    pplVar20 = &local_150;
    puVar9 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_230,1,CONCAT44(uVar19,DAT_1419fdc58),
                           pplVar20);
    if (puVar9 != &local_1e8) {
      local_288 = *puVar9;
      uStack_280 = *(undefined4 *)(puVar9 + 1);
      uStack_27c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_288);
    }
    local_140 = &local_1e8;
    local_288 = CONCAT44(uRam0000000141dd1e5c,_DAT_141dd1e58);
    uStack_280 = uRam0000000141dd1e60;
    uStack_27c = DAT_141dd1e64;
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_288);
    local_138 = local_1d8;
    pplVar18 = &local_148;
    FUN_14008e020(local_res8,local_res10,&local_258,3,pplVar18);
  }
  local_238 = 9;
  if ((int)uVar15 < 2) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)puVar12[1];
  }
  uStack_27c = 0;
  local_288 = 0x3ff0000000000000;
  uVar6 = FUN_140e851f0(puVar9,&local_288,DAT_141955260,1);
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if (uVar6 < 0x80000000) {
    local_238 = 0xb;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
    local_288 = CONCAT44(uRam0000000141dd1e0c,_DAT_141dd1e08);
    uStack_280 = uRam0000000141dd1e10;
    uStack_27c = DAT_141dd1e14;
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_288);
    local_158 = &local_218;
    if ((int)uVar15 < 2) {
      plVar7 = &DAT_1419df7b0;
LAB_14037c84c:
      local_288 = *plVar7;
      uStack_280 = (undefined4)plVar7[1];
      uStack_27c = *(undefined4 *)((longlong)plVar7 + 0xc);
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_288);
    }
    else {
      plVar7 = (longlong *)puVar12[1];
      if (plVar7 != &local_208) goto LAB_14037c84c;
    }
    local_150 = &local_208;
    local_288 = CONCAT44(uRam0000000141dd1e2c,_DAT_141dd1e28);
    uStack_280 = uRam0000000141dd1e30;
    uStack_27c = DAT_141dd1e34;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_288);
    local_148 = &local_1f8;
    local_288 = CONCAT44(uRam00000001419e45b4,_DAT_1419e45b0);
    uStack_280 = uRam00000001419e45b8;
    uStack_27c = uRam00000001419e45bc;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_288);
    local_140 = &local_1e8;
    local_288 = CONCAT44(uRam0000000141dd1e1c,_DAT_141dd1e18);
    uStack_280 = uRam0000000141dd1e20;
    uStack_27c = DAT_141dd1e24;
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_288);
    local_138 = local_1d8;
    pplVar18 = &local_158;
    FUN_14008e020(local_res8,local_res10,&local_278,5,pplVar18);
  }
  local_238 = 0x13;
  if ((int)uVar15 < 2) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)puVar12[1];
  }
  uStack_27c = 0;
  local_288 = 0;
  iVar5 = FUN_140e851f0(puVar9,&local_288,DAT_141955260,1);
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if (iVar5 == -2 || -1 < iVar5) goto LAB_14037caed;
  local_238 = 0x17;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_288 = CONCAT44(uRam0000000141dd1e0c,_DAT_141dd1e08);
  uStack_280 = uRam0000000141dd1e10;
  uStack_27c = DAT_141dd1e14;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_288);
  local_158 = &local_218;
  if ((int)uVar15 < 2) {
    plVar7 = &DAT_1419df7b0;
LAB_14037ca52:
    local_288 = *plVar7;
    uStack_280 = (undefined4)plVar7[1];
    uStack_27c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_288);
  }
  else {
    plVar7 = (longlong *)puVar12[1];
    if (plVar7 != &local_208) goto LAB_14037ca52;
  }
  local_150 = &local_208;
  local_288 = CONCAT44(uRam0000000141dd1e4c,_DAT_141dd1e48);
  uStack_280 = uRam0000000141dd1e50;
  uStack_27c = DAT_141dd1e54;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_288);
  local_148 = &local_1f8;
  pplVar18 = &local_158;
  FUN_14008e020(local_res8,local_res10,&local_278,3,pplVar18);
LAB_14037caed:
  local_238 = 0x23;
  if ((int)uVar15 < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*puVar12;
  }
  cVar4 = FUN_140e491e0(puVar9);
  if (cVar4 == '\0') {
    local_238 = 0x29;
    plVar7 = (longlong *)(**(code **)(*DAT_141dde878 + 8))(DAT_141dde878,DAT_1419f3f08);
  }
  else {
    local_238 = 0x25;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_258 = 0;
    local_250 = 0;
    local_24c = 5;
    plVar7 = (longlong *)(**(code **)(*DAT_141dde878 + 8))(DAT_141dde878,DAT_1419f3e88);
    uVar19 = 0;
    plVar8 = (longlong *)gml_Script_InputVerbGetBindingName(local_res8,local_res10,&local_258,0,0);
    if (plVar8 != &local_218) {
      local_288 = *plVar8;
      uStack_280 = (undefined4)plVar8[1];
      uStack_27c = *(undefined4 *)((longlong)plVar8 + 0xc);
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_288);
    }
    local_158 = &local_218;
    if (plVar7 != &local_208) {
      local_288 = *plVar7;
      uStack_280 = (undefined4)plVar7[1];
      uStack_27c = *(undefined4 *)((longlong)plVar7 + 0xc);
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_288);
    }
    local_150 = &local_208;
    pplVar20 = &local_158;
    pplVar18 = (longlong **)CONCAT44(uVar19,DAT_1419fd628);
    plVar7 = (longlong *)FUN_140e634e0(local_res8,local_res10,&local_278,2,pplVar18,pplVar20);
  }
  lVar17 = 0;
  if (plVar7 != &local_1b8) {
    local_288 = *plVar7;
    uStack_280 = (undefined4)plVar7[1];
    uStack_27c = *(undefined4 *)((longlong)plVar7 + 0xc);
    FUN_140041b80(&local_1b8,&local_288);
    local_res20 = uStack_1ac;
    lVar17 = local_1b8;
  }
  local_238 = 0x2c;
  local_a8 = (**(code **)(*DAT_141dde878 + 8))(DAT_141dde878,DAT_1419fcb48);
  uVar21 = (ulonglong)pplVar20 & 0xffffffffffffff00;
  uVar14 = (ulonglong)pplVar18 & 0xffffffffffffff00;
  FUN_140e87440(local_a8,DAT_1419fe1c8,0x80000000,&local_b8,uVar14,uVar21);
  local_288 = local_b8;
  uStack_280 = uStack_b0;
  uStack_27c = uStack_ac;
  FUN_140041b80(&local_d8,&local_288);
  local_238 = 0x2e;
  plVar7 = (longlong *)(**(code **)(*DAT_141dde878 + 8))(DAT_141dde878,DAT_141a026b8);
  if ((int)uVar15 < 2) {
    puVar12 = &DAT_1419df7b0;
  }
  else {
    puVar12 = (undefined8 *)puVar12[1];
  }
  local_98 = plVar7;
  iVar5 = FUN_140e4a740(puVar12);
  if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
    if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar8 = plVar7;
  }
  uVar21 = uVar21 & 0xffffffffffffff00;
  uVar14 = uVar14 & 0xffffffffffffff00;
  FUN_140e87440(plVar8,DAT_1419fd6e8,0x80000000,&local_c8,uVar14,uVar21);
  local_288 = local_c8;
  uStack_280 = uStack_c0;
  uStack_27c = uStack_bc;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_288);
  local_238 = 0x2f;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uVar19 = local_cc;
  uVar11 = local_d8;
  local_25c = 0;
  local_268 = 0.0;
  local_238 = 0x30;
  if ((local_res20 == 2) && (lVar17 != 0)) {
    iVar16 = *(int *)(lVar17 + 0x24);
  }
  bVar2 = (byte)local_cc;
  if (0 < iVar16) {
    uVar15 = local_res20 & 0xffffff;
    local_f0 = uVar15;
    do {
      iVar16 = iVar16 + -1;
      local_238 = 0x32;
      iVar5 = FUN_140e4a740(&local_268);
      plVar8 = (longlong *)0x0;
      if ((uVar15 == 2) && (local_1b8 != 0)) {
        if ((iVar5 < 0) || (*(int *)(local_1b8 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(local_1b8 + 0x24));
        }
        else {
          plVar8 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(local_1b8 + 8));
        }
        if (plVar8 != &local_1c8) goto LAB_14037cec7;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar8 = &local_1b8;
LAB_14037cec7:
        local_198 = (undefined4)*plVar8;
        uStack_194 = *(undefined4 *)((longlong)plVar8 + 4);
        uStack_190 = (undefined4)plVar8[1];
        uStack_18c = *(undefined4 *)((longlong)plVar8 + 0xc);
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_198);
      }
      local_238 = 0x33;
      iVar5 = FUN_140e4a740(&local_268);
      plVar8 = (longlong *)0x0;
      if (((local_15c & 0xffffff) == 2) && (local_168 != 0)) {
        if ((iVar5 < 0) || (*(int *)(local_168 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(local_168 + 0x24));
        }
        else {
          plVar8 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(local_168 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar8 = &local_168;
      }
      iVar5 = FUN_140e63cb0(local_90,&local_res8,&local_res10,plVar8);
      uVar3 = local_d0;
      if (0 < iVar5) {
        do {
          local_238 = 0x35;
          puVar12 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fde28);
          if (puVar12 != &local_100) {
            local_198 = *(undefined4 *)puVar12;
            uStack_194 = *(undefined4 *)((longlong)puVar12 + 4);
            uStack_190 = *(undefined4 *)(puVar12 + 1);
            uStack_18c = *(undefined4 *)((longlong)puVar12 + 0xc);
            if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_100);
            }
            FUN_140041b80(&local_100,&local_198);
          }
          FUN_140e87930(&local_1c8,DAT_1419f3ec8,0x80000000,&local_100);
          local_238 = 0x36;
          puVar12 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd828);
          if (puVar12 != &local_110) {
            local_198 = *(undefined4 *)puVar12;
            uStack_194 = *(undefined4 *)((longlong)puVar12 + 4);
            uStack_190 = *(undefined4 *)(puVar12 + 1);
            uStack_18c = *(undefined4 *)((longlong)puVar12 + 0xc);
            if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_110);
            }
            FUN_140041b80(&local_110,&local_198);
          }
          FUN_140e87930(&local_1c8,DAT_1419f3ee8,0x80000000,&local_110);
          local_238 = 0x37;
          puVar12 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd488);
          if (puVar12 != &local_120) {
            local_198 = *(undefined4 *)puVar12;
            uStack_194 = *(undefined4 *)((longlong)puVar12 + 4);
            uStack_190 = *(undefined4 *)(puVar12 + 1);
            uStack_18c = *(undefined4 *)((longlong)puVar12 + 0xc);
            if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_120);
            }
            FUN_140041b80(&local_120,&local_198);
          }
          FUN_140e87930(&local_1c8,DAT_1419f3ed8,0x80000000,&local_120);
          local_238 = 0x38;
          puVar12 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd6f8);
          if (puVar12 != &local_130) {
            local_198 = *(undefined4 *)puVar12;
            uStack_194 = *(undefined4 *)((longlong)puVar12 + 4);
            uStack_190 = *(undefined4 *)(puVar12 + 1);
            uStack_18c = *(undefined4 *)((longlong)puVar12 + 0xc);
            if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_130);
            }
            FUN_140041b80(&local_130,&local_198);
          }
          FUN_140e87930(&local_1c8,DAT_1419f3eb8,0x80000000,&local_130);
          local_238 = 0x39;
          uVar13 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd758);
          uStack_27c = uVar19;
          uStack_280 = uVar3;
          if ((1 << (bVar2 & 0x1f) & 0x46U) == 0) {
            local_288 = uVar11;
          }
          else {
            FUN_1400419b0(&local_288,&local_d8);
          }
          local_1a8 = 1;
          FUN_1400462a0(&local_288,uVar13);
          local_198 = (undefined4)local_288;
          uStack_194 = local_288._4_4_;
          uStack_190 = uStack_280;
          uStack_18c = uStack_27c;
          if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          FUN_140041b80(&local_e8,&local_198);
          local_1a8 = 0;
          if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          FUN_140e87930(&local_1c8,DAT_1419f3ef8,0x80000000,&local_e8);
          cVar4 = FUN_140e643f0(local_90,&local_res8,&local_res10);
        } while (cVar4 != '\0');
        plVar7 = local_98;
        uVar15 = local_f0;
      }
      FUN_140e63970(local_90,&local_res8,&local_res10);
      DAT_141a67c38 = 1;
      uVar21 = uVar21 & 0xffffffffffffff00;
      uVar14 = uVar14 & 0xffffffffffffff00;
      FUN_140e87440(local_a8,DAT_1419fe1c8,0x80000000,&local_b8,uVar14,uVar21);
      if ((int)local_188[0] < 2) {
        puVar12 = &DAT_1419df7b0;
      }
      else {
        puVar12 = (undefined8 *)local_180[1];
      }
      iVar5 = FUN_140e4a740(puVar12);
      if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar17 = *plVar7, lVar17 != 0))
      {
        if ((iVar5 < 0) || (*(int *)(lVar17 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar17 + 0x24));
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar17 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar8 = plVar7;
      }
      uVar21 = uVar21 & 0xffffffffffffff00;
      uVar14 = uVar14 & 0xffffffffffffff00;
      FUN_140e87440(plVar8,DAT_1419fd6e8,0x80000000,&local_c8,uVar14,uVar21);
      DAT_141a67c38 = 0;
      DAT_141a72aac = 0;
      local_238 = 0x3c;
      uVar6 = local_25c & 0xffffff;
      if (uVar6 == 0) {
LAB_14037d3c6:
        local_268 = local_268 + 1.0;
      }
      else {
        if (uVar6 == 1) {
          local_268 = (double)FUN_140e4b060(&local_268);
          local_25c = 0;
          goto LAB_14037d3c6;
        }
        if (uVar6 == 7) {
          local_268 = (double)CONCAT44(local_268._4_4_,local_268._0_4_ + 1);
        }
        else if (uVar6 == 10) {
          local_268 = (double)((longlong)local_268 + 1);
        }
        else {
          if (uVar6 == 0xd) {
            local_25c = 0;
            goto LAB_14037d3c6;
          }
          FUN_140042910(&DAT_14172c3d8,&local_268,&local_268);
        }
      }
      if (local_80 != 0) {
        FUN_140e4cd60();
      }
    } while (0 < iVar16);
    uVar15 = local_188[0];
  }
  uVar6 = local_res20;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_230);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << (bVar2 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  _eh_vector_destructor_iterator_(&local_218,0x10,5,FUN_140041b30);
  if (0 < (int)uVar15) {
    uVar14 = (ulonglong)local_188[0];
    puVar12 = local_180;
    do {
      puVar9 = (undefined8 *)*puVar12;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      *puVar9 = 0;
      *(undefined4 *)(puVar9 + 1) = 0;
      *(undefined4 *)((longlong)puVar9 + 0xc) = 5;
      puVar12 = puVar12 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  FUN_140e4cd60(local_180);
  DAT_141dc7a50 = (undefined8 *)local_248;
  return local_res18;
}

