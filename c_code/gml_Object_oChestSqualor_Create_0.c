// gml_Object_oChestSqualor_Create_0 @ 0x1408a5b80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oChestSqualor_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
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
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_90 = "gml_Object_oChestOption_Draw_0";
  local_88 = 0;
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_128,0x10,9,FUN_1400424d0,FUN_140041b30);
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_88 = 3;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09918);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09a78);
  uStack_18c = 6;
  uVar4 = (ulonglong)pcVar3 & 0xffffffffffffff00;
  local_198 = param_1;
  FUN_140e87440(&local_198,DAT_1419fde18,0x80000000,&local_148,uVar4,0);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_18c = 6;
  uVar4 = uVar4 & 0xffffffffffffff00;
  local_198 = param_1;
  FUN_140e87440(&local_198,DAT_1419fec88,0x80000000,&local_158,uVar4,0);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_18c = 6;
  uVar4 = uVar4 & 0xffffffffffffff00;
  local_198 = param_1;
  FUN_140e87440(&local_198,DAT_1419fe0e8,0x80000000,&local_168,uVar4,0);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_18c = 6;
  local_198 = param_1;
  FUN_140e87440(&local_198,DAT_1419fe158,0x80000000,&local_178,uVar4 & 0xffffffffffffff00,0);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = (longlong *)local_148;
  uStack_190 = uStack_140;
  uStack_18c = uStack_13c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_198);
  local_78 = local_128;
  local_198 = (longlong *)local_158;
  uStack_190 = uStack_150;
  uStack_18c = uStack_14c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_198);
  local_70 = local_118;
  uStack_18c = local_15c;
  uStack_190 = local_160;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
    local_198 = (longlong *)local_168;
  }
  else {
    FUN_1400419b0(&local_198,&local_168);
  }
  FUN_1400460e0(&local_198,uVar1);
  local_188 = (undefined4)local_198;
  uStack_184 = local_198._4_4_;
  uStack_180 = uStack_190;
  uStack_17c = uStack_18c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_188);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_68 = local_108;
  uStack_18c = local_16c;
  uStack_190 = local_170;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
    local_198 = (longlong *)local_178;
  }
  else {
    FUN_1400419b0(&local_198,&local_178);
  }
  FUN_1400460e0(&local_198,uVar2);
  local_188 = (undefined4)local_198;
  uStack_184 = local_198._4_4_;
  uStack_180 = uStack_190;
  uStack_17c = uStack_18c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_188);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_60 = local_f8;
  local_188 = _DAT_1419e95d0;
  uStack_184 = uRam00000001419e95d4;
  uStack_180 = uRam00000001419e95d8;
  uStack_17c = uRam00000001419e95dc;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_188);
  local_58 = local_e8;
  local_188 = _DAT_1419e95a0;
  uStack_184 = uRam00000001419e95a4;
  uStack_180 = uRam00000001419e95a8;
  uStack_17c = uRam00000001419e95ac;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_188);
  local_50 = local_d8;
  local_188 = _DAT_1419e95b0;
  uStack_184 = uRam00000001419e95b4;
  uStack_180 = uRam00000001419e95b8;
  uStack_17c = uRam00000001419e95bc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_188);
  local_188 = _DAT_1419e95c0;
  uStack_184 = uRam00000001419e95c4;
  uStack_180 = uRam00000001419e95c8;
  uStack_17c = uRam00000001419e95cc;
  local_48 = local_c8;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_188);
  local_40 = local_b8;
  local_188 = _DAT_1419e9590;
  uStack_184 = uRam00000001419e9594;
  uStack_180 = uRam00000001419e9598;
  uStack_17c = uRam00000001419e959c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_188);
  local_38 = local_a8;
  gml_Script_find_target(param_1,param_2,&local_138,9,&local_78);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(local_128,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return;
}

