// gml_Script_anon_34347_DefineDebuffs_OFFERINGSINIT @ 0x1403f5f60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_34347_DefineDebuffs_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte bVar9;
  undefined4 uVar10;
  byte bVar11;
  undefined4 uVar12;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined1 **ppuVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  ulonglong in_stack_fffffffffffffd30;
  undefined8 **ppuVar16;
  ulonglong uVar17;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  char *local_2a0;
  undefined4 local_298;
  undefined8 local_290;
  undefined4 local_284;
  undefined4 local_280;
  undefined8 local_278;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228 [2];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  undefined1 *local_1a0;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_15c;
  longlong *local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  longlong *local_138;
  undefined4 local_12c;
  longlong *local_128;
  undefined4 local_11c;
  longlong *local_118;
  undefined4 local_10c;
  longlong *local_108;
  undefined4 local_fc;
  undefined4 local_f8 [3];
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  longlong local_a8;
  undefined1 local_98 [16];
  longlong local_88;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_280 = 0;
  local_2a0 = "gml_Script_anon@33205@DefineDebuffs@OFFERINGSINIT";
  local_2a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2a8;
  local_298 = 0x566;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_228,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar10 = 0xffffff;
  bVar9 = 0xff;
  local_284 = 0xffffff;
  local_290 = 0;
  uStack_25c = 0xffffff;
  local_268 = 0;
  uStack_1bc = 0xffffff;
  local_1c8 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  uStack_23c = 0xffffff;
  local_248 = 0;
  uVar12 = 0xffffff;
  bVar11 = 0xff;
  uStack_24c = 0xffffff;
  local_258 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_2bc = 0;
  local_2c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_298 = 0x568;
  local_e8 = CONCAT44(uRam00000001419e4874,_DAT_1419e4870);
  uStack_e0 = uRam00000001419e4878;
  uStack_dc = uRam00000001419e487c;
  if ((1 << (local_208[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_e8);
  local_1a8 = local_208;
  ppuVar13 = &local_1a8;
  uVar6 = gml_Script_choose_weighted(local_res8,local_res10,&local_2c8,1,ppuVar13);
  cVar4 = FUN_140e491e0(uVar6);
  if (cVar4 == '\0') {
    local_298 = 0x568;
  }
  else {
    local_298 = 0x56a;
    if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_290);
    }
    local_284 = 0;
    local_290 = 0xc010000000000000;
    local_298 = 0x56c;
    if (param_4 < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = *(undefined8 **)(param_5 + 8);
    }
    ppuVar16 = (undefined8 **)(in_stack_fffffffffffffd30 & 0xffffffffffffff00);
    puVar8 = (undefined8 *)((ulonglong)ppuVar13 & 0xffffffffffffff00);
    FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_268,puVar8,ppuVar16);
    iVar5 = FUN_140e63cb0(local_78,&local_res8,&local_res10,&local_268);
    bVar11 = 0xff;
    bVar9 = 0xff;
    if (0 < iVar5) {
      do {
        local_298 = 0x56e;
        uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57c50);
        local_15c = 10;
        local_168 = 1;
        iVar5 = FUN_140e851f0(uVar6,&local_168,DAT_141955260,0);
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        if (iVar5 == 0) {
          local_298 = 0x56f;
          if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2c8);
          }
          local_2c8 = 0;
          local_2c0 = 0;
          local_2bc = 5;
          local_14c = 6;
          local_158 = local_res8;
          uVar14 = (ulonglong)puVar8 & 0xffffffffffffff00;
          FUN_140e87440(&local_158,DAT_141a0a828,0x80000000,&local_1c8,uVar14,
                        (ulonglong)ppuVar16 & 0xffffffffffffff00);
          uVar15 = (undefined4)(uVar14 >> 0x20);
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          local_2b8 = local_1c8;
          uStack_2b0 = CONCAT44(uStack_1bc,uStack_1c0);
          if ((1 << ((byte)local_228[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_228);
          }
          FUN_140041b80(local_228,&local_2b8);
          local_1b8 = local_228;
          local_2b8 = CONCAT44(uRam0000000141dd27ec,_DAT_141dd27e8);
          uStack_2b0 = CONCAT44(DAT_141dd27f4,uRam0000000141dd27f0);
          if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_218);
          }
          FUN_140041b80(local_218,&local_2b8);
          local_1b0 = local_218;
          ppuVar16 = &local_1b8;
          puVar8 = (undefined8 *)CONCAT44(uVar15,DAT_141a56cf0);
          uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2c8,2,puVar8,ppuVar16);
          cVar4 = FUN_140e491e0(uVar6);
          if (cVar4 == '\0') {
            local_298 = 0x570;
            if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_278);
            }
            local_26c = 0;
            local_278 = 0xc010000000000000;
            local_298 = 0x572;
            local_13c = 0xf;
            local_148 = 0x1000000000000d7;
            iVar5 = FUN_140e63cb0(local_b8,&local_res8,&local_res10,&local_148);
            if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_148);
            }
            if (0 < iVar5) {
              do {
                local_298 = 0x574;
                uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
                if (param_4 < 2) {
                  puVar7 = &DAT_1419df7b0;
                }
                else {
                  puVar7 = *(undefined8 **)(param_5 + 8);
                }
                ppuVar16 = (undefined8 **)((ulonglong)ppuVar16 & 0xffffffffffffff00);
                puVar8 = (undefined8 *)((ulonglong)puVar8 & 0xffffffffffffff00);
                FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_268,puVar8,ppuVar16);
                iVar5 = FUN_140e851f0(uVar6,&local_268,DAT_141955260,0);
                if (iVar5 == 0) {
                  local_298 = 0x575;
                  local_12c = 6;
                  local_138 = local_res8;
                  ppuVar16 = (undefined8 **)((ulonglong)ppuVar16 & 0xffffffffffffff00);
                  puVar8 = (undefined8 *)((ulonglong)puVar8 & 0xffffffffffffff00);
                  FUN_140e87440(&local_138,DAT_141a0a828,0x80000000,&local_1c8,puVar8,ppuVar16);
                  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_138);
                  }
                  local_2b8 = local_1c8;
                  uStack_2b0 = CONCAT44(uStack_1bc,uStack_1c0);
                  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_278);
                  }
                  FUN_140041b80(&local_278,&local_2b8);
                }
                cVar4 = FUN_140e643f0(local_b8,&local_res8,&local_res10);
              } while (cVar4 != '\0');
            }
            uVar15 = (undefined4)((ulonglong)puVar8 >> 0x20);
            FUN_140e63970(local_b8,&local_res8,&local_res10);
            local_298 = 0x579;
            if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2c8);
            }
            local_2c8 = 0;
            local_2c0 = 0;
            local_2bc = 5;
            local_1b8 = &local_278;
            ppuVar16 = &local_1b8;
            puVar8 = (undefined8 *)CONCAT44(uVar15,DAT_141a02ef8);
            uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2c8,1,puVar8,ppuVar16);
            cVar4 = FUN_140e491e0(uVar6);
            if (cVar4 == '\0') {
              local_298 = 0x57b;
              if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2c8);
              }
              local_2c8 = 0;
              local_2c0 = 0;
              local_2bc = 5;
              local_11c = 6;
              local_128 = local_res8;
              uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
              uVar14 = (ulonglong)puVar8 & 0xffffffffffffff00;
              FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_178,uVar14,uVar17);
              if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_128);
              }
              local_10c = 6;
              local_118 = local_res8;
              uVar17 = uVar17 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_140e87440(&local_118,DAT_1419fe158,0x80000000,&local_188,uVar14,uVar17);
              if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_118);
              }
              local_fc = 6;
              local_108 = local_res8;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_140e87440(&local_108,DAT_141a02ee8,0x80000000,&local_238,uVar14,
                            uVar17 & 0xffffffffffffff00);
              uVar15 = (undefined4)(uVar14 >> 0x20);
              if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_108);
              }
              local_2b8 = local_178;
              uStack_2b0 = CONCAT44(uStack_16c,uStack_170);
              if ((1 << ((byte)local_228[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_228);
              }
              FUN_140041b80(local_228,&local_2b8);
              local_1b8 = local_228;
              local_2b8 = local_188;
              uStack_2b0 = CONCAT44(uStack_17c,uStack_180);
              if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_218);
              }
              FUN_140041b80(local_218,&local_2b8);
              local_1b0 = local_218;
              uStack_1dc = local_22c;
              uStack_1e0 = local_230;
              if ((1 << ((byte)local_22c & 0x1f) & 0x46U) == 0) {
                local_1e8 = local_238;
              }
              else {
                FUN_1400419b0(&local_1e8,&local_238);
              }
              local_280 = 1;
              local_ec = 7;
              local_f8[0] = 1;
              FUN_1400462a0(&local_1e8,local_f8);
              if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_f8);
              }
              local_2b8 = local_1e8;
              uStack_2b0 = CONCAT44(uStack_1dc,uStack_1e0);
              if ((1 << (local_208[0xc] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_208);
              }
              FUN_140041b80(local_208,&local_2b8);
              local_280 = 0;
              if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1e8);
              }
              local_1a8 = local_208;
              uStack_bc = 0xf;
              local_c8 = 0x1000000000000d7;
              local_2b8 = 0x1000000000000d7;
              uStack_2b0 = CONCAT44(0xf,uStack_c0);
              if ((1 << (local_1f8[0xc] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1f8);
              }
              FUN_140041b80(local_1f8,&local_2b8);
              ppuVar16 = &local_1b8;
              uVar14 = CONCAT44(uVar15,DAT_141a02e88);
              local_1a0 = local_1f8;
              puVar7 = (undefined8 *)
                       FUN_140e634e0(local_res8,local_res10,&local_2c8,4,uVar14,ppuVar16);
              if (puVar7 != &local_290) {
                local_2b8 = *puVar7;
                uStack_2b0 = puVar7[1];
                if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_290);
                }
                FUN_140041b80(&local_290,&local_2b8);
              }
              local_298 = 0x57c;
              puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
              if (puVar7 != &local_248) {
                local_2b8 = *puVar7;
                uStack_2b0 = puVar7[1];
                if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_248);
                }
                FUN_140041b80(&local_248,&local_2b8);
                uVar10 = uStack_23c;
              }
              local_298 = 0x57d;
              puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
              if (puVar7 != &local_258) {
                local_2b8 = *puVar7;
                uStack_2b0 = puVar7[1];
                if ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_258);
                }
                FUN_140041b80(&local_258,&local_2b8);
                uVar12 = uStack_24c;
              }
              local_298 = 0x57f;
              puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f6138);
              uStack_cc = 0xd;
              local_d8 = 0x3ff0000000000000;
              if (&local_d8 != puVar7) {
                local_2b8 = 0x3ff0000000000000;
                uStack_2b0 = CONCAT44(0xd,uStack_d0);
                if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar7);
                }
                FUN_140041b80(puVar7,&local_2b8);
              }
              local_298 = 0x580;
              puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f090);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar7);
              }
              *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
              *puVar7 = 0x4059000000000000;
              local_298 = 0x581;
              uStack_dc = 0xf;
              local_e8 = 0x10000010000011b;
              local_2b8 = 0x10000010000011b;
              uStack_2b0 = CONCAT44(0xf,uStack_e0);
              if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1d8);
              }
              FUN_140041b80(&local_1d8,&local_2b8);
              FUN_140e86fa0(local_res8,DAT_1419f5c58,0x80000000,&local_1d8);
              local_298 = 0x583;
              if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2c8);
              }
              local_2c8 = 0;
              local_2c0 = 0;
              local_2bc = 5;
              uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5868);
              FUN_140e87440(uVar6,DAT_141a55540,0x80000000,&local_198,uVar14 & 0xffffffffffffff00,
                            (ulonglong)ppuVar16 & 0xffffffffffffff00);
              local_2b8 = CONCAT44(DAT_141dd2a18._4_4_,(undefined4)DAT_141dd2a18);
              uStack_2b0 = CONCAT44(DAT_141dd2a24,DAT_141dd2a20);
              if ((1 << ((byte)local_228[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_228);
              }
              FUN_140041b80(local_228,&local_2b8);
              local_1b8 = local_228;
              uVar6 = FUN_140069500(uVar6);
              ppuVar16 = &local_1b8;
              puVar8 = &local_198;
              FUN_140e63610(uVar6,local_res10,&local_2c8,1,puVar8,ppuVar16);
              if (local_a8 != 0) {
                FUN_140e4cd60();
              }
            }
            else {
              local_298 = 0x579;
              if (local_a8 != 0) {
                FUN_140e4cd60();
              }
            }
          }
          else {
            local_298 = 0x56f;
          }
        }
        else {
          local_298 = 0x56e;
        }
        bVar9 = (byte)uVar10;
        bVar11 = (byte)uVar12;
        cVar4 = FUN_140e643f0(local_78,&local_res8,&local_res10);
      } while (cVar4 != '\0');
    }
    uVar10 = (undefined4)((ulonglong)puVar8 >> 0x20);
    FUN_140e63970(local_78,&local_res8,&local_res10);
    local_298 = 0x586;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    local_1b8 = &local_290;
    ppuVar16 = &local_1b8;
    uVar14 = CONCAT44(uVar10,DAT_141a02ef8);
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2c8,1,uVar14,ppuVar16);
    cVar4 = FUN_140e491e0(uVar6);
    if (cVar4 == '\0') {
      local_298 = 0x586;
    }
    else {
      local_298 = 0x588;
      iVar5 = FUN_140e63cb0(local_98,&local_res8,&local_res10,&local_290);
      uVar3 = local_248;
      uVar6 = local_258;
      if (0 < iVar5) {
        uVar2 = CONCAT44(uStack_23c,uStack_240);
        uVar1 = CONCAT44(uStack_24c,uStack_250);
        do {
          local_298 = 0x58a;
          puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
          FUN_140e609c0(local_res8);
          if (&local_248 != puVar7) {
            local_2b8 = uVar3;
            uStack_2b0 = uVar2;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar7);
            }
            FUN_140041b80(puVar7,&local_2b8);
          }
          FUN_140e60910(1);
          local_298 = 0x58b;
          puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
          FUN_140e609c0(local_res8);
          if (&local_258 != puVar7) {
            local_2b8 = uVar6;
            uStack_2b0 = uVar1;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar7);
            }
            FUN_140041b80(puVar7,&local_2b8);
          }
          FUN_140e60910(1);
          local_298 = 0x58d;
          puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
          if (param_4 < 2) {
            puVar8 = &DAT_1419df7b0;
          }
          else {
            puVar8 = *(undefined8 **)(param_5 + 8);
          }
          ppuVar16 = (undefined8 **)((ulonglong)ppuVar16 & 0xffffffffffffff00);
          uVar14 = uVar14 & 0xffffffffffffff00;
          FUN_140e87440(puVar8,DAT_141a1f440,0x80000000,&local_268,uVar14,ppuVar16);
          FUN_140e609c0(local_res8);
          if (&local_268 != puVar7) {
            local_2b8 = local_268;
            uStack_2b0 = CONCAT44(uStack_25c,uStack_260);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar7);
            }
            FUN_140041b80(puVar7,&local_2b8);
          }
          FUN_140e60910(1);
          cVar4 = FUN_140e643f0(local_98,&local_res8,&local_res10);
        } while (cVar4 != '\0');
      }
      FUN_140e63970(local_98,&local_res8,&local_res10);
      if (local_88 != 0) {
        FUN_140e4cd60();
        local_88 = 0;
      }
    }
    if (local_68 != 0) {
      FUN_140e4cd60();
      local_68 = 0;
    }
    param_3 = local_res18;
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << (bVar11 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << (bVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_290);
  }
  _eh_vector_destructor_iterator_(local_228,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_2a8;
  return param_3;
}

