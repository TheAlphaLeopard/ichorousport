// gml_Script___InputMotionClass @ 0x1400b4ab0

undefined8 * gml_Script___InputMotionClass(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
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
  
  local_20 = "gml_Script___Calibrate@anon@1452@__InputMotionClass@__InputMotionClass";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x3c;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01d68);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01de8);
  FUN_140e609c0(param_1);
  if (puVar1 != puVar2) {
    local_48 = *puVar1;
    uStack_40 = *(undefined4 *)(puVar1 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_48);
  }
  FUN_140e60910(1);
  local_18 = 0x3d;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01db8);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01c38);
  FUN_140e609c0(param_1);
  if (puVar1 != puVar2) {
    local_48 = *puVar1;
    uStack_40 = *(undefined4 *)(puVar1 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_48);
  }
  FUN_140e60910(1);
  local_18 = 0x3e;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01cb8);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01c88);
  FUN_140e609c0(param_1);
  if (puVar1 != puVar2) {
    local_48 = *puVar1;
    uStack_40 = *(undefined4 *)(puVar1 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_48);
  }
  FUN_140e60910(1);
  local_18 = 0x3f;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01c68);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01c98);
  FUN_140e609c0(param_1);
  if (puVar1 != puVar2) {
    local_48 = *puVar1;
    uStack_40 = *(undefined4 *)(puVar1 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_48);
  }
  FUN_140e60910(1);
  local_18 = 0x41;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01dd8);
  uStack_3c = 0xd;
  local_48 = 0x3ff0000000000000;
  if (&local_48 != puVar1) {
    local_38 = 0;
    uStack_34 = 0x3ff00000;
    uStack_30 = uStack_40;
    uStack_2c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

