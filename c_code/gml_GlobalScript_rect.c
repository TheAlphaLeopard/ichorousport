// gml_GlobalScript_rect @ 0x140440350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_GlobalScript_rect
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  undefined1 auVar2 [12];
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulonglong *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar21;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar20 [16];
  byte local_res8;
  byte local_res20;
  ulonglong uVar22;
  undefined4 uVar23;
  longlong **pplVar24;
  undefined8 local_358;
  undefined4 local_350;
  undefined4 local_34c;
  longlong local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  char *local_330;
  undefined4 local_328;
  longlong local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  double local_2f8;
  uint local_2ec;
  longlong local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  longlong local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  longlong local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 local_28c;
  longlong local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined4 local_26c;
  double local_268;
  undefined4 local_25c;
  longlong *local_258;
  longlong *local_250;
  longlong *local_248;
  longlong *local_240;
  undefined1 *local_238;
  undefined8 local_218;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  longlong local_1f8 [2];
  longlong local_1e8 [2];
  longlong local_1d8 [2];
  longlong local_1c8 [2];
  undefined1 local_1b8 [64];
  double local_178;
  undefined4 local_16c;
  longlong local_168;
  undefined4 local_15c;
  longlong local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_148;
  undefined4 local_13c;
  longlong local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  longlong local_118;
  undefined4 local_10c;
  longlong local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  double local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  double local_b8;
  undefined4 local_ac;
  uint local_a8 [2];
  undefined8 *local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  local_330 = "gml_Script_raycast";
  local_338 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_338;
  local_328 = 0xb;
  FUN_140041df0(local_a8,param_4,8,param_5);
  uVar15 = 1;
  _eh_vector_constructor_iterator_(local_1f8,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_res8 = 0xff;
  local_10c = 0xffffff;
  local_118 = 0;
  local_res20 = 0xff;
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_2cc = 0xffffff;
  local_2d8 = 0;
  uStack_2dc = 0xffffff;
  local_2e8 = 0;
  plVar7 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f70d8);
  local_1fc = 0xffffff;
  local_208 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_2ec = 0xffffff;
  local_2f8 = 0.0;
  local_13c = 0xffffff;
  local_148 = 0;
  uStack_27c = 0xffffff;
  local_288 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_34c = 0;
  local_358 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_328 = 0xb;
  puVar12 = &DAT_1419df7b0;
  uVar13 = (ulonglong)local_a8[0];
  if ((int)local_a8[0] < 4) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_a0[3];
  }
  iVar5 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 == 0) {
    local_328 = 0xb;
    if (3 < (int)local_a8[0]) {
      puVar12 = (undefined8 *)local_a0[3];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar12);
    }
    *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
    *puVar12 = 0x4059000000000000;
  }
  puVar12 = &DAT_1419df7b0;
  if ((int)local_a8[0] < 5) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_a0[4];
  }
  iVar5 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 == 0) {
    if (4 < (int)local_a8[0]) {
      puVar12 = (undefined8 *)local_a0[4];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar12);
    }
    *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
    *puVar12 = 0x4030000000000000;
  }
  puVar12 = &DAT_1419df7b0;
  if ((int)local_a8[0] < 8) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_a0[7];
  }
  iVar5 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 == 0) {
    uStack_300 = CONCAT44(0xd,(undefined4)uStack_300);
    local_308 = 0.0;
    if (((int)local_a8[0] < 8) || (puVar12 = (undefined8 *)local_a0[7], &local_308 != puVar12)) {
      local_318 = 0;
      uStack_310 = uStack_300;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar12);
      }
      FUN_140041b80(puVar12,&local_318);
    }
  }
  local_328 = 0xd;
  if ((int)local_a8[0] < 7) {
    puVar12 = &DAT_1419df7b0;
  }
  else {
    puVar12 = (undefined8 *)local_a0[6];
  }
  iVar5 = FUN_140e851f0(puVar12,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 == 0) {
LAB_14044072d:
    puVar12 = &DAT_1419df7b0;
    local_328 = 0xd;
    if (((int)local_a8[0] < 7) || (puVar12 = (undefined8 *)local_a0[6], puVar12 != &DAT_141dd2d08))
    {
      uStack_310 = CONCAT44(DAT_141dd2d14,DAT_141dd2d10);
      local_318 = DAT_141dd2d08;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar12);
      }
      FUN_140041b80(puVar12,&local_318);
    }
  }
  else {
    if ((int)local_a8[0] < 7) {
      puVar12 = &DAT_1419df7b0;
    }
    else {
      puVar12 = (undefined8 *)local_a0[6];
    }
    uStack_2bc = 0;
    local_2c8 = -0x3ff0000000000000;
    iVar5 = FUN_140e851f0(puVar12,&local_2c8,DAT_141955260,0);
    if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    if (iVar5 == 0) goto LAB_14044072d;
  }
  local_328 = 0xe;
  if ((int)local_a8[0] < 1) {
    plVar8 = &DAT_1419df7b0;
LAB_14044079e:
    local_318 = *plVar8;
    uStack_310 = plVar8[1];
    FUN_140041b80(&local_118,&local_318);
    local_res8 = (byte)local_10c;
  }
  else {
    plVar8 = (longlong *)*local_a0;
    if (plVar8 != &local_118) goto LAB_14044079e;
  }
  local_328 = 0xf;
  if ((int)local_a8[0] < 2) {
    plVar8 = &DAT_1419df7b0;
LAB_1404407e6:
    local_318 = *plVar8;
    uStack_310 = plVar8[1];
    FUN_140041b80(&local_108,&local_318);
    local_res20 = (byte)local_fc;
  }
  else {
    plVar8 = (longlong *)local_a0[1];
    if (plVar8 != &local_108) goto LAB_1404407e6;
  }
  local_328 = 0x10;
  if ((int)local_a8[0] < 1) {
    plVar8 = &DAT_1419df7b0;
LAB_140440829:
    local_318 = *plVar8;
    uStack_310 = plVar8[1];
    if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    FUN_140041b80(&local_2d8,&local_318);
  }
  else {
    plVar8 = (longlong *)*local_a0;
    if (plVar8 != &local_2d8) goto LAB_140440829;
  }
  local_328 = 0x11;
  if ((int)local_a8[0] < 2) {
    plVar8 = &DAT_1419df7b0;
LAB_140440879:
    local_318 = *plVar8;
    uStack_310 = plVar8[1];
    if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    FUN_140041b80(&local_2e8,&local_318);
  }
  else {
    plVar8 = (longlong *)local_a0[1];
    if (plVar8 != &local_2e8) goto LAB_140440879;
  }
  local_328 = 0x13;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_358 = 0;
  local_350 = 0;
  local_34c = 5;
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f70e8);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_2c8,gml_GlobalScript_Readme_BMM,0);
  if (&local_2c8 != plVar7) {
    uStack_310 = CONCAT44(uStack_2bc,uStack_2c0);
    local_318 = local_2c8;
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar7);
    }
    FUN_140041b80(plVar7,&local_318);
  }
  FUN_140e60910(1);
  if (plVar7 != local_1f8) {
    local_318 = *plVar7;
    uStack_310 = plVar7[1];
    if ((1 << ((byte)local_1f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_318);
  }
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_258 = local_1f8;
  local_318 = _DAT_1419e5ce0;
  uStack_310 = uRam00000001419e5ce8;
  if ((1 << ((byte)local_1e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_318);
  local_250 = local_1e8;
  local_318 = _DAT_1419e5cf0;
  uStack_310 = lRam00000001419e5cf8;
  if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_318);
  local_248 = local_1d8;
  local_318 = _DAT_1419e5cf0;
  uStack_310 = lRam00000001419e5cf8;
  if ((1 << ((byte)local_1c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_318);
  local_240 = local_1c8;
  FUN_140e609c0(param_1);
  uVar22 = CONCAT44(uVar15,DAT_1419fd6d8);
  plVar7 = (longlong *)FUN_140e634e0(param_1,param_2,&local_358,4,uVar22,&local_258);
  if (plVar7 != plVar8) {
    local_318 = *plVar7;
    uStack_310 = plVar7[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar8);
    }
    FUN_140041b80(plVar8,&local_318);
  }
  FUN_140e60910(1);
  local_328 = 0x1a;
  local_308 = 1.0;
  uVar15 = (undefined4)uStack_300;
  uStack_300 = CONCAT44(0xd,uVar15);
  local_318 = 0x3ff0000000000000;
  uStack_310 = CONCAT44(0xd,uVar15);
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  FUN_140041b80(&local_208,&local_318);
  local_328 = 0x1b;
  uStack_2bc = DAT_141dd2d14;
  uStack_2c0 = DAT_141dd2d10;
  if ((1 << ((byte)DAT_141dd2d14 & 0x1f) & 0x46U) == 0) {
    local_2c8 = DAT_141dd2d08;
  }
  else {
    FUN_1400419b0(&local_2c8,&DAT_141dd2d08);
  }
  if ((int)local_a8[0] < 7) {
    puVar12 = &DAT_1419df7b0;
  }
  else {
    puVar12 = (undefined8 *)local_a0[6];
  }
  iVar5 = FUN_140e851f0(puVar12,&local_2c8,DAT_141955260,0);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  uVar15 = (undefined4)(uVar22 >> 0x20);
  if (iVar5 == 0) goto LAB_140440e00;
  local_328 = 0x1c;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_358 = 0;
  local_350 = 0;
  local_34c = 5;
  if ((int)local_a8[0] < 7) {
    plVar7 = &DAT_1419df7b0;
LAB_140440c48:
    local_318 = *plVar7;
    uStack_310 = plVar7[1];
    if ((1 << ((byte)local_1f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_318);
  }
  else {
    plVar7 = (longlong *)local_a0[6];
    if (plVar7 != local_1f8) goto LAB_140440c48;
  }
  local_258 = local_1f8;
  uVar9 = CONCAT44(uVar15,DAT_141a1c640);
  plVar7 = (longlong *)FUN_140e634e0(param_1,param_2,&local_358,1,uVar9,&local_258);
  uVar15 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (plVar7 != &local_138) {
    local_318 = *plVar7;
    uStack_310 = plVar7[1];
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_318);
  }
  local_328 = 0x1d;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_358 = 0;
  local_350 = 0;
  local_34c = 5;
  local_258 = &local_138;
  uVar22 = CONCAT44(uVar15,DAT_1419f70c8);
  plVar7 = (longlong *)FUN_140e634e0(param_1,param_2,&local_358,1,uVar22,&local_258);
  uVar9 = extraout_XMM0_Qb;
  if (plVar7 != &local_168) {
    local_318 = *plVar7;
    uStack_310 = plVar7[1];
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_318);
    uVar9 = extraout_XMM0_Qb_00;
  }
  local_328 = 0x1e;
  auVar2._4_8_ = uVar9;
  auVar2._0_4_ = local_308._4_4_;
  auVar16._0_8_ = auVar2._0_8_ << 0x20;
  auVar16._8_4_ = (undefined4)uStack_300;
  auVar16._12_4_ = 0xd;
  uStack_310 = auVar16._8_8_;
  local_308 = 0.0;
  local_318 = 0;
  uStack_300 = uStack_310;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  FUN_140041b80(&local_208,&local_318);
LAB_140440e00:
  local_328 = 0x21;
LAB_140440e20:
  do {
    uVar15 = (undefined4)(uVar22 >> 0x20);
    if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    local_358 = 0;
    local_350 = 0;
    local_34c = 5;
    if ((int)local_a8[0] < 1) {
      plVar7 = &DAT_1419df7b0;
LAB_140440e66:
      local_348 = *plVar7;
      uStack_340 = plVar7[1];
      if ((1 << ((byte)local_1f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1f8);
      }
      FUN_140041b80(local_1f8,&local_348);
    }
    else {
      plVar7 = (longlong *)*local_a0;
      if (plVar7 != local_1f8) goto LAB_140440e66;
    }
    local_258 = local_1f8;
    if ((int)local_a8[0] < 2) {
      plVar7 = &DAT_1419df7b0;
LAB_140440ec5:
      local_348 = *plVar7;
      uStack_340 = plVar7[1];
      if ((1 << ((byte)local_1e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1e8);
      }
      FUN_140041b80(local_1e8,&local_348);
    }
    else {
      plVar7 = (longlong *)local_a0[1];
      if (plVar7 != local_1e8) goto LAB_140440ec5;
    }
    local_250 = local_1e8;
    local_248 = &local_2d8;
    local_240 = &local_2e8;
    if ((int)local_a8[0] < 4) {
      puVar12 = &DAT_1419df7b0;
    }
    else {
      puVar12 = (undefined8 *)local_a0[3];
    }
    pplVar24 = &local_258;
    uVar22 = CONCAT44(uVar15,DAT_1419fd548);
    uVar9 = FUN_140e634e0(param_1,param_2,&local_358,4,uVar22,pplVar24);
    iVar5 = FUN_140e851f0(uVar9,puVar12,DAT_141955260,1);
    if ((iVar5 == -2) || (-1 < iVar5)) goto LAB_14044246d;
    local_328 = 0x22;
    if ((int)local_a8[0] < 3) {
      puVar12 = &DAT_1419df7b0;
    }
    else {
      puVar12 = (undefined8 *)local_a0[2];
    }
    if ((*(uint *)((longlong)puVar12 + 0xc) & 0xffffff) == 0) {
      uVar15 = (undefined4)*puVar12;
      uVar21 = (undefined4)((ulonglong)*puVar12 >> 0x20);
    }
    else {
      uVar9 = FUN_140e4b060();
      uVar15 = (undefined4)uVar9;
      uVar21 = (undefined4)((ulonglong)uVar9 >> 0x20);
    }
    uVar23 = (undefined4)(uVar22 >> 0x20);
    if ((int)local_a8[0] < 5) {
      puVar11 = &DAT_1419df7b0;
    }
    else {
      puVar11 = (ulonglong *)local_a0[4];
    }
    if ((*(uint *)((longlong)puVar11 + 0xc) & 0xffffff) == 0) {
      auVar17._8_8_ = 0;
      auVar17._0_8_ = *puVar11;
    }
    else {
      auVar17._0_8_ = FUN_140e4b060();
      auVar17._8_8_ = extraout_XMM0_Qb_01;
    }
    auVar18._4_12_ = auVar17._4_12_;
    auVar18._0_4_ = (float)auVar17._0_8_;
    fVar14 = (float)FUN_140e78f90(auVar18._0_8_,(float)(double)CONCAT44(uVar21,uVar15));
    FUN_140162c50(&local_2d8,(double)fVar14);
    local_328 = 0x23;
    if ((int)local_a8[0] < 3) {
      puVar12 = &DAT_1419df7b0;
    }
    else {
      puVar12 = (undefined8 *)local_a0[2];
    }
    if ((*(uint *)((longlong)puVar12 + 0xc) & 0xffffff) == 0) {
      uVar15 = (undefined4)*puVar12;
      uVar21 = (undefined4)((ulonglong)*puVar12 >> 0x20);
    }
    else {
      uVar9 = FUN_140e4b060();
      uVar15 = (undefined4)uVar9;
      uVar21 = (undefined4)((ulonglong)uVar9 >> 0x20);
    }
    if ((int)local_a8[0] < 5) {
      puVar11 = &DAT_1419df7b0;
    }
    else {
      puVar11 = (ulonglong *)local_a0[4];
    }
    if ((*(uint *)((longlong)puVar11 + 0xc) & 0xffffff) == 0) {
      auVar19._8_8_ = 0;
      auVar19._0_8_ = *puVar11;
    }
    else {
      auVar19._0_8_ = FUN_140e4b060();
      auVar19._8_8_ = extraout_XMM0_Qb_02;
    }
    auVar20._4_12_ = auVar19._4_12_;
    auVar20._0_4_ = (float)auVar19._0_8_;
    fVar14 = (float)FUN_140e79010(auVar20._0_8_,(float)(double)CONCAT44(uVar21,uVar15));
    FUN_140162c50(&local_2e8,(double)fVar14);
    local_328 = 0x24;
    uStack_2bc = 0xd;
    local_2c8 = 0;
    iVar5 = FUN_140e851f0(&local_208,&local_2c8,DAT_141955260,0);
    if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    if (iVar5 == 0) {
      local_328 = 0x25;
      if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      local_358 = 0;
      local_350 = 0;
      local_34c = 5;
      local_258 = &local_168;
      local_250 = &local_2d8;
      local_248 = &local_2e8;
      uVar22 = CONCAT44(uVar23,DAT_1419f7108);
      plVar7 = (longlong *)FUN_140e634e0(param_1,param_2,&local_358,3,uVar22,&local_258);
      if (plVar7 != &local_158) {
        local_348 = *plVar7;
        uStack_340 = plVar7[1];
        if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_348);
      }
      local_328 = 0x26;
      local_ec = 0;
      local_f8 = 0;
      iVar5 = FUN_140e851f0(&local_158,&local_f8,DAT_141955260,1);
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      uVar23 = (undefined4)(uVar22 >> 0x20);
      if (iVar5 < 1) goto LAB_1404411dc;
      local_328 = 0x27;
      while( true ) {
        uVar15 = (undefined4)(uVar22 >> 0x20);
        if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_358);
        }
        local_358 = 0;
        local_350 = 0;
        local_34c = 5;
        local_258 = &local_168;
        local_250 = &local_2d8;
        local_248 = &local_2e8;
        pplVar24 = &local_258;
        uVar22 = CONCAT44(uVar15,DAT_1419f7108);
        uVar9 = FUN_140e634e0(param_1,param_2,&local_358,3,uVar22,pplVar24);
        cVar4 = FUN_140e491e0(uVar9);
        if (cVar4 == '\0') break;
        local_328 = 0x28;
        if ((int)local_a8[0] < 3) {
          puVar12 = &DAT_1419df7b0;
        }
        else {
          puVar12 = (undefined8 *)local_a0[2];
        }
        if ((*(uint *)((longlong)puVar12 + 0xc) & 0xffffff) != 0) {
          FUN_140e4b060();
        }
        fVar14 = (float)FUN_140e78f90();
        uStack_300 = uStack_300 & 0xffffffff;
        local_308 = (double)fVar14;
        FUN_1400462a0(&local_2d8,&local_308);
        if ((1 << ((byte)(uStack_300 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_308);
        }
        local_328 = 0x29;
        if ((int)local_a8[0] < 3) {
          puVar12 = &DAT_1419df7b0;
        }
        else {
          puVar12 = (undefined8 *)local_a0[2];
        }
        if ((*(uint *)((longlong)puVar12 + 0xc) & 0xffffff) != 0) {
          FUN_140e4b060();
        }
        fVar14 = (float)FUN_140e79010();
        local_25c = 0;
        local_268 = (double)fVar14;
        FUN_1400462a0(&local_2e8,&local_268);
        if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
      }
      local_328 = 0x2b;
      uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f70e8);
      if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      local_28c = 10;
      local_298 = 1;
      FUN_140e87930(uVar9,DAT_1419f0378,0x80000000,&local_298);
      local_328 = 0x2c;
      uStack_340 = CONCAT44(uStack_14c,uStack_150);
      local_348 = local_158;
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      FUN_140041b80(&local_278,&local_348);
      uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f70e8);
      FUN_140e87930(uVar9,DAT_141a57830,0x80000000,&local_278);
      local_328 = 0x2d;
      uStack_340 = CONCAT44(uStack_2cc,uStack_2d0);
      local_348 = local_2d8;
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      FUN_140041b80(&local_2a8,&local_348);
      uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f70e8);
      FUN_140e86c30(uVar9,DAT_1419fe0e8,0x80000000,&local_2a8);
      local_328 = 0x2e;
      goto LAB_140442413;
    }
LAB_1404411dc:
    local_328 = 0x32;
    if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    local_358 = 0;
    local_350 = 0;
    local_34c = 5;
    if ((int)local_a8[0] < 6) {
      plVar7 = &DAT_1419df7b0;
LAB_14044122c:
      local_348 = *plVar7;
      uStack_340 = plVar7[1];
      if ((1 << ((byte)local_1f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1f8);
      }
      FUN_140041b80(local_1f8,&local_348);
    }
    else {
      plVar7 = (longlong *)local_a0[5];
      if (plVar7 != local_1f8) goto LAB_14044122c;
    }
    local_258 = local_1f8;
    pplVar24 = &local_258;
    uVar22 = CONCAT44(uVar23,DAT_1419fdb88);
    uVar9 = FUN_140e634e0(param_1,param_2,&local_358,1,uVar22,pplVar24);
    cVar4 = FUN_140e491e0(uVar9);
    if (cVar4 != '\0') break;
    local_328 = 0x46;
    if ((int)local_a8[0] < 6) {
      puVar12 = &DAT_1419df7b0;
    }
    else {
      puVar12 = (undefined8 *)local_a0[5];
    }
    local_25c = 0;
    local_268 = -4.0;
    iVar5 = FUN_140e851f0(puVar12,&local_268,DAT_141955260,0);
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    uVar15 = (undefined4)(uVar22 >> 0x20);
    if (iVar5 != 0) {
      local_328 = 0x47;
      if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      local_358 = 0;
      local_350 = 0;
      local_34c = 5;
      local_258 = &local_2d8;
      local_250 = &local_2e8;
      if ((int)local_a8[0] < 6) {
        plVar7 = &DAT_1419df7b0;
LAB_140441bdf:
        local_348 = *plVar7;
        uStack_340 = plVar7[1];
        if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1d8);
        }
        FUN_140041b80(local_1d8,&local_348);
      }
      else {
        plVar7 = (longlong *)local_a0[5];
        if (plVar7 != local_1d8) goto LAB_140441bdf;
      }
      local_248 = local_1d8;
      if ((int)local_a8[0] < 8) {
        plVar7 = &DAT_1419df7b0;
LAB_140441c3e:
        local_348 = *plVar7;
        uStack_340 = plVar7[1];
        if ((1 << ((byte)local_1c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1c8);
        }
        FUN_140041b80(local_1c8,&local_348);
      }
      else {
        plVar7 = (longlong *)local_a0[7];
        if (plVar7 != local_1c8) goto LAB_140441c3e;
      }
      local_240 = local_1c8;
      local_348 = _DAT_1419df7c0;
      uStack_340 = lRam00000001419df7c8;
      if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b8);
      }
      FUN_140041b80(local_1b8,&local_348);
      local_238 = local_1b8;
      uVar22 = CONCAT44(uVar15,DAT_1419f70b8);
      plVar7 = (longlong *)FUN_140e634e0(param_1,param_2,&local_358,5,uVar22,&local_258);
      if (plVar7 != &local_288) {
        local_348 = *plVar7;
        uStack_340 = plVar7[1];
        if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        FUN_140041b80(&local_288,&local_348);
      }
      local_328 = 0x48;
      uStack_300 = uStack_300 & 0xffffffff;
      local_308 = -4.0;
      iVar5 = FUN_140e851f0(&local_288,&local_308,DAT_141955260,0);
      if ((1 << ((byte)(uStack_300 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_308);
      }
      if (iVar5 != 0) {
        local_328 = 0x49;
        goto LAB_140441d90;
      }
    }
  } while( true );
  local_328 = 0x33;
  local_98 = 0;
  uStack_8c = 0xd;
  local_348 = 0;
  uStack_340 = CONCAT44(0xd,uStack_90);
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_348);
  local_328 = 0x35;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2ec = 0;
  local_2f8 = 0.0;
  bVar3 = true;
  do {
    iVar5 = 0;
    if (!bVar3) {
      local_328 = 0x35;
      uVar6 = local_2ec & 0xffffff;
      if ((local_2ec & 0xffffff) != 0) {
        if (uVar6 != 1) {
          if (uVar6 == 7) {
            local_2f8 = (double)CONCAT44(local_2f8._4_4_,local_2f8._0_4_ + 1);
          }
          else if (uVar6 == 10) {
            local_2f8 = (double)((longlong)local_2f8 + 1);
          }
          else {
            if (uVar6 == 0xd) goto LAB_140441382;
            FUN_140042910(&DAT_14172c3d8,&local_2f8,&local_2f8);
          }
          goto LAB_14044138e;
        }
        local_2f8 = (double)FUN_140e4b060(&local_2f8);
LAB_140441382:
        local_2ec = 0;
      }
      local_2f8 = local_2f8 + 1.0;
    }
LAB_14044138e:
    bVar3 = false;
    if ((int)local_a8[0] < 6) {
      plVar7 = &DAT_1419df7b0;
    }
    else {
      plVar7 = (longlong *)local_a0[5];
    }
    if ((*(int *)((longlong)plVar7 + 0xc) == 2) && (*plVar7 != 0)) {
      iVar5 = *(int *)(*plVar7 + 0x24);
    }
    local_dc = 0;
    local_e8 = (double)iVar5;
    iVar5 = FUN_140e851f0(&local_2f8,&local_e8,DAT_141955260,1);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    if (iVar5 == -2 || -1 < iVar5) goto LAB_140441afe;
    local_328 = 0x36;
    iVar5 = FUN_140e4a740(&local_2f8);
    uVar15 = (undefined4)(uVar22 >> 0x20);
    if ((int)local_a8[0] < 6) {
      plVar7 = &DAT_1419df7b0;
    }
    else {
      plVar7 = (longlong *)local_a0[5];
    }
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar7 != &local_148) {
      local_348 = *plVar7;
      uStack_340 = plVar7[1];
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_348);
    }
    local_328 = 0x37;
    if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    local_358 = 0;
    local_350 = 0;
    local_34c = 5;
    local_258 = &local_2d8;
    local_250 = &local_2e8;
    local_248 = &local_148;
    if ((int)local_a8[0] < 8) {
      plVar7 = &DAT_1419df7b0;
LAB_14044154a:
      local_348 = *plVar7;
      uStack_340 = plVar7[1];
      if ((1 << ((byte)local_1c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1c8);
      }
      FUN_140041b80(local_1c8,&local_348);
    }
    else {
      plVar7 = (longlong *)local_a0[7];
      if (plVar7 != local_1c8) goto LAB_14044154a;
    }
    local_240 = local_1c8;
    local_348 = _DAT_1419df7c0;
    uStack_340 = lRam00000001419df7c8;
    if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_348);
    local_238 = local_1b8;
    pplVar24 = &local_258;
    uVar22 = CONCAT44(uVar15,DAT_1419f70b8);
    plVar7 = (longlong *)FUN_140e634e0(param_1,param_2,&local_358,5,uVar22,pplVar24);
    if (plVar7 != &local_288) {
      local_348 = *plVar7;
      uStack_340 = plVar7[1];
      if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_348);
    }
    local_328 = 0x38;
    local_cc = 0;
    local_d8 = 0xc010000000000000;
    iVar5 = FUN_140e851f0(&local_288,&local_d8,DAT_141955260,0);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
  } while (iVar5 == 0);
  local_328 = 0x39;
LAB_1404416b0:
  uVar15 = (undefined4)(uVar22 >> 0x20);
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_358 = 0;
  local_350 = 0;
  local_34c = 5;
  local_258 = &local_2d8;
  local_250 = &local_2e8;
  local_248 = &local_148;
  if ((int)local_a8[0] < 8) {
    plVar7 = &DAT_1419df7b0;
LAB_140441717:
    local_348 = *plVar7;
    uStack_340 = plVar7[1];
    if ((1 << ((byte)local_1c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_348);
  }
  else {
    plVar7 = (longlong *)local_a0[7];
    if (plVar7 != local_1c8) goto LAB_140441717;
  }
  local_240 = local_1c8;
  local_348 = _DAT_1419df7c0;
  uStack_340 = lRam00000001419df7c8;
  if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_348);
  local_238 = local_1b8;
  pplVar24 = &local_258;
  uVar22 = CONCAT44(uVar15,DAT_1419f70b8);
  uVar9 = FUN_140e634e0(param_1,param_2,&local_358,5,uVar22,pplVar24);
  local_bc = 0;
  local_c8 = 0xc010000000000000;
  iVar5 = FUN_140e851f0(uVar9,&local_c8,DAT_141955260,0);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (iVar5 != 0) {
    local_328 = 0x3a;
    if ((int)local_a8[0] < 3) {
      puVar12 = &DAT_1419df7b0;
    }
    else {
      puVar12 = (undefined8 *)local_a0[2];
    }
    if ((*(uint *)((longlong)puVar12 + 0xc) & 0xffffff) != 0) {
      FUN_140e4b060();
    }
    fVar14 = (float)FUN_140e78f90();
    local_ac = 0;
    local_b8 = (double)fVar14;
    FUN_1400462a0(&local_2d8,&local_b8);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_328 = 0x3b;
    if ((int)local_a8[0] < 3) {
      puVar12 = &DAT_1419df7b0;
    }
    else {
      puVar12 = (undefined8 *)local_a0[2];
    }
    if ((*(uint *)((longlong)puVar12 + 0xc) & 0xffffff) != 0) {
      FUN_140e4b060();
    }
    fVar14 = (float)FUN_140e79010();
    local_16c = 0;
    local_178 = (double)fVar14;
    FUN_1400462a0(&local_2e8,&local_178);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    goto LAB_1404416b0;
  }
  local_328 = 0x3d;
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f70e8);
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_28c = 10;
  local_298 = 2;
  FUN_140e87930(uVar9,DAT_1419f0378,0x80000000,&local_298);
  local_328 = 0x3e;
  uStack_340 = CONCAT44(uStack_27c,uStack_280);
  local_348 = local_288;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  FUN_140041b80(&local_278,&local_348);
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f70e8);
  FUN_140e87930(uVar9,DAT_141a57830,0x80000000,&local_278);
  local_328 = 0x3f;
  uStack_340 = CONCAT44(uStack_2cc,uStack_2d0);
  local_348 = local_2d8;
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  FUN_140041b80(&local_2a8,&local_348);
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f70e8);
  FUN_140e86c30(uVar9,DAT_1419fe0e8,0x80000000,&local_2a8);
  local_328 = 0x40;
  uStack_340 = CONCAT44(uStack_2dc,uStack_2e0);
  local_348 = local_2e8;
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  FUN_140041b80(&local_2b8,&local_348);
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f70e8);
  FUN_140e86c30(uVar9,DAT_1419fe158,0x80000000,&local_2b8);
  local_328 = 0x41;
  local_318 = 0x3ff0000000000000;
  uVar15 = (undefined4)uStack_310;
  uStack_310 = CONCAT44(0xd,uVar15);
  local_348 = 0x3ff0000000000000;
  uStack_340 = CONCAT44(0xd,uVar15);
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_348);
LAB_140441afe:
  local_328 = 0x45;
  cVar4 = FUN_140e491e0(&local_218);
  if (cVar4 != '\0') goto LAB_14044246d;
  goto LAB_140440e20;
LAB_140441d90:
  uVar15 = (undefined4)(uVar22 >> 0x20);
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_358 = 0;
  local_350 = 0;
  local_34c = 5;
  local_258 = &local_2d8;
  local_250 = &local_2e8;
  if ((int)local_a8[0] < 6) {
    plVar7 = &DAT_1419df7b0;
LAB_14044209a:
    local_348 = *plVar7;
    uStack_340 = plVar7[1];
    if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_348);
  }
  else {
    plVar7 = (longlong *)local_a0[5];
    if (plVar7 != local_1d8) goto LAB_14044209a;
  }
  local_248 = local_1d8;
  if ((int)local_a8[0] < 8) {
    plVar7 = &DAT_1419df7b0;
LAB_1404420f9:
    local_348 = *plVar7;
    uStack_340 = plVar7[1];
    if ((1 << ((byte)local_1c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_348);
  }
  else {
    plVar7 = (longlong *)local_a0[7];
    if (plVar7 != local_1c8) goto LAB_1404420f9;
  }
  local_240 = local_1c8;
  local_348 = _DAT_1419df7c0;
  uStack_340 = lRam00000001419df7c8;
  if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_348);
  local_238 = local_1b8;
  pplVar24 = &local_258;
  uVar22 = CONCAT44(uVar15,DAT_1419f70b8);
  uVar9 = FUN_140e634e0(param_1,param_2,&local_358,5,uVar22,pplVar24);
  uStack_300 = uStack_300 & 0xffffffff;
  local_308 = -4.0;
  iVar5 = FUN_140e851f0(uVar9,&local_308,DAT_141955260,0);
  if ((1 << ((byte)(uStack_300 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  if (iVar5 == 0) {
    local_328 = 0x4d;
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f70e8);
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_28c = 10;
    local_298 = 2;
    FUN_140e87930(uVar9,DAT_1419f0378,0x80000000,&local_298);
    local_328 = 0x4e;
    uStack_340 = CONCAT44(uStack_27c,uStack_280);
    local_348 = local_288;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140041b80(&local_278,&local_348);
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f70e8);
    FUN_140e87930(uVar9,DAT_141a57830,0x80000000,&local_278);
    local_328 = 0x4f;
    uStack_340 = CONCAT44(uStack_2cc,uStack_2d0);
    local_348 = local_2d8;
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    FUN_140041b80(&local_2a8,&local_348);
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f70e8);
    FUN_140e86c30(uVar9,DAT_1419fe0e8,0x80000000,&local_2a8);
    local_328 = 0x50;
LAB_140442413:
    uStack_340 = CONCAT44(uStack_2dc,uStack_2e0);
    local_348 = local_2e8;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    FUN_140041b80(&local_2b8,&local_348);
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f70e8);
    FUN_140e86c30(uVar9,DAT_1419fe158,0x80000000,&local_2b8);
LAB_14044246d:
    local_328 = 0x55;
    plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f70e8);
    FUN_140e87440(plVar7,DAT_1419f0378,0x80000000,&local_128,uVar22 & 0xffffffffffffff00,
                  (ulonglong)pplVar24 & 0xffffffffffffff00);
    uStack_300._4_4_ = 10;
    local_308 = 0.0;
    iVar5 = FUN_140e851f0(&local_128,&local_308,DAT_141955260,0);
    if ((1 << ((byte)uStack_300._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    if (iVar5 == 0) {
      local_328 = 0x56;
      uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f70e8);
      uStack_340 = CONCAT44(uStack_2cc,uStack_2d0);
      local_348 = local_2d8;
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      FUN_140041b80(&local_2a8,&local_348);
      FUN_140e86c30(uVar9,DAT_1419fe0e8,0x80000000,&local_2a8);
      local_328 = 0x57;
      plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f70e8);
      uStack_340 = CONCAT44(uStack_2dc,uStack_2e0);
      local_348 = local_2e8;
      if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      FUN_140041b80(&local_2b8,&local_348);
      FUN_140e86c30(plVar7,DAT_1419fe158,0x80000000,&local_2b8);
    }
    local_328 = 0x5a;
    if (plVar7 != param_3) {
      local_348 = *plVar7;
      uStack_340 = plVar7[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_348);
    }
    if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    if ((1 << (local_res20 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if ((1 << (local_res8 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    _eh_vector_destructor_iterator_(local_1f8,0x10,8,FUN_140041b30);
    if (0 < (int)local_a8[0]) {
      puVar12 = local_a0;
      do {
        puVar10 = (undefined8 *)*puVar12;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar10);
        }
        *puVar10 = 0;
        *(undefined4 *)(puVar10 + 1) = 0;
        *(undefined4 *)((longlong)puVar10 + 0xc) = 5;
        puVar12 = puVar12 + 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    FUN_140e4cd60(local_a0);
    DAT_141dc7a50 = (undefined8 *)local_338;
    return param_3;
  }
  local_328 = 0x4a;
  if ((int)local_a8[0] < 3) {
    puVar12 = &DAT_1419df7b0;
  }
  else {
    puVar12 = (undefined8 *)local_a0[2];
  }
  if ((*(uint *)((longlong)puVar12 + 0xc) & 0xffffff) != 0) {
    FUN_140e4b060();
  }
  fVar14 = (float)FUN_140e78f90();
  local_25c = 0;
  local_268 = (double)fVar14;
  FUN_1400462a0(&local_2d8,&local_268);
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_328 = 0x4b;
  if ((int)local_a8[0] < 3) {
    puVar12 = &DAT_1419df7b0;
  }
  else {
    puVar12 = (undefined8 *)local_a0[2];
  }
  if ((*(uint *)((longlong)puVar12 + 0xc) & 0xffffff) != 0) {
    FUN_140e4b060();
  }
  fVar14 = (float)FUN_140e79010();
  local_16c = 0;
  local_178 = (double)fVar14;
  FUN_1400462a0(&local_2e8,&local_178);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  goto LAB_140441d90;
}

