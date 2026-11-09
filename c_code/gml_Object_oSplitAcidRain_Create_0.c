// gml_Object_oSplitAcidRain_Create_0 @ 0x140d9e7a0

void gml_Object_oSplitAcidRain_Create_0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Object_oSplatExample_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  uStack_3c = 0xffffff;
  local_48 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_28 = 2;
  uStack_9c = 6;
  local_a8 = param_1;
  FUN_140e87440(&local_a8,DAT_1419fe0e8,0x80000000,&local_58,0,0);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  uVar1 = FUN_140e794b0(0,0x4020000000000000);
  FUN_140162c50(&local_58,uVar1);
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_58);
  local_28 = 3;
  uStack_9c = 6;
  local_a8 = param_1;
  FUN_140e87440(&local_a8,DAT_1419fe158,0x80000000,&local_68,0,0);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  uVar1 = FUN_140e794b0(0,0x4030000000000000);
  FUN_140162c50(&local_68,uVar1);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_68);
  local_28 = 5;
  uVar1 = FUN_140e794b0(0x66666666,0x3ff3333333333333);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_88 = uVar1;
  FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_88);
  local_28 = 6;
  uStack_9c = 6;
  local_a8 = param_1;
  FUN_140e87440(&local_a8,DAT_141a0f7f8,0x80000000,&local_48,0,0);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = local_48;
  uStack_a0 = uStack_40;
  uStack_9c = uStack_3c;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_a8);
  FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_78);
  local_28 = 8;
  uVar1 = FUN_140e79480(0);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = uVar1;
  FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_98);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}

