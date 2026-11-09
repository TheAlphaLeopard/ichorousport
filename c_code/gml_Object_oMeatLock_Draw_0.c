// gml_Object_oMeatLock_Draw_0 @ 0x140b647b0

void gml_Object_oMeatLock_Draw_0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Object_oMeatLock_Alarm_2";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 2;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  uVar2 = FUN_140e79480(0x4076800000000000);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = uVar2;
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}

