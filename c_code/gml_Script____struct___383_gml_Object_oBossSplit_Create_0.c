// gml_Script____struct___383_gml_Object_oBossSplit_Create_0 @ 0x1407e18a0

undefined8 *
gml_Script____struct___383_gml_Object_oBossSplit_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong in_stack_ffffffffffffff48;
  longlong *plVar3;
  ulonglong in_stack_ffffffffffffff50;
  ulonglong uVar4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_40 = "gml_Script_anon@7245@___struct___383@gml_Object_oBossSplit_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_6c = 0xffffff;
  local_78 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x134;
  uVar1 = (**(code **)(*param_1 + 8))(0,DAT_141a1f0d0);
  FUN_140e87440(uVar1,DAT_141a09968,0x80000000,&local_78,
                in_stack_ffffffffffffff48 & 0xffffffffffffff00,
                in_stack_ffffffffffffff50 & 0xffffffffffffff00);
  plVar3 = param_1;
  uVar4 = param_2;
  FUN_140e87170(&local_78,DAT_1419fe0e8,0x80000000,&local_58,param_1,param_2);
  local_28 = (undefined4)local_58;
  uStack_24 = local_58._4_4_;
  uStack_20 = uStack_50;
  uStack_1c = uStack_4c;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_28);
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_88);
  local_38 = 0x135;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  FUN_140e87440(uVar1,DAT_141a09968,0x80000000,&local_78,(ulonglong)plVar3 & 0xffffffffffffff00,
                uVar4 & 0xffffffffffffff00);
  FUN_140e87170(&local_78,DAT_1419fe158,0x80000000,&local_68,param_1,param_2);
  local_28 = (undefined4)local_68;
  uStack_24 = local_68._4_4_;
  uStack_20 = uStack_60;
  uStack_1c = uStack_5c;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_28);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_98);
  local_38 = 0x136;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f090);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x408f400000000000;
  local_38 = 0x138;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
  FUN_140e63610(param_1,param_2,&local_a8,0,uVar1,0);
  local_38 = 0x139;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_a8,0,uVar1,0);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

