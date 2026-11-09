// gml_Script_StatesPestDodge @ 0x1405799e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesPestDodge
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  double *pdVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  longlong *plVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar17;
  ulonglong uVar18;
  undefined4 uVar22;
  undefined8 **ppuVar19;
  ulonglong uVar20;
  undefined8 **ppuVar21;
  ulonglong in_stack_fffffffffffffd90;
  undefined4 uVar23;
  undefined8 local_248;
  undefined4 uStack_240;
  uint uStack_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  char *local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined4 local_204;
  undefined8 local_1f8;
  byte local_1ec;
  undefined1 local_1e8 [12];
  byte local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined1 local_1c8 [12];
  byte local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 *local_1a8;
  undefined1 *local_1a0;
  undefined8 *local_198;
  undefined1 *local_190;
  undefined8 local_188;
  undefined4 local_17c;
  double local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  longlong local_168;
  double local_158;
  uint local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  double local_138;
  uint local_12c;
  double local_128;
  undefined4 local_120;
  uint local_11c;
  double local_118;
  undefined4 local_110;
  uint local_10c;
  double local_108;
  uint local_fc;
  double local_f8;
  undefined4 local_f0;
  uint local_ec;
  longlong local_e8;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  local_220 = "gml_Script_StatesPestIntro";
  local_228 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_228;
  local_218 = 0xb7;
  pcVar17 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_1f8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_17c = 0xffffff;
  local_188 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_22c = 0;
  local_238 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_218 = 0xb9;
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
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de03a0) &&
     (_Init_thread_header(&DAT_141de03a0), DAT_141de03a0 == -1)) {
    _DAT_141de046c = 0;
    _DAT_141de0460 = 0x4000000000000000;
    _DAT_141de0480 = 0;
    _DAT_141de0474 = 0;
    _DAT_141de0484 = 1;
    _DAT_141de0494 = 0;
    _DAT_141de0488 = 0x3ff0000000000000;
    _DAT_141de0498 = 2;
    _DAT_141de04a8 = 0;
    _DAT_141de049c = 0x4008000000000000;
    _DAT_141de04ac = 3;
    atexit((_func_5014 *)&LAB_141482990);
    _Init_thread_footer(&DAT_141de03a0);
  }
  uVar9 = 0;
  do {
    iVar2 = FUN_140e851f0(&DAT_141de0460 + (longlong)(int)uVar9 * 0x14,&local_d8,DAT_141955260,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(&DAT_141de0470 + (longlong)(int)uVar9 * 0x14);
      if (iVar2 == 0) {
        local_218 = 0xbd;
        uStack_23c = 0xf;
        local_248 = (longlong *)0x100000100000345;
        local_178 = 7.29112897291356e-304;
        uStack_170 = uStack_240;
        uStack_16c = 0xf;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        FUN_140041b80(&local_188,&local_178);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_188);
        local_218 = 0xbe;
        if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_210);
        }
        local_204 = 0;
        local_210 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_210);
        local_218 = 0xbf;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_1ac = 0;
        local_1b8 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_1b8);
        local_218 = 0xc0;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5ef8);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        *puVar6 = &DAT_bff0000000000000;
        local_218 = 0xc1;
        uStack_23c = 6;
        local_248 = local_res8;
        uVar18 = (ulonglong)pcVar17 & 0xffffffffffffff00;
        FUN_140e87440(&local_248,DAT_141a0a828,0x80000000,&local_a8,uVar18,
                      in_stack_fffffffffffffd90 & 0xffffffffffffff00);
        uVar22 = (undefined4)(uVar18 >> 0x20);
        if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        local_248 = (longlong *)local_a8;
        uStack_240 = uStack_a0;
        uStack_23c = uStack_9c;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_248);
        uStack_23c = 0xf;
        local_248 = (longlong *)0x100000000000058;
        FUN_140e87930(&local_248,DAT_141a1f440,0x80000000,&local_148);
        if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        local_218 = 0xc2;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd428);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        *puVar6 = 0;
        local_218 = 0xc4;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
        if (puVar6 != &local_1f8) {
          local_248 = (longlong *)*puVar6;
          uStack_240 = *(undefined4 *)(puVar6 + 1);
          uStack_23c = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          FUN_140041b80(&local_1f8,&local_248);
        }
        local_1a8 = &local_1f8;
        local_248 = (longlong *)CONCAT44(uRam0000000141dd415c,_DAT_141dd4158);
        uStack_240 = uRam0000000141dd4160;
        uStack_23c = DAT_141dd4164;
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_248);
        local_1a0 = local_1e8;
        local_248 = (longlong *)CONCAT44(uRam0000000141dc6704,_DAT_141dc6700);
        uStack_240 = uRam0000000141dc6708;
        uStack_23c = uRam0000000141dc670c;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_248);
        local_198 = &local_1d8;
        FUN_140e634e0(local_res8,local_res10,&local_238,3,CONCAT44(uVar22,DAT_1419ff3d8),&local_1a8)
        ;
        local_218 = 0xc6;
      }
      else if (iVar2 == 1) {
        local_218 = 0xca;
        uStack_23c = 0xf;
        local_248 = (longlong *)0x1000000000000ee;
        in_stack_fffffffffffffd90 = in_stack_fffffffffffffd90 & 0xffffffffffffff00;
        uVar18 = (ulonglong)pcVar17 & 0xffffffffffffff00;
        FUN_140e87440(&local_248,DAT_141a1f2b0,0x80000000,&local_b8,uVar18,in_stack_fffffffffffffd90
                     );
        if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        uStack_23c = 10;
        local_248 = (longlong *)0x0;
        iVar2 = FUN_140e851f0(&local_b8,&local_248,DAT_141955260,0);
        if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        if (iVar2 == 0) {
          local_218 = 0xcc;
          puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd3b8);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
          *puVar6 = 0;
          local_218 = 0xcd;
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          local_1ac = 0;
          local_1b8 = 0;
          FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_1b8);
          local_218 = 0xce;
        }
        else {
          local_218 = 0xd2;
          uStack_23c = 6;
          local_248 = local_res8;
          ppuVar21 = (undefined8 **)(in_stack_fffffffffffffd90 & 0xffffffffffffff00);
          ppuVar19 = (undefined8 **)(uVar18 & 0xffffffffffffff00);
          FUN_140e87440(&local_248,DAT_141a0a728,0x80000000,&local_158,ppuVar19,ppuVar21);
          if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_248);
          }
          uStack_23c = 0xf;
          local_248 = (longlong *)0x100000100000345;
          iVar2 = FUN_140e851f0(&local_158,&local_248,DAT_141955260,0);
          if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_248);
          }
          if (iVar2 == 0) {
            local_218 = 0xd4;
            if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_238);
            }
            uVar22 = (undefined4)((ulonglong)ppuVar19 >> 0x20);
            local_238 = 0;
            local_230 = 0;
            local_22c = 5;
            uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
            local_248 = (longlong *)CONCAT44(uRam0000000141dc6704,_DAT_141dc6700);
            uStack_240 = uRam0000000141dc6708;
            uStack_23c = uRam0000000141dc670c;
            if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1f8);
            }
            FUN_140041b80(&local_1f8,&local_248);
            local_1a8 = &local_1f8;
            ppuVar21 = &local_1a8;
            puVar6 = (undefined8 *)
                     FUN_140e634e0(local_res8,local_res10,&local_238,1,
                                   CONCAT44(uVar22,DAT_141a0a0d8),ppuVar21);
            uStack_23c = *(undefined4 *)((longlong)puVar6 + 0xc);
            uStack_240 = *(undefined4 *)(puVar6 + 1);
            if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
              local_248 = (longlong *)*puVar6;
            }
            else {
              FUN_1400419b0(&local_248,puVar6);
            }
            uStack_16c = 7;
            local_178 = (double)CONCAT44(local_178._4_4_,2);
            FUN_140042560(&local_248,&local_178);
            if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_178);
            }
            uVar9 = FUN_140e851f0(uVar4,&local_248,DAT_141955260,1);
            if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_248);
            }
            if (uVar9 < 0x80000000) {
              local_218 = 0xd5;
              if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_210);
              }
              local_204 = 0;
              local_210 = 0x3ff0000000000000;
              FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_210);
            }
            local_218 = 0xd7;
            if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_238);
            }
            local_238 = 0;
            local_230 = 0;
            local_22c = 5;
            local_248 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
            uStack_240 = DAT_1419df7b8;
            uStack_23c = DAT_1419df7bc;
            if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1f8);
            }
            FUN_140041b80(&local_1f8,&local_248);
            local_1a8 = &local_1f8;
            local_248 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
            uStack_240 = DAT_1419df7b8;
            uStack_23c = DAT_1419df7bc;
            if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1e8);
            }
            FUN_140041b80(local_1e8,&local_248);
            local_1a0 = local_1e8;
            ppuVar19 = &local_1a8;
            uVar4 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_238,2,ppuVar19);
            cVar1 = FUN_140e491e0(uVar4);
            if (cVar1 != '\0') {
              local_218 = 0xd9;
              uStack_23c = 0xf;
              local_248 = (longlong *)0x100000100000357;
              local_178 = 7.29112897291359e-304;
              uStack_170 = uStack_240;
              uStack_16c = 0xf;
              if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_188);
              }
              FUN_140041b80(&local_188,&local_178);
              FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_188);
              local_218 = 0xda;
              puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd3b8);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar6);
              }
              *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
              *puVar6 = 0;
            }
          }
          local_218 = 0xe0;
          uStack_23c = 6;
          local_248 = local_res8;
          uVar18 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
          ppuVar19 = (undefined8 **)((ulonglong)ppuVar19 & 0xffffffffffffff00);
          FUN_140e87440(&local_248,DAT_141a0a728,0x80000000,&local_158,ppuVar19,uVar18);
          if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_248);
          }
          uStack_23c = 0xf;
          local_248 = (longlong *)0x100000100000357;
          iVar2 = FUN_140e851f0(&local_158,&local_248,DAT_141955260,0);
          if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_248);
          }
          if (iVar2 == 0) {
            local_218 = 0xe2;
            if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_210);
            }
            local_204 = 0;
            local_210 = 0x3ff0000000000000;
            FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_210);
            local_218 = 0xe3;
            if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_238);
            }
            local_238 = 0;
            local_230 = 0;
            local_22c = 5;
            local_248 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
            uStack_240 = DAT_1419df7b8;
            uStack_23c = DAT_1419df7bc;
            if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1f8);
            }
            FUN_140041b80(&local_1f8,&local_248);
            local_1a8 = &local_1f8;
            local_248 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
            uStack_240 = DAT_1419df7b8;
            uStack_23c = DAT_1419df7bc;
            if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1e8);
            }
            FUN_140041b80(local_1e8,&local_248);
            local_1a0 = local_1e8;
            ppuVar19 = &local_1a8;
            uVar4 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_238,2,ppuVar19);
            cVar1 = FUN_140e491e0(uVar4);
            if (cVar1 != '\0') {
              local_218 = 0xe5;
              uStack_23c = 0xf;
              local_248 = (longlong *)0x100000100000379;
              local_178 = 7.291128972913645e-304;
              uStack_170 = uStack_240;
              uStack_16c = 0xf;
              if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_188);
              }
              FUN_140041b80(&local_188,&local_178);
              FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_188);
              local_218 = 0xe6;
              if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_238);
              }
              local_238 = 0;
              local_230 = 0;
              local_22c = 5;
              ppuVar19 = (undefined8 **)0x0;
              FUN_140265ac0(local_res8,local_res10,&local_238,0,0);
            }
          }
          local_218 = 0xec;
          uStack_23c = 6;
          local_248 = local_res8;
          uVar18 = uVar18 & 0xffffffffffffff00;
          uVar20 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
          FUN_140e87440(&local_248,DAT_141a0a728,0x80000000,&local_158,uVar20,uVar18);
          if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_248);
          }
          uStack_23c = 0xf;
          local_248 = (longlong *)0x100000100000379;
          iVar2 = FUN_140e851f0(&local_158,&local_248,DAT_141955260,0);
          if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_248);
          }
          if (iVar2 == 0) {
            uStack_23c = 6;
            local_248 = local_res8;
            FUN_140e87440(&local_248,DAT_141a0cfc8,0x80000000,&local_138,uVar20 & 0xffffffffffffff00
                          ,uVar18 & 0xffffffffffffff00);
            if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_248);
            }
            uStack_23c = 0;
            local_248 = (longlong *)0x4014000000000000;
            iVar2 = FUN_140e851f0(&local_138,&local_248,DAT_141955260,1);
            if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_248);
            }
            if (0 < iVar2) {
              local_218 = 0xef;
              if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_238);
              }
              local_238 = 0;
              local_230 = 0;
              local_22c = 5;
              local_248 = (longlong *)CONCAT44(uRam00000001419e65b4,_DAT_1419e65b0);
              uStack_240 = uRam00000001419e65b8;
              uStack_23c = uRam00000001419e65bc;
              if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1f8);
              }
              FUN_140041b80(&local_1f8,&local_248);
              local_1a8 = &local_1f8;
              local_248 = (longlong *)CONCAT44(uRam00000001419e6634,_DAT_1419e6630);
              uStack_240 = uRam00000001419e6638;
              uStack_23c = uRam00000001419e663c;
              if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1e8);
              }
              FUN_140041b80(local_1e8,&local_248);
              local_1a0 = local_1e8;
              local_1d8 = FUN_140e79480(0);
              if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1d8);
              }
              local_1cc = 0;
              local_198 = &local_1d8;
              local_248 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
              uStack_240 = DAT_1419df7b8;
              uStack_23c = DAT_1419df7bc;
              if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1c8);
              }
              FUN_140041b80(local_1c8,&local_248);
              local_190 = local_1c8;
              FUN_14044e5b0(local_res8,local_res10,&local_238,4,&local_1a8);
              local_218 = 0xf0;
              if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_238);
              }
              local_238 = 0;
              local_230 = 0;
              local_22c = 5;
              local_248 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
              uStack_240 = DAT_1419df7b8;
              uStack_23c = DAT_1419df7bc;
              if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1f8);
              }
              FUN_140041b80(&local_1f8,&local_248);
              local_1a8 = &local_1f8;
              local_248 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
              uStack_240 = DAT_1419df7b8;
              uStack_23c = DAT_1419df7bc;
              if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1e8);
              }
              FUN_140041b80(local_1e8,&local_248);
              local_1a0 = local_1e8;
              uVar4 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_238,2,&local_1a8);
              cVar1 = FUN_140e491e0(uVar4);
              if (cVar1 != '\0') {
                local_218 = 0xf2;
                uStack_23c = 0xf;
                local_248 = (longlong *)0x1000000000000ee;
                local_178 = 7.291122019556783e-304;
                uStack_170 = uStack_240;
                uStack_16c = 0xf;
                if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_148);
                }
                FUN_140041b80(&local_148,&local_178);
                uStack_23c = 0xf;
                local_248 = (longlong *)0x100000000000058;
                FUN_140e87930(&local_248,DAT_141a1f440,0x80000000,&local_148);
                if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_248);
                }
                local_218 = 0xf3;
                if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_238);
                }
                local_238 = 0;
                local_230 = 0;
                local_22c = 5;
                local_248 = (longlong *)CONCAT44(uRam00000001419e6554,_DAT_1419e6550);
                uStack_240 = uRam00000001419e6558;
                uStack_23c = uRam00000001419e655c;
                if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1f8);
                }
                FUN_140041b80(&local_1f8,&local_248);
                local_1a8 = &local_1f8;
                local_248 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
                uStack_240 = DAT_1419df7b8;
                uStack_23c = DAT_1419df7bc;
                if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_1e8);
                }
                FUN_140041b80(local_1e8,&local_248);
                local_1a0 = local_1e8;
                ppuVar21 = &local_1a8;
                gml_Script_truestate_begin_step(local_res8,local_res10,&local_238,2,ppuVar21);
                uVar22 = (undefined4)((ulonglong)ppuVar21 >> 0x20);
                local_218 = 0xf4;
                uStack_23c = 0xf;
                local_248 = (longlong *)0x1000000000000ee;
                iVar2 = FUN_140e63cb0(&local_f8,&local_res8,&local_res10,&local_248);
                if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_248);
                }
                if (0 < iVar2) {
                  do {
                    local_218 = 0xf5;
                    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_238);
                    }
                    local_238 = 0;
                    local_230 = 0;
                    local_22c = 5;
                    local_248 = (longlong *)CONCAT44(uRam00000001419e6554,_DAT_1419e6550);
                    uStack_240 = uRam00000001419e6558;
                    uStack_23c = uRam00000001419e655c;
                    if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_1f8);
                    }
                    FUN_140041b80(&local_1f8,&local_248);
                    local_1a8 = &local_1f8;
                    local_248 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
                    uStack_240 = DAT_1419df7b8;
                    uStack_23c = DAT_1419df7bc;
                    if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(local_1e8);
                    }
                    FUN_140041b80(local_1e8,&local_248);
                    local_1a0 = local_1e8;
                    ppuVar21 = &local_1a8;
                    gml_Script_truestate_begin_step(local_res8,local_res10,&local_238,2,ppuVar21);
                    uVar22 = (undefined4)((ulonglong)ppuVar21 >> 0x20);
                    cVar1 = FUN_140e643f0(&local_f8,&local_res8,&local_res10);
                  } while (cVar1 != '\0');
                }
                FUN_140e63970(&local_f8,&local_res8,&local_res10);
                local_218 = 0xf7;
                if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_238);
                }
                local_238 = 0;
                local_230 = 0;
                local_22c = 5;
                uStack_23c = 0xf;
                local_248 = (longlong *)0x100000200000014;
                local_178 = 7.291135926268046e-304;
                uStack_170 = uStack_240;
                uStack_16c = 0xf;
                if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1f8);
                }
                FUN_140041b80(&local_1f8,&local_178);
                local_1a8 = &local_1f8;
                local_248 = (longlong *)CONCAT44(uRam00000001419e64e4,_DAT_1419e64e0);
                uStack_240 = uRam00000001419e64e8;
                uStack_23c = uRam00000001419e64ec;
                if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_1e8);
                }
                FUN_140041b80(local_1e8,&local_248);
                local_1a0 = local_1e8;
                local_248 = (longlong *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
                uStack_240 = uRam00000001419df7c8;
                uStack_23c = uRam00000001419df7cc;
                if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1d8);
                }
                FUN_140041b80(&local_1d8,&local_248);
                local_198 = &local_1d8;
                FUN_140e634e0(local_res8,local_res10,&local_238,3,CONCAT44(uVar22,DAT_141a0a2e8),
                              &local_1a8);
                if (local_e8 != 0) {
                  FUN_140e4cd60();
                }
              }
              goto LAB_14057b2f7;
            }
          }
          local_218 = 0xfd;
          uStack_23c = 0xf;
          local_248 = (longlong *)0x1000000000000ee;
          iVar2 = FUN_140e63cb0(&local_178,&local_res8,&local_res10,&local_248);
          if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_248);
          }
          if (0 < iVar2) {
            do {
              local_218 = 0xff;
              if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_210);
              }
              local_204 = 0;
              local_210 = 0;
              FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_210);
              local_218 = 0x100;
              if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1b8);
              }
              local_1ac = 0;
              local_1b8 = 0x3ff0000000000000;
              FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_1b8);
              local_218 = 0x101;
              if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_238);
              }
              local_238 = 0;
              local_230 = 0;
              local_22c = 5;
              local_248 = (longlong *)CONCAT44(uRam00000001419e64b4,_DAT_1419e64b0);
              uStack_240 = uRam00000001419e64b8;
              uStack_23c = uRam00000001419e64bc;
              if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1f8);
              }
              FUN_140041b80(&local_1f8,&local_248);
              local_1a8 = &local_1f8;
              local_248 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
              uStack_240 = DAT_1419df7b8;
              uStack_23c = DAT_1419df7bc;
              if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1e8);
              }
              FUN_140041b80(local_1e8,&local_248);
              local_1a0 = local_1e8;
              gml_Script_truestate_begin_step(local_res8,local_res10,&local_238,2,&local_1a8);
              cVar1 = FUN_140e643f0(&local_178,&local_res8,&local_res10);
            } while (cVar1 != '\0');
          }
          FUN_140e63970(&local_178,&local_res8,&local_res10);
          if (local_168 != 0) {
            FUN_140e4cd60();
          }
LAB_14057b2f7:
          local_218 = 0x107;
          if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          local_238 = 0;
          local_230 = 0;
          local_22c = 5;
          uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd4b8);
          FUN_140e63610(local_res8,local_res10,&local_238,0,uVar4,0);
          local_218 = 0x109;
        }
      }
      else if (iVar2 == 2) {
        local_218 = 0x10d;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd428);
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd5d8);
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a748);
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
        pdVar8 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a858);
        uStack_23c = 6;
        local_248 = local_res8;
        in_stack_fffffffffffffd90 = in_stack_fffffffffffffd90 & 0xffffffffffffff00;
        uVar18 = (ulonglong)pcVar17 & 0xffffffffffffff00;
        FUN_140e87440(&local_248,DAT_141a0a728,0x80000000,&local_158,uVar18,
                      in_stack_fffffffffffffd90);
        if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        uStack_23c = 6;
        local_248 = local_res8;
        in_stack_fffffffffffffd90 = in_stack_fffffffffffffd90 & 0xffffffffffffff00;
        uVar18 = uVar18 & 0xffffffffffffff00;
        FUN_140e87440(&local_248,DAT_141a0cfc8,0x80000000,&local_138,uVar18,
                      in_stack_fffffffffffffd90);
        if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        uStack_23c = 6;
        local_248 = local_res8;
        in_stack_fffffffffffffd90 = in_stack_fffffffffffffd90 & 0xffffffffffffff00;
        uVar18 = uVar18 & 0xffffffffffffff00;
        FUN_140e87440(&local_248,DAT_1419fe0e8,0x80000000,&local_118,uVar18,
                      in_stack_fffffffffffffd90);
        if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        uStack_23c = 6;
        local_248 = local_res8;
        in_stack_fffffffffffffd90 = in_stack_fffffffffffffd90 & 0xffffffffffffff00;
        uVar18 = uVar18 & 0xffffffffffffff00;
        FUN_140e87440(&local_248,DAT_1419fe158,0x80000000,&local_128,uVar18,
                      in_stack_fffffffffffffd90);
        if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        uStack_23c = 6;
        local_248 = local_res8;
        in_stack_fffffffffffffd90 = in_stack_fffffffffffffd90 & 0xffffffffffffff00;
        uVar18 = uVar18 & 0xffffffffffffff00;
        FUN_140e87440(&local_248,DAT_141a0a778,0x80000000,&local_108,uVar18,
                      in_stack_fffffffffffffd90);
        if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        uStack_23c = 6;
        local_248 = local_res8;
        in_stack_fffffffffffffd90 = in_stack_fffffffffffffd90 & 0xffffffffffffff00;
        uVar18 = uVar18 & 0xffffffffffffff00;
        FUN_140e87440(&local_248,DAT_141a0f9d8,0x80000000,&local_c8,uVar18,in_stack_fffffffffffffd90
                     );
        uVar22 = (undefined4)(uVar18 >> 0x20);
        uVar23 = (undefined4)(in_stack_fffffffffffffd90 >> 0x20);
        if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        uStack_23c = *(uint *)((longlong)puVar6 + 0xc);
        uStack_240 = *(undefined4 *)(puVar6 + 1);
        if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
          local_248 = (longlong *)*puVar6;
        }
        else {
          FUN_1400419b0(&local_248,puVar6);
        }
        FUN_140042560(&local_248,uVar7);
        uStack_16c = local_11c;
        uStack_170 = local_120;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
          local_178 = local_128;
        }
        else {
          FUN_1400419b0(&local_178,&local_128);
        }
        FUN_1400460e0(&local_178,uVar5);
        local_ec = local_10c;
        local_f0 = local_110;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
          local_f8 = local_118;
        }
        else {
          FUN_1400419b0(&local_f8,&local_118);
        }
        FUN_1400460e0(&local_f8,uVar4);
        uVar3 = FUN_140e4a8b0(&local_c8);
        dVar10 = local_108;
        if ((local_fc & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_108);
        }
        if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
          dVar11 = *pdVar8;
        }
        else {
          dVar11 = (double)FUN_140e4b060(pdVar8);
        }
        plVar12 = local_248;
        if ((uStack_23c & 0xffffff) != 0) {
          plVar12 = (longlong *)FUN_140e4b060(&local_248);
        }
        dVar13 = local_178;
        if ((uStack_16c & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_178);
        }
        dVar14 = local_f8;
        if ((local_ec & 0xffffff) != 0) {
          dVar14 = (double)FUN_140e4b060(&local_f8);
        }
        dVar15 = local_138;
        if ((local_12c & 0xffffff) != 0) {
          dVar15 = (double)FUN_140e4b060(&local_138);
        }
        dVar16 = local_158;
        if ((local_14c & 0xffffff) != 0) {
          dVar16 = (double)FUN_140e4b060(&local_158);
        }
        FUN_140ec5dd0(local_res8,(longlong)dVar16,(float)dVar15,(float)dVar14,
                      CONCAT44(uVar22,(float)dVar13),CONCAT44(uVar23,(float)(double)plVar12),
                      (float)dVar11,(float)dVar10,uVar3,0x3f800000);
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        local_218 = 0x10e;
      }
      else if (iVar2 == 3) {
        local_218 = 0x112;
      }
      break;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 4);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(&local_1f8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_228;
  return param_3;
}

