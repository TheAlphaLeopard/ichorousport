// gml_Script____struct___62___scribble_system___scribble_system @ 0x14020c4d0

undefined8 *
gml_Script____struct___62___scribble_system___scribble_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined1 *local_res8;
  undefined1 local_78 [12];
  byte local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_GlobalScript___scribble_system";
  local_28 = 0;
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  _eh_vector_constructor_iterator_(local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_4c = 0xffffff;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0xb;
  local_68 = (undefined4)DAT_1419df7b0;
  uStack_64 = DAT_1419df7b0._4_4_;
  uStack_60 = DAT_1419df7b8;
  uStack_5c = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_68);
  local_res8 = local_78;
  gml_Script___scribble_texture_get_material(param_1,param_2,&local_58,1,&local_res8);
  local_28 = 0xe;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a578);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script___scribble_texture_get_material,param_1);
  if (&local_68 != puVar1) {
    local_48 = local_68;
    uStack_44 = uStack_64;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

