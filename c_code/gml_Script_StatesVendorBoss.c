// gml_Script_StatesVendorBoss @ 0x1405bb880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesVendorBoss
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  code *pcVar12;
  ulonglong uVar13;
  undefined8 **ppuVar14;
  undefined1 **ppuVar15;
  ulonglong uVar16;
  undefined8 **ppuVar17;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_21c;
  undefined8 local_218;
  char *local_210;
  undefined4 local_208;
  undefined8 local_1f8;
  byte local_1ec;
  undefined8 local_1e8;
  byte local_1dc;
  undefined8 local_1d8;
  byte local_1cc;
  undefined1 local_1c8 [12];
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined8 local_1a8;
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  
  uVar7 = 0;
  local_210 = "gml_Script_StatesVendorSummon";
  local_218 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_218;
  local_208 = 0x13b;
  pcVar12 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_1f8,0x10,0xb,FUN_1400424d0,FUN_140041b30);
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  puVar6 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57ca0);
  local_21c = 0xffffff;
  local_228 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_24c = 0;
  local_258 = 0;
  local_22c = 0;
  local_238 = 0;
  local_11c = 0;
  local_128 = 0;
  local_12c = 0;
  local_138 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_208 = 0x13d;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_8c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_90 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
    local_98 = *param_5;
  }
  else {
    FUN_1400419b0(&local_98);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de0b80) &&
     (_Init_thread_header(&DAT_141de0b80), DAT_141de0b80 == -1)) {
    _DAT_141de0b3c = 0;
    _DAT_141de0b30 = 0x4000000000000000;
    _DAT_141de0b50 = 0;
    _DAT_141de0b44 = 0;
    _DAT_141de0b54 = 1;
    _DAT_141de0b64 = 0;
    _DAT_141de0b58 = 0x3ff0000000000000;
    _DAT_141de0b68 = 2;
    _DAT_141de0b78 = 0;
    _DAT_141de0b6c = 0x4008000000000000;
    _DAT_141de0b7c = 3;
    atexit((_func_5014 *)&LAB_141483560);
    _Init_thread_footer(&DAT_141de0b80);
  }
  uVar11 = 0;
  do {
    iVar3 = FUN_140e851f0(&DAT_141de0b30 + (longlong)(int)uVar11 * 0x14,&local_98,DAT_141955260,0);
    uVar4 = (undefined4)((ulonglong)pcVar12 >> 0x20);
    if (iVar3 == 0) {
      iVar3 = *(int *)(&DAT_141de0b40 + (longlong)(int)uVar11 * 0x14);
      bVar1 = (byte)local_24c;
      if (iVar3 == 0) {
        local_208 = 0x141;
        if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
        if (puVar8 != &local_1e8) {
          local_268 = *(undefined4 *)puVar8;
          uStack_264 = *(undefined4 *)((longlong)puVar8 + 4);
          uStack_260 = *(undefined4 *)(puVar8 + 1);
          uStack_25c = *(undefined4 *)((longlong)puVar8 + 0xc);
          if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          FUN_140041b80(&local_1e8,&local_268);
        }
        local_100 = &local_1e8;
        local_268 = _DAT_141dd44c8;
        uStack_264 = uRam0000000141dd44cc;
        uStack_260 = uRam0000000141dd44d0;
        uStack_25c = DAT_141dd44d4;
        if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_268);
        local_f8 = &local_1d8;
        local_268 = _DAT_1419df7a0;
        uStack_264 = uRam00000001419df7a4;
        uStack_260 = uRam00000001419df7a8;
        uStack_25c = uRam00000001419df7ac;
        if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1c8);
        }
        FUN_140041b80(local_1c8,&local_268);
        local_f0 = local_1c8;
        uVar9 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(param_1,param_2,&local_258,3,uVar9,&local_100);
        uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
        local_208 = 0x142;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        if (puVar8 != &local_1f8) {
          local_268 = *(undefined4 *)puVar8;
          uStack_264 = *(undefined4 *)((longlong)puVar8 + 4);
          uStack_260 = *(undefined4 *)(puVar8 + 1);
          uStack_25c = *(undefined4 *)((longlong)puVar8 + 0xc);
          if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          FUN_140041b80(&local_1f8,&local_268);
        }
        local_108 = &local_1f8;
        local_268 = _DAT_141dd4508;
        uStack_264 = uRam0000000141dd450c;
        uStack_260 = uRam0000000141dd4510;
        uStack_25c = DAT_141dd4514;
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_268);
        local_100 = &local_1e8;
        local_268 = _DAT_141dc6730;
        uStack_264 = uRam0000000141dc6734;
        uStack_260 = uRam0000000141dc6738;
        uStack_25c = uRam0000000141dc673c;
        if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_268);
        local_f8 = &local_1d8;
        ppuVar17 = &local_108;
        uVar13 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(param_1,param_2,&local_258,3,uVar13,ppuVar17);
        local_208 = 0x144;
        uStack_26c = 0xd;
        local_278 = (longlong *)0x0;
        if (&local_278 != puVar5) {
          local_268 = 0;
          uStack_264 = 0;
          uStack_260 = uStack_270;
          uStack_25c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_268);
        }
        local_208 = 0x145;
        uStack_26c = 0xd;
        local_278 = (longlong *)0x0;
        if (&local_278 != puVar6) {
          local_268 = 0;
          uStack_264 = 0;
          uStack_260 = uStack_270;
          uStack_25c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_268);
        }
        local_208 = 0x147;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        (**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
        uStack_26c = 0xf;
        local_278 = (longlong *)0x1000000000000ee;
        uVar16 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_140e87440(&local_278,DAT_1419f5868,0x80000000,&local_228,uVar13,uVar16);
        if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        FUN_140e87440(&local_228,DAT_141a55540,0x80000000,&local_a8,uVar13 & 0xffffffffffffff00,
                      uVar16 & 0xffffffffffffff00);
        local_268 = _DAT_141dd44d8;
        uStack_264 = uRam0000000141dd44dc;
        uStack_260 = uRam0000000141dd44e0;
        uStack_25c = DAT_141dd44e4;
        if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_268);
        local_108 = &local_1f8;
        switch(local_21c) {
        case 0:
        case 7:
        case 10:
        case 0xd:
switchD_1405bd0e8_caseD_0:
          uVar4 = FUN_140e4a8b0(&local_228);
          uVar7 = FUN_140e87250(uVar4);
          break;
        case 6:
          uVar7 = local_228;
          break;
        case 0xf:
          iVar3 = (int)((ulonglong)local_228 >> 0x20);
          if ((iVar3 == 0x1000000) || (iVar3 == 0x4000001)) goto switchD_1405bd0e8_caseD_0;
        }
        FUN_140e63610(uVar7,param_2,&local_258,1,&local_a8,&local_108);
        local_208 = 0x149;
      }
      else if (iVar3 == 1) {
        local_208 = 0x14d;
        if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
        if (puVar8 != &local_1f8) {
          local_278 = (longlong *)*puVar8;
          uStack_270 = *(undefined4 *)(puVar8 + 1);
          uStack_26c = *(undefined4 *)((longlong)puVar8 + 0xc);
          if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          FUN_140041b80(&local_1f8,&local_278);
        }
        local_108 = &local_1f8;
        local_278 = (longlong *)CONCAT44(uRam0000000141dd44cc,_DAT_141dd44c8);
        uStack_270 = uRam0000000141dd44d0;
        uStack_26c = DAT_141dd44d4;
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_278);
        local_100 = &local_1e8;
        uVar10 = CONCAT44(uVar4,DAT_1419ff4f8);
        uVar9 = FUN_140e634e0(param_1,param_2,&local_258,2,uVar10,&local_108);
        uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
        cVar2 = FUN_140e491e0(uVar9);
        if (cVar2 == '\0') {
          if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          local_238 = 0;
          local_230 = 0;
          local_22c = 5;
          puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
          if (puVar8 != &local_1d8) {
            local_278 = (longlong *)*puVar8;
            uStack_270 = *(undefined4 *)(puVar8 + 1);
            uStack_26c = *(undefined4 *)((longlong)puVar8 + 0xc);
            if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            FUN_140041b80(&local_1d8,&local_278);
          }
          local_f8 = &local_1d8;
          local_278 = (longlong *)CONCAT44(uRam0000000141dd450c,_DAT_141dd4508);
          uStack_270 = uRam0000000141dd4510;
          uStack_26c = DAT_141dd4514;
          if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1c8);
          }
          FUN_140041b80(local_1c8,&local_278);
          local_f0 = local_1c8;
          uVar13 = CONCAT44(uVar4,DAT_1419ff4f8);
          uVar9 = FUN_140e634e0(param_1,param_2,&local_238,2,uVar13,&local_f8);
          uStack_26c = 0;
          local_278 = (longlong *)0x4008000000000000;
          iVar3 = FUN_140e851f0(uVar9,&local_278,DAT_141955260,1);
          if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_278);
          }
          uVar4 = (undefined4)(uVar13 >> 0x20);
          if (iVar3 != -2 && iVar3 < 1) {
            if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_128);
            }
            local_128 = 0;
            local_120 = 0;
            local_11c = 5;
            uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd3b8);
            local_278 = (longlong *)CONCAT44(uRam0000000141dc6734,_DAT_141dc6730);
            uStack_270 = uRam0000000141dc6738;
            uStack_26c = uRam0000000141dc673c;
            if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1b8);
            }
            FUN_140041b80(local_1b8,&local_278);
            local_e8 = local_1b8;
            ppuVar15 = &local_e8;
            uVar13 = CONCAT44(uVar4,DAT_141a0a0d8);
            uVar10 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar13,ppuVar15);
            iVar3 = FUN_140e851f0(uVar9,uVar10,DAT_141955260,1);
            if ((iVar3 != -2) && (-1 < iVar3)) {
              local_208 = 0x14f;
              if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_138);
              }
              local_138 = 0;
              local_130 = 0;
              local_12c = 5;
              if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_148);
              }
              local_148 = 0;
              local_140 = 0;
              local_13c = 5;
              puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
              uStack_26c = 0xf;
              local_278 = (longlong *)0x1000000000000d0;
              uVar16 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
              uVar13 = uVar13 & 0xffffffffffffff00;
              FUN_140e87440(&local_278,DAT_1419fefd8,0x80000000,&local_78,uVar13,uVar16);
              if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_278);
              }
              if (puVar8 != &local_1a8) {
                local_278 = (longlong *)*puVar8;
                uStack_270 = *(undefined4 *)(puVar8 + 1);
                uStack_26c = *(undefined4 *)((longlong)puVar8 + 0xc);
                if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1a8);
                }
                FUN_140041b80(&local_1a8,&local_278);
              }
              local_278 = (longlong *)CONCAT44(uRam0000000141dd450c,_DAT_141dd4508);
              uStack_270 = uRam0000000141dd4510;
              uStack_26c = DAT_141dd4514;
              local_e0 = &local_1a8;
              if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_198);
              }
              FUN_140041b80(local_198,&local_278);
              local_d8 = local_198;
              uStack_26c = 6;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar13 = uVar13 & 0xffffffffffffff00;
              local_278 = param_1;
              FUN_140e87440(&local_278,DAT_1419fe158,0x80000000,&local_118,uVar13,uVar16);
              if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_278);
              }
              uStack_26c = 0xf;
              local_278 = (longlong *)0x100000000000106;
              uVar13 = uVar13 & 0xffffffffffffff00;
              FUN_140e87440(&local_278,DAT_1419f5998,0x80000000,&local_88,uVar13,
                            uVar16 & 0xffffffffffffff00);
              uVar4 = (undefined4)(uVar13 >> 0x20);
              if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_278);
              }
              uVar9 = FUN_140e634e0(param_1,param_2,&local_148,2,CONCAT44(uVar4,DAT_1419ff4f8),
                                    &local_e0);
              uStack_26c = 0;
              local_278 = (longlong *)0x4048000000000000;
              FUN_140042560(&local_278,uVar9);
              uStack_23c = 0;
              local_248 = 0x405b800000000000;
              FUN_1400460e0(&local_248,&local_278);
              local_268 = (undefined4)local_248;
              uStack_264 = local_248._4_4_;
              uStack_260 = uStack_240;
              uStack_25c = uStack_23c;
              if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_188);
              }
              FUN_140041b80(local_188,&local_268);
              if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_248);
              }
              if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_278);
              }
              local_d0 = local_188;
              uStack_23c = local_10c;
              uStack_240 = local_110;
              if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
                local_248 = local_118;
              }
              else {
                FUN_1400419b0(&local_248,&local_118);
              }
              uStack_26c = 7;
              local_278 = (longlong *)CONCAT44(local_278._4_4_,0x40);
              FUN_1400462a0(&local_248,&local_278);
              if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_278);
              }
              local_268 = (undefined4)local_248;
              uStack_264 = local_248._4_4_;
              uStack_260 = uStack_240;
              uStack_25c = uStack_23c;
              if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_178);
              }
              FUN_140041b80(local_178,&local_268);
              if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_248);
              }
              local_c8 = local_178;
              local_268 = (undefined4)local_88;
              uStack_264 = local_88._4_4_;
              uStack_260 = uStack_80;
              uStack_25c = uStack_7c;
              if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_168);
              }
              FUN_140041b80(local_168,&local_268);
              local_c0 = local_168;
              uStack_23c = DAT_141dd44b4;
              uStack_240 = DAT_141dd44b0;
              if ((1 << ((byte)DAT_141dd44b4 & 0x1f) & 0x46U) == 0) {
                local_248 = DAT_141dd44a8;
              }
              else {
                FUN_1400419b0(&local_248,&DAT_141dd44a8);
              }
              uVar4 = uStack_23c;
              local_268 = (undefined4)local_248;
              uStack_264 = local_248._4_4_;
              uStack_260 = uStack_240;
              uStack_25c = uStack_23c;
              if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_158);
              }
              FUN_140041b80(local_158,&local_268);
              if ((1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_248);
              }
              local_b8 = local_158;
              uStack_26c = 0xf;
              local_278 = (longlong *)0x1000000000000d0;
              uVar9 = FUN_140069500(&local_278);
              puVar8 = &local_78;
              FUN_140e63610(uVar9,param_2,&local_138,4,puVar8,&local_d0);
              uVar4 = (undefined4)((ulonglong)puVar8 >> 0x20);
              if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_278);
              }
              local_208 = 0x151;
              if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_258);
              }
              local_258 = 0;
              local_250 = 0;
              local_24c = 5;
              if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_238);
              }
              local_238 = 0;
              local_230 = 0;
              local_22c = 5;
              puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
              if (puVar8 != &local_1f8) {
                local_268 = *(undefined4 *)puVar8;
                uStack_264 = *(undefined4 *)((longlong)puVar8 + 4);
                uStack_260 = *(undefined4 *)(puVar8 + 1);
                uStack_25c = *(undefined4 *)((longlong)puVar8 + 0xc);
                if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1f8);
                }
                FUN_140041b80(&local_1f8,&local_268);
              }
              local_108 = &local_1f8;
              local_268 = _DAT_141dd4508;
              uStack_264 = uRam0000000141dd450c;
              uStack_260 = uRam0000000141dd4510;
              uStack_25c = DAT_141dd4514;
              if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1e8);
              }
              FUN_140041b80(&local_1e8,&local_268);
              local_100 = &local_1e8;
              if (puVar8 != &local_1d8) {
                local_268 = *(undefined4 *)puVar8;
                uStack_264 = *(undefined4 *)((longlong)puVar8 + 4);
                uStack_260 = *(undefined4 *)(puVar8 + 1);
                uStack_25c = *(undefined4 *)((longlong)puVar8 + 0xc);
                if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1d8);
                }
                FUN_140041b80(&local_1d8,&local_268);
              }
              local_f8 = &local_1d8;
              local_268 = _DAT_141dd4508;
              uStack_264 = uRam0000000141dd450c;
              uStack_260 = uRam0000000141dd4510;
              uStack_25c = DAT_141dd4514;
              if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1c8);
              }
              FUN_140041b80(local_1c8,&local_268);
              local_f0 = local_1c8;
              uVar9 = CONCAT44(uVar4,DAT_1419ff4f8);
              puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_238,2,uVar9,&local_108);
              uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
              uStack_23c = *(undefined4 *)((longlong)puVar8 + 0xc);
              uStack_240 = *(undefined4 *)(puVar8 + 1);
              if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
                local_248 = *puVar8;
              }
              else {
                FUN_1400419b0(&local_248,puVar8);
              }
              uStack_26c = 7;
              local_278 = (longlong *)CONCAT44(local_278._4_4_,1);
              FUN_1400460e0(&local_248,&local_278);
              if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_278);
              }
              local_268 = (undefined4)local_248;
              uStack_264 = local_248._4_4_;
              uStack_260 = uStack_240;
              uStack_25c = uStack_23c;
              if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1b8);
              }
              FUN_140041b80(local_1b8,&local_268);
              if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_248);
              }
              local_e8 = local_1b8;
              uVar9 = CONCAT44(uVar4,DAT_1419fd648);
              FUN_140e634e0(param_1,param_2,&local_258,3,uVar9,&local_f8);
              uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
              local_208 = 0x153;
              puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd3b8);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar8);
              }
              *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
              *puVar8 = 0;
              local_208 = 0x154;
              if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_258);
              }
              local_258 = 0;
              local_250 = 0;
              local_24c = 5;
              puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
              if (puVar8 != &local_1f8) {
                local_268 = *(undefined4 *)puVar8;
                uStack_264 = *(undefined4 *)((longlong)puVar8 + 4);
                uStack_260 = *(undefined4 *)(puVar8 + 1);
                uStack_25c = *(undefined4 *)((longlong)puVar8 + 0xc);
                if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1f8);
                }
                FUN_140041b80(&local_1f8,&local_268);
              }
              local_108 = &local_1f8;
              local_268 = _DAT_141dd4508;
              uStack_264 = uRam0000000141dd450c;
              uStack_260 = uRam0000000141dd4510;
              uStack_25c = DAT_141dd4514;
              if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1e8);
              }
              FUN_140041b80(&local_1e8,&local_268);
              local_100 = &local_1e8;
              uVar13 = CONCAT44(uVar4,DAT_1419ff4f8);
              uVar9 = FUN_140e634e0(param_1,param_2,&local_258,2,uVar13,&local_108);
              uStack_26c = 0;
              local_278 = (longlong *)0x4008000000000000;
              uVar11 = FUN_140e851f0(uVar9,&local_278,DAT_141955260,1);
              if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_278);
              }
              uVar4 = (undefined4)(uVar13 >> 0x20);
              if (uVar11 < 0x80000000) {
                local_208 = 0x155;
                if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_238);
                }
                local_238 = 0;
                local_230 = 0;
                local_22c = 5;
                puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
                if (puVar8 != &local_1d8) {
                  local_268 = *(undefined4 *)puVar8;
                  uStack_264 = *(undefined4 *)((longlong)puVar8 + 4);
                  uStack_260 = *(undefined4 *)(puVar8 + 1);
                  uStack_25c = *(undefined4 *)((longlong)puVar8 + 0xc);
                  if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_1d8);
                  }
                  FUN_140041b80(&local_1d8,&local_268);
                }
                local_f8 = &local_1d8;
                local_268 = _DAT_141dd44c8;
                uStack_264 = uRam0000000141dd44cc;
                uStack_260 = uRam0000000141dd44d0;
                uStack_25c = DAT_141dd44d4;
                if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_1c8);
                }
                FUN_140041b80(local_1c8,&local_268);
                local_f0 = local_1c8;
                local_268 = _DAT_1419df7c0;
                uStack_264 = uRam00000001419df7c4;
                uStack_260 = uRam00000001419df7c8;
                uStack_25c = uRam00000001419df7cc;
                if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_1b8);
                }
                FUN_140041b80(local_1b8,&local_268);
                local_e8 = local_1b8;
                uVar9 = CONCAT44(uVar4,DAT_1419ff3d8);
                FUN_140e634e0(param_1,param_2,&local_238,3,uVar9,&local_f8);
                uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
                goto LAB_1405bc923;
              }
            }
          }
          uVar4 = (undefined4)(uVar13 >> 0x20);
        }
LAB_1405bc923:
        local_208 = 0x157;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        if (puVar8 != &local_1f8) {
          local_268 = *(undefined4 *)puVar8;
          uStack_264 = *(undefined4 *)((longlong)puVar8 + 4);
          uStack_260 = *(undefined4 *)(puVar8 + 1);
          uStack_25c = *(undefined4 *)((longlong)puVar8 + 0xc);
          if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          FUN_140041b80(&local_1f8,&local_268);
        }
        local_108 = &local_1f8;
        local_268 = _DAT_141dd44c8;
        uStack_264 = uRam0000000141dd44cc;
        uStack_260 = uRam0000000141dd44d0;
        uStack_25c = DAT_141dd44d4;
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_268);
        local_100 = &local_1e8;
        ppuVar17 = &local_108;
        uVar9 = FUN_140e634e0(param_1,param_2,&local_258,2,CONCAT44(uVar4,DAT_1419ff4f8),ppuVar17);
        cVar2 = FUN_140e491e0(uVar9);
        if (cVar2 != '\0') {
          local_208 = 0x159;
          if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          local_238 = 0;
          local_230 = 0;
          local_22c = 5;
          (**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
          local_268 = _DAT_1419e68b0;
          uStack_264 = uRam00000001419e68b4;
          uStack_260 = uRam00000001419e68b8;
          uStack_25c = uRam00000001419e68bc;
          if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          FUN_140041b80(&local_1d8,&local_268);
          local_f8 = &local_1d8;
          local_268 = (undefined4)DAT_1419df7b0;
          uStack_264 = DAT_1419df7b0._4_4_;
          uStack_260 = DAT_1419df7b8;
          uStack_25c = DAT_1419df7bc;
          if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1c8);
          }
          FUN_140041b80(local_1c8,&local_268);
          local_f0 = local_1c8;
          ppuVar14 = &local_f8;
          gml_Script_truestate_begin_step(param_1,param_2,&local_238,2,ppuVar14);
          local_208 = 0x15a;
          uStack_26c = 0xd;
          local_278 = (longlong *)0x3ff0000000000000;
          if (&local_278 != puVar5) {
            local_268 = 0;
            uStack_264 = 0x3ff00000;
            uStack_260 = uStack_270;
            uStack_25c = 0xd;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar5);
            }
            FUN_140041b80(puVar5,&local_268);
          }
          local_208 = 0x15b;
          uStack_26c = 0xd;
          local_278 = (longlong *)0x3ff0000000000000;
          if (&local_278 != puVar6) {
            local_268 = 0;
            uStack_264 = 0x3ff00000;
            uStack_260 = uStack_270;
            uStack_25c = 0xd;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar6);
            }
            FUN_140041b80(puVar6,&local_268);
          }
          local_208 = 0x15c;
          if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_258);
          }
          local_258 = 0;
          local_250 = 0;
          local_24c = 5;
          uStack_26c = 0xf;
          local_278 = (longlong *)0x1000000000000ee;
          uVar16 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
          uVar13 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
          FUN_140e87440(&local_278,DAT_1419f5868,0x80000000,&local_228,uVar13,uVar16);
          if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_278);
          }
          FUN_140e87440(&local_228,DAT_141a55540,0x80000000,&local_a8,uVar13 & 0xffffffffffffff00,
                        uVar16 & 0xffffffffffffff00);
          local_268 = _DAT_141dd4448;
          uStack_264 = uRam0000000141dd444c;
          uStack_260 = uRam0000000141dd4450;
          uStack_25c = DAT_141dd4454;
          if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          FUN_140041b80(&local_1f8,&local_268);
          local_108 = &local_1f8;
          switch(local_21c) {
          case 0:
          case 7:
          case 10:
          case 0xd:
switchD_1405bcc8a_caseD_0:
            uVar4 = FUN_140e4a8b0(&local_228);
            uVar7 = FUN_140e87250(uVar4);
            break;
          case 6:
            uVar7 = local_228;
            break;
          case 0xf:
            iVar3 = (int)((ulonglong)local_228 >> 0x20);
            if ((iVar3 == 0x1000000) || (iVar3 == 0x4000001)) goto switchD_1405bcc8a_caseD_0;
          }
          FUN_140e63610(uVar7,param_2,&local_258,1,&local_a8,&local_108);
        }
        local_208 = 0x15f;
      }
      else if (iVar3 == 2) {
        local_208 = 0x163;
        if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b18);
        FUN_140e63610(param_1,param_2,&local_258,0,uVar7,0);
        local_208 = 0x164;
      }
      else if (iVar3 == 3) {
        local_208 = 0x168;
      }
      break;
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 4);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  _eh_vector_destructor_iterator_(&local_1f8,0x10,0xb,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_218;
  return param_3;
}

