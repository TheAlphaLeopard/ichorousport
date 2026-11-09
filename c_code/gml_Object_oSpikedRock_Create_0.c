// gml_Object_oSpikedRock_Create_0 @ 0x140d95c60

void gml_Object_oSpikedRock_Create_0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oSpikeBall_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_2c = 0xffffff;
  local_38 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_18 = 3;
  FUN_140e98b30();
  local_18 = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a010c8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_18 = 6;
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  local_2c = 0;
  local_38 = 0;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_38);
  local_18 = 7;
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  local_3c = 0;
  local_48 = 0x4010000000000000;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_48);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

