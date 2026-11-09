// gml_Object_obj_example_rebinding_player_Step_0 @ 0x140688480

void gml_Object_obj_example_rebinding_player_Step_0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  ulonglong local_188;
  undefined4 local_180;
  uint local_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulonglong local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  ulonglong local_118;
  undefined4 local_110;
  uint local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  ulonglong local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  
  local_70 = "gml_Object_oBgPest_Step_0";
  local_68 = 0;
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  _eh_vector_constructor_iterator_(local_c8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_68 = 4;
  local_178 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_170 = DAT_1419df7b8;
  uStack_16c = DAT_1419df7bc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_178);
  local_60 = local_c8;
  local_178 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_170 = DAT_1419df7b8;
  uStack_16c = DAT_1419df7bc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_178);
  local_58 = local_b8;
  uVar2 = gml_Script_animcurve_lerp(param_1,param_2,&local_158,2,&local_60);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    local_68 = 6;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_cc = 0;
    local_d8 = 0;
    FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_d8);
    local_68 = 7;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_dc = 0;
    local_e8 = 0;
    FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_e8);
  }
  local_68 = 0xb;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uStack_15c = 0xf;
  local_168 = 0x100000000000058;
  uVar2 = param_1;
  FUN_140e87170(&local_168,DAT_1419fe0e8,0x80000000,&local_f8,param_1,param_2);
  uVar6 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140e85f80(param_1,DAT_141a00d18,0x80000000,&local_108);
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_88);
  local_178 = local_88;
  uStack_170 = uStack_80;
  uStack_16c = uStack_7c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_178);
  local_60 = local_c8;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_158,1,CONCAT44(uVar6,DAT_141a00c98),&local_60);
  uStack_18c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_190 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
    local_198 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_198,puVar3);
  }
  uStack_19c = 0;
  local_1a8 = 0x4000000000000000;
  FUN_140046500(&local_198,&local_1a8);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_13c = local_fc;
  local_140 = local_100;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_148 = local_108;
  }
  else {
    FUN_1400419b0(&local_148,&local_108);
  }
  FUN_1400462a0(&local_148,&local_198);
  local_17c = local_ec;
  local_180 = local_f0;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
    local_188 = local_f8;
  }
  else {
    FUN_1400419b0(&local_188,&local_f8);
  }
  FUN_1400462a0(&local_188,&local_148);
  uVar5 = local_188;
  if ((local_17c & 0xffffff) != 0) {
    uVar5 = FUN_140e4b060(&local_188);
  }
  uStack_16c = 0;
  local_178 = uVar5 ^ 0x8000000000000000;
  uStack_15c = 0;
  uStack_160 = uStack_170;
  uStack_19c = 0;
  local_1a8 = 0x4014000000000000;
  local_168 = local_178;
  FUN_140046500(&local_168,&local_1a8);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = local_168;
  uStack_1a0 = uStack_160;
  uStack_19c = uStack_15c;
  FUN_140041b80(&local_138,&local_1a8);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_68 = 0xc;
  uStack_18c = uStack_12c;
  uStack_190 = uStack_130;
  bVar4 = (byte)uStack_12c & 0x1f;
  if ((1 << bVar4 & 0x46U) == 0) {
    local_198 = local_138;
  }
  else {
    FUN_1400419b0(&local_198,&local_138);
  }
  uStack_19c = 7;
  local_1a8 = CONCAT44(local_1a8._4_4_,0x1c);
  FUN_1400460e0(&local_198,&local_1a8);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_178 = local_198;
  uStack_170 = uStack_190;
  uStack_16c = uStack_18c;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_178);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_98);
  local_68 = 0xe;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uStack_19c = 0xf;
  local_1a8 = 0x100000000000058;
  uVar2 = param_1;
  FUN_140e87170(&local_1a8,DAT_1419fe158,0x80000000,&local_118,param_1,param_2);
  uVar6 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140e85f80(param_1,DAT_141a00c48,0x80000000,&local_128);
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_88);
  local_178 = local_88;
  uStack_170 = uStack_80;
  uStack_16c = uStack_7c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_178);
  local_60 = local_c8;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_158,1,CONCAT44(uVar6,DAT_141a00d58),&local_60);
  local_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
  local_140 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
    local_148 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_148,puVar3);
  }
  uStack_19c = 0;
  local_1a8 = 0x4000000000000000;
  FUN_140046500(&local_148,&local_1a8);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_18c = local_11c;
  uStack_190 = local_120;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
    local_198 = local_128;
  }
  else {
    FUN_1400419b0(&local_198,&local_128);
  }
  FUN_1400462a0(&local_198,&local_148);
  local_17c = local_10c;
  local_180 = local_110;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
    local_188 = local_118;
  }
  else {
    FUN_1400419b0(&local_188,&local_118);
  }
  FUN_1400462a0(&local_188,&local_198);
  uVar5 = local_188;
  if ((local_17c & 0xffffff) != 0) {
    uVar5 = FUN_140e4b060(&local_188);
  }
  uStack_16c = 0;
  local_178 = uVar5 ^ 0x8000000000000000;
  uStack_15c = 0;
  uStack_160 = uStack_170;
  uStack_19c = 0;
  local_1a8 = 0x4020000000000000;
  local_168 = local_178;
  FUN_140046500(&local_168,&local_1a8);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = local_168;
  uStack_1a0 = uStack_160;
  uStack_19c = uStack_15c;
  if ((1 << bVar4 & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_1a8);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_68 = 0xf;
  local_178 = local_138;
  uStack_170 = uStack_130;
  uStack_16c = uStack_12c;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_178);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_a8);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return;
}

