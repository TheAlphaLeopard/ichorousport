// gml_Object_oBodyPartToss_Step_0 @ 0x1406f6860

void gml_Object_oBodyPartToss_Step_0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar13;
  uint in_stack_fffffffffffffea8;
  uint in_stack_fffffffffffffeb0;
  longlong *local_128;
  undefined4 local_120;
  uint local_11c;
  undefined8 local_118;
  undefined4 local_110;
  uint local_10c;
  undefined8 local_108;
  undefined4 local_100;
  uint local_fc;
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  uint local_dc;
  undefined8 local_d8;
  uint local_cc;
  double local_c8;
  uint local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  
  local_b0 = "gml_Object_oBodyPart_Draw_0";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_bc = 0xffffff;
  local_c8 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_a8 = 4;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04bc8);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04c08);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04bb8);
  local_11c = 6;
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffff00;
  in_stack_fffffffffffffea8 = in_stack_fffffffffffffea8 & 0xffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_141a0a728,0x80000000,&local_c8,in_stack_fffffffffffffea8,
                in_stack_fffffffffffffeb0);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 6;
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffff00;
  in_stack_fffffffffffffea8 = in_stack_fffffffffffffea8 & 0xffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_141a0cfc8,0x80000000,&local_d8,in_stack_fffffffffffffea8,
                in_stack_fffffffffffffeb0);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 6;
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffff00;
  in_stack_fffffffffffffea8 = in_stack_fffffffffffffea8 & 0xffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_e8,in_stack_fffffffffffffea8,
                in_stack_fffffffffffffeb0);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 6;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_f8,in_stack_fffffffffffffea8 & 0xffffff00
                ,in_stack_fffffffffffffeb0 & 0xffffff00);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = *(uint *)((longlong)puVar5 + 0xc);
  local_120 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
    local_128 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_128,puVar5);
  }
  FUN_1400460e0(&local_128,uVar6);
  local_fc = *(uint *)((longlong)puVar3 + 0xc);
  local_100 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_108 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_108,puVar3);
  }
  FUN_140042560(&local_108,uVar4);
  local_10c = *(uint *)((longlong)puVar1 + 0xc);
  local_110 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
    local_118 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_118,puVar1);
  }
  FUN_140042560(&local_118,uVar2);
  if ((local_11c & 0xffffff) == 0) {
    uVar7 = SUB84(local_128,0);
    uVar14 = (undefined4)((ulonglong)local_128 >> 0x20);
  }
  else {
    uVar2 = FUN_140e4b060(&local_128);
    uVar7 = (undefined4)uVar2;
    uVar14 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if ((local_fc & 0xffffff) == 0) {
    uVar8 = (undefined4)local_108;
    uVar15 = (undefined4)((ulonglong)local_108 >> 0x20);
  }
  else {
    uVar2 = FUN_140e4b060(&local_108);
    uVar8 = (undefined4)uVar2;
    uVar15 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if ((local_10c & 0xffffff) == 0) {
    uVar9 = (undefined4)local_118;
    uVar16 = (undefined4)((ulonglong)local_118 >> 0x20);
  }
  else {
    uVar2 = FUN_140e4b060(&local_118);
    uVar9 = (undefined4)uVar2;
    uVar16 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if ((local_ec & 0xffffff) == 0) {
    uVar10 = (undefined4)local_f8;
    uVar17 = (undefined4)((ulonglong)local_f8 >> 0x20);
  }
  else {
    uVar2 = FUN_140e4b060(&local_f8);
    uVar10 = (undefined4)uVar2;
    uVar17 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if ((local_dc & 0xffffff) == 0) {
    uVar11 = (undefined4)local_e8;
    uVar18 = (undefined4)((ulonglong)local_e8 >> 0x20);
  }
  else {
    uVar2 = FUN_140e4b060(&local_e8);
    uVar11 = (undefined4)uVar2;
    uVar18 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if ((local_cc & 0xffffff) == 0) {
    uVar12 = (undefined4)local_d8;
    uVar19 = (undefined4)((ulonglong)local_d8 >> 0x20);
  }
  else {
    uVar2 = FUN_140e4b060(&local_d8);
    uVar12 = (undefined4)uVar2;
    uVar19 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if ((local_bc & 0xffffff) == 0) {
    dVar13 = local_c8;
  }
  else {
    dVar13 = (double)FUN_140e4b060(&local_c8);
  }
  FUN_140ec5dd0(param_1,(longlong)dVar13,(float)(double)CONCAT44(uVar19,uVar12),
                (float)(double)CONCAT44(uVar18,uVar11),(float)(double)CONCAT44(uVar17,uVar10),
                (float)(double)CONCAT44(uVar16,uVar9),(float)(double)CONCAT44(uVar15,uVar8),
                (float)(double)CONCAT44(uVar14,uVar7),0xffffff,0x3f800000);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
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
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return;
}

