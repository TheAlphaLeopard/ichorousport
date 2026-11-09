// gml_GlobalScript_StatesPatron @ 0x14055a230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript_StatesPatron
          (longlong *param_1,longlong *param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  longlong *local_res8;
  longlong *local_res10;
  code *pcVar9;
  undefined8 **ppuVar10;
  undefined4 uVar13;
  undefined1 **ppuVar11;
  ulonglong uVar12;
  undefined1 **in_stack_fffffffffffffdf0;
  ulonglong uVar14;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined8 *local_148;
  undefined1 *local_140;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  longlong local_78;
  
  local_1d0 = "gml_Script_StatesHoarderPhaseChange";
  local_1d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1d8;
  local_1c8 = 0x390;
  pcVar9 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_1a8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_12c = 0xffffff;
  local_138 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1c8 = 0x392;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_cc = *(undefined4 *)((longlong)param_5 + 0xc);
  local_d0 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
    local_d8 = *param_5;
  }
  else {
    FUN_1400419b0(&local_d8);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddfb54) &&
     (_Init_thread_header(&DAT_141ddfb54), DAT_141ddfb54 == -1)) {
    _DAT_141ddfabc = 0;
    _DAT_141ddfab0 = 0x4000000000000000;
    _DAT_141ddfad0 = 0;
    _DAT_141ddfac4 = 0;
    _DAT_141ddfad4 = 1;
    _DAT_141ddfae4 = 0;
    _DAT_141ddfad8 = 0x3ff0000000000000;
    _DAT_141ddfae8 = 2;
    _DAT_141ddfaf8 = 0;
    _DAT_141ddfaec = 0x4008000000000000;
    _DAT_141ddfafc = 3;
    atexit((_func_5014 *)&LAB_1414820b0);
    _Init_thread_footer(&DAT_141ddfb54);
  }
  uVar8 = 0;
  do {
    iVar2 = FUN_140e851f0(&DAT_141ddfab0 + (longlong)(int)uVar8 * 0x14,&local_d8,DAT_141955260,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(&DAT_141ddfac0 + (longlong)(int)uVar8 * 0x14);
      if (iVar2 == 0) {
        local_1c8 = 0x397;
        uStack_1fc = 0xf;
        local_208 = (longlong *)0x10000010000016d;
        local_1e8 = 0x10000010000016d;
        uStack_1e0 = uStack_200;
        uStack_1dc = 0xf;
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        FUN_140041b80(&local_e8,&local_1e8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_e8);
        local_1c8 = 0x398;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_fc = 0;
        local_108 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_108);
        local_1c8 = 0x39a;
        puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fdd98);
        uStack_1fc = 0xd;
        local_208 = (longlong *)0x3ff0000000000000;
        if (&local_208 != puVar3) {
          local_1e8 = 0x3ff0000000000000;
          uStack_1e0 = uStack_200;
          uStack_1dc = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar3);
          }
          FUN_140041b80(puVar3,&local_1e8);
        }
        local_1c8 = 0x39b;
        puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fdd28);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        *puVar3 = 0x4008000000000000;
        local_1c8 = 0x39c;
        puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fdae8);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        *puVar3 = 0x4000000000000000;
        local_1c8 = 0x39e;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1f8 = 0;
        local_1f0 = 0;
        local_1ec = 5;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
        puVar6 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fde48);
        uStack_1fc = 6;
        local_208 = local_res8;
        uVar14 = (ulonglong)in_stack_fffffffffffffdf0 & 0xffffffffffffff00;
        uVar12 = (ulonglong)pcVar9 & 0xffffffffffffff00;
        FUN_140e87440(&local_208,DAT_1419fe0e8,0x80000000,&local_118,uVar12,uVar14);
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        uStack_1fc = 6;
        local_208 = local_res8;
        uVar12 = uVar12 & 0xffffffffffffff00;
        FUN_140e87440(&local_208,DAT_1419fe158,0x80000000,&local_128,uVar12,
                      uVar14 & 0xffffffffffffff00);
        uVar13 = (undefined4)(uVar12 >> 0x20);
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        uStack_1fc = 0;
        local_208 = (longlong *)0x4030000000000000;
        FUN_140042560(&local_208,uVar4);
        uStack_1dc = local_10c;
        uStack_1e0 = local_110;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
          local_1e8 = local_118;
        }
        else {
          FUN_1400419b0(&local_1e8,&local_118);
        }
        FUN_1400460e0(&local_1e8,&local_208);
        local_1b8 = (undefined4)local_1e8;
        uStack_1b4 = local_1e8._4_4_;
        uStack_1b0 = uStack_1e0;
        uStack_1ac = uStack_1dc;
        if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1a8);
        }
        FUN_140041b80(local_1a8,&local_1b8);
        if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_158 = local_1a8;
        uStack_1dc = local_11c;
        uStack_1e0 = local_120;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
          local_1e8 = local_128;
        }
        else {
          FUN_1400419b0(&local_1e8,&local_128);
        }
        uStack_1fc = 7;
        local_208 = (longlong *)CONCAT44(local_208._4_4_,10);
        FUN_1400462a0(&local_1e8,&local_208);
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_1b8 = (undefined4)local_1e8;
        uStack_1b4 = local_1e8._4_4_;
        uStack_1b0 = uStack_1e0;
        uStack_1ac = uStack_1dc;
        if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_198);
        }
        FUN_140041b80(local_198,&local_1b8);
        if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_150 = local_198;
        local_1b8 = _DAT_141dd3fa8;
        uStack_1b4 = uRam0000000141dd3fac;
        uStack_1b0 = uRam0000000141dd3fb0;
        uStack_1ac = DAT_141dd3fb4;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        FUN_140041b80(&local_188,&local_1b8);
        local_148 = &local_188;
        uStack_1fc = 0xf;
        local_208 = (longlong *)0x100000000000034;
        local_1b8 = 0x34;
        uStack_1b4 = 0x1000000;
        uStack_1b0 = uStack_200;
        uStack_1ac = 0xf;
        if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_178);
        }
        FUN_140041b80(local_178,&local_1b8);
        local_140 = local_178;
        FUN_140e609c0(local_res8);
        ppuVar11 = &local_158;
        uVar12 = CONCAT44(uVar13,DAT_141a0a7c8);
        puVar7 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_1f8,4,uVar12,ppuVar11);
        if (puVar7 != puVar6) {
          local_1b8 = *puVar7;
          uStack_1b4 = puVar7[1];
          uStack_1b0 = puVar7[2];
          uStack_1ac = puVar7[3];
          if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_1b8);
        }
        FUN_140e60910(1);
        local_1c8 = 0x39f;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fde48);
        iVar2 = FUN_140e63cb0(local_88,&local_res8,&local_res10,uVar4);
        if (0 < iVar2) {
          do {
            (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
            local_1c8 = 0x3a1;
            puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
            uStack_1fc = 6;
            local_208 = local_res10;
            ppuVar11 = (undefined1 **)((ulonglong)ppuVar11 & 0xffffffffffffff00);
            uVar12 = uVar12 & 0xffffffffffffff00;
            FUN_140e87440(&local_208,DAT_141a0a828,0x80000000,&local_c8,uVar12,ppuVar11);
            if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_208);
            }
            FUN_140e609c0(local_res8);
            if (&local_c8 != puVar3) {
              local_1b8 = (undefined4)local_c8;
              uStack_1b4 = local_c8._4_4_;
              uStack_1b0 = uStack_c0;
              uStack_1ac = uStack_bc;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar3);
              }
              FUN_140041b80(puVar3,&local_1b8);
            }
            FUN_140e60910(1);
            local_1c8 = 0x3a2;
            puVar6 = (undefined4 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_1419f5ef8);
            puVar7 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5ef8);
            FUN_140e609c0(local_res8);
            if (puVar6 != puVar7) {
              local_1b8 = *puVar6;
              uStack_1b4 = puVar6[1];
              uStack_1b0 = puVar6[2];
              uStack_1ac = puVar6[3];
              if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar7);
              }
              FUN_140041b80(puVar7,&local_1b8);
            }
            FUN_140e60910(1);
            local_1c8 = 0x3a3;
            uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
            puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
            FUN_140e609c0(local_res8);
            uStack_1dc = 0;
            local_1e8 = 0x3fe999999999999a;
            FUN_140042560(&local_1e8,uVar4);
            if (&local_1e8 != puVar3) {
              local_1b8 = (undefined4)local_1e8;
              uStack_1b4 = local_1e8._4_4_;
              uStack_1b0 = uStack_1e0;
              uStack_1ac = uStack_1dc;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar3);
              }
              FUN_140041b80(puVar3,&local_1b8);
            }
            if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            FUN_140e60910(1);
            cVar1 = FUN_140e643f0(local_88,&local_res8,&local_res10);
          } while (cVar1 != '\0');
        }
        FUN_140e63970(local_88,&local_res8,&local_res10);
        local_1c8 = 0x3a7;
        uStack_1fc = 6;
        local_208 = local_res8;
        FUN_140e87440(&local_208,DAT_141a0a828,0x80000000,&local_98,uVar12 & 0xffffffffffffff00,
                      (ulonglong)ppuVar11 & 0xffffffffffffff00);
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_1b8 = (undefined4)local_98;
        uStack_1b4 = local_98._4_4_;
        uStack_1b0 = uStack_90;
        uStack_1ac = uStack_8c;
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_1b8);
        uStack_1fc = 0xf;
        local_208 = (longlong *)0x100000000000058;
        FUN_140e87930(&local_208,DAT_141a1f440,0x80000000,&local_f8);
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_1c8 = 0x3a9;
        if (local_78 != 0) {
          FUN_140e4cd60();
        }
      }
      else if (iVar2 == 1) {
        local_1c8 = 0x3ad;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0;
        local_1c8 = 0x3ae;
        if (puVar3 != &local_138) {
          local_208 = (longlong *)*puVar3;
          uStack_200 = *(undefined4 *)(puVar3 + 1);
          uStack_1fc = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          FUN_140041b80(&local_138,&local_208);
        }
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_138);
        local_1c8 = 0x3b0;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1f8 = 0;
        local_1f0 = 0;
        local_1ec = 5;
        local_208 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_200 = DAT_1419df7b8;
        uStack_1fc = DAT_1419df7bc;
        if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1a8);
        }
        FUN_140041b80(local_1a8,&local_208);
        local_158 = local_1a8;
        local_208 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_200 = DAT_1419df7b8;
        uStack_1fc = DAT_1419df7bc;
        if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_198);
        }
        FUN_140041b80(local_198,&local_208);
        local_150 = local_198;
        ppuVar11 = &local_158;
        uVar4 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_1f8,2,ppuVar11);
        cVar1 = FUN_140e491e0(uVar4);
        if (cVar1 != '\0') {
          local_1c8 = 0x3b2;
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          local_168 = 0;
          local_160 = 0;
          local_15c = 5;
          local_208 = (longlong *)CONCAT44(uRam00000001419e6334,_DAT_1419e6330);
          uStack_200 = uRam00000001419e6338;
          uStack_1fc = uRam00000001419e633c;
          if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          FUN_140041b80(&local_188,&local_208);
          local_148 = &local_188;
          local_208 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_200 = DAT_1419df7b8;
          uStack_1fc = DAT_1419df7bc;
          if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_178);
          }
          FUN_140041b80(local_178,&local_208);
          local_140 = local_178;
          ppuVar10 = &local_148;
          gml_Script_truestate_begin_step(local_res8,local_res10,&local_168,2,ppuVar10);
          uVar13 = (undefined4)((ulonglong)ppuVar10 >> 0x20);
          local_1c8 = 0x3b4;
          if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          local_1f8 = 0;
          local_1f0 = 0;
          local_1ec = 5;
          uStack_1fc = 0xf;
          local_208 = (longlong *)0x100000200000010;
          local_1e8 = 0x100000200000010;
          uStack_1e0 = uStack_200;
          uStack_1dc = 0xf;
          if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1a8);
          }
          FUN_140041b80(local_1a8,&local_1e8);
          local_158 = local_1a8;
          in_stack_fffffffffffffdf0 = &local_158;
          ppuVar11 = (undefined1 **)CONCAT44(uVar13,DAT_141a07888);
          uVar4 = FUN_140e634e0(local_res8,local_res10,&local_1f8,1,ppuVar11,
                                in_stack_fffffffffffffdf0);
          cVar1 = FUN_140e491e0(uVar4);
          if (cVar1 == '\0') {
            local_1c8 = 0x3b5;
            if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_168);
            }
            uVar13 = (undefined4)((ulonglong)ppuVar11 >> 0x20);
            local_168 = 0;
            local_160 = 0;
            local_15c = 5;
            uStack_1fc = 0xf;
            local_208 = (longlong *)0x100000200000010;
            local_1e8 = 0x100000200000010;
            uStack_1e0 = uStack_200;
            uStack_1dc = 0xf;
            if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_198);
            }
            FUN_140041b80(local_198,&local_1e8);
            local_150 = local_198;
            local_208 = (longlong *)CONCAT44(uRam00000001419e62a4,_DAT_1419e62a0);
            uStack_200 = uRam00000001419e62a8;
            uStack_1fc = uRam00000001419e62ac;
            if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_188);
            }
            FUN_140041b80(&local_188,&local_208);
            local_148 = &local_188;
            local_208 = (longlong *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
            uStack_200 = uRam00000001419df7c8;
            uStack_1fc = uRam00000001419df7cc;
            if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_178);
            }
            FUN_140041b80(local_178,&local_208);
            local_140 = local_178;
            in_stack_fffffffffffffdf0 = &local_150;
            ppuVar11 = (undefined1 **)CONCAT44(uVar13,DAT_141a0a2e8);
            FUN_140e634e0(local_res8,local_res10,&local_168,3,ppuVar11,in_stack_fffffffffffffdf0);
          }
        }
        local_1c8 = 0x3b8;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
        uStack_1fc = 0;
        local_208 = (longlong *)0x4000000000000000;
        uVar8 = FUN_140e851f0(uVar4,&local_208,DAT_141955260,1);
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        if (uVar8 < 0x80000000) {
          uStack_1fc = 6;
          local_208 = local_res8;
          uVar14 = (ulonglong)in_stack_fffffffffffffdf0 & 0xffffffffffffff00;
          uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
          FUN_140e87440(&local_208,DAT_141a0a728,0x80000000,&local_a8,uVar12,uVar14);
          if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          uStack_1fc = 0xf;
          local_208 = (longlong *)0x10000010000016d;
          iVar2 = FUN_140e851f0(&local_a8,&local_208,DAT_141955260,0);
          if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          if (iVar2 == 0) {
            uStack_1fc = 6;
            local_208 = local_res8;
            FUN_140e87440(&local_208,DAT_141a0cfc8,0x80000000,&local_b8,uVar12 & 0xffffffffffffff00,
                          uVar14 & 0xffffffffffffff00);
            if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_208);
            }
            uStack_1fc = 0;
            local_208 = (longlong *)0x4018000000000000;
            iVar2 = FUN_140e851f0(&local_b8,&local_208,DAT_141955260,1);
            if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_208);
            }
            if (0 < iVar2) {
              local_1c8 = 0x3ba;
              if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1f8);
              }
              local_1f8 = 0;
              local_1f0 = 0;
              local_1ec = 5;
              local_208 = (longlong *)CONCAT44(uRam00000001419e6364,_DAT_1419e6360);
              uStack_200 = uRam00000001419e6368;
              uStack_1fc = uRam00000001419e636c;
              if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1a8);
              }
              FUN_140041b80(local_1a8,&local_208);
              local_158 = local_1a8;
              local_208 = (longlong *)CONCAT44(uRam00000001419e6274,_DAT_1419e6270);
              uStack_200 = uRam00000001419e6278;
              uStack_1fc = uRam00000001419e627c;
              if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_198);
              }
              FUN_140041b80(local_198,&local_208);
              local_150 = local_198;
              local_188 = FUN_140e79480(0);
              if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_188);
              }
              local_17c = 0;
              local_148 = &local_188;
              local_208 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
              uStack_200 = DAT_1419df7b8;
              uStack_1fc = DAT_1419df7bc;
              if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_178);
              }
              FUN_140041b80(local_178,&local_208);
              local_140 = local_178;
              FUN_14044e5b0(local_res8,local_res10,&local_1f8,4,&local_158);
              local_1c8 = 0x3bb;
              puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd3b8);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar3);
              }
              *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
              *puVar3 = 0;
            }
          }
        }
        local_1c8 = 0x3be;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1f8 = 0;
        local_1f0 = 0;
        local_1ec = 5;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd4b8);
        FUN_140e63610(local_res8,local_res10,&local_1f8,0,uVar4,0);
        local_1c8 = 0x3bf;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1f8 = 0;
        local_1f0 = 0;
        local_1ec = 5;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd398);
        FUN_140e63610(local_res8,local_res10,&local_1f8,0,uVar4,0);
        local_1c8 = 0x3c1;
      }
      else if (iVar2 == 2) {
        local_1c8 = 0x3c5;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1f8 = 0;
        local_1f0 = 0;
        local_1ec = 5;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5b18);
        FUN_140e63610(local_res8,local_res10,&local_1f8,0,uVar4,0);
        local_1c8 = 0x3c6;
      }
      else if (iVar2 == 3) {
        local_1c8 = 0x3ca;
      }
      break;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_1a8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1d8;
  return param_3;
}

