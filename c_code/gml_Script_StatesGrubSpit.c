// gml_Script_StatesGrubSpit @ 0x140527f90

/* WARNING: Removing unreachable block (ram,0x00014052921d) */
/* WARNING: Removing unreachable block (ram,0x00014052923a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesGrubSpit
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong **pplVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined1 **ppuVar14;
  uint uVar15;
  longlong **pplVar16;
  undefined1 **ppuVar17;
  bool bVar18;
  code *pcVar19;
  undefined4 uVar21;
  undefined4 **ppuVar20;
  ulonglong uVar22;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  longlong *local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  char *local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined4 local_224;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined1 *local_200;
  undefined4 uStack_1f4;
  longlong local_1e8;
  byte local_1dc;
  longlong local_1d8;
  byte local_1cc;
  undefined4 local_1c8 [3];
  byte local_1bc;
  longlong local_1b8;
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  longlong *local_160;
  undefined4 *local_158;
  longlong *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  longlong local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 *local_88;
  
  local_240 = "gml_Script_StatesGrubIdle";
  local_248 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_248;
  local_238 = 0xa2;
  pcVar19 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_1e8,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_88 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_114 = 0xffffff;
  local_120 = 0;
  uStack_bc = 0xffffff;
  local_c8 = (undefined1 *)0x0;
  uStack_cc = 0xffffff;
  local_d8 = (undefined1 *)0x0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_214 = 0;
  local_220 = 0;
  local_224 = 0;
  local_230 = 0;
  local_27c = 0;
  local_288 = 0;
  local_204 = 0;
  local_210 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_238 = 0xa4;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_8c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_90 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
    local_98 = *param_5;
  }
  else {
    FUN_1400419b0(&local_98);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf690) &&
     (_Init_thread_header(&DAT_141ddf690), DAT_141ddf690 == -1)) {
    _DAT_141ddf96c = 0;
    _DAT_141ddf960 = 0x4000000000000000;
    _DAT_141ddf980 = 0;
    _DAT_141ddf974 = 0;
    _DAT_141ddf984 = 1;
    _DAT_141ddf994 = 0;
    _DAT_141ddf988 = 0x3ff0000000000000;
    _DAT_141ddf998 = 2;
    _DAT_141ddf9a8 = 0;
    _DAT_141ddf99c = 0x4008000000000000;
    _DAT_141ddf9ac = 3;
    atexit((_func_5014 *)&LAB_141481bc0);
    _Init_thread_footer(&DAT_141ddf690);
  }
  uVar15 = 0;
  while( true ) {
    iVar5 = FUN_140e851f0(&DAT_141ddf960 + (longlong)(int)uVar15 * 0x14,&local_98,DAT_141955260,0);
    uVar21 = (undefined4)((ulonglong)pcVar19 >> 0x20);
    if (iVar5 == 0) break;
    uVar15 = uVar15 + 1;
    if (3 < uVar15) goto LAB_14052a051;
  }
  iVar5 = *(int *)(&DAT_141ddf970 + (longlong)(int)uVar15 * 0x14);
  if (iVar5 == 0) {
    local_238 = 0xa8;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdae8);
    uStack_26c = 0;
    local_278 = (longlong *)0x3ff0000000000000;
    iVar5 = FUN_140e851f0(uVar6,&local_278,DAT_141955260,0);
    bVar18 = iVar5 != 0;
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    if (bVar18) {
      uStack_26c = 0xf;
      local_278 = (longlong *)0x100000100000313;
      ppuVar14 = (undefined1 **)&local_278;
    }
    else {
      uStack_1f4 = 0xf;
      local_200 = (undefined1 *)0x10000010000030f;
      ppuVar14 = &local_200;
    }
    uVar3 = uStack_1f4;
    uVar21 = uStack_26c;
    local_258 = *(undefined4 *)ppuVar14;
    uStack_254 = *(undefined4 *)((longlong)ppuVar14 + 4);
    uStack_250 = *(undefined4 *)(ppuVar14 + 1);
    uStack_24c = *(undefined4 *)((longlong)ppuVar14 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_258);
    if ((bVar18) && ((1 << ((byte)uVar21 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_278);
    }
    if ((!bVar18) && ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_200);
    }
    FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_b8);
    local_238 = 0xa9;
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    local_e4 = 0;
    local_f0 = 0;
    FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_f0);
    local_238 = 0xaa;
    puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fda58);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
    *puVar10 = &DAT_bff0000000000000;
    local_238 = 0xac;
    puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
    *puVar10 = 0;
    local_238 = 0xad;
    puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
    *puVar10 = 0;
    local_238 = 0xaf;
    goto LAB_14052a051;
  }
  if (iVar5 != 1) {
    if (iVar5 == 2) {
      local_238 = 0xf2;
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_288 = 0;
      local_280 = 0;
      local_27c = 5;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b18);
      FUN_140e63610(param_1,param_2,&local_288,0,uVar6,0);
      local_238 = 0xf3;
    }
    else if (iVar5 == 3) {
      local_238 = 0xf7;
    }
    goto LAB_14052a051;
  }
  local_238 = 0xb3;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdae8);
  uStack_25c = 0;
  local_268 = (longlong *)0x3ff0000000000000;
  iVar5 = FUN_140e851f0(uVar6,&local_268,DAT_141955260,0);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if (iVar5 == 0) {
    local_238 = 0xb4;
    uVar7 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
    uStack_25c = 0;
    local_268 = (longlong *)0x3fc999999999999a;
    FUN_140042560(&local_268,local_88);
    FUN_1400460e0(uVar7,&local_268);
    if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
  }
  else {
    local_238 = 0xb6;
    if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_220);
    }
    local_220 = 0;
    local_218 = 0;
    local_214 = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fda68);
    FUN_140e63610(param_1,param_2,&local_220,0,uVar7,0);
    uVar21 = (undefined4)((ulonglong)uVar7 >> 0x20);
  }
  local_238 = 0xb8;
  uStack_25c = 0;
  local_268 = (longlong *)0x3ff0000000000000;
  iVar5 = FUN_140e851f0(uVar6,&local_268,DAT_141955260,0);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if (iVar5 == 0) {
    if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_230);
    }
    local_230 = 0;
    local_228 = 0;
    local_224 = 5;
    local_178 = (undefined1 *)CONCAT44(uRam0000000141dc66d4,_DAT_141dc66d0);
    uStack_170 = uRam0000000141dc66d8;
    uStack_16c = uRam0000000141dc66dc;
    if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_178);
    local_160 = &local_1d8;
    uVar7 = CONCAT44(uVar21,DAT_141a0a0d8);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_230,1,uVar7,&local_160);
    uVar21 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1400b46b0(&local_200,uVar6,0x3fe0000000000000);
    ppuVar14 = &local_200;
    bVar2 = true;
    bVar18 = false;
  }
  else {
    if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_210);
    }
    local_210 = 0;
    local_208 = 0;
    local_204 = 5;
    local_178 = (undefined1 *)CONCAT44(uRam0000000141dc66d4,_DAT_141dc66d0);
    uStack_170 = uRam0000000141dc66d8;
    uStack_16c = uRam0000000141dc66dc;
    if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_178);
    uVar7 = CONCAT44(uVar21,DAT_141a0a0d8);
    local_150 = &local_1b8;
    uVar6 = FUN_140e634e0(param_1,param_2,&local_210,1,uVar7,&local_150);
    uVar21 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_140087a30(&local_278,uVar6,3);
    ppuVar14 = (undefined1 **)&local_278;
    bVar2 = false;
    bVar18 = true;
  }
  local_178 = *ppuVar14;
  uStack_170 = *(undefined4 *)(ppuVar14 + 1);
  uStack_16c = *(undefined4 *)((longlong)ppuVar14 + 0xc);
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  FUN_140041b80(&local_120,&local_178);
  if ((bVar18) && ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_278);
  }
  if ((bVar2) && ((1 << ((byte)uStack_1f4 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_200);
  }
  local_238 = 0xb9;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd3b8);
  uVar15 = FUN_140e851f0(uVar6,&local_120,DAT_141955260,1);
  if (0x7fffffff < uVar15) goto LAB_140529ac8;
  local_238 = 0xbb;
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  local_220 = 0;
  local_218 = 0;
  local_214 = 5;
  (**(code **)(*param_1 + 8))(param_1,DAT_1419fdae8);
  plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdaa8);
  if (plVar8 != &local_1e8) {
    local_278 = (longlong *)*plVar8;
    uStack_270 = (undefined4)plVar8[1];
    uStack_26c = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_278);
  }
  local_168 = &local_1e8;
  uVar7 = CONCAT44(uVar21,DAT_1419f5e98);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_220,1,uVar7,&local_168);
  uVar21 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_25c = 0;
  local_268 = (longlong *)0x0;
  iVar5 = FUN_140e851f0(uVar6,&local_268,DAT_141955260,1);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if (0 < iVar5) {
    local_238 = 0xbd;
    if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_230);
    }
    local_230 = 0;
    local_228 = 0;
    local_224 = 5;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdaa8);
    if (plVar8 != &local_1d8) {
      local_278 = (longlong *)*plVar8;
      uStack_270 = (undefined4)plVar8[1];
      uStack_26c = *(undefined4 *)((longlong)plVar8 + 0xc);
      if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140041b80(&local_1d8,&local_278);
    }
    local_160 = &local_1d8;
    local_278 = (longlong *)CONCAT44(uRam0000000141dc66d4,_DAT_141dc66d0);
    uStack_270 = uRam0000000141dc66d8;
    uStack_26c = uRam0000000141dc66dc;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_278);
    local_158 = local_1c8;
    plVar8 = (longlong *)
             FUN_140e634e0(param_1,param_2,&local_288,2,CONCAT44(uVar21,DAT_1419f5a78),&local_160);
    if (plVar8 != &local_1b8) {
      local_278 = (longlong *)*plVar8;
      uStack_270 = (undefined4)plVar8[1];
      uStack_26c = *(undefined4 *)((longlong)plVar8 + 0xc);
      if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_278);
    }
    local_278 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_270 = DAT_1419df7b8;
    uStack_26c = DAT_1419df7bc;
    local_150 = &local_1b8;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_278);
    local_148 = local_1a8;
    pplVar9 = &local_150;
    gml_Script_truestate_begin_step(param_1,param_2,&local_230,2,pplVar9);
    uVar21 = (undefined4)((ulonglong)pplVar9 >> 0x20);
    local_238 = 0xbe;
    if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_220);
    }
    local_220 = 0;
    local_218 = 0;
    local_214 = 5;
    plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdaa8);
    if (plVar8 != &local_1e8) {
      local_278 = (longlong *)*plVar8;
      uStack_270 = (undefined4)plVar8[1];
      uStack_26c = *(undefined4 *)((longlong)plVar8 + 0xc);
      if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_278);
    }
    local_168 = &local_1e8;
    local_278 = (longlong *)CONCAT44(uRam0000000141dc66d4,_DAT_141dc66d0);
    uStack_270 = uRam0000000141dc66d8;
    uStack_26c = uRam0000000141dc66dc;
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_278);
    puVar10 = &local_220;
    goto LAB_140529a9d;
  }
  local_238 = 0xc3;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdae8);
  uStack_25c = 0;
  local_268 = (longlong *)0x3ff0000000000000;
  iVar5 = FUN_140e851f0(uVar6,&local_268,DAT_141955260,0);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if (iVar5 == 0) {
    if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_230);
    }
    local_230 = 0;
    local_228 = 0;
    local_224 = 5;
    local_178 = (undefined1 *)CONCAT44(uRam0000000141dc66d4,_DAT_141dc66d0);
    uStack_170 = uRam0000000141dc66d8;
    uStack_16c = uRam0000000141dc66dc;
    if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_178);
    local_160 = &local_1d8;
    pplVar9 = &local_160;
    uVar13 = CONCAT44(uVar21,DAT_141a0a0d8);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_230,1,uVar13,pplVar9);
    FUN_140087a30(&local_200,uVar6,2);
    ppuVar14 = &local_200;
    bVar2 = true;
    bVar18 = false;
  }
  else {
    if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_210);
    }
    local_210 = 0;
    local_208 = 0;
    local_204 = 5;
    local_178 = (undefined1 *)CONCAT44(uRam0000000141dc66d4,_DAT_141dc66d0);
    uStack_170 = uRam0000000141dc66d8;
    uStack_16c = uRam0000000141dc66dc;
    if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_178);
    pplVar9 = &local_150;
    uVar13 = CONCAT44(uVar21,DAT_141a0a0d8);
    local_150 = &local_1b8;
    uVar6 = FUN_140e634e0(param_1,param_2,&local_210,1,uVar13,pplVar9);
    FUN_140087a30(&local_278,uVar6,3);
    ppuVar14 = (undefined1 **)&local_278;
    bVar2 = false;
    bVar18 = true;
  }
  local_178 = *ppuVar14;
  uStack_170 = *(undefined4 *)(ppuVar14 + 1);
  uStack_16c = *(undefined4 *)((longlong)ppuVar14 + 0xc);
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  FUN_140041b80(&local_120,&local_178);
  if ((bVar18) && ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_278);
  }
  if ((bVar2) && ((1 << ((byte)uStack_1f4 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_200);
  }
  bVar18 = false;
  local_238 = 0xc5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdae8);
  uStack_25c = 0;
  local_268 = (longlong *)0x4000000000000000;
  iVar5 = FUN_140e851f0(uVar6,&local_268,DAT_141955260,0);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if (iVar5 == 0) {
    if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_220);
    }
    local_220 = 0;
    local_218 = 0;
    local_214 = 5;
    if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_230);
    }
    local_230 = 0;
    local_228 = 0;
    local_224 = 5;
    uStack_25c = 6;
    local_268 = param_1;
    FUN_140e87440(&local_268,DAT_1419fe0e8,0x80000000,&local_c8,uVar13 & 0xffffffffffffff00,
                  (ulonglong)pplVar9 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_278 = (longlong *)local_c8;
    uStack_270 = uStack_c0;
    uStack_26c = uStack_bc;
    if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_278);
    local_168 = &local_1e8;
    local_278 = (longlong *)CONCAT44(uRam00000001419e6254,_DAT_1419e6250);
    uStack_270 = uRam00000001419e6258;
    uStack_26c = uRam00000001419e625c;
    if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_278);
    local_160 = &local_1d8;
    uStack_25c = 0xf;
    local_268 = (longlong *)0x1000000000000ee;
    FUN_140e87170(&local_268,DAT_1419fe0e8,0x80000000,&local_d8,param_1,param_2);
    if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_278 = (longlong *)local_d8;
    uStack_270 = uStack_d0;
    uStack_26c = uStack_cc;
    if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_278);
    local_158 = local_1c8;
    local_278 = (longlong *)CONCAT44(uRam00000001419e6254,_DAT_1419e6250);
    uStack_270 = uRam00000001419e6258;
    uStack_26c = uRam00000001419e625c;
    if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_278);
    local_150 = &local_1b8;
    uVar6 = gml_Script_bm_string_width(param_1,param_2,&local_230,2,&local_158);
    uVar7 = gml_Script_bm_string_width(param_1,param_2,&local_220,2,&local_168);
    iVar5 = FUN_140e851f0(uVar7,uVar6,DAT_141955260,0);
    if (iVar5 == 0) {
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_288 = 0;
      local_280 = 0;
      local_27c = 5;
      local_278 = (longlong *)CONCAT44(uRam00000001419e61a4,_DAT_1419e61a0);
      uStack_270 = uRam00000001419e61a8;
      uStack_26c = uRam00000001419e61ac;
      if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a8);
      }
      FUN_140041b80(local_1a8,&local_278);
      local_148 = local_1a8;
      uVar6 = gml_Script_choose_weighted(param_1,param_2,&local_288,1,&local_148);
      cVar4 = FUN_140e491e0(uVar6);
      if (cVar4 != '\0') {
        local_238 = 199;
        if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_210);
        }
        local_210 = 0;
        local_208 = 0;
        local_204 = 5;
        local_278 = (longlong *)CONCAT44(uRam00000001419e61c4,_DAT_1419e61c0);
        uStack_270 = uRam00000001419e61c8;
        uStack_26c = uRam00000001419e61cc;
        if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_198);
        }
        FUN_140041b80(local_198,&local_278);
        local_140 = local_198;
        local_278 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_270 = DAT_1419df7b8;
        uStack_26c = DAT_1419df7bc;
        if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_188);
        }
        FUN_140041b80(local_188,&local_278);
        local_138 = local_188;
        gml_Script_truestate_begin_step(param_1,param_2,&local_210,2,&local_140);
        local_238 = 200;
        goto LAB_14052a051;
      }
    }
  }
  local_238 = 0xcc;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd3b8);
  uVar15 = FUN_140e851f0(uVar6,&local_120,DAT_141955260,1);
  if (uVar15 < 0x80000000) {
    local_238 = 0xce;
    if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_130);
    }
    local_124 = 10;
    local_130 = 9;
    do {
      local_238 = 0xd1;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdae8);
      pplVar9 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdbb8);
      uStack_16c = 0;
      local_178 = (undefined1 *)0x3ff0000000000000;
      iVar5 = FUN_140e851f0(uVar6,&local_178,DAT_141955260,0);
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if (iVar5 == 0) {
        puVar10 = (undefined8 *)
                  FUN_140e8da20(&local_220,param_1,3,&DAT_1419e6220,&DAT_1419e6210,&DAT_1419e6240);
        uStack_25c = *(undefined4 *)((longlong)puVar10 + 0xc);
        uStack_260 = *(undefined4 *)(puVar10 + 1);
        if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) == 0) {
          local_268 = (longlong *)*puVar10;
        }
        else {
          FUN_1400419b0(&local_268,puVar10);
        }
        pplVar16 = &local_268;
        bVar18 = true;
      }
      else {
        puVar10 = (undefined8 *)
                  FUN_140e8da20(&local_230,param_1,3,&DAT_1419e6150,&DAT_1419e6230,&DAT_1419e61c0);
        local_9c = *(undefined4 *)((longlong)puVar10 + 0xc);
        local_a0 = *(undefined4 *)(puVar10 + 1);
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
          local_a8 = (longlong *)*puVar10;
        }
        else {
          FUN_1400419b0(&local_a8,puVar10);
        }
        pplVar16 = &local_a8;
      }
      FUN_140e609c0(param_1);
      if (pplVar16 != pplVar9) {
        local_258 = *(undefined4 *)pplVar16;
        uStack_254 = *(undefined4 *)((longlong)pplVar16 + 4);
        uStack_250 = *(undefined4 *)(pplVar16 + 1);
        uStack_24c = *(undefined4 *)((longlong)pplVar16 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)pplVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pplVar9);
        }
        FUN_140041b80(pplVar9,&local_258);
      }
      if ((bVar18) && (bVar18 = false, (1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_268);
      }
      FUN_140e60910(1);
      local_238 = 0xd3;
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_288 = 0;
      local_280 = 0;
      local_27c = 5;
      plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdbb8);
      plVar11 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fda58);
      if (plVar8 != &local_1e8) {
        local_258 = (undefined4)*plVar8;
        uStack_254 = *(undefined4 *)((longlong)plVar8 + 4);
        uStack_250 = (undefined4)plVar8[1];
        uStack_24c = *(undefined4 *)((longlong)plVar8 + 0xc);
        if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_258);
      }
      local_168 = &local_1e8;
      if (plVar11 != &local_1d8) {
        local_258 = (undefined4)*plVar11;
        uStack_254 = *(undefined4 *)((longlong)plVar11 + 4);
        uStack_250 = (undefined4)plVar11[1];
        uStack_24c = *(undefined4 *)((longlong)plVar11 + 0xc);
        if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_258);
      }
      local_160 = &local_1d8;
      pplVar9 = &local_168;
      plVar11 = (longlong *)FUN_14022ffd0(param_1,param_2,&local_288,2,pplVar9);
      uVar21 = (undefined4)((ulonglong)pplVar9 >> 0x20);
      if (plVar11 != &local_110) {
        local_258 = (undefined4)*plVar11;
        uStack_254 = *(undefined4 *)((longlong)plVar11 + 4);
        uStack_250 = (undefined4)plVar11[1];
        uStack_24c = *(undefined4 *)((longlong)plVar11 + 0xc);
        if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_110);
        }
        FUN_140041b80(&local_110,&local_258);
      }
      local_238 = 0xd4;
      uStack_1f4 = 0;
      local_200 = &DAT_bff0000000000000;
      iVar5 = FUN_140e851f0(&local_110,&local_200,DAT_141955260,0);
      if ((1 << ((byte)uStack_1f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_200);
      }
      if (iVar5 != 0) {
        local_238 = 0xd5;
        if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        local_288 = 0;
        local_280 = 0;
        local_27c = 5;
        plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdbb8);
        if (plVar8 != &local_1e8) {
          local_258 = (undefined4)*plVar8;
          uStack_254 = *(undefined4 *)((longlong)plVar8 + 4);
          uStack_250 = (undefined4)plVar8[1];
          uStack_24c = *(undefined4 *)((longlong)plVar8 + 0xc);
          if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          FUN_140041b80(&local_1e8,&local_258);
        }
        local_168 = &local_1e8;
        local_160 = &local_110;
        local_258 = _DAT_1419e6160;
        uStack_254 = uRam00000001419e6164;
        uStack_250 = uRam00000001419e6168;
        uStack_24c = uRam00000001419e616c;
        if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1c8);
        }
        FUN_140041b80(local_1c8,&local_258);
        local_158 = local_1c8;
        uVar6 = CONCAT44(uVar21,DAT_1419fd808);
        FUN_140e634e0(param_1,param_2,&local_288,3,uVar6,&local_168);
        uVar21 = (undefined4)((ulonglong)uVar6 >> 0x20);
      }
      local_238 = 0xd7;
      iVar5 = 0;
      if ((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) {
        iVar5 = *(int *)(*plVar8 + 0x24);
      }
      uVar6 = FUN_140e78f00((longlong)(iVar5 + -1));
      if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_130);
      }
      local_124 = 0;
      local_238 = 0xd8;
      local_130 = uVar6;
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_288 = 0;
      local_280 = 0;
      local_27c = 5;
      plVar11 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdaa8);
      plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdbb8);
      if (plVar11 != &local_1e8) {
        local_258 = (undefined4)*plVar11;
        uStack_254 = *(undefined4 *)((longlong)plVar11 + 4);
        uStack_250 = (undefined4)plVar11[1];
        uStack_24c = *(undefined4 *)((longlong)plVar11 + 0xc);
        if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_258);
      }
      local_168 = &local_1e8;
      iVar5 = FUN_140e4a740(&local_130);
      if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar11 = plVar8;
      }
      if (plVar11 != &local_1d8) {
        local_258 = (undefined4)*plVar11;
        uStack_254 = *(undefined4 *)((longlong)plVar11 + 4);
        uStack_250 = (undefined4)plVar11[1];
        uStack_24c = *(undefined4 *)((longlong)plVar11 + 0xc);
        if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_258);
      }
      local_160 = &local_1d8;
      uVar6 = CONCAT44(uVar21,DAT_141a57350);
      FUN_140e634e0(param_1,param_2,&local_288,2,uVar6,&local_168);
      uVar21 = (undefined4)((ulonglong)uVar6 >> 0x20);
      local_238 = 0xda;
      plVar11 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fda58);
      FUN_140e609c0(param_1);
      iVar5 = FUN_140e4a740(&local_130);
      if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
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
      }
      if (plVar8 != plVar11) {
        local_258 = (undefined4)*plVar8;
        uStack_254 = *(undefined4 *)((longlong)plVar8 + 4);
        uStack_250 = (undefined4)plVar8[1];
        uStack_24c = *(undefined4 *)((longlong)plVar8 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)plVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(plVar11);
        }
        FUN_140041b80(plVar11,&local_258);
      }
      FUN_140e60910(1);
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_288 = 0;
      local_280 = 0;
      local_27c = 5;
      plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdaa8);
      if (plVar8 != &local_1e8) {
        local_258 = (undefined4)*plVar8;
        uStack_254 = *(undefined4 *)((longlong)plVar8 + 4);
        uStack_250 = (undefined4)plVar8[1];
        uStack_24c = *(undefined4 *)((longlong)plVar8 + 0xc);
        if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_258);
      }
      local_168 = &local_1e8;
      uVar7 = CONCAT44(uVar21,DAT_1419f5e98);
      uVar6 = FUN_140e634e0(param_1,param_2,&local_288,1,uVar7,&local_168);
      uVar21 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uStack_26c = 0;
      local_278 = (longlong *)0x4010000000000000;
      iVar5 = FUN_140e851f0(uVar6,&local_278,DAT_141955260,0);
      if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
    } while (iVar5 != 0);
    local_238 = 0xdf;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_210);
    }
    local_210 = 0;
    local_208 = 0;
    local_204 = 5;
    plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdaa8);
    if (plVar8 != &local_1e8) {
      local_258 = (undefined4)*plVar8;
      uStack_254 = *(undefined4 *)((longlong)plVar8 + 4);
      uStack_250 = (undefined4)plVar8[1];
      uStack_24c = *(undefined4 *)((longlong)plVar8 + 0xc);
      if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_258);
    }
    local_168 = &local_1e8;
    local_258 = _DAT_141dc66d0;
    uStack_254 = uRam0000000141dc66d4;
    uStack_250 = uRam0000000141dc66d8;
    uStack_24c = uRam0000000141dc66dc;
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_258);
    local_160 = &local_1d8;
    puVar12 = (undefined4 *)
              FUN_140e634e0(param_1,param_2,&local_210,2,CONCAT44(uVar21,DAT_1419f5a78),&local_168);
    if (puVar12 != local_1c8) {
      local_258 = *puVar12;
      uStack_254 = puVar12[1];
      uStack_250 = puVar12[2];
      uStack_24c = puVar12[3];
      if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1c8);
      }
      FUN_140041b80(local_1c8,&local_258);
    }
    local_158 = local_1c8;
    local_258 = (undefined4)DAT_1419df7b0;
    uStack_254 = DAT_1419df7b0._4_4_;
    uStack_250 = DAT_1419df7b8;
    uStack_24c = DAT_1419df7bc;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_258);
    ppuVar20 = &local_158;
    local_150 = &local_1b8;
    gml_Script_truestate_begin_step(param_1,param_2,&local_288,2,ppuVar20);
    uVar21 = (undefined4)((ulonglong)ppuVar20 >> 0x20);
    local_238 = 0xe0;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdaa8);
    if (plVar8 != &local_1e8) {
      local_258 = (undefined4)*plVar8;
      uStack_254 = *(undefined4 *)((longlong)plVar8 + 4);
      uStack_250 = (undefined4)plVar8[1];
      uStack_24c = *(undefined4 *)((longlong)plVar8 + 0xc);
      if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_258);
    }
    local_168 = &local_1e8;
    local_258 = _DAT_141dc66d0;
    uStack_254 = uRam0000000141dc66d4;
    uStack_250 = uRam0000000141dc66d8;
    uStack_24c = uRam0000000141dc66dc;
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_258);
    puVar10 = &local_288;
LAB_140529a9d:
    local_160 = &local_1d8;
    FUN_140e634e0(param_1,param_2,puVar10,2,CONCAT44(uVar21,DAT_1419f5938),&local_168);
  }
LAB_140529ac8:
  local_238 = 0xe6;
  if (local_88 != &local_100) {
    local_258 = *(undefined4 *)local_88;
    uStack_254 = *(undefined4 *)((longlong)local_88 + 4);
    uStack_250 = *(undefined4 *)(local_88 + 1);
    uStack_24c = *(undefined4 *)((longlong)local_88 + 0xc);
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    FUN_140041b80(&local_100,&local_258);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_100);
  local_238 = 0xe8;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_288 = 0;
  local_280 = 0;
  local_27c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
  FUN_140e63610(param_1,param_2,&local_288,0,uVar6,0);
  local_238 = 0xe9;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_288 = 0;
  local_280 = 0;
  local_27c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_288,0,uVar6,0);
  local_238 = 0xea;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_288 = 0;
  local_280 = 0;
  local_27c = 5;
  uVar13 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  uVar22 = 0;
  FUN_140e63610(param_1,param_2,&local_288,0,uVar13,0);
  local_238 = 0xec;
  ppuVar14 = (undefined1 **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  uStack_26c = 6;
  local_278 = param_1;
  FUN_140e87440(&local_278,DAT_1419fe0e8,0x80000000,&local_c8,uVar13 & 0xffffffffffffff00,
                uVar22 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  uStack_26c = 0xf;
  local_278 = (longlong *)0x1000000000000ee;
  FUN_140e87170(&local_278,DAT_1419fe0e8,0x80000000,&local_d8,param_1,param_2);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  iVar5 = FUN_140e851f0(&local_c8,&local_d8,DAT_141955260,1);
  bVar18 = iVar5 == -2 || -1 < iVar5;
  if (bVar18) {
    uStack_26c = 0;
    local_278 = (longlong *)&DAT_bff0000000000000;
    ppuVar17 = (undefined1 **)&local_278;
  }
  else {
    uStack_1f4 = 0;
    local_200 = (undefined1 *)0x3ff0000000000000;
    ppuVar17 = &local_200;
  }
  uVar3 = uStack_1f4;
  uVar21 = uStack_26c;
  FUN_140e609c0(param_1);
  if (ppuVar17 != ppuVar14) {
    local_258 = *(undefined4 *)ppuVar17;
    uStack_254 = *(undefined4 *)((longlong)ppuVar17 + 4);
    uStack_250 = *(undefined4 *)(ppuVar17 + 1);
    uStack_24c = *(undefined4 *)((longlong)ppuVar17 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar14 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppuVar14);
    }
    FUN_140041b80(ppuVar14,&local_258);
  }
  if ((bVar18) && ((1 << ((byte)uVar21 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_278);
  }
  if ((iVar5 != -2 && -1 >= iVar5) && ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_200);
  }
  FUN_140e60910(1);
  local_238 = 0xee;
LAB_14052a051:
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_230);
  }
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_1e8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_248;
  return param_3;
}

