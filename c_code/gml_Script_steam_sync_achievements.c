// gml_Script_steam_sync_achievements @ 0x1405d67a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_steam_sync_achievements(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined1 *local_80;
  undefined8 *local_78;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined8 local_38;
  undefined4 local_2c;
  
  local_90 = "gml_Script_steam_track_death_count";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x17;
  _eh_vector_constructor_iterator_(local_68,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_2c = 0;
  local_38 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x18;
  local_e8 = _DAT_141dd4778;
  uStack_e4 = uRam0000000141dd477c;
  uStack_e0 = uRam0000000141dd4780;
  uStack_dc = DAT_141dd4784;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_e8);
  local_80 = local_68;
  local_e8 = _DAT_141dc6750;
  uStack_e4 = uRam0000000141dc6754;
  uStack_e0 = uRam0000000141dc6758;
  uStack_dc = uRam0000000141dc675c;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_e8);
  local_78 = (undefined8 *)local_58;
  puVar1 = (undefined8 *)gml_Script____struct___106(param_1,param_2,&local_f8,2,&local_80);
  uStack_cc = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_d0 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) == 0) {
    local_d8 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_d8,puVar1);
  }
  uStack_dc = 7;
  local_e8 = 1;
  FUN_1400460e0(&local_d8,&local_e8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_b8 = (undefined8 *)local_d8;
  uStack_b0 = (char *)CONCAT44(uStack_cc,uStack_d0);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_b8);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_88 = 0x19;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  local_b8 = (undefined8 *)CONCAT44(uRam0000000141dd477c,_DAT_141dd4778);
  uStack_b0 = (char *)CONCAT44(DAT_141dd4784,uRam0000000141dd4780);
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_b8);
  local_80 = local_68;
  local_78 = &local_c8;
  uStack_b0 = "gml_Script_savedata_set";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 8;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c20);
  local_ec = 5;
  local_f8 = 0;
  local_a8 = 10;
  FUN_140e98ef0(param_1,param_2,uVar2,local_80,local_78);
  DAT_141dc7a50 = local_b8;
  local_88 = 0x1b;
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

