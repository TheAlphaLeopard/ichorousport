// gml_Object_oSalesman_Step_1 @ 0x140d5af10

undefined8 * gml_Object_oSalesman_Step_1(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar16;
  float fVar23;
  float fVar24;
  uint in_stack_fffffffffffffe58;
  uint uVar25;
  uint in_stack_fffffffffffffe60;
  uint uVar26;
  longlong *local_178;
  uint local_16c;
  longlong local_168;
  undefined4 local_160;
  uint local_15c;
  longlong local_158;
  undefined4 local_150;
  uint local_14c;
  longlong local_148;
  undefined4 local_140;
  uint local_13c;
  undefined8 local_138;
  uint local_12c;
  undefined8 local_128;
  uint local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  longlong local_108;
  undefined4 local_100;
  uint local_fc;
  longlong local_f8;
  undefined4 local_f0;
  uint local_ec;
  double local_e8;
  uint local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined4 local_b0;
  
  local_b8 = "gml_Script_anon@346@gml_Object_oSalesman_Create_0";
  local_c0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b0 = 0x19;
  plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419feb98);
  local_d0 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd428);
  plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419feb98);
  local_d8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd5d8);
  plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  local_c8 = uVar7;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
  local_16c = 6;
  in_stack_fffffffffffffe60 = in_stack_fffffffffffffe60 & 0xffffff00;
  in_stack_fffffffffffffe58 = in_stack_fffffffffffffe58 & 0xffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0cfc8,0x80000000,&local_128,in_stack_fffffffffffffe58,
                in_stack_fffffffffffffe60);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_16c = 6;
  in_stack_fffffffffffffe60 = in_stack_fffffffffffffe60 & 0xffffff00;
  in_stack_fffffffffffffe58 = in_stack_fffffffffffffe58 & 0xffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0a778,0x80000000,&local_138,in_stack_fffffffffffffe58,
                in_stack_fffffffffffffe60);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_16c = 6;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0f9d8,0x80000000,&local_118,
                in_stack_fffffffffffffe58 & 0xffffff00,in_stack_fffffffffffffe60 & 0xffffff00);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_13c = *(uint *)((longlong)plVar6 + 0xc);
  local_140 = (undefined4)plVar6[1];
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
    local_148 = *plVar6;
  }
  else {
    FUN_1400419b0(&local_148,plVar6);
  }
  FUN_140042560(&local_148,uVar7);
  if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  local_14c = *(uint *)((longlong)plVar5 + 0xc);
  local_150 = (undefined4)plVar5[1];
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
    local_158 = *plVar5;
  }
  else {
    FUN_1400419b0(&local_158,plVar5);
  }
  FUN_1400460e0(&local_158,local_d8);
  if (((*(uint *)((longlong)plVar4 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar4, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)(lVar1 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  local_15c = *(uint *)((longlong)plVar4 + 0xc);
  local_160 = (undefined4)plVar4[1];
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
    local_168 = *plVar4;
  }
  else {
    FUN_1400419b0(&local_168,plVar4);
  }
  FUN_1400460e0(&local_168,local_d0);
  local_16c = 0xf;
  local_178 = (longlong *)0x1000001000002a8;
  uVar3 = FUN_140e4a8b0(&local_118);
  if ((local_12c & 0xffffff) == 0) {
    uVar9 = (undefined4)local_138;
    uVar17 = (undefined4)((ulonglong)local_138 >> 0x20);
  }
  else {
    uVar7 = FUN_140e4b060(&local_138);
    uVar9 = (undefined4)uVar7;
    uVar17 = (undefined4)((ulonglong)uVar7 >> 0x20);
  }
  if ((*(uint *)((longlong)puVar8 + 0xc) & 0xffffff) == 0) {
    uVar10 = (undefined4)*puVar8;
    uVar18 = (undefined4)((ulonglong)*puVar8 >> 0x20);
  }
  else {
    uVar7 = FUN_140e4b060(puVar8);
    uVar10 = (undefined4)uVar7;
    uVar18 = (undefined4)((ulonglong)uVar7 >> 0x20);
  }
  if ((local_13c & 0xffffff) == 0) {
    uVar11 = (undefined4)local_148;
    uVar19 = (undefined4)((ulonglong)local_148 >> 0x20);
  }
  else {
    uVar7 = FUN_140e4b060(&local_148);
    uVar11 = (undefined4)uVar7;
    uVar19 = (undefined4)((ulonglong)uVar7 >> 0x20);
  }
  if ((local_14c & 0xffffff) == 0) {
    uVar12 = (undefined4)local_158;
    uVar20 = (undefined4)((ulonglong)local_158 >> 0x20);
  }
  else {
    uVar7 = FUN_140e4b060(&local_158);
    uVar12 = (undefined4)uVar7;
    uVar20 = (undefined4)((ulonglong)uVar7 >> 0x20);
  }
  if ((local_15c & 0xffffff) == 0) {
    uVar13 = (undefined4)local_168;
    uVar21 = (undefined4)((ulonglong)local_168 >> 0x20);
  }
  else {
    uVar7 = FUN_140e4b060(&local_168);
    uVar13 = (undefined4)uVar7;
    uVar21 = (undefined4)((ulonglong)uVar7 >> 0x20);
  }
  if ((local_11c & 0xffffff) == 0) {
    uVar14 = (undefined4)local_128;
    uVar22 = (undefined4)((ulonglong)local_128 >> 0x20);
  }
  else {
    uVar7 = FUN_140e4b060(&local_128);
    uVar14 = (undefined4)uVar7;
    uVar22 = (undefined4)((ulonglong)uVar7 >> 0x20);
  }
  if ((local_16c & 0xffffff) == 0) {
    plVar4 = local_178;
  }
  else {
    plVar4 = (longlong *)FUN_140e4b060(&local_178);
  }
  fVar23 = (float)(double)CONCAT44(uVar19,uVar11);
  fVar24 = (float)(double)CONCAT44(uVar20,uVar12);
  FUN_140ec5dd0(param_1,(int)(double)plVar4,(float)(double)CONCAT44(uVar22,uVar14),
                (float)(double)CONCAT44(uVar21,uVar13),fVar24,fVar23,
                (float)(double)CONCAT44(uVar18,uVar10),(float)(double)CONCAT44(uVar17,uVar9),uVar3,
                0x3f800000);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
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
  local_b0 = 0x1a;
  plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419feaf8);
  plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419feaf8);
  local_16c = 6;
  uVar26 = (uint)fVar23 & 0xffffff00;
  uVar25 = (uint)fVar24 & 0xffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0cfc8,0x80000000,&local_128,uVar25,uVar26);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_16c = 6;
  uVar26 = uVar26 & 0xffffff00;
  uVar25 = uVar25 & 0xffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0a778,0x80000000,&local_138,uVar25,uVar26);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_16c = 6;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0f9d8,0x80000000,&local_118,uVar25 & 0xffffff00,
                uVar26 & 0xffffff00);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_15c = *(uint *)((longlong)plVar6 + 0xc);
  local_160 = (undefined4)plVar6[1];
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
    local_168 = *plVar6;
  }
  else {
    FUN_1400419b0(&local_168,plVar6);
  }
  FUN_140042560(&local_168,local_c8);
  if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  local_14c = *(uint *)((longlong)plVar5 + 0xc);
  local_150 = (undefined4)plVar5[1];
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
    local_158 = *plVar5;
  }
  else {
    FUN_1400419b0(&local_158,plVar5);
  }
  uVar7 = local_d8;
  FUN_1400460e0(&local_158,local_d8);
  if (((*(uint *)((longlong)plVar4 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar4, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)(lVar1 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  local_13c = *(uint *)((longlong)plVar4 + 0xc);
  local_140 = (undefined4)plVar4[1];
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
    local_148 = *plVar4;
  }
  else {
    FUN_1400419b0(&local_148,plVar4);
  }
  uVar2 = local_d0;
  FUN_1400460e0(&local_148,local_d0);
  local_16c = 0xf;
  local_178 = (longlong *)0x1000001000002a9;
  uVar3 = FUN_140e4a8b0(&local_118);
  if ((local_12c & 0xffffff) == 0) {
    uVar9 = (undefined4)local_138;
    uVar17 = (undefined4)((ulonglong)local_138 >> 0x20);
  }
  else {
    uVar15 = FUN_140e4b060(&local_138);
    uVar9 = (undefined4)uVar15;
    uVar17 = (undefined4)((ulonglong)uVar15 >> 0x20);
  }
  if ((*(uint *)((longlong)puVar8 + 0xc) & 0xffffff) == 0) {
    uVar10 = (undefined4)*puVar8;
    uVar18 = (undefined4)((ulonglong)*puVar8 >> 0x20);
  }
  else {
    uVar15 = FUN_140e4b060(puVar8);
    uVar10 = (undefined4)uVar15;
    uVar18 = (undefined4)((ulonglong)uVar15 >> 0x20);
  }
  if ((local_15c & 0xffffff) == 0) {
    uVar11 = (undefined4)local_168;
    uVar19 = (undefined4)((ulonglong)local_168 >> 0x20);
  }
  else {
    uVar15 = FUN_140e4b060(&local_168);
    uVar11 = (undefined4)uVar15;
    uVar19 = (undefined4)((ulonglong)uVar15 >> 0x20);
  }
  if ((local_14c & 0xffffff) == 0) {
    uVar12 = (undefined4)local_158;
    uVar20 = (undefined4)((ulonglong)local_158 >> 0x20);
  }
  else {
    uVar15 = FUN_140e4b060(&local_158);
    uVar12 = (undefined4)uVar15;
    uVar20 = (undefined4)((ulonglong)uVar15 >> 0x20);
  }
  if ((local_13c & 0xffffff) == 0) {
    uVar13 = (undefined4)local_148;
    uVar21 = (undefined4)((ulonglong)local_148 >> 0x20);
  }
  else {
    uVar15 = FUN_140e4b060(&local_148);
    uVar13 = (undefined4)uVar15;
    uVar21 = (undefined4)((ulonglong)uVar15 >> 0x20);
  }
  if ((local_11c & 0xffffff) == 0) {
    uVar14 = (undefined4)local_128;
    uVar22 = (undefined4)((ulonglong)local_128 >> 0x20);
  }
  else {
    uVar15 = FUN_140e4b060(&local_128);
    uVar14 = (undefined4)uVar15;
    uVar22 = (undefined4)((ulonglong)uVar15 >> 0x20);
  }
  if ((local_16c & 0xffffff) == 0) {
    plVar4 = local_178;
  }
  else {
    plVar4 = (longlong *)FUN_140e4b060(&local_178);
  }
  fVar23 = (float)(double)CONCAT44(uVar19,uVar11);
  fVar24 = (float)(double)CONCAT44(uVar20,uVar12);
  FUN_140ec5dd0(param_1,(int)(double)plVar4,(float)(double)CONCAT44(uVar22,uVar14),
                (float)(double)CONCAT44(uVar21,uVar13),fVar24,fVar23,
                (float)(double)CONCAT44(uVar18,uVar10),(float)(double)CONCAT44(uVar17,uVar9),uVar3,
                0x3f800000);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_b0 = 0x1b;
  local_16c = 6;
  uVar26 = (uint)fVar23 & 0xffffff00;
  uVar25 = (uint)fVar24 & 0xffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0a728,0x80000000,&local_e8,uVar25,uVar26);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_16c = 6;
  uVar26 = uVar26 & 0xffffff00;
  uVar25 = uVar25 & 0xffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0cfc8,0x80000000,&local_128,uVar25,uVar26);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_16c = 6;
  uVar26 = uVar26 & 0xffffff00;
  uVar25 = uVar25 & 0xffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_f8,uVar25,uVar26);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_16c = 6;
  uVar26 = uVar26 & 0xffffff00;
  uVar25 = uVar25 & 0xffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_1419fe158,0x80000000,&local_108,uVar25,uVar26);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_16c = 6;
  uVar26 = uVar26 & 0xffffff00;
  uVar25 = uVar25 & 0xffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0a778,0x80000000,&local_138,uVar25,uVar26);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_16c = 6;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0f9d8,0x80000000,&local_118,uVar25 & 0xffffff00,
                uVar26 & 0xffffff00);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_15c = *(uint *)((longlong)plVar6 + 0xc);
  local_160 = (undefined4)plVar6[1];
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
    local_168 = *plVar6;
  }
  else {
    FUN_1400419b0(&local_168,plVar6);
  }
  FUN_140042560(&local_168,local_c8);
  local_14c = local_fc;
  local_150 = local_100;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_158 = local_108;
  }
  else {
    FUN_1400419b0(&local_158,&local_108);
  }
  FUN_1400460e0(&local_158,uVar7);
  local_13c = local_ec;
  local_140 = local_f0;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
    local_148 = local_f8;
  }
  else {
    FUN_1400419b0(&local_148,&local_f8);
  }
  FUN_1400460e0(&local_148,uVar2);
  uVar3 = FUN_140e4a8b0(&local_118);
  if ((local_12c & 0xffffff) == 0) {
    uVar9 = (undefined4)local_138;
    uVar17 = (undefined4)((ulonglong)local_138 >> 0x20);
  }
  else {
    uVar7 = FUN_140e4b060(&local_138);
    uVar9 = (undefined4)uVar7;
    uVar17 = (undefined4)((ulonglong)uVar7 >> 0x20);
  }
  if ((*(uint *)((longlong)puVar8 + 0xc) & 0xffffff) == 0) {
    uVar10 = (undefined4)*puVar8;
    uVar18 = (undefined4)((ulonglong)*puVar8 >> 0x20);
  }
  else {
    uVar7 = FUN_140e4b060(puVar8);
    uVar10 = (undefined4)uVar7;
    uVar18 = (undefined4)((ulonglong)uVar7 >> 0x20);
  }
  if ((local_15c & 0xffffff) == 0) {
    uVar11 = (undefined4)local_168;
    uVar19 = (undefined4)((ulonglong)local_168 >> 0x20);
  }
  else {
    uVar7 = FUN_140e4b060(&local_168);
    uVar11 = (undefined4)uVar7;
    uVar19 = (undefined4)((ulonglong)uVar7 >> 0x20);
  }
  if ((local_14c & 0xffffff) == 0) {
    uVar12 = (undefined4)local_158;
    uVar20 = (undefined4)((ulonglong)local_158 >> 0x20);
  }
  else {
    uVar7 = FUN_140e4b060(&local_158);
    uVar12 = (undefined4)uVar7;
    uVar20 = (undefined4)((ulonglong)uVar7 >> 0x20);
  }
  if ((local_13c & 0xffffff) == 0) {
    uVar13 = (undefined4)local_148;
    uVar21 = (undefined4)((ulonglong)local_148 >> 0x20);
  }
  else {
    uVar7 = FUN_140e4b060(&local_148);
    uVar13 = (undefined4)uVar7;
    uVar21 = (undefined4)((ulonglong)uVar7 >> 0x20);
  }
  if ((local_11c & 0xffffff) == 0) {
    uVar14 = (undefined4)local_128;
    uVar22 = (undefined4)((ulonglong)local_128 >> 0x20);
  }
  else {
    uVar7 = FUN_140e4b060(&local_128);
    uVar14 = (undefined4)uVar7;
    uVar22 = (undefined4)((ulonglong)uVar7 >> 0x20);
  }
  if ((local_dc & 0xffffff) == 0) {
    dVar16 = local_e8;
  }
  else {
    dVar16 = (double)FUN_140e4b060(&local_e8);
  }
  FUN_140ec5dd0(param_1,(longlong)dVar16,(float)(double)CONCAT44(uVar22,uVar14),
                (float)(double)CONCAT44(uVar21,uVar13),(float)(double)CONCAT44(uVar20,uVar12),
                (float)(double)CONCAT44(uVar19,uVar11),(float)(double)CONCAT44(uVar18,uVar10),
                (float)(double)CONCAT44(uVar17,uVar9),uVar3,0x3f800000);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  DAT_141dc7a50 = (undefined8 *)local_c0;
  return param_3;
}

