// gml_Script_anon_2335_anon_1040___InputTriggerEffectSystem___InputTriggerEffectSystem @ 0x1400e0b80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_2335_anon_1040___InputTriggerEffectSystem___InputTriggerEffectSystem
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *local_res18;
  undefined1 local_58 [12];
  byte local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@1818@anon@1040@__InputTriggerEffectSystem@__InputTriggerEffectSystem";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x33;
  _eh_vector_constructor_iterator_(local_58,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_3c = 0;
  local_48 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x35;
  local_38 = _DAT_1419e1c30;
  uStack_34 = uRam00000001419e1c34;
  uStack_30 = uRam00000001419e1c38;
  uStack_2c = uRam00000001419e1c3c;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_38);
  local_res18 = local_58;
  gml_Script___InputTriggerEffectStop(param_1,param_2,&local_48,1,&local_res18);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  _eh_vector_destructor_iterator_(local_58,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

