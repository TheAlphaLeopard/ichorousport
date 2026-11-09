// gml_Script_InputMostRecent @ 0x1403344d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_InputMostRecent(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_60 = "gml_Script_InputManualUpdate";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 6;
  _eh_vector_constructor_iterator_(local_d8,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 10;
  local_f8 = _DAT_141dd0678;
  uStack_f4 = uRam0000000141dd067c;
  uStack_f0 = uRam0000000141dd0680;
  uStack_ec = DAT_141dd0684;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_f8);
  local_50 = local_d8;
  local_f8 = _DAT_1419df7c0;
  uStack_f4 = uRam00000001419df7c4;
  uStack_f0 = uRam00000001419df7c8;
  uStack_ec = uRam00000001419df7cc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_f8);
  local_48 = local_c8;
  local_f8 = _DAT_141dd0668;
  uStack_f4 = uRam0000000141dd066c;
  uStack_f0 = uRam0000000141dd0670;
  uStack_ec = DAT_141dd0674;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_f8);
  local_40 = local_b8;
  FUN_14008e020(param_1,param_2,&local_e8,3,&local_50);
  local_58 = 0xd;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  local_f8 = _DAT_1419e40c0;
  uStack_f4 = uRam00000001419e40c4;
  uStack_f0 = uRam00000001419e40c8;
  uStack_ec = uRam00000001419e40cc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_f8);
  local_50 = local_d8;
  local_f8 = (undefined4)DAT_1419df7b0;
  uStack_f4 = DAT_1419df7b0._4_4_;
  uStack_f0 = DAT_1419df7b8;
  uStack_ec = DAT_1419df7bc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_f8);
  local_48 = local_c8;
  local_f8 = (undefined4)DAT_1419df7b0;
  uStack_f4 = DAT_1419df7b0._4_4_;
  uStack_f0 = DAT_1419df7b8;
  uStack_ec = DAT_1419df7bc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_f8);
  local_40 = local_b8;
  local_f8 = (undefined4)DAT_1419df7b0;
  uStack_f4 = DAT_1419df7b0._4_4_;
  uStack_f0 = DAT_1419df7b8;
  uStack_ec = DAT_1419df7bc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_f8);
  local_38 = local_a8;
  local_f8 = (undefined4)DAT_1419df7b0;
  uStack_f4 = DAT_1419df7b0._4_4_;
  uStack_f0 = DAT_1419df7b8;
  uStack_ec = DAT_1419df7bc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_f8);
  local_30 = local_98;
  local_f8 = (undefined4)DAT_1419df7b0;
  uStack_f4 = DAT_1419df7b0._4_4_;
  uStack_f0 = DAT_1419df7b8;
  uStack_ec = DAT_1419df7bc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_f8);
  local_28 = local_88;
  local_f8 = (undefined4)DAT_1419df7b0;
  uStack_f4 = DAT_1419df7b0._4_4_;
  uStack_f0 = DAT_1419df7b8;
  uStack_ec = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_f8);
  local_20 = local_78;
  gml_GlobalScript___InputPlugInRegisterCallbackInternal(param_1,param_2,&local_e8,7,&local_50);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

