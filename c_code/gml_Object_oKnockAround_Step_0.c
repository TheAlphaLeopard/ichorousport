// gml_Object_oKnockAround_Step_0 @ 0x140b37d90

undefined8 *
gml_Object_oKnockAround_Step_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar10;
  uint in_stack_fffffffffffffec8;
  uint in_stack_fffffffffffffed0;
  longlong *local_108;
  undefined4 local_100;
  uint local_fc;
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  uint local_dc;
  undefined8 local_d8;
  uint local_cc;
  undefined8 local_c8;
  uint local_bc;
  double local_b8;
  uint local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  
  local_a0 = "gml_Script_anon@677@gml_Object_oKnockAround_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_ac = 0xffffff;
  local_b8 = 0.0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x2b;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
  local_fc = 6;
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffff00;
  in_stack_fffffffffffffec8 = in_stack_fffffffffffffec8 & 0xffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_141a0a728,0x80000000,&local_b8,in_stack_fffffffffffffec8,
                in_stack_fffffffffffffed0);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 6;
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffff00;
  in_stack_fffffffffffffec8 = in_stack_fffffffffffffec8 & 0xffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_141a0cfc8,0x80000000,&local_c8,in_stack_fffffffffffffec8,
                in_stack_fffffffffffffed0);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 6;
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffff00;
  in_stack_fffffffffffffec8 = in_stack_fffffffffffffec8 & 0xffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe0e8,0x80000000,&local_d8,in_stack_fffffffffffffec8,
                in_stack_fffffffffffffed0);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 6;
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffff00;
  in_stack_fffffffffffffec8 = in_stack_fffffffffffffec8 & 0xffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_e8,in_stack_fffffffffffffec8,
                in_stack_fffffffffffffed0);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 6;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_141a0a778,0x80000000,&local_f8,in_stack_fffffffffffffec8 & 0xffffff00
                ,in_stack_fffffffffffffed0 & 0xffffff00);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = *(uint *)((longlong)puVar1 + 0xc);
  local_100 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_108 = (longlong *)*puVar1;
  }
  else {
    FUN_1400419b0(&local_108,puVar1);
  }
  FUN_140042560(&local_108,uVar2);
  if ((local_ec & 0xffffff) == 0) {
    uVar4 = (undefined4)local_f8;
    uVar11 = (undefined4)((ulonglong)local_f8 >> 0x20);
  }
  else {
    uVar2 = FUN_140e4b060(&local_f8);
    uVar4 = (undefined4)uVar2;
    uVar11 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if ((*(uint *)((longlong)puVar3 + 0xc) & 0xffffff) == 0) {
    uVar5 = (undefined4)*puVar3;
    uVar12 = (undefined4)((ulonglong)*puVar3 >> 0x20);
  }
  else {
    uVar2 = FUN_140e4b060(puVar3);
    uVar5 = (undefined4)uVar2;
    uVar12 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if ((local_fc & 0xffffff) == 0) {
    uVar6 = SUB84(local_108,0);
    uVar13 = (undefined4)((ulonglong)local_108 >> 0x20);
  }
  else {
    uVar2 = FUN_140e4b060(&local_108);
    uVar6 = (undefined4)uVar2;
    uVar13 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if ((local_dc & 0xffffff) == 0) {
    uVar7 = (undefined4)local_e8;
    uVar14 = (undefined4)((ulonglong)local_e8 >> 0x20);
  }
  else {
    uVar2 = FUN_140e4b060(&local_e8);
    uVar7 = (undefined4)uVar2;
    uVar14 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if ((local_cc & 0xffffff) == 0) {
    uVar8 = (undefined4)local_d8;
    uVar15 = (undefined4)((ulonglong)local_d8 >> 0x20);
  }
  else {
    uVar2 = FUN_140e4b060(&local_d8);
    uVar8 = (undefined4)uVar2;
    uVar15 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if ((local_bc & 0xffffff) == 0) {
    uVar9 = (undefined4)local_c8;
    uVar16 = (undefined4)((ulonglong)local_c8 >> 0x20);
  }
  else {
    uVar2 = FUN_140e4b060(&local_c8);
    uVar9 = (undefined4)uVar2;
    uVar16 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if ((local_ac & 0xffffff) == 0) {
    dVar10 = local_b8;
  }
  else {
    dVar10 = (double)FUN_140e4b060(&local_b8);
  }
  FUN_140ec5dd0(param_1,(longlong)dVar10,(float)(double)CONCAT44(uVar16,uVar9),
                (float)(double)CONCAT44(uVar15,uVar8),(float)(double)CONCAT44(uVar14,uVar7),
                (float)(double)CONCAT44(uVar13,uVar6),(float)(double)CONCAT44(uVar12,uVar5),
                (float)(double)CONCAT44(uVar11,uVar4),0xffffff,0x3f800000);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
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
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

