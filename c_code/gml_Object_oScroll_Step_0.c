// gml_Object_oScroll_Step_0 @ 0x140d68470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oScroll_Step_0(longlong *param_1,undefined8 param_2)

{
  longlong **pplVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined8 uVar5;
  double *pdVar6;
  byte bVar7;
  byte bVar8;
  undefined4 uVar9;
  longlong *plVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  longlong *plVar17;
  undefined4 local_res8;
  code *pcVar18;
  ulonglong uVar19;
  undefined4 uVar21;
  undefined8 uVar20;
  ulonglong in_stack_fffffffffffffdb0;
  undefined8 **ppuVar22;
  ulonglong uVar23;
  undefined8 local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  longlong *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  double local_1f8;
  byte local_1ec;
  undefined1 local_1e8 [12];
  byte local_1dc;
  double local_1d8;
  byte local_1cc;
  double local_1c8;
  byte local_1bc;
  double local_1b8;
  byte local_1ac;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  double local_198;
  uint local_18c;
  double local_188;
  uint local_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  double *local_140;
  undefined1 *local_138;
  double *local_130;
  double *local_128;
  double *local_120;
  longlong *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  longlong *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  double local_f8;
  uint local_ec;
  double local_e8;
  uint local_dc;
  double local_d8;
  uint local_cc;
  double local_c8;
  uint local_bc;
  double local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  local_170 = "gml_Object_oScreenRibbon_Draw_64";
  local_168 = 0;
  local_178 = DAT_141dc7a50;
  pcVar18 = FUN_140041b30;
  DAT_141dc7a50 = &local_178;
  _eh_vector_constructor_iterator_(&local_1f8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_19c = 0xffffff;
  local_1a8 = (longlong *)0x0;
  local_res8 = 0xffffff;
  local_fc = 0xffffff;
  local_108 = (longlong *)0x0;
  local_10c = 0xffffff;
  local_118 = (longlong *)0x0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_bc = 0xffffff;
  local_c8 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0.0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_168 = 3;
  uStack_1fc = 6;
  uVar19 = (ulonglong)pcVar18 & 0xffffffffffffff00;
  local_208 = param_1;
  FUN_140e87440(&local_208,DAT_141a0a728,0x80000000,&local_1a8,uVar19,
                in_stack_fffffffffffffdb0 & 0xffffffffffffff00);
  uVar9 = (undefined4)(uVar19 >> 0x20);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_228 = local_1a8;
  uStack_220 = uStack_1a0;
  uStack_21c = uStack_19c;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_228);
  local_140 = &local_1f8;
  ppuVar22 = &local_140;
  uVar19 = CONCAT44(uVar9,DAT_141a047c8);
  pplVar1 = (longlong **)FUN_140e634e0(param_1,param_2,&local_218,1,uVar19,ppuVar22);
  plVar17 = (longlong *)0x0;
  if (pplVar1 != &local_108) {
    local_228 = *pplVar1;
    uStack_220 = *(undefined4 *)(pplVar1 + 1);
    uStack_21c = *(uint *)((longlong)pplVar1 + 0xc);
    FUN_140041b80(&local_108,&local_228);
    local_res8 = local_fc;
    plVar17 = local_108;
  }
  local_168 = 4;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  uStack_1fc = 6;
  uVar19 = uVar19 & 0xffffffffffffff00;
  local_208 = param_1;
  FUN_140e87440(&local_208,DAT_141a0a728,0x80000000,&local_1a8,uVar19,
                (ulonglong)ppuVar22 & 0xffffffffffffff00);
  uVar9 = (undefined4)(uVar19 >> 0x20);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_228 = local_1a8;
  uStack_220 = uStack_1a0;
  uStack_21c = uStack_19c;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_228);
  local_140 = &local_1f8;
  uVar5 = CONCAT44(uVar9,DAT_141a04808);
  pplVar1 = (longlong **)FUN_140e634e0(param_1,param_2,&local_218,1,uVar5,&local_140);
  uVar21 = (undefined4)((ulonglong)uVar5 >> 0x20);
  plVar10 = (longlong *)0x0;
  uVar9 = 0xffffff;
  if (pplVar1 != &local_118) {
    local_228 = *pplVar1;
    uStack_220 = *(undefined4 *)(pplVar1 + 1);
    uStack_21c = *(uint *)((longlong)pplVar1 + 0xc);
    FUN_140041b80(&local_118,&local_228);
    plVar10 = local_118;
    uVar9 = local_10c;
  }
  local_168 = 5;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04448);
  uStack_1fc = local_res8;
  uStack_200 = local_100;
  bVar7 = (byte)local_res8 & 0x1f;
  if ((1 << bVar7 & 0x46U) == 0) {
    local_208 = plVar17;
  }
  else {
    FUN_1400419b0(&local_208,&local_108);
  }
  uStack_21c = 7;
  local_228 = (longlong *)CONCAT44(local_228._4_4_,2);
  FUN_140042560(&local_208,&local_228);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = local_208;
  uStack_220 = uStack_200;
  uStack_21c = uStack_1fc;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_228);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_140 = &local_1f8;
  uStack_200 = local_110;
  bVar8 = (byte)uVar9 & 0x1f;
  uStack_1fc = uVar9;
  if ((1 << bVar8 & 0x46U) == 0) {
    local_208 = plVar10;
  }
  else {
    FUN_1400419b0(&local_208,&local_118);
  }
  uStack_21c = 7;
  local_228 = (longlong *)CONCAT44(local_228._4_4_,2);
  FUN_140042560(&local_208,&local_228);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = local_208;
  uStack_220 = uStack_200;
  uStack_21c = uStack_1fc;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_228);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_138 = local_1e8;
  FUN_140e609c0(param_1);
  uVar5 = CONCAT44(uVar21,DAT_141a04a78);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_218,2,uVar5,&local_140);
  uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar3 != puVar2) {
    local_228 = (longlong *)*puVar3;
    uStack_220 = *(undefined4 *)(puVar3 + 1);
    uStack_21c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_228);
  }
  FUN_140e60910(1);
  local_168 = 7;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04448);
  if (pdVar4 != &local_1f8) {
    local_228 = (longlong *)*pdVar4;
    uStack_220 = *(undefined4 *)(pdVar4 + 1);
    uStack_21c = *(undefined4 *)((longlong)pdVar4 + 0xc);
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_228);
  }
  local_140 = &local_1f8;
  uVar20 = CONCAT44(uVar9,DAT_141a047b8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_218,1,uVar20,&local_140);
  uVar9 = (undefined4)((ulonglong)uVar20 >> 0x20);
  pdVar6 = (double *)FUN_14018a720(&local_228,uVar5,2);
  if (pdVar6 != &local_188) {
    local_208 = (longlong *)*pdVar6;
    uStack_200 = *(undefined4 *)(pdVar6 + 1);
    uStack_1fc = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_208);
  }
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_168 = 8;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  if (pdVar4 != &local_1f8) {
    local_228 = (longlong *)*pdVar4;
    uStack_220 = *(undefined4 *)(pdVar4 + 1);
    uStack_21c = *(undefined4 *)((longlong)pdVar4 + 0xc);
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_228);
  }
  local_140 = &local_1f8;
  uVar20 = CONCAT44(uVar9,DAT_141a04548);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_218,1,uVar20,&local_140);
  uVar9 = (undefined4)((ulonglong)uVar20 >> 0x20);
  pdVar6 = (double *)FUN_14018a720(&local_228,uVar5,2);
  if (pdVar6 != &local_198) {
    local_208 = (longlong *)*pdVar6;
    uStack_200 = *(undefined4 *)(pdVar6 + 1);
    uStack_1fc = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_208);
  }
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_168 = 10;
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar11 = *pdVar4;
  }
  else {
    dVar11 = (double)FUN_140e4b060(pdVar4);
  }
  FUN_140ec60c0((longlong)dVar11,0xffffffff);
  local_168 = 0xb;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  local_228 = (longlong *)CONCAT44(uRam0000000141dc7694,_DAT_141dc7690);
  uStack_220 = uRam0000000141dc7698;
  uStack_21c = uRam0000000141dc769c;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_228);
  local_140 = &local_1f8;
  local_228 = (longlong *)CONCAT44(uRam0000000141dc7694,_DAT_141dc7690);
  uStack_220 = uRam0000000141dc7698;
  uStack_21c = uRam0000000141dc769c;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_228);
  local_138 = local_1e8;
  ppuVar22 = &local_140;
  uVar19 = CONCAT44(uVar9,DAT_141a04558);
  FUN_140e634e0(param_1,param_2,&local_218,2,uVar19,ppuVar22);
  local_168 = 0xd;
  uStack_21c = 6;
  uVar23 = (ulonglong)ppuVar22 & 0xffffffffffffff00;
  uVar19 = uVar19 & 0xffffffffffffff00;
  local_228 = param_1;
  FUN_140e87440(&local_228,DAT_141a0a728,0x80000000,&local_1a8,uVar19,uVar23);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  uStack_21c = 6;
  uVar23 = uVar23 & 0xffffffffffffff00;
  uVar19 = uVar19 & 0xffffffffffffff00;
  local_228 = param_1;
  FUN_140e87440(&local_228,DAT_141a0cfc8,0x80000000,&local_c8,uVar19,uVar23);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  uStack_21c = 6;
  uVar23 = uVar23 & 0xffffffffffffff00;
  uVar19 = uVar19 & 0xffffffffffffff00;
  local_228 = param_1;
  FUN_140e87440(&local_228,DAT_141a0f7f8,0x80000000,&local_d8,uVar19,uVar23);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  uStack_21c = 6;
  uVar23 = uVar23 & 0xffffffffffffff00;
  uVar19 = uVar19 & 0xffffffffffffff00;
  local_228 = param_1;
  FUN_140e87440(&local_228,DAT_141a0f938,0x80000000,&local_e8,uVar19,uVar23);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  uStack_21c = 6;
  uVar23 = uVar23 & 0xffffffffffffff00;
  uVar19 = uVar19 & 0xffffffffffffff00;
  local_228 = param_1;
  FUN_140e87440(&local_228,DAT_141a0a778,0x80000000,&local_f8,uVar19,uVar23);
  uVar9 = (undefined4)(uVar19 >> 0x20);
  uVar21 = (undefined4)(uVar23 >> 0x20);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  dVar11 = local_f8;
  if ((local_ec & 0xffffff) != 0) {
    dVar11 = (double)FUN_140e4b060(&local_f8);
  }
  dVar12 = local_e8;
  if ((local_dc & 0xffffff) != 0) {
    dVar12 = (double)FUN_140e4b060(&local_e8);
  }
  dVar13 = local_d8;
  if ((local_cc & 0xffffff) != 0) {
    dVar13 = (double)FUN_140e4b060(&local_d8);
  }
  dVar14 = local_198;
  if ((local_18c & 0xffffff) != 0) {
    dVar14 = (double)FUN_140e4b060(&local_198);
  }
  dVar15 = local_188;
  if ((local_17c & 0xffffff) != 0) {
    dVar15 = (double)FUN_140e4b060(&local_188);
  }
  dVar16 = local_c8;
  if ((local_bc & 0xffffff) != 0) {
    dVar16 = (double)FUN_140e4b060(&local_c8);
  }
  plVar17 = local_1a8;
  if ((uStack_19c & 0xffffff) != 0) {
    plVar17 = (longlong *)FUN_140e4b060(&local_1a8);
  }
  uVar23 = CONCAT44(uVar21,(float)dVar13);
  uVar19 = CONCAT44(uVar9,(float)dVar14);
  FUN_140ec5dd0(param_1,(longlong)(double)plVar17,(float)dVar16,(float)dVar15,uVar19,uVar23,
                (float)dVar12,(float)dVar11,0xffffff,0x3f800000);
  local_168 = 0x19;
  FUN_140ec7870();
  local_168 = 0x1b;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  local_150 = 0;
  local_148 = 0;
  local_144 = 5;
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  local_160 = 0;
  local_158 = 0;
  local_154 = 5;
  uStack_21c = 6;
  uVar23 = uVar23 & 0xffffffffffffff00;
  uVar19 = uVar19 & 0xffffffffffffff00;
  local_228 = param_1;
  FUN_140e87440(&local_228,DAT_1419fe0e8,0x80000000,&local_a8,uVar19,uVar23);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = (longlong *)local_a8;
  uStack_220 = uStack_a0;
  uStack_21c = uStack_9c;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_228);
  local_140 = &local_1f8;
  uStack_21c = 6;
  uVar19 = uVar19 & 0xffffffffffffff00;
  local_228 = param_1;
  FUN_140e87440(&local_228,DAT_1419fe158,0x80000000,&local_b8,uVar19,uVar23 & 0xffffffffffffff00);
  uVar9 = (undefined4)(uVar19 >> 0x20);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = (longlong *)local_b8;
  uStack_220 = uStack_b0;
  uStack_21c = uStack_ac;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_228);
  local_138 = local_1e8;
  if (pdVar4 != &local_1d8) {
    local_228 = (longlong *)*pdVar4;
    uStack_220 = *(undefined4 *)(pdVar4 + 1);
    uStack_21c = *(undefined4 *)((longlong)pdVar4 + 0xc);
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_228);
  }
  local_130 = &local_1d8;
  uVar5 = CONCAT44(uVar9,DAT_1419fe728);
  pdVar6 = (double *)FUN_140e634e0(param_1,param_2,&local_150,1,uVar5,&local_140);
  uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (pdVar6 != &local_1c8) {
    local_228 = (longlong *)*pdVar6;
    uStack_220 = *(undefined4 *)(pdVar6 + 1);
    uStack_21c = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_228);
  }
  local_128 = &local_1c8;
  uVar5 = CONCAT44(uVar9,DAT_1419fe728);
  pdVar6 = (double *)FUN_140e634e0(param_1,param_2,&local_160,1,uVar5,&local_138);
  uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (pdVar6 != &local_1b8) {
    local_228 = (longlong *)*pdVar6;
    uStack_220 = *(undefined4 *)(pdVar6 + 1);
    uStack_21c = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_228);
  }
  local_120 = &local_1b8;
  uVar5 = CONCAT44(uVar9,DAT_141a049d8);
  FUN_140e634e0(param_1,param_2,&local_218,3,uVar5,&local_130);
  uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_168 = 0x1d;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  if (pdVar4 != &local_1f8) {
    local_228 = (longlong *)*pdVar4;
    uStack_220 = *(undefined4 *)(pdVar4 + 1);
    uStack_21c = *(undefined4 *)((longlong)pdVar4 + 0xc);
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_228);
  }
  local_140 = &local_1f8;
  FUN_140e634e0(param_1,param_2,&local_218,1,CONCAT44(uVar9,DAT_141a04918),&local_140);
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << bVar8 & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << bVar7 & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  _eh_vector_destructor_iterator_(&local_1f8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return;
}

