// gml_Object_oContract_Create_0 @ 0x1408b9d50

void gml_Object_oContract_Create_0(void)

{
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oCollectionMenu_Other_5";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_4c = 0xffffff;
  local_58 = 0;
  local_18 = 1;
  local_48 = 0x3ff0000000000000;
  uStack_3c = 0xd;
  local_38 = 0;
  uStack_34 = 0x3ff00000;
  uStack_2c = 0xd;
  FUN_140041b80(&local_58,&local_38);
  uStack_3c = 0xf;
  local_48 = 0x100000000000058;
  FUN_140e87930(&local_48,DAT_141a57d40,0x80000000,&local_58);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

