// gml_Object_oConvention_Step_0 @ 0x1408c2590

void gml_Object_oConvention_Step_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  double *pdVar5;
  undefined8 uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong *local_res8;
  undefined8 local_res10;
  uint local_res18;
  undefined4 uVar13;
  undefined8 uVar12;
  double **ppdVar14;
  undefined4 uVar15;
  double local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  double local_218;
  undefined4 uStack_210;
  uint uStack_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  double local_1e8;
  uint local_1dc;
  double local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  double local_1c8;
  uint local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  char *local_190;
  undefined4 local_188;
  double local_180;
  uint local_174;
  double local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double *local_158;
  double *local_150;
  double *local_148;
  double *local_140;
  double local_138;
  byte local_12c;
  double local_128;
  byte local_11c;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 *local_e8;
  double *local_e0;
  double **local_d8;
  longlong **local_d0;
  undefined8 *local_c8;
  
  local_res18 = 0;
  local_190 = "gml_Object_oContract_Draw_0";
  local_188 = 0;
  local_198 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_198;
  uVar13 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_138,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_15c = 0xffffff;
  local_168 = 0.0;
  local_174 = 0xffffff;
  local_180 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0de48);
  local_1bc = 0xffffff;
  local_1c8 = 0.0;
  local_1dc = 0xffffff;
  local_1e8 = 0.0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_188 = 2;
  plVar4 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a579f0);
  if (((*(int *)((longlong)plVar4 + 0xc) != 2) || (*plVar4 == 0)) || (*(int *)(*plVar4 + 0x24) < 1))
  {
    local_188 = 2;
    goto LAB_1408c36a9;
  }
  local_188 = 4;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_168);
  local_228 = local_168;
  uStack_220 = uStack_160;
  uStack_21c = uStack_15c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_228);
  local_158 = &local_138;
  local_228 = local_168;
  uStack_220 = uStack_160;
  uStack_21c = uStack_15c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_228);
  local_150 = &local_128;
  uVar6 = CONCAT44(uVar13,DAT_141a00c98);
  pdVar5 = (double *)FUN_140e634e0(local_res8,local_res10,&local_1f8,1,uVar6,&local_150);
  uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_20c = *(uint *)((longlong)pdVar5 + 0xc);
  uStack_210 = *(undefined4 *)(pdVar5 + 1);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
    local_218 = *pdVar5;
  }
  else {
    FUN_1400419b0(&local_218,pdVar5);
  }
  local_res18 = 0x10;
  uStack_21c = 0;
  local_228 = 2.0;
  FUN_140046500(&local_218,&local_228);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  uVar6 = CONCAT44(uVar13,DAT_141a00e38);
  pdVar5 = (double *)FUN_140e634e0(local_res8,local_res10,&local_208,1,uVar6,&local_158);
  uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_1cc = *(undefined4 *)((longlong)pdVar5 + 0xc);
  uStack_1d0 = *(undefined4 *)(pdVar5 + 1);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
    local_1d8 = *pdVar5;
  }
  else {
    FUN_1400419b0(&local_1d8,pdVar5);
  }
  local_res18 = 0x30;
  FUN_1400460e0(&local_1d8,&local_218);
  local_228 = local_1d8;
  uStack_220 = uStack_1d0;
  uStack_21c = uStack_1cc;
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  FUN_140041b80(&local_180,&local_228);
  local_res18 = 0x10;
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uVar7 = 0;
  local_res18 = 0;
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_188 = 5;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = 0x4030000000000000;
  local_188 = 9;
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_188 = 9;
    goto LAB_1408c36a9;
  }
  local_188 = 0xb;
  uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a579b0);
  uStack_21c = 0;
  local_228 = 0.0;
  iVar2 = FUN_140e851f0(uVar3,&local_228,DAT_141955260,1);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if (0 < iVar2) {
    local_188 = 0xd;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_168);
    local_228 = local_168;
    uStack_220 = uStack_160;
    uStack_21c = uStack_15c;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_228);
    local_158 = &local_138;
    pdVar5 = (double *)
             FUN_140e634e0(local_res8,local_res10,&local_208,1,CONCAT44(uVar13,DAT_141a00dd8),
                           &local_158);
    uStack_20c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    uStack_210 = *(undefined4 *)(pdVar5 + 1);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
      local_218 = *pdVar5;
    }
    else {
      FUN_1400419b0(&local_218,pdVar5);
    }
    local_res18 = 0x40;
    uStack_21c = 7;
    local_228 = (double)CONCAT44(local_228._4_4_,0x14);
    FUN_1400460e0(&local_218,&local_228);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = local_218;
    uStack_220 = uStack_210;
    uStack_21c = uStack_20c;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_228);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_188 = 0xe;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1dc = 0;
    local_1e8 = 0.0;
    local_188 = 0x11;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    pdVar5 = (double *)FUN_1403ba2f0(local_res8,local_res10,&local_1f8,0,0);
    if (pdVar5 != &local_138) {
      local_228 = *pdVar5;
      uStack_220 = *(undefined4 *)(pdVar5 + 1);
      uStack_21c = *(undefined4 *)((longlong)pdVar5 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_228);
    }
    local_158 = &local_138;
    uVar13 = 0;
    pdVar5 = (double *)FUN_1403ba8a0(local_res8,local_res10,&local_1b8,0,0);
    if (pdVar5 != &local_128) {
      local_228 = *pdVar5;
      uStack_220 = *(undefined4 *)(pdVar5 + 1);
      uStack_21c = *(undefined4 *)((longlong)pdVar5 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_228);
    }
    local_150 = &local_128;
    local_148 = &local_180;
    local_140 = &local_1c8;
    ppdVar14 = &local_158;
    uVar12 = CONCAT44(uVar13,DAT_1419fd548);
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_208,4,uVar12,ppdVar14);
    uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
    uVar15 = (undefined4)((ulonglong)ppdVar14 >> 0x20);
    iVar2 = FUN_140e851f0(uVar6,&local_f8,DAT_141955260,1);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_19c = 0xd;
    if (iVar2 == -2 || -1 < iVar2) {
      local_1a8 = 0;
    }
    else {
      local_1a8 = 0x3ff0000000000000;
    }
    local_188 = 0x12;
    cVar1 = FUN_140e491e0(&local_1a8);
    if (cVar1 == '\0') {
      uStack_21c = 0;
      local_228 = 0.0;
      pdVar5 = &local_228;
      uVar7 = 2;
      local_res18 = 2;
LAB_1408c2e5e:
      local_1d8 = *pdVar5;
      uStack_1d0 = *(undefined4 *)(pdVar5 + 1);
      uStack_1cc = *(undefined4 *)((longlong)pdVar5 + 0xc);
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_1d8);
    }
    else {
      local_e8 = &local_1f8;
      local_e0 = &local_138;
      local_d8 = &local_158;
      local_d0 = &local_res8;
      local_c8 = &local_res10;
      pdVar5 = (double *)FUN_1408c37f0(&local_e8,&local_218);
      uVar7 = 1;
      local_res18 = 1;
      if (pdVar5 != &local_1e8) goto LAB_1408c2e5e;
    }
    if (((uVar7 & 2) != 0) &&
       (uVar7 = uVar7 & 0xfffffffd, local_res18 = uVar7,
       (1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_228);
    }
    if (((uVar7 & 1) != 0) &&
       (uVar7 = uVar7 & 0xfffffffe, local_res18 = uVar7,
       (1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_218);
    }
    local_188 = 0x14;
    uStack_20c = 0xf;
    local_218 = 7.291128972912526e-304;
    dVar8 = local_1c8;
    if ((local_1bc & 0xffffff) != 0) {
      dVar8 = (double)FUN_140e4b060(&local_1c8);
    }
    dVar9 = local_180;
    if ((local_174 & 0xffffff) != 0) {
      dVar9 = (double)FUN_140e4b060(&local_180);
    }
    dVar10 = local_1e8;
    if ((local_1dc & 0xffffff) != 0) {
      dVar10 = (double)FUN_140e4b060(&local_1e8);
    }
    dVar11 = local_218;
    if ((uStack_20c & 0xffffff) != 0) {
      dVar11 = (double)FUN_140e4b060(&local_218);
    }
    uVar6 = CONCAT44(uVar13,(float)dVar8);
    FUN_140ec5dd0(local_res8,(int)dVar11,(float)dVar10,(float)dVar9,uVar6,
                  CONCAT44(uVar15,0x3f800000),0xbf800000,0,0xffffff,0x3f800000);
    uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
  }
  local_188 = 0x17;
  uStack_21c = 0;
  local_228 = 2.0;
  iVar2 = FUN_140e851f0(uVar3,&local_228,DAT_141955260,1);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if (iVar2 == -2 || -1 < iVar2) goto LAB_1408c36a9;
  local_188 = 0x19;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  (**(code **)(*local_res8 + 8))(local_res8,DAT_141a579b0);
  FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_168);
  local_228 = local_168;
  uStack_220 = uStack_160;
  uStack_21c = uStack_15c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_228);
  local_158 = &local_138;
  local_228 = local_168;
  uStack_220 = uStack_160;
  uStack_21c = uStack_15c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_228);
  local_150 = &local_128;
  uVar3 = FUN_140e634e0(local_res8,local_res10,&local_1f8,1,CONCAT44(uVar13,DAT_141a00d58),
                        &local_150);
  pdVar5 = (double *)FUN_140e634e0(local_res8,local_res10,&local_208,1,DAT_141a00dd8,&local_158);
  uStack_1cc = *(undefined4 *)((longlong)pdVar5 + 0xc);
  uStack_1d0 = *(undefined4 *)(pdVar5 + 1);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
    local_1d8 = *pdVar5;
  }
  else {
    FUN_1400419b0(&local_1d8,pdVar5);
  }
  local_res18 = uVar7 | 0x80;
  FUN_1400460e0(&local_1d8,uVar3);
  uStack_20c = uStack_1cc;
  uStack_210 = uStack_1d0;
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
    local_218 = local_1d8;
  }
  else {
    FUN_1400419b0(&local_218,&local_1d8);
  }
  local_res18 = uVar7 | 0x180;
  uStack_21c = 7;
  local_228 = (double)CONCAT44(local_228._4_4_,0x14);
  FUN_1400462a0(&local_218,&local_228);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = local_218;
  uStack_220 = uStack_210;
  uStack_21c = uStack_20c;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_228);
  local_res18 = uVar7 | 0x80;
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_188 = 0x1a;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1dc = 0;
  local_1e8 = 0.0;
  local_188 = 0x1c;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  pdVar5 = (double *)FUN_1403ba2f0(local_res8,local_res10,&local_1f8,0,0);
  if (pdVar5 != &local_138) {
    local_228 = *pdVar5;
    uStack_220 = *(undefined4 *)(pdVar5 + 1);
    uStack_21c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_228);
  }
  local_158 = &local_138;
  uVar13 = 0;
  pdVar5 = (double *)FUN_1403ba8a0(local_res8,local_res10,&local_1b8,0,0);
  if (pdVar5 != &local_128) {
    local_228 = *pdVar5;
    uStack_220 = *(undefined4 *)(pdVar5 + 1);
    uStack_21c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_228);
  }
  local_150 = &local_128;
  local_148 = &local_180;
  local_140 = &local_1c8;
  ppdVar14 = &local_158;
  uVar6 = CONCAT44(uVar13,DAT_1419fd548);
  uVar3 = FUN_140e634e0(local_res8,local_res10,&local_208,4,uVar6,ppdVar14);
  uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar15 = (undefined4)((ulonglong)ppdVar14 >> 0x20);
  iVar2 = FUN_140e851f0(uVar3,&local_f8,DAT_141955260,1);
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_19c = 0xd;
  if (iVar2 == -2 || -1 < iVar2) {
    local_1a8 = 0;
  }
  else {
    local_1a8 = 0x3ff0000000000000;
  }
  local_188 = 0x1d;
  cVar1 = FUN_140e491e0(&local_1a8);
  if (cVar1 == '\0') {
    uStack_21c = 0;
    local_228 = 0.0;
    pdVar5 = &local_228;
    local_res18 = uVar7 | 8;
LAB_1408c353a:
    uVar7 = local_res18;
    local_1d8 = *pdVar5;
    uStack_1d0 = *(undefined4 *)(pdVar5 + 1);
    uStack_1cc = *(undefined4 *)((longlong)pdVar5 + 0xc);
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_1d8);
  }
  else {
    local_e8 = &local_1f8;
    local_e0 = &local_138;
    local_d8 = &local_158;
    local_d0 = &local_res8;
    local_c8 = &local_res10;
    pdVar5 = (double *)FUN_1408c39a0(&local_e8,&local_218);
    uVar7 = uVar7 | 4;
    local_res18 = uVar7;
    if (pdVar5 != &local_1e8) goto LAB_1408c353a;
  }
  if (((uVar7 & 8) != 0) &&
     (uVar7 = uVar7 & 0xfffffff7, local_res18 = uVar7, (1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0
     )) {
    FUN_140041a50(&local_228);
  }
  if (((uVar7 & 4) != 0) && ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_218);
  }
  local_188 = 0x1f;
  uStack_20c = 0xf;
  local_218 = 7.291128972912526e-304;
  dVar8 = local_1c8;
  if ((local_1bc & 0xffffff) != 0) {
    dVar8 = (double)FUN_140e4b060(&local_1c8);
  }
  dVar9 = local_180;
  if ((local_174 & 0xffffff) != 0) {
    dVar9 = (double)FUN_140e4b060(&local_180);
  }
  dVar10 = local_1e8;
  if ((local_1dc & 0xffffff) != 0) {
    dVar10 = (double)FUN_140e4b060(&local_1e8);
  }
  dVar11 = local_218;
  if ((uStack_20c & 0xffffff) != 0) {
    dVar11 = (double)FUN_140e4b060(&local_218);
  }
  FUN_140ec5dd0(local_res8,(int)dVar11,(float)dVar10,(float)dVar9,CONCAT44(uVar13,(float)dVar8),
                CONCAT44(uVar15,0x3f800000),0x3f800000,0,0xffffff,0x3f800000);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
LAB_1408c36a9:
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(&local_138,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_198;
  return;
}

