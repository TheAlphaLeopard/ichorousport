// gml_Script_add_anon_8332_vec3_Vect2 @ 0x14063dd50

undefined8 *
gml_Script_add_anon_8332_vec3_Vect2(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
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
  longlong *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script___UpdateVec2Status@anon@7710@vec3@Vect2";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  uStack_2c = 0xffffff;
  local_38 = (longlong *)0x0;
  local_3c = 0xffffff;
  local_48 = 0;
  uStack_4c = 0xffffff;
  local_58 = (longlong *)0x0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x105;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a00738);
  uStack_8c = 6;
  local_98 = param_1;
  FUN_140e87440(&local_98,DAT_1419fe0e8,0x80000000,&local_38,0,0);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = local_38;
  uStack_90 = uStack_30;
  uStack_8c = uStack_2c;
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140041b80(&local_48,&local_98);
  FUN_140e86c30(uVar1,DAT_1419fe0e8,0x80000000,&local_48);
  local_18 = 0x106;
  uStack_8c = 6;
  local_98 = param_1;
  FUN_140e87440(&local_98,DAT_1419fe158,0x80000000,&local_58,0,0);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = local_58;
  uStack_90 = uStack_50;
  uStack_8c = uStack_4c;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_98);
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a00738);
  FUN_140e86c30(uVar1,DAT_1419fe158,0x80000000,&local_68);
  local_18 = 0x107;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a00858);
  uStack_8c = 6;
  local_98 = param_1;
  FUN_140e87440(&local_98,DAT_1419fe158,0x80000000,&local_58,0,0);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = local_58;
  uStack_90 = uStack_50;
  uStack_8c = uStack_4c;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_98);
  FUN_140e86c30(uVar1,DAT_1419fe0e8,0x80000000,&local_78);
  local_18 = 0x108;
  uStack_8c = 6;
  local_98 = param_1;
  FUN_140e87440(&local_98,DAT_1419fe0e8,0x80000000,&local_38,0,0);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = local_38;
  uStack_90 = uStack_30;
  uStack_8c = uStack_2c;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_98);
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a00858);
  FUN_140e86c30(uVar1,DAT_1419fe158,0x80000000,&local_88);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)uStack_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

