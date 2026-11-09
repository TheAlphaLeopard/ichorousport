// gml_Script_anon_51098____struct___682_gml_Object_oPlayer_Create_0 @ 0x140c3d7c0

undefined8 *
gml_Script_anon_51098____struct___682_gml_Object_oPlayer_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *local_res18;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 local_68 [12];
  byte local_5c;
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
  
  local_30 = "gml_Script_anon@50975@___struct___681@gml_Object_oPlayer_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0xa76;
  _eh_vector_constructor_iterator_(local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0xa78;
  local_58 = 0x3ff0000000000000;
  uStack_4c = 0xd;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = uStack_50;
  uStack_3c = 0xd;
  FUN_140041b80(&local_78,&local_48);
  FUN_140e86fa0(param_1,DAT_1419f61d8,0x80000000,&local_78);
  local_28 = 0xa79;
  uStack_4c = 0xf;
  local_58 = 0x1000001000003f0;
  local_48 = 0x3f0;
  uStack_44 = 0x1000001;
  uStack_40 = uStack_50;
  uStack_3c = 0xf;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_48);
  FUN_140e86fa0(param_1,DAT_1419f5c58,0x80000000,&local_88);
  local_28 = 0xa7a;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  uStack_4c = 0xf;
  local_58 = 0x100000000000149;
  local_48 = 0x149;
  uStack_44 = 0x1000000;
  uStack_40 = uStack_50;
  uStack_3c = 0xf;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_48);
  local_res18 = local_68;
  gml_GlobalScript_world_pos_to_gui(param_1,param_2,&local_98,1,&local_res18);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

