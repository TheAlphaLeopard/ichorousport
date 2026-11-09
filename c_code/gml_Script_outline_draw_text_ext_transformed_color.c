// gml_Script_outline_draw_text_ext_transformed_color @ 0x140103300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_outline_draw_text_ext_transformed_color
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  double dVar11;
  code *pcVar12;
  ulonglong uVar13;
  undefined4 uVar16;
  undefined8 uVar14;
  double **ppdVar15;
  ulonglong in_stack_fffffffffffffcc0;
  undefined8 *local_338;
  undefined8 uStack_330;
  undefined8 *local_328;
  undefined4 uStack_320;
  uint uStack_31c;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 local_30c;
  uint local_308;
  uint local_304;
  undefined8 local_300;
  char *local_2f8;
  undefined4 local_2f0;
  uint local_2e8;
  undefined8 *local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined8 *local_2c8;
  undefined8 uStack_2c0;
  undefined8 *local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined8 *local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  uint local_298;
  undefined8 *local_288;
  undefined4 uStack_280;
  uint uStack_27c;
  undefined8 *local_278;
  char *pcStack_270;
  undefined4 local_268;
  double local_258;
  uint local_24c;
  undefined8 *local_248;
  undefined4 uStack_240;
  uint uStack_23c;
  double local_238;
  uint local_22c;
  double local_228;
  byte local_21c;
  undefined1 local_218 [12];
  byte local_20c;
  undefined8 local_208;
  byte local_1fc;
  undefined8 local_1f8;
  byte local_1ec;
  undefined8 local_1e8;
  byte local_1dc;
  undefined8 local_1d8;
  byte local_1cc;
  undefined8 local_1c8;
  byte local_1bc;
  undefined8 local_1b8;
  byte local_1ac;
  undefined8 local_1a8;
  byte local_19c;
  double local_168;
  undefined4 local_160;
  uint local_15c;
  double local_158;
  undefined4 local_150;
  uint local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  double local_138;
  undefined4 local_12c;
  double local_128;
  undefined4 local_11c;
  double local_118;
  undefined4 local_110;
  uint local_10c;
  double local_108;
  undefined4 local_100;
  uint local_fc;
  double *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88 [2];
  undefined8 *local_80;
  
  local_2f8 = "gml_Script_outline_draw_text_transformed_color";
  local_300 = DAT_141dc7a50;
  DAT_141dc7a50 = (undefined8 **)&local_300;
  local_2f0 = 0x283;
  FUN_140041df0(local_88,param_4,0xc,param_5);
  pcVar12 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_228,0x10,0xc,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = (undefined8 *)0x0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_298 = 0xffffff;
  local_14c = 0xffffff;
  dVar11 = 0.0;
  local_158 = 0.0;
  local_2e8 = 0xffffff;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_304 = 0xffffff;
  uStack_23c = 0xffffff;
  local_248 = (undefined8 *)0x0;
  local_308 = 0xffffff;
  uStack_27c = 0xffffff;
  local_288 = (undefined8 *)0x0;
  local_29c = 0xffffff;
  local_2a8 = (undefined8 *)0x0;
  local_2ac = 0xffffff;
  local_2b8 = (undefined8 *)0x0;
  local_2d4 = 0xffffff;
  local_2e0 = (undefined8 *)0x0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_24c = 0xffffff;
  local_258 = 0.0;
  local_22c = 0xffffff;
  local_238 = 0.0;
  local_30c = 0;
  local_318 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2f0 = 0x283;
  puVar10 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 8) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[7];
  }
  iVar2 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_2f0 = 0x283;
    if ((int)local_88[0] < 7) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_80[6];
    }
    if ((int)local_88[0] < 8) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_80[7];
    }
    if (puVar6 != puVar3) {
      local_338 = (undefined8 *)*puVar6;
      uStack_330 = (undefined8 *)puVar6[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_338);
    }
  }
  if ((int)local_88[0] < 9) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[8];
  }
  iVar2 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_88[0] < 7) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_80[6];
    }
    if ((int)local_88[0] < 9) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_80[8];
    }
    if (puVar6 != puVar3) {
      local_338 = (undefined8 *)*puVar6;
      uStack_330 = (undefined8 *)puVar6[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_338);
    }
  }
  if ((int)local_88[0] < 10) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[9];
  }
  iVar2 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_88[0] < 7) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_80[6];
    }
    if ((int)local_88[0] < 10) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_80[9];
    }
    if (puVar6 != puVar3) {
      local_338 = (undefined8 *)*puVar6;
      uStack_330 = (undefined8 *)puVar6[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_338);
    }
  }
  if ((int)local_88[0] < 0xc) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[0xb];
  }
  iVar2 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    local_318 = 0;
    local_310 = 0;
    local_30c = 5;
    local_338 = DAT_1419df7b0;
    uStack_330 = (undefined8 *)_DAT_1419df7b8;
    if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_338);
    local_f8 = &local_228;
    local_338 = DAT_1419df7b0;
    uStack_330 = (undefined8 *)_DAT_1419df7b8;
    if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_338);
    local_f0 = (undefined8 *)local_218;
    local_338 = DAT_1419df7b0;
    uStack_330 = (undefined8 *)_DAT_1419df7b8;
    if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_338);
    local_e8 = &local_208;
    local_338 = DAT_1419df7b0;
    uStack_330 = (undefined8 *)_DAT_1419df7b8;
    if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_338);
    local_e0 = &local_1f8;
    local_338 = DAT_1419df7b0;
    uStack_330 = (undefined8 *)_DAT_1419df7b8;
    if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_338);
    local_d8 = &local_1e8;
    local_338 = DAT_1419df7b0;
    uStack_330 = (undefined8 *)_DAT_1419df7b8;
    if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_338);
    local_d0 = &local_1d8;
    local_338 = DAT_1419df7b0;
    uStack_330 = (undefined8 *)_DAT_1419df7b8;
    if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_338);
    local_c8 = &local_1c8;
    if ((int)local_88[0] < 0xc) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_80[0xb];
    }
    pcVar12 = (code *)&local_f8;
    puVar3 = (undefined8 *)gml_Script_outline_bake_sprite_text(param_1,param_2,&local_318,7,pcVar12)
    ;
    if (puVar3 != puVar6) {
      local_338 = (undefined8 *)*puVar3;
      uStack_330 = (undefined8 *)puVar3[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_338);
    }
  }
  local_2f0 = 0x284;
  if ((int)local_88[0] < 0xc) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[0xb];
  }
  uVar13 = (ulonglong)pcVar12 & 0xffffffffffffff00;
  FUN_140e87440(puVar6,DAT_141a044a8,0x80000000,&local_98,uVar13,
                in_stack_fffffffffffffcc0 & 0xffffffffffffff00);
  uVar16 = (undefined4)(uVar13 >> 0x20);
  uStack_330 = (undefined8 *)CONCAT44(uStack_8c,uStack_90);
  local_338 = local_98;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_338);
  local_2f0 = 0x286;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  uVar14 = CONCAT44(uVar16,DAT_141a04978);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_318,0,uVar14,0);
  uVar16 = (undefined4)((ulonglong)uVar14 >> 0x20);
  if (pdVar4 == &local_158) {
    uVar7 = local_298;
  }
  else {
    local_338 = (undefined8 *)*pdVar4;
    uStack_330 = (undefined8 *)pdVar4[1];
    FUN_140041b80(&local_158,&local_338);
    dVar11 = local_158;
    uVar7 = local_14c;
  }
  local_2f0 = 0x287;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  uVar14 = CONCAT44(uVar16,DAT_141a049c8);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_318,0,uVar14,0);
  uVar16 = (undefined4)((ulonglong)uVar14 >> 0x20);
  if (pdVar4 != &local_168) {
    local_338 = (undefined8 *)*pdVar4;
    uStack_330 = (undefined8 *)pdVar4[1];
    FUN_140041b80(&local_168,&local_338);
    local_2e8 = local_15c;
  }
  local_2f0 = 0x288;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  if ((int)local_88[0] < 3) {
    pdVar4 = (double *)&DAT_1419df7b0;
LAB_140103a70:
    local_338 = (undefined8 *)*pdVar4;
    uStack_330 = (undefined8 *)pdVar4[1];
    if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_338);
  }
  else {
    pdVar4 = (double *)local_80[2];
    if (pdVar4 != &local_228) goto LAB_140103a70;
  }
  local_f8 = &local_228;
  uVar14 = CONCAT44(uVar16,DAT_141a04af8);
  ppuVar5 = (undefined8 **)FUN_140e634e0(param_1,param_2,&local_318,1,uVar14,&local_f8);
  uVar16 = (undefined4)((ulonglong)uVar14 >> 0x20);
  if (ppuVar5 != &local_248) {
    local_338 = *ppuVar5;
    uStack_330 = ppuVar5[1];
    FUN_140041b80(&local_248,&local_338);
    local_304 = uStack_23c;
  }
  local_2f0 = 0x289;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  if ((int)local_88[0] < 3) {
    pdVar4 = (double *)&DAT_1419df7b0;
LAB_140103b4c:
    local_338 = (undefined8 *)*pdVar4;
    uStack_330 = (undefined8 *)pdVar4[1];
    if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_338);
  }
  else {
    pdVar4 = (double *)local_80[2];
    if (pdVar4 != &local_228) goto LAB_140103b4c;
  }
  local_f8 = &local_228;
  ppuVar5 = (undefined8 **)
            FUN_140e634e0(param_1,param_2,&local_318,1,CONCAT44(uVar16,DAT_141a04458),&local_f8);
  if (ppuVar5 != &local_288) {
    local_338 = *ppuVar5;
    uStack_330 = ppuVar5[1];
    FUN_140041b80(&local_288,&local_338);
    local_308 = uStack_27c;
  }
  local_2f0 = 0x28a;
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_29c = 0;
  local_2a8 = (undefined8 *)0x0;
  local_2f0 = 0x28b;
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_2ac = 0;
  local_2b8 = (undefined8 *)0x0;
  local_2f0 = 0x28d;
  local_100 = local_150;
  local_298 = uVar7 & 0x1f;
  local_fc = uVar7;
  if ((1 << (sbyte)local_298 & 0x46U) == 0) {
    local_108 = dVar11;
  }
  else {
    FUN_1400419b0(&local_108,&local_158);
  }
  lVar1 = *(longlong *)ThreadLocalStoragePointer;
  if ((*(int *)(lVar1 + 0x18) < DAT_141ddcab0) &&
     (_Init_thread_header(&DAT_141ddcab0), DAT_141ddcab0 == -1)) {
    _DAT_141ddc9ec = 0;
    _DAT_141ddc9e0 = 0x3ff0000000000000;
    _DAT_141ddca00 = 0;
    _DAT_141ddc9f4 = 0x4000000000000000;
    _DAT_141ddca04 = 1;
    atexit((_func_5014 *)&LAB_141467400);
    _Init_thread_footer(&DAT_141ddcab0);
  }
  uVar7 = 0;
  do {
    iVar2 = FUN_140e851f0(&DAT_141ddc9e0 + (longlong)(int)uVar7 * 0x14,&local_108,DAT_141955260,0);
    if (iVar2 == 0) {
      if (*(int *)(&DAT_141ddc9f0 + (longlong)(int)uVar7 * 0x14) == 0) {
        local_2f0 = 0x28e;
        uStack_31c = local_304;
        uStack_320 = uStack_240;
        if ((1 << ((byte)local_304 & 0x1f) & 0x46U) == 0) {
          local_328 = local_248;
        }
        else {
          FUN_1400419b0(&local_328,&local_248);
        }
        uStack_330 = (undefined8 *)((ulonglong)uStack_330 & 0xffffffff);
        local_338 = (undefined8 *)0x3fe0000000000000;
        FUN_140042560(&local_328,&local_338);
        if ((1 << ((byte)((ulonglong)uStack_330 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_338);
        }
        uStack_330 = (undefined8 *)CONCAT44(uStack_31c,uStack_320);
        local_338 = local_328;
        if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        FUN_140041b80(&local_2a8,&local_338);
        if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_328);
        }
      }
      else if (*(int *)(&DAT_141ddc9f0 + (longlong)(int)uVar7 * 0x14) == 1) {
        local_2f0 = 0x28f;
        uStack_330 = (undefined8 *)CONCAT44(uStack_23c,uStack_240);
        local_338 = local_248;
        if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        FUN_140041b80(&local_2a8,&local_338);
      }
      break;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 2);
  uVar7 = 0;
  local_2f0 = 0x291;
  local_10c = local_2e8;
  local_110 = local_160;
  local_2e8 = local_2e8 & 0x1f;
  if ((1 << (sbyte)local_2e8 & 0x46U) == 0) {
    local_118 = local_168;
  }
  else {
    FUN_1400419b0(&local_118,&local_168);
  }
  if ((*(int *)(lVar1 + 0x18) < DAT_141ddca08) &&
     (_Init_thread_header(&DAT_141ddca08), DAT_141ddca08 == -1)) {
    _DAT_141ddca1c = 0;
    _DAT_141ddca10 = 0x3ff0000000000000;
    _DAT_141ddca30 = 0;
    _DAT_141ddca24 = 0x4000000000000000;
    _DAT_141ddca34 = 1;
    atexit((_func_5014 *)&LAB_1414673e0);
    _Init_thread_footer(&DAT_141ddca08);
  }
  do {
    iVar2 = FUN_140e851f0(&DAT_141ddca10 + (longlong)(int)uVar7 * 0x14,&local_118,DAT_141955260,0);
    uVar9 = local_308;
    if (iVar2 == 0) {
      if ((&DAT_141ddca20)[(longlong)(int)uVar7 * 5] == 0) {
        local_2f0 = 0x292;
        uStack_31c = local_308;
        uStack_320 = uStack_280;
        if ((1 << ((byte)local_308 & 0x1f) & 0x46U) == 0) {
          local_328 = local_288;
        }
        else {
          FUN_1400419b0(&local_328,&local_288);
        }
        puVar6 = local_288;
        uStack_330 = (undefined8 *)((ulonglong)uStack_330 & 0xffffffff);
        local_338 = (undefined8 *)0x3fe0000000000000;
        FUN_140042560(&local_328,&local_338);
        if ((1 << ((byte)((ulonglong)uStack_330 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_338);
        }
        uStack_330 = (undefined8 *)CONCAT44(uStack_31c,uStack_320);
        local_338 = local_328;
        if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        FUN_140041b80(&local_2b8,&local_338);
        if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_328);
        }
        goto LAB_140103f9a;
      }
      if ((&DAT_141ddca20)[(longlong)(int)uVar7 * 5] == 1) {
        local_2f0 = 0x293;
        uStack_330 = (undefined8 *)CONCAT44(uStack_27c,uStack_280);
        local_338 = local_288;
        if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        FUN_140041b80(&local_2b8,&local_338);
      }
      break;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 2);
  puVar6 = local_288;
  uVar9 = local_308;
LAB_140103f9a:
  local_2f0 = 0x296;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  local_f8 = &local_128;
  local_338 = _DAT_141dc6190;
  uStack_330 = puRam0000000141dc6198;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_338);
  local_f0 = (undefined8 *)local_218;
  ppuVar5 = (undefined8 **)FUN_140e79090(&local_318,2,&local_f8);
  if (ppuVar5 != &local_2e0) {
    local_338 = *ppuVar5;
    uStack_330 = ppuVar5[1];
    if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e0);
    }
    FUN_140041b80(&local_2e0,&local_338);
  }
  local_2f0 = 0x297;
  uStack_330 = (undefined8 *)((ulonglong)uStack_330 & 0xffffffff);
  local_338 = (undefined8 *)0x4000000000000000;
  FUN_140042560(&local_338,&local_2e0);
  uStack_31c = local_304;
  uStack_320 = uStack_240;
  local_304 = local_304 & 0x1f;
  if ((1 << (sbyte)local_304 & 0x46U) == 0) {
    local_328 = local_248;
  }
  else {
    FUN_1400419b0(&local_328,&local_248);
  }
  FUN_1400460e0(&local_328,&local_338);
  uStack_2c0 = (double)CONCAT44(uStack_31c,uStack_320);
  local_2c8 = local_328;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_2c8);
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  if ((1 << ((byte)((ulonglong)uStack_330 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  local_2f0 = 0x298;
  uStack_330 = (undefined8 *)((ulonglong)uStack_330 & 0xffffffff);
  local_338 = (undefined8 *)0x4000000000000000;
  FUN_140042560(&local_338,&local_2e0);
  uStack_320 = uStack_280;
  local_308 = uVar9 & 0x1f;
  uStack_31c = uVar9;
  if ((1 << (sbyte)local_308 & 0x46U) == 0) {
    local_328 = puVar6;
  }
  else {
    FUN_1400419b0(&local_328,&local_288);
  }
  FUN_1400460e0(&local_328,&local_338);
  uStack_2c0 = (double)CONCAT44(uStack_31c,uStack_320);
  local_2c8 = local_328;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_2c8);
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  if ((1 << ((byte)((ulonglong)uStack_330 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  local_2f0 = 0x29a;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  local_f8 = &local_138;
  local_f0 = &local_148;
  ppdVar15 = &local_f8;
  pdVar4 = (double *)FUN_1400effd0(param_1,param_2,&local_318,2,ppdVar15);
  uVar16 = (undefined4)((ulonglong)ppdVar15 >> 0x20);
  if (pdVar4 != &local_258) {
    local_338 = (undefined8 *)*pdVar4;
    uStack_330 = (undefined8 *)pdVar4[1];
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_338);
  }
  local_2f0 = 0x29c;
  if ((local_24c & 0xffffff) == 0) {
    dVar11 = local_258;
  }
  else {
    dVar11 = (double)FUN_140e4b060(&local_258);
  }
  FUN_140ec60c0((longlong)dVar11,0xffffffff);
  local_2f0 = 0x29d;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  local_338 = _DAT_141dc6190;
  uStack_330 = puRam0000000141dc6198;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_140041b80(&local_228,&local_338);
  local_f8 = &local_228;
  local_338 = _DAT_141dc6190;
  uStack_330 = puRam0000000141dc6198;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_338);
  local_f0 = (undefined8 *)local_218;
  uVar14 = CONCAT44(uVar16,DAT_141a04558);
  FUN_140e634e0(param_1,param_2,&local_318,2,uVar14,&local_f8);
  uVar16 = (undefined4)((ulonglong)uVar14 >> 0x20);
  local_2f0 = 0x29e;
  iVar2 = FUN_140ec9d80();
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_22c = 0;
  local_238 = (double)iVar2;
  local_2f0 = 0x29f;
  FUN_140ec9dc0();
  local_2f0 = 0x2a0;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  uStack_31c = local_29c;
  uStack_320 = local_2a0;
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) == 0) {
    local_328 = local_2a8;
  }
  else {
    FUN_1400419b0(&local_328,&local_2a8);
  }
  FUN_1400460e0(&local_328,&local_2e0);
  uStack_330 = (undefined8 *)CONCAT44(uStack_31c,uStack_320);
  local_338 = local_328;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_140041b80(&local_228,&local_338);
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_f8 = &local_228;
  uStack_31c = local_2ac;
  uStack_320 = local_2b0;
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) == 0) {
    local_328 = local_2b8;
  }
  else {
    FUN_1400419b0(&local_328,&local_2b8);
  }
  FUN_1400460e0(&local_328,&local_2e0);
  uStack_330 = (undefined8 *)CONCAT44(uStack_31c,uStack_320);
  local_338 = local_328;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_338);
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_f0 = (undefined8 *)local_218;
  if ((int)local_88[0] < 3) {
    puVar6 = &DAT_1419df7b0;
LAB_140104766:
    local_338 = (undefined8 *)*puVar6;
    uStack_330 = (undefined8 *)puVar6[1];
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_338);
  }
  else {
    puVar6 = (undefined8 *)local_80[2];
    if (puVar6 != &local_208) goto LAB_140104766;
  }
  local_e8 = &local_208;
  if ((int)local_88[0] < 7) {
    puVar6 = &DAT_1419df7b0;
LAB_1401047b9:
    local_338 = (undefined8 *)*puVar6;
    uStack_330 = (undefined8 *)puVar6[1];
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_338);
  }
  else {
    puVar6 = (undefined8 *)local_80[6];
    if (puVar6 != &local_1f8) goto LAB_1401047b9;
  }
  local_e0 = &local_1f8;
  if ((int)local_88[0] < 8) {
    puVar6 = &DAT_1419df7b0;
LAB_14010480f:
    local_338 = (undefined8 *)*puVar6;
    uStack_330 = (undefined8 *)puVar6[1];
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_338);
  }
  else {
    puVar6 = (undefined8 *)local_80[7];
    if (puVar6 != &local_1e8) goto LAB_14010480f;
  }
  local_d8 = &local_1e8;
  if ((int)local_88[0] < 9) {
    puVar6 = &DAT_1419df7b0;
LAB_140104871:
    local_338 = (undefined8 *)*puVar6;
    uStack_330 = (undefined8 *)puVar6[1];
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_338);
  }
  else {
    puVar6 = (undefined8 *)local_80[8];
    if (puVar6 != &local_1d8) goto LAB_140104871;
  }
  local_d0 = &local_1d8;
  if ((int)local_88[0] < 10) {
    puVar6 = &DAT_1419df7b0;
LAB_1401048d3:
    local_338 = (undefined8 *)*puVar6;
    uStack_330 = (undefined8 *)puVar6[1];
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_338);
  }
  else {
    puVar6 = (undefined8 *)local_80[9];
    if (puVar6 != &local_1c8) goto LAB_1401048d3;
  }
  local_c8 = &local_1c8;
  local_338 = _DAT_1419e1d20;
  uStack_330 = (undefined8 *)uRam00000001419e1d28;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_338);
  local_c0 = &local_1b8;
  FUN_140e634e0(param_1,param_2,&local_318,8,CONCAT44(uVar16,DAT_141a04818),&local_f8);
  local_2f0 = 0x2a1;
  if ((local_22c & 0xffffff) == 0) {
    dVar11 = local_238;
  }
  else {
    dVar11 = (double)FUN_140e4b060(&local_238);
  }
  FUN_140ec9e10((longlong)dVar11);
  local_2f0 = 0x2a2;
  FUN_140ec7870();
  local_2f0 = 0x2a4;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  local_f8 = &local_258;
  uStack_31c = local_2d4;
  uStack_320 = local_2d8;
  if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) == 0) {
    local_328 = local_2e0;
  }
  else {
    FUN_1400419b0(&local_328,&local_2e0);
  }
  FUN_1400460e0(&local_328,&local_2a8);
  if ((int)local_88[0] < 4) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[3];
  }
  uStack_330 = (undefined8 *)CONCAT44(uStack_31c,uStack_320);
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) == 0) {
    local_338 = local_328;
  }
  else {
    FUN_1400419b0(&local_338,&local_328);
  }
  FUN_140042560(&local_338,puVar6);
  if ((int)local_88[0] < 1) {
    pdVar4 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar4 = (double *)*local_80;
  }
  uStack_2c0 = pdVar4[1];
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) == 0) {
    local_2c8 = (undefined8 *)*pdVar4;
  }
  else {
    FUN_1400419b0(&local_2c8);
  }
  FUN_1400462a0(&local_2c8,&local_338);
  local_278 = local_2c8;
  pcStack_270 = (char *)uStack_2c0;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_278);
  if ((1 << ((byte)((ulonglong)uStack_2c0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)((ulonglong)uStack_330 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_f0 = (undefined8 *)local_218;
  uStack_31c = local_2d4;
  uStack_320 = local_2d8;
  if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) == 0) {
    local_328 = local_2e0;
  }
  else {
    FUN_1400419b0(&local_328,&local_2e0);
  }
  FUN_1400460e0(&local_328,&local_2b8);
  if ((int)local_88[0] < 5) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[4];
  }
  uStack_2c0 = (double)CONCAT44(uStack_31c,uStack_320);
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) == 0) {
    local_2c8 = local_328;
  }
  else {
    FUN_1400419b0(&local_2c8,&local_328);
  }
  FUN_140042560(&local_2c8,puVar6);
  if ((int)local_88[0] < 2) {
    pdVar4 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar4 = (double *)local_80[1];
  }
  uStack_330 = (undefined8 *)pdVar4[1];
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) == 0) {
    local_338 = (undefined8 *)*pdVar4;
  }
  else {
    FUN_1400419b0(&local_338);
  }
  FUN_1400462a0(&local_338,&local_2c8);
  local_278 = local_338;
  pcStack_270 = (char *)uStack_330;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  FUN_140041b80(&local_208,&local_278);
  if ((1 << ((byte)((ulonglong)uStack_330 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  if ((1 << ((byte)((ulonglong)uStack_2c0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_e8 = &local_208;
  if ((int)local_88[0] < 4) {
    puVar6 = &DAT_1419df7b0;
LAB_140104d6e:
    local_278 = (undefined8 *)*puVar6;
    pcStack_270 = (char *)puVar6[1];
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_278);
  }
  else {
    puVar6 = (undefined8 *)local_80[3];
    if (puVar6 != &local_1f8) goto LAB_140104d6e;
  }
  local_e0 = &local_1f8;
  if ((int)local_88[0] < 5) {
    puVar6 = &DAT_1419df7b0;
LAB_140104dc2:
    local_278 = (undefined8 *)*puVar6;
    pcStack_270 = (char *)puVar6[1];
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_278);
  }
  else {
    puVar6 = (undefined8 *)local_80[4];
    if (puVar6 != &local_1e8) goto LAB_140104dc2;
  }
  local_d8 = &local_1e8;
  if ((int)local_88[0] < 6) {
    puVar6 = &DAT_1419df7b0;
LAB_140104e22:
    local_278 = (undefined8 *)*puVar6;
    pcStack_270 = (char *)puVar6[1];
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_278);
  }
  else {
    puVar6 = (undefined8 *)local_80[5];
    if (puVar6 != &local_1d8) goto LAB_140104e22;
  }
  local_d0 = &local_1d8;
  local_278 = _DAT_1419e1d60;
  pcStack_270 = (char *)uRam00000001419e1d68;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_278);
  local_c8 = &local_1c8;
  if ((int)local_88[0] < 0xb) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[10];
    if (puVar6 == &local_1b8) goto LAB_140104f02;
  }
  local_278 = (undefined8 *)*puVar6;
  pcStack_270 = (char *)puVar6[1];
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_278);
LAB_140104f02:
  local_c0 = &local_1b8;
  if (((int)local_88[0] < 0xc) || (puVar10 = (undefined8 *)local_80[0xb], puVar10 != &local_1a8)) {
    local_278 = (undefined8 *)*puVar10;
    pcStack_270 = (char *)puVar10[1];
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_278);
  }
  local_b8 = &local_1a8;
  FUN_14010f4a0(param_1,param_2,&local_318,9,&local_f8);
  local_2f0 = 0x2a5;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_310 = 0;
  pcStack_270 = "gml_Script_outline_end";
  local_278 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_278;
  local_30c = 5;
  local_318 = 0;
  local_268 = 0xc5;
  FUN_140ec9dc0();
  DAT_141dc7a50 = (undefined8 **)local_278;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e0);
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)local_308 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_2e8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_298 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_228,0x10,0xc,FUN_140041b30);
  if (0 < (int)local_88[0]) {
    puVar10 = local_80;
    do {
      puVar6 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 **)local_300;
  return param_3;
}

