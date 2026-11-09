// gml_Script_build_anon_42161___scribble_class_element___scribble_class_element @ 0x14012db30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_build_anon_42161___scribble_class_element___scribble_class_element
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58;
  undefined8 local_50;
  char *local_48;
  undefined4 local_40;
  undefined1 local_38 [32];
  undefined1 local_18 [12];
  byte local_c;
  
  local_48 = "gml_Script_msdf_border@anon@41574@__scribble_class_element@__scribble_class_element";
  local_50 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_50;
  local_40 = 0x541;
  _eh_vector_constructor_iterator_(local_38,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_6c = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_40 = 0x543;
  local_68 = _DAT_141dcb3e8;
  uStack_64 = uRam0000000141dcb3ec;
  uStack_60 = uRam0000000141dcb3f0;
  uStack_5c = DAT_141dcb3f4;
  if ((1 << (local_c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_18);
  }
  FUN_140041b80(local_18,&local_68);
  local_58 = local_18;
  FUN_1401ef7f0(param_1,param_2,&local_78,1,&local_58);
  local_40 = 0x544;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar1 = FUN_140e5c910();
  FUN_140e42c10(uVar1,param_1);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_38,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_50;
  return param_3;
}

