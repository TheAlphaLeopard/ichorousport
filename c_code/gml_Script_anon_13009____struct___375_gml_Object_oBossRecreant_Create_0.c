// gml_Script_anon_13009____struct___375_gml_Object_oBossRecreant_Create_0 @ 0x1407ce9d0

undefined8 *
gml_Script_anon_13009____struct___375_gml_Object_oBossRecreant_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *local_res18 [2];
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@12931@___struct___374@gml_Object_oBossRecreant_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x28a;
  _eh_vector_constructor_iterator_(local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x28b;
  uStack_4c = 0xf;
  local_58 = 0x100000000000149;
  local_48 = 0x149;
  uStack_44 = 0x1000000;
  uStack_40 = uStack_50;
  uStack_3c = 0xf;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_48);
  local_res18[0] = local_78;
  gml_GlobalScript_world_pos_to_gui(param_1,param_2,&local_68,1,local_res18);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

