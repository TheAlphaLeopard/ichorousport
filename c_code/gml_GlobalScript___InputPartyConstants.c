// gml_GlobalScript___InputPartyConstants @ 0x1400bcaf0

undefined8 *
gml_GlobalScript___InputPartyConstants(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_40 [56];
  
  local_50 = "gml_Script__onOperaGXMobile@anon@93@__InputOnOperaGXMobile@__InputOnOperaGXMobile";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 5;
  _eh_vector_constructor_iterator_(local_40,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_48 = 7;
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = 0;
  _eh_vector_destructor_iterator_(local_40,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

