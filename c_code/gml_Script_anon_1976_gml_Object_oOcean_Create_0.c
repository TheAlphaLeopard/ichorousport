// gml_Script_anon_1976_gml_Object_oOcean_Create_0 @ 0x140b65910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_1976_gml_Object_oOcean_Create_0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  double *pdVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  bool bVar13;
  uint uVar14;
  double *pdVar15;
  float fVar16;
  longlong *plVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  longlong *local_res8;
  longlong *local_res10;
  uint local_res18;
  code *pcVar21;
  undefined4 uVar22;
  ulonglong in_stack_fffffffffffffdb0;
  ulonglong uVar23;
  undefined1 **ppuVar24;
  undefined8 local_248;
  undefined4 uStack_240;
  uint uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  uint uStack_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  uint uStack_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  double local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  longlong local_1b8;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  double local_168;
  uint local_15c;
  double local_158;
  uint local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  
  local_res18 = 0;
  local_1f0 = "gml_Object_oMoistMantleSpear_Step_0";
  local_1e8 = 0;
  local_1f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1f8;
  pcVar21 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_118,0x10,7,FUN_1400424d0,FUN_140041b30);
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  uStack_1cc = 0xffffff;
  local_1d8 = 0.0;
  uStack_20c = 0xffffff;
  local_218 = (longlong *)0x0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_1e8 = 3;
  uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
  uStack_23c = 0;
  local_248 = (longlong *)0x3fc999999999999a;
  local_res18 = 4;
  FUN_140042560(&local_248,uVar5);
  FUN_1400460e0(uVar6,&local_248);
  local_res18 = 0;
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_1e8 = 5;
  puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
  uStack_23c = 6;
  local_248 = local_res8;
  in_stack_fffffffffffffdb0 = in_stack_fffffffffffffdb0 & 0xffffffffffffff00;
  uVar9 = (ulonglong)pcVar21 & 0xffffffffffffff00;
  FUN_140e87440(&local_248,DAT_1419fe0e8,0x80000000,&local_138,uVar9,in_stack_fffffffffffffdb0);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  uStack_23c = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_240 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
    local_248 = (longlong *)*puVar7;
  }
  else {
    FUN_1400419b0(&local_248,puVar7);
  }
  local_res18 = 8;
  FUN_140042560(&local_248,uVar5);
  FUN_1400460e0(&local_138,&local_248);
  local_res18 = 0;
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_138);
  local_1e8 = 6;
  puVar8 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
  uStack_23c = 6;
  local_248 = local_res8;
  FUN_140e87440(&local_248,DAT_1419fe158,0x80000000,&local_148,uVar9 & 0xffffffffffffff00,
                in_stack_fffffffffffffdb0 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  uStack_23c = *(undefined4 *)((longlong)puVar8 + 0xc);
  uStack_240 = *(undefined4 *)(puVar8 + 1);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
    local_248 = (longlong *)*puVar8;
  }
  else {
    FUN_1400419b0(&local_248,puVar8);
  }
  local_res18 = 0x10;
  FUN_140042560(&local_248,uVar5);
  FUN_1400460e0(&local_148,&local_248);
  local_res18 = 0;
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_148);
  local_1e8 = 8;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  uVar9 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a01b58);
  uVar23 = 0;
  FUN_140e63610(local_res8,local_res10,&local_228,0,uVar9,0);
  local_1e8 = 10;
  pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
  uStack_23c = 6;
  local_248 = local_res8;
  uVar23 = uVar23 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_248,DAT_1419fded8,0x80000000,&local_158,uVar9,uVar23);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  uStack_23c = 6;
  local_248 = local_res8;
  uVar23 = uVar23 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_248,DAT_1419fdd18,0x80000000,&local_168,uVar9,uVar23);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  uStack_23c = 6;
  local_248 = local_res8;
  uVar23 = uVar23 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_248,DAT_1419fe0e8,0x80000000,&local_1d8,uVar9,uVar23);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  uStack_23c = 6;
  local_248 = local_res8;
  uVar23 = uVar23 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_248,DAT_1419fe158,0x80000000,&local_218,uVar9,uVar23);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  uStack_23c = uStack_20c;
  uStack_240 = uStack_210;
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
    local_248 = local_218;
  }
  else {
    FUN_1400419b0(&local_248,&local_218);
  }
  local_res18 = 0x20;
  FUN_1400460e0(&local_248,puVar8);
  local_1bc = uStack_1cc;
  local_1c0 = uStack_1d0;
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
    local_1c8 = local_1d8;
  }
  else {
    FUN_1400419b0(&local_1c8,&local_1d8);
  }
  local_res18 = 0x60;
  FUN_1400460e0(&local_1c8,puVar7);
  plVar17 = local_248;
  if ((uStack_23c & 0xffffff) != 0) {
    plVar17 = (longlong *)FUN_140e4b060(&local_248);
  }
  dVar18 = local_1c8;
  if ((local_1bc & 0xffffff) != 0) {
    dVar18 = (double)FUN_140e4b060(&local_1c8);
  }
  dVar19 = local_168;
  if ((local_15c & 0xffffff) != 0) {
    dVar19 = (double)FUN_140e4b060(&local_168);
  }
  dVar20 = local_158;
  if ((local_14c & 0xffffff) != 0) {
    dVar20 = (double)FUN_140e4b060(&local_158);
  }
  fVar16 = (float)FUN_140e793d0((float)dVar20,(float)dVar19,(float)dVar18,(float)(double)plVar17);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar10);
  }
  *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
  *pdVar10 = (double)fVar16;
  local_res18 = 0x20;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_1e8 = 0xb;
  puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7f8);
  if (puVar7 != &local_188) {
    local_248 = (longlong *)*puVar7;
    uStack_240 = *(undefined4 *)(puVar7 + 1);
    uStack_23c = *(uint *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_248);
  }
  FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_188);
  local_1e8 = 0xd;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_1fc = 0;
  local_208 = 0;
  FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_208);
  local_1e8 = 0xf;
  pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a858);
  uStack_23c = 0;
  local_248 = (longlong *)0x4056800000000000;
  iVar4 = FUN_140e851f0(puVar7,&local_248,DAT_141955260,1);
  bVar13 = iVar4 != -2 && iVar4 < 0;
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if (iVar4 == -2 || iVar4 >= 0) {
    (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
    (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7f8);
    uStack_23c = 0;
    local_248 = (longlong *)0x4070e00000000000;
    iVar4 = FUN_140e851f0(uVar5,&local_248,DAT_141955260,1);
    if (iVar4 != -2) {
      bVar13 = 0 < iVar4;
    }
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    if (!bVar13) {
      uStack_23c = 0;
      local_248 = (longlong *)&DAT_bff0000000000000;
      pdVar15 = (double *)&local_248;
      uVar14 = 2;
      local_res18 = 2;
      goto LAB_140b66235;
    }
  }
  local_1bc = 0;
  local_1c8 = 1.0;
  pdVar15 = &local_1c8;
  uVar14 = 1;
  local_res18 = 1;
LAB_140b66235:
  uVar2 = local_1bc;
  uVar1 = uStack_23c;
  FUN_140e609c0(local_res8);
  if (pdVar15 != pdVar10) {
    local_238 = *(undefined4 *)pdVar15;
    uStack_234 = *(undefined4 *)((longlong)pdVar15 + 4);
    uStack_230 = *(undefined4 *)(pdVar15 + 1);
    uStack_22c = *(undefined4 *)((longlong)pdVar15 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar10);
    }
    FUN_140041b80(pdVar10,&local_238);
  }
  if (((uVar14 & 2) != 0) &&
     (uVar14 = uVar14 & 0xfffffffd, local_res18 = uVar14, (1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0))
  {
    FUN_140041a50(&local_248);
  }
  if (((uVar14 & 1) != 0) &&
     (uVar14 = uVar14 & 0xfffffffe, local_res18 = uVar14, (1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0))
  {
    FUN_140041a50(&local_1c8);
  }
  FUN_140e60910(1);
  local_1e8 = 0x11;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  uStack_23c = 6;
  local_248 = local_res8;
  uVar23 = uVar23 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_248,DAT_1419fe0e8,0x80000000,&local_1d8,uVar9,uVar23);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  uStack_23c = 6;
  local_248 = local_res8;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_248,DAT_1419fe158,0x80000000,&local_218,uVar9,uVar23 & 0xffffffffffffff00);
  uVar22 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_238 = (undefined4)local_1d8;
  uStack_234 = local_1d8._4_4_;
  uStack_230 = uStack_1d0;
  uStack_22c = uStack_1cc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_238);
  local_a8 = local_118;
  uStack_23c = uStack_20c;
  uStack_240 = uStack_210;
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
    local_248 = local_218;
  }
  else {
    FUN_1400419b0(&local_248,&local_218);
  }
  local_res18 = uVar14 | 0x80;
  local_1bc = 7;
  local_1c8 = (double)CONCAT44(local_1c8._4_4_,2);
  FUN_1400460e0(&local_248,&local_1c8);
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_238 = (undefined4)local_248;
  uStack_234 = local_248._4_4_;
  uStack_230 = uStack_240;
  uStack_22c = uStack_23c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_238);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_a0 = local_108;
  uStack_23c = 0xf;
  local_248 = (longlong *)0x100000000000149;
  local_238 = 0x149;
  uStack_234 = 0x1000000;
  uStack_230 = uStack_240;
  uStack_22c = 0xf;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_238);
  local_98 = local_f8;
  ppuVar24 = &local_a8;
  uVar9 = CONCAT44(uVar22,DAT_141a12628);
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_228,3,uVar9,ppuVar24);
  cVar3 = FUN_140e491e0(uVar5);
  if (cVar3 != '\0') {
    local_1e8 = 0x13;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    uStack_23c = 6;
    local_248 = local_res8;
    uVar23 = (ulonglong)ppuVar24 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_248,DAT_1419fe0e8,0x80000000,&local_1d8,uVar9,uVar23);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    uStack_23c = 6;
    local_248 = local_res8;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_248,DAT_1419fe158,0x80000000,&local_218,uVar9,uVar23 & 0xffffffffffffff00);
    uVar22 = (undefined4)(uVar9 >> 0x20);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_238 = (undefined4)local_1d8;
    uStack_234 = local_1d8._4_4_;
    uStack_230 = uStack_1d0;
    uStack_22c = uStack_1cc;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_238);
    local_90 = local_e8;
    local_238 = (undefined4)local_218;
    uStack_234 = local_218._4_4_;
    uStack_230 = uStack_210;
    uStack_22c = uStack_20c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_238);
    local_88 = local_d8;
    local_238 = _DAT_141dd9b98;
    uStack_234 = uRam0000000141dd9b9c;
    uStack_230 = uRam0000000141dd9ba0;
    uStack_22c = DAT_141dd9ba4;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_238);
    local_80 = local_c8;
    uStack_23c = 0xf;
    local_248 = (longlong *)0x100000000000127;
    local_238 = 0x127;
    uStack_234 = 0x1000000;
    uStack_230 = uStack_240;
    uStack_22c = 0xf;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_238);
    local_78 = local_b8;
    ppuVar24 = &local_90;
    uVar9 = CONCAT44(uVar22,DAT_141a0a7c8);
    uVar5 = FUN_140e634e0(local_res8,local_res10,&local_1a8,4,uVar9,ppuVar24);
    iVar4 = FUN_140e63cb0(&local_1c8,&local_res8,&local_res10,uVar5);
    if (0 < iVar4) {
      do {
        (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7f8);
        local_1e8 = 0x15;
        uStack_23c = 6;
        local_248 = local_res10;
        ppuVar24 = (undefined1 **)((ulonglong)ppuVar24 & 0xffffffffffffff00);
        uVar9 = uVar9 & 0xffffffffffffff00;
        FUN_140e87440(&local_248,DAT_141a0a728,0x80000000,&local_128,uVar9,ppuVar24);
        if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        local_238 = (undefined4)local_128;
        uStack_234 = local_128._4_4_;
        uStack_230 = uStack_120;
        uStack_22c = uStack_11c;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        FUN_140041b80(&local_178,&local_238);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_178);
        local_1e8 = 0x16;
        puVar11 = (undefined4 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a0a7f8);
        puVar12 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
        FUN_140e609c0(local_res8);
        if (puVar11 != puVar12) {
          local_238 = *puVar11;
          uStack_234 = puVar11[1];
          uStack_230 = puVar11[2];
          uStack_22c = puVar11[3];
          if ((1 << ((byte)puVar12[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar12);
          }
          FUN_140041b80(puVar12,&local_238);
        }
        FUN_140e60910(1);
        local_1e8 = 0x18;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_1fc = 0;
        local_208 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_208);
        local_1e8 = 0x19;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_18c = 0;
        local_198 = 0x3ff0000000000000;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_198);
        cVar3 = FUN_140e643f0(&local_1c8,&local_res8,&local_res10);
      } while (cVar3 != '\0');
    }
    FUN_140e63970(&local_1c8,&local_res8,&local_res10);
    local_1e8 = 0x1c;
    FUN_140edd0e0(local_res8,local_res10,0,0);
    if (local_1b8 != 0) {
      FUN_140e4cd60();
    }
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(local_118,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1f8;
  return;
}

