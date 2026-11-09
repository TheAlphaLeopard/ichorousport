// gml_Script_StatesHoarderStomp @ 0x1405529e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesHoarderStomp
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar14;
  undefined4 uVar17;
  ulonglong uVar15;
  undefined8 **ppuVar16;
  ulonglong uVar18;
  undefined8 local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 local_30c;
  undefined8 local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined8 local_2f8;
  char *local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined8 local_2c0;
  undefined4 local_2b4;
  undefined8 local_2a8;
  byte local_29c;
  undefined1 local_298 [12];
  byte local_28c;
  undefined8 local_288;
  byte local_27c;
  undefined8 local_278;
  byte local_26c;
  undefined8 local_268;
  byte local_25c;
  undefined8 local_258;
  byte local_24c;
  undefined1 local_248 [12];
  byte local_23c;
  undefined8 local_238;
  byte local_22c;
  undefined1 local_228 [12];
  byte local_21c;
  undefined8 local_218;
  byte local_20c;
  undefined1 local_208 [12];
  byte local_1fc;
  undefined1 local_1f8 [12];
  byte local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 *local_1c8;
  undefined1 *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined1 *local_198;
  undefined8 *local_190;
  undefined1 *local_188;
  undefined8 *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  longlong *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  undefined4 local_150;
  uint local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  double local_138;
  undefined4 local_130;
  uint local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  double local_118;
  uint local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  double local_e8;
  uint local_dc;
  longlong local_d8;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_2f0 = "gml_Script_StatesHoarderTongue";
  local_2f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2f8;
  local_2e8 = 0x24e;
  pcVar14 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_2a8,0x10,0xc,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_2b4 = 0xffffff;
  local_2c0 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_30c = 0;
  local_318 = 0;
  local_2fc = 0;
  local_308 = 0;
  local_2c4 = 0;
  local_2d0 = 0;
  local_1cc = 0;
  local_1d8 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2e8 = 0x250;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_ec = *(undefined4 *)((longlong)param_5 + 0xc);
  local_f0 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
    local_f8 = *param_5;
  }
  else {
    FUN_1400419b0(&local_f8);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddfc50) &&
     (_Init_thread_header(&DAT_141ddfc50), DAT_141ddfc50 == -1)) {
    _DAT_141ddfd1c = 0;
    _DAT_141ddfd10 = 0x4000000000000000;
    _DAT_141ddfd30 = 0;
    _DAT_141ddfd24 = 0;
    _DAT_141ddfd34 = 1;
    _DAT_141ddfd44 = 0;
    _DAT_141ddfd38 = 0x3ff0000000000000;
    _DAT_141ddfd48 = 2;
    _DAT_141ddfd58 = 0;
    _DAT_141ddfd4c = 0x4008000000000000;
    _DAT_141ddfd5c = 3;
    atexit((_func_5014 *)&LAB_141482010);
    _Init_thread_footer(&DAT_141ddfc50);
  }
  uVar9 = 0;
  do {
    iVar3 = FUN_140e851f0(&DAT_141ddfd10 + (longlong)(int)uVar9 * 0x14,&local_f8,DAT_141955260,0);
    uVar17 = (undefined4)((ulonglong)pcVar14 >> 0x20);
    if (iVar3 == 0) {
      iVar3 = *(int *)(&DAT_141ddfd20 + (longlong)(int)uVar9 * 0x14);
      if (iVar3 == 0) {
        local_2e8 = 0x254;
        uStack_31c = 0xf;
        local_328 = (longlong *)0x100000100000176;
        local_168 = (longlong *)0x100000100000176;
        uStack_160 = uStack_320;
        uStack_15c = 0xf;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_168);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_108);
        local_2e8 = 0x255;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_11c = 0;
        local_128 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_128);
        local_2e8 = 0x256;
        if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c0);
        }
        local_2b4 = 0;
        local_2c0 = 0x3ff0000000000000;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_2c0);
        local_2e8 = 600;
        if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        local_318 = 0;
        local_310 = 0;
        local_30c = 5;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
        if (puVar4 != &local_2a8) {
          local_328 = (longlong *)*puVar4;
          uStack_320 = *(undefined4 *)(puVar4 + 1);
          uStack_31c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          FUN_140041b80(&local_2a8,&local_328);
        }
        local_1c8 = &local_2a8;
        local_328 = (longlong *)CONCAT44(uRam0000000141dd3f4c,_DAT_141dd3f48);
        uStack_320 = uRam0000000141dd3f50;
        uStack_31c = DAT_141dd3f54;
        if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_298);
        }
        FUN_140041b80(local_298,&local_328);
        local_1c0 = local_298;
        local_328 = (longlong *)CONCAT44(uRam0000000141dc66e4,_DAT_141dc66e0);
        uStack_320 = uRam0000000141dc66e8;
        uStack_31c = uRam0000000141dc66ec;
        if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        FUN_140041b80(&local_288,&local_328);
        local_1b8 = &local_288;
        uVar5 = CONCAT44(uVar17,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_318,3,uVar5,&local_1c8);
        uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
        local_2e8 = 0x259;
        if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        local_318 = 0;
        local_310 = 0;
        local_30c = 5;
        if (puVar4 != &local_2a8) {
          local_328 = (longlong *)*puVar4;
          uStack_320 = *(undefined4 *)(puVar4 + 1);
          uStack_31c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          FUN_140041b80(&local_2a8,&local_328);
        }
        local_1c8 = &local_2a8;
        local_328 = (longlong *)CONCAT44(uRam0000000141dd3f8c,_DAT_141dd3f88);
        uStack_320 = uRam0000000141dd3f90;
        uStack_31c = DAT_141dd3f94;
        if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_298);
        }
        FUN_140041b80(local_298,&local_328);
        local_1c0 = local_298;
        local_328 = (longlong *)CONCAT44(uRam00000001419e6294,_DAT_1419e6290);
        uStack_320 = uRam00000001419e6298;
        uStack_31c = uRam00000001419e629c;
        if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        FUN_140041b80(&local_288,&local_328);
        local_1b8 = &local_288;
        uVar5 = CONCAT44(uVar17,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_318,3,uVar5,&local_1c8);
        uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
        local_2e8 = 0x25a;
        if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        local_318 = 0;
        local_310 = 0;
        local_30c = 5;
        if (puVar4 != &local_2a8) {
          local_328 = (longlong *)*puVar4;
          uStack_320 = *(undefined4 *)(puVar4 + 1);
          uStack_31c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          FUN_140041b80(&local_2a8,&local_328);
        }
        local_1c8 = &local_2a8;
        local_328 = (longlong *)CONCAT44(uRam0000000141dd3f7c,_DAT_141dd3f78);
        uStack_320 = uRam0000000141dd3f80;
        uStack_31c = DAT_141dd3f84;
        if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_298);
        }
        FUN_140041b80(local_298,&local_328);
        local_1c0 = local_298;
        local_328 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
        uStack_320 = uRam00000001419df7a8;
        uStack_31c = uRam00000001419df7ac;
        if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        FUN_140041b80(&local_288,&local_328);
        local_1b8 = &local_288;
        FUN_140e634e0(local_res8,local_res10,&local_318,3,CONCAT44(uVar17,DAT_1419ff3d8),&local_1c8)
        ;
        local_2e8 = 0x25c;
      }
      else {
        bVar1 = (byte)local_30c;
        if (iVar3 == 1) {
          local_2e8 = 0x263;
          if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_318);
          }
          local_318 = 0;
          local_310 = 0;
          local_30c = 5;
          uStack_31c = 0xf;
          local_328 = (longlong *)0x100000100000176;
          local_168 = (longlong *)0x100000100000176;
          uStack_160 = uStack_320;
          uStack_15c = 0xf;
          if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          FUN_140041b80(&local_2a8,&local_168);
          local_1c8 = &local_2a8;
          local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_320 = DAT_1419df7b8;
          uStack_31c = DAT_1419df7bc;
          if ((1 << ((byte)_local_28c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_298);
          }
          FUN_140041b80(local_298,&local_328);
          local_1c0 = local_298;
          ppuVar16 = &local_1c8;
          uVar5 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_318,2,ppuVar16);
          uVar17 = (undefined4)((ulonglong)ppuVar16 >> 0x20);
          cVar2 = FUN_140e491e0(uVar5);
          if (cVar2 != '\0') {
            local_2e8 = 0x265;
            if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2c0);
            }
            local_2b4 = 0;
            local_2c0 = 0;
            FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_2c0);
          }
          local_2e8 = 0x269;
          if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_318);
          }
          local_318 = 0;
          local_310 = 0;
          local_30c = 5;
          puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          if (puVar6 != &local_2a8) {
            local_328 = (longlong *)*puVar6;
            uStack_320 = *(undefined4 *)(puVar6 + 1);
            uStack_31c = *(undefined4 *)((longlong)puVar6 + 0xc);
            if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            FUN_140041b80(&local_2a8,&local_328);
          }
          local_1c8 = &local_2a8;
          local_328 = (longlong *)CONCAT44(uRam0000000141dd3f7c,_DAT_141dd3f78);
          uStack_320 = uRam0000000141dd3f80;
          uStack_31c = DAT_141dd3f84;
          if ((1 << ((byte)_local_28c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_298);
          }
          FUN_140041b80(local_298,&local_328);
          local_1c0 = local_298;
          uVar8 = CONCAT44(uVar17,DAT_1419ff4f8);
          uVar5 = FUN_140e634e0(local_res8,local_res10,&local_318,2,uVar8,&local_1c8);
          uVar17 = (undefined4)((ulonglong)uVar8 >> 0x20);
          cVar2 = FUN_140e491e0(uVar5);
          if (cVar2 == '\0') {
            if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_308);
            }
            local_308 = 0;
            local_300 = 0;
            local_2fc = 5;
            if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2d0);
            }
            local_2d0 = 0;
            local_2c8 = 0;
            local_2c4 = 5;
            puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            if (puVar6 != &local_288) {
              local_328 = (longlong *)*puVar6;
              uStack_320 = *(undefined4 *)(puVar6 + 1);
              uStack_31c = *(undefined4 *)((longlong)puVar6 + 0xc);
              if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_288);
              }
              FUN_140041b80(&local_288,&local_328);
            }
            local_1b8 = &local_288;
            local_328 = (longlong *)CONCAT44(uRam0000000141dd3f8c,_DAT_141dd3f88);
            uStack_320 = uRam0000000141dd3f90;
            uStack_31c = DAT_141dd3f94;
            if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_278);
            }
            FUN_140041b80(&local_278,&local_328);
            local_1b0 = &local_278;
            uVar5 = CONCAT44(uVar17,DAT_1419ff4f8);
            puVar7 = (undefined8 *)
                     FUN_140e634e0(local_res8,local_res10,&local_2d0,2,uVar5,&local_1b8);
            uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
            if (puVar7 != &local_268) {
              local_328 = (longlong *)*puVar7;
              uStack_320 = *(undefined4 *)(puVar7 + 1);
              uStack_31c = *(undefined4 *)((longlong)puVar7 + 0xc);
              if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_268);
              }
              FUN_140041b80(&local_268,&local_328);
            }
            local_1a8 = &local_268;
            uVar8 = CONCAT44(uVar17,DAT_141a02ef8);
            uVar5 = FUN_140e634e0(local_res8,local_res10,&local_308,1,uVar8,&local_1a8);
            uVar17 = (undefined4)((ulonglong)uVar8 >> 0x20);
            cVar2 = FUN_140e491e0(uVar5);
            if (cVar2 != '\0') {
              local_2e8 = 0x26b;
              puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
              if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1d8);
              }
              local_1d8 = 0;
              local_1d0 = 0;
              local_1cc = 5;
              if (puVar6 != &local_258) {
                local_328 = (longlong *)*puVar6;
                uStack_320 = *(undefined4 *)(puVar6 + 1);
                uStack_31c = *(undefined4 *)((longlong)puVar6 + 0xc);
                if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_258);
                }
                FUN_140041b80(&local_258,&local_328);
              }
              local_328 = (longlong *)CONCAT44(uRam0000000141dd3f8c,_DAT_141dd3f88);
              uStack_320 = uRam0000000141dd3f90;
              uStack_31c = DAT_141dd3f94;
              local_1a0 = &local_258;
              if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_248);
              }
              FUN_140041b80(local_248,&local_328);
              local_198 = local_248;
              ppuVar16 = &local_1a0;
              uVar15 = CONCAT44(uVar17,DAT_1419ff4f8);
              uVar5 = FUN_140e634e0(local_res8,local_res10,&local_1d8,2,uVar15,ppuVar16);
              uVar15 = uVar15 & 0xffffffffffffff00;
              FUN_140e87440(uVar5,DAT_1419fdd08,0x80000000,&local_88,uVar15,
                            (ulonglong)ppuVar16 & 0xffffffffffffff00);
              uVar17 = (undefined4)(uVar15 >> 0x20);
              if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1e8);
              }
              local_1e8 = 0;
              local_1e0 = 0;
              local_1dc = 5;
              if (puVar6 != &local_238) {
                local_328 = (longlong *)*puVar6;
                uStack_320 = *(undefined4 *)(puVar6 + 1);
                uStack_31c = *(undefined4 *)((longlong)puVar6 + 0xc);
                if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_238);
                }
                FUN_140041b80(&local_238,&local_328);
              }
              local_190 = &local_238;
              local_328 = (longlong *)CONCAT44(uRam0000000141dd3f8c,_DAT_141dd3f88);
              uStack_320 = uRam0000000141dd3f90;
              uStack_31c = DAT_141dd3f94;
              if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_228);
              }
              FUN_140041b80(local_228,&local_328);
              local_188 = local_228;
              ppuVar16 = &local_190;
              uVar15 = CONCAT44(uVar17,DAT_1419ff4f8);
              uVar5 = FUN_140e634e0(local_res8,local_res10,&local_1e8,2,uVar15,ppuVar16);
              uVar15 = uVar15 & 0xffffffffffffff00;
              FUN_140e87440(uVar5,DAT_1419fdcf8,0x80000000,&local_98,uVar15,
                            (ulonglong)ppuVar16 & 0xffffffffffffff00);
              uVar17 = (undefined4)(uVar15 >> 0x20);
              iVar3 = FUN_140e851f0(&local_88,&local_98,DAT_141955260,0);
              if (iVar3 == 0) {
                local_2e8 = 0x26d;
                if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_148);
                }
                local_148 = 0;
                local_140 = 0;
                local_13c = 5;
                puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
                if (puVar6 != &local_218) {
                  local_328 = (longlong *)*puVar6;
                  uStack_320 = *(undefined4 *)(puVar6 + 1);
                  uStack_31c = *(undefined4 *)((longlong)puVar6 + 0xc);
                  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_218);
                  }
                  FUN_140041b80(&local_218,&local_328);
                }
                local_180 = &local_218;
                local_328 = (longlong *)CONCAT44(uRam0000000141dd3f7c,_DAT_141dd3f78);
                uStack_320 = uRam0000000141dd3f80;
                uStack_31c = DAT_141dd3f84;
                if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_208);
                }
                FUN_140041b80(local_208,&local_328);
                local_178 = local_208;
                local_328 = (longlong *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
                uStack_320 = uRam00000001419df7c8;
                uStack_31c = uRam00000001419df7cc;
                if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_1f8);
                }
                FUN_140041b80(local_1f8,&local_328);
                local_170 = local_1f8;
                uVar5 = CONCAT44(uVar17,DAT_1419ff3d8);
                FUN_140e634e0(local_res8,local_res10,&local_148,3,uVar5,&local_180);
                uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
                local_2e8 = 0x26e;
                puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd3b8);
                if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar7);
                }
                *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                *puVar7 = 0;
              }
            }
          }
          local_2e8 = 0x272;
          if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_318);
          }
          local_318 = 0;
          local_310 = 0;
          local_30c = 5;
          if (puVar6 != &local_2a8) {
            local_328 = (longlong *)*puVar6;
            uStack_320 = *(undefined4 *)(puVar6 + 1);
            uStack_31c = *(undefined4 *)((longlong)puVar6 + 0xc);
            if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            FUN_140041b80(&local_2a8,&local_328);
          }
          local_1c8 = &local_2a8;
          local_328 = (longlong *)CONCAT44(uRam0000000141dd3f7c,_DAT_141dd3f78);
          uStack_320 = uRam0000000141dd3f80;
          uStack_31c = DAT_141dd3f84;
          if ((1 << ((byte)_local_28c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_298);
          }
          FUN_140041b80(local_298,&local_328);
          local_1c0 = local_298;
          uVar8 = CONCAT44(uVar17,DAT_1419ff4f8);
          uVar5 = FUN_140e634e0(local_res8,local_res10,&local_318,2,uVar8,&local_1c8);
          uVar17 = (undefined4)((ulonglong)uVar8 >> 0x20);
          cVar2 = FUN_140e491e0(uVar5);
          if (cVar2 == '\0') goto LAB_1405542ac;
          local_2e8 = 0x274;
          if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_308);
          }
          local_308 = 0;
          local_300 = 0;
          local_2fc = 5;
          (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
          local_328 = (longlong *)CONCAT44(uRam0000000141dc66e4,_DAT_141dc66e0);
          uStack_320 = uRam0000000141dc66e8;
          uStack_31c = uRam0000000141dc66ec;
          if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          FUN_140041b80(&local_288,&local_328);
          local_1b8 = &local_288;
          uVar8 = CONCAT44(uVar17,DAT_141a0a0d8);
          puVar6 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_308,1,uVar8,&local_1b8)
          ;
          uVar17 = (undefined4)((ulonglong)uVar8 >> 0x20);
          local_2d4 = *(undefined4 *)((longlong)puVar6 + 0xc);
          local_2d8 = *(undefined4 *)(puVar6 + 1);
          if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) == 0) {
            local_2e0 = *puVar6;
          }
          else {
            FUN_1400419b0(&local_2e0,puVar6);
          }
          uStack_31c = 0;
          local_328 = (longlong *)0x3fe0000000000000;
          FUN_140042560(&local_2e0,&local_328);
          if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_328);
          }
          uVar9 = FUN_140e851f0(uVar5,&local_2e0,DAT_141955260,1);
          if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2e0);
          }
          if (0x7fffffff < uVar9) goto LAB_1405542ac;
          local_2e8 = 0x276;
          if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d0);
          }
          local_2d0 = 0;
          local_2c8 = 0;
          local_2c4 = 5;
          puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          if (puVar6 != &local_278) {
            local_328 = (longlong *)*puVar6;
            uStack_320 = *(undefined4 *)(puVar6 + 1);
            uStack_31c = *(undefined4 *)((longlong)puVar6 + 0xc);
            if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_278);
            }
            FUN_140041b80(&local_278,&local_328);
          }
          local_1b0 = &local_278;
          local_328 = (longlong *)CONCAT44(uRam0000000141dd3f8c,_DAT_141dd3f88);
          uStack_320 = uRam0000000141dd3f90;
          uStack_31c = DAT_141dd3f94;
          if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_268);
          }
          FUN_140041b80(&local_268,&local_328);
          local_1a8 = &local_268;
          uVar8 = CONCAT44(uVar17,DAT_1419ff4f8);
          uVar5 = FUN_140e634e0(local_res8,local_res10,&local_2d0,2,uVar8,&local_1b0);
          iVar3 = FUN_140e63cb0(&local_e8,&local_res8,&local_res10,uVar5);
          uVar17 = (undefined4)((ulonglong)uVar8 >> 0x20);
          if (0 < iVar3) {
            do {
              local_2e8 = 0x277;
              puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fdea8);
              uStack_31c = 0xd;
              local_328 = (longlong *)0x3ff0000000000000;
              if (&local_328 != puVar6) {
                local_168 = (longlong *)0x3ff0000000000000;
                uStack_160 = uStack_320;
                uStack_15c = 0xd;
                if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar6);
                }
                FUN_140041b80(puVar6,&local_168);
              }
              cVar2 = FUN_140e643f0(&local_e8,&local_res8,&local_res10);
              uVar17 = (undefined4)((ulonglong)uVar8 >> 0x20);
            } while (cVar2 != '\0');
          }
          FUN_140e63970(&local_e8,&local_res8,&local_res10);
          local_2e8 = 0x279;
          puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_318);
          }
          local_318 = 0;
          local_310 = 0;
          local_30c = 5;
          if (puVar6 != &local_2a8) {
            local_328 = (longlong *)*puVar6;
            uStack_320 = *(undefined4 *)(puVar6 + 1);
            uStack_31c = *(undefined4 *)((longlong)puVar6 + 0xc);
            if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            FUN_140041b80(&local_2a8,&local_328);
          }
          local_1c8 = &local_2a8;
          local_328 = (longlong *)CONCAT44(uRam0000000141dd3f8c,_DAT_141dd3f88);
          uStack_320 = uRam0000000141dd3f90;
          uStack_31c = DAT_141dd3f94;
          if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_298);
          }
          FUN_140041b80(local_298,&local_328);
          local_1c0 = local_298;
          ppuVar16 = &local_1c8;
          uVar15 = CONCAT44(uVar17,DAT_1419ff4f8);
          uVar5 = FUN_140e634e0(local_res8,local_res10,&local_318,2,uVar15,ppuVar16);
          uVar15 = uVar15 & 0xffffffffffffff00;
          FUN_140e87440(uVar5,DAT_1419fdd08,0x80000000,&local_a8,uVar15,
                        (ulonglong)ppuVar16 & 0xffffffffffffff00);
          uVar17 = (undefined4)(uVar15 >> 0x20);
          uStack_31c = 0;
          local_328 = (longlong *)0x0;
          iVar3 = FUN_140e851f0(&local_a8,&local_328,DAT_141955260,0);
          if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_328);
          }
          if (iVar3 != 0) {
            if (local_d8 != 0) {
              FUN_140e4cd60();
            }
LAB_1405542ac:
            local_2e8 = 0x284;
            if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_318);
            }
            local_318 = 0;
            local_310 = 0;
            local_30c = 5;
            uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd398);
            uVar8 = FUN_140e63610(local_res8,local_res10,&local_318,0,uVar5,0);
            uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
            cVar2 = FUN_140e491e0(uVar8);
            if (cVar2 != '\0') {
              if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_308);
              }
              local_308 = 0;
              local_300 = 0;
              local_2fc = 5;
              if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2d0);
              }
              local_2d0 = 0;
              local_2c8 = 0;
              local_2c4 = 5;
              puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
              if (puVar6 != &local_2a8) {
                local_328 = (longlong *)*puVar6;
                uStack_320 = *(undefined4 *)(puVar6 + 1);
                uStack_31c = *(undefined4 *)((longlong)puVar6 + 0xc);
                if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2a8);
                }
                FUN_140041b80(&local_2a8,&local_328);
              }
              local_1c8 = &local_2a8;
              local_328 = (longlong *)CONCAT44(uRam0000000141dd3f8c,_DAT_141dd3f88);
              uStack_320 = uRam0000000141dd3f90;
              uStack_31c = DAT_141dd3f94;
              if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_298);
              }
              FUN_140041b80(local_298,&local_328);
              local_1c0 = local_298;
              uVar5 = CONCAT44(uVar17,DAT_1419ff4f8);
              puVar6 = (undefined8 *)
                       FUN_140e634e0(local_res8,local_res10,&local_2d0,2,uVar5,&local_1c8);
              uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
              if (puVar6 != &local_288) {
                local_328 = (longlong *)*puVar6;
                uStack_320 = *(undefined4 *)(puVar6 + 1);
                uStack_31c = *(undefined4 *)((longlong)puVar6 + 0xc);
                if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_288);
                }
                FUN_140041b80(&local_288,&local_328);
              }
              local_1b8 = &local_288;
              uVar8 = CONCAT44(uVar17,DAT_141a02ef8);
              uVar5 = FUN_140e634e0(local_res8,local_res10,&local_308,1,uVar8,&local_1b8);
              uVar17 = (undefined4)((ulonglong)uVar8 >> 0x20);
              cVar2 = FUN_140e491e0(uVar5);
              if (cVar2 != '\0') {
                puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
                if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1d8);
                }
                local_1d8 = 0;
                local_1d0 = 0;
                local_1cc = 5;
                if (puVar6 != &local_278) {
                  local_328 = (longlong *)*puVar6;
                  uStack_320 = *(undefined4 *)(puVar6 + 1);
                  uStack_31c = *(undefined4 *)((longlong)puVar6 + 0xc);
                  if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_278);
                  }
                  FUN_140041b80(&local_278,&local_328);
                }
                local_1b0 = &local_278;
                local_328 = (longlong *)CONCAT44(uRam0000000141dd3f8c,_DAT_141dd3f88);
                uStack_320 = uRam0000000141dd3f90;
                uStack_31c = DAT_141dd3f94;
                if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_268);
                }
                FUN_140041b80(&local_268,&local_328);
                local_1a8 = &local_268;
                ppuVar16 = &local_1b0;
                uVar15 = CONCAT44(uVar17,DAT_1419ff4f8);
                uVar5 = FUN_140e634e0(local_res8,local_res10,&local_1d8,2,uVar15,ppuVar16);
                FUN_140e87440(uVar5,DAT_1419fdd08,0x80000000,&local_b8,uVar15 & 0xffffffffffffff00,
                              (ulonglong)ppuVar16 & 0xffffffffffffff00);
                uStack_31c = 0;
                local_328 = (longlong *)0x4030000000000000;
                iVar3 = FUN_140e851f0(&local_b8,&local_328,DAT_141955260,1);
                if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_328);
                }
                if (0 < iVar3) {
                  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f090);
                  puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5a58);
                  uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1ed50);
                  local_2d4 = *(undefined4 *)((longlong)puVar6 + 0xc);
                  local_2d8 = *(undefined4 *)(puVar6 + 1);
                  if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) == 0) {
                    local_2e0 = *puVar6;
                  }
                  else {
                    FUN_1400419b0(&local_2e0,puVar6);
                  }
                  FUN_140042560(&local_2e0,uVar8);
                  iVar3 = FUN_140e851f0(uVar5,&local_2e0,DAT_141955260,1);
                  if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2e0);
                  }
                  if (iVar3 != -2 && iVar3 < 1) {
                    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fdae8);
                    uStack_31c = 0;
                    local_328 = (longlong *)0x3ff0000000000000;
                    iVar3 = FUN_140e851f0(uVar5,&local_328,DAT_141955260,0);
                    if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_328);
                    }
                    if (iVar3 == 0) {
                      local_2e8 = 0x288;
                      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_1e8);
                      }
                      local_1e8 = 0;
                      local_1e0 = 0;
                      local_1dc = 5;
                      local_328 = (longlong *)CONCAT44(uRam00000001419e63d4,_DAT_1419e63d0);
                      uStack_320 = uRam00000001419e63d8;
                      uStack_31c = uRam00000001419e63dc;
                      if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_258);
                      }
                      FUN_140041b80(&local_258,&local_328);
                      local_328 = (longlong *)
                                  CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
                      uStack_320 = DAT_1419df7b8;
                      uStack_31c = DAT_1419df7bc;
                      local_1a0 = &local_258;
                      if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(local_248);
                      }
                      FUN_140041b80(local_248,&local_328);
                      local_198 = local_248;
                      gml_Script_truestate_begin_step
                                (local_res8,local_res10,&local_1e8,2,&local_1a0);
                    }
                  }
                }
              }
            }
            local_2e8 = 0x28c;
            uStack_31c = 0;
            local_328 = (longlong *)0x0;
            iVar3 = FUN_140e851f0(puVar4,&local_328,DAT_141955260,0);
            bVar10 = iVar3 == 0;
            if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_328);
            }
            if (!bVar10) {
              uStack_31c = 6;
              local_328 = local_res8;
              FUN_140e87440(&local_328,DAT_141a0a818,0x80000000,&local_c8,bVar10,bVar10);
              if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_328);
              }
              uStack_31c = 0;
              local_328 = (longlong *)0x0;
              iVar3 = FUN_140e851f0(&local_c8,&local_328,DAT_141955260,0);
              if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_328);
              }
              if (iVar3 != 0) {
                local_2e8 = 0x28d;
                if (puVar4 != &local_2c0) {
                  local_328 = (longlong *)*puVar4;
                  uStack_320 = *(undefined4 *)(puVar4 + 1);
                  uStack_31c = *(undefined4 *)((longlong)puVar4 + 0xc);
                  if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2c0);
                  }
                  FUN_140041b80(&local_2c0,&local_328);
                }
                FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_2c0);
              }
            }
            local_2e8 = 0x28f;
            if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_318);
            }
            local_318 = 0;
            local_310 = 0;
            local_30c = 5;
            uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd4b8);
            FUN_140e63610(local_res8,local_res10,&local_318,0,uVar5,0);
            local_2e8 = 0x291;
            break;
          }
          local_2e8 = 0x27b;
          if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_308);
          }
          local_308 = 0;
          local_300 = 0;
          local_2fc = 5;
          puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          if (puVar4 != &local_288) {
            local_328 = (longlong *)*puVar4;
            uStack_320 = *(undefined4 *)(puVar4 + 1);
            uStack_31c = *(undefined4 *)((longlong)puVar4 + 0xc);
            if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            FUN_140041b80(&local_288,&local_328);
          }
          local_1b8 = &local_288;
          local_328 = (longlong *)CONCAT44(uRam0000000141dd3f8c,_DAT_141dd3f88);
          uStack_320 = uRam0000000141dd3f90;
          uStack_31c = DAT_141dd3f94;
          if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_278);
          }
          FUN_140041b80(&local_278,&local_328);
          local_1b0 = &local_278;
          puVar4 = (undefined8 *)
                   FUN_140e634e0(local_res8,local_res10,&local_308,2,CONCAT44(uVar17,DAT_1419ff4f8),
                                 &local_1b8);
          if (puVar4 != &local_268) {
            local_328 = (longlong *)*puVar4;
            uStack_320 = *(undefined4 *)(puVar4 + 1);
            uStack_31c = *(undefined4 *)((longlong)puVar4 + 0xc);
            if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_268);
            }
            FUN_140041b80(&local_268,&local_328);
          }
          local_1a8 = &local_268;
          FUN_140edd0e0(local_res8,local_res10,1,&local_1a8);
          local_2e8 = 0x27c;
          if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_318);
          }
          local_318 = 0;
          local_310 = 0;
          local_30c = 5;
          local_328 = (longlong *)CONCAT44(uRam00000001419e63b4,_DAT_1419e63b0);
          uStack_320 = uRam00000001419e63b8;
          uStack_31c = uRam00000001419e63bc;
          if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          FUN_140041b80(&local_2a8,&local_328);
          local_1c8 = &local_2a8;
          local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_320 = DAT_1419df7b8;
          uStack_31c = DAT_1419df7bc;
          if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_298);
          }
          FUN_140041b80(local_298,&local_328);
          local_1c0 = local_298;
          gml_Script_truestate_begin_step(local_res8,local_res10,&local_318,2,&local_1c8);
          local_2e8 = 0x27d;
          local_68 = local_d8;
        }
        else {
          if (iVar3 != 2) {
            if (iVar3 == 3) {
              local_2e8 = 0x2a0;
              if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_318);
              }
              local_318 = 0;
              local_310 = 0;
              local_30c = 5;
              puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
              if (puVar4 != &local_2a8) {
                local_328 = (longlong *)*puVar4;
                uStack_320 = *(undefined4 *)(puVar4 + 1);
                uStack_31c = *(undefined4 *)((longlong)puVar4 + 0xc);
                if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2a8);
                }
                FUN_140041b80(&local_2a8,&local_328);
              }
              local_1c8 = &local_2a8;
              local_328 = (longlong *)CONCAT44(uRam0000000141dd3f8c,_DAT_141dd3f88);
              uStack_320 = uRam0000000141dd3f90;
              uStack_31c = DAT_141dd3f94;
              if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_298);
              }
              FUN_140041b80(local_298,&local_328);
              local_1c0 = local_298;
              puVar4 = (undefined8 *)
                       FUN_140e634e0(local_res8,local_res10,&local_318,2,
                                     CONCAT44(uVar17,DAT_1419ff4f8),&local_1c8);
              if (puVar4 != &local_288) {
                local_328 = (longlong *)*puVar4;
                uStack_320 = *(undefined4 *)(puVar4 + 1);
                uStack_31c = *(undefined4 *)((longlong)puVar4 + 0xc);
                if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_288);
                }
                FUN_140041b80(&local_288,&local_328);
              }
              local_1b8 = &local_288;
              FUN_140edd0e0(local_res8,local_res10,1,&local_1b8);
              local_2e8 = 0x2a2;
            }
            break;
          }
          local_2e8 = 0x295;
          if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_318);
          }
          local_318 = 0;
          local_310 = 0;
          local_30c = 5;
          uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5b18);
          FUN_140e63610(local_res8,local_res10,&local_318,0,uVar5,0);
          uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_2e8 = 0x296;
          if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_318);
          }
          local_318 = 0;
          local_310 = 0;
          local_30c = 5;
          puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          if (puVar4 != &local_2a8) {
            local_328 = (longlong *)*puVar4;
            uStack_320 = *(undefined4 *)(puVar4 + 1);
            uStack_31c = *(undefined4 *)((longlong)puVar4 + 0xc);
            if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            FUN_140041b80(&local_2a8,&local_328);
          }
          local_1c8 = &local_2a8;
          local_328 = (longlong *)CONCAT44(uRam0000000141dd3f8c,_DAT_141dd3f88);
          uStack_320 = uRam0000000141dd3f90;
          uStack_31c = DAT_141dd3f94;
          if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_298);
          }
          FUN_140041b80(local_298,&local_328);
          local_1c0 = local_298;
          ppuVar16 = &local_1c8;
          uVar15 = CONCAT44(uVar17,DAT_1419ff4f8);
          uVar5 = FUN_140e634e0(local_res8,local_res10,&local_318,2,uVar15,ppuVar16);
          iVar3 = FUN_140e63cb0(local_78,&local_res8,&local_res10,uVar5);
          if (0 < iVar3) {
            do {
              local_2e8 = 0x298;
              uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fdea8);
              cVar2 = FUN_140e491e0(uVar5);
              if (cVar2 != '\0') {
                local_2e8 = 0x299;
                puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fdd08);
                uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fddd8);
                uStack_15c = 6;
                local_168 = local_res8;
                uVar18 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
                uVar15 = uVar15 & 0xffffffffffffff00;
                FUN_140e87440(&local_168,DAT_1419fde18,0x80000000,&local_138,uVar15,uVar18);
                if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_168);
                }
                uStack_31c = 6;
                local_328 = local_res8;
                ppuVar16 = (undefined8 **)(uVar18 & 0xffffffffffffff00);
                uVar15 = uVar15 & 0xffffffffffffff00;
                FUN_140e87440(&local_328,DAT_1419fe158,0x80000000,&local_118,uVar15,ppuVar16);
                uVar17 = (undefined4)(uVar15 >> 0x20);
                if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_328);
                }
                local_2d4 = *(undefined4 *)((longlong)puVar4 + 0xc);
                local_2d8 = *(undefined4 *)(puVar4 + 1);
                if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) == 0) {
                  local_2e0 = *puVar4;
                }
                else {
                  FUN_1400419b0(&local_2e0,puVar4);
                }
                FUN_140042560(&local_2e0,uVar5);
                local_14c = local_12c;
                local_150 = local_130;
                if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
                  local_158 = local_138;
                }
                else {
                  FUN_1400419b0(&local_158,&local_138);
                }
                FUN_1400460e0(&local_158,&local_2e0);
                local_dc = 0xf;
                local_e8 = 7.29112897291339e-304;
                dVar11 = local_118;
                if ((local_10c & 0xffffff) != 0) {
                  dVar11 = (double)FUN_140e4b060(&local_118);
                }
                dVar12 = local_158;
                if ((local_14c & 0xffffff) != 0) {
                  dVar12 = (double)FUN_140e4b060(&local_158);
                }
                dVar13 = local_e8;
                if ((local_dc & 0xffffff) != 0) {
                  dVar13 = (double)FUN_140e4b060(&local_e8);
                }
                uVar15 = CONCAT44(uVar17,(float)dVar11);
                FUN_140ec5d30(local_res8,(int)dVar13,0,(float)dVar12,uVar15);
                if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_e8);
                }
                if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_158);
                }
                if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2e0);
                }
              }
              cVar2 = FUN_140e643f0(local_78,&local_res8,&local_res10);
            } while (cVar2 != '\0');
          }
          FUN_140e63970(local_78,&local_res8,&local_res10);
          local_2e8 = 0x29c;
        }
        if (local_68 != 0) {
          FUN_140e4cd60();
        }
      }
      break;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 4);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d0);
  }
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c0);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_2a8,0x10,0xc,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_2f8;
  return param_3;
}

