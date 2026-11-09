// gml_GlobalScript___InputIconConfigNintendo @ 0x14009c800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript___InputIconConfigNintendo
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined4 local_78 [3];
  byte local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined4 *local_38;
  undefined8 local_30;
  char *local_28;
  undefined4 local_20;
  
  local_28 = "gml_GlobalScript___InputIconConfigEdgeCases";
  local_20 = 0;
  local_30 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_30;
  _eh_vector_constructor_iterator_(local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_20 = 6;
  local_d8 = _DAT_141dca8b8;
  uStack_d4 = uRam0000000141dca8bc;
  uStack_d0 = uRam0000000141dca8c0;
  uStack_cc = DAT_141dca8c4;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  gml_Script_InputIconDefineGamepad(param_1,param_2,&local_c8,1,&local_58);
  local_20 = 9;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = _DAT_141dca848;
  uStack_d4 = uRam0000000141dca84c;
  uStack_d0 = uRam0000000141dca850;
  uStack_cc = DAT_141dca854;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  gml_Script_InputIconGet(param_1,param_2,&local_c8,1,&local_58);
  local_20 = 0x15;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  local_d8 = _DAT_141dca988;
  uStack_d4 = uRam0000000141dca98c;
  uStack_d0 = uRam0000000141dca990;
  uStack_cc = DAT_141dca994;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_141dc6040;
  uStack_d4 = uRam0000000141dc6044;
  uStack_d0 = uRam0000000141dc6048;
  uStack_cc = uRam0000000141dc604c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  local_d8 = _DAT_1419e0150;
  uStack_d4 = uRam00000001419e0154;
  uStack_d0 = uRam00000001419e0158;
  uStack_cc = uRam00000001419e015c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_d8);
  local_40 = local_88;
  puVar1 = (undefined4 *)FUN_14032f010(param_1,param_2,&local_68,2,&local_58);
  if (puVar1 != local_78) {
    local_d8 = *puVar1;
    uStack_d4 = puVar1[1];
    uStack_d0 = puVar1[2];
    uStack_cc = puVar1[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_d8);
  }
  local_38 = local_78;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_48);
  local_20 = 0x16;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  local_d8 = _DAT_141dca988;
  uStack_d4 = uRam0000000141dca98c;
  uStack_d0 = uRam0000000141dca990;
  uStack_cc = DAT_141dca994;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  local_d8 = _DAT_1419dffd0;
  uStack_d4 = uRam00000001419dffd4;
  uStack_d0 = uRam00000001419dffd8;
  uStack_cc = uRam00000001419dffdc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_d8);
  local_40 = local_88;
  puVar1 = (undefined4 *)FUN_14032f010(param_1,param_2,&local_68,2,&local_58);
  if (puVar1 != local_78) {
    local_d8 = *puVar1;
    uStack_d4 = puVar1[1];
    uStack_d0 = puVar1[2];
    uStack_cc = puVar1[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_d8);
  }
  local_38 = local_78;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_48);
  local_20 = 0x17;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  local_d8 = _DAT_141dca988;
  uStack_d4 = uRam0000000141dca98c;
  uStack_d0 = uRam0000000141dca990;
  uStack_cc = DAT_141dca994;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419dffe0;
  uStack_d4 = uRam00000001419dffe4;
  uStack_d0 = uRam00000001419dffe8;
  uStack_cc = uRam00000001419dffec;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  local_d8 = _DAT_1419e0060;
  uStack_d4 = uRam00000001419e0064;
  uStack_d0 = uRam00000001419e0068;
  uStack_cc = uRam00000001419e006c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_d8);
  local_40 = local_88;
  puVar1 = (undefined4 *)FUN_14032f010(param_1,param_2,&local_68,2,&local_58);
  if (puVar1 != local_78) {
    local_d8 = *puVar1;
    uStack_d4 = puVar1[1];
    uStack_d0 = puVar1[2];
    uStack_cc = puVar1[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_d8);
  }
  local_38 = local_78;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_48);
  local_20 = 0x18;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  local_d8 = _DAT_141dca988;
  uStack_d4 = uRam0000000141dca98c;
  uStack_d0 = uRam0000000141dca990;
  uStack_cc = DAT_141dca994;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e00c0;
  uStack_d4 = uRam00000001419e00c4;
  uStack_d0 = uRam00000001419e00c8;
  uStack_cc = uRam00000001419e00cc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  local_d8 = _DAT_1419dff70;
  uStack_d4 = uRam00000001419dff74;
  uStack_d0 = uRam00000001419dff78;
  uStack_cc = uRam00000001419dff7c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_d8);
  local_40 = local_88;
  puVar1 = (undefined4 *)FUN_14032f010(param_1,param_2,&local_68,2,&local_58);
  if (puVar1 != local_78) {
    local_d8 = *puVar1;
    uStack_d4 = puVar1[1];
    uStack_d0 = puVar1[2];
    uStack_cc = puVar1[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_d8);
  }
  local_38 = local_78;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_48);
  local_20 = 0x1a;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419dff60;
  uStack_d4 = uRam00000001419dff64;
  uStack_d0 = uRam00000001419dff68;
  uStack_cc = uRam00000001419dff6c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_141dca978;
  uStack_d4 = uRam0000000141dca97c;
  uStack_d0 = uRam0000000141dca980;
  uStack_cc = DAT_141dca984;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_58);
  local_20 = 0x1b;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e01f0;
  uStack_d4 = uRam00000001419e01f4;
  uStack_d0 = uRam00000001419e01f8;
  uStack_cc = uRam00000001419e01fc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_141dca968;
  uStack_d4 = uRam0000000141dca96c;
  uStack_d0 = uRam0000000141dca970;
  uStack_cc = DAT_141dca974;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_58);
  local_20 = 0x1c;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e01c0;
  uStack_d4 = uRam00000001419e01c4;
  uStack_d0 = uRam00000001419e01c8;
  uStack_cc = uRam00000001419e01cc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_141dca838;
  uStack_d4 = uRam0000000141dca83c;
  uStack_d0 = uRam0000000141dca840;
  uStack_cc = DAT_141dca844;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_58);
  local_20 = 0x1d;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e0190;
  uStack_d4 = uRam00000001419e0194;
  uStack_d0 = uRam00000001419e0198;
  uStack_cc = uRam00000001419e019c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_141dca8d8;
  uStack_d4 = uRam0000000141dca8dc;
  uStack_d0 = uRam0000000141dca8e0;
  uStack_cc = DAT_141dca8e4;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_58);
  local_20 = 0x1f;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e01e0;
  uStack_d4 = uRam00000001419e01e4;
  uStack_d0 = uRam00000001419e01e8;
  uStack_cc = uRam00000001419e01ec;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_141dca888;
  uStack_d4 = uRam0000000141dca88c;
  uStack_d0 = uRam0000000141dca890;
  uStack_cc = DAT_141dca894;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_58);
  local_20 = 0x20;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e00a0;
  uStack_d4 = uRam00000001419e00a4;
  uStack_d0 = uRam00000001419e00a8;
  uStack_cc = uRam00000001419e00ac;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_141dca868;
  uStack_d4 = uRam0000000141dca86c;
  uStack_d0 = uRam0000000141dca870;
  uStack_cc = DAT_141dca874;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_58);
  local_20 = 0x21;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e0160;
  uStack_d4 = uRam00000001419e0164;
  uStack_d0 = uRam00000001419e0168;
  uStack_cc = uRam00000001419e016c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_141dca878;
  uStack_d4 = uRam0000000141dca87c;
  uStack_d0 = uRam0000000141dca880;
  uStack_cc = DAT_141dca884;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_58);
  local_20 = 0x23;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e00b0;
  uStack_d4 = uRam00000001419e00b4;
  uStack_d0 = uRam00000001419e00b8;
  uStack_cc = uRam00000001419e00bc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_141dca898;
  uStack_d4 = uRam0000000141dca89c;
  uStack_d0 = uRam0000000141dca8a0;
  uStack_cc = DAT_141dca8a4;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_58);
  local_20 = 0x24;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e00d0;
  uStack_d4 = uRam00000001419e00d4;
  uStack_d0 = uRam00000001419e00d8;
  uStack_cc = uRam00000001419e00dc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_141dca918;
  uStack_d4 = uRam0000000141dca91c;
  uStack_d0 = uRam0000000141dca920;
  uStack_cc = DAT_141dca924;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_58);
  local_20 = 0x25;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e01d0;
  uStack_d4 = uRam00000001419e01d4;
  uStack_d0 = uRam00000001419e01d8;
  uStack_cc = uRam00000001419e01dc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_141dca948;
  uStack_d4 = uRam0000000141dca94c;
  uStack_d0 = uRam0000000141dca950;
  uStack_cc = DAT_141dca954;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_58);
  local_20 = 0x26;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419dffa0;
  uStack_d4 = uRam00000001419dffa4;
  uStack_d0 = uRam00000001419dffa8;
  uStack_cc = uRam00000001419dffac;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_141dca8a8;
  uStack_d4 = uRam0000000141dca8ac;
  uStack_d0 = uRam0000000141dca8b0;
  uStack_cc = DAT_141dca8b4;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_58);
  local_20 = 0x28;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  local_d8 = _DAT_141dca988;
  uStack_d4 = uRam0000000141dca98c;
  uStack_d0 = uRam0000000141dca990;
  uStack_cc = DAT_141dca994;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e0000;
  uStack_d4 = uRam00000001419e0004;
  uStack_d0 = uRam00000001419e0008;
  uStack_cc = uRam00000001419e000c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  local_d8 = _DAT_1419dff90;
  uStack_d4 = uRam00000001419dff94;
  uStack_d0 = uRam00000001419dff98;
  uStack_cc = uRam00000001419dff9c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_d8);
  local_40 = local_88;
  puVar1 = (undefined4 *)FUN_14032f010(param_1,param_2,&local_68,2,&local_58);
  if (puVar1 != local_78) {
    local_d8 = *puVar1;
    uStack_d4 = puVar1[1];
    uStack_d0 = puVar1[2];
    uStack_cc = puVar1[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_d8);
  }
  local_38 = local_78;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_48);
  local_20 = 0x29;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  local_d8 = _DAT_141dca988;
  uStack_d4 = uRam0000000141dca98c;
  uStack_d0 = uRam0000000141dca990;
  uStack_cc = DAT_141dca994;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e01b0;
  uStack_d4 = uRam00000001419e01b4;
  uStack_d0 = uRam00000001419e01b8;
  uStack_cc = uRam00000001419e01bc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  local_d8 = _DAT_1419dfff0;
  uStack_d4 = uRam00000001419dfff4;
  uStack_d0 = uRam00000001419dfff8;
  uStack_cc = uRam00000001419dfffc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_d8);
  local_40 = local_88;
  puVar1 = (undefined4 *)FUN_14032f010(param_1,param_2,&local_68,2,&local_58);
  if (puVar1 != local_78) {
    local_d8 = *puVar1;
    uStack_d4 = puVar1[1];
    uStack_d0 = puVar1[2];
    uStack_cc = puVar1[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_d8);
  }
  local_38 = local_78;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_48);
  local_20 = 0x2a;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  local_d8 = _DAT_141dca988;
  uStack_d4 = uRam0000000141dca98c;
  uStack_d0 = uRam0000000141dca990;
  uStack_cc = DAT_141dca994;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e0010;
  uStack_d4 = uRam00000001419e0014;
  uStack_d0 = uRam00000001419e0018;
  uStack_cc = uRam00000001419e001c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  local_d8 = _DAT_1419e0110;
  uStack_d4 = uRam00000001419e0114;
  uStack_d0 = uRam00000001419e0118;
  uStack_cc = uRam00000001419e011c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_d8);
  local_40 = local_88;
  puVar1 = (undefined4 *)FUN_14032f010(param_1,param_2,&local_68,2,&local_58);
  if (puVar1 != local_78) {
    local_d8 = *puVar1;
    uStack_d4 = puVar1[1];
    uStack_d0 = puVar1[2];
    uStack_cc = puVar1[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_d8);
  }
  local_38 = local_78;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_48);
  local_20 = 0x2b;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  local_d8 = _DAT_141dca988;
  uStack_d4 = uRam0000000141dca98c;
  uStack_d0 = uRam0000000141dca990;
  uStack_cc = DAT_141dca994;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e00e0;
  uStack_d4 = uRam00000001419e00e4;
  uStack_d0 = uRam00000001419e00e8;
  uStack_cc = uRam00000001419e00ec;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  local_d8 = _DAT_1419e0050;
  uStack_d4 = uRam00000001419e0054;
  uStack_d0 = uRam00000001419e0058;
  uStack_cc = uRam00000001419e005c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_d8);
  local_40 = local_88;
  puVar1 = (undefined4 *)FUN_14032f010(param_1,param_2,&local_68,2,&local_58);
  if (puVar1 != local_78) {
    local_d8 = *puVar1;
    uStack_d4 = puVar1[1];
    uStack_d0 = puVar1[2];
    uStack_cc = puVar1[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_d8);
  }
  local_38 = local_78;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_48);
  local_20 = 0x2c;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  local_d8 = _DAT_141dca988;
  uStack_d4 = uRam0000000141dca98c;
  uStack_d0 = uRam0000000141dca990;
  uStack_cc = DAT_141dca994;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419dffc0;
  uStack_d4 = uRam00000001419dffc4;
  uStack_d0 = uRam00000001419dffc8;
  uStack_cc = uRam00000001419dffcc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  local_d8 = _DAT_1419e0080;
  uStack_d4 = uRam00000001419e0084;
  uStack_d0 = uRam00000001419e0088;
  uStack_cc = uRam00000001419e008c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_d8);
  local_40 = local_88;
  puVar1 = (undefined4 *)FUN_14032f010(param_1,param_2,&local_68,2,&local_58);
  if (puVar1 != local_78) {
    local_d8 = *puVar1;
    uStack_d4 = puVar1[1];
    uStack_d0 = puVar1[2];
    uStack_cc = puVar1[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_d8);
  }
  local_38 = local_78;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_48);
  local_20 = 0x2e;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  local_d8 = _DAT_141dca988;
  uStack_d4 = uRam0000000141dca98c;
  uStack_d0 = uRam0000000141dca990;
  uStack_cc = DAT_141dca994;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e0000;
  uStack_d4 = uRam00000001419e0004;
  uStack_d0 = uRam00000001419e0008;
  uStack_cc = uRam00000001419e000c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  local_d8 = _DAT_1419e0100;
  uStack_d4 = uRam00000001419e0104;
  uStack_d0 = uRam00000001419e0108;
  uStack_cc = uRam00000001419e010c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_d8);
  local_40 = local_88;
  puVar1 = (undefined4 *)FUN_14032f010(param_1,param_2,&local_68,2,&local_58);
  if (puVar1 != local_78) {
    local_d8 = *puVar1;
    uStack_d4 = puVar1[1];
    uStack_d0 = puVar1[2];
    uStack_cc = puVar1[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_d8);
  }
  local_38 = local_78;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_48);
  local_20 = 0x2f;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  local_d8 = _DAT_141dca988;
  uStack_d4 = uRam0000000141dca98c;
  uStack_d0 = uRam0000000141dca990;
  uStack_cc = DAT_141dca994;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e01b0;
  uStack_d4 = uRam00000001419e01b4;
  uStack_d0 = uRam00000001419e01b8;
  uStack_cc = uRam00000001419e01bc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  local_d8 = _DAT_1419e0020;
  uStack_d4 = uRam00000001419e0024;
  uStack_d0 = uRam00000001419e0028;
  uStack_cc = uRam00000001419e002c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_d8);
  local_40 = local_88;
  puVar1 = (undefined4 *)FUN_14032f010(param_1,param_2,&local_68,2,&local_58);
  if (puVar1 != local_78) {
    local_d8 = *puVar1;
    uStack_d4 = puVar1[1];
    uStack_d0 = puVar1[2];
    uStack_cc = puVar1[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_d8);
  }
  local_38 = local_78;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_48);
  local_20 = 0x30;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  local_d8 = _DAT_141dca988;
  uStack_d4 = uRam0000000141dca98c;
  uStack_d0 = uRam0000000141dca990;
  uStack_cc = DAT_141dca994;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e0010;
  uStack_d4 = uRam00000001419e0014;
  uStack_d0 = uRam00000001419e0018;
  uStack_cc = uRam00000001419e001c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  local_d8 = _DAT_1419e0120;
  uStack_d4 = uRam00000001419e0124;
  uStack_d0 = uRam00000001419e0128;
  uStack_cc = uRam00000001419e012c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_d8);
  local_40 = local_88;
  puVar1 = (undefined4 *)FUN_14032f010(param_1,param_2,&local_68,2,&local_58);
  if (puVar1 != local_78) {
    local_d8 = *puVar1;
    uStack_d4 = puVar1[1];
    uStack_d0 = puVar1[2];
    uStack_cc = puVar1[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_d8);
  }
  local_38 = local_78;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_48);
  local_20 = 0x31;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  local_d8 = _DAT_141dca988;
  uStack_d4 = uRam0000000141dca98c;
  uStack_d0 = uRam0000000141dca990;
  uStack_cc = DAT_141dca994;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e00e0;
  uStack_d4 = uRam00000001419e00e4;
  uStack_d0 = uRam00000001419e00e8;
  uStack_cc = uRam00000001419e00ec;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  local_d8 = _DAT_1419e00f0;
  uStack_d4 = uRam00000001419e00f4;
  uStack_d0 = uRam00000001419e00f8;
  uStack_cc = uRam00000001419e00fc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_d8);
  local_40 = local_88;
  puVar1 = (undefined4 *)FUN_14032f010(param_1,param_2,&local_68,2,&local_58);
  if (puVar1 != local_78) {
    local_d8 = *puVar1;
    uStack_d4 = puVar1[1];
    uStack_d0 = puVar1[2];
    uStack_cc = puVar1[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_d8);
  }
  local_38 = local_78;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_48);
  local_20 = 0x32;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  local_d8 = _DAT_141dca988;
  uStack_d4 = uRam0000000141dca98c;
  uStack_d0 = uRam0000000141dca990;
  uStack_cc = DAT_141dca994;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419dffc0;
  uStack_d4 = uRam00000001419dffc4;
  uStack_d0 = uRam00000001419dffc8;
  uStack_cc = uRam00000001419dffcc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  local_d8 = _DAT_1419e0170;
  uStack_d4 = uRam00000001419e0174;
  uStack_d0 = uRam00000001419e0178;
  uStack_cc = uRam00000001419e017c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_d8);
  local_40 = local_88;
  puVar1 = (undefined4 *)FUN_14032f010(param_1,param_2,&local_68,2,&local_58);
  if (puVar1 != local_78) {
    local_d8 = *puVar1;
    uStack_d4 = puVar1[1];
    uStack_d0 = puVar1[2];
    uStack_cc = puVar1[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_d8);
  }
  local_38 = local_78;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_48);
  local_20 = 0x34;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e0200;
  uStack_d4 = uRam00000001419e0204;
  uStack_d0 = uRam00000001419e0208;
  uStack_cc = uRam00000001419e020c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_141dca958;
  uStack_d4 = uRam0000000141dca95c;
  uStack_d0 = uRam0000000141dca960;
  uStack_cc = DAT_141dca964;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_58);
  local_20 = 0x35;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e0030;
  uStack_d4 = uRam00000001419e0034;
  uStack_d0 = uRam00000001419e0038;
  uStack_cc = uRam00000001419e003c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_141dca938;
  uStack_d4 = uRam0000000141dca93c;
  uStack_d0 = uRam0000000141dca940;
  uStack_cc = DAT_141dca944;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_58);
  local_20 = 0x36;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e0180;
  uStack_d4 = uRam00000001419e0184;
  uStack_d0 = uRam00000001419e0188;
  uStack_cc = uRam00000001419e018c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_141dca908;
  uStack_d4 = uRam0000000141dca90c;
  uStack_d0 = uRam0000000141dca910;
  uStack_cc = DAT_141dca914;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_58);
  local_20 = 0x37;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e01a0;
  uStack_d4 = uRam00000001419e01a4;
  uStack_d0 = uRam00000001419e01a8;
  uStack_cc = uRam00000001419e01ac;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_141dca8e8;
  uStack_d4 = uRam0000000141dca8ec;
  uStack_d0 = uRam0000000141dca8f0;
  uStack_cc = DAT_141dca8f4;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_58);
  local_20 = 0x39;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419dffb0;
  uStack_d4 = uRam00000001419dffb4;
  uStack_d0 = uRam00000001419dffb8;
  uStack_cc = uRam00000001419dffbc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_141dca928;
  uStack_d4 = uRam0000000141dca92c;
  uStack_d0 = uRam0000000141dca930;
  uStack_cc = DAT_141dca934;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_58);
  local_20 = 0x3a;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e0090;
  uStack_d4 = uRam00000001419e0094;
  uStack_d0 = uRam00000001419e0098;
  uStack_cc = uRam00000001419e009c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_141dca828;
  uStack_d4 = uRam0000000141dca82c;
  uStack_d0 = uRam0000000141dca830;
  uStack_cc = DAT_141dca834;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_58);
  local_20 = 0x3b;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e0040;
  uStack_d4 = uRam00000001419e0044;
  uStack_d0 = uRam00000001419e0048;
  uStack_cc = uRam00000001419e004c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_141dca808;
  uStack_d4 = uRam0000000141dca80c;
  uStack_d0 = uRam0000000141dca810;
  uStack_cc = DAT_141dca814;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_58);
  local_20 = 0x3c;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e0140;
  uStack_d4 = uRam00000001419e0144;
  uStack_d0 = uRam00000001419e0148;
  uStack_cc = uRam00000001419e014c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_141dca818;
  uStack_d4 = uRam0000000141dca81c;
  uStack_d0 = uRam0000000141dca820;
  uStack_cc = DAT_141dca824;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_58);
  local_20 = 0x3d;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e0070;
  uStack_d4 = uRam00000001419e0074;
  uStack_d0 = uRam00000001419e0078;
  uStack_cc = uRam00000001419e007c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_141dca858;
  uStack_d4 = uRam0000000141dca85c;
  uStack_d0 = uRam0000000141dca860;
  uStack_cc = DAT_141dca864;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_58);
  local_20 = 0x3e;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419dff50;
  uStack_d4 = uRam00000001419dff54;
  uStack_d0 = uRam00000001419dff58;
  uStack_cc = uRam00000001419dff5c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_141dca8f8;
  uStack_d4 = uRam0000000141dca8fc;
  uStack_d0 = uRam0000000141dca900;
  uStack_cc = DAT_141dca904;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_58);
  local_20 = 0x40;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = _DAT_1419dff80;
  uStack_d4 = uRam00000001419dff84;
  uStack_d0 = uRam00000001419dff88;
  uStack_cc = uRam00000001419dff8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  local_d8 = _DAT_1419e0130;
  uStack_d4 = uRam00000001419e0134;
  uStack_d0 = uRam00000001419e0138;
  uStack_cc = uRam00000001419e013c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_50 = local_a8;
  local_d8 = _DAT_141dca8c8;
  uStack_d4 = uRam0000000141dca8cc;
  uStack_d0 = uRam0000000141dca8d0;
  uStack_cc = DAT_141dca8d4;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_58);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_30;
  return param_3;
}

