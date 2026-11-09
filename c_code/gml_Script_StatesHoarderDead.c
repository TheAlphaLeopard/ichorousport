// gml_Script_StatesHoarderDead @ 0x1405583e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesHoarderDead
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  double dVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong *local_res8;
  ulonglong local_res10;
  code *pcVar10;
  undefined4 **ppuVar11;
  ulonglong uVar12;
  undefined4 **ppuVar13;
  undefined8 uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong in_stack_fffffffffffffd10;
  undefined8 local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  undefined8 local_2b8;
  char *local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  undefined8 local_288;
  undefined4 uStack_280;
  uint uStack_27c;
  undefined8 local_278;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_24c;
  undefined4 local_248 [3];
  byte local_23c;
  undefined1 local_238 [12];
  byte local_22c;
  undefined4 local_228 [3];
  byte local_21c;
  undefined4 local_218 [3];
  byte local_20c;
  undefined1 local_208 [12];
  byte local_1fc;
  undefined4 local_1f8 [3];
  byte local_1ec;
  undefined4 local_1e8 [3];
  byte local_1dc;
  undefined1 local_1d8 [12];
  byte local_1cc;
  undefined4 local_1c8 [3];
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  uint local_15c;
  undefined8 local_158;
  undefined4 local_150;
  uint local_14c;
  undefined4 *local_148;
  undefined1 *local_140;
  undefined4 *local_138;
  undefined4 *local_130;
  undefined1 *local_128;
  undefined4 *local_120;
  undefined4 *local_118;
  undefined1 *local_110;
  undefined4 *local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_2b0 = "gml_Script_StatesHoarderTongueDig";
  local_2b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2b8;
  local_2a8 = 0x347;
  pcVar10 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_248,0x10,10,FUN_1400424d0,FUN_140041b30);
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_2cc = 0;
  local_2d8 = 0;
  local_294 = 0;
  local_2a0 = 0;
  local_25c = 0;
  local_268 = 0;
  local_16c = 0;
  local_178 = 0;
  local_17c = 0;
  local_188 = 0;
  local_18c = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2a8 = 0x349;
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
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddfd64) &&
     (_Init_thread_header(&DAT_141ddfd64), DAT_141ddfd64 == -1)) {
    _DAT_141ddfc6c = 0;
    _DAT_141ddfc60 = 0x4000000000000000;
    _DAT_141ddfc80 = 0;
    _DAT_141ddfc74 = 0;
    _DAT_141ddfc84 = 1;
    _DAT_141ddfc94 = 0;
    _DAT_141ddfc88 = 0x3ff0000000000000;
    _DAT_141ddfc98 = 2;
    _DAT_141ddfca8 = 0;
    _DAT_141ddfc9c = 0x4008000000000000;
    _DAT_141ddfcac = 3;
    atexit((_func_5014 *)&LAB_141482090);
    _Init_thread_footer(&DAT_141ddfd64);
  }
  uVar8 = 0;
  do {
    iVar3 = FUN_140e851f0(&DAT_141ddfc60 + (longlong)(int)uVar8 * 0x14,&local_f8,DAT_141955260,0);
    uVar9 = (undefined4)((ulonglong)pcVar10 >> 0x20);
    if (iVar3 == 0) {
      iVar3 = *(int *)(&DAT_141ddfc70 + (longlong)(int)uVar8 * 0x14);
      if (iVar3 == 0) {
        local_2a8 = 0x34d;
        uStack_2dc = 0xf;
        local_2e8 = (longlong *)0x10000010000017f;
        local_2c8 = 0x17f;
        uStack_2c4 = 0x1000001;
        uStack_2c0 = uStack_2e0;
        uStack_2bc = 0xf;
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        FUN_140041b80(&local_1a8,&local_2c8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1a8);
        local_2a8 = 0x34e;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_24c = 0;
        local_258 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_258);
        local_2a8 = 0x34f;
        if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        local_26c = 0;
        local_278 = 0x3ff0000000000000;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_278);
        local_2a8 = 0x351;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        puVar5 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
        if (puVar5 != local_248) {
          local_2c8 = *puVar5;
          uStack_2c4 = puVar5[1];
          uStack_2c0 = puVar5[2];
          uStack_2bc = puVar5[3];
          if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_248);
          }
          FUN_140041b80(local_248,&local_2c8);
        }
        local_148 = local_248;
        local_2c8 = _DAT_141dd3f88;
        uStack_2c4 = uRam0000000141dd3f8c;
        uStack_2c0 = uRam0000000141dd3f90;
        uStack_2bc = DAT_141dd3f94;
        if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_238);
        }
        FUN_140041b80(local_238,&local_2c8);
        local_140 = local_238;
        local_2c8 = _DAT_1419e6290;
        uStack_2c4 = uRam00000001419e6294;
        uStack_2c0 = uRam00000001419e6298;
        uStack_2bc = uRam00000001419e629c;
        if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_228);
        }
        FUN_140041b80(local_228,&local_2c8);
        local_138 = local_228;
        FUN_140e634e0(local_res8,local_res10,&local_2d8,3,CONCAT44(uVar9,DAT_1419ff3d8),&local_148);
        local_2a8 = 0x353;
      }
      else if (iVar3 == 1) {
        local_2a8 = 0x357;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        uStack_2dc = 0xf;
        local_2e8 = (longlong *)0x10000010000017f;
        local_288 = 0x10000010000017f;
        uStack_280 = uStack_2e0;
        uStack_27c = 0xf;
        if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_248);
        }
        FUN_140041b80(local_248,&local_288);
        local_148 = local_248;
        local_2e8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_2e0 = DAT_1419df7b8;
        uStack_2dc = DAT_1419df7bc;
        if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_238);
        }
        FUN_140041b80(local_238,&local_2e8);
        local_140 = local_238;
        ppuVar11 = &local_148;
        uVar4 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_2d8,2,ppuVar11);
        cVar2 = FUN_140e491e0(uVar4);
        if (cVar2 == '\0') {
          local_2a8 = 0x36a;
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          uVar9 = (undefined4)((ulonglong)ppuVar11 >> 0x20);
          local_2d8 = 0;
          local_2d0 = 0;
          local_2cc = 5;
          if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a0);
          }
          local_2a0 = 0;
          local_298 = 0;
          local_294 = 5;
          puVar5 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          if (puVar5 != local_248) {
            local_2c8 = *puVar5;
            uStack_2c4 = puVar5[1];
            uStack_2c0 = puVar5[2];
            uStack_2bc = puVar5[3];
            if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_248);
            }
            FUN_140041b80(local_248,&local_2c8);
          }
          local_148 = local_248;
          local_2c8 = _DAT_141dd3f88;
          uStack_2c4 = uRam0000000141dd3f8c;
          uStack_2c0 = uRam0000000141dd3f90;
          uStack_2bc = DAT_141dd3f94;
          if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_238);
          }
          FUN_140041b80(local_238,&local_2c8);
          local_140 = local_238;
          uVar4 = CONCAT44(uVar9,DAT_1419ff4f8);
          puVar5 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_2a0,2,uVar4,&local_148)
          ;
          uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
          if (puVar5 != local_228) {
            local_2c8 = *puVar5;
            uStack_2c4 = puVar5[1];
            uStack_2c0 = puVar5[2];
            uStack_2bc = puVar5[3];
            if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_228);
            }
            FUN_140041b80(local_228,&local_2c8);
          }
          local_138 = local_228;
          uVar14 = CONCAT44(uVar9,DAT_141a02ef8);
          uVar4 = FUN_140e634e0(local_res8,local_res10,&local_2d8,1,uVar14,&local_138);
          uVar9 = (undefined4)((ulonglong)uVar14 >> 0x20);
          cVar2 = FUN_140e491e0(uVar4);
          if (cVar2 != '\0') {
            puVar5 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_268);
            }
            local_268 = 0;
            local_260 = 0;
            local_25c = 5;
            if (puVar5 != local_218) {
              local_2c8 = *puVar5;
              uStack_2c4 = puVar5[1];
              uStack_2c0 = puVar5[2];
              uStack_2bc = puVar5[3];
              if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_218);
              }
              FUN_140041b80(local_218,&local_2c8);
            }
            local_2c8 = _DAT_141dd3f88;
            uStack_2c4 = uRam0000000141dd3f8c;
            uStack_2c0 = uRam0000000141dd3f90;
            uStack_2bc = DAT_141dd3f94;
            local_130 = local_218;
            if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_208);
            }
            FUN_140041b80(local_208,&local_2c8);
            local_128 = local_208;
            ppuVar11 = &local_130;
            uVar12 = CONCAT44(uVar9,DAT_1419ff4f8);
            uVar4 = FUN_140e634e0(local_res8,local_res10,&local_268,2,uVar12,ppuVar11);
            uVar12 = uVar12 & 0xffffffffffffff00;
            FUN_140e87440(uVar4,DAT_141a1f2b0,0x80000000,&local_98,uVar12,
                          (ulonglong)ppuVar11 & 0xffffffffffffff00);
            uVar9 = (undefined4)(uVar12 >> 0x20);
            uStack_2dc = 10;
            local_2e8 = (longlong *)0x9;
            iVar3 = FUN_140e851f0(&local_98,&local_2e8,DAT_141955260,0);
            if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2e8);
            }
            if (iVar3 == 0) {
              if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_188);
              }
              local_188 = 0;
              local_180 = 0;
              local_17c = 5;
              puVar5 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
              if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_178);
              }
              local_178 = 0;
              local_170 = 0;
              local_16c = 5;
              if (puVar5 != local_1f8) {
                local_2c8 = *puVar5;
                uStack_2c4 = puVar5[1];
                uStack_2c0 = puVar5[2];
                uStack_2bc = puVar5[3];
                if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_1f8);
                }
                FUN_140041b80(local_1f8,&local_2c8);
              }
              local_120 = local_1f8;
              local_2c8 = _DAT_141dd3f88;
              uStack_2c4 = uRam0000000141dd3f8c;
              uStack_2c0 = uRam0000000141dd3f90;
              uStack_2bc = DAT_141dd3f94;
              if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1e8);
              }
              FUN_140041b80(local_1e8,&local_2c8);
              local_118 = local_1e8;
              ppuVar11 = &local_120;
              uVar12 = CONCAT44(uVar9,DAT_1419ff4f8);
              uVar4 = FUN_140e634e0(local_res8,local_res10,&local_178,2,uVar12,ppuVar11);
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_140e87440(uVar4,DAT_1419fd3b8,0x80000000,&local_a8,uVar12,
                            (ulonglong)ppuVar11 & 0xffffffffffffff00);
              uVar9 = (undefined4)(uVar12 >> 0x20);
              local_2c8 = _DAT_141dc66e0;
              uStack_2c4 = uRam0000000141dc66e4;
              uStack_2c0 = uRam0000000141dc66e8;
              uStack_2bc = uRam0000000141dc66ec;
              if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1d8);
              }
              FUN_140041b80(local_1d8,&local_2c8);
              local_110 = local_1d8;
              uVar14 = CONCAT44(uVar9,DAT_141a0a0d8);
              uVar4 = FUN_140e634e0(local_res8,local_res10,&local_188,1,uVar14,&local_110);
              uVar9 = (undefined4)((ulonglong)uVar14 >> 0x20);
              uVar8 = FUN_140e851f0(&local_a8,uVar4,DAT_141955260,1);
              if (uVar8 < 0x80000000) {
                puVar5 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
                if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_198);
                }
                local_198 = 0;
                local_190 = 0;
                local_18c = 5;
                if (puVar5 != local_1c8) {
                  local_2c8 = *puVar5;
                  uStack_2c4 = puVar5[1];
                  uStack_2c0 = puVar5[2];
                  uStack_2bc = puVar5[3];
                  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(local_1c8);
                  }
                  FUN_140041b80(local_1c8,&local_2c8);
                }
                local_108 = local_1c8;
                local_2c8 = _DAT_141dd3f88;
                uStack_2c4 = uRam0000000141dd3f8c;
                uStack_2c0 = uRam0000000141dd3f90;
                uStack_2bc = DAT_141dd3f94;
                if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_1b8);
                }
                FUN_140041b80(local_1b8,&local_2c8);
                local_100 = local_1b8;
                uVar4 = FUN_140e634e0(local_res8,local_res10,&local_198,2,
                                      CONCAT44(uVar9,DAT_1419ff4f8),&local_108);
                plVar15 = local_res8;
                uVar12 = local_res10;
                FUN_140e87170(uVar4,DAT_1419fe158,0x80000000,&local_168,local_res8,local_res10);
                uStack_2dc = 6;
                local_2e8 = local_res8;
                uVar12 = uVar12 & 0xffffffffffffff00;
                uVar16 = (ulonglong)plVar15 & 0xffffffffffffff00;
                FUN_140e87440(&local_2e8,DAT_1419fe158,0x80000000,&local_b8,uVar16,uVar12);
                if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2e8);
                }
                uStack_27c = local_15c;
                uStack_280 = local_160;
                if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
                  local_288 = local_168;
                }
                else {
                  FUN_1400419b0(&local_288,&local_168);
                }
                FUN_1400462a0(&local_288,&local_b8);
                if ((uStack_27c & 0xffffff) == 0) {
                  uVar9 = (undefined4)local_288;
                }
                else {
                  uVar9 = FUN_140e4b060(&local_288);
                }
                dVar1 = (double)FUN_140e78d00(uVar9);
                if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_288);
                }
                if (dVar1 < 56.0) {
                  uStack_2dc = 6;
                  local_2e8 = local_res8;
                  uVar12 = uVar12 & 0xffffffffffffff00;
                  uVar16 = uVar16 & 0xffffffffffffff00;
                  FUN_140e87440(&local_2e8,DAT_141a0a818,0x80000000,&local_c8,uVar16,uVar12);
                  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2e8);
                  }
                  uStack_2dc = 0;
                  local_2e8 = (longlong *)0x0;
                  iVar3 = FUN_140e851f0(&local_c8,&local_2e8,DAT_141955260,0);
                  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2e8);
                  }
                  if (iVar3 == 0) {
                    uStack_2dc = 6;
                    local_2e8 = local_res8;
                    FUN_140e87440(&local_2e8,DAT_141a0a728,0x80000000,&local_d8,
                                  uVar16 & 0xffffffffffffff00,uVar12 & 0xffffffffffffff00);
                    if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_2e8);
                    }
                    uStack_2dc = 0xf;
                    local_2e8 = (longlong *)0x10000010000017f;
                    iVar3 = FUN_140e851f0(&local_d8,&local_2e8,DAT_141955260,0);
                    if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_2e8);
                    }
                    if (iVar3 == 0) {
                      uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
                      uStack_2dc = 0;
                      local_2e8 = (longlong *)0x4024000000000000;
                      uVar8 = FUN_140e851f0(uVar4,&local_2e8,DAT_141955260,1);
                      if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_2e8);
                      }
                      if (uVar8 < 0x80000000) {
                        local_2a8 = 0x372;
                        uStack_2dc = 0xf;
                        local_2e8 = (longlong *)0x10000010000017e;
                        local_2c8 = 0x17e;
                        uStack_2c4 = 0x1000001;
                        uStack_2c0 = uStack_2e0;
                        uStack_2bc = 0xf;
                        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
                          FUN_140041a50(&local_1a8);
                        }
                        FUN_140041b80(&local_1a8,&local_2c8);
                        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1a8);
                        local_2a8 = 0x373;
                        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
                          FUN_140041a50(&local_258);
                        }
                        local_24c = 0;
                        local_258 = 0;
                        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_258);
                        local_2a8 = 0x374;
                        if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
                          FUN_140041a50(&local_278);
                        }
                        local_26c = 0;
                        local_278 = 0x3ff0000000000000;
                        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_278);
                      }
                    }
                  }
                }
              }
            }
          }
          local_2a8 = 0x378;
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          local_2d8 = 0;
          local_2d0 = 0;
          local_2cc = 5;
          uStack_2dc = 0xf;
          local_2e8 = (longlong *)0x10000010000017e;
          local_2c8 = 0x17e;
          uStack_2c4 = 0x1000001;
          uStack_2c0 = uStack_2e0;
          uStack_2bc = 0xf;
          if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_248);
          }
          FUN_140041b80(local_248,&local_2c8);
          local_148 = local_248;
          local_2c8 = (undefined4)DAT_1419df7b0;
          uStack_2c4 = DAT_1419df7b0._4_4_;
          uStack_2c0 = DAT_1419df7b8;
          uStack_2bc = DAT_1419df7bc;
          if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_238);
          }
          FUN_140041b80(local_238,&local_2c8);
          local_140 = local_238;
          uVar4 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_2d8,2,&local_148);
          cVar2 = FUN_140e491e0(uVar4);
          if (cVar2 != '\0') {
            local_2a8 = 0x37a;
            if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a0);
            }
            local_2a0 = 0;
            local_298 = 0;
            local_294 = 5;
            local_2c8 = _DAT_1419e6330;
            uStack_2c4 = uRam00000001419e6334;
            uStack_2c0 = uRam00000001419e6338;
            uStack_2bc = uRam00000001419e633c;
            if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_228);
            }
            FUN_140041b80(local_228,&local_2c8);
            local_138 = local_228;
            local_2c8 = (undefined4)DAT_1419df7b0;
            uStack_2c4 = DAT_1419df7b0._4_4_;
            uStack_2c0 = DAT_1419df7b8;
            uStack_2bc = DAT_1419df7bc;
            if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_218);
            }
            FUN_140041b80(local_218,&local_2c8);
            local_130 = local_218;
            gml_Script_truestate_begin_step(local_res8,local_res10,&local_2a0,2,&local_138);
          }
          local_2a8 = 0x37e;
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          local_2d8 = 0;
          local_2d0 = 0;
          local_2cc = 5;
          uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd4b8);
          FUN_140e63610(local_res8,local_res10,&local_2d8,0,uVar4,0);
          local_2a8 = 0x37f;
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          local_2d8 = 0;
          local_2d0 = 0;
          local_2cc = 5;
          uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd418);
          FUN_140e63610(local_res8,local_res10,&local_2d8,0,uVar4,0);
          local_2a8 = 0x380;
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          local_2d8 = 0;
          local_2d0 = 0;
          local_2cc = 5;
          uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd398);
          FUN_140e63610(local_res8,local_res10,&local_2d8,0,uVar4,0);
          local_2a8 = 0x382;
        }
        else {
          local_2a8 = 0x359;
          if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a0);
          }
          local_2a0 = 0;
          local_298 = 0;
          local_294 = 5;
          if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_268);
          }
          local_268 = 0;
          local_260 = 0;
          local_25c = 5;
          puVar5 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
          uStack_2dc = 6;
          local_2e8 = local_res8;
          in_stack_fffffffffffffd10 = in_stack_fffffffffffffd10 & 0xffffffffffffff00;
          uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
          FUN_140e87440(&local_2e8,DAT_1419fe0e8,0x80000000,&local_158,uVar12,
                        in_stack_fffffffffffffd10);
          if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2e8);
          }
          uStack_2dc = 6;
          local_2e8 = local_res8;
          uVar12 = uVar12 & 0xffffffffffffff00;
          FUN_140e87440(&local_2e8,DAT_141a101f8,0x80000000,&local_88,uVar12,
                        in_stack_fffffffffffffd10 & 0xffffffffffffff00);
          uVar9 = (undefined4)(uVar12 >> 0x20);
          if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2e8);
          }
          uStack_2dc = 0;
          local_2e8 = (longlong *)0x4038000000000000;
          FUN_140042560(&local_2e8,uVar4);
          uStack_27c = local_14c;
          uStack_280 = local_150;
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
            local_288 = local_158;
          }
          else {
            FUN_1400419b0(&local_288,&local_158);
          }
          FUN_1400460e0(&local_288,&local_2e8);
          local_2c8 = (undefined4)local_288;
          uStack_2c4 = local_288._4_4_;
          uStack_2c0 = uStack_280;
          uStack_2bc = uStack_27c;
          if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_228);
          }
          FUN_140041b80(local_228,&local_2c8);
          if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2e8);
          }
          local_138 = local_228;
          local_2c8 = (undefined4)local_88;
          uStack_2c4 = local_88._4_4_;
          uStack_2c0 = uStack_80;
          uStack_2bc = uStack_7c;
          if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_218);
          }
          FUN_140041b80(local_218,&local_2c8);
          local_2c8 = _DAT_141dd3fa8;
          uStack_2c4 = uRam0000000141dd3fac;
          uStack_2c0 = uRam0000000141dd3fb0;
          uStack_2bc = DAT_141dd3fb4;
          local_130 = local_218;
          if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_208);
          }
          FUN_140041b80(local_208,&local_2c8);
          local_128 = local_208;
          uStack_2dc = 0xf;
          local_2e8 = (longlong *)0x100000000000034;
          local_2c8 = 0x34;
          uStack_2c4 = 0x1000000;
          uStack_2c0 = uStack_2e0;
          uStack_2bc = 0xf;
          if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1f8);
          }
          FUN_140041b80(local_1f8,&local_2c8);
          local_120 = local_1f8;
          if (puVar5 != local_1e8) {
            local_2c8 = *puVar5;
            uStack_2c4 = puVar5[1];
            uStack_2c0 = puVar5[2];
            uStack_2bc = puVar5[3];
            if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1e8);
            }
            FUN_140041b80(local_1e8,&local_2c8);
          }
          local_118 = local_1e8;
          local_2c8 = _DAT_141dd3f88;
          uStack_2c4 = uRam0000000141dd3f8c;
          uStack_2c0 = uRam0000000141dd3f90;
          uStack_2bc = DAT_141dd3f94;
          if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1d8);
          }
          FUN_140041b80(local_1d8,&local_2c8);
          local_110 = local_1d8;
          uVar4 = CONCAT44(uVar9,DAT_141a0a7c8);
          puVar6 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_268,4,uVar4,&local_138)
          ;
          uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
          if (puVar6 != local_1c8) {
            local_2c8 = *puVar6;
            uStack_2c4 = puVar6[1];
            uStack_2c0 = puVar6[2];
            uStack_2bc = puVar6[3];
            if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1c8);
            }
            FUN_140041b80(local_1c8,&local_2c8);
          }
          local_108 = local_1c8;
          uVar4 = CONCAT44(uVar9,DAT_1419ff3d8);
          FUN_140e634e0(local_res8,local_res10,&local_2a0,3,uVar4,&local_118);
          uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
          local_2a8 = 0x35a;
          if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_278);
          }
          local_26c = 0;
          local_278 = 0;
          FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_278);
          local_2a8 = 0x35b;
          puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd3b8);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar7);
          }
          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
          *puVar7 = 0;
          local_2a8 = 0x35d;
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          local_2d8 = 0;
          local_2d0 = 0;
          local_2cc = 5;
          if (puVar5 != local_248) {
            local_2c8 = *puVar5;
            uStack_2c4 = puVar5[1];
            uStack_2c0 = puVar5[2];
            uStack_2bc = puVar5[3];
            if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_248);
            }
            FUN_140041b80(local_248,&local_2c8);
          }
          local_148 = local_248;
          local_2c8 = _DAT_141dd3f88;
          uStack_2c4 = uRam0000000141dd3f8c;
          uStack_2c0 = uRam0000000141dd3f90;
          uStack_2bc = DAT_141dd3f94;
          if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_238);
          }
          FUN_140041b80(local_238,&local_2c8);
          local_140 = local_238;
          ppuVar11 = &local_148;
          ppuVar13 = (undefined4 **)CONCAT44(uVar9,DAT_1419ff4f8);
          uVar4 = FUN_140e634e0(local_res8,local_res10,&local_2d8,2,ppuVar13,ppuVar11);
          iVar3 = FUN_140e63cb0(local_78,&local_res8,&local_res10,uVar4);
          if (0 < iVar3) {
            do {
              (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
              local_2a8 = 0x35f;
              (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
              puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
              uStack_2dc = 6;
              local_2e8 = (longlong *)local_res10;
              ppuVar11 = (undefined4 **)((ulonglong)ppuVar11 & 0xffffffffffffff00);
              FUN_140e87440(&local_2e8,DAT_141a0a828,0x80000000,&local_e8,
                            (ulonglong)ppuVar13 & 0xffffffffffffff00,ppuVar11);
              if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2e8);
              }
              FUN_140e609c0(local_res8);
              if (&local_e8 != puVar7) {
                local_2c8 = (undefined4)local_e8;
                uStack_2c4 = local_e8._4_4_;
                uStack_2c0 = uStack_e0;
                uStack_2bc = uStack_dc;
                if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar7);
                }
                FUN_140041b80(puVar7,&local_2c8);
              }
              FUN_140e60910(1);
              local_2a8 = 0x360;
              puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a748);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar7);
              }
              *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
              *puVar7 = 0;
              local_2a8 = 0x361;
              puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a858);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar7);
              }
              *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
              *puVar7 = 0;
              local_2a8 = 0x363;
              if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2d8);
              }
              local_2d8 = 0;
              local_2d0 = 0;
              local_2cc = 5;
              local_2c8 = _DAT_1419e62b0;
              uStack_2c4 = uRam00000001419e62b4;
              uStack_2c0 = uRam00000001419e62b8;
              uStack_2bc = uRam00000001419e62bc;
              if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_248);
              }
              FUN_140041b80(local_248,&local_2c8);
              local_148 = local_248;
              local_2c8 = (undefined4)DAT_1419df7b0;
              uStack_2c4 = DAT_1419df7b0._4_4_;
              uStack_2c0 = DAT_1419df7b8;
              uStack_2bc = DAT_1419df7bc;
              if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_238);
              }
              FUN_140041b80(local_238,&local_2c8);
              local_140 = local_238;
              ppuVar13 = &local_148;
              gml_Script_truestate_begin_step(local_res8,local_res10,&local_2d8,2,ppuVar13);
              cVar2 = FUN_140e643f0(local_78,&local_res8,&local_res10);
            } while (cVar2 != '\0');
          }
          FUN_140e63970(local_78,&local_res8,&local_res10);
          local_2a8 = 0x366;
          if (local_68 != 0) {
            FUN_140e4cd60();
          }
        }
      }
      else if (iVar3 == 2) {
        local_2a8 = 0x386;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5b18);
        FUN_140e63610(local_res8,local_res10,&local_2d8,0,uVar4,0);
        local_2a8 = 0x387;
      }
      else if (iVar3 == 3) {
        local_2a8 = 0x38b;
      }
      break;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a0);
  }
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  _eh_vector_destructor_iterator_(local_248,0x10,10,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_2b8;
  return param_3;
}

