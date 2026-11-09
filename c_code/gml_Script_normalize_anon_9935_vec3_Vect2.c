// gml_Script_normalize_anon_9935_vec3_Vect2 @ 0x14063fb80

undefined8 *
gml_Script_normalize_anon_9935_vec3_Vect2(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_40 = "gml_Script_length_squared@anon@9626@vec3@Vect2";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x14b;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05ca8);
  local_ac = 6;
  local_b8 = param_1;
  FUN_140e87440(&local_b8,DAT_1419fe0e8,0x80000000,&local_78,0,0);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 6;
  local_b8 = param_1;
  FUN_140e87440(&local_b8,DAT_1419fe158,0x80000000,&local_88,0,0);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = *(undefined4 *)((longlong)puVar1 + 0xc);
  local_b0 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
    local_b8 = (longlong *)*puVar1;
  }
  else {
    FUN_1400419b0(&local_b8,puVar1);
  }
  FUN_140042560(&local_b8,puVar1);
  local_4c = local_7c;
  local_50 = local_80;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) == 0) {
    local_58 = local_88;
  }
  else {
    FUN_1400419b0(&local_58,&local_88);
  }
  FUN_140042560(&local_58,&local_88);
  local_8c = local_6c;
  local_90 = local_70;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) == 0) {
    local_98 = local_78;
  }
  else {
    FUN_1400419b0(&local_98,&local_78);
  }
  FUN_140042560(&local_98,&local_78);
  local_9c = local_8c;
  local_a0 = local_90;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
    local_a8 = local_98;
  }
  else {
    FUN_1400419b0(&local_a8,&local_98);
  }
  FUN_1400460e0(&local_a8,&local_58);
  uStack_5c = local_9c;
  uStack_60 = local_a0;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
    local_68 = local_a8;
  }
  else {
    FUN_1400419b0(&local_68,&local_a8);
  }
  FUN_1400460e0(&local_68,&local_b8);
  if (&local_68 != param_3) {
    local_28 = (undefined4)local_68;
    uStack_24 = local_68._4_4_;
    uStack_20 = uStack_60;
    uStack_1c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_28);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

