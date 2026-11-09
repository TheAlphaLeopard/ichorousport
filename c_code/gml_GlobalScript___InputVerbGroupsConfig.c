// gml_GlobalScript___InputVerbGroupsConfig @ 0x1400e0fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript___InputVerbGroupsConfig(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_40 = "gml_Script_anon@1040@__InputTriggerEffectSystem@__InputTriggerEffectSystem";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x22;
  _eh_vector_constructor_iterator_(local_78,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x24;
  local_88 = _DAT_1419e1c60;
  uStack_84 = uRam00000001419e1c64;
  uStack_80 = uRam00000001419e1c68;
  uStack_7c = uRam00000001419e1c6c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_88);
  local_30 = local_78;
  local_88 = (undefined4)DAT_1419df7b0;
  uStack_84 = DAT_1419df7b0._4_4_;
  uStack_80 = DAT_1419df7b8;
  uStack_7c = DAT_1419df7bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_88);
  local_28 = local_68;
  FUN_140e645a0(&local_88,
                gml_Script_anon_1629_anon_1040___InputTriggerEffectSystem___InputTriggerEffectSystem
                ,param_1);
  local_98 = local_88;
  uStack_94 = uStack_84;
  uStack_90 = uStack_80;
  uStack_8c = uStack_7c;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_98);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_20 = local_58;
  gml_Script_InputPlugInVerbSet(param_1,param_2,&local_a8,3,&local_30);
  local_38 = 0x29;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_98 = _DAT_1419e1c20;
  uStack_94 = uRam00000001419e1c24;
  uStack_90 = uRam00000001419e1c28;
  uStack_8c = uRam00000001419e1c2c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_98);
  local_98 = (undefined4)DAT_1419df7b0;
  uStack_94 = DAT_1419df7b0._4_4_;
  uStack_90 = DAT_1419df7b8;
  uStack_8c = DAT_1419df7bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_98);
  FUN_140e645a0(&local_88,
                gml_Script_anon_1818_anon_1040___InputTriggerEffectSystem___InputTriggerEffectSystem
                ,param_1);
  local_98 = local_88;
  uStack_94 = uStack_84;
  uStack_90 = uStack_80;
  uStack_8c = uStack_7c;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_98);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  gml_Script_InputPlugInVerbSet(param_1,param_2,&local_a8,3,&local_30);
  local_38 = 0x2e;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_98 = _DAT_1419e1bf0;
  uStack_94 = uRam00000001419e1bf4;
  uStack_90 = uRam00000001419e1bf8;
  uStack_8c = uRam00000001419e1bfc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_98);
  local_98 = (undefined4)DAT_1419df7b0;
  uStack_94 = DAT_1419df7b0._4_4_;
  uStack_90 = DAT_1419df7b8;
  uStack_8c = DAT_1419df7bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_98);
  FUN_140e645a0(&local_88,
                gml_Script_anon_2038_anon_1040___InputTriggerEffectSystem___InputTriggerEffectSystem
                ,param_1);
  local_98 = local_88;
  uStack_94 = uStack_84;
  uStack_90 = uStack_80;
  uStack_8c = uStack_7c;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_98);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  gml_Script_InputPlugInVerbSet(param_1,param_2,&local_a8,3,&local_30);
  local_38 = 0x33;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_98 = _DAT_1419e1c50;
  uStack_94 = uRam00000001419e1c54;
  uStack_90 = uRam00000001419e1c58;
  uStack_8c = uRam00000001419e1c5c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_98);
  local_98 = (undefined4)DAT_1419df7b0;
  uStack_94 = DAT_1419df7b0._4_4_;
  uStack_90 = DAT_1419df7b8;
  uStack_8c = DAT_1419df7bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_98);
  FUN_140e645a0(&local_88,
                gml_Script_anon_2335_anon_1040___InputTriggerEffectSystem___InputTriggerEffectSystem
                ,param_1);
  local_98 = local_88;
  uStack_94 = uStack_84;
  uStack_90 = uStack_80;
  uStack_8c = uStack_7c;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_98);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  gml_Script_InputPlugInVerbSet(param_1,param_2,&local_a8,3,&local_30);
  local_38 = 0x38;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_98 = _DAT_1419e1c00;
  uStack_94 = uRam00000001419e1c04;
  uStack_90 = uRam00000001419e1c08;
  uStack_8c = uRam00000001419e1c0c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_98);
  local_98 = (undefined4)DAT_1419df7b0;
  uStack_94 = DAT_1419df7b0._4_4_;
  uStack_90 = DAT_1419df7b8;
  uStack_8c = DAT_1419df7bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_98);
  FUN_140e645a0(&local_88,gml_Script_anon_1040___InputTriggerEffectSystem___InputTriggerEffectSystem
                ,param_1);
  local_98 = local_88;
  uStack_94 = uStack_84;
  uStack_90 = uStack_80;
  uStack_8c = uStack_7c;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_98);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  gml_Script_InputPlugInVerbSet(param_1,param_2,&local_a8,3,&local_30);
  local_38 = 0x3e;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_98 = _DAT_1419e1c10;
  uStack_94 = uRam00000001419e1c14;
  uStack_90 = uRam00000001419e1c18;
  uStack_8c = uRam00000001419e1c1c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_98);
  local_98 = (undefined4)DAT_1419df7b0;
  uStack_94 = DAT_1419df7b0._4_4_;
  uStack_90 = DAT_1419df7b8;
  uStack_8c = DAT_1419df7bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_98);
  FUN_140e645a0(&local_88,gml_Script___InputTriggerEffectSystem,param_1);
  local_98 = local_88;
  uStack_94 = uStack_84;
  uStack_90 = uStack_80;
  uStack_8c = uStack_7c;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_98);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  gml_Script_InputPlugInVerbSet(param_1,param_2,&local_a8,3,&local_30);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

