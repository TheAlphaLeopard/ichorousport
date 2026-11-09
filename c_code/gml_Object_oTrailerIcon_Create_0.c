// gml_Object_oTrailerIcon_Create_0 @ 0x140dd00c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oTrailerIcon_Create_0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *local_res8;
  longlong *local_res10;
  undefined4 local_res18;
  undefined8 *local_res20;
  code *pcVar14;
  ulonglong in_stack_fffffffffffffce0;
  undefined8 **ppuVar15;
  ulonglong uVar16;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  longlong *local_308;
  uint local_2fc;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  ulonglong local_2e8;
  uint local_2dc;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  char *local_260;
  undefined4 local_258;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  byte local_22c;
  undefined8 local_228;
  byte local_21c;
  undefined4 local_218 [3];
  byte local_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined1 local_1e8 [16];
  undefined8 local_1d8 [2];
  undefined1 local_1c8 [16];
  undefined4 local_1b8 [4];
  undefined4 local_1a8 [4];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  ulonglong local_168;
  uint local_15c;
  longlong *local_158;
  undefined4 local_14c;
  longlong *local_148;
  undefined4 local_13c;
  longlong *local_138;
  undefined4 local_12c;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined4 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined1 *local_100;
  undefined8 *local_f8;
  undefined1 *local_f0;
  undefined4 *local_e8;
  undefined4 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  longlong local_78;
  
  local_res18 = 0;
  local_260 = "gml_Object_oToxicSmokeEmitter_Step_0";
  local_258 = 0;
  local_268 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_268;
  pcVar14 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_238,0x10,0xd,FUN_1400424d0,FUN_140041b30);
  local_2dc = 0xffffff;
  local_2e8 = 0;
  uStack_27c = 0xffffff;
  local_288 = 0;
  uStack_28c = 0xffffff;
  local_298 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_b8 = uVar4;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a01ba8);
  local_2ec = 0xffffff;
  local_2f8 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  local_258 = 1;
  local_res20 = puVar5;
  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f20a8);
  local_2fc = 0;
  local_308 = (longlong *)0x4000000000000000;
  uVar2 = FUN_140e851f0(uVar6,&local_308,DAT_141955260,1);
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  if (uVar2 < 0x80000000) {
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a01aa8);
    local_2fc = 0;
    local_308 = (longlong *)0x0;
    iVar3 = FUN_140e851f0(uVar6,&local_308,DAT_141955260,1);
    if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    if (0 < iVar3) {
      local_258 = 3;
      if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2e8);
      }
      local_2dc = 0;
      local_2e8 = 0x4044000000000000;
      local_258 = 5;
      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      local_2f8 = 0;
      local_2f0 = 0;
      local_2ec = 5;
      local_2fc = 6;
      local_308 = local_res8;
      in_stack_fffffffffffffce0 = in_stack_fffffffffffffce0 & 0xffffffffffffff00;
      uVar13 = (ulonglong)pcVar14 & 0xffffffffffffff00;
      FUN_140e87440(&local_308,DAT_1419fe0e8,0x80000000,&local_288,uVar13,in_stack_fffffffffffffce0)
      ;
      if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_308);
      }
      local_2fc = 6;
      local_308 = local_res8;
      ppuVar15 = (undefined8 **)(in_stack_fffffffffffffce0 & 0xffffffffffffff00);
      FUN_140e87440(&local_308,DAT_1419fe158,0x80000000,&local_298,uVar13 & 0xffffffffffffff00,
                    ppuVar15);
      if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_308);
      }
      local_278 = local_288;
      uStack_270 = uStack_280;
      uStack_26c = uStack_27c;
      if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_278);
      local_128 = &local_238;
      local_278 = local_298;
      uStack_270 = uStack_290;
      uStack_26c = uStack_28c;
      if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_278);
      local_120 = &local_228;
      uStack_2cc = 0xf;
      local_2d8 = (longlong *)0x100000000000135;
      local_278 = 0x100000000000135;
      uStack_270 = uStack_2d0;
      uStack_26c = 0xf;
      if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_218);
      }
      FUN_140041b80(local_218,&local_278);
      local_118 = local_218;
      local_208 = FUN_140e79480(0);
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_1fc = 0;
      local_110 = &local_208;
      local_1f8 = FUN_140e794b0(0x47ae147b,0x3fa47ae147ae147b);
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1ec = 0;
      local_108 = &local_1f8;
      local_278 = CONCAT44(uRam00000001419ee414,_DAT_1419ee410);
      uStack_270 = uRam00000001419ee418;
      uStack_26c = uRam00000001419ee41c;
      if ((1 << (local_1e8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1e8);
      }
      FUN_140041b80(local_1e8,&local_278);
      local_100 = local_1e8;
      local_278 = CONCAT44(uRam0000000141ddbbbc,_DAT_141ddbbb8);
      uStack_270 = uRam0000000141ddbbc0;
      uStack_26c = DAT_141ddbbc4;
      if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1d8);
      }
      FUN_140041b80(local_1d8,&local_278);
      local_f8 = local_1d8;
      pcVar14 = (code *)&local_128;
      uVar6 = FUN_140265f80(local_res8,local_res10,&local_2f8,7,pcVar14);
      iVar3 = FUN_140e63cb0(local_88,&local_res8,&local_res10,uVar6);
      if (0 < iVar3) {
        do {
          do {
            do {
              do {
                local_258 = 9;
                puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a08578);
                local_14c = 6;
                local_158 = local_res8;
                uVar16 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
                uVar13 = (ulonglong)pcVar14 & 0xffffffffffffff00;
                FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_288,uVar13,uVar16);
                if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_158);
                }
                FUN_140e609c0(local_res8);
                uVar12 = local_2e8;
                if ((local_2dc & 0xffffff) != 0) {
                  uVar12 = FUN_140e4b060(&local_2e8);
                }
                uVar10 = (undefined4)uVar12;
                local_15c = 0;
                local_168 = uVar12 ^ 0x8000000000000000;
                uVar12 = local_2e8;
                if ((local_2dc & 0xffffff) != 0) {
                  uVar12 = FUN_140e4b060(&local_2e8);
                  uVar10 = (undefined4)local_168;
                }
                if ((local_15c & 0xffffff) != 0) {
                  uVar10 = FUN_140e4b060(uVar10);
                }
                uVar4 = FUN_140e794b0(uVar10,uVar12);
                uStack_23c = uStack_27c;
                uStack_240 = uStack_280;
                if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) == 0) {
                  local_248 = local_288;
                }
                else {
                  FUN_1400419b0(&local_248,&local_288);
                }
                local_res18 = 1;
                FUN_140162c50(&local_248,uVar4);
                if (&local_248 != puVar5) {
                  local_318 = (undefined4)local_248;
                  uStack_314 = local_248._4_4_;
                  uStack_310 = uStack_240;
                  uStack_30c = uStack_23c;
                  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(puVar5);
                  }
                  FUN_140041b80(puVar5,&local_318);
                }
                local_res18 = 0;
                if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_248);
                }
                if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_168);
                }
                FUN_140e60910(1);
                local_258 = 10;
                puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a084b8);
                local_13c = 6;
                local_148 = local_res8;
                uVar13 = uVar13 & 0xffffffffffffff00;
                FUN_140e87440(&local_148,DAT_1419fe158,0x80000000,&local_298,uVar13,
                              uVar16 & 0xffffffffffffff00);
                uVar10 = (undefined4)(uVar13 >> 0x20);
                if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_148);
                }
                FUN_140e609c0(local_res8);
                if ((local_2dc & 0xffffff) == 0) {
                  uVar13 = local_2e8;
                }
                else {
                  uVar13 = FUN_140e4b060(&local_2e8);
                }
                uVar11 = (undefined4)uVar13;
                local_2fc = 0;
                local_308 = (longlong *)(uVar13 ^ 0x8000000000000000);
                uVar13 = local_2e8;
                if ((local_2dc & 0xffffff) != 0) {
                  uVar13 = FUN_140e4b060(&local_2e8);
                  uVar11 = SUB84(local_308,0);
                }
                if ((local_2fc & 0xffffff) != 0) {
                  uVar11 = FUN_140e4b060(uVar11);
                }
                uVar4 = FUN_140e794b0(uVar11,uVar13);
                uStack_2bc = uStack_28c;
                uStack_2c0 = uStack_290;
                if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) == 0) {
                  local_2c8 = local_298;
                }
                else {
                  FUN_1400419b0(&local_2c8,&local_298);
                }
                local_res18 = 2;
                FUN_140162c50(&local_2c8,uVar4);
                if (&local_2c8 != puVar5) {
                  local_318 = (undefined4)local_2c8;
                  uStack_314 = local_2c8._4_4_;
                  uStack_310 = uStack_2c0;
                  uStack_30c = uStack_2bc;
                  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(puVar5);
                  }
                  FUN_140041b80(puVar5,&local_318);
                }
                local_res18 = 0;
                if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2c8);
                }
                if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_308);
                }
                FUN_140e60910(1);
                if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2f8);
                }
                local_2f8 = 0;
                local_2f0 = 0;
                local_2ec = 5;
                puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a08578);
                puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a084b8);
                if (puVar5 != &local_238) {
                  local_318 = *(undefined4 *)puVar5;
                  uStack_314 = *(undefined4 *)((longlong)puVar5 + 4);
                  uStack_310 = *(undefined4 *)(puVar5 + 1);
                  uStack_30c = *(undefined4 *)((longlong)puVar5 + 0xc);
                  if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_238);
                  }
                  FUN_140041b80(&local_238,&local_318);
                }
                local_128 = &local_238;
                if (puVar7 != &local_228) {
                  local_318 = *(undefined4 *)puVar7;
                  uStack_314 = *(undefined4 *)((longlong)puVar7 + 4);
                  uStack_310 = *(undefined4 *)(puVar7 + 1);
                  uStack_30c = *(undefined4 *)((longlong)puVar7 + 0xc);
                  if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_228);
                  }
                  FUN_140041b80(&local_228,&local_318);
                }
                local_120 = &local_228;
                uStack_9c = 0xf;
                local_a8 = 0x100000000000149;
                local_318 = 0x149;
                uStack_314 = 0x1000000;
                uStack_310 = uStack_a0;
                uStack_30c = 0xf;
                if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_218);
                }
                FUN_140041b80(local_218,&local_318);
                local_118 = local_218;
                ppuVar15 = &local_128;
                pcVar14 = (code *)CONCAT44(uVar10,DAT_141a12628);
                uVar4 = FUN_140e634e0(local_res8,local_res10,&local_2f8,3,pcVar14,ppuVar15);
                cVar1 = FUN_140e491e0(uVar4);
              } while (cVar1 != '\0');
              if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2a8);
              }
              uVar10 = (undefined4)((ulonglong)pcVar14 >> 0x20);
              local_2a8 = 0;
              local_2a0 = 0;
              local_29c = 5;
              puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a08578);
              puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a084b8);
              if (puVar5 != &local_208) {
                local_318 = *(undefined4 *)puVar5;
                uStack_314 = *(undefined4 *)((longlong)puVar5 + 4);
                uStack_310 = *(undefined4 *)(puVar5 + 1);
                uStack_30c = *(undefined4 *)((longlong)puVar5 + 0xc);
                if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_208);
                }
                FUN_140041b80(&local_208,&local_318);
              }
              local_110 = &local_208;
              if (puVar7 != &local_1f8) {
                local_318 = *(undefined4 *)puVar7;
                uStack_314 = *(undefined4 *)((longlong)puVar7 + 4);
                uStack_310 = *(undefined4 *)(puVar7 + 1);
                uStack_30c = *(undefined4 *)((longlong)puVar7 + 0xc);
                if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1f8);
                }
                FUN_140041b80(&local_1f8,&local_318);
              }
              local_108 = &local_1f8;
              uStack_8c = 0xf;
              local_98 = 0x100000000000135;
              local_318 = 0x135;
              uStack_314 = 0x1000000;
              uStack_310 = uStack_90;
              uStack_30c = 0xf;
              if ((1 << (local_1e8[0xc] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1e8);
              }
              FUN_140041b80(local_1e8,&local_318);
              local_100 = local_1e8;
              ppuVar15 = &local_110;
              pcVar14 = (code *)CONCAT44(uVar10,DAT_141a10408);
              uVar4 = FUN_140e634e0(local_res8,local_res10,&local_2a8,3,pcVar14,ppuVar15);
              cVar1 = FUN_140e491e0(uVar4);
            } while (cVar1 != '\0');
            if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            local_2b8 = 0;
            local_2b0 = 0;
            local_2ac = 5;
            puVar8 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a08578);
            puVar9 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a084b8);
            local_12c = 6;
            local_138 = local_res8;
            uVar16 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
            uVar13 = (ulonglong)pcVar14 & 0xffffffffffffff00;
            FUN_140e87440(&local_138,DAT_1419fe0e8,0x80000000,&local_288,uVar13,uVar16);
            if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_138);
            }
            uStack_2cc = 6;
            local_2d8 = local_res8;
            uVar13 = uVar13 & 0xffffffffffffff00;
            FUN_140e87440(&local_2d8,DAT_1419fe158,0x80000000,&local_298,uVar13,
                          uVar16 & 0xffffffffffffff00);
            uVar10 = (undefined4)(uVar13 >> 0x20);
            if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2d8);
            }
            local_318 = (undefined4)local_288;
            uStack_314 = local_288._4_4_;
            uStack_310 = uStack_280;
            uStack_30c = uStack_27c;
            if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1d8);
            }
            FUN_140041b80(local_1d8,&local_318);
            local_f8 = local_1d8;
            local_318 = (undefined4)local_298;
            uStack_314 = local_298._4_4_;
            uStack_310 = uStack_290;
            uStack_30c = uStack_28c;
            if ((1 << (local_1c8[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1c8);
            }
            FUN_140041b80(local_1c8,&local_318);
            local_f0 = local_1c8;
            if (puVar8 != local_1b8) {
              local_318 = *puVar8;
              uStack_314 = puVar8[1];
              uStack_310 = puVar8[2];
              uStack_30c = puVar8[3];
              if ((1 << ((byte)local_1b8[3] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1b8);
              }
              FUN_140041b80(local_1b8,&local_318);
            }
            local_e8 = local_1b8;
            if (puVar9 != local_1a8) {
              local_318 = *puVar9;
              uStack_314 = puVar9[1];
              uStack_310 = puVar9[2];
              uStack_30c = puVar9[3];
              if ((1 << ((byte)local_1a8[3] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1a8);
              }
              FUN_140041b80(local_1a8,&local_318);
            }
            local_e0 = local_1a8;
            uStack_26c = 0xf;
            local_278 = 0x100000000000149;
            local_318 = 0x149;
            uStack_314 = 0x1000000;
            uStack_310 = uStack_270;
            uStack_30c = 0xf;
            if ((1 << (local_198[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_198);
            }
            FUN_140041b80(local_198,&local_318);
            local_d8 = local_198;
            local_318 = _DAT_1419df7c0;
            uStack_314 = uRam00000001419df7c4;
            uStack_310 = uRam00000001419df7c8;
            uStack_30c = uRam00000001419df7cc;
            if ((1 << (local_188[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_188);
            }
            FUN_140041b80(local_188,&local_318);
            local_d0 = local_188;
            local_318 = _DAT_1419df7c0;
            uStack_314 = uRam00000001419df7c4;
            uStack_310 = uRam00000001419df7c8;
            uStack_30c = uRam00000001419df7cc;
            if ((1 << (local_178[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_178);
            }
            FUN_140041b80(local_178,&local_318);
            local_c8 = local_178;
            ppuVar15 = &local_f8;
            pcVar14 = (code *)CONCAT44(uVar10,DAT_1419f60a8);
            uVar4 = FUN_140e634e0(local_res8,local_res10,&local_2b8,7,pcVar14,ppuVar15);
            cVar1 = FUN_140e491e0(uVar4);
          } while (cVar1 != '\0');
          local_258 = 0xe;
          puVar8 = (undefined4 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a1f0d0);
          puVar9 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
          FUN_140e609c0(local_res8);
          if (puVar8 != puVar9) {
            local_318 = *puVar8;
            uStack_314 = puVar8[1];
            uStack_310 = puVar8[2];
            uStack_30c = puVar8[3];
            if ((1 << ((byte)puVar9[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar9);
            }
            FUN_140041b80(puVar9,&local_318);
          }
          FUN_140e60910(1);
          cVar1 = FUN_140e643f0(local_88,&local_res8,&local_res10);
        } while (cVar1 != '\0');
        uVar4 = local_b8;
        puVar5 = local_res20;
      }
      FUN_140e63970(local_88,&local_res8,&local_res10);
      local_258 = 0x12;
      uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a01aa8);
      FUN_1400bdd80(uVar6);
      if (local_78 != 0) {
        FUN_140e4cd60();
      }
    }
  }
  uVar10 = (undefined4)((ulonglong)pcVar14 >> 0x20);
  local_258 = 0x15;
  uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f20a8);
  FUN_140e609c0(local_res8);
  FUN_1400460e0(uVar6,uVar4);
  FUN_140e60910(1);
  local_258 = 0x16;
  uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
  FUN_140e609c0(local_res8);
  FUN_1400460e0(uVar6,uVar4);
  FUN_140e60910(1);
  local_258 = 0x18;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
  local_318 = _DAT_141dc78b0;
  uStack_314 = uRam0000000141dc78b4;
  uStack_310 = uRam0000000141dc78b8;
  uStack_30c = uRam0000000141dc78bc;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  FUN_140041b80(&local_238,&local_318);
  local_128 = &local_238;
  uVar6 = CONCAT44(uVar10,DAT_141a0a0d8);
  puVar7 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_2f8,1,uVar6,&local_128);
  uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_2bc = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_2c0 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) == 0) {
    local_2c8 = *puVar7;
  }
  else {
    FUN_1400419b0(&local_2c8,puVar7);
  }
  local_res18 = 4;
  uStack_2cc = 7;
  local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,0xf);
  FUN_140042560(&local_2c8,&local_2d8);
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  uVar2 = FUN_140e851f0(uVar4,&local_2c8,DAT_141955260,1);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if (uVar2 < 0x80000000) {
    local_258 = 0x1a;
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_2a8 = 0;
    local_2a0 = 0;
    local_29c = 5;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_2b8 = 0;
    local_2b0 = 0;
    local_2ac = 5;
    puVar8 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_2d8,FUN_140dcff60,0);
    if (&local_2d8 != puVar5) {
      local_318 = (undefined4)local_2d8;
      uStack_314 = local_2d8._4_4_;
      uStack_310 = uStack_2d0;
      uStack_30c = uStack_2cc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_318);
    }
    FUN_140e60910(1);
    if (puVar5 != &local_228) {
      local_318 = *(undefined4 *)puVar5;
      uStack_314 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_310 = *(undefined4 *)(puVar5 + 1);
      uStack_30c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_318);
    }
    if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    local_120 = &local_228;
    if (puVar8 != local_218) {
      local_318 = *puVar8;
      uStack_314 = puVar8[1];
      uStack_310 = puVar8[2];
      uStack_30c = puVar8[3];
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_218);
      }
      FUN_140041b80(local_218,&local_318);
    }
    local_118 = local_218;
    local_318 = _DAT_141ddbbc8;
    uStack_314 = uRam0000000141ddbbcc;
    uStack_310 = uRam0000000141ddbbd0;
    uStack_30c = DAT_141ddbbd4;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_318);
    local_110 = &local_208;
    puVar5 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_2b8,2,CONCAT44(uVar10,DAT_1419fd6d8),
                           &local_120);
    if (puVar5 != &local_1f8) {
      local_318 = *(undefined4 *)puVar5;
      uStack_314 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_310 = *(undefined4 *)(puVar5 + 1);
      uStack_30c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140041b80(&local_1f8,&local_318);
    }
    local_108 = &local_1f8;
    gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
              (local_res8,local_res10,&local_2a8,2,&local_110);
    local_258 = 0x1b;
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  _eh_vector_destructor_iterator_(&local_238,0x10,0xd,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_268;
  return;
}

