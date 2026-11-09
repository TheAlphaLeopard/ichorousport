// gml_Script_anon_937____struct___788_gml_Object_oShopRaven_Create_0 @ 0x140d738e0

undefined8 *
gml_Script_anon_937____struct___788_gml_Object_oShopRaven_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar8;
  undefined4 uVar14;
  double dVar9;
  uint in_stack_fffffffffffffef8;
  uint in_stack_ffffffffffffff00;
  undefined8 local_d8;
  uint local_cc;
  undefined8 local_c8;
  uint local_bc;
  undefined8 local_b8;
  uint local_ac;
  double local_a8;
  uint local_9c;
  longlong *local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  
  local_80 = "gml_Script_anon@713@gml_Object_oShopRaven_Create_0";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_9c = 0xffffff;
  local_a8 = 0.0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x2e;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
  local_8c = 6;
  in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffff00;
  in_stack_fffffffffffffef8 = in_stack_fffffffffffffef8 & 0xffffff00;
  local_98 = param_1;
  FUN_140e87440(&local_98,DAT_141a0a728,0x80000000,&local_a8,in_stack_fffffffffffffef8,
                in_stack_ffffffffffffff00);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 6;
  in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffff00;
  in_stack_fffffffffffffef8 = in_stack_fffffffffffffef8 & 0xffffff00;
  local_98 = param_1;
  FUN_140e87440(&local_98,DAT_141a0cfc8,0x80000000,&local_b8,in_stack_fffffffffffffef8,
                in_stack_ffffffffffffff00);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 6;
  in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffff00;
  in_stack_fffffffffffffef8 = in_stack_fffffffffffffef8 & 0xffffff00;
  local_98 = param_1;
  FUN_140e87440(&local_98,DAT_1419fe0e8,0x80000000,&local_c8,in_stack_fffffffffffffef8,
                in_stack_ffffffffffffff00);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 6;
  local_98 = param_1;
  FUN_140e87440(&local_98,DAT_1419fe158,0x80000000,&local_d8,in_stack_fffffffffffffef8 & 0xffffff00,
                in_stack_ffffffffffffff00 & 0xffffff00);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((*(uint *)((longlong)puVar2 + 0xc) & 0xffffff) == 0) {
    uVar3 = (undefined4)*puVar2;
    uVar10 = (undefined4)((ulonglong)*puVar2 >> 0x20);
  }
  else {
    uVar8 = FUN_140e4b060(puVar2);
    uVar3 = (undefined4)uVar8;
    uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
  }
  if ((*(uint *)((longlong)puVar1 + 0xc) & 0xffffff) == 0) {
    uVar4 = (undefined4)*puVar1;
    uVar11 = (undefined4)((ulonglong)*puVar1 >> 0x20);
  }
  else {
    uVar8 = FUN_140e4b060(puVar1);
    uVar4 = (undefined4)uVar8;
    uVar11 = (undefined4)((ulonglong)uVar8 >> 0x20);
  }
  if ((local_cc & 0xffffff) == 0) {
    uVar5 = (undefined4)local_d8;
    uVar12 = (undefined4)((ulonglong)local_d8 >> 0x20);
  }
  else {
    uVar8 = FUN_140e4b060(&local_d8);
    uVar5 = (undefined4)uVar8;
    uVar12 = (undefined4)((ulonglong)uVar8 >> 0x20);
  }
  if ((local_bc & 0xffffff) == 0) {
    uVar6 = (undefined4)local_c8;
    uVar13 = (undefined4)((ulonglong)local_c8 >> 0x20);
  }
  else {
    uVar8 = FUN_140e4b060(&local_c8);
    uVar6 = (undefined4)uVar8;
    uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
  }
  if ((local_ac & 0xffffff) == 0) {
    uVar7 = (undefined4)local_b8;
    uVar14 = (undefined4)((ulonglong)local_b8 >> 0x20);
  }
  else {
    uVar8 = FUN_140e4b060(&local_b8);
    uVar7 = (undefined4)uVar8;
    uVar14 = (undefined4)((ulonglong)uVar8 >> 0x20);
  }
  if ((local_9c & 0xffffff) == 0) {
    dVar9 = local_a8;
  }
  else {
    dVar9 = (double)FUN_140e4b060(&local_a8);
  }
  FUN_140ec5dd0(param_1,(longlong)dVar9,(float)(double)CONCAT44(uVar14,uVar7),
                (float)(double)CONCAT44(uVar13,uVar6),(float)(double)CONCAT44(uVar12,uVar5),
                (float)(double)CONCAT44(uVar11,uVar4),(float)(double)CONCAT44(uVar10,uVar3),0,
                0xffffff,0x3f800000);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

