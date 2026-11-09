// gml_Script_anon_205_gml_Object_oCauldron_Create_0 @ 0x140899e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_205_gml_Object_oCauldron_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  double *pdVar5;
  double *pdVar6;
  undefined8 uVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 **ppuVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  ulonglong in_stack_fffffffffffffe30;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  double local_198;
  byte local_18c;
  double local_188;
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  double local_168;
  uint local_15c;
  double local_158;
  uint local_14c;
  double *local_148;
  double *local_140;
  undefined8 *local_138;
  undefined8 local_130;
  char *local_128;
  undefined4 local_120;
  longlong *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  longlong *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  double local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  double local_78;
  undefined4 local_6c;
  
  local_128 = "gml_Object_oCardBlood_Step_0";
  local_120 = 0;
  local_130 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_130;
  _eh_vector_constructor_iterator_(&local_198,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_6c = 0xffffff;
  local_78 = 0.0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_120 = 2;
  pdVar2 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04118);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f290);
  if (pdVar2 != &local_198) {
    local_1c8 = (longlong *)*pdVar2;
    uStack_1c0 = *(undefined4 *)(pdVar2 + 1);
    uStack_1bc = *(undefined4 *)((longlong)pdVar2 + 0xc);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1c8);
  }
  local_148 = &local_198;
  if ((double *)puVar3 != &local_188) {
    local_1c8 = (longlong *)*puVar3;
    uStack_1c0 = *(undefined4 *)(puVar3 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1c8);
  }
  local_140 = &local_188;
  local_1c8 = (longlong *)CONCAT44(uRam00000001419e9494,_DAT_1419e9490);
  uStack_1c0 = uRam00000001419e9498;
  uStack_1bc = uRam00000001419e949c;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_1c8);
  local_138 = (undefined8 *)local_178;
  FUN_140e609c0(param_1);
  ppuVar16 = &local_148;
  puVar3 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_1a8,3,ppuVar16);
  if (puVar3 != puVar4) {
    local_1c8 = (longlong *)*puVar3;
    uStack_1c0 = *(undefined4 *)(puVar3 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_1c8);
  }
  FUN_140e60910(1);
  local_120 = 3;
  pdVar5 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f300);
  pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f410);
  uStack_1ac = 6;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
  uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
  local_1b8 = param_1;
  FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_158,uVar17,in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  uStack_1ac = 6;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
  local_1b8 = param_1;
  FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_168,uVar17 & 0xffffffffffffff00,
                in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar12 = *pdVar6;
  }
  else {
    dVar12 = (double)FUN_140e4b060(pdVar6);
  }
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar13 = *pdVar5;
  }
  else {
    dVar13 = (double)FUN_140e4b060(pdVar5);
  }
  dVar14 = local_168;
  if ((local_15c & 0xffffff) != 0) {
    dVar14 = (double)FUN_140e4b060(&local_168);
  }
  dVar15 = local_158;
  if ((local_14c & 0xffffff) != 0) {
    dVar15 = (double)FUN_140e4b060(&local_158);
  }
  fVar11 = (float)FUN_140e793d0((float)dVar15,(float)dVar14,(float)dVar13,(float)dVar12);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = (double)fVar11;
  local_120 = 4;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04168);
  local_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
  local_100 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_108 = (longlong *)*puVar3;
  }
  else {
    FUN_1400419b0(&local_108,puVar3);
  }
  FUN_140046500(&local_108,uVar7);
  local_10c = local_fc;
  local_110 = local_100;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_118 = local_108;
  }
  else {
    FUN_1400419b0(&local_118,&local_108);
  }
  uStack_1bc = 7;
  local_1c8 = (longlong *)CONCAT44(local_1c8._4_4_,0x2d);
  FUN_140042560(&local_118,&local_1c8);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uStack_1ac = local_10c;
  uStack_1b0 = local_110;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
    local_1b8 = local_118;
  }
  else {
    FUN_1400419b0(&local_1b8,&local_118);
  }
  FUN_140042560(&local_1b8,uVar1);
  local_1c8 = local_1b8;
  uStack_1c0 = uStack_1b0;
  uStack_1bc = uStack_1ac;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_1c8);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_120 = 5;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1eed0);
  if (pdVar8 != &local_198) {
    local_1c8 = (longlong *)*pdVar8;
    uStack_1c0 = *(undefined4 *)(pdVar8 + 1);
    uStack_1bc = *(undefined4 *)((longlong)pdVar8 + 0xc);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1c8);
  }
  local_148 = &local_198;
  local_140 = &local_e8;
  local_138 = &local_b8;
  FUN_140e609c0(param_1);
  ppuVar16 = &local_148;
  puVar4 = (undefined8 *)gml_Script_AngleRotateTowardsLerp(param_1,param_2,&local_1a8,3,ppuVar16);
  if (puVar4 != puVar3) {
    local_1c8 = (longlong *)*puVar4;
    uStack_1c0 = *(undefined4 *)(puVar4 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_1c8);
  }
  FUN_140e60910(1);
  local_120 = 8;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  pdVar9 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  local_1c8 = (longlong *)CONCAT44(uRam0000000141dc6c04,_DAT_141dc6c00);
  uStack_1c0 = uRam0000000141dc6c08;
  uStack_1bc = uRam0000000141dc6c0c;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_1c8);
  local_148 = &local_198;
  if (pdVar2 != &local_188) {
    local_1c8 = (longlong *)*pdVar2;
    uStack_1c0 = *(undefined4 *)(pdVar2 + 1);
    uStack_1bc = *(undefined4 *)((longlong)pdVar2 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1c8);
  }
  local_140 = &local_188;
  if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
    dVar12 = *pdVar8;
  }
  else {
    dVar12 = (double)FUN_140e4b060(pdVar8);
  }
  pdVar10 = (double *)FUN_140e79090(&local_1a8,2,&local_148);
  if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
    dVar13 = *pdVar10;
  }
  else {
    dVar13 = (double)FUN_140e4b060(pdVar10);
  }
  fVar11 = (float)FUN_140e78f90((float)dVar13,(float)dVar12);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar9);
  }
  *(undefined4 *)((longlong)pdVar9 + 0xc) = 0;
  *pdVar9 = (double)fVar11;
  local_120 = 9;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  pdVar9 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  local_1c8 = (longlong *)CONCAT44(uRam0000000141dc6c04,_DAT_141dc6c00);
  uStack_1c0 = uRam0000000141dc6c08;
  uStack_1bc = uRam0000000141dc6c0c;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_1c8);
  local_148 = &local_198;
  if (pdVar2 != &local_188) {
    local_1c8 = (longlong *)*pdVar2;
    uStack_1c0 = *(undefined4 *)(pdVar2 + 1);
    uStack_1bc = *(undefined4 *)((longlong)pdVar2 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1c8);
  }
  local_140 = &local_188;
  if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
    dVar12 = *pdVar8;
  }
  else {
    dVar12 = (double)FUN_140e4b060(pdVar8);
  }
  pdVar2 = (double *)FUN_140e79090(&local_1a8,2,&local_148);
  if ((*(uint *)((longlong)pdVar2 + 0xc) & 0xffffff) == 0) {
    dVar13 = *pdVar2;
  }
  else {
    dVar13 = (double)FUN_140e4b060(pdVar2);
  }
  fVar11 = (float)FUN_140e79010((float)dVar13,(float)dVar12);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar9);
  }
  *(undefined4 *)((longlong)pdVar9 + 0xc) = 0;
  *pdVar9 = (double)fVar11;
  local_120 = 0xb;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  uStack_1bc = 6;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
  uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_88,uVar17,in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uStack_1ac = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_1b0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
    local_1b8 = (longlong *)*puVar3;
  }
  else {
    FUN_1400419b0(&local_1b8,puVar3);
  }
  FUN_140042560(&local_1b8,uVar1);
  FUN_1400460e0(&local_88,&local_1b8);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_88);
  local_120 = 0xc;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  uStack_1bc = 6;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
  uVar17 = uVar17 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_98,uVar17,in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_1b0 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
    local_1b8 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_1b8,puVar4);
  }
  FUN_140042560(&local_1b8,uVar1);
  FUN_1400460e0(&local_98,&local_1b8);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_98);
  local_120 = 0xe;
  uStack_1bc = 6;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
  uVar17 = uVar17 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_141a0a778,0x80000000,&local_a8,uVar17,in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uStack_1ac = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_1b0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
    local_1b8 = (longlong *)*puVar3;
  }
  else {
    FUN_1400419b0(&local_1b8,puVar3);
  }
  FUN_140042560(&local_1b8,uVar1);
  FUN_1400460e0(&local_a8,&local_1b8);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_a8);
  local_120 = 0x10;
  uStack_1bc = 6;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
  uVar17 = uVar17 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_158,uVar17,in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uStack_1bc = 6;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
  uVar17 = uVar17 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_168,uVar17,in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar12 = *pdVar6;
  }
  else {
    dVar12 = (double)FUN_140e4b060(pdVar6);
  }
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar13 = *pdVar5;
  }
  else {
    dVar13 = (double)FUN_140e4b060(pdVar5);
  }
  dVar14 = local_168;
  if ((local_15c & 0xffffff) != 0) {
    dVar14 = (double)FUN_140e4b060(&local_168);
  }
  dVar15 = local_158;
  if ((local_14c & 0xffffff) != 0) {
    dVar15 = (double)FUN_140e4b060(&local_158);
  }
  fVar11 = (float)FUN_140e793d0((float)dVar15,(float)dVar14,(float)dVar13,(float)dVar12);
  local_6c = 0;
  local_78 = (double)fVar11;
  local_120 = 0x12;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  uStack_1bc = 6;
  uVar17 = uVar17 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_141a0f7f8,0x80000000,&local_c8,uVar17,
                in_stack_fffffffffffffe30 & 0xffffffffffffff00);
  uVar18 = (undefined4)(uVar17 >> 0x20);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = (longlong *)local_c8;
  uStack_1c0 = uStack_c0;
  uStack_1bc = uStack_bc;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_1c8);
  local_148 = &local_198;
  local_1c8 = (longlong *)CONCAT44(uRam0000000141dc6c04,_DAT_141dc6c00);
  uStack_1c0 = uRam0000000141dc6c08;
  uStack_1bc = uRam0000000141dc6c0c;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_1c8);
  local_140 = &local_188;
  local_1c8 = (longlong *)CONCAT44(uRam00000001419e9484,_DAT_1419e9480);
  uStack_1c0 = uRam00000001419e9488;
  uStack_1bc = uRam00000001419e948c;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_1c8);
  local_138 = (undefined8 *)local_178;
  ppuVar16 = &local_148;
  uVar17 = CONCAT44(uVar18,DAT_141a00c58);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1a8,3,uVar17,ppuVar16);
  if (puVar3 != &local_f8) {
    local_1c8 = (longlong *)*puVar3;
    uStack_1c0 = *(undefined4 *)(puVar3 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1c8);
  }
  FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_f8);
  local_120 = 0x13;
  uStack_1bc = 6;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_141a0f7f8,0x80000000,&local_c8,uVar17 & 0xffffffffffffff00,
                (ulonglong)ppuVar16 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = (longlong *)local_c8;
  uStack_1c0 = uStack_c0;
  uStack_1bc = uStack_bc;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_1c8);
  FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_d8);
  local_120 = 0x15;
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  FUN_140046040(uVar1);
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(&local_198,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_130;
  return;
}

