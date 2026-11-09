// gml_Object_oOfferingManager_Other_10 @ 0x140b87e90

void gml_Object_oOfferingManager_Other_10(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oOfferingManager_Other_4";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_3c = 0xffffff;
  local_48 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_18 = 2;
  FUN_140e85f80(param_1,DAT_1419f6b08,0x80000000,&local_48);
  local_2c = 0xf;
  local_38 = 0x10000030000001d;
  iVar1 = FUN_140e851f0(&local_48,&local_38,DAT_141955260,0);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if (iVar1 != 0) {
    local_18 = 3;
    FUN_140e98bf0(param_1,param_2,0);
  }
  local_18 = 6;
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  local_4c = 0;
  local_58 = 0x4000000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a7e8,0,&local_58);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

