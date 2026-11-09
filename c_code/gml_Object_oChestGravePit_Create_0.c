// gml_Object_oChestGravePit_Create_0 @ 0x1408a2c40

undefined8 *
gml_Object_oChestGravePit_Create_0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@163@gml_Object_oCheckTutorial_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_3c = 0xffffff;
  local_48 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x10;
  local_2c = 0xf;
  local_38 = 0x100000000000058;
  FUN_140e87440(&local_38,DAT_1419ef378,0x80000000,&local_48,0,0);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  cVar1 = FUN_140e491e0(&local_48);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  local_4c = 0xd;
  if (cVar1 == '\0') {
    local_58 = 0x3ff0000000000000;
  }
  else {
    local_58 = 0;
  }
  local_2c = 0xf;
  local_38 = 0x100000000000058;
  FUN_140e87930(&local_38,DAT_1419ef378,0x80000000,&local_58);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

