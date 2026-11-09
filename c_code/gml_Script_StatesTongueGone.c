// gml_Script_StatesTongueGone @ 0x1405b10c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesTongueGone
          (longlong *param_1,longlong *param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  longlong **pplVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong *local_res8;
  longlong *local_res10;
  undefined8 *local_res18;
  uint local_res20;
  code *pcVar19;
  undefined8 uVar20;
  undefined1 **ppuVar21;
  undefined1 **ppuVar22;
  undefined8 local_378;
  undefined4 local_370;
  undefined4 local_36c;
  longlong *local_368;
  undefined4 local_35c;
  undefined8 local_358;
  undefined4 local_350;
  undefined4 local_34c;
  undefined8 local_348;
  char *local_340;
  undefined4 local_338;
  undefined1 *local_328;
  undefined1 *local_320;
  undefined8 *local_318;
  undefined1 *local_310;
  undefined1 *local_308;
  undefined1 *local_300;
  undefined1 *local_2f8;
  undefined1 *local_2f0;
  undefined1 *local_2e8;
  undefined8 local_2d8;
  undefined4 local_2cc;
  longlong *local_2c8;
  undefined4 local_2bc;
  longlong local_2b8;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined8 local_278;
  undefined4 local_26c;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined8 local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  longlong *local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  longlong *local_1a8;
  undefined4 local_19c;
  longlong *local_198;
  undefined4 local_18c;
  longlong *local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined1 local_e8 [16];
  longlong local_d8;
  undefined1 local_c8 [136];
  
  local_res20 = 0;
  local_340 = "gml_Script_StatesTongueChuckRock";
  local_348 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_348;
  local_338 = 0x1cd;
  pcVar19 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_298,0x10,9,FUN_1400424d0,FUN_140041b30);
  local_14c = 0xffffff;
  local_158 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_36c = 0;
  local_378 = 0;
  local_34c = 0;
  local_358 = 0;
  local_29c = 0;
  local_2a8 = 0;
  local_1cc = 0;
  local_1d8 = 0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_338 = 0x1cf;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  FUN_1400424a0(local_c8,param_5);
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de0a18) &&
     (_Init_thread_header(&DAT_141de0a18), DAT_141de0a18 == -1)) {
    _DAT_141de09cc = 0;
    _DAT_141de09c0 = 0x4000000000000000;
    _DAT_141de09e0 = 0;
    _DAT_141de09d4 = 0;
    _DAT_141de09e4 = 1;
    _DAT_141de09f4 = 0;
    _DAT_141de09e8 = 0x3ff0000000000000;
    _DAT_141de09f8 = 2;
    _DAT_141de0a08 = 0;
    _DAT_141de09fc = 0x4008000000000000;
    _DAT_141de0a0c = 3;
    atexit((_func_5014 *)&LAB_141483120);
    _Init_thread_footer(&DAT_141de0a18);
  }
  uVar10 = 0;
  do {
    iVar2 = FUN_140e851f0(&DAT_141de09c0 + (longlong)(int)uVar10 * 0x14,local_c8,DAT_141955260,0);
    uVar11 = (undefined4)((ulonglong)pcVar19 >> 0x20);
    if (iVar2 == 0) {
      iVar2 = *(int *)(&DAT_141de09d0 + (longlong)(int)uVar10 * 0x14);
      if (iVar2 == 0) {
        local_338 = 0x1d3;
        local_2bc = 0xf;
        local_2c8 = (longlong *)0x10000010000017c;
        FUN_140041c60(&local_158,&local_2c8);
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_158);
        local_338 = 0x1d4;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_358);
        }
        local_358 = 0;
        local_350 = 0;
        local_34c = 5;
        uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
        FUN_1400441d0(local_298,&DAT_1419e6710);
        local_328 = local_298;
        FUN_1400441d0(local_288,&DAT_1419e6810);
        local_320 = local_288;
        FUN_140041c60(&local_278,uVar3);
        local_318 = &local_278;
        FUN_140041c60(local_268,&DAT_141dd43d8);
        local_310 = local_268;
        uVar4 = FUN_140e78db0(&local_358,2,&local_328);
        FUN_140041c60(local_258,uVar4);
        local_308 = local_258;
        uVar4 = CONCAT44(uVar11,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_378,3,uVar4,&local_318);
        uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_338 = 0x1d5;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        FUN_140041c60(local_298,uVar3);
        local_328 = local_298;
        FUN_140041c60(local_288,&DAT_141dd4378);
        local_320 = local_288;
        FUN_1400441d0(&local_278,&DAT_1419df7a0);
        local_318 = &local_278;
        uVar4 = CONCAT44(uVar11,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_378,3,uVar4,&local_328);
        uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_338 = 0x1d7;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        FUN_140041c60(local_298,uVar3);
        local_328 = local_298;
        FUN_140041c60(local_288,&DAT_141dd4318);
        local_320 = local_288;
        FUN_1400441d0(&local_278,&DAT_141dc6720);
        local_318 = &local_278;
        uVar4 = CONCAT44(uVar11,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_378,3,uVar4,&local_328);
        uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_338 = 0x1d8;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        FUN_140041c60(local_298,uVar3);
        local_328 = local_298;
        FUN_140041c60(local_288,&DAT_141dd4398);
        local_320 = local_288;
        FUN_1400441d0(&local_278,&DAT_141dc6720);
        local_318 = &local_278;
        uVar4 = CONCAT44(uVar11,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_378,3,uVar4,&local_328);
        uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_338 = 0x1d9;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        FUN_140041c60(local_298,uVar3);
        local_328 = local_298;
        FUN_140041c60(local_288,&DAT_141dd4388);
        local_320 = local_288;
        FUN_1400441d0(&local_278,&DAT_1419e6810);
        local_318 = &local_278;
        uVar4 = CONCAT44(uVar11,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_378,3,uVar4,&local_328);
        uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_338 = 0x1db;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        FUN_140041c60(local_298,uVar3);
        local_328 = local_298;
        FUN_140041c60(local_288,&DAT_141dd43d8);
        local_320 = local_288;
        uVar5 = CONCAT44(uVar11,DAT_1419ff4f8);
        uVar4 = FUN_140e634e0(local_res8,local_res10,&local_378,2,uVar5,&local_328);
        uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
        cVar1 = FUN_140041d90(uVar4,1);
        if (cVar1 == '\0') {
          local_2bc = 0;
          local_2c8 = (longlong *)0x4073c00000000000;
          uVar10 = 2;
          pplVar9 = &local_2c8;
        }
        else {
          local_1dc = 0;
          local_1e8 = (longlong *)0x403e000000000000;
          uVar10 = 1;
          pplVar9 = &local_1e8;
        }
        local_res20 = uVar10;
        FUN_140041c60(&local_1f8,pplVar9);
        if (((uVar10 & 2) != 0) &&
           (uVar10 = uVar10 & 0xfffffffd, local_res20 = uVar10,
           (1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_2c8);
        }
        if (((uVar10 & 1) != 0) && ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_1f8);
        local_338 = 0x1dc;
        uVar12 = FUN_140e78f40(0x30);
        FUN_140041cb0(&local_f8,uVar12);
        FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_f8);
        local_338 = 0x1de;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5ef8);
        FUN_140041c60(local_298,uVar3);
        local_328 = local_298;
        FUN_140041c60(local_288,&DAT_141dd43d8);
        local_320 = local_288;
        FUN_140e609c0(local_res8);
        uVar3 = FUN_140e634e0(local_res8,local_res10,&local_378,2,CONCAT44(uVar11,DAT_1419ff4f8),
                              &local_328);
        FUN_140041c60(uVar4,uVar3);
        FUN_140e60910(1);
        local_338 = 0x1df;
        uVar3 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a748);
        FUN_140044220(uVar3,1);
        local_338 = 0x1e0;
      }
      else if (iVar2 == 1) {
        local_338 = 0x1e4;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
        local_208 = uVar4;
        FUN_1400441d0(local_298,&DAT_141dc6720);
        local_328 = local_298;
        uVar6 = CONCAT44(uVar11,DAT_141a0a0d8);
        uVar5 = FUN_140e634e0(local_res8,local_res10,&local_378,1,uVar6,&local_328);
        uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
        uVar5 = FUN_140087a30(&local_2c8,uVar5,2);
        uVar10 = FUN_140e851f0(uVar4,uVar5,DAT_141955260,1);
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        if (uVar10 < 0x80000000) {
          local_338 = 0x1e6;
          if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_358);
          }
          local_358 = 0;
          local_350 = 0;
          local_34c = 5;
          uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          FUN_140041c60(local_288,uVar5);
          local_320 = local_288;
          FUN_140041c60(&local_278,&DAT_141dd4398);
          local_318 = &local_278;
          FUN_1400441d0(local_268,&DAT_141dc6720);
          local_310 = local_268;
          uVar6 = CONCAT44(uVar11,DAT_1419ff3d8);
          FUN_140e634e0(local_res8,local_res10,&local_358,3,uVar6,&local_320);
          uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
          local_338 = 0x1e8;
          if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_378);
          }
          local_378 = 0;
          local_370 = 0;
          local_36c = 5;
          FUN_140041c60(local_298,uVar5);
          local_328 = local_298;
          FUN_140041c60(local_288,&DAT_141dd4378);
          local_320 = local_288;
          ppuVar22 = &local_328;
          uVar18 = CONCAT44(uVar11,DAT_1419ff4f8);
          uVar5 = FUN_140e634e0(local_res8,local_res10,&local_378,2,uVar18,ppuVar22);
          cVar1 = FUN_140e491e0(uVar5);
          if (cVar1 == '\0') {
            local_338 = 0x1ea;
            if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_358);
            }
            local_358 = 0;
            local_350 = 0;
            local_34c = 5;
            uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            local_35c = 6;
            local_368 = local_res8;
            uVar18 = uVar18 & 0xffffffffffffff00;
            FUN_140e87440(&local_368,DAT_1419fe0e8,0x80000000,&local_1f8,uVar18,
                          (ulonglong)ppuVar22 & 0xffffffffffffff00);
            uVar11 = (undefined4)(uVar18 >> 0x20);
            if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_368);
            }
            FUN_140041c60(&local_278,uVar3);
            local_318 = &local_278;
            FUN_140041c60(local_268,&DAT_141dd43d8);
            local_310 = local_268;
            uVar5 = CONCAT44(uVar11,DAT_1419ff4f8);
            uVar3 = FUN_140e634e0(local_res8,local_res10,&local_358,2,uVar5,&local_318);
            uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
            local_1fc = 0;
            local_208 = 0x4020000000000000;
            local_res20 = 8;
            FUN_140042560(&local_208,uVar3);
            FUN_1400460e0(&local_1f8,&local_208);
            local_res20 = 0;
            if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_208);
            }
            FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_1f8);
            local_338 = 0x1eb;
            if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_378);
            }
            local_378 = 0;
            local_370 = 0;
            local_36c = 5;
            uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            FUN_140041c60(local_298,uVar3);
            local_328 = local_298;
            FUN_140041c60(local_288,&DAT_141dd4378);
            local_320 = local_288;
            FUN_1400441d0(&local_278,&DAT_1419df7c0);
            local_318 = &local_278;
            ppuVar22 = &local_328;
            uVar18 = CONCAT44(uVar11,DAT_1419ff3d8);
            FUN_140e634e0(local_res8,local_res10,&local_378,3,uVar18,ppuVar22);
            local_338 = 0x1ed;
            if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_378);
            }
            local_378 = 0;
            local_370 = 0;
            local_36c = 5;
            if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_358);
            }
            local_358 = 0;
            local_350 = 0;
            local_34c = 5;
            if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            local_2a8 = 0;
            local_2a0 = 0;
            local_29c = 5;
            uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            local_35c = 6;
            local_368 = local_res8;
            uVar17 = (ulonglong)ppuVar22 & 0xffffffffffffff00;
            uVar18 = uVar18 & 0xffffffffffffff00;
            FUN_140e87440(&local_368,DAT_1419fe0e8,0x80000000,&local_1b8,uVar18,uVar17);
            if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_368);
            }
            FUN_140041c60(local_298,uVar3);
            local_328 = local_298;
            FUN_140041c60(local_288,&DAT_141dd43d8);
            local_320 = local_288;
            local_35c = 0xf;
            local_368 = (longlong *)0x10000010000017c;
            FUN_140041c60(&local_278,&local_368);
            if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_368);
            }
            local_318 = &local_278;
            local_35c = 6;
            local_368 = local_res8;
            uVar17 = uVar17 & 0xffffffffffffff00;
            uVar18 = uVar18 & 0xffffffffffffff00;
            FUN_140e87440(&local_368,DAT_1419fe158,0x80000000,&local_1c8,uVar18,uVar17);
            if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_368);
            }
            local_35c = 6;
            local_368 = local_res8;
            uVar18 = uVar18 & 0xffffffffffffff00;
            FUN_140e87440(&local_368,DAT_141a1b910,0x80000000,&local_108,uVar18,
                          uVar17 & 0xffffffffffffff00);
            uVar11 = (undefined4)(uVar18 >> 0x20);
            if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_368);
            }
            uVar5 = CONCAT44(uVar11,DAT_141a047c8);
            uVar3 = FUN_140e634e0(local_res8,local_res10,&local_2a8,1,uVar5,&local_318);
            uVar6 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),DAT_1419ff4f8);
            uVar5 = FUN_140e634e0(local_res8,local_res10,&local_358,2,uVar6,&local_328);
            uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
            FUN_1400424a0(&local_2d8,uVar5);
            local_res20 = 0x10;
            FUN_140042560(&local_2d8,uVar3);
            FUN_1400424a0(&local_368,&local_1b8);
            local_res20 = 0x30;
            FUN_1400460e0(&local_368,&local_2d8);
            FUN_140041c60(local_268,&local_368);
            local_res20 = 0x10;
            if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_368);
            }
            if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2d8);
            }
            local_310 = local_268;
            FUN_140041c60(local_258,&local_1c8);
            local_308 = local_258;
            FUN_140041c60(local_248,&local_108);
            local_300 = local_248;
            local_35c = 0xf;
            local_368 = (longlong *)0x100000000000121;
            FUN_140041c60(local_238,&local_368);
            if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_368);
            }
            local_2f8 = local_238;
            ppuVar21 = (undefined1 **)CONCAT44(uVar11,DAT_141a0a7c8);
            uVar3 = FUN_140e634e0(local_res8,local_res10,&local_378,4,ppuVar21,&local_310);
            iVar2 = FUN_140e63cb0(&local_2c8,&local_res8,&local_res10,uVar3);
            if (0 < iVar2) {
              do {
                uVar11 = (undefined4)((ulonglong)ppuVar21 >> 0x20);
                local_338 = 0x1ef;
                if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1d8);
                }
                local_1d8 = 0;
                local_1d0 = 0;
                local_1cc = 5;
                uVar3 = (**(code **)(*local_res10 + 8))(local_res10,DAT_1419fd438);
                uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a748);
                FUN_140041c60(local_228,uVar3);
                local_2f0 = local_228;
                FUN_140041c60(local_218,&DAT_141dd43d8);
                local_2e8 = local_218;
                FUN_140e609c0(local_res8);
                ppuVar22 = &local_2f0;
                uVar18 = CONCAT44(uVar11,DAT_1419ff4f8);
                uVar6 = FUN_140e634e0(local_res8,local_res10,&local_1d8,2,uVar18,ppuVar22);
                FUN_140041c60(uVar5,uVar6);
                FUN_140e60910(1);
                local_338 = 0x1f0;
                uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
                local_35c = 6;
                local_368 = local_res10;
                uVar18 = uVar18 & 0xffffffffffffff00;
                FUN_140e87440(&local_368,DAT_141a0a828,0x80000000,&local_118,uVar18,
                              (ulonglong)ppuVar22 & 0xffffffffffffff00);
                uVar11 = (undefined4)(uVar18 >> 0x20);
                if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_368);
                }
                FUN_140e609c0(local_res8);
                FUN_140041c60(uVar5,&local_118);
                FUN_140e60910(1);
                local_338 = 0x1f1;
                if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_378);
                }
                local_378 = 0;
                local_370 = 0;
                local_36c = 5;
                uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
                FUN_140041c60(local_298,uVar3);
                local_328 = local_298;
                FUN_140041c60(local_288,&DAT_141dd4318);
                local_320 = local_288;
                FUN_140e609c0(local_res8);
                uVar20 = CONCAT44(uVar11,DAT_1419ff4f8);
                uVar6 = FUN_140e634e0(local_res8,local_res10,&local_378,2,uVar20,&local_328);
                uVar11 = (undefined4)((ulonglong)uVar20 >> 0x20);
                FUN_140041c60(uVar5,uVar6);
                FUN_140e60910(1);
                local_338 = 499;
                if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_378);
                }
                local_378 = 0;
                local_370 = 0;
                local_36c = 5;
                uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
                FUN_140041c60(local_298,uVar3);
                local_328 = local_298;
                FUN_140041c60(local_288,&DAT_141dd43d8);
                local_320 = local_288;
                FUN_140e609c0(local_res8);
                ppuVar21 = (undefined1 **)CONCAT44(uVar11,DAT_1419ff4f8);
                uVar3 = FUN_140e634e0(local_res8,local_res10,&local_378,2,ppuVar21,&local_328);
                local_1fc = 0;
                local_208 = 0x4018000000000000;
                local_res20 = 0x40;
                FUN_140042560(&local_208,uVar3);
                FUN_140041c60(uVar5,&local_208);
                if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_208);
                }
                FUN_140e60910(1);
                local_338 = 500;
                uVar3 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
                FUN_140044220(uVar3,0xfffffffc);
                cVar1 = FUN_140e643f0(&local_2c8,&local_res8,&local_res10);
              } while (cVar1 != '\0');
            }
            FUN_140e63970(&local_2c8,&local_res8,&local_res10);
            if (local_2b8 != 0) {
              FUN_140e4cd60();
            }
          }
          else {
            local_338 = 0x1f8;
            if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_378);
            }
            uVar11 = (undefined4)(uVar18 >> 0x20);
            local_378 = 0;
            local_370 = 0;
            local_36c = 5;
            uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
            FUN_1400441d0(local_298,&DAT_141dc6720);
            local_328 = local_298;
            ppuVar22 = &local_328;
            ppuVar21 = (undefined1 **)CONCAT44(uVar11,DAT_141a0a0d8);
            uVar5 = FUN_140e634e0(local_res8,local_res10,&local_378,1,ppuVar21,ppuVar22);
            uVar5 = FUN_1400b46b0(&local_2c8,uVar5,0x400c000000000000);
            uVar10 = FUN_140e851f0(uVar4,uVar5,DAT_141955260,1);
            if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2c8);
            }
            if (uVar10 < 0x80000000) {
              local_338 = 0x1fa;
              if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_358);
              }
              local_358 = 0;
              local_350 = 0;
              local_34c = 5;
              uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
              local_35c = 6;
              local_368 = local_res8;
              uVar18 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
              FUN_140e87440(&local_368,DAT_1419fe0e8,0x80000000,&local_1f8,uVar18,
                            (ulonglong)ppuVar22 & 0xffffffffffffff00);
              uVar11 = (undefined4)(uVar18 >> 0x20);
              if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_368);
              }
              FUN_140041c60(local_288,uVar5);
              local_320 = local_288;
              FUN_140041c60(&local_278,&DAT_141dd43d8);
              local_318 = &local_278;
              ppuVar21 = (undefined1 **)CONCAT44(uVar11,DAT_1419ff4f8);
              uVar5 = FUN_140e634e0(local_res8,local_res10,&local_358,2,ppuVar21,&local_320);
              local_1fc = 0;
              local_208 = 0x3ff0000000000000;
              local_res20 = 0x100;
              FUN_140042560(&local_208,uVar5);
              FUN_1400424a0(&local_368,&local_208);
              local_res20 = 0x300;
              FUN_140042560(&local_368,uVar3);
              FUN_1400462a0(&local_1f8,&local_368);
              local_res20 = 0x100;
              if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_368);
              }
              if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_208);
              }
              FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_1f8);
            }
          }
        }
        else {
          local_338 = 0x201;
          if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_378);
          }
          local_378 = 0;
          local_370 = 0;
          local_36c = 5;
          if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_358);
          }
          local_358 = 0;
          local_350 = 0;
          local_34c = 5;
          if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          local_2a8 = 0;
          local_2a0 = 0;
          local_29c = 5;
          uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          FUN_140041c60(local_298,uVar5);
          local_328 = local_298;
          FUN_140041c60(local_288,&DAT_141dd4318);
          local_320 = local_288;
          FUN_140041c60(&local_278,uVar5);
          local_318 = &local_278;
          FUN_140041c60(local_268,&DAT_141dd4388);
          local_310 = local_268;
          FUN_140041c60(local_258,uVar5);
          local_308 = local_258;
          FUN_140041c60(local_248,&DAT_141dd4318);
          local_300 = local_248;
          uVar20 = CONCAT44(uVar11,DAT_1419ff4f8);
          uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2a8,2,uVar20,&local_318);
          uVar11 = (undefined4)((ulonglong)uVar20 >> 0x20);
          local_2cc = 0;
          local_2d8 = 0x3ff0000000000000;
          local_res20 = 0x400;
          FUN_140042560(&local_2d8,uVar6);
          uVar20 = CONCAT44(uVar11,DAT_1419ff4f8);
          uVar6 = FUN_140e634e0(local_res8,local_res10,&local_358,2,uVar20,&local_328);
          uVar11 = (undefined4)((ulonglong)uVar20 >> 0x20);
          FUN_1400424a0(&local_368,uVar6);
          local_res20 = 0xc00;
          FUN_1400460e0(&local_368,&local_2d8);
          FUN_140041c60(local_238,&local_368);
          local_res20 = 0x400;
          if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_368);
          }
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          local_2f8 = local_238;
          ppuVar22 = &local_308;
          uVar18 = CONCAT44(uVar11,DAT_1419ff3d8);
          FUN_140e634e0(local_res8,local_res10,&local_378,3,uVar18,ppuVar22);
          local_338 = 0x203;
          if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_378);
          }
          local_378 = 0;
          local_370 = 0;
          local_36c = 5;
          local_35c = 6;
          local_368 = local_res8;
          uVar18 = uVar18 & 0xffffffffffffff00;
          FUN_140e87440(&local_368,DAT_1419fe0e8,0x80000000,&local_1f8,uVar18,
                        (ulonglong)ppuVar22 & 0xffffffffffffff00);
          uVar11 = (undefined4)(uVar18 >> 0x20);
          if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_368);
          }
          FUN_140041c60(local_298,uVar5);
          local_328 = local_298;
          FUN_140041c60(local_288,&DAT_141dd43d8);
          local_320 = local_288;
          uVar20 = CONCAT44(uVar11,DAT_1419ff4f8);
          uVar6 = FUN_140e634e0(local_res8,local_res10,&local_378,2,uVar20,&local_328);
          uVar11 = (undefined4)((ulonglong)uVar20 >> 0x20);
          local_2cc = 0;
          local_2d8 = 0x3fd0000000000000;
          local_res20 = 0x1000;
          FUN_140042560(&local_2d8,uVar6);
          FUN_1400424a0(&local_368,&local_2d8);
          local_res20 = 0x3000;
          FUN_140042560(&local_368,uVar3);
          FUN_1400460e0(&local_1f8,&local_368);
          local_res20 = 0x1000;
          if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_368);
          }
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_1f8);
          local_338 = 0x204;
          if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_378);
          }
          local_378 = 0;
          local_370 = 0;
          local_36c = 5;
          FUN_140041c60(local_298,uVar5);
          local_328 = local_298;
          FUN_140041c60(local_288,&DAT_141dd4398);
          local_320 = local_288;
          local_278 = FUN_140e794b0(&DAT_bff0000000000000,0);
          if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_278);
          }
          local_26c = 0;
          local_318 = &local_278;
          ppuVar22 = &local_328;
          FUN_140e634e0(local_res8,local_res10,&local_378,3,CONCAT44(uVar11,DAT_1419ff3d8),ppuVar22)
          ;
          local_338 = 0x206;
          if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_378);
          }
          local_378 = 0;
          local_370 = 0;
          local_36c = 5;
          FUN_1400441d0(local_298,&DAT_1419e6820);
          local_328 = local_298;
          ppuVar21 = &local_328;
          uVar3 = gml_Script_choose_weighted(local_res8,local_res10,&local_378,1,ppuVar21);
          uVar11 = (undefined4)((ulonglong)ppuVar21 >> 0x20);
          cVar1 = FUN_140e491e0(uVar3);
          if (cVar1 != '\0') {
            local_338 = 0x207;
            if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_358);
            }
            local_358 = 0;
            local_350 = 0;
            local_34c = 5;
            if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            local_2a8 = 0;
            local_2a0 = 0;
            local_29c = 5;
            uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            FUN_140041c60(local_288,uVar3);
            local_320 = local_288;
            FUN_140041c60(&local_278,&DAT_141dd4388);
            local_318 = &local_278;
            FUN_140041c60(local_268,uVar3);
            local_310 = local_268;
            FUN_140041c60(local_258,&DAT_141dd4388);
            local_308 = local_258;
            uVar5 = CONCAT44(uVar11,DAT_1419ff4f8);
            uVar3 = FUN_140e634e0(local_res8,local_res10,&local_2a8,2,uVar5,&local_320);
            uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
            uVar3 = FUN_140087a30(&local_2c8,uVar3,0xffffffff);
            FUN_140041c60(local_248,uVar3);
            if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2c8);
            }
            local_300 = local_248;
            ppuVar22 = &local_310;
            FUN_140e634e0(local_res8,local_res10,&local_358,3,CONCAT44(uVar11,DAT_1419ff3d8),
                          ppuVar22);
          }
          local_338 = 0x209;
          if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_378);
          }
          local_378 = 0;
          local_370 = 0;
          local_36c = 5;
          FUN_1400441d0(local_298,&DAT_1419e67f0);
          local_328 = local_298;
          ppuVar21 = &local_328;
          uVar3 = gml_Script_choose_weighted(local_res8,local_res10,&local_378,1,ppuVar21);
          cVar1 = FUN_140e491e0(uVar3);
          if (cVar1 != '\0') {
            local_338 = 0x20c;
            if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_358);
            }
            local_358 = 0;
            local_350 = 0;
            local_34c = 5;
            local_35c = 6;
            local_368 = local_res8;
            uVar17 = (ulonglong)ppuVar22 & 0xffffffffffffff00;
            uVar18 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
            FUN_140e87440(&local_368,DAT_1419fe0e8,0x80000000,&local_1b8,uVar18,uVar17);
            if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_368);
            }
            local_35c = 6;
            local_368 = local_res8;
            uVar18 = uVar18 & 0xffffffffffffff00;
            FUN_140e87440(&local_368,DAT_1419fe158,0x80000000,&local_1c8,uVar18,
                          uVar17 & 0xffffffffffffff00);
            uVar11 = (undefined4)(uVar18 >> 0x20);
            if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_368);
            }
            FUN_140041c60(local_288,&local_1b8);
            local_320 = local_288;
            FUN_140041c60(&local_278,&local_1c8);
            local_318 = &local_278;
            FUN_140041c60(local_268,&DAT_141dd4338);
            local_310 = local_268;
            local_35c = 0xf;
            local_368 = (longlong *)0x1000000000000ab;
            FUN_140041c60(local_258,&local_368);
            if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_368);
            }
            local_308 = local_258;
            ppuVar22 = &local_320;
            uVar18 = CONCAT44(uVar11,DAT_141a0a7c8);
            uVar3 = FUN_140e634e0(local_res8,local_res10,&local_358,4,uVar18,ppuVar22);
            iVar2 = FUN_140e63cb0(local_e8,&local_res8,&local_res10,uVar3);
            if (0 < iVar2) {
              do {
                local_338 = 0x20e;
                uVar3 = (**(code **)(*local_res10 + 8))(local_res10,DAT_1419f5ef8);
                uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
                FUN_140e609c0(local_res8);
                local_2d8 = FUN_140e794b0(0x3fc999999999999a,0);
                local_2cc = 0;
                local_res20 = 0x8000;
                FUN_140042560(&local_2d8,uVar3);
                FUN_140041c60(uVar4,&local_2d8);
                if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2d8);
                }
                FUN_140e60910(1);
                local_338 = 0x20f;
                puVar7 = (ulonglong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
                uVar17 = FUN_140e794b0(0,0);
                if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar7);
                }
                *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                *puVar7 = uVar17 ^ 0x8000000000000000;
                local_338 = 0x211;
                puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f310);
                if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar8);
                }
                *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
                *puVar8 = 0x3fb999999999999a;
                local_338 = 0x213;
                local_16c = 0xf;
                local_178 = 0x100000100000177;
                FUN_140041c60(&local_158,&local_178);
                if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_178);
                }
                FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_158);
                local_338 = 0x214;
                FUN_140044220(&local_128,0);
                FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_128);
                local_338 = 0x215;
                if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_378);
                }
                local_378 = 0;
                local_370 = 0;
                local_36c = 5;
                local_18c = 6;
                local_198 = local_res8;
                uVar18 = uVar18 & 0xffffffffffffff00;
                FUN_140e87440(&local_198,DAT_141a0a728,0x80000000,&local_138,uVar18,
                              (ulonglong)ppuVar22 & 0xffffffffffffff00);
                uVar11 = (undefined4)(uVar18 >> 0x20);
                if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_198);
                }
                FUN_140041c60(local_298,&local_138);
                local_328 = local_298;
                ppuVar22 = &local_328;
                uVar18 = CONCAT44(uVar11,DAT_141a049b8);
                puVar8 = (undefined8 *)
                         FUN_140e634e0(local_res8,local_res10,&local_378,1,uVar18,ppuVar22);
                if ((*(uint *)((longlong)puVar8 + 0xc) & 0xffffff) == 0) {
                  uVar3 = *puVar8;
                }
                else {
                  uVar3 = FUN_140e4b060(puVar8);
                }
                uVar11 = FUN_140e79480(uVar3);
                FUN_140041cb0(&local_148,uVar11);
                FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_148);
                do {
                  local_338 = 0x219;
                  uVar3 = (**(code **)(*local_res10 + 8))(local_res10,DAT_1419f5ef8);
                  local_17c = 6;
                  local_188 = local_res8;
                  uVar17 = (ulonglong)ppuVar22 & 0xffffffffffffff00;
                  uVar18 = uVar18 & 0xffffffffffffff00;
                  FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_1f8,uVar18,uVar17);
                  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_188);
                  }
                  local_35c = 0;
                  local_368 = (longlong *)0x4000000000000000;
                  local_res20 = 0x10000;
                  FUN_140042560(&local_368,uVar3);
                  FUN_1400460e0(&local_1f8,&local_368);
                  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_368);
                  }
                  FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_1f8);
                  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_378);
                  }
                  local_378 = 0;
                  local_370 = 0;
                  local_36c = 5;
                  local_19c = 6;
                  local_1a8 = local_res8;
                  uVar17 = uVar17 & 0xffffffffffffff00;
                  uVar18 = uVar18 & 0xffffffffffffff00;
                  FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_1b8,uVar18,uVar17);
                  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_1a8);
                  }
                  local_1dc = 6;
                  local_1e8 = local_res8;
                  uVar18 = uVar18 & 0xffffffffffffff00;
                  FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_1c8,uVar18,
                                uVar17 & 0xffffffffffffff00);
                  uVar11 = (undefined4)(uVar18 >> 0x20);
                  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_1e8);
                  }
                  FUN_140041c60(local_298,&local_1b8);
                  local_328 = local_298;
                  FUN_140041c60(local_288,&local_1c8);
                  local_320 = local_288;
                  local_2bc = 0xf;
                  local_2c8 = (longlong *)0x100000000000149;
                  FUN_140041c60(&local_278,&local_2c8);
                  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2c8);
                  }
                  local_318 = &local_278;
                  ppuVar22 = &local_328;
                  uVar18 = CONCAT44(uVar11,DAT_141a12628);
                  uVar3 = FUN_140e634e0(local_res8,local_res10,&local_378,3,uVar18,ppuVar22);
                  cVar1 = FUN_140e491e0(uVar3);
                } while (cVar1 != '\0');
                cVar1 = FUN_140e643f0(local_e8,&local_res8,&local_res10);
              } while (cVar1 != '\0');
              param_3 = local_res18;
              uVar4 = local_208;
            }
            FUN_140e63970(local_e8,&local_res8,&local_res10);
            if (local_d8 != 0) {
              FUN_140e4cd60();
            }
          }
          local_338 = 0x221;
          if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_378);
          }
          local_378 = 0;
          local_370 = 0;
          local_36c = 5;
          FUN_1400441d0(local_298,&DAT_1419e67f0);
          local_328 = local_298;
          ppuVar21 = &local_328;
          uVar3 = gml_Script_choose_weighted(local_res8,local_res10,&local_378,1,ppuVar21);
          cVar1 = FUN_140e491e0(uVar3);
          if (cVar1 != '\0') {
            local_338 = 0x223;
            if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_358);
            }
            local_358 = 0;
            local_350 = 0;
            local_34c = 5;
            local_2bc = 6;
            local_2c8 = local_res8;
            uVar17 = (ulonglong)ppuVar22 & 0xffffffffffffff00;
            uVar18 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
            FUN_140e87440(&local_2c8,DAT_1419fe0e8,0x80000000,&local_1b8,uVar18,uVar17);
            if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2c8);
            }
            local_2bc = 6;
            local_2c8 = local_res8;
            uVar18 = uVar18 & 0xffffffffffffff00;
            FUN_140e87440(&local_2c8,DAT_1419fe158,0x80000000,&local_1c8,uVar18,
                          uVar17 & 0xffffffffffffff00);
            uVar11 = (undefined4)(uVar18 >> 0x20);
            if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2c8);
            }
            FUN_140041c60(local_288,&local_1b8);
            local_320 = local_288;
            FUN_140041c60(&local_278,&local_1c8);
            local_318 = &local_278;
            FUN_140041c60(local_268,&DAT_141dd43c8);
            local_310 = local_268;
            local_2bc = 0xf;
            local_2c8 = (longlong *)0x1000000000000ab;
            FUN_140041c60(local_258,&local_2c8);
            if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2c8);
            }
            local_308 = local_258;
            ppuVar22 = &local_320;
            ppuVar21 = (undefined1 **)CONCAT44(uVar11,DAT_141a0a7c8);
            uVar3 = FUN_140e634e0(local_res8,local_res10,&local_358,4,ppuVar21,ppuVar22);
            iVar2 = FUN_140e63cb0(local_e8,&local_res8,&local_res10,uVar3);
            if (0 < iVar2) {
              do {
                local_338 = 0x225;
                uVar3 = (**(code **)(*local_res10 + 8))(local_res10,DAT_1419f5ef8);
                uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
                FUN_140e609c0(local_res8);
                local_368 = (longlong *)FUN_140e794b0(0x3fc999999999999a,0);
                local_35c = 0;
                local_res20 = 0x20000;
                FUN_140042560(&local_368,uVar3);
                FUN_140041c60(uVar4,&local_368);
                if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_368);
                }
                FUN_140e60910(1);
                local_338 = 0x226;
                puVar7 = (ulonglong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
                uVar18 = FUN_140e794b0(0,0);
                if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar7);
                }
                *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                *puVar7 = uVar18 ^ 0x8000000000000000;
                local_338 = 0x228;
                puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f310);
                if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar8);
                }
                *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
                *puVar8 = 0x3fb999999999999a;
                local_338 = 0x22a;
                local_2bc = 0xf;
                local_2c8 = (longlong *)0x100000100000178;
                FUN_140041c60(&local_158,&local_2c8);
                if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2c8);
                }
                FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_158);
                local_338 = 0x22b;
                FUN_140044220(&local_128,0);
                FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_128);
                local_338 = 0x22c;
                if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_378);
                }
                local_378 = 0;
                local_370 = 0;
                local_36c = 5;
                local_1dc = 6;
                local_1e8 = local_res8;
                uVar18 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
                FUN_140e87440(&local_1e8,DAT_141a0a728,0x80000000,&local_138,uVar18,
                              (ulonglong)ppuVar22 & 0xffffffffffffff00);
                uVar11 = (undefined4)(uVar18 >> 0x20);
                if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1e8);
                }
                FUN_140041c60(local_298,&local_138);
                local_328 = local_298;
                ppuVar22 = &local_328;
                ppuVar21 = (undefined1 **)CONCAT44(uVar11,DAT_141a049b8);
                puVar8 = (undefined8 *)
                         FUN_140e634e0(local_res8,local_res10,&local_378,1,ppuVar21,ppuVar22);
                if ((*(uint *)((longlong)puVar8 + 0xc) & 0xffffff) == 0) {
                  uVar3 = *puVar8;
                }
                else {
                  uVar3 = FUN_140e4b060(puVar8);
                }
                uVar11 = FUN_140e79480(uVar3);
                FUN_140041cb0(&local_148,uVar11);
                FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_148);
                do {
                  local_338 = 0x230;
                  uVar3 = (**(code **)(*local_res10 + 8))(local_res10,DAT_1419f5ef8);
                  local_19c = 6;
                  local_1a8 = local_res8;
                  uVar17 = (ulonglong)ppuVar22 & 0xffffffffffffff00;
                  uVar18 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
                  FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_1f8,uVar18,uVar17);
                  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_1a8);
                  }
                  local_2cc = 0;
                  local_2d8 = 0x4000000000000000;
                  local_res20 = 0x40000;
                  FUN_140042560(&local_2d8,uVar3);
                  FUN_1400460e0(&local_1f8,&local_2d8);
                  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2d8);
                  }
                  FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_1f8);
                  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_378);
                  }
                  local_378 = 0;
                  local_370 = 0;
                  local_36c = 5;
                  local_17c = 6;
                  local_188 = local_res8;
                  uVar17 = uVar17 & 0xffffffffffffff00;
                  uVar18 = uVar18 & 0xffffffffffffff00;
                  FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_1b8,uVar18,uVar17);
                  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_188);
                  }
                  local_18c = 6;
                  local_198 = local_res8;
                  uVar18 = uVar18 & 0xffffffffffffff00;
                  FUN_140e87440(&local_198,DAT_1419fe158,0x80000000,&local_1c8,uVar18,
                                uVar17 & 0xffffffffffffff00);
                  uVar11 = (undefined4)(uVar18 >> 0x20);
                  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_198);
                  }
                  FUN_140041c60(local_298,&local_1b8);
                  local_328 = local_298;
                  FUN_140041c60(local_288,&local_1c8);
                  local_320 = local_288;
                  local_16c = 0xf;
                  local_178 = 0x100000000000149;
                  FUN_140041c60(&local_278,&local_178);
                  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_178);
                  }
                  local_318 = &local_278;
                  ppuVar22 = &local_328;
                  ppuVar21 = (undefined1 **)CONCAT44(uVar11,DAT_141a12628);
                  uVar3 = FUN_140e634e0(local_res8,local_res10,&local_378,3,ppuVar21,ppuVar22);
                  cVar1 = FUN_140e491e0(uVar3);
                } while (cVar1 != '\0');
                cVar1 = FUN_140e643f0(local_e8,&local_res8,&local_res10);
              } while (cVar1 != '\0');
              param_3 = local_res18;
              uVar4 = local_208;
            }
            FUN_140e63970(local_e8,&local_res8,&local_res10);
            if (local_d8 != 0) {
              FUN_140e4cd60();
            }
          }
        }
        uVar11 = (undefined4)((ulonglong)ppuVar21 >> 0x20);
        local_338 = 0x23a;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        FUN_1400441d0(local_298,&DAT_141dc6720);
        local_328 = local_298;
        uVar3 = FUN_140e634e0(local_res8,local_res10,&local_378,1,CONCAT44(uVar11,DAT_141a0a0d8),
                              &local_328);
        uVar3 = FUN_140087a30(&local_2c8,uVar3,6);
        uVar10 = FUN_140e851f0(uVar4,uVar3,DAT_141955260,1);
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        if (uVar10 < 0x80000000) {
          local_338 = 0x23c;
          if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_358);
          }
          local_358 = 0;
          local_350 = 0;
          local_34c = 5;
          (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
          FUN_1400441d0(local_288,&DAT_1419e6850);
          local_320 = local_288;
          FUN_140041c60(&local_278,&DAT_1419df7b0);
          local_318 = &local_278;
          gml_Script_truestate_begin_step(local_res8,local_res10,&local_358,2,&local_320);
        }
        local_338 = 0x240;
      }
      else if (iVar2 == 2) {
        local_338 = 0x244;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        uVar3 = FUN_140042490(local_res8,DAT_1419f5b18);
        FUN_140e63610(local_res8,local_res10,&local_378,0,uVar3,0);
        uVar11 = (undefined4)((ulonglong)uVar3 >> 0x20);
        local_338 = 0x245;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        uVar3 = FUN_140042490(local_res8,DAT_1419fd3b8);
        FUN_1400441d0(local_298,&DAT_141dc6720);
        local_328 = local_298;
        ppuVar22 = &local_328;
        uVar18 = CONCAT44(uVar11,DAT_141a0a0d8);
        uVar4 = FUN_140e634e0(local_res8,local_res10,&local_378,1,uVar18,ppuVar22);
        uVar4 = FUN_140087a30(&local_2c8,uVar4,2);
        cVar1 = FUN_140046bc0(uVar3,uVar4);
        FUN_140041b30(&local_2c8);
        if (cVar1 != '\0') {
          local_338 = 0x246;
          if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_358);
          }
          local_358 = 0;
          local_350 = 0;
          local_34c = 5;
          if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          local_2a8 = 0;
          local_2a0 = 0;
          local_29c = 5;
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          local_1d8 = 0;
          local_1d0 = 0;
          local_1cc = 5;
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          local_168 = 0;
          local_160 = 0;
          local_15c = 5;
          uVar3 = FUN_140042490(local_res8,DAT_1419fd438);
          FUN_1400ec6d0(&local_2c8,local_res8);
          uVar17 = (ulonglong)ppuVar22 & 0xffffffffffffff00;
          uVar18 = uVar18 & 0xffffffffffffff00;
          FUN_140e87440(&local_2c8,DAT_1419fe0e8,0x80000000,&local_1b8,uVar18,uVar17);
          FUN_140041b30(&local_2c8);
          FUN_140041c60(local_288,uVar3);
          local_320 = local_288;
          FUN_140041c60(&local_278,&DAT_141dd43d8);
          local_318 = &local_278;
          uVar4 = FUN_140045f40(&local_1a8,0x100017c,1);
          FUN_140041c60(local_268,uVar4);
          FUN_140041b30(&local_1a8);
          local_310 = local_268;
          FUN_1400ec6d0(&local_1e8,local_res8);
          uVar18 = uVar18 & 0xffffffffffffff00;
          FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_1c8,uVar18,
                        uVar17 & 0xffffffffffffff00);
          uVar11 = (undefined4)(uVar18 >> 0x20);
          FUN_140041b30(&local_1e8);
          FUN_140041c60(local_258,uVar3);
          local_308 = local_258;
          FUN_140041c60(local_248,&DAT_141dd4398);
          local_300 = local_248;
          FUN_140041c60(local_238,uVar3);
          local_2f8 = local_238;
          FUN_140041c60(local_228,&DAT_141dd4318);
          local_2f0 = local_228;
          uVar4 = CONCAT44(uVar11,DAT_1419ff4f8);
          uVar3 = FUN_140e634e0(local_res8,local_res10,&local_1d8,2,uVar4,&local_308);
          uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
          uVar3 = FUN_140046230(&local_198,&local_1c8,uVar3);
          uVar5 = CONCAT44(uVar11,DAT_141a047c8);
          uVar4 = FUN_140e634e0(local_res8,local_res10,&local_2a8,1,uVar5,&local_310);
          uVar6 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),DAT_1419ff4f8);
          uVar5 = FUN_140e634e0(local_res8,local_res10,&local_358,2,uVar6,&local_320);
          uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
          uVar4 = FUN_1400467d0(&local_188,uVar5,uVar4);
          uVar4 = FUN_1400b46b0(&local_1a8,uVar4,0x3feccccccccccccd);
          uVar4 = FUN_140046230(&local_1e8,&local_1b8,uVar4);
          uVar5 = FUN_140045f40(&local_2c8,0x10002dc,1);
          ppuVar22 = &local_2f8;
          uVar20 = CONCAT44(uVar11,DAT_1419ff4f8);
          uVar6 = FUN_140e634e0(local_res8,local_res10,&local_168,2,uVar20,ppuVar22);
          uVar11 = (undefined4)((ulonglong)uVar20 >> 0x20);
          uVar12 = (undefined4)((ulonglong)ppuVar22 >> 0x20);
          dVar13 = (double)FUN_140041980(uVar6);
          dVar14 = (double)FUN_140041980(uVar3);
          dVar15 = (double)FUN_140041980(uVar4);
          dVar16 = (double)FUN_140041980(uVar5);
          FUN_140ec5dd0(local_res8,(int)dVar16,0,(float)dVar15,CONCAT44(uVar11,(float)dVar14),
                        CONCAT44(uVar12,0x3f800000),0x3f800000,(float)dVar13,0xffffff,0x3f800000);
          FUN_140041b30(&local_2c8);
          FUN_140041b30(&local_1e8);
          FUN_140041b30(&local_1a8);
          FUN_140041b30(&local_188);
          FUN_140041b30(&local_198);
        }
        local_338 = 0x247;
      }
      else if (iVar2 == 3) {
        local_338 = 0x24b;
      }
      break;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 4);
  FUN_140041b30(local_c8);
  FUN_140041b30(&local_168);
  FUN_140041b30(&local_1d8);
  FUN_140041b30(&local_2a8);
  FUN_140041b30(&local_358);
  FUN_140041b30(&local_378);
  FUN_140041b30(&local_148);
  FUN_140041b30(&local_138);
  FUN_140041b30(&local_128);
  FUN_140041b30(&local_118);
  FUN_140041b30(&local_108);
  FUN_140041b30(&local_1c8);
  FUN_140041b30(&local_1b8);
  FUN_140041b30(&local_f8);
  FUN_140041b30(&local_1f8);
  FUN_140041b30(&local_158);
  _eh_vector_destructor_iterator_(local_298,0x10,9,FUN_140041b30);
  FUN_140041970(&local_348);
  return param_3;
}

