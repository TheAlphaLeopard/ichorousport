// gml_Object_oRoomDoorBottom_Step_0 @ 0x140d3a5a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oRoomDoorBottom_Step_0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
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
  
  local_20 = "gml_Object_oRoomDoorBottom_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 3;
  FUN_140e98b30();
  local_18 = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fc9e8);
  FUN_140e609c0(param_1);
  uStack_3c = 0xf;
  local_48 = 0x10000010000010a;
  if (&local_48 != puVar1) {
    local_38 = 0x10a;
    uStack_34 = 0x1000001;
    uStack_30 = uStack_40;
    uStack_2c = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  FUN_140e60910(1);
  local_18 = 6;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fc9d8);
  FUN_140e609c0(param_1);
  uStack_3c = 0xf;
  local_48 = 0x10000010000010b;
  if (&local_48 != puVar1) {
    local_38 = 0x10b;
    uStack_34 = 0x1000001;
    uStack_30 = uStack_40;
    uStack_2c = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  FUN_140e60910(1);
  local_18 = 8;
  puVar2 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fc9f8);
  if (puVar2 != &DAT_141ddb288) {
    local_38 = _DAT_141ddb288;
    uStack_34 = uRam0000000141ddb28c;
    uStack_30 = uRam0000000141ddb290;
    uStack_2c = DAT_141ddb294;
    if ((1 << ((byte)*(undefined4 *)(puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

