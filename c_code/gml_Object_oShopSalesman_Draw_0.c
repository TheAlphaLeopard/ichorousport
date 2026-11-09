// gml_Object_oShopSalesman_Draw_0 @ 0x140d809e0

void gml_Object_oShopSalesman_Draw_0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong in_stack_ffffffffffffffa8;
  ulonglong in_stack_ffffffffffffffb0;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oShopSalesman_Step_0";
  local_18 = 0;
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_3c = 0xffffff;
  local_48 = 0;
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_2c = 0xffffff;
  local_38 = 0;
  local_18 = 2;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar2,DAT_141a0a968,0x80000000,&local_48,
                in_stack_ffffffffffffffa8 & 0xffffffffffffff00,
                in_stack_ffffffffffffffb0 & 0xffffffffffffff00);
  uVar2 = FUN_140069500(uVar2);
  FUN_140e63610(uVar2,param_2,&local_38,0,&local_48,0);
  local_18 = 3;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff788);
  FUN_140e609c0(param_1);
  FUN_1400460e0(uVar2,uVar1);
  FUN_140e60910(1);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

