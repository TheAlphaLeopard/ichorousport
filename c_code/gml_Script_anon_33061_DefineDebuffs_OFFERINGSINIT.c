// gml_Script_anon_33061_DefineDebuffs_OFFERINGSINIT @ 0x1403f2dc0

undefined8 *
gml_Script_anon_33061_DefineDebuffs_OFFERINGSINIT
          (longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  longlong *local_res8;
  longlong *local_res10;
  undefined8 *local_res18;
  undefined4 uVar15;
  ulonglong uVar14;
  undefined4 **ppuVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 local_338;
  undefined4 local_330;
  undefined4 local_32c;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_31c;
  longlong local_318;
  undefined4 local_310;
  undefined4 local_30c;
  undefined8 local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8 [4];
  undefined4 local_2e8 [4];
  undefined4 local_2d8 [4];
  undefined4 local_2c8 [4];
  undefined8 local_2b8;
  char *local_2b0;
  undefined4 local_2a8;
  longlong local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 *local_290;
  undefined4 *local_288;
  undefined4 *local_280;
  undefined4 *local_278;
  longlong local_270;
  undefined4 local_268;
  undefined4 local_264;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  longlong local_228;
  undefined4 local_220;
  uint local_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  longlong local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  longlong *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong local_1a8;
  undefined4 local_1a0;
  uint local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  longlong *local_128;
  undefined4 local_11c;
  longlong *local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  longlong *local_f8;
  undefined4 local_ec;
  longlong *local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined4 local_bc;
  longlong *local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 local_88 [16];
  longlong local_78;
  
  uVar9 = 0;
  uVar18 = 0;
  local_2b0 = "gml_Script_anon@31698@DefineDebuffs@OFFERINGSINIT";
  local_2b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2b8;
  local_2a8 = 0x521;
  uVar15 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_2f8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_18c = 0xffffff;
  local_198 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  uStack_2fc = 0xffffff;
  local_308 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  uStack_24c = 0xffffff;
  local_258 = 0;
  local_30c = 0xffffff;
  local_318 = 0;
  uVar11 = 0xffffff;
  local_21c = 0xffffff;
  lVar12 = 0;
  local_228 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_32c = 0;
  local_338 = 0;
  local_31c = 0;
  local_328 = 0;
  local_22c = 0;
  local_238 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2a8 = 0x523;
  uStack_1ac = 0xf;
  local_1b8 = (longlong *)0x10000000000009d;
  local_d8 = 0x10000000000009d;
  uStack_d0 = uStack_1b0;
  uStack_cc = 0xf;
  if ((1 << ((byte)local_2d8[3] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2d8);
  }
  FUN_140041b80(local_2d8,&local_d8);
  local_280 = local_2d8;
  ppuVar16 = &local_280;
  plVar7 = (longlong *)CONCAT44(uVar15,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_338,1,plVar7,ppuVar16,uVar18);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_2a8 = 0x523;
  }
  else {
    local_2a8 = 0x525;
    local_294 = 0xf;
    local_2a0 = 0x10000000000009d;
    iVar2 = FUN_140e63cb0(local_88,&local_res8,&local_res10,&local_2a0);
    if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a0);
    }
    if (0 < iVar2) {
      do {
        local_2a8 = 0x527;
        local_dc = 6;
        local_e8 = local_res8;
        ppuVar16 = (undefined4 **)((ulonglong)ppuVar16 & 0xffffffffffffff00);
        plVar7 = (longlong *)((ulonglong)plVar7 & 0xffffffffffffff00);
        FUN_140e87440(&local_e8,DAT_141a1f580,0x80000000,&local_198,plVar7,ppuVar16);
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        local_8c = 0xf;
        local_98 = 0x1000000000000ee;
        iVar2 = FUN_140e851f0(&local_198,&local_98,DAT_141955260,0);
        if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        if (iVar2 == 0) {
          local_2a8 = 0x527;
        }
        else {
          local_2a8 = 0x529;
          if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_338);
          }
          local_338 = 0;
          local_330 = 0;
          local_32c = 5;
          local_bc = 6;
          local_c8 = local_res8;
          uVar14 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
          uVar8 = (ulonglong)plVar7 & 0xffffffffffffff00;
          FUN_140e87440(&local_c8,DAT_1419fe0e8,0x80000000,&local_158,uVar8,uVar14);
          if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c8);
          }
          local_ac = 6;
          local_b8 = local_res8;
          uVar8 = uVar8 & 0xffffffffffffff00;
          FUN_140e87440(&local_b8,DAT_1419fe158,0x80000000,&local_188,uVar8,
                        uVar14 & 0xffffffffffffff00);
          uVar15 = (undefined4)(uVar8 >> 0x20);
          if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_b8);
          }
          local_348 = (undefined4)local_158;
          uStack_344 = local_158._4_4_;
          uStack_340 = uStack_150;
          uStack_33c = uStack_14c;
          if ((1 << ((byte)local_2f8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_2f8);
          }
          FUN_140041b80(local_2f8,&local_348);
          local_290 = local_2f8;
          local_348 = (undefined4)local_188;
          uStack_344 = local_188._4_4_;
          uStack_340 = uStack_180;
          uStack_33c = uStack_17c;
          if ((1 << ((byte)local_2e8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_2e8);
          }
          FUN_140041b80(local_2e8,&local_348);
          local_288 = local_2e8;
          uStack_cc = 0xf;
          local_d8 = 0x100000000000091;
          local_348 = 0x91;
          uStack_344 = 0x1000000;
          uStack_340 = uStack_d0;
          uStack_33c = 0xf;
          if ((1 << ((byte)local_2d8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_2d8);
          }
          FUN_140041b80(local_2d8,&local_348);
          local_280 = local_2d8;
          ppuVar16 = &local_290;
          uVar8 = CONCAT44(uVar15,DAT_141a124c8);
          puVar5 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_338,3,uVar8,ppuVar16);
          if (puVar5 != &local_248) {
            local_348 = *(undefined4 *)puVar5;
            uStack_344 = *(undefined4 *)((longlong)puVar5 + 4);
            uStack_340 = *(undefined4 *)(puVar5 + 1);
            uStack_33c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_248);
            }
            FUN_140041b80(&local_248,&local_348);
          }
          local_2a8 = 0x52a;
          cVar1 = FUN_140e491e0(&local_248);
          if (cVar1 != '\0') {
            uVar14 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
            uVar8 = uVar8 & 0xffffffffffffff00;
            FUN_140e87440(&local_248,DAT_141a1f440,0x80000000,&local_178,uVar8,uVar14);
            local_9c = 6;
            local_a8 = local_res8;
            ppuVar16 = (undefined4 **)(uVar14 & 0xffffffffffffff00);
            uVar8 = uVar8 & 0xffffffffffffff00;
            FUN_140e87440(&local_a8,DAT_141a0a828,0x80000000,&local_308,uVar8,ppuVar16);
            if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_a8);
            }
            iVar2 = FUN_140e851f0(&local_178,&local_308,DAT_141955260,0);
            if (iVar2 == 0) {
              local_2a8 = 0x52c;
              puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f170);
              local_13c = 0xf;
              local_148 = 0x1000000000000ee;
              ppuVar16 = (undefined4 **)((ulonglong)ppuVar16 & 0xffffffffffffff00);
              plVar7 = (longlong *)(uVar8 & 0xffffffffffffff00);
              FUN_140e87440(&local_148,DAT_141a0a7d8,0x80000000,&local_1d8,plVar7,ppuVar16);
              if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_148);
              }
              FUN_140e609c0(local_res8);
              uStack_20c = local_1cc;
              uStack_210 = local_1d0;
              if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
                local_218 = local_1d8;
              }
              else {
                FUN_1400419b0(&local_218,&local_1d8);
              }
              local_12c = 0;
              local_138 = 0x3fe8000000000000;
              FUN_140042560(&local_218,&local_138);
              if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_138);
              }
              if (&local_218 != puVar5) {
                local_348 = (undefined4)local_218;
                uStack_344 = local_218._4_4_;
                uStack_340 = uStack_210;
                uStack_33c = uStack_20c;
                if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar5);
                }
                FUN_140041b80(puVar5,&local_348);
              }
              uVar10 = uVar9;
              if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_218);
              }
              FUN_140e60910(1);
              local_2a8 = 0x52d;
              puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f170);
              if (puVar5 != &local_1e8) {
                local_348 = *(undefined4 *)puVar5;
                uStack_344 = *(undefined4 *)((longlong)puVar5 + 4);
                uStack_340 = *(undefined4 *)(puVar5 + 1);
                uStack_33c = *(undefined4 *)((longlong)puVar5 + 0xc);
                if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1e8);
                }
                FUN_140041b80(&local_1e8,&local_348);
              }
              FUN_140e87930(&local_248,DAT_1419f5e18,0x80000000,&local_1e8,plVar7,ppuVar16,uVar10);
              goto LAB_1403f40a2;
            }
          }
          local_2a8 = 0x532;
          if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_338);
          }
          local_338 = 0;
          local_330 = 0;
          local_32c = 5;
          if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_328);
          }
          local_328 = 0;
          local_320 = 0;
          local_31c = 5;
          if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          local_238 = 0;
          local_230 = 0;
          local_22c = 5;
          uVar4 = (**(code **)(*local_res10 + 8))(local_res10,DAT_1419f5948);
          uVar14 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
          uVar8 = uVar8 & 0xffffffffffffff00;
          FUN_140e87440(uVar4,DAT_1419f61b8,0x80000000,&local_258,uVar8,uVar14);
          local_11c = 6;
          local_128 = local_res8;
          uVar8 = uVar8 & 0xffffffffffffff00;
          FUN_140e87440(&local_128,DAT_141a0a828,0x80000000,&local_308,uVar8,
                        uVar14 & 0xffffffffffffff00);
          uVar15 = (undefined4)(uVar8 >> 0x20);
          if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          local_348 = (undefined4)local_308;
          uStack_344 = local_308._4_4_;
          uStack_340 = uStack_300;
          uStack_33c = uStack_2fc;
          if ((1 << ((byte)local_2f8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_2f8);
          }
          FUN_140041b80(local_2f8,&local_348);
          local_290 = local_2f8;
          local_348 = (undefined4)local_308;
          uStack_344 = local_308._4_4_;
          uStack_340 = uStack_300;
          uStack_33c = uStack_2fc;
          if ((1 << ((byte)local_2e8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_2e8);
          }
          FUN_140041b80(local_2e8,&local_348);
          local_288 = local_2e8;
          local_348 = (undefined4)local_258;
          uStack_344 = local_258._4_4_;
          uStack_340 = uStack_250;
          uStack_33c = uStack_24c;
          if ((1 << ((byte)local_2d8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_2d8);
          }
          FUN_140041b80(local_2d8,&local_348);
          local_280 = local_2d8;
          uVar4 = CONCAT44(uVar15,DAT_1419fcb18);
          puVar6 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_238,1,uVar4,&local_288)
          ;
          uVar15 = (undefined4)((ulonglong)uVar4 >> 0x20);
          if (puVar6 != local_2c8) {
            local_348 = *puVar6;
            uStack_344 = puVar6[1];
            uStack_340 = puVar6[2];
            uStack_33c = puVar6[3];
            if ((1 << ((byte)local_2c8[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_2c8);
            }
            FUN_140041b80(local_2c8,&local_348);
          }
          local_278 = local_2c8;
          uVar4 = CONCAT44(uVar15,DAT_141a01138);
          plVar7 = (longlong *)FUN_140e634e0(local_res8,local_res10,&local_328,2,uVar4,&local_280);
          uVar15 = (undefined4)((ulonglong)uVar4 >> 0x20);
          if (plVar7 != &local_228) {
            local_348 = (undefined4)*plVar7;
            uStack_344 = *(undefined4 *)((longlong)plVar7 + 4);
            uStack_340 = (undefined4)plVar7[1];
            uStack_33c = *(undefined4 *)((longlong)plVar7 + 0xc);
            if ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
            FUN_140041b80(&local_228,&local_348);
            lVar12 = local_228;
            uVar11 = local_21c;
          }
          if ((uVar11 & 0xffffff) == 3) {
            bVar13 = lVar12 == 0;
          }
          else {
            bVar13 = (uVar11 & 0xffffff) == 5;
          }
          if (bVar13) {
            FUN_140e85f80(local_res8,DAT_1419fd2a8,0x80000000,&local_318);
            local_294 = local_30c;
            local_298 = local_310;
            if ((1 << ((byte)local_30c & 0x1f) & 0x46U) == 0) {
              local_2a0 = local_318;
            }
            else {
              FUN_1400419b0(&local_2a0,&local_318);
            }
            plVar7 = &local_2a0;
            uVar9 = uVar9 | 9;
          }
          else {
            local_1a0 = local_220;
            local_19c = uVar11;
            if ((1 << ((byte)uVar11 & 0x1f) & 0x46U) == 0) {
              local_1a8 = lVar12;
            }
            else {
              FUN_1400419b0(&local_1a8,&local_228);
            }
            plVar7 = &local_1a8;
            uVar9 = uVar9 | 2;
          }
          ppuVar16 = &local_290;
          uVar10 = uVar9;
          uVar4 = FUN_140e634e0(local_res8,local_res10,&local_338,1,CONCAT44(uVar15,DAT_1419fcb18),
                                ppuVar16,uVar9);
          FUN_140e98ef0(local_res8,local_res10,&local_258,uVar4,plVar7);
          if (((uVar9 & 2) != 0) &&
             (uVar9 = uVar9 & 0xfffffffd, uVar10 = uVar9,
             (1 << ((byte)local_19c & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_1a8);
          }
          if (((uVar9 & 1) != 0) &&
             (uVar9 = uVar9 & 0xfffffffe, uVar10 = uVar9,
             (1 << ((byte)local_294 & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_2a0);
          }
          local_2a8 = 0x533;
          if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_338);
          }
          local_338 = 0;
          local_330 = 0;
          local_32c = 5;
          if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_328);
          }
          local_328 = 0;
          local_320 = 0;
          local_31c = 5;
          uVar4 = (**(code **)(*local_res10 + 8))(local_res10,DAT_1419f5948);
          uVar14 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
          uVar8 = (ulonglong)plVar7 & 0xffffffffffffff00;
          FUN_140e87440(uVar4,DAT_1419f61b8,0x80000000,&local_258,uVar8,uVar14,uVar10);
          local_10c = 6;
          local_118 = local_res8;
          uVar8 = uVar8 & 0xffffffffffffff00;
          FUN_140e87440(&local_118,DAT_141a0a828,0x80000000,&local_308,uVar8,
                        uVar14 & 0xffffffffffffff00);
          uVar15 = (undefined4)(uVar8 >> 0x20);
          if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          local_348 = (undefined4)local_308;
          uStack_344 = local_308._4_4_;
          uStack_340 = uStack_300;
          uStack_33c = uStack_2fc;
          if ((1 << ((byte)local_2f8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_2f8);
          }
          FUN_140041b80(local_2f8,&local_348);
          local_290 = local_2f8;
          local_348 = (undefined4)local_258;
          uStack_344 = local_258._4_4_;
          uStack_340 = uStack_250;
          uStack_33c = uStack_24c;
          if ((1 << ((byte)local_2e8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_2e8);
          }
          FUN_140041b80(local_2e8,&local_348);
          local_288 = local_2e8;
          uVar4 = CONCAT44(uVar15,DAT_1419fcb18);
          puVar6 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_328,1,uVar4,&local_290)
          ;
          uVar15 = (undefined4)((ulonglong)uVar4 >> 0x20);
          if (puVar6 != local_2d8) {
            local_348 = *puVar6;
            uStack_344 = puVar6[1];
            uStack_340 = puVar6[2];
            uStack_33c = puVar6[3];
            if ((1 << ((byte)local_2d8[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_2d8);
            }
            FUN_140041b80(local_2d8,&local_348);
          }
          local_280 = local_2d8;
          plVar7 = (longlong *)CONCAT44(uVar15,DAT_141a01138);
          ppuVar16 = &local_288;
          puVar5 = (undefined8 *)
                   FUN_140e634e0(local_res8,local_res10,&local_338,2,plVar7,&local_288);
          if (puVar5 != &local_1f8) {
            local_348 = *(undefined4 *)puVar5;
            uStack_344 = *(undefined4 *)((longlong)puVar5 + 4);
            uStack_340 = *(undefined4 *)(puVar5 + 1);
            uStack_33c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1f8);
            }
            FUN_140041b80(&local_1f8,&local_348);
          }
          local_2a8 = 0x534;
          if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          local_1fc = 0;
          local_208 = 0x401c000000000000;
          local_2a8 = 0x536;
          FUN_140e85f80(local_res8,DAT_1419fd2a8,0x80000000,&local_318);
          local_264 = local_30c;
          local_268 = local_310;
          if ((1 << ((byte)local_30c & 0x1f) & 0x46U) == 0) {
            local_270 = local_318;
          }
          else {
            FUN_1400419b0(&local_270,&local_318);
          }
          FUN_1400462a0(&local_270,&local_1f8);
          local_1bc = local_264;
          local_1c0 = local_268;
          if ((1 << ((byte)local_264 & 0x1f) & 0x46U) == 0) {
            local_1c8 = local_270;
          }
          else {
            FUN_1400419b0(&local_1c8,&local_270);
          }
          uVar10 = uVar9 | 0x30;
          local_fc = 0;
          local_108 = 0x408f400000000000;
          FUN_140046500(&local_1c8,&local_108);
          if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          iVar2 = FUN_140e851f0(&local_1c8,&local_208,DAT_141955260,1,plVar7,ppuVar16,uVar10);
          if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_270);
          }
          if (0 < iVar2) {
            local_2a8 = 0x538;
            if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_338);
            }
            local_338 = 0;
            local_330 = 0;
            local_32c = 5;
            uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1edd0);
            uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
            uVar14 = (ulonglong)plVar7 & 0xffffffffffffff00;
            FUN_140e87440(uVar3,DAT_1419f5c78,0x80000000,&local_168,uVar14,uVar17);
            local_ec = 6;
            local_f8 = local_res8;
            FUN_140e87440(&local_f8,DAT_141a0a828,0x80000000,&local_308,uVar14 & 0xffffffffffffff00,
                          uVar17 & 0xffffffffffffff00);
            if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_f8);
            }
            local_348 = (undefined4)local_168;
            uStack_344 = local_168._4_4_;
            uStack_340 = uStack_160;
            uStack_33c = uStack_15c;
            if ((1 << ((byte)local_2f8[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_2f8);
            }
            FUN_140041b80(local_2f8,&local_348);
            local_290 = local_2f8;
            local_348 = (undefined4)local_308;
            uStack_344 = local_308._4_4_;
            uStack_340 = uStack_300;
            uStack_33c = uStack_2fc;
            if ((1 << ((byte)local_2e8[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_2e8);
            }
            FUN_140041b80(local_2e8,&local_348);
            local_288 = local_2e8;
            ppuVar16 = &local_290;
            FUN_140e63610(local_res8,local_res10,&local_338,2,uVar8,ppuVar16);
            local_2a8 = 0x53a;
            if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_338);
            }
            local_338 = 0;
            local_330 = 0;
            local_32c = 5;
            uVar4 = (**(code **)(*local_res10 + 8))(local_res10,DAT_1419f5948);
            uVar14 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
            uVar8 = uVar8 & 0xffffffffffffff00;
            FUN_140e87440(uVar4,DAT_1419f61b8,0x80000000,&local_258,uVar8,uVar14);
            uStack_1ac = 6;
            local_1b8 = local_res8;
            uVar8 = uVar8 & 0xffffffffffffff00;
            FUN_140e87440(&local_1b8,DAT_141a0a828,0x80000000,&local_308,uVar8,
                          uVar14 & 0xffffffffffffff00);
            uVar15 = (undefined4)(uVar8 >> 0x20);
            if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b8);
            }
            local_348 = (undefined4)local_308;
            uStack_344 = local_308._4_4_;
            uStack_340 = uStack_300;
            uStack_33c = uStack_2fc;
            if ((1 << ((byte)local_2f8[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_2f8);
            }
            FUN_140041b80(local_2f8,&local_348);
            local_290 = local_2f8;
            FUN_140e85f80(local_res8,DAT_1419fd2a8,0x80000000,&local_318);
            ppuVar16 = &local_290;
            uVar4 = FUN_140e634e0(local_res8,local_res10,&local_338,1,CONCAT44(uVar15,DAT_1419fcb18)
                                  ,ppuVar16);
            plVar7 = &local_318;
            FUN_140e98ef0(local_res8,local_res10,&local_258,uVar4,plVar7);
          }
        }
LAB_1403f40a2:
        cVar1 = FUN_140e643f0(local_88,&local_res8,&local_res10);
      } while (cVar1 != '\0');
      param_3 = local_res18;
    }
    FUN_140e63970(local_88,&local_res8,&local_res10);
    if (local_78 != 0) {
      FUN_140e4cd60();
      local_78 = 0;
    }
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  _eh_vector_destructor_iterator_(local_2f8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_2b8;
  return param_3;
}

