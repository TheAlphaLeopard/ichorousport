// gml_Script_outline_draw_text @ 0x1400f4310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 **
gml_Script_outline_draw_text
          (undefined8 param_1,undefined8 param_2,undefined8 **param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  double *pdVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  byte bVar12;
  double dVar13;
  double dVar14;
  code *pcVar15;
  undefined4 uVar18;
  undefined8 uVar16;
  double **ppdVar17;
  ulonglong in_stack_fffffffffffffbe0;
  undefined8 local_418;
  undefined4 local_410;
  undefined4 local_40c;
  undefined8 *local_408;
  undefined8 uStack_400;
  undefined4 local_3f8;
  undefined8 *local_3e8;
  undefined4 uStack_3e0;
  uint uStack_3dc;
  undefined8 local_3d8;
  char *local_3d0;
  undefined4 local_3c8;
  uint local_3c0;
  undefined8 *local_3b8;
  undefined4 uStack_3b0;
  uint uStack_3ac;
  undefined8 *local_3a8;
  undefined4 local_3a0;
  undefined4 local_39c;
  uint local_398;
  uint local_394;
  uint local_390;
  undefined8 *local_388;
  undefined4 local_380;
  undefined4 local_37c;
  undefined8 *local_378;
  undefined4 local_370;
  undefined4 local_36c;
  double local_368;
  uint local_35c;
  double local_358;
  uint local_34c;
  double local_348;
  uint local_33c;
  double local_338;
  uint local_32c;
  double local_328;
  byte local_31c;
  double local_318;
  byte local_30c;
  double local_308;
  byte local_2fc;
  undefined1 local_2f8 [12];
  byte local_2ec;
  undefined1 local_2e8 [12];
  byte local_2dc;
  undefined1 local_2d8 [12];
  byte local_2cc;
  undefined8 local_2c8;
  byte local_2bc;
  undefined8 local_2b8;
  byte local_2ac;
  undefined1 local_2a8 [12];
  byte local_29c;
  undefined1 local_298 [12];
  byte local_28c;
  undefined1 local_288 [12];
  byte local_27c;
  undefined1 local_278 [12];
  byte local_26c;
  undefined8 *local_268;
  undefined4 uStack_260;
  uint uStack_25c;
  undefined8 *local_258;
  undefined4 uStack_250;
  uint uStack_24c;
  double *local_248;
  double *local_240;
  double *local_238;
  double *local_230;
  undefined8 *local_228;
  undefined1 *local_220;
  undefined8 *local_218;
  undefined8 *local_210;
  undefined1 *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  double local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  uint local_1c8 [2];
  undefined8 *local_1c0;
  double local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  double local_1a8;
  undefined4 local_1a0;
  uint local_19c;
  double local_198;
  undefined4 local_18c;
  undefined4 local_188;
  undefined8 *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  double local_168;
  undefined4 local_160;
  uint local_15c;
  double local_158;
  undefined4 local_150;
  uint local_14c;
  undefined8 *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  
  local_3d0 = "gml_Script_outline_bake_sprite_text";
  local_3d8 = DAT_141dc7a50;
  DAT_141dc7a50 = (undefined8 **)&local_3d8;
  local_3c8 = 0xfb;
  FUN_140041df0(local_1c8,param_4,5,param_5);
  pcVar15 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_328,0x10,0xc,FUN_1400424d0,FUN_140041b30);
  puVar10 = local_1c0;
  uVar8 = local_1c8[0];
  uStack_dc = 0xffffff;
  local_e8 = (undefined8 *)0x0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  uStack_ec = 0xffffff;
  local_f8 = (undefined8 *)0x0;
  local_8c = 0xffffff;
  local_98 = 0;
  uStack_fc = 0xffffff;
  local_108 = (undefined8 *)0x0;
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_10c = 0xffffff;
  local_118 = (undefined8 *)0x0;
  local_7c = 0xffffff;
  local_88 = 0;
  uStack_11c = 0xffffff;
  local_128 = (undefined8 *)0x0;
  local_ac = 0xffffff;
  local_b8 = 0;
  uStack_12c = 0xffffff;
  local_138 = (undefined8 *)0x0;
  local_bc = 0xffffff;
  local_c8 = 0;
  uStack_13c = 0xffffff;
  local_148 = (undefined8 *)0x0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_32c = 0xffffff;
  local_338 = 0.0;
  local_33c = 0xffffff;
  local_348 = 0.0;
  local_390 = 0xffffff;
  local_1ac = 0xffffff;
  local_1b8 = 0.0;
  local_394 = 0xffffff;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_398 = 0xffffff;
  uStack_24c = 0xffffff;
  local_258 = (undefined8 *)0x0;
  local_3c0 = 0xffffff;
  uStack_25c = 0xffffff;
  local_268 = (undefined8 *)0x0;
  local_36c = 0xffffff;
  local_378 = (undefined8 *)0x0;
  local_37c = 0xffffff;
  local_388 = (undefined8 *)0x0;
  local_39c = 0xffffff;
  local_3a8 = (undefined8 *)0x0;
  local_1dc = 0xffffff;
  local_1e8 = 0.0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_34c = 0xffffff;
  local_358 = 0.0;
  local_35c = 0xffffff;
  local_368 = 0.0;
  local_188 = 0xffffff;
  uStack_16c = 0xffffff;
  local_178 = (undefined8 *)0x0;
  local_40c = 0;
  local_418 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = (undefined8 *)0x0;
  local_3c8 = 0xfb;
  if ((int)local_1c8[0] < 5) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_1c0[4];
  }
  iVar3 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_3c8 = 0xfb;
    if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_418);
    }
    local_418 = 0;
    local_410 = 0;
    local_40c = 5;
    local_408 = DAT_1419df7b0;
    uStack_400 = (char *)_DAT_1419df7b8;
    if ((1 << ((byte)_local_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2d8);
    }
    FUN_140041b80(local_2d8,&local_408);
    local_220 = local_2d8;
    local_408 = DAT_1419df7b0;
    uStack_400 = (char *)_DAT_1419df7b8;
    if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    FUN_140041b80(&local_2c8,&local_408);
    local_218 = &local_2c8;
    local_408 = DAT_1419df7b0;
    uStack_400 = (char *)_DAT_1419df7b8;
    if ((1 << ((byte)_local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    FUN_140041b80(&local_2b8,&local_408);
    local_210 = &local_2b8;
    local_408 = DAT_1419df7b0;
    uStack_400 = (char *)_DAT_1419df7b8;
    if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2a8);
    }
    FUN_140041b80(local_2a8,&local_408);
    local_208 = local_2a8;
    local_408 = DAT_1419df7b0;
    uStack_400 = (char *)_DAT_1419df7b8;
    if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_298);
    }
    FUN_140041b80(local_298,&local_408);
    local_200 = local_298;
    local_408 = DAT_1419df7b0;
    uStack_400 = (char *)_DAT_1419df7b8;
    if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_288);
    }
    FUN_140041b80(local_288,&local_408);
    local_1f8 = local_288;
    local_408 = DAT_1419df7b0;
    uStack_400 = (char *)_DAT_1419df7b8;
    if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_278);
    }
    FUN_140041b80(local_278,&local_408);
    local_1f0 = local_278;
    if ((int)uVar8 < 5) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)puVar10[4];
    }
    pcVar15 = (code *)&local_220;
    puVar4 = (undefined8 *)gml_Script_outline_bake_sprite_text(param_1,param_2,&local_418,7,pcVar15)
    ;
    if (puVar4 != puVar7) {
      local_408 = (undefined8 *)*puVar4;
      uStack_400 = (char *)puVar4[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_408);
    }
    uVar8 = local_1c8[0];
  }
  local_3c8 = 0xfc;
  if ((int)uVar8 < 5) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)puVar10[4];
  }
  in_stack_fffffffffffffbe0 = in_stack_fffffffffffffbe0 & 0xffffffffffffff00;
  uVar11 = (ulonglong)pcVar15 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a044a8,0x80000000,&local_e8,uVar11,in_stack_fffffffffffffbe0);
  uStack_400 = (char *)CONCAT44(uStack_dc,uStack_e0);
  local_408 = local_e8;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_408);
  local_3c8 = 0xfd;
  if ((int)uVar8 < 5) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)puVar10[4];
  }
  in_stack_fffffffffffffbe0 = in_stack_fffffffffffffbe0 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a04948,0x80000000,&local_f8,uVar11,in_stack_fffffffffffffbe0);
  uStack_400 = (char *)CONCAT44(uStack_ec,uStack_f0);
  local_408 = local_f8;
  FUN_140041b80(&local_98,&local_408);
  local_3c8 = 0xfe;
  if ((int)uVar8 < 5) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)puVar10[4];
  }
  in_stack_fffffffffffffbe0 = in_stack_fffffffffffffbe0 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a04988,0x80000000,&local_108,uVar11,in_stack_fffffffffffffbe0);
  uStack_400 = (char *)CONCAT44(uStack_fc,uStack_100);
  local_408 = local_108;
  FUN_140041b80(&local_a8,&local_408);
  local_3c8 = 0xff;
  if ((int)uVar8 < 5) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)puVar10[4];
  }
  in_stack_fffffffffffffbe0 = in_stack_fffffffffffffbe0 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a046a8,0x80000000,&local_118,uVar11,in_stack_fffffffffffffbe0);
  uStack_400 = (char *)CONCAT44(uStack_10c,uStack_110);
  local_408 = local_118;
  FUN_140041b80(&local_88,&local_408);
  local_3c8 = 0x100;
  if ((int)uVar8 < 5) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)puVar10[4];
  }
  in_stack_fffffffffffffbe0 = in_stack_fffffffffffffbe0 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a04888,0x80000000,&local_128,uVar11,in_stack_fffffffffffffbe0);
  uStack_400 = (char *)CONCAT44(uStack_11c,uStack_120);
  local_408 = local_128;
  FUN_140041b80(&local_b8,&local_408);
  local_3c8 = 0x101;
  if ((int)uVar8 < 5) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)puVar10[4];
  }
  in_stack_fffffffffffffbe0 = in_stack_fffffffffffffbe0 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a047a8,0x80000000,&local_138,uVar11,in_stack_fffffffffffffbe0);
  uStack_400 = (char *)CONCAT44(uStack_12c,uStack_130);
  local_408 = local_138;
  FUN_140041b80(&local_c8,&local_408);
  local_3c8 = 0x102;
  if ((int)uVar8 < 5) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)puVar10[4];
  }
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a045c8,0x80000000,&local_148,uVar11,
                in_stack_fffffffffffffbe0 & 0xffffffffffffff00);
  uVar18 = (undefined4)(uVar11 >> 0x20);
  uStack_400 = (char *)CONCAT44(uStack_13c,uStack_140);
  local_408 = local_148;
  FUN_140041b80(&local_d8,&local_408);
  local_3c8 = 0x104;
  if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_418);
  }
  local_418 = 0;
  local_410 = 0;
  local_40c = 5;
  uVar16 = CONCAT44(uVar18,DAT_141a04ae8);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_418,0,uVar16,0);
  uVar18 = (undefined4)((ulonglong)uVar16 >> 0x20);
  if (pdVar5 != &local_338) {
    local_408 = (undefined8 *)*pdVar5;
    uStack_400 = (char *)pdVar5[1];
    if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_338);
    }
    FUN_140041b80(&local_338,&local_408);
  }
  local_3c8 = 0x105;
  iVar3 = FUN_140ec9d80();
  if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  uVar8 = local_1c8[0];
  local_33c = 0;
  local_348 = (double)iVar3;
  local_3c8 = 0x107;
  if ((int)local_1c8[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*puVar10;
  }
  iVar3 = FUN_140e851f0(&local_338,puVar7,DAT_141955260,0);
  if (iVar3 != 0) {
    local_3c8 = 0x108;
    if ((int)uVar8 < 1) {
      pdVar5 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar5 = (double *)*puVar10;
    }
    if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
      dVar14 = *pdVar5;
    }
    else {
      dVar14 = (double)FUN_140e4b060();
    }
    thunk_FUN_141039cb0((longlong)dVar14);
  }
  local_3c8 = 0x10a;
  cVar2 = FUN_140e491e0(&local_348);
  if (cVar2 != '\0') {
    local_3c8 = 0x10b;
    FUN_140ec9dc0();
  }
  local_3c8 = 0x10e;
  if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_418);
  }
  local_418 = 0;
  local_410 = 0;
  local_40c = 5;
  uVar16 = CONCAT44(uVar18,DAT_141a04978);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_418,0,uVar16,0);
  uVar18 = (undefined4)((ulonglong)uVar16 >> 0x20);
  dVar14 = 0.0;
  if (pdVar5 != &local_1b8) {
    local_408 = (undefined8 *)*pdVar5;
    uStack_400 = (char *)pdVar5[1];
    FUN_140041b80(&local_1b8,&local_408);
    local_390 = local_1ac;
    dVar14 = local_1b8;
  }
  local_3c8 = 0x10f;
  if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_418);
  }
  local_418 = 0;
  local_410 = 0;
  local_40c = 5;
  uVar16 = CONCAT44(uVar18,DAT_141a049c8);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_418,0,uVar16,0);
  uVar18 = (undefined4)((ulonglong)uVar16 >> 0x20);
  dVar13 = 0.0;
  if (pdVar5 != &local_1a8) {
    local_408 = (undefined8 *)*pdVar5;
    uStack_400 = (char *)pdVar5[1];
    FUN_140041b80(&local_1a8,&local_408);
    local_394 = local_19c;
    dVar13 = local_1a8;
  }
  local_3c8 = 0x110;
  if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_418);
  }
  local_418 = 0;
  local_410 = 0;
  local_40c = 5;
  if ((int)uVar8 < 2) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_1400f4da6:
    local_408 = (undefined8 *)*pdVar5;
    uStack_400 = (char *)pdVar5[1];
    if ((1 << ((byte)_local_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    FUN_140041b80(&local_328,&local_408);
  }
  else {
    pdVar5 = (double *)puVar10[1];
    if (pdVar5 != &local_328) goto LAB_1400f4da6;
  }
  local_248 = &local_328;
  uVar16 = CONCAT44(uVar18,DAT_141a04af8);
  ppuVar6 = (undefined8 **)FUN_140e634e0(param_1,param_2,&local_418,1,uVar16,&local_248);
  uVar18 = (undefined4)((ulonglong)uVar16 >> 0x20);
  puVar7 = (undefined8 *)0x0;
  if (ppuVar6 != &local_258) {
    local_408 = *ppuVar6;
    uStack_400 = (char *)ppuVar6[1];
    FUN_140041b80(&local_258,&local_408);
    local_398 = uStack_24c;
    puVar7 = local_258;
  }
  local_3c8 = 0x111;
  if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_418);
  }
  local_418 = 0;
  local_410 = 0;
  local_40c = 5;
  if ((int)uVar8 < 2) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_1400f4e97:
    local_408 = (undefined8 *)*pdVar5;
    uStack_400 = (char *)pdVar5[1];
    if ((1 << ((byte)_local_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    FUN_140041b80(&local_328,&local_408);
  }
  else {
    pdVar5 = (double *)puVar10[1];
    if (pdVar5 != &local_328) goto LAB_1400f4e97;
  }
  local_248 = &local_328;
  uVar16 = CONCAT44(uVar18,DAT_141a04458);
  ppuVar6 = (undefined8 **)FUN_140e634e0(param_1,param_2,&local_418,1,uVar16,&local_248);
  puVar10 = (undefined8 *)0x0;
  if (ppuVar6 != &local_268) {
    local_408 = *ppuVar6;
    uStack_400 = (char *)ppuVar6[1];
    FUN_140041b80(&local_268,&local_408);
    local_3c0 = uStack_25c;
    puVar10 = local_268;
  }
  local_3c8 = 0x112;
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  uVar8 = 0;
  local_36c = 0;
  local_378 = (undefined8 *)0x0;
  local_3c8 = 0x113;
  if ((1 << ((byte)local_37c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  local_37c = 0;
  local_388 = (undefined8 *)0x0;
  local_3c8 = 0x115;
  local_14c = local_390;
  local_150 = local_1b0;
  local_390 = local_390 & 0x1f;
  if ((1 << (sbyte)local_390 & 0x46U) == 0) {
    local_158 = dVar14;
  }
  else {
    FUN_1400419b0(&local_158,&local_1b8);
  }
  lVar1 = *(longlong *)ThreadLocalStoragePointer;
  if ((*(int *)(lVar1 + 0x18) < DAT_141ddcaa4) &&
     (_Init_thread_header(&DAT_141ddcaa4), DAT_141ddcaa4 == -1)) {
    _DAT_141ddcd6c = 0;
    _DAT_141ddcd60 = 0x3ff0000000000000;
    _DAT_141ddcd80 = 0;
    _DAT_141ddcd74 = 0x4000000000000000;
    _DAT_141ddcd84 = 1;
    atexit((_func_5014 *)&LAB_141467240);
    _Init_thread_footer(&DAT_141ddcaa4);
  }
  do {
    iVar3 = FUN_140e851f0(&DAT_141ddcd60 + (longlong)(int)uVar8 * 0x14,&local_158,DAT_141955260,0);
    if (iVar3 == 0) {
      if ((&DAT_141ddcd70)[(longlong)(int)uVar8 * 5] == 0) {
        local_3c8 = 0x116;
        uStack_3ac = local_398;
        uStack_3b0 = uStack_250;
        if ((1 << ((byte)local_398 & 0x1f) & 0x46U) == 0) {
          local_3b8 = puVar7;
        }
        else {
          FUN_1400419b0(&local_3b8,&local_258);
        }
        uStack_3dc = 0;
        local_3e8 = (undefined8 *)0x3fe0000000000000;
        FUN_140042560(&local_3b8,&local_3e8);
        if ((1 << ((byte)uStack_3dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3e8);
        }
        uStack_400 = (char *)CONCAT44(uStack_3ac,uStack_3b0);
        local_408 = local_3b8;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        FUN_140041b80(&local_378,&local_408);
        if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3b8);
        }
      }
      else if ((&DAT_141ddcd70)[(longlong)(int)uVar8 * 5] == 1) {
        local_3c8 = 0x117;
        uStack_400 = (char *)CONCAT44(uStack_24c,uStack_250);
        local_408 = local_258;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        FUN_140041b80(&local_378,&local_408);
      }
      break;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 2);
  local_3c8 = 0x119;
  local_15c = local_394;
  local_160 = local_1a0;
  local_394 = local_394 & 0x1f;
  if ((1 << (sbyte)local_394 & 0x46U) == 0) {
    local_168 = dVar13;
  }
  else {
    FUN_1400419b0(&local_168,&local_1a8);
  }
  if ((*(int *)(lVar1 + 0x18) < DAT_141ddcdc4) &&
     (_Init_thread_header(&DAT_141ddcdc4), DAT_141ddcdc4 == -1)) {
    _DAT_141ddcbfc = 0;
    _DAT_141ddcbf0 = 0x3ff0000000000000;
    _DAT_141ddcc10 = 0;
    _DAT_141ddcc04 = 0x4000000000000000;
    _DAT_141ddcc14 = 1;
    atexit((_func_5014 *)&LAB_141467220);
    _Init_thread_footer(&DAT_141ddcdc4);
  }
  uVar8 = 0;
  do {
    iVar3 = FUN_140e851f0(&DAT_141ddcbf0 + (longlong)(int)uVar8 * 0x14,&local_168,DAT_141955260,0);
    uVar9 = local_3c0;
    uVar18 = (undefined4)((ulonglong)uVar16 >> 0x20);
    if (iVar3 == 0) {
      if (*(int *)(&DAT_141ddcc00 + (longlong)(int)uVar8 * 0x14) == 0) {
        local_3c8 = 0x11a;
        uStack_3ac = local_3c0;
        uStack_3b0 = uStack_260;
        if ((1 << ((byte)local_3c0 & 0x1f) & 0x46U) == 0) {
          local_3b8 = puVar10;
        }
        else {
          FUN_1400419b0(&local_3b8,&local_268);
        }
        uStack_3dc = 0;
        local_3e8 = (undefined8 *)0x3fe0000000000000;
        FUN_140042560(&local_3b8,&local_3e8);
        if ((1 << ((byte)uStack_3dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3e8);
        }
        uStack_400 = (char *)CONCAT44(uStack_3ac,uStack_3b0);
        local_408 = local_3b8;
        if ((1 << ((byte)local_37c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_388);
        }
        FUN_140041b80(&local_388,&local_408);
        if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3b8);
        }
        goto LAB_1400f52e8;
      }
      if (*(int *)(&DAT_141ddcc00 + (longlong)(int)uVar8 * 0x14) == 1) {
        local_3c8 = 0x11b;
        uStack_400 = (char *)CONCAT44(uStack_25c,uStack_260);
        local_408 = local_268;
        if ((1 << ((byte)local_37c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_388);
        }
        FUN_140041b80(&local_388,&local_408);
      }
      break;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 2);
  uVar9 = local_3c0;
LAB_1400f52e8:
  local_3c8 = 0x11e;
  if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_418);
  }
  local_418 = 0;
  local_410 = 0;
  local_40c = 5;
  local_248 = &local_198;
  local_408 = _DAT_141dc6190;
  uStack_400 = (char *)puRam0000000141dc6198;
  if ((1 << (local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  FUN_140041b80(&local_318,&local_408);
  local_240 = &local_318;
  ppuVar6 = (undefined8 **)FUN_140e79090(&local_418,2,&local_248);
  if (ppuVar6 != &local_3a8) {
    local_408 = *ppuVar6;
    uStack_400 = (char *)ppuVar6[1];
    if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_3a8);
    }
    FUN_140041b80(&local_3a8,&local_408);
  }
  local_3c8 = 0x11f;
  uStack_3dc = local_39c;
  uStack_3e0 = local_3a0;
  if ((1 << ((byte)local_39c & 0x1f) & 0x46U) == 0) {
    local_3e8 = local_3a8;
  }
  else {
    FUN_1400419b0(&local_3e8,&local_3a8);
  }
  uStack_400._4_4_ = 7;
  local_408 = (undefined8 *)CONCAT44(local_408._4_4_,2);
  FUN_140042560(&local_3e8,&local_408);
  if ((1 << ((byte)uStack_400._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_408);
  }
  uStack_3ac = local_398;
  uStack_3b0 = uStack_250;
  local_398 = local_398 & 0x1f;
  if ((1 << (sbyte)local_398 & 0x46U) == 0) {
    local_3b8 = puVar7;
  }
  else {
    FUN_1400419b0(&local_3b8,&local_258);
  }
  FUN_1400460e0(&local_3b8,&local_3e8);
  uStack_400 = (char *)CONCAT44(uStack_3ac,uStack_3b0);
  local_408 = local_3b8;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_408);
  if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3b8);
  }
  if ((1 << ((byte)uStack_3dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3e8);
  }
  local_3c8 = 0x120;
  uStack_3ac = local_39c;
  uStack_3b0 = local_3a0;
  if ((1 << ((byte)local_39c & 0x1f) & 0x46U) == 0) {
    local_3b8 = local_3a8;
  }
  else {
    FUN_1400419b0(&local_3b8,&local_3a8);
  }
  uStack_400._4_4_ = 7;
  local_408 = (undefined8 *)CONCAT44(local_408._4_4_,2);
  FUN_140042560(&local_3b8,&local_408);
  if ((1 << ((byte)uStack_400._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_408);
  }
  uStack_3e0 = uStack_260;
  local_3c0 = uVar9 & 0x1f;
  uStack_3dc = uVar9;
  if ((1 << (sbyte)local_3c0 & 0x46U) == 0) {
    local_3e8 = puVar10;
  }
  else {
    FUN_1400419b0(&local_3e8,&local_268);
  }
  FUN_1400460e0(&local_3e8,&local_3b8);
  uStack_400 = (char *)CONCAT44(uStack_3dc,uStack_3e0);
  local_408 = local_3e8;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140041b80(&local_1d8,&local_408);
  if ((1 << ((byte)uStack_3dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3e8);
  }
  if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3b8);
  }
  local_3c8 = 0x123;
  if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_418);
  }
  local_418 = 0;
  local_410 = 0;
  local_40c = 5;
  local_248 = &local_1e8;
  local_240 = (double *)&local_1d8;
  uVar16 = CONCAT44(uVar18,DAT_141a04a78);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_418,2,uVar16,&local_248);
  uVar18 = (undefined4)((ulonglong)uVar16 >> 0x20);
  if (pdVar5 != &local_358) {
    local_408 = (undefined8 *)*pdVar5;
    uStack_400 = (char *)pdVar5[1];
    if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    FUN_140041b80(&local_358,&local_408);
  }
  local_3c8 = 0x124;
  if ((local_34c & 0xffffff) == 0) {
    dVar14 = local_358;
  }
  else {
    dVar14 = (double)FUN_140e4b060(&local_358);
  }
  FUN_140ec60c0((longlong)dVar14,0xffffffff);
  local_3c8 = 0x125;
  if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_418);
  }
  local_418 = 0;
  local_410 = 0;
  local_40c = 5;
  local_408 = _DAT_141dc6190;
  uStack_400 = (char *)puRam0000000141dc6198;
  if ((1 << (local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  FUN_140041b80(&local_328,&local_408);
  local_248 = &local_328;
  local_408 = _DAT_141dc6190;
  uStack_400 = (char *)puRam0000000141dc6198;
  if ((1 << (local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  FUN_140041b80(&local_318,&local_408);
  local_240 = &local_318;
  uVar16 = CONCAT44(uVar18,DAT_141a04558);
  FUN_140e634e0(param_1,param_2,&local_418,2,uVar16,&local_248);
  uVar18 = (undefined4)((ulonglong)uVar16 >> 0x20);
  local_3c8 = 0x126;
  if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_418);
  }
  local_418 = 0;
  local_410 = 0;
  local_40c = 5;
  uStack_3dc = local_36c;
  uStack_3e0 = local_370;
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) == 0) {
    local_3e8 = local_378;
  }
  else {
    FUN_1400419b0(&local_3e8,&local_378);
  }
  FUN_1400460e0(&local_3e8,&local_3a8);
  uStack_400 = (char *)CONCAT44(uStack_3dc,uStack_3e0);
  local_408 = local_3e8;
  if ((1 << (local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  FUN_140041b80(&local_328,&local_408);
  if ((1 << ((byte)uStack_3dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3e8);
  }
  local_248 = &local_328;
  uStack_3dc = local_37c;
  uStack_3e0 = local_380;
  if ((1 << ((byte)local_37c & 0x1f) & 0x46U) == 0) {
    local_3e8 = local_388;
  }
  else {
    FUN_1400419b0(&local_3e8,&local_388);
  }
  FUN_1400460e0(&local_3e8,&local_3a8);
  uStack_400 = (char *)CONCAT44(uStack_3dc,uStack_3e0);
  local_408 = local_3e8;
  if ((1 << (local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  FUN_140041b80(&local_318,&local_408);
  if ((1 << ((byte)uStack_3dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3e8);
  }
  local_240 = &local_318;
  uVar11 = (ulonglong)local_1c8[0];
  puVar10 = &DAT_1419df7b0;
  if ((int)local_1c8[0] < 2) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_1400f5b21:
    local_408 = (undefined8 *)*pdVar5;
    uStack_400 = (char *)pdVar5[1];
    if ((1 << (local_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    FUN_140041b80(&local_308,&local_408);
  }
  else {
    pdVar5 = (double *)local_1c0[1];
    if (pdVar5 != &local_308) goto LAB_1400f5b21;
  }
  local_238 = &local_308;
  uVar16 = CONCAT44(uVar18,DAT_141a04598);
  FUN_140e634e0(param_1,param_2,&local_418,3,uVar16,&local_248);
  uVar18 = (undefined4)((ulonglong)uVar16 >> 0x20);
  local_3c8 = 0x127;
  FUN_140ec7870();
  local_3c8 = 0x129;
  if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_418);
  }
  local_418 = 0;
  local_410 = 0;
  local_40c = 5;
  local_248 = &local_1e8;
  local_240 = (double *)&local_1d8;
  pdVar5 = (double *)
           FUN_140e634e0(param_1,param_2,&local_418,2,CONCAT44(uVar18,DAT_141a04a78),&local_248);
  if (pdVar5 != &local_368) {
    local_408 = (undefined8 *)*pdVar5;
    uStack_400 = (char *)pdVar5[1];
    if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    FUN_140041b80(&local_368,&local_408);
  }
  local_3c8 = 0x12a;
  if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_418);
  }
  local_418 = 0;
  local_410 = 0;
  local_40c = 5;
  local_248 = &local_368;
  if ((int)local_1c8[0] < 5) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_1400f5ca1:
    local_408 = (undefined8 *)*pdVar5;
    uStack_400 = (char *)pdVar5[1];
    if ((1 << (local_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    FUN_140041b80(&local_318,&local_408);
  }
  else {
    pdVar5 = (double *)local_1c0[4];
    if (pdVar5 != &local_318) goto LAB_1400f5ca1;
  }
  local_240 = &local_318;
  ppdVar17 = &local_248;
  gml_Script_outline_draw_surface_ext(param_1,param_2,&local_418,2,ppdVar17);
  uVar18 = (undefined4)((ulonglong)ppdVar17 >> 0x20);
  local_3c8 = 299;
  if ((local_35c & 0xffffff) == 0) {
    dVar14 = local_368;
  }
  else {
    dVar14 = (double)FUN_140e4b060(&local_368);
  }
  FUN_140ec60c0((longlong)dVar14,0xffffffff);
  local_3c8 = 300;
  if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_418);
  }
  local_418 = 0;
  local_410 = 0;
  local_40c = 5;
  local_408 = _DAT_141dc6190;
  uStack_400 = (char *)puRam0000000141dc6198;
  if ((1 << (local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  FUN_140041b80(&local_328,&local_408);
  local_248 = &local_328;
  local_408 = _DAT_141dc6190;
  uStack_400 = (char *)puRam0000000141dc6198;
  if ((1 << (local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  FUN_140041b80(&local_318,&local_408);
  local_240 = &local_318;
  uVar16 = CONCAT44(uVar18,DAT_141a04558);
  FUN_140e634e0(param_1,param_2,&local_418,2,uVar16,&local_248);
  uVar18 = (undefined4)((ulonglong)uVar16 >> 0x20);
  local_3c8 = 0x12d;
  if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_418);
  }
  local_418 = 0;
  local_410 = 0;
  local_40c = 5;
  local_408 = _DAT_1419e1d50;
  uStack_400 = (char *)uRam00000001419e1d58;
  if ((1 << (local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  FUN_140041b80(&local_328,&local_408);
  local_248 = &local_328;
  local_408 = _DAT_1419e1d30;
  uStack_400 = (char *)uRam00000001419e1d38;
  if ((1 << (local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  FUN_140041b80(&local_318,&local_408);
  local_240 = &local_318;
  uVar16 = CONCAT44(uVar18,DAT_141a04a18);
  FUN_140e634e0(param_1,param_2,&local_418,2,uVar16,&local_248);
  uVar18 = (undefined4)((ulonglong)uVar16 >> 0x20);
  local_3c8 = 0x12e;
  if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_418);
  }
  local_418 = 0;
  local_410 = 0;
  local_40c = 5;
  local_248 = &local_358;
  local_408 = _DAT_141dc6190;
  uStack_400 = (char *)puRam0000000141dc6198;
  if ((1 << (local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  FUN_140041b80(&local_318,&local_408);
  local_240 = &local_318;
  local_408 = _DAT_141dc6190;
  uStack_400 = (char *)puRam0000000141dc6198;
  if ((1 << (local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  FUN_140041b80(&local_308,&local_408);
  local_238 = &local_308;
  local_408 = _DAT_1419e1d20;
  uStack_400 = (char *)uRam00000001419e1d28;
  if ((1 << (local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2f8);
  }
  FUN_140041b80(local_2f8,&local_408);
  local_230 = (double *)local_2f8;
  local_408 = _DAT_1419e1d20;
  uStack_400 = (char *)uRam00000001419e1d28;
  if ((1 << (local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2e8);
  }
  FUN_140041b80(local_2e8,&local_408);
  local_228 = (undefined8 *)local_2e8;
  local_408 = _DAT_141dc6190;
  uStack_400 = (char *)puRam0000000141dc6198;
  if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2d8);
  }
  FUN_140041b80(local_2d8,&local_408);
  local_220 = local_2d8;
  if ((int)local_1c8[0] < 3) {
    puVar7 = &DAT_1419df7b0;
LAB_1400f6080:
    local_408 = (undefined8 *)*puVar7;
    uStack_400 = (char *)puVar7[1];
    if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    FUN_140041b80(&local_2c8,&local_408);
  }
  else {
    puVar7 = (undefined8 *)local_1c0[2];
    if (puVar7 != &local_2c8) goto LAB_1400f6080;
  }
  local_218 = &local_2c8;
  if ((int)local_1c8[0] < 4) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_1c0[3];
    if (puVar7 == &local_2b8) goto LAB_1400f611a;
  }
  local_408 = (undefined8 *)*puVar7;
  uStack_400 = (char *)puVar7[1];
  if ((1 << (local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  FUN_140041b80(&local_2b8,&local_408);
LAB_1400f611a:
  local_210 = &local_2b8;
  uVar16 = CONCAT44(uVar18,DAT_141a04498);
  FUN_140e634e0(param_1,param_2,&local_418,8,uVar16,&local_248);
  uVar18 = (undefined4)((ulonglong)uVar16 >> 0x20);
  local_3c8 = 0x12f;
  if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_418);
  }
  local_418 = 0;
  local_410 = 0;
  local_40c = 5;
  local_408 = _DAT_141dc6190;
  uStack_400 = (char *)puRam0000000141dc6198;
  if ((1 << (local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  FUN_140041b80(&local_328,&local_408);
  local_248 = &local_328;
  uVar16 = CONCAT44(uVar18,DAT_141a04848);
  FUN_140e634e0(param_1,param_2,&local_418,1,uVar16,&local_248);
  uVar18 = (undefined4)((ulonglong)uVar16 >> 0x20);
  local_3c8 = 0x130;
  FUN_140ec7870();
  local_3c8 = 0x131;
  if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_418);
  }
  local_410 = 0;
  uStack_400 = "gml_Script_outline_end";
  local_408 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_408;
  local_40c = 5;
  local_418 = 0;
  local_3f8 = 0xc5;
  FUN_140ec9dc0();
  DAT_141dc7a50 = (undefined8 **)local_408;
  local_3c8 = 0x133;
  if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_418);
  }
  local_418 = 0;
  local_410 = 0;
  local_40c = 5;
  local_248 = &local_368;
  local_408 = _DAT_141dc6190;
  uStack_400 = (char *)puRam0000000141dc6198;
  if ((1 << (local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  FUN_140041b80(&local_318,&local_408);
  local_240 = &local_318;
  local_408 = _DAT_141dc6190;
  uStack_400 = (char *)puRam0000000141dc6198;
  if ((1 << (local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  FUN_140041b80(&local_308,&local_408);
  local_238 = &local_308;
  local_230 = &local_1e8;
  local_228 = &local_1d8;
  local_408 = _DAT_1419df7a0;
  uStack_400 = (char *)uRam00000001419df7a8;
  if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2d8);
  }
  FUN_140041b80(local_2d8,&local_408);
  local_220 = local_2d8;
  local_408 = _DAT_1419df7a0;
  uStack_400 = (char *)uRam00000001419df7a8;
  if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  FUN_140041b80(&local_2c8,&local_408);
  local_218 = &local_2c8;
  uStack_3dc = local_39c;
  uStack_3e0 = local_3a0;
  if ((1 << ((byte)local_39c & 0x1f) & 0x46U) == 0) {
    local_3e8 = local_3a8;
  }
  else {
    FUN_1400419b0(&local_3e8,&local_3a8);
  }
  FUN_1400460e0(&local_3e8,&local_378);
  uStack_400 = (char *)CONCAT44(uStack_3dc,uStack_3e0);
  local_408 = local_3e8;
  if ((1 << (local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  FUN_140041b80(&local_2b8,&local_408);
  if ((1 << ((byte)uStack_3dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3e8);
  }
  local_210 = &local_2b8;
  uStack_3dc = local_39c;
  uStack_3e0 = local_3a0;
  if ((1 << ((byte)local_39c & 0x1f) & 0x46U) == 0) {
    local_3e8 = local_3a8;
  }
  else {
    FUN_1400419b0(&local_3e8,&local_3a8);
  }
  FUN_1400460e0(&local_3e8,&local_388);
  uStack_400 = (char *)CONCAT44(uStack_3dc,uStack_3e0);
  local_408 = local_3e8;
  if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2a8);
  }
  FUN_140041b80(local_2a8,&local_408);
  if ((1 << ((byte)uStack_3dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3e8);
  }
  local_208 = local_2a8;
  uVar16 = CONCAT44(uVar18,DAT_141a04ad8);
  ppuVar6 = (undefined8 **)FUN_140e634e0(param_1,param_2,&local_418,9,uVar16,&local_248);
  uVar18 = (undefined4)((ulonglong)uVar16 >> 0x20);
  if (ppuVar6 == &local_178) {
    bVar12 = (byte)local_188;
  }
  else {
    local_408 = *ppuVar6;
    uStack_400 = (char *)ppuVar6[1];
    FUN_140041b80(&local_178,&local_408);
    bVar12 = (byte)uStack_16c;
  }
  local_3c8 = 0x135;
  if (0 < (int)local_1c8[0]) {
    puVar10 = (undefined8 *)*local_1c0;
  }
  iVar3 = FUN_140e851f0(&local_338,puVar10,DAT_141955260,0);
  if (iVar3 != 0) {
    local_3c8 = 0x136;
    if ((local_32c & 0xffffff) == 0) {
      dVar14 = local_338;
    }
    else {
      dVar14 = (double)FUN_140e4b060(&local_338);
    }
    thunk_FUN_141039cb0((longlong)dVar14);
  }
  local_3c8 = 0x138;
  cVar2 = FUN_140e491e0(&local_348);
  if (cVar2 != '\0') {
    local_3c8 = 0x139;
    if ((local_33c & 0xffffff) == 0) {
      dVar14 = local_348;
    }
    else {
      dVar14 = (double)FUN_140e4b060(&local_348);
    }
    FUN_140ec9e10((longlong)dVar14);
  }
  local_3c8 = 0x13c;
  if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_418);
  }
  local_418 = 0;
  local_410 = 0;
  local_40c = 5;
  local_248 = &local_358;
  uVar16 = CONCAT44(uVar18,DAT_141a04918);
  FUN_140e634e0(param_1,param_2,&local_418,1,uVar16,&local_248);
  uVar18 = (undefined4)((ulonglong)uVar16 >> 0x20);
  local_3c8 = 0x13d;
  if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_418);
  }
  local_418 = 0;
  local_410 = 0;
  local_40c = 5;
  local_248 = &local_368;
  FUN_140e634e0(param_1,param_2,&local_418,1,CONCAT44(uVar18,DAT_141a04918),&local_248);
  local_3c8 = 0x13f;
  if (&local_178 != param_3) {
    uStack_400 = (char *)CONCAT44(uStack_16c,uStack_170);
    local_408 = local_178;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_408);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_418);
  }
  if ((1 << (bVar12 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3a8);
  }
  if ((1 << ((byte)local_37c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  if ((1 << ((byte)local_3c0 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_398 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_394 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_390 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(&local_328,0x10,0xc,FUN_140041b30);
  if (0 < (int)local_1c8[0]) {
    puVar10 = local_1c0;
    do {
      puVar7 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_1c0);
  DAT_141dc7a50 = (undefined8 **)local_3d8;
  return param_3;
}

