// gml_Script_anon_557_gml_Object_oEnemyMoistMan_Other_76 @ 0x1409f3580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_557_gml_Object_oEnemyMoistMan_Other_76
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined4 local_f8 [3];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined4 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  undefined8 *local_30;
  
  local_80 = "gml_Script_anon@193@gml_Object_oEnemyMoistMan_Other_76";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0xb;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_118,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_12c = 0;
  local_138 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0xc;
  uStack_11c = 0xf;
  local_128 = 0x100000200000106;
  local_148 = 0x106;
  uStack_144 = 0x1000002;
  uStack_140 = uStack_120;
  uStack_13c = 0xf;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_148);
  local_68 = local_118;
  uStack_11c = 0xf;
  local_128 = 0x100000200000107;
  local_148 = 0x107;
  uStack_144 = 0x1000002;
  uStack_140 = uStack_120;
  uStack_13c = 0xf;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_148);
  local_60 = local_108;
  puVar1 = (undefined4 *)FUN_140e78db0(&local_98,2,&local_68);
  if (puVar1 != local_f8) {
    local_148 = *puVar1;
    uStack_144 = puVar1[1];
    uStack_140 = puVar1[2];
    uStack_13c = puVar1[3];
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_148);
  }
  local_58 = local_f8;
  local_148 = _DAT_1419eab60;
  uStack_144 = uRam00000001419eab64;
  uStack_140 = uRam00000001419eab68;
  uStack_13c = uRam00000001419eab6c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
  local_50 = local_e8;
  local_148 = _DAT_1419df7a0;
  uStack_144 = uRam00000001419df7a4;
  uStack_140 = uRam00000001419df7a8;
  uStack_13c = uRam00000001419df7ac;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_148);
  local_48 = local_d8;
  local_148 = (undefined4)DAT_1419df7b0;
  uStack_144 = DAT_1419df7b0._4_4_;
  uStack_140 = DAT_1419df7b8;
  uStack_13c = DAT_1419df7bc;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_148);
  local_40 = &local_c8;
  local_148 = (undefined4)DAT_1419df7b0;
  uStack_144 = DAT_1419df7b0._4_4_;
  uStack_140 = DAT_1419df7b8;
  uStack_13c = DAT_1419df7bc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_148);
  local_38 = local_b8;
  local_a8 = FUN_140e794b0(0xcccccccd,0x3ff4cccccccccccd);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_30 = &local_a8;
  uVar2 = CONCAT44(uVar3,DAT_141a0a2e8);
  FUN_140e634e0(param_1,param_2,&local_138,6,uVar2,&local_58);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_78 = 0xd;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uStack_11c = 0xf;
  local_128 = 0x10000020000018d;
  local_148 = 0x18d;
  uStack_144 = 0x1000002;
  uStack_140 = uStack_120;
  uStack_13c = 0xf;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_148);
  local_68 = local_118;
  local_148 = _DAT_1419eab60;
  uStack_144 = uRam00000001419eab64;
  uStack_140 = uRam00000001419eab68;
  uStack_13c = uRam00000001419eab6c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_148);
  local_60 = local_108;
  local_148 = _DAT_1419df7a0;
  uStack_144 = uRam00000001419df7a4;
  uStack_140 = uRam00000001419df7a8;
  uStack_13c = uRam00000001419df7ac;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_148);
  local_58 = local_f8;
  local_148 = (undefined4)DAT_1419df7b0;
  uStack_144 = DAT_1419df7b0._4_4_;
  uStack_140 = DAT_1419df7b8;
  uStack_13c = DAT_1419df7bc;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
  local_50 = local_e8;
  local_148 = (undefined4)DAT_1419df7b0;
  uStack_144 = DAT_1419df7b0._4_4_;
  uStack_140 = DAT_1419df7b8;
  uStack_13c = DAT_1419df7bc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_148);
  local_48 = local_d8;
  local_c8 = FUN_140e794b0(0xcccccccd,0x3ff8000000000000);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_40 = &local_c8;
  FUN_140e634e0(param_1,param_2,&local_138,6,CONCAT44(uVar3,DAT_141a0a2e8),&local_68);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(local_118,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

