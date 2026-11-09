// gml_Object_oEnemySpider_Create_0 @ 0x140a7ee70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oEnemySpider_Create_0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined4 local_e8 [3];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
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
  undefined1 *local_40;
  undefined1 *local_38;
  undefined8 *local_30;
  
  local_80 = "gml_Script_anon@157@gml_Object_oEnemySlime_Other_76";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 6;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(local_108,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_10c = 0;
  local_118 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 7;
  uStack_12c = 0xf;
  local_138 = 0x100000200000106;
  local_148 = 0x106;
  uStack_144 = 0x1000002;
  uStack_140 = uStack_130;
  uStack_13c = 0xf;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_148);
  local_68 = local_108;
  uStack_12c = 0xf;
  local_138 = 0x100000200000107;
  local_148 = 0x107;
  uStack_144 = 0x1000002;
  uStack_140 = uStack_130;
  uStack_13c = 0xf;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_148);
  local_60 = local_f8;
  puVar1 = (undefined4 *)FUN_140e78db0(&local_128,2,&local_68);
  if (puVar1 != local_e8) {
    local_148 = *puVar1;
    uStack_144 = puVar1[1];
    uStack_140 = puVar1[2];
    uStack_13c = puVar1[3];
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
  }
  local_58 = local_e8;
  local_148 = _DAT_1419eb110;
  uStack_144 = uRam00000001419eb114;
  uStack_140 = uRam00000001419eb118;
  uStack_13c = uRam00000001419eb11c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_148);
  local_50 = local_d8;
  local_148 = _DAT_1419df7a0;
  uStack_144 = uRam00000001419df7a4;
  uStack_140 = uRam00000001419df7a8;
  uStack_13c = uRam00000001419df7ac;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_148);
  local_48 = local_c8;
  local_148 = (undefined4)DAT_1419df7b0;
  uStack_144 = DAT_1419df7b0._4_4_;
  uStack_140 = DAT_1419df7b8;
  uStack_13c = DAT_1419df7bc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_148);
  local_40 = local_b8;
  local_148 = (undefined4)DAT_1419df7b0;
  uStack_144 = DAT_1419df7b0._4_4_;
  uStack_140 = DAT_1419df7b8;
  uStack_13c = DAT_1419df7bc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_148);
  local_38 = local_a8;
  local_98 = FUN_140e794b0(0,0x3ff4cccccccccccd);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_30 = &local_98;
  FUN_140e634e0(param_1,param_2,&local_118,6,CONCAT44(uVar2,DAT_141a0a2e8),&local_58);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_108,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

