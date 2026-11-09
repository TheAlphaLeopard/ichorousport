// gml_Script_starting_format_anon_567___scribble_class_null_element___scribble_class_null_element @ 0x140153610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_starting_format_anon_567___scribble_class_null_element___scribble_class_null_element
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
  
  local_20 = 
  "gml_Script___error@anon@102@__scribble_class_null_element@__scribble_class_null_element";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 4;
  _eh_vector_constructor_iterator_(local_58,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_3c = 0;
  local_48 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 6;
  local_38 = _DAT_141dcb8f8;
  uStack_34 = uRam0000000141dcb8fc;
  uStack_30 = uRam0000000141dcb900;
  uStack_2c = DAT_141dcb904;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_38);
  local_res18 = local_58;
  FUN_1401ef7f0(param_1,param_2,&local_48,1,&local_res18);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  _eh_vector_destructor_iterator_(local_58,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

