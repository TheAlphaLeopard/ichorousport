// gml_Script_refresh_anon_42516___scribble_class_element___scribble_class_element @ 0x14012dcd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_refresh_anon_42516___scribble_class_element___scribble_class_element
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  undefined1 local_20 [12];
  byte local_14;
  
  local_40 = "gml_Script_msdf_feather@anon@41828@__scribble_class_element@__scribble_class_element";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x547;
  _eh_vector_constructor_iterator_(local_30,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x549;
  local_58 = _DAT_141dcb508;
  uStack_54 = uRam0000000141dcb50c;
  uStack_50 = (undefined1 *)CONCAT44(DAT_141dcb514,uRam0000000141dcb510);
  if ((1 << (local_14 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_20);
  }
  FUN_140041b80(local_20,&local_58);
  uStack_50 = local_20;
  FUN_1401ef7f0(param_1,param_2,&local_68,1,&uStack_50);
  local_38 = 0x54a;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar1 = FUN_140e5c910();
  FUN_140e42c10(uVar1,param_1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_30,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

