// gml_Object_oSidearmPedistal_PreCreate_0 @ 0x140d853a0

void gml_Object_oSidearmPedistal_PreCreate_0(longlong *param_1)

{
  int iVar1;
  double *pdVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar15;
  float fVar22;
  uint in_stack_fffffffffffffea8;
  uint uVar23;
  uint in_stack_fffffffffffffeb0;
  longlong *local_128;
  undefined4 local_120;
  uint local_11c;
  longlong *local_118;
  undefined4 local_110;
  uint local_10c;
  undefined8 local_108;
  undefined4 local_100;
  uint local_fc;
  longlong *local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined8 local_d8;
  uint local_cc;
  double local_c8;
  uint local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  
  local_b0 = "gml_Object_oSidearmPedistal_Draw_0";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = (longlong *)0x0;
  local_bc = 0xffffff;
  local_c8 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_a8 = 2;
  pdVar2 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff568);
  local_11c = 6;
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffff00;
  in_stack_fffffffffffffea8 = in_stack_fffffffffffffea8 & 0xffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_108,in_stack_fffffffffffffea8,
                in_stack_fffffffffffffeb0);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 6;
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_118,
                in_stack_fffffffffffffea8 & 0xffffff00,in_stack_fffffffffffffeb0);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((local_10c & 0xffffff) == 0) {
    uVar9 = SUB84(local_118,0);
    uVar16 = (undefined4)((ulonglong)local_118 >> 0x20);
  }
  else {
    uVar3 = FUN_140e4b060(&local_118);
    uVar9 = (undefined4)uVar3;
    uVar16 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((local_fc & 0xffffff) == 0) {
    uVar10 = (undefined4)local_108;
    uVar17 = (undefined4)((ulonglong)local_108 >> 0x20);
  }
  else {
    uVar3 = FUN_140e4b060(&local_108);
    uVar10 = (undefined4)uVar3;
    uVar17 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((*(uint *)((longlong)pdVar2 + 0xc) & 0xffffff) == 0) {
    dVar15 = *pdVar2;
  }
  else {
    dVar15 = (double)FUN_140e4b060(pdVar2);
  }
  fVar22 = (float)(double)CONCAT44(uVar16,uVar9);
  FUN_140ec5d30(param_1,(longlong)dVar15,0,(float)(double)CONCAT44(uVar17,uVar10),fVar22);
  local_a8 = 4;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b30);
  local_11c = 0;
  local_128 = (longlong *)&DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(uVar3,&local_128,DAT_141955260,0);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (iVar1 != 0) {
    local_a8 = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09918);
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff598);
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09a78);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
    local_11c = 6;
    in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffff00;
    uVar23 = (uint)fVar22 & 0xffffff00;
    local_128 = param_1;
    FUN_140e87440(&local_128,DAT_141a0a728,0x80000000,&local_c8,uVar23,in_stack_fffffffffffffeb0);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_11c = 6;
    in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffff00;
    uVar23 = uVar23 & 0xffffff00;
    local_128 = param_1;
    FUN_140e87440(&local_128,DAT_141a0cfc8,0x80000000,&local_d8,uVar23,in_stack_fffffffffffffeb0);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_11c = 6;
    in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffff00;
    uVar23 = uVar23 & 0xffffff00;
    local_128 = param_1;
    FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_108,uVar23,in_stack_fffffffffffffeb0);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_11c = 6;
    local_128 = param_1;
    FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_118,uVar23 & 0xffffff00,
                  in_stack_fffffffffffffeb0 & 0xffffff00);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_ec = local_10c;
    local_f0 = local_110;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
      local_f8 = local_118;
    }
    else {
      FUN_1400419b0(&local_f8,&local_118);
    }
    FUN_1400460e0(&local_f8,uVar4);
    local_11c = local_ec;
    local_120 = local_f0;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
      local_128 = local_f8;
    }
    else {
      FUN_1400419b0(&local_128,&local_f8);
    }
    FUN_1400460e0(&local_128,uVar5);
    local_dc = local_fc;
    local_e0 = local_100;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
      local_e8 = local_108;
    }
    else {
      FUN_1400419b0(&local_e8,&local_108);
    }
    FUN_1400460e0(&local_e8,uVar3);
    if ((*(uint *)((longlong)puVar8 + 0xc) & 0xffffff) == 0) {
      uVar9 = (undefined4)*puVar8;
      uVar16 = (undefined4)((ulonglong)*puVar8 >> 0x20);
    }
    else {
      uVar3 = FUN_140e4b060(puVar8);
      uVar9 = (undefined4)uVar3;
      uVar16 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
      uVar10 = (undefined4)*puVar7;
      uVar17 = (undefined4)((ulonglong)*puVar7 >> 0x20);
    }
    else {
      uVar3 = FUN_140e4b060(puVar7);
      uVar10 = (undefined4)uVar3;
      uVar17 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
      uVar11 = (undefined4)*puVar6;
      uVar18 = (undefined4)((ulonglong)*puVar6 >> 0x20);
    }
    else {
      uVar3 = FUN_140e4b060(puVar6);
      uVar11 = (undefined4)uVar3;
      uVar18 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    if ((local_11c & 0xffffff) == 0) {
      uVar12 = SUB84(local_128,0);
      uVar19 = (undefined4)((ulonglong)local_128 >> 0x20);
    }
    else {
      uVar3 = FUN_140e4b060(&local_128);
      uVar12 = (undefined4)uVar3;
      uVar19 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    if ((local_dc & 0xffffff) == 0) {
      uVar13 = (undefined4)local_e8;
      uVar20 = (undefined4)((ulonglong)local_e8 >> 0x20);
    }
    else {
      uVar3 = FUN_140e4b060(&local_e8);
      uVar13 = (undefined4)uVar3;
      uVar20 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    if ((local_cc & 0xffffff) == 0) {
      uVar14 = (undefined4)local_d8;
      uVar21 = (undefined4)((ulonglong)local_d8 >> 0x20);
    }
    else {
      uVar3 = FUN_140e4b060(&local_d8);
      uVar14 = (undefined4)uVar3;
      uVar21 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    if ((local_bc & 0xffffff) == 0) {
      dVar15 = local_c8;
    }
    else {
      dVar15 = (double)FUN_140e4b060(&local_c8);
    }
    FUN_140ec5dd0(param_1,(longlong)dVar15,(float)(double)CONCAT44(uVar21,uVar14),
                  (float)(double)CONCAT44(uVar20,uVar13),(float)(double)CONCAT44(uVar19,uVar12),
                  (float)(double)CONCAT44(uVar18,uVar11),(float)(double)CONCAT44(uVar17,uVar10),
                  (float)(double)CONCAT44(uVar16,uVar9),0xffffff,0x3f800000);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return;
}

