// gml_Script_StatesHoarderTongueDig @ 0x140555a70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesHoarderTongueDig
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

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
  double dVar12;
  code *pcVar13;
  undefined4 **ppuVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  ulonglong in_stack_fffffffffffffde0;
  undefined8 local_218;
  undefined4 uStack_210;
  uint uStack_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  undefined8 local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b4;
  undefined1 *local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined4 local_168 [3];
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined4 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined8 local_70;
  undefined4 local_64;
  
  local_1d0 = "gml_Script_StatesHoarderStomp";
  local_1d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1d8;
  local_1c8 = 0x2d2;
  pcVar13 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_168,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_17c = 0xffffff;
  local_188 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_78 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_16c = 0xffffff;
  local_178 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = (undefined1 *)0x0;
  local_64 = 0xffffff;
  local_70 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_1fc = 0;
  local_208 = 0;
  local_18c = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1c8 = 0x2d4;
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
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddfd08) &&
     (_Init_thread_header(&DAT_141ddfd08), DAT_141ddfd08 == -1)) {
    _DAT_141ddfddc = 0;
    _DAT_141ddfdd0 = 0x4000000000000000;
    _DAT_141ddfdf0 = 0;
    _DAT_141ddfde4 = 0;
    _DAT_141ddfdf4 = 1;
    _DAT_141ddfe04 = 0;
    _DAT_141ddfdf8 = 0x3ff0000000000000;
    _DAT_141ddfe08 = 2;
    _DAT_141ddfe18 = 0;
    _DAT_141ddfe0c = 0x4008000000000000;
    _DAT_141ddfe1c = 3;
    atexit((_func_5014 *)&LAB_141482050);
    _Init_thread_footer(&DAT_141ddfd08);
  }
  uVar8 = 0;
  do {
    iVar3 = FUN_140e851f0(&DAT_141ddfdd0 + (longlong)(int)uVar8 * 0x14,&local_98,DAT_141955260,0);
    uVar11 = (undefined4)((ulonglong)pcVar13 >> 0x20);
    if (iVar3 == 0) {
      iVar3 = *(int *)(&DAT_141ddfde0 + (longlong)(int)uVar8 * 0x14);
      if (iVar3 == 0) {
        local_1c8 = 0x2d8;
        uStack_20c = 0xf;
        local_218 = (longlong *)0x100000100000168;
        local_1f8 = 0x168;
        uStack_1f4 = 0x1000001;
        uStack_1f0 = uStack_210;
        uStack_1ec = 0xf;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        FUN_140041b80(&local_188,&local_1f8);
        FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_188);
        local_1c8 = 0x2d9;
        if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c0);
        }
        local_1b4 = 0;
        local_1c0 = 0;
        FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_1c0);
        local_1c8 = 0x2da;
        if (local_78 != &local_178) {
          local_1f8 = *(undefined4 *)local_78;
          uStack_1f4 = *(undefined4 *)((longlong)local_78 + 4);
          uStack_1f0 = *(undefined4 *)(local_78 + 1);
          uStack_1ec = *(undefined4 *)((longlong)local_78 + 0xc);
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          FUN_140041b80(&local_178,&local_1f8);
        }
        FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_178);
        local_1c8 = 0x2dc;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
        if (puVar6 != local_168) {
          local_1f8 = *puVar6;
          uStack_1f4 = puVar6[1];
          uStack_1f0 = puVar6[2];
          uStack_1ec = puVar6[3];
          if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_1f8);
        }
        local_d8 = local_168;
        local_1f8 = _DAT_141dd3f48;
        uStack_1f4 = uRam0000000141dd3f4c;
        uStack_1f0 = uRam0000000141dd3f50;
        uStack_1ec = DAT_141dd3f54;
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_158);
        }
        FUN_140041b80(local_158,&local_1f8);
        local_d0 = local_158;
        local_1f8 = _DAT_141dc66e0;
        uStack_1f4 = uRam0000000141dc66e4;
        uStack_1f0 = uRam0000000141dc66e8;
        uStack_1ec = uRam0000000141dc66ec;
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_1f8);
        uVar4 = CONCAT44(uVar11,DAT_1419ff3d8);
        local_c8 = local_148;
        FUN_140e634e0(param_1,param_2,&local_208,3,uVar4,&local_d8);
        uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_1c8 = 0x2dd;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        if (puVar6 != local_168) {
          local_1f8 = *puVar6;
          uStack_1f4 = puVar6[1];
          uStack_1f0 = puVar6[2];
          uStack_1ec = puVar6[3];
          if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_1f8);
        }
        local_d8 = local_168;
        local_1f8 = _DAT_141dd3f28;
        uStack_1f4 = uRam0000000141dd3f2c;
        uStack_1f0 = uRam0000000141dd3f30;
        uStack_1ec = DAT_141dd3f34;
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_158);
        }
        FUN_140041b80(local_158,&local_1f8);
        local_d0 = local_158;
        local_1f8 = _DAT_141dc66e0;
        uStack_1f4 = uRam0000000141dc66e4;
        uStack_1f0 = uRam0000000141dc66e8;
        uStack_1ec = uRam0000000141dc66ec;
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_1f8);
        local_c8 = local_148;
        FUN_140e634e0(param_1,param_2,&local_208,3,CONCAT44(uVar11,DAT_1419ff3d8),&local_d8);
        local_1c8 = 0x2df;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
        (**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
        uStack_20c = 0xf;
        local_218 = (longlong *)0x1000000000000ee;
        plVar17 = param_1;
        FUN_140e87170(&local_218,DAT_1419fe0e8,0x80000000,&local_e8,param_1,param_2);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        uStack_20c = 6;
        local_218 = param_1;
        FUN_140e87440(&local_218,DAT_1419fe0e8,0x80000000,&local_1a8,
                      (ulonglong)plVar17 & 0xffffffffffffff00,param_2 & 0xffffffffffffff00);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        iVar3 = FUN_140e851f0(&local_e8,&local_1a8,DAT_141955260,1);
        bVar10 = iVar3 == -2 || -1 < iVar3;
        if (bVar10) {
          uStack_20c = 0;
          local_218 = (longlong *)0x3ff0000000000000;
          puVar9 = &local_218;
        }
        else {
          uStack_1dc = 0;
          local_1e8 = &DAT_bff0000000000000;
          puVar9 = &local_1e8;
        }
        uVar1 = uStack_1dc;
        uVar8 = uStack_20c;
        FUN_140e609c0(param_1);
        if (puVar9 != puVar5) {
          local_1f8 = *(undefined4 *)puVar9;
          uStack_1f4 = *(undefined4 *)((longlong)puVar9 + 4);
          uStack_1f0 = *(undefined4 *)(puVar9 + 1);
          uStack_1ec = *(undefined4 *)((longlong)puVar9 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_1f8);
        }
        if ((bVar10) && ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_218);
        }
        if ((iVar3 != -2 && -1 >= iVar3) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140e60910(1);
        local_1c8 = 0x2e1;
      }
      else if (iVar3 == 1) {
        local_1c8 = 0x2e6;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        uStack_20c = 0xf;
        local_218 = (longlong *)0x100000100000168;
        local_1e8 = (undefined1 *)0x100000100000168;
        uStack_1e0 = uStack_210;
        uStack_1dc = 0xf;
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_1e8);
        local_d8 = local_168;
        local_218 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_210 = DAT_1419df7b8;
        uStack_20c = DAT_1419df7bc;
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_158);
        }
        FUN_140041b80(local_158,&local_218);
        local_d0 = local_158;
        ppuVar14 = &local_d8;
        uVar4 = gml_Script_animcurve_lerp(param_1,param_2,&local_208,2,ppuVar14);
        cVar2 = FUN_140e491e0(uVar4);
        if (cVar2 != '\0') {
          local_1c8 = 0x2e8;
          uStack_20c = 0xf;
          local_218 = (longlong *)0x100000100000166;
          local_1e8 = (undefined1 *)0x100000100000166;
          uStack_1e0 = uStack_210;
          uStack_1dc = 0xf;
          if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          FUN_140041b80(&local_188,&local_1e8);
          FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_188);
          local_1c8 = 0x2e9;
          if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c0);
          }
          local_1b4 = 0;
          local_1c0 = 0;
          FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_1c0);
          local_1c8 = 0x2ea;
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd3b8);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0;
        }
        local_1c8 = 0x2ed;
        uStack_20c = 6;
        uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
        local_218 = param_1;
        FUN_140e87440(&local_218,DAT_141a0a728,0x80000000,&local_70,uVar15,
                      in_stack_fffffffffffffde0 & 0xffffffffffffff00);
        uVar11 = (undefined4)(uVar15 >> 0x20);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        uStack_20c = 0xf;
        local_218 = (longlong *)0x100000100000166;
        iVar3 = FUN_140e851f0(&local_70,&local_218,DAT_141955260,0);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        if (iVar3 == 0) {
          local_1c8 = 0x2ef;
          if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          local_208 = 0;
          local_200 = 0;
          local_1fc = 5;
          uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd3b8);
          local_218 = (longlong *)CONCAT44(uRam0000000141dc66e4,_DAT_141dc66e0);
          uStack_210 = uRam0000000141dc66e8;
          uStack_20c = uRam0000000141dc66ec;
          if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_218);
          local_d8 = local_168;
          ppuVar14 = &local_d8;
          uVar15 = CONCAT44(uVar11,DAT_141a0a0d8);
          puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_208,1,uVar15,ppuVar14);
          uStack_1dc = *(uint *)((longlong)puVar5 + 0xc);
          uStack_1e0 = *(undefined4 *)(puVar5 + 1);
          if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
            local_1e8 = (undefined1 *)*puVar5;
          }
          else {
            FUN_1400419b0(&local_1e8,puVar5);
          }
          uStack_20c = 7;
          local_218 = (longlong *)CONCAT44(local_218._4_4_,3);
          FUN_140042560(&local_1e8,&local_218);
          if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_218);
          }
          uVar8 = FUN_140e851f0(uVar4,&local_1e8,DAT_141955260,1);
          if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          if (uVar8 < 0x80000000) {
LAB_140556611:
            local_1c8 = 0x2f1;
            uStack_20c = 0xf;
            local_218 = (longlong *)0x100000100000174;
            local_1f8 = 0x174;
            uStack_1f4 = 0x1000001;
            uStack_1f0 = uStack_210;
            uStack_1ec = 0xf;
            if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_188);
            }
            FUN_140041b80(&local_188,&local_1f8);
            FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_188);
            local_1c8 = 0x2f2;
            if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c0);
            }
            local_1b4 = 0;
            local_1c0 = 0;
            FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_1c0);
          }
          else {
            uStack_20c = 6;
            local_218 = param_1;
            FUN_140e87440(&local_218,DAT_1419fe0e8,0x80000000,&local_1a8,uVar15 & 0xffffffffffffff00
                          ,(ulonglong)ppuVar14 & 0xffffffffffffff00);
            if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_218);
            }
            uStack_20c = 0xf;
            local_218 = (longlong *)0x1000000000000ee;
            plVar17 = param_1;
            uVar15 = param_2;
            FUN_140e87170(&local_218,DAT_1419fe0e8,0x80000000,&local_e8,param_1,param_2);
            if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_218);
            }
            uStack_1dc = uStack_19c;
            uStack_1e0 = uStack_1a0;
            if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
              local_1e8 = local_1a8;
            }
            else {
              FUN_1400419b0(&local_1e8,&local_1a8);
            }
            FUN_1400462a0(&local_1e8,&local_e8);
            if ((uStack_1dc & 0xffffff) == 0) {
              uVar11 = SUB84(local_1e8,0);
            }
            else {
              uVar11 = FUN_140e4b060(&local_1e8);
            }
            dVar12 = (double)FUN_140e78d00(uVar11);
            if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            if (dVar12 <= 32.0) goto LAB_140556611;
            if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_198);
            }
            local_198 = 0;
            local_190 = 0;
            local_18c = 5;
            uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
            uStack_20c = 6;
            uVar15 = uVar15 & 0xffffffffffffff00;
            uVar16 = (ulonglong)plVar17 & 0xffffffffffffff00;
            local_218 = param_1;
            FUN_140e87440(&local_218,DAT_1419fe0e8,0x80000000,&local_1a8,uVar16,uVar15);
            if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_218);
            }
            uStack_20c = 6;
            uVar16 = uVar16 & 0xffffffffffffff00;
            local_218 = param_1;
            FUN_140e87440(&local_218,DAT_1419fe158,0x80000000,&local_88,uVar16,
                          uVar15 & 0xffffffffffffff00);
            uVar11 = (undefined4)(uVar16 >> 0x20);
            if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_218);
            }
            local_218 = (longlong *)local_1a8;
            uStack_210 = uStack_1a0;
            uStack_20c = uStack_19c;
            if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_158);
            }
            FUN_140041b80(local_158,&local_218);
            local_d0 = local_158;
            local_218 = (longlong *)local_88;
            uStack_210 = uStack_80;
            uStack_20c = uStack_7c;
            if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_148);
            }
            FUN_140041b80(local_148,&local_218);
            uStack_20c = 0;
            local_218 = (longlong *)0x4048000000000000;
            local_c8 = local_148;
            FUN_140042560(&local_218,uVar4);
            uStack_1dc = uStack_19c;
            uStack_1e0 = uStack_1a0;
            if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
              local_1e8 = local_1a8;
            }
            else {
              FUN_1400419b0(&local_1e8,&local_1a8);
            }
            FUN_1400460e0(&local_1e8,&local_218);
            local_1f8 = (undefined4)local_1e8;
            uStack_1f4 = local_1e8._4_4_;
            uStack_1f0 = uStack_1e0;
            uStack_1ec = uStack_1dc;
            if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_138);
            }
            FUN_140041b80(local_138,&local_1f8);
            if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_218);
            }
            local_c0 = local_138;
            local_1f8 = (undefined4)local_88;
            uStack_1f4 = local_88._4_4_;
            uStack_1f0 = uStack_80;
            uStack_1ec = uStack_7c;
            if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_128);
            }
            FUN_140041b80(local_128,&local_1f8);
            local_b8 = local_128;
            uStack_20c = 0xf;
            local_218 = (longlong *)0x100000000000149;
            local_1f8 = 0x149;
            uStack_1f4 = 0x1000000;
            uStack_1f0 = uStack_210;
            uStack_1ec = 0xf;
            if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_118);
            }
            FUN_140041b80(local_118,&local_1f8);
            local_b0 = local_118;
            local_1f8 = _DAT_1419df7a0;
            uStack_1f4 = uRam00000001419df7a4;
            uStack_1f0 = uRam00000001419df7a8;
            uStack_1ec = uRam00000001419df7ac;
            if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_108);
            }
            FUN_140041b80(local_108,&local_1f8);
            local_a8 = local_108;
            local_1f8 = _DAT_1419df7c0;
            uStack_1f4 = uRam00000001419df7c4;
            uStack_1f0 = uRam00000001419df7c8;
            uStack_1ec = uRam00000001419df7cc;
            if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_f8);
            }
            FUN_140041b80(local_f8,&local_1f8);
            local_a0 = local_f8;
            uVar4 = FUN_140e634e0(param_1,param_2,&local_198,7,CONCAT44(uVar11,DAT_1419f60a8),
                                  &local_d0);
            cVar2 = FUN_140e491e0(uVar4);
            if (cVar2 != '\0') goto LAB_140556611;
          }
          local_1c8 = 0x2f5;
          uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
          FUN_140e609c0(param_1);
          uStack_1dc = 0;
          local_1e8 = (undefined1 *)0x3ff0000000000000;
          FUN_140042560(&local_1e8,uVar4);
          if (&local_1e8 != puVar5) {
            local_1f8 = (undefined4)local_1e8;
            uStack_1f4 = local_1e8._4_4_;
            uStack_1f0 = uStack_1e0;
            uStack_1ec = uStack_1dc;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar5);
            }
            FUN_140041b80(puVar5,&local_1f8);
          }
          if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          FUN_140e60910(1);
        }
        local_1c8 = 0x2f8;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        uStack_20c = 0xf;
        local_218 = (longlong *)0x100000100000174;
        local_1f8 = 0x174;
        uStack_1f4 = 0x1000001;
        uStack_1f0 = uStack_210;
        uStack_1ec = 0xf;
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_1f8);
        local_d8 = local_168;
        local_1f8 = (undefined4)DAT_1419df7b0;
        uStack_1f4 = DAT_1419df7b0._4_4_;
        uStack_1f0 = DAT_1419df7b8;
        uStack_1ec = DAT_1419df7bc;
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_158);
        }
        FUN_140041b80(local_158,&local_1f8);
        local_d0 = local_158;
        uVar4 = gml_Script_animcurve_lerp(param_1,param_2,&local_208,2,&local_d8);
        cVar2 = FUN_140e491e0(uVar4);
        if (cVar2 != '\0') {
          local_1c8 = 0x2fa;
          if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          local_198 = 0;
          local_190 = 0;
          local_18c = 5;
          local_1f8 = _DAT_1419e6330;
          uStack_1f4 = uRam00000001419e6334;
          uStack_1f0 = uRam00000001419e6338;
          uStack_1ec = uRam00000001419e633c;
          if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_148);
          }
          FUN_140041b80(local_148,&local_1f8);
          local_1f8 = (undefined4)DAT_1419df7b0;
          uStack_1f4 = DAT_1419df7b0._4_4_;
          uStack_1f0 = DAT_1419df7b8;
          uStack_1ec = DAT_1419df7bc;
          local_c8 = local_148;
          if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_138);
          }
          FUN_140041b80(local_138,&local_1f8);
          local_c0 = local_138;
          gml_Script_truestate_begin_step(param_1,param_2,&local_198,2,&local_c8);
        }
        local_1c8 = 0x2fd;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
        puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
        if (puVar6 != local_168) {
          local_1f8 = *puVar6;
          uStack_1f4 = puVar6[1];
          uStack_1f0 = puVar6[2];
          uStack_1ec = puVar6[3];
          if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_1f8);
        }
        local_d8 = local_168;
        local_1f8 = _DAT_141dc66e0;
        uStack_1f4 = uRam0000000141dc66e4;
        uStack_1f0 = uRam0000000141dc66e8;
        uStack_1ec = uRam0000000141dc66ec;
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_158);
        }
        FUN_140041b80(local_158,&local_1f8);
        local_d0 = local_158;
        local_1f8 = _DAT_1419e6390;
        uStack_1f4 = uRam00000001419e6394;
        uStack_1f0 = uRam00000001419e6398;
        uStack_1ec = uRam00000001419e639c;
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_1f8);
        local_c8 = local_148;
        FUN_140e609c0(param_1);
        puVar6 = (undefined4 *)gml_Script_arc(param_1,param_2,&local_208,3,&local_d8);
        if (puVar6 != puVar7) {
          local_1f8 = *puVar6;
          uStack_1f4 = puVar6[1];
          uStack_1f0 = puVar6[2];
          uStack_1ec = puVar6[3];
          if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar7);
          }
          FUN_140041b80(puVar7,&local_1f8);
        }
        FUN_140e60910(1);
        local_1c8 = 0x2ff;
        if (local_78 != &local_178) {
          local_1f8 = *(undefined4 *)local_78;
          uStack_1f4 = *(undefined4 *)((longlong)local_78 + 4);
          uStack_1f0 = *(undefined4 *)(local_78 + 1);
          uStack_1ec = *(undefined4 *)((longlong)local_78 + 0xc);
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          FUN_140041b80(&local_178,&local_1f8);
        }
        FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_178);
        local_1c8 = 0x301;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
        FUN_140e63610(param_1,param_2,&local_208,0,uVar4,0);
        local_1c8 = 0x302;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
        FUN_140e63610(param_1,param_2,&local_208,0,uVar4,0);
        local_1c8 = 0x304;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
        FUN_140e63610(param_1,param_2,&local_208,0,uVar4,0);
        local_1c8 = 0x306;
      }
      else if (iVar3 == 2) {
        local_1c8 = 0x30a;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b18);
        FUN_140e63610(param_1,param_2,&local_208,0,uVar4,0);
        local_1c8 = 0x30b;
      }
      else if (iVar3 == 3) {
        local_1c8 = 0x30f;
      }
      break;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(local_168,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1d8;
  return param_3;
}

