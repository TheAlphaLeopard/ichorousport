// gml_Script_animation_rainbow_anon_38814___scribble_class_element___scribble_class_element @ 0x14012c060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_animation_rainbow_anon_38814___scribble_class_element___scribble_class_element
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
  "gml_Script_animation_wave@anon@38509@__scribble_class_element@__scribble_class_element";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x4d3;
  _eh_vector_constructor_iterator_(local_58,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_3c = 0;
  local_48 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x4d5;
  local_38 = _DAT_141dcb4d8;
  uStack_34 = uRam0000000141dcb4dc;
  uStack_30 = uRam0000000141dcb4e0;
  uStack_2c = DAT_141dcb4e4;
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

