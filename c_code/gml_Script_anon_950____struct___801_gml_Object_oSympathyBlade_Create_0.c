// gml_Script_anon_950____struct___801_gml_Object_oSympathyBlade_Create_0 @ 0x140da96d0

undefined8 *
gml_Script_anon_950____struct___801_gml_Object_oSympathyBlade_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar6;
  undefined4 uVar11;
  double dVar7;
  uint in_stack_ffffffffffffff18;
  uint in_stack_ffffffffffffff20;
  undefined8 local_b8;
  uint local_ac;
  undefined8 local_a8;
  uint local_9c;
  undefined8 local_98;
  uint local_8c;
  double local_88;
  uint local_7c;
  longlong *local_78;
  undefined4 local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  
  local_60 = "gml_Script_anon@816@___struct___799@gml_Object_oSympathyBlade_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_7c = 0xffffff;
  local_88 = 0.0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x36;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
  local_6c = 6;
  in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffff00;
  in_stack_ffffffffffffff18 = in_stack_ffffffffffffff18 & 0xffffff00;
  local_78 = param_1;
  FUN_140e87440(&local_78,DAT_141a0a728,0x80000000,&local_88,in_stack_ffffffffffffff18,
                in_stack_ffffffffffffff20);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 6;
  in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffff00;
  in_stack_ffffffffffffff18 = in_stack_ffffffffffffff18 & 0xffffff00;
  local_78 = param_1;
  FUN_140e87440(&local_78,DAT_141a0cfc8,0x80000000,&local_98,in_stack_ffffffffffffff18,
                in_stack_ffffffffffffff20);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 6;
  in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffff00;
  in_stack_ffffffffffffff18 = in_stack_ffffffffffffff18 & 0xffffff00;
  local_78 = param_1;
  FUN_140e87440(&local_78,DAT_1419fe0e8,0x80000000,&local_a8,in_stack_ffffffffffffff18,
                in_stack_ffffffffffffff20);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 6;
  local_78 = param_1;
  FUN_140e87440(&local_78,DAT_1419fe158,0x80000000,&local_b8,in_stack_ffffffffffffff18 & 0xffffff00,
                in_stack_ffffffffffffff20 & 0xffffff00);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((*(uint *)((longlong)puVar1 + 0xc) & 0xffffff) == 0) {
    uVar2 = (undefined4)*puVar1;
    uVar8 = (undefined4)((ulonglong)*puVar1 >> 0x20);
  }
  else {
    uVar6 = FUN_140e4b060(puVar1);
    uVar2 = (undefined4)uVar6;
    uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
  }
  if ((local_ac & 0xffffff) == 0) {
    uVar3 = (undefined4)local_b8;
    uVar9 = (undefined4)((ulonglong)local_b8 >> 0x20);
  }
  else {
    uVar6 = FUN_140e4b060(&local_b8);
    uVar3 = (undefined4)uVar6;
    uVar9 = (undefined4)((ulonglong)uVar6 >> 0x20);
  }
  if ((local_9c & 0xffffff) == 0) {
    uVar4 = (undefined4)local_a8;
    uVar10 = (undefined4)((ulonglong)local_a8 >> 0x20);
  }
  else {
    uVar6 = FUN_140e4b060(&local_a8);
    uVar4 = (undefined4)uVar6;
    uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
  }
  if ((local_8c & 0xffffff) == 0) {
    uVar5 = (undefined4)local_98;
    uVar11 = (undefined4)((ulonglong)local_98 >> 0x20);
  }
  else {
    uVar6 = FUN_140e4b060(&local_98);
    uVar5 = (undefined4)uVar6;
    uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
  }
  if ((local_7c & 0xffffff) == 0) {
    dVar7 = local_88;
  }
  else {
    dVar7 = (double)FUN_140e4b060(&local_88);
  }
  FUN_140ec5dd0(param_1,(longlong)dVar7,(float)(double)CONCAT44(uVar11,uVar5),
                (float)(double)CONCAT44(uVar10,uVar4),(float)(double)CONCAT44(uVar9,uVar3),
                0x3f800000,0x3f800000,(float)(double)CONCAT44(uVar8,uVar2),0xffffff,0x3f800000);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
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
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

