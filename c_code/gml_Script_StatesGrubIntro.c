// gml_Script_StatesGrubIntro @ 0x140520730

/* WARNING: Removing unreachable block (ram,0x000140521ee7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesGrubIntro
          (longlong *param_1,longlong *param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong **pplVar8;
  double *pdVar9;
  double *pdVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong **pplVar13;
  uint uVar14;
  byte bVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  longlong *local_res8;
  longlong *local_res10;
  undefined8 *local_res18;
  uint local_res20;
  code *pcVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined8 **ppuVar26;
  longlong *local_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 local_378;
  undefined4 local_370;
  undefined4 local_36c;
  undefined8 local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  char *local_350;
  undefined4 local_348;
  double local_340;
  uint local_334;
  longlong *local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  longlong *local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  longlong *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  byte local_2bc;
  undefined8 local_2b8;
  byte local_2ac;
  undefined8 local_2a8;
  byte local_29c;
  undefined8 local_298;
  byte local_28c;
  undefined1 local_288 [12];
  byte local_27c;
  undefined8 local_278;
  byte local_26c;
  undefined1 local_268 [12];
  byte local_25c;
  undefined1 local_258 [12];
  byte local_24c;
  longlong *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  longlong *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 *local_228;
  undefined8 *local_220;
  undefined8 *local_218;
  undefined8 *local_210;
  undefined1 *local_208;
  undefined8 *local_200;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  longlong *local_1e8;
  undefined4 local_1dc;
  longlong *local_1d8;
  undefined4 local_1cc;
  double local_1c8;
  uint local_1bc;
  longlong *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  longlong *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [16];
  longlong local_d8;
  
  uVar14 = 0;
  local_res20 = 0;
  local_350 = "gml_Script_StatesClotDeath";
  local_358 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_358;
  local_348 = 0x12e;
  pcVar22 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(&local_2c8,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_22c = 0xffffff;
  local_238 = (longlong *)0x0;
  uStack_23c = 0xffffff;
  local_248 = (longlong *)0x0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  uVar16 = 0xffffff;
  bVar15 = 0xff;
  uStack_1ac = 0xffffff;
  local_1b8 = (longlong *)0x0;
  local_334 = 0xffffff;
  local_340 = 0.0;
  uStack_13c = 0xffffff;
  local_148 = (longlong *)0x0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0.0;
  local_36c = 0;
  local_378 = 0;
  local_2dc = 0;
  local_2e8 = 0;
  local_154 = 0;
  local_160 = 0;
  local_164 = 0;
  local_170 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_348 = 0x130;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_ec = *(undefined4 *)((longlong)param_5 + 0xc);
  local_f0 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
    local_f8 = *param_5;
  }
  else {
    FUN_1400419b0(&local_f8);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf53c) &&
     (_Init_thread_header(&DAT_141ddf53c), DAT_141ddf53c == -1)) {
    _DAT_141ddf4ec = 0;
    _DAT_141ddf4e0 = 0x4000000000000000;
    _DAT_141ddf500 = 0;
    _DAT_141ddf4f4 = 0;
    _DAT_141ddf504 = 1;
    _DAT_141ddf514 = 0;
    _DAT_141ddf508 = 0x3ff0000000000000;
    _DAT_141ddf518 = 2;
    _DAT_141ddf528 = 0;
    _DAT_141ddf51c = 0x4008000000000000;
    _DAT_141ddf52c = 3;
    atexit((_func_5014 *)&LAB_141481760);
    _Init_thread_footer(&DAT_141ddf53c);
  }
  uVar12 = 0;
  do {
    iVar3 = FUN_140e851f0(&DAT_141ddf4e0 + (longlong)(int)uVar12 * 0x14,&local_f8,DAT_141955260,0);
    uVar18 = (undefined4)((ulonglong)pcVar22 >> 0x20);
    if (iVar3 == 0) {
      iVar3 = *(int *)(&DAT_141ddf4f0 + (longlong)(int)uVar12 * 0x14);
      if (iVar3 == 0) {
        local_348 = 0x134;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
        if (puVar6 != &local_2b8) {
          local_308 = (longlong *)*puVar6;
          uStack_300 = puVar6[1];
          if ((1 << (local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          FUN_140041b80(&local_2b8,&local_308);
        }
        local_308 = (longlong *)CONCAT44(uRam0000000141dd3d5c,_DAT_141dd3d58);
        uStack_300 = CONCAT44(DAT_141dd3d64,uRam0000000141dd3d60);
        local_220 = &local_2b8;
        if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        FUN_140041b80(&local_2a8,&local_308);
        local_218 = &local_2a8;
        local_308 = (longlong *)CONCAT44(uRam00000001419e6084,_DAT_1419e6080);
        uStack_300 = CONCAT44(uRam00000001419e608c,uRam00000001419e6088);
        if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        FUN_140041b80(&local_298,&local_308);
        local_210 = &local_298;
        uVar5 = CONCAT44(uVar18,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_378,3,uVar5,&local_220);
        uVar16 = (undefined4)((ulonglong)uVar5 >> 0x20);
        local_348 = 0x135;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        if (puVar6 != &local_2c8) {
          local_308 = (longlong *)*puVar6;
          uStack_300 = puVar6[1];
          if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2c8);
          }
          FUN_140041b80(&local_2c8,&local_308);
        }
        local_228 = &local_2c8;
        local_308 = (longlong *)CONCAT44(uRam0000000141dd3d4c,_DAT_141dd3d48);
        uStack_300 = CONCAT44(DAT_141dd3d54,uRam0000000141dd3d50);
        if ((1 << (local_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        FUN_140041b80(&local_2b8,&local_308);
        local_308 = (longlong *)CONCAT44(uRam0000000141dc66c4,_DAT_141dc66c0);
        uStack_300 = CONCAT44(uRam0000000141dc66cc,uRam0000000141dc66c8);
        local_220 = &local_2b8;
        if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        FUN_140041b80(&local_2a8,&local_308);
        local_218 = &local_2a8;
        FUN_140e634e0(local_res8,local_res10,&local_378,3,CONCAT44(uVar16,DAT_1419ff3d8),&local_228)
        ;
        local_348 = 0x137;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd448);
        puVar11 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a748);
        FUN_140e609c0(local_res8);
        if (puVar6 != puVar11) {
          local_308 = (longlong *)*puVar6;
          uStack_300 = puVar6[1];
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar11);
          }
          FUN_140041b80(puVar11,&local_308);
        }
        FUN_140e60910(1);
        local_348 = 0x138;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd518);
        puVar11 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a858);
        FUN_140e609c0(local_res8);
        if (puVar6 != puVar11) {
          local_308 = (longlong *)*puVar6;
          uStack_300 = puVar6[1];
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar11);
          }
          FUN_140041b80(puVar11,&local_308);
        }
        FUN_140e60910(1);
        local_348 = 0x13a;
      }
      else if (iVar3 == 1) {
        local_348 = 0x13e;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd428);
        uVar5 = FUN_140e794b0(0,0x3ff0000000000000);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        *puVar6 = uVar5;
        local_348 = 0x13f;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd5d8);
        uVar5 = FUN_140e794b0(0,0x3ff0000000000000);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        *puVar6 = uVar5;
        local_348 = 0x141;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        plVar7 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
        local_368 = (longlong *)CONCAT44(uRam0000000141dc66c4,_DAT_141dc66c0);
        uStack_360 = uRam0000000141dc66c8;
        uStack_35c = uRam0000000141dc66cc;
        if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        FUN_140041b80(&local_2c8,&local_368);
        local_228 = &local_2c8;
        uVar23 = CONCAT44(uVar18,DAT_141a0a0d8);
        uVar5 = FUN_140e634e0(local_res8,local_res10,&local_378,1,uVar23,&local_228);
        uVar18 = (undefined4)((ulonglong)uVar23 >> 0x20);
        uVar12 = FUN_140e851f0(plVar7,uVar5,DAT_141955260,1);
        if (uVar12 < 0x80000000) {
          local_348 = 0x143;
          if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2e8);
          }
          local_2e8 = 0;
          local_2e0 = 0;
          local_2dc = 5;
          puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          if (puVar6 != &local_2b8) {
            local_368 = (longlong *)*puVar6;
            uStack_360 = *(undefined4 *)(puVar6 + 1);
            uStack_35c = *(undefined4 *)((longlong)puVar6 + 0xc);
            if ((1 << ((byte)_local_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            FUN_140041b80(&local_2b8,&local_368);
          }
          local_368 = (longlong *)CONCAT44(uRam0000000141dd3d4c,_DAT_141dd3d48);
          uStack_360 = uRam0000000141dd3d50;
          uStack_35c = DAT_141dd3d54;
          local_220 = &local_2b8;
          if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          FUN_140041b80(&local_2a8,&local_368);
          local_218 = &local_2a8;
          uVar5 = CONCAT44(uVar18,DAT_1419ff4f8);
          puVar6 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_2e8,2,uVar5,&local_220)
          ;
          uVar18 = (undefined4)((ulonglong)uVar5 >> 0x20);
          if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
            uVar17 = (undefined4)*puVar6;
          }
          else {
            uVar17 = FUN_140e4b060(puVar6);
          }
          dVar20 = (double)FUN_1412a79b0(uVar17,0x402e000000000000);
          if (dVar20 == 0.0) {
            local_348 = 0x145;
            if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_160);
            }
            local_160 = 0;
            local_158 = 0;
            local_154 = 5;
            if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_170);
            }
            local_170 = 0;
            local_168 = 0;
            local_164 = 5;
            puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            if (puVar6 != &local_298) {
              local_368 = (longlong *)*puVar6;
              uStack_360 = *(undefined4 *)(puVar6 + 1);
              uStack_35c = *(undefined4 *)((longlong)puVar6 + 0xc);
              if ((1 << ((byte)_local_28c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_298);
              }
              FUN_140041b80(&local_298,&local_368);
            }
            local_210 = &local_298;
            local_368 = (longlong *)CONCAT44(uRam0000000141dd3d5c,_DAT_141dd3d58);
            uStack_360 = uRam0000000141dd3d60;
            uStack_35c = DAT_141dd3d64;
            if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_288);
            }
            FUN_140041b80(local_288,&local_368);
            local_208 = local_288;
            if (puVar6 != &local_278) {
              local_368 = (longlong *)*puVar6;
              uStack_360 = *(undefined4 *)(puVar6 + 1);
              uStack_35c = *(undefined4 *)((longlong)puVar6 + 0xc);
              if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_278);
              }
              FUN_140041b80(&local_278,&local_368);
            }
            local_200 = &local_278;
            local_368 = (longlong *)CONCAT44(uRam0000000141dd3d5c,_DAT_141dd3d58);
            uStack_360 = uRam0000000141dd3d60;
            uStack_35c = DAT_141dd3d64;
            if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_268);
            }
            FUN_140041b80(local_268,&local_368);
            local_1f8 = local_268;
            uVar5 = CONCAT44(uVar18,DAT_1419ff4f8);
            puVar6 = (undefined8 *)
                     FUN_140e634e0(local_res8,local_res10,&local_170,2,uVar5,&local_210);
            uVar18 = (undefined4)((ulonglong)uVar5 >> 0x20);
            uStack_37c = *(undefined4 *)((longlong)puVar6 + 0xc);
            uStack_380 = *(undefined4 *)(puVar6 + 1);
            if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) == 0) {
              local_388 = (longlong *)*puVar6;
            }
            else {
              FUN_1400419b0(&local_388,puVar6);
            }
            local_res20 = 0x10;
            uStack_30c = 7;
            local_318 = (longlong *)CONCAT44(local_318._4_4_,0xffffffff);
            FUN_140042560(&local_388,&local_318);
            if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_318);
            }
            local_368 = local_388;
            uStack_360 = uStack_380;
            uStack_35c = uStack_37c;
            if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_258);
            }
            FUN_140041b80(local_258,&local_368);
            if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_388);
            }
            local_1f0 = local_258;
            ppuVar26 = &local_200;
            uVar24 = CONCAT44(uVar18,DAT_1419ff3d8);
            FUN_140e634e0(local_res8,local_res10,&local_160,3,uVar24,ppuVar26);
            local_348 = 0x146;
            if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_378);
            }
            local_378 = 0;
            local_370 = 0;
            local_36c = 5;
            if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2e8);
            }
            local_2e8 = 0;
            local_2e0 = 0;
            local_2dc = 5;
            puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            uStack_37c = 6;
            local_388 = local_res8;
            uVar25 = (ulonglong)ppuVar26 & 0xffffffffffffff00;
            uVar24 = uVar24 & 0xffffffffffffff00;
            FUN_140e87440(&local_388,DAT_1419fe0e8,0x80000000,&local_238,uVar24,uVar25);
            if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_388);
            }
            if (puVar6 != &local_2c8) {
              local_368 = (longlong *)*puVar6;
              uStack_360 = *(undefined4 *)(puVar6 + 1);
              uStack_35c = *(undefined4 *)((longlong)puVar6 + 0xc);
              if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2c8);
              }
              FUN_140041b80(&local_2c8,&local_368);
            }
            local_228 = &local_2c8;
            local_368 = (longlong *)CONCAT44(uRam0000000141dd3d5c,_DAT_141dd3d58);
            uStack_360 = uRam0000000141dd3d60;
            uStack_35c = DAT_141dd3d64;
            if ((1 << ((byte)_local_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            FUN_140041b80(&local_2b8,&local_368);
            uStack_37c = 6;
            local_388 = local_res8;
            uVar24 = uVar24 & 0xffffffffffffff00;
            local_220 = &local_2b8;
            FUN_140e87440(&local_388,DAT_1419fe158,0x80000000,&local_248,uVar24,
                          uVar25 & 0xffffffffffffff00);
            uVar18 = (undefined4)(uVar24 >> 0x20);
            if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_388);
            }
            uVar23 = CONCAT44(uVar18,DAT_1419ff4f8);
            uVar5 = FUN_140e634e0(local_res8,local_res10,&local_2e8,2,uVar23,&local_228);
            uVar18 = (undefined4)((ulonglong)uVar23 >> 0x20);
            local_318 = (longlong *)FUN_140e794b0(0,0x4014000000000000);
            uStack_30c = 0;
            local_res20 = 0x20;
            FUN_140042560(&local_318,uVar5);
            uStack_37c = uStack_22c;
            uStack_380 = uStack_230;
            if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
              local_388 = local_238;
            }
            else {
              FUN_1400419b0(&local_388,&local_238);
            }
            local_res20 = 0x60;
            FUN_1400460e0(&local_388,&local_318);
            local_368 = local_388;
            uStack_360 = uStack_380;
            uStack_35c = uStack_37c;
            if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            FUN_140041b80(&local_2a8,&local_368);
            local_res20 = 0x20;
            if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_388);
            }
            local_res20 = 0;
            if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_318);
            }
            local_218 = &local_2a8;
            plVar1 = (longlong *)FUN_140e794b0(0,0x4028000000000000);
            uStack_37c = uStack_23c;
            uStack_380 = uStack_240;
            if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
              local_388 = local_248;
            }
            else {
              FUN_1400419b0(&local_388,&local_248);
            }
            local_res20 = 0x80;
            uStack_30c = 0;
            local_318 = plVar1;
            FUN_1400462a0(&local_388,&local_318);
            if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_318);
            }
            local_368 = local_388;
            uStack_360 = uStack_380;
            uStack_35c = uStack_37c;
            if ((1 << ((byte)_local_28c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_298);
            }
            FUN_140041b80(&local_298,&local_368);
            local_res20 = 0;
            if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_388);
            }
            local_210 = &local_298;
            local_368 = (longlong *)CONCAT44(uRam0000000141dd3d6c,_DAT_141dd3d68);
            uStack_360 = uRam0000000141dd3d70;
            uStack_35c = DAT_141dd3d74;
            if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_288);
            }
            FUN_140041b80(local_288,&local_368);
            local_208 = local_288;
            uStack_31c = 0xf;
            local_328 = (longlong *)0x10000000000012d;
            local_368 = (longlong *)0x10000000000012d;
            uStack_360 = uStack_320;
            uStack_35c = 0xf;
            if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_278);
            }
            FUN_140041b80(&local_278,&local_368);
            local_200 = &local_278;
            uVar23 = CONCAT44(uVar18,DAT_141a0a7c8);
            uVar5 = FUN_140e634e0(local_res8,local_res10,&local_378,4,uVar23,&local_218);
            iVar3 = FUN_140e63cb0(&local_308,&local_res8,&local_res10,uVar5);
            uVar18 = (undefined4)((ulonglong)uVar23 >> 0x20);
            if (0 < iVar3) {
              do {
                uVar18 = (undefined4)((ulonglong)uVar23 >> 0x20);
                local_348 = 0x148;
                uStack_31c = 0xf;
                local_328 = (longlong *)0x100000100000062;
                local_368 = (longlong *)0x100000100000062;
                uStack_360 = uStack_320;
                uStack_35c = 0xf;
                if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_180);
                }
                FUN_140041b80(&local_180,&local_368);
                FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_180);
                local_348 = 0x149;
                if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_378);
                }
                local_378 = 0;
                local_370 = 0;
                local_36c = 5;
                puVar6 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_1419fd438);
                if (puVar6 != &local_2c8) {
                  local_368 = (longlong *)*puVar6;
                  uStack_360 = *(undefined4 *)(puVar6 + 1);
                  uStack_35c = *(undefined4 *)((longlong)puVar6 + 0xc);
                  if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2c8);
                  }
                  FUN_140041b80(&local_2c8,&local_368);
                }
                local_228 = &local_2c8;
                local_368 = (longlong *)CONCAT44(uRam0000000141dd3d5c,_DAT_141dd3d58);
                uStack_360 = uRam0000000141dd3d60;
                uStack_35c = DAT_141dd3d64;
                if ((1 << ((byte)_local_2ac & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2b8);
                }
                FUN_140041b80(&local_2b8,&local_368);
                uVar23 = CONCAT44(uVar18,DAT_1419ff4f8);
                local_220 = &local_2b8;
                puVar6 = (undefined8 *)
                         FUN_140e634e0(local_res8,local_res10,&local_378,2,uVar23,&local_228);
                if (puVar6 != &local_108) {
                  local_368 = (longlong *)*puVar6;
                  uStack_360 = *(undefined4 *)(puVar6 + 1);
                  uStack_35c = *(undefined4 *)((longlong)puVar6 + 0xc);
                  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_108);
                  }
                  FUN_140041b80(&local_108,&local_368);
                }
                FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_108);
                cVar2 = FUN_140e643f0(&local_308,&local_res8,&local_res10);
                uVar18 = (undefined4)((ulonglong)uVar23 >> 0x20);
              } while (cVar2 != '\0');
            }
            FUN_140e63970(&local_308,&local_res8,&local_res10);
            if (local_2f8 != 0) {
              FUN_140e4cd60();
            }
          }
        }
        local_348 = 0x151;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        local_368 = (longlong *)CONCAT44(uRam0000000141dc66c4,_DAT_141dc66c0);
        uStack_360 = uRam0000000141dc66c8;
        uStack_35c = uRam0000000141dc66cc;
        if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        FUN_140041b80(&local_2c8,&local_368);
        local_228 = &local_2c8;
        uVar24 = CONCAT44(uVar18,DAT_141a0a0d8);
        puVar6 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_378,1,uVar24,&local_228);
        uStack_37c = *(undefined4 *)((longlong)puVar6 + 0xc);
        uStack_380 = *(undefined4 *)(puVar6 + 1);
        if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) == 0) {
          local_388 = (longlong *)*puVar6;
        }
        else {
          FUN_1400419b0(&local_388,puVar6);
        }
        local_res20 = 0x100;
        uStack_30c = 7;
        local_318 = (longlong *)CONCAT44(local_318._4_4_,3);
        FUN_140042560(&local_388,&local_318);
        if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        uVar12 = FUN_140e851f0(plVar7,&local_388,DAT_141955260,1);
        local_res20 = 0;
        if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_388);
        }
        uVar18 = (undefined4)(uVar24 >> 0x20);
        if (uVar12 < 0x80000000) {
          local_348 = 0x153;
          plVar7 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
          local_318 = plVar7;
          if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          local_18c = 0;
          local_198 = 0x4000000000000000;
          FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_198);
          local_348 = 0x154;
          if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_378);
          }
          local_378 = 0;
          local_370 = 0;
          local_36c = 5;
          puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          if (puVar6 != &local_2c8) {
            local_368 = (longlong *)*puVar6;
            uStack_360 = *(undefined4 *)(puVar6 + 1);
            uStack_35c = *(undefined4 *)((longlong)puVar6 + 0xc);
            if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2c8);
            }
            FUN_140041b80(&local_2c8,&local_368);
          }
          local_228 = &local_2c8;
          local_368 = (longlong *)CONCAT44(uRam0000000141dd3d4c,_DAT_141dd3d48);
          uStack_360 = uRam0000000141dd3d50;
          uStack_35c = DAT_141dd3d54;
          if ((1 << ((byte)_local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          FUN_140041b80(&local_2b8,&local_368);
          ppuVar26 = &local_228;
          uVar24 = CONCAT44(uVar18,DAT_1419ff4f8);
          local_220 = &local_2b8;
          puVar6 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_378,2,uVar24,ppuVar26);
          if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
            uVar18 = (undefined4)*puVar6;
          }
          else {
            uVar18 = FUN_140e4b060(puVar6);
          }
          dVar20 = (double)FUN_1412a79b0(uVar18,0x4000000000000000);
          if (dVar20 == 0.0) {
            local_348 = 0x156;
            if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_118);
            }
            local_10c = 0;
            local_118 = 0x3ff0000000000000;
            local_348 = 0x15a;
            if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_378);
            }
            local_378 = 0;
            local_370 = 0;
            local_36c = 5;
            uStack_37c = 6;
            local_388 = local_res8;
            uVar25 = (ulonglong)ppuVar26 & 0xffffffffffffff00;
            uVar24 = uVar24 & 0xffffffffffffff00;
            FUN_140e87440(&local_388,DAT_1419fe0e8,0x80000000,&local_238,uVar24,uVar25);
            if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_388);
            }
            uStack_37c = 6;
            local_388 = local_res8;
            uVar25 = uVar25 & 0xffffffffffffff00;
            uVar24 = uVar24 & 0xffffffffffffff00;
            FUN_140e87440(&local_388,DAT_1419fe158,0x80000000,&local_248,uVar24,uVar25);
            if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_388);
            }
            uStack_37c = 6;
            local_388 = local_res8;
            uVar24 = uVar24 & 0xffffffffffffff00;
            FUN_140e87440(&local_388,DAT_141a1b910,0x80000000,&local_138,uVar24,
                          uVar25 & 0xffffffffffffff00);
            uVar16 = (undefined4)(uVar24 >> 0x20);
            if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_388);
            }
            local_368 = local_238;
            uStack_360 = uStack_230;
            uStack_35c = uStack_22c;
            if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2c8);
            }
            FUN_140041b80(&local_2c8,&local_368);
            local_228 = &local_2c8;
            local_2d8 = (longlong *)FUN_140e794b0(0,0x4024000000000000);
            uStack_37c = uStack_23c;
            uStack_380 = uStack_240;
            if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
              local_388 = local_248;
            }
            else {
              FUN_1400419b0(&local_388,&local_248);
            }
            local_res20 = 0x200;
            uStack_2cc = 0;
            FUN_1400462a0(&local_388,&local_2d8);
            if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2d8);
            }
            local_368 = local_388;
            uStack_360 = uStack_380;
            uStack_35c = uStack_37c;
            if ((1 << ((byte)_local_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            FUN_140041b80(&local_2b8,&local_368);
            if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_388);
            }
            local_368 = (longlong *)local_138;
            uStack_360 = uStack_130;
            uStack_35c = uStack_12c;
            local_220 = &local_2b8;
            if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            FUN_140041b80(&local_2a8,&local_368);
            local_218 = &local_2a8;
            uStack_31c = 0xf;
            local_328 = (longlong *)0x10000000000000f;
            local_368 = (longlong *)0x10000000000000f;
            uStack_360 = uStack_320;
            uStack_35c = 0xf;
            if ((1 << ((byte)_local_28c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_298);
            }
            FUN_140041b80(&local_298,&local_368);
            local_210 = &local_298;
            ppuVar26 = &local_228;
            uVar24 = CONCAT44(uVar16,DAT_141a0a7c8);
            puVar6 = (undefined8 *)
                     FUN_140e634e0(local_res8,local_res10,&local_378,4,uVar24,ppuVar26);
            if (puVar6 != &local_1a8) {
              local_368 = (longlong *)*puVar6;
              uStack_360 = *(undefined4 *)(puVar6 + 1);
              uStack_35c = *(undefined4 *)((longlong)puVar6 + 0xc);
              if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1a8);
              }
              FUN_140041b80(&local_1a8,&local_368);
            }
            local_348 = 0x15b;
            if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_378);
            }
            local_378 = 0;
            local_370 = 0;
            local_36c = 5;
            local_368 = (longlong *)CONCAT44(uRam00000001419e6074,_DAT_1419e6070);
            uStack_360 = uRam00000001419e6078;
            uStack_35c = uRam00000001419e607c;
            if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2c8);
            }
            FUN_140041b80(&local_2c8,&local_368);
            local_228 = &local_2c8;
            local_368 = (longlong *)CONCAT44(uRam00000001419e6084,_DAT_1419e6080);
            uStack_360 = uRam00000001419e6088;
            uStack_35c = uRam00000001419e608c;
            if ((1 << ((byte)_local_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            FUN_140041b80(&local_2b8,&local_368);
            local_220 = &local_2b8;
            uVar5 = FUN_140e78db0(&local_378,2,&local_228);
            uStack_2cc = 0;
            local_2d8 = (longlong *)0x3ff0000000000000;
            iVar3 = FUN_140e851f0(uVar5,&local_2d8,DAT_141955260,0);
            if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2d8);
            }
            if (iVar3 == 0) {
              uStack_37c = 0;
              local_388 = (longlong *)0x4046800000000000;
              pplVar8 = &local_388;
              uVar14 = 1;
            }
            else {
              uStack_2cc = 0;
              local_2d8 = (longlong *)0x4060e00000000000;
              pplVar8 = &local_2d8;
              uVar14 = 2;
            }
            uVar18 = uStack_2cc;
            uVar16 = uStack_37c;
            local_368 = *pplVar8;
            uStack_360 = *(undefined4 *)(pplVar8 + 1);
            uStack_35c = *(undefined4 *)((longlong)pplVar8 + 0xc);
            local_res20 = uVar14;
            FUN_140041b80(&local_1b8,&local_368);
            if (((uVar14 & 2) != 0) &&
               (uVar14 = uVar14 & 0xfffffffd, local_res20 = uVar14,
               (1 << ((byte)uVar18 & 0x1f) & 0x46U) != 0)) {
              FUN_140041a50(&local_2d8);
            }
            if (((uVar14 & 1) != 0) &&
               (uVar14 = uVar14 & 0xfffffffe, local_res20 = uVar14,
               (1 << ((byte)uVar16 & 0x1f) & 0x46U) != 0)) {
              FUN_140041a50(&local_388);
            }
            local_348 = 0x15c;
            dVar20 = (double)FUN_140e794b0(0,0x4014000000000000);
            if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_340);
            }
            local_334 = 0;
            local_348 = 0x15d;
            local_340 = dVar20;
            iVar3 = FUN_140e63cb0(&local_308,&local_res8,&local_res10,&local_1a8);
            uVar16 = uStack_1b0;
            plVar7 = local_1b8;
            local_188 = uStack_1ac;
            if (0 < iVar3) {
              bVar15 = (byte)uStack_1ac;
              do {
                local_348 = 0x15f;
                pplVar8 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f4e0);
                uStack_2cc = 6;
                local_2d8 = local_res10;
                ppuVar26 = (undefined8 **)((ulonglong)ppuVar26 & 0xffffffffffffff00);
                uVar24 = uVar24 & 0xffffffffffffff00;
                FUN_140e87440(&local_2d8,DAT_141a0a828,0x80000000,&local_148,uVar24,ppuVar26);
                if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2d8);
                }
                FUN_140e609c0(local_res8);
                if (&local_148 != pplVar8) {
                  local_368 = local_148;
                  uStack_360 = uStack_140;
                  uStack_35c = uStack_13c;
                  if ((1 << ((byte)*(undefined4 *)((longlong)pplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(pplVar8);
                  }
                  FUN_140041b80(pplVar8,&local_368);
                }
                FUN_140e60910(1);
                local_348 = 0x160;
                pplVar8 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
                local_1dc = 0;
                local_1e8 = (longlong *)0x3ff0000000000000;
                iVar3 = FUN_140e851f0(&local_118,&local_1e8,DAT_141955260,0);
                if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1e8);
                }
                if (iVar3 == 0) {
                  local_328 = (longlong *)FUN_140e794b0(0,0x4041800000000000);
                  uStack_31c = 0;
                  pplVar13 = &local_328;
                  uVar14 = uVar14 | 4;
                }
                else {
                  local_1d8 = (longlong *)FUN_140e79480(0);
                  local_1cc = 0;
                  pplVar13 = &local_1d8;
                  uVar14 = uVar14 | 8;
                }
                local_res20 = uVar14;
                FUN_140e609c0(local_res8);
                uStack_37c = local_188;
                uStack_380 = uVar16;
                if ((1 << (bVar15 & 0x1f) & 0x46U) == 0) {
                  local_388 = plVar7;
                }
                else {
                  FUN_1400419b0(&local_388,&local_1b8);
                }
                local_res20 = uVar14 | 0x400;
                FUN_1400460e0(&local_388,pplVar13);
                if (&local_388 != pplVar8) {
                  local_368 = local_388;
                  uStack_360 = uStack_380;
                  uStack_35c = uStack_37c;
                  if ((1 << ((byte)*(undefined4 *)((longlong)pplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(pplVar8);
                  }
                  FUN_140041b80(pplVar8,&local_368);
                }
                local_res20 = uVar14;
                if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_388);
                }
                if (((uVar14 & 8) != 0) &&
                   (uVar14 = uVar14 & 0xfffffbf7, local_res20 = uVar14,
                   (1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0)) {
                  FUN_140041a50(&local_1d8);
                }
                if (((uVar14 & 4) != 0) &&
                   (uVar14 = uVar14 & 0xfffffffb, local_res20 = uVar14,
                   (1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0)) {
                  FUN_140041a50(&local_328);
                }
                FUN_140e60910(1);
                local_348 = 0x161;
                pdVar9 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
                pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
                if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
                  dVar20 = *pdVar9;
                }
                else {
                  dVar20 = (double)FUN_140e4b060(pdVar9);
                }
                dVar21 = local_340;
                if ((local_334 & 0xffffff) != 0) {
                  dVar21 = (double)FUN_140e4b060(&local_340);
                }
                fVar19 = (float)FUN_140e78f90((float)dVar21,(float)dVar20);
                if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pdVar10);
                }
                *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
                *pdVar10 = (double)fVar19;
                local_348 = 0x162;
                pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
                if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
                  dVar20 = *pdVar9;
                }
                else {
                  dVar20 = (double)FUN_140e4b060(pdVar9);
                }
                dVar21 = local_340;
                if ((local_334 & 0xffffff) != 0) {
                  dVar21 = (double)FUN_140e4b060(&local_340);
                }
                fVar19 = (float)FUN_140e79010((float)dVar21,(float)dVar20);
                if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pdVar10);
                }
                *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
                *pdVar10 = (double)fVar19;
                cVar2 = FUN_140e643f0(&local_308,&local_res8,&local_res10);
              } while (cVar2 != '\0');
              param_3 = local_res18;
            }
            uVar16 = local_188;
            FUN_140e63970(&local_308,&local_res8,&local_res10);
            if (local_2f8 != 0) {
              FUN_140e4cd60();
            }
            plVar7 = local_318;
          }
        }
        uVar18 = (undefined4)(uVar24 >> 0x20);
        bVar15 = (byte)uVar16;
        local_348 = 0x16c;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        local_368 = (longlong *)CONCAT44(uRam0000000141dc66c4,_DAT_141dc66c0);
        uStack_360 = uRam0000000141dc66c8;
        uStack_35c = uRam0000000141dc66cc;
        if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        FUN_140041b80(&local_2c8,&local_368);
        local_228 = &local_2c8;
        ppuVar26 = &local_228;
        uVar24 = CONCAT44(uVar18,DAT_141a0a0d8);
        puVar6 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_378,1,uVar24,ppuVar26);
        uStack_37c = *(undefined4 *)((longlong)puVar6 + 0xc);
        uStack_380 = *(undefined4 *)(puVar6 + 1);
        if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) == 0) {
          local_388 = (longlong *)*puVar6;
        }
        else {
          FUN_1400419b0(&local_388,puVar6);
        }
        local_res20 = uVar14 | 0x800;
        uStack_31c = 7;
        local_328 = (longlong *)CONCAT44(local_328._4_4_,6);
        FUN_140042560(&local_388,&local_328);
        if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_328);
        }
        uVar12 = FUN_140e851f0(plVar7,&local_388,DAT_141955260,1);
        local_res20 = uVar14;
        if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_388);
        }
        if (uVar12 < 0x80000000) {
          local_348 = 0x16e;
          (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
          iVar3 = 0x96;
          do {
            iVar3 = iVar3 + -1;
            local_348 = 0x170;
            if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2e8);
            }
            local_2e8 = 0;
            local_2e0 = 0;
            local_2dc = 5;
            uStack_31c = 6;
            local_328 = local_res8;
            uVar25 = (ulonglong)ppuVar26 & 0xffffffffffffff00;
            uVar24 = uVar24 & 0xffffffffffffff00;
            FUN_140e87440(&local_328,DAT_1419fe0e8,0x80000000,&local_238,uVar24,uVar25);
            if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_328);
            }
            local_1cc = 6;
            local_1d8 = local_res8;
            uVar25 = uVar25 & 0xffffffffffffff00;
            uVar24 = uVar24 & 0xffffffffffffff00;
            FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_248,uVar24,uVar25);
            if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            local_1dc = 6;
            local_1e8 = local_res8;
            uVar24 = uVar24 & 0xffffffffffffff00;
            FUN_140e87440(&local_1e8,DAT_141a1b910,0x80000000,&local_138,uVar24,
                          uVar25 & 0xffffffffffffff00);
            uVar18 = (undefined4)(uVar24 >> 0x20);
            if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            uVar5 = FUN_140e794b0(0,0x4020000000000000);
            uStack_37c = uStack_22c;
            uStack_380 = uStack_230;
            if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
              local_388 = local_238;
            }
            else {
              FUN_1400419b0(&local_388,&local_238);
            }
            local_res20 = uVar14 | 0x1000;
            FUN_140162c50(&local_388,uVar5);
            local_308 = local_388;
            uStack_300 = CONCAT44(uStack_37c,uStack_380);
            if ((1 << ((byte)_local_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            FUN_140041b80(&local_2b8,&local_308);
            local_res20 = uVar14;
            if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_388);
            }
            local_220 = &local_2b8;
            uVar5 = FUN_140e794b0(0,0x4020000000000000);
            uStack_30c = uStack_23c;
            uStack_310 = uStack_240;
            if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
              local_318 = local_248;
            }
            else {
              FUN_1400419b0(&local_318,&local_248);
            }
            local_res20 = uVar14 | 0x2000;
            FUN_140162c50(&local_318,uVar5);
            local_308 = local_318;
            uStack_300 = CONCAT44(uStack_30c,uStack_310);
            if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            FUN_140041b80(&local_2a8,&local_308);
            local_res20 = uVar14;
            if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_318);
            }
            local_218 = &local_2a8;
            local_308 = (longlong *)local_138;
            uStack_300 = CONCAT44(uStack_12c,uStack_130);
            if ((1 << ((byte)_local_28c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_298);
            }
            FUN_140041b80(&local_298,&local_308);
            local_210 = &local_298;
            uStack_35c = 0xf;
            local_368 = (longlong *)0x10000000000000f;
            local_308 = (longlong *)0x10000000000000f;
            uStack_300 = CONCAT44(0xf,uStack_360);
            if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_288);
            }
            FUN_140041b80(local_288,&local_308);
            local_208 = local_288;
            ppuVar26 = &local_220;
            uVar24 = CONCAT44(uVar18,DAT_141a0a7c8);
            puVar6 = (undefined8 *)
                     FUN_140e634e0(local_res8,local_res10,&local_2e8,4,uVar24,ppuVar26);
            if (puVar6 != &local_1a8) {
              local_308 = (longlong *)*puVar6;
              uStack_300 = puVar6[1];
              if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1a8);
              }
              FUN_140041b80(&local_1a8,&local_308);
            }
            local_348 = 0x171;
            plVar7 = (longlong *)FUN_140e794b0(0,0x406c200000000000);
            if ((1 << ((byte)uVar16 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b8);
            }
            uVar16 = 0;
            bVar15 = 0;
            uStack_1ac = 0;
            local_348 = 0x172;
            local_1b8 = plVar7;
            dVar20 = (double)FUN_140e794b0(0,0x4020000000000000);
            if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_340);
            }
            local_334 = 0;
            local_348 = 0x173;
            local_340 = dVar20;
            iVar4 = FUN_140e63cb0(local_e8,&local_res8,&local_res10,&local_1a8);
            plVar7 = local_1b8;
            if (0 < iVar4) {
              uVar5 = CONCAT44(uStack_1ac,uStack_1b0);
              do {
                local_348 = 0x175;
                pplVar8 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f4e0);
                uStack_2cc = 6;
                local_2d8 = local_res10;
                ppuVar26 = (undefined8 **)((ulonglong)ppuVar26 & 0xffffffffffffff00);
                uVar24 = uVar24 & 0xffffffffffffff00;
                FUN_140e87440(&local_2d8,DAT_141a0a828,0x80000000,&local_148,uVar24,ppuVar26);
                if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2d8);
                }
                FUN_140e609c0(local_res8);
                if (&local_148 != pplVar8) {
                  local_308 = local_148;
                  uStack_300 = CONCAT44(uStack_13c,uStack_140);
                  if ((1 << ((byte)*(undefined4 *)((longlong)pplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(pplVar8);
                  }
                  FUN_140041b80(pplVar8,&local_308);
                }
                FUN_140e60910(1);
                local_348 = 0x176;
                pplVar8 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
                FUN_140e609c0(local_res8);
                if (&local_1b8 != pplVar8) {
                  local_308 = plVar7;
                  uStack_300 = uVar5;
                  if ((1 << ((byte)*(undefined4 *)((longlong)pplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(pplVar8);
                  }
                  FUN_140041b80(pplVar8,&local_308);
                }
                FUN_140e60910(1);
                local_348 = 0x177;
                pdVar9 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
                pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
                if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
                  dVar20 = *pdVar9;
                }
                else {
                  dVar20 = (double)FUN_140e4b060(pdVar9);
                }
                dVar21 = local_340;
                if ((local_334 & 0xffffff) != 0) {
                  dVar21 = (double)FUN_140e4b060(&local_340);
                }
                fVar19 = (float)FUN_140e78f90((float)dVar21,(float)dVar20);
                if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pdVar10);
                }
                *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
                *pdVar10 = (double)fVar19;
                local_348 = 0x178;
                pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
                if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
                  dVar20 = *pdVar9;
                }
                else {
                  dVar20 = (double)FUN_140e4b060(pdVar9);
                }
                dVar21 = local_340;
                if ((local_334 & 0xffffff) != 0) {
                  dVar21 = (double)FUN_140e4b060(&local_340);
                }
                fVar19 = (float)FUN_140e79010((float)dVar21,(float)dVar20);
                if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pdVar10);
                }
                *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
                *pdVar10 = (double)fVar19;
                cVar2 = FUN_140e643f0(local_e8,&local_res8,&local_res10);
              } while (cVar2 != '\0');
            }
            FUN_140e63970(local_e8,&local_res8,&local_res10);
            if (local_d8 != 0) {
              FUN_140e4cd60();
            }
            param_3 = local_res18;
          } while (0 < iVar3);
          iVar3 = 6;
          do {
            iVar3 = iVar3 + -1;
            local_348 = 0x180;
            if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_378);
            }
            local_378 = 0;
            local_370 = 0;
            local_36c = 5;
            uStack_31c = 6;
            local_328 = local_res8;
            uVar25 = (ulonglong)ppuVar26 & 0xffffffffffffff00;
            uVar24 = uVar24 & 0xffffffffffffff00;
            FUN_140e87440(&local_328,DAT_1419fe0e8,0x80000000,&local_238,uVar24,uVar25);
            if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_328);
            }
            local_1cc = 6;
            local_1d8 = local_res8;
            uVar25 = uVar25 & 0xffffffffffffff00;
            uVar24 = uVar24 & 0xffffffffffffff00;
            FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_248,uVar24,uVar25);
            if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            local_1dc = 6;
            local_1e8 = local_res8;
            uVar24 = uVar24 & 0xffffffffffffff00;
            FUN_140e87440(&local_1e8,DAT_141a1b910,0x80000000,&local_138,uVar24,
                          uVar25 & 0xffffffffffffff00);
            uVar16 = (undefined4)(uVar24 >> 0x20);
            if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            local_308 = local_238;
            uStack_300 = CONCAT44(uStack_22c,uStack_230);
            if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2c8);
            }
            FUN_140041b80(&local_2c8,&local_308);
            local_228 = &local_2c8;
            local_308 = local_248;
            uStack_300 = CONCAT44(uStack_23c,uStack_240);
            if ((1 << ((byte)_local_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            FUN_140041b80(&local_2b8,&local_308);
            local_308 = (longlong *)local_138;
            uStack_300 = CONCAT44(uStack_12c,uStack_130);
            local_220 = &local_2b8;
            if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            FUN_140041b80(&local_2a8,&local_308);
            local_218 = &local_2a8;
            uStack_35c = 0xf;
            local_368 = (longlong *)0x100000000000023;
            local_308 = (longlong *)0x100000000000023;
            uStack_300 = CONCAT44(0xf,uStack_360);
            if ((1 << ((byte)_local_28c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_298);
            }
            FUN_140041b80(&local_298,&local_308);
            local_210 = &local_298;
            ppuVar26 = &local_228;
            uVar24 = CONCAT44(uVar16,DAT_141a0a7c8);
            uVar5 = FUN_140e634e0(local_res8,local_res10,&local_378,4,uVar24,ppuVar26);
            iVar4 = FUN_140e63cb0(local_e8,&local_res8,&local_res10,uVar5);
            if (0 < iVar4) {
              do {
                local_348 = 0x182;
                uStack_2cc = 0xf;
                local_2d8 = (longlong *)0x1000001000000c3;
                local_308 = (longlong *)0x1000001000000c3;
                uStack_300 = CONCAT44(0xf,uStack_2d0);
                if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_180);
                }
                FUN_140041b80(&local_180,&local_308);
                FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_180);
                local_348 = 0x183;
                if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_198);
                }
                local_18c = 0;
                local_198 = 0;
                FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_198);
                local_348 = 0x184;
                uVar5 = FUN_140e78f00(2);
                if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_128);
                }
                local_11c = 0;
                local_128 = uVar5;
                FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_128);
                local_348 = 0x186;
                dVar20 = (double)FUN_140e794b0(0,0x405cc00000000000);
                if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1c8);
                }
                local_1bc = 0;
                local_348 = 0x187;
                local_1c8 = dVar20;
                dVar20 = (double)FUN_140e794b0(0,0x4018000000000000);
                if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_340);
                }
                local_334 = 0;
                local_348 = 0x188;
                local_340 = dVar20;
                pdVar9 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
                dVar20 = local_1c8;
                if ((local_1bc & 0xffffff) != 0) {
                  dVar20 = (double)FUN_140e4b060(&local_1c8);
                }
                dVar21 = local_340;
                if ((local_334 & 0xffffff) != 0) {
                  dVar21 = (double)FUN_140e4b060(&local_340);
                }
                fVar19 = (float)FUN_140e78f90((float)dVar21,(float)dVar20);
                if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pdVar9);
                }
                *(undefined4 *)((longlong)pdVar9 + 0xc) = 0;
                *pdVar9 = (double)fVar19;
                local_348 = 0x189;
                pdVar9 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
                dVar20 = local_1c8;
                if ((local_1bc & 0xffffff) != 0) {
                  dVar20 = (double)FUN_140e4b060(&local_1c8);
                }
                dVar21 = local_340;
                if ((local_334 & 0xffffff) != 0) {
                  dVar21 = (double)FUN_140e4b060(&local_340);
                }
                fVar19 = (float)FUN_140e79010((float)dVar21,(float)dVar20);
                if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pdVar9);
                }
                *(undefined4 *)((longlong)pdVar9 + 0xc) = 0;
                *pdVar9 = (double)fVar19;
                cVar2 = FUN_140e643f0(local_e8,&local_res8,&local_res10);
              } while (cVar2 != '\0');
            }
            FUN_140e63970(local_e8,&local_res8,&local_res10);
            if (local_d8 != 0) {
              FUN_140e4cd60();
            }
          } while (0 < iVar3);
          local_348 = 399;
          if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_378);
          }
          uVar16 = (undefined4)(uVar24 >> 0x20);
          local_378 = 0;
          local_370 = 0;
          local_36c = 5;
          uStack_35c = 0xf;
          local_368 = (longlong *)0x10000020000000b;
          local_308 = (longlong *)0x10000020000000b;
          uStack_300 = CONCAT44(0xf,uStack_360);
          if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2c8);
          }
          FUN_140041b80(&local_2c8,&local_308);
          local_228 = &local_2c8;
          FUN_140e634e0(local_res8,local_res10,&local_378,1,CONCAT44(uVar16,DAT_141a07788),
                        &local_228);
          local_348 = 400;
          FUN_140edd0e0(local_res8,local_res10,0,0);
          local_348 = 0x191;
        }
        else {
          local_348 = 0x194;
          if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_378);
          }
          uVar16 = (undefined4)(uVar24 >> 0x20);
          local_378 = 0;
          local_370 = 0;
          local_36c = 5;
          if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2e8);
          }
          local_2e8 = 0;
          local_2e0 = 0;
          local_2dc = 5;
          puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          if (puVar6 != &local_2c8) {
            local_308 = (longlong *)*puVar6;
            uStack_300 = puVar6[1];
            if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2c8);
            }
            FUN_140041b80(&local_2c8,&local_308);
          }
          local_228 = &local_2c8;
          local_308 = (longlong *)CONCAT44(uRam0000000141dd3d4c,_DAT_141dd3d48);
          uStack_300 = CONCAT44(DAT_141dd3d54,uRam0000000141dd3d50);
          if ((1 << (local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          FUN_140041b80(&local_2b8,&local_308);
          local_220 = &local_2b8;
          if (puVar6 != &local_2a8) {
            local_308 = (longlong *)*puVar6;
            uStack_300 = puVar6[1];
            if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            FUN_140041b80(&local_2a8,&local_308);
          }
          local_218 = &local_2a8;
          local_308 = (longlong *)CONCAT44(uRam0000000141dd3d4c,_DAT_141dd3d48);
          uStack_300 = CONCAT44(DAT_141dd3d54,uRam0000000141dd3d50);
          if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_298);
          }
          FUN_140041b80(&local_298,&local_308);
          local_210 = &local_298;
          uVar5 = CONCAT44(uVar16,DAT_1419ff4f8);
          puVar6 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_2e8,2,uVar5,&local_228)
          ;
          uVar16 = (undefined4)((ulonglong)uVar5 >> 0x20);
          uStack_37c = *(undefined4 *)((longlong)puVar6 + 0xc);
          uStack_380 = *(undefined4 *)(puVar6 + 1);
          if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) == 0) {
            local_388 = (longlong *)*puVar6;
          }
          else {
            FUN_1400419b0(&local_388,puVar6);
          }
          local_res20 = uVar14 | 0x4000;
          uStack_31c = 7;
          local_328 = (longlong *)CONCAT44(local_328._4_4_,1);
          FUN_1400460e0(&local_388,&local_328);
          if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_328);
          }
          local_308 = local_388;
          uStack_300 = CONCAT44(uStack_37c,uStack_380);
          if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_288);
          }
          FUN_140041b80(local_288,&local_308);
          if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_388);
          }
          local_208 = local_288;
          FUN_140e634e0(local_res8,local_res10,&local_378,3,CONCAT44(uVar16,DAT_1419fd648),
                        &local_218);
          local_348 = 0x196;
        }
      }
      else if (iVar3 == 2) {
        local_348 = 0x19a;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5b18);
        FUN_140e63610(local_res8,local_res10,&local_378,0,uVar5,0);
        local_348 = 0x19b;
      }
      else if (iVar3 == 3) {
        local_348 = 0x19f;
      }
      break;
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 < 4);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_340);
  }
  if ((1 << (bVar15 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  _eh_vector_destructor_iterator_(&local_2c8,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_358;
  return param_3;
}

