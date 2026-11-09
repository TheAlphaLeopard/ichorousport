// gml_Script_anon_45025_DefineDebuffs_OFFERINGSINIT @ 0x140406060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_45025_DefineDebuffs_OFFERINGSINIT
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
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
  ulonglong in_stack_fffffffffffffce0;
  undefined8 **ppuVar20;
  ulonglong uVar21;
  double local_318;
  undefined4 local_310;
  uint local_30c;
  double local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  double local_2f8;
  undefined4 uStack_2f0;
  uint uStack_2ec;
  double local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  double local_2d8;
  undefined4 uStack_2d0;
  uint uStack_2cc;
  double local_2c8;
  undefined4 local_2c0;
  uint local_2bc;
  undefined8 local_2b8;
  char *local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a0;
  double local_29c;
  undefined4 local_294;
  undefined4 local_290;
  double local_288;
  uint local_27c;
  double local_278;
  uint local_26c;
  double local_268;
  undefined4 uStack_260;
  uint uStack_25c;
  double local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  double local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_20c;
  double local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  double local_1f8;
  uint local_1ec;
  double local_1e8;
  uint local_1dc;
  undefined4 local_1d8;
  double local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  double local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  undefined4 local_170;
  undefined4 local_16c;
  double local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
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
  local_2b0 = "gml_Script_anon@44341@DefineDebuffs@OFFERINGSINIT";
  local_2b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2b8;
  local_2a8 = 0x730;
  pcVar17 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_108,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_2dc = 0xffffff;
  local_2e8 = 0.0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_2bc = 0xffffff;
  local_2c8 = 0.0;
  uStack_15c = 0xffffff;
  local_168 = 0.0;
  local_26c = 0xffffff;
  local_278 = 0.0;
  local_21c = 0xffffff;
  local_228 = 0.0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_27c = 0xffffff;
  local_288 = 0.0;
  local_1dc = 0xffffff;
  local_1e8 = 0.0;
  local_1ec = 0xffffff;
  local_1f8 = 0.0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_1fc = 0xffffff;
  local_208 = 0.0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_30c = 0xffffff;
  local_318 = 0.0;
  uStack_17c = 0xffffff;
  local_188 = 0.0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_23c = 0;
  local_248 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2a8 = 0x732;
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = *(undefined8 **)(param_5 + 8);
  }
  in_stack_fffffffffffffce0 = in_stack_fffffffffffffce0 & 0xffffffffffffff00;
  uVar10 = (ulonglong)pcVar17 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_2e8,uVar10,in_stack_fffffffffffffce0);
  in_stack_fffffffffffffce0 = in_stack_fffffffffffffce0 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_2e8,DAT_141a57c50,0x80000000,&local_198,uVar10,in_stack_fffffffffffffce0);
  local_2fc = 10;
  local_308 = 9.88131291682493e-324;
  iVar3 = FUN_140e851f0(&local_198,&local_308,DAT_141955260,0);
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  if (iVar3 == 0) {
    local_2a8 = 0x734;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2bc = 0;
    local_2c8 = 6.0;
    local_2a8 = 0x735;
    if (param_4 < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = *(undefined8 **)(param_5 + 8);
    }
    FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_2e8,uVar10 & 0xffffffffffffff00,
                  in_stack_fffffffffffffce0 & 0xffffffffffffff00);
    plVar18 = local_res8;
    uVar10 = local_res10;
    FUN_140e87170(&local_2e8,DAT_1419fe0e8,0x80000000,&local_168,local_res8,local_res10);
    local_268 = local_168;
    uStack_260 = uStack_160;
    uStack_25c = uStack_15c;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140041b80(&local_278,&local_268);
    local_2a8 = 0x736;
    if (param_4 < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = *(undefined8 **)(param_5 + 8);
    }
    FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_2e8,(ulonglong)plVar18 & 0xffffffffffffff00
                  ,uVar10 & 0xffffffffffffff00);
    plVar18 = local_res8;
    uVar10 = local_res10;
    FUN_140e87170(&local_2e8,DAT_1419fe158,0x80000000,&local_228,local_res8,local_res10);
    if (param_4 < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = *(undefined8 **)(param_5 + 8);
    }
    uVar10 = uVar10 & 0xffffffffffffff00;
    uVar19 = (ulonglong)plVar18 & 0xffffffffffffff00;
    FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_2e8,uVar19,uVar10);
    FUN_140e87440(&local_2e8,DAT_1419f5ec8,0x80000000,&local_1a8,uVar19 & 0xffffffffffffff00,
                  uVar10 & 0xffffffffffffff00);
    uStack_2ec = local_21c;
    uStack_2f0 = local_220;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) == 0) {
      local_2f8 = local_228;
    }
    else {
      FUN_1400419b0(&local_2f8,&local_228);
    }
    local_res20 = 1;
    FUN_1400462a0(&local_2f8,&local_1a8);
    local_268 = local_2f8;
    uStack_260 = uStack_2f0;
    uStack_25c = uStack_2ec;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_268);
    local_res20 = 0;
    if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2a8 = 0x737;
    local_2fc = 0xf;
    local_308 = 7.291122019556783e-304;
    FUN_140e87170(&local_308,DAT_1419fe0e8,0x80000000,&local_1e8,local_res8,local_res10);
    if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    local_2fc = 0xf;
    local_308 = 7.291122019556783e-304;
    plVar18 = local_res8;
    uVar10 = local_res10;
    FUN_140e87170(&local_308,DAT_1419fe158,0x80000000,&local_1f8,local_res8,local_res10);
    if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    dVar16 = local_1f8;
    if ((local_1ec & 0xffffff) != 0) {
      dVar16 = (double)FUN_140e4b060(&local_1f8);
    }
    dVar13 = local_1e8;
    if ((local_1dc & 0xffffff) != 0) {
      dVar13 = (double)FUN_140e4b060(&local_1e8);
    }
    dVar14 = local_288;
    if ((local_27c & 0xffffff) != 0) {
      dVar14 = (double)FUN_140e4b060(&local_288);
    }
    dVar15 = local_278;
    if ((local_26c & 0xffffff) != 0) {
      dVar15 = (double)FUN_140e4b060(&local_278);
    }
    fVar11 = (float)FUN_140e793d0((float)dVar15,(float)dVar14,(float)dVar13,(float)dVar16);
    uVar12 = 0;
    local_1d8 = 0;
    local_16c = 0;
    local_178 = (double)fVar11;
    local_2a0 = 0;
    local_1fc = 0;
    local_208 = 120.0;
    local_2a8 = 0x739;
    uStack_2ec = local_2bc;
    uStack_2f0 = local_2c0;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) == 0) {
      local_2f8 = local_2c8;
    }
    else {
      FUN_1400419b0(&local_2f8,&local_2c8);
    }
    local_res20 = 2;
    local_2fc = 7;
    local_308 = (double)CONCAT44(local_308._4_4_,1);
    FUN_1400462a0(&local_2f8,&local_308);
    if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    uStack_2cc = 0;
    uStack_2d0 = local_200;
    local_2d8 = local_208;
    local_res20 = 6;
    FUN_140046500(&local_2d8,&local_2f8);
    local_268 = local_2d8;
    uStack_260 = uStack_2d0;
    uStack_25c = uStack_2cc;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_268);
    local_res20 = 2;
    if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    local_res20 = 0;
    if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2a8 = 0x73a;
    if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    local_30c = 0;
    local_318 = 0.0;
    local_2a8 = 0x73b;
    if (1 < param_4) {
      puVar8 = *(undefined8 **)(param_5 + 8);
    }
    uVar19 = (ulonglong)plVar18 & 0xffffffffffffff00;
    FUN_140e87440(puVar8,DAT_141a1f440,0x80000000,&local_2e8,uVar19,uVar10 & 0xffffffffffffff00);
    local_268 = local_2e8;
    uStack_260 = uStack_2e0;
    uStack_25c = uStack_2dc;
    FUN_140041b80(&local_188,&local_268);
    local_2a8 = 0x73d;
    dVar16 = local_2c8;
    if ((local_2bc & 0xffffff) != 0) {
      dVar16 = (double)FUN_140e4b060(&local_2c8);
    }
    dVar14 = local_178;
    dVar13 = local_188;
    uVar10 = (ulonglong)dVar16;
    if ((int)uVar10 < 1) {
      uVar9 = local_2a0;
    }
    else {
      uVar1 = CONCAT44(uStack_17c,uStack_180);
      do {
        uVar12 = (undefined4)(uVar19 >> 0x20);
        uVar10 = (ulonglong)((int)uVar10 - 1);
        local_2a8 = 0x73f;
        local_138 = uVar10;
        if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        local_248 = 0;
        local_240 = 0;
        local_23c = 5;
        local_130 = &local_278;
        local_128 = &local_288;
        local_238 = (double)CONCAT44(uRam0000000141dd287c,_DAT_141dd2878);
        uStack_230 = CONCAT44(DAT_141dd2884,uRam0000000141dd2880);
        if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_238);
        local_120 = local_e8;
        uStack_25c = 0xf;
        local_268 = 7.291122019556739e-304;
        local_238 = 7.291122019556739e-304;
        uStack_230 = CONCAT44(0xf,uStack_260);
        if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_238);
        local_118 = local_d8;
        ppuVar20 = &local_130;
        uVar19 = CONCAT44(uVar12,DAT_141a0a7c8);
        uVar5 = FUN_140e634e0(local_res8,local_res10,&local_248,4,uVar19,ppuVar20);
        iVar3 = FUN_140e63cb0(local_c8,&local_res8,&local_res10,uVar5);
        dVar16 = local_208;
        if (0 < iVar3) {
          do {
            local_2a8 = 0x741;
            pdVar6 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
            FUN_140e609c0(local_res8);
            if (&local_188 != pdVar6) {
              local_238 = dVar13;
              uStack_230 = uVar1;
              if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pdVar6);
              }
              FUN_140041b80(pdVar6,&local_238);
            }
            FUN_140e60910(1);
            local_2a8 = 0x742;
            uStack_2cc = local_30c;
            uStack_2d0 = local_310;
            if ((1 << ((byte)local_30c & 0x1f) & 0x46U) == 0) {
              local_2d8 = local_318;
            }
            else {
              FUN_1400419b0(&local_2d8,&local_318);
            }
            local_res20 = 8;
            FUN_140042560(&local_2d8,&local_218);
            local_2fc = 0;
            local_300 = local_200;
            local_308 = dVar16;
            local_res20 = 0x18;
            local_14c = 0;
            local_158 = 0x3fe0000000000000;
            FUN_140042560(&local_308,&local_158);
            if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_158);
            }
            local_24c = 0;
            local_250 = local_170;
            local_258 = dVar14;
            local_res20 = 0x38;
            FUN_1400462a0(&local_258,&local_308);
            local_290 = local_24c;
            local_294 = local_250;
            if ((1 << ((byte)local_24c & 0x1f) & 0x46U) == 0) {
              local_29c = local_258;
            }
            else {
              FUN_1400419b0(&local_29c,&local_258);
            }
            local_res20 = 0x78;
            FUN_1400460e0(&local_29c,&local_2d8);
            uVar12 = FUN_140e794b0(0,0);
            uStack_1bc = local_290;
            uStack_1c0 = local_294;
            if ((1 << ((byte)local_290 & 0x1f) & 0x46U) == 0) {
              local_1c8 = local_29c;
            }
            else {
              FUN_1400419b0(&local_1c8,&local_29c);
            }
            local_res20 = 0xf8;
            FUN_140162c50(&local_1c8,uVar12);
            local_238 = local_1c8;
            uStack_230 = CONCAT44(uStack_1bc,uStack_1c0);
            if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b8);
            }
            FUN_140041b80(&local_1b8,&local_238);
            local_res20 = 0x78;
            if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c8);
            }
            local_res20 = 0x38;
            if ((1 << ((byte)local_290 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_29c);
            }
            local_res20 = 0x18;
            if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_258);
            }
            local_res20 = 8;
            if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_308);
            }
            local_res20 = 0;
            if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2d8);
            }
            FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_1b8);
            local_2a8 = 0x743;
            pdVar6 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f6098);
            FUN_140e609c0(local_res8);
            uStack_2ec = local_30c;
            uStack_2f0 = local_310;
            if ((1 << ((byte)local_30c & 0x1f) & 0x46U) == 0) {
              local_2f8 = local_318;
            }
            else {
              FUN_1400419b0(&local_2f8,&local_318);
            }
            local_res20 = 0x100;
            local_13c = 7;
            local_148[0] = 5;
            FUN_140042560(&local_2f8,local_148);
            if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_148);
            }
            if (&local_2f8 != pdVar6) {
              local_238 = local_2f8;
              uStack_230 = CONCAT44(uStack_2ec,uStack_2f0);
              if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pdVar6);
              }
              FUN_140041b80(pdVar6,&local_238);
            }
            local_res20 = 0;
            if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2f8);
            }
            FUN_140e60910(1);
            cVar2 = FUN_140e643f0(local_c8,&local_res8,&local_res10);
          } while (cVar2 != '\0');
          uVar10 = local_138;
        }
        FUN_140e63970(local_c8,&local_res8,&local_res10);
        DAT_141a67c38 = 1;
        uVar21 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
        uVar19 = uVar19 & 0xffffffffffffff00;
        FUN_140e87440(&local_2e8,DAT_141a57c50,0x80000000,&local_198,uVar19,uVar21);
        uVar19 = uVar19 & 0xffffffffffffff00;
        FUN_140e87440(&local_2e8,DAT_1419f5ec8,0x80000000,&local_1a8,uVar19,
                      uVar21 & 0xffffffffffffff00);
        DAT_141a67c38 = 0;
        DAT_141a72aac = 0;
        local_2a8 = 0x745;
        uVar4 = local_30c & 0xffffff;
        if (uVar4 == 0) {
LAB_140406e94:
          local_318 = local_318 + 1.0;
        }
        else {
          if (uVar4 == 1) {
            local_318 = (double)FUN_140e4b060(&local_318);
            local_30c = 0;
            goto LAB_140406e94;
          }
          if (uVar4 == 7) {
            local_318 = (double)CONCAT44(local_318._4_4_,local_318._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_318 = (double)((longlong)local_318 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_30c = 0;
              goto LAB_140406e94;
            }
            FUN_140042910(&DAT_14172c3d8,&local_318,&local_318);
          }
        }
        if (local_b8 != 0) {
          FUN_140e4cd60();
        }
      } while (0 < (int)uVar10);
      uVar12 = local_1d8;
      uVar9 = local_1d8;
    }
  }
  else {
    local_2a8 = 0x732;
    uVar12 = 0xffffff;
    uVar9 = 0xffffff;
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  _eh_vector_destructor_iterator_(local_108,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_2b8;
  return local_res18;
}

