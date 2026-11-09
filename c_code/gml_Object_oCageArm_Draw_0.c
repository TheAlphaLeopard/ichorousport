// gml_Object_oCageArm_Draw_0 @ 0x140881f60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Object_oCageArm_Draw_0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  double local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  double *local_30;
  
  local_80 = "gml_Script_anon@163@gml_Object_oCageArm_Other_76";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 8;
  uVar1 = 1;
  _eh_vector_constructor_iterator_(local_e8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 10;
  uStack_5c = 0xf;
  local_68 = 0x10000020000018e;
  local_108 = 0x18e;
  uStack_104 = 0x1000002;
  uStack_100 = uStack_60;
  uStack_fc = 0xf;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_108);
  local_58 = local_e8;
  local_108 = _DAT_1419e92f0;
  uStack_104 = uRam00000001419e92f4;
  uStack_100 = uRam00000001419e92f8;
  uStack_fc = uRam00000001419e92fc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_108);
  local_50 = local_d8;
  local_108 = _DAT_1419df7a0;
  uStack_104 = uRam00000001419df7a4;
  uStack_100 = uRam00000001419df7a8;
  uStack_fc = uRam00000001419df7ac;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_108);
  local_48 = local_c8;
  local_108 = (undefined4)DAT_1419df7b0;
  uStack_104 = DAT_1419df7b0._4_4_;
  uStack_100 = DAT_1419df7b8;
  uStack_fc = DAT_1419df7bc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_108);
  local_40 = local_b8;
  local_108 = (undefined4)DAT_1419df7b0;
  uStack_104 = DAT_1419df7b0._4_4_;
  uStack_100 = DAT_1419df7b8;
  uStack_fc = DAT_1419df7bc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_108);
  local_38 = local_a8;
  local_98 = (double)FUN_140e794b0(0x9999999a,0x3fc999999999999a);
  local_98 = local_98 + 0.95;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_30 = &local_98;
  FUN_140e634e0(param_1,param_2,&local_f8,6,CONCAT44(uVar1,DAT_141a0a2e8),&local_58);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

