// gml_GlobalScript___InputPlugInExecuteCallbacks @ 0x1400bf380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript___InputPlugInExecuteCallbacks
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_50 = "gml_Script_anon@610@__InputPartySystem@__InputPartySystem";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x16;
  _eh_vector_constructor_iterator_(local_88,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x18;
  local_a8 = _DAT_1419e1910;
  uStack_a4 = uRam00000001419e1914;
  uStack_a0 = uRam00000001419e1918;
  uStack_9c = uRam00000001419e191c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_40 = local_88;
  local_a8 = (undefined4)DAT_1419df7b0;
  uStack_a4 = DAT_1419df7b0._4_4_;
  uStack_a0 = DAT_1419df7b8;
  uStack_9c = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_38 = local_78;
  FUN_140e645a0(&local_a8,gml_Script___InputPartySystem,param_1);
  local_28 = local_a8;
  uStack_24 = uStack_a4;
  uStack_20 = uStack_a0;
  uStack_1c = uStack_9c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_28);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_30 = local_68;
  gml_Script_InputPlugInVerbSet(param_1,param_2,&local_98,3,&local_40);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

