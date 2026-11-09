// gml_GlobalScript_draw_line_sprite @ 0x1402761c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript_draw_line_sprite
          (longlong *param_1,undefined8 **param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  bool bVar12;
  undefined4 uVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  longlong *local_res8;
  undefined8 **local_res10;
  undefined8 *local_res18;
  undefined4 local_res20;
  code *pcVar19;
  undefined8 **ppuVar20;
  longlong *plVar21;
  ulonglong in_stack_fffffffffffffc60;
  ulonglong uVar22;
  undefined8 local_398;
  undefined4 uStack_390;
  uint uStack_38c;
  undefined8 local_388;
  undefined4 local_380;
  undefined4 local_37c;
  undefined8 local_378;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  uint uStack_35c;
  undefined8 local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 local_338;
  char *local_330;
  undefined4 local_328;
  double local_320;
  uint local_314;
  undefined8 local_310;
  undefined4 local_304;
  undefined8 local_2f8;
  byte local_2ec;
  undefined8 local_2e8;
  byte local_2dc;
  undefined8 local_2d8;
  byte local_2cc;
  undefined1 local_2c8 [12];
  byte local_2bc;
  undefined1 local_2b8 [12];
  byte local_2ac;
  undefined1 local_2a8 [12];
  byte local_29c;
  undefined8 local_298;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 uStack_260;
  uint uStack_25c;
  undefined8 local_258;
  undefined4 uStack_250;
  uint uStack_24c;
  undefined8 *local_248;
  undefined8 *local_240;
  undefined8 *local_238;
  undefined1 *local_230;
  undefined1 *local_228;
  undefined1 *local_220;
  undefined8 local_218;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  double local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  double local_1b8;
  uint local_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  uint local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  double local_178;
  uint local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint local_c8 [2];
  undefined8 *local_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  undefined1 local_98 [16];
  longlong local_88;
  
  local_res20 = 0;
  local_330 = "gml_Script_ComboHit";
  local_338 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_338;
  local_328 = 0x36;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_c8,param_4,3,param_5);
  pcVar19 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_2f8,0x10,6,FUN_1400424d0,FUN_140041b30);
  puVar5 = local_c0;
  uVar11 = local_c8[0];
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_304 = 0xffffff;
  local_310 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  uStack_33c = 0xffffff;
  local_348 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_314 = 0xffffff;
  local_320 = 0.0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  uStack_24c = 0xffffff;
  local_258 = 0.0;
  uStack_25c = 0xffffff;
  local_268 = 0.0;
  uStack_1ec = 0xffffff;
  local_1f8 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_1ac = 0xffffff;
  local_1b8 = 0.0;
  local_1dc = 0xffffff;
  local_1e8 = 0.0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_37c = 0;
  local_388 = 0;
  local_36c = 0;
  local_378 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_328 = 0x36;
  if ((int)local_c8[0] < 3) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_c0[2];
  }
  iVar2 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_328 = 0x36;
    if ((int)uVar11 < 3) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)puVar5[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = 0xc010000000000000;
  }
  local_328 = 0x38;
  if ((int)uVar11 < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*puVar5;
  }
  in_stack_fffffffffffffc60 = in_stack_fffffffffffffc60 & 0xffffffffffffff00;
  uVar10 = (ulonglong)pcVar19 & 0xffffffffffffff00;
  FUN_140e87440(puVar8,DAT_141a1f4e0,0x80000000,&local_d8,uVar10,in_stack_fffffffffffffc60);
  local_398 = (double)local_d8;
  uStack_390 = uStack_d0;
  uStack_38c = uStack_cc;
  if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_310);
  }
  FUN_140041b80(&local_310,&local_398);
  local_328 = 0x39;
  if ((int)uVar11 < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*puVar5;
  }
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(puVar8,DAT_141a1f440,0x80000000,&local_e8,uVar10,
                in_stack_fffffffffffffc60 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar10 >> 0x20);
  local_398 = (double)local_e8;
  uStack_390 = uStack_e0;
  uStack_38c = uStack_dc;
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  FUN_140041b80(&local_348,&local_398);
  local_328 = 0x3b;
  if ((1 << ((byte)local_37c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  local_388 = 0;
  local_380 = 0;
  local_37c = 5;
  local_248 = &local_348;
  local_398 = (double)CONCAT44(uRam0000000141dce52c,_DAT_141dce528);
  uStack_390 = uRam0000000141dce530;
  uStack_38c = DAT_141dce534;
  if ((1 << ((byte)_local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  FUN_140041b80(&local_2e8,&local_398);
  local_240 = &local_2e8;
  ppuVar20 = &local_248;
  uVar10 = CONCAT44(uVar13,DAT_141a56cf0);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_388,2,uVar10,ppuVar20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_378);
    }
    local_378 = 0;
    local_370 = 0;
    local_36c = 5;
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(&local_348,DAT_141a57360,0x80000000,&local_1a8,uVar10,
                  (ulonglong)ppuVar20 & 0xffffffffffffff00);
    uVar13 = (undefined4)(uVar10 >> 0x20);
    local_398 = (double)local_1a8;
    uStack_390 = uStack_1a0;
    uStack_38c = uStack_19c;
    if ((1 << ((byte)_local_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    FUN_140041b80(&local_2d8,&local_398);
    local_238 = &local_2d8;
    ppuVar20 = &local_238;
    uVar10 = CONCAT44(uVar13,DAT_141a02ef8);
    uVar4 = FUN_140e634e0(local_res8,local_res10,&local_378,1,uVar10,ppuVar20);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      local_328 = 0x3c;
      ppuVar20 = (undefined8 **)((ulonglong)ppuVar20 & 0xffffffffffffff00);
      uVar10 = uVar10 & 0xffffffffffffff00;
      FUN_140e87440(&local_348,DAT_141a57360,0x80000000,&local_1a8,uVar10,ppuVar20);
      local_398 = (double)local_1a8;
      uStack_390 = uStack_1a0;
      uStack_38c = uStack_19c;
      if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      FUN_140041b80(&local_348,&local_398);
    }
  }
  local_328 = 0x3e;
  uVar22 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_310,DAT_141a573d0,0x80000000,&local_f8,uVar10,uVar22);
  iVar2 = FUN_140e851f0(&local_f8,&local_348,DAT_141955260,0);
  if (iVar2 != 0) {
    local_328 = 0x40;
    local_398 = (double)local_348;
    uStack_390 = uStack_340;
    uStack_38c = uStack_33c;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_398);
    FUN_140e87930(&local_310,DAT_141a573d0,0x80000000,&local_168);
    local_328 = 0x41;
    if ((1 << ((byte)local_314 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_320);
    }
    local_314 = 0;
    local_320 = 0.0;
    FUN_140e87930(&local_310,DAT_141a572e0,0x80000000,&local_320);
    local_328 = 0x42;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_28c = 0;
    local_298 = 0xc010000000000000;
    FUN_140e87930(&local_310,DAT_141a57440,0x80000000,&local_298);
  }
  local_328 = 0x45;
  if ((int)uVar11 < 3) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)puVar5[2];
  }
  uStack_34c = 0;
  local_358 = 0xc010000000000000;
  iVar2 = FUN_140e851f0(puVar8,&local_358,DAT_141955260,0);
  bVar12 = iVar2 == 0;
  if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  if (!bVar12) {
    uVar22 = CONCAT71((int7)(uVar22 >> 8),bVar12);
    uVar10 = CONCAT71((int7)(uVar10 >> 8),bVar12);
    FUN_140e87440(&local_310,DAT_141a57440,0x80000000,&local_108,uVar10,uVar22);
    if ((int)uVar11 < 3) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)puVar5[2];
    }
    iVar2 = FUN_140e851f0(&local_108,puVar8,DAT_141955260,0);
    if (iVar2 == 0) {
      local_328 = 0x45;
      goto LAB_1402780ad;
    }
  }
  local_328 = 0x46;
  if ((int)uVar11 < 3) {
    puVar8 = &DAT_1419df7b0;
LAB_1402769a8:
    local_398 = (double)*puVar8;
    uStack_390 = *(undefined4 *)(puVar8 + 1);
    uStack_38c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    FUN_140041b80(&local_298,&local_398);
  }
  else {
    puVar8 = (undefined8 *)puVar5[2];
    if (puVar8 != &local_298) goto LAB_1402769a8;
  }
  FUN_140e87930(&local_310,DAT_141a57440,0x80000000,&local_298);
  local_328 = 0x48;
  uVar22 = uVar22 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_310,DAT_141a572e0,0x80000000,&local_320,uVar10,uVar22);
  uVar3 = local_314 & 0xffffff;
  if (uVar3 == 0) {
LAB_140276a64:
    local_320 = local_320 + 1.0;
  }
  else {
    if (uVar3 == 1) {
      local_320 = (double)FUN_140e4b060(&local_320);
      local_314 = 0;
      goto LAB_140276a64;
    }
    if (uVar3 == 7) {
      local_320 = (double)CONCAT44(local_320._4_4_,local_320._0_4_ + 1);
    }
    else if (uVar3 == 10) {
      local_320 = (double)((longlong)local_320 + 1);
    }
    else {
      if (uVar3 == 0xd) {
        local_314 = 0;
        goto LAB_140276a64;
      }
      FUN_140042910(&DAT_14172c3d8,&local_320,&local_320);
    }
  }
  FUN_140e87930(&local_310,DAT_141a572e0,0x80000000,&local_320);
  local_328 = 0x4a;
  FUN_140e87440(&local_310,DAT_141a572e0,0x80000000,&local_198,uVar10 & 0xffffffffffffff00,
                uVar22 & 0xffffffffffffff00);
  if ((local_18c & 0xffffff) == 0) {
    uVar13 = (undefined4)local_198;
  }
  else {
    uVar13 = FUN_140e4b060(&local_198);
  }
  dVar15 = (double)FUN_1412a79b0(uVar13,0x4010000000000000);
  if (dVar15 != 0.0) {
    local_328 = 0x4a;
    goto LAB_1402780ad;
  }
  local_328 = 0x4c;
  if ((1 << ((byte)local_37c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  local_388 = 0;
  local_380 = 0;
  local_37c = 5;
  local_398 = (double)CONCAT44(uRam00000001419e3954,_DAT_1419e3950);
  uStack_390 = uRam00000001419e3958;
  uStack_38c = uRam00000001419e395c;
  if ((1 << ((byte)_local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  FUN_140041b80(&local_2f8,&local_398);
  local_248 = &local_2f8;
  local_398 = (double)CONCAT44(uRam00000001419e3944,_DAT_1419e3940);
  uStack_390 = uRam00000001419e3948;
  uStack_38c = uRam00000001419e394c;
  if ((1 << ((byte)_local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  FUN_140041b80(&local_2e8,&local_398);
  local_240 = &local_2e8;
  ppuVar20 = &local_248;
  gml_Script_IK_documentation(local_res8,local_res10,&local_388,2,ppuVar20);
  uVar13 = (undefined4)((ulonglong)ppuVar20 >> 0x20);
  local_328 = 0x4f;
  if ((1 << ((byte)local_37c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  local_388 = 0;
  local_380 = 0;
  local_37c = 5;
  uStack_38c = 0xf;
  local_398 = 7.291135926268348e-304;
  local_288 = 0xcf;
  uStack_284 = 0x1000002;
  uStack_280 = uStack_390;
  uStack_27c = 0xf;
  if ((1 << ((byte)_local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  FUN_140041b80(&local_2f8,&local_288);
  local_248 = &local_2f8;
  local_398 = (double)CONCAT44(uRam00000001419e3974,_DAT_1419e3970);
  uStack_390 = uRam00000001419e3978;
  uStack_38c = uRam00000001419e397c;
  if ((1 << ((byte)_local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  FUN_140041b80(&local_2e8,&local_398);
  local_240 = &local_2e8;
  local_398 = (double)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_390 = uRam00000001419df7a8;
  uStack_38c = uRam00000001419df7ac;
  if ((1 << ((byte)_local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  FUN_140041b80(&local_2d8,&local_398);
  local_238 = &local_2d8;
  local_398 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_390 = DAT_1419df7b8;
  uStack_38c = DAT_1419df7bc;
  if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2c8);
  }
  FUN_140041b80(local_2c8,&local_398);
  local_398 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_390 = DAT_1419df7b8;
  uStack_38c = DAT_1419df7bc;
  local_230 = local_2c8;
  if ((1 << (local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2b8);
  }
  FUN_140041b80(local_2b8,&local_398);
  local_228 = local_2b8;
  local_398 = (double)CONCAT44(uRam00000001419e3964,_DAT_1419e3960);
  uStack_390 = uRam00000001419e3968;
  uStack_38c = uRam00000001419e396c;
  if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2a8);
  }
  FUN_140041b80(local_2a8,&local_398);
  local_220 = local_2a8;
  ppuVar20 = &local_248;
  uVar10 = CONCAT44(uVar13,DAT_141a0a2e8);
  FUN_140e634e0(local_res8,local_res10,&local_388,6,uVar10,ppuVar20);
  local_328 = 0x51;
  if ((1 << ((byte)local_37c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  local_388 = 0;
  local_380 = 0;
  local_37c = 5;
  uVar22 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_348,DAT_141a572d0,0x80000000,&local_278,uVar10,uVar22);
  FUN_140e87440(&local_278,DAT_141a05098,0x80000000,&local_188,uVar10 & 0xffffffffffffff00,
                uVar22 & 0xffffffffffffff00);
  local_398 = (double)CONCAT44(uRam00000001419e3984,_DAT_1419e3980);
  uStack_390 = uRam00000001419e3988;
  uStack_38c = uRam00000001419e398c;
  if ((1 << ((byte)_local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  FUN_140041b80(&local_2f8,&local_398);
  local_248 = &local_2f8;
  switch(local_26c) {
  default:
switchD_140276ec0_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_278;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_278 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140276ec0_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar13 = FUN_140e4a8b0(&local_278);
    uVar4 = FUN_140e87250(uVar13);
  }
  FUN_140e63610(uVar4,local_res10,&local_388,1,&local_188,&local_248);
  local_328 = 0x53;
  if ((1 << ((byte)local_37c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  local_388 = 0;
  local_380 = 0;
  local_37c = 5;
  FUN_140e87170(&local_348,DAT_1419fe0e8,0x80000000,&local_258,local_res8,local_res10);
  plVar21 = local_res8;
  FUN_140e87170(&local_348,DAT_1419fe158,0x80000000,&local_268,local_res8,local_res10);
  uVar13 = (undefined4)((ulonglong)plVar21 >> 0x20);
  local_398 = local_258;
  uStack_390 = uStack_250;
  uStack_38c = uStack_24c;
  if ((1 << ((byte)_local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  FUN_140041b80(&local_2f8,&local_398);
  local_248 = &local_2f8;
  local_398 = local_268;
  uStack_390 = uStack_260;
  uStack_38c = uStack_25c;
  if ((1 << ((byte)_local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  FUN_140041b80(&local_2e8,&local_398);
  local_240 = &local_2e8;
  local_398 = (double)CONCAT44(uRam0000000141dce51c,_DAT_141dce518);
  uStack_390 = uRam0000000141dce520;
  uStack_38c = DAT_141dce524;
  if ((1 << ((byte)_local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  FUN_140041b80(&local_2d8,&local_398);
  local_238 = &local_2d8;
  uStack_38c = 0xf;
  local_398 = 7.291122019556529e-304;
  local_288 = 0x51;
  uStack_284 = 0x1000000;
  uStack_280 = uStack_390;
  uStack_27c = 0xf;
  if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2c8);
  }
  FUN_140041b80(local_2c8,&local_288);
  ppuVar20 = &local_248;
  uVar10 = CONCAT44(uVar13,DAT_141a0a7c8);
  local_230 = local_2c8;
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_388,4,uVar10,ppuVar20);
  iVar2 = FUN_140e63cb0(local_98,&local_res8,&local_res10,uVar4);
  if (0 < iVar2) {
    do {
      local_328 = 0x55;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a9f8);
      FUN_140e609c0(local_res8);
      uStack_38c = 0xf;
      local_398 = 7.291128972913428e-304;
      if (&local_398 != puVar5) {
        local_368 = 0x2f3;
        uStack_364 = 0x1000001;
        uStack_360 = uStack_390;
        uStack_35c = 0xf;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_368);
      }
      FUN_140e60910(1);
      local_328 = 0x56;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f440);
      FUN_140e87170(&local_348,DAT_141a0a828,0x80000000,&local_1f8,local_res8,local_res10);
      FUN_140e609c0(local_res8);
      if (&local_1f8 != puVar5) {
        local_368 = (undefined4)local_1f8;
        uStack_364 = local_1f8._4_4_;
        uStack_360 = uStack_1f0;
        uStack_35c = uStack_1ec;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_368);
      }
      FUN_140e60910(1);
      local_328 = 0x58;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57380);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0x4020000000000000;
      local_328 = 0x59;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57490);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0x4024000000000000;
      local_328 = 0x5a;
      puVar6 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05568);
      FUN_140e609c0(local_res8);
      uVar13 = 1;
      puVar7 = (undefined4 *)FUN_140e8da20(&local_388,local_res8,2,&DAT_1419e39a0,&DAT_1419e3990);
      if (puVar7 != puVar6) {
        local_368 = *puVar7;
        uStack_364 = puVar7[1];
        uStack_360 = puVar7[2];
        uStack_35c = puVar7[3];
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_368);
      }
      FUN_140e60910(1);
      local_328 = 0x5b;
      if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      local_378 = 0;
      local_370 = 0;
      local_36c = 5;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1d8a0);
      local_368 = _DAT_141dc63a0;
      uStack_364 = uRam0000000141dc63a4;
      uStack_360 = uRam0000000141dc63a8;
      uStack_35c = uRam0000000141dc63ac;
      if ((1 << ((byte)_local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      FUN_140041b80(&local_2f8,&local_368);
      local_248 = &local_2f8;
      FUN_140e609c0(local_res8);
      ppuVar20 = &local_248;
      uVar10 = CONCAT44(uVar13,DAT_141a0a0d8);
      puVar8 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_378,1,uVar10,ppuVar20);
      uStack_34c = *(undefined4 *)((longlong)puVar8 + 0xc);
      uStack_350 = *(undefined4 *)(puVar8 + 1);
      if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) == 0) {
        local_358 = *puVar8;
      }
      else {
        FUN_1400419b0(&local_358,puVar8);
      }
      local_res20 = 1;
      uStack_27c = 7;
      local_288 = 2;
      FUN_140042560(&local_358,&local_288);
      if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      if (&local_358 != puVar5) {
        local_368 = (undefined4)local_358;
        uStack_364 = local_358._4_4_;
        uStack_360 = uStack_350;
        uStack_35c = uStack_34c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_368);
      }
      local_res20 = 0;
      if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      FUN_140e60910(1);
      cVar1 = FUN_140e643f0(local_98,&local_res8,&local_res10);
    } while (cVar1 != '\0');
    param_3 = local_res18;
    puVar5 = local_c0;
    uVar11 = local_c8[0];
  }
  puVar8 = &DAT_1419df7b0;
  FUN_140e63970(local_98,&local_res8,&local_res10);
  DAT_141a67c38 = 1;
  FUN_140e87440(&local_278,DAT_141a05098,0x80000000,&local_188,uVar10 & 0xffffffffffffff00,
                (ulonglong)ppuVar20 & 0xffffffffffffff00);
  DAT_141a67c38 = 0;
  DAT_141a72aac = 0;
  local_328 = 0x5e;
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_378 = 0;
  local_370 = 0;
  local_36c = 5;
  FUN_140e87170(&local_348,DAT_1419fe0e8,0x80000000,&local_258,local_res8,local_res10);
  plVar21 = local_res8;
  FUN_140e87170(&local_348,DAT_1419fe158,0x80000000,&local_268,local_res8,local_res10);
  uVar13 = (undefined4)((ulonglong)plVar21 >> 0x20);
  local_368 = (undefined4)local_258;
  uStack_364 = local_258._4_4_;
  uStack_360 = uStack_250;
  uStack_35c = uStack_24c;
  if ((1 << ((byte)_local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  FUN_140041b80(&local_2f8,&local_368);
  local_248 = &local_2f8;
  local_368 = (undefined4)local_268;
  uStack_364 = local_268._4_4_;
  uStack_360 = uStack_260;
  uStack_35c = uStack_25c;
  if ((1 << ((byte)_local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  FUN_140041b80(&local_2e8,&local_368);
  local_240 = &local_2e8;
  local_368 = _DAT_141dce518;
  uStack_364 = uRam0000000141dce51c;
  uStack_360 = uRam0000000141dce520;
  uStack_35c = DAT_141dce524;
  if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  FUN_140041b80(&local_2d8,&local_368);
  local_238 = &local_2d8;
  uStack_38c = 0xf;
  local_398 = 7.291122019556613e-304;
  local_368 = 0x85;
  uStack_364 = 0x1000000;
  uStack_360 = uStack_390;
  uStack_35c = 0xf;
  if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2c8);
  }
  FUN_140041b80(local_2c8,&local_368);
  ppuVar20 = &local_248;
  plVar21 = (longlong *)CONCAT44(uVar13,DAT_141a0a7c8);
  local_230 = local_2c8;
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_378,4,plVar21,ppuVar20);
  iVar2 = FUN_140e63cb0(local_b8,&local_res8,&local_res10,uVar4);
  if (0 < iVar2) {
    do {
      local_328 = 0x60;
      puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
      FUN_140e87170(&local_310,DAT_141a0a828,0x80000000,&local_158,local_res8,local_res10);
      FUN_140e609c0(local_res8);
      if (&local_158 != puVar9) {
        local_368 = (undefined4)local_158;
        uStack_364 = local_158._4_4_;
        uStack_360 = uStack_150;
        uStack_35c = uStack_14c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar9);
        }
        FUN_140041b80(puVar9,&local_368);
      }
      FUN_140e60910(1);
      local_328 = 0x61;
      puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f440);
      FUN_140e87170(&local_348,DAT_141a0a828,0x80000000,&local_1f8,local_res8,local_res10);
      FUN_140e609c0(local_res8);
      if (&local_1f8 != puVar9) {
        local_368 = (undefined4)local_1f8;
        uStack_364 = local_1f8._4_4_;
        uStack_360 = uStack_1f0;
        uStack_35c = uStack_1ec;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar9);
        }
        FUN_140041b80(puVar9,&local_368);
      }
      FUN_140e60910(1);
      local_328 = 0x62;
      FUN_140e87170(&local_310,DAT_1419fe0e8,0x80000000,&local_178,local_res8,local_res10);
      FUN_140e87170(&local_310,DAT_1419fe158,0x80000000,&local_1b8,local_res8,local_res10);
      FUN_140e87170(&local_348,DAT_1419fe0e8,0x80000000,&local_258,local_res8,local_res10);
      plVar21 = local_res8;
      ppuVar20 = local_res10;
      FUN_140e87170(&local_348,DAT_1419fe158,0x80000000,&local_268,local_res8,local_res10);
      dVar15 = local_268;
      if ((uStack_25c & 0xffffff) != 0) {
        dVar15 = (double)FUN_140e4b060(&local_268);
      }
      dVar16 = local_258;
      if ((uStack_24c & 0xffffff) != 0) {
        dVar16 = (double)FUN_140e4b060(&local_258);
      }
      dVar17 = local_1b8;
      if ((local_1ac & 0xffffff) != 0) {
        dVar17 = (double)FUN_140e4b060(&local_1b8);
      }
      dVar18 = local_178;
      if ((local_16c & 0xffffff) != 0) {
        dVar18 = (double)FUN_140e4b060(&local_178);
      }
      fVar14 = (float)FUN_140e793d0((float)dVar18,(float)dVar17,(float)dVar16,(float)dVar15);
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1dc = 0;
      local_1e8 = (double)fVar14;
      FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_1e8);
      cVar1 = FUN_140e643f0(local_b8,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_b8,&local_res8,&local_res10);
  DAT_141a67c38 = 1;
  uVar22 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
  uVar10 = (ulonglong)plVar21 & 0xffffffffffffff00;
  FUN_140e87440(&local_278,DAT_141a05098,0x80000000,&local_188,uVar10,uVar22);
  DAT_141a67c38 = 0;
  DAT_141a72aac = 0;
  local_328 = 0x65;
  FUN_140e85f80(local_res8,DAT_1419fd4e8,0x80000000,&local_118);
  local_368 = (undefined4)local_118;
  uStack_364 = local_118._4_4_;
  uStack_360 = uStack_110;
  uStack_35c = uStack_10c;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_368);
  FUN_140e87930(&local_348,DAT_141a57420,0x80000000,&local_1c8);
  local_328 = 0x66;
  uStack_38c = 0xf;
  local_398 = 7.29112897291225e-304;
  local_368 = 0x1c;
  uStack_364 = 0x1000001;
  uStack_360 = uStack_390;
  uStack_35c = 0xf;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140041b80(&local_1d8,&local_368);
  FUN_140e87930(&local_348,DAT_141a574b0,0x80000000,&local_1d8);
  local_328 = 0x67;
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_378 = 0;
  local_370 = 0;
  local_36c = 5;
  uVar22 = uVar22 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_348,DAT_141a57560,0x80000000,&local_208,uVar10,uVar22);
  FUN_140e87440(&local_208,DAT_141a57340,0x80000000,&local_128,uVar10 & 0xffffffffffffff00,
                uVar22 & 0xffffffffffffff00);
  local_368 = _DAT_1419e39b0;
  uStack_364 = uRam00000001419e39b4;
  uStack_360 = uRam00000001419e39b8;
  uStack_35c = uRam00000001419e39bc;
  if ((1 << (local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  FUN_140041b80(&local_2f8,&local_368);
  local_248 = &local_2f8;
  if ((int)uVar11 < 2) {
    puVar9 = &DAT_1419df7b0;
LAB_140277d1e:
    local_368 = *(undefined4 *)puVar9;
    uStack_364 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_360 = *(undefined4 *)(puVar9 + 1);
    uStack_35c = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << (local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    FUN_140041b80(&local_2e8,&local_368);
  }
  else {
    puVar9 = (undefined8 *)puVar5[1];
    if (puVar9 != &local_2e8) goto LAB_140277d1e;
  }
  local_240 = &local_2e8;
  switch(local_1fc) {
  default:
switchD_140277d75_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_208;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_208 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140277d75_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar13 = FUN_140e4a8b0(&local_208);
    uVar4 = FUN_140e87250(uVar13);
  }
  ppuVar20 = &local_248;
  puVar9 = &local_128;
  FUN_140e63610(uVar4,local_res10,&local_378,2,puVar9,ppuVar20);
  local_328 = 0x68;
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_378 = 0;
  local_370 = 0;
  local_36c = 5;
  uVar22 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
  uVar10 = (ulonglong)puVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_310,DAT_141a57560,0x80000000,&local_218,uVar10,uVar22);
  uVar22 = uVar22 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_218,DAT_141a57310,0x80000000,&local_138,uVar10,uVar22);
  FUN_140e87440(&local_310,DAT_141a57330,0x80000000,&local_148,uVar10 & 0xffffffffffffff00,
                uVar22 & 0xffffffffffffff00);
  uStack_34c = 0;
  local_358 = 0x400c000000000000;
  local_res20 = 2;
  FUN_140042560(&local_358,&local_148);
  local_368 = (undefined4)local_358;
  uStack_364 = local_358._4_4_;
  uStack_360 = uStack_350;
  uStack_35c = uStack_34c;
  if ((1 << (local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  FUN_140041b80(&local_2f8,&local_368);
  local_res20 = 0;
  if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_248 = &local_2f8;
  if (1 < (int)uVar11) {
    puVar8 = (undefined8 *)puVar5[1];
  }
  uStack_34c = *(undefined4 *)((longlong)puVar8 + 0xc);
  uStack_350 = *(undefined4 *)(puVar8 + 1);
  if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) == 0) {
    local_358 = *puVar8;
  }
  else {
    FUN_1400419b0(&local_358,puVar8);
  }
  local_res20 = 4;
  uStack_27c = 7;
  local_288 = 0xb4;
  FUN_1400460e0(&local_358,&local_288);
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_368 = (undefined4)local_358;
  uStack_364 = local_358._4_4_;
  uStack_360 = uStack_350;
  uStack_35c = uStack_34c;
  if ((1 << (local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  FUN_140041b80(&local_2e8,&local_368);
  if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_240 = &local_2e8;
  switch(local_20c) {
  default:
switchD_14027800e_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_218;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_218 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_14027800e_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar13 = FUN_140e4a8b0(&local_218);
    uVar4 = FUN_140e87250(uVar13);
  }
  FUN_140e63610(uVar4,local_res10,&local_378,2,&local_138,&local_248);
  if (local_a8 != 0) {
    FUN_140e4cd60();
    local_a8 = 0;
  }
  if (local_88 != 0) {
    FUN_140e4cd60();
    local_88 = 0;
  }
LAB_1402780ad:
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  if ((1 << ((byte)local_37c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_314 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_320);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_310);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_2f8,0x10,6,FUN_140041b30);
  if (0 < (int)uVar11) {
    uVar10 = (ulonglong)uVar11;
    puVar8 = puVar5;
    do {
      puVar9 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      *puVar9 = 0;
      *(undefined4 *)(puVar9 + 1) = 0;
      *(undefined4 *)((longlong)puVar9 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(puVar5);
  DAT_141dc7a50 = (undefined8 *)local_338;
  return param_3;
}

