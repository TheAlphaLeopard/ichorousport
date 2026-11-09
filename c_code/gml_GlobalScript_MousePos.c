// gml_GlobalScript_MousePos @ 0x1403b7680

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_GlobalScript_MousePos(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar5;
  undefined8 uVar3;
  undefined8 **ppuVar4;
  undefined8 local_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined8 local_3b8;
  char *local_3b0;
  undefined4 local_3a8;
  undefined8 local_3a0;
  undefined4 local_394;
  undefined8 local_390;
  undefined4 local_384;
  undefined8 local_380;
  undefined4 local_374;
  undefined8 local_370;
  undefined4 local_364;
  undefined8 local_358;
  byte local_34c;
  undefined4 local_348 [3];
  byte local_33c;
  undefined1 local_338 [12];
  byte local_32c;
  undefined1 local_328 [12];
  byte local_31c;
  undefined1 local_318 [12];
  byte local_30c;
  undefined1 local_308 [12];
  byte local_2fc;
  undefined1 local_2f8 [12];
  byte local_2ec;
  undefined1 local_2e8 [12];
  byte local_2dc;
  undefined1 local_2d8 [12];
  byte local_2cc;
  undefined1 local_2c8 [12];
  byte local_2bc;
  undefined1 local_2b8 [12];
  byte local_2ac;
  undefined1 local_2a8 [12];
  byte local_29c;
  undefined1 local_298 [12];
  byte local_28c;
  undefined1 local_288 [12];
  byte local_27c;
  undefined1 local_278 [12];
  byte local_26c;
  undefined1 local_268 [12];
  byte local_25c;
  undefined1 local_258 [12];
  byte local_24c;
  undefined1 local_248 [12];
  byte local_23c;
  undefined1 local_238 [12];
  byte local_22c;
  undefined1 local_228 [12];
  byte local_21c;
  undefined1 local_218 [12];
  byte local_20c;
  undefined1 local_208 [12];
  byte local_1fc;
  undefined1 local_1f8 [12];
  byte local_1ec;
  undefined1 local_1e8 [12];
  byte local_1dc;
  undefined1 local_1d8 [12];
  byte local_1cc;
  undefined1 local_1c8 [12];
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined8 *local_138;
  undefined4 *local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_3b0 = "gml_GlobalScript_MIXERINIT";
  local_3a8 = 0;
  local_3b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_3b8;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_358,0x10,0x22,FUN_1400424d0,FUN_140041b30);
  local_364 = 0xffffff;
  local_370 = 0;
  local_374 = 0xffffff;
  local_380 = 0;
  local_384 = 0xffffff;
  local_390 = 0;
  local_394 = 0xffffff;
  local_3a0 = 0;
  local_3cc = 0xffffff;
  local_3d8 = 0;
  local_3bc = 0xffffff;
  local_3c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_3a8 = 3;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5518);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_3f8,gml_Script_MouseWindowX,param_1);
  if (&local_3f8 != puVar1) {
    local_3e8 = (undefined4)local_3f8;
    uStack_3e4 = local_3f8._4_4_;
    uStack_3e0 = uStack_3f0;
    uStack_3dc = uStack_3ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_3e8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_3ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3f8);
  }
  local_3a8 = 9;
  if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3d8);
  }
  local_3d8 = 0;
  local_3d0 = 0;
  local_3cc = 5;
  uStack_3ec = 0xf;
  local_3f8 = 0x10000020000004a;
  local_3e8 = 0x4a;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  FUN_140041b80(&local_358,&local_3e8);
  local_138 = &local_358;
  uStack_3ec = 0xf;
  local_3f8 = 0x10000020000005d;
  local_3e8 = 0x5d;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_348);
  }
  FUN_140041b80(local_348,&local_3e8);
  local_130 = local_348;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000071;
  local_3e8 = 0x71;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_338);
  }
  FUN_140041b80(local_338,&local_3e8);
  local_128 = local_338;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000072;
  local_3e8 = 0x72;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_328);
  }
  FUN_140041b80(local_328,&local_3e8);
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000073;
  local_3e8 = 0x73;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  local_120 = local_328;
  if ((1 << (local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_318);
  }
  FUN_140041b80(local_318,&local_3e8);
  local_118 = local_318;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000066;
  local_3e8 = 0x66;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_308);
  }
  FUN_140041b80(local_308,&local_3e8);
  local_110 = local_308;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000067;
  local_3e8 = 0x67;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2f8);
  }
  FUN_140041b80(local_2f8,&local_3e8);
  local_108 = local_2f8;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000068;
  local_3e8 = 0x68;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2e8);
  }
  FUN_140041b80(local_2e8,&local_3e8);
  local_100 = local_2e8;
  uStack_3ec = 0xf;
  local_3f8 = 0x10000020000009a;
  local_3e8 = 0x9a;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2d8);
  }
  FUN_140041b80(local_2d8,&local_3e8);
  local_f8 = local_2d8;
  uStack_3ec = 0xf;
  local_3f8 = 0x1000002000000a8;
  local_3e8 = 0xa8;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2c8);
  }
  FUN_140041b80(local_2c8,&local_3e8);
  local_f0 = local_2c8;
  uStack_3ec = 0xf;
  local_3f8 = 0x1000002000000aa;
  local_3e8 = 0xaa;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2b8);
  }
  FUN_140041b80(local_2b8,&local_3e8);
  local_e8 = local_2b8;
  uStack_3ec = 0xf;
  local_3f8 = 0x1000002000000a7;
  local_3e8 = 0xa7;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2a8);
  }
  FUN_140041b80(local_2a8,&local_3e8);
  local_e0 = local_2a8;
  uStack_3ec = 0xf;
  local_3f8 = 0x1000002000000ac;
  local_3e8 = 0xac;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_298);
  }
  FUN_140041b80(local_298,&local_3e8);
  local_d8 = local_298;
  uStack_3ec = 0xf;
  local_3f8 = 0x1000002000000cc;
  local_3e8 = 0xcc;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_288);
  }
  FUN_140041b80(local_288,&local_3e8);
  local_d0 = local_288;
  uStack_3ec = 0xf;
  local_3f8 = 0x1000002000000da;
  local_3e8 = 0xda;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_3e8);
  local_c8 = local_278;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000108;
  local_3e8 = 0x108;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  FUN_140041b80(local_268,&local_3e8);
  local_c0 = local_268;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000112;
  local_3e8 = 0x112;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_258);
  }
  FUN_140041b80(local_258,&local_3e8);
  local_b8 = local_258;
  uStack_3ec = 0xf;
  local_3f8 = 0x10000020000013d;
  local_3e8 = 0x13d;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_248);
  }
  FUN_140041b80(local_248,&local_3e8);
  local_b0 = local_248;
  uStack_3ec = 0xf;
  local_3f8 = 0x10000020000013e;
  local_3e8 = 0x13e;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_3e8);
  local_a8 = local_238;
  uStack_3ec = 0xf;
  local_3f8 = 0x10000020000013f;
  local_3e8 = 0x13f;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_3e8);
  local_a0 = local_228;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000140;
  local_3e8 = 0x140;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_3e8);
  local_98 = local_218;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000141;
  local_3e8 = 0x141;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_3e8);
  local_90 = local_208;
  uStack_3ec = 0xf;
  local_3f8 = 0x1000002000001b2;
  local_3e8 = 0x1b2;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_3e8);
  local_88 = local_1f8;
  uStack_3ec = 0xf;
  local_3f8 = 0x10000020000010e;
  local_3e8 = 0x10e;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_3e8);
  local_80 = local_1e8;
  uStack_3ec = 0xf;
  local_3f8 = 0x1000002000001a0;
  local_3e8 = 0x1a0;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_3e8);
  local_78 = local_1d8;
  uStack_3ec = 0xf;
  local_3f8 = 0x1000002000001a1;
  local_3e8 = 0x1a1;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_3e8);
  local_70 = local_1c8;
  uStack_3ec = 0xf;
  local_3f8 = 0x1000002000001a2;
  local_3e8 = 0x1a2;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_3e8);
  local_68 = local_1b8;
  uStack_3ec = 0xf;
  local_3f8 = 0x1000002000001a3;
  local_3e8 = 0x1a3;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_3e8);
  local_60 = local_1a8;
  uStack_3ec = 0xf;
  local_3f8 = 0x1000002000001a4;
  local_3e8 = 0x1a4;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_3e8);
  local_58 = local_198;
  uStack_3ec = 0xf;
  local_3f8 = 0x1000002000001a9;
  local_3e8 = 0x1a9;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_3e8);
  local_50 = local_188;
  uStack_3ec = 0xf;
  local_3f8 = 0x1000002000001aa;
  local_3e8 = 0x1aa;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_3e8);
  local_48 = local_178;
  uStack_3ec = 0xf;
  local_3f8 = 0x1000002000001ab;
  local_3e8 = 0x1ab;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_3e8);
  local_40 = local_168;
  uStack_3ec = 0xf;
  local_3f8 = 0x1000002000001ac;
  local_3e8 = 0x1ac;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_3e8);
  local_38 = local_158;
  uStack_3ec = 0xf;
  local_3f8 = 0x1000002000001ad;
  local_3e8 = 0x1ad;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_3e8);
  local_30 = local_148;
  uVar3 = CONCAT44(uVar5,DAT_1419fdca8);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_3d8,0x22,uVar3,&local_138);
  uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar1 != &local_370) {
    local_3e8 = *(undefined4 *)puVar1;
    uStack_3e4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_3e0 = *(undefined4 *)(puVar1 + 1);
    uStack_3dc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_364 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_370);
    }
    FUN_140041b80(&local_370,&local_3e8);
  }
  local_3a8 = 0x15;
  if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3d8);
  }
  local_3d8 = 0;
  local_3d0 = 0;
  local_3cc = 5;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000039;
  local_3e8 = 0x39;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  FUN_140041b80(&local_358,&local_3e8);
  local_138 = &local_358;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000059;
  local_3e8 = 0x59;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_348);
  }
  FUN_140041b80(local_348,&local_3e8);
  local_130 = local_348;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000065;
  local_3e8 = 0x65;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_338);
  }
  FUN_140041b80(local_338,&local_3e8);
  local_128 = local_338;
  uStack_3ec = 0xf;
  local_3f8 = 0x10000020000008f;
  local_3e8 = 0x8f;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_328);
  }
  FUN_140041b80(local_328,&local_3e8);
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000090;
  local_3e8 = 0x90;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  local_120 = local_328;
  if ((1 << (local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_318);
  }
  FUN_140041b80(local_318,&local_3e8);
  local_118 = local_318;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000091;
  local_3e8 = 0x91;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_308);
  }
  FUN_140041b80(local_308,&local_3e8);
  local_110 = local_308;
  uStack_3ec = 0xf;
  local_3f8 = 0x1000002000000c2;
  local_3e8 = 0xc2;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2f8);
  }
  FUN_140041b80(local_2f8,&local_3e8);
  local_108 = local_2f8;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000109;
  local_3e8 = 0x109;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2e8);
  }
  FUN_140041b80(local_2e8,&local_3e8);
  local_100 = local_2e8;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000117;
  local_3e8 = 0x117;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2d8);
  }
  FUN_140041b80(local_2d8,&local_3e8);
  local_f8 = local_2d8;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000118;
  local_3e8 = 0x118;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2c8);
  }
  FUN_140041b80(local_2c8,&local_3e8);
  local_f0 = local_2c8;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000119;
  local_3e8 = 0x119;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2b8);
  }
  FUN_140041b80(local_2b8,&local_3e8);
  local_e8 = local_2b8;
  uStack_3ec = 0xf;
  local_3f8 = 0x10000020000011a;
  local_3e8 = 0x11a;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2a8);
  }
  FUN_140041b80(local_2a8,&local_3e8);
  local_e0 = local_2a8;
  uStack_3ec = 0xf;
  local_3f8 = 0x10000020000013a;
  local_3e8 = 0x13a;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_298);
  }
  FUN_140041b80(local_298,&local_3e8);
  local_d8 = local_298;
  uStack_3ec = 0xf;
  local_3f8 = 0x10000020000013b;
  local_3e8 = 0x13b;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_288);
  }
  FUN_140041b80(local_288,&local_3e8);
  local_d0 = local_288;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000150;
  local_3e8 = 0x150;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_3e8);
  local_c8 = local_278;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000151;
  local_3e8 = 0x151;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  FUN_140041b80(local_268,&local_3e8);
  local_c0 = local_268;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000152;
  local_3e8 = 0x152;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_258);
  }
  FUN_140041b80(local_258,&local_3e8);
  local_b8 = local_258;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000153;
  local_3e8 = 0x153;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_248);
  }
  FUN_140041b80(local_248,&local_3e8);
  local_b0 = local_248;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000165;
  local_3e8 = 0x165;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_3e8);
  local_a8 = local_238;
  uVar3 = CONCAT44(uVar5,DAT_1419fdca8);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_3d8,0x13,uVar3,&local_138);
  uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar1 != &local_380) {
    local_3e8 = *(undefined4 *)puVar1;
    uStack_3e4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_3e0 = *(undefined4 *)(puVar1 + 1);
    uStack_3dc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_374 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_380);
    }
    FUN_140041b80(&local_380,&local_3e8);
  }
  local_3a8 = 0x1f;
  if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3d8);
  }
  local_3d8 = 0;
  local_3d0 = 0;
  local_3cc = 5;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000000;
  local_3e8 = 0;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  FUN_140041b80(&local_358,&local_3e8);
  local_138 = &local_358;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000001;
  local_3e8 = 1;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_348);
  }
  FUN_140041b80(local_348,&local_3e8);
  local_130 = local_348;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000002;
  local_3e8 = 2;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_338);
  }
  FUN_140041b80(local_338,&local_3e8);
  local_128 = local_338;
  uStack_3ec = 0xf;
  local_3f8 = 0x1000002000001f3;
  local_3e8 = 499;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_328);
  }
  FUN_140041b80(local_328,&local_3e8);
  uVar3 = CONCAT44(uVar5,DAT_1419fdca8);
  local_120 = local_328;
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_3d8,4,uVar3,&local_138);
  uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar1 != &local_390) {
    local_3e8 = *(undefined4 *)puVar1;
    uStack_3e4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_3e0 = *(undefined4 *)(puVar1 + 1);
    uStack_3dc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_384 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_390);
    }
    FUN_140041b80(&local_390,&local_3e8);
  }
  local_3a8 = 0x21;
  if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3d8);
  }
  local_3d8 = 0;
  local_3d0 = 0;
  local_3cc = 5;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000131;
  local_3e8 = 0x131;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  FUN_140041b80(&local_358,&local_3e8);
  local_138 = &local_358;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000132;
  local_3e8 = 0x132;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_348);
  }
  FUN_140041b80(local_348,&local_3e8);
  local_130 = local_348;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000133;
  local_3e8 = 0x133;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_338);
  }
  FUN_140041b80(local_338,&local_3e8);
  local_128 = local_338;
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000134;
  local_3e8 = 0x134;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_328);
  }
  FUN_140041b80(local_328,&local_3e8);
  uStack_3ec = 0xf;
  local_3f8 = 0x100000200000135;
  local_3e8 = 0x135;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  local_120 = local_328;
  if ((1 << (local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_318);
  }
  FUN_140041b80(local_318,&local_3e8);
  local_118 = local_318;
  puVar1 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_3d8,5,CONCAT44(uVar5,DAT_1419fdca8),&local_138);
  if (puVar1 != &local_3a0) {
    local_3e8 = *(undefined4 *)puVar1;
    uStack_3e4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_3e0 = *(undefined4 *)(puVar1 + 1);
    uStack_3dc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_394 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_3a0);
    }
    FUN_140041b80(&local_3a0,&local_3e8);
  }
  local_3a8 = 0x25;
  if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3d8);
  }
  local_3d8 = 0;
  local_3d0 = 0;
  local_3cc = 5;
  local_138 = &local_370;
  local_3e8 = _DAT_1419e46c0;
  uStack_3e4 = uRam00000001419e46c4;
  uStack_3e0 = uRam00000001419e46c8;
  uStack_3dc = uRam00000001419e46cc;
  if ((1 << (local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_348);
  }
  FUN_140041b80(local_348,&local_3e8);
  local_130 = local_348;
  gml_Script_MouseWindowX(param_1,param_2,&local_3d8,2,&local_138);
  local_3a8 = 0x26;
  if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3d8);
  }
  local_3d8 = 0;
  local_3d0 = 0;
  local_3cc = 5;
  local_138 = &local_380;
  local_3e8 = _DAT_1419e46d0;
  uStack_3e4 = uRam00000001419e46d4;
  uStack_3e0 = uRam00000001419e46d8;
  uStack_3dc = uRam00000001419e46dc;
  if ((1 << (local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_348);
  }
  FUN_140041b80(local_348,&local_3e8);
  local_130 = local_348;
  gml_Script_MouseWindowX(param_1,param_2,&local_3d8,2,&local_138);
  local_3a8 = 0x27;
  if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3d8);
  }
  local_3d8 = 0;
  local_3d0 = 0;
  local_3cc = 5;
  local_138 = &local_390;
  local_3e8 = _DAT_1419e46f0;
  uStack_3e4 = uRam00000001419e46f4;
  uStack_3e0 = uRam00000001419e46f8;
  uStack_3dc = uRam00000001419e46fc;
  if ((1 << (local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_348);
  }
  FUN_140041b80(local_348,&local_3e8);
  local_130 = local_348;
  gml_Script_MouseWindowX(param_1,param_2,&local_3d8,2,&local_138);
  local_3a8 = 0x28;
  if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3d8);
  }
  local_3d8 = 0;
  local_3d0 = 0;
  local_3cc = 5;
  local_138 = &local_3a0;
  local_3e8 = _DAT_1419e46f0;
  uStack_3e4 = uRam00000001419e46f4;
  uStack_3e0 = uRam00000001419e46f8;
  uStack_3dc = uRam00000001419e46fc;
  if ((1 << (local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_348);
  }
  FUN_140041b80(local_348,&local_3e8);
  local_130 = local_348;
  ppuVar4 = &local_138;
  gml_Script_MouseWindowX(param_1,param_2,&local_3d8,2,ppuVar4);
  uVar5 = (undefined4)((ulonglong)ppuVar4 >> 0x20);
  local_3a8 = 0x29;
  if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3d8);
  }
  local_3d8 = 0;
  local_3d0 = 0;
  local_3cc = 5;
  if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3c8);
  }
  local_3c8 = 0;
  local_3c0 = 0;
  local_3bc = 5;
  uStack_3ec = 0xf;
  local_3f8 = 0x10000020000001b;
  local_3e8 = 0x1b;
  uStack_3e4 = 0x1000002;
  uStack_3e0 = uStack_3f0;
  uStack_3dc = 0xf;
  if ((1 << (local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  FUN_140041b80(&local_358,&local_3e8);
  local_138 = &local_358;
  puVar2 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_3c8,1,CONCAT44(uVar5,DAT_1419fdca8),&local_138);
  if (puVar2 != local_348) {
    local_3e8 = *puVar2;
    uStack_3e4 = puVar2[1];
    uStack_3e0 = puVar2[2];
    uStack_3dc = puVar2[3];
    if ((1 << (local_33c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_348);
    }
    FUN_140041b80(local_348,&local_3e8);
  }
  local_130 = local_348;
  local_3e8 = _DAT_1419e46e0;
  uStack_3e4 = uRam00000001419e46e4;
  uStack_3e0 = uRam00000001419e46e8;
  uStack_3dc = uRam00000001419e46ec;
  if ((1 << (local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_338);
  }
  FUN_140041b80(local_338,&local_3e8);
  local_128 = local_338;
  gml_Script_MouseWindowX(param_1,param_2,&local_3d8,2,&local_130);
  if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3c8);
  }
  if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3d8);
  }
  if ((1 << ((byte)local_394 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3a0);
  }
  if ((1 << ((byte)local_384 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_390);
  }
  if ((1 << ((byte)local_374 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_380);
  }
  if ((1 << ((byte)local_364 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_370);
  }
  _eh_vector_destructor_iterator_(&local_358,0x10,0x22,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_3b8;
  return param_3;
}

