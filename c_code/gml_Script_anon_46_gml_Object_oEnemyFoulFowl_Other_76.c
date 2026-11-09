// gml_Script_anon_46_gml_Object_oEnemyFoulFowl_Other_76 @ 0x1409d7200

void gml_Script_anon_46_gml_Object_oEnemyFoulFowl_Other_76(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 *local_res18;
  undefined8 local_88;
  undefined4 local_80;
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
  
  local_30 = "gml_Object_oEnemyFoulFowl_Step_0";
  local_28 = 0;
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  _eh_vector_constructor_iterator_(local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_28 = 2;
  FUN_140e98b30(param_1,param_2);
  local_28 = 4;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_88 = 0;
  local_80 = 0;
  local_7c = 5;
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
  gml_GlobalScript_world_pos_to_gui(param_1,param_2,&local_88,1,&local_res18);
  local_28 = 6;
  if (puVar1 != &local_78) {
    local_48 = *(undefined4 *)puVar1;
    uStack_44 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_40 = *(undefined4 *)(puVar1 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_48);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_78);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}

