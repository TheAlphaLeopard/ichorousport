// gml_GlobalScript___InputIconConfigKeyboard @ 0x14009c600

undefined8 *
gml_GlobalScript___InputIconConfigKeyboard
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 local_38 [16];
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script___InputGetPS5InitialUserDevice";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 3;
  _eh_vector_constructor_iterator_(local_38,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_18 = 7;
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = &DAT_bff0000000000000;
  _eh_vector_destructor_iterator_(local_38,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

