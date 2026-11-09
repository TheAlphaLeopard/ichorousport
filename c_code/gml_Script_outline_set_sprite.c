// gml_Script_outline_set_sprite @ 0x140105280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_outline_set_sprite
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
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  double *pdVar11;
  double dVar12;
  code *pcVar13;
  ulonglong uVar14;
  undefined4 uVar17;
  undefined8 uVar15;
  double **ppdVar16;
  ulonglong in_stack_fffffffffffffcc0;
  double local_338;
  undefined4 uStack_330;
  uint uStack_32c;
  double local_328;
  undefined4 uStack_320;
  uint uStack_31c;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 local_30c;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  undefined4 local_2e8;
  double local_2e0;
  undefined4 local_2d8;
  uint local_2d4;
  double local_2d0;
  undefined4 local_2c8;
  uint local_2c4;
  undefined8 local_2c0;
  char *local_2b8;
  undefined4 local_2b0;
  uint local_2a8;
  uint local_2a4;
  uint local_2a0;
  double local_298;
  undefined4 local_290;
  undefined4 local_28c;
  double local_288;
  undefined4 local_280;
  undefined4 local_27c;
  double local_278;
  undefined4 local_270;
  undefined4 local_26c;
  double local_268;
  undefined4 local_260;
  uint local_25c;
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
  double local_1d8;
  byte local_1cc;
  undefined1 local_1c8 [12];
  byte local_1bc;
  double local_1a8;
  uint local_19c;
  double local_198;
  uint local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  double local_168;
  undefined4 local_160;
  uint local_15c;
  double local_158;
  undefined4 local_150;
  uint local_14c;
  double *local_148;
  double *local_140;
  double *local_138;
  double *local_130;
  double *local_128;
  double *local_120;
  double *local_118;
  double *local_110;
  double *local_108;
  undefined1 *local_100;
  undefined8 local_e8;
  undefined4 local_dc;
  double local_d8;
  undefined4 local_cc;
  double local_c8;
  undefined4 local_bc;
  double local_b8;
  undefined4 local_b0;
  uint local_ac;
  double local_a8;
  undefined4 local_a0;
  uint local_9c;
  double local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88 [2];
  undefined8 *local_80;
  
  local_2e8 = 0;
  local_2b8 = "gml_Script_outline_draw_text_ext_color";
  local_2c0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2c0;
  local_2b0 = 0x2b4;
  FUN_140041df0(local_88,param_4,0xb,param_5);
  pcVar13 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_258,0x10,0xb,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0.0;
  local_bc = 0xffffff;
  local_c8 = 0.0;
  local_2a0 = 0xffffff;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_2a4 = 0xffffff;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_28c = 0xffffff;
  local_298 = 0.0;
  local_25c = 0xffffff;
  local_268 = 0.0;
  local_2d4 = 0xffffff;
  local_2e0 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_26c = 0xffffff;
  local_278 = 0.0;
  local_27c = 0xffffff;
  local_288 = 0.0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_30c = 0;
  local_318 = 0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2b0 = 0x2b4;
  pdVar11 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 7) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_80[6];
  }
  iVar3 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_2b0 = 0x2b4;
    if ((int)local_88[0] < 6) {
      pdVar5 = &DAT_1419df7b0;
    }
    else {
      pdVar5 = (double *)local_80[5];
    }
    if ((int)local_88[0] < 7) {
      pdVar4 = &DAT_1419df7b0;
    }
    else {
      pdVar4 = (double *)local_80[6];
    }
    if (pdVar5 != pdVar4) {
      local_308 = *pdVar5;
      dStack_300 = pdVar5[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      FUN_140041b80(pdVar4,&local_308);
    }
  }
  if ((int)local_88[0] < 8) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_80[7];
  }
  iVar3 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    if ((int)local_88[0] < 6) {
      pdVar5 = &DAT_1419df7b0;
    }
    else {
      pdVar5 = (double *)local_80[5];
    }
    if ((int)local_88[0] < 8) {
      pdVar4 = &DAT_1419df7b0;
    }
    else {
      pdVar4 = (double *)local_80[7];
    }
    if (pdVar5 != pdVar4) {
      local_308 = *pdVar5;
      dStack_300 = pdVar5[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      FUN_140041b80(pdVar4,&local_308);
    }
  }
  if ((int)local_88[0] < 9) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_80[8];
  }
  iVar3 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    if ((int)local_88[0] < 6) {
      pdVar5 = &DAT_1419df7b0;
    }
    else {
      pdVar5 = (double *)local_80[5];
    }
    if ((int)local_88[0] < 9) {
      pdVar4 = &DAT_1419df7b0;
    }
    else {
      pdVar4 = (double *)local_80[8];
    }
    if (pdVar5 != pdVar4) {
      local_308 = *pdVar5;
      dStack_300 = pdVar5[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      FUN_140041b80(pdVar4,&local_308);
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
    if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    local_318 = 0;
    local_310 = 0;
    local_30c = 5;
    local_308 = DAT_1419df7b0;
    dStack_300 = _DAT_1419df7b8;
    if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_308);
    local_148 = &local_258;
    local_308 = DAT_1419df7b0;
    dStack_300 = _DAT_1419df7b8;
    if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_308);
    local_140 = &local_248;
    local_308 = DAT_1419df7b0;
    dStack_300 = _DAT_1419df7b8;
    if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_308);
    local_138 = &local_238;
    local_308 = DAT_1419df7b0;
    dStack_300 = _DAT_1419df7b8;
    if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_308);
    local_130 = &local_228;
    local_308 = DAT_1419df7b0;
    dStack_300 = _DAT_1419df7b8;
    if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_308);
    local_128 = &local_218;
    local_308 = DAT_1419df7b0;
    dStack_300 = _DAT_1419df7b8;
    if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_308);
    local_120 = &local_208;
    local_308 = DAT_1419df7b0;
    dStack_300 = _DAT_1419df7b8;
    if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_308);
    local_118 = &local_1f8;
    if ((int)local_88[0] < 0xb) {
      pdVar5 = &DAT_1419df7b0;
    }
    else {
      pdVar5 = (double *)local_80[10];
    }
    pcVar13 = (code *)&local_148;
    pdVar4 = (double *)gml_Script_outline_bake_sprite_text(param_1,param_2,&local_318,7,pcVar13);
    if (pdVar4 != pdVar5) {
      local_308 = *pdVar4;
      dStack_300 = pdVar4[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar5);
      }
      FUN_140041b80(pdVar5,&local_308);
    }
  }
  local_2b0 = 0x2b5;
  if ((int)local_88[0] < 0xb) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_80[10];
  }
  uVar14 = (ulonglong)pcVar13 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a044a8,0x80000000,&local_98,uVar14,
                in_stack_fffffffffffffcc0 & 0xffffffffffffff00);
  uVar17 = (undefined4)(uVar14 >> 0x20);
  dStack_300 = (double)CONCAT44(uStack_8c,uStack_90);
  local_308 = local_98;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_308);
  local_2b0 = 0x2b7;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  uVar15 = CONCAT44(uVar17,DAT_141a04978);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_318,0,uVar15,0);
  uVar17 = (undefined4)((ulonglong)uVar15 >> 0x20);
  if (pdVar5 != &local_158) {
    local_308 = *pdVar5;
    dStack_300 = pdVar5[1];
    FUN_140041b80(&local_158,&local_308);
    local_2a0 = local_14c;
  }
  local_2b0 = 0x2b8;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  uVar15 = CONCAT44(uVar17,DAT_141a049c8);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_318,0,uVar15,0);
  uVar17 = (undefined4)((ulonglong)uVar15 >> 0x20);
  if (pdVar5 != &local_168) {
    local_308 = *pdVar5;
    dStack_300 = pdVar5[1];
    FUN_140041b80(&local_168,&local_308);
    local_2a4 = local_15c;
  }
  local_2b0 = 0x2ba;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_17c = 0;
  local_188 = 0x3ff0000000000000;
  local_2b0 = 699;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  local_148 = &local_c8;
  local_308 = _DAT_141dc6190;
  dStack_300 = dRam0000000141dc6198;
  if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140041b80(&local_248,&local_308);
  local_140 = &local_248;
  pdVar5 = (double *)FUN_140e79090(&local_318,2,&local_148);
  if (pdVar5 != &local_298) {
    local_308 = *pdVar5;
    dStack_300 = pdVar5[1];
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    FUN_140041b80(&local_298,&local_308);
  }
  local_2b0 = 700;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  if ((int)local_88[0] < 3) {
    pdVar5 = &DAT_1419df7b0;
LAB_140105ae5:
    local_308 = *pdVar5;
    dStack_300 = pdVar5[1];
    if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_308);
  }
  else {
    pdVar5 = (double *)local_80[2];
    if (pdVar5 != &local_258) goto LAB_140105ae5;
  }
  local_148 = &local_258;
  uVar15 = CONCAT44(uVar17,DAT_141a04af8);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_318,1,uVar15,&local_148);
  uVar17 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uVar10 = 0xffffff;
  if (pdVar5 != &local_268) {
    local_308 = *pdVar5;
    dStack_300 = pdVar5[1];
    FUN_140041b80(&local_268,&local_308);
    uVar10 = local_25c;
  }
  local_2b0 = 0x2bd;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  if ((int)local_88[0] < 5) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_80[4];
  }
  uStack_330 = local_260;
  local_2a8 = uVar10 & 0x1f;
  uVar9 = 1 << (sbyte)local_2a8 & 0x46;
  uStack_32c = uVar10;
  if (uVar9 == 0) {
    local_338 = local_268;
  }
  else {
    FUN_1400419b0(&local_338,&local_268);
  }
  FUN_140046500(&local_338,puVar7);
  dStack_300 = (double)CONCAT44(uStack_32c,uStack_330);
  local_308 = local_338;
  if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  FUN_140041b80(&local_258,&local_308);
  if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  local_148 = &local_258;
  uVar15 = CONCAT44(uVar17,DAT_1419fe728);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_178,1,uVar15,&local_148);
  uVar17 = (undefined4)((ulonglong)uVar15 >> 0x20);
  if (pdVar5 != &local_248) {
    local_308 = *pdVar5;
    dStack_300 = pdVar5[1];
    if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_308);
  }
  local_140 = &local_248;
  local_308 = _DAT_1419e1d20;
  dStack_300 = dRam00000001419e1d28;
  if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  FUN_140041b80(&local_238,&local_308);
  local_138 = &local_238;
  pdVar5 = (double *)FUN_140e79090(&local_318,2,&local_140);
  if (pdVar5 != &local_2e0) {
    local_308 = *pdVar5;
    dStack_300 = pdVar5[1];
    if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e0);
    }
    FUN_140041b80(&local_2e0,&local_308);
  }
  local_2b0 = 0x2be;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  uStack_330 = local_260;
  if (uVar9 == 0) {
    local_338 = local_268;
    uStack_32c = uVar10;
  }
  else {
    uStack_32c = uVar10;
    FUN_1400419b0(&local_338,&local_268);
  }
  FUN_140046500(&local_338,&local_2e0);
  dStack_300 = (double)CONCAT44(uStack_32c,uStack_330);
  local_308 = local_338;
  if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  FUN_140041b80(&local_258,&local_308);
  if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  local_148 = &local_258;
  uVar10 = 0;
  uStack_31c = 0;
  local_328 = 2.0;
  FUN_140042560(&local_328,&local_298);
  pdVar5 = (double *)
           FUN_140e634e0(param_1,param_2,&local_318,1,CONCAT44(uVar17,DAT_1419fe728),&local_148);
  uStack_32c = *(undefined4 *)((longlong)pdVar5 + 0xc);
  uStack_330 = *(undefined4 *)(pdVar5 + 1);
  if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) == 0) {
    local_338 = *pdVar5;
  }
  else {
    FUN_1400419b0(&local_338,pdVar5);
  }
  FUN_1400460e0(&local_338,&local_328);
  dStack_300 = (double)CONCAT44(uStack_32c,uStack_330);
  local_308 = local_338;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_308);
  if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_2b0 = 0x2bf;
  dStack_300 = (double)((ulonglong)dStack_300 & 0xffffffff);
  local_308 = 2.0;
  FUN_140042560(&local_308,&local_298);
  uStack_32c = local_2d4;
  uStack_330 = local_2d8;
  if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) == 0) {
    local_338 = local_2e0;
  }
  else {
    FUN_1400419b0(&local_338,&local_2e0);
  }
  FUN_1400460e0(&local_338,&local_188);
  if ((int)local_88[0] < 4) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_80[3];
  }
  local_2c4 = uStack_32c;
  local_2c8 = uStack_330;
  if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) == 0) {
    local_2d0 = local_338;
  }
  else {
    FUN_1400419b0(&local_2d0,&local_338);
  }
  FUN_140042560(&local_2d0,puVar7);
  uStack_31c = local_2c4;
  uStack_320 = local_2c8;
  if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) == 0) {
    local_328 = local_2d0;
  }
  else {
    FUN_1400419b0(&local_328,&local_2d0);
  }
  FUN_1400460e0(&local_328,&local_308);
  dStack_2f0 = (double)CONCAT44(uStack_31c,uStack_320);
  local_2f8 = local_328;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_2f8);
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d0);
  }
  if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  if ((1 << ((byte)((ulonglong)dStack_300 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_2b0 = 0x2c1;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_26c = 0;
  local_278 = 0.0;
  local_2b0 = 0x2c2;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_27c = 0;
  local_288 = 0.0;
  local_2b0 = 0x2c4;
  local_9c = local_2a0;
  local_a0 = local_150;
  local_2a0 = local_2a0 & 0x1f;
  if ((1 << (sbyte)local_2a0 & 0x46U) == 0) {
    local_a8 = local_158;
  }
  else {
    FUN_1400419b0(&local_a8,&local_158);
  }
  lVar1 = *(longlong *)ThreadLocalStoragePointer;
  if ((*(int *)(lVar1 + 0x18) < DAT_141ddcb20) &&
     (_Init_thread_header(&DAT_141ddcb20), DAT_141ddcb20 == -1)) {
    _DAT_141ddcc24 = 0;
    _DAT_141ddcc18 = 0x3ff0000000000000;
    _DAT_141ddcc38 = 0;
    _DAT_141ddcc2c = 0x4000000000000000;
    _DAT_141ddcc3c = 1;
    atexit((_func_5014 *)&LAB_141467440);
    _Init_thread_footer(&DAT_141ddcb20);
  }
  do {
    iVar3 = FUN_140e851f0(&DAT_141ddcc18 + (longlong)(int)uVar10 * 0x14,&local_a8,DAT_141955260,0);
    bVar6 = (byte)local_2a8;
    if (iVar3 == 0) {
      if (*(int *)(&DAT_141ddcc28 + (longlong)(int)uVar10 * 0x14) == 0) {
        local_2b0 = 0x2c5;
        uStack_32c = local_25c;
        uStack_330 = local_260;
        if ((1 << (bVar6 & 0x1f) & 0x46U) == 0) {
          local_338 = local_268;
        }
        else {
          FUN_1400419b0(&local_338,&local_268);
        }
        FUN_140046500(&local_338,&local_2e0);
        uStack_31c = uStack_32c;
        uStack_320 = uStack_330;
        if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) == 0) {
          local_328 = local_338;
        }
        else {
          FUN_1400419b0(&local_328,&local_338);
        }
        dStack_300 = (double)((ulonglong)dStack_300 & 0xffffffff);
        local_308 = 0.5;
        FUN_140042560(&local_328,&local_308);
        if ((1 << ((byte)((ulonglong)dStack_300 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_308);
        }
        dStack_2f0 = (double)CONCAT44(uStack_31c,uStack_320);
        local_2f8 = local_328;
        if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        FUN_140041b80(&local_278,&local_2f8);
        if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_328);
        }
        if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) == 0) break;
        pdVar5 = &local_338;
      }
      else {
        if (*(int *)(&DAT_141ddcc28 + (longlong)(int)uVar10 * 0x14) != 1) break;
        local_2b0 = 0x2c6;
        uStack_31c = local_25c;
        uStack_320 = local_260;
        if ((1 << (bVar6 & 0x1f) & 0x46U) == 0) {
          local_328 = local_268;
        }
        else {
          FUN_1400419b0(&local_328,&local_268);
        }
        FUN_140046500(&local_328,&local_2e0);
        dStack_2f0 = (double)CONCAT44(uStack_31c,uStack_320);
        local_2f8 = local_328;
        if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        FUN_140041b80(&local_278,&local_2f8);
        if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) == 0) break;
        pdVar5 = &local_328;
      }
      FUN_140041a50(pdVar5);
      break;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 2);
  local_2b0 = 0x2c8;
  local_ac = local_2a4;
  local_b0 = local_160;
  local_2a4 = local_2a4 & 0x1f;
  if ((1 << (sbyte)local_2a4 & 0x46U) == 0) {
    local_b8 = local_168;
  }
  else {
    FUN_1400419b0(&local_b8,&local_168);
  }
  if ((*(int *)(lVar1 + 0x18) < DAT_141ddcc80) &&
     (_Init_thread_header(&DAT_141ddcc80), DAT_141ddcc80 == -1)) {
    _DAT_141ddca7c = 0;
    _DAT_141ddca70 = 0x3ff0000000000000;
    _DAT_141ddca90 = 0;
    _DAT_141ddca84 = 0x4000000000000000;
    _DAT_141ddca94 = 1;
    atexit((_func_5014 *)&LAB_141467420);
    _Init_thread_footer(&DAT_141ddcc80);
  }
  uVar10 = 0;
  do {
    iVar3 = FUN_140e851f0(&DAT_141ddca70 + (longlong)(int)uVar10 * 0x14,&local_b8,DAT_141955260,0);
    if (iVar3 == 0) {
      if (*(int *)(&DAT_141ddca80 + (longlong)(int)uVar10 * 0x14) == 0) {
        local_2b0 = 0x2c9;
        local_2c4 = local_2d4;
        local_2c8 = local_2d8;
        if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) == 0) {
          local_2d0 = local_2e0;
        }
        else {
          FUN_1400419b0(&local_2d0,&local_2e0);
        }
        FUN_1400460e0(&local_2d0,&local_188);
        if ((int)local_88[0] < 4) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = (undefined8 *)local_80[3];
        }
        uStack_32c = local_2c4;
        uStack_330 = local_2c8;
        if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) == 0) {
          local_338 = local_2d0;
        }
        else {
          FUN_1400419b0(&local_338,&local_2d0);
        }
        FUN_140042560(&local_338,puVar7);
        uStack_31c = uStack_32c;
        uStack_320 = uStack_330;
        if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) == 0) {
          local_328 = local_338;
        }
        else {
          FUN_1400419b0(&local_328,&local_338);
        }
        dStack_300 = (double)((ulonglong)dStack_300 & 0xffffffff);
        local_308 = 0.5;
        FUN_140042560(&local_328,&local_308);
        if ((1 << ((byte)((ulonglong)dStack_300 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_308);
        }
        dStack_2f0 = (double)CONCAT44(uStack_31c,uStack_320);
        local_2f8 = local_328;
        if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        FUN_140041b80(&local_288,&local_2f8);
        if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_328);
        }
        if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_338);
        }
        if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) == 0) break;
        pdVar5 = &local_2d0;
      }
      else {
        if (*(int *)(&DAT_141ddca80 + (longlong)(int)uVar10 * 0x14) != 1) break;
        local_2b0 = 0x2ca;
        uStack_32c = local_2d4;
        uStack_330 = local_2d8;
        if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) == 0) {
          local_338 = local_2e0;
        }
        else {
          FUN_1400419b0(&local_338,&local_2e0);
        }
        FUN_1400460e0(&local_338,&local_188);
        if ((int)local_88[0] < 4) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = (undefined8 *)local_80[3];
        }
        uStack_31c = uStack_32c;
        uStack_320 = uStack_330;
        if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) == 0) {
          local_328 = local_338;
        }
        else {
          FUN_1400419b0(&local_328,&local_338);
        }
        FUN_140042560(&local_328,puVar7);
        dStack_2f0 = (double)CONCAT44(uStack_31c,uStack_320);
        local_2f8 = local_328;
        if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        FUN_140041b80(&local_288,&local_2f8);
        if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_328);
        }
        if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) == 0) break;
        pdVar5 = &local_338;
      }
      FUN_140041a50(pdVar5);
      break;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 2);
  local_2b0 = 0x2cd;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  local_148 = &local_d8;
  local_140 = (double *)&local_e8;
  ppdVar16 = &local_148;
  pdVar5 = (double *)FUN_1400effd0(param_1,param_2,&local_318,2,ppdVar16);
  uVar17 = (undefined4)((ulonglong)ppdVar16 >> 0x20);
  if (pdVar5 != &local_1a8) {
    local_2f8 = *pdVar5;
    dStack_2f0 = pdVar5[1];
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_2f8);
  }
  local_2b0 = 0x2cf;
  if ((local_19c & 0xffffff) == 0) {
    dVar12 = local_1a8;
  }
  else {
    dVar12 = (double)FUN_140e4b060(&local_1a8);
  }
  FUN_140ec60c0((longlong)dVar12,0xffffffff);
  local_2b0 = 0x2d0;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  local_2f8 = _DAT_141dc6190;
  dStack_2f0 = dRam0000000141dc6198;
  if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  FUN_140041b80(&local_258,&local_2f8);
  local_148 = &local_258;
  local_2f8 = _DAT_141dc6190;
  dStack_2f0 = dRam0000000141dc6198;
  if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140041b80(&local_248,&local_2f8);
  local_140 = &local_248;
  uVar15 = CONCAT44(uVar17,DAT_141a04558);
  FUN_140e634e0(param_1,param_2,&local_318,2,uVar15,&local_148);
  uVar17 = (undefined4)((ulonglong)uVar15 >> 0x20);
  local_2b0 = 0x2d1;
  iVar3 = FUN_140ec9d80();
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_18c = 0;
  local_198 = (double)iVar3;
  local_2b0 = 0x2d2;
  FUN_140ec9dc0();
  local_2b0 = 0x2d3;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  uStack_31c = local_26c;
  uStack_320 = local_270;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) == 0) {
    local_328 = local_278;
  }
  else {
    FUN_1400419b0(&local_328,&local_278);
  }
  local_2e8 = 1;
  FUN_1400460e0(&local_328,&local_298);
  dStack_2f0 = (double)CONCAT44(uStack_31c,uStack_320);
  local_2f8 = local_328;
  if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  FUN_140041b80(&local_258,&local_2f8);
  local_2e8 = 0;
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_148 = &local_258;
  uStack_31c = local_27c;
  uStack_320 = local_280;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) == 0) {
    local_328 = local_288;
  }
  else {
    FUN_1400419b0(&local_328,&local_288);
  }
  local_2e8 = 2;
  FUN_1400460e0(&local_328,&local_298);
  dStack_2f0 = (double)CONCAT44(uStack_31c,uStack_320);
  local_2f8 = local_328;
  if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140041b80(&local_248,&local_2f8);
  local_2e8 = 0;
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_140 = &local_248;
  if ((int)local_88[0] < 3) {
    pdVar5 = &DAT_1419df7b0;
LAB_140106d14:
    local_2f8 = *pdVar5;
    dStack_2f0 = pdVar5[1];
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_2f8);
  }
  else {
    pdVar5 = (double *)local_80[2];
    if (pdVar5 != &local_238) goto LAB_140106d14;
  }
  local_138 = &local_238;
  if ((int)local_88[0] < 4) {
    pdVar5 = &DAT_1419df7b0;
LAB_140106d67:
    local_2f8 = *pdVar5;
    dStack_2f0 = pdVar5[1];
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_2f8);
  }
  else {
    pdVar5 = (double *)local_80[3];
    if (pdVar5 != &local_228) goto LAB_140106d67;
  }
  local_130 = &local_228;
  if ((int)local_88[0] < 5) {
    pdVar5 = &DAT_1419df7b0;
LAB_140106dba:
    local_2f8 = *pdVar5;
    dStack_2f0 = pdVar5[1];
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_2f8);
  }
  else {
    pdVar5 = (double *)local_80[4];
    if (pdVar5 != &local_218) goto LAB_140106dba;
  }
  local_128 = &local_218;
  if ((int)local_88[0] < 6) {
    pdVar5 = &DAT_1419df7b0;
LAB_140106e0d:
    local_2f8 = *pdVar5;
    dStack_2f0 = pdVar5[1];
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_2f8);
  }
  else {
    pdVar5 = (double *)local_80[5];
    if (pdVar5 != &local_208) goto LAB_140106e0d;
  }
  local_120 = &local_208;
  if ((int)local_88[0] < 7) {
    pdVar5 = &DAT_1419df7b0;
LAB_140106e60:
    local_2f8 = *pdVar5;
    dStack_2f0 = pdVar5[1];
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_2f8);
  }
  else {
    pdVar5 = (double *)local_80[6];
    if (pdVar5 != &local_1f8) goto LAB_140106e60;
  }
  local_118 = &local_1f8;
  if ((int)local_88[0] < 8) {
    pdVar5 = &DAT_1419df7b0;
LAB_140106eb6:
    local_2f8 = *pdVar5;
    dStack_2f0 = pdVar5[1];
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_2f8);
  }
  else {
    pdVar5 = (double *)local_80[7];
    if (pdVar5 != &local_1e8) goto LAB_140106eb6;
  }
  local_110 = &local_1e8;
  if ((int)local_88[0] < 9) {
    pdVar5 = &DAT_1419df7b0;
LAB_140106f18:
    local_2f8 = *pdVar5;
    dStack_2f0 = pdVar5[1];
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_2f8);
  }
  else {
    pdVar5 = (double *)local_80[8];
    if (pdVar5 != &local_1d8) goto LAB_140106f18;
  }
  local_108 = &local_1d8;
  local_2f8 = _DAT_1419e1d20;
  dStack_2f0 = dRam00000001419e1d28;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_2f8);
  local_100 = local_1c8;
  FUN_140e634e0(param_1,param_2,&local_318,10,CONCAT44(uVar17,DAT_141a04a08),&local_148);
  local_2b0 = 0x2d4;
  if ((local_18c & 0xffffff) == 0) {
    dVar12 = local_198;
  }
  else {
    dVar12 = (double)FUN_140e4b060(&local_198);
  }
  FUN_140ec9e10((longlong)dVar12);
  local_2b0 = 0x2d5;
  FUN_140ec7870();
  local_2b0 = 0x2d7;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  local_148 = &local_1a8;
  uStack_32c = local_28c;
  uStack_330 = local_290;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) == 0) {
    local_338 = local_298;
  }
  else {
    FUN_1400419b0(&local_338,&local_298);
  }
  local_2e8 = 4;
  FUN_1400460e0(&local_338,&local_278);
  if ((int)local_88[0] < 1) {
    pdVar5 = &DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)*local_80;
  }
  uStack_31c = *(undefined4 *)((longlong)pdVar5 + 0xc);
  uStack_320 = *(undefined4 *)(pdVar5 + 1);
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) == 0) {
    local_328 = *pdVar5;
  }
  else {
    FUN_1400419b0(&local_328);
  }
  local_2e8 = 0xc;
  FUN_1400462a0(&local_328,&local_338);
  dStack_2f0 = (double)CONCAT44(uStack_31c,uStack_320);
  local_2f8 = local_328;
  if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140041b80(&local_248,&local_2f8);
  local_2e8 = 4;
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_2e8 = 0;
  if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  local_140 = &local_248;
  uStack_32c = local_28c;
  uStack_330 = local_290;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) == 0) {
    local_338 = local_298;
  }
  else {
    FUN_1400419b0(&local_338,&local_298);
  }
  local_2e8 = 0x10;
  FUN_1400460e0(&local_338,&local_288);
  if ((int)local_88[0] < 2) {
    pdVar5 = &DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)local_80[1];
  }
  uStack_31c = *(undefined4 *)((longlong)pdVar5 + 0xc);
  uStack_320 = *(undefined4 *)(pdVar5 + 1);
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) == 0) {
    local_328 = *pdVar5;
  }
  else {
    FUN_1400419b0(&local_328);
  }
  local_2e8 = 0x30;
  FUN_1400462a0(&local_328,&local_338);
  dStack_2f0 = (double)CONCAT44(uStack_31c,uStack_320);
  local_2f8 = local_328;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  FUN_140041b80(&local_238,&local_2f8);
  local_2e8 = 0x10;
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  local_138 = &local_238;
  local_2f8 = _DAT_1419e1d20;
  dStack_2f0 = dRam00000001419e1d28;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_140041b80(&local_228,&local_2f8);
  local_130 = &local_228;
  local_2f8 = _DAT_1419e1d20;
  dStack_2f0 = dRam00000001419e1d28;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_2f8);
  local_128 = &local_218;
  local_2f8 = _DAT_141dc6190;
  dStack_2f0 = dRam0000000141dc6198;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  FUN_140041b80(&local_208,&local_2f8);
  local_120 = &local_208;
  local_2f8 = _DAT_1419e1d60;
  dStack_2f0 = dRam00000001419e1d68;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_2f8);
  local_118 = &local_1f8;
  if ((int)local_88[0] < 10) {
    pdVar5 = &DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)local_80[9];
    if (pdVar5 == &local_1e8) goto LAB_1401073e5;
  }
  local_2f8 = *pdVar5;
  dStack_2f0 = pdVar5[1];
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_2f8);
LAB_1401073e5:
  local_110 = &local_1e8;
  if (((int)local_88[0] < 0xb) || (pdVar11 = (double *)local_80[10], pdVar11 != &local_1d8)) {
    local_2f8 = *pdVar11;
    dStack_2f0 = pdVar11[1];
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_2f8);
  }
  local_108 = &local_1d8;
  FUN_14010f4a0(param_1,param_2,&local_318,9,&local_148);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e0);
  }
  if ((1 << (bVar6 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_2a0 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_258,0x10,0xb,FUN_140041b30);
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
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 *)local_2c0;
  return param_3;
}

