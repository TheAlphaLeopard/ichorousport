// gml_Object_oBgFlash_Draw_0 @ 0x140686b00

void gml_Object_oBgFlash_Draw_0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined1 **ppuVar7;
  undefined4 uVar8;
  ulonglong local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulonglong local_168;
  undefined4 local_160;
  uint local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  ulonglong local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  
  local_60 = "gml_Object_oBgClot_Step_0";
  local_58 = 0;
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  _eh_vector_constructor_iterator_(local_108,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_58 = 3;
  local_178 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_170 = DAT_1419df7b8;
  uStack_16c = DAT_1419df7bc;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_178);
  local_e8 = local_108;
  local_178 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_170 = DAT_1419df7b8;
  uStack_16c = DAT_1419df7bc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_178);
  local_e0 = local_f8;
  ppuVar7 = &local_e8;
  uVar2 = gml_Script_animcurve_lerp(param_1,param_2,&local_158,2,ppuVar7);
  uVar8 = (undefined4)((ulonglong)ppuVar7 >> 0x20);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    local_58 = 5;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_8c = 0;
    local_98 = 0;
    FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_98);
    local_58 = 6;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_9c = 0;
    local_a8 = 0;
    FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_a8);
  }
  local_58 = 10;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_d8);
  local_178 = local_d8;
  uStack_170 = uStack_d0;
  uStack_16c = uStack_cc;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_178);
  local_e8 = local_108;
  FUN_140e85f80(param_1,DAT_141a00d18,0x80000000,&local_b8);
  local_178 = local_d8;
  uStack_170 = uStack_d0;
  uStack_16c = uStack_cc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_178);
  local_e0 = local_f8;
  uVar2 = CONCAT44(uVar8,DAT_141a00c98);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,1,uVar2,&local_e0);
  uVar8 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_17c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_180 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
    local_188 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_188,puVar3);
  }
  uStack_18c = 0;
  local_198 = 0x4000000000000000;
  FUN_140046500(&local_188,&local_198);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_12c = local_ac;
  local_130 = local_b0;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
    local_138 = local_b8;
  }
  else {
    FUN_1400419b0(&local_138,&local_b8);
  }
  FUN_1400462a0(&local_138,&local_188);
  uVar2 = CONCAT44(uVar8,DAT_141a00e38);
  puVar4 = (ulonglong *)FUN_140e634e0(param_1,param_2,&local_158,1,uVar2,&local_e8);
  uVar8 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_15c = *(uint *)((longlong)puVar4 + 0xc);
  local_160 = (undefined4)puVar4[1];
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
    local_168 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_168,puVar4);
  }
  FUN_1400462a0(&local_168,&local_138);
  uVar6 = local_168;
  if ((local_15c & 0xffffff) != 0) {
    uVar6 = FUN_140e4b060(&local_168);
  }
  uStack_16c = 0;
  local_178 = uVar6 ^ 0x8000000000000000;
  uStack_10c = 0;
  uStack_110 = uStack_170;
  uStack_18c = 0;
  local_198 = 0x4014000000000000;
  local_118 = local_178;
  FUN_140046500(&local_118,&local_198);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = local_118;
  uStack_190 = uStack_110;
  uStack_18c = uStack_10c;
  FUN_140041b80(&local_128,&local_198);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_58 = 0xb;
  uStack_17c = local_11c;
  uStack_180 = local_120;
  bVar5 = (byte)local_11c & 0x1f;
  if ((1 << bVar5 & 0x46U) == 0) {
    local_188 = local_128;
  }
  else {
    FUN_1400419b0(&local_188,&local_128);
  }
  uStack_18c = 7;
  local_198 = CONCAT44(local_198._4_4_,0x1c);
  FUN_1400460e0(&local_188,&local_198);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_178 = local_188;
  uStack_170 = uStack_180;
  uStack_16c = uStack_17c;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_178);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_78);
  local_58 = 0xd;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_d8);
  local_178 = local_d8;
  uStack_170 = uStack_d0;
  uStack_16c = uStack_cc;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_178);
  local_e8 = local_108;
  FUN_140e85f80(param_1,DAT_141a00c48,0x80000000,&local_c8);
  local_178 = local_d8;
  uStack_170 = uStack_d0;
  uStack_16c = uStack_cc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_178);
  local_e0 = local_f8;
  uVar2 = CONCAT44(uVar8,DAT_141a00d58);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,1,uVar2,&local_e0);
  uVar8 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
  local_130 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
    local_138 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_138,puVar3);
  }
  uStack_18c = 0;
  local_198 = 0x4000000000000000;
  FUN_140046500(&local_138,&local_198);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_17c = local_bc;
  uStack_180 = local_c0;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
    local_188 = local_c8;
  }
  else {
    FUN_1400419b0(&local_188,&local_c8);
  }
  FUN_1400462a0(&local_188,&local_138);
  puVar4 = (ulonglong *)
           FUN_140e634e0(param_1,param_2,&local_158,1,CONCAT44(uVar8,DAT_141a00dd8),&local_e8);
  local_15c = *(uint *)((longlong)puVar4 + 0xc);
  local_160 = (undefined4)puVar4[1];
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
    local_168 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_168,puVar4);
  }
  FUN_1400462a0(&local_168,&local_188);
  uVar6 = local_168;
  if ((local_15c & 0xffffff) != 0) {
    uVar6 = FUN_140e4b060(&local_168);
  }
  uStack_16c = 0;
  local_178 = uVar6 ^ 0x8000000000000000;
  uStack_10c = 0;
  uStack_110 = uStack_170;
  uStack_18c = 0;
  local_198 = 0x4020000000000000;
  local_118 = local_178;
  FUN_140046500(&local_118,&local_198);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = local_118;
  uStack_190 = uStack_110;
  uStack_18c = uStack_10c;
  if ((1 << bVar5 & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_198);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_58 = 0xe;
  uStack_17c = local_11c;
  uStack_180 = local_120;
  bVar5 = (byte)local_11c & 0x1f;
  if ((1 << bVar5 & 0x46U) == 0) {
    local_188 = local_128;
  }
  else {
    FUN_1400419b0(&local_188,&local_128);
  }
  uStack_18c = 7;
  local_198 = CONCAT44(local_198._4_4_,0x13);
  FUN_1400460e0(&local_188,&local_198);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_178 = local_188;
  uStack_170 = uStack_180;
  uStack_16c = uStack_17c;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_178);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_88);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << bVar5 & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_108,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return;
}

