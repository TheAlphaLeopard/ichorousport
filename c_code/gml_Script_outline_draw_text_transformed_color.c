// gml_Script_outline_draw_text_transformed_color @ 0x140100fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_outline_draw_text_transformed_color
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  double dVar10;
  double *pdVar11;
  uint uVar12;
  double dVar13;
  code *pcVar14;
  undefined4 uVar17;
  undefined8 uVar15;
  double **ppdVar16;
  ulonglong in_stack_fffffffffffffc40;
  double local_3b8;
  undefined4 uStack_3b0;
  uint uStack_3ac;
  double local_3a8;
  undefined4 uStack_3a0;
  uint uStack_39c;
  undefined8 local_398;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  undefined4 local_350;
  uint local_34c;
  double local_348;
  undefined4 local_340;
  uint local_33c;
  undefined8 local_338;
  char *local_330;
  undefined4 local_328;
  uint local_320;
  uint local_31c;
  uint local_318;
  double local_310;
  undefined4 local_308;
  undefined4 local_304;
  double local_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  double local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  uint local_2e0 [2];
  undefined8 *local_2d8;
  double local_2d0;
  uint local_2c4;
  double local_2c0;
  undefined4 local_2b8;
  uint local_2b4;
  double local_2b0;
  uint local_2a4;
  undefined8 local_2a0;
  undefined4 local_294;
  undefined8 local_290;
  undefined4 local_288;
  undefined4 local_284;
  double local_280;
  undefined4 local_278;
  uint local_274;
  double local_270;
  undefined4 local_268;
  uint local_264;
  undefined8 local_260;
  undefined4 local_254;
  double local_250;
  undefined4 local_244;
  double local_240;
  undefined4 local_234;
  double local_228;
  byte local_21c;
  double local_218;
  byte local_20c;
  double local_208;
  byte local_1fc;
  double local_1f8;
  byte local_1ec;
  double local_1e8;
  byte local_1dc;
  double local_1d8;
  byte local_1cc;
  undefined1 local_1c8 [12];
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  double local_1a8;
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
  undefined1 local_138 [12];
  byte local_12c;
  double local_128;
  undefined4 local_120;
  uint local_11c;
  double local_118;
  undefined4 local_110;
  uint local_10c;
  double local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double *local_f8;
  double *local_f0;
  double *local_e8;
  double *local_e0;
  double *local_d8;
  double *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  double *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  
  local_388 = 0;
  local_330 = "gml_Script_outline_draw_text_ext_transformed";
  local_338 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_338;
  local_328 = 0x250;
  FUN_140041df0(local_2e0,param_4,9,param_5);
  pcVar14 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_228,0x10,0x10,FUN_1400424d0,FUN_140041b30);
  puVar7 = local_2d8;
  uVar9 = local_2e0[0];
  uStack_fc = 0xffffff;
  local_108 = 0.0;
  local_234 = 0xffffff;
  local_240 = 0.0;
  local_318 = 0xffffff;
  local_264 = 0xffffff;
  local_270 = 0.0;
  local_31c = 0xffffff;
  local_274 = 0xffffff;
  local_280 = 0.0;
  local_294 = 0xffffff;
  local_2a0 = 0;
  local_304 = 0xffffff;
  local_310 = 0.0;
  local_2b4 = 0xffffff;
  local_2c0 = 0.0;
  local_33c = 0xffffff;
  local_348 = 0.0;
  local_244 = 0xffffff;
  local_250 = 0.0;
  local_254 = 0xffffff;
  local_260 = 0;
  local_2e4 = 0xffffff;
  local_2f0 = 0.0;
  local_2f4 = 0xffffff;
  local_300 = 0.0;
  local_2c4 = 0xffffff;
  local_2d0 = 0.0;
  local_2a4 = 0xffffff;
  local_2b0 = 0.0;
  local_38c = 0;
  local_398 = 0;
  local_284 = 0;
  local_290 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_328 = 0x250;
  pdVar11 = &DAT_1419df7b0;
  if ((int)local_2e0[0] < 9) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_2d8[8];
  }
  iVar2 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_328 = 0x250;
    if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_398);
    }
    local_398 = 0;
    local_390 = 0;
    local_38c = 5;
    local_378 = DAT_1419df7b0;
    dStack_370 = _DAT_1419df7b8;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_378);
    local_b0 = local_198;
    local_378 = DAT_1419df7b0;
    dStack_370 = _DAT_1419df7b8;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_378);
    local_a8 = local_188;
    local_378 = DAT_1419df7b0;
    dStack_370 = _DAT_1419df7b8;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_378);
    local_a0 = local_178;
    local_378 = DAT_1419df7b0;
    dStack_370 = _DAT_1419df7b8;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_378);
    local_98 = local_168;
    local_378 = DAT_1419df7b0;
    dStack_370 = _DAT_1419df7b8;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_378);
    local_90 = local_158;
    local_378 = DAT_1419df7b0;
    dStack_370 = _DAT_1419df7b8;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_378);
    local_88 = local_148;
    local_378 = DAT_1419df7b0;
    dStack_370 = _DAT_1419df7b8;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_378);
    local_80 = local_138;
    if ((int)uVar9 < 9) {
      pdVar4 = &DAT_1419df7b0;
    }
    else {
      pdVar4 = (double *)puVar7[8];
    }
    pcVar14 = (code *)&local_b0;
    pdVar3 = (double *)gml_Script_outline_bake_sprite_text(param_1,param_2,&local_398,7,pcVar14);
    if (pdVar3 != pdVar4) {
      local_378 = *pdVar3;
      dStack_370 = pdVar3[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      FUN_140041b80(pdVar4,&local_378);
    }
  }
  local_328 = 0x251;
  if ((int)uVar9 < 9) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)puVar7[8];
  }
  uVar8 = (ulonglong)pcVar14 & 0xffffffffffffff00;
  FUN_140e87440(puVar6,DAT_141a044a8,0x80000000,&local_108,uVar8,
                in_stack_fffffffffffffc40 & 0xffffffffffffff00);
  uVar17 = (undefined4)(uVar8 >> 0x20);
  dStack_370 = (double)CONCAT44(uStack_fc,uStack_100);
  local_378 = local_108;
  if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_240);
  }
  FUN_140041b80(&local_240,&local_378);
  local_328 = 0x253;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  uVar15 = CONCAT44(uVar17,DAT_141a04978);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_398,0,uVar15,0);
  uVar17 = (undefined4)((ulonglong)uVar15 >> 0x20);
  dVar13 = 0.0;
  if (pdVar4 != &local_270) {
    local_378 = *pdVar4;
    dStack_370 = pdVar4[1];
    FUN_140041b80(&local_270,&local_378);
    local_318 = local_264;
    dVar13 = local_270;
  }
  local_328 = 0x254;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  uVar15 = CONCAT44(uVar17,DAT_141a049c8);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_398,0,uVar15,0);
  uVar17 = (undefined4)((ulonglong)uVar15 >> 0x20);
  if (pdVar4 != &local_280) {
    local_378 = *pdVar4;
    dStack_370 = pdVar4[1];
    FUN_140041b80(&local_280,&local_378);
    local_31c = local_274;
  }
  local_328 = 0x256;
  if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a0);
  }
  local_294 = 0;
  local_2a0 = 0x3ff0000000000000;
  local_328 = 599;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  local_f8 = &local_240;
  local_378 = _DAT_141dc6190;
  dStack_370 = dRam0000000141dc6198;
  if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_378);
  local_f0 = &local_218;
  pdVar4 = (double *)FUN_140e79090(&local_398,2,&local_f8);
  if (pdVar4 != &local_310) {
    local_378 = *pdVar4;
    dStack_370 = pdVar4[1];
    if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_310);
    }
    FUN_140041b80(&local_310,&local_378);
  }
  local_328 = 600;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  if ((int)uVar9 < 3) {
    pdVar4 = &DAT_1419df7b0;
LAB_1401016fb:
    local_378 = *pdVar4;
    dStack_370 = pdVar4[1];
    if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_378);
  }
  else {
    pdVar4 = (double *)puVar7[2];
    if (pdVar4 != &local_228) goto LAB_1401016fb;
  }
  local_f8 = &local_228;
  uVar15 = CONCAT44(uVar17,DAT_141a04af8);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_398,1,uVar15,&local_f8);
  uVar17 = (undefined4)((ulonglong)uVar15 >> 0x20);
  dVar10 = 0.0;
  uVar12 = 0xffffff;
  if (pdVar4 != &local_2c0) {
    local_378 = *pdVar4;
    dStack_370 = pdVar4[1];
    FUN_140041b80(&local_2c0,&local_378);
    dVar10 = local_2c0;
    uVar12 = local_2b4;
  }
  local_328 = 0x259;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_290);
  }
  local_290 = 0;
  local_288 = 0;
  local_284 = 5;
  if ((int)uVar9 < 5) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)puVar7[4];
  }
  uStack_3b0 = local_2b8;
  local_320 = uVar12 & 0x1f;
  uVar9 = 1 << (sbyte)local_320 & 0x46;
  uStack_3ac = uVar12;
  if (uVar9 == 0) {
    local_3b8 = dVar10;
  }
  else {
    FUN_1400419b0(&local_3b8,&local_2c0);
  }
  FUN_140046500(&local_3b8,puVar7);
  dStack_370 = (double)CONCAT44(uStack_3ac,uStack_3b0);
  local_378 = local_3b8;
  if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_140041b80(&local_228,&local_378);
  if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3b8);
  }
  local_f8 = &local_228;
  uVar15 = CONCAT44(uVar17,DAT_1419fe728);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_290,1,uVar15,&local_f8);
  uVar17 = (undefined4)((ulonglong)uVar15 >> 0x20);
  if (pdVar4 != &local_218) {
    local_378 = *pdVar4;
    dStack_370 = pdVar4[1];
    if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_378);
  }
  local_f0 = &local_218;
  local_378 = _DAT_1419e1d20;
  dStack_370 = dRam00000001419e1d28;
  if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  FUN_140041b80(&local_208,&local_378);
  local_e8 = &local_208;
  pdVar4 = (double *)FUN_140e79090(&local_398,2,&local_f0);
  if (pdVar4 != &local_348) {
    local_378 = *pdVar4;
    dStack_370 = pdVar4[1];
    if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_348);
    }
    FUN_140041b80(&local_348,&local_378);
  }
  local_328 = 0x25a;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  uStack_3b0 = local_2b8;
  if (uVar9 == 0) {
    local_3b8 = dVar10;
    uStack_3ac = uVar12;
  }
  else {
    uStack_3ac = uVar12;
    FUN_1400419b0(&local_3b8,&local_2c0);
  }
  FUN_140046500(&local_3b8,&local_348);
  dStack_370 = (double)CONCAT44(uStack_3ac,uStack_3b0);
  local_378 = local_3b8;
  if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_140041b80(&local_228,&local_378);
  if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3b8);
  }
  local_f8 = &local_228;
  uVar9 = 0;
  uStack_39c = 0;
  local_3a8 = 2.0;
  FUN_140042560(&local_3a8,&local_310);
  pdVar4 = (double *)
           FUN_140e634e0(param_1,param_2,&local_398,1,CONCAT44(uVar17,DAT_1419fe728),&local_f8);
  uStack_3ac = *(undefined4 *)((longlong)pdVar4 + 0xc);
  uStack_3b0 = *(undefined4 *)(pdVar4 + 1);
  if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) == 0) {
    local_3b8 = *pdVar4;
  }
  else {
    FUN_1400419b0(&local_3b8,pdVar4);
  }
  FUN_1400460e0(&local_3b8,&local_3a8);
  dStack_370 = (double)CONCAT44(uStack_3ac,uStack_3b0);
  local_378 = local_3b8;
  if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_250);
  }
  FUN_140041b80(&local_250,&local_378);
  if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3b8);
  }
  if ((1 << ((byte)uStack_39c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3a8);
  }
  local_328 = 0x25b;
  dStack_370 = (double)((ulonglong)dStack_370 & 0xffffffff);
  local_378 = 2.0;
  FUN_140042560(&local_378,&local_310);
  uStack_3ac = local_33c;
  uStack_3b0 = local_340;
  if ((1 << ((byte)local_33c & 0x1f) & 0x46U) == 0) {
    local_3b8 = local_348;
  }
  else {
    FUN_1400419b0(&local_3b8,&local_348);
  }
  FUN_1400460e0(&local_3b8,&local_2a0);
  if ((int)local_2e0[0] < 4) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_2d8[3];
  }
  local_34c = uStack_3ac;
  local_350 = uStack_3b0;
  if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) == 0) {
    local_358 = local_3b8;
  }
  else {
    FUN_1400419b0(&local_358,&local_3b8);
  }
  FUN_140042560(&local_358,puVar7);
  uStack_39c = local_34c;
  uStack_3a0 = local_350;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) == 0) {
    local_3a8 = local_358;
  }
  else {
    FUN_1400419b0(&local_3a8,&local_358);
  }
  FUN_1400460e0(&local_3a8,&local_378);
  dStack_360 = (double)CONCAT44(uStack_39c,uStack_3a0);
  local_368 = local_3a8;
  if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_260);
  }
  FUN_140041b80(&local_260,&local_368);
  if ((1 << ((byte)uStack_39c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3a8);
  }
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3b8);
  }
  if ((1 << ((byte)((ulonglong)dStack_370 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_328 = 0x25d;
  if ((1 << ((byte)local_2e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f0);
  }
  local_2e4 = 0;
  local_2f0 = 0.0;
  local_328 = 0x25e;
  if ((1 << ((byte)local_2f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_300);
  }
  local_2f4 = 0;
  local_300 = 0.0;
  local_328 = 0x260;
  local_10c = local_318;
  local_110 = local_268;
  local_318 = local_318 & 0x1f;
  if ((1 << (sbyte)local_318 & 0x46U) == 0) {
    local_118 = dVar13;
  }
  else {
    FUN_1400419b0(&local_118,&local_270);
  }
  lVar1 = *(longlong *)ThreadLocalStoragePointer;
  if ((*(int *)(lVar1 + 0x18) < DAT_141ddca44) &&
     (_Init_thread_header(&DAT_141ddca44), DAT_141ddca44 == -1)) {
    _DAT_141ddcc54 = 0;
    _DAT_141ddcc48 = 0x3ff0000000000000;
    _DAT_141ddcc68 = 0;
    _DAT_141ddcc5c = 0x4000000000000000;
    _DAT_141ddcc6c = 1;
    atexit((_func_5014 *)&LAB_1414673c0);
    _Init_thread_footer(&DAT_141ddca44);
  }
  do {
    iVar2 = FUN_140e851f0(&DAT_141ddcc48 + (longlong)(int)uVar9 * 0x14,&local_118,DAT_141955260,0);
    bVar5 = (byte)local_320;
    if (iVar2 == 0) {
      if (*(int *)(&DAT_141ddcc58 + (longlong)(int)uVar9 * 0x14) == 0) {
        local_328 = 0x261;
        uStack_3b0 = local_2b8;
        if ((1 << (bVar5 & 0x1f) & 0x46U) == 0) {
          local_3b8 = dVar10;
          uStack_3ac = uVar12;
        }
        else {
          uStack_3ac = uVar12;
          FUN_1400419b0(&local_3b8,&local_2c0);
        }
        FUN_140046500(&local_3b8,&local_348);
        uStack_39c = uStack_3ac;
        uStack_3a0 = uStack_3b0;
        if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) == 0) {
          local_3a8 = local_3b8;
        }
        else {
          FUN_1400419b0(&local_3a8,&local_3b8);
        }
        dStack_370 = (double)((ulonglong)dStack_370 & 0xffffffff);
        local_378 = 0.5;
        FUN_140042560(&local_3a8,&local_378);
        if ((1 << ((byte)((ulonglong)dStack_370 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        dStack_360 = (double)CONCAT44(uStack_39c,uStack_3a0);
        local_368 = local_3a8;
        if ((1 << ((byte)local_2e4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f0);
        }
        FUN_140041b80(&local_2f0,&local_368);
        if ((1 << ((byte)uStack_39c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3a8);
        }
        if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) == 0) break;
        pdVar4 = &local_3b8;
      }
      else {
        if (*(int *)(&DAT_141ddcc58 + (longlong)(int)uVar9 * 0x14) != 1) break;
        local_328 = 0x262;
        uStack_3a0 = local_2b8;
        uStack_39c = uVar12;
        if ((1 << (bVar5 & 0x1f) & 0x46U) == 0) {
          local_3a8 = dVar10;
        }
        else {
          FUN_1400419b0(&local_3a8,&local_2c0);
        }
        FUN_140046500(&local_3a8,&local_348);
        dStack_360 = (double)CONCAT44(uStack_39c,uStack_3a0);
        local_368 = local_3a8;
        if ((1 << ((byte)local_2e4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f0);
        }
        FUN_140041b80(&local_2f0,&local_368);
        if ((1 << ((byte)uStack_39c & 0x1f) & 0x46U) == 0) break;
        pdVar4 = &local_3a8;
      }
      FUN_140041a50(pdVar4);
      break;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 2);
  local_328 = 0x264;
  local_11c = local_31c;
  local_120 = local_278;
  local_31c = local_31c & 0x1f;
  if ((1 << (sbyte)local_31c & 0x46U) == 0) {
    local_128 = local_280;
  }
  else {
    FUN_1400419b0(&local_128,&local_280);
  }
  if ((*(int *)(lVar1 + 0x18) < DAT_141ddcaf0) &&
     (_Init_thread_header(&DAT_141ddcaf0), DAT_141ddcaf0 == -1)) {
    _DAT_141ddcad4 = 0;
    _DAT_141ddcac8 = 0x3ff0000000000000;
    _DAT_141ddcae8 = 0;
    _DAT_141ddcadc = 0x4000000000000000;
    _DAT_141ddcaec = 1;
    atexit((_func_5014 *)&LAB_1414673a0);
    _Init_thread_footer(&DAT_141ddcaf0);
  }
  uVar9 = 0;
  do {
    iVar2 = FUN_140e851f0(&DAT_141ddcac8 + (longlong)(int)uVar9 * 0x14,&local_128,DAT_141955260,0);
    if (iVar2 == 0) {
      if (*(int *)(&DAT_141ddcad8 + (longlong)(int)uVar9 * 0x14) == 0) {
        local_328 = 0x265;
        local_34c = local_33c;
        local_350 = local_340;
        if ((1 << ((byte)local_33c & 0x1f) & 0x46U) == 0) {
          local_358 = local_348;
        }
        else {
          FUN_1400419b0(&local_358,&local_348);
        }
        FUN_1400460e0(&local_358,&local_2a0);
        if ((int)local_2e0[0] < 4) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = (undefined8 *)local_2d8[3];
        }
        uStack_3ac = local_34c;
        uStack_3b0 = local_350;
        if ((1 << ((byte)local_34c & 0x1f) & 0x46U) == 0) {
          local_3b8 = local_358;
        }
        else {
          FUN_1400419b0(&local_3b8,&local_358);
        }
        FUN_140042560(&local_3b8,puVar7);
        uStack_39c = uStack_3ac;
        uStack_3a0 = uStack_3b0;
        if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) == 0) {
          local_3a8 = local_3b8;
        }
        else {
          FUN_1400419b0(&local_3a8,&local_3b8);
        }
        dStack_370 = (double)((ulonglong)dStack_370 & 0xffffffff);
        local_378 = 0.5;
        FUN_140042560(&local_3a8,&local_378);
        if ((1 << ((byte)((ulonglong)dStack_370 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        dStack_360 = (double)CONCAT44(uStack_39c,uStack_3a0);
        local_368 = local_3a8;
        if ((1 << ((byte)local_2f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_300);
        }
        FUN_140041b80(&local_300,&local_368);
        if ((1 << ((byte)uStack_39c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3a8);
        }
        if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3b8);
        }
        if ((1 << ((byte)local_34c & 0x1f) & 0x46U) == 0) break;
        pdVar4 = &local_358;
      }
      else {
        if (*(int *)(&DAT_141ddcad8 + (longlong)(int)uVar9 * 0x14) != 1) break;
        local_328 = 0x266;
        uStack_3ac = local_33c;
        uStack_3b0 = local_340;
        if ((1 << ((byte)local_33c & 0x1f) & 0x46U) == 0) {
          local_3b8 = local_348;
        }
        else {
          FUN_1400419b0(&local_3b8,&local_348);
        }
        FUN_1400460e0(&local_3b8,&local_2a0);
        if ((int)local_2e0[0] < 4) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = (undefined8 *)local_2d8[3];
        }
        uStack_39c = uStack_3ac;
        uStack_3a0 = uStack_3b0;
        if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) == 0) {
          local_3a8 = local_3b8;
        }
        else {
          FUN_1400419b0(&local_3a8,&local_3b8);
        }
        FUN_140042560(&local_3a8,puVar7);
        dStack_360 = (double)CONCAT44(uStack_39c,uStack_3a0);
        local_368 = local_3a8;
        if ((1 << ((byte)local_2f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_300);
        }
        FUN_140041b80(&local_300,&local_368);
        if ((1 << ((byte)uStack_39c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3a8);
        }
        if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) == 0) break;
        pdVar4 = &local_3b8;
      }
      FUN_140041a50(pdVar4);
      break;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 2);
  local_328 = 0x269;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  local_f8 = &local_250;
  local_f0 = (double *)&local_260;
  ppdVar16 = &local_f8;
  pdVar4 = (double *)FUN_1400effd0(param_1,param_2,&local_398,2,ppdVar16);
  uVar17 = (undefined4)((ulonglong)ppdVar16 >> 0x20);
  if (pdVar4 != &local_2d0) {
    local_368 = *pdVar4;
    dStack_360 = pdVar4[1];
    if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d0);
    }
    FUN_140041b80(&local_2d0,&local_368);
  }
  local_328 = 0x26b;
  if ((local_2c4 & 0xffffff) == 0) {
    dVar13 = local_2d0;
  }
  else {
    dVar13 = (double)FUN_140e4b060(&local_2d0);
  }
  FUN_140ec60c0((longlong)dVar13,0xffffffff);
  local_328 = 0x26c;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  local_368 = _DAT_141dc6190;
  dStack_360 = dRam0000000141dc6198;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_140041b80(&local_228,&local_368);
  local_f8 = &local_228;
  local_368 = _DAT_141dc6190;
  dStack_360 = dRam0000000141dc6198;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_368);
  local_f0 = &local_218;
  uVar15 = CONCAT44(uVar17,DAT_141a04558);
  FUN_140e634e0(param_1,param_2,&local_398,2,uVar15,&local_f8);
  uVar17 = (undefined4)((ulonglong)uVar15 >> 0x20);
  local_328 = 0x26d;
  iVar2 = FUN_140ec9d80();
  if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b0);
  }
  local_2a4 = 0;
  local_2b0 = (double)iVar2;
  local_328 = 0x26e;
  FUN_140ec9dc0();
  local_328 = 0x26f;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  uStack_39c = local_2e4;
  uStack_3a0 = local_2e8;
  if ((1 << ((byte)local_2e4 & 0x1f) & 0x46U) == 0) {
    local_3a8 = local_2f0;
  }
  else {
    FUN_1400419b0(&local_3a8,&local_2f0);
  }
  local_388 = 1;
  FUN_1400460e0(&local_3a8,&local_310);
  dStack_360 = (double)CONCAT44(uStack_39c,uStack_3a0);
  local_368 = local_3a8;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_140041b80(&local_228,&local_368);
  local_388 = 0;
  if ((1 << ((byte)uStack_39c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3a8);
  }
  local_f8 = &local_228;
  uStack_39c = local_2f4;
  uStack_3a0 = local_2f8;
  if ((1 << ((byte)local_2f4 & 0x1f) & 0x46U) == 0) {
    local_3a8 = local_300;
  }
  else {
    FUN_1400419b0(&local_3a8,&local_300);
  }
  local_388 = 2;
  FUN_1400460e0(&local_3a8,&local_310);
  dStack_360 = (double)CONCAT44(uStack_39c,uStack_3a0);
  local_368 = local_3a8;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_368);
  local_388 = 0;
  if ((1 << ((byte)uStack_39c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3a8);
  }
  local_f0 = &local_218;
  uVar8 = (ulonglong)local_2e0[0];
  if ((int)local_2e0[0] < 3) {
    pdVar4 = &DAT_1419df7b0;
LAB_14010292f:
    local_368 = *pdVar4;
    dStack_360 = pdVar4[1];
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_368);
  }
  else {
    pdVar4 = (double *)local_2d8[2];
    if (pdVar4 != &local_208) goto LAB_14010292f;
  }
  local_e8 = &local_208;
  if ((int)local_2e0[0] < 4) {
    pdVar4 = &DAT_1419df7b0;
LAB_14010298e:
    local_368 = *pdVar4;
    dStack_360 = pdVar4[1];
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_368);
  }
  else {
    pdVar4 = (double *)local_2d8[3];
    if (pdVar4 != &local_1f8) goto LAB_14010298e;
  }
  local_e0 = &local_1f8;
  if ((int)local_2e0[0] < 5) {
    pdVar4 = &DAT_1419df7b0;
LAB_1401029ed:
    local_368 = *pdVar4;
    dStack_360 = pdVar4[1];
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_368);
  }
  else {
    pdVar4 = (double *)local_2d8[4];
    if (pdVar4 != &local_1e8) goto LAB_1401029ed;
  }
  local_d8 = &local_1e8;
  FUN_140e634e0(param_1,param_2,&local_398,5,CONCAT44(uVar17,DAT_141a048f8),&local_f8);
  local_328 = 0x270;
  if ((local_2a4 & 0xffffff) == 0) {
    dVar13 = local_2b0;
  }
  else {
    dVar13 = (double)FUN_140e4b060(&local_2b0);
  }
  FUN_140ec9e10((longlong)dVar13);
  local_328 = 0x271;
  FUN_140ec7870();
  local_328 = 0x273;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  local_f8 = &local_2d0;
  uStack_3ac = local_304;
  uStack_3b0 = local_308;
  if ((1 << ((byte)local_304 & 0x1f) & 0x46U) == 0) {
    local_3b8 = local_310;
  }
  else {
    FUN_1400419b0(&local_3b8,&local_310);
  }
  local_388 = 4;
  FUN_1400460e0(&local_3b8,&local_2f0);
  if ((int)local_2e0[0] < 6) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_2d8[5];
  }
  local_34c = uStack_3ac;
  local_350 = uStack_3b0;
  if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) == 0) {
    local_358 = local_3b8;
  }
  else {
    FUN_1400419b0(&local_358,&local_3b8);
  }
  local_388 = 0xc;
  FUN_140042560(&local_358,puVar7);
  if ((int)local_2e0[0] < 1) {
    pdVar4 = &DAT_1419df7b0;
  }
  else {
    pdVar4 = (double *)*local_2d8;
  }
  uStack_39c = *(undefined4 *)((longlong)pdVar4 + 0xc);
  uStack_3a0 = *(undefined4 *)(pdVar4 + 1);
  if ((1 << ((byte)uStack_39c & 0x1f) & 0x46U) == 0) {
    local_3a8 = *pdVar4;
  }
  else {
    FUN_1400419b0(&local_3a8);
  }
  local_388 = 0x1c;
  FUN_1400462a0(&local_3a8,&local_358);
  dStack_360 = (double)CONCAT44(uStack_39c,uStack_3a0);
  local_368 = local_3a8;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_368);
  local_388 = 0xc;
  if ((1 << ((byte)uStack_39c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3a8);
  }
  local_388 = 4;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_388 = 0;
  if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3b8);
  }
  local_f0 = &local_218;
  uStack_3ac = local_304;
  uStack_3b0 = local_308;
  if ((1 << ((byte)local_304 & 0x1f) & 0x46U) == 0) {
    local_3b8 = local_310;
  }
  else {
    FUN_1400419b0(&local_3b8,&local_310);
  }
  local_388 = 0x20;
  FUN_1400460e0(&local_3b8,&local_300);
  if ((int)local_2e0[0] < 7) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_2d8[6];
  }
  local_34c = uStack_3ac;
  local_350 = uStack_3b0;
  if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) == 0) {
    local_358 = local_3b8;
  }
  else {
    FUN_1400419b0(&local_358,&local_3b8);
  }
  local_388 = 0x60;
  FUN_140042560(&local_358,puVar7);
  if ((int)local_2e0[0] < 2) {
    pdVar4 = &DAT_1419df7b0;
  }
  else {
    pdVar4 = (double *)local_2d8[1];
  }
  uStack_39c = *(undefined4 *)((longlong)pdVar4 + 0xc);
  uStack_3a0 = *(undefined4 *)(pdVar4 + 1);
  if ((1 << ((byte)uStack_39c & 0x1f) & 0x46U) == 0) {
    local_3a8 = *pdVar4;
  }
  else {
    FUN_1400419b0(&local_3a8);
  }
  local_388 = 0xe0;
  FUN_1400462a0(&local_3a8,&local_358);
  dStack_360 = (double)CONCAT44(uStack_39c,uStack_3a0);
  local_368 = local_3a8;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  FUN_140041b80(&local_208,&local_368);
  local_388 = 0x60;
  if ((1 << ((byte)uStack_39c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3a8);
  }
  local_388 = 0x20;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3b8);
  }
  local_e8 = &local_208;
  if ((int)local_2e0[0] < 6) {
    pdVar4 = &DAT_1419df7b0;
LAB_140102e3b:
    local_368 = *pdVar4;
    dStack_360 = pdVar4[1];
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_368);
  }
  else {
    pdVar4 = (double *)local_2d8[5];
    if (pdVar4 != &local_1f8) goto LAB_140102e3b;
  }
  local_e0 = &local_1f8;
  if ((int)local_2e0[0] < 7) {
    pdVar4 = &DAT_1419df7b0;
LAB_140102e9a:
    local_368 = *pdVar4;
    dStack_360 = pdVar4[1];
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_368);
  }
  else {
    pdVar4 = (double *)local_2d8[6];
    if (pdVar4 != &local_1e8) goto LAB_140102e9a;
  }
  local_d8 = &local_1e8;
  if ((int)local_2e0[0] < 8) {
    pdVar4 = &DAT_1419df7b0;
  }
  else {
    pdVar4 = (double *)local_2d8[7];
    if (pdVar4 == &local_1d8) goto LAB_140102f30;
  }
  local_368 = *pdVar4;
  dStack_360 = pdVar4[1];
  if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140041b80(&local_1d8,&local_368);
LAB_140102f30:
  local_d0 = &local_1d8;
  local_368 = _DAT_1419e1d60;
  dStack_360 = (double)uRam00000001419e1d68;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_368);
  local_c8 = local_1c8;
  local_368 = _DAT_1419e1d20;
  dStack_360 = dRam00000001419e1d28;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_368);
  local_c0 = local_1b8;
  if (((int)local_2e0[0] < 9) || (pdVar11 = (double *)local_2d8[8], pdVar11 != &local_1a8)) {
    local_368 = *pdVar11;
    dStack_360 = pdVar11[1];
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_368);
  }
  local_b8 = &local_1a8;
  FUN_14010f4a0(param_1,param_2,&local_398,9,&local_f8);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_290);
  }
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b0);
  }
  if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d0);
  }
  if ((1 << ((byte)local_2f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_300);
  }
  if ((1 << ((byte)local_2e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f0);
  }
  if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_260);
  }
  if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_250);
  }
  if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  if ((1 << (bVar5 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c0);
  }
  if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_310);
  }
  if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a0);
  }
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_280);
  }
  if ((1 << ((byte)local_318 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_270);
  }
  if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_240);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_228,0x10,0x10,FUN_140041b30);
  if (0 < (int)local_2e0[0]) {
    puVar7 = local_2d8;
    do {
      puVar6 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_2d8);
  DAT_141dc7a50 = (undefined8 *)local_338;
  return param_3;
}

