// gml_GlobalScript___InputIconSystem @ 0x1400a8eb0

undefined8 *
gml_GlobalScript___InputIconSystem(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_GlobalScript___InputIconConfigPlayStation";
  local_28 = 0;
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  _eh_vector_constructor_iterator_(local_88,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 9;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_141dc6070);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0de0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 10;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e1120);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e10c0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0xb;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0fc0);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0fb0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0xc;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e1110);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0f30);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0xe;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0df0);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0fa0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0xf;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0ec0);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0e10);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x10;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0e20);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e1150);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x11;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e1040);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e10d0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x13;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0e60);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e10e0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x14;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e1020);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0f40);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x16;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0e00);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0f10);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x17;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e1000);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0e90);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x18;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0f00);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e1030);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x19;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e1080);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e1010);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x1b;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0e30);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e10a0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x1c;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0e40);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0fe0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x1d;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e1050);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0ea0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x1e;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0f20);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0f80);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x1f;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e10b0);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0ef0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x21;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e1140);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e1060);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x22;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0f90);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e1100);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x23;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0ee0);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e10f0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x24;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0f60);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0f50);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x25;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e1160);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0ff0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x27;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0f70);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0e80);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x2a;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e1090);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0e70);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x2d;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0ed0);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e1130);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x2e;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0e50);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e0df0);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0fd0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x38;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_141dc6070);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0de0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x39;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e1120);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e10c0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x3a;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0fc0);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0fb0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x3b;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e1110);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0f30);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x3d;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0df0);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0fa0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x3e;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0ec0);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0e10);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x3f;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0e20);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e1150);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x40;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e1040);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e10d0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x42;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e1070);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e10e0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x43;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0eb0);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0f40);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x45;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0e00);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0f10);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x46;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e1000);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0e90);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x47;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0f00);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e1030);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x48;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e1080);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e1010);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x4a;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0e30);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e10a0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x4b;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0e40);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0fe0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x4c;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e1050);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0ea0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x4d;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0f20);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0f80);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x4e;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e10b0);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0ef0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x50;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e1140);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e1060);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x51;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0f90);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e1100);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x52;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0ee0);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e10f0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x53;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0f60);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0f50);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x54;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e1160);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0ff0);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  local_28 = 0x56;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140041c60(local_88,&DAT_141dcad38);
  local_b8 = local_88;
  FUN_1400441d0(local_78,&DAT_1419e0f70);
  local_b0 = local_78;
  FUN_1400441d0(local_68,&DAT_1419e1110);
  local_a8 = local_68;
  FUN_1400441d0(local_58,&DAT_1419e0e80);
  local_a0 = local_58;
  uVar1 = FUN_14032f010(param_1,param_2,&local_d8,2,&local_b8);
  FUN_140041c60(local_48,uVar1);
  local_98 = local_48;
  gml_Script_InputIconDefineKeyboard(param_1,param_2,&local_c8,3,&local_a8);
  FUN_140041b30(&local_d8);
  FUN_140041b30(&local_c8);
  _eh_vector_destructor_iterator_(local_88,0x10,5,FUN_140041b30);
  FUN_140041970(&local_38);
  return param_3;
}

