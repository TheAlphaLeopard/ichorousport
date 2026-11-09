// gml_Script_InputManualUpdate @ 0x1403341c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_InputManualUpdate(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 local_50 [12];
  byte local_44;
  undefined1 local_40 [12];
  byte local_34;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_70 = "gml_Script_InputManualCollect";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 6;
  _eh_vector_constructor_iterator_(local_60,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 10;
  local_88 = _DAT_141dd0658;
  uStack_84 = uRam0000000141dd065c;
  uStack_80 = uRam0000000141dd0660;
  uStack_7c = DAT_141dd0664;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_88);
  local_30 = local_60;
  local_88 = _DAT_141dc6460;
  uStack_84 = uRam0000000141dc6464;
  uStack_80 = uRam0000000141dc6468;
  uStack_7c = uRam0000000141dc646c;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_88);
  local_28 = local_50;
  local_88 = _DAT_141dd0648;
  uStack_84 = uRam0000000141dd064c;
  uStack_80 = uRam0000000141dd0650;
  uStack_7c = DAT_141dd0654;
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_88);
  local_20 = local_40;
  FUN_14008e020(param_1,param_2,&local_98,3,&local_30);
  local_68 = 0xd;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  gml_Script___SetColor_anon_212___InputColorClassPlayer___InputColorClassPlayer
            (param_1,param_2,&local_98,0,0);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

