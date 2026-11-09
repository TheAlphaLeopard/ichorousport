// gml_Script_anon_163_gml_Object_oLeechBall_Create_0 @ 0x140b3cfe0

void gml_Script_anon_163_gml_Object_oLeechBall_Create_0(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar11;
  undefined4 uVar18;
  double dVar12;
  uint in_stack_fffffffffffffed8;
  uint in_stack_fffffffffffffee0;
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  uint local_dc;
  undefined8 local_d8;
  uint local_cc;
  double local_c8;
  uint local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  
  local_90 = "gml_Object_oLeech_Draw_0";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_bc = 0xffffff;
  local_c8 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_88 = 2;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
  local_9c = 6;
  in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffff00;
  in_stack_fffffffffffffed8 = in_stack_fffffffffffffed8 & 0xffffff00;
  local_a8 = param_1;
  FUN_140e87440(&local_a8,DAT_141a0a728,0x80000000,&local_c8,in_stack_fffffffffffffed8,
                in_stack_fffffffffffffee0);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 6;
  in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffff00;
  in_stack_fffffffffffffed8 = in_stack_fffffffffffffed8 & 0xffffff00;
  local_a8 = param_1;
  FUN_140e87440(&local_a8,DAT_141a0cfc8,0x80000000,&local_d8,in_stack_fffffffffffffed8,
                in_stack_fffffffffffffee0);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 6;
  in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffff00;
  in_stack_fffffffffffffed8 = in_stack_fffffffffffffed8 & 0xffffff00;
  local_a8 = param_1;
  FUN_140e87440(&local_a8,DAT_1419fe0e8,0x80000000,&local_e8,in_stack_fffffffffffffed8,
                in_stack_fffffffffffffee0);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 6;
  in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffff00;
  in_stack_fffffffffffffed8 = in_stack_fffffffffffffed8 & 0xffffff00;
  local_a8 = param_1;
  FUN_140e87440(&local_a8,DAT_1419fe158,0x80000000,&local_f8,in_stack_fffffffffffffed8,
                in_stack_fffffffffffffee0);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 6;
  local_a8 = param_1;
  FUN_140e87440(&local_a8,DAT_141a0f9d8,0x80000000,&local_b8,in_stack_fffffffffffffed8 & 0xffffff00,
                in_stack_fffffffffffffee0 & 0xffffff00);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  uVar1 = FUN_140e4a8b0(&local_b8);
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar5 = (undefined4)*puVar4;
    uVar13 = (undefined4)((ulonglong)*puVar4 >> 0x20);
  }
  else {
    uVar11 = FUN_140e4b060(puVar4);
    uVar5 = (undefined4)uVar11;
    uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
  }
  if ((*(uint *)((longlong)puVar3 + 0xc) & 0xffffff) == 0) {
    uVar6 = (undefined4)*puVar3;
    uVar14 = (undefined4)((ulonglong)*puVar3 >> 0x20);
  }
  else {
    uVar11 = FUN_140e4b060(puVar3);
    uVar6 = (undefined4)uVar11;
    uVar14 = (undefined4)((ulonglong)uVar11 >> 0x20);
  }
  if ((*(uint *)((longlong)puVar2 + 0xc) & 0xffffff) == 0) {
    uVar7 = (undefined4)*puVar2;
    uVar15 = (undefined4)((ulonglong)*puVar2 >> 0x20);
  }
  else {
    uVar11 = FUN_140e4b060(puVar2);
    uVar7 = (undefined4)uVar11;
    uVar15 = (undefined4)((ulonglong)uVar11 >> 0x20);
  }
  if ((local_ec & 0xffffff) == 0) {
    uVar8 = (undefined4)local_f8;
    uVar16 = (undefined4)((ulonglong)local_f8 >> 0x20);
  }
  else {
    uVar11 = FUN_140e4b060(&local_f8);
    uVar8 = (undefined4)uVar11;
    uVar16 = (undefined4)((ulonglong)uVar11 >> 0x20);
  }
  if ((local_dc & 0xffffff) == 0) {
    uVar9 = (undefined4)local_e8;
    uVar17 = (undefined4)((ulonglong)local_e8 >> 0x20);
  }
  else {
    uVar11 = FUN_140e4b060(&local_e8);
    uVar9 = (undefined4)uVar11;
    uVar17 = (undefined4)((ulonglong)uVar11 >> 0x20);
  }
  if ((local_cc & 0xffffff) == 0) {
    uVar10 = (undefined4)local_d8;
    uVar18 = (undefined4)((ulonglong)local_d8 >> 0x20);
  }
  else {
    uVar11 = FUN_140e4b060(&local_d8);
    uVar10 = (undefined4)uVar11;
    uVar18 = (undefined4)((ulonglong)uVar11 >> 0x20);
  }
  if ((local_bc & 0xffffff) == 0) {
    dVar12 = local_c8;
  }
  else {
    dVar12 = (double)FUN_140e4b060(&local_c8);
  }
  FUN_140ec5dd0(param_1,(longlong)dVar12,(float)(double)CONCAT44(uVar18,uVar10),
                (float)(double)CONCAT44(uVar17,uVar9),(float)(double)CONCAT44(uVar16,uVar8),
                (float)(double)CONCAT44(uVar15,uVar7),(float)(double)CONCAT44(uVar14,uVar6),
                (float)(double)CONCAT44(uVar13,uVar5),uVar1,0x3f800000);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
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
  DAT_141dc7a50 = (undefined8 *)local_98;
  return;
}

