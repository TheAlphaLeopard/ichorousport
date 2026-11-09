// gml_Script_anon_3357_DefineBossAttributes_BOSSMODSINIT @ 0x1402374b0

undefined8 *
gml_Script_anon_3357_DefineBossAttributes_BOSSMODSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined4 uVar6;
  ulonglong uVar5;
  undefined1 **ppuVar7;
  ulonglong uVar8;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined8 local_2d8;
  char *local_2d0;
  undefined4 local_2c8;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  longlong local_298;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  longlong *local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  longlong *local_118;
  undefined4 local_10c;
  longlong *local_108;
  undefined4 local_fc;
  longlong *local_f8;
  undefined4 local_ec;
  undefined4 local_e8 [3];
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  longlong local_78;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_res18 = 0;
  local_2d0 = "gml_Script_anon@1406@DefineBossAttributes@BOSSMODSINIT";
  local_2d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2d8;
  local_2c8 = 0x36;
  uVar6 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_228,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_22c = 0xffffff;
  local_238 = 0;
  uStack_1cc = 0xffffff;
  local_1d8 = 0;
  uStack_1dc = 0xffffff;
  local_1e8 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_2dc = 0;
  local_2e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2c8 = 0x38;
  uStack_1bc = 0xf;
  local_1c8 = 0x100000000000025;
  local_d8 = 0x100000000000025;
  uStack_d0 = uStack_1c0;
  uStack_cc = 0xf;
  if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_d8);
  ppuVar7 = &local_180;
  uVar5 = CONCAT44(uVar6,DAT_141a02ef8);
  local_180 = local_218;
  uVar3 = FUN_140e634e0(local_res8,local_res10,&local_2e8,1,uVar5,ppuVar7);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_2c8 = 0x38;
  }
  else {
    local_2c8 = 0x3a;
    uStack_2ac = 0xf;
    local_2b8 = 0x100000000000025;
    iVar2 = FUN_140e63cb0(local_88,&local_res8,&local_res10,&local_2b8);
    if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    if (0 < iVar2) {
      do {
        local_2c8 = 0x3c;
        uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f2b0);
        local_15c = 10;
        local_168 = 1;
        iVar2 = FUN_140e851f0(uVar3,&local_168,DAT_141955260,0);
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        if (iVar2 == 0) {
          local_2c8 = 0x49;
          if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2e8);
          }
          local_2e8 = 0;
          local_2e0 = 0;
          local_2dc = 5;
          local_bc = 6;
          local_c8 = local_res8;
          uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
          uVar5 = uVar5 & 0xffffffffffffff00;
          FUN_140e87440(&local_c8,DAT_1419fe0e8,0x80000000,&local_1d8,uVar5,uVar8);
          if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c8);
          }
          local_9c = 6;
          local_a8 = local_res8;
          uVar5 = uVar5 & 0xffffffffffffff00;
          FUN_140e87440(&local_a8,DAT_1419fe158,0x80000000,&local_1e8,uVar5,
                        uVar8 & 0xffffffffffffff00);
          uVar6 = (undefined4)(uVar5 >> 0x20);
          if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_a8);
          }
          local_2a8 = (undefined4)local_1d8;
          uStack_2a4 = local_1d8._4_4_;
          uStack_2a0 = uStack_1d0;
          uStack_29c = uStack_1cc;
          if ((1 << (local_228[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_228);
          }
          FUN_140041b80(local_228,&local_2a8);
          local_188 = local_228;
          local_2a8 = (undefined4)local_1e8;
          uStack_2a4 = local_1e8._4_4_;
          uStack_2a0 = uStack_1e0;
          uStack_29c = uStack_1dc;
          if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_218);
          }
          FUN_140041b80(local_218,&local_2a8);
          uStack_8c = 0xf;
          local_98 = 0x100000000000091;
          local_2a8 = 0x91;
          uStack_2a4 = 0x1000000;
          uStack_2a0 = uStack_90;
          uStack_29c = 0xf;
          local_180 = local_218;
          if ((1 << (local_208[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_208);
          }
          FUN_140041b80(local_208,&local_2a8);
          local_178 = local_208;
          ppuVar7 = &local_188;
          uVar5 = CONCAT44(uVar6,DAT_141a124c8);
          puVar4 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_2e8,3,uVar5,ppuVar7);
          if (puVar4 != &local_278) {
            local_2a8 = *(undefined4 *)puVar4;
            uStack_2a4 = *(undefined4 *)((longlong)puVar4 + 4);
            uStack_2a0 = *(undefined4 *)(puVar4 + 1);
            uStack_29c = *(undefined4 *)((longlong)puVar4 + 0xc);
            if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_278);
            }
            FUN_140041b80(&local_278,&local_2a8);
          }
          local_2c8 = 0x4a;
          cVar1 = FUN_140e491e0(&local_278);
          if (cVar1 == '\0') {
            local_2c8 = 0x54;
            if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2e8);
            }
            local_2e8 = 0;
            local_2e0 = 0;
            local_2dc = 5;
            local_10c = 6;
            local_118 = local_res8;
            uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
            uVar5 = uVar5 & 0xffffffffffffff00;
            FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_1d8,uVar5,uVar8);
            if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_118);
            }
            local_fc = 6;
            local_108 = local_res8;
            uVar8 = uVar8 & 0xffffffffffffff00;
            uVar5 = uVar5 & 0xffffffffffffff00;
            FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_1e8,uVar5,uVar8);
            if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_108);
            }
            local_ec = 6;
            local_f8 = local_res8;
            uVar5 = uVar5 & 0xffffffffffffff00;
            FUN_140e87440(&local_f8,DAT_141a02ee8,0x80000000,&local_258,uVar5,
                          uVar8 & 0xffffffffffffff00);
            uVar6 = (undefined4)(uVar5 >> 0x20);
            if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_f8);
            }
            local_2a8 = (undefined4)local_1d8;
            uStack_2a4 = local_1d8._4_4_;
            uStack_2a0 = uStack_1d0;
            uStack_29c = uStack_1cc;
            if ((1 << (local_228[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_228);
            }
            FUN_140041b80(local_228,&local_2a8);
            local_188 = local_228;
            local_2a8 = (undefined4)local_1e8;
            uStack_2a4 = local_1e8._4_4_;
            uStack_2a0 = uStack_1e0;
            uStack_29c = uStack_1dc;
            if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_218);
            }
            FUN_140041b80(local_218,&local_2a8);
            uStack_2ac = local_24c;
            uStack_2b0 = local_250;
            if ((1 << ((byte)local_24c & 0x1f) & 0x46U) == 0) {
              local_2b8 = local_258;
              local_180 = local_218;
            }
            else {
              local_180 = local_218;
              FUN_1400419b0(&local_2b8,&local_258);
            }
            local_res18 = 4;
            local_dc = 7;
            local_e8[0] = 5;
            FUN_1400462a0(&local_2b8,local_e8);
            if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_e8);
            }
            local_2a8 = (undefined4)local_2b8;
            uStack_2a4 = local_2b8._4_4_;
            uStack_2a0 = uStack_2b0;
            uStack_29c = uStack_2ac;
            if ((1 << (local_208[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_208);
            }
            FUN_140041b80(local_208,&local_2a8);
            local_res18 = 0;
            if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            local_178 = local_208;
            uStack_cc = 0xf;
            local_d8 = 0x100000000000091;
            local_2a8 = 0x91;
            uStack_2a4 = 0x1000000;
            uStack_2a0 = uStack_d0;
            uStack_29c = 0xf;
            if ((1 << (local_1f8[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1f8);
            }
            FUN_140041b80(local_1f8,&local_2a8);
            local_170 = local_1f8;
            ppuVar7 = &local_188;
            uVar5 = CONCAT44(uVar6,DAT_141a02e88);
            FUN_140e634e0(local_res8,local_res10,&local_2e8,4,uVar5,ppuVar7);
            iVar2 = FUN_140e63cb0(local_68,&local_res8,&local_res10);
            if (0 < iVar2) {
              do {
                local_2c8 = 0x56;
                puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a768);
                uStack_1bc = 6;
                local_1c8 = local_res10;
                ppuVar7 = (undefined1 **)((ulonglong)ppuVar7 & 0xffffffffffffff00);
                uVar5 = uVar5 & 0xffffffffffffff00;
                FUN_140e87440(&local_1c8,DAT_141a0a828,0x80000000,&local_238,uVar5,ppuVar7);
                if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1c8);
                }
                FUN_140e609c0(local_res8);
                if (&local_238 != puVar4) {
                  local_2a8 = (undefined4)local_238;
                  uStack_2a4 = local_238._4_4_;
                  uStack_2a0 = uStack_230;
                  uStack_29c = uStack_22c;
                  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(puVar4);
                  }
                  FUN_140041b80(puVar4,&local_2a8);
                }
                FUN_140e60910(1);
                cVar1 = FUN_140e643f0(local_68,&local_res8,&local_res10);
              } while (cVar1 != '\0');
            }
            FUN_140e63970(local_68,&local_res8,&local_res10);
            if (local_58 != 0) {
              FUN_140e4cd60();
            }
          }
          else {
            local_2c8 = 0x4c;
            uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
            uVar5 = uVar5 & 0xffffffffffffff00;
            FUN_140e87440(&local_278,DAT_141a0a768,0x80000000,&local_198,uVar5,uVar8);
            local_13c = 6;
            local_148 = local_res8;
            ppuVar7 = (undefined1 **)(uVar8 & 0xffffffffffffff00);
            uVar5 = uVar5 & 0xffffffffffffff00;
            FUN_140e87440(&local_148,DAT_141a0a828,0x80000000,&local_1a8,uVar5,ppuVar7);
            if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_148);
            }
            iVar2 = FUN_140e851f0(&local_198,&local_1a8,DAT_141955260,0);
            if (iVar2 == 0) {
              local_2c8 = 0x4e;
              puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f170);
              local_12c = 0xf;
              local_138 = 0x1000000000000ee;
              uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
              uVar5 = uVar5 & 0xffffffffffffff00;
              FUN_140e87440(&local_138,DAT_141a0a7d8,0x80000000,&local_248,uVar5,uVar8);
              if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_138);
              }
              ppuVar7 = (undefined1 **)(uVar8 & 0xffffffffffffff00);
              uVar5 = uVar5 & 0xffffffffffffff00;
              FUN_140e87440(&local_278,DAT_141a43ce8,0x80000000,&local_1b8,uVar5,ppuVar7);
              FUN_140e609c0(local_res8);
              local_27c = local_23c;
              local_280 = local_240;
              if ((1 << ((byte)local_23c & 0x1f) & 0x46U) == 0) {
                local_288 = local_248;
              }
              else {
                FUN_1400419b0(&local_288,&local_248);
              }
              local_res18 = 1;
              local_11c = 0;
              local_128 = 0x3feb333333333333;
              FUN_140042560(&local_288,&local_128);
              if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_128);
              }
              uStack_25c = local_27c;
              uStack_260 = local_280;
              if ((1 << ((byte)local_27c & 0x1f) & 0x46U) == 0) {
                local_268 = local_288;
              }
              else {
                FUN_1400419b0(&local_268,&local_288);
              }
              local_res18 = 3;
              FUN_140042560(&local_268,&local_1b8);
              if (&local_268 != puVar4) {
                local_2a8 = (undefined4)local_268;
                uStack_2a4 = local_268._4_4_;
                uStack_2a0 = uStack_260;
                uStack_29c = uStack_25c;
                if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar4);
                }
                FUN_140041b80(puVar4,&local_2a8);
              }
              local_res18 = 1;
              if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_268);
              }
              local_res18 = 0;
              if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_288);
              }
              FUN_140e60910(1);
            }
          }
        }
        else {
          local_2c8 = 0x3e;
          local_14c = 0xf;
          local_158 = 0x100000000000091;
          iVar2 = FUN_140e63cb0(&local_2a8,&local_res8,&local_res10);
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          if (0 < iVar2) {
            do {
              local_2c8 = 0x40;
              uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a768);
              local_ac = 6;
              local_b8 = local_res10;
              ppuVar7 = (undefined1 **)((ulonglong)ppuVar7 & 0xffffffffffffff00);
              uVar5 = uVar5 & 0xffffffffffffff00;
              FUN_140e87440(&local_b8,DAT_141a0a828,0x80000000,&local_238,uVar5,ppuVar7);
              if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_b8);
              }
              iVar2 = FUN_140e851f0(uVar3,&local_238,DAT_141955260,0);
              if (iVar2 == 0) {
                local_2c8 = 0x41;
                FUN_140edd0e0(local_res8,local_res10,0);
              }
              cVar1 = FUN_140e643f0(&local_2a8,&local_res8,&local_res10);
            } while (cVar1 != '\0');
          }
          FUN_140e63970(&local_2a8,&local_res8,&local_res10);
          local_2c8 = 0x44;
          puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f170);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
          *puVar4 = 0;
          local_2c8 = 0x45;
          if (local_298 != 0) {
            FUN_140e4cd60();
          }
        }
        cVar1 = FUN_140e643f0(local_88,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_88,&local_res8,&local_res10);
    if (local_78 != 0) {
      FUN_140e4cd60();
      local_78 = 0;
    }
  }
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  _eh_vector_destructor_iterator_(local_228,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_2d8;
  return param_3;
}

