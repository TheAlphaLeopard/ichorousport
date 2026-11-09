// gml_Script_anon_46_gml_Object_oShopRaven_Other_76 @ 0x140d78490

void gml_Script_anon_46_gml_Object_oShopRaven_Other_76(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong in_stack_ffffffffffffffa8;
  ulonglong in_stack_ffffffffffffffb0;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oShopRaven_Step_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_3c = 0xffffff;
  local_48 = 0;
  local_2c = 0xffffff;
  local_38 = 0;
  local_18 = 2;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar1,DAT_141a0a968,0x80000000,&local_48,
                in_stack_ffffffffffffffa8 & 0xffffffffffffff00,
                in_stack_ffffffffffffffb0 & 0xffffffffffffff00);
  uVar1 = FUN_140069500(uVar1);
  FUN_140e63610(uVar1,param_2,&local_38,0,&local_48,0);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

