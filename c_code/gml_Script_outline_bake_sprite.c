// gml_Script_outline_bake_sprite @ 0x140107740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_outline_bake_sprite
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  byte bVar6;
  undefined8 *puVar7;
  double *pdVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  code *pcVar13;
  ulonglong uVar14;
  undefined4 uVar17;
  undefined8 uVar15;
  double **ppdVar16;
  ulonglong in_stack_fffffffffffffc70;
  double local_388;
  undefined4 uStack_380;
  uint uStack_37c;
  double local_378;
  undefined4 uStack_370;
  uint uStack_36c;
  undefined8 local_368;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  undefined4 local_320;
  uint local_31c;
  double local_318;
  undefined4 local_310;
  uint local_30c;
  undefined8 local_308;
  char *local_300;
  undefined4 local_2f8;
  uint local_2f0;
  uint local_2ec;
  uint local_2e8;
  double local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  double local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  double local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  double local_2b0;
  undefined4 local_2a8;
  uint local_2a4;
  double local_2a0;
  uint local_294;
  double local_290;
  uint local_284;
  undefined8 local_280;
  undefined4 local_274;
  double local_268;
  byte local_25c;
  double local_258;
  byte local_24c;
  double local_248;
  byte local_23c;
  double local_238;
  byte local_22c;
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
  undefined1 local_1d8 [12];
  byte local_1cc;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  double local_178;
  undefined4 local_170;
  uint local_16c;
  double local_168;
  undefined4 local_160;
  uint local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  double local_148;
  undefined4 local_13c;
  double local_138;
  undefined4 local_12c;
  double local_128;
  undefined4 local_120;
  uint local_11c;
  double local_118;
  undefined4 local_110;
  uint local_10c;
  double *local_108;
  double *local_100;
  double *local_f8;
  double *local_f0;
  double *local_e8;
  double *local_e0;
  double *local_d8;
  double *local_d0;
  double *local_c8;
  undefined1 *local_c0;
  double local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88 [2];
  undefined8 *local_80;
  
  local_358 = 0;
  local_300 = "gml_Script_outline_draw_text_ext_transformed_color";
  local_308 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_308;
  local_2f8 = 0x2e9;
  FUN_140041df0(local_88,param_4,0xe,param_5);
  pcVar13 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_268,0x10,0xe,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0.0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_2e8 = 0xffffff;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_2ec = 0xffffff;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_274 = 0xffffff;
  local_280 = 0;
  local_2d4 = 0xffffff;
  local_2e0 = 0.0;
  local_2a4 = 0xffffff;
  local_2b0 = 0.0;
  local_30c = 0xffffff;
  local_318 = 0.0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_2b4 = 0xffffff;
  local_2c0 = 0.0;
  local_2c4 = 0xffffff;
  local_2d0 = 0.0;
  local_294 = 0xffffff;
  local_2a0 = 0.0;
  local_284 = 0xffffff;
  local_290 = 0.0;
  local_35c = 0;
  local_368 = 0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2f8 = 0x2e9;
  pdVar8 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 10) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_80[9];
  }
  iVar3 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_2f8 = 0x2e9;
    if ((int)local_88[0] < 9) {
      pdVar5 = &DAT_1419df7b0;
    }
    else {
      pdVar5 = (double *)local_80[8];
    }
    if ((int)local_88[0] < 10) {
      pdVar4 = &DAT_1419df7b0;
    }
    else {
      pdVar4 = (double *)local_80[9];
    }
    if (pdVar5 != pdVar4) {
      local_348 = *pdVar5;
      dStack_340 = pdVar5[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      FUN_140041b80(pdVar4,&local_348);
    }
  }
  if ((int)local_88[0] < 0xb) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_80[10];
  }
  iVar3 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    if ((int)local_88[0] < 9) {
      pdVar5 = &DAT_1419df7b0;
    }
    else {
      pdVar5 = (double *)local_80[8];
    }
    if ((int)local_88[0] < 0xb) {
      pdVar4 = &DAT_1419df7b0;
    }
    else {
      pdVar4 = (double *)local_80[10];
    }
    if (pdVar5 != pdVar4) {
      local_348 = *pdVar5;
      dStack_340 = pdVar5[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      FUN_140041b80(pdVar4,&local_348);
    }
  }
  if ((int)local_88[0] < 0xc) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_80[0xb];
  }
  iVar3 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    if ((int)local_88[0] < 9) {
      pdVar5 = &DAT_1419df7b0;
    }
    else {
      pdVar5 = (double *)local_80[8];
    }
    if ((int)local_88[0] < 0xc) {
      pdVar4 = &DAT_1419df7b0;
    }
    else {
      pdVar4 = (double *)local_80[0xb];
    }
    if (pdVar5 != pdVar4) {
      local_348 = *pdVar5;
      dStack_340 = pdVar5[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      FUN_140041b80(pdVar4,&local_348);
    }
  }
  if ((int)local_88[0] < 0xe) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_80[0xd];
  }
  iVar3 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    local_368 = 0;
    local_360 = 0;
    local_35c = 5;
    local_348 = DAT_1419df7b0;
    dStack_340 = _DAT_1419df7b8;
    if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    FUN_140041b80(&local_268,&local_348);
    local_108 = &local_268;
    local_348 = DAT_1419df7b0;
    dStack_340 = _DAT_1419df7b8;
    if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_348);
    local_100 = &local_258;
    local_348 = DAT_1419df7b0;
    dStack_340 = _DAT_1419df7b8;
    if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_348);
    local_f8 = &local_248;
    local_348 = DAT_1419df7b0;
    dStack_340 = _DAT_1419df7b8;
    if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_348);
    local_f0 = &local_238;
    local_348 = DAT_1419df7b0;
    dStack_340 = _DAT_1419df7b8;
    if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_348);
    local_e8 = &local_228;
    local_348 = DAT_1419df7b0;
    dStack_340 = _DAT_1419df7b8;
    if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_348);
    local_e0 = &local_218;
    local_348 = DAT_1419df7b0;
    dStack_340 = _DAT_1419df7b8;
    if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_348);
    local_d8 = &local_208;
    if ((int)local_88[0] < 0xe) {
      pdVar5 = &DAT_1419df7b0;
    }
    else {
      pdVar5 = (double *)local_80[0xd];
    }
    pcVar13 = (code *)&local_108;
    pdVar4 = (double *)gml_Script_outline_bake_sprite_text(param_1,param_2,&local_368,7,pcVar13);
    if (pdVar4 != pdVar5) {
      local_348 = *pdVar4;
      dStack_340 = pdVar4[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar5);
      }
      FUN_140041b80(pdVar5,&local_348);
    }
  }
  local_2f8 = 0x2ea;
  if ((int)local_88[0] < 0xe) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_80[0xd];
  }
  uVar14 = (ulonglong)pcVar13 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a044a8,0x80000000,&local_98,uVar14,
                in_stack_fffffffffffffc70 & 0xffffffffffffff00);
  uVar17 = (undefined4)(uVar14 >> 0x20);
  dStack_340 = (double)CONCAT44(uStack_8c,uStack_90);
  local_348 = local_98;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_348);
  local_2f8 = 0x2ec;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  local_368 = 0;
  local_360 = 0;
  local_35c = 5;
  uVar15 = CONCAT44(uVar17,DAT_141a04978);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_368,0,uVar15,0);
  uVar17 = (undefined4)((ulonglong)uVar15 >> 0x20);
  if (pdVar5 != &local_168) {
    local_348 = *pdVar5;
    dStack_340 = pdVar5[1];
    FUN_140041b80(&local_168,&local_348);
    local_2e8 = local_15c;
  }
  local_2f8 = 0x2ed;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  local_368 = 0;
  local_360 = 0;
  local_35c = 5;
  uVar15 = CONCAT44(uVar17,DAT_141a049c8);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_368,0,uVar15,0);
  uVar17 = (undefined4)((ulonglong)uVar15 >> 0x20);
  if (pdVar5 != &local_178) {
    local_348 = *pdVar5;
    dStack_340 = pdVar5[1];
    FUN_140041b80(&local_178,&local_348);
    local_2ec = local_16c;
  }
  local_2f8 = 0x2ef;
  if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_280);
  }
  local_274 = 0;
  local_280 = 0x3ff0000000000000;
  local_2f8 = 0x2f0;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  local_368 = 0;
  local_360 = 0;
  local_35c = 5;
  local_108 = &local_138;
  local_348 = _DAT_141dc6190;
  dStack_340 = dRam0000000141dc6198;
  if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  FUN_140041b80(&local_258,&local_348);
  local_100 = &local_258;
  pdVar5 = (double *)FUN_140e79090(&local_368,2,&local_108);
  if (pdVar5 != &local_2e0) {
    local_348 = *pdVar5;
    dStack_340 = pdVar5[1];
    if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e0);
    }
    FUN_140041b80(&local_2e0,&local_348);
  }
  local_2f8 = 0x2f1;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  local_368 = 0;
  local_360 = 0;
  local_35c = 5;
  if ((int)local_88[0] < 3) {
    pdVar5 = &DAT_1419df7b0;
LAB_140107fb3:
    local_348 = *pdVar5;
    dStack_340 = pdVar5[1];
    if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    FUN_140041b80(&local_268,&local_348);
  }
  else {
    pdVar5 = (double *)local_80[2];
    if (pdVar5 != &local_268) goto LAB_140107fb3;
  }
  local_108 = &local_268;
  uVar15 = CONCAT44(uVar17,DAT_141a04af8);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_368,1,uVar15,&local_108);
  uVar17 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uVar11 = 0xffffff;
  if (pdVar5 != &local_2b0) {
    local_348 = *pdVar5;
    dStack_340 = pdVar5[1];
    FUN_140041b80(&local_2b0,&local_348);
    uVar11 = local_2a4;
  }
  local_2f8 = 0x2f2;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  local_368 = 0;
  local_360 = 0;
  local_35c = 5;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  if ((int)local_88[0] < 5) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_80[4];
  }
  uStack_380 = local_2a8;
  local_2f0 = uVar11 & 0x1f;
  uVar10 = 1 << (sbyte)local_2f0 & 0x46;
  uStack_37c = uVar11;
  if (uVar10 == 0) {
    local_388 = local_2b0;
  }
  else {
    FUN_1400419b0(&local_388,&local_2b0);
  }
  FUN_140046500(&local_388,puVar7);
  dStack_340 = (double)CONCAT44(uStack_37c,uStack_380);
  local_348 = local_388;
  if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  FUN_140041b80(&local_268,&local_348);
  if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  local_108 = &local_268;
  uVar15 = CONCAT44(uVar17,DAT_1419fe728);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_188,1,uVar15,&local_108);
  uVar17 = (undefined4)((ulonglong)uVar15 >> 0x20);
  if (pdVar5 != &local_258) {
    local_348 = *pdVar5;
    dStack_340 = pdVar5[1];
    if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_348);
  }
  local_100 = &local_258;
  local_348 = _DAT_1419e1d20;
  dStack_340 = dRam00000001419e1d28;
  if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140041b80(&local_248,&local_348);
  local_f8 = &local_248;
  pdVar5 = (double *)FUN_140e79090(&local_368,2,&local_100);
  if (pdVar5 != &local_318) {
    local_348 = *pdVar5;
    dStack_340 = pdVar5[1];
    if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    FUN_140041b80(&local_318,&local_348);
  }
  local_2f8 = 0x2f3;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  local_368 = 0;
  local_360 = 0;
  local_35c = 5;
  uStack_380 = local_2a8;
  if (uVar10 == 0) {
    local_388 = local_2b0;
    uStack_37c = uVar11;
  }
  else {
    uStack_37c = uVar11;
    FUN_1400419b0(&local_388,&local_2b0);
  }
  FUN_140046500(&local_388,&local_318);
  dStack_340 = (double)CONCAT44(uStack_37c,uStack_380);
  local_348 = local_388;
  if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  FUN_140041b80(&local_268,&local_348);
  if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  local_108 = &local_268;
  uVar11 = 0;
  uStack_36c = 0;
  local_378 = 2.0;
  FUN_140042560(&local_378,&local_2e0);
  pdVar5 = (double *)
           FUN_140e634e0(param_1,param_2,&local_368,1,CONCAT44(uVar17,DAT_1419fe728),&local_108);
  uStack_37c = *(undefined4 *)((longlong)pdVar5 + 0xc);
  uStack_380 = *(undefined4 *)(pdVar5 + 1);
  if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) == 0) {
    local_388 = *pdVar5;
  }
  else {
    FUN_1400419b0(&local_388,pdVar5);
  }
  FUN_1400460e0(&local_388,&local_378);
  dStack_340 = (double)CONCAT44(uStack_37c,uStack_380);
  local_348 = local_388;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_348);
  if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_2f8 = 0x2f4;
  dStack_340 = (double)((ulonglong)dStack_340 & 0xffffffff);
  local_348 = 2.0;
  FUN_140042560(&local_348,&local_2e0);
  uStack_37c = local_30c;
  uStack_380 = local_310;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) == 0) {
    local_388 = local_318;
  }
  else {
    FUN_1400419b0(&local_388,&local_318);
  }
  FUN_1400460e0(&local_388,&local_280);
  if ((int)local_88[0] < 4) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_80[3];
  }
  local_31c = uStack_37c;
  local_320 = uStack_380;
  if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) == 0) {
    local_328 = local_388;
  }
  else {
    FUN_1400419b0(&local_328,&local_388);
  }
  FUN_140042560(&local_328,puVar7);
  uStack_36c = local_31c;
  uStack_370 = local_320;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) == 0) {
    local_378 = local_328;
  }
  else {
    FUN_1400419b0(&local_378,&local_328);
  }
  FUN_1400460e0(&local_378,&local_348);
  dStack_330 = (double)CONCAT44(uStack_36c,uStack_370);
  local_338 = local_378;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_338);
  if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  if ((1 << ((byte)((ulonglong)dStack_340 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  local_2f8 = 0x2f6;
  if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c0);
  }
  local_2b4 = 0;
  local_2c0 = 0.0;
  local_2f8 = 0x2f7;
  if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d0);
  }
  local_2c4 = 0;
  local_2d0 = 0.0;
  local_2f8 = 0x2f9;
  local_10c = local_2e8;
  local_110 = local_160;
  local_2e8 = local_2e8 & 0x1f;
  if ((1 << (sbyte)local_2e8 & 0x46U) == 0) {
    local_118 = local_168;
  }
  else {
    FUN_1400419b0(&local_118,&local_168);
  }
  lVar1 = *(longlong *)ThreadLocalStoragePointer;
  if ((*(int *)(lVar1 + 0x18) < DAT_141ddca40) &&
     (_Init_thread_header(&DAT_141ddca40), DAT_141ddca40 == -1)) {
    _DAT_141ddcc94 = 0;
    _DAT_141ddcc88 = 0x3ff0000000000000;
    _DAT_141ddcca8 = 0;
    _DAT_141ddcc9c = 0x4000000000000000;
    _DAT_141ddccac = 1;
    atexit((_func_5014 *)&LAB_141467480);
    _Init_thread_footer(&DAT_141ddca40);
  }
  do {
    iVar3 = FUN_140e851f0(&DAT_141ddcc88 + (longlong)(int)uVar11 * 0x14,&local_118,DAT_141955260,0);
    bVar6 = (byte)local_2f0;
    if (iVar3 == 0) {
      if (*(int *)(&DAT_141ddcc98 + (longlong)(int)uVar11 * 0x14) == 0) {
        local_2f8 = 0x2fa;
        uStack_37c = local_2a4;
        uStack_380 = local_2a8;
        if ((1 << (bVar6 & 0x1f) & 0x46U) == 0) {
          local_388 = local_2b0;
        }
        else {
          FUN_1400419b0(&local_388,&local_2b0);
        }
        FUN_140046500(&local_388,&local_318);
        uStack_36c = uStack_37c;
        uStack_370 = uStack_380;
        if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) == 0) {
          local_378 = local_388;
        }
        else {
          FUN_1400419b0(&local_378,&local_388);
        }
        dStack_340 = (double)((ulonglong)dStack_340 & 0xffffffff);
        local_348 = 0.5;
        FUN_140042560(&local_378,&local_348);
        if ((1 << ((byte)((ulonglong)dStack_340 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_348);
        }
        dStack_330 = (double)CONCAT44(uStack_36c,uStack_370);
        local_338 = local_378;
        if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c0);
        }
        FUN_140041b80(&local_2c0,&local_338);
        if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) == 0) break;
        pdVar5 = &local_388;
      }
      else {
        if (*(int *)(&DAT_141ddcc98 + (longlong)(int)uVar11 * 0x14) != 1) break;
        local_2f8 = 0x2fb;
        uStack_36c = local_2a4;
        uStack_370 = local_2a8;
        if ((1 << (bVar6 & 0x1f) & 0x46U) == 0) {
          local_378 = local_2b0;
        }
        else {
          FUN_1400419b0(&local_378,&local_2b0);
        }
        FUN_140046500(&local_378,&local_318);
        dStack_330 = (double)CONCAT44(uStack_36c,uStack_370);
        local_338 = local_378;
        if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c0);
        }
        FUN_140041b80(&local_2c0,&local_338);
        if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) == 0) break;
        pdVar5 = &local_378;
      }
      FUN_140041a50(pdVar5);
      break;
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 2);
  local_2f8 = 0x2fd;
  local_11c = local_2ec;
  local_120 = local_170;
  local_2ec = local_2ec & 0x1f;
  if ((1 << (sbyte)local_2ec & 0x46U) == 0) {
    local_128 = local_178;
  }
  else {
    FUN_1400419b0(&local_128,&local_178);
  }
  if ((*(int *)(lVar1 + 0x18) < DAT_141ddcd04) &&
     (_Init_thread_header(&DAT_141ddcd04), DAT_141ddcd04 == -1)) {
    _DAT_141ddca54 = 0;
    _DAT_141ddca48 = 0x3ff0000000000000;
    _DAT_141ddca68 = 0;
    _DAT_141ddca5c = 0x4000000000000000;
    _DAT_141ddca6c = 1;
    atexit((_func_5014 *)&LAB_141467460);
    _Init_thread_footer(&DAT_141ddcd04);
  }
  uVar11 = 0;
  do {
    iVar3 = FUN_140e851f0(&DAT_141ddca48 + (longlong)(int)uVar11 * 0x14,&local_128,DAT_141955260,0);
    if (iVar3 == 0) {
      if (*(int *)(&DAT_141ddca58 + (longlong)(int)uVar11 * 0x14) == 0) {
        local_2f8 = 0x2fe;
        local_31c = local_30c;
        local_320 = local_310;
        if ((1 << ((byte)local_30c & 0x1f) & 0x46U) == 0) {
          local_328 = local_318;
        }
        else {
          FUN_1400419b0(&local_328,&local_318);
        }
        FUN_1400460e0(&local_328,&local_280);
        if ((int)local_88[0] < 4) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = (undefined8 *)local_80[3];
        }
        uStack_37c = local_31c;
        uStack_380 = local_320;
        if ((1 << ((byte)local_31c & 0x1f) & 0x46U) == 0) {
          local_388 = local_328;
        }
        else {
          FUN_1400419b0(&local_388,&local_328);
        }
        FUN_140042560(&local_388,puVar7);
        uStack_36c = uStack_37c;
        uStack_370 = uStack_380;
        if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) == 0) {
          local_378 = local_388;
        }
        else {
          FUN_1400419b0(&local_378,&local_388);
        }
        dStack_340 = (double)((ulonglong)dStack_340 & 0xffffffff);
        local_348 = 0.5;
        FUN_140042560(&local_378,&local_348);
        if ((1 << ((byte)((ulonglong)dStack_340 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_348);
        }
        dStack_330 = (double)CONCAT44(uStack_36c,uStack_370);
        local_338 = local_378;
        if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d0);
        }
        FUN_140041b80(&local_2d0,&local_338);
        if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_388);
        }
        if ((1 << ((byte)local_31c & 0x1f) & 0x46U) == 0) break;
        pdVar5 = &local_328;
      }
      else {
        if (*(int *)(&DAT_141ddca58 + (longlong)(int)uVar11 * 0x14) != 1) break;
        local_2f8 = 0x2ff;
        uStack_37c = local_30c;
        uStack_380 = local_310;
        if ((1 << ((byte)local_30c & 0x1f) & 0x46U) == 0) {
          local_388 = local_318;
        }
        else {
          FUN_1400419b0(&local_388,&local_318);
        }
        FUN_1400460e0(&local_388,&local_280);
        if ((int)local_88[0] < 4) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = (undefined8 *)local_80[3];
        }
        uStack_36c = uStack_37c;
        uStack_370 = uStack_380;
        if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) == 0) {
          local_378 = local_388;
        }
        else {
          FUN_1400419b0(&local_378,&local_388);
        }
        FUN_140042560(&local_378,puVar7);
        dStack_330 = (double)CONCAT44(uStack_36c,uStack_370);
        local_338 = local_378;
        if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d0);
        }
        FUN_140041b80(&local_2d0,&local_338);
        if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) == 0) break;
        pdVar5 = &local_388;
      }
      FUN_140041a50(pdVar5);
      break;
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 2);
  local_2f8 = 0x302;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  local_368 = 0;
  local_360 = 0;
  local_35c = 5;
  local_108 = &local_148;
  local_100 = (double *)&local_158;
  ppdVar16 = &local_108;
  pdVar5 = (double *)FUN_1400effd0(param_1,param_2,&local_368,2,ppdVar16);
  uVar17 = (undefined4)((ulonglong)ppdVar16 >> 0x20);
  if (pdVar5 != &local_2a0) {
    local_338 = *pdVar5;
    dStack_330 = pdVar5[1];
    if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a0);
    }
    FUN_140041b80(&local_2a0,&local_338);
  }
  local_2f8 = 0x304;
  if ((local_294 & 0xffffff) == 0) {
    dVar12 = local_2a0;
  }
  else {
    dVar12 = (double)FUN_140e4b060(&local_2a0);
  }
  FUN_140ec60c0((longlong)dVar12,0xffffffff);
  local_2f8 = 0x305;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  local_368 = 0;
  local_360 = 0;
  local_35c = 5;
  local_338 = _DAT_141dc6190;
  dStack_330 = dRam0000000141dc6198;
  if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  FUN_140041b80(&local_268,&local_338);
  local_108 = &local_268;
  local_338 = _DAT_141dc6190;
  dStack_330 = dRam0000000141dc6198;
  if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  FUN_140041b80(&local_258,&local_338);
  local_100 = &local_258;
  uVar15 = CONCAT44(uVar17,DAT_141a04558);
  FUN_140e634e0(param_1,param_2,&local_368,2,uVar15,&local_108);
  uVar17 = (undefined4)((ulonglong)uVar15 >> 0x20);
  local_2f8 = 0x306;
  iVar3 = FUN_140ec9d80();
  if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_290);
  }
  local_284 = 0;
  local_290 = (double)iVar3;
  local_2f8 = 0x307;
  FUN_140ec9dc0();
  local_2f8 = 0x308;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  local_368 = 0;
  local_360 = 0;
  local_35c = 5;
  uStack_36c = local_2b4;
  uStack_370 = local_2b8;
  if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) == 0) {
    local_378 = local_2c0;
  }
  else {
    FUN_1400419b0(&local_378,&local_2c0);
  }
  local_358 = 1;
  FUN_1400460e0(&local_378,&local_2e0);
  dStack_330 = (double)CONCAT44(uStack_36c,uStack_370);
  local_338 = local_378;
  if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  FUN_140041b80(&local_268,&local_338);
  local_358 = 0;
  if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_108 = &local_268;
  uStack_36c = local_2c4;
  uStack_370 = local_2c8;
  if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) == 0) {
    local_378 = local_2d0;
  }
  else {
    FUN_1400419b0(&local_378,&local_2d0);
  }
  local_358 = 2;
  FUN_1400460e0(&local_378,&local_2e0);
  dStack_330 = (double)CONCAT44(uStack_36c,uStack_370);
  local_338 = local_378;
  if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  FUN_140041b80(&local_258,&local_338);
  local_358 = 0;
  if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_100 = &local_258;
  if ((int)local_88[0] < 3) {
    pdVar5 = &DAT_1419df7b0;
LAB_1401091a7:
    local_338 = *pdVar5;
    dStack_330 = pdVar5[1];
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_338);
  }
  else {
    pdVar5 = (double *)local_80[2];
    if (pdVar5 != &local_248) goto LAB_1401091a7;
  }
  local_f8 = &local_248;
  if ((int)local_88[0] < 4) {
    pdVar5 = &DAT_1419df7b0;
LAB_1401091fb:
    local_338 = *pdVar5;
    dStack_330 = pdVar5[1];
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_338);
  }
  else {
    pdVar5 = (double *)local_80[3];
    if (pdVar5 != &local_238) goto LAB_1401091fb;
  }
  local_f0 = &local_238;
  if ((int)local_88[0] < 5) {
    pdVar5 = &DAT_1419df7b0;
LAB_14010925b:
    local_338 = *pdVar5;
    dStack_330 = pdVar5[1];
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_338);
  }
  else {
    pdVar5 = (double *)local_80[4];
    if (pdVar5 != &local_228) goto LAB_14010925b;
  }
  local_e8 = &local_228;
  if ((int)local_88[0] < 9) {
    pdVar5 = &DAT_1419df7b0;
LAB_1401092bb:
    local_338 = *pdVar5;
    dStack_330 = pdVar5[1];
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_338);
  }
  else {
    pdVar5 = (double *)local_80[8];
    if (pdVar5 != &local_218) goto LAB_1401092bb;
  }
  local_e0 = &local_218;
  if ((int)local_88[0] < 10) {
    pdVar5 = &DAT_1419df7b0;
LAB_14010931b:
    local_338 = *pdVar5;
    dStack_330 = pdVar5[1];
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_338);
  }
  else {
    pdVar5 = (double *)local_80[9];
    if (pdVar5 != &local_208) goto LAB_14010931b;
  }
  local_d8 = &local_208;
  if ((int)local_88[0] < 0xb) {
    pdVar5 = &DAT_1419df7b0;
LAB_14010937b:
    local_338 = *pdVar5;
    dStack_330 = pdVar5[1];
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_338);
  }
  else {
    pdVar5 = (double *)local_80[10];
    if (pdVar5 != &local_1f8) goto LAB_14010937b;
  }
  local_d0 = &local_1f8;
  if ((int)local_88[0] < 0xc) {
    pdVar5 = &DAT_1419df7b0;
LAB_1401093db:
    local_338 = *pdVar5;
    dStack_330 = pdVar5[1];
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_338);
  }
  else {
    pdVar5 = (double *)local_80[0xb];
    if (pdVar5 != &local_1e8) goto LAB_1401093db;
  }
  local_c8 = &local_1e8;
  local_338 = _DAT_1419e1d20;
  dStack_330 = dRam00000001419e1d28;
  if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_338);
  local_c0 = local_1d8;
  FUN_140e634e0(param_1,param_2,&local_368,10,CONCAT44(uVar17,DAT_141a04a08),&local_108);
  local_2f8 = 0x309;
  if ((local_284 & 0xffffff) == 0) {
    dVar12 = local_290;
  }
  else {
    dVar12 = (double)FUN_140e4b060(&local_290);
  }
  FUN_140ec9e10((longlong)dVar12);
  local_2f8 = 0x30a;
  FUN_140ec7870();
  local_2f8 = 0x30c;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  local_368 = 0;
  local_360 = 0;
  local_35c = 5;
  local_108 = &local_2a0;
  uStack_37c = local_2d4;
  uStack_380 = local_2d8;
  if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) == 0) {
    local_388 = local_2e0;
  }
  else {
    FUN_1400419b0(&local_388,&local_2e0);
  }
  local_358 = 4;
  FUN_1400460e0(&local_388,&local_2c0);
  if ((int)local_88[0] < 6) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_80[5];
  }
  local_31c = uStack_37c;
  local_320 = uStack_380;
  if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) == 0) {
    local_328 = local_388;
  }
  else {
    FUN_1400419b0(&local_328,&local_388);
  }
  local_358 = 0xc;
  FUN_140042560(&local_328,puVar7);
  if ((int)local_88[0] < 1) {
    pdVar5 = &DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)*local_80;
  }
  uStack_36c = *(undefined4 *)((longlong)pdVar5 + 0xc);
  uStack_370 = *(undefined4 *)(pdVar5 + 1);
  if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) == 0) {
    local_378 = *pdVar5;
  }
  else {
    FUN_1400419b0(&local_378);
  }
  local_358 = 0x1c;
  FUN_1400462a0(&local_378,&local_328);
  dStack_330 = (double)CONCAT44(uStack_36c,uStack_370);
  local_338 = local_378;
  if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  FUN_140041b80(&local_258,&local_338);
  local_358 = 0xc;
  if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_358 = 4;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_358 = 0;
  if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  local_100 = &local_258;
  uStack_37c = local_2d4;
  uStack_380 = local_2d8;
  if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) == 0) {
    local_388 = local_2e0;
  }
  else {
    FUN_1400419b0(&local_388,&local_2e0);
  }
  local_358 = 0x20;
  FUN_1400460e0(&local_388,&local_2d0);
  if ((int)local_88[0] < 7) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_80[6];
  }
  local_31c = uStack_37c;
  local_320 = uStack_380;
  if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) == 0) {
    local_328 = local_388;
  }
  else {
    FUN_1400419b0(&local_328,&local_388);
  }
  local_358 = 0x60;
  FUN_140042560(&local_328,puVar7);
  if ((int)local_88[0] < 2) {
    pdVar5 = &DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)local_80[1];
  }
  uStack_36c = *(undefined4 *)((longlong)pdVar5 + 0xc);
  uStack_370 = *(undefined4 *)(pdVar5 + 1);
  if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) == 0) {
    local_378 = *pdVar5;
  }
  else {
    FUN_1400419b0(&local_378);
  }
  local_358 = 0xe0;
  FUN_1400462a0(&local_378,&local_328);
  dStack_330 = (double)CONCAT44(uStack_36c,uStack_370);
  local_338 = local_378;
  if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140041b80(&local_248,&local_338);
  local_358 = 0x60;
  if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_358 = 0x20;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  local_f8 = &local_248;
  if ((int)local_88[0] < 6) {
    pdVar5 = &DAT_1419df7b0;
LAB_14010985e:
    local_338 = *pdVar5;
    dStack_330 = pdVar5[1];
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_338);
  }
  else {
    pdVar5 = (double *)local_80[5];
    if (pdVar5 != &local_238) goto LAB_14010985e;
  }
  local_f0 = &local_238;
  if ((int)local_88[0] < 7) {
    pdVar5 = &DAT_1419df7b0;
LAB_1401098be:
    local_338 = *pdVar5;
    dStack_330 = pdVar5[1];
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_338);
  }
  else {
    pdVar5 = (double *)local_80[6];
    if (pdVar5 != &local_228) goto LAB_1401098be;
  }
  local_e8 = &local_228;
  if ((int)local_88[0] < 8) {
    pdVar5 = &DAT_1419df7b0;
LAB_14010991e:
    local_338 = *pdVar5;
    dStack_330 = pdVar5[1];
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_338);
  }
  else {
    pdVar5 = (double *)local_80[7];
    if (pdVar5 != &local_218) goto LAB_14010991e;
  }
  local_e0 = &local_218;
  local_338 = _DAT_1419e1d60;
  dStack_330 = dRam00000001419e1d68;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  FUN_140041b80(&local_208,&local_338);
  local_d8 = &local_208;
  if ((int)local_88[0] < 0xd) {
    pdVar5 = &DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)local_80[0xc];
    if (pdVar5 == &local_1f8) goto LAB_1401099fe;
  }
  local_338 = *pdVar5;
  dStack_330 = pdVar5[1];
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_338);
LAB_1401099fe:
  local_d0 = &local_1f8;
  if (((int)local_88[0] < 0xe) || (pdVar8 = (double *)local_80[0xd], pdVar8 != &local_1e8)) {
    local_338 = *pdVar8;
    dStack_330 = pdVar8[1];
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_338);
  }
  local_c8 = &local_1e8;
  FUN_14010f4a0(param_1,param_2,&local_368,9,&local_108);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_290);
  }
  if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a0);
  }
  if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d0);
  }
  if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c0);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  if ((1 << (bVar6 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b0);
  }
  if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e0);
  }
  if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_280);
  }
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_2e8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_268,0x10,0xe,FUN_140041b30);
  if (0 < (int)local_88[0]) {
    puVar7 = local_80;
    do {
      puVar2 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 *)local_308;
  return param_3;
}

