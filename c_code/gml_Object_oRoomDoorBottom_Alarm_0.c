// gml_Object_oRoomDoorBottom_Alarm_0 @ 0x140d3a4c0

void gml_Object_oRoomDoorBottom_Alarm_0(longlong *param_1)

{
  undefined8 *puVar1;
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
  
  local_20 = "gml_Object_oRoomDoor_PreCreate_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 1;
  FUN_140e98b30();
  local_18 = 2;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a011b8);
  FUN_140e609c0(param_1);
  uStack_3c = 0xf;
  local_48 = 0x100000300000039;
  if (&local_48 != puVar1) {
    local_38 = 0x39;
    uStack_34 = 0x1000003;
    uStack_30 = uStack_40;
    uStack_2c = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

