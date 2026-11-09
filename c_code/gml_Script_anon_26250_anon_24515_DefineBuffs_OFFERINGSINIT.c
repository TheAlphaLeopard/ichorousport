// gml_Script_anon_26250_anon_24515_DefineBuffs_OFFERINGSINIT @ 0x1403e0f80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_26250_anon_24515_DefineBuffs_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  double *pdVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 uVar11;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined4 uVar15;
  ulonglong uVar12;
  undefined8 uVar13;
  uint **ppuVar14;
  uint **in_stack_fffffffffffffc80;
  ulonglong uVar16;
  undefined8 local_378;
  undefined4 local_370;
  undefined4 local_36c;
  uint local_368;
  uint uStack_364;
  uint uStack_360;
  uint uStack_35c;
  undefined4 local_358;
  double local_350;
  uint local_344;
  undefined8 local_340;
  undefined4 local_338;
  undefined4 local_334;
  undefined8 local_330;
  char *local_328;
  undefined4 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 local_30c;
  undefined8 local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  uint local_2f8 [3];
  undefined4 local_2ec;
  uint local_2e8 [3];
  undefined4 local_2dc;
  uint local_2d8 [4];
  uint local_2c8 [4];
  double local_2b8 [2];
  uint local_2a8 [4];
  uint local_298 [4];
  undefined1 local_288 [16];
  uint local_278 [4];
  undefined1 local_268 [16];
  uint *local_258;
  uint *local_250;
  double *local_248;
  uint *local_240;
  uint *local_238;
  undefined1 *local_230;
  uint *local_228;
  undefined1 *local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
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
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  uint *local_198;
  undefined4 local_18c;
  longlong *local_188;
  undefined4 local_17c;
  longlong *local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined1 *local_148;
  undefined4 local_13c;
  longlong *local_138;
  undefined4 local_12c;
  longlong *local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  longlong *local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [16];
  longlong local_88;
  
  local_358 = 0;
  local_328 = "gml_Script_anon@23533@DefineBuffs@OFFERINGSINIT";
  local_330 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_330;
  local_320 = 0x3e2;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_2d8,0x10,8,FUN_1400424d0,FUN_140041b30);
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  uVar11 = 0xffffff;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_18c = 0xffffff;
  local_198 = (uint *)0x0;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  local_2dc = 0xffffff;
  local_2e8[0] = 0;
  local_2e8[1] = 0;
  uStack_1cc = 0xffffff;
  local_1d8 = 0;
  uStack_1dc = 0xffffff;
  local_1e8 = 0;
  local_344 = 0xffffff;
  local_350 = 0.0;
  local_2ec = 0xffffff;
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_36c = 0;
  local_378 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_30c = 0;
  local_318 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_320 = 0x3e4;
  local_334 = 0;
  local_340 = 0;
  iVar3 = FUN_140e851f0(uVar5,&local_340,DAT_141955260,0);
  if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_340);
  }
  if (iVar3 == 0) {
    local_320 = 0x3e4;
  }
  else {
    local_320 = 0x3e6;
    if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_378);
    }
    local_378 = 0;
    local_370 = 0;
    local_36c = 5;
    if (param_4 < 1) {
      param_5 = &DAT_1419df7b0;
    }
    else {
      param_5 = (undefined8 *)*param_5;
    }
    uStack_2fc = *(undefined4 *)((longlong)param_5 + 0xc);
    uStack_300 = *(undefined4 *)(param_5 + 1);
    if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) == 0) {
      local_308 = *param_5;
    }
    else {
      FUN_1400419b0(&local_308);
    }
    local_358 = 1;
    local_334 = 7;
    local_340 = CONCAT44(local_340._4_4_,0xf);
    FUN_140042560(&local_308,&local_340);
    if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_340);
    }
    local_1f8 = local_308;
    uStack_1f0 = uStack_300;
    uStack_1ec = uStack_2fc;
    if ((1 << ((byte)local_2d8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2d8);
    }
    FUN_140041b80(local_2d8,&local_1f8);
    local_358 = 0;
    if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    local_258 = local_2d8;
    local_1f8 = CONCAT44(uRam00000001419e4744,_DAT_1419e4740);
    uStack_1f0 = uRam00000001419e4748;
    uStack_1ec = uRam00000001419e474c;
    if ((1 << ((byte)local_2c8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2c8);
    }
    FUN_140041b80(local_2c8,&local_1f8);
    local_250 = local_2c8;
    ppuVar14 = &local_258;
    puVar6 = (undefined8 *)gml_Script_bm_string_width(local_res8,local_res10,&local_378,2,ppuVar14);
    uVar5 = 0;
    if (puVar6 != &local_208) {
      local_1f8 = *puVar6;
      uStack_1f0 = *(undefined4 *)(puVar6 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
      FUN_140041b80(&local_208,&local_1f8);
      uVar5 = local_208;
      uVar11 = local_1fc;
    }
    local_320 = 1000;
    local_334 = 0xf;
    local_340 = 0x10000000000009d;
    iVar3 = FUN_140e63cb0(local_98,&local_res8,&local_res10,&local_340);
    if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_340);
    }
    if (0 < iVar3) {
LAB_1403e1380:
      local_320 = 0x3ea;
      uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f090);
      local_cc = 0;
      local_d8 = 0;
      iVar3 = FUN_140e851f0(uVar7,&local_d8,DAT_141955260,1);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if (iVar3 < 1) {
        local_320 = 0x3eb;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5868);
        FUN_140e87440(uVar7,DAT_1419f5848,0x80000000,&local_198,
                      (ulonglong)ppuVar14 & 0xffffffffffffff00,
                      (ulonglong)in_stack_fffffffffffffc80 & 0xffffffffffffff00);
        local_368 = (uint)DAT_141dd27a8;
        uStack_364 = DAT_141dd27a8._4_4_;
        uStack_360 = DAT_141dd27b0;
        uStack_35c = DAT_141dd27b4;
        if ((1 << ((byte)local_2d8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_2d8);
        }
        FUN_140041b80(local_2d8,&local_368);
        local_258 = local_2d8;
        uVar7 = FUN_140069500(uVar7);
        in_stack_fffffffffffffc80 = &local_258;
        ppuVar14 = &local_198;
        uVar7 = FUN_140e63610(uVar7,local_res10,&local_378,1,ppuVar14,in_stack_fffffffffffffc80);
        cVar2 = FUN_140e491e0(uVar7);
        if (cVar2 == '\0') {
          local_320 = 0x3eb;
        }
        else {
          local_320 = 0x3ec;
          if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_378);
          }
          uVar15 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
          local_378 = 0;
          local_370 = 0;
          local_36c = 5;
          pdVar8 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
          puVar9 = (uint *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
          local_368 = _DAT_141dc6550;
          uStack_364 = uRam0000000141dc6554;
          uStack_360 = uRam0000000141dc6558;
          uStack_35c = uRam0000000141dc655c;
          if ((1 << ((byte)local_2d8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_2d8);
          }
          FUN_140041b80(local_2d8,&local_368);
          local_258 = local_2d8;
          local_368 = _DAT_141dc6550;
          uStack_364 = uRam0000000141dc6554;
          uStack_360 = uRam0000000141dc6558;
          uStack_35c = uRam0000000141dc655c;
          if ((1 << ((byte)local_2c8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_2c8);
          }
          FUN_140041b80(local_2c8,&local_368);
          local_250 = local_2c8;
          if (pdVar8 != local_2b8) {
            local_368 = *(uint *)pdVar8;
            uStack_364 = *(uint *)((longlong)pdVar8 + 4);
            uStack_360 = *(uint *)(pdVar8 + 1);
            uStack_35c = *(uint *)((longlong)pdVar8 + 0xc);
            if ((1 << ((byte)local_2b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_2b8);
            }
            FUN_140041b80(local_2b8,&local_368);
          }
          local_248 = local_2b8;
          if (puVar9 != local_2a8) {
            local_368 = *puVar9;
            uStack_364 = puVar9[1];
            uStack_360 = puVar9[2];
            uStack_35c = puVar9[3];
            if ((1 << ((byte)local_2a8[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_2a8);
            }
            FUN_140041b80(local_2a8,&local_368);
          }
          in_stack_fffffffffffffc80 = &local_258;
          ppuVar14 = (uint **)CONCAT44(uVar15,DAT_1419fd548);
          local_240 = local_2a8;
          uVar7 = FUN_140e634e0(local_res8,local_res10,&local_378,4,ppuVar14,
                                in_stack_fffffffffffffc80);
          local_dc = 0;
          local_e8 = 0x3ff0000000000000;
          iVar3 = FUN_140e851f0(uVar7,&local_e8,DAT_141955260,1);
          if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          if (iVar3 == -2 || -1 < iVar3) {
            local_320 = 0x3ee;
            if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_378);
            }
            local_378 = 0;
            local_370 = 0;
            local_36c = 5;
            local_bc = 6;
            local_c8 = local_res8;
            uVar12 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
            FUN_140e87440(&local_c8,DAT_141a0a828,0x80000000,&local_1a8,uVar12,
                          (ulonglong)in_stack_fffffffffffffc80 & 0xffffffffffffff00);
            uVar15 = (undefined4)(uVar12 >> 0x20);
            if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_c8);
            }
            local_368 = (uint)local_1a8;
            uStack_364 = local_1a8._4_4_;
            uStack_360 = uStack_1a0;
            uStack_35c = uStack_19c;
            if ((1 << ((byte)local_2d8[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_2d8);
            }
            FUN_140041b80(local_2d8,&local_368);
            local_258 = local_2d8;
            local_368 = _DAT_141dd2948;
            uStack_364 = uRam0000000141dd294c;
            uStack_360 = uRam0000000141dd2950;
            uStack_35c = DAT_141dd2954;
            if ((1 << ((byte)local_2c8[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_2c8);
            }
            FUN_140041b80(local_2c8,&local_368);
            local_250 = local_2c8;
            uVar13 = CONCAT44(uVar15,DAT_141a56cf0);
            uVar7 = FUN_140e634e0(local_res8,local_res10,&local_378,2,uVar13,&local_258);
            uVar15 = (undefined4)((ulonglong)uVar13 >> 0x20);
            cVar2 = FUN_140e491e0(uVar7);
            if (cVar2 == '\0') {
              local_320 = 0x3ef;
              puVar9 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5888);
              FUN_140e609c0(local_res8);
              puVar10 = (uint *)FUN_140e8da20(&local_f8,local_res8,0);
              if (puVar10 != puVar9) {
                local_368 = *puVar10;
                uStack_364 = puVar10[1];
                uStack_360 = puVar10[2];
                uStack_35c = puVar10[3];
                if ((1 << ((byte)puVar9[3] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar9);
                }
                FUN_140041b80(puVar9,&local_368);
              }
              FUN_140e60910(1);
            }
            local_320 = 0x3f1;
            if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_378);
            }
            local_378 = 0;
            local_370 = 0;
            local_36c = 5;
            uVar16 = 0;
            uVar12 = CONCAT44(uVar15,DAT_1419ef5d8);
            puVar9 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_378,0,uVar12,0);
            if (puVar9 != local_2e8) {
              local_368 = *puVar9;
              uStack_364 = puVar9[1];
              uStack_360 = puVar9[2];
              uStack_35c = puVar9[3];
              if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_2e8);
              }
              FUN_140041b80(local_2e8,&local_368);
            }
            local_320 = 0x3f2;
            if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_378);
            }
            local_378 = 0;
            local_370 = 0;
            local_36c = 5;
            local_17c = 6;
            local_188 = local_res8;
            uVar16 = uVar16 & 0xffffffffffffff00;
            uVar12 = uVar12 & 0xffffffffffffff00;
            FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_1d8,uVar12,uVar16);
            if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_188);
            }
            local_16c = 6;
            local_178 = local_res8;
            uVar12 = uVar12 & 0xffffffffffffff00;
            FUN_140e87440(&local_178,DAT_1419fe158,0x80000000,&local_1e8,uVar12,
                          uVar16 & 0xffffffffffffff00);
            uVar15 = (undefined4)(uVar12 >> 0x20);
            if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_178);
            }
            local_368 = (uint)local_1d8;
            uStack_364 = local_1d8._4_4_;
            uStack_360 = uStack_1d0;
            uStack_35c = uStack_1cc;
            if ((1 << ((byte)local_2d8[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_2d8);
            }
            FUN_140041b80(local_2d8,&local_368);
            local_258 = local_2d8;
            local_368 = (uint)local_1e8;
            uStack_364 = local_1e8._4_4_;
            uStack_360 = uStack_1e0;
            uStack_35c = uStack_1dc;
            if ((1 << ((byte)local_2c8[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_2c8);
            }
            FUN_140041b80(local_2c8,&local_368);
            local_250 = local_2c8;
            uStack_ac = 0xf;
            local_b8 = 0x10000000000009d;
            local_368 = 0x9d;
            uStack_364 = 0x1000000;
            uStack_360 = uStack_b0;
            uStack_35c = 0xf;
            if ((1 << ((byte)local_2b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_2b8);
            }
            FUN_140041b80(local_2b8,&local_368);
            local_248 = local_2b8;
            local_240 = local_2e8;
            local_368 = _DAT_1419df7a0;
            uStack_364 = uRam00000001419df7a4;
            uStack_360 = uRam00000001419df7a8;
            uStack_35c = uRam00000001419df7ac;
            if ((1 << ((byte)local_298[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_298);
            }
            FUN_140041b80(local_298,&local_368);
            local_238 = local_298;
            ppuVar14 = (uint **)CONCAT44(uVar15,DAT_141a56b80);
            FUN_140e634e0(local_res8,local_res10,&local_378,5,ppuVar14,&local_258);
            local_320 = 0x3f3;
            if ((1 << ((byte)local_344 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_350);
            }
            local_344 = 0;
            local_350 = 0.0;
            bVar1 = true;
            do {
              uVar15 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
              if (!bVar1) {
                local_320 = 0x3f3;
                uVar4 = local_344 & 0xffffff;
                if (uVar4 != 0) {
                  if (uVar4 != 1) {
                    if (uVar4 == 7) {
                      local_350 = (double)CONCAT44(local_350._4_4_,local_350._0_4_ + 1);
                    }
                    else if (uVar4 == 10) {
                      local_350 = (double)((longlong)local_350 + 1);
                    }
                    else {
                      if (uVar4 == 0xd) {
                        local_344 = 0;
                        goto LAB_1403e1bcb;
                      }
                      FUN_140042910(&DAT_14172c3d8,&local_350,&local_350);
                    }
                    goto LAB_1403e1bd5;
                  }
                  local_350 = (double)FUN_140e4b060(&local_350);
                  local_344 = 0;
                }
LAB_1403e1bcb:
                local_350 = local_350 + 1.0;
              }
LAB_1403e1bd5:
              bVar1 = false;
              if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_378);
              }
              local_378 = 0;
              local_370 = 0;
              local_36c = 5;
              local_258 = local_2e8;
              uVar13 = CONCAT44(uVar15,DAT_1419f5e98);
              uVar7 = FUN_140e634e0(local_res8,local_res10,&local_378,1,uVar13,&local_258);
              uVar15 = (undefined4)((ulonglong)uVar13 >> 0x20);
              iVar3 = FUN_140e851f0(&local_350,uVar7,DAT_141955260,1);
              if ((iVar3 == -2) || (-1 < iVar3)) goto LAB_1403e250f;
              local_320 = 0x3f5;
              if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_318);
              }
              local_318 = 0;
              local_310 = 0;
              local_30c = 5;
              local_250 = local_2e8;
              local_248 = &local_350;
              ppuVar14 = &local_250;
              uVar12 = CONCAT44(uVar15,DAT_1419f5a78);
              puVar9 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_318,2,uVar12,ppuVar14);
              if (puVar9 != local_2f8) {
                local_368 = *puVar9;
                uStack_364 = puVar9[1];
                uStack_360 = puVar9[2];
                uStack_35c = puVar9[3];
                if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_2f8);
                }
                FUN_140041b80(local_2f8,&local_368);
              }
              local_320 = 0x3f6;
              uVar16 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
              ppuVar14 = (uint **)(uVar12 & 0xffffffffffffff00);
              FUN_140e87440(local_2f8,DAT_141a1f090,0x80000000,&local_1b8,ppuVar14,uVar16);
              local_15c = 0;
              local_168 = 0;
              iVar3 = FUN_140e851f0(&local_1b8,&local_168,DAT_141955260,1);
              if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_168);
              }
              if (iVar3 == -2 || 0 < iVar3) {
                local_320 = 0x3f7;
                ppuVar14 = (uint **)((ulonglong)ppuVar14 & 0xffffffffffffff00);
                FUN_140e87440(local_2f8,DAT_141a56cd0,0x80000000,&local_1c8,ppuVar14,
                              uVar16 & 0xffffffffffffff00);
                local_14c = 10;
                local_158 = 2;
                iVar3 = FUN_140e851f0(&local_1c8,&local_158,DAT_141955260,0);
                if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_158);
                }
                if (iVar3 == 0) {
                  local_320 = 0x3f7;
                }
                else {
                  local_320 = 0x3f8;
                  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_378);
                  }
                  local_378 = 0;
                  local_370 = 0;
                  local_36c = 5;
                  puVar9 = (uint *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5888);
                  if (puVar9 != local_2d8) {
                    local_368 = *puVar9;
                    uStack_364 = puVar9[1];
                    uStack_360 = puVar9[2];
                    uStack_35c = puVar9[3];
                    if ((1 << ((byte)local_2d8[3] & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(local_2d8);
                    }
                    FUN_140041b80(local_2d8,&local_368);
                  }
                  local_258 = local_2d8;
                  local_250 = local_2f8;
                  ppuVar14 = &local_258;
                  uVar7 = FUN_14022ffd0(local_res8,local_res10,&local_378,2,ppuVar14);
                  local_13c = 0;
                  local_148 = &DAT_bff0000000000000;
                  iVar3 = FUN_140e851f0(uVar7,&local_148,DAT_141955260,0);
                  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_148);
                  }
                  uVar15 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
                  if (iVar3 == 0) {
                    local_320 = 0x3fa;
                    if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_378);
                    }
                    local_378 = 0;
                    local_370 = 0;
                    local_36c = 5;
                    if (puVar9 != local_2d8) {
                      local_368 = *puVar9;
                      uStack_364 = puVar9[1];
                      uStack_360 = puVar9[2];
                      uStack_35c = puVar9[3];
                      if ((1 << ((byte)local_2d8[3] & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(local_2d8);
                      }
                      FUN_140041b80(local_2d8,&local_368);
                    }
                    local_258 = local_2d8;
                    local_250 = local_2f8;
                    ppuVar14 = &local_258;
                    uVar12 = CONCAT44(uVar15,DAT_1419fe568);
                    FUN_140e634e0(local_res8,local_res10,&local_378,2,uVar12,ppuVar14);
                    local_320 = 0x3fb;
                    if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_378);
                    }
                    local_378 = 0;
                    local_370 = 0;
                    local_36c = 5;
                    if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_318);
                    }
                    local_318 = 0;
                    local_310 = 0;
                    local_30c = 5;
                    local_12c = 6;
                    local_138 = local_res8;
                    uVar16 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
                    uVar12 = uVar12 & 0xffffffffffffff00;
                    FUN_140e87440(&local_138,DAT_1419fe0e8,0x80000000,&local_1d8,uVar12,uVar16);
                    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_138);
                    }
                    local_11c = 6;
                    local_128 = local_res8;
                    uVar16 = uVar16 & 0xffffffffffffff00;
                    uVar12 = uVar12 & 0xffffffffffffff00;
                    FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_1e8,uVar12,uVar16);
                    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_128);
                    }
                    (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5888);
                    local_10c = 0xf;
                    local_118 = 0x1000000000000ee;
                    uVar12 = uVar12 & 0xffffffffffffff00;
                    FUN_140e87440(&local_118,DAT_141a0a7d8,0x80000000,&local_218,uVar12,
                                  uVar16 & 0xffffffffffffff00);
                    uVar15 = (undefined4)(uVar12 >> 0x20);
                    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_118);
                    }
                    local_368 = DAT_141a575a0 & 0xffffff;
                    uStack_364 = (int)(DAT_141a575a0 | 0x5000000) >> 0x18 & 0xff;
                    if (uStack_364 == 0xf) {
                      uStack_364 = 0x4000004;
                    }
                    else {
                      uStack_364 = uStack_364 | 0x1000000;
                    }
                    uStack_9c = 0xf;
                    local_a8 = CONCAT44(uStack_364,DAT_141a575a0) & 0xffffffff00ffffff;
                    uStack_360 = uStack_a0;
                    uStack_35c = 0xf;
                    if ((1 << ((byte)local_2d8[3] & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(local_2d8);
                    }
                    FUN_140041b80(local_2d8,&local_368);
                    local_258 = local_2d8;
                    local_368 = (uint)local_1d8;
                    uStack_364 = local_1d8._4_4_;
                    uStack_360 = uStack_1d0;
                    uStack_35c = uStack_1cc;
                    if ((1 << ((byte)local_2c8[3] & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(local_2c8);
                    }
                    FUN_140041b80(local_2c8,&local_368);
                    local_250 = local_2c8;
                    local_368 = (uint)local_1e8;
                    uStack_364 = local_1e8._4_4_;
                    uStack_360 = uStack_1e0;
                    uStack_35c = uStack_1dc;
                    if ((1 << ((byte)local_2b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(local_2b8);
                    }
                    FUN_140041b80(local_2b8,&local_368);
                    local_248 = local_2b8;
                    uStack_1ec = 0xf;
                    local_1f8 = 0x1000000000000ee;
                    local_368 = 0xee;
                    uStack_364 = 0x1000000;
                    uStack_360 = uStack_1f0;
                    uStack_35c = 0xf;
                    if ((1 << ((byte)local_2a8[3] & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(local_2a8);
                    }
                    FUN_140041b80(local_2a8,&local_368);
                    local_238 = local_2f8;
                    local_338 = local_200;
                    local_334 = uVar11;
                    if ((1 << ((byte)uVar11 & 0x1f) & 0x46U) == 0) {
                      local_340 = uVar5;
                      local_240 = local_2a8;
                    }
                    else {
                      local_240 = local_2a8;
                      FUN_1400419b0(&local_340,&local_208);
                    }
                    local_358 = 2;
                    local_fc = 0;
                    local_108 = 0x4059000000000000;
                    FUN_140046500(&local_340,&local_108);
                    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_108);
                    }
                    uStack_2fc = local_20c;
                    uStack_300 = local_210;
                    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) == 0) {
                      local_308 = local_218;
                    }
                    else {
                      FUN_1400419b0(&local_308,&local_218);
                    }
                    local_358 = 6;
                    FUN_140042560(&local_308,&local_340);
                    local_368 = (uint)local_308;
                    uStack_364 = local_308._4_4_;
                    uStack_360 = uStack_300;
                    uStack_35c = uStack_2fc;
                    if ((1 << (local_288[0xc] & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(local_288);
                    }
                    FUN_140041b80(local_288,&local_368);
                    local_358 = 2;
                    if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_308);
                    }
                    local_358 = 0;
                    if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_340);
                    }
                    local_230 = local_288;
                    puVar9 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_318,6,
                                                   CONCAT44(uVar15,DAT_1419fd6d8),&local_258);
                    if (puVar9 != local_278) {
                      local_368 = *puVar9;
                      uStack_364 = puVar9[1];
                      uStack_360 = puVar9[2];
                      uStack_35c = puVar9[3];
                      if ((1 << ((byte)local_278[3] & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(local_278);
                      }
                      FUN_140041b80(local_278,&local_368);
                    }
                    local_228 = local_278;
                    local_368 = (uint)DAT_1419df7b0;
                    uStack_364 = DAT_1419df7b0._4_4_;
                    uStack_360 = DAT_1419df7b8;
                    uStack_35c = DAT_1419df7bc;
                    if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(local_268);
                    }
                    FUN_140041b80(local_268,&local_368);
                    local_220 = local_268;
                    ppuVar14 = &local_228;
                    gml_Script_draw_line_sprite(local_res8,local_res10,&local_378,2,ppuVar14);
                  }
                  else {
                    local_320 = 0x3f8;
                  }
                }
              }
              else {
                local_320 = 0x3f6;
              }
            } while( true );
          }
          local_320 = 0x3ec;
        }
      }
      else {
        local_320 = 0x3ea;
      }
      goto LAB_1403e2580;
    }
LAB_1403e25a2:
    FUN_140e63970(local_98,&local_res8,&local_res10);
    if (local_88 != 0) {
      FUN_140e4cd60();
      local_88 = 0;
    }
    param_3 = local_res18;
  }
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2f8);
  }
  if ((1 << ((byte)local_344 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_350);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2e8);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  _eh_vector_destructor_iterator_(local_2d8,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_330;
  return param_3;
LAB_1403e250f:
  local_320 = 0x3fd;
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_378 = 0;
  local_370 = 0;
  local_36c = 5;
  local_258 = local_2e8;
  in_stack_fffffffffffffc80 = &local_258;
  ppuVar14 = (uint **)CONCAT44(uVar15,DAT_1419f6038);
  FUN_140e634e0(local_res8,local_res10,&local_378,1,ppuVar14,in_stack_fffffffffffffc80);
LAB_1403e2580:
  cVar2 = FUN_140e643f0(local_98,&local_res8,&local_res10);
  if (cVar2 == '\0') goto LAB_1403e25a2;
  goto LAB_1403e1380;
}

