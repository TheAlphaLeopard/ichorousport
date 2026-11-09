// gml_Object_oBreakableCandle_Step_2 @ 0x1408507c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBreakableCandle_Step_2(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong **pplVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  double *pdVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  uint uVar13;
  byte bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  double dVar19;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auVar20 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar21 [16];
  longlong *local_res8;
  ulonglong local_res10;
  uint local_res18;
  code *pcVar25;
  ulonglong uVar26;
  undefined8 **ppuVar27;
  ulonglong uVar28;
  undefined8 **ppuVar29;
  ulonglong in_stack_fffffffffffffb90;
  undefined8 local_468;
  undefined4 local_460;
  undefined4 local_45c;
  longlong *local_458;
  undefined8 uStack_450;
  longlong *local_448;
  undefined8 uStack_440;
  longlong *local_438;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  longlong *local_428;
  undefined4 uStack_420;
  uint uStack_41c;
  undefined8 local_418;
  char *local_410;
  undefined4 local_408;
  longlong *local_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  longlong local_3e8;
  undefined4 local_3dc;
  undefined8 local_3d8;
  byte local_3cc;
  undefined8 local_3c8;
  byte local_3bc;
  undefined8 local_3b8;
  byte local_3ac;
  undefined1 local_3a8 [12];
  byte local_39c;
  undefined1 local_398 [12];
  byte local_38c;
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  double local_368;
  uint local_35c;
  longlong *local_358;
  undefined4 uStack_350;
  uint uStack_34c;
  longlong *local_348;
  undefined4 uStack_340;
  uint uStack_33c;
  longlong *local_338;
  undefined4 uStack_330;
  uint uStack_32c;
  longlong *local_328;
  undefined4 local_320;
  uint local_31c;
  undefined8 *local_318;
  undefined8 *local_310;
  undefined8 *local_308;
  undefined1 *local_300;
  undefined1 *local_2f8;
  undefined1 *local_2f0;
  undefined1 *local_2e8;
  longlong *local_2e0;
  undefined4 local_2d4;
  undefined8 local_2d0;
  undefined4 local_2c4;
  undefined8 local_2c0;
  undefined4 local_2b4;
  longlong *local_2a8;
  undefined4 uStack_2a0;
  uint uStack_29c;
  undefined8 local_298;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_27c;
  longlong *local_278;
  undefined4 uStack_270;
  uint uStack_26c;
  longlong *local_268;
  undefined4 uStack_260;
  uint uStack_25c;
  longlong *local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  longlong *local_238;
  undefined4 uStack_22c;
  longlong *local_228;
  undefined4 local_21c;
  longlong *local_218;
  undefined4 local_20c;
  longlong *local_208;
  undefined4 local_1fc;
  longlong *local_1f8;
  undefined4 uStack_1ec;
  longlong *local_1e8;
  undefined4 uStack_1dc;
  ulonglong local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong *local_1b8;
  undefined4 local_1ac;
  longlong *local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  longlong *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  longlong *local_178;
  undefined4 local_170;
  uint local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  longlong *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_12c;
  longlong *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  longlong *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined1 local_b8 [16];
  longlong local_a8;
  
  local_res18 = 0;
  local_410 = "gml_Object_oBreakableCandle_Step_2";
  local_408 = 0;
  local_418 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_418;
  pcVar25 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_3d8,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = 0;
  local_16c = 0xffffff;
  local_178 = (longlong *)0x0;
  local_27c = 0xffffff;
  local_288 = 0;
  bVar14 = 0xff;
  local_17c = 0xffffff;
  local_188 = (longlong *)0x0;
  local_31c = 0xffffff;
  local_328 = (longlong *)0x0;
  uStack_25c = 0xffffff;
  local_268 = (longlong *)0x0;
  uStack_26c = 0xffffff;
  local_278 = (longlong *)0x0;
  uStack_29c = 0xffffff;
  local_2a8 = (longlong *)0x0;
  uStack_32c = 0xffffff;
  local_338 = (longlong *)0x0;
  uStack_10c = 0xffffff;
  local_118 = (longlong *)0x0;
  uStack_11c = 0xffffff;
  local_128 = (longlong *)0x0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_35c = 0xffffff;
  local_368 = 0.0;
  local_3dc = 0xffffff;
  local_3e8 = 0;
  uStack_13c = 0xffffff;
  local_148 = (longlong *)0x0;
  uStack_33c = 0xffffff;
  local_348 = (longlong *)0x0;
  local_2b4 = 0xffffff;
  local_2c0 = 0;
  uStack_ec = 0xffffff;
  local_f8 = (longlong *)0x0;
  local_2c4 = 0xffffff;
  local_2d0 = 0;
  uStack_14c = 0xffffff;
  local_158 = (longlong *)0x0;
  local_28c = 0xffffff;
  local_298 = 0;
  uStack_dc = 0xffffff;
  local_e8 = (longlong *)0x0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_45c = 0xffffff;
  local_468 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_408 = 1;
  uStack_42c = 6;
  local_438 = local_res8;
  uVar26 = (ulonglong)pcVar25 & 0xffffffffffffff00;
  FUN_140e87440(&local_438,DAT_141a0a728,0x80000000,&local_108,uVar26,
                in_stack_fffffffffffffb90 & 0xffffffffffffff00);
  uVar15 = (undefined4)(uVar26 >> 0x20);
  if ((1 << ((byte)uStack_42c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_438);
  }
  uStack_42c = 0xf;
  local_438 = (longlong *)0x10000010000011b;
  iVar4 = FUN_140e851f0(&local_108,&local_438,DAT_141955260,0);
  if ((1 << ((byte)uStack_42c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_438);
  }
  if (iVar4 == 0) {
    local_408 = 3;
    pplVar6 = (longlong **)(**(code **)(*local_res8 + 0x10))();
    uStack_3ec = 0xd;
    local_3f8 = (longlong *)0x0;
    if (&local_3f8 != pplVar6) {
      uStack_450 = (longlong *)CONCAT44(0xd,uStack_3f0);
      local_458 = (longlong *)0x0;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_458);
    }
    local_408 = 4;
  }
  else {
    local_408 = 8;
    uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a168);
    cVar3 = FUN_140e491e0(uVar7);
    if (cVar3 != '\0') {
      local_408 = 10;
      if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_468);
      }
      local_468 = 0;
      local_460 = 0;
      local_45c = 5;
      FUN_140e85f80(local_res8,DAT_1419fd2a8,0x80000000,&local_178);
      uStack_41c = local_16c;
      uStack_420 = local_170;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
        local_428 = local_178;
      }
      else {
        FUN_1400419b0(&local_428,&local_178);
      }
      local_res18 = 0x40;
      uStack_42c = 0;
      local_438 = (longlong *)0x4024000000000000;
      FUN_140046500(&local_428,&local_438);
      if ((1 << ((byte)uStack_42c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_438);
      }
      uStack_450 = (longlong *)CONCAT44(uStack_41c,uStack_420);
      local_458 = local_428;
      if ((1 << ((byte)_local_3cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3d8);
      }
      FUN_140041b80(&local_3d8,&local_458);
      local_res18 = 0;
      if ((1 << ((byte)uStack_41c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_428);
      }
      local_318 = &local_3d8;
      uVar7 = CONCAT44(uVar15,DAT_1419fe728);
      puVar8 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_468,1,uVar7,&local_318);
      uVar15 = (undefined4)((ulonglong)uVar7 >> 0x20);
      if ((*(uint *)((longlong)puVar8 + 0xc) & 0xffffff) == 0) {
        uVar7 = *puVar8;
      }
      else {
        uVar7 = FUN_140e4b060(puVar8);
      }
      dVar19 = (double)FUN_1412a79b0(uVar7,0x4010000000000000);
      if (dVar19 == 0.0) {
        local_408 = 0xb;
        pdVar9 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a198);
        FUN_140e609c0(local_res8);
        dVar19 = (double)FUN_140e794b0(0xbfe0000000000000,0x3fe0000000000000);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar9);
        }
        *(undefined4 *)((longlong)pdVar9 + 0xc) = 0;
        *pdVar9 = dVar19 * 16.0;
        FUN_140e60910(1);
      }
      local_408 = 0xd;
      if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_468);
      }
      local_468 = 0;
      local_460 = 0;
      local_45c = 5;
      puVar8 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a1e8);
      puVar10 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a198);
      puVar11 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a1e8);
      if (puVar8 != &local_3d8) {
        local_458 = (longlong *)*puVar8;
        uStack_450 = (longlong *)puVar8[1];
        if ((1 << ((byte)_local_3cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3d8);
        }
        FUN_140041b80(&local_3d8,&local_458);
      }
      local_318 = &local_3d8;
      if (puVar10 != &local_3c8) {
        local_458 = (longlong *)*puVar10;
        uStack_450 = (longlong *)puVar10[1];
        if ((1 << ((byte)_local_3bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3c8);
        }
        FUN_140041b80(&local_3c8,&local_458);
      }
      local_310 = &local_3c8;
      local_458 = _DAT_1419e8f80;
      uStack_450 = (longlong *)uRam00000001419e8f88;
      if ((1 << ((byte)_local_3ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3b8);
      }
      FUN_140041b80(&local_3b8,&local_458);
      local_308 = &local_3b8;
      FUN_140e609c0(local_res8);
      ppuVar29 = &local_318;
      ppuVar27 = (undefined8 **)CONCAT44(uVar15,DAT_141a00c58);
      puVar10 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_468,3,ppuVar27,ppuVar29);
      if (puVar10 != puVar11) {
        local_458 = (longlong *)*puVar10;
        uStack_450 = (longlong *)puVar10[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar11);
        }
        FUN_140041b80(puVar11,&local_458);
      }
      FUN_140e60910(1);
      local_408 = 0xf;
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_27c = 0;
      local_288 = 0xc010000000000000;
      local_17c = 0;
      local_188 = (longlong *)&DAT_bff0000000000000;
      local_408 = 0x11;
      if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_328);
      }
      local_31c = 0;
      local_328 = (longlong *)0x0;
      local_408 = 0x13;
      uStack_42c = 0xf;
      local_438 = (longlong *)0x10000000000009d;
      iVar4 = FUN_140e63cb0(local_b8,&local_res8,&local_res10,&local_438);
      if ((1 << ((byte)uStack_42c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_438);
      }
      if (0 < iVar4) {
        do {
          local_408 = 0x15;
          uStack_42c = 6;
          local_438 = local_res8;
          uVar28 = (ulonglong)ppuVar29 & 0xffffffffffffff00;
          uVar26 = (ulonglong)ppuVar27 & 0xffffffffffffff00;
          FUN_140e87440(&local_438,DAT_1419fded8,0x80000000,&local_268,uVar26,uVar28);
          if ((1 << ((byte)uStack_42c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_438);
          }
          local_24c = 6;
          local_258 = local_res8;
          uVar28 = uVar28 & 0xffffffffffffff00;
          uVar26 = uVar26 & 0xffffffffffffff00;
          FUN_140e87440(&local_258,DAT_1419fdd18,0x80000000,&local_278,uVar26,uVar28);
          if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_258);
          }
          uStack_34c = 6;
          local_358 = local_res8;
          uVar28 = uVar28 & 0xffffffffffffff00;
          uVar26 = uVar26 & 0xffffffffffffff00;
          FUN_140e87440(&local_358,DAT_1419fe0e8,0x80000000,&local_2a8,uVar26,uVar28);
          if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_358);
          }
          uStack_41c = 6;
          local_428 = local_res8;
          uVar28 = uVar28 & 0xffffffffffffff00;
          uVar26 = uVar26 & 0xffffffffffffff00;
          FUN_140e87440(&local_428,DAT_1419fe158,0x80000000,&local_338,uVar26,uVar28);
          if ((1 << ((byte)uStack_41c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_428);
          }
          if ((uStack_32c & 0xffffff) == 0) {
            uVar15 = SUB84(local_338,0);
            uVar22 = (undefined4)((ulonglong)local_338 >> 0x20);
          }
          else {
            uVar7 = FUN_140e4b060(&local_338);
            uVar15 = (undefined4)uVar7;
            uVar22 = (undefined4)((ulonglong)uVar7 >> 0x20);
          }
          if ((uStack_29c & 0xffffff) == 0) {
            uVar16 = SUB84(local_2a8,0);
            uVar23 = (undefined4)((ulonglong)local_2a8 >> 0x20);
          }
          else {
            uVar7 = FUN_140e4b060(&local_2a8);
            uVar16 = (undefined4)uVar7;
            uVar23 = (undefined4)((ulonglong)uVar7 >> 0x20);
          }
          if ((uStack_26c & 0xffffff) == 0) {
            uVar17 = SUB84(local_278,0);
            uVar24 = (undefined4)((ulonglong)local_278 >> 0x20);
          }
          else {
            uVar7 = FUN_140e4b060(&local_278);
            uVar17 = (undefined4)uVar7;
            uVar24 = (undefined4)((ulonglong)uVar7 >> 0x20);
          }
          if ((uStack_25c & 0xffffff) == 0) {
            auVar20._8_8_ = 0;
            auVar20._0_8_ = local_268;
          }
          else {
            auVar20._0_8_ = FUN_140e4b060(&local_268);
            auVar20._8_8_ = extraout_XMM0_Qb;
          }
          auVar21._4_12_ = auVar20._4_12_;
          auVar21._0_4_ = (float)auVar20._0_8_;
          fVar18 = (float)FUN_140e793d0(auVar21._0_8_,(float)(double)CONCAT44(uVar24,uVar17),
                                        (float)(double)CONCAT44(uVar23,uVar16),
                                        (float)(double)CONCAT44(uVar22,uVar15));
          local_17c = 0;
          local_188 = (longlong *)(double)fVar18;
          local_408 = 0x16;
          if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_468);
          }
          local_468 = 0;
          local_460 = 0;
          local_45c = 5;
          local_1ac = 6;
          local_1b8 = local_res8;
          uVar28 = uVar28 & 0xffffffffffffff00;
          uVar26 = uVar26 & 0xffffffffffffff00;
          FUN_140e87440(&local_1b8,DAT_1419fded8,0x80000000,&local_268,uVar26,uVar28);
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          uStack_22c = 6;
          local_238 = local_res8;
          uVar28 = uVar28 & 0xffffffffffffff00;
          uVar26 = uVar26 & 0xffffffffffffff00;
          FUN_140e87440(&local_238,DAT_1419fdd18,0x80000000,&local_278,uVar26,uVar28);
          if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          local_21c = 6;
          local_228 = local_res8;
          uVar28 = uVar28 & 0xffffffffffffff00;
          uVar26 = uVar26 & 0xffffffffffffff00;
          FUN_140e87440(&local_228,DAT_1419fe0e8,0x80000000,&local_2a8,uVar26,uVar28);
          if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          local_20c = 6;
          local_218 = local_res8;
          uVar26 = uVar26 & 0xffffffffffffff00;
          FUN_140e87440(&local_218,DAT_1419fe158,0x80000000,&local_338,uVar26,
                        uVar28 & 0xffffffffffffff00);
          uVar15 = (undefined4)(uVar26 >> 0x20);
          if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_218);
          }
          uStack_450 = (longlong *)CONCAT44(uStack_25c,uStack_260);
          local_458 = local_268;
          if ((1 << ((byte)_local_3cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3d8);
          }
          FUN_140041b80(&local_3d8,&local_458);
          local_318 = &local_3d8;
          uStack_450 = (longlong *)CONCAT44(uStack_26c,uStack_270);
          local_458 = local_278;
          if ((1 << ((byte)_local_3bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3c8);
          }
          FUN_140041b80(&local_3c8,&local_458);
          local_310 = &local_3c8;
          uStack_450 = (longlong *)CONCAT44(uStack_29c,uStack_2a0);
          local_458 = local_2a8;
          if ((1 << ((byte)_local_3ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3b8);
          }
          FUN_140041b80(&local_3b8,&local_458);
          local_308 = &local_3b8;
          uStack_450 = (longlong *)CONCAT44(uStack_32c,uStack_330);
          local_458 = local_338;
          if ((1 << ((byte)_local_39c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_3a8);
          }
          FUN_140041b80(local_3a8,&local_458);
          local_300 = local_3a8;
          ppuVar29 = &local_318;
          uVar26 = CONCAT44(uVar15,DAT_1419fd548);
          pplVar6 = (longlong **)FUN_140e634e0(local_res8,local_res10,&local_468,4,uVar26,ppuVar29);
          if (pplVar6 != &local_328) {
            local_458 = *pplVar6;
            uStack_450 = pplVar6[1];
            if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_328);
            }
            FUN_140041b80(&local_328,&local_458);
          }
          local_408 = 0x18;
          if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_468);
          }
          local_468 = 0;
          local_460 = 0;
          local_45c = 5;
          local_1fc = 6;
          local_208 = local_res8;
          uVar28 = (ulonglong)ppuVar29 & 0xffffffffffffff00;
          uVar26 = uVar26 & 0xffffffffffffff00;
          FUN_140e87440(&local_208,DAT_1419fe0e8,0x80000000,&local_2a8,uVar26,uVar28);
          if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          uStack_1ec = 6;
          local_1f8 = local_res8;
          uVar28 = uVar28 & 0xffffffffffffff00;
          uVar26 = uVar26 & 0xffffffffffffff00;
          FUN_140e87440(&local_1f8,DAT_1419fe158,0x80000000,&local_338,uVar26,uVar28);
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          local_19c = 6;
          local_1a8 = local_res8;
          uVar28 = uVar28 & 0xffffffffffffff00;
          uVar26 = uVar26 & 0xffffffffffffff00;
          FUN_140e87440(&local_1a8,DAT_1419fded8,0x80000000,&local_268,uVar26,uVar28);
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          uStack_1dc = 6;
          local_1e8 = local_res8;
          uVar28 = uVar28 & 0xffffffffffffff00;
          uVar26 = uVar26 & 0xffffffffffffff00;
          FUN_140e87440(&local_1e8,DAT_1419fdd18,0x80000000,&local_278,uVar26,uVar28);
          if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          local_1cc = 6;
          local_1d8 = local_res10;
          ppuVar29 = (undefined8 **)(uVar28 & 0xffffffffffffff00);
          FUN_140e87440(&local_1d8,DAT_141a0a828,0x80000000,&local_118,uVar26 & 0xffffffffffffff00,
                        ppuVar29);
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          uStack_450 = (longlong *)CONCAT44(uStack_29c,uStack_2a0);
          local_458 = local_2a8;
          if ((1 << ((byte)_local_3cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3d8);
          }
          FUN_140041b80(&local_3d8,&local_458);
          local_318 = &local_3d8;
          uStack_450 = (longlong *)CONCAT44(uStack_32c,uStack_330);
          local_458 = local_338;
          if ((1 << ((byte)_local_3bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3c8);
          }
          FUN_140041b80(&local_3c8,&local_458);
          local_310 = &local_3c8;
          uStack_450 = (longlong *)CONCAT44(uStack_25c,uStack_260);
          local_458 = local_268;
          if ((1 << ((byte)_local_3ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3b8);
          }
          FUN_140041b80(&local_3b8,&local_458);
          local_308 = &local_3b8;
          uStack_450 = (longlong *)CONCAT44(uStack_26c,uStack_270);
          local_458 = local_278;
          if ((1 << ((byte)_local_39c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_3a8);
          }
          FUN_140041b80(local_3a8,&local_458);
          local_300 = local_3a8;
          uStack_450 = (longlong *)CONCAT44(uStack_10c,uStack_110);
          local_458 = local_118;
          if ((1 << ((byte)_local_38c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_398);
          }
          FUN_140041b80(local_398,&local_458);
          local_458 = _DAT_1419e8f60;
          uStack_450 = (longlong *)uRam00000001419e8f68;
          local_2f8 = local_398;
          if ((1 << (local_388[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_388);
          }
          FUN_140041b80(local_388,&local_458);
          local_2f0 = local_388;
          local_458 = _DAT_1419df7a0;
          uStack_450 = (longlong *)uRam00000001419df7a8;
          if ((1 << (local_378[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_378);
          }
          FUN_140041b80(local_378,&local_458);
          local_2e8 = local_378;
          ppuVar27 = &local_318;
          uVar7 = gml_GlobalScript_collisionReal(local_res8,local_res10,&local_468,7,ppuVar27);
          cVar3 = FUN_140e491e0(uVar7);
          if (cVar3 == '\0') {
            local_408 = 0x18;
          }
          else {
            local_408 = 0x19;
            local_1bc = 0;
            local_1c8 = 0x3ff0000000000000;
            iVar4 = FUN_140e851f0(&local_328,&local_1c8,DAT_141955260,1);
            if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c8);
            }
            if (iVar4 == -2 || 0 < iVar4) {
              local_408 = 0x1b;
              local_2d4 = 6;
              local_2e0 = local_res8;
              ppuVar29 = (undefined8 **)((ulonglong)ppuVar29 & 0xffffffffffffff00);
              ppuVar27 = (undefined8 **)((ulonglong)ppuVar27 & 0xffffffffffffff00);
              FUN_140e87440(&local_2e0,DAT_141a0a828,0x80000000,&local_128,ppuVar27,ppuVar29);
              if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2e0);
              }
              uStack_450 = (longlong *)CONCAT44(uStack_11c,uStack_120);
              local_458 = local_128;
              if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_288);
              }
              FUN_140041b80(&local_288,&local_458);
            }
            else {
              local_408 = 0x19;
            }
          }
          cVar3 = FUN_140e643f0(local_b8,&local_res8,&local_res10);
        } while (cVar3 != '\0');
      }
      uVar15 = (undefined4)((ulonglong)ppuVar27 >> 0x20);
      bVar14 = 0;
      FUN_140e63970(local_b8,&local_res8,&local_res10);
      local_408 = 0x1f;
      if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_468);
      }
      local_468 = 0;
      local_460 = 0;
      local_45c = 5;
      local_318 = &local_288;
      ppuVar27 = &local_318;
      ppuVar29 = (undefined8 **)CONCAT44(uVar15,DAT_141a02ef8);
      uVar7 = FUN_140e634e0(local_res8,local_res10,&local_468,1,ppuVar29,ppuVar27);
      cVar3 = FUN_140e491e0(uVar7);
      if (cVar3 != '\0') {
        local_408 = 0x21;
        pplVar6 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a258);
        FUN_140e609c0(local_res8);
        uStack_41c = 0;
        uStack_420 = local_180;
        local_428 = local_188;
        local_res18 = 0x200;
        local_2d4 = 7;
        local_2e0 = (longlong *)CONCAT44(local_2e0._4_4_,0x5a);
        FUN_1400462a0(&local_428,&local_2e0);
        if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e0);
        }
        if (&local_428 != pplVar6) {
          uStack_450 = (longlong *)CONCAT44(uStack_41c,uStack_420);
          local_458 = local_428;
          if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pplVar6);
          }
          FUN_140041b80(pplVar6,&local_458);
        }
        local_res18 = 0;
        if ((1 << ((byte)uStack_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        FUN_140e60910(1);
        local_408 = 0x22;
        puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a238);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar10);
        }
        *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
        *puVar10 = 0x4041800000000000;
        local_408 = 0x23;
        if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_468);
        }
        local_468 = 0;
        local_460 = 0;
        local_45c = 5;
        if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        local_248 = 0;
        local_240 = 0;
        local_23c = 5;
        puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a138);
        uVar26 = (ulonglong)ppuVar29 & 0xffffffffffffff00;
        FUN_140e87440(&local_288,DAT_1419ff178,0x80000000,&local_138,uVar26,
                      (ulonglong)ppuVar27 & 0xffffffffffffff00);
        uVar15 = (undefined4)(uVar26 >> 0x20);
        uStack_41c = local_31c;
        uStack_420 = local_320;
        if ((1 << ((byte)local_31c & 0x1f) & 0x46U) == 0) {
          local_428 = local_328;
        }
        else {
          FUN_1400419b0(&local_428,&local_328);
        }
        local_res18 = 0x400;
        FUN_140046500(&local_428,&local_138);
        uStack_450 = (longlong *)CONCAT44(uStack_41c,uStack_420);
        local_458 = local_428;
        if ((1 << ((byte)_local_3cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3d8);
        }
        FUN_140041b80(&local_3d8,&local_458);
        local_res18 = 0;
        if ((1 << ((byte)uStack_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_318 = &local_3d8;
        local_458 = _DAT_1419e8f90;
        uStack_450 = (longlong *)uRam00000001419e8f98;
        if ((1 << ((byte)_local_3bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3c8);
        }
        FUN_140041b80(&local_3c8,&local_458);
        local_310 = &local_3c8;
        puVar11 = (undefined8 *)FUN_140e79230(&local_248,2,&local_318);
        if (puVar11 != &local_3b8) {
          local_458 = (longlong *)*puVar11;
          uStack_450 = (longlong *)puVar11[1];
          if ((1 << ((byte)_local_3ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3b8);
          }
          FUN_140041b80(&local_3b8,&local_458);
        }
        local_308 = &local_3b8;
        local_458 = _DAT_1419e8fa0;
        uStack_450 = (longlong *)uRam00000001419e8fa8;
        if ((1 << ((byte)_local_39c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_3a8);
        }
        FUN_140041b80(local_3a8,&local_458);
        local_300 = local_3a8;
        FUN_140e609c0(local_res8);
        puVar11 = (undefined8 *)FUN_140e79090(&local_468,2,&local_308);
        if (puVar11 != puVar10) {
          local_458 = (longlong *)*puVar11;
          uStack_450 = (longlong *)puVar11[1];
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar10);
          }
          FUN_140041b80(puVar10,&local_458);
        }
        FUN_140e60910(1);
        local_408 = 0x24;
        if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_468);
        }
        local_468 = 0;
        local_460 = 0;
        local_45c = 5;
        puVar10 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a108);
        if (puVar10 != &local_3d8) {
          local_458 = (longlong *)*puVar10;
          uStack_450 = (longlong *)puVar10[1];
          if ((1 << ((byte)_local_3cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3d8);
          }
          FUN_140041b80(&local_3d8,&local_458);
        }
        local_318 = &local_3d8;
        FUN_140e645a0(&local_3f8,gml_Object_oBreakableCandle_Draw_0,local_res8);
        uStack_450 = (longlong *)CONCAT44(uStack_3ec,uStack_3f0);
        local_458 = local_3f8;
        if ((1 << ((byte)_local_3bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3c8);
        }
        FUN_140041b80(&local_3c8,&local_458);
        if ((1 << ((byte)uStack_3ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3f8);
        }
        local_310 = &local_3c8;
        ppuVar27 = &local_318;
        ppuVar29 = (undefined8 **)CONCAT44(uVar15,DAT_141a01f58);
        FUN_140e634e0(local_res8,local_res10,&local_468,2,ppuVar29,ppuVar27);
      }
      uVar13 = 0;
      local_408 = 0x28;
      if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_368);
      }
      local_35c = 0;
      local_368 = 0.0;
      bVar2 = true;
LAB_140851fc8:
      if (!bVar2) {
        local_408 = 0x28;
        uVar5 = local_35c & 0xffffff;
        if (uVar5 != 0) {
          if (uVar5 != 1) {
            if (uVar5 == 7) {
              local_368 = (double)CONCAT44(local_368._4_4_,local_368._0_4_ + 1);
            }
            else if (uVar5 == 10) {
              local_368 = (double)((longlong)local_368 + 1);
            }
            else {
              if (uVar5 == 0xd) {
                local_35c = 0;
                goto LAB_140852020;
              }
              FUN_140042910(&DAT_14172c3d8,&local_368,&local_368);
            }
            goto LAB_14085202a;
          }
          local_368 = (double)FUN_140e4b060(&local_368);
          local_35c = 0;
        }
LAB_140852020:
        local_368 = local_368 + 1.0;
      }
LAB_14085202a:
      bVar2 = false;
      plVar12 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a108);
      iVar4 = 0;
      if ((*(int *)((longlong)plVar12 + 0xc) == 2) && (*plVar12 != 0)) {
        iVar4 = *(int *)(*plVar12 + 0x24);
      }
      local_2d4 = 0;
      local_2e0 = (longlong *)(double)iVar4;
      iVar4 = FUN_140e851f0(&local_368,&local_2e0,DAT_141955260,1);
      if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2e0);
      }
      if (iVar4 != -2 && iVar4 < 0) {
        local_408 = 0x2a;
        plVar12 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a108);
        iVar4 = FUN_140e4a740(&local_368);
        if (((*(uint *)((longlong)plVar12 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar12, lVar1 != 0)
           ) {
          if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                          *(undefined4 *)(lVar1 + 0x24));
            plVar12 = (longlong *)0x0;
          }
          else {
            plVar12 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        if (plVar12 != &local_3e8) {
          local_448 = (longlong *)*plVar12;
          uStack_440 = (longlong *)plVar12[1];
          if ((1 << ((byte)local_3dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3e8);
          }
          FUN_140041b80(&local_3e8,&local_448);
        }
        local_408 = 0x2c;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a238);
        local_1bc = 0;
        local_1c8 = 0;
        iVar4 = FUN_140e851f0(uVar7,&local_1c8,DAT_141955260,1);
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        if (0 < iVar4) {
          local_408 = 0x2d;
          if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_468);
          }
          local_468 = 0;
          local_460 = 0;
          local_45c = 5;
          uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a238);
          uVar28 = (ulonglong)ppuVar27 & 0xffffffffffffff00;
          uVar26 = (ulonglong)ppuVar29 & 0xffffffffffffff00;
          FUN_140e87440(&local_3e8,DAT_141a0a7f8,0x80000000,&local_148,uVar26,uVar28);
          ppuVar27 = (undefined8 **)(uVar28 & 0xffffffffffffff00);
          FUN_140e87440(&local_3e8,DAT_141a0a278,0x80000000,&local_348,uVar26 & 0xffffffffffffff00,
                        ppuVar27);
          uStack_440 = (longlong *)CONCAT44(uStack_13c,uStack_140);
          local_448 = local_148;
          if ((1 << ((byte)_local_3cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3d8);
          }
          FUN_140041b80(&local_3d8,&local_448);
          local_318 = &local_3d8;
          local_1cc = 0;
          local_1d8 = 0;
          iVar4 = FUN_140e851f0(uVar7,&local_1d8,DAT_141955260,0);
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          if (iVar4 == 0) {
            uStack_1dc = 0;
            local_1e8 = (longlong *)0x0;
            pplVar6 = &local_1e8;
            uVar13 = uVar13 | 1;
          }
          else {
            puVar10 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a258);
            local_24c = *(undefined4 *)((longlong)puVar10 + 0xc);
            local_250 = *(undefined4 *)(puVar10 + 1);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) == 0) {
              local_258 = (longlong *)*puVar10;
            }
            else {
              FUN_1400419b0(&local_258,puVar10);
            }
            pplVar6 = &local_258;
            uVar13 = uVar13 | 0x802;
          }
          local_448 = *pplVar6;
          uStack_440 = pplVar6[1];
          local_res18 = uVar13;
          if ((1 << ((byte)_local_3bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3c8);
          }
          FUN_140041b80(&local_3c8,&local_448);
          if ((uVar13 & 2) != 0) {
            uVar13 = uVar13 & 0xfffffffd;
            local_res18 = uVar13;
            if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_258);
            }
          }
          if ((uVar13 & 1) != 0) {
            uVar13 = uVar13 & 0xfffffffe;
            local_res18 = uVar13;
            if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
          }
          local_310 = &local_3c8;
          uStack_440 = (longlong *)CONCAT44(uStack_33c,uStack_340);
          local_448 = local_348;
          if ((1 << ((byte)_local_3ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3b8);
          }
          FUN_140041b80(&local_3b8,&local_448);
          local_308 = &local_3b8;
          ppuVar29 = &local_318;
          puVar10 = (undefined8 *)
                    gml_Script_animation_end(local_res8,local_res10,&local_468,3,ppuVar29);
          if (puVar10 != &local_2c0) {
            local_448 = (longlong *)*puVar10;
            uStack_440 = (longlong *)puVar10[1];
            if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2c0);
            }
            FUN_140041b80(&local_2c0,&local_448);
          }
          FUN_140e87930(&local_3e8,DAT_141a0a7f8,0x80000000,&local_2c0);
        }
        local_408 = 0x2e;
        if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_468);
        }
        local_468 = 0;
        local_460 = 0;
        local_45c = 5;
        uVar28 = (ulonglong)ppuVar27 & 0xffffffffffffff00;
        uVar26 = (ulonglong)ppuVar29 & 0xffffffffffffff00;
        FUN_140e87440(&local_3e8,DAT_141a0a748,0x80000000,&local_f8,uVar26,uVar28);
        uVar26 = uVar26 & 0xffffffffffffff00;
        FUN_140e87440(&local_3e8,DAT_141a0a278,0x80000000,&local_348,uVar26,
                      uVar28 & 0xffffffffffffff00);
        uVar15 = (undefined4)(uVar26 >> 0x20);
        uStack_440 = (longlong *)CONCAT44(uStack_ec,uStack_f0);
        local_448 = local_f8;
        if ((1 << ((byte)_local_3cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3d8);
        }
        FUN_140041b80(&local_3d8,&local_448);
        local_318 = &local_3d8;
        local_448 = _DAT_1419e8f70;
        uStack_440 = (longlong *)lRam00000001419e8f78;
        if ((1 << ((byte)_local_3bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3c8);
        }
        FUN_140041b80(&local_3c8,&local_448);
        local_310 = &local_3c8;
        uStack_440 = (longlong *)CONCAT44(uStack_33c,uStack_340);
        local_448 = local_348;
        if ((1 << ((byte)_local_3ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3b8);
        }
        FUN_140041b80(&local_3b8,&local_448);
        local_308 = &local_3b8;
        ppuVar29 = &local_318;
        uVar26 = CONCAT44(uVar15,DAT_141a00c58);
        puVar10 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_468,3,uVar26,ppuVar29);
        if (puVar10 != &local_2d0) {
          local_448 = (longlong *)*puVar10;
          uStack_440 = (longlong *)puVar10[1];
          if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d0);
          }
          FUN_140041b80(&local_2d0,&local_448);
        }
        FUN_140e87930(&local_3e8,DAT_141a0a748,0x80000000,&local_2d0);
        local_408 = 0x2f;
        if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_468);
        }
        local_468 = 0;
        local_460 = 0;
        local_45c = 5;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a238);
        uVar28 = (ulonglong)ppuVar29 & 0xffffffffffffff00;
        uVar26 = uVar26 & 0xffffffffffffff00;
        FUN_140e87440(&local_3e8,DAT_141a0a858,0x80000000,&local_158,uVar26,uVar28);
        uVar26 = uVar26 & 0xffffffffffffff00;
        FUN_140e87440(&local_3e8,DAT_141a0a278,0x80000000,&local_348,uVar26,
                      uVar28 & 0xffffffffffffff00);
        uVar15 = (undefined4)(uVar26 >> 0x20);
        uStack_440 = (longlong *)CONCAT44(uStack_14c,uStack_150);
        local_448 = local_158;
        if ((1 << ((byte)_local_3cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3d8);
        }
        FUN_140041b80(&local_3d8,&local_448);
        local_318 = &local_3d8;
        local_19c = 0;
        local_1a8 = (longlong *)0x0;
        iVar4 = FUN_140e851f0(uVar7,&local_1a8,DAT_141955260,0);
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        if (iVar4 == 0) {
          uStack_1ec = 0;
          local_1f8 = (longlong *)0x3ff0000000000000;
          pplVar6 = &local_1f8;
          uVar13 = uVar13 | 4;
        }
        else {
          puVar10 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a138);
          uStack_42c = *(undefined4 *)((longlong)puVar10 + 0xc);
          uStack_430 = *(undefined4 *)(puVar10 + 1);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) == 0) {
            local_438 = (longlong *)*puVar10;
          }
          else {
            FUN_1400419b0(&local_438,puVar10);
          }
          pplVar6 = &local_438;
          uVar13 = uVar13 | 0x1008;
        }
        local_448 = *pplVar6;
        uStack_440 = pplVar6[1];
        local_res18 = uVar13;
        if ((1 << ((byte)_local_3bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3c8);
        }
        FUN_140041b80(&local_3c8,&local_448);
        if ((uVar13 & 8) != 0) {
          uVar13 = uVar13 & 0xfffffff7;
          local_res18 = uVar13;
          if ((1 << ((byte)uStack_42c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_438);
          }
        }
        if ((uVar13 & 4) != 0) {
          uVar13 = uVar13 & 0xfffffffb;
          local_res18 = uVar13;
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
        }
        local_310 = &local_3c8;
        uStack_41c = uStack_33c;
        uStack_420 = uStack_340;
        if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) == 0) {
          local_428 = local_348;
        }
        else {
          FUN_1400419b0(&local_428,&local_348);
        }
        local_res18 = uVar13 | 0x2000;
        local_1fc = 0;
        local_208 = (longlong *)0x4000000000000000;
        FUN_140046500(&local_428,&local_208);
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        uStack_440 = (longlong *)CONCAT44(uStack_41c,uStack_420);
        local_448 = local_428;
        if ((1 << ((byte)_local_3ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3b8);
        }
        FUN_140041b80(&local_3b8,&local_448);
        if ((1 << ((byte)uStack_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_308 = &local_3b8;
        puVar10 = (undefined8 *)
                  FUN_140e634e0(local_res8,local_res10,&local_468,3,CONCAT44(uVar15,DAT_141a00c58),
                                &local_318);
        if (puVar10 != &local_298) {
          local_448 = (longlong *)*puVar10;
          uStack_440 = (longlong *)puVar10[1];
          if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_298);
          }
          FUN_140041b80(&local_298,&local_448);
        }
        FUN_140e87930(&local_3e8,DAT_141a0a858,0x80000000,&local_298);
        local_408 = 0x30;
        if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_468);
        }
        local_468 = 0;
        local_460 = 0;
        local_45c = 5;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a238);
        plVar12 = local_res8;
        uVar26 = local_res10;
        FUN_140e87170(&local_3e8,DAT_141a0a818,0x80000000,&local_e8,local_res8,local_res10);
        uVar28 = (ulonglong)plVar12 & 0xffffffffffffff00;
        FUN_140e87440(&local_3e8,DAT_141a0a278,0x80000000,&local_348,uVar28,
                      uVar26 & 0xffffffffffffff00);
        uVar15 = (undefined4)(uVar28 >> 0x20);
        uStack_440 = (longlong *)CONCAT44(uStack_dc,uStack_e0);
        local_448 = local_e8;
        if ((1 << ((byte)_local_3cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3d8);
        }
        FUN_140041b80(&local_3d8,&local_448);
        local_318 = &local_3d8;
        local_20c = 0;
        local_218 = (longlong *)0x0;
        iVar4 = FUN_140e851f0(uVar7,&local_218,DAT_141955260,0);
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        if (iVar4 == 0) {
          uStack_22c = 0;
          local_238 = (longlong *)0x3ff0000000000000;
          pplVar6 = &local_238;
          uVar13 = uVar13 | 0x10;
        }
        else {
          local_21c = 0;
          local_228 = (longlong *)0x4004000000000000;
          pplVar6 = &local_228;
          uVar13 = uVar13 | 0x20;
        }
        local_448 = *pplVar6;
        uStack_440 = pplVar6[1];
        local_res18 = uVar13;
        if ((1 << ((byte)_local_3bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3c8);
        }
        FUN_140041b80(&local_3c8,&local_448);
        if ((uVar13 & 0x20) != 0) {
          uVar13 = uVar13 & 0xffffffdf;
          local_res18 = uVar13;
          if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
        }
        if ((uVar13 & 0x10) != 0) {
          uVar13 = uVar13 & 0xffffffef;
          local_res18 = uVar13;
          if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
        }
        local_310 = &local_3c8;
        uStack_34c = uStack_33c;
        uStack_350 = uStack_340;
        if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) == 0) {
          local_358 = local_348;
        }
        else {
          FUN_1400419b0(&local_358,&local_348);
        }
        local_res18 = uVar13 | 0x4000;
        local_1ac = 0;
        local_1b8 = (longlong *)0x4000000000000000;
        FUN_140046500(&local_358,&local_1b8);
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        uStack_440 = (longlong *)CONCAT44(uStack_34c,uStack_350);
        local_448 = local_358;
        if ((1 << ((byte)_local_3ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3b8);
        }
        FUN_140041b80(&local_3b8,&local_448);
        local_res18 = uVar13;
        if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_358);
        }
        local_308 = &local_3b8;
        ppuVar27 = &local_318;
        ppuVar29 = (undefined8 **)CONCAT44(uVar15,DAT_141a00c58);
        puVar10 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_468,3,ppuVar29,ppuVar27)
        ;
        if (puVar10 != &local_198) {
          local_448 = (longlong *)*puVar10;
          uStack_440 = (longlong *)puVar10[1];
          if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          FUN_140041b80(&local_198,&local_448);
        }
        FUN_140e86c30(&local_3e8,DAT_141a0a818,0x80000000,&local_198);
        local_408 = 0x32;
        local_bc = 0;
        local_c8 = 0;
        iVar4 = FUN_140e851f0(uVar7,&local_c8,DAT_141955260,0);
        if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        if (iVar4 == 0) {
          (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a238);
          ppuVar27 = (undefined8 **)((ulonglong)ppuVar27 & 0xffffffffffffff00);
          ppuVar29 = (undefined8 **)((ulonglong)ppuVar29 & 0xffffffffffffff00);
          FUN_140e87440(&local_3e8,DAT_141a0a858,0x80000000,&local_158,ppuVar29,ppuVar27);
          uStack_3ec = 0;
          local_3f8 = (longlong *)0x3ff199999999999a;
          iVar4 = FUN_140e851f0(&local_158,&local_3f8,DAT_141955260,1);
          if ((1 << ((byte)uStack_3ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3f8);
          }
          if (iVar4 != -2 && iVar4 < 1) {
            ppuVar27 = (undefined8 **)((ulonglong)ppuVar27 & 0xffffffffffffff00);
            ppuVar29 = (undefined8 **)((ulonglong)ppuVar29 & 0xffffffffffffff00);
            FUN_140e87440(&local_3e8,DAT_141a0a188,0x80000000,&local_d8,ppuVar29,ppuVar27);
            cVar3 = FUN_140e491e0(&local_d8);
            if (cVar3 == '\0') {
              local_408 = 0x34;
              if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_298);
              }
              local_28c = 0;
              local_298 = 0x3fc999999999999a;
              FUN_140e87930(&local_3e8,DAT_141a0a858,0x80000000,&local_298);
              local_408 = 0x35;
              if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2d0);
              }
              local_2c4 = 0;
              local_2d0 = 0x4000000000000000;
              FUN_140e87930(&local_3e8,DAT_141a0a748,0x80000000,&local_2d0);
              local_408 = 0x36;
              local_458 = (longlong *)0x3ff0000000000000;
              uVar15 = SUB84(uStack_450,0);
              uStack_450 = (longlong *)CONCAT44(0xd,uVar15);
              local_448 = (longlong *)0x3ff0000000000000;
              uStack_440 = (longlong *)CONCAT44(0xd,uVar15);
              if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_168);
              }
              FUN_140041b80(&local_168,&local_448);
              FUN_140e87930(&local_3e8,DAT_141a0a188,0x80000000,&local_168);
              local_408 = 0x37;
              if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2c0);
              }
              local_2b4 = 0;
              local_2c0 = 0;
              FUN_140e87930(&local_3e8,DAT_141a0a7f8,0x80000000,&local_2c0);
              local_408 = 0x39;
              puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a1e8);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar10);
              }
              *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
              *puVar10 = 0xc040000000000000;
            }
          }
        }
        goto LAB_140851fc8;
      }
      local_408 = 0x41;
      if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_468);
      }
      local_468 = 0;
      local_460 = 0;
      local_45c = 5;
      uStack_3ec = 6;
      local_3f8 = local_res8;
      uVar28 = (ulonglong)ppuVar27 & 0xffffffffffffff00;
      uVar26 = (ulonglong)ppuVar29 & 0xffffffffffffff00;
      FUN_140e87440(&local_3f8,DAT_1419fe0e8,0x80000000,&local_2a8,uVar26,uVar28);
      if ((1 << ((byte)uStack_3ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3f8);
      }
      uStack_3ec = 6;
      local_3f8 = local_res8;
      FUN_140e87440(&local_3f8,DAT_1419fe158,0x80000000,&local_338,uVar26 & 0xffffffffffffff00,
                    uVar28 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_3ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3f8);
      }
      uStack_440 = (longlong *)CONCAT44(uStack_29c,uStack_2a0);
      local_448 = local_2a8;
      if ((1 << (local_3cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3d8);
      }
      FUN_140041b80(&local_3d8,&local_448);
      local_318 = &local_3d8;
      uStack_34c = uStack_32c;
      uStack_350 = uStack_330;
      if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) == 0) {
        local_358 = local_338;
      }
      else {
        FUN_1400419b0(&local_358,&local_338);
      }
      local_res18 = uVar13 | 0x8000;
      uStack_3ec = 7;
      local_3f8 = (longlong *)CONCAT44(local_3f8._4_4_,4);
      FUN_1400462a0(&local_358,&local_3f8);
      if ((1 << ((byte)uStack_3ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3f8);
      }
      uStack_440 = (longlong *)CONCAT44(uStack_34c,uStack_350);
      local_448 = local_358;
      if ((1 << (local_3bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3c8);
      }
      FUN_140041b80(&local_3c8,&local_448);
      if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      local_310 = &local_3c8;
      uStack_42c = 0;
      local_438 = (longlong *)0x4050000000000000;
      local_res18 = uVar13 | 0x10000;
      FUN_1400460e0(&local_438,puVar8);
      uStack_440 = (longlong *)CONCAT44(uStack_42c,uStack_430);
      local_448 = local_438;
      if ((1 << (local_3ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3b8);
      }
      FUN_140041b80(&local_3b8,&local_448);
      if ((1 << ((byte)uStack_42c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_438);
      }
      local_308 = &local_3b8;
      uStack_450 = (longlong *)CONCAT44(0xf,(undefined4)uStack_450);
      local_458 = (longlong *)0x100000100000021;
      local_448 = (longlong *)0x100000100000021;
      uStack_440 = uStack_450;
      if ((1 << (local_39c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_3a8);
      }
      FUN_140041b80(local_3a8,&local_448);
      local_300 = local_3a8;
      local_448 = DAT_1419df7b0;
      uStack_440 = (longlong *)_DAT_1419df7b8;
      if ((1 << (local_38c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_398);
      }
      FUN_140041b80(local_398,&local_448);
      local_2f8 = local_398;
      gml_Script____struct___139_light_flash_create_lighting_system
                (local_res8,local_res10,&local_468,5,&local_318);
      local_408 = 0x42;
      if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_468);
      }
      local_468 = 0;
      local_460 = 0;
      local_45c = 5;
      puVar8 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a238);
      puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a238);
      if (puVar8 != &local_3d8) {
        local_448 = (longlong *)*puVar8;
        uStack_440 = (longlong *)puVar8[1];
        if ((1 << (local_3cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3d8);
        }
        FUN_140041b80(&local_3d8,&local_448);
      }
      local_318 = &local_3d8;
      local_448 = _DAT_141dc6a90;
      uStack_440 = (longlong *)uRam0000000141dc6a98;
      if ((1 << (local_3bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3c8);
      }
      FUN_140041b80(&local_3c8,&local_448);
      local_310 = &local_3c8;
      local_448 = _DAT_1419e8f70;
      uStack_440 = (longlong *)lRam00000001419e8f78;
      if ((1 << (local_3ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3b8);
      }
      FUN_140041b80(&local_3b8,&local_448);
      local_308 = &local_3b8;
      FUN_140e609c0(local_res8);
      puVar8 = (undefined8 *)gml_Script_arc(local_res8,local_res10,&local_468,3,&local_318);
      if (puVar8 != puVar10) {
        local_448 = (longlong *)*puVar8;
        uStack_440 = (longlong *)puVar8[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar10);
        }
        FUN_140041b80(puVar10,&local_448);
      }
      FUN_140e60910(1);
      if (local_a8 != 0) {
        FUN_140e4cd60();
      }
    }
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_468);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d0);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c0);
  }
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_3dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3e8);
  }
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  if ((1 << (bVar14 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_3d8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_418;
  return;
}

