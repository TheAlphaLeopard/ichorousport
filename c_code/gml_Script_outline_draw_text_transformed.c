// gml_Script_outline_draw_text_transformed @ 0x1400f9a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_outline_draw_text_transformed
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined8 **ppuVar5;
  double *pdVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  double dVar12;
  double dVar13;
  code *pcVar14;
  undefined4 uVar17;
  undefined8 uVar15;
  double **ppdVar16;
  ulonglong in_stack_fffffffffffffcf0;
  undefined8 *local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined8 *local_2e8;
  undefined4 uStack_2e0;
  uint uStack_2dc;
  uint local_2d8;
  uint local_2d4;
  undefined8 local_2d0;
  char *local_2c8;
  undefined4 local_2c0;
  uint local_2b8;
  uint local_2b4;
  undefined8 *local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined8 *local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  undefined8 *local_290;
  undefined4 local_288;
  undefined4 local_284;
  undefined8 *local_278;
  char *pcStack_270;
  undefined4 local_268;
  double local_258;
  uint local_24c;
  double local_248;
  uint local_23c;
  undefined8 *local_238;
  undefined4 uStack_230;
  uint uStack_22c;
  undefined8 *local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  double local_218;
  undefined4 local_210;
  uint local_20c;
  double local_208;
  undefined4 local_200;
  uint local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  double local_1e8;
  undefined4 local_1dc;
  double local_1d8;
  undefined4 local_1cc;
  double local_1c8;
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  double local_1a8;
  byte local_19c;
  double local_198;
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
  undefined1 local_128 [12];
  byte local_11c;
  uint local_118 [2];
  undefined8 *local_110;
  double local_108;
  undefined4 local_100;
  uint local_fc;
  double local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined8 *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double *local_d8;
  undefined8 *local_d0;
  double *local_c8;
  double *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  
  local_2c8 = "gml_Script_outline_draw_text";
  local_2d0 = DAT_141dc7a50;
  DAT_141dc7a50 = (undefined8 **)&local_2d0;
  local_2c0 = 0x198;
  FUN_140041df0(local_118,param_4,4,param_5);
  pcVar14 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_1c8,0x10,0xb,FUN_1400424d0,FUN_140041b30);
  puVar11 = local_110;
  uVar7 = local_118[0];
  uStack_dc = 0xffffff;
  local_e8 = (undefined8 *)0x0;
  local_1cc = 0xffffff;
  local_1d8 = 0.0;
  local_2b4 = 0xffffff;
  local_1fc = 0xffffff;
  local_208 = 0.0;
  local_2b8 = 0xffffff;
  local_20c = 0xffffff;
  local_218 = 0.0;
  local_2d4 = 0xffffff;
  uStack_21c = 0xffffff;
  local_228 = (undefined8 *)0x0;
  local_2d8 = 0xffffff;
  uStack_22c = 0xffffff;
  local_238 = (undefined8 *)0x0;
  local_284 = 0xffffff;
  local_290 = (undefined8 *)0x0;
  local_294 = 0xffffff;
  local_2a0 = (undefined8 *)0x0;
  local_2a4 = 0xffffff;
  local_2b0 = (undefined8 *)0x0;
  local_1dc = 0xffffff;
  local_1e8 = 0.0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_24c = 0xffffff;
  local_258 = 0.0;
  local_23c = 0xffffff;
  local_248 = 0.0;
  local_2ec = 0;
  local_2f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2c0 = 0x198;
  puVar9 = &DAT_1419df7b0;
  if ((int)local_118[0] < 4) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_110[3];
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_2c0 = 0x198;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    local_308 = DAT_1419df7b0;
    uStack_300 = (undefined8 *)_DAT_1419df7b8;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_308);
    local_b8 = local_188;
    local_308 = DAT_1419df7b0;
    uStack_300 = (undefined8 *)_DAT_1419df7b8;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_308);
    local_b0 = local_178;
    local_308 = DAT_1419df7b0;
    uStack_300 = (undefined8 *)_DAT_1419df7b8;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_308);
    local_a8 = local_168;
    local_308 = DAT_1419df7b0;
    uStack_300 = (undefined8 *)_DAT_1419df7b8;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_308);
    local_a0 = local_158;
    local_308 = DAT_1419df7b0;
    uStack_300 = (undefined8 *)_DAT_1419df7b8;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_308);
    local_98 = local_148;
    local_308 = DAT_1419df7b0;
    uStack_300 = (undefined8 *)_DAT_1419df7b8;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_308);
    local_90 = local_138;
    local_308 = DAT_1419df7b0;
    uStack_300 = (undefined8 *)_DAT_1419df7b8;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_308);
    local_88 = local_128;
    if (3 < (int)uVar7) {
      puVar9 = (undefined8 *)puVar11[3];
    }
    pcVar14 = (code *)&local_b8;
    puVar3 = (undefined8 *)gml_Script_outline_bake_sprite_text(param_1,param_2,&local_2f8,7,pcVar14)
    ;
    if (puVar3 != puVar9) {
      local_308 = (undefined8 *)*puVar3;
      uStack_300 = (undefined8 *)puVar3[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_308);
    }
  }
  local_2c0 = 0x199;
  if ((int)uVar7 < 4) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)puVar11[3];
  }
  uVar10 = (ulonglong)pcVar14 & 0xffffffffffffff00;
  FUN_140e87440(puVar9,DAT_141a044a8,0x80000000,&local_e8,uVar10,
                in_stack_fffffffffffffcf0 & 0xffffffffffffff00);
  uVar17 = (undefined4)(uVar10 >> 0x20);
  uStack_300 = (undefined8 *)CONCAT44(uStack_dc,uStack_e0);
  local_308 = local_e8;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140041b80(&local_1d8,&local_308);
  local_2c0 = 0x19b;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  uVar15 = CONCAT44(uVar17,DAT_141a04978);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_2f8,0,uVar15,0);
  uVar17 = (undefined4)((ulonglong)uVar15 >> 0x20);
  dVar13 = 0.0;
  if (pdVar4 != &local_208) {
    local_308 = (undefined8 *)*pdVar4;
    uStack_300 = (undefined8 *)pdVar4[1];
    FUN_140041b80(&local_208,&local_308);
    local_2b4 = local_1fc;
    dVar13 = local_208;
  }
  local_2c0 = 0x19c;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  uVar15 = CONCAT44(uVar17,DAT_141a049c8);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_2f8,0,uVar15,0);
  uVar17 = (undefined4)((ulonglong)uVar15 >> 0x20);
  dVar12 = 0.0;
  if (pdVar4 != &local_218) {
    local_308 = (undefined8 *)*pdVar4;
    uStack_300 = (undefined8 *)pdVar4[1];
    FUN_140041b80(&local_218,&local_308);
    local_2b8 = local_20c;
    dVar12 = local_218;
  }
  local_2c0 = 0x19d;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  if ((int)uVar7 < 3) {
    pdVar4 = (double *)&DAT_1419df7b0;
LAB_1400fa096:
    local_308 = (undefined8 *)*pdVar4;
    uStack_300 = (undefined8 *)pdVar4[1];
    if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_308);
  }
  else {
    pdVar4 = (double *)puVar11[2];
    if (pdVar4 != &local_1c8) goto LAB_1400fa096;
  }
  local_d8 = &local_1c8;
  uVar15 = CONCAT44(uVar17,DAT_141a04af8);
  ppuVar5 = (undefined8 **)FUN_140e634e0(param_1,param_2,&local_2f8,1,uVar15,&local_d8);
  uVar17 = (undefined4)((ulonglong)uVar15 >> 0x20);
  puVar9 = (undefined8 *)0x0;
  if (ppuVar5 != &local_228) {
    local_308 = *ppuVar5;
    uStack_300 = ppuVar5[1];
    FUN_140041b80(&local_228,&local_308);
    local_2d4 = uStack_21c;
    puVar9 = local_228;
  }
  local_2c0 = 0x19e;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  if ((int)uVar7 < 3) {
    pdVar4 = (double *)&DAT_1419df7b0;
LAB_1400fa17e:
    local_308 = (undefined8 *)*pdVar4;
    uStack_300 = (undefined8 *)pdVar4[1];
    if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_308);
  }
  else {
    pdVar4 = (double *)puVar11[2];
    if (pdVar4 != &local_1c8) goto LAB_1400fa17e;
  }
  local_d8 = &local_1c8;
  ppuVar5 = (undefined8 **)
            FUN_140e634e0(param_1,param_2,&local_2f8,1,CONCAT44(uVar17,DAT_141a04458),&local_d8);
  puVar11 = (undefined8 *)0x0;
  if (ppuVar5 != &local_238) {
    local_308 = *ppuVar5;
    uStack_300 = ppuVar5[1];
    FUN_140041b80(&local_238,&local_308);
    local_2d8 = uStack_22c;
    puVar11 = local_238;
  }
  local_2c0 = 0x19f;
  if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_290);
  }
  uVar7 = 0;
  local_284 = 0;
  local_290 = (undefined8 *)0x0;
  local_2c0 = 0x1a0;
  if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a0);
  }
  local_294 = 0;
  local_2a0 = (undefined8 *)0x0;
  local_2c0 = 0x1a2;
  local_ec = local_2b4;
  local_f0 = local_200;
  local_2b4 = local_2b4 & 0x1f;
  if ((1 << (sbyte)local_2b4 & 0x46U) == 0) {
    local_f8 = dVar13;
  }
  else {
    FUN_1400419b0(&local_f8,&local_208);
  }
  lVar1 = *(longlong *)ThreadLocalStoragePointer;
  if ((*(int *)(lVar1 + 0x18) < DAT_141ddcc40) &&
     (_Init_thread_header(&DAT_141ddcc40), DAT_141ddcc40 == -1)) {
    _DAT_141ddcd3c = 0;
    _DAT_141ddcd30 = 0x3ff0000000000000;
    _DAT_141ddcd50 = 0;
    _DAT_141ddcd44 = 0x4000000000000000;
    _DAT_141ddcd54 = 1;
    atexit((_func_5014 *)&LAB_1414672c0);
    _Init_thread_footer(&DAT_141ddcc40);
  }
  do {
    iVar2 = FUN_140e851f0(&DAT_141ddcd30 + (longlong)(int)uVar7 * 0x14,&local_f8,DAT_141955260,0);
    if (iVar2 == 0) {
      if ((&DAT_141ddcd40)[(longlong)(int)uVar7 * 5] == 0) {
        local_2c0 = 0x1a3;
        uStack_2dc = local_2d4;
        uStack_2e0 = uStack_220;
        if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) == 0) {
          local_2e8 = puVar9;
        }
        else {
          FUN_1400419b0(&local_2e8,&local_228);
        }
        uStack_300 = (undefined8 *)((ulonglong)uStack_300 & 0xffffffff);
        local_308 = (undefined8 *)0x3fe0000000000000;
        FUN_140042560(&local_2e8,&local_308);
        if ((1 << ((byte)((ulonglong)uStack_300 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_308);
        }
        uStack_300 = (undefined8 *)CONCAT44(uStack_2dc,uStack_2e0);
        local_308 = local_2e8;
        if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_290);
        }
        FUN_140041b80(&local_290,&local_308);
        if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
      }
      else if ((&DAT_141ddcd40)[(longlong)(int)uVar7 * 5] == 1) {
        local_2c0 = 0x1a4;
        uStack_300 = (undefined8 *)CONCAT44(uStack_21c,uStack_220);
        local_308 = local_228;
        if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_290);
        }
        FUN_140041b80(&local_290,&local_308);
      }
      break;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 2);
  uVar7 = 0;
  local_2c0 = 0x1a6;
  local_fc = local_2b8;
  local_100 = local_210;
  local_2b8 = local_2b8 & 0x1f;
  if ((1 << (sbyte)local_2b8 & 0x46U) == 0) {
    local_108 = dVar12;
  }
  else {
    FUN_1400419b0(&local_108,&local_218);
  }
  if ((*(int *)(lVar1 + 0x18) < DAT_141ddcb24) &&
     (_Init_thread_header(&DAT_141ddcb24), DAT_141ddcb24 == -1)) {
    _DAT_141ddcb74 = 0;
    _DAT_141ddcb68 = 0x3ff0000000000000;
    _DAT_141ddcb88 = 0;
    _DAT_141ddcb7c = 0x4000000000000000;
    _DAT_141ddcb8c = 1;
    atexit((_func_5014 *)&LAB_1414672a0);
    _Init_thread_footer(&DAT_141ddcb24);
  }
  do {
    iVar2 = FUN_140e851f0(&DAT_141ddcb68 + (longlong)(int)uVar7 * 0x14,&local_108,DAT_141955260,0);
    uVar8 = local_2d8;
    if (iVar2 == 0) {
      if ((&DAT_141ddcb78)[(longlong)(int)uVar7 * 5] == 0) {
        local_2c0 = 0x1a7;
        uStack_2dc = local_2d8;
        uStack_2e0 = uStack_230;
        if ((1 << ((byte)local_2d8 & 0x1f) & 0x46U) == 0) {
          local_2e8 = puVar11;
        }
        else {
          FUN_1400419b0(&local_2e8,&local_238);
        }
        uStack_300 = (undefined8 *)((ulonglong)uStack_300 & 0xffffffff);
        local_308 = (undefined8 *)0x3fe0000000000000;
        FUN_140042560(&local_2e8,&local_308);
        if ((1 << ((byte)((ulonglong)uStack_300 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_308);
        }
        uStack_300 = (undefined8 *)CONCAT44(uStack_2dc,uStack_2e0);
        local_308 = local_2e8;
        if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a0);
        }
        FUN_140041b80(&local_2a0,&local_308);
        if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
        goto LAB_1400fa5bf;
      }
      if ((&DAT_141ddcb78)[(longlong)(int)uVar7 * 5] == 1) {
        local_2c0 = 0x1a8;
        uStack_300 = (undefined8 *)CONCAT44(uStack_22c,uStack_230);
        local_308 = local_238;
        if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a0);
        }
        FUN_140041b80(&local_2a0,&local_308);
      }
      break;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 2);
  uVar8 = local_2d8;
LAB_1400fa5bf:
  local_2c0 = 0x1ab;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  local_d8 = &local_1d8;
  local_308 = _DAT_141dc6190;
  uStack_300 = puRam0000000141dc6198;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_308);
  local_d0 = (undefined8 *)local_1b8;
  ppuVar5 = (undefined8 **)FUN_140e79090(&local_2f8,2,&local_d8);
  if (ppuVar5 != &local_2b0) {
    local_308 = *ppuVar5;
    uStack_300 = ppuVar5[1];
    if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b0);
    }
    FUN_140041b80(&local_2b0,&local_308);
  }
  local_2c0 = 0x1ac;
  uStack_300 = (undefined8 *)((ulonglong)uStack_300 & 0xffffffff);
  local_308 = (undefined8 *)0x4000000000000000;
  FUN_140042560(&local_308,&local_2b0);
  uStack_2dc = local_2d4;
  uStack_2e0 = uStack_220;
  local_2d4 = local_2d4 & 0x1f;
  if ((1 << (sbyte)local_2d4 & 0x46U) == 0) {
    local_2e8 = puVar9;
  }
  else {
    FUN_1400419b0(&local_2e8,&local_228);
  }
  FUN_1400460e0(&local_2e8,&local_308);
  pcStack_270 = (char *)CONCAT44(uStack_2dc,uStack_2e0);
  local_278 = local_2e8;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_278);
  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)((ulonglong)uStack_300 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_2c0 = 0x1ad;
  uStack_300 = (undefined8 *)((ulonglong)uStack_300 & 0xffffffff);
  local_308 = (undefined8 *)0x4000000000000000;
  FUN_140042560(&local_308,&local_2b0);
  uStack_2e0 = uStack_230;
  local_2d8 = uVar8 & 0x1f;
  uStack_2dc = uVar8;
  if ((1 << (sbyte)local_2d8 & 0x46U) == 0) {
    local_2e8 = puVar11;
  }
  else {
    FUN_1400419b0(&local_2e8,&local_238);
  }
  FUN_1400460e0(&local_2e8,&local_308);
  pcStack_270 = (char *)CONCAT44(uStack_2dc,uStack_2e0);
  local_278 = local_2e8;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_278);
  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)((ulonglong)uStack_300 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_2c0 = 0x1af;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  local_d8 = &local_1e8;
  local_d0 = &local_1f8;
  ppdVar16 = &local_d8;
  pdVar4 = (double *)FUN_1400effd0(param_1,param_2,&local_2f8,2,ppdVar16);
  uVar17 = (undefined4)((ulonglong)ppdVar16 >> 0x20);
  if (pdVar4 != &local_258) {
    local_278 = (undefined8 *)*pdVar4;
    pcStack_270 = (char *)pdVar4[1];
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_278);
  }
  local_2c0 = 0x1b1;
  if ((local_24c & 0xffffff) == 0) {
    dVar13 = local_258;
  }
  else {
    dVar13 = (double)FUN_140e4b060(&local_258);
  }
  FUN_140ec60c0((longlong)dVar13,0xffffffff);
  local_2c0 = 0x1b2;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  local_278 = _DAT_141dc6190;
  pcStack_270 = (char *)puRam0000000141dc6198;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_278);
  local_d8 = &local_1c8;
  local_278 = _DAT_141dc6190;
  pcStack_270 = (char *)puRam0000000141dc6198;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_278);
  local_d0 = (undefined8 *)local_1b8;
  uVar15 = CONCAT44(uVar17,DAT_141a04558);
  FUN_140e634e0(param_1,param_2,&local_2f8,2,uVar15,&local_d8);
  uVar17 = (undefined4)((ulonglong)uVar15 >> 0x20);
  local_2c0 = 0x1b3;
  iVar2 = FUN_140ec9d80();
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_23c = 0;
  local_248 = (double)iVar2;
  local_2c0 = 0x1b4;
  FUN_140ec9dc0();
  local_2c0 = 0x1b5;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  uStack_2dc = local_284;
  uStack_2e0 = local_288;
  if ((1 << ((byte)local_284 & 0x1f) & 0x46U) == 0) {
    local_2e8 = local_290;
  }
  else {
    FUN_1400419b0(&local_2e8,&local_290);
  }
  FUN_1400460e0(&local_2e8,&local_2b0);
  pcStack_270 = (char *)CONCAT44(uStack_2dc,uStack_2e0);
  local_278 = local_2e8;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_278);
  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_d8 = &local_1c8;
  uStack_2dc = local_294;
  uStack_2e0 = local_298;
  if ((1 << ((byte)local_294 & 0x1f) & 0x46U) == 0) {
    local_2e8 = local_2a0;
  }
  else {
    FUN_1400419b0(&local_2e8,&local_2a0);
  }
  FUN_1400460e0(&local_2e8,&local_2b0);
  pcStack_270 = (char *)CONCAT44(uStack_2dc,uStack_2e0);
  local_278 = local_2e8;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_278);
  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_d0 = (undefined8 *)local_1b8;
  uVar10 = (ulonglong)local_118[0];
  pdVar4 = (double *)&DAT_1419df7b0;
  if ((int)local_118[0] < 3) {
    pdVar6 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar6 = (double *)local_110[2];
    if (pdVar6 == &local_1a8) goto LAB_1400fadcf;
  }
  local_278 = (undefined8 *)*pdVar6;
  pcStack_270 = (char *)pdVar6[1];
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_278);
LAB_1400fadcf:
  local_c8 = &local_1a8;
  FUN_140e634e0(param_1,param_2,&local_2f8,3,CONCAT44(uVar17,DAT_141a04598),&local_d8);
  local_2c0 = 0x1b6;
  if ((local_23c & 0xffffff) == 0) {
    dVar13 = local_248;
  }
  else {
    dVar13 = (double)FUN_140e4b060(&local_248);
  }
  FUN_140ec9e10((longlong)dVar13);
  local_2c0 = 0x1b7;
  FUN_140ec7870();
  local_2c0 = 0x1b9;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  local_d8 = &local_258;
  uStack_300 = (undefined8 *)CONCAT44(local_2a4,local_2a8);
  if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) == 0) {
    local_308 = local_2b0;
  }
  else {
    FUN_1400419b0(&local_308,&local_2b0);
  }
  FUN_1400460e0(&local_308,&local_290);
  if ((int)local_118[0] < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*local_110;
  }
  uStack_2dc = *(undefined4 *)((longlong)puVar9 + 0xc);
  uStack_2e0 = *(undefined4 *)(puVar9 + 1);
  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) == 0) {
    local_2e8 = (undefined8 *)*puVar9;
  }
  else {
    FUN_1400419b0(&local_2e8);
  }
  FUN_1400462a0(&local_2e8,&local_308);
  pcStack_270 = (char *)CONCAT44(uStack_2dc,uStack_2e0);
  local_278 = local_2e8;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_278);
  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)((ulonglong)uStack_300 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_d0 = (undefined8 *)local_1b8;
  uStack_2dc = local_2a4;
  uStack_2e0 = local_2a8;
  if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) == 0) {
    local_2e8 = local_2b0;
  }
  else {
    FUN_1400419b0(&local_2e8,&local_2b0);
  }
  FUN_1400460e0(&local_2e8,&local_2a0);
  if ((int)local_118[0] < 2) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_110[1];
  }
  uStack_300 = (undefined8 *)puVar9[1];
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) == 0) {
    local_308 = (undefined8 *)*puVar9;
  }
  else {
    FUN_1400419b0(&local_308);
  }
  FUN_1400462a0(&local_308,&local_2e8);
  local_278 = local_308;
  pcStack_270 = (char *)uStack_300;
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_278);
  if ((1 << ((byte)((ulonglong)uStack_300 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_c8 = &local_1a8;
  if (((int)local_118[0] < 4) || (pdVar4 = (double *)local_110[3], pdVar4 != &local_198)) {
    local_278 = (undefined8 *)*pdVar4;
    pcStack_270 = (char *)pdVar4[1];
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_278);
  }
  local_c0 = &local_198;
  gml_Script_outline_draw_surface_stretched(param_1,param_2,&local_2f8,4,&local_d8);
  local_2c0 = 0x1ba;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f0 = 0;
  pcStack_270 = "gml_Script_outline_end";
  local_278 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_278;
  local_2ec = 5;
  local_2f8 = 0;
  local_268 = 0xc5;
  FUN_140ec9dc0();
  DAT_141dc7a50 = (undefined8 **)local_278;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b0);
  }
  if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a0);
  }
  if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_290);
  }
  if ((1 << ((byte)local_2d8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_2b8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(&local_1c8,0x10,0xb,FUN_140041b30);
  if (0 < (int)local_118[0]) {
    puVar9 = local_110;
    do {
      puVar11 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar11);
      }
      *puVar11 = 0;
      *(undefined4 *)(puVar11 + 1) = 0;
      *(undefined4 *)((longlong)puVar11 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(local_110);
  DAT_141dc7a50 = (undefined8 **)local_2d0;
  return param_3;
}

