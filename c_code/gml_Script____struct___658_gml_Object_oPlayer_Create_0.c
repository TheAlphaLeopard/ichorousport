// gml_Script____struct___658_gml_Object_oPlayer_Create_0 @ 0x140c10260

undefined8 *
gml_Script____struct___658_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *local_res8;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined1 local_50 [12];
  byte local_44;
  
  local_70 = "gml_Script_anon@24944@___struct___658@gml_Object_oPlayer_Create_0";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x507;
  _eh_vector_constructor_iterator_(local_50,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_54 = 0xffffff;
  local_60 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x508;
  uStack_bc = 0xf;
  local_c8 = 0x100000100000416;
  local_88 = 0x416;
  uStack_84 = 0x1000001;
  uStack_80 = uStack_c0;
  uStack_7c = 0xf;
  FUN_140041b80(&local_60,&local_88);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_60);
  local_68 = 0x509;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = 0;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_a8);
  local_68 = 0x50b;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ef298);
  local_c8 = 0x3ff0000000000000;
  uStack_bc = 0xd;
  local_88 = 0;
  uStack_84 = 0x3ff00000;
  uStack_80 = uStack_c0;
  uStack_7c = 0xd;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_88);
  FUN_140e87930(uVar1,DAT_1419ef278,0x80000000,&local_98);
  local_68 = 0x50c;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f8a28);
  uStack_bc = 0xd;
  local_c8 = 0x3ff0000000000000;
  if (&local_c8 != puVar2) {
    local_88 = 0;
    uStack_84 = 0x3ff00000;
    uStack_80 = uStack_c0;
    uStack_7c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_88);
  }
  local_68 = 0x50d;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  uStack_bc = 0xf;
  local_c8 = 0x100000000000149;
  local_88 = 0x149;
  uStack_84 = 0x1000000;
  uStack_80 = uStack_c0;
  uStack_7c = 0xf;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_88);
  local_res8 = local_50;
  gml_GlobalScript_world_pos_to_gui(param_1,param_2,&local_b8,1,&local_res8);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

