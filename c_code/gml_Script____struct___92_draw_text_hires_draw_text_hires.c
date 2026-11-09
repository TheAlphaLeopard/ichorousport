// gml_Script____struct___92_draw_text_hires_draw_text_hires @ 0x14027a6a0

undefined8 *
gml_Script____struct___92_draw_text_hires_draw_text_hires
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  double *pdVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined8 *puVar7;
  double *pdVar8;
  ulonglong uVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar19;
  undefined8 uVar18;
  undefined8 **ppuVar20;
  undefined4 uVar21;
  double local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  double local_218;
  undefined4 uStack_210;
  uint uStack_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  double local_1f8;
  undefined4 local_1f0;
  uint local_1ec;
  double local_1e8;
  undefined4 local_1e0;
  uint local_1dc;
  double local_1d8;
  undefined4 local_1d0;
  uint local_1cc;
  double local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  double local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  double local_1a8;
  undefined4 local_1a0;
  uint local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  double local_188;
  uint local_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  double local_158;
  byte local_14c;
  double local_148;
  byte local_13c;
  double local_138;
  byte local_12c;
  double local_128;
  byte local_11c;
  double local_118;
  byte local_10c;
  uint local_d8 [2];
  undefined8 *local_d0;
  double *local_c8;
  double *local_c0;
  double *local_b8;
  double *local_b0;
  double *local_a8 [16];
  
  local_170 = "gml_Script_draw_line_sprite";
  local_178 = DAT_141dc7a50;
  local_168 = 2;
  DAT_141dc7a50 = &local_178;
  FUN_140041df0(local_d8,param_4,8,param_5);
  uVar19 = 1;
  _eh_vector_constructor_iterator_(&local_158,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_1ec = 0xffffff;
  local_1f8 = 0.0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  local_1fc = 0;
  local_208 = 0;
  local_18c = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_168 = 2;
  pdVar8 = (double *)&DAT_1419df7b0;
  uVar9 = (ulonglong)local_d8[0];
  if ((int)local_d8[0] < 6) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_d0[5];
  }
  iVar2 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_168 = 2;
    if ((int)local_d8[0] < 6) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)local_d0[5];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0x3ff0000000000000;
  }
  if ((int)local_d8[0] < 7) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_d0[6];
  }
  iVar2 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    if ((int)local_d8[0] < 7) {
      pdVar6 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar6 = (double *)local_d0[6];
    }
    uVar5 = CONCAT44(uVar19,DAT_141a57800);
    pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_208,0,uVar5,0);
    uVar19 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (pdVar4 != pdVar6) {
      local_228 = *pdVar4;
      uStack_220 = *(undefined4 *)(pdVar4 + 1);
      uStack_21c = *(undefined4 *)((longlong)pdVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar6);
      }
      FUN_140041b80(pdVar6,&local_228);
    }
  }
  if ((int)local_d8[0] < 8) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_d0[7];
  }
  iVar2 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    if ((int)local_d8[0] < 8) {
      pdVar6 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar6 = (double *)local_d0[7];
    }
    uVar5 = CONCAT44(uVar19,DAT_1419fe828);
    pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_208,0,uVar5,0);
    uVar19 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (pdVar4 != pdVar6) {
      local_228 = *pdVar4;
      uStack_220 = *(undefined4 *)(pdVar4 + 1);
      uStack_21c = *(undefined4 *)((longlong)pdVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar6);
      }
      FUN_140041b80(pdVar6,&local_228);
    }
  }
  local_168 = 3;
  if ((int)local_d8[0] < 6) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_d0[5];
  }
  uStack_20c = 0;
  local_218 = 0.0;
  iVar2 = FUN_140e851f0(puVar7,&local_218,DAT_141955260,0);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if (iVar2 == 0) {
    local_168 = 3;
    goto LAB_14027b339;
  }
  local_168 = 4;
  if ((int)local_d8[0] < 5) {
    pdVar6 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar6 = (double *)local_d0[4];
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar11 = *pdVar6;
  }
  else {
    dVar11 = (double)FUN_140e4b060();
  }
  if ((int)local_d8[0] < 4) {
    pdVar6 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar6 = (double *)local_d0[3];
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar12 = *pdVar6;
  }
  else {
    dVar12 = (double)FUN_140e4b060();
  }
  if ((int)local_d8[0] < 3) {
    pdVar6 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar6 = (double *)local_d0[2];
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar13 = *pdVar6;
  }
  else {
    dVar13 = (double)FUN_140e4b060();
  }
  if ((int)local_d8[0] < 2) {
    pdVar6 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar6 = (double *)local_d0[1];
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar14 = *pdVar6;
  }
  else {
    dVar14 = (double)FUN_140e4b060();
  }
  fVar10 = (float)FUN_140e793d0((float)dVar14,(float)dVar13,(float)dVar12,(float)dVar11);
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1ec = 0;
  local_1f8 = (double)fVar10;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  if ((int)local_d8[0] < 2) {
    pdVar6 = (double *)&DAT_1419df7b0;
LAB_14027ab55:
    local_228 = *pdVar6;
    uStack_220 = *(undefined4 *)(pdVar6 + 1);
    uStack_21c = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_228);
  }
  else {
    pdVar6 = (double *)local_d0[1];
    if (pdVar6 != &local_158) goto LAB_14027ab55;
  }
  local_c8 = &local_158;
  if ((int)local_d8[0] < 3) {
    pdVar6 = (double *)&DAT_1419df7b0;
LAB_14027aba7:
    local_228 = *pdVar6;
    uStack_220 = *(undefined4 *)(pdVar6 + 1);
    uStack_21c = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_228);
  }
  else {
    pdVar6 = (double *)local_d0[2];
    if (pdVar6 != &local_148) goto LAB_14027aba7;
  }
  local_c0 = &local_148;
  if ((int)local_d8[0] < 4) {
    pdVar6 = (double *)&DAT_1419df7b0;
LAB_14027abf9:
    local_228 = *pdVar6;
    uStack_220 = *(undefined4 *)(pdVar6 + 1);
    uStack_21c = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_228);
  }
  else {
    pdVar6 = (double *)local_d0[3];
    if (pdVar6 != &local_138) goto LAB_14027abf9;
  }
  local_b8 = &local_138;
  if ((int)local_d8[0] < 5) {
    pdVar6 = (double *)&DAT_1419df7b0;
LAB_14027ac4b:
    local_228 = *pdVar6;
    uStack_220 = *(undefined4 *)(pdVar6 + 1);
    uStack_21c = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_228);
  }
  else {
    pdVar6 = (double *)local_d0[4];
    if (pdVar6 != &local_128) goto LAB_14027ac4b;
  }
  local_b0 = &local_128;
  if ((int)local_d8[0] < 1) {
    pdVar6 = (double *)&DAT_1419df7b0;
LAB_14027ac9b:
    local_228 = *pdVar6;
    uStack_220 = *(undefined4 *)(pdVar6 + 1);
    uStack_21c = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_228);
  }
  else {
    pdVar6 = (double *)*local_d0;
    if (pdVar6 != &local_118) goto LAB_14027ac9b;
  }
  local_a8[0] = &local_118;
  uVar18 = CONCAT44(uVar19,DAT_141a047c8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_198,1,uVar18,local_a8);
  ppuVar20 = &local_c8;
  uVar18 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),DAT_1419fd548);
  pdVar6 = (double *)FUN_140e634e0(param_1,param_2,&local_208,4,uVar18,ppuVar20);
  uVar19 = (undefined4)((ulonglong)uVar18 >> 0x20);
  uVar21 = (undefined4)((ulonglong)ppuVar20 >> 0x20);
  uStack_20c = *(undefined4 *)((longlong)pdVar6 + 0xc);
  uStack_210 = *(undefined4 *)(pdVar6 + 1);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
    local_218 = *pdVar6;
  }
  else {
    FUN_1400419b0(&local_218,pdVar6);
  }
  FUN_140046500(&local_218,uVar5);
  local_228 = local_218;
  uStack_220 = uStack_210;
  uStack_21c = uStack_20c;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_228);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_168 = 7;
  uStack_20c = local_1ec;
  uStack_210 = local_1f0;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
    local_218 = local_1f8;
  }
  else {
    FUN_1400419b0(&local_218,&local_1f8);
  }
  uStack_21c = 7;
  local_228 = (double)CONCAT44(local_228._4_4_,0x5a);
  FUN_1400460e0(&local_218,&local_228);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((int)local_d8[0] < 6) {
    pdVar6 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar6 = (double *)local_d0[5];
  }
  local_19c = *(uint *)((longlong)pdVar6 + 0xc);
  local_1a0 = *(undefined4 *)(pdVar6 + 1);
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
    local_1a8 = *pdVar6;
  }
  else {
    FUN_1400419b0(&local_1a8);
  }
  uStack_21c = 0;
  local_228 = 2.0;
  FUN_140046500(&local_1a8,&local_228);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  dVar11 = local_218;
  if ((uStack_20c & 0xffffff) != 0) {
    dVar11 = (double)FUN_140e4b060(&local_218);
  }
  dVar12 = local_1a8;
  if ((local_19c & 0xffffff) != 0) {
    dVar12 = (double)FUN_140e4b060(&local_1a8);
  }
  if ((int)local_d8[0] < 3) {
    pdVar6 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar6 = (double *)local_d0[2];
  }
  fVar10 = (float)FUN_140e79010((float)dVar12,(float)dVar11);
  local_1ac = *(uint *)((longlong)pdVar6 + 0xc);
  local_1b0 = *(undefined4 *)(pdVar6 + 1);
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
    local_1b8 = *pdVar6;
  }
  else {
    FUN_1400419b0(&local_1b8,pdVar6);
  }
  FUN_140162c50(&local_1b8,(double)fVar10);
  local_1bc = local_1ec;
  local_1c0 = local_1f0;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
    local_1c8 = local_1f8;
  }
  else {
    FUN_1400419b0(&local_1c8,&local_1f8);
  }
  uStack_21c = 7;
  local_228 = (double)CONCAT44(local_228._4_4_,0x5a);
  FUN_1400460e0(&local_1c8,&local_228);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((int)local_d8[0] < 6) {
    pdVar6 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar6 = (double *)local_d0[5];
  }
  local_1cc = *(uint *)((longlong)pdVar6 + 0xc);
  local_1d0 = *(undefined4 *)(pdVar6 + 1);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
    local_1d8 = *pdVar6;
  }
  else {
    FUN_1400419b0(&local_1d8);
  }
  uStack_21c = 0;
  local_228 = 2.0;
  FUN_140046500(&local_1d8,&local_228);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  dVar11 = local_1c8;
  if ((local_1bc & 0xffffff) != 0) {
    dVar11 = (double)FUN_140e4b060(&local_1c8);
  }
  dVar12 = local_1d8;
  if ((local_1cc & 0xffffff) != 0) {
    dVar12 = (double)FUN_140e4b060(&local_1d8);
  }
  if ((int)local_d8[0] < 2) {
    pdVar6 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar6 = (double *)local_d0[1];
  }
  fVar10 = (float)FUN_140e78f90((float)dVar12,(float)dVar11);
  local_1dc = *(uint *)((longlong)pdVar6 + 0xc);
  local_1e0 = *(undefined4 *)(pdVar6 + 1);
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
    local_1e8 = *pdVar6;
  }
  else {
    FUN_1400419b0(&local_1e8,pdVar6);
  }
  FUN_140162c50(&local_1e8,(double)fVar10);
  if ((int)local_d8[0] < 8) {
    pdVar6 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar6 = (double *)local_d0[7];
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar11 = *pdVar6;
  }
  else {
    dVar11 = (double)FUN_140e4b060();
  }
  if ((int)local_d8[0] < 7) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_d0[6];
  }
  uVar3 = FUN_140e4a8b0(puVar7);
  dVar12 = local_1f8;
  if ((local_1ec & 0xffffff) != 0) {
    dVar12 = (double)FUN_140e4b060(&local_1f8);
  }
  if ((int)local_d8[0] < 6) {
    pdVar6 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar6 = (double *)local_d0[5];
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar13 = *pdVar6;
  }
  else {
    dVar13 = (double)FUN_140e4b060();
  }
  dVar14 = local_188;
  if ((local_17c & 0xffffff) != 0) {
    dVar14 = (double)FUN_140e4b060(&local_188);
  }
  dVar15 = local_1b8;
  if ((local_1ac & 0xffffff) != 0) {
    dVar15 = (double)FUN_140e4b060(&local_1b8);
  }
  dVar16 = local_1e8;
  if ((local_1dc & 0xffffff) != 0) {
    dVar16 = (double)FUN_140e4b060(&local_1e8);
  }
  if (0 < (int)local_d8[0]) {
    pdVar8 = (double *)*local_d0;
  }
  if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
    dVar17 = *pdVar8;
  }
  else {
    dVar17 = (double)FUN_140e4b060(pdVar8);
  }
  FUN_140ec5dd0(param_1,(longlong)dVar17,0,(float)dVar16,CONCAT44(uVar19,(float)dVar15),
                CONCAT44(uVar21,(float)dVar14),(float)dVar13,(float)dVar12,uVar3,(float)dVar11);
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
LAB_14027b339:
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  _eh_vector_destructor_iterator_(&local_158,0x10,8,FUN_140041b30);
  if (0 < (int)local_d8[0]) {
    puVar7 = local_d0;
    do {
      puVar1 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_d0);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return param_3;
}

