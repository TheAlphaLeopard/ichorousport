// gml_Object_oEnemyDarner_Create_0 @ 0x140996b80

void gml_Object_oEnemyDarner_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oEnemyDamsel_CleanUp_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_2c = 0xffffff;
  local_38 = 0;
  local_18 = 3;
  FUN_140e98b30();
  local_18 = 5;
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  local_38 = 0;
  local_30 = 0;
  local_2c = 5;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0918);
  FUN_140e63610(param_1,param_2,&local_38,0,uVar1,0);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

