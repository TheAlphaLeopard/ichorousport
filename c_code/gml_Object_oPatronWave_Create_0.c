// gml_Object_oPatronWave_Create_0 @ 0x140bdd160

void gml_Object_oPatronWave_Create_0(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Object_oPatronVendor_Draw_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_3c = 0xffffff;
  local_48 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_28 = 3;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f7218);
  uVar3 = 0;
  FUN_140e63610(param_1,param_2,&local_58,0,uVar1,0);
  local_28 = 4;
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  local_58 = 0;
  local_50 = 0;
  local_4c = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar2,DAT_141a05028,0x80000000,&local_48,uVar1 & 0xffffffffffffff00,
                uVar3 & 0xffffffffffffff00);
  uVar2 = FUN_140069500(uVar2);
  FUN_140e63610(uVar2,param_2,&local_58,0,&local_48,0);
  local_28 = 5;
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  local_58 = 0;
  local_50 = 0;
  local_4c = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f7258);
  FUN_140e63610(param_1,param_2,&local_58,0,uVar2,0);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}

