// gml_Object_oRoomDoorTop_Step_0 @ 0x140d3f060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oRoomDoorTop_Step_0(undefined1 *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 **ppuVar5;
  bool bVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  code *pcVar11;
  ulonglong uVar12;
  undefined8 local_268;
  undefined4 uStack_260;
  uint uStack_25c;
  undefined1 *local_258;
  undefined4 uStack_250;
  uint uStack_24c;
  undefined1 *local_248;
  undefined4 uStack_240;
  uint uStack_23c;
  undefined1 *local_238;
  undefined4 uStack_230;
  uint uStack_22c;
  undefined1 *local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  undefined1 *local_218;
  undefined4 local_210;
  uint local_20c;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168 [3];
  undefined4 local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
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
  undefined1 *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  
  local_1c0 = "gml_Object_oRoomDoorSide_Draw_0";
  local_1b8 = 0;
  local_1c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c8;
  pcVar11 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_158,0x10,9,FUN_1400424d0,FUN_140041b30);
  uStack_1fc = 0xffffff;
  local_208 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  uStack_22c = 0xffffff;
  local_238 = (undefined1 *)0x0;
  uStack_21c = 0xffffff;
  local_228 = (undefined1 *)0x0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  uStack_18c = 0xffffff;
  local_198 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_bc = 0;
  local_c8 = (undefined1 *)0x4060000000000000;
  local_1b8 = 3;
  uStack_24c = 6;
  uVar12 = (ulonglong)pcVar11 & 0xffffffffffffff00;
  local_258 = param_1;
  FUN_140e87440(&local_258,DAT_141a0f7f8,0x80000000,&local_208,uVar12,0);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  uStack_24c = 0;
  local_258 = &DAT_bff0000000000000;
  iVar4 = FUN_140e851f0(&local_208,&local_258,DAT_141955260,0);
  bVar6 = iVar4 != 0;
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  puVar7 = local_c8;
  if (bVar6) {
    uStack_24c = 0;
    uStack_250 = local_c0;
    local_258 = local_c8;
    ppuVar5 = &local_258;
  }
  else {
    uStack_23c = 0;
    local_248 = (undefined1 *)0x0;
    ppuVar5 = &local_248;
  }
  uVar2 = uStack_23c;
  uVar1 = uStack_24c;
  local_268 = *ppuVar5;
  uStack_260 = *(undefined4 *)(ppuVar5 + 1);
  uStack_25c = *(undefined4 *)((longlong)ppuVar5 + 0xc);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140041b80(&local_1d8,&local_268);
  if ((bVar6) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_258);
  }
  if ((!bVar6) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_248);
  }
  local_1b8 = 4;
  uStack_24c = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_258 = param_1;
  FUN_140e87440(&local_258,DAT_141a0f7f8,0x80000000,&local_208,uVar12,0);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  uStack_24c = 0;
  local_258 = &DAT_bff0000000000000;
  iVar4 = FUN_140e851f0(&local_208,&local_258,DAT_141955260,0);
  bVar6 = iVar4 != 0;
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if (bVar6) {
    uStack_23c = 0;
    local_248 = (undefined1 *)0xc010000000000000;
    ppuVar5 = &local_248;
  }
  else {
    uStack_24c = 0;
    uStack_250 = local_c0;
    local_258 = puVar7;
    ppuVar5 = &local_258;
  }
  uVar2 = uStack_23c;
  uVar1 = uStack_24c;
  local_268 = *ppuVar5;
  uStack_260 = *(undefined4 *)(ppuVar5 + 1);
  uStack_25c = *(undefined4 *)((longlong)ppuVar5 + 0xc);
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_268);
  if ((bVar6) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_248);
  }
  if ((!bVar6) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_258);
  }
  local_1b8 = 6;
  FUN_140e9c240(0);
  local_1b8 = 7;
  uStack_24c = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_258 = param_1;
  FUN_140e87440(&local_258,DAT_1419fe0e8,0x80000000,&local_238,uVar12,0);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  uStack_24c = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_258 = param_1;
  FUN_140e87440(&local_258,DAT_1419fe158,0x80000000,&local_228,uVar12,0);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  uStack_25c = 0xd;
  local_268 = (undefined1 *)0x0;
  uStack_24c = uStack_21c;
  uStack_250 = uStack_220;
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
    local_258 = local_228;
  }
  else {
    FUN_1400419b0(&local_258,&local_228);
  }
  local_15c = 7;
  local_168[0] = 0x20;
  FUN_1400460e0(&local_258,local_168);
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  uStack_23c = uStack_22c;
  uStack_240 = uStack_230;
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
    local_248 = local_238;
  }
  else {
    FUN_1400419b0(&local_248,&local_238);
  }
  FUN_1400460e0(&local_248,&local_1e8);
  local_20c = uStack_22c;
  local_210 = uStack_230;
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
    local_218 = local_238;
  }
  else {
    FUN_1400419b0(&local_218,&local_238);
  }
  FUN_1400462a0(&local_218,&local_1d8);
  uVar3 = FUN_140e491e0(&local_268);
  puVar7 = local_258;
  if ((uStack_24c & 0xffffff) != 0) {
    puVar7 = (undefined1 *)FUN_140e4b060(&local_258);
  }
  puVar8 = local_248;
  if ((uStack_23c & 0xffffff) != 0) {
    puVar8 = (undefined1 *)FUN_140e4b060(&local_248);
  }
  puVar9 = local_228;
  if ((uStack_21c & 0xffffff) != 0) {
    puVar9 = (undefined1 *)FUN_140e4b060(&local_228);
  }
  puVar10 = local_218;
  if ((local_20c & 0xffffff) != 0) {
    puVar10 = (undefined1 *)FUN_140e4b060(&local_218);
  }
  uVar12 = CONCAT71((int7)(uVar12 >> 8),uVar3);
  FUN_140e9c1c0((float)(double)puVar10,(float)(double)puVar9,(float)(double)puVar8,
                (float)(double)puVar7,uVar12);
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_1b8 = 8;
  FUN_140e9c240(0xffffff);
  local_1b8 = 9;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uStack_25c = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_141a0a728,0x80000000,&local_178,uVar12,0);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_25c = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_141a0cfc8,0x80000000,&local_188,uVar12,0);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_25c = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_1419fe0e8,0x80000000,&local_238,uVar12,0);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_25c = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_1419fe158,0x80000000,&local_228,uVar12,0);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_25c = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_141a0f7f8,0x80000000,&local_208,uVar12,0);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_25c = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_141a0f938,0x80000000,&local_198,uVar12,0);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_25c = 6;
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_141a0a778,0x80000000,&local_1a8,uVar12 & 0xffffffffffffff00,0);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = (undefined1 *)local_178;
  uStack_260 = uStack_170;
  uStack_25c = uStack_16c;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_268);
  local_b8 = local_158;
  local_268 = (undefined1 *)local_188;
  uStack_260 = uStack_180;
  uStack_25c = uStack_17c;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_268);
  local_b0 = local_148;
  local_268 = local_238;
  uStack_260 = uStack_230;
  uStack_25c = uStack_22c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_268);
  local_a8 = local_138;
  local_268 = local_228;
  uStack_260 = uStack_220;
  uStack_25c = uStack_21c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_268);
  local_a0 = local_128;
  local_268 = (undefined1 *)local_208;
  uStack_260 = uStack_200;
  uStack_25c = uStack_1fc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_268);
  local_98 = local_118;
  local_268 = (undefined1 *)local_198;
  uStack_260 = uStack_190;
  uStack_25c = uStack_18c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_268);
  local_90 = local_108;
  local_268 = (undefined1 *)local_1a8;
  uStack_260 = uStack_1a0;
  uStack_25c = uStack_19c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_268);
  local_88 = local_f8;
  local_268 = (undefined1 *)CONCAT44(uRam00000001419ed7d4,_DAT_1419ed7d0);
  uStack_260 = uRam00000001419ed7d8;
  uStack_25c = uRam00000001419ed7dc;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_268);
  local_80 = local_e8;
  local_268 = (undefined1 *)CONCAT44(uRam00000001419ed7c4,_DAT_1419ed7c0);
  uStack_260 = uRam00000001419ed7c8;
  uStack_25c = uRam00000001419ed7cc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_268);
  local_78 = local_d8;
  FUN_1403ae470(param_1,param_2,&local_1f8,9,&local_b8);
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  _eh_vector_destructor_iterator_(local_158,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1c8;
  return;
}

