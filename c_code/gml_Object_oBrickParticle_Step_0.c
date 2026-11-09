// gml_Object_oBrickParticle_Step_0 @ 0x140864c60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oBrickParticle_Step_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  ulonglong uVar14;
  undefined8 **ppuVar15;
  ulonglong uVar16;
  undefined1 **ppuVar17;
  undefined8 local_398;
  undefined4 uStack_390;
  uint uStack_38c;
  longlong *local_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 local_378;
  undefined4 local_370;
  undefined4 local_36c;
  undefined8 local_368;
  undefined4 uStack_360;
  uint uStack_35c;
  double local_358;
  undefined4 local_350;
  uint local_34c;
  double local_348;
  undefined4 uStack_340;
  uint uStack_33c;
  double local_338;
  undefined4 uStack_330;
  uint uStack_32c;
  double local_328;
  uint local_31c;
  double local_318;
  uint local_30c;
  undefined8 local_308;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  uint uStack_2ec;
  undefined8 local_2e8;
  char *local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c4;
  undefined8 local_2c0;
  undefined4 local_2b4;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [12];
  byte local_25c;
  undefined8 local_258;
  byte local_24c;
  undefined1 local_248 [12];
  byte local_23c;
  undefined1 local_238 [12];
  byte local_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  double local_218;
  uint local_20c;
  double local_208;
  uint local_1fc;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  undefined8 *local_1c0;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  longlong *local_1a8;
  undefined4 local_19c;
  longlong *local_198;
  undefined4 local_18c;
  longlong *local_188;
  undefined4 local_17c;
  undefined4 local_178 [3];
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  longlong *local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [16];
  longlong local_108;
  undefined1 local_f8 [16];
  longlong local_e8;
  
  local_res18 = 0;
  local_2e0 = "gml_Script_anon@76@gml_Object_oBreakableRottenPot_Create_0";
  local_2e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2e8;
  local_2d8 = 7;
  uVar8 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_2a8,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_32c = 0xffffff;
  local_338 = 0.0;
  local_34c = 0xffffff;
  local_358 = 0.0;
  local_2fc = 0xffffff;
  local_308 = 0;
  uStack_1ec = 0xffffff;
  local_1f8 = 0;
  local_2b4 = 0xffffff;
  local_2c0 = 0;
  local_2c4 = 0xffffff;
  local_2d0 = 0;
  local_1fc = 0xffffff;
  local_208 = 0.0;
  local_20c = 0xffffff;
  local_218 = 0.0;
  local_30c = 0xffffff;
  local_318 = 0.0;
  local_31c = 0xffffff;
  local_328 = 0.0;
  local_36c = 0;
  local_378 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2d8 = 9;
  uStack_37c = 0xf;
  local_388 = (longlong *)0x10000020000012c;
  local_398 = 7.291135926268499e-304;
  uStack_390 = uStack_380;
  uStack_38c = 0xf;
  if ((1 << (local_2a8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2a8);
  }
  FUN_140041b80(local_2a8,&local_398);
  local_1e8 = local_2a8;
  uStack_37c = 0xf;
  local_388 = (longlong *)0x10000020000012d;
  local_398 = 7.2911359262685e-304;
  uStack_390 = uStack_380;
  uStack_38c = 0xf;
  if ((1 << (local_298[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_298);
  }
  FUN_140041b80(local_298,&local_398);
  local_1e0 = local_298;
  uStack_37c = 0xf;
  local_388 = (longlong *)0x10000020000012e;
  local_398 = 7.291135926268502e-304;
  uStack_390 = uStack_380;
  uStack_38c = 0xf;
  if ((1 << (local_288[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_288);
  }
  FUN_140041b80(local_288,&local_398);
  local_1d8 = local_288;
  uStack_37c = 0xf;
  local_388 = (longlong *)0x10000020000012f;
  local_398 = 7.291135926268504e-304;
  uStack_390 = uStack_380;
  uStack_38c = 0xf;
  if ((1 << (local_278[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_398);
  local_1d0 = local_278;
  uStack_37c = 0xf;
  local_388 = (longlong *)0x100000200000130;
  local_398 = 7.291135926268505e-304;
  uStack_390 = uStack_380;
  uStack_38c = 0xf;
  if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  FUN_140041b80(local_268,&local_398);
  local_1c8 = local_268;
  puVar4 = (undefined8 *)FUN_140e78db0(&local_138,5,&local_1e8);
  if (puVar4 != &local_258) {
    local_398 = (double)*puVar4;
    uStack_390 = *(undefined4 *)(puVar4 + 1);
    uStack_38c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_398);
  }
  local_1c0 = &local_258;
  local_398 = (double)CONCAT44(uRam00000001419e9164,_DAT_1419e9160);
  uStack_390 = uRam00000001419e9168;
  uStack_38c = uRam00000001419e916c;
  if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_248);
  }
  FUN_140041b80(local_248,&local_398);
  local_1b8 = local_248;
  local_398 = (double)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_390 = uRam00000001419df7a8;
  uStack_38c = uRam00000001419df7ac;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_398);
  local_1b0 = local_238;
  ppuVar15 = &local_1c0;
  uVar14 = CONCAT44(uVar8,DAT_141a0a2e8);
  FUN_140e634e0(local_res8,local_res10,&local_378,3,uVar14,ppuVar15);
  local_2d8 = 0xb;
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_378 = 0;
  local_370 = 0;
  local_36c = 5;
  uStack_35c = 6;
  local_368 = local_res8;
  uVar16 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
  uVar14 = uVar14 & 0xffffffffffffff00;
  FUN_140e87440(&local_368,DAT_1419fe0e8,0x80000000,&local_338,uVar14,uVar16);
  if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  uStack_35c = 6;
  local_368 = local_res8;
  uVar14 = uVar14 & 0xffffffffffffff00;
  FUN_140e87440(&local_368,DAT_1419fe158,0x80000000,&local_358,uVar14,uVar16 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar14 >> 0x20);
  if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  local_398 = local_338;
  uStack_390 = uStack_330;
  uStack_38c = uStack_32c;
  if ((1 << (local_2a8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2a8);
  }
  FUN_140041b80(local_2a8,&local_398);
  local_1e8 = local_2a8;
  uStack_33c = local_34c;
  uStack_340 = local_350;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) == 0) {
    local_348 = local_358;
  }
  else {
    FUN_1400419b0(&local_348,&local_358);
  }
  local_res18 = 1;
  uStack_35c = 7;
  local_368 = (longlong *)CONCAT44(local_368._4_4_,4);
  FUN_1400462a0(&local_348,&local_368);
  if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  local_398 = local_348;
  uStack_390 = uStack_340;
  uStack_38c = uStack_33c;
  if ((1 << (local_298[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_298);
  }
  FUN_140041b80(local_298,&local_398);
  local_res18 = 0;
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  local_1e0 = local_298;
  local_398 = (double)CONCAT44(uRam0000000141dd70cc,_DAT_141dd70c8);
  uStack_390 = uRam0000000141dd70d0;
  uStack_38c = DAT_141dd70d4;
  if ((1 << (local_288[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_288);
  }
  FUN_140041b80(local_288,&local_398);
  local_1d8 = local_288;
  uStack_37c = 0xf;
  local_388 = (longlong *)0x10000000000012d;
  local_398 = 7.291122019556885e-304;
  uStack_390 = uStack_380;
  uStack_38c = 0xf;
  if ((1 << (local_278[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_398);
  local_1d0 = local_278;
  ppuVar17 = &local_1e8;
  uVar14 = CONCAT44(uVar8,DAT_141a0a7c8);
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_378,4,uVar14,ppuVar17);
  iVar2 = FUN_140e63cb0(local_118,&local_res8,&local_res10,uVar5);
  if (0 < iVar2) {
    do {
      local_2d8 = 0xc;
      uStack_37c = 0xf;
      local_388 = (longlong *)0x100000100000266;
      local_398 = 7.2911289729132e-304;
      uStack_390 = uStack_380;
      uStack_38c = 0xf;
      if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_308);
      }
      FUN_140041b80(&local_308,&local_398);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_308);
      cVar1 = FUN_140e643f0(local_118,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_118,&local_res8,&local_res10);
  iVar2 = 5;
  do {
    iVar2 = iVar2 + -1;
    local_2d8 = 0x10;
    if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_378);
    }
    local_378 = 0;
    local_370 = 0;
    local_36c = 5;
    local_19c = 6;
    local_1a8 = local_res8;
    uVar16 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_338,uVar14,uVar16);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_18c = 6;
    local_198 = local_res8;
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_198,DAT_1419fe158,0x80000000,&local_358,uVar14,uVar16 & 0xffffffffffffff00)
    ;
    uVar8 = (undefined4)(uVar14 >> 0x20);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    uVar7 = FUN_140e794b0(0,0);
    uStack_21c = uStack_32c;
    uStack_220 = uStack_330;
    if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) == 0) {
      local_228 = local_338;
    }
    else {
      FUN_1400419b0(&local_228,&local_338);
    }
    local_res18 = 2;
    FUN_140162c50(&local_228,uVar7);
    local_2f8 = (undefined4)local_228;
    uStack_2f4 = local_228._4_4_;
    uStack_2f0 = uStack_220;
    uStack_2ec = uStack_21c;
    if ((1 << (local_2a8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2a8);
    }
    FUN_140041b80(local_2a8,&local_2f8);
    local_res18 = 0;
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_1e8 = local_2a8;
    uVar7 = FUN_140e794b0(0,0);
    uStack_35c = local_34c;
    uStack_360 = local_350;
    if ((1 << ((byte)local_34c & 0x1f) & 0x46U) == 0) {
      local_368 = (longlong *)local_358;
    }
    else {
      FUN_1400419b0(&local_368,&local_358);
    }
    local_res18 = 4;
    FUN_140162c50(&local_368,uVar7);
    local_2f8 = (undefined4)local_368;
    uStack_2f4 = local_368._4_4_;
    uStack_2f0 = uStack_360;
    uStack_2ec = uStack_35c;
    if ((1 << (local_298[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_298);
    }
    FUN_140041b80(local_298,&local_2f8);
    local_res18 = 0;
    if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    local_1e0 = local_298;
    local_2f8 = _DAT_141dd70d8;
    uStack_2f4 = uRam0000000141dd70dc;
    uStack_2f0 = uRam0000000141dd70e0;
    uStack_2ec = DAT_141dd70e4;
    if ((1 << (local_288[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_288);
    }
    FUN_140041b80(local_288,&local_2f8);
    local_1d8 = local_288;
    uStack_11c = 0xf;
    local_128 = 0x100000000000041;
    local_2f8 = 0x41;
    uStack_2f4 = 0x1000000;
    uStack_2f0 = uStack_120;
    uStack_2ec = 0xf;
    if ((1 << (local_278[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_278);
    }
    FUN_140041b80(local_278,&local_2f8);
    local_1d0 = local_278;
    ppuVar17 = &local_1e8;
    uVar14 = CONCAT44(uVar8,DAT_141a0a7c8);
    uVar5 = FUN_140e634e0(local_res8,local_res10,&local_378,4,uVar14,ppuVar17);
    iVar3 = FUN_140e63cb0(local_f8,&local_res8,&local_res10,uVar5);
    if (0 < iVar3) {
      do {
        local_2d8 = 0x11;
        uStack_38c = 0xf;
        local_398 = 7.291128972913198e-304;
        local_2f8 = 0x265;
        uStack_2f4 = 0x1000001;
        uStack_2f0 = uStack_390;
        uStack_2ec = 0xf;
        if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_308);
        }
        FUN_140041b80(&local_308,&local_2f8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_308);
        local_2d8 = 0x13;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        local_17c = 6;
        local_188 = local_res8;
        uVar14 = uVar14 & 0xffffffffffffff00;
        FUN_140e87440(&local_188,DAT_141a0a728,0x80000000,&local_1f8,uVar14,
                      (ulonglong)ppuVar17 & 0xffffffffffffff00);
        uVar8 = (undefined4)(uVar14 >> 0x20);
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_2f8 = (undefined4)local_1f8;
        uStack_2f4 = local_1f8._4_4_;
        uStack_2f0 = uStack_1f0;
        uStack_2ec = uStack_1ec;
        if ((1 << (local_2a8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_2a8);
        }
        FUN_140041b80(local_2a8,&local_2f8);
        local_1e8 = local_2a8;
        ppuVar17 = &local_1e8;
        uVar14 = CONCAT44(uVar8,DAT_141a049b8);
        pdVar6 = (double *)FUN_140e634e0(local_res8,local_res10,&local_378,1,uVar14,ppuVar17);
        uStack_33c = *(uint *)((longlong)pdVar6 + 0xc);
        uStack_340 = *(undefined4 *)(pdVar6 + 1);
        if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) == 0) {
          local_348 = *pdVar6;
        }
        else {
          FUN_1400419b0(&local_348,pdVar6);
        }
        local_res18 = 8;
        local_16c = 7;
        local_178[0] = 1;
        FUN_1400462a0(&local_348,local_178);
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_178);
        }
        if ((uStack_33c & 0xffffff) == 0) {
          uVar8 = SUB84(local_348,0);
        }
        else {
          uVar8 = FUN_140e4b060(&local_348);
        }
        uVar5 = FUN_140e79480(uVar8);
        if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c0);
        }
        local_2b4 = 0;
        local_res18 = 0;
        local_2c0 = uVar5;
        if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_348);
        }
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_2c0);
        local_2d8 = 0x14;
        if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d0);
        }
        local_2c4 = 0;
        local_2d0 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_2d0);
        local_2d8 = 0x16;
        local_15c = 6;
        local_168 = local_res10;
        uVar16 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
        uVar14 = uVar14 & 0xffffffffffffff00;
        FUN_140e87440(&local_168,DAT_1419fe0e8,0x80000000,&local_208,uVar14,uVar16);
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        local_14c = 6;
        local_158 = local_res10;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar14 = uVar14 & 0xffffffffffffff00;
        FUN_140e87440(&local_158,DAT_1419fe158,0x80000000,&local_218,uVar14,uVar16);
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_13c = 6;
        local_148 = local_res8;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar14 = uVar14 & 0xffffffffffffff00;
        FUN_140e87440(&local_148,DAT_1419fe0e8,0x80000000,&local_338,uVar14,uVar16);
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        uStack_37c = 6;
        local_388 = local_res8;
        ppuVar17 = (undefined1 **)(uVar16 & 0xffffffffffffff00);
        uVar14 = uVar14 & 0xffffffffffffff00;
        FUN_140e87440(&local_388,DAT_1419fe158,0x80000000,&local_358,uVar14,ppuVar17);
        if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_388);
        }
        dVar12 = local_358;
        if ((local_34c & 0xffffff) != 0) {
          dVar12 = (double)FUN_140e4b060(&local_358);
        }
        dVar13 = local_338;
        if ((uStack_32c & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_338);
        }
        dVar10 = local_218;
        if ((local_20c & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_218);
        }
        dVar11 = local_208;
        if ((local_1fc & 0xffffff) != 0) {
          dVar11 = (double)FUN_140e4b060(&local_208);
        }
        fVar9 = (float)FUN_140e793d0((float)dVar11,(float)dVar10,(float)dVar13,(float)dVar12);
        dVar12 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        local_30c = 0;
        local_2d8 = 0x17;
        local_318 = dVar12 + (double)fVar9;
        dVar12 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_328);
        }
        local_31c = 0;
        local_2d8 = 0x18;
        local_328 = dVar12;
        pdVar6 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        dVar12 = local_318;
        if ((local_30c & 0xffffff) != 0) {
          dVar12 = (double)FUN_140e4b060(&local_318);
        }
        dVar13 = local_328;
        if ((local_31c & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_328);
        }
        fVar9 = (float)FUN_140e78f90((float)dVar13,(float)dVar12);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar6);
        }
        *(undefined4 *)((longlong)pdVar6 + 0xc) = 0;
        *pdVar6 = (double)fVar9;
        local_2d8 = 0x19;
        pdVar6 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        dVar12 = local_318;
        if ((local_30c & 0xffffff) != 0) {
          dVar12 = (double)FUN_140e4b060(&local_318);
        }
        dVar13 = local_328;
        if ((local_31c & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_328);
        }
        fVar9 = (float)FUN_140e79010((float)dVar13,(float)dVar12);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar6);
        }
        *(undefined4 *)((longlong)pdVar6 + 0xc) = 0;
        *pdVar6 = (double)fVar9;
        cVar1 = FUN_140e643f0(local_f8,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_f8,&local_res8,&local_res10);
    if (local_e8 != 0) {
      FUN_140e4cd60();
    }
  } while (0 < iVar2);
  if (local_108 != 0) {
    FUN_140e4cd60();
    local_108 = 0;
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d0);
  }
  if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c0);
  }
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  _eh_vector_destructor_iterator_(local_2a8,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_2e8;
  return param_3;
}

