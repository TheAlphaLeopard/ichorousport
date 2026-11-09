// gml_Script_draw_line_sprite @ 0x1402785c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_draw_line_sprite
          (undefined1 **param_1,double **param_2,undefined8 *param_3,uint param_4,
          undefined8 *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  double *pdVar5;
  undefined8 uVar6;
  double *pdVar7;
  double *pdVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  undefined1 **local_res8;
  double **local_res10;
  undefined8 *local_res18;
  uint local_res20 [2];
  double **ppdVar19;
  ulonglong uVar20;
  undefined8 local_380;
  undefined4 local_378;
  undefined4 local_374;
  undefined1 *local_368;
  undefined8 uStack_360;
  undefined1 *local_358;
  undefined8 uStack_350;
  undefined1 *local_348;
  undefined4 uStack_340;
  uint uStack_33c;
  undefined1 *local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_31c;
  undefined1 *local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined4 local_2fc;
  undefined1 *local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined8 local_2e8;
  char *local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined8 local_2c0;
  undefined4 local_2b4;
  undefined1 *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined1 *local_268;
  undefined4 local_260;
  uint local_25c;
  undefined1 *local_258;
  undefined4 local_250;
  uint local_24c;
  double local_248;
  undefined4 local_23c;
  undefined1 *local_238;
  undefined4 local_230;
  uint local_22c;
  double local_228 [2];
  double local_218;
  undefined4 local_20c;
  double local_208;
  byte local_1fc;
  undefined1 local_1f8 [12];
  byte local_1ec;
  double local_1e8;
  byte local_1dc;
  double local_1d8;
  undefined4 local_1cc;
  double local_1c8;
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  double *local_188;
  double *local_180;
  double *local_178;
  undefined1 *local_170;
  double *local_168;
  double *local_160;
  double *local_158;
  undefined1 *local_150;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  uint local_128 [2];
  undefined8 *local_120;
  undefined1 *local_118;
  undefined4 local_10c;
  undefined1 *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined1 local_d8 [16];
  longlong local_c8;
  undefined8 *local_b8;
  undefined8 *local_b0;
  uint *local_a8;
  double *local_a0;
  double *local_98;
  double **local_90;
  undefined8 *local_88;
  undefined1 ***local_80;
  double ***local_78;
  undefined8 local_70;
  undefined4 local_64;
  
  local_2e0 = "gml_Script_deal_damage";
  local_2e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2e8;
  local_2d8 = 0x6c;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20[0] = param_4;
  FUN_140041df0(local_128,param_4,2,param_5);
  local_res20[0] = local_128[0];
  param_5 = local_120;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_228,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_22c = 0xffffff;
  local_238 = (undefined1 *)0x0;
  local_2fc = 0xffffff;
  local_308 = 0;
  uStack_29c = 0xffffff;
  local_2a8 = (undefined1 *)0x0;
  local_23c = 0xffffff;
  local_248 = 0.0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_24c = 0xffffff;
  local_258 = (undefined1 *)0x0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  uStack_30c = 0xffffff;
  local_318 = (undefined1 *)0x0;
  local_ec = 0xffffff;
  local_f8 = 0;
  pdVar5 = (double *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a572b0);
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57320);
  uStack_fc = 0xffffff;
  local_108 = (undefined1 *)0x0;
  local_2b4 = 0xffffff;
  local_2c0 = 0;
  local_10c = 0xffffff;
  local_118 = (undefined1 *)0x0;
  local_25c = 0xffffff;
  local_268 = (undefined1 *)0x0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_374 = 0;
  local_380 = 0;
  local_2c4 = 0;
  local_2d0 = 0;
  local_31c = 0;
  local_328 = 0;
  local_26c = 0;
  local_278 = 0;
  local_27c = 0;
  local_288 = 0;
  local_28c = 0;
  local_298 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2d8 = 0x6c;
  if ((int)local_res20[0] < 2) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)param_5[1];
  }
  iVar3 = FUN_140e851f0(puVar11,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_2d8 = 0x6c;
    if ((1 << ((byte)local_374 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50();
    }
    local_380 = 0;
    local_378 = 0;
    local_374 = 5;
    if ((int)local_res20[0] < 2) {
      pdVar8 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar8 = (double *)param_5[1];
    }
    uVar10 = CONCAT44(uVar4,DAT_1419fd6d8);
    pdVar7 = (double *)FUN_140e634e0(local_res8,local_res10,&local_380,0,uVar10,0);
    uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if (pdVar7 != pdVar8) {
      local_358 = (undefined1 *)*pdVar7;
      uStack_350 = (undefined1 *)pdVar7[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar8);
      }
      FUN_140041b80(pdVar8,&local_358);
    }
  }
  local_2d8 = 0x6e;
  if ((1 << ((byte)local_374 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_380);
  }
  local_380 = 0;
  local_378 = 0;
  local_374 = 5;
  if ((int)local_res20[0] < 2) {
    pdVar8 = (double *)&DAT_1419df7b0;
LAB_140278914:
    local_358 = (undefined1 *)*pdVar8;
    uStack_350 = (undefined1 *)pdVar8[1];
    if ((1 << ((byte)local_228[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_358);
  }
  else {
    pdVar8 = (double *)param_5[1];
    if (pdVar8 != local_228) goto LAB_140278914;
  }
  iVar3 = DAT_141a573b0;
  local_188 = local_228;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_20c = 0;
  local_218 = (double)iVar3;
  local_180 = &local_218;
  ppdVar19 = &local_188;
  uVar15 = CONCAT44(uVar4,DAT_141a035d8);
  pdVar8 = (double *)FUN_140e634e0(local_res8,local_res10,&local_380,2,uVar15,ppdVar19);
  puVar14 = (undefined1 *)0x0;
  uVar17 = 0xffffff;
  if ((undefined1 **)pdVar8 != &local_238) {
    local_358 = (undefined1 *)*pdVar8;
    uStack_350 = (undefined1 *)pdVar8[1];
    FUN_140041b80(&local_238,&local_358);
    puVar14 = local_238;
    uVar17 = local_22c;
  }
  if ((uVar17 & 0xffffff) == 3) {
    bVar18 = puVar14 == (undefined1 *)0x0;
  }
  else {
    bVar18 = (uVar17 & 0xffffff) == 5;
  }
  if (bVar18) {
    local_2ec = 0xd;
    local_2f8 = (undefined1 *)0x0;
    ppuVar9 = &local_2f8;
    uVar12 = 1;
  }
  else {
    uStack_33c = uVar17;
    uStack_340 = local_230;
    if ((1 << ((byte)uVar17 & 0x1f) & 0x46U) == 0) {
      local_348 = puVar14;
    }
    else {
      FUN_1400419b0(&local_348,&local_238);
    }
    ppuVar9 = &local_348;
    uVar12 = 2;
  }
  uVar4 = local_2ec;
  local_358 = *ppuVar9;
  uStack_350 = ppuVar9[1];
  uVar16 = uVar12;
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  FUN_140041b80(&local_308,&local_358);
  if (((uVar12 & 2) != 0) &&
     (uVar12 = uVar12 & 0xfffffffd, uVar16 = uVar12, (1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0))
  {
    FUN_140041a50(&local_348);
  }
  if (((uVar12 & 1) != 0) &&
     (uVar12 = uVar12 & 0xfffffffe, uVar16 = uVar12, (1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_2f8);
  }
  if ((int)local_res20[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*param_5;
  }
  FUN_140e87930(puVar11,DAT_141a573b0,0x80000000,&local_308,uVar15,ppdVar19,uVar16);
  local_2d8 = 0x70;
  if ((1 << ((byte)local_374 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_380);
  }
  local_380 = 0;
  local_378 = 0;
  local_374 = 5;
  if ((int)local_res20[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*param_5;
  }
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_140e87440(puVar11,DAT_141a1f4e0,0x80000000,&local_2a8,uVar15,
                (ulonglong)ppdVar19 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar15 >> 0x20);
  uStack_350 = (undefined1 *)CONCAT44(uStack_29c,uStack_2a0);
  local_358 = local_2a8;
  if ((1 << ((byte)local_228[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_358);
  local_188 = local_228;
  uVar10 = CONCAT44(uVar4,DAT_141a02ef8);
  pdVar8 = (double *)FUN_140e634e0(local_res8,local_res10,&local_380,1,uVar10,&local_188);
  uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
  if (pdVar8 != &local_248) {
    local_358 = (undefined1 *)*pdVar8;
    uStack_350 = (undefined1 *)pdVar8[1];
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_358);
  }
  local_2d8 = 0x71;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_328 = 0;
  local_320 = 0;
  local_31c = 5;
  if ((int)local_res20[0] < 2) {
    pdVar8 = (double *)&DAT_1419df7b0;
LAB_140278cb5:
    local_358 = (undefined1 *)*pdVar8;
    uStack_350 = (undefined1 *)pdVar8[1];
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_358);
  }
  else {
    pdVar8 = (double *)param_5[1];
    if (pdVar8 != &local_1e8) goto LAB_140278cb5;
  }
  iVar3 = DAT_141a03598;
  local_168 = &local_1e8;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1cc = 0;
  local_1d8 = (double)iVar3;
  local_160 = &local_1d8;
  ppdVar19 = &local_168;
  uVar15 = CONCAT44(uVar4,DAT_141a035d8);
  pdVar8 = (double *)FUN_140e634e0(local_res8,local_res10,&local_328,2,uVar15,ppdVar19);
  puVar14 = (undefined1 *)0x0;
  uVar16 = 0xffffff;
  if ((undefined1 **)pdVar8 != &local_258) {
    local_338 = (undefined1 *)*pdVar8;
    uStack_330 = pdVar8[1];
    FUN_140041b80(&local_258,&local_338);
    puVar14 = local_258;
    uVar16 = local_24c;
  }
  if ((uVar16 & 0xffffff) == 3) {
    bVar18 = puVar14 == (undefined1 *)0x0;
  }
  else {
    bVar18 = (uVar16 & 0xffffff) == 5;
  }
  if (bVar18) {
    cVar2 = FUN_140e491e0(&local_248);
    if (cVar2 == '\0') {
      uStack_330 = (double)((ulonglong)uStack_330 & 0xffffffff);
      local_338 = (undefined1 *)0x0;
      ppuVar9 = &local_338;
      uVar12 = uVar12 | 8;
    }
    else {
      local_b8 = &local_2d0;
      local_b0 = &param_5;
      local_a8 = local_res20;
      local_a0 = (double *)&local_2a8;
      local_98 = local_228;
      local_90 = &local_188;
      local_88 = &local_e8;
      local_80 = &local_res8;
      local_78 = &local_res10;
      ppuVar9 = (undefined1 **)FUN_140279f70(&local_b8,&local_358);
      uVar12 = uVar12 | 4;
    }
    local_2ec = *(undefined4 *)((longlong)ppuVar9 + 0xc);
    local_2f0 = *(undefined4 *)(ppuVar9 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar9 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_2f8 = *ppuVar9;
    }
    else {
      FUN_1400419b0(&local_2f8);
    }
    ppuVar9 = &local_2f8;
    uVar12 = uVar12 | 0x10;
  }
  else {
    uStack_33c = uVar16;
    uStack_340 = local_250;
    if ((1 << ((byte)uVar16 & 0x1f) & 0x46U) == 0) {
      local_348 = puVar14;
    }
    else {
      FUN_1400419b0(&local_348,&local_258);
    }
    ppuVar9 = &local_348;
    uVar12 = uVar12 | 0x20;
  }
  local_368 = *ppuVar9;
  uStack_360 = ppuVar9[1];
  uVar13 = uVar12;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_368);
  if (((uVar12 & 0x20) != 0) &&
     (uVar12 = uVar12 & 0xffffffdf, uVar13 = uVar12, (1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0))
  {
    FUN_140041a50(&local_348);
  }
  if (((uVar12 & 0x10) != 0) &&
     (uVar12 = uVar12 & 0xffffffef, uVar13 = uVar12, (1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0))
  {
    FUN_140041a50(&local_2f8);
  }
  if (((uVar12 & 8) != 0) &&
     (uVar12 = uVar12 & 0xfffffff7, uVar13 = uVar12,
     (1 << ((byte)((ulonglong)uStack_330 >> 0x20) & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_338);
  }
  if (((uVar12 & 4) != 0) &&
     (uVar13 = uVar12 & 0xfffffffb,
     (1 << ((byte)((ulonglong)uStack_350 >> 0x20) & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_358);
  }
  if ((int)local_res20[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*param_5;
  }
  FUN_140e87930(puVar11,DAT_141a03598,0x80000000,&local_198,uVar15,ppdVar19,uVar13);
  local_2d8 = 0x73;
  if ((int)local_res20[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*param_5;
  }
  ppdVar19 = (double **)((ulonglong)ppdVar19 & 0xffffffffffffff00);
  ppuVar9 = (undefined1 **)(uVar15 & 0xffffffffffffff00);
  FUN_140e87440(puVar11,DAT_141a57570,0x80000000,&local_138,ppuVar9,ppdVar19);
  cVar2 = FUN_140e491e0(&local_138);
  if (cVar2 == '\0') goto LAB_140279a00;
  if ((int)local_res20[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*param_5;
  }
  ppdVar19 = (double **)((ulonglong)ppdVar19 & 0xffffffffffffff00);
  ppuVar9 = (undefined1 **)((ulonglong)ppuVar9 & 0xffffffffffffff00);
  FUN_140e87440(puVar11,DAT_141a573b0,0x80000000,&local_148,ppuVar9,ppdVar19);
  cVar2 = FUN_140e491e0(&local_148);
  if (cVar2 != '\0') goto LAB_140279a00;
  if ((1 << ((byte)local_374 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_380);
  }
  local_380 = 0;
  local_378 = 0;
  local_374 = 5;
  if ((int)local_res20[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*param_5;
  }
  uVar15 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  FUN_140e87440(puVar11,DAT_141a1f4e0,0x80000000,&local_2a8,uVar15,
                (ulonglong)ppdVar19 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar15 >> 0x20);
  uStack_360 = (undefined1 *)CONCAT44(uStack_29c,uStack_2a0);
  local_368 = local_2a8;
  if ((1 << ((byte)local_228[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_368);
  local_188 = local_228;
  ppdVar19 = &local_188;
  ppuVar9 = (undefined1 **)CONCAT44(uVar4,DAT_141a02ef8);
  uVar10 = FUN_140e634e0(local_res8,local_res10,&local_380,1,ppuVar9,ppdVar19);
  cVar2 = FUN_140e491e0(uVar10);
  if (cVar2 == '\0') goto LAB_140279a00;
  if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d0);
  }
  local_2d0 = 0;
  local_2c8 = 0;
  local_2c4 = 5;
  if ((int)local_res20[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*param_5;
  }
  uVar15 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  FUN_140e87440(puVar11,DAT_141a1f440,0x80000000,&local_318,uVar15,
                (ulonglong)ppdVar19 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar15 >> 0x20);
  uStack_360 = (undefined1 *)CONCAT44(uStack_30c,uStack_310);
  local_368 = local_318;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_368);
  local_180 = &local_218;
  ppdVar19 = &local_180;
  ppuVar9 = (undefined1 **)CONCAT44(uVar4,DAT_141a02ef8);
  uVar10 = FUN_140e634e0(local_res8,local_res10,&local_2d0,1,ppuVar9,ppdVar19);
  cVar2 = FUN_140e491e0(uVar10);
  if (cVar2 == '\0') goto LAB_140279a00;
  local_2d8 = 0x75;
  if ((int)local_res20[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*param_5;
  }
  FUN_140e87440(puVar11,DAT_141a1f4e0,0x80000000,&local_2a8,(ulonglong)ppuVar9 & 0xffffffffffffff00,
                (ulonglong)ppdVar19 & 0xffffffffffffff00);
  ppuVar9 = local_res8;
  ppdVar19 = local_res10;
  FUN_140e87170(&local_2a8,DAT_141a1f580,0x80000000,&local_f8,local_res8,local_res10);
  uStack_330 = (double)CONCAT44(0xf,(undefined4)uStack_330);
  local_338 = (undefined1 *)0x1000000000000ee;
  iVar3 = FUN_140e851f0(&local_f8,&local_338,DAT_141955260,0);
  if ((1 << ((byte)((ulonglong)uStack_330 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  if (iVar3 != 0) goto LAB_140279a00;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_328 = 0;
  local_320 = 0;
  local_31c = 5;
  uVar15 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_141a57500,0x80000000,&local_108,uVar15,
                (ulonglong)ppdVar19 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar15 >> 0x20);
  if (pdVar5 != &local_208) {
    local_368 = (undefined1 *)*pdVar5;
    uStack_360 = (undefined1 *)pdVar5[1];
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_368);
  }
  local_178 = &local_208;
  uStack_360 = (undefined1 *)CONCAT44(uStack_fc,uStack_100);
  local_368 = local_108;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_368);
  local_170 = local_1f8;
  ppdVar19 = &local_178;
  ppuVar9 = (undefined1 **)CONCAT44(uVar4,DAT_141a573f0);
  uVar6 = FUN_140e634e0(local_res8,local_res10,&local_328,2,ppuVar9,ppdVar19);
  uStack_330 = (double)((ulonglong)uStack_330 & 0xffffffff);
  local_338 = &DAT_bff0000000000000;
  iVar3 = FUN_140e851f0(uVar6,&local_338,DAT_141955260,0);
  if ((1 << ((byte)((ulonglong)uStack_330 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  if (iVar3 == 0) goto LAB_140279a00;
  local_2d8 = 0x77;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  if ((int)local_res20[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*param_5;
  }
  uVar15 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  FUN_140e87440(puVar11,DAT_141a1f440,0x80000000,&local_318,uVar15,
                (ulonglong)ppdVar19 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar15 >> 0x20);
  uStack_360 = (undefined1 *)CONCAT44(uStack_30c,uStack_310);
  local_368 = local_318;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_368);
  local_168 = &local_1e8;
  local_368 = _DAT_141dce508;
  uStack_360 = puRam0000000141dce510;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140041b80(&local_1d8,&local_368);
  local_160 = &local_1d8;
  ppdVar19 = &local_168;
  ppuVar9 = (undefined1 **)CONCAT44(uVar4,DAT_141a56cf0);
  uVar6 = FUN_140e634e0(local_res8,local_res10,&local_278,2,ppuVar9,ppdVar19);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') goto LAB_140279a00;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_288 = 0;
  local_280 = 0;
  local_27c = 5;
  if ((int)local_res20[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*param_5;
  }
  uVar20 = (ulonglong)ppdVar19 & 0xffffffffffffff00;
  uVar15 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  FUN_140e87440(puVar11,DAT_141a1f440,0x80000000,&local_318,uVar15,uVar20);
  uVar20 = uVar20 & 0xffffffffffffff00;
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_140e87440(&local_318,DAT_141a57480,0x80000000,&local_2c0,uVar15,uVar20);
  uVar20 = uVar20 & 0xffffffffffffff00;
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_140e87440(&local_2c0,DAT_141a57300,0x80000000,&local_118,uVar15,uVar20);
  if ((int)local_res20[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*param_5;
  }
  FUN_140e87440(puVar11,DAT_141a572c0,0x80000000,&local_268,uVar15 & 0xffffffffffffff00,
                uVar20 & 0xffffffffffffff00);
  uStack_33c = local_25c;
  uStack_340 = local_260;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) == 0) {
    local_348 = local_268;
  }
  else {
    FUN_1400419b0(&local_348,&local_268);
  }
  uStack_330 = (double)CONCAT44(7,(undefined4)uStack_330);
  local_338 = (undefined1 *)CONCAT44(local_338._4_4_,0xb4);
  FUN_1400460e0(&local_348,&local_338);
  if ((1 << ((byte)((ulonglong)uStack_330 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  uStack_360 = (undefined1 *)CONCAT44(uStack_33c,uStack_340);
  local_368 = local_348;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_368);
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  local_158 = &local_1c8;
  switch(local_2b4) {
  default:
switchD_1402797d4_caseD_1:
    uVar6 = 0;
    break;
  case 6:
    uVar6 = local_2c0;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_2c0 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_1402797d4_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar4 = FUN_140e4a8b0(&local_2c0);
    uVar6 = FUN_140e87250(uVar4);
  }
  ppdVar19 = &local_158;
  ppuVar9 = &local_118;
  uVar6 = FUN_140e63610(uVar6,local_res10,&local_288,1,ppuVar9,ppdVar19);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 != '\0') {
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    local_368 = _DAT_1419e3930;
    uStack_360 = puRam00000001419e3938;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_368);
    local_150 = local_1b8;
    ppuVar9 = &local_150;
    uVar6 = gml_Script_choose_weighted(local_res8,local_res10,&local_298,1,ppuVar9);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 != '\0') {
      local_2d8 = 0x79;
      local_358 = (undefined1 *)0x3ff0000000000000;
      uVar4 = SUB84(uStack_350,0);
      uStack_350 = (undefined1 *)CONCAT44(0xd,uVar4);
      local_368 = (undefined1 *)0x3ff0000000000000;
      uStack_360 = (undefined1 *)CONCAT44(0xd,uVar4);
      if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_308);
      }
      FUN_140041b80(&local_308,&local_368);
      if ((int)local_res20[0] < 1) {
        puVar11 = &DAT_1419df7b0;
      }
      else {
        puVar11 = (undefined8 *)*param_5;
      }
      FUN_140e87930(puVar11,DAT_141a573b0,0x80000000,&local_308);
      local_2d8 = 0x7a;
      local_358 = (undefined1 *)0x3ff0000000000000;
      uVar4 = SUB84(uStack_350,0);
      uStack_350 = (undefined1 *)CONCAT44(0xd,uVar4);
      local_368 = (undefined1 *)0x3ff0000000000000;
      uStack_360 = (undefined1 *)CONCAT44(0xd,uVar4);
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_368);
      if ((int)local_res20[0] < 1) {
        puVar11 = &DAT_1419df7b0;
      }
      else {
        puVar11 = (undefined8 *)*param_5;
      }
      FUN_140e87930(puVar11,DAT_141a574c0,0x80000000,&local_1a8);
    }
  }
LAB_140279a00:
  local_2d8 = 0x83;
  if ((int)local_res20[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*param_5;
  }
  uVar15 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  FUN_140e87440(puVar11,DAT_141a1f440,0x80000000,&local_318,uVar15,
                (ulonglong)ppdVar19 & 0xffffffffffffff00);
  iVar3 = FUN_140e63cb0(local_d8,&local_res8,&local_res10,&local_318);
  if (0 < iVar3) {
    do {
      uVar4 = (undefined4)(uVar15 >> 0x20);
      local_2d8 = 0x84;
      if ((1 << ((byte)local_374 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_380);
      }
      local_380 = 0;
      local_378 = 0;
      local_374 = 5;
      pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a57530);
      if (pdVar5 != local_228) {
        local_368 = (undefined1 *)*pdVar5;
        uStack_360 = (undefined1 *)pdVar5[1];
        if ((1 << ((byte)local_228[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_228);
        }
        FUN_140041b80(local_228,&local_368);
      }
      local_188 = local_228;
      if ((int)local_res20[0] < 1) {
        pdVar5 = (double *)&DAT_1419df7b0;
LAB_140279b2f:
        local_368 = (undefined1 *)*pdVar5;
        uStack_360 = (undefined1 *)pdVar5[1];
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        FUN_140041b80(&local_218,&local_368);
      }
      else {
        pdVar5 = (double *)*param_5;
        if (pdVar5 != &local_218) goto LAB_140279b2f;
      }
      local_180 = &local_218;
      uVar15 = CONCAT44(uVar4,DAT_141a57350);
      FUN_140e634e0(local_res8,local_res10,&local_380,2,uVar15,&local_188);
      cVar2 = FUN_140e643f0(local_d8,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_d8,&local_res8,&local_res10);
  if (local_c8 != 0) {
    FUN_140e4cd60();
    local_c8 = 0;
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d0);
  }
  if ((1 << ((byte)local_374 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_380);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c0);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uVar16 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  if ((1 << ((byte)uVar17 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  _eh_vector_destructor_iterator_(local_228,0x10,8,FUN_140041b30);
  if (0 < (int)local_128[0]) {
    uVar15 = (ulonglong)local_128[0];
    puVar11 = local_120;
    do {
      puVar1 = (undefined8 *)*puVar11;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar11 = puVar11 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  FUN_140e4cd60(local_120);
  DAT_141dc7a50 = (undefined8 *)local_2e8;
  return local_res18;
}

