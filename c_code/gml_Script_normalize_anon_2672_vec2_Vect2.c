// gml_Script_normalize_anon_2672_vec2_Vect2 @ 0x140637c50

undefined8 *
gml_Script_normalize_anon_2672_vec2_Vect2(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_length_squared@anon@2367@vec2@Vect2";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x5c;
  local_3c = 6;
  local_48 = param_1;
  FUN_140e87440(&local_48,DAT_1419fe0e8,0x80000000,&local_68,0,0);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  local_3c = 6;
  local_48 = param_1;
  FUN_140e87440(&local_48,DAT_1419fe158,0x80000000,&local_78,0,0);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  local_3c = local_6c;
  local_40 = local_70;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) == 0) {
    local_48 = local_78;
  }
  else {
    FUN_1400419b0(&local_48,&local_78);
  }
  FUN_140042560(&local_48,&local_78);
  local_7c = local_5c;
  local_80 = local_60;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) == 0) {
    local_88 = local_68;
  }
  else {
    FUN_1400419b0(&local_88,&local_68);
  }
  FUN_140042560(&local_88,&local_68);
  uStack_4c = local_7c;
  uStack_50 = local_80;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) == 0) {
    local_58 = local_88;
  }
  else {
    FUN_1400419b0(&local_58,&local_88);
  }
  FUN_1400460e0(&local_58,&local_48);
  if (&local_58 != param_3) {
    local_38 = (undefined4)local_58;
    uStack_34 = local_58._4_4_;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_38);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

