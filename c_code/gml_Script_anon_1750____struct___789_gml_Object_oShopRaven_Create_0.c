// gml_Script_anon_1750____struct___789_gml_Object_oShopRaven_Create_0 @ 0x140d74b30

undefined8 *
gml_Script_anon_1750____struct___789_gml_Object_oShopRaven_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  longlong *plVar12;
  float fVar18;
  float fVar19;
  uint in_stack_fffffffffffffea8;
  uint uVar20;
  uint in_stack_fffffffffffffeb0;
  uint uVar21;
  longlong *local_128;
  uint local_11c;
  undefined8 local_118;
  undefined4 local_110;
  uint local_10c;
  undefined8 local_108;
  uint local_fc;
  undefined8 local_f8;
  uint local_ec;
  double local_e8;
  uint local_dc;
  undefined8 local_d8;
  uint local_cc;
  undefined8 local_c8;
  uint local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  
  local_b0 = "gml_Script_anon@1462@___struct___788@gml_Object_oShopRaven_Create_0";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x5b;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
  local_11c = 6;
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffff00;
  in_stack_fffffffffffffea8 = in_stack_fffffffffffffea8 & 0xffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_141a0a728,0x80000000,&local_e8,in_stack_fffffffffffffea8,
                in_stack_fffffffffffffeb0);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 6;
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffff00;
  in_stack_fffffffffffffea8 = in_stack_fffffffffffffea8 & 0xffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_141a0cfc8,0x80000000,&local_c8,in_stack_fffffffffffffea8,
                in_stack_fffffffffffffeb0);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 6;
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffff00;
  in_stack_fffffffffffffea8 = in_stack_fffffffffffffea8 & 0xffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_f8,in_stack_fffffffffffffea8,
                in_stack_fffffffffffffeb0);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 6;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_108,
                in_stack_fffffffffffffea8 & 0xffffff00,in_stack_fffffffffffffeb0 & 0xffffff00);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_10c = *(uint *)((longlong)puVar2 + 0xc);
  local_110 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
    local_118 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_118,puVar2);
  }
  FUN_140042560(&local_118,uVar3);
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar6 = (undefined4)*puVar4;
    uVar13 = (undefined4)((ulonglong)*puVar4 >> 0x20);
  }
  else {
    uVar3 = FUN_140e4b060(puVar4);
    uVar6 = (undefined4)uVar3;
    uVar13 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((local_10c & 0xffffff) == 0) {
    uVar7 = (undefined4)local_118;
    uVar14 = (undefined4)((ulonglong)local_118 >> 0x20);
  }
  else {
    uVar3 = FUN_140e4b060(&local_118);
    uVar7 = (undefined4)uVar3;
    uVar14 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((local_fc & 0xffffff) == 0) {
    uVar8 = (undefined4)local_108;
    uVar15 = (undefined4)((ulonglong)local_108 >> 0x20);
  }
  else {
    uVar3 = FUN_140e4b060(&local_108);
    uVar8 = (undefined4)uVar3;
    uVar15 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((local_ec & 0xffffff) == 0) {
    uVar9 = (undefined4)local_f8;
    uVar16 = (undefined4)((ulonglong)local_f8 >> 0x20);
  }
  else {
    uVar3 = FUN_140e4b060(&local_f8);
    uVar9 = (undefined4)uVar3;
    uVar16 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((local_bc & 0xffffff) == 0) {
    uVar10 = (undefined4)local_c8;
    uVar17 = (undefined4)((ulonglong)local_c8 >> 0x20);
  }
  else {
    uVar3 = FUN_140e4b060(&local_c8);
    uVar10 = (undefined4)uVar3;
    uVar17 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((local_dc & 0xffffff) == 0) {
    dVar11 = local_e8;
  }
  else {
    dVar11 = (double)FUN_140e4b060(&local_e8);
  }
  fVar18 = (float)(double)CONCAT44(uVar14,uVar7);
  fVar19 = (float)(double)CONCAT44(uVar15,uVar8);
  FUN_140ec5dd0(param_1,(longlong)dVar11,(float)(double)CONCAT44(uVar17,uVar10),
                (float)(double)CONCAT44(uVar16,uVar9),fVar19,fVar18,
                (float)(double)CONCAT44(uVar13,uVar6),0,0xffffff,0x3f800000);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_a8 = 0x5c;
  local_11c = 6;
  uVar21 = (uint)fVar18 & 0xffffff00;
  uVar20 = (uint)fVar19 & 0xffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_141a0a728,0x80000000,&local_e8,uVar20,uVar21);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 0xf;
  local_128 = (longlong *)0x10000010000037b;
  iVar1 = FUN_140e851f0(&local_e8,&local_128,DAT_141955260,0);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (iVar1 == 0) {
    local_a8 = 0x5d;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar21 = uVar21 & 0xffffff00;
    uVar20 = uVar20 & 0xffffff00;
    FUN_140e87440(uVar5,DAT_1419ff658,0x80000000,&local_d8,uVar20,uVar21);
    local_11c = 6;
    uVar21 = uVar21 & 0xffffff00;
    uVar20 = uVar20 & 0xffffff00;
    local_128 = param_1;
    FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_f8,uVar20,uVar21);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_11c = 6;
    local_128 = param_1;
    FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_108,uVar20 & 0xffffff00,
                  uVar21 & 0xffffff00);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_10c = *(uint *)((longlong)puVar2 + 0xc);
    local_110 = *(undefined4 *)(puVar2 + 1);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
      local_118 = *puVar2;
    }
    else {
      FUN_1400419b0(&local_118,puVar2);
    }
    FUN_140042560(&local_118,uVar3);
    local_11c = 0xf;
    local_128 = (longlong *)0x10000010000037e;
    if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
      uVar6 = (undefined4)*puVar4;
      uVar13 = (undefined4)((ulonglong)*puVar4 >> 0x20);
    }
    else {
      uVar3 = FUN_140e4b060(puVar4);
      uVar6 = (undefined4)uVar3;
      uVar13 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    if ((local_10c & 0xffffff) == 0) {
      uVar7 = (undefined4)local_118;
      uVar14 = (undefined4)((ulonglong)local_118 >> 0x20);
    }
    else {
      uVar3 = FUN_140e4b060(&local_118);
      uVar7 = (undefined4)uVar3;
      uVar14 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    if ((local_fc & 0xffffff) == 0) {
      uVar8 = (undefined4)local_108;
      uVar15 = (undefined4)((ulonglong)local_108 >> 0x20);
    }
    else {
      uVar3 = FUN_140e4b060(&local_108);
      uVar8 = (undefined4)uVar3;
      uVar15 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    if ((local_ec & 0xffffff) == 0) {
      uVar9 = (undefined4)local_f8;
      uVar16 = (undefined4)((ulonglong)local_f8 >> 0x20);
    }
    else {
      uVar3 = FUN_140e4b060(&local_f8);
      uVar9 = (undefined4)uVar3;
      uVar16 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    if ((local_cc & 0xffffff) == 0) {
      uVar10 = (undefined4)local_d8;
      uVar17 = (undefined4)((ulonglong)local_d8 >> 0x20);
    }
    else {
      uVar3 = FUN_140e4b060(&local_d8);
      uVar10 = (undefined4)uVar3;
      uVar17 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    if ((local_11c & 0xffffff) == 0) {
      plVar12 = local_128;
    }
    else {
      plVar12 = (longlong *)FUN_140e4b060(&local_128);
    }
    FUN_140ec5dd0(param_1,(int)(double)plVar12,(float)(double)CONCAT44(uVar17,uVar10),
                  (float)(double)CONCAT44(uVar16,uVar9),(float)(double)CONCAT44(uVar15,uVar8),
                  (float)(double)CONCAT44(uVar14,uVar7),(float)(double)CONCAT44(uVar13,uVar6),0,
                  0xffffff,0x3f800000);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

