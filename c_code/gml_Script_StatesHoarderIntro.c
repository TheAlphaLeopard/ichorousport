// gml_Script_StatesHoarderIntro @ 0x14053f3c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesHoarderIntro
          (longlong *param_1,longlong *param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong **pplVar9;
  double *pdVar10;
  double *pdVar11;
  uint uVar12;
  longlong **pplVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  longlong *local_res8;
  longlong *local_res10;
  undefined8 *local_res18;
  uint local_res20;
  code *pcVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 **ppuVar23;
  undefined8 local_438;
  undefined4 local_430;
  undefined4 local_42c;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  double local_408;
  uint local_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  longlong *local_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 local_3d8;
  char *local_3d0;
  undefined4 local_3c8;
  longlong *local_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  double local_3a8;
  uint local_39c;
  undefined8 local_398;
  undefined4 local_38c;
  undefined8 local_388;
  byte local_37c;
  undefined8 local_378;
  byte local_36c;
  undefined8 local_368;
  byte local_35c;
  undefined8 local_358;
  byte local_34c;
  undefined1 local_348 [12];
  byte local_33c;
  undefined8 local_338;
  byte local_32c;
  undefined1 local_328 [12];
  byte local_31c;
  undefined1 local_318 [12];
  byte local_30c;
  undefined8 local_308;
  undefined4 local_2fc;
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  longlong *local_2b8;
  undefined4 local_2ac;
  longlong *local_2a8;
  undefined4 local_29c;
  undefined8 *local_298;
  undefined8 *local_290;
  undefined8 *local_288;
  undefined8 *local_280;
  undefined1 *local_278;
  undefined8 *local_270;
  undefined1 *local_268;
  undefined1 *local_260;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  longlong *local_244;
  undefined4 local_238;
  undefined8 local_230;
  undefined4 local_224;
  longlong *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  longlong *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  int local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined1 local_1a0 [16];
  longlong local_190;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [16];
  longlong local_148;
  undefined1 local_138 [16];
  longlong local_128;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  longlong local_f8;
  
  local_res20 = 0;
  local_3d0 = "gml_Script_StatesGrubDeath";
  local_3d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_3d8;
  local_3c8 = 0x451;
  pcVar19 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(&local_388,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_2bc = 0xffffff;
  local_2c8 = (longlong *)0x0;
  uStack_2ec = 0xffffff;
  local_2f8 = (longlong *)0x0;
  local_2cc = 0xffffff;
  local_2d8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_38c = 0xffffff;
  local_398 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  uStack_24c = 0xffffff;
  local_258 = 0;
  local_224 = 0xffffff;
  local_230 = 0;
  uVar15 = 0xffffff;
  local_248 = 0xffffff;
  uStack_20c = 0xffffff;
  local_218 = (longlong *)0x0;
  local_3fc = 0xffffff;
  local_408 = 0.0;
  uStack_1fc = 0xffffff;
  local_208 = (longlong *)0x0;
  local_2fc = 0xffffff;
  local_308 = 0;
  local_39c = 0xffffff;
  local_3a8 = 0.0;
  local_42c = 0;
  local_438 = 0;
  local_2dc = 0;
  local_2e8 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_3c8 = 0x453;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_1a4 = *(undefined4 *)((longlong)param_5 + 0xc);
  local_1a8 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) == 0) {
    local_1b0 = *param_5;
  }
  else {
    FUN_1400419b0(&local_1b0);
  }
  local_1b8 = 2;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf948) &&
     (_Init_thread_header(&DAT_141ddf948), DAT_141ddf948 == -1)) {
    _DAT_141ddfa1c = 0;
    _DAT_141ddfa10 = 0x4000000000000000;
    _DAT_141ddfa30 = 0;
    _DAT_141ddfa24 = 0;
    _DAT_141ddfa34 = 1;
    _DAT_141ddfa44 = 0;
    _DAT_141ddfa38 = 0x3ff0000000000000;
    _DAT_141ddfa48 = 2;
    _DAT_141ddfa58 = 0;
    _DAT_141ddfa4c = 0x4008000000000000;
    _DAT_141ddfa5c = 3;
    atexit((_func_5014 *)&LAB_141481ce0);
    _Init_thread_footer(&DAT_141ddf948);
  }
  uVar12 = 0;
  do {
    iVar3 = FUN_140e851f0(&DAT_141ddfa10 + (longlong)(int)uVar12 * 0x14,&local_1b0,DAT_141955260,0);
    uVar14 = (undefined4)((ulonglong)pcVar19 >> 0x20);
    if (iVar3 == 0) {
      iVar3 = *(int *)(&DAT_141ddfa20 + (longlong)(int)uVar12 * 0x14);
      if (iVar3 == 0) {
        local_3c8 = 0x457;
        if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_438);
        }
        local_438 = 0;
        local_430 = 0;
        local_42c = 5;
        puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
        if (puVar7 != &local_378) {
          local_3f8 = *(undefined4 *)puVar7;
          uStack_3f4 = *(undefined4 *)((longlong)puVar7 + 4);
          uStack_3f0 = *(undefined4 *)(puVar7 + 1);
          uStack_3ec = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << (local_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_378);
          }
          FUN_140041b80(&local_378,&local_3f8);
        }
        local_290 = &local_378;
        local_3f8 = _DAT_141dd3e18;
        uStack_3f4 = uRam0000000141dd3e1c;
        uStack_3f0 = uRam0000000141dd3e20;
        uStack_3ec = DAT_141dd3e24;
        if ((1 << (local_35c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_368);
        }
        FUN_140041b80(&local_368,&local_3f8);
        local_3f8 = _DAT_1419e6160;
        uStack_3f4 = uRam00000001419e6164;
        uStack_3f0 = uRam00000001419e6168;
        uStack_3ec = uRam00000001419e616c;
        local_288 = &local_368;
        if ((1 << (local_34c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_358);
        }
        FUN_140041b80(&local_358,&local_3f8);
        local_280 = &local_358;
        uVar6 = CONCAT44(uVar14,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_438,3,uVar6,&local_290);
        uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_3c8 = 0x458;
        if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_438);
        }
        local_438 = 0;
        local_430 = 0;
        local_42c = 5;
        if (puVar7 != &local_388) {
          local_3f8 = *(undefined4 *)puVar7;
          uStack_3f4 = *(undefined4 *)((longlong)puVar7 + 4);
          uStack_3f0 = *(undefined4 *)(puVar7 + 1);
          uStack_3ec = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << (local_37c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_388);
          }
          FUN_140041b80(&local_388,&local_3f8);
        }
        local_298 = &local_388;
        local_3f8 = _DAT_141dd3dc8;
        uStack_3f4 = uRam0000000141dd3dcc;
        uStack_3f0 = uRam0000000141dd3dd0;
        uStack_3ec = DAT_141dd3dd4;
        if ((1 << (local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        FUN_140041b80(&local_378,&local_3f8);
        local_290 = &local_378;
        local_3f8 = _DAT_141dc66d0;
        uStack_3f4 = uRam0000000141dc66d4;
        uStack_3f0 = uRam0000000141dc66d8;
        uStack_3ec = uRam0000000141dc66dc;
        if ((1 << (local_35c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_368);
        }
        FUN_140041b80(&local_368,&local_3f8);
        local_288 = &local_368;
        FUN_140e634e0(local_res8,local_res10,&local_438,3,CONCAT44(uVar14,DAT_1419ff3d8),&local_298)
        ;
        local_3c8 = 0x45a;
        puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a748);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = 0x3ff0000000000000;
        local_3c8 = 0x45b;
        puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a858);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = 0x3ff0000000000000;
        local_3c8 = 0x45d;
      }
      else if (iVar3 == 1) {
        local_3c8 = 0x461;
        puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd428);
        uVar6 = FUN_140e794b0(0,0x3ff0000000000000);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = uVar6;
        local_3c8 = 0x462;
        puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd5d8);
        uVar6 = FUN_140e794b0(0,0x3ff0000000000000);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = uVar6;
        local_3c8 = 0x464;
        if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_438);
        }
        local_438 = 0;
        local_430 = 0;
        local_42c = 5;
        uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
        local_428 = (longlong *)CONCAT44(uRam0000000141dc66d4,_DAT_141dc66d0);
        uStack_420 = CONCAT44(uRam0000000141dc66dc,uRam0000000141dc66d8);
        if ((1 << ((byte)_local_37c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_388);
        }
        FUN_140041b80(&local_388,&local_428);
        local_298 = &local_388;
        uVar20 = CONCAT44(uVar14,DAT_141a0a0d8);
        uVar8 = FUN_140e634e0(local_res8,local_res10,&local_438,1,uVar20,&local_298);
        uVar15 = (undefined4)((ulonglong)uVar20 >> 0x20);
        uVar12 = FUN_140e851f0(uVar6,uVar8,DAT_141955260,1);
        if (uVar12 < 0x80000000) {
          local_3c8 = 0x466;
          if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2e8);
          }
          local_2e8 = 0;
          local_2e0 = 0;
          local_2dc = 5;
          puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          if (puVar7 != &local_378) {
            local_428 = (longlong *)*puVar7;
            uStack_420 = puVar7[1];
            if ((1 << ((byte)_local_36c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_378);
            }
            FUN_140041b80(&local_378,&local_428);
          }
          local_290 = &local_378;
          local_428 = (longlong *)CONCAT44(uRam0000000141dd3dcc,_DAT_141dd3dc8);
          uStack_420 = CONCAT44(DAT_141dd3dd4,uRam0000000141dd3dd0);
          if ((1 << ((byte)_local_35c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_368);
          }
          FUN_140041b80(&local_368,&local_428);
          uVar8 = CONCAT44(uVar15,DAT_1419ff4f8);
          local_288 = &local_368;
          puVar7 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_2e8,2,uVar8,&local_290)
          ;
          uVar15 = (undefined4)((ulonglong)uVar8 >> 0x20);
          if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
            uVar14 = (undefined4)*puVar7;
          }
          else {
            uVar14 = FUN_140e4b060(puVar7);
          }
          dVar17 = (double)FUN_1412a79b0(uVar14,0x402e000000000000);
          if (dVar17 == 0.0) {
            local_3c8 = 0x468;
            if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1f8);
            }
            local_1f8 = 0;
            local_1f0 = 0;
            local_1ec = 5;
            if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            local_1e8 = 0;
            local_1e0 = 0;
            local_1dc = 5;
            puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            if (puVar7 != &local_358) {
              local_428 = (longlong *)*puVar7;
              uStack_420 = puVar7[1];
              if ((1 << ((byte)_local_34c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_358);
              }
              FUN_140041b80(&local_358,&local_428);
            }
            local_280 = &local_358;
            local_428 = (longlong *)CONCAT44(uRam0000000141dd3e1c,_DAT_141dd3e18);
            uStack_420 = CONCAT44(DAT_141dd3e24,uRam0000000141dd3e20);
            if ((1 << ((byte)_local_33c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_348);
            }
            FUN_140041b80(local_348,&local_428);
            local_278 = local_348;
            if (puVar7 != &local_338) {
              local_428 = (longlong *)*puVar7;
              uStack_420 = puVar7[1];
              if ((1 << (local_32c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_338);
              }
              FUN_140041b80(&local_338,&local_428);
            }
            local_270 = &local_338;
            local_428 = (longlong *)CONCAT44(uRam0000000141dd3e1c,_DAT_141dd3e18);
            uStack_420 = CONCAT44(DAT_141dd3e24,uRam0000000141dd3e20);
            if ((1 << (local_31c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_328);
            }
            FUN_140041b80(local_328,&local_428);
            local_268 = local_328;
            uVar8 = CONCAT44(uVar15,DAT_1419ff4f8);
            puVar7 = (undefined8 *)
                     FUN_140e634e0(local_res8,local_res10,&local_1e8,2,uVar8,&local_280);
            uVar15 = (undefined4)((ulonglong)uVar8 >> 0x20);
            uStack_3dc = *(undefined4 *)((longlong)puVar7 + 0xc);
            uStack_3e0 = *(undefined4 *)(puVar7 + 1);
            if ((1 << ((byte)uStack_3dc & 0x1f) & 0x46U) == 0) {
              local_3e8 = (longlong *)*puVar7;
            }
            else {
              FUN_1400419b0(&local_3e8,puVar7);
            }
            local_res20 = 4;
            uStack_40c = 7;
            local_418 = (longlong *)CONCAT44(local_418._4_4_,0xffffffff);
            FUN_140042560(&local_3e8,&local_418);
            if ((1 << ((byte)uStack_40c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_418);
            }
            local_428 = local_3e8;
            uStack_420 = CONCAT44(uStack_3dc,uStack_3e0);
            if ((1 << (local_30c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_318);
            }
            FUN_140041b80(local_318,&local_428);
            if ((1 << ((byte)uStack_3dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3e8);
            }
            local_260 = local_318;
            ppuVar23 = &local_270;
            uVar21 = CONCAT44(uVar15,DAT_1419ff3d8);
            FUN_140e634e0(local_res8,local_res10,&local_1f8,3,uVar21,ppuVar23);
            local_3c8 = 0x469;
            if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_438);
            }
            local_438 = 0;
            local_430 = 0;
            local_42c = 5;
            if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2e8);
            }
            local_2e8 = 0;
            local_2e0 = 0;
            local_2dc = 5;
            puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            uStack_40c = 6;
            local_418 = local_res8;
            uVar22 = (ulonglong)ppuVar23 & 0xffffffffffffff00;
            uVar21 = uVar21 & 0xffffffffffffff00;
            FUN_140e87440(&local_418,DAT_1419fe0e8,0x80000000,&local_2c8,uVar21,uVar22);
            if ((1 << ((byte)uStack_40c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_418);
            }
            if (puVar7 != &local_388) {
              local_428 = (longlong *)*puVar7;
              uStack_420 = puVar7[1];
              if ((1 << ((byte)_local_37c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_388);
              }
              FUN_140041b80(&local_388,&local_428);
            }
            local_298 = &local_388;
            local_428 = (longlong *)CONCAT44(uRam0000000141dd3e1c,_DAT_141dd3e18);
            uStack_420 = CONCAT44(DAT_141dd3e24,uRam0000000141dd3e20);
            if ((1 << ((byte)_local_36c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_378);
            }
            FUN_140041b80(&local_378,&local_428);
            local_290 = &local_378;
            uStack_40c = 6;
            local_418 = local_res8;
            uVar21 = uVar21 & 0xffffffffffffff00;
            FUN_140e87440(&local_418,DAT_1419fe158,0x80000000,&local_2f8,uVar21,
                          uVar22 & 0xffffffffffffff00);
            uVar15 = (undefined4)(uVar21 >> 0x20);
            if ((1 << ((byte)uStack_40c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_418);
            }
            uVar20 = CONCAT44(uVar15,DAT_1419ff4f8);
            uVar8 = FUN_140e634e0(local_res8,local_res10,&local_2e8,2,uVar20,&local_298);
            uVar15 = (undefined4)((ulonglong)uVar20 >> 0x20);
            local_418 = (longlong *)FUN_140e794b0(0,0x4014000000000000);
            uStack_40c = 0;
            local_res20 = 8;
            FUN_140042560(&local_418,uVar8);
            uStack_3dc = uStack_2bc;
            uStack_3e0 = uStack_2c0;
            if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) == 0) {
              local_3e8 = local_2c8;
            }
            else {
              FUN_1400419b0(&local_3e8,&local_2c8);
            }
            local_res20 = 0x18;
            FUN_1400460e0(&local_3e8,&local_418);
            local_428 = local_3e8;
            uStack_420 = CONCAT44(uStack_3dc,uStack_3e0);
            if ((1 << ((byte)_local_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_368);
            }
            FUN_140041b80(&local_368,&local_428);
            local_res20 = 8;
            if ((1 << ((byte)uStack_3dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3e8);
            }
            local_res20 = 0;
            if ((1 << ((byte)uStack_40c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_418);
            }
            local_288 = &local_368;
            plVar1 = (longlong *)FUN_140e794b0(0,0x4028000000000000);
            uStack_3dc = uStack_2ec;
            uStack_3e0 = uStack_2f0;
            if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) == 0) {
              local_3e8 = local_2f8;
            }
            else {
              FUN_1400419b0(&local_3e8,&local_2f8);
            }
            local_res20 = 0x20;
            uStack_40c = 0;
            local_418 = plVar1;
            FUN_1400462a0(&local_3e8,&local_418);
            if ((1 << ((byte)uStack_40c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_418);
            }
            local_428 = local_3e8;
            uStack_420 = CONCAT44(uStack_3dc,uStack_3e0);
            if ((1 << ((byte)_local_34c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_358);
            }
            FUN_140041b80(&local_358,&local_428);
            local_res20 = 0;
            if ((1 << ((byte)uStack_3dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3e8);
            }
            local_280 = &local_358;
            local_428 = (longlong *)CONCAT44(uRam0000000141dd3eec,_DAT_141dd3ee8);
            uStack_420 = CONCAT44(DAT_141dd3ef4,uRam0000000141dd3ef0);
            if ((1 << ((byte)_local_33c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_348);
            }
            FUN_140041b80(local_348,&local_428);
            local_278 = local_348;
            uStack_3ac = 0xf;
            local_3b8 = (longlong *)0x10000000000012d;
            local_428 = (longlong *)0x10000000000012d;
            uStack_420 = CONCAT44(0xf,uStack_3b0);
            if ((1 << (local_32c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_338);
            }
            FUN_140041b80(&local_338,&local_428);
            local_270 = &local_338;
            uVar20 = CONCAT44(uVar15,DAT_141a0a7c8);
            uVar8 = FUN_140e634e0(local_res8,local_res10,&local_438,4,uVar20,&local_288);
            iVar3 = FUN_140e63cb0(local_1a0,&local_res8,&local_res10,uVar8);
            uVar15 = (undefined4)((ulonglong)uVar20 >> 0x20);
            if (0 < iVar3) {
              do {
                uVar15 = (undefined4)((ulonglong)uVar20 >> 0x20);
                local_3c8 = 0x46b;
                uStack_3ac = 0xf;
                local_3b8 = (longlong *)0x100000100000062;
                local_428 = (longlong *)0x100000100000062;
                uStack_420 = CONCAT44(0xf,uStack_3b0);
                if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2d8);
                }
                FUN_140041b80(&local_2d8,&local_428);
                FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_2d8);
                local_3c8 = 0x46c;
                if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_438);
                }
                local_438 = 0;
                local_430 = 0;
                local_42c = 5;
                puVar7 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_1419fd438);
                if (puVar7 != &local_388) {
                  local_428 = (longlong *)*puVar7;
                  uStack_420 = puVar7[1];
                  if ((1 << ((byte)_local_37c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_388);
                  }
                  FUN_140041b80(&local_388,&local_428);
                }
                local_298 = &local_388;
                local_428 = (longlong *)CONCAT44(uRam0000000141dd3e1c,_DAT_141dd3e18);
                uStack_420 = CONCAT44(DAT_141dd3e24,uRam0000000141dd3e20);
                if ((1 << ((byte)_local_36c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_378);
                }
                FUN_140041b80(&local_378,&local_428);
                local_290 = &local_378;
                uVar20 = CONCAT44(uVar15,DAT_1419ff4f8);
                puVar7 = (undefined8 *)
                         FUN_140e634e0(local_res8,local_res10,&local_438,2,uVar20,&local_298);
                if (puVar7 != &local_1d8) {
                  local_428 = (longlong *)*puVar7;
                  uStack_420 = puVar7[1];
                  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_1d8);
                  }
                  FUN_140041b80(&local_1d8,&local_428);
                }
                FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_1d8);
                cVar2 = FUN_140e643f0(local_1a0,&local_res8,&local_res10);
                uVar15 = (undefined4)((ulonglong)uVar20 >> 0x20);
              } while (cVar2 != '\0');
            }
            FUN_140e63970(local_1a0,&local_res8,&local_res10);
            if (local_190 != 0) {
              FUN_140e4cd60();
            }
          }
        }
        local_3c8 = 0x474;
        if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_438);
        }
        local_438 = 0;
        local_430 = 0;
        local_42c = 5;
        local_428 = (longlong *)CONCAT44(uRam0000000141dc66d4,_DAT_141dc66d0);
        uStack_420 = CONCAT44(uRam0000000141dc66dc,uRam0000000141dc66d8);
        if ((1 << ((byte)_local_37c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_388);
        }
        FUN_140041b80(&local_388,&local_428);
        local_298 = &local_388;
        uVar21 = CONCAT44(uVar15,DAT_141a0a0d8);
        puVar7 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_438,1,uVar21,&local_298);
        uStack_3dc = *(undefined4 *)((longlong)puVar7 + 0xc);
        uStack_3e0 = *(undefined4 *)(puVar7 + 1);
        if ((1 << ((byte)uStack_3dc & 0x1f) & 0x46U) == 0) {
          local_3e8 = (longlong *)*puVar7;
        }
        else {
          FUN_1400419b0(&local_3e8,puVar7);
        }
        local_res20 = 0x40;
        uStack_40c = 7;
        local_418 = (longlong *)CONCAT44(local_418._4_4_,3);
        FUN_140042560(&local_3e8,&local_418);
        if ((1 << ((byte)uStack_40c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_418);
        }
        uVar4 = FUN_140e851f0(uVar6,&local_3e8,DAT_141955260,1);
        uVar12 = 0;
        local_res20 = 0;
        if ((1 << ((byte)uStack_3dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3e8);
        }
        uVar15 = (undefined4)(uVar21 >> 0x20);
        if (uVar4 < 0x80000000) {
          local_3c8 = 0x476;
          uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
          if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_398);
          }
          local_38c = 0;
          local_398 = 0x4000000000000000;
          FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_398);
          local_3c8 = 0x477;
          if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_438);
          }
          local_438 = 0;
          local_430 = 0;
          local_42c = 5;
          puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          if (puVar7 != &local_388) {
            local_428 = (longlong *)*puVar7;
            uStack_420 = puVar7[1];
            if ((1 << ((byte)_local_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_388);
            }
            FUN_140041b80(&local_388,&local_428);
          }
          local_298 = &local_388;
          local_428 = (longlong *)CONCAT44(uRam0000000141dd3dcc,_DAT_141dd3dc8);
          uStack_420 = CONCAT44(DAT_141dd3dd4,uRam0000000141dd3dd0);
          if ((1 << ((byte)_local_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_378);
          }
          FUN_140041b80(&local_378,&local_428);
          local_290 = &local_378;
          ppuVar23 = &local_298;
          uVar21 = CONCAT44(uVar15,DAT_1419ff4f8);
          puVar7 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_438,2,uVar21,ppuVar23);
          if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
            uVar15 = (undefined4)*puVar7;
          }
          else {
            uVar15 = FUN_140e4b060(puVar7);
          }
          dVar17 = (double)FUN_1412a79b0(uVar15,0x4000000000000000);
          if (dVar17 == 0.0) {
            local_3c8 = 0x479;
            if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c8);
            }
            local_1bc = 0;
            local_1c8 = 0x3ff0000000000000;
            local_3c8 = 0x47d;
            if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_438);
            }
            local_438 = 0;
            local_430 = 0;
            local_42c = 5;
            uStack_40c = 6;
            local_418 = local_res8;
            uVar22 = (ulonglong)ppuVar23 & 0xffffffffffffff00;
            uVar21 = uVar21 & 0xffffffffffffff00;
            FUN_140e87440(&local_418,DAT_1419fe0e8,0x80000000,&local_2c8,uVar21,uVar22);
            if ((1 << ((byte)uStack_40c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_418);
            }
            uStack_40c = 6;
            local_418 = local_res8;
            uVar22 = uVar22 & 0xffffffffffffff00;
            uVar21 = uVar21 & 0xffffffffffffff00;
            FUN_140e87440(&local_418,DAT_1419fe158,0x80000000,&local_2f8,uVar21,uVar22);
            if ((1 << ((byte)uStack_40c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_418);
            }
            uStack_40c = 6;
            local_418 = local_res8;
            uVar21 = uVar21 & 0xffffffffffffff00;
            FUN_140e87440(&local_418,DAT_141a1b910,0x80000000,&local_258,uVar21,
                          uVar22 & 0xffffffffffffff00);
            uVar15 = (undefined4)(uVar21 >> 0x20);
            if ((1 << ((byte)uStack_40c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_418);
            }
            local_428 = local_2c8;
            uStack_420 = CONCAT44(uStack_2bc,uStack_2c0);
            if ((1 << ((byte)_local_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_388);
            }
            FUN_140041b80(&local_388,&local_428);
            local_298 = &local_388;
            plVar1 = (longlong *)FUN_140e794b0(0,0x4024000000000000);
            uStack_3dc = uStack_2ec;
            uStack_3e0 = uStack_2f0;
            if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) == 0) {
              local_3e8 = local_2f8;
            }
            else {
              FUN_1400419b0(&local_3e8,&local_2f8);
            }
            local_res20 = 0x80;
            uStack_40c = 0;
            local_418 = plVar1;
            FUN_1400462a0(&local_3e8,&local_418);
            if ((1 << ((byte)uStack_40c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_418);
            }
            local_428 = local_3e8;
            uStack_420 = CONCAT44(uStack_3dc,uStack_3e0);
            if ((1 << ((byte)_local_36c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_378);
            }
            FUN_140041b80(&local_378,&local_428);
            uVar12 = 0;
            local_res20 = 0;
            if ((1 << ((byte)uStack_3dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3e8);
            }
            local_290 = &local_378;
            local_428 = (longlong *)local_258;
            uStack_420 = CONCAT44(uStack_24c,uStack_250);
            if ((1 << ((byte)_local_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_368);
            }
            FUN_140041b80(&local_368,&local_428);
            uStack_3ac = 0xf;
            local_3b8 = (longlong *)0x10000000000000f;
            local_428 = (longlong *)0x10000000000000f;
            uStack_420 = CONCAT44(0xf,uStack_3b0);
            local_288 = &local_368;
            if ((1 << ((byte)_local_34c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_358);
            }
            FUN_140041b80(&local_358,&local_428);
            local_280 = &local_358;
            ppuVar23 = &local_298;
            uVar21 = CONCAT44(uVar15,DAT_141a0a7c8);
            puVar7 = (undefined8 *)
                     FUN_140e634e0(local_res8,local_res10,&local_438,4,uVar21,ppuVar23);
            if (puVar7 != &local_230) {
              local_428 = (longlong *)*puVar7;
              uStack_420 = puVar7[1];
              if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_230);
              }
              FUN_140041b80(&local_230,&local_428);
            }
            local_3c8 = 0x47e;
            local_218 = (longlong *)FUN_140e79480(0);
            local_248 = 0;
            uStack_20c = 0;
            local_3c8 = 0x47f;
            dVar17 = (double)FUN_140e794b0(0,0x4014000000000000);
            if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_408);
            }
            local_3fc = 0;
            local_3c8 = 0x480;
            local_408 = dVar17;
            iVar3 = FUN_140e63cb0(local_1a0,&local_res8,&local_res10,&local_230);
            uVar15 = uStack_210;
            plVar1 = local_218;
            if (0 < iVar3) {
              do {
                local_3c8 = 0x482;
                pplVar9 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f4e0);
                uStack_40c = 6;
                local_418 = local_res10;
                ppuVar23 = (undefined8 **)((ulonglong)ppuVar23 & 0xffffffffffffff00);
                uVar21 = uVar21 & 0xffffffffffffff00;
                FUN_140e87440(&local_418,DAT_141a0a828,0x80000000,&local_208,uVar21,ppuVar23);
                if ((1 << ((byte)uStack_40c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_418);
                }
                FUN_140e609c0(local_res8);
                if (&local_208 != pplVar9) {
                  local_428 = local_208;
                  uStack_420 = CONCAT44(uStack_1fc,uStack_200);
                  if ((1 << ((byte)*(undefined4 *)((longlong)pplVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(pplVar9);
                  }
                  FUN_140041b80(pplVar9,&local_428);
                }
                FUN_140e60910(1);
                local_3c8 = 0x483;
                pplVar9 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
                local_238 = 0;
                local_244 = (longlong *)0x3ff0000000000000;
                iVar3 = FUN_140e851f0(&local_1c8,&local_244,DAT_141955260,0);
                if ((1 << ((byte)local_238 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_244);
                }
                if (iVar3 == 0) {
                  local_2b8 = (longlong *)FUN_140e794b0(0,0x4041800000000000);
                  local_2ac = 0;
                  pplVar13 = &local_2b8;
                  uVar12 = uVar12 | 1;
                }
                else {
                  local_2a8 = (longlong *)FUN_140e79480(0);
                  local_29c = 0;
                  pplVar13 = &local_2a8;
                  uVar12 = uVar12 | 2;
                }
                FUN_140e609c0(local_res8);
                uStack_3dc = 0;
                uStack_3e0 = uVar15;
                local_3e8 = plVar1;
                local_res20 = uVar12 | 0x100;
                FUN_1400460e0(&local_3e8,pplVar13);
                if (&local_3e8 != pplVar9) {
                  local_428 = local_3e8;
                  uStack_420 = CONCAT44(uStack_3dc,uStack_3e0);
                  if ((1 << ((byte)*(undefined4 *)((longlong)pplVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(pplVar9);
                  }
                  FUN_140041b80(pplVar9,&local_428);
                }
                local_res20 = uVar12;
                if ((1 << ((byte)uStack_3dc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_3e8);
                }
                if (((uVar12 & 2) != 0) &&
                   (uVar12 = uVar12 & 0xfffffefd, local_res20 = uVar12,
                   (1 << ((byte)local_29c & 0x1f) & 0x46U) != 0)) {
                  FUN_140041a50(&local_2a8);
                }
                if (((uVar12 & 1) != 0) &&
                   (uVar12 = uVar12 & 0xfffffffe, local_res20 = uVar12,
                   (1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0)) {
                  FUN_140041a50(&local_2b8);
                }
                FUN_140e60910(1);
                local_3c8 = 0x484;
                pdVar10 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
                pdVar11 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
                if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
                  dVar17 = *pdVar10;
                }
                else {
                  dVar17 = (double)FUN_140e4b060(pdVar10);
                }
                dVar18 = local_408;
                if ((local_3fc & 0xffffff) != 0) {
                  dVar18 = (double)FUN_140e4b060(&local_408);
                }
                fVar16 = (float)FUN_140e78f90((float)dVar18,(float)dVar17);
                if ((1 << ((byte)*(undefined4 *)((longlong)pdVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pdVar11);
                }
                *(undefined4 *)((longlong)pdVar11 + 0xc) = 0;
                *pdVar11 = (double)fVar16;
                local_3c8 = 0x485;
                pdVar11 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
                if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
                  dVar17 = *pdVar10;
                }
                else {
                  dVar17 = (double)FUN_140e4b060(pdVar10);
                }
                dVar18 = local_408;
                if ((local_3fc & 0xffffff) != 0) {
                  dVar18 = (double)FUN_140e4b060(&local_408);
                }
                fVar16 = (float)FUN_140e79010((float)dVar18,(float)dVar17);
                if ((1 << ((byte)*(undefined4 *)((longlong)pdVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pdVar11);
                }
                *(undefined4 *)((longlong)pdVar11 + 0xc) = 0;
                *pdVar11 = (double)fVar16;
                cVar2 = FUN_140e643f0(local_1a0,&local_res8,&local_res10);
              } while (cVar2 != '\0');
            }
            FUN_140e63970(local_1a0,&local_res8,&local_res10);
            if (local_190 != 0) {
              FUN_140e4cd60();
            }
          }
        }
        uVar15 = (undefined4)(uVar21 >> 0x20);
        local_3c8 = 0x48f;
        if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_438);
        }
        local_438 = 0;
        local_430 = 0;
        local_42c = 5;
        local_428 = (longlong *)CONCAT44(uRam0000000141dc66d4,_DAT_141dc66d0);
        uStack_420 = CONCAT44(uRam0000000141dc66dc,uRam0000000141dc66d8);
        if ((1 << ((byte)_local_37c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_388);
        }
        FUN_140041b80(&local_388,&local_428);
        local_298 = &local_388;
        ppuVar23 = &local_298;
        uVar21 = CONCAT44(uVar15,DAT_141a0a0d8);
        puVar7 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_438,1,uVar21,ppuVar23);
        uStack_3dc = *(undefined4 *)((longlong)puVar7 + 0xc);
        uStack_3e0 = *(undefined4 *)(puVar7 + 1);
        if ((1 << ((byte)uStack_3dc & 0x1f) & 0x46U) == 0) {
          local_3e8 = (longlong *)*puVar7;
        }
        else {
          FUN_1400419b0(&local_3e8,puVar7);
        }
        local_res20 = uVar12 | 0x200;
        local_2ac = 7;
        local_2b8 = (longlong *)CONCAT44(local_2b8._4_4_,6);
        FUN_140042560(&local_3e8,&local_2b8);
        if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        uVar4 = FUN_140e851f0(uVar6,&local_3e8,DAT_141955260,1);
        local_res20 = uVar12;
        if ((1 << ((byte)uStack_3dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3e8);
        }
        if (uVar4 < 0x80000000) {
          local_3c8 = 0x491;
          (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
          iVar3 = 0x96;
          uVar15 = local_248;
          do {
            iVar3 = iVar3 + -1;
            local_3c8 = 0x493;
            if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2e8);
            }
            local_2e8 = 0;
            local_2e0 = 0;
            local_2dc = 5;
            local_2ac = 6;
            local_2b8 = local_res8;
            uVar22 = (ulonglong)ppuVar23 & 0xffffffffffffff00;
            uVar21 = uVar21 & 0xffffffffffffff00;
            FUN_140e87440(&local_2b8,DAT_1419fe0e8,0x80000000,&local_2c8,uVar21,uVar22);
            if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            local_29c = 6;
            local_2a8 = local_res8;
            uVar22 = uVar22 & 0xffffffffffffff00;
            uVar21 = uVar21 & 0xffffffffffffff00;
            FUN_140e87440(&local_2a8,DAT_1419fe158,0x80000000,&local_2f8,uVar21,uVar22);
            if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            local_238 = 6;
            local_244 = local_res8;
            uVar21 = uVar21 & 0xffffffffffffff00;
            FUN_140e87440(&local_244,DAT_141a1b910,0x80000000,&local_258,uVar21,
                          uVar22 & 0xffffffffffffff00);
            uVar14 = (undefined4)(uVar21 >> 0x20);
            if ((1 << ((byte)local_238 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_244);
            }
            uVar6 = FUN_140e794b0(0,0x4020000000000000);
            uStack_3dc = uStack_2bc;
            uStack_3e0 = uStack_2c0;
            if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) == 0) {
              local_3e8 = local_2c8;
            }
            else {
              FUN_1400419b0(&local_3e8,&local_2c8);
            }
            local_res20 = uVar12 | 0x400;
            FUN_140162c50(&local_3e8,uVar6);
            local_428 = local_3e8;
            uStack_420 = CONCAT44(uStack_3dc,uStack_3e0);
            if ((1 << ((byte)_local_36c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_378);
            }
            FUN_140041b80(&local_378,&local_428);
            local_res20 = uVar12;
            if ((1 << ((byte)uStack_3dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3e8);
            }
            local_290 = &local_378;
            uVar6 = FUN_140e794b0(0,0x4020000000000000);
            uStack_40c = uStack_2ec;
            uStack_410 = uStack_2f0;
            if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) == 0) {
              local_418 = local_2f8;
            }
            else {
              FUN_1400419b0(&local_418,&local_2f8);
            }
            local_res20 = uVar12 | 0x800;
            FUN_140162c50(&local_418,uVar6);
            local_428 = local_418;
            uStack_420 = CONCAT44(uStack_40c,uStack_410);
            if ((1 << ((byte)_local_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_368);
            }
            FUN_140041b80(&local_368,&local_428);
            local_res20 = uVar12;
            if ((1 << ((byte)uStack_40c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_418);
            }
            local_428 = (longlong *)local_258;
            uStack_420 = CONCAT44(uStack_24c,uStack_250);
            local_288 = &local_368;
            if ((1 << ((byte)_local_34c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_358);
            }
            FUN_140041b80(&local_358,&local_428);
            local_280 = &local_358;
            uStack_16c = 0xf;
            local_178 = 0x10000000000000f;
            local_428 = (longlong *)0x10000000000000f;
            uStack_420 = CONCAT44(0xf,uStack_170);
            if ((1 << ((byte)_local_33c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_348);
            }
            FUN_140041b80(local_348,&local_428);
            local_278 = local_348;
            ppuVar23 = &local_290;
            uVar21 = CONCAT44(uVar14,DAT_141a0a7c8);
            puVar7 = (undefined8 *)
                     FUN_140e634e0(local_res8,local_res10,&local_2e8,4,uVar21,ppuVar23);
            if (puVar7 != &local_230) {
              local_428 = (longlong *)*puVar7;
              uStack_420 = puVar7[1];
              if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_230);
              }
              FUN_140041b80(&local_230,&local_428);
            }
            local_3c8 = 0x494;
            plVar1 = (longlong *)FUN_140e794b0(0,0x406c200000000000);
            if ((1 << ((byte)uVar15 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_218);
            }
            uStack_20c = 0;
            local_3c8 = 0x495;
            local_218 = plVar1;
            dVar17 = (double)FUN_140e794b0(0,0x4020000000000000);
            if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_408);
            }
            local_3fc = 0;
            local_3c8 = 0x496;
            local_408 = dVar17;
            iVar5 = FUN_140e63cb0(local_158,&local_res8,&local_res10,&local_230);
            plVar1 = local_218;
            if (0 < iVar5) {
              uVar6 = CONCAT44(uStack_20c,uStack_210);
              do {
                local_3c8 = 0x498;
                pplVar9 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f4e0);
                uStack_3ac = 6;
                local_3b8 = local_res10;
                ppuVar23 = (undefined8 **)((ulonglong)ppuVar23 & 0xffffffffffffff00);
                uVar21 = uVar21 & 0xffffffffffffff00;
                FUN_140e87440(&local_3b8,DAT_141a0a828,0x80000000,&local_208,uVar21,ppuVar23);
                if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_3b8);
                }
                FUN_140e609c0(local_res8);
                if (&local_208 != pplVar9) {
                  local_428 = local_208;
                  uStack_420 = CONCAT44(uStack_1fc,uStack_200);
                  if ((1 << ((byte)*(undefined4 *)((longlong)pplVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(pplVar9);
                  }
                  FUN_140041b80(pplVar9,&local_428);
                }
                FUN_140e60910(1);
                local_3c8 = 0x499;
                pplVar9 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
                FUN_140e609c0(local_res8);
                if (&local_218 != pplVar9) {
                  local_428 = plVar1;
                  uStack_420 = uVar6;
                  if ((1 << ((byte)*(undefined4 *)((longlong)pplVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(pplVar9);
                  }
                  FUN_140041b80(pplVar9,&local_428);
                }
                FUN_140e60910(1);
                local_3c8 = 0x49a;
                pdVar10 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
                pdVar11 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
                if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
                  dVar17 = *pdVar10;
                }
                else {
                  dVar17 = (double)FUN_140e4b060(pdVar10);
                }
                dVar18 = local_408;
                if ((local_3fc & 0xffffff) != 0) {
                  dVar18 = (double)FUN_140e4b060(&local_408);
                }
                fVar16 = (float)FUN_140e78f90((float)dVar18,(float)dVar17);
                if ((1 << ((byte)*(undefined4 *)((longlong)pdVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pdVar11);
                }
                *(undefined4 *)((longlong)pdVar11 + 0xc) = 0;
                *pdVar11 = (double)fVar16;
                local_3c8 = 0x49b;
                pdVar11 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
                if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
                  dVar17 = *pdVar10;
                }
                else {
                  dVar17 = (double)FUN_140e4b060(pdVar10);
                }
                dVar18 = local_408;
                if ((local_3fc & 0xffffff) != 0) {
                  dVar18 = (double)FUN_140e4b060(&local_408);
                }
                fVar16 = (float)FUN_140e79010((float)dVar18,(float)dVar17);
                if ((1 << ((byte)*(undefined4 *)((longlong)pdVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pdVar11);
                }
                *(undefined4 *)((longlong)pdVar11 + 0xc) = 0;
                *pdVar11 = (double)fVar16;
                cVar2 = FUN_140e643f0(local_158,&local_res8,&local_res10);
              } while (cVar2 != '\0');
            }
            FUN_140e63970(local_158,&local_res8,&local_res10);
            if (local_148 != 0) {
              FUN_140e4cd60();
            }
            uVar15 = 0;
          } while (0 < iVar3);
          iVar3 = local_1b8;
          do {
            iVar3 = iVar3 + -1;
            local_3c8 = 0x4a3;
            if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_438);
            }
            local_438 = 0;
            local_430 = 0;
            local_42c = 5;
            uStack_3ac = 6;
            local_3b8 = local_res8;
            uVar22 = (ulonglong)ppuVar23 & 0xffffffffffffff00;
            uVar21 = uVar21 & 0xffffffffffffff00;
            FUN_140e87440(&local_3b8,DAT_1419fe0e8,0x80000000,&local_2c8,uVar21,uVar22);
            if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3b8);
            }
            local_2ac = 6;
            local_2b8 = local_res8;
            uVar22 = uVar22 & 0xffffffffffffff00;
            uVar21 = uVar21 & 0xffffffffffffff00;
            FUN_140e87440(&local_2b8,DAT_1419fe158,0x80000000,&local_2f8,uVar21,uVar22);
            if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            local_29c = 6;
            local_2a8 = local_res8;
            uVar21 = uVar21 & 0xffffffffffffff00;
            FUN_140e87440(&local_2a8,DAT_141a1b910,0x80000000,&local_258,uVar21,
                          uVar22 & 0xffffffffffffff00);
            uVar15 = (undefined4)(uVar21 >> 0x20);
            if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            local_3f8 = (undefined4)local_2c8;
            uStack_3f4 = local_2c8._4_4_;
            uStack_3f0 = uStack_2c0;
            uStack_3ec = uStack_2bc;
            if ((1 << ((byte)_local_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_388);
            }
            FUN_140041b80(&local_388,&local_3f8);
            local_298 = &local_388;
            local_3f8 = (undefined4)local_2f8;
            uStack_3f4 = local_2f8._4_4_;
            uStack_3f0 = uStack_2f0;
            uStack_3ec = uStack_2ec;
            if ((1 << ((byte)_local_36c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_378);
            }
            FUN_140041b80(&local_378,&local_3f8);
            local_290 = &local_378;
            local_3f8 = (undefined4)local_258;
            uStack_3f4 = local_258._4_4_;
            uStack_3f0 = uStack_250;
            uStack_3ec = uStack_24c;
            if ((1 << ((byte)_local_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_368);
            }
            FUN_140041b80(&local_368,&local_3f8);
            uStack_16c = 0xf;
            local_178 = 0x100000000000023;
            local_3f8 = 0x23;
            uStack_3f4 = 0x1000000;
            uStack_3f0 = uStack_170;
            uStack_3ec = 0xf;
            local_288 = &local_368;
            if ((1 << ((byte)_local_34c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_358);
            }
            FUN_140041b80(&local_358,&local_3f8);
            local_280 = &local_358;
            ppuVar23 = &local_298;
            uVar21 = CONCAT44(uVar15,DAT_141a0a7c8);
            uVar6 = FUN_140e634e0(local_res8,local_res10,&local_438,4,uVar21,ppuVar23);
            iVar5 = FUN_140e63cb0(local_138,&local_res8,&local_res10,uVar6);
            if (0 < iVar5) {
              do {
                local_3c8 = 0x4a5;
                uStack_10c = 0xf;
                local_118 = 0x100000100000319;
                local_3f8 = 0x319;
                uStack_3f4 = 0x1000001;
                uStack_3f0 = uStack_110;
                uStack_3ec = 0xf;
                if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2d8);
                }
                FUN_140041b80(&local_2d8,&local_3f8);
                FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_2d8);
                local_3c8 = 0x4a6;
                if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_398);
                }
                local_38c = 0;
                local_398 = 0;
                FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_398);
                local_3c8 = 0x4a7;
                if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_308);
                }
                local_2fc = 0;
                local_308 = 0x4000000000000000;
                FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_308);
                local_3c8 = 0x4a9;
                dVar17 = (double)FUN_140e794b0(0,0x405cc00000000000);
                if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_3a8);
                }
                local_39c = 0;
                local_3c8 = 0x4aa;
                local_3a8 = dVar17;
                dVar17 = (double)FUN_140e794b0(0,0x4018000000000000);
                if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_408);
                }
                local_3fc = 0;
                local_3c8 = 0x4ab;
                local_408 = dVar17;
                pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
                dVar17 = local_3a8;
                if ((local_39c & 0xffffff) != 0) {
                  dVar17 = (double)FUN_140e4b060(&local_3a8);
                }
                dVar18 = local_408;
                if ((local_3fc & 0xffffff) != 0) {
                  dVar18 = (double)FUN_140e4b060(&local_408);
                }
                fVar16 = (float)FUN_140e78f90((float)dVar18,(float)dVar17);
                if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pdVar10);
                }
                *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
                *pdVar10 = (double)fVar16;
                local_3c8 = 0x4ac;
                pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
                dVar17 = local_3a8;
                if ((local_39c & 0xffffff) != 0) {
                  dVar17 = (double)FUN_140e4b060(&local_3a8);
                }
                dVar18 = local_408;
                if ((local_3fc & 0xffffff) != 0) {
                  dVar18 = (double)FUN_140e4b060(&local_408);
                }
                fVar16 = (float)FUN_140e79010((float)dVar18,(float)dVar17);
                if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pdVar10);
                }
                *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
                *pdVar10 = (double)fVar16;
                cVar2 = FUN_140e643f0(local_138,&local_res8,&local_res10);
              } while (cVar2 != '\0');
            }
            FUN_140e63970(local_138,&local_res8,&local_res10);
            local_3c8 = 0x4b0;
            if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_438);
            }
            local_438 = 0;
            local_430 = 0;
            local_42c = 5;
            local_238 = 6;
            local_244 = local_res8;
            uVar22 = (ulonglong)ppuVar23 & 0xffffffffffffff00;
            uVar21 = uVar21 & 0xffffffffffffff00;
            FUN_140e87440(&local_244,DAT_1419fe0e8,0x80000000,&local_2c8,uVar21,uVar22);
            if ((1 << ((byte)local_238 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_244);
            }
            uStack_40c = 6;
            local_418 = local_res8;
            uVar22 = uVar22 & 0xffffffffffffff00;
            uVar21 = uVar21 & 0xffffffffffffff00;
            FUN_140e87440(&local_418,DAT_1419fe158,0x80000000,&local_2f8,uVar21,uVar22);
            if ((1 << ((byte)uStack_40c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_418);
            }
            uStack_3dc = 6;
            local_3e8 = local_res8;
            uVar21 = uVar21 & 0xffffffffffffff00;
            FUN_140e87440(&local_3e8,DAT_141a1b910,0x80000000,&local_258,uVar21,
                          uVar22 & 0xffffffffffffff00);
            uVar15 = (undefined4)(uVar21 >> 0x20);
            if ((1 << ((byte)uStack_3dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3e8);
            }
            local_3f8 = (undefined4)local_2c8;
            uStack_3f4 = local_2c8._4_4_;
            uStack_3f0 = uStack_2c0;
            uStack_3ec = uStack_2bc;
            if ((1 << ((byte)_local_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_388);
            }
            FUN_140041b80(&local_388,&local_3f8);
            local_298 = &local_388;
            local_3f8 = (undefined4)local_2f8;
            uStack_3f4 = local_2f8._4_4_;
            uStack_3f0 = uStack_2f0;
            uStack_3ec = uStack_2ec;
            if ((1 << ((byte)_local_36c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_378);
            }
            FUN_140041b80(&local_378,&local_3f8);
            local_290 = &local_378;
            local_3f8 = (undefined4)local_258;
            uStack_3f4 = local_258._4_4_;
            uStack_3f0 = uStack_250;
            uStack_3ec = uStack_24c;
            if ((1 << ((byte)_local_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_368);
            }
            FUN_140041b80(&local_368,&local_3f8);
            uStack_15c = 0xf;
            local_168 = 0x100000000000023;
            local_3f8 = 0x23;
            uStack_3f4 = 0x1000000;
            uStack_3f0 = uStack_160;
            uStack_3ec = 0xf;
            local_288 = &local_368;
            if ((1 << ((byte)_local_34c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_358);
            }
            FUN_140041b80(&local_358,&local_3f8);
            local_280 = &local_358;
            ppuVar23 = &local_298;
            uVar21 = CONCAT44(uVar15,DAT_141a0a7c8);
            uVar6 = FUN_140e634e0(local_res8,local_res10,&local_438,4,uVar21,ppuVar23);
            iVar5 = FUN_140e63cb0(local_158,&local_res8,&local_res10,uVar6);
            if (0 < iVar5) {
              do {
                local_3c8 = 0x4b2;
                uStack_420 = CONCAT44(0xf,(undefined4)uStack_420);
                local_428 = (longlong *)0x100000100000319;
                local_3f8 = 0x319;
                uStack_3f4 = 0x1000001;
                uStack_3f0 = (undefined4)uStack_420;
                uStack_3ec = 0xf;
                if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2d8);
                }
                FUN_140041b80(&local_2d8,&local_3f8);
                FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_2d8);
                local_3c8 = 0x4b3;
                if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_398);
                }
                local_38c = 0;
                local_398 = 0;
                FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_398);
                local_3c8 = 0x4b4;
                if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_308);
                }
                local_2fc = 0;
                local_308 = 0x3ff0000000000000;
                FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_308);
                local_3c8 = 0x4b6;
                dVar17 = (double)FUN_140e794b0(0,0x405cc00000000000);
                if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_3a8);
                }
                local_39c = 0;
                local_3c8 = 0x4b7;
                local_3a8 = dVar17;
                dVar17 = (double)FUN_140e794b0(0,0x4018000000000000);
                if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_408);
                }
                local_3fc = 0;
                local_3c8 = 0x4b8;
                local_408 = dVar17;
                pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
                dVar17 = local_3a8;
                if ((local_39c & 0xffffff) != 0) {
                  dVar17 = (double)FUN_140e4b060(&local_3a8);
                }
                dVar18 = local_408;
                if ((local_3fc & 0xffffff) != 0) {
                  dVar18 = (double)FUN_140e4b060(&local_408);
                }
                fVar16 = (float)FUN_140e78f90((float)dVar18,(float)dVar17);
                if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pdVar10);
                }
                *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
                *pdVar10 = (double)fVar16;
                local_3c8 = 0x4b9;
                pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
                dVar17 = local_3a8;
                if ((local_39c & 0xffffff) != 0) {
                  dVar17 = (double)FUN_140e4b060(&local_3a8);
                }
                dVar18 = local_408;
                if ((local_3fc & 0xffffff) != 0) {
                  dVar18 = (double)FUN_140e4b060(&local_408);
                }
                fVar16 = (float)FUN_140e79010((float)dVar18,(float)dVar17);
                if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pdVar10);
                }
                *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
                *pdVar10 = (double)fVar16;
                cVar2 = FUN_140e643f0(local_158,&local_res8,&local_res10);
              } while (cVar2 != '\0');
            }
            FUN_140e63970(local_158,&local_res8,&local_res10);
            if (local_148 != 0) {
              FUN_140e4cd60();
              local_148 = 0;
            }
            if (local_128 != 0) {
              FUN_140e4cd60();
            }
          } while (0 < iVar3);
          local_3c8 = 0x4be;
          if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_438);
          }
          local_438 = 0;
          local_430 = 0;
          local_42c = 5;
          uStack_3ac = 6;
          local_3b8 = local_res8;
          uVar22 = (ulonglong)ppuVar23 & 0xffffffffffffff00;
          uVar21 = uVar21 & 0xffffffffffffff00;
          FUN_140e87440(&local_3b8,DAT_1419fe0e8,0x80000000,&local_2c8,uVar21,uVar22);
          if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3b8);
          }
          uStack_3ac = 6;
          local_3b8 = local_res8;
          uVar22 = uVar22 & 0xffffffffffffff00;
          uVar21 = uVar21 & 0xffffffffffffff00;
          FUN_140e87440(&local_3b8,DAT_1419fe158,0x80000000,&local_2f8,uVar21,uVar22);
          if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3b8);
          }
          uStack_3ac = 6;
          local_3b8 = local_res8;
          uVar21 = uVar21 & 0xffffffffffffff00;
          FUN_140e87440(&local_3b8,DAT_141a1b910,0x80000000,&local_258,uVar21,
                        uVar22 & 0xffffffffffffff00);
          uVar15 = (undefined4)(uVar21 >> 0x20);
          if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3b8);
          }
          local_3f8 = (undefined4)local_2c8;
          uStack_3f4 = local_2c8._4_4_;
          uStack_3f0 = uStack_2c0;
          uStack_3ec = uStack_2bc;
          if ((1 << ((byte)_local_37c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_388);
          }
          FUN_140041b80(&local_388,&local_3f8);
          local_298 = &local_388;
          local_3f8 = (undefined4)local_2f8;
          uStack_3f4 = local_2f8._4_4_;
          uStack_3f0 = uStack_2f0;
          uStack_3ec = uStack_2ec;
          if ((1 << ((byte)_local_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_378);
          }
          FUN_140041b80(&local_378,&local_3f8);
          local_290 = &local_378;
          local_3f8 = (undefined4)local_258;
          uStack_3f4 = local_258._4_4_;
          uStack_3f0 = uStack_250;
          uStack_3ec = uStack_24c;
          if ((1 << ((byte)_local_35c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_368);
          }
          FUN_140041b80(&local_368,&local_3f8);
          uStack_420 = CONCAT44(0xf,(undefined4)uStack_420);
          local_428 = (longlong *)0x100000000000023;
          local_3f8 = 0x23;
          uStack_3f4 = 0x1000000;
          uStack_3f0 = (undefined4)uStack_420;
          uStack_3ec = 0xf;
          local_288 = &local_368;
          if ((1 << ((byte)_local_34c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_358);
          }
          FUN_140041b80(&local_358,&local_3f8);
          local_280 = &local_358;
          ppuVar23 = &local_298;
          uVar21 = CONCAT44(uVar15,DAT_141a0a7c8);
          uVar6 = FUN_140e634e0(local_res8,local_res10,&local_438,4,uVar21,ppuVar23);
          iVar3 = FUN_140e63cb0(local_108,&local_res8,&local_res10,uVar6);
          if (0 < iVar3) {
            do {
              local_3c8 = 0x4c0;
              uStack_420 = CONCAT44(0xf,(undefined4)uStack_420);
              local_428 = (longlong *)0x100000100000319;
              local_3f8 = 0x319;
              uStack_3f4 = 0x1000001;
              uStack_3f0 = (undefined4)uStack_420;
              uStack_3ec = 0xf;
              if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2d8);
              }
              FUN_140041b80(&local_2d8,&local_3f8);
              FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_2d8);
              local_3c8 = 0x4c1;
              if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_398);
              }
              local_38c = 0;
              local_398 = 0;
              FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_398);
              local_3c8 = 0x4c2;
              if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_308);
              }
              local_2fc = 0;
              local_308 = 0x3ff0000000000000;
              FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_308);
              local_3c8 = 0x4c4;
              dVar17 = (double)FUN_140e794b0(0,0x405cc00000000000);
              if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_3a8);
              }
              local_39c = 0;
              local_3c8 = 0x4c5;
              local_3a8 = dVar17;
              dVar17 = (double)FUN_140e794b0(0,0x4018000000000000);
              if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_408);
              }
              local_3fc = 0;
              local_3c8 = 0x4c6;
              local_408 = dVar17;
              pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
              dVar17 = local_3a8;
              if ((local_39c & 0xffffff) != 0) {
                dVar17 = (double)FUN_140e4b060(&local_3a8);
              }
              dVar18 = local_408;
              if ((local_3fc & 0xffffff) != 0) {
                dVar18 = (double)FUN_140e4b060(&local_408);
              }
              fVar16 = (float)FUN_140e78f90((float)dVar18,(float)dVar17);
              if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pdVar10);
              }
              *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
              *pdVar10 = (double)fVar16;
              local_3c8 = 0x4c7;
              pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
              dVar17 = local_3a8;
              if ((local_39c & 0xffffff) != 0) {
                dVar17 = (double)FUN_140e4b060(&local_3a8);
              }
              dVar18 = local_408;
              if ((local_3fc & 0xffffff) != 0) {
                dVar18 = (double)FUN_140e4b060(&local_408);
              }
              fVar16 = (float)FUN_140e79010((float)dVar18,(float)dVar17);
              if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pdVar10);
              }
              *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
              *pdVar10 = (double)fVar16;
              cVar2 = FUN_140e643f0(local_108,&local_res8,&local_res10);
            } while (cVar2 != '\0');
          }
          FUN_140e63970(local_108,&local_res8,&local_res10);
          local_3c8 = 0x4cb;
          if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_438);
          }
          local_438 = 0;
          local_430 = 0;
          local_42c = 5;
          uStack_3ac = 6;
          local_3b8 = local_res8;
          uVar22 = (ulonglong)ppuVar23 & 0xffffffffffffff00;
          uVar21 = uVar21 & 0xffffffffffffff00;
          FUN_140e87440(&local_3b8,DAT_1419fe0e8,0x80000000,&local_2c8,uVar21,uVar22);
          if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3b8);
          }
          uStack_3ac = 6;
          local_3b8 = local_res8;
          uVar22 = uVar22 & 0xffffffffffffff00;
          uVar21 = uVar21 & 0xffffffffffffff00;
          FUN_140e87440(&local_3b8,DAT_1419fe158,0x80000000,&local_2f8,uVar21,uVar22);
          if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3b8);
          }
          uStack_3ac = 6;
          local_3b8 = local_res8;
          uVar21 = uVar21 & 0xffffffffffffff00;
          FUN_140e87440(&local_3b8,DAT_141a1b910,0x80000000,&local_258,uVar21,
                        uVar22 & 0xffffffffffffff00);
          uVar15 = (undefined4)(uVar21 >> 0x20);
          if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3b8);
          }
          local_3f8 = (undefined4)local_2c8;
          uStack_3f4 = local_2c8._4_4_;
          uStack_3f0 = uStack_2c0;
          uStack_3ec = uStack_2bc;
          if ((1 << ((byte)_local_37c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_388);
          }
          FUN_140041b80(&local_388,&local_3f8);
          local_298 = &local_388;
          local_3f8 = (undefined4)local_2f8;
          uStack_3f4 = local_2f8._4_4_;
          uStack_3f0 = uStack_2f0;
          uStack_3ec = uStack_2ec;
          if ((1 << ((byte)_local_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_378);
          }
          FUN_140041b80(&local_378,&local_3f8);
          local_290 = &local_378;
          local_3f8 = (undefined4)local_258;
          uStack_3f4 = local_258._4_4_;
          uStack_3f0 = uStack_250;
          uStack_3ec = uStack_24c;
          if ((1 << ((byte)_local_35c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_368);
          }
          FUN_140041b80(&local_368,&local_3f8);
          uStack_420 = CONCAT44(0xf,(undefined4)uStack_420);
          local_428 = (longlong *)0x100000000000023;
          local_3f8 = 0x23;
          uStack_3f4 = 0x1000000;
          uStack_3f0 = (undefined4)uStack_420;
          uStack_3ec = 0xf;
          local_288 = &local_368;
          if ((1 << ((byte)_local_34c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_358);
          }
          FUN_140041b80(&local_358,&local_3f8);
          local_280 = &local_358;
          ppuVar23 = &local_298;
          uVar21 = CONCAT44(uVar15,DAT_141a0a7c8);
          uVar6 = FUN_140e634e0(local_res8,local_res10,&local_438,4,uVar21,ppuVar23);
          iVar3 = FUN_140e63cb0(local_1a0,&local_res8,&local_res10,uVar6);
          if (0 < iVar3) {
            do {
              local_3c8 = 0x4cd;
              uStack_420 = CONCAT44(0xf,(undefined4)uStack_420);
              local_428 = (longlong *)0x100000100000319;
              local_3f8 = 0x319;
              uStack_3f4 = 0x1000001;
              uStack_3f0 = (undefined4)uStack_420;
              uStack_3ec = 0xf;
              if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2d8);
              }
              FUN_140041b80(&local_2d8,&local_3f8);
              FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_2d8);
              local_3c8 = 0x4ce;
              if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_398);
              }
              local_38c = 0;
              local_398 = 0;
              FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_398);
              local_3c8 = 0x4cf;
              if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_308);
              }
              local_2fc = 0;
              local_308 = 0x4008000000000000;
              FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_308);
              local_3c8 = 0x4d1;
              dVar17 = (double)FUN_140e794b0(0,0x405cc00000000000);
              if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_3a8);
              }
              local_39c = 0;
              local_3c8 = 0x4d2;
              local_3a8 = dVar17;
              dVar17 = (double)FUN_140e794b0(0,0x4018000000000000);
              if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_408);
              }
              local_3fc = 0;
              local_3c8 = 0x4d3;
              local_408 = dVar17;
              pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
              dVar17 = local_3a8;
              if ((local_39c & 0xffffff) != 0) {
                dVar17 = (double)FUN_140e4b060(&local_3a8);
              }
              dVar18 = local_408;
              if ((local_3fc & 0xffffff) != 0) {
                dVar18 = (double)FUN_140e4b060(&local_408);
              }
              fVar16 = (float)FUN_140e78f90((float)dVar18,(float)dVar17);
              if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pdVar10);
              }
              *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
              *pdVar10 = (double)fVar16;
              local_3c8 = 0x4d4;
              pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
              dVar17 = local_3a8;
              if ((local_39c & 0xffffff) != 0) {
                dVar17 = (double)FUN_140e4b060(&local_3a8);
              }
              dVar18 = local_408;
              if ((local_3fc & 0xffffff) != 0) {
                dVar18 = (double)FUN_140e4b060(&local_408);
              }
              fVar16 = (float)FUN_140e79010((float)dVar18,(float)dVar17);
              if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pdVar10);
              }
              *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
              *pdVar10 = (double)fVar16;
              cVar2 = FUN_140e643f0(local_1a0,&local_res8,&local_res10);
            } while (cVar2 != '\0');
          }
          FUN_140e63970(local_1a0,&local_res8,&local_res10);
          iVar3 = 10;
          do {
            iVar3 = iVar3 + -1;
            local_3c8 = 0x4da;
            if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_438);
            }
            local_438 = 0;
            local_430 = 0;
            local_42c = 5;
            uStack_3ac = 6;
            local_3b8 = local_res8;
            uVar22 = (ulonglong)ppuVar23 & 0xffffffffffffff00;
            uVar21 = uVar21 & 0xffffffffffffff00;
            FUN_140e87440(&local_3b8,DAT_1419fe0e8,0x80000000,&local_2c8,uVar21,uVar22);
            if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3b8);
            }
            local_2ac = 6;
            local_2b8 = local_res8;
            uVar22 = uVar22 & 0xffffffffffffff00;
            uVar21 = uVar21 & 0xffffffffffffff00;
            FUN_140e87440(&local_2b8,DAT_1419fe158,0x80000000,&local_2f8,uVar21,uVar22);
            if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            local_29c = 6;
            local_2a8 = local_res8;
            uVar21 = uVar21 & 0xffffffffffffff00;
            FUN_140e87440(&local_2a8,DAT_141a1b910,0x80000000,&local_258,uVar21,
                          uVar22 & 0xffffffffffffff00);
            uVar15 = (undefined4)(uVar21 >> 0x20);
            if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            local_3f8 = (undefined4)local_2c8;
            uStack_3f4 = local_2c8._4_4_;
            uStack_3f0 = uStack_2c0;
            uStack_3ec = uStack_2bc;
            if ((1 << ((byte)_local_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_388);
            }
            FUN_140041b80(&local_388,&local_3f8);
            local_298 = &local_388;
            local_3f8 = (undefined4)local_2f8;
            uStack_3f4 = local_2f8._4_4_;
            uStack_3f0 = uStack_2f0;
            uStack_3ec = uStack_2ec;
            if ((1 << ((byte)_local_36c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_378);
            }
            FUN_140041b80(&local_378,&local_3f8);
            local_290 = &local_378;
            local_3f8 = (undefined4)local_258;
            uStack_3f4 = local_258._4_4_;
            uStack_3f0 = uStack_250;
            uStack_3ec = uStack_24c;
            if ((1 << ((byte)_local_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_368);
            }
            FUN_140041b80(&local_368,&local_3f8);
            uStack_420 = CONCAT44(0xf,(undefined4)uStack_420);
            local_428 = (longlong *)0x100000000000023;
            local_3f8 = 0x23;
            uStack_3f4 = 0x1000000;
            uStack_3f0 = (undefined4)uStack_420;
            uStack_3ec = 0xf;
            local_288 = &local_368;
            if ((1 << ((byte)_local_34c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_358);
            }
            FUN_140041b80(&local_358,&local_3f8);
            local_280 = &local_358;
            ppuVar23 = &local_298;
            uVar21 = CONCAT44(uVar15,DAT_141a0a7c8);
            uVar6 = FUN_140e634e0(local_res8,local_res10,&local_438,4,uVar21,ppuVar23);
            iVar5 = FUN_140e63cb0(local_138,&local_res8,&local_res10,uVar6);
            if (0 < iVar5) {
              do {
                local_3c8 = 0x4dc;
                uStack_15c = 0xf;
                local_168 = 0x100000100000319;
                local_3f8 = 0x319;
                uStack_3f4 = 0x1000001;
                uStack_3f0 = uStack_160;
                uStack_3ec = 0xf;
                if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2d8);
                }
                FUN_140041b80(&local_2d8,&local_3f8);
                FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_2d8);
                local_3c8 = 0x4dd;
                if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_398);
                }
                local_38c = 0;
                local_398 = 0;
                FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_398);
                local_3c8 = 0x4de;
                uVar6 = FUN_140e78f40(4);
                if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_308);
                }
                local_2fc = 0;
                local_308 = uVar6;
                FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_308);
                local_3c8 = 0x4e0;
                dVar17 = (double)FUN_140e794b0(0,0x405cc00000000000);
                if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_3a8);
                }
                local_39c = 0;
                local_3c8 = 0x4e1;
                local_3a8 = dVar17;
                dVar17 = (double)FUN_140e794b0(0,0x4018000000000000);
                if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_408);
                }
                local_3fc = 0;
                local_3c8 = 0x4e2;
                local_408 = dVar17;
                pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
                dVar17 = local_3a8;
                if ((local_39c & 0xffffff) != 0) {
                  dVar17 = (double)FUN_140e4b060(&local_3a8);
                }
                dVar18 = local_408;
                if ((local_3fc & 0xffffff) != 0) {
                  dVar18 = (double)FUN_140e4b060(&local_408);
                }
                fVar16 = (float)FUN_140e78f90((float)dVar18,(float)dVar17);
                if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pdVar10);
                }
                *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
                *pdVar10 = (double)fVar16;
                local_3c8 = 0x4e3;
                pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
                dVar17 = local_3a8;
                if ((local_39c & 0xffffff) != 0) {
                  dVar17 = (double)FUN_140e4b060(&local_3a8);
                }
                dVar18 = local_408;
                if ((local_3fc & 0xffffff) != 0) {
                  dVar18 = (double)FUN_140e4b060(&local_408);
                }
                fVar16 = (float)FUN_140e79010((float)dVar18,(float)dVar17);
                if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pdVar10);
                }
                *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
                *pdVar10 = (double)fVar16;
                cVar2 = FUN_140e643f0(local_138,&local_res8,&local_res10);
              } while (cVar2 != '\0');
            }
            FUN_140e63970(local_138,&local_res8,&local_res10);
            if (local_128 != 0) {
              FUN_140e4cd60();
            }
          } while (0 < iVar3);
          local_3c8 = 0x4e9;
          if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_438);
          }
          local_438 = 0;
          local_430 = 0;
          local_42c = 5;
          FUN_140e634e0(local_res8,local_res10,&local_438,0,DAT_1419fdb68,0);
          local_3c8 = 0x4ea;
          FUN_140edd0e0(local_res8,local_res10,0,0);
          local_3c8 = 0x4eb;
          if (local_190 != 0) {
            FUN_140e4cd60();
            local_190 = 0;
          }
          if (local_f8 != 0) {
            FUN_140e4cd60();
          }
          param_3 = local_res18;
          uVar15 = 0;
        }
        else {
          local_3c8 = 0x4ee;
          if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_438);
          }
          uVar15 = (undefined4)(uVar21 >> 0x20);
          local_438 = 0;
          local_430 = 0;
          local_42c = 5;
          if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2e8);
          }
          local_2e8 = 0;
          local_2e0 = 0;
          local_2dc = 5;
          puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          if (puVar7 != &local_388) {
            local_3f8 = *(undefined4 *)puVar7;
            uStack_3f4 = *(undefined4 *)((longlong)puVar7 + 4);
            uStack_3f0 = *(undefined4 *)(puVar7 + 1);
            uStack_3ec = *(undefined4 *)((longlong)puVar7 + 0xc);
            if ((1 << (local_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_388);
            }
            FUN_140041b80(&local_388,&local_3f8);
          }
          local_298 = &local_388;
          local_3f8 = _DAT_141dd3dc8;
          uStack_3f4 = uRam0000000141dd3dcc;
          uStack_3f0 = uRam0000000141dd3dd0;
          uStack_3ec = DAT_141dd3dd4;
          if ((1 << (local_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_378);
          }
          FUN_140041b80(&local_378,&local_3f8);
          local_290 = &local_378;
          if (puVar7 != &local_368) {
            local_3f8 = *(undefined4 *)puVar7;
            uStack_3f4 = *(undefined4 *)((longlong)puVar7 + 4);
            uStack_3f0 = *(undefined4 *)(puVar7 + 1);
            uStack_3ec = *(undefined4 *)((longlong)puVar7 + 0xc);
            if ((1 << (local_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_368);
            }
            FUN_140041b80(&local_368,&local_3f8);
          }
          local_3f8 = _DAT_141dd3dc8;
          uStack_3f4 = uRam0000000141dd3dcc;
          uStack_3f0 = uRam0000000141dd3dd0;
          uStack_3ec = DAT_141dd3dd4;
          local_288 = &local_368;
          if ((1 << (local_34c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_358);
          }
          FUN_140041b80(&local_358,&local_3f8);
          local_280 = &local_358;
          uVar6 = CONCAT44(uVar15,DAT_1419ff4f8);
          puVar7 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_2e8,2,uVar6,&local_298)
          ;
          uVar15 = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_40c = *(undefined4 *)((longlong)puVar7 + 0xc);
          uStack_410 = *(undefined4 *)(puVar7 + 1);
          if ((1 << ((byte)uStack_40c & 0x1f) & 0x46U) == 0) {
            local_418 = (longlong *)*puVar7;
          }
          else {
            FUN_1400419b0(&local_418,puVar7);
          }
          local_res20 = uVar12 | 0x1000;
          uStack_3ac = 7;
          local_3b8 = (longlong *)CONCAT44(local_3b8._4_4_,1);
          FUN_1400460e0(&local_418,&local_3b8);
          if ((1 << ((byte)uStack_3ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3b8);
          }
          local_3f8 = (undefined4)local_418;
          uStack_3f4 = local_418._4_4_;
          uStack_3f0 = uStack_410;
          uStack_3ec = uStack_40c;
          if ((1 << (local_33c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_348);
          }
          FUN_140041b80(local_348,&local_3f8);
          if ((1 << ((byte)uStack_40c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_418);
          }
          local_278 = local_348;
          FUN_140e634e0(local_res8,local_res10,&local_438,3,CONCAT44(uVar15,DAT_1419fd648),
                        &local_288);
          local_3c8 = 0x4f0;
          param_3 = local_res18;
          uVar15 = local_248;
        }
      }
      else if (iVar3 == 2) {
        local_3c8 = 0x4f4;
        if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_438);
        }
        local_438 = 0;
        local_430 = 0;
        local_42c = 5;
        uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5b18);
        FUN_140e63610(local_res8,local_res10,&local_438,0,uVar6,0);
        local_3c8 = 0x4f5;
      }
      else if (iVar3 == 3) {
        local_3c8 = 0x4f9;
      }
      break;
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 < 4);
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_438);
  }
  if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3a8);
  }
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_408);
  }
  if ((1 << ((byte)uVar15 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_230);
  }
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  _eh_vector_destructor_iterator_(&local_388,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_3d8;
  return param_3;
}

