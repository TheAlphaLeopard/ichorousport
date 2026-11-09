// gml_Script_steam_achievment_set @ 0x1405d14b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_steam_achievment_set(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  code *pcVar9;
  undefined4 uVar11;
  undefined8 uVar10;
  ulonglong in_stack_fffffffffffffc80;
  undefined1 **ppuVar12;
  ulonglong uVar13;
  undefined8 local_378;
  uint uStack_370;
  uint uStack_36c;
  uint local_368;
  uint uStack_364;
  uint uStack_360;
  uint uStack_35c;
  undefined8 local_358;
  uint uStack_350;
  uint uStack_34c;
  undefined4 local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined4 local_334;
  uint local_330 [3];
  undefined4 local_324;
  uint local_318;
  uint uStack_314;
  uint uStack_310;
  uint uStack_30c;
  undefined8 local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined8 local_2f8;
  char *local_2f0;
  undefined4 local_2e8;
  uint local_2d8;
  uint uStack_2d4;
  uint uStack_2d0;
  uint uStack_2cc;
  undefined1 local_2c8 [12];
  byte local_2bc;
  undefined1 local_2b8 [12];
  byte local_2ac;
  undefined1 local_2a8 [12];
  byte local_29c;
  undefined1 local_298 [12];
  byte local_28c;
  undefined8 local_288;
  byte local_27c;
  undefined1 *local_278;
  undefined1 *local_270;
  undefined1 *local_268;
  undefined1 *local_260;
  undefined8 *local_258;
  uint local_248;
  uint uStack_244;
  uint uStack_240;
  uint uStack_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined1 local_190 [16];
  longlong local_180;
  undefined1 local_170 [16];
  longlong local_160;
  undefined1 local_150 [16];
  longlong local_140;
  undefined1 local_130 [16];
  longlong local_120;
  undefined1 local_110 [16];
  longlong local_100;
  undefined1 local_f0 [16];
  longlong local_e0;
  undefined1 local_d0 [16];
  longlong local_c0;
  undefined1 local_b0 [16];
  longlong local_a0;
  undefined1 local_90 [16];
  longlong local_80;
  undefined1 local_70 [16];
  longlong local_60;
  
  local_348 = 0;
  local_2f0 = "gml_Script_DefineStatus";
  local_2f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2f8;
  local_2e8 = 0x61;
  pcVar9 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_2c8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_1bc = 0xffffff;
  local_1c8 = 0;
  local_324 = 0xffffff;
  local_330[0] = 0;
  local_330[1] = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ff1f8);
  uStack_1ac = 0xffffff;
  local_1b8 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  uStack_1cc = 0xffffff;
  local_1d8 = 0;
  uStack_1dc = 0xffffff;
  local_1e8 = 0;
  uStack_1ec = 0xffffff;
  local_1f8 = 0;
  uStack_1fc = 0xffffff;
  local_208 = 0;
  uStack_20c = 0xffffff;
  local_218 = 0;
  uStack_21c = 0xffffff;
  local_228 = 0;
  uStack_22c = 0xffffff;
  local_238 = 0;
  local_334 = 0;
  local_340 = 0;
  local_2fc = 0;
  local_308 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2e8 = 99;
  uVar8 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  local_198 = uVar4;
  FUN_140e87440(uVar3,DAT_1419f59a8,0x80000000,&local_1c8,uVar8,
                in_stack_fffffffffffffc80 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar8 >> 0x20);
  local_378 = CONCAT44(uRam0000000141dc6744,_DAT_141dc6740);
  uStack_370 = uRam0000000141dc6748;
  uStack_36c = uRam0000000141dc674c;
  if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2c8);
  }
  FUN_140041b80(local_2c8,&local_378);
  local_278 = local_2c8;
  local_318 = DAT_1419ff168 & 0xffffff;
  uStack_314 = (int)(DAT_1419ff168 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_314 == 0xf) {
    uStack_314 = 0x4000004;
  }
  else {
    uStack_314 = uStack_314 | 0x1000000;
  }
  uStack_36c = 0xf;
  local_378 = CONCAT44(uStack_314,DAT_1419ff168) & 0xffffffff00ffffff;
  uStack_310 = uStack_370;
  uStack_30c = 0xf;
  if ((1 << ((byte)_local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2b8);
  }
  FUN_140041b80(local_2b8,&local_318);
  local_270 = local_2b8;
  local_378 = local_1c8;
  uStack_370 = uStack_1c0;
  uStack_36c = uStack_1bc;
  if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2a8);
  }
  FUN_140041b80(local_2a8,&local_378);
  uStack_36c = 0xf;
  local_378 = 0x1000001000002f0;
  local_318 = 0x2f0;
  uStack_314 = 0x1000001;
  uStack_310 = uStack_370;
  uStack_30c = 0xf;
  local_268 = local_2a8;
  if ((1 << ((byte)_local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_298);
  }
  FUN_140041b80(local_298,&local_318);
  local_260 = local_298;
  uVar10 = CONCAT44(uVar11,DAT_141a0a0d8);
  puVar5 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_308,1,uVar10,&local_278);
  uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
  if (puVar5 != &local_288) {
    local_378 = *puVar5;
    uStack_370 = *(uint *)(puVar5 + 1);
    uStack_36c = *(uint *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_378);
  }
  local_258 = &local_288;
  ppuVar12 = &local_270;
  uVar8 = CONCAT44(uVar11,DAT_1419fd6d8);
  puVar6 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_340,4,uVar8,ppuVar12);
  if (puVar6 != local_330) {
    local_378 = *(ulonglong *)puVar6;
    uStack_370 = puVar6[2];
    uStack_36c = puVar6[3];
    if ((1 << ((byte)local_324 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_330);
    }
    FUN_140041b80(local_330,&local_378);
  }
  local_2e8 = 100;
  iVar2 = FUN_140e63cb0(local_70,&local_res8,&local_res10,local_330);
  if (0 < iVar2) {
    do {
      local_2e8 = 0x65;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a03598);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0x4024000000000000;
      local_2e8 = 0x67;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff358);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_358,gml_Script_anon_2155_DefineStatus_STATUSINIT,local_res8);
      if (&local_358 != puVar5) {
        local_378 = local_358;
        uStack_370 = uStack_350;
        uStack_36c = uStack_34c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_378);
      }
      if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      FUN_140e60910(1);
      local_2e8 = 0x6b;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff398);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_248,gml_Script_anon_2238_DefineStatus_STATUSINIT,local_res8);
      if (&local_248 != puVar6) {
        local_378 = CONCAT44(uStack_244,local_248);
        uStack_370 = uStack_240;
        uStack_36c = uStack_23c;
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_378);
      }
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      FUN_140e60910(1);
      local_2e8 = 0x73;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff2c8);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_2d8,gml_Script_anon_2464_DefineStatus_STATUSINIT,local_res8);
      if (&local_2d8 != puVar6) {
        local_378 = CONCAT44(uStack_2d4,local_2d8);
        uStack_370 = uStack_2d0;
        uStack_36c = uStack_2cc;
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_378);
      }
      if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      FUN_140e60910(1);
      local_2e8 = 0x77;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff278);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_318,gml_Script_anon_2812_DefineStatus_STATUSINIT,local_res8);
      if (&local_318 != puVar6) {
        local_378 = CONCAT44(uStack_314,local_318);
        uStack_370 = uStack_310;
        uStack_36c = uStack_30c;
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_378);
      }
      if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      FUN_140e60910(1);
      cVar1 = FUN_140e643f0(local_70,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_70,&local_res8,&local_res10);
  local_2e8 = 0x7c;
  uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419f59a8,0x80000000,&local_1c8,uVar8 & 0xffffffffffffff00,uVar13);
  puVar6 = local_330;
  FUN_140e98ef0(local_res8,local_res10,uVar4,&local_1c8,puVar6);
  local_2e8 = 0x7e;
  if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_340);
  }
  local_340 = 0;
  local_338 = 0;
  local_334 = 5;
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_308 = 0;
  local_300 = 0;
  local_2fc = 5;
  uVar8 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_141a1f540,0x80000000,&local_1b8,uVar8,uVar13 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar8 >> 0x20);
  local_378 = CONCAT44(uRam0000000141dc6744,_DAT_141dc6740);
  uStack_370 = uRam0000000141dc6748;
  uStack_36c = uRam0000000141dc674c;
  if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2c8);
  }
  FUN_140041b80(local_2c8,&local_378);
  local_278 = local_2c8;
  local_318 = DAT_1419ff168 & 0xffffff;
  uStack_314 = (int)(DAT_1419ff168 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_314 == 0xf) {
    uStack_314 = 0x4000004;
  }
  else {
    uStack_314 = uStack_314 | 0x1000000;
  }
  uStack_36c = 0xf;
  local_378 = CONCAT44(uStack_314,DAT_1419ff168) & 0xffffffff00ffffff;
  uStack_310 = uStack_370;
  uStack_30c = 0xf;
  if ((1 << ((byte)_local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2b8);
  }
  FUN_140041b80(local_2b8,&local_318);
  local_270 = local_2b8;
  local_378 = local_1b8;
  uStack_370 = uStack_1b0;
  uStack_36c = uStack_1ac;
  if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2a8);
  }
  FUN_140041b80(local_2a8,&local_378);
  uStack_36c = 0xf;
  local_378 = 0x1000001000002ea;
  local_318 = 0x2ea;
  uStack_314 = 0x1000001;
  uStack_310 = uStack_370;
  uStack_30c = 0xf;
  local_268 = local_2a8;
  if ((1 << ((byte)_local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_298);
  }
  FUN_140041b80(local_298,&local_318);
  local_260 = local_298;
  uVar10 = CONCAT44(uVar11,DAT_141a0a0d8);
  puVar5 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_308,1,uVar10,&local_278);
  uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uStack_34c = *(uint *)((longlong)puVar5 + 0xc);
  uStack_350 = *(uint *)(puVar5 + 1);
  if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) == 0) {
    local_358 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_358,puVar5);
  }
  local_348 = 1;
  uStack_30c = 7;
  local_318 = 5;
  FUN_140042560(&local_358,&local_318);
  if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_378 = local_358;
  uStack_370 = uStack_350;
  uStack_36c = uStack_34c;
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_378);
  local_348 = 0;
  if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_258 = &local_288;
  ppuVar12 = &local_270;
  uVar8 = CONCAT44(uVar11,DAT_1419fd6d8);
  puVar6 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_340,4,uVar8,ppuVar12);
  if (puVar6 != local_330) {
    local_378 = *(ulonglong *)puVar6;
    uStack_370 = puVar6[2];
    uStack_36c = puVar6[3];
    if ((1 << ((byte)local_324 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_330);
    }
    FUN_140041b80(local_330,&local_378);
  }
  local_2e8 = 0x7f;
  iVar2 = FUN_140e63cb0(local_90,&local_res8,&local_res10,local_330);
  if (0 < iVar2) {
    do {
      local_2e8 = 0x81;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff358);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_318,gml_Script_anon_2914_DefineStatus_STATUSINIT,local_res8);
      if (&local_318 != puVar6) {
        local_368 = local_318;
        uStack_364 = uStack_314;
        uStack_360 = uStack_310;
        uStack_35c = uStack_30c;
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_368);
      }
      if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      FUN_140e60910(1);
      local_2e8 = 0x8f;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff238);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_2d8,gml_Script_anon_4257_DefineStatus_STATUSINIT,local_res8);
      if (&local_2d8 != puVar6) {
        local_368 = local_2d8;
        uStack_364 = uStack_2d4;
        uStack_360 = uStack_2d0;
        uStack_35c = uStack_2cc;
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_368);
      }
      if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      FUN_140e60910(1);
      local_2e8 = 0x95;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff398);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_248,gml_Script_anon_4323_DefineStatus_STATUSINIT,local_res8);
      if (&local_248 != puVar6) {
        local_368 = local_248;
        uStack_364 = uStack_244;
        uStack_360 = uStack_240;
        uStack_35c = uStack_23c;
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_368);
      }
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      FUN_140e60910(1);
      local_2e8 = 0xcb;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff2c8);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_358,gml_Script_anon_4751_DefineStatus_STATUSINIT,local_res8);
      if (&local_358 != puVar5) {
        local_368 = (uint)local_358;
        uStack_364 = local_358._4_4_;
        uStack_360 = uStack_350;
        uStack_35c = uStack_34c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_368);
      }
      if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      FUN_140e60910(1);
      local_2e8 = 0xd0;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff278);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_378,gml_Script_anon_5095_DefineStatus_STATUSINIT,local_res8);
      if (&local_378 != puVar5) {
        local_368 = (uint)local_378;
        uStack_364 = local_378._4_4_;
        uStack_360 = uStack_370;
        uStack_35c = uStack_36c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_368);
      }
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      FUN_140e60910(1);
      cVar1 = FUN_140e643f0(local_90,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_90,&local_res8,&local_res10);
  local_2e8 = 0xd7;
  uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_141a1f540,0x80000000,&local_1b8,uVar8 & 0xffffffffffffff00,uVar13);
  puVar6 = local_330;
  FUN_140e98ef0(local_res8,local_res10,uVar4,&local_1b8,puVar6);
  local_2e8 = 0xd9;
  if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_340);
  }
  local_340 = 0;
  local_338 = 0;
  local_334 = 5;
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_308 = 0;
  local_300 = 0;
  local_2fc = 5;
  uVar8 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419f5958,0x80000000,&local_1a8,uVar8,uVar13 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar8 >> 0x20);
  local_368 = _DAT_141dc6740;
  uStack_364 = uRam0000000141dc6744;
  uStack_360 = uRam0000000141dc6748;
  uStack_35c = uRam0000000141dc674c;
  if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2c8);
  }
  FUN_140041b80(local_2c8,&local_368);
  local_278 = local_2c8;
  local_368 = DAT_1419ff168 & 0xffffff;
  uStack_364 = (int)(DAT_1419ff168 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_364 == 0xf) {
    uStack_364 = 0x4000004;
  }
  else {
    uStack_364 = uStack_364 | 0x1000000;
  }
  uStack_36c = 0xf;
  local_378 = CONCAT44(uStack_364,DAT_1419ff168) & 0xffffffff00ffffff;
  uStack_360 = uStack_370;
  uStack_35c = 0xf;
  if ((1 << ((byte)_local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2b8);
  }
  FUN_140041b80(local_2b8,&local_368);
  local_270 = local_2b8;
  local_368 = (uint)local_1a8;
  uStack_364 = local_1a8._4_4_;
  uStack_360 = uStack_1a0;
  uStack_35c = uStack_19c;
  if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2a8);
  }
  FUN_140041b80(local_2a8,&local_368);
  uStack_36c = 0xf;
  local_378 = 0x1000001000002f0;
  local_368 = 0x2f0;
  uStack_364 = 0x1000001;
  uStack_360 = uStack_370;
  uStack_35c = 0xf;
  local_268 = local_2a8;
  if ((1 << ((byte)_local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_298);
  }
  FUN_140041b80(local_298,&local_368);
  local_260 = local_298;
  uVar10 = CONCAT44(uVar11,DAT_141a0a0d8);
  puVar5 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_308,1,uVar10,&local_278);
  uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uStack_34c = *(uint *)((longlong)puVar5 + 0xc);
  uStack_350 = *(uint *)(puVar5 + 1);
  if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) == 0) {
    local_358 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_358,puVar5);
  }
  local_348 = 2;
  uStack_36c = 7;
  local_378 = CONCAT44(local_378._4_4_,5);
  FUN_140042560(&local_358,&local_378);
  if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_368 = (uint)local_358;
  uStack_364 = local_358._4_4_;
  uStack_360 = uStack_350;
  uStack_35c = uStack_34c;
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_368);
  local_348 = 0;
  if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_258 = &local_288;
  ppuVar12 = &local_270;
  uVar8 = CONCAT44(uVar11,DAT_1419fd6d8);
  puVar6 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_340,4,uVar8,ppuVar12);
  if (puVar6 != local_330) {
    local_368 = *puVar6;
    uStack_364 = puVar6[1];
    uStack_360 = puVar6[2];
    uStack_35c = puVar6[3];
    if ((1 << ((byte)local_324 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_330);
    }
    FUN_140041b80(local_330,&local_368);
  }
  local_2e8 = 0xda;
  iVar2 = FUN_140e63cb0(local_b0,&local_res8,&local_res10,local_330);
  if (0 < iVar2) {
    do {
      uVar11 = (undefined4)(uVar8 >> 0x20);
      local_2e8 = 0xdb;
      if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_340);
      }
      local_340 = 0;
      local_338 = 0;
      local_334 = 5;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5da8);
      local_368 = _DAT_141dc6740;
      uStack_364 = uRam0000000141dc6744;
      uStack_360 = uRam0000000141dc6748;
      uStack_35c = uRam0000000141dc674c;
      if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_2c8);
      }
      FUN_140041b80(local_2c8,&local_368);
      local_278 = local_2c8;
      FUN_140e609c0(local_res8);
      ppuVar12 = &local_278;
      uVar8 = CONCAT44(uVar11,DAT_141a0a0d8);
      puVar7 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_340,1,uVar8,ppuVar12);
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
      local_2e8 = 0xdc;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff148);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0x3fb999999999999a;
      local_2e8 = 0xdd;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff0c8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0x3ff0000000000000;
      local_2e8 = 0xde;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff318);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0x4024000000000000;
      local_2e8 = 0xdf;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff108);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0;
      local_2e8 = 0xe0;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5838);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0x4034000000000000;
      local_2e8 = 0xe1;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff158);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0;
      local_2e8 = 0xe3;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff358);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_378,gml_Script_anon_5379_DefineStatus_STATUSINIT,local_res8);
      if (&local_378 != puVar5) {
        local_368 = (uint)local_378;
        uStack_364 = local_378._4_4_;
        uStack_360 = uStack_370;
        uStack_35c = uStack_36c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_368);
      }
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      FUN_140e60910(1);
      local_2e8 = 0xf1;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff238);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_318,gml_Script_anon_6788_DefineStatus_STATUSINIT,local_res8);
      if (&local_318 != puVar6) {
        local_368 = local_318;
        uStack_364 = uStack_314;
        uStack_360 = uStack_310;
        uStack_35c = uStack_30c;
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_368);
      }
      if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      FUN_140e60910(1);
      local_2e8 = 0xff;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff398);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_2d8,gml_Script_anon_6891_DefineStatus_STATUSINIT,local_res8);
      if (&local_2d8 != puVar6) {
        local_368 = local_2d8;
        uStack_364 = uStack_2d4;
        uStack_360 = uStack_2d0;
        uStack_35c = uStack_2cc;
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_368);
      }
      if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      FUN_140e60910(1);
      local_2e8 = 0x136;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff278);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_248,gml_Script_anon_7968_anon_7121_DefineStatus_STATUSINIT,local_res8);
      if (&local_248 != puVar6) {
        local_368 = local_248;
        uStack_364 = uStack_244;
        uStack_360 = uStack_240;
        uStack_35c = uStack_23c;
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_368);
      }
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      FUN_140e60910(1);
      local_2e8 = 0x13c;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff2c8);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_358,gml_Script_anon_7121_DefineStatus_STATUSINIT,local_res8);
      if (&local_358 != puVar5) {
        local_368 = (uint)local_358;
        uStack_364 = local_358._4_4_;
        uStack_360 = uStack_350;
        uStack_35c = uStack_34c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_368);
      }
      if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      FUN_140e60910(1);
      cVar1 = FUN_140e643f0(local_b0,&local_res8,&local_res10);
    } while (cVar1 != '\0');
    uVar4 = local_198;
    param_3 = local_res18;
  }
  FUN_140e63970(local_b0,&local_res8,&local_res10);
  local_2e8 = 0x141;
  uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419f5958,0x80000000,&local_1a8,uVar8 & 0xffffffffffffff00,uVar13);
  puVar6 = local_330;
  FUN_140e98ef0(local_res8,local_res10,uVar4,&local_1a8,puVar6);
  local_2e8 = 0x143;
  if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_340);
  }
  local_340 = 0;
  local_338 = 0;
  local_334 = 5;
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_308 = 0;
  local_300 = 0;
  local_2fc = 5;
  uVar8 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419f5f58,0x80000000,&local_1d8,uVar8,uVar13 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar8 >> 0x20);
  local_368 = _DAT_141dc6740;
  uStack_364 = uRam0000000141dc6744;
  uStack_360 = uRam0000000141dc6748;
  uStack_35c = uRam0000000141dc674c;
  if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2c8);
  }
  FUN_140041b80(local_2c8,&local_368);
  local_278 = local_2c8;
  local_368 = DAT_1419ff168 & 0xffffff;
  uStack_364 = (int)(DAT_1419ff168 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_364 == 0xf) {
    uStack_364 = 0x4000004;
  }
  else {
    uStack_364 = uStack_364 | 0x1000000;
  }
  uStack_36c = 0xf;
  local_378 = CONCAT44(uStack_364,DAT_1419ff168) & 0xffffffff00ffffff;
  uStack_360 = uStack_370;
  uStack_35c = 0xf;
  if ((1 << ((byte)_local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2b8);
  }
  FUN_140041b80(local_2b8,&local_368);
  local_270 = local_2b8;
  local_368 = (uint)local_1d8;
  uStack_364 = local_1d8._4_4_;
  uStack_360 = uStack_1d0;
  uStack_35c = uStack_1cc;
  if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2a8);
  }
  FUN_140041b80(local_2a8,&local_368);
  uStack_36c = 0xf;
  local_378 = 0x1000001000002ed;
  local_368 = 0x2ed;
  uStack_364 = 0x1000001;
  uStack_360 = uStack_370;
  uStack_35c = 0xf;
  local_268 = local_2a8;
  if ((1 << ((byte)_local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_298);
  }
  FUN_140041b80(local_298,&local_368);
  local_260 = local_298;
  uVar10 = CONCAT44(uVar11,DAT_141a0a0d8);
  puVar5 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_308,1,uVar10,&local_278);
  uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uStack_34c = *(uint *)((longlong)puVar5 + 0xc);
  uStack_350 = *(uint *)(puVar5 + 1);
  if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) == 0) {
    local_358 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_358,puVar5);
  }
  local_348 = 4;
  uStack_36c = 0;
  local_378 = 0x4004000000000000;
  FUN_140042560(&local_358,&local_378);
  if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_368 = (uint)local_358;
  uStack_364 = local_358._4_4_;
  uStack_360 = uStack_350;
  uStack_35c = uStack_34c;
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_368);
  local_348 = 0;
  if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_258 = &local_288;
  ppuVar12 = &local_270;
  uVar8 = CONCAT44(uVar11,DAT_1419fd6d8);
  puVar6 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_340,4,uVar8,ppuVar12);
  if (puVar6 != local_330) {
    local_368 = *puVar6;
    uStack_364 = puVar6[1];
    uStack_360 = puVar6[2];
    uStack_35c = puVar6[3];
    if ((1 << ((byte)local_324 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_330);
    }
    FUN_140041b80(local_330,&local_368);
  }
  local_2e8 = 0x144;
  iVar2 = FUN_140e63cb0(local_d0,&local_res8,&local_res10,local_330);
  if (0 < iVar2) {
    do {
      local_2e8 = 0x145;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff0c8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0x3ff0000000000000;
      local_2e8 = 0x147;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff358);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_378,gml_Script_anon_8468_DefineStatus_STATUSINIT,local_res8);
      if (&local_378 != puVar5) {
        local_368 = (uint)local_378;
        uStack_364 = local_378._4_4_;
        uStack_360 = uStack_370;
        uStack_35c = uStack_36c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_368);
      }
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      FUN_140e60910(1);
      local_2e8 = 0x179;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff398);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_318,gml_Script_anon_8877_DefineStatus_STATUSINIT,local_res8);
      if (&local_318 != puVar6) {
        local_368 = local_318;
        uStack_364 = uStack_314;
        uStack_360 = uStack_310;
        uStack_35c = uStack_30c;
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_368);
      }
      if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      FUN_140e60910(1);
      local_2e8 = 0x184;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff2c8);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_2d8,gml_Script_anon_9173_DefineStatus_STATUSINIT,local_res8);
      if (&local_2d8 != puVar6) {
        local_368 = local_2d8;
        uStack_364 = uStack_2d4;
        uStack_360 = uStack_2d0;
        uStack_35c = uStack_2cc;
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_368);
      }
      if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      FUN_140e60910(1);
      cVar1 = FUN_140e643f0(local_d0,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_d0,&local_res8,&local_res10);
  local_2e8 = 0x18b;
  uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419f5f58,0x80000000,&local_1d8,uVar8 & 0xffffffffffffff00,uVar13);
  puVar6 = local_330;
  FUN_140e98ef0(local_res8,local_res10,uVar4,&local_1d8,puVar6);
  local_2e8 = 0x18d;
  if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_340);
  }
  local_340 = 0;
  local_338 = 0;
  local_334 = 5;
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_308 = 0;
  local_300 = 0;
  local_2fc = 5;
  uVar8 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419f6028,0x80000000,&local_1e8,uVar8,uVar13 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar8 >> 0x20);
  local_368 = _DAT_141dc6740;
  uStack_364 = uRam0000000141dc6744;
  uStack_360 = uRam0000000141dc6748;
  uStack_35c = uRam0000000141dc674c;
  if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2c8);
  }
  FUN_140041b80(local_2c8,&local_368);
  local_278 = local_2c8;
  local_368 = DAT_1419ff168 & 0xffffff;
  uStack_364 = (int)(DAT_1419ff168 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_364 == 0xf) {
    uStack_364 = 0x4000004;
  }
  else {
    uStack_364 = uStack_364 | 0x1000000;
  }
  uStack_36c = 0xf;
  local_378 = CONCAT44(uStack_364,DAT_1419ff168) & 0xffffffff00ffffff;
  uStack_360 = uStack_370;
  uStack_35c = 0xf;
  if ((1 << ((byte)_local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2b8);
  }
  FUN_140041b80(local_2b8,&local_368);
  local_270 = local_2b8;
  local_368 = (uint)local_1e8;
  uStack_364 = local_1e8._4_4_;
  uStack_360 = uStack_1e0;
  uStack_35c = uStack_1dc;
  if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2a8);
  }
  FUN_140041b80(local_2a8,&local_368);
  uStack_36c = 0xf;
  local_378 = 0x1000001000002e3;
  local_368 = 0x2e3;
  uStack_364 = 0x1000001;
  uStack_360 = uStack_370;
  uStack_35c = 0xf;
  local_268 = local_2a8;
  if ((1 << ((byte)_local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_298);
  }
  FUN_140041b80(local_298,&local_368);
  local_260 = local_298;
  uVar10 = CONCAT44(uVar11,DAT_141a0a0d8);
  puVar5 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_308,1,uVar10,&local_278);
  uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uStack_34c = *(uint *)((longlong)puVar5 + 0xc);
  uStack_350 = *(uint *)(puVar5 + 1);
  if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) == 0) {
    local_358 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_358,puVar5);
  }
  local_348 = 8;
  uStack_36c = 7;
  local_378 = CONCAT44(local_378._4_4_,10);
  FUN_140042560(&local_358,&local_378);
  if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_368 = (uint)local_358;
  uStack_364 = local_358._4_4_;
  uStack_360 = uStack_350;
  uStack_35c = uStack_34c;
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_368);
  local_348 = 0;
  if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_258 = &local_288;
  ppuVar12 = &local_270;
  uVar8 = CONCAT44(uVar11,DAT_1419fd6d8);
  puVar6 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_340,4,uVar8,ppuVar12);
  if (puVar6 != local_330) {
    local_368 = *puVar6;
    uStack_364 = puVar6[1];
    uStack_360 = puVar6[2];
    uStack_35c = puVar6[3];
    if ((1 << ((byte)local_324 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_330);
    }
    FUN_140041b80(local_330,&local_368);
  }
  local_2e8 = 0x18e;
  iVar2 = FUN_140e63cb0(local_f0,&local_res8,&local_res10,local_330);
  if (0 < iVar2) {
    do {
      local_2e8 = 399;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff0c8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0x3ff0000000000000;
      local_2e8 = 0x191;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff0a8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0;
      local_2e8 = 0x192;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff138);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0;
      local_2e8 = 0x193;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff018);
      uStack_34c = 0xd;
      local_358 = 0;
      if (&local_358 != puVar5) {
        local_368 = 0;
        uStack_364 = 0;
        uStack_360 = uStack_350;
        uStack_35c = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_368);
      }
      local_2e8 = 0x194;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff0d8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0;
      local_2e8 = 0x195;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff348);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0x4018000000000000;
      local_2e8 = 0x197;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff358);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_378,gml_Script_anon_10499_DefineStatus_STATUSINIT,local_res8);
      if (&local_378 != puVar5) {
        local_368 = (uint)local_378;
        uStack_364 = local_378._4_4_;
        uStack_360 = uStack_370;
        uStack_35c = uStack_36c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_368);
      }
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      FUN_140e60910(1);
      local_2e8 = 0x1a1;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff398);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_318,gml_Script_anon_10582_DefineStatus_STATUSINIT,local_res8);
      if (&local_318 != puVar6) {
        local_368 = local_318;
        uStack_364 = uStack_314;
        uStack_360 = uStack_310;
        uStack_35c = uStack_30c;
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_368);
      }
      if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      FUN_140e60910(1);
      local_2e8 = 0x1d5;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff278);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_2d8,gml_Script_anon_10867_DefineStatus_STATUSINIT,local_res8);
      if (&local_2d8 != puVar6) {
        local_368 = local_2d8;
        uStack_364 = uStack_2d4;
        uStack_360 = uStack_2d0;
        uStack_35c = uStack_2cc;
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_368);
      }
      if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      FUN_140e60910(1);
      local_2e8 = 0x1d9;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff2c8);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_248,gml_Script_anon_10911_DefineStatus_STATUSINIT,local_res8);
      if (&local_248 != puVar6) {
        local_368 = local_248;
        uStack_364 = uStack_244;
        uStack_360 = uStack_240;
        uStack_35c = uStack_23c;
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_368);
      }
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      FUN_140e60910(1);
      cVar1 = FUN_140e643f0(local_f0,&local_res8,&local_res10);
    } while (cVar1 != '\0');
    param_3 = local_res18;
  }
  FUN_140e63970(local_f0,&local_res8,&local_res10);
  local_2e8 = 0x1e0;
  uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419f6028,0x80000000,&local_1e8,uVar8 & 0xffffffffffffff00,uVar13);
  puVar6 = local_330;
  FUN_140e98ef0(local_res8,local_res10,uVar4,&local_1e8,puVar6);
  local_2e8 = 0x1e2;
  if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_340);
  }
  local_340 = 0;
  local_338 = 0;
  local_334 = 5;
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_308 = 0;
  local_300 = 0;
  local_2fc = 5;
  uVar8 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419ff3c8,0x80000000,&local_1f8,uVar8,uVar13 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar8 >> 0x20);
  local_368 = _DAT_141dc6740;
  uStack_364 = uRam0000000141dc6744;
  uStack_360 = uRam0000000141dc6748;
  uStack_35c = uRam0000000141dc674c;
  if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2c8);
  }
  FUN_140041b80(local_2c8,&local_368);
  local_278 = local_2c8;
  local_368 = DAT_1419ff168 & 0xffffff;
  uStack_364 = (int)(DAT_1419ff168 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_364 == 0xf) {
    uStack_364 = 0x4000004;
  }
  else {
    uStack_364 = uStack_364 | 0x1000000;
  }
  uStack_36c = 0xf;
  local_378 = CONCAT44(uStack_364,DAT_1419ff168) & 0xffffffff00ffffff;
  uStack_360 = uStack_370;
  uStack_35c = 0xf;
  if ((1 << ((byte)_local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2b8);
  }
  FUN_140041b80(local_2b8,&local_368);
  local_270 = local_2b8;
  local_368 = (uint)local_1f8;
  uStack_364 = local_1f8._4_4_;
  uStack_360 = uStack_1f0;
  uStack_35c = uStack_1ec;
  if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2a8);
  }
  FUN_140041b80(local_2a8,&local_368);
  uStack_36c = 0xf;
  local_378 = 0x1000001000002f0;
  local_368 = 0x2f0;
  uStack_364 = 0x1000001;
  uStack_360 = uStack_370;
  uStack_35c = 0xf;
  local_268 = local_2a8;
  if ((1 << ((byte)_local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_298);
  }
  FUN_140041b80(local_298,&local_368);
  local_260 = local_298;
  uVar10 = CONCAT44(uVar11,DAT_141a0a0d8);
  puVar5 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_308,1,uVar10,&local_278);
  uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uStack_34c = *(uint *)((longlong)puVar5 + 0xc);
  uStack_350 = *(uint *)(puVar5 + 1);
  if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) == 0) {
    local_358 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_358,puVar5);
  }
  local_348 = 0x10;
  uStack_36c = 7;
  local_378 = CONCAT44(local_378._4_4_,0xf);
  FUN_140042560(&local_358,&local_378);
  if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_368 = (uint)local_358;
  uStack_364 = local_358._4_4_;
  uStack_360 = uStack_350;
  uStack_35c = uStack_34c;
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_368);
  local_348 = 0;
  if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_258 = &local_288;
  ppuVar12 = &local_270;
  uVar8 = CONCAT44(uVar11,DAT_1419fd6d8);
  puVar6 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_340,4,uVar8,ppuVar12);
  if (puVar6 != local_330) {
    local_368 = *puVar6;
    uStack_364 = puVar6[1];
    uStack_360 = puVar6[2];
    uStack_35c = puVar6[3];
    if ((1 << ((byte)local_324 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_330);
    }
    FUN_140041b80(local_330,&local_368);
  }
  local_2e8 = 0x1e3;
  iVar2 = FUN_140e63cb0(local_110,&local_res8,&local_res10,local_330);
  if (0 < iVar2) {
    do {
      local_2e8 = 0x1e4;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff358);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_378,&LAB_1405cdd90,local_res8);
      if (&local_378 != puVar5) {
        local_368 = (uint)local_378;
        uStack_364 = local_378._4_4_;
        uStack_360 = uStack_370;
        uStack_35c = uStack_36c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_368);
      }
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      FUN_140e60910(1);
      local_2e8 = 0x1e7;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff238);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_318,&LAB_1405cddc0,local_res8);
      if (&local_318 != puVar6) {
        local_368 = local_318;
        uStack_364 = uStack_314;
        uStack_360 = uStack_310;
        uStack_35c = uStack_30c;
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_368);
      }
      if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      FUN_140e60910(1);
      local_2e8 = 0x1ea;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff398);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_2d8,gml_Script_anon_11281_DefineStatus_STATUSINIT,local_res8);
      if (&local_2d8 != puVar6) {
        local_368 = local_2d8;
        uStack_364 = uStack_2d4;
        uStack_360 = uStack_2d0;
        uStack_35c = uStack_2cc;
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_368);
      }
      if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      FUN_140e60910(1);
      cVar1 = FUN_140e643f0(local_110,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_110,&local_res8,&local_res10);
  local_2e8 = 0x1f2;
  uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419ff3c8,0x80000000,&local_1f8,uVar8 & 0xffffffffffffff00,uVar13);
  puVar6 = local_330;
  FUN_140e98ef0(local_res8,local_res10,uVar4,&local_1f8,puVar6);
  local_2e8 = 500;
  if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_340);
  }
  local_340 = 0;
  local_338 = 0;
  local_334 = 5;
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_308 = 0;
  local_300 = 0;
  local_2fc = 5;
  uVar8 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419f6158,0x80000000,&local_208,uVar8,uVar13 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar8 >> 0x20);
  local_368 = _DAT_141dc6740;
  uStack_364 = uRam0000000141dc6744;
  uStack_360 = uRam0000000141dc6748;
  uStack_35c = uRam0000000141dc674c;
  if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2c8);
  }
  FUN_140041b80(local_2c8,&local_368);
  local_278 = local_2c8;
  local_368 = DAT_1419ff168 & 0xffffff;
  uStack_364 = (int)(DAT_1419ff168 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_364 == 0xf) {
    uStack_364 = 0x4000004;
  }
  else {
    uStack_364 = uStack_364 | 0x1000000;
  }
  uStack_36c = 0xf;
  local_378 = CONCAT44(uStack_364,DAT_1419ff168) & 0xffffffff00ffffff;
  uStack_360 = uStack_370;
  uStack_35c = 0xf;
  if ((1 << ((byte)_local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2b8);
  }
  FUN_140041b80(local_2b8,&local_368);
  local_270 = local_2b8;
  local_368 = (uint)local_208;
  uStack_364 = local_208._4_4_;
  uStack_360 = uStack_200;
  uStack_35c = uStack_1fc;
  if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2a8);
  }
  FUN_140041b80(local_2a8,&local_368);
  uStack_36c = 0xf;
  local_378 = 0x1000001000002e5;
  local_368 = 0x2e5;
  uStack_364 = 0x1000001;
  uStack_360 = uStack_370;
  uStack_35c = 0xf;
  local_268 = local_2a8;
  if ((1 << ((byte)_local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_298);
  }
  FUN_140041b80(local_298,&local_368);
  local_260 = local_298;
  uVar10 = CONCAT44(uVar11,DAT_141a0a0d8);
  puVar5 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_308,1,uVar10,&local_278);
  uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uStack_34c = *(uint *)((longlong)puVar5 + 0xc);
  uStack_350 = *(uint *)(puVar5 + 1);
  if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) == 0) {
    local_358 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_358,puVar5);
  }
  local_348 = 0x20;
  uStack_36c = 7;
  local_378 = CONCAT44(local_378._4_4_,0x3c);
  FUN_140042560(&local_358,&local_378);
  if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_368 = (uint)local_358;
  uStack_364 = local_358._4_4_;
  uStack_360 = uStack_350;
  uStack_35c = uStack_34c;
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_368);
  local_348 = 0;
  if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_258 = &local_288;
  ppuVar12 = &local_270;
  uVar8 = CONCAT44(uVar11,DAT_1419fd6d8);
  puVar6 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_340,4,uVar8,ppuVar12);
  if (puVar6 != local_330) {
    local_368 = *puVar6;
    uStack_364 = puVar6[1];
    uStack_360 = puVar6[2];
    uStack_35c = puVar6[3];
    if ((1 << ((byte)local_324 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_330);
    }
    FUN_140041b80(local_330,&local_368);
  }
  local_2e8 = 0x1f5;
  iVar2 = FUN_140e63cb0(local_130,&local_res8,&local_res10,local_330);
  if (0 < iVar2) {
    do {
      local_2e8 = 0x1f6;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff358);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_378,&LAB_1405ce120,local_res8);
      if (&local_378 != puVar5) {
        local_368 = (uint)local_378;
        uStack_364 = local_378._4_4_;
        uStack_360 = uStack_370;
        uStack_35c = uStack_36c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_368);
      }
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      FUN_140e60910(1);
      local_2e8 = 0x1f9;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff238);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_318,&LAB_1405ce150,local_res8);
      if (&local_318 != puVar6) {
        local_368 = local_318;
        uStack_364 = uStack_314;
        uStack_360 = uStack_310;
        uStack_35c = uStack_30c;
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_368);
      }
      if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      FUN_140e60910(1);
      local_2e8 = 0x1fc;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff398);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_2d8,gml_Script_anon_11322_DefineStatus_STATUSINIT,local_res8);
      if (&local_2d8 != puVar6) {
        local_368 = local_2d8;
        uStack_364 = uStack_2d4;
        uStack_360 = uStack_2d0;
        uStack_35c = uStack_2cc;
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_368);
      }
      if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      FUN_140e60910(1);
      cVar1 = FUN_140e643f0(local_130,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_130,&local_res8,&local_res10);
  local_2e8 = 0x204;
  uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419f6158,0x80000000,&local_208,uVar8 & 0xffffffffffffff00,uVar13);
  puVar6 = local_330;
  FUN_140e98ef0(local_res8,local_res10,uVar4,&local_208,puVar6);
  local_2e8 = 0x206;
  if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_340);
  }
  local_340 = 0;
  local_338 = 0;
  local_334 = 5;
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_308 = 0;
  local_300 = 0;
  local_2fc = 5;
  uVar8 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419f5c78,0x80000000,&local_218,uVar8,uVar13 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar8 >> 0x20);
  local_368 = _DAT_141dc6740;
  uStack_364 = uRam0000000141dc6744;
  uStack_360 = uRam0000000141dc6748;
  uStack_35c = uRam0000000141dc674c;
  if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2c8);
  }
  FUN_140041b80(local_2c8,&local_368);
  local_278 = local_2c8;
  local_368 = DAT_1419ff168 & 0xffffff;
  uStack_364 = (int)(DAT_1419ff168 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_364 == 0xf) {
    uStack_364 = 0x4000004;
  }
  else {
    uStack_364 = uStack_364 | 0x1000000;
  }
  uStack_36c = 0xf;
  local_378 = CONCAT44(uStack_364,DAT_1419ff168) & 0xffffffff00ffffff;
  uStack_360 = uStack_370;
  uStack_35c = 0xf;
  if ((1 << ((byte)_local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2b8);
  }
  FUN_140041b80(local_2b8,&local_368);
  local_270 = local_2b8;
  local_368 = (uint)local_218;
  uStack_364 = local_218._4_4_;
  uStack_360 = uStack_210;
  uStack_35c = uStack_20c;
  if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2a8);
  }
  FUN_140041b80(local_2a8,&local_368);
  uStack_36c = 0xf;
  local_378 = 0x1000001000002e8;
  local_368 = 0x2e8;
  uStack_364 = 0x1000001;
  uStack_360 = uStack_370;
  uStack_35c = 0xf;
  local_268 = local_2a8;
  if ((1 << ((byte)_local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_298);
  }
  FUN_140041b80(local_298,&local_368);
  local_260 = local_298;
  uVar10 = CONCAT44(uVar11,DAT_141a0a0d8);
  puVar5 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_308,1,uVar10,&local_278);
  uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uStack_34c = *(uint *)((longlong)puVar5 + 0xc);
  uStack_350 = *(uint *)(puVar5 + 1);
  if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) == 0) {
    local_358 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_358,puVar5);
  }
  local_348 = 0x40;
  uStack_36c = 7;
  local_378 = CONCAT44(local_378._4_4_,0x14);
  FUN_140042560(&local_358,&local_378);
  if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_368 = (uint)local_358;
  uStack_364 = local_358._4_4_;
  uStack_360 = uStack_350;
  uStack_35c = uStack_34c;
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_368);
  local_348 = 0;
  if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_258 = &local_288;
  ppuVar12 = &local_270;
  uVar8 = CONCAT44(uVar11,DAT_1419fd6d8);
  puVar6 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_340,4,uVar8,ppuVar12);
  if (puVar6 != local_330) {
    local_368 = *puVar6;
    uStack_364 = puVar6[1];
    uStack_360 = puVar6[2];
    uStack_35c = puVar6[3];
    if ((1 << ((byte)local_324 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_330);
    }
    FUN_140041b80(local_330,&local_368);
  }
  local_2e8 = 0x207;
  iVar2 = FUN_140e63cb0(local_150,&local_res8,&local_res10,local_330);
  if (0 < iVar2) {
    do {
      local_2e8 = 0x209;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff358);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_378,gml_Script_anon_11840_DefineStatus_STATUSINIT,local_res8);
      if (&local_378 != puVar5) {
        local_368 = (uint)local_378;
        uStack_364 = local_378._4_4_;
        uStack_360 = uStack_370;
        uStack_35c = uStack_36c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_368);
      }
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      FUN_140e60910(1);
      local_2e8 = 0x212;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff238);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_318,&LAB_1405ce9b0,local_res8);
      if (&local_318 != puVar6) {
        local_368 = local_318;
        uStack_364 = uStack_314;
        uStack_360 = uStack_310;
        uStack_35c = uStack_30c;
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_368);
      }
      if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      FUN_140e60910(1);
      local_2e8 = 0x216;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff398);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_2d8,gml_Script_anon_12643_DefineStatus_STATUSINIT,local_res8);
      if (&local_2d8 != puVar6) {
        local_368 = local_2d8;
        uStack_364 = uStack_2d4;
        uStack_360 = uStack_2d0;
        uStack_35c = uStack_2cc;
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_368);
      }
      if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      FUN_140e60910(1);
      cVar1 = FUN_140e643f0(local_150,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_150,&local_res8,&local_res10);
  local_2e8 = 0x241;
  uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419f5c78,0x80000000,&local_218,uVar8 & 0xffffffffffffff00,uVar13);
  puVar6 = local_330;
  FUN_140e98ef0(local_res8,local_res10,uVar4,&local_218,puVar6);
  local_2e8 = 0x243;
  if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_340);
  }
  local_340 = 0;
  local_338 = 0;
  local_334 = 5;
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_308 = 0;
  local_300 = 0;
  local_2fc = 5;
  uVar8 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419f5bc8,0x80000000,&local_228,uVar8,uVar13 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar8 >> 0x20);
  local_368 = _DAT_141dc6740;
  uStack_364 = uRam0000000141dc6744;
  uStack_360 = uRam0000000141dc6748;
  uStack_35c = uRam0000000141dc674c;
  if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2c8);
  }
  FUN_140041b80(local_2c8,&local_368);
  local_278 = local_2c8;
  local_368 = DAT_1419ff168 & 0xffffff;
  uStack_364 = (int)(DAT_1419ff168 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_364 == 0xf) {
    uStack_364 = 0x4000004;
  }
  else {
    uStack_364 = uStack_364 | 0x1000000;
  }
  uStack_36c = 0xf;
  local_378 = CONCAT44(uStack_364,DAT_1419ff168) & 0xffffffff00ffffff;
  uStack_360 = uStack_370;
  uStack_35c = 0xf;
  if ((1 << ((byte)_local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2b8);
  }
  FUN_140041b80(local_2b8,&local_368);
  local_270 = local_2b8;
  local_368 = (uint)local_228;
  uStack_364 = local_228._4_4_;
  uStack_360 = uStack_220;
  uStack_35c = uStack_21c;
  if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2a8);
  }
  FUN_140041b80(local_2a8,&local_368);
  uStack_36c = 0xf;
  local_378 = 0x1000001000002e5;
  local_368 = 0x2e5;
  uStack_364 = 0x1000001;
  uStack_360 = uStack_370;
  uStack_35c = 0xf;
  local_268 = local_2a8;
  if ((1 << ((byte)_local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_298);
  }
  FUN_140041b80(local_298,&local_368);
  local_260 = local_298;
  uVar10 = CONCAT44(uVar11,DAT_141a0a0d8);
  puVar5 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_308,1,uVar10,&local_278);
  uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uStack_34c = *(uint *)((longlong)puVar5 + 0xc);
  uStack_350 = *(uint *)(puVar5 + 1);
  if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) == 0) {
    local_358 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_358,puVar5);
  }
  local_348 = 0x80;
  uStack_36c = 7;
  local_378 = CONCAT44(local_378._4_4_,0x14);
  FUN_140042560(&local_358,&local_378);
  if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_368 = (uint)local_358;
  uStack_364 = local_358._4_4_;
  uStack_360 = uStack_350;
  uStack_35c = uStack_34c;
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_368);
  local_348 = 0;
  if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_258 = &local_288;
  ppuVar12 = &local_270;
  uVar8 = CONCAT44(uVar11,DAT_1419fd6d8);
  puVar6 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_340,4,uVar8,ppuVar12);
  if (puVar6 != local_330) {
    local_368 = *puVar6;
    uStack_364 = puVar6[1];
    uStack_360 = puVar6[2];
    uStack_35c = puVar6[3];
    if ((1 << ((byte)local_324 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_330);
    }
    FUN_140041b80(local_330,&local_368);
  }
  local_2e8 = 0x244;
  iVar2 = FUN_140e63cb0(local_170,&local_res8,&local_res10,local_330);
  if (0 < iVar2) {
    do {
      local_2e8 = 0x245;
      if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_340);
      }
      local_340 = 0;
      local_338 = 0;
      local_334 = 5;
      uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff118);
      local_368 = _DAT_1419df7a0;
      uStack_364 = uRam00000001419df7a4;
      uStack_360 = uRam00000001419df7a8;
      uStack_35c = uRam00000001419df7ac;
      if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_2c8);
      }
      FUN_140041b80(local_2c8,&local_368);
      local_278 = local_2c8;
      ppuVar12 = &local_278;
      FUN_140e63610(local_res8,local_res10,&local_340,1,uVar8,ppuVar12);
      local_2e8 = 0x246;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff358);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_378,&LAB_1405cf3a0,local_res8);
      if (&local_378 != puVar5) {
        local_368 = (uint)local_378;
        uStack_364 = local_378._4_4_;
        uStack_360 = uStack_370;
        uStack_35c = uStack_36c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_368);
      }
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      FUN_140e60910(1);
      local_2e8 = 0x24a;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff398);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_318,FUN_1405cf3d0,local_res8);
      if (&local_318 != puVar6) {
        local_368 = local_318;
        uStack_364 = uStack_314;
        uStack_360 = uStack_310;
        uStack_35c = uStack_30c;
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_368);
      }
      if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      FUN_140e60910(1);
      cVar1 = FUN_140e643f0(local_170,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_170,&local_res8,&local_res10);
  local_2e8 = 0x252;
  uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419f5bc8,0x80000000,&local_228,uVar8 & 0xffffffffffffff00,uVar13);
  puVar6 = local_330;
  FUN_140e98ef0(local_res8,local_res10,uVar4,&local_228,puVar6);
  local_2e8 = 0x254;
  if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_340);
  }
  local_340 = 0;
  local_338 = 0;
  local_334 = 5;
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_308 = 0;
  local_300 = 0;
  local_2fc = 5;
  uVar8 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419f5c08,0x80000000,&local_238,uVar8,uVar13 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar8 >> 0x20);
  local_368 = _DAT_141dc6740;
  uStack_364 = uRam0000000141dc6744;
  uStack_360 = uRam0000000141dc6748;
  uStack_35c = uRam0000000141dc674c;
  if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2c8);
  }
  FUN_140041b80(local_2c8,&local_368);
  local_278 = local_2c8;
  local_368 = DAT_1419ff168 & 0xffffff;
  uStack_364 = (int)(DAT_1419ff168 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_364 == 0xf) {
    uStack_364 = 0x4000004;
  }
  else {
    uStack_364 = uStack_364 | 0x1000000;
  }
  uStack_36c = 0xf;
  local_378 = CONCAT44(uStack_364,DAT_1419ff168) & 0xffffffff00ffffff;
  uStack_360 = uStack_370;
  uStack_35c = 0xf;
  if ((1 << (local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2b8);
  }
  FUN_140041b80(local_2b8,&local_368);
  local_270 = local_2b8;
  local_368 = (uint)local_238;
  uStack_364 = local_238._4_4_;
  uStack_360 = uStack_230;
  uStack_35c = uStack_22c;
  if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2a8);
  }
  FUN_140041b80(local_2a8,&local_368);
  uStack_36c = 0xf;
  local_378 = 0x1000001000002eb;
  local_368 = 0x2eb;
  uStack_364 = 0x1000001;
  uStack_360 = uStack_370;
  uStack_35c = 0xf;
  local_268 = local_2a8;
  if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_298);
  }
  FUN_140041b80(local_298,&local_368);
  local_260 = local_298;
  uVar10 = CONCAT44(uVar11,DAT_141a0a0d8);
  puVar5 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_308,1,uVar10,&local_278);
  uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uStack_34c = *(uint *)((longlong)puVar5 + 0xc);
  uStack_350 = *(uint *)(puVar5 + 1);
  if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) == 0) {
    local_358 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_358,puVar5);
  }
  local_348 = 0x100;
  uStack_36c = 7;
  local_378 = CONCAT44(local_378._4_4_,8);
  FUN_140042560(&local_358,&local_378);
  if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_368 = (uint)local_358;
  uStack_364 = local_358._4_4_;
  uStack_360 = uStack_350;
  uStack_35c = uStack_34c;
  if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_368);
  if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_258 = &local_288;
  ppuVar12 = &local_270;
  uVar8 = CONCAT44(uVar11,DAT_1419fd6d8);
  puVar6 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_340,4,uVar8,ppuVar12);
  if (puVar6 != local_330) {
    local_368 = *puVar6;
    uStack_364 = puVar6[1];
    uStack_360 = puVar6[2];
    uStack_35c = puVar6[3];
    if ((1 << ((byte)local_324 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_330);
    }
    FUN_140041b80(local_330,&local_368);
  }
  local_2e8 = 0x255;
  iVar2 = FUN_140e63cb0(local_190,&local_res8,&local_res10,local_330);
  if (0 < iVar2) {
    do {
      local_2e8 = 0x256;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff0c8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0x3ff0000000000000;
      local_2e8 = 600;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff358);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_378,FUN_1405cf700,local_res8);
      if (&local_378 != puVar5) {
        local_368 = (uint)local_378;
        uStack_364 = local_378._4_4_;
        uStack_360 = uStack_370;
        uStack_35c = uStack_36c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_368);
      }
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      FUN_140e60910(1);
      local_2e8 = 0x271;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff398);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_318,gml_Script_DefineStatus,local_res8);
      if (&local_318 != puVar6) {
        local_368 = local_318;
        uStack_364 = uStack_314;
        uStack_360 = uStack_310;
        uStack_35c = uStack_30c;
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_368);
      }
      if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      FUN_140e60910(1);
      local_2e8 = 0x285;
      puVar6 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff2c8);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_2d8,gml_GlobalScript_SteamHelpers,local_res8);
      if (&local_2d8 != puVar6) {
        local_368 = local_2d8;
        uStack_364 = uStack_2d4;
        uStack_360 = uStack_2d0;
        uStack_35c = uStack_2cc;
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_368);
      }
      if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      FUN_140e60910(1);
      cVar1 = FUN_140e643f0(local_190,&local_res8,&local_res10);
    } while (cVar1 != '\0');
    param_3 = local_res18;
  }
  FUN_140e63970(local_190,&local_res8,&local_res10);
  local_2e8 = 0x294;
  FUN_140e87440(uVar3,DAT_1419f5c08,0x80000000,&local_238,uVar8 & 0xffffffffffffff00,
                (ulonglong)ppuVar12 & 0xffffffffffffff00);
  FUN_140e98ef0(local_res8,local_res10,uVar4,&local_238,local_330);
  if (local_180 != 0) {
    FUN_140e4cd60();
    local_180 = 0;
  }
  if (local_160 != 0) {
    FUN_140e4cd60();
    local_160 = 0;
  }
  if (local_140 != 0) {
    FUN_140e4cd60();
    local_140 = 0;
  }
  if (local_120 != 0) {
    FUN_140e4cd60();
    local_120 = 0;
  }
  if (local_100 != 0) {
    FUN_140e4cd60();
    local_100 = 0;
  }
  if (local_e0 != 0) {
    FUN_140e4cd60();
    local_e0 = 0;
  }
  if (local_c0 != 0) {
    FUN_140e4cd60();
    local_c0 = 0;
  }
  if (local_a0 != 0) {
    FUN_140e4cd60();
    local_a0 = 0;
  }
  if (local_80 != 0) {
    FUN_140e4cd60();
    local_80 = 0;
  }
  if (local_60 != 0) {
    FUN_140e4cd60();
    local_60 = 0;
  }
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_340);
  }
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_324 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_330);
  }
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  _eh_vector_destructor_iterator_(local_2c8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_2f8;
  return param_3;
}

