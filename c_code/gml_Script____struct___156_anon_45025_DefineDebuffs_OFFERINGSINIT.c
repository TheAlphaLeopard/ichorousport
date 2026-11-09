// gml_Script____struct___156_anon_45025_DefineDebuffs_OFFERINGSINIT @ 0x140404d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___156_anon_45025_DefineDebuffs_OFFERINGSINIT
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  float fVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  longlong *local_res8;
  ulonglong local_res10;
  undefined8 *local_res18;
  undefined4 local_res20;
  code *pcVar17;
  longlong *plVar18;
  ulonglong uVar19;
  ulonglong in_stack_fffffffffffffcb0;
  undefined8 **ppuVar20;
  ulonglong uVar21;
  double local_348;
  undefined4 local_340;
  undefined4 local_33c;
  double local_338;
  undefined4 local_330;
  uint local_32c;
  double local_328;
  undefined4 uStack_320;
  uint uStack_31c;
  double local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  char *local_300;
  undefined4 local_2f8;
  double local_2f0;
  undefined4 local_2e8;
  uint local_2e4;
  double local_2d8;
  undefined4 uStack_2d0;
  uint uStack_2cc;
  undefined4 local_2c8;
  double local_2c4;
  undefined4 local_2bc;
  undefined4 local_2b8;
  double local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  double local_2a0;
  uint local_294;
  double local_290;
  uint local_284;
  double local_278;
  undefined4 uStack_270;
  uint uStack_26c;
  double local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  double local_238;
  undefined4 local_230;
  undefined4 local_22c;
  double local_228;
  undefined4 local_220;
  undefined4 local_21c;
  double local_218;
  uint local_20c;
  double local_208;
  uint local_1fc;
  double local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  double local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_18c;
  double local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined4 local_148 [3];
  undefined4 local_13c;
  ulonglong local_138;
  double *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined1 local_108 [32];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  longlong local_b8;
  
  local_res20 = 0;
  local_300 = "gml_Script_anon@43602@DefineDebuffs@OFFERINGSINIT";
  local_308 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_308;
  local_2f8 = 0x716;
  pcVar17 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_108,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_30c = 0xffffff;
  local_318 = 0.0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  local_16c = 0xffffff;
  local_178 = 0;
  local_2e4 = 0xffffff;
  local_2f0 = 0.0;
  uStack_17c = 0xffffff;
  local_188 = 0.0;
  local_284 = 0xffffff;
  local_290 = 0.0;
  local_22c = 0xffffff;
  local_238 = 0.0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_294 = 0xffffff;
  local_2a0 = 0.0;
  local_1fc = 0xffffff;
  local_208 = 0.0;
  local_20c = 0xffffff;
  local_218 = 0.0;
  local_2a4 = 0xffffff;
  local_2b0 = 0.0;
  uVar12 = 0xffffff;
  local_21c = 0xffffff;
  local_228 = 0.0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_32c = 0xffffff;
  local_338 = 0.0;
  uStack_19c = 0xffffff;
  local_1a8 = 0.0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_24c = 0;
  local_258 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2f8 = 0x718;
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = *(undefined8 **)(param_5 + 8);
  }
  in_stack_fffffffffffffcb0 = in_stack_fffffffffffffcb0 & 0xffffffffffffff00;
  uVar10 = (ulonglong)pcVar17 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_318,uVar10,in_stack_fffffffffffffcb0);
  in_stack_fffffffffffffcb0 = in_stack_fffffffffffffcb0 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_318,DAT_141a56cd0,0x80000000,&local_1b8,uVar10,in_stack_fffffffffffffcb0);
  local_33c = 10;
  local_348 = 0.0;
  iVar2 = FUN_140e851f0(&local_1b8,&local_348,DAT_141955260,0);
  if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  if (iVar2 == 0) {
    local_2f8 = 0x719;
    if (param_4 < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = *(undefined8 **)(param_5 + 8);
    }
    in_stack_fffffffffffffcb0 = in_stack_fffffffffffffcb0 & 0xffffffffffffff00;
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_318,uVar10,in_stack_fffffffffffffcb0);
    in_stack_fffffffffffffcb0 = in_stack_fffffffffffffcb0 & 0xffffffffffffff00;
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(&local_318,DAT_141a57c50,0x80000000,&local_1c8,uVar10,in_stack_fffffffffffffcb0);
    local_33c = 10;
    local_348 = 9.88131291682493e-324;
    iVar2 = FUN_140e851f0(&local_1c8,&local_348,DAT_141955260,0);
    if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_348);
    }
    if (iVar2 == 0) {
      local_2f8 = 0x71a;
      if (param_4 < 2) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = *(undefined8 **)(param_5 + 8);
      }
      in_stack_fffffffffffffcb0 = in_stack_fffffffffffffcb0 & 0xffffffffffffff00;
      uVar10 = uVar10 & 0xffffffffffffff00;
      FUN_140e87440(puVar7,DAT_1419f0378,0x80000000,&local_168,uVar10,in_stack_fffffffffffffcb0);
      in_stack_fffffffffffffcb0 = in_stack_fffffffffffffcb0 & 0xffffffffffffff00;
      uVar10 = uVar10 & 0xffffffffffffff00;
      FUN_140e87440(uVar4,DAT_1419f5f58,0x80000000,&local_178,uVar10,in_stack_fffffffffffffcb0);
      iVar2 = FUN_140e851f0(&local_168,&local_178,DAT_141955260,0);
      if (iVar2 == 0) {
        local_2f8 = 0x71c;
        if ((1 << ((byte)local_2e4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f0);
        }
        local_2e4 = 0;
        local_2f0 = 4.0;
        local_2f8 = 0x71d;
        if (param_4 < 2) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = *(undefined8 **)(param_5 + 8);
        }
        FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_318,uVar10 & 0xffffffffffffff00,
                      in_stack_fffffffffffffcb0 & 0xffffffffffffff00);
        plVar18 = local_res8;
        uVar10 = local_res10;
        FUN_140e87170(&local_318,DAT_1419fe0e8,0x80000000,&local_188,local_res8,local_res10);
        local_278 = local_188;
        uStack_270 = uStack_180;
        uStack_26c = uStack_17c;
        if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_290);
        }
        FUN_140041b80(&local_290,&local_278);
        local_2f8 = 0x71e;
        if (param_4 < 2) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = *(undefined8 **)(param_5 + 8);
        }
        FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_318,
                      (ulonglong)plVar18 & 0xffffffffffffff00,uVar10 & 0xffffffffffffff00);
        plVar18 = local_res8;
        uVar10 = local_res10;
        FUN_140e87170(&local_318,DAT_1419fe158,0x80000000,&local_238,local_res8,local_res10);
        if (param_4 < 2) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = *(undefined8 **)(param_5 + 8);
        }
        uVar10 = uVar10 & 0xffffffffffffff00;
        uVar19 = (ulonglong)plVar18 & 0xffffffffffffff00;
        FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_318,uVar19,uVar10);
        FUN_140e87440(&local_318,DAT_1419f5ec8,0x80000000,&local_198,uVar19 & 0xffffffffffffff00,
                      uVar10 & 0xffffffffffffff00);
        uStack_31c = local_22c;
        uStack_320 = local_230;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) == 0) {
          local_328 = local_238;
        }
        else {
          FUN_1400419b0(&local_328,&local_238);
        }
        local_res20 = 1;
        FUN_1400462a0(&local_328,&local_198);
        local_278 = local_328;
        uStack_270 = uStack_320;
        uStack_26c = uStack_31c;
        if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a0);
        }
        FUN_140041b80(&local_2a0,&local_278);
        local_res20 = 0;
        if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_328);
        }
        local_2f8 = 0x71f;
        local_33c = 0xf;
        local_348 = 7.291122019556783e-304;
        FUN_140e87170(&local_348,DAT_1419fe0e8,0x80000000,&local_208,local_res8,local_res10);
        if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_348);
        }
        local_33c = 0xf;
        local_348 = 7.291122019556783e-304;
        plVar18 = local_res8;
        uVar10 = local_res10;
        FUN_140e87170(&local_348,DAT_1419fe158,0x80000000,&local_218,local_res8,local_res10);
        if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_348);
        }
        dVar16 = local_218;
        if ((local_20c & 0xffffff) != 0) {
          dVar16 = (double)FUN_140e4b060(&local_218);
        }
        dVar13 = local_208;
        if ((local_1fc & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_208);
        }
        dVar14 = local_2a0;
        if ((local_294 & 0xffffff) != 0) {
          dVar14 = (double)FUN_140e4b060(&local_2a0);
        }
        dVar15 = local_290;
        if ((local_284 & 0xffffff) != 0) {
          dVar15 = (double)FUN_140e4b060(&local_290);
        }
        fVar11 = (float)FUN_140e793d0((float)dVar15,(float)dVar14,(float)dVar13,(float)dVar16);
        local_2a4 = 0;
        local_2b0 = (double)fVar11;
        local_2c8 = 0;
        local_21c = 0;
        local_228 = 80.0;
        local_2f8 = 0x721;
        uStack_31c = local_2e4;
        uStack_320 = local_2e8;
        if ((1 << ((byte)local_2e4 & 0x1f) & 0x46U) == 0) {
          local_328 = local_2f0;
        }
        else {
          FUN_1400419b0(&local_328,&local_2f0);
        }
        local_res20 = 2;
        local_33c = 7;
        local_348 = (double)CONCAT44(local_348._4_4_,1);
        FUN_1400462a0(&local_328,&local_348);
        if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_348);
        }
        uStack_2cc = 0;
        uStack_2d0 = local_220;
        local_2d8 = local_228;
        local_res20 = 6;
        FUN_140046500(&local_2d8,&local_328);
        local_278 = local_2d8;
        uStack_270 = uStack_2d0;
        uStack_26c = uStack_2cc;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_278);
        local_res20 = 2;
        if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_res20 = 0;
        if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_328);
        }
        local_2f8 = 0x722;
        if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_338);
        }
        local_32c = 0;
        local_338 = 0.0;
        local_2f8 = 0x724;
        if (1 < param_4) {
          puVar8 = *(undefined8 **)(param_5 + 8);
        }
        uVar19 = (ulonglong)plVar18 & 0xffffffffffffff00;
        FUN_140e87440(puVar8,DAT_141a1f440,0x80000000,&local_318,uVar19,uVar10 & 0xffffffffffffff00)
        ;
        local_278 = local_318;
        uStack_270 = uStack_310;
        uStack_26c = uStack_30c;
        FUN_140041b80(&local_1a8,&local_278);
        local_2f8 = 0x725;
        dVar16 = local_2f0;
        if ((local_2e4 & 0xffffff) != 0) {
          dVar16 = (double)FUN_140e4b060(&local_2f0);
        }
        dVar14 = local_1a8;
        dVar13 = local_2b0;
        uVar10 = (ulonglong)dVar16;
        uVar9 = 0;
        if (0 < (int)uVar10) {
          uVar4 = CONCAT44(uStack_19c,uStack_1a0);
          do {
            uVar12 = (undefined4)(uVar19 >> 0x20);
            uVar10 = (ulonglong)((int)uVar10 - 1);
            local_2f8 = 0x727;
            local_138 = uVar10;
            if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_258);
            }
            local_258 = 0;
            local_250 = 0;
            local_24c = 5;
            local_130 = &local_290;
            local_128 = &local_2a0;
            local_248 = (double)CONCAT44(uRam0000000141dd287c,_DAT_141dd2878);
            uStack_240 = CONCAT44(DAT_141dd2884,uRam0000000141dd2880);
            if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_e8);
            }
            FUN_140041b80(local_e8,&local_248);
            local_120 = local_e8;
            uStack_26c = 0xf;
            local_278 = 7.291122019556739e-304;
            local_248 = 7.291122019556739e-304;
            uStack_240 = CONCAT44(0xf,uStack_270);
            if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_d8);
            }
            FUN_140041b80(local_d8,&local_248);
            local_118 = local_d8;
            ppuVar20 = &local_130;
            uVar19 = CONCAT44(uVar12,DAT_141a0a7c8);
            uVar5 = FUN_140e634e0(local_res8,local_res10,&local_258,4,uVar19,ppuVar20);
            iVar2 = FUN_140e63cb0(local_c8,&local_res8,&local_res10,uVar5);
            dVar16 = local_228;
            if (0 < iVar2) {
              do {
                local_2f8 = 0x729;
                pdVar6 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
                FUN_140e609c0(local_res8);
                if (&local_1a8 != pdVar6) {
                  local_248 = dVar14;
                  uStack_240 = uVar4;
                  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(pdVar6);
                  }
                  FUN_140041b80(pdVar6,&local_248);
                }
                FUN_140e60910(1);
                local_2f8 = 0x72a;
                uStack_2cc = local_32c;
                uStack_2d0 = local_330;
                if ((1 << ((byte)local_32c & 0x1f) & 0x46U) == 0) {
                  local_2d8 = local_338;
                }
                else {
                  FUN_1400419b0(&local_2d8,&local_338);
                }
                local_res20 = 8;
                FUN_140042560(&local_2d8,&local_1d8);
                local_33c = 0;
                local_340 = local_220;
                local_348 = dVar16;
                local_res20 = 0x18;
                local_14c = 0;
                local_158 = 0x3fe0000000000000;
                FUN_140042560(&local_348,&local_158);
                if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_158);
                }
                local_25c = 0;
                local_260 = local_2a8;
                local_268 = dVar13;
                local_res20 = 0x38;
                FUN_1400462a0(&local_268,&local_348);
                local_2b8 = local_25c;
                local_2bc = local_260;
                if ((1 << ((byte)local_25c & 0x1f) & 0x46U) == 0) {
                  local_2c4 = local_268;
                }
                else {
                  FUN_1400419b0(&local_2c4,&local_268);
                }
                local_res20 = 0x78;
                FUN_1400460e0(&local_2c4,&local_2d8);
                uVar12 = FUN_140e794b0(0,0);
                uStack_1ec = local_2b8;
                uStack_1f0 = local_2bc;
                if ((1 << ((byte)local_2b8 & 0x1f) & 0x46U) == 0) {
                  local_1f8 = local_2c4;
                }
                else {
                  FUN_1400419b0(&local_1f8,&local_2c4);
                }
                local_res20 = 0xf8;
                FUN_140162c50(&local_1f8,uVar12);
                local_248 = local_1f8;
                uStack_240 = CONCAT44(uStack_1ec,uStack_1f0);
                if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1e8);
                }
                FUN_140041b80(&local_1e8,&local_248);
                local_res20 = 0x78;
                if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1f8);
                }
                local_res20 = 0x38;
                if ((1 << ((byte)local_2b8 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2c4);
                }
                local_res20 = 0x18;
                if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_268);
                }
                local_res20 = 8;
                if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_348);
                }
                local_res20 = 0;
                if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2d8);
                }
                FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_1e8);
                local_2f8 = 0x72b;
                pdVar6 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f6098);
                FUN_140e609c0(local_res8);
                uStack_31c = local_32c;
                uStack_320 = local_330;
                if ((1 << ((byte)local_32c & 0x1f) & 0x46U) == 0) {
                  local_328 = local_338;
                }
                else {
                  FUN_1400419b0(&local_328,&local_338);
                }
                local_res20 = 0x100;
                local_13c = 7;
                local_148[0] = 7;
                FUN_140042560(&local_328,local_148);
                if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_148);
                }
                if (&local_328 != pdVar6) {
                  local_248 = local_328;
                  uStack_240 = CONCAT44(uStack_31c,uStack_320);
                  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(pdVar6);
                  }
                  FUN_140041b80(pdVar6,&local_248);
                }
                local_res20 = 0;
                if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_328);
                }
                FUN_140e60910(1);
                cVar1 = FUN_140e643f0(local_c8,&local_res8,&local_res10);
              } while (cVar1 != '\0');
              uVar10 = local_138;
            }
            FUN_140e63970(local_c8,&local_res8,&local_res10);
            DAT_141a67c38 = 1;
            uVar21 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
            uVar19 = uVar19 & 0xffffffffffffff00;
            FUN_140e87440(&local_318,DAT_141a56cd0,0x80000000,&local_1b8,uVar19,uVar21);
            uVar21 = uVar21 & 0xffffffffffffff00;
            uVar19 = uVar19 & 0xffffffffffffff00;
            FUN_140e87440(&local_318,DAT_141a57c50,0x80000000,&local_1c8,uVar19,uVar21);
            uVar19 = uVar19 & 0xffffffffffffff00;
            FUN_140e87440(&local_318,DAT_1419f5ec8,0x80000000,&local_198,uVar19,
                          uVar21 & 0xffffffffffffff00);
            DAT_141a67c38 = 0;
            DAT_141a72aac = 0;
            local_2f8 = 0x72d;
            uVar3 = local_32c & 0xffffff;
            if (uVar3 == 0) {
LAB_140405d82:
              local_338 = local_338 + 1.0;
            }
            else {
              if (uVar3 == 1) {
                local_338 = (double)FUN_140e4b060(&local_338);
                local_32c = 0;
                goto LAB_140405d82;
              }
              if (uVar3 == 7) {
                local_338 = (double)CONCAT44(local_338._4_4_,local_338._0_4_ + 1);
              }
              else if (uVar3 == 10) {
                local_338 = (double)((longlong)local_338 + 1);
              }
              else {
                if (uVar3 == 0xd) {
                  local_32c = 0;
                  goto LAB_140405d82;
                }
                FUN_140042910(&DAT_14172c3d8,&local_338,&local_338);
              }
            }
            if (local_b8 != 0) {
              FUN_140e4cd60();
            }
          } while (0 < (int)uVar10);
          uVar9 = local_2a4;
        }
        uVar12 = local_2c8;
      }
      else {
        local_2f8 = 0x71a;
        uVar9 = local_2a4;
      }
    }
    else {
      local_2f8 = 0x719;
      uVar9 = local_2a4;
    }
  }
  else {
    local_2f8 = 0x718;
    uVar9 = local_2a4;
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b0);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a0);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_290);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_2e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f0);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  _eh_vector_destructor_iterator_(local_108,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_308;
  return local_res18;
}

