// gml_Script_lighting_system_tilemap @ 0x1403ac000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_lighting_system_tilemap(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined8 local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  char *local_390;
  undefined4 local_388;
  undefined8 local_380;
  undefined4 local_374;
  undefined8 local_370;
  undefined4 local_364;
  undefined8 local_360;
  undefined4 local_354;
  undefined8 local_350;
  undefined4 local_344;
  undefined8 local_340;
  undefined4 local_334;
  undefined8 local_330;
  undefined4 local_324;
  undefined8 local_320;
  undefined4 local_314;
  undefined8 local_310;
  undefined4 local_304;
  undefined8 local_300;
  undefined4 local_2f4;
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
  undefined8 local_228;
  byte local_21c;
  undefined4 local_218 [3];
  byte local_20c;
  undefined4 local_208 [3];
  byte local_1fc;
  undefined4 local_1f8 [3];
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
  undefined4 local_198 [3];
  byte local_18c;
  undefined4 local_188 [3];
  byte local_17c;
  undefined4 local_178 [3];
  byte local_16c;
  undefined4 local_168 [3];
  byte local_15c;
  undefined4 local_158 [3];
  byte local_14c;
  undefined4 local_148 [3];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
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
  undefined8 *local_b8;
  undefined4 *local_b0;
  undefined4 *local_a8;
  undefined4 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_390 = "gml_Script___new_lighting_system";
  local_398 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_398;
  local_388 = 0x23;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_2e8,0x10,0x1d,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f54f8);
  uStack_39c = 0xffffff;
  local_3a8 = 0;
  local_3ac = 0;
  local_3b8 = 0;
  local_2f4 = 0;
  local_300 = 0;
  local_304 = 0;
  local_310 = 0;
  local_314 = 0;
  local_320 = 0;
  local_324 = 0;
  local_330 = 0;
  local_334 = 0;
  local_340 = 0;
  local_344 = 0;
  local_350 = 0;
  local_354 = 0;
  local_360 = 0;
  local_364 = 0;
  local_370 = 0;
  local_374 = 0;
  local_380 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_388 = 0x24;
  uStack_3bc = 0xf;
  local_3c8 = 0x10000080000000d;
  local_3d8 = 0xd;
  uStack_3d4 = 0x1000008;
  uStack_3d0 = uStack_3c0;
  uStack_3cc = 0xf;
  if ((1 << (local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2e8);
  }
  FUN_140041b80(local_2e8,&local_3d8);
  local_118 = local_2e8;
  local_3d8 = _DAT_141dd2428;
  uStack_3d4 = uRam0000000141dd242c;
  uStack_3d0 = uRam0000000141dd2430;
  uStack_3cc = DAT_141dd2434;
  if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2d8);
  }
  FUN_140041b80(local_2d8,&local_3d8);
  local_110 = local_2d8;
  uStack_3bc = 0xf;
  local_3c8 = 0x10000080000000d;
  local_3d8 = 0xd;
  uStack_3d4 = 0x1000008;
  uStack_3d0 = uStack_3c0;
  uStack_3cc = 0xf;
  if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2c8);
  }
  FUN_140041b80(local_2c8,&local_3d8);
  local_108 = local_2c8;
  local_3d8 = _DAT_141dd24e8;
  uStack_3d4 = uRam0000000141dd24ec;
  uStack_3d0 = uRam0000000141dd24f0;
  uStack_3cc = DAT_141dd24f4;
  if ((1 << (local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2b8);
  }
  FUN_140041b80(local_2b8,&local_3d8);
  local_100 = local_2b8;
  uStack_3bc = 0xf;
  local_3c8 = 0x10000080000000d;
  local_3d8 = 0xd;
  uStack_3d4 = 0x1000008;
  uStack_3d0 = uStack_3c0;
  uStack_3cc = 0xf;
  if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2a8);
  }
  FUN_140041b80(local_2a8,&local_3d8);
  local_f8 = local_2a8;
  local_3d8 = _DAT_141dd2438;
  uStack_3d4 = uRam0000000141dd243c;
  uStack_3d0 = uRam0000000141dd2440;
  uStack_3cc = DAT_141dd2444;
  if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_298);
  }
  FUN_140041b80(local_298,&local_3d8);
  local_f0 = local_298;
  uStack_3bc = 0xf;
  local_3c8 = 0x10000080000000d;
  local_3d8 = 0xd;
  uStack_3d4 = 0x1000008;
  uStack_3d0 = uStack_3c0;
  uStack_3cc = 0xf;
  if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_288);
  }
  FUN_140041b80(local_288,&local_3d8);
  local_e8 = local_288;
  local_3d8 = _DAT_141dd2468;
  uStack_3d4 = uRam0000000141dd246c;
  uStack_3d0 = uRam0000000141dd2470;
  uStack_3cc = DAT_141dd2474;
  if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_3d8);
  local_e0 = local_278;
  uStack_3bc = 0xf;
  local_3c8 = 0x10000080000000c;
  local_3d8 = 0xc;
  uStack_3d4 = 0x1000008;
  uStack_3d0 = uStack_3c0;
  uStack_3cc = 0xf;
  if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  FUN_140041b80(local_268,&local_3d8);
  local_d8 = local_268;
  local_3d8 = _DAT_141dd24e8;
  uStack_3d4 = uRam0000000141dd24ec;
  uStack_3d0 = uRam0000000141dd24f0;
  uStack_3cc = DAT_141dd24f4;
  if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_258);
  }
  FUN_140041b80(local_258,&local_3d8);
  local_d0 = local_258;
  uStack_3bc = 0xf;
  local_3c8 = 0x10000080000000c;
  local_3d8 = 0xc;
  uStack_3d4 = 0x1000008;
  uStack_3d0 = uStack_3c0;
  uStack_3cc = 0xf;
  if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_248);
  }
  FUN_140041b80(local_248,&local_3d8);
  local_c8 = local_248;
  local_3d8 = _DAT_141dd24f8;
  uStack_3d4 = uRam0000000141dd24fc;
  uStack_3d0 = uRam0000000141dd2500;
  uStack_3cc = DAT_141dd2504;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_3d8);
  local_c0 = local_238;
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_3c8,gml_Script_lighting_system,0);
  if (&local_3c8 != puVar1) {
    local_3d8 = (undefined4)local_3c8;
    uStack_3d4 = local_3c8._4_4_;
    uStack_3d0 = uStack_3c0;
    uStack_3cc = uStack_3bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_3d8);
  }
  FUN_140e60910(1);
  if (puVar1 != &local_228) {
    local_3d8 = *(undefined4 *)puVar1;
    uStack_3d4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_3d0 = *(undefined4 *)(puVar1 + 1);
    uStack_3cc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_3d8);
  }
  if ((1 << ((byte)uStack_3bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3c8);
  }
  local_b8 = &local_228;
  puVar2 = (undefined4 *)FUN_140e8da20(&local_300,param_1,0);
  if (puVar2 != local_218) {
    local_3d8 = *puVar2;
    uStack_3d4 = puVar2[1];
    uStack_3d0 = puVar2[2];
    uStack_3cc = puVar2[3];
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_3d8);
  }
  local_b0 = local_218;
  puVar2 = (undefined4 *)FUN_140e8da20(&local_310,param_1,0);
  if (puVar2 != local_208) {
    local_3d8 = *puVar2;
    uStack_3d4 = puVar2[1];
    uStack_3d0 = puVar2[2];
    uStack_3cc = puVar2[3];
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_3d8);
  }
  local_a8 = local_208;
  puVar2 = (undefined4 *)FUN_140e8da20(&local_320,param_1,0);
  if (puVar2 != local_1f8) {
    local_3d8 = *puVar2;
    uStack_3d4 = puVar2[1];
    uStack_3d0 = puVar2[2];
    uStack_3cc = puVar2[3];
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_3d8);
  }
  local_a0 = local_1f8;
  local_3d8 = _DAT_1419e46b0;
  uStack_3d4 = uRam00000001419e46b4;
  uStack_3d0 = uRam00000001419e46b8;
  uStack_3cc = uRam00000001419e46bc;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_3d8);
  local_98 = local_1e8;
  local_3d8 = _DAT_1419e46b0;
  uStack_3d4 = uRam00000001419e46b4;
  uStack_3d0 = uRam00000001419e46b8;
  uStack_3cc = uRam00000001419e46bc;
  if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_3d8);
  local_90 = local_1d8;
  local_3d8 = _DAT_1419e46b0;
  uStack_3d4 = uRam00000001419e46b4;
  uStack_3d0 = uRam00000001419e46b8;
  uStack_3cc = uRam00000001419e46bc;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_3d8);
  local_88 = local_1c8;
  local_3d8 = _DAT_1419e46b0;
  uStack_3d4 = uRam00000001419e46b4;
  uStack_3d0 = uRam00000001419e46b8;
  uStack_3cc = uRam00000001419e46bc;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_3d8);
  local_80 = local_1b8;
  local_3d8 = _DAT_1419e46b0;
  uStack_3d4 = uRam00000001419e46b4;
  uStack_3d0 = uRam00000001419e46b8;
  uStack_3cc = uRam00000001419e46bc;
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_3d8);
  local_78 = local_1a8;
  uVar4 = CONCAT44(uVar3,DAT_141a04778);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_330,2,uVar4,&local_118);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar2 != local_198) {
    local_3d8 = *puVar2;
    uStack_3d4 = puVar2[1];
    uStack_3d0 = puVar2[2];
    uStack_3cc = puVar2[3];
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_3d8);
  }
  local_70 = local_198;
  uVar4 = CONCAT44(uVar3,DAT_141a04778);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_340,2,uVar4,&local_108);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar2 != local_188) {
    local_3d8 = *puVar2;
    uStack_3d4 = puVar2[1];
    uStack_3d0 = puVar2[2];
    uStack_3cc = puVar2[3];
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_3d8);
  }
  local_68 = local_188;
  uVar4 = CONCAT44(uVar3,DAT_141a04778);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_350,2,uVar4,&local_f8);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar2 != local_178) {
    local_3d8 = *puVar2;
    uStack_3d4 = puVar2[1];
    uStack_3d0 = puVar2[2];
    uStack_3cc = puVar2[3];
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_3d8);
  }
  local_60 = local_178;
  uVar4 = CONCAT44(uVar3,DAT_141a04778);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_360,2,uVar4,&local_e8);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar2 != local_168) {
    local_3d8 = *puVar2;
    uStack_3d4 = puVar2[1];
    uStack_3d0 = puVar2[2];
    uStack_3cc = puVar2[3];
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_3d8);
  }
  local_58 = local_168;
  uVar4 = CONCAT44(uVar3,DAT_141a04778);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_370,2,uVar4,&local_d8);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar2 != local_158) {
    local_3d8 = *puVar2;
    uStack_3d4 = puVar2[1];
    uStack_3d0 = puVar2[2];
    uStack_3cc = puVar2[3];
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_3d8);
  }
  local_50 = local_158;
  uVar4 = CONCAT44(uVar3,DAT_141a04778);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_380,2,uVar4,&local_c8);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar2 != local_148) {
    local_3d8 = *puVar2;
    uStack_3d4 = puVar2[1];
    uStack_3d0 = puVar2[2];
    uStack_3cc = puVar2[3];
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_3d8);
  }
  local_48 = local_148;
  local_3d8 = _DAT_1419e46b0;
  uStack_3d4 = uRam00000001419e46b4;
  uStack_3d0 = uRam00000001419e46b8;
  uStack_3cc = uRam00000001419e46bc;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_3d8);
  local_40 = local_138;
  local_3d8 = _DAT_1419e46b0;
  uStack_3d4 = uRam00000001419e46b4;
  uStack_3d0 = uRam00000001419e46b8;
  uStack_3cc = uRam00000001419e46bc;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_3d8);
  local_38 = local_128;
  puVar1 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_3b8,0x11,CONCAT44(uVar3,DAT_1419fd6d8),&local_b8);
  uVar3 = 0xffffff;
  if (puVar1 != &local_3a8) {
    local_3d8 = *(undefined4 *)puVar1;
    uStack_3d4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_3d0 = *(undefined4 *)(puVar1 + 1);
    uStack_3cc = *(undefined4 *)((longlong)puVar1 + 0xc);
    FUN_140041b80(&local_3a8,&local_3d8);
    uVar3 = uStack_39c;
  }
  local_388 = 0x11e;
  if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3b8);
  }
  local_3b8 = 0;
  local_3b0 = 0;
  local_3ac = 5;
  gml_Script_pal_fade_set(param_1,param_2,&local_3b8,0,0);
  local_388 = 0x120;
  if (&local_3a8 != param_3) {
    local_3d8 = (undefined4)local_3a8;
    uStack_3d4 = local_3a8._4_4_;
    uStack_3d0 = uStack_3a0;
    uStack_3cc = uStack_39c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_3d8);
  }
  if ((1 << ((byte)local_374 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_380);
  }
  if ((1 << ((byte)local_364 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_370);
  }
  if ((1 << ((byte)local_354 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_360);
  }
  if ((1 << ((byte)local_344 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_350);
  }
  if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_340);
  }
  if ((1 << ((byte)local_324 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_330);
  }
  if ((1 << ((byte)local_314 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_320);
  }
  if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_310);
  }
  if ((1 << ((byte)local_2f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_300);
  }
  if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3b8);
  }
  if ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3a8);
  }
  _eh_vector_destructor_iterator_(local_2e8,0x10,0x1d,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_398;
  return param_3;
}

