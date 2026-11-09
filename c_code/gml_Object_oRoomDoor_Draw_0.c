// gml_Object_oRoomDoor_Draw_0 @ 0x140d39f10

void gml_Object_oRoomDoor_Draw_0(longlong *param_1)

{
  undefined8 uVar1;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  longlong *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Object_oRoomDoor_Step_2";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_7c = 0xffffff;
  local_88 = (longlong *)0x0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  uStack_4c = 0xffffff;
  local_58 = (longlong *)0x0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_28 = 3;
  FUN_140e98b30();
  local_28 = 5;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56b90);
  uStack_ac = 6;
  local_b8 = param_1;
  FUN_140e87440(&local_b8,DAT_141a0a808,0x80000000,&local_88,0,0);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  uStack_ac = 6;
  local_b8 = param_1;
  FUN_140e87440(&local_b8,DAT_141a0a798,0x80000000,&local_48,0,0);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_8c = local_7c;
  local_90 = local_80;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) == 0) {
    local_98 = local_88;
  }
  else {
    FUN_1400419b0(&local_98,&local_88);
  }
  FUN_1400460e0(&local_98,&local_48);
  uStack_ac = local_8c;
  uStack_b0 = local_90;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
    local_b8 = local_98;
  }
  else {
    FUN_1400419b0(&local_b8,&local_98);
  }
  uStack_9c = 0;
  local_a8 = (longlong *)0x4000000000000000;
  FUN_140046500(&local_b8,&local_a8);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = local_b8;
  uStack_a0 = uStack_b0;
  uStack_9c = uStack_ac;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_a8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e86c30(uVar1,DAT_1419fe0e8,0x80000000,&local_68);
  local_28 = 6;
  uStack_9c = 6;
  local_a8 = param_1;
  FUN_140e87440(&local_a8,DAT_1419fe158,0x80000000,&local_58,0,0);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = local_58;
  uStack_a0 = uStack_50;
  uStack_9c = uStack_4c;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_a8);
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56b90);
  FUN_140e86c30(uVar1,DAT_1419fe158,0x80000000,&local_78);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}

