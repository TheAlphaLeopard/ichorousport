// gml_Script_scribble_refresh_everything @ 0x14048c190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_scribble_refresh_everything(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
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
  
  local_40 = "gml_Script_scribble_msdf_thickness_offset";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 5;
  _eh_vector_constructor_iterator_(local_30,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 7;
  local_58 = _DAT_141dd3688;
  uStack_54 = uRam0000000141dd368c;
  uStack_50 = (undefined1 *)CONCAT44(DAT_141dd3694,uRam0000000141dd3690);
  if ((1 << (local_14 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_20);
  }
  FUN_140041b80(local_20,&local_58);
  uStack_50 = local_20;
  FUN_1401ef7f0(param_1,param_2,&local_68,1,&uStack_50);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_30,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

