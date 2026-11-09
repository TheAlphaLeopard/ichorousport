// gml_Script_get_sound_tag_gain_anon_12024___scribble_class_typist___scribble_class_typist @ 0x140169d70

undefined8 *
gml_Script_get_sound_tag_gain_anon_12024___scribble_class_typist___scribble_class_typist
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script___sync_reset@anon@11629@__scribble_class_typist@__scribble_class_typist";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  uStack_5c = 0xffffff;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x1a6;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07918);
  uStack_4c = 0xd;
  local_58 = 0;
  if (&local_58 != puVar1) {
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = uStack_50;
    uStack_3c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  local_28 = 0x1a7;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07b68);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_48 = (undefined4)DAT_1419df7b0;
    uStack_44 = DAT_1419df7b0._4_4_;
    uStack_40 = DAT_1419df7b8;
    uStack_3c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  FUN_140e60910(1);
  local_28 = 0x1a8;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07c68);
  uStack_4c = 0xd;
  local_58 = 0;
  if (&local_58 != puVar1) {
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = uStack_50;
    uStack_3c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  local_28 = 0x1a9;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a078c8);
  FUN_140e85f80(param_1,DAT_1419fd4e8,0x80000000,&local_68);
  FUN_140e609c0(param_1);
  if (&local_68 != puVar1) {
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

