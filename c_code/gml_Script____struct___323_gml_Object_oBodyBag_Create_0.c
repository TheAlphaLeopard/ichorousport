// gml_Script____struct___323_gml_Object_oBodyBag_Create_0 @ 0x1406f00e0

undefined8 *
gml_Script____struct___323_gml_Object_oBodyBag_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@1841@___struct___323@gml_Object_oBodyBag_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_5c = 0xffffff;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x67;
  local_4c = 0;
  local_58 = 0x3ff0000000000000;
  FUN_140e86fa0(0,DAT_141a0cfc8,0x80000000,&local_58);
  local_18 = 0x68;
  uStack_3c = 0xf;
  local_48 = 0x10000010000011b;
  local_38 = 0x11b;
  uStack_34 = 0x1000001;
  uStack_30 = uStack_40;
  uStack_2c = 0xf;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_38);
  FUN_140e86fa0(param_1,DAT_1419f5c58,0x80000000,&local_68);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

