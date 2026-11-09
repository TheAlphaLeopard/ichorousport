// gml_Script___InputTriggerEffectSystem @ 0x1400e0ee0

undefined8 *
gml_Script___InputTriggerEffectSystem(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_30 [40];
  
  local_40 = "gml_Script_anon@2335@anon@1040@__InputTriggerEffectSystem@__InputTriggerEffectSystem";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x3e;
  _eh_vector_constructor_iterator_(local_30,0x10,2,FUN_1400424d0,FUN_140041b30);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x41;
  _eh_vector_destructor_iterator_(local_30,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

