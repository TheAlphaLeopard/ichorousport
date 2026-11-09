// gml_Script_StatesPatronAtk3 @ 0x140567e70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesPatronAtk3
          (longlong *param_1,longlong *param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined4 uVar11;
  longlong *local_res8;
  longlong *local_res10;
  code *pcVar12;
  undefined4 **ppuVar13;
  ulonglong uVar14;
  undefined4 uVar18;
  undefined4 **ppuVar15;
  undefined8 uVar16;
  longlong *plVar17;
  ulonglong in_stack_fffffffffffffdc0;
  ulonglong uVar19;
  longlong *plVar20;
  undefined8 local_238;
  undefined4 uStack_230;
  uint uStack_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  uint uStack_20c;
  undefined8 local_208;
  undefined4 uStack_200;
  uint uStack_1fc;
  undefined8 local_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1d8 [3];
  byte local_1cc;
  undefined1 local_1c8 [12];
  byte local_1bc;
  undefined4 local_1b8 [3];
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  uint uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 *local_148;
  undefined1 *local_140;
  undefined4 *local_138;
  undefined1 *local_130;
  undefined8 *local_128;
  undefined8 local_120;
  undefined4 local_114;
  longlong *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
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
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 local_98 [16];
  longlong local_88;
  
  local_1f0 = "gml_Script_StatesPatronAtk";
  local_1f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1f8;
  local_1e8 = 0xbe;
  pcVar12 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_1d8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_15c = 0xffffff;
  local_168 = (longlong *)0x0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  uStack_fc = 0xffffff;
  local_108 = (longlong *)0x0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_21c = 0;
  local_228 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1e8 = 0xc0;
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
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de0030) &&
     (_Init_thread_header(&DAT_141de0030), DAT_141de0030 == -1)) {
    _DAT_141ddffec = 0;
    _DAT_141ddffe0 = 0x4000000000000000;
    _DAT_141de0000 = 0;
    _DAT_141ddfff4 = 0;
    _DAT_141de0004 = 1;
    _DAT_141de0014 = 0;
    _DAT_141de0008 = 0x3ff0000000000000;
    _DAT_141de0018 = 2;
    _DAT_141de0028 = 0;
    _DAT_141de001c = 0x4008000000000000;
    _DAT_141de002c = 3;
    atexit((_func_5014 *)&LAB_141482430);
    _Init_thread_footer(&DAT_141de0030);
  }
  uVar8 = 0;
  do {
    iVar3 = FUN_140e851f0(&DAT_141ddffe0 + (longlong)(int)uVar8 * 0x14,&local_d8,DAT_141955260,0);
    if (iVar3 == 0) {
      iVar3 = *(int *)(&DAT_141ddfff0 + (longlong)(int)uVar8 * 0x14);
      if (iVar3 == 0) {
        local_1e8 = 0xc4;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5ef8);
        uStack_22c = 0xf;
        local_238 = (longlong *)0x1000000000000ee;
        plVar17 = local_res8;
        plVar20 = local_res10;
        FUN_140e87170(&local_238,DAT_1419fe0e8,0x80000000,&local_a8,local_res8,local_res10);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        uStack_22c = 6;
        local_238 = local_res8;
        uVar19 = (ulonglong)plVar20 & 0xffffffffffffff00;
        uVar14 = (ulonglong)plVar17 & 0xffffffffffffff00;
        FUN_140e87440(&local_238,DAT_1419fe0e8,0x80000000,&local_168,uVar14,uVar19);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        iVar3 = FUN_140e851f0(&local_a8,&local_168,DAT_141955260,1);
        bVar10 = iVar3 == -2 || -1 < iVar3;
        if (bVar10) {
          uStack_22c = 0;
          local_238 = (longlong *)0x3ff0000000000000;
          puVar9 = &local_238;
        }
        else {
          uStack_1fc = 0;
          local_208 = (longlong *)&DAT_bff0000000000000;
          puVar9 = &local_208;
        }
        uVar1 = uStack_1fc;
        uVar8 = uStack_22c;
        FUN_140e609c0(local_res8);
        if (puVar9 != puVar5) {
          local_218 = *(undefined4 *)puVar9;
          uStack_214 = *(undefined4 *)((longlong)puVar9 + 4);
          uStack_210 = *(undefined4 *)(puVar9 + 1);
          uStack_20c = *(undefined4 *)((longlong)puVar9 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_218);
        }
        if ((bVar10) && ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_238);
        }
        if ((iVar3 != -2 && -1 >= iVar3) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_208);
        }
        FUN_140e60910(1);
        local_1e8 = 0xc5;
        uStack_1fc = 0xf;
        local_208 = (longlong *)0x100000100000337;
        local_218 = 0x337;
        uStack_214 = 0x1000001;
        uStack_210 = uStack_200;
        uStack_20c = 0xf;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        FUN_140041b80(&local_178,&local_218);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_178);
        local_1e8 = 0xc6;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_17c = 0;
        local_188 = 0x3ff0000000000000;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_188);
        local_1e8 = 200;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = 0;
        local_220 = 0;
        local_21c = 5;
        puVar6 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
        uStack_1fc = 6;
        local_208 = local_res8;
        uVar14 = uVar14 & 0xffffffffffffff00;
        FUN_140e87440(&local_208,DAT_1419fe0e8,0x80000000,&local_168,uVar14,
                      uVar19 & 0xffffffffffffff00);
        uVar18 = (undefined4)(uVar14 >> 0x20);
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        if (puVar6 != local_1d8) {
          local_218 = *puVar6;
          uStack_214 = puVar6[1];
          uStack_210 = puVar6[2];
          uStack_20c = puVar6[3];
          if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1d8);
          }
          FUN_140041b80(local_1d8,&local_218);
        }
        local_148 = local_1d8;
        local_218 = _DAT_141dd4008;
        uStack_214 = uRam0000000141dd400c;
        uStack_210 = uRam0000000141dd4010;
        uStack_20c = DAT_141dd4014;
        if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1c8);
        }
        FUN_140041b80(local_1c8,&local_218);
        local_140 = local_1c8;
        local_218 = (undefined4)local_168;
        uStack_214 = local_168._4_4_;
        uStack_210 = uStack_160;
        uStack_20c = uStack_15c;
        if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1b8);
        }
        FUN_140041b80(local_1b8,&local_218);
        local_138 = local_1b8;
        uVar4 = CONCAT44(uVar18,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_228,3,uVar4,&local_148);
        uVar18 = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_1e8 = 0xc9;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = 0;
        local_220 = 0;
        local_21c = 5;
        if (puVar6 != local_1d8) {
          local_218 = *puVar6;
          uStack_214 = puVar6[1];
          uStack_210 = puVar6[2];
          uStack_20c = puVar6[3];
          if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1d8);
          }
          FUN_140041b80(local_1d8,&local_218);
        }
        local_148 = local_1d8;
        local_218 = _DAT_141dd4028;
        uStack_214 = uRam0000000141dd402c;
        uStack_210 = uRam0000000141dd4030;
        uStack_20c = DAT_141dd4034;
        if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1c8);
        }
        FUN_140041b80(local_1c8,&local_218);
        local_140 = local_1c8;
        local_218 = _DAT_141dc66f0;
        uStack_214 = uRam0000000141dc66f4;
        uStack_210 = uRam0000000141dc66f8;
        uStack_20c = uRam0000000141dc66fc;
        if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1b8);
        }
        FUN_140041b80(local_1b8,&local_218);
        local_138 = local_1b8;
        FUN_140e634e0(local_res8,local_res10,&local_228,3,CONCAT44(uVar18,DAT_1419ff3d8),&local_148)
        ;
        local_1e8 = 0xcb;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0;
        local_1e8 = 0xcd;
      }
      else if (iVar3 == 1) {
        local_1e8 = 0xd2;
        uStack_22c = 6;
        local_238 = local_res8;
        ppuVar15 = (undefined4 **)(in_stack_fffffffffffffdc0 & 0xffffffffffffff00);
        ppuVar13 = (undefined4 **)((ulonglong)pcVar12 & 0xffffffffffffff00);
        FUN_140e87440(&local_238,DAT_141a0a728,0x80000000,&local_e8,ppuVar13,ppuVar15);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        uStack_22c = 0xf;
        local_238 = (longlong *)0x100000100000337;
        iVar3 = FUN_140e851f0(&local_e8,&local_238,DAT_141955260,0);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        if (iVar3 == 0) {
          local_1e8 = 0xd4;
          puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd428);
          uVar4 = FUN_140e794b0(0,0x3ff0000000000000);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = uVar4;
          local_1e8 = 0xd6;
          if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          local_228 = 0;
          local_220 = 0;
          local_21c = 5;
          local_208 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_200 = DAT_1419df7b8;
          uStack_1fc = DAT_1419df7bc;
          if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1d8);
          }
          FUN_140041b80(local_1d8,&local_208);
          local_148 = local_1d8;
          local_208 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_200 = DAT_1419df7b8;
          uStack_1fc = DAT_1419df7bc;
          if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1c8);
          }
          FUN_140041b80(local_1c8,&local_208);
          local_140 = local_1c8;
          ppuVar13 = &local_148;
          uVar4 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_228,2,ppuVar13);
          cVar2 = FUN_140e491e0(uVar4);
          if (cVar2 != '\0') {
            local_1e8 = 0xd8;
            uStack_1fc = 0xf;
            local_208 = (longlong *)0x100000100000335;
            local_238 = (longlong *)0x100000100000335;
            uStack_230 = uStack_200;
            uStack_22c = 0xf;
            if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_178);
            }
            FUN_140041b80(&local_178,&local_238);
            FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_178);
            local_1e8 = 0xd9;
            if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_188);
            }
            local_17c = 0;
            local_188 = 0;
            FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_188);
            local_1e8 = 0xda;
            if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_120);
            }
            local_114 = 0;
            local_120 = 0;
            FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_120);
            local_1e8 = 0xdb;
            puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd428);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar5);
            }
            *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
            *puVar5 = 0;
            local_1e8 = 0xdd;
            if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
            local_228 = 0;
            local_220 = 0;
            local_21c = 5;
            uStack_22c = 6;
            local_238 = local_res8;
            uVar19 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
            uVar14 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
            FUN_140e87440(&local_238,DAT_1419fe0e8,0x80000000,&local_168,uVar14,uVar19);
            if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_238);
            }
            uStack_22c = 6;
            local_238 = local_res8;
            uVar19 = uVar19 & 0xffffffffffffff00;
            uVar14 = uVar14 & 0xffffffffffffff00;
            FUN_140e87440(&local_238,DAT_1419fe158,0x80000000,&local_108,uVar14,uVar19);
            if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_238);
            }
            uStack_22c = 6;
            local_238 = local_res8;
            uVar14 = uVar14 & 0xffffffffffffff00;
            FUN_140e87440(&local_238,DAT_141a1b910,0x80000000,&local_b8,uVar14,
                          uVar19 & 0xffffffffffffff00);
            uVar18 = (undefined4)(uVar14 >> 0x20);
            if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_238);
            }
            local_208 = local_168;
            uStack_200 = uStack_160;
            uStack_1fc = uStack_15c;
            if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1d8);
            }
            FUN_140041b80(local_1d8,&local_208);
            local_148 = local_1d8;
            local_208 = local_108;
            uStack_200 = uStack_100;
            uStack_1fc = uStack_fc;
            if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1c8);
            }
            FUN_140041b80(local_1c8,&local_208);
            local_140 = local_1c8;
            local_208 = (longlong *)local_b8;
            uStack_200 = uStack_b0;
            uStack_1fc = uStack_ac;
            if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1b8);
            }
            FUN_140041b80(local_1b8,&local_208);
            local_138 = local_1b8;
            uStack_1fc = 0xf;
            local_208 = (longlong *)0x100000000000027;
            local_238 = (longlong *)0x100000000000027;
            uStack_230 = uStack_200;
            uStack_22c = 0xf;
            if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1a8);
            }
            FUN_140041b80(local_1a8,&local_238);
            local_130 = local_1a8;
            ppuVar15 = &local_148;
            ppuVar13 = (undefined4 **)CONCAT44(uVar18,DAT_141a0a7c8);
            uVar4 = FUN_140e634e0(local_res8,local_res10,&local_228,4,ppuVar13,ppuVar15);
            iVar3 = FUN_140e63cb0(local_98,&local_res8,&local_res10,uVar4);
            if (0 < iVar3) {
              do {
                local_1e8 = 0xdf;
                puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
                uStack_22c = 6;
                local_238 = local_res10;
                ppuVar15 = (undefined4 **)((ulonglong)ppuVar15 & 0xffffffffffffff00);
                ppuVar13 = (undefined4 **)((ulonglong)ppuVar13 & 0xffffffffffffff00);
                FUN_140e87440(&local_238,DAT_141a0a828,0x80000000,&local_c8,ppuVar13,ppuVar15);
                if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_238);
                }
                FUN_140e609c0(local_res8);
                if (&local_c8 != puVar5) {
                  local_218 = (undefined4)local_c8;
                  uStack_214 = local_c8._4_4_;
                  uStack_210 = uStack_c0;
                  uStack_20c = uStack_bc;
                  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(puVar5);
                  }
                  FUN_140041b80(puVar5,&local_218);
                }
                FUN_140e60910(1);
                local_1e8 = 0xe0;
                puVar6 = (undefined4 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a0a7d8);
                puVar7 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7d8);
                FUN_140e609c0(local_res8);
                if (puVar6 != puVar7) {
                  local_218 = *puVar6;
                  uStack_214 = puVar6[1];
                  uStack_210 = puVar6[2];
                  uStack_20c = puVar6[3];
                  if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(puVar7);
                  }
                  FUN_140041b80(puVar7,&local_218);
                }
                FUN_140e60910(1);
                local_1e8 = 0xe1;
                uStack_1fc = 0xf;
                local_208 = (longlong *)0x100000100000336;
                local_218 = 0x336;
                uStack_214 = 0x1000001;
                uStack_210 = uStack_200;
                uStack_20c = 0xf;
                if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_178);
                }
                FUN_140041b80(&local_178,&local_218);
                FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_178);
                cVar2 = FUN_140e643f0(local_98,&local_res8,&local_res10);
              } while (cVar2 != '\0');
            }
            FUN_140e63970(local_98,&local_res8,&local_res10);
            local_1e8 = 0xe4;
            puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a748);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar5);
            }
            *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
            *puVar5 = 0x3ff4000000000000;
            local_1e8 = 0xe5;
            puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a858);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar5);
            }
            *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
            *puVar5 = 0x3fe8000000000000;
            local_1e8 = 0xe6;
            uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
            puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
            FUN_140e609c0(local_res8);
            uStack_22c = 0;
            local_238 = (longlong *)0x4012000000000000;
            FUN_140042560(&local_238,uVar4);
            if (&local_238 != puVar5) {
              local_218 = (undefined4)local_238;
              uStack_214 = local_238._4_4_;
              uStack_210 = uStack_230;
              uStack_20c = uStack_22c;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar5);
              }
              FUN_140041b80(puVar5,&local_218);
            }
            if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_238);
            }
            FUN_140e60910(1);
            if (local_88 != 0) {
              FUN_140e4cd60();
            }
          }
        }
        local_1e8 = 0xea;
        uStack_22c = 6;
        local_238 = local_res8;
        ppuVar15 = (undefined4 **)((ulonglong)ppuVar15 & 0xffffffffffffff00);
        uVar14 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
        FUN_140e87440(&local_238,DAT_141a0a728,0x80000000,&local_e8,uVar14,ppuVar15);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        uStack_22c = 0xf;
        local_238 = (longlong *)0x100000100000335;
        iVar3 = FUN_140e851f0(&local_e8,&local_238,DAT_141955260,0);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        if (iVar3 == 0) {
          local_1e8 = 0xed;
          if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          uVar18 = (undefined4)(uVar14 >> 0x20);
          local_228 = 0;
          local_220 = 0;
          local_21c = 5;
          puVar6 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          if (puVar6 != local_1d8) {
            local_218 = *puVar6;
            uStack_214 = puVar6[1];
            uStack_210 = puVar6[2];
            uStack_20c = puVar6[3];
            if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1d8);
            }
            FUN_140041b80(local_1d8,&local_218);
          }
          local_148 = local_1d8;
          local_218 = _DAT_141dd4028;
          uStack_214 = uRam0000000141dd402c;
          uStack_210 = uRam0000000141dd4030;
          uStack_20c = DAT_141dd4034;
          if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1c8);
          }
          FUN_140041b80(local_1c8,&local_218);
          local_140 = local_1c8;
          ppuVar13 = &local_148;
          ppuVar15 = (undefined4 **)CONCAT44(uVar18,DAT_1419ff4f8);
          uVar4 = FUN_140e634e0(local_res8,local_res10,&local_228,2,ppuVar15,ppuVar13);
          uStack_22c = 0;
          local_238 = (longlong *)0x4064000000000000;
          uVar8 = FUN_140e851f0(uVar4,&local_238,DAT_141955260,1);
          if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          if (uVar8 < 0x80000000) {
            local_1e8 = 0xef;
            if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_158);
            }
            local_158 = 0;
            local_150 = 0;
            local_14c = 5;
            local_218 = _DAT_1419e63f0;
            uStack_214 = uRam00000001419e63f4;
            uStack_210 = uRam00000001419e63f8;
            uStack_20c = uRam00000001419e63fc;
            if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1b8);
            }
            FUN_140041b80(local_1b8,&local_218);
            local_138 = local_1b8;
            local_218 = (undefined4)DAT_1419df7b0;
            uStack_214 = DAT_1419df7b0._4_4_;
            uStack_210 = DAT_1419df7b8;
            uStack_20c = DAT_1419df7bc;
            if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1a8);
            }
            FUN_140041b80(local_1a8,&local_218);
            local_130 = local_1a8;
            ppuVar15 = &local_138;
            gml_Script_truestate_begin_step(local_res8,local_res10,&local_158,2,ppuVar15);
            local_1e8 = 0xf0;
            if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_188);
            }
            local_17c = 0;
            local_188 = 0x3ff0000000000000;
            FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_188);
            local_1e8 = 0xf1;
            uStack_1fc = 0xf;
            local_208 = (longlong *)0x100000000000027;
            local_218 = 0x27;
            uStack_214 = 0x1000000;
            uStack_210 = uStack_200;
            uStack_20c = 0xf;
            if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1d8);
            }
            FUN_140041b80(local_1d8,&local_218);
            local_148 = local_1d8;
            FUN_140edd0e0(local_res8,local_res10,1,&local_148);
          }
          local_1e8 = 0xf4;
          if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          local_228 = 0;
          local_220 = 0;
          local_21c = 5;
          uStack_22c = 6;
          local_238 = local_res8;
          uVar19 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
          uVar14 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
          FUN_140e87440(&local_238,DAT_1419fe0e8,0x80000000,&local_168,uVar14,uVar19);
          if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          uStack_22c = 6;
          local_238 = local_res8;
          uVar14 = uVar14 & 0xffffffffffffff00;
          FUN_140e87440(&local_238,DAT_1419fe158,0x80000000,&local_108,uVar14,
                        uVar19 & 0xffffffffffffff00);
          uVar18 = (undefined4)(uVar14 >> 0x20);
          if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          uVar4 = FUN_140e794b0(0,0);
          uStack_22c = uStack_15c;
          uStack_230 = uStack_160;
          if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
            local_238 = local_168;
          }
          else {
            FUN_1400419b0(&local_238,&local_168);
          }
          FUN_140162c50(&local_238,uVar4);
          local_218 = (undefined4)local_238;
          uStack_214 = local_238._4_4_;
          uStack_210 = uStack_230;
          uStack_20c = uStack_22c;
          if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1d8);
          }
          FUN_140041b80(local_1d8,&local_218);
          if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          local_148 = local_1d8;
          uVar4 = FUN_140e794b0(0,0x4040000000000000);
          uStack_22c = uStack_fc;
          uStack_230 = uStack_100;
          if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
            local_238 = local_108;
          }
          else {
            FUN_1400419b0(&local_238,&local_108);
          }
          FUN_140162c50(&local_238,uVar4);
          local_218 = (undefined4)local_238;
          uStack_214 = local_238._4_4_;
          uStack_210 = uStack_230;
          uStack_20c = uStack_22c;
          if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1c8);
          }
          FUN_140041b80(local_1c8,&local_218);
          if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          local_140 = local_1c8;
          local_218 = _DAT_141dd4048;
          uStack_214 = uRam0000000141dd404c;
          uStack_210 = uRam0000000141dd4050;
          uStack_20c = DAT_141dd4054;
          if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1b8);
          }
          FUN_140041b80(local_1b8,&local_218);
          local_138 = local_1b8;
          uStack_1fc = 0xf;
          local_208 = (longlong *)0x10000000000012d;
          local_218 = 0x12d;
          uStack_214 = 0x1000000;
          uStack_210 = uStack_200;
          uStack_20c = 0xf;
          if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1a8);
          }
          FUN_140041b80(local_1a8,&local_218);
          local_130 = local_1a8;
          ppuVar15 = &local_148;
          uVar14 = CONCAT44(uVar18,DAT_141a0a7c8);
          uVar4 = FUN_140e634e0(local_res8,local_res10,&local_228,4,uVar14,ppuVar15);
          iVar3 = FUN_140e63cb0(local_98,&local_res8,&local_res10,uVar4);
          if (0 < iVar3) {
            do {
              local_1e8 = 0xf6;
              uStack_1fc = 0xf;
              local_208 = (longlong *)0x10000010000032a;
              local_218 = 0x32a;
              uStack_214 = 0x1000001;
              uStack_210 = uStack_200;
              uStack_20c = 0xf;
              if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_178);
              }
              FUN_140041b80(&local_178,&local_218);
              FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_178);
              local_1e8 = 0xf7;
              if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_188);
              }
              local_17c = 0;
              local_188 = 0x3ff0000000000000;
              FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_188);
              local_1e8 = 0xf8;
              if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_120);
              }
              local_114 = 0;
              local_120 = 0;
              FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_120);
              local_1e8 = 0xfa;
              uVar4 = FUN_140e79480(0);
              if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_f8);
              }
              local_ec = 0;
              local_f8 = uVar4;
              FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_f8);
              cVar2 = FUN_140e643f0(local_98,&local_res8,&local_res10);
            } while (cVar2 != '\0');
          }
          FUN_140e63970(local_98,&local_res8,&local_res10);
          if (local_88 != 0) {
            FUN_140e4cd60();
          }
        }
        local_1e8 = 0x101;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = 0;
        local_220 = 0;
        local_21c = 5;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_158 = 0;
        local_150 = 0;
        local_14c = 5;
        puVar6 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
        uStack_22c = 6;
        local_238 = local_res8;
        uVar14 = uVar14 & 0xffffffffffffff00;
        FUN_140e87440(&local_238,DAT_1419fe0e8,0x80000000,&local_168,uVar14,
                      (ulonglong)ppuVar15 & 0xffffffffffffff00);
        uVar18 = (undefined4)(uVar14 >> 0x20);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        if (puVar6 != local_1d8) {
          local_218 = *puVar6;
          uStack_214 = puVar6[1];
          uStack_210 = puVar6[2];
          uStack_20c = puVar6[3];
          if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1d8);
          }
          FUN_140041b80(local_1d8,&local_218);
        }
        local_148 = local_1d8;
        local_218 = _DAT_141dd4008;
        uStack_214 = uRam0000000141dd400c;
        uStack_210 = uRam0000000141dd4010;
        uStack_20c = DAT_141dd4014;
        if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1c8);
        }
        FUN_140041b80(local_1c8,&local_218);
        local_140 = local_1c8;
        if (puVar6 != local_1b8) {
          local_218 = *puVar6;
          uStack_214 = puVar6[1];
          uStack_210 = puVar6[2];
          uStack_20c = puVar6[3];
          if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1b8);
          }
          FUN_140041b80(local_1b8,&local_218);
        }
        local_138 = local_1b8;
        local_218 = _DAT_141dd4028;
        uStack_214 = uRam0000000141dd402c;
        uStack_210 = uRam0000000141dd4030;
        uStack_20c = DAT_141dd4034;
        if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1a8);
        }
        FUN_140041b80(local_1a8,&local_218);
        local_130 = local_1a8;
        uVar16 = CONCAT44(uVar18,DAT_1419ff4f8);
        uVar4 = FUN_140e634e0(local_res8,local_res10,&local_158,2,uVar16,&local_148);
        uVar18 = (undefined4)((ulonglong)uVar16 >> 0x20);
        uStack_22c = uStack_15c;
        uStack_230 = uStack_160;
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
          local_238 = local_168;
        }
        else {
          FUN_1400419b0(&local_238,&local_168);
        }
        FUN_1400462a0(&local_238,uVar4);
        if ((uStack_22c & 0xffffff) == 0) {
          uVar11 = SUB84(local_238,0);
        }
        else {
          uVar11 = FUN_140e4b060(&local_238);
        }
        local_198 = FUN_140e78d00(uVar11);
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_18c = 0;
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_128 = &local_198;
        FUN_140e634e0(local_res8,local_res10,&local_228,3,CONCAT44(uVar18,DAT_1419ff3d8),&local_138)
        ;
        local_1e8 = 0x103;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = 0;
        local_220 = 0;
        local_21c = 5;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd588);
        local_218 = _DAT_1419e63e0;
        uStack_214 = uRam00000001419e63e4;
        uStack_210 = uRam00000001419e63e8;
        uStack_20c = uRam00000001419e63ec;
        if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1d8);
        }
        FUN_140041b80(local_1d8,&local_218);
        local_148 = local_1d8;
        local_218 = _DAT_1419e63e0;
        uStack_214 = uRam00000001419e63e4;
        uStack_210 = uRam00000001419e63e8;
        uStack_20c = uRam00000001419e63ec;
        if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1c8);
        }
        FUN_140041b80(local_1c8,&local_218);
        local_140 = local_1c8;
        local_218 = _DAT_1419e6460;
        uStack_214 = uRam00000001419e6464;
        uStack_210 = uRam00000001419e6468;
        uStack_20c = uRam00000001419e646c;
        if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1b8);
        }
        FUN_140041b80(local_1b8,&local_218);
        local_138 = local_1b8;
        FUN_140e63610(local_res8,local_res10,&local_228,3,uVar4,&local_148);
        local_1e8 = 0x105;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = 0;
        local_220 = 0;
        local_21c = 5;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fdf38);
        FUN_140e63610(local_res8,local_res10,&local_228,0,uVar4,0);
        local_1e8 = 0x106;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = 0;
        local_220 = 0;
        local_21c = 5;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd398);
        FUN_140e63610(local_res8,local_res10,&local_228,0,uVar4,0);
        local_1e8 = 0x108;
      }
      else if (iVar3 == 2) {
        local_1e8 = 0x10c;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = 0;
        local_220 = 0;
        local_21c = 5;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5b18);
        FUN_140e63610(local_res8,local_res10,&local_228,0,uVar4,0);
        local_1e8 = 0x10d;
      }
      else if (iVar3 == 3) {
        local_1e8 = 0x111;
      }
      break;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_1d8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1f8;
  return param_3;
}

