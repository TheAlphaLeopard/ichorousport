// gml_Script_StatesGrubDrill @ 0x140531770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesGrubDrill
          (longlong *param_1,longlong *param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  double *pdVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  longlong *local_res8;
  longlong *local_res10;
  code *pcVar13;
  ulonglong uVar14;
  undefined4 uVar16;
  undefined8 **ppuVar15;
  undefined8 **in_stack_fffffffffffffbe0;
  ulonglong uVar17;
  undefined8 local_418;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  longlong *local_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  double local_3e8;
  uint local_3dc;
  double local_3d8;
  uint local_3cc;
  undefined8 local_3c8;
  char *local_3c0;
  undefined4 local_3b8;
  undefined8 local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  byte local_38c;
  undefined1 local_388 [12];
  byte local_37c;
  undefined8 local_378;
  undefined4 local_36c;
  undefined1 local_368 [12];
  byte local_35c;
  undefined8 local_358;
  undefined4 local_34c;
  undefined8 local_348;
  undefined4 local_33c;
  undefined8 local_338;
  undefined4 local_32c;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_31c;
  undefined8 *local_318;
  undefined1 *local_310;
  undefined8 *local_308;
  undefined1 *local_300;
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  longlong *local_2e8;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 uStack_24c;
  longlong *local_248;
  undefined4 local_23c;
  longlong *local_238;
  undefined4 local_22c;
  undefined4 local_228 [3];
  undefined4 local_21c;
  longlong *local_218;
  undefined4 local_20c;
  longlong *local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined4 local_1e8 [3];
  undefined4 local_1dc;
  longlong *local_1d8;
  undefined4 local_1cc;
  longlong *local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
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
  undefined1 local_118 [16];
  longlong local_108;
  undefined1 local_f8 [16];
  longlong local_e8;
  
  uVar8 = 0;
  bVar2 = false;
  bVar1 = false;
  local_3c0 = "gml_Script_StatesGrubPhaseChange";
  local_3c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_3c8;
  local_3b8 = 0x271;
  pcVar13 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_398,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_32c = 0xffffff;
  local_338 = 0;
  local_33c = 0xffffff;
  local_348 = 0;
  local_2bc = 0xffffff;
  local_2c8 = 0;
  local_34c = 0xffffff;
  local_358 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  uStack_2cc = 0xffffff;
  local_2d8 = 0;
  local_31c = 0xffffff;
  local_328 = 0;
  local_3cc = 0xffffff;
  local_3d8 = 0.0;
  local_3dc = 0xffffff;
  local_3e8 = 0.0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_40c = 0;
  local_418 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_3b8 = 0x273;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_26c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_270 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) == 0) {
    local_278 = *param_5;
  }
  else {
    FUN_1400419b0(&local_278);
  }
  iVar9 = 3;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf790) &&
     (_Init_thread_header(&DAT_141ddf790), DAT_141ddf790 == -1)) {
    _DAT_141ddf6fc = 0;
    _DAT_141ddf6f0 = 0x4000000000000000;
    _DAT_141ddf710 = 0;
    _DAT_141ddf704 = 0;
    _DAT_141ddf714 = 1;
    _DAT_141ddf724 = 0;
    _DAT_141ddf718 = 0x3ff0000000000000;
    _DAT_141ddf728 = 2;
    _DAT_141ddf738 = 0;
    _DAT_141ddf72c = 0x4008000000000000;
    _DAT_141ddf73c = 3;
    atexit((_func_5014 *)&LAB_141481c60);
    _Init_thread_footer(&DAT_141ddf790);
  }
  do {
    iVar4 = FUN_140e851f0(&DAT_141ddf6f0 + (longlong)(int)uVar8 * 0x14,&local_278,DAT_141955260,0);
    uVar16 = (undefined4)((ulonglong)pcVar13 >> 0x20);
    if (iVar4 == 0) {
      iVar4 = (&DAT_141ddf700)[(longlong)(int)uVar8 * 5];
      if (iVar4 == 0) {
        local_3b8 = 0x277;
        uStack_39c = 0xf;
        local_3a8 = 0x100000100000324;
        local_408 = 0x324;
        uStack_404 = 0x1000001;
        uStack_400 = uStack_3a0;
        uStack_3fc = 0xf;
        if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_338);
        }
        FUN_140041b80(&local_338,&local_408);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_338);
        local_3b8 = 0x279;
        if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_418);
        }
        local_418 = 0;
        local_410 = 0;
        local_40c = 5;
        uStack_39c = 0xf;
        local_3a8 = 0x10000020000000d;
        local_408 = 0xd;
        uStack_404 = 0x1000002;
        uStack_400 = uStack_3a0;
        uStack_3fc = 0xf;
        if ((1 << (local_38c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_398);
        }
        FUN_140041b80(&local_398,&local_408);
        local_318 = &local_398;
        uVar5 = CONCAT44(uVar16,DAT_141a07788);
        FUN_140e634e0(local_res8,local_res10,&local_418,1,uVar5,&local_318);
        uVar16 = (undefined4)((ulonglong)uVar5 >> 0x20);
        local_3b8 = 0x27a;
        if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_418);
        }
        local_418 = 0;
        local_410 = 0;
        local_40c = 5;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f60d8);
        if (puVar6 != &local_398) {
          local_408 = *(undefined4 *)puVar6;
          uStack_404 = *(undefined4 *)((longlong)puVar6 + 4);
          uStack_400 = *(undefined4 *)(puVar6 + 1);
          uStack_3fc = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << (local_38c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_398);
          }
          FUN_140041b80(&local_398,&local_408);
        }
        local_318 = &local_398;
        local_408 = _DAT_1419e6120;
        uStack_404 = uRam00000001419e6124;
        uStack_400 = uRam00000001419e6128;
        uStack_3fc = uRam00000001419e612c;
        if ((1 << (local_37c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_388);
        }
        FUN_140041b80(local_388,&local_408);
        local_310 = local_388;
        local_408 = _DAT_1419df7a0;
        uStack_404 = uRam00000001419df7a4;
        uStack_400 = uRam00000001419df7a8;
        uStack_3fc = uRam00000001419df7ac;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        FUN_140041b80(&local_378,&local_408);
        local_308 = &local_378;
        uVar5 = CONCAT44(uVar16,DAT_141a0a2e8);
        FUN_140e634e0(local_res8,local_res10,&local_418,3,uVar5,&local_318);
        uVar16 = (undefined4)((ulonglong)uVar5 >> 0x20);
        local_3b8 = 0x27b;
        if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_348);
        }
        local_33c = 0;
        local_348 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_348);
        local_3b8 = 0x27c;
        uStack_39c = 0xf;
        local_3a8 = 0x10000010000011b;
        local_408 = 0x11b;
        uStack_404 = 0x1000001;
        uStack_400 = uStack_3a0;
        uStack_3fc = 0xf;
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        FUN_140041b80(&local_2c8,&local_408);
        FUN_140e86fa0(local_res8,DAT_1419f5c58,0x80000000,&local_2c8);
        local_3b8 = 0x27d;
        if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_358);
        }
        local_34c = 0;
        local_358 = 0x3ff0000000000000;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_358);
        local_3b8 = 0x27e;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fdae8);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        *puVar6 = 0x4000000000000000;
        local_3b8 = 0x280;
        if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_418);
        }
        local_418 = 0;
        local_410 = 0;
        local_40c = 5;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
        if (puVar6 != &local_398) {
          local_408 = *(undefined4 *)puVar6;
          uStack_404 = *(undefined4 *)((longlong)puVar6 + 4);
          uStack_400 = *(undefined4 *)(puVar6 + 1);
          uStack_3fc = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << (local_38c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_398);
          }
          FUN_140041b80(&local_398,&local_408);
        }
        local_318 = &local_398;
        local_408 = _DAT_141dd3e68;
        uStack_404 = uRam0000000141dd3e6c;
        uStack_400 = uRam0000000141dd3e70;
        uStack_3fc = DAT_141dd3e74;
        if ((1 << (local_37c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_388);
        }
        FUN_140041b80(local_388,&local_408);
        local_310 = local_388;
        local_408 = _DAT_1419df7a0;
        uStack_404 = uRam00000001419df7a4;
        uStack_400 = uRam00000001419df7a8;
        uStack_3fc = uRam00000001419df7ac;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        FUN_140041b80(&local_378,&local_408);
        local_308 = &local_378;
        FUN_140e634e0(local_res8,local_res10,&local_418,3,CONCAT44(uVar16,DAT_1419ff3d8),&local_318)
        ;
        local_3b8 = 0x282;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        *puVar6 = 0;
        local_3b8 = 0x283;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        *puVar6 = 0;
        local_3b8 = 0x285;
      }
      else if (iVar4 == 1) {
        local_3b8 = 0x289;
        if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_418);
        }
        local_418 = 0;
        local_410 = 0;
        local_40c = 5;
        local_3a8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_3a0 = DAT_1419df7b8;
        uStack_39c = DAT_1419df7bc;
        if ((1 << ((byte)_local_38c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_398);
        }
        FUN_140041b80(&local_398,&local_3a8);
        local_318 = &local_398;
        local_3a8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_3a0 = DAT_1419df7b8;
        uStack_39c = DAT_1419df7bc;
        if ((1 << ((byte)_local_37c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_388);
        }
        FUN_140041b80(local_388,&local_3a8);
        local_310 = local_388;
        ppuVar15 = &local_318;
        uVar5 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_418,2,ppuVar15);
        cVar3 = FUN_140e491e0(uVar5);
        if (cVar3 != '\0') {
          local_3b8 = 0x28b;
          uStack_3ec = 0xf;
          local_3f8 = (longlong *)0x100000100000313;
          local_3a8 = 0x100000100000313;
          uStack_3a0 = uStack_3f0;
          uStack_39c = 0xf;
          if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_338);
          }
          FUN_140041b80(&local_338,&local_3a8);
          FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_338);
          local_3b8 = 0x28c;
          uStack_3ec = 0xf;
          local_3f8 = (longlong *)0x100000100000313;
          local_3a8 = 0x100000100000313;
          uStack_3a0 = uStack_3f0;
          uStack_39c = 0xf;
          if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2c8);
          }
          FUN_140041b80(&local_2c8,&local_3a8);
          FUN_140e86fa0(local_res8,DAT_1419f5c58,0x80000000,&local_2c8);
          local_3b8 = 0x28d;
          local_2dc = 6;
          local_2e8 = local_res8;
          uVar14 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
          FUN_140e87440(&local_2e8,DAT_1419fe158,0x80000000,&local_268,uVar14,
                        (ulonglong)in_stack_fffffffffffffbe0 & 0xffffffffffffff00);
          uVar16 = (undefined4)(uVar14 >> 0x20);
          if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2e8);
          }
          local_2dc = 0;
          local_2e8 = (longlong *)0x4020000000000000;
          FUN_1400462a0(&local_268,&local_2e8);
          if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2e8);
          }
          FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_268);
          local_3b8 = 0x28e;
          if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_418);
          }
          local_418 = 0;
          local_410 = 0;
          local_40c = 5;
          puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fdaa8);
          if (puVar6 != &local_398) {
            local_3a8 = *puVar6;
            uStack_3a0 = *(undefined4 *)(puVar6 + 1);
            uStack_39c = *(undefined4 *)((longlong)puVar6 + 0xc);
            if ((1 << ((byte)_local_38c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_398);
            }
            FUN_140041b80(&local_398,&local_3a8);
          }
          local_318 = &local_398;
          FUN_140e634e0(local_res8,local_res10,&local_418,1,CONCAT44(uVar16,DAT_141a57c30),
                        &local_318);
          local_3b8 = 0x28f;
          if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_418);
          }
          local_418 = 0;
          local_410 = 0;
          local_40c = 5;
          local_3a8 = CONCAT44(uRam00000001419e61d4,_DAT_1419e61d0);
          uStack_3a0 = uRam00000001419e61d8;
          uStack_39c = uRam00000001419e61dc;
          if ((1 << ((byte)_local_38c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_398);
          }
          FUN_140041b80(&local_398,&local_3a8);
          local_318 = &local_398;
          local_3a8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_3a0 = DAT_1419df7b8;
          uStack_39c = DAT_1419df7bc;
          if ((1 << ((byte)_local_37c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_388);
          }
          FUN_140041b80(local_388,&local_3a8);
          local_310 = local_388;
          ppuVar15 = &local_318;
          gml_Script_truestate_begin_step(local_res8,local_res10,&local_418,2,ppuVar15);
          uVar16 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
          local_3b8 = 0x291;
          if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_418);
          }
          local_418 = 0;
          local_410 = 0;
          local_40c = 5;
          uStack_3ec = 0xf;
          local_3f8 = (longlong *)0x10000020000000e;
          local_3a8 = 0x10000020000000e;
          uStack_3a0 = uStack_3f0;
          uStack_39c = 0xf;
          if ((1 << ((byte)_local_38c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_398);
          }
          FUN_140041b80(&local_398,&local_3a8);
          local_318 = &local_398;
          local_3a8 = CONCAT44(uRam00000001419e6124,_DAT_1419e6120);
          uStack_3a0 = uRam00000001419e6128;
          uStack_39c = uRam00000001419e612c;
          if ((1 << ((byte)_local_37c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_388);
          }
          FUN_140041b80(local_388,&local_3a8);
          local_310 = local_388;
          local_3a8 = CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
          uStack_3a0 = uRam00000001419df7c8;
          uStack_39c = uRam00000001419df7cc;
          if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_378);
          }
          FUN_140041b80(&local_378,&local_3a8);
          local_308 = &local_378;
          ppuVar15 = &local_318;
          uVar14 = CONCAT44(uVar16,DAT_141a0a2e8);
          FUN_140e634e0(local_res8,local_res10,&local_418,3,uVar14,ppuVar15);
          do {
            iVar9 = iVar9 + -1;
            local_3b8 = 0x295;
            if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_418);
            }
            local_418 = 0;
            local_410 = 0;
            local_40c = 5;
            uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
            local_1bc = 6;
            local_1c8 = local_res8;
            uVar17 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
            uVar14 = uVar14 & 0xffffffffffffff00;
            FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_2d8,uVar14,uVar17);
            if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c8);
            }
            local_1cc = 6;
            local_1d8 = local_res8;
            uVar14 = uVar14 & 0xffffffffffffff00;
            FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_328,uVar14,
                          uVar17 & 0xffffffffffffff00);
            uVar16 = (undefined4)(uVar14 >> 0x20);
            if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            local_2dc = 0;
            local_2e8 = (longlong *)0x4008000000000000;
            FUN_140042560(&local_2e8,uVar5);
            uStack_2ac = uStack_2cc;
            uStack_2b0 = uStack_2d0;
            if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) == 0) {
              local_2b8 = local_2d8;
            }
            else {
              FUN_1400419b0(&local_2b8,&local_2d8);
            }
            FUN_1400460e0(&local_2b8,&local_2e8);
            local_408 = (undefined4)local_2b8;
            uStack_404 = local_2b8._4_4_;
            uStack_400 = uStack_2b0;
            uStack_3fc = uStack_2ac;
            if ((1 << ((byte)_local_38c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_398);
            }
            FUN_140041b80(&local_398,&local_408);
            if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2e8);
            }
            local_318 = &local_398;
            uStack_29c = local_31c;
            uStack_2a0 = local_320;
            if ((1 << ((byte)local_31c & 0x1f) & 0x46U) == 0) {
              local_2a8 = local_328;
            }
            else {
              FUN_1400419b0(&local_2a8,&local_328);
            }
            local_1dc = 7;
            local_1e8[0] = 5;
            FUN_1400462a0(&local_2a8,local_1e8);
            if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1e8);
            }
            local_408 = (undefined4)local_2a8;
            uStack_404 = local_2a8._4_4_;
            uStack_400 = uStack_2a0;
            uStack_3fc = uStack_29c;
            if ((1 << ((byte)_local_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_388);
            }
            FUN_140041b80(local_388,&local_408);
            if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            local_310 = local_388;
            local_408 = _DAT_141dd3dd8;
            uStack_404 = uRam0000000141dd3ddc;
            uStack_400 = uRam0000000141dd3de0;
            uStack_3fc = DAT_141dd3de4;
            if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_378);
            }
            FUN_140041b80(&local_378,&local_408);
            local_308 = &local_378;
            uStack_19c = 0xf;
            local_1a8 = 0x100000000000023;
            local_408 = 0x23;
            uStack_404 = 0x1000000;
            uStack_400 = uStack_1a0;
            uStack_3fc = 0xf;
            if ((1 << ((byte)_local_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_368);
            }
            FUN_140041b80(local_368,&local_408);
            local_300 = local_368;
            ppuVar15 = &local_318;
            uVar14 = CONCAT44(uVar16,DAT_141a0a7c8);
            uVar5 = FUN_140e634e0(local_res8,local_res10,&local_418,4,uVar14,ppuVar15);
            iVar4 = FUN_140e63cb0(local_118,&local_res8,&local_res10,uVar5);
            if (0 < iVar4) {
              do {
                local_3b8 = 0x297;
                uStack_18c = 0xf;
                local_198 = 0x10000010000031a;
                local_408 = 0x31a;
                uStack_404 = 0x1000001;
                uStack_400 = uStack_190;
                uStack_3fc = 0xf;
                if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_338);
                }
                FUN_140041b80(&local_338,&local_408);
                FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_338);
                local_3b8 = 0x298;
                if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_358);
                }
                local_34c = 0;
                local_358 = 0;
                FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_358);
                local_3b8 = 0x299;
                if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_348);
                }
                local_33c = 0;
                local_348 = 0x4008000000000000;
                FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_348);
                local_3b8 = 0x29a;
                uVar5 = (**(code **)(*local_res10 + 8))(local_res10,DAT_1419f5ef8);
                local_1ec = 0;
                local_1f8 = 0x3ff0000000000000;
                iVar4 = FUN_140e851f0(uVar5,&local_1f8,DAT_141955260,0);
                if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1f8);
                }
                if (iVar4 == 0) {
                  uStack_24c = 0;
                  local_258 = 0x405a400000000000;
                  puVar6 = &local_258;
                  bVar2 = true;
                }
                else {
                  local_1ac = 0;
                  local_1b8 = 0x4052c00000000000;
                  puVar6 = &local_1b8;
                  bVar1 = true;
                }
                local_408 = *(undefined4 *)puVar6;
                uStack_404 = *(undefined4 *)((longlong)puVar6 + 4);
                uStack_400 = *(undefined4 *)(puVar6 + 1);
                uStack_3fc = *(undefined4 *)((longlong)puVar6 + 0xc);
                if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_3d8);
                }
                FUN_140041b80(&local_3d8,&local_408);
                if ((bVar1) && (bVar1 = false, (1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0)) {
                  FUN_140041a50(&local_1b8);
                }
                if ((bVar2) && (bVar2 = false, (1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0)) {
                  FUN_140041a50(&local_258);
                }
                local_3b8 = 0x29b;
                dVar11 = (double)FUN_140e794b0(0,0);
                if ((1 << ((byte)local_3dc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_3e8);
                }
                local_3dc = 0;
                local_3b8 = 0x29c;
                local_3e8 = dVar11;
                pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
                dVar11 = local_3d8;
                if ((local_3cc & 0xffffff) != 0) {
                  dVar11 = (double)FUN_140e4b060(&local_3d8);
                }
                dVar12 = local_3e8;
                if ((local_3dc & 0xffffff) != 0) {
                  dVar12 = (double)FUN_140e4b060(&local_3e8);
                }
                fVar10 = (float)FUN_140e78f90((float)dVar12,(float)dVar11);
                if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pdVar7);
                }
                *(undefined4 *)((longlong)pdVar7 + 0xc) = 0;
                *pdVar7 = (double)fVar10;
                local_3b8 = 0x29d;
                pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
                dVar11 = local_3d8;
                if ((local_3cc & 0xffffff) != 0) {
                  dVar11 = (double)FUN_140e4b060(&local_3d8);
                }
                dVar12 = local_3e8;
                if ((local_3dc & 0xffffff) != 0) {
                  dVar12 = (double)FUN_140e4b060(&local_3e8);
                }
                fVar10 = (float)FUN_140e79010((float)dVar12,(float)dVar11);
                if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pdVar7);
                }
                *(undefined4 *)((longlong)pdVar7 + 0xc) = 0;
                *pdVar7 = (double)fVar10;
                cVar3 = FUN_140e643f0(local_118,&local_res8,&local_res10);
              } while (cVar3 != '\0');
            }
            FUN_140e63970(local_118,&local_res8,&local_res10);
            local_3b8 = 0x2a1;
            if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_418);
            }
            local_418 = 0;
            local_410 = 0;
            local_40c = 5;
            local_23c = 6;
            local_248 = local_res8;
            uVar17 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
            uVar14 = uVar14 & 0xffffffffffffff00;
            FUN_140e87440(&local_248,DAT_1419fe0e8,0x80000000,&local_2d8,uVar14,uVar17);
            if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_248);
            }
            local_22c = 6;
            local_238 = local_res8;
            uVar14 = uVar14 & 0xffffffffffffff00;
            FUN_140e87440(&local_238,DAT_1419fe158,0x80000000,&local_328,uVar14,
                          uVar17 & 0xffffffffffffff00);
            uVar16 = (undefined4)(uVar14 >> 0x20);
            if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_238);
            }
            local_408 = (undefined4)local_2d8;
            uStack_404 = local_2d8._4_4_;
            uStack_400 = uStack_2d0;
            uStack_3fc = uStack_2cc;
            if ((1 << ((byte)_local_38c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_398);
            }
            FUN_140041b80(&local_398,&local_408);
            local_318 = &local_398;
            uStack_28c = local_31c;
            uStack_290 = local_320;
            if ((1 << ((byte)local_31c & 0x1f) & 0x46U) == 0) {
              local_298 = local_328;
            }
            else {
              FUN_1400419b0(&local_298,&local_328);
            }
            local_21c = 7;
            local_228[0] = 5;
            FUN_1400462a0(&local_298,local_228);
            if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_228);
            }
            local_408 = (undefined4)local_298;
            uStack_404 = local_298._4_4_;
            uStack_400 = uStack_290;
            uStack_3fc = uStack_28c;
            if ((1 << ((byte)_local_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_388);
            }
            FUN_140041b80(local_388,&local_408);
            if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_298);
            }
            local_310 = local_388;
            local_408 = _DAT_141dd3dd8;
            uStack_404 = uRam0000000141dd3ddc;
            uStack_400 = uRam0000000141dd3de0;
            uStack_3fc = DAT_141dd3de4;
            if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_378);
            }
            FUN_140041b80(&local_378,&local_408);
            local_308 = &local_378;
            uStack_17c = 0xf;
            local_188 = 0x100000000000023;
            local_408 = 0x23;
            uStack_404 = 0x1000000;
            uStack_400 = uStack_180;
            uStack_3fc = 0xf;
            if ((1 << ((byte)_local_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_368);
            }
            FUN_140041b80(local_368,&local_408);
            local_300 = local_368;
            ppuVar15 = &local_318;
            uVar14 = CONCAT44(uVar16,DAT_141a0a7c8);
            uVar5 = FUN_140e634e0(local_res8,local_res10,&local_418,4,uVar14,ppuVar15);
            iVar4 = FUN_140e63cb0(local_138,&local_res8,&local_res10,uVar5);
            if (0 < iVar4) {
              do {
                local_3b8 = 0x2a3;
                uStack_15c = 0xf;
                local_168 = 0x10000010000031a;
                local_408 = 0x31a;
                uStack_404 = 0x1000001;
                uStack_400 = uStack_160;
                uStack_3fc = 0xf;
                if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_338);
                }
                FUN_140041b80(&local_338,&local_408);
                FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_338);
                local_3b8 = 0x2a4;
                if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_358);
                }
                local_34c = 0;
                local_358 = 0;
                FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_358);
                local_3b8 = 0x2a5;
                if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_348);
                }
                local_33c = 0;
                local_348 = 0x3ff0000000000000;
                FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_348);
                local_3b8 = 0x2a6;
                dVar11 = (double)FUN_140e794b0(0,0);
                if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_3d8);
                }
                local_3cc = 0;
                local_3b8 = 0x2a7;
                local_3d8 = dVar11;
                dVar11 = (double)FUN_140e794b0(0,0);
                if ((1 << ((byte)local_3dc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_3e8);
                }
                local_3dc = 0;
                local_3b8 = 0x2a8;
                local_3e8 = dVar11;
                pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
                dVar11 = local_3d8;
                if ((local_3cc & 0xffffff) != 0) {
                  dVar11 = (double)FUN_140e4b060(&local_3d8);
                }
                dVar12 = local_3e8;
                if ((local_3dc & 0xffffff) != 0) {
                  dVar12 = (double)FUN_140e4b060(&local_3e8);
                }
                fVar10 = (float)FUN_140e78f90((float)dVar12,(float)dVar11);
                if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pdVar7);
                }
                *(undefined4 *)((longlong)pdVar7 + 0xc) = 0;
                *pdVar7 = (double)fVar10;
                local_3b8 = 0x2a9;
                pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
                dVar11 = local_3d8;
                if ((local_3cc & 0xffffff) != 0) {
                  dVar11 = (double)FUN_140e4b060(&local_3d8);
                }
                dVar12 = local_3e8;
                if ((local_3dc & 0xffffff) != 0) {
                  dVar12 = (double)FUN_140e4b060(&local_3e8);
                }
                fVar10 = (float)FUN_140e79010((float)dVar12,(float)dVar11);
                if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pdVar7);
                }
                *(undefined4 *)((longlong)pdVar7 + 0xc) = 0;
                *pdVar7 = (double)fVar10;
                cVar3 = FUN_140e643f0(local_138,&local_res8,&local_res10);
              } while (cVar3 != '\0');
            }
            FUN_140e63970(local_138,&local_res8,&local_res10);
            local_3b8 = 0x2ad;
            if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_418);
            }
            local_418 = 0;
            local_410 = 0;
            local_40c = 5;
            local_20c = 6;
            local_218 = local_res8;
            uVar17 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
            uVar14 = uVar14 & 0xffffffffffffff00;
            FUN_140e87440(&local_218,DAT_1419fe0e8,0x80000000,&local_2d8,uVar14,uVar17);
            if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_218);
            }
            local_1fc = 6;
            local_208 = local_res8;
            uVar14 = uVar14 & 0xffffffffffffff00;
            FUN_140e87440(&local_208,DAT_1419fe158,0x80000000,&local_328,uVar14,
                          uVar17 & 0xffffffffffffff00);
            uVar16 = (undefined4)(uVar14 >> 0x20);
            if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_208);
            }
            local_408 = (undefined4)local_2d8;
            uStack_404 = local_2d8._4_4_;
            uStack_400 = uStack_2d0;
            uStack_3fc = uStack_2cc;
            if ((1 << ((byte)_local_38c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_398);
            }
            FUN_140041b80(&local_398,&local_408);
            local_318 = &local_398;
            uStack_2ec = local_31c;
            uStack_2f0 = local_320;
            if ((1 << ((byte)local_31c & 0x1f) & 0x46U) == 0) {
              local_2f8 = local_328;
            }
            else {
              FUN_1400419b0(&local_2f8,&local_328);
            }
            uStack_3ec = 7;
            local_3f8 = (longlong *)CONCAT44(local_3f8._4_4_,10);
            FUN_1400462a0(&local_2f8,&local_3f8);
            if ((1 << ((byte)uStack_3ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3f8);
            }
            local_408 = (undefined4)local_2f8;
            uStack_404 = local_2f8._4_4_;
            uStack_400 = uStack_2f0;
            uStack_3fc = uStack_2ec;
            if ((1 << ((byte)_local_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_388);
            }
            FUN_140041b80(local_388,&local_408);
            if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2f8);
            }
            local_310 = local_388;
            local_408 = _DAT_141dd3dd8;
            uStack_404 = uRam0000000141dd3ddc;
            uStack_400 = uRam0000000141dd3de0;
            uStack_3fc = DAT_141dd3de4;
            if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_378);
            }
            FUN_140041b80(&local_378,&local_408);
            local_308 = &local_378;
            uStack_16c = 0xf;
            local_178 = 0x100000000000023;
            local_408 = 0x23;
            uStack_404 = 0x1000000;
            uStack_400 = uStack_170;
            uStack_3fc = 0xf;
            if ((1 << ((byte)_local_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_368);
            }
            FUN_140041b80(local_368,&local_408);
            local_300 = local_368;
            ppuVar15 = &local_318;
            uVar14 = CONCAT44(uVar16,DAT_141a0a7c8);
            uVar5 = FUN_140e634e0(local_res8,local_res10,&local_418,4,uVar14,ppuVar15);
            iVar4 = FUN_140e63cb0(local_158,&local_res8,&local_res10,uVar5);
            if (0 < iVar4) {
              do {
                local_3b8 = 0x2af;
                uStack_39c = 0xf;
                local_3a8 = 0x10000010000031a;
                local_408 = 0x31a;
                uStack_404 = 0x1000001;
                uStack_400 = uStack_3a0;
                uStack_3fc = 0xf;
                if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_338);
                }
                FUN_140041b80(&local_338,&local_408);
                FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_338);
                local_3b8 = 0x2b0;
                if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_358);
                }
                local_34c = 0;
                local_358 = 0;
                FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_358);
                local_3b8 = 0x2b1;
                if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_348);
                }
                local_33c = 0;
                local_348 = 0;
                FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_348);
                local_3b8 = 0x2b2;
                dVar11 = (double)FUN_140e794b0(0,0);
                if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_3d8);
                }
                local_3cc = 0;
                local_3b8 = 0x2b3;
                local_3d8 = dVar11;
                dVar11 = (double)FUN_140e794b0(0,0);
                if ((1 << ((byte)local_3dc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_3e8);
                }
                local_3dc = 0;
                local_3b8 = 0x2b4;
                local_3e8 = dVar11;
                pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
                dVar11 = local_3d8;
                if ((local_3cc & 0xffffff) != 0) {
                  dVar11 = (double)FUN_140e4b060(&local_3d8);
                }
                dVar12 = local_3e8;
                if ((local_3dc & 0xffffff) != 0) {
                  dVar12 = (double)FUN_140e4b060(&local_3e8);
                }
                fVar10 = (float)FUN_140e78f90((float)dVar12,(float)dVar11);
                if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pdVar7);
                }
                *(undefined4 *)((longlong)pdVar7 + 0xc) = 0;
                *pdVar7 = (double)fVar10;
                local_3b8 = 0x2b5;
                pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
                dVar11 = local_3d8;
                if ((local_3cc & 0xffffff) != 0) {
                  dVar11 = (double)FUN_140e4b060(&local_3d8);
                }
                dVar12 = local_3e8;
                if ((local_3dc & 0xffffff) != 0) {
                  dVar12 = (double)FUN_140e4b060(&local_3e8);
                }
                fVar10 = (float)FUN_140e79010((float)dVar12,(float)dVar11);
                if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pdVar7);
                }
                *(undefined4 *)((longlong)pdVar7 + 0xc) = 0;
                *pdVar7 = (double)fVar10;
                cVar3 = FUN_140e643f0(local_158,&local_res8,&local_res10);
              } while (cVar3 != '\0');
            }
            FUN_140e63970(local_158,&local_res8,&local_res10);
            if (local_148 != 0) {
              FUN_140e4cd60();
              local_148 = 0;
            }
            if (local_128 != 0) {
              FUN_140e4cd60();
              local_128 = 0;
            }
            if (local_108 != 0) {
              FUN_140e4cd60();
            }
          } while (0 < iVar9);
          local_3b8 = 0x2ba;
          if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_418);
          }
          local_418 = 0;
          local_410 = 0;
          local_40c = 5;
          uStack_3ec = 6;
          local_3f8 = local_res8;
          uVar17 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
          uVar14 = uVar14 & 0xffffffffffffff00;
          FUN_140e87440(&local_3f8,DAT_1419fe0e8,0x80000000,&local_2d8,uVar14,uVar17);
          if ((1 << ((byte)uStack_3ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3f8);
          }
          uStack_3ec = 6;
          local_3f8 = local_res8;
          uVar14 = uVar14 & 0xffffffffffffff00;
          FUN_140e87440(&local_3f8,DAT_1419fe158,0x80000000,&local_328,uVar14,
                        uVar17 & 0xffffffffffffff00);
          uVar16 = (undefined4)(uVar14 >> 0x20);
          if ((1 << ((byte)uStack_3ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3f8);
          }
          local_408 = (undefined4)local_2d8;
          uStack_404 = local_2d8._4_4_;
          uStack_400 = uStack_2d0;
          uStack_3fc = uStack_2cc;
          if ((1 << ((byte)_local_38c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_398);
          }
          FUN_140041b80(&local_398,&local_408);
          local_318 = &local_398;
          uStack_2ec = local_31c;
          uStack_2f0 = local_320;
          if ((1 << ((byte)local_31c & 0x1f) & 0x46U) == 0) {
            local_2f8 = local_328;
          }
          else {
            FUN_1400419b0(&local_2f8,&local_328);
          }
          uStack_3ec = 7;
          local_3f8 = (longlong *)CONCAT44(local_3f8._4_4_,10);
          FUN_1400462a0(&local_2f8,&local_3f8);
          if ((1 << ((byte)uStack_3ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3f8);
          }
          local_408 = (undefined4)local_2f8;
          uStack_404 = local_2f8._4_4_;
          uStack_400 = uStack_2f0;
          uStack_3fc = uStack_2ec;
          if ((1 << ((byte)_local_37c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_388);
          }
          FUN_140041b80(local_388,&local_408);
          if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2f8);
          }
          local_310 = local_388;
          local_408 = _DAT_141dd3dd8;
          uStack_404 = uRam0000000141dd3ddc;
          uStack_400 = uRam0000000141dd3de0;
          uStack_3fc = DAT_141dd3de4;
          if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_378);
          }
          FUN_140041b80(&local_378,&local_408);
          local_308 = &local_378;
          uStack_39c = 0xf;
          local_3a8 = 0x100000000000023;
          local_408 = 0x23;
          uStack_404 = 0x1000000;
          uStack_400 = uStack_3a0;
          uStack_3fc = 0xf;
          if ((1 << ((byte)_local_35c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_368);
          }
          FUN_140041b80(local_368,&local_408);
          local_300 = local_368;
          in_stack_fffffffffffffbe0 = &local_318;
          ppuVar15 = (undefined8 **)CONCAT44(uVar16,DAT_141a0a7c8);
          uVar5 = FUN_140e634e0(local_res8,local_res10,&local_418,4,ppuVar15,
                                in_stack_fffffffffffffbe0);
          iVar9 = FUN_140e63cb0(local_f8,&local_res8,&local_res10,uVar5);
          if (0 < iVar9) {
            do {
              local_3b8 = 700;
              uStack_39c = 0xf;
              local_3a8 = 0x10000010000031a;
              local_408 = 0x31a;
              uStack_404 = 0x1000001;
              uStack_400 = uStack_3a0;
              uStack_3fc = 0xf;
              if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_338);
              }
              FUN_140041b80(&local_338,&local_408);
              FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_338);
              local_3b8 = 0x2bd;
              if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_358);
              }
              local_34c = 0;
              local_358 = 0;
              FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_358);
              local_3b8 = 0x2be;
              if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_348);
              }
              local_33c = 0;
              local_348 = 0;
              FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_348);
              local_3b8 = 0x2bf;
              dVar11 = (double)FUN_140e794b0(0,0);
              if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_3d8);
              }
              local_3cc = 0;
              local_3b8 = 0x2c0;
              local_3d8 = dVar11;
              dVar11 = (double)FUN_140e794b0(0,0);
              if ((1 << ((byte)local_3dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_3e8);
              }
              local_3dc = 0;
              local_3b8 = 0x2c1;
              local_3e8 = dVar11;
              pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
              dVar11 = local_3d8;
              if ((local_3cc & 0xffffff) != 0) {
                dVar11 = (double)FUN_140e4b060(&local_3d8);
              }
              dVar12 = local_3e8;
              if ((local_3dc & 0xffffff) != 0) {
                dVar12 = (double)FUN_140e4b060(&local_3e8);
              }
              fVar10 = (float)FUN_140e78f90((float)dVar12,(float)dVar11);
              if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pdVar7);
              }
              *(undefined4 *)((longlong)pdVar7 + 0xc) = 0;
              *pdVar7 = (double)fVar10;
              local_3b8 = 0x2c2;
              pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
              dVar11 = local_3d8;
              if ((local_3cc & 0xffffff) != 0) {
                dVar11 = (double)FUN_140e4b060(&local_3d8);
              }
              dVar12 = local_3e8;
              if ((local_3dc & 0xffffff) != 0) {
                dVar12 = (double)FUN_140e4b060(&local_3e8);
              }
              fVar10 = (float)FUN_140e79010((float)dVar12,(float)dVar11);
              if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pdVar7);
              }
              *(undefined4 *)((longlong)pdVar7 + 0xc) = 0;
              *pdVar7 = (double)fVar10;
              cVar3 = FUN_140e643f0(local_f8,&local_res8,&local_res10);
            } while (cVar3 != '\0');
          }
          FUN_140e63970(local_f8,&local_res8,&local_res10);
          if (local_e8 != 0) {
            FUN_140e4cd60();
          }
        }
        local_3b8 = 0x2c7;
        uStack_3ec = 6;
        local_3f8 = local_res8;
        uVar17 = (ulonglong)in_stack_fffffffffffffbe0 & 0xffffffffffffff00;
        uVar14 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
        FUN_140e87440(&local_3f8,DAT_141a0cfc8,0x80000000,&local_288,uVar14,uVar17);
        if ((1 << ((byte)uStack_3ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3f8);
        }
        uStack_3ec = 0;
        local_3f8 = (longlong *)0x4000000000000000;
        uVar8 = FUN_140e851f0(&local_288,&local_3f8,DAT_141955260,1);
        if ((1 << ((byte)uStack_3ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3f8);
        }
        if (uVar8 < 0x80000000) {
          uStack_3ec = 6;
          local_3f8 = local_res8;
          FUN_140e87440(&local_3f8,DAT_141a0cfc8,0x80000000,&local_288,uVar14 & 0xffffffffffffff00,
                        uVar17 & 0xffffffffffffff00);
          if ((1 << ((byte)uStack_3ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3f8);
          }
          uStack_3ec = 0;
          local_3f8 = (longlong *)0x4031000000000000;
          iVar9 = FUN_140e851f0(&local_288,&local_3f8,DAT_141955260,1);
          if ((1 << ((byte)uStack_3ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3f8);
          }
          if (iVar9 != -2 && iVar9 < 1) {
            local_3b8 = 0x2c9;
            if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_418);
            }
            local_418 = 0;
            local_410 = 0;
            local_40c = 5;
            local_408 = _DAT_1419e6110;
            uStack_404 = uRam00000001419e6114;
            uStack_400 = uRam00000001419e6118;
            uStack_3fc = uRam00000001419e611c;
            if ((1 << (local_38c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_398);
            }
            FUN_140041b80(&local_398,&local_408);
            local_318 = &local_398;
            local_408 = _DAT_1419e60e0;
            uStack_404 = uRam00000001419e60e4;
            uStack_400 = uRam00000001419e60e8;
            uStack_3fc = uRam00000001419e60ec;
            if ((1 << (local_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_388);
            }
            FUN_140041b80(local_388,&local_408);
            local_310 = local_388;
            local_378 = FUN_140e79480(0);
            if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_378);
            }
            local_36c = 0;
            local_308 = &local_378;
            local_408 = (undefined4)DAT_1419df7b0;
            uStack_404 = DAT_1419df7b0._4_4_;
            uStack_400 = DAT_1419df7b8;
            uStack_3fc = DAT_1419df7bc;
            if ((1 << (local_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_368);
            }
            FUN_140041b80(local_368,&local_408);
            local_300 = local_368;
            FUN_14044e5b0(local_res8,local_res10,&local_418,4,&local_318);
          }
        }
        local_3b8 = 0x2cd;
      }
      else if (iVar4 == 2) {
        local_3b8 = 0x2d1;
        if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_418);
        }
        local_418 = 0;
        local_410 = 0;
        local_40c = 5;
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5b18);
        FUN_140e63610(local_res8,local_res10,&local_418,0,uVar5,0);
        local_3b8 = 0x2d2;
      }
      else if (iVar4 == 3) {
        local_3b8 = 0x2d6;
      }
      break;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_418);
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_3dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3e8);
  }
  if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3d8);
  }
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  _eh_vector_destructor_iterator_(&local_398,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_3c8;
  return param_3;
}

