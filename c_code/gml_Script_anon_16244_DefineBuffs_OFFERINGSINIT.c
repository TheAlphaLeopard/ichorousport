// gml_Script_anon_16244_DefineBuffs_OFFERINGSINIT @ 0x1403d3660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_16244_DefineBuffs_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  double dVar9;
  longlong lVar10;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  code *pcVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined4 uVar15;
  undefined8 **ppuVar14;
  ulonglong in_stack_fffffffffffffc90;
  longlong **pplVar16;
  ulonglong uVar17;
  undefined8 **ppuVar18;
  longlong local_368;
  longlong lStack_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined4 local_344;
  double local_340;
  uint local_334;
  longlong local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  longlong *local_318;
  undefined4 local_30c;
  longlong local_308;
  undefined4 uStack_300;
  uint uStack_2fc;
  undefined8 local_2f8;
  char *local_2f0;
  undefined4 local_2e8;
  longlong local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  longlong local_2c8;
  byte local_2bc;
  undefined1 local_2b8 [12];
  byte local_2ac;
  longlong local_2a8;
  byte local_29c;
  undefined1 local_298 [16];
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  longlong local_278;
  undefined4 local_26c;
  longlong local_268;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_23c;
  longlong local_238;
  undefined4 local_230;
  undefined4 local_22c;
  longlong local_228;
  undefined4 local_220;
  undefined4 local_21c;
  double local_218;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  longlong *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  longlong local_1c8;
  uint uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  longlong *local_1a8;
  undefined1 *local_1a0;
  longlong *local_198;
  undefined1 *local_190;
  longlong local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_16c;
  longlong local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  longlong local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  longlong *local_118;
  undefined4 local_10c;
  longlong *local_108;
  undefined4 local_fc;
  undefined1 *local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined1 local_d8 [16];
  longlong local_c8;
  
  local_358 = 0;
  local_2f0 = "gml_Script_anon@15179@DefineBuffs@OFFERINGSINIT";
  local_2f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2f8;
  local_2e8 = 0x260;
  pcVar11 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(&local_2c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_2fc = 0xffffff;
  local_308 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  uVar7 = 0xffffff;
  uStack_1bc = 0xffffff;
  local_1c8 = 0;
  local_20c = 0xffffff;
  local_218 = 0.0;
  local_334 = 0xffffff;
  local_340 = 0.0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_344 = 0;
  local_350 = 0;
  local_27c = 0;
  local_288 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2e8 = 0x262;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
  pplVar16 = (longlong **)(in_stack_fffffffffffffc90 & 0xffffffffffffff00);
  puVar12 = (undefined8 *)((ulonglong)pcVar11 & 0xffffffffffffff00);
  FUN_140e87440(uVar4,DAT_141a0a848,0x80000000,&local_308,puVar12,pplVar16);
  uStack_31c = 0;
  local_328 = 0;
  iVar2 = FUN_140e851f0(&local_308,&local_328,DAT_141955260,1);
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  if (0 < iVar2) {
    uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
    pplVar16 = (longlong **)((ulonglong)pplVar16 & 0xffffffffffffff00);
    puVar12 = (undefined8 *)((ulonglong)puVar12 & 0xffffffffffffff00);
    FUN_140e87440(uVar4,DAT_141a0a848,0x80000000,&local_308,puVar12,pplVar16);
    if ((uStack_2fc & 0xffffff) == 0) {
      lVar10 = local_308;
    }
    else {
      lVar10 = FUN_140e4b060(&local_308);
    }
    dVar9 = (double)FUN_1412a79b0(lVar10,0x4024000000000000);
    if (dVar9 == 0.0) {
      local_2e8 = 0x264;
      uStack_31c = 0xf;
      local_328 = 0x10000000000009d;
      iVar2 = FUN_140e63cb0(local_d8,&local_res8,&local_res10,&local_328);
      if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_328);
      }
      if (0 < iVar2) {
        do {
          local_2e8 = 0x266;
          uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56cd0);
          uStack_31c = 10;
          local_328 = 2;
          iVar2 = FUN_140e851f0(uVar4,&local_328,DAT_141955260,0);
          if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_328);
          }
          if (iVar2 == 0) {
            local_2e8 = 0x266;
          }
          else {
            local_2e8 = 0x268;
            if ((1 << ((byte)local_344 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_350);
            }
            local_350 = 0;
            local_348 = 0;
            local_344 = 5;
            local_11c = 0xf;
            local_128 = 0x100000000000014;
            uVar17 = (ulonglong)pplVar16 & 0xffffffffffffff00;
            uVar13 = (ulonglong)puVar12 & 0xffffffffffffff00;
            FUN_140e87440(&local_128,DAT_1419f5978,0x80000000,&local_148,uVar13,uVar17);
            if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_128);
            }
            local_10c = 6;
            local_118 = local_res8;
            uVar17 = uVar17 & 0xffffffffffffff00;
            uVar13 = uVar13 & 0xffffffffffffff00;
            FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_158,uVar13,uVar17);
            if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_118);
            }
            local_fc = 6;
            local_108 = local_res8;
            FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_168,uVar13 & 0xffffffffffffff00
                          ,uVar17 & 0xffffffffffffff00);
            if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_108);
            }
            lStack_360 = CONCAT44(uStack_14c,uStack_150);
            local_368 = local_158;
            if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2c8);
            }
            FUN_140041b80(&local_2c8,&local_368);
            local_1a8 = &local_2c8;
            lStack_360 = CONCAT44(uStack_15c,uStack_160);
            local_368 = local_168;
            if ((1 << ((byte)_local_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_2b8);
            }
            FUN_140041b80(local_2b8,&local_368);
            local_1a0 = local_2b8;
            local_dc = 0xf;
            local_e8 = 0x100000000000014;
            uVar4 = FUN_140069500(&local_e8);
            pplVar16 = &local_1a8;
            puVar12 = &local_148;
            uVar4 = FUN_140e63610(uVar4,local_res10,&local_350,2,puVar12,pplVar16);
            local_ec = 0;
            local_f8 = &DAT_bff0000000000000;
            iVar2 = FUN_140e851f0(uVar4,&local_f8,DAT_141955260,0);
            bVar8 = iVar2 == 0;
            if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_f8);
            }
            if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_e8);
            }
            if (!bVar8) {
              local_2e8 = 0x26a;
              uStack_1ec = 6;
              local_1f8 = local_res8;
              pplVar16 = (longlong **)CONCAT71((int7)((ulonglong)pplVar16 >> 8),bVar8);
              puVar12 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar12 >> 8),bVar8);
              FUN_140e87440(&local_1f8,DAT_141a0a7e8,0,&local_178,puVar12,pplVar16);
              if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1f8);
              }
              uStack_1dc = 0;
              local_1e8 = &DAT_bff0000000000000;
              iVar2 = FUN_140e851f0(&local_178,&local_1e8,DAT_141955260,0);
              if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1e8);
              }
              if (iVar2 == 0) {
                local_2e8 = 0x26c;
                if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_288);
                }
                uVar15 = (undefined4)((ulonglong)puVar12 >> 0x20);
                local_288 = 0;
                local_280 = 0;
                local_27c = 5;
                plVar6 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5b48);
                plVar5 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a574b0);
                if (plVar5 != &local_2a8) {
                  local_368 = *plVar5;
                  lStack_360 = plVar5[1];
                  if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2a8);
                  }
                  FUN_140041b80(&local_2a8,&local_368);
                }
                local_198 = &local_2a8;
                pplVar16 = &local_198;
                puVar12 = (undefined8 *)CONCAT44(uVar15,DAT_141a047c8);
                uVar4 = FUN_140e634e0(local_res8,local_res10,&local_288,1,puVar12,pplVar16);
                uStack_2cc = *(undefined4 *)((longlong)plVar6 + 0xc);
                uStack_2d0 = (undefined4)plVar6[1];
                if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) == 0) {
                  local_2d8 = *plVar6;
                }
                else {
                  FUN_1400419b0(&local_2d8,plVar6);
                }
                local_358 = 1;
                FUN_140042560(&local_2d8,uVar4);
                lStack_360 = CONCAT44(uStack_2cc,uStack_2d0);
                local_368 = local_2d8;
                if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1d8);
                }
                FUN_140041b80(&local_1d8,&local_368);
                local_358 = 0;
                if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2d8);
                }
                FUN_140e86fa0(local_res8,DAT_141a0a7e8,0);
                local_2e8 = 0x26d;
                uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f090);
                local_30c = 0;
                local_318 = (longlong *)0x4010000000000000;
                FUN_1400462a0(uVar4,&local_318);
                if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_318);
                }
              }
            }
          }
          cVar1 = FUN_140e643f0(local_d8,&local_res8,&local_res10);
        } while (cVar1 != '\0');
      }
      FUN_140e63970(local_d8,&local_res8,&local_res10);
      if (local_c8 != 0) {
        FUN_140e4cd60();
      }
    }
  }
  local_2e8 = 0x273;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
  ppuVar18 = (undefined8 **)((ulonglong)pplVar16 & 0xffffffffffffff00);
  ppuVar14 = (undefined8 **)((ulonglong)puVar12 & 0xffffffffffffff00);
  FUN_140e87440(uVar4,DAT_141a0a848,0x80000000,&local_308,ppuVar14,ppuVar18);
  local_30c = 0;
  local_318 = (longlong *)0x0;
  iVar2 = FUN_140e851f0(&local_308,&local_318,DAT_141955260,1);
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  if (0 < iVar2) {
    uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
    ppuVar18 = (undefined8 **)((ulonglong)ppuVar18 & 0xffffffffffffff00);
    ppuVar14 = (undefined8 **)((ulonglong)ppuVar14 & 0xffffffffffffff00);
    FUN_140e87440(uVar4,DAT_141a0a848,0x80000000,&local_308,ppuVar14,ppuVar18);
    if ((uStack_2fc & 0xffffff) == 0) {
      lVar10 = local_308;
    }
    else {
      lVar10 = FUN_140e4b060(&local_308);
    }
    dVar9 = (double)FUN_1412a79b0(lVar10,0x4008000000000000);
    if (dVar9 == 0.0) {
      local_2e8 = 0x275;
      local_30c = 0xf;
      local_318 = (longlong *)0x100000000000014;
      ppuVar18 = (undefined8 **)((ulonglong)ppuVar18 & 0xffffffffffffff00);
      ppuVar14 = (undefined8 **)((ulonglong)ppuVar14 & 0xffffffffffffff00);
      FUN_140e87440(&local_318,DAT_1419f5bb8,0x80000000,&local_188,ppuVar14,ppuVar18);
      if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      lStack_360 = CONCAT44(uStack_17c,uStack_180);
      local_368 = local_188;
      FUN_140041b80(&local_1c8,&local_368);
      uVar7 = uStack_1bc;
      lVar10 = local_1c8;
      local_2e8 = 0x276;
      iVar2 = 0;
      if ((uStack_1bc == 2) && (local_1c8 != 0)) {
        iVar2 = *(int *)(local_1c8 + 0x24);
      }
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_20c = 0;
      local_218 = (double)iVar2;
      local_2e8 = 0x277;
      if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_340);
      }
      local_334 = 0;
      local_340 = 0.0;
      bVar8 = true;
      do {
        plVar6 = (longlong *)0x0;
        if (!bVar8) {
          local_2e8 = 0x277;
          uVar3 = local_334 & 0xffffff;
          if (uVar3 != 0) {
            if (uVar3 != 1) {
              if (uVar3 == 7) {
                local_340 = (double)CONCAT44(local_340._4_4_,local_340._0_4_ + 1);
              }
              else if (uVar3 == 10) {
                local_340 = (double)((longlong)local_340 + 1);
              }
              else {
                if (uVar3 == 0xd) {
                  local_334 = 0;
                  goto LAB_1403d421b;
                }
                FUN_140042910(&DAT_14172c3d8,&local_340,&local_340);
              }
              goto LAB_1403d4226;
            }
            local_340 = (double)FUN_140e4b060(&local_340);
            local_334 = 0;
          }
LAB_1403d421b:
          local_340 = local_340 + 1.0;
        }
LAB_1403d4226:
        bVar8 = false;
        iVar2 = FUN_140e851f0(&local_340,&local_218,DAT_141955260,1);
        if ((iVar2 == -2) || (-1 < iVar2)) goto LAB_1403d48c0;
        local_2e8 = 0x279;
        if ((1 << ((byte)local_344 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_350);
        }
        local_350 = 0;
        local_348 = 0;
        local_344 = 5;
        local_368 = _DAT_1419e4820;
        lStack_360 = lRam00000001419e4828;
        if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        FUN_140041b80(&local_2c8,&local_368);
        local_1a8 = &local_2c8;
        ppuVar14 = &local_1a8;
        uVar4 = gml_Script_choose_weighted(local_res8,local_res10,&local_350,1,ppuVar14);
        cVar1 = FUN_140e491e0(uVar4);
        if (cVar1 != '\0') {
          local_2e8 = 0x27b;
          iVar2 = FUN_140e4a740(&local_340);
          if (((uVar7 & 0xffffff) == 2) && (lVar10 != 0)) {
            if ((iVar2 < 0) || (*(int *)(lVar10 + 0x24) <= iVar2)) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                            *(undefined4 *)(lVar10 + 0x24));
            }
            else {
              plVar6 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar10 + 8));
            }
            if (plVar6 != &local_278) goto LAB_1403d438a;
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
            plVar6 = &local_1c8;
LAB_1403d438a:
            local_368 = *plVar6;
            lStack_360 = plVar6[1];
            if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_278);
            }
            FUN_140041b80(&local_278,&local_368);
          }
          local_2e8 = 0x27c;
          if ((1 << ((byte)local_344 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_350);
          }
          local_350 = 0;
          local_348 = 0;
          local_344 = 5;
          FUN_140e87170(&local_278,DAT_1419fe0e8,0x80000000,&local_228,local_res8,local_res10);
          plVar6 = local_res8;
          FUN_140e87170(&local_278,DAT_1419fe158,0x80000000,&local_238,local_res8,local_res10);
          uVar15 = (undefined4)((ulonglong)plVar6 >> 0x20);
          uVar4 = FUN_140e794b0();
          uStack_2cc = local_21c;
          uStack_2d0 = local_220;
          if ((1 << ((byte)local_21c & 0x1f) & 0x46U) == 0) {
            local_2d8 = local_228;
          }
          else {
            FUN_1400419b0(&local_2d8,&local_228);
          }
          local_358 = 2;
          FUN_140162c50(&local_2d8,uVar4);
          lStack_360 = CONCAT44(uStack_2cc,uStack_2d0);
          local_368 = local_2d8;
          if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2c8);
          }
          FUN_140041b80(&local_2c8,&local_368);
          local_358 = 0;
          if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          local_1a8 = &local_2c8;
          uVar4 = FUN_140e794b0();
          uStack_31c = local_22c;
          uStack_320 = local_230;
          if ((1 << ((byte)local_22c & 0x1f) & 0x46U) == 0) {
            local_328 = local_238;
          }
          else {
            FUN_1400419b0(&local_328,&local_238);
          }
          local_358 = 4;
          FUN_140162c50(&local_328,uVar4);
          lStack_360 = CONCAT44(uStack_31c,uStack_320);
          local_368 = local_328;
          if ((1 << ((byte)_local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_2b8);
          }
          FUN_140041b80(local_2b8,&local_368);
          local_358 = 0;
          if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_328);
          }
          local_1a0 = local_2b8;
          local_368 = _DAT_141dd2878;
          lStack_360 = uRam0000000141dd2880;
          if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          FUN_140041b80(&local_2a8,&local_368);
          local_198 = &local_2a8;
          uStack_1dc = 0xf;
          local_1e8 = (undefined1 *)0x10000000000012d;
          lStack_360 = CONCAT44(0xf,uStack_1e0);
          local_368 = 0x10000000000012d;
          if ((1 << (local_298[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_298);
          }
          FUN_140041b80(local_298,&local_368);
          ppuVar18 = &local_1a8;
          ppuVar14 = (undefined8 **)CONCAT44(uVar15,DAT_141a0a7c8);
          local_190 = local_298;
          uVar4 = FUN_140e634e0(local_res8,local_res10,&local_350,4,ppuVar14,ppuVar18);
          iVar2 = FUN_140e63cb0(local_d8,&local_res8,&local_res10,uVar4);
          if (0 < iVar2) {
            do {
              local_2e8 = 0x27e;
              uStack_1ec = 0xf;
              local_1f8 = (longlong *)0x1000001000000cf;
              lStack_360 = CONCAT44(0xf,uStack_1f0);
              local_368 = 0x1000001000000cf;
              if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1b8);
              }
              FUN_140041b80(&local_1b8,&local_368);
              FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1b8);
              local_2e8 = 0x27f;
              uVar4 = FUN_140e78f00(4);
              if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_248);
              }
              local_23c = 0;
              local_248 = uVar4;
              FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_248);
              local_2e8 = 0x280;
              uVar4 = FUN_140e794b0();
              if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_258);
              }
              local_24c = 0;
              local_258 = uVar4;
              FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_258);
              local_2e8 = 0x281;
              local_30c = 6;
              local_318 = local_res8;
              ppuVar18 = (undefined8 **)((ulonglong)ppuVar18 & 0xffffffffffffff00);
              ppuVar14 = (undefined8 **)((ulonglong)ppuVar14 & 0xffffffffffffff00);
              FUN_140e87440(&local_318,DAT_141a0f7f8,0x80000000,&local_138,ppuVar14,ppuVar18);
              if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_318);
              }
              lStack_360 = CONCAT44(uStack_12c,uStack_130);
              local_368 = local_138;
              if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_208);
              }
              FUN_140041b80(&local_208,&local_368);
              FUN_140e86fa0(local_res8,DAT_141a0f938,0x80000000,&local_208);
              cVar1 = FUN_140e643f0(local_d8,&local_res8,&local_res10);
            } while (cVar1 != '\0');
            lVar10 = local_1c8;
          }
          FUN_140e63970(local_d8,&local_res8,&local_res10);
          if (local_c8 != 0) {
            FUN_140e4cd60();
          }
        }
      } while( true );
    }
  }
LAB_1403d48ca:
  local_2e8 = 0x287;
  if ((1 << ((byte)local_344 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_350);
  }
  local_350 = 0;
  local_348 = 0;
  local_344 = 5;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
  FUN_140e87440(uVar4,DAT_141a0a848,0x80000000,&local_308,(ulonglong)ppuVar14 & 0xffffffffffffff00,
                (ulonglong)ppuVar18 & 0xffffffffffffff00);
  lStack_360 = CONCAT44(uStack_2fc,uStack_300);
  local_368 = local_308;
  if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  FUN_140041b80(&local_2c8,&local_368);
  local_1a8 = &local_2c8;
  local_368 = _DAT_141dc6550;
  lStack_360 = uRam0000000141dc6558;
  if ((1 << (local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2b8);
  }
  FUN_140041b80(local_2b8,&local_368);
  local_1a0 = local_2b8;
  local_368 = _DAT_1419e47d0;
  lStack_360 = lRam00000001419e47d8;
  if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  FUN_140041b80(&local_2a8,&local_368);
  local_198 = &local_2a8;
  plVar6 = (longlong *)gml_Script_arc(local_res8,local_res10,&local_350,3,&local_1a8);
  if (plVar6 != &local_268) {
    local_368 = *plVar6;
    lStack_360 = plVar6[1];
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    FUN_140041b80(&local_268,&local_368);
  }
  FUN_140e87930(uVar4,DAT_141a0a848,0x80000000,&local_268);
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_344 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_350);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_340);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  _eh_vector_destructor_iterator_(&local_2c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_2f8;
  return param_3;
LAB_1403d48c0:
  param_3 = local_res18;
  goto LAB_1403d48ca;
}

