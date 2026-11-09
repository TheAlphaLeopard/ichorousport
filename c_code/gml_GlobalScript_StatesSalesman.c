// gml_GlobalScript_StatesSalesman @ 0x140597d40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript_StatesSalesman
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  uint uVar7;
  bool bVar8;
  code *pcVar9;
  undefined1 **ppuVar10;
  undefined4 uVar12;
  ulonglong uVar11;
  undefined8 **in_stack_fffffffffffffe20;
  ulonglong uVar13;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 *local_d8;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  
  local_1a0 = "gml_Script_StatesPestChangePhase";
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  local_198 = 0x511;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_148,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_164 = 0xffffff;
  local_170 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_d8 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  local_154 = 0;
  local_160 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_198 = 0x513;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_bc = *(undefined4 *)((longlong)param_5 + 0xc);
  local_c0 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *param_5;
  }
  else {
    FUN_1400419b0(&local_c8);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de01a4) &&
     (_Init_thread_header(&DAT_141de01a4), DAT_141de01a4 == -1)) {
    _DAT_141de030c = 0;
    _DAT_141de0300 = 0x4000000000000000;
    _DAT_141de0320 = 0;
    _DAT_141de0314 = 0;
    _DAT_141de0324 = 1;
    _DAT_141de0334 = 0;
    _DAT_141de0328 = 0x3ff0000000000000;
    _DAT_141de0338 = 2;
    _DAT_141de0348 = 0;
    _DAT_141de033c = 0x4008000000000000;
    _DAT_141de034c = 3;
    atexit((_func_5014 *)&LAB_141482b10);
    _Init_thread_footer(&DAT_141de01a4);
  }
  uVar7 = 0;
  do {
    iVar3 = FUN_140e851f0(&DAT_141de0300 + (longlong)(int)uVar7 * 0x14,&local_c8,DAT_141955260,0);
    if (iVar3 == 0) {
      iVar3 = *(int *)(&DAT_141de0310 + (longlong)(int)uVar7 * 0x14);
      if (iVar3 == 0) {
        local_198 = 0x518;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdd98);
        cVar2 = FUN_140e491e0(uVar4);
        bVar8 = cVar2 == '\0';
        if (bVar8) {
          uStack_1cc = 0xf;
          local_1d8 = (undefined8 *)0x10000010000036d;
          ppuVar6 = (undefined8 **)&local_1d8;
        }
        else {
          uStack_cc = 0xf;
          local_d8 = (undefined8 *)0x10000010000037a;
          ppuVar6 = &local_d8;
        }
        uVar1 = uStack_cc;
        uVar12 = uStack_1cc;
        local_1b8 = *(undefined4 *)ppuVar6;
        uStack_1b4 = *(undefined4 *)((longlong)ppuVar6 + 4);
        uStack_1b0 = *(undefined4 *)(ppuVar6 + 1);
        uStack_1ac = *(undefined4 *)((longlong)ppuVar6 + 0xc);
        if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_170);
        }
        FUN_140041b80(&local_170,&local_1b8);
        if ((bVar8) && ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_1d8);
        }
        if ((!bVar8) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_d8);
        }
        FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_170);
        local_198 = 0x519;
        if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_190);
        }
        local_184 = 0;
        local_190 = 0;
        FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_190);
        local_198 = 0x51b;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdd98);
        uStack_1cc = 0xd;
        local_1d8 = (undefined8 *)0x3ff0000000000000;
        if (&local_1d8 != puVar5) {
          local_1b8 = 0;
          uStack_1b4 = 0x3ff00000;
          uStack_1b0 = uStack_1d0;
          uStack_1ac = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_1b8);
        }
        local_198 = 0x51c;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdd28);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x4008000000000000;
        local_198 = 0x51d;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdae8);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x4000000000000000;
        local_198 = 0x51f;
        uStack_1cc = 6;
        local_1d8 = param_1;
        FUN_140e87440(&local_1d8,DAT_141a0a828,0x80000000,&local_a8,
                      (ulonglong)pcVar9 & 0xffffffffffffff00,
                      (ulonglong)in_stack_fffffffffffffe20 & 0xffffffffffffff00);
        if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_1b8 = (undefined4)local_a8;
        uStack_1b4 = local_a8._4_4_;
        uStack_1b0 = uStack_a0;
        uStack_1ac = uStack_9c;
        if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_180);
        }
        FUN_140041b80(&local_180,&local_1b8);
        uStack_1cc = 0xf;
        local_1d8 = (undefined8 *)0x100000000000058;
        FUN_140e87930(&local_1d8,DAT_141a1f440,0x80000000,&local_180);
        if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_198 = 0x521;
      }
      else if (iVar3 == 1) {
        local_198 = 0x525;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0;
        local_198 = 0x527;
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = 5;
        local_1d8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_1d0 = DAT_1419df7b8;
        uStack_1cc = DAT_1419df7bc;
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_1d8);
        local_98 = local_148;
        local_1d8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_1d0 = DAT_1419df7b8;
        uStack_1cc = DAT_1419df7bc;
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_1d8);
        local_90 = local_138;
        ppuVar10 = &local_98;
        uVar4 = gml_Script_animcurve_lerp(param_1,param_2,&local_1c8,2,ppuVar10);
        cVar2 = FUN_140e491e0(uVar4);
        if (cVar2 != '\0') {
          local_198 = 0x529;
          uStack_1cc = 6;
          in_stack_fffffffffffffe20 =
               (undefined8 **)((ulonglong)in_stack_fffffffffffffe20 & 0xffffffffffffff00);
          ppuVar10 = (undefined1 **)((ulonglong)ppuVar10 & 0xffffffffffffff00);
          local_1d8 = param_1;
          FUN_140e87440(&local_1d8,DAT_141a0a728,0x80000000,&local_e8,ppuVar10,
                        in_stack_fffffffffffffe20);
          if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          uStack_1cc = 0xf;
          local_1d8 = (undefined8 *)0x10000010000037a;
          iVar3 = FUN_140e851f0(&local_e8,&local_1d8,DAT_141955260,0);
          if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          if (iVar3 == 0) {
            local_198 = 0x52b;
            if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_160);
            }
            uVar12 = (undefined4)((ulonglong)ppuVar10 >> 0x20);
            local_160 = 0;
            local_158 = 0;
            local_154 = 5;
            uStack_1cc = 0xf;
            local_1d8 = (undefined8 *)0x100000200000015;
            local_1b8 = 0x15;
            uStack_1b4 = 0x1000002;
            uStack_1b0 = uStack_1d0;
            uStack_1ac = 0xf;
            if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_128);
            }
            FUN_140041b80(&local_128,&local_1b8);
            local_88 = &local_128;
            local_1b8 = _DAT_1419e64e0;
            uStack_1b4 = uRam00000001419e64e4;
            uStack_1b0 = uRam00000001419e64e8;
            uStack_1ac = uRam00000001419e64ec;
            if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_118);
            }
            FUN_140041b80(local_118,&local_1b8);
            local_80 = local_118;
            local_1b8 = _DAT_1419df7c0;
            uStack_1b4 = uRam00000001419df7c4;
            uStack_1b0 = uRam00000001419df7c8;
            uStack_1ac = uRam00000001419df7cc;
            if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_108);
            }
            FUN_140041b80(local_108,&local_1b8);
            in_stack_fffffffffffffe20 = &local_88;
            local_78 = local_108;
            FUN_140e634e0(param_1,param_2,&local_160,3,CONCAT44(uVar12,DAT_141a0a2e8),
                          in_stack_fffffffffffffe20);
            local_198 = 0x52c;
            uStack_1cc = 0xf;
            local_1d8 = (undefined8 *)0x1000000000000ee;
            local_1b8 = 0xee;
            uStack_1b4 = 0x1000000;
            uStack_1b0 = uStack_1d0;
            uStack_1ac = 0xf;
            if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_180);
            }
            FUN_140041b80(&local_180,&local_1b8);
            uStack_1cc = 0xf;
            local_1d8 = (undefined8 *)0x100000000000058;
            FUN_140e87930(&local_1d8,DAT_141a1f440,0x80000000,&local_180);
            if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            local_198 = 0x52d;
            if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c8);
            }
            local_1c8 = 0;
            local_1c0 = 0;
            local_1bc = 5;
            local_1b8 = _DAT_1419e65d0;
            uStack_1b4 = uRam00000001419e65d4;
            uStack_1b0 = uRam00000001419e65d8;
            uStack_1ac = uRam00000001419e65dc;
            if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_148);
            }
            FUN_140041b80(local_148,&local_1b8);
            local_98 = local_148;
            local_1b8 = (undefined4)DAT_1419df7b0;
            uStack_1b4 = DAT_1419df7b0._4_4_;
            uStack_1b0 = DAT_1419df7b8;
            uStack_1ac = DAT_1419df7bc;
            if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_138);
            }
            FUN_140041b80(local_138,&local_1b8);
            local_90 = local_138;
            ppuVar10 = &local_98;
            gml_Script_truestate_begin_step(param_1,param_2,&local_1c8,2,ppuVar10);
          }
          else {
            local_198 = 0x531;
            uStack_1cc = 0xf;
            local_1d8 = (undefined8 *)0x10000010000037a;
            local_1b8 = 0x37a;
            uStack_1b4 = 0x1000001;
            uStack_1b0 = uStack_1d0;
            uStack_1ac = 0xf;
            if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_170);
            }
            FUN_140041b80(&local_170,&local_1b8);
            FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_170);
            local_198 = 0x532;
            if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_190);
            }
            local_184 = 0;
            local_190 = 0;
            FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_190);
          }
        }
        local_198 = 0x538;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd3b8);
        uStack_1cc = 0;
        local_1d8 = (undefined8 *)0x4000000000000000;
        uVar7 = FUN_140e851f0(uVar4,&local_1d8,DAT_141955260,1);
        if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        if (uVar7 < 0x80000000) {
          uStack_1cc = 6;
          uVar13 = (ulonglong)in_stack_fffffffffffffe20 & 0xffffffffffffff00;
          uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
          local_1d8 = param_1;
          FUN_140e87440(&local_1d8,DAT_141a0a728,0x80000000,&local_e8,uVar11,uVar13);
          if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          uStack_1cc = 0xf;
          local_1d8 = (undefined8 *)0x10000010000037a;
          iVar3 = FUN_140e851f0(&local_e8,&local_1d8,DAT_141955260,0);
          if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          if (iVar3 == 0) {
            uStack_1cc = 6;
            local_1d8 = param_1;
            FUN_140e87440(&local_1d8,DAT_141a0cfc8,0x80000000,&local_b8,uVar11 & 0xffffffffffffff00,
                          uVar13 & 0xffffffffffffff00);
            if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            uStack_1cc = 0;
            local_1d8 = (undefined8 *)0x4014000000000000;
            iVar3 = FUN_140e851f0(&local_b8,&local_1d8,DAT_141955260,1);
            if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            if (0 < iVar3) {
              local_198 = 0x53a;
              if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1c8);
              }
              local_1c8 = 0;
              local_1c0 = 0;
              local_1bc = 5;
              local_1b8 = _DAT_1419e65b0;
              uStack_1b4 = uRam00000001419e65b4;
              uStack_1b0 = uRam00000001419e65b8;
              uStack_1ac = uRam00000001419e65bc;
              if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_148);
              }
              FUN_140041b80(local_148,&local_1b8);
              local_98 = local_148;
              local_1b8 = _DAT_1419e6630;
              uStack_1b4 = uRam00000001419e6634;
              uStack_1b0 = uRam00000001419e6638;
              uStack_1ac = uRam00000001419e663c;
              if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_138);
              }
              FUN_140041b80(local_138,&local_1b8);
              local_90 = local_138;
              local_128 = FUN_140e79480(0);
              if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_128);
              }
              local_11c = 0;
              local_88 = &local_128;
              local_1b8 = (undefined4)DAT_1419df7b0;
              uStack_1b4 = DAT_1419df7b0._4_4_;
              uStack_1b0 = DAT_1419df7b8;
              uStack_1ac = DAT_1419df7bc;
              if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_118);
              }
              FUN_140041b80(local_118,&local_1b8);
              local_80 = local_118;
              FUN_14044e5b0(param_1,param_2,&local_1c8,4,&local_98);
              local_198 = 0x53b;
              puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd3b8);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar5);
              }
              *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
              *puVar5 = 0;
            }
          }
        }
        local_198 = 0x53e;
        if (local_d8 != &local_f8) {
          local_1b8 = *(undefined4 *)local_d8;
          uStack_1b4 = *(undefined4 *)((longlong)local_d8 + 4);
          uStack_1b0 = *(undefined4 *)(local_d8 + 1);
          uStack_1ac = *(undefined4 *)((longlong)local_d8 + 0xc);
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          FUN_140041b80(&local_f8,&local_1b8);
        }
        FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_f8);
        local_198 = 0x53f;
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
        FUN_140e63610(param_1,param_2,&local_1c8,0,uVar4,0);
        local_198 = 0x541;
      }
      else if (iVar3 == 2) {
        local_198 = 0x545;
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b18);
        FUN_140e63610(param_1,param_2,&local_1c8,0,uVar4,0);
        local_198 = 0x546;
      }
      else if (iVar3 == 3) {
        local_198 = 0x54a;
      }
      break;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  _eh_vector_destructor_iterator_(local_148,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return param_3;
}

