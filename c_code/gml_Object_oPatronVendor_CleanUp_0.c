// gml_Object_oPatronVendor_CleanUp_0 @ 0x140bdcfe0

void gml_Object_oPatronVendor_CleanUp_0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong in_stack_ffffffffffffffa8;
  ulonglong in_stack_ffffffffffffffb0;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oPatronVendor_Step_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_2c = 0xffffff;
  local_38 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_18 = 3;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar1,DAT_141a0a968,0x80000000,&local_38,
                in_stack_ffffffffffffffa8 & 0xffffffffffffff00,
                in_stack_ffffffffffffffb0 & 0xffffffffffffff00);
  uVar1 = FUN_140069500(uVar1);
  FUN_140e63610(uVar1,param_2,&local_48,0,&local_38,0);
  local_18 = 4;
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  local_48 = 0;
  local_40 = 0;
  local_3c = 5;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f73c8);
  FUN_140e63610(param_1,param_2,&local_48,0,uVar1,0);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

