// gml_Object_oFly_Step_0 @ 0x140adeeb0

void gml_Object_oFly_Step_0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar5;
  undefined4 uVar9;
  double dVar6;
  uint in_stack_ffffffffffffff38;
  uint in_stack_ffffffffffffff40;
  undefined8 local_98;
  uint local_8c;
  undefined8 local_88;
  uint local_7c;
  double local_78;
  uint local_6c;
  longlong *local_68;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Object_oFlungObject_Draw_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_6c = 0xffffff;
  local_78 = 0.0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_48 = 2;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
  local_5c = 6;
  in_stack_ffffffffffffff40 = in_stack_ffffffffffffff40 & 0xffffff00;
  in_stack_ffffffffffffff38 = in_stack_ffffffffffffff38 & 0xffffff00;
  local_68 = param_1;
  FUN_140e87440(&local_68,DAT_141a0a728,0x80000000,&local_78,in_stack_ffffffffffffff38,
                in_stack_ffffffffffffff40);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_5c = 6;
  in_stack_ffffffffffffff40 = in_stack_ffffffffffffff40 & 0xffffff00;
  in_stack_ffffffffffffff38 = in_stack_ffffffffffffff38 & 0xffffff00;
  local_68 = param_1;
  FUN_140e87440(&local_68,DAT_1419fe0e8,0x80000000,&local_88,in_stack_ffffffffffffff38,
                in_stack_ffffffffffffff40);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_5c = 6;
  local_68 = param_1;
  FUN_140e87440(&local_68,DAT_1419fe158,0x80000000,&local_98,in_stack_ffffffffffffff38 & 0xffffff00,
                in_stack_ffffffffffffff40 & 0xffffff00);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((*(uint *)((longlong)puVar1 + 0xc) & 0xffffff) == 0) {
    uVar2 = (undefined4)*puVar1;
    uVar7 = (undefined4)((ulonglong)*puVar1 >> 0x20);
  }
  else {
    uVar5 = FUN_140e4b060(puVar1);
    uVar2 = (undefined4)uVar5;
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  if ((local_8c & 0xffffff) == 0) {
    uVar3 = (undefined4)local_98;
    uVar8 = (undefined4)((ulonglong)local_98 >> 0x20);
  }
  else {
    uVar5 = FUN_140e4b060(&local_98);
    uVar3 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  if ((local_7c & 0xffffff) == 0) {
    uVar4 = (undefined4)local_88;
    uVar9 = (undefined4)((ulonglong)local_88 >> 0x20);
  }
  else {
    uVar5 = FUN_140e4b060(&local_88);
    uVar4 = (undefined4)uVar5;
    uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  if ((local_6c & 0xffffff) == 0) {
    dVar6 = local_78;
  }
  else {
    dVar6 = (double)FUN_140e4b060(&local_78);
  }
  FUN_140ec5dd0(param_1,(longlong)dVar6,0,(float)(double)CONCAT44(uVar9,uVar4),
                (float)(double)CONCAT44(uVar8,uVar3),0x3f800000,0x3f800000,
                (float)(double)CONCAT44(uVar7,uVar2),0xffffff,0x3f800000);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return;
}

