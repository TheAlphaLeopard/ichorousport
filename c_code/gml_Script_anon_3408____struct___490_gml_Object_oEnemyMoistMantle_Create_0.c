// gml_Script_anon_3408____struct___490_gml_Object_oEnemyMoistMantle_Create_0 @ 0x1409f7080

undefined8 *
gml_Script_anon_3408____struct___490_gml_Object_oEnemyMoistMantle_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *local_res18 [2];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@2182@___struct___490@gml_Object_oEnemyMoistMantle_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x5c;
  _eh_vector_constructor_iterator_(local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x5d;
  uStack_5c = 0xf;
  local_68 = 0x10000010000011f;
  local_58 = 0x11f;
  uStack_54 = 0x1000001;
  uStack_50 = uStack_60;
  uStack_4c = 0xf;
  FUN_140041b80(&local_88,&local_58);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_88);
  local_38 = 0x5e;
  uStack_5c = 0xf;
  local_68 = 0x10000010000011f;
  local_58 = 0x11f;
  uStack_54 = 0x1000001;
  uStack_50 = uStack_60;
  uStack_4c = 0xf;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_58);
  FUN_140e86fa0(param_1,DAT_1419f5c58,0x80000000,&local_98);
  local_38 = 0x5f;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uStack_5c = 0xf;
  local_68 = 0x100000000000149;
  local_58 = 0x149;
  uStack_54 = 0x1000000;
  uStack_50 = uStack_60;
  uStack_4c = 0xf;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_58);
  local_res18[0] = local_78;
  gml_GlobalScript_world_pos_to_gui(param_1,param_2,&local_a8,1,local_res18);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

