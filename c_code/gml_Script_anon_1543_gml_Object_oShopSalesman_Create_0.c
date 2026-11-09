// gml_Script_anon_1543_gml_Object_oShopSalesman_Create_0 @ 0x140d78c40

undefined8 *
gml_Script_anon_1543_gml_Object_oShopSalesman_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  double *pdVar2;
  double *pdVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  double *pdVar6;
  longlong **pplVar7;
  longlong *plVar8;
  longlong *plVar9;
  double *pdVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  uint in_stack_fffffffffffffe28;
  uint uVar19;
  uint in_stack_fffffffffffffe30;
  uint uVar20;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  longlong *local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  double local_188;
  undefined4 local_180;
  uint local_17c;
  double local_178;
  undefined4 local_170;
  uint local_16c;
  double *local_168;
  undefined4 local_160;
  uint local_15c;
  double local_158;
  uint local_14c;
  double local_148;
  uint local_13c;
  double *local_138;
  undefined4 local_130;
  uint local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  double local_f8;
  uint local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  double *local_d0;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  
  local_e0 = "gml_Script_anon@322@gml_Object_oShopSalesman_Create_0";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_fc = 0xffffff;
  local_108 = 0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_10c = 0;
  local_118 = 0x3f847ae147ae147b;
  local_d8 = 0x1c;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(0x47ae147b,DAT_1419ff788);
  pdVar6 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd428);
  FUN_140e609c0(param_1);
  local_15c = *(uint *)((longlong)puVar5 + 0xc);
  local_160 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
    local_168 = (double *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_168,puVar5);
  }
  uStack_19c = 7;
  local_1a8 = (longlong *)CONCAT44(local_1a8._4_4_,0x41);
  FUN_1400460e0(&local_168,&local_1a8);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_12c = local_15c;
  local_130 = local_160;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
    local_138 = local_168;
  }
  else {
    FUN_1400419b0(&local_138,&local_168);
  }
  FUN_140042560(&local_138,&local_118);
  if ((local_12c & 0xffffff) == 0) {
    uVar4 = SUB84(local_138,0);
  }
  else {
    uVar4 = FUN_140e4b060(&local_138);
  }
  dVar11 = (double)thunk_FUN_1412aae80(uVar4);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar6);
  }
  *(undefined4 *)((longlong)pdVar6 + 0xc) = 0;
  *pdVar6 = dVar11 * 1.5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140e60910(1);
  local_d8 = 0x1e;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0;
  local_118 = 0xbf80624dd2f1a9fc;
  local_d8 = 0x1f;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = 0x4000000000000000;
  local_d8 = 0x20;
  pplVar7 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd5d8);
  FUN_140e609c0(param_1);
  local_15c = *(uint *)((longlong)puVar5 + 0xc);
  local_160 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
    local_168 = (double *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_168,puVar5);
  }
  FUN_140042560(&local_168,&local_118);
  if ((local_15c & 0xffffff) == 0) {
    uVar4 = SUB84(local_168,0);
  }
  else {
    uVar4 = FUN_140e4b060(&local_168);
  }
  local_198 = (longlong *)thunk_FUN_1412ac390(uVar4);
  uStack_18c = 0;
  FUN_140042560(&local_198,&local_108);
  if (&local_198 != pplVar7) {
    local_1a8 = local_198;
    uStack_1a0 = uStack_190;
    uStack_19c = uStack_18c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar7);
    }
    FUN_140041b80(pplVar7,&local_1a8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140e60910(1);
  local_d8 = 0x22;
  pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd428);
  plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419feb98);
  local_d0 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd5d8);
  plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419feb98);
  pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  local_168 = (double *)puVar5;
  local_138 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
  uStack_19c = 6;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffff00;
  in_stack_fffffffffffffe28 = in_stack_fffffffffffffe28 & 0xffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_141a0cfc8,0x80000000,&local_148,in_stack_fffffffffffffe28,
                in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 6;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffff00;
  in_stack_fffffffffffffe28 = in_stack_fffffffffffffe28 & 0xffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_141a0a778,0x80000000,&local_158,in_stack_fffffffffffffe28,
                in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 6;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_141a0f9d8,0x80000000,&local_128,
                in_stack_fffffffffffffe28 & 0xffffff00,in_stack_fffffffffffffe30 & 0xffffff00);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_18c = *(uint *)((longlong)pdVar10 + 0xc);
  uStack_190 = *(undefined4 *)(pdVar10 + 1);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
    local_198 = (longlong *)*pdVar10;
  }
  else {
    FUN_1400419b0(&local_198,pdVar10);
  }
  FUN_140042560(&local_198,puVar5);
  if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  local_16c = *(uint *)((longlong)local_d0 + 0xc);
  local_170 = *(undefined4 *)(local_d0 + 1);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
    local_178 = *local_d0;
  }
  else {
    FUN_1400419b0(&local_178);
  }
  FUN_1400460e0(&local_178,plVar9);
  if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = *(longlong **)(lVar1 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  local_17c = *(uint *)((longlong)pdVar6 + 0xc);
  local_180 = *(undefined4 *)(pdVar6 + 1);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
    local_188 = *pdVar6;
  }
  else {
    FUN_1400419b0(&local_188,pdVar6);
  }
  FUN_1400460e0(&local_188,plVar8);
  uStack_19c = 0xf;
  local_1a8 = (longlong *)0x1000001000002a8;
  uVar4 = FUN_140e4a8b0(&local_128);
  dVar11 = local_158;
  if ((local_14c & 0xffffff) != 0) {
    dVar11 = (double)FUN_140e4b060(&local_158);
  }
  if ((*(uint *)((longlong)local_138 + 0xc) & 0xffffff) == 0) {
    dVar12 = *local_138;
  }
  else {
    dVar12 = (double)FUN_140e4b060(local_138);
  }
  plVar8 = local_198;
  if ((uStack_18c & 0xffffff) != 0) {
    plVar8 = (longlong *)FUN_140e4b060(&local_198);
  }
  dVar13 = local_178;
  if ((local_16c & 0xffffff) != 0) {
    dVar13 = (double)FUN_140e4b060(&local_178);
  }
  dVar14 = local_188;
  if ((local_17c & 0xffffff) != 0) {
    dVar14 = (double)FUN_140e4b060(&local_188);
  }
  dVar15 = local_148;
  if ((local_13c & 0xffffff) != 0) {
    dVar15 = (double)FUN_140e4b060(&local_148);
  }
  plVar9 = local_1a8;
  if ((uStack_19c & 0xffffff) != 0) {
    plVar9 = (longlong *)FUN_140e4b060(&local_1a8);
  }
  fVar17 = (float)(double)plVar8;
  fVar18 = (float)dVar13;
  FUN_140ec5dd0(param_1,(int)(double)plVar9,(float)dVar15,(float)dVar14,fVar18,fVar17,(float)dVar12,
                (float)dVar11,uVar4,0x3f800000);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_d8 = 0x23;
  plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419feaf8);
  plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419feaf8);
  uStack_19c = 6;
  uVar20 = (uint)fVar17 & 0xffffff00;
  uVar19 = (uint)fVar18 & 0xffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_141a0cfc8,0x80000000,&local_148,uVar19,uVar20);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 6;
  uVar20 = uVar20 & 0xffffff00;
  uVar19 = uVar19 & 0xffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_141a0a778,0x80000000,&local_158,uVar19,uVar20);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 6;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_141a0f9d8,0x80000000,&local_128,uVar19 & 0xffffff00,
                uVar20 & 0xffffff00);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_17c = *(uint *)((longlong)pdVar10 + 0xc);
  local_180 = *(undefined4 *)(pdVar10 + 1);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
    local_188 = *pdVar10;
  }
  else {
    FUN_1400419b0(&local_188,pdVar10);
  }
  FUN_140042560(&local_188,local_168);
  if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  pdVar3 = local_d0;
  local_16c = *(uint *)((longlong)local_d0 + 0xc);
  local_170 = *(undefined4 *)(local_d0 + 1);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
    local_178 = *local_d0;
  }
  else {
    FUN_1400419b0(&local_178,local_d0);
  }
  FUN_1400460e0(&local_178,plVar9);
  if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = *(longlong **)(lVar1 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  uStack_18c = *(uint *)((longlong)pdVar6 + 0xc);
  uStack_190 = *(undefined4 *)(pdVar6 + 1);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
    local_198 = (longlong *)*pdVar6;
  }
  else {
    FUN_1400419b0(&local_198,pdVar6);
  }
  FUN_1400460e0(&local_198,plVar8);
  uStack_19c = 0xf;
  local_1a8 = (longlong *)0x1000001000002a9;
  uVar4 = FUN_140e4a8b0(&local_128);
  dVar11 = local_158;
  if ((local_14c & 0xffffff) != 0) {
    dVar11 = (double)FUN_140e4b060(&local_158);
  }
  pdVar2 = local_138;
  if ((*(uint *)((longlong)local_138 + 0xc) & 0xffffff) == 0) {
    dVar12 = *local_138;
  }
  else {
    dVar12 = (double)FUN_140e4b060(local_138);
  }
  dVar13 = local_188;
  if ((local_17c & 0xffffff) != 0) {
    dVar13 = (double)FUN_140e4b060(&local_188);
  }
  dVar14 = local_178;
  if ((local_16c & 0xffffff) != 0) {
    dVar14 = (double)FUN_140e4b060(&local_178);
  }
  plVar8 = local_198;
  if ((uStack_18c & 0xffffff) != 0) {
    plVar8 = (longlong *)FUN_140e4b060(&local_198);
  }
  dVar15 = local_148;
  if ((local_13c & 0xffffff) != 0) {
    dVar15 = (double)FUN_140e4b060(&local_148);
  }
  plVar9 = local_1a8;
  if ((uStack_19c & 0xffffff) != 0) {
    plVar9 = (longlong *)FUN_140e4b060(&local_1a8);
  }
  fVar17 = (float)dVar13;
  fVar18 = (float)dVar14;
  FUN_140ec5dd0(param_1,(int)(double)plVar9,(float)dVar15,(float)(double)plVar8,fVar18,fVar17,
                (float)dVar12,(float)dVar11,uVar4,0x3f800000);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_d8 = 0x24;
  uStack_19c = 6;
  uVar20 = (uint)fVar17 & 0xffffff00;
  uVar19 = (uint)fVar18 & 0xffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_141a0a728,0x80000000,&local_f8,uVar19,uVar20);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 6;
  uVar20 = uVar20 & 0xffffff00;
  uVar19 = uVar19 & 0xffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_141a0cfc8,0x80000000,&local_148,uVar19,uVar20);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 6;
  uVar20 = uVar20 & 0xffffff00;
  uVar19 = uVar19 & 0xffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_b8,uVar19,uVar20);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 6;
  uVar20 = uVar20 & 0xffffff00;
  uVar19 = uVar19 & 0xffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_c8,uVar19,uVar20);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 6;
  uVar20 = uVar20 & 0xffffff00;
  uVar19 = uVar19 & 0xffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_141a0a778,0x80000000,&local_158,uVar19,uVar20);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 6;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_141a0f9d8,0x80000000,&local_128,uVar19 & 0xffffff00,
                uVar20 & 0xffffff00);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_17c = *(uint *)((longlong)pdVar10 + 0xc);
  local_180 = *(undefined4 *)(pdVar10 + 1);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
    local_188 = *pdVar10;
  }
  else {
    FUN_1400419b0(&local_188,pdVar10);
  }
  FUN_140042560(&local_188,local_168);
  local_16c = *(uint *)((longlong)pdVar3 + 0xc);
  local_170 = *(undefined4 *)(pdVar3 + 1);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
    local_178 = *pdVar3;
  }
  else {
    FUN_1400419b0(&local_178,pdVar3);
  }
  FUN_1400460e0(&local_178,&local_c8);
  uStack_18c = *(uint *)((longlong)pdVar6 + 0xc);
  uStack_190 = *(undefined4 *)(pdVar6 + 1);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
    local_198 = (longlong *)*pdVar6;
  }
  else {
    FUN_1400419b0(&local_198,pdVar6);
  }
  FUN_1400460e0(&local_198,&local_b8);
  uVar4 = FUN_140e4a8b0(&local_128);
  dVar11 = local_158;
  if ((local_14c & 0xffffff) != 0) {
    dVar11 = (double)FUN_140e4b060(&local_158);
  }
  if ((*(uint *)((longlong)pdVar2 + 0xc) & 0xffffff) == 0) {
    dVar12 = *pdVar2;
  }
  else {
    dVar12 = (double)FUN_140e4b060(pdVar2);
  }
  dVar13 = local_188;
  if ((local_17c & 0xffffff) != 0) {
    dVar13 = (double)FUN_140e4b060(&local_188);
  }
  dVar14 = local_178;
  if ((local_16c & 0xffffff) != 0) {
    dVar14 = (double)FUN_140e4b060(&local_178);
  }
  plVar8 = local_198;
  if ((uStack_18c & 0xffffff) != 0) {
    plVar8 = (longlong *)FUN_140e4b060(&local_198);
  }
  dVar15 = local_148;
  if ((local_13c & 0xffffff) != 0) {
    dVar15 = (double)FUN_140e4b060(&local_148);
  }
  dVar16 = local_f8;
  if ((local_ec & 0xffffff) != 0) {
    dVar16 = (double)FUN_140e4b060(&local_f8);
  }
  FUN_140ec5dd0(param_1,(longlong)dVar16,(float)dVar15,(float)(double)plVar8,(float)dVar14,
                (float)dVar13,(float)dVar12,(float)dVar11,uVar4,0x3f800000);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

