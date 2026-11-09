// gml_Script_anon_2974_ThrowAnimQueue_ALTWEAPONSINIT @ 0x140214aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_2974_ThrowAnimQueue_ALTWEAPONSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  code *pcVar13;
  undefined4 uVar15;
  undefined8 uVar14;
  undefined8 **in_stack_fffffffffffffe70;
  ulonglong uVar16;
  undefined8 **ppuVar17;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined4 local_d8 [3];
  byte local_cc;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined4 *local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  uint local_50 [2];
  undefined8 *local_48;
  
  local_150 = "gml_Script_anon@1713@ThrowAnimQueue@ALTWEAPONSINIT";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0x36;
  FUN_140041df0(local_50,param_4,1,param_5);
  pcVar13 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_f8,0x10,3,FUN_1400424d0,FUN_140041b30);
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  uVar2 = local_50[0];
  local_74 = 0xffffff;
  local_80 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_16c = 0;
  local_178 = 0;
  local_134 = 0;
  local_140 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_148 = 0x36;
  puVar12 = &DAT_1419df7b0;
  if ((int)local_50[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_48;
  }
  iVar1 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_148 = 0x36;
    if ((int)uVar2 < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_48;
    }
    if (puVar3 != puVar7) {
      local_188 = *puVar3;
      uStack_180 = *(undefined4 *)(puVar3 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_188);
    }
  }
  local_148 = 0x37;
  plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a8e8);
  if (((*(int *)((longlong)plVar4 + 0xc) == 2) && (*plVar4 != 0)) && (0 < *(int *)(*plVar4 + 0x24)))
  {
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0ab48);
    uStack_17c = DAT_141dcdd54;
    uStack_180 = DAT_141dcdd50;
    if ((1 << ((byte)DAT_141dcdd54 & 0x1f) & 0x46U) == 0) {
      local_188 = DAT_141dcdd48;
    }
    else {
      FUN_1400419b0(&local_188,&DAT_141dcdd48);
    }
    iVar1 = FUN_140e851f0(uVar5,&local_188,DAT_141955260,0);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    if (iVar1 != 0) {
      local_148 = 0x38;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pcVar13 = (code *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0aa88);
      local_188 = CONCAT44(uRam0000000141dc62e4,_DAT_141dc62e0);
      uStack_180 = uRam0000000141dc62e8;
      uStack_17c = uRam0000000141dc62ec;
      if ((1 << ((byte)_local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_188);
      local_c8 = &local_f8;
      in_stack_fffffffffffffe70 = &local_c8;
      FUN_140e63610(param_1,param_2,&local_178,1,pcVar13,in_stack_fffffffffffffe70);
    }
  }
  local_148 = 0x3a;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0ab48);
  local_84 = *(undefined4 *)((longlong)puVar3 + 0xc);
  local_88 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) == 0) {
    local_90 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_90,puVar3);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddbb0) &&
     (_Init_thread_header(&DAT_141dddbb0), DAT_141dddbb0 == -1)) {
    _DAT_141dddb74 = DAT_141dcdd54;
    _DAT_141dddb70 = DAT_141dcdd50;
    if ((1 << ((byte)DAT_141dcdd54 & 0x1f) & 0x46U) == 0) {
      _DAT_141dddb68 = DAT_141dcdd48;
    }
    else {
      FUN_1400419b0(&DAT_141dddb68,&DAT_141dcdd48);
    }
    DAT_141dddb78 = 0;
    _DAT_141dddb88 = DAT_141dcdd94;
    _DAT_141dddb84 = DAT_141dcdd90;
    if ((1 << ((byte)DAT_141dcdd94 & 0x1f) & 0x46U) == 0) {
      _DAT_141dddb7c = CONCAT44(DAT_141dcdd88._4_4_,(undefined4)DAT_141dcdd88);
    }
    else {
      FUN_1400419b0(&DAT_141dddb7c,&DAT_141dcdd88);
    }
    _DAT_141dddb8c = 1;
    _DAT_141dddb9c = DAT_141dcdc74;
    _DAT_141dddb98 = DAT_141dcdc70;
    if ((1 << ((byte)DAT_141dcdc74 & 0x1f) & 0x46U) == 0) {
      _DAT_141dddb90 = CONCAT44(DAT_141dcdc68._4_4_,(undefined4)DAT_141dcdc68);
    }
    else {
      FUN_1400419b0(&DAT_141dddb90,&DAT_141dcdc68);
    }
    _DAT_141dddba0 = 2;
    atexit((_func_5014 *)&LAB_14146f500);
    _Init_thread_footer(&DAT_141dddbb0);
  }
  uVar10 = 0;
  do {
    iVar1 = FUN_140e851f0(&DAT_141dddb68 + (longlong)(int)uVar10 * 0x14,&local_90,DAT_141955260,0);
    if (iVar1 == 0) {
      iVar1 = (&DAT_141dddb78)[(longlong)(int)uVar10 * 5];
      if (iVar1 == 0) {
        local_148 = 0x3d;
        uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0ab18);
        uVar16 = (ulonglong)in_stack_fffffffffffffe70 & 0xffffffffffffff00;
        uVar11 = (ulonglong)pcVar13 & 0xffffffffffffff00;
        FUN_140e87440(uVar5,DAT_141a0a978,0x80000000,&local_80,uVar11,uVar16);
        if ((int)uVar2 < 1) {
          puVar12 = &DAT_1419df7b0;
        }
        else {
          puVar12 = (undefined8 *)*local_48;
        }
        FUN_1400460e0(&local_80,puVar12);
        FUN_140e87930(uVar5,DAT_141a0a978,0x80000000,&local_80);
        local_148 = 0x3e;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_140);
        }
        local_140 = 0;
        local_138 = 0;
        local_134 = 5;
        puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aa98);
        uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0ab18);
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar11 = uVar11 & 0xffffffffffffff00;
        FUN_140e87440(uVar5,DAT_141a0a998,0x80000000,&local_118,uVar11,uVar16);
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar11 = uVar11 & 0xffffffffffffff00;
        FUN_140e87440(uVar5,DAT_141a0a978,0x80000000,&local_130,uVar11,uVar16);
        uVar11 = uVar11 & 0xffffffffffffff00;
        FUN_140e87440(uVar5,DAT_141a0a948,0x80000000,&local_60,uVar11,uVar16 & 0xffffffffffffff00);
        uVar15 = (undefined4)(uVar11 >> 0x20);
        uStack_15c = local_124;
        uStack_160 = local_128;
        if ((1 << ((byte)local_124 & 0x1f) & 0x46U) == 0) {
          local_168 = local_130;
        }
        else {
          FUN_1400419b0(&local_168,&local_130);
        }
        FUN_140046500(&local_168,&local_60);
        uStack_17c = uStack_15c;
        uStack_180 = uStack_160;
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
          local_188 = local_168;
        }
        else {
          FUN_1400419b0(&local_188,&local_168);
        }
        FUN_140042560(&local_188,&local_118);
        local_108 = (undefined4)local_188;
        uStack_104 = local_188._4_4_;
        uStack_100 = uStack_180;
        uStack_fc = uStack_17c;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_108);
        if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        local_c8 = &local_f8;
        uStack_17c = uStack_10c;
        uStack_180 = uStack_110;
        if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
          local_188 = local_118;
        }
        else {
          FUN_1400419b0(&local_188,&local_118);
        }
        uStack_15c = 7;
        local_168 = CONCAT44(local_168._4_4_,1);
        FUN_1400462a0(&local_188,&local_168);
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        local_108 = (undefined4)local_188;
        uStack_104 = local_188._4_4_;
        uStack_100 = uStack_180;
        uStack_fc = uStack_17c;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        FUN_140041b80(&local_e8,&local_108);
        if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_c0 = &local_e8;
        ppuVar17 = &local_c8;
        uVar11 = CONCAT44(uVar15,DAT_1419fe728);
        puVar9 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_140,1,uVar11,ppuVar17);
        if (puVar9 != local_d8) {
          local_108 = *puVar9;
          uStack_104 = puVar9[1];
          uStack_100 = puVar9[2];
          uStack_fc = puVar9[3];
          if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_d8);
          }
          FUN_140041b80(local_d8,&local_108);
        }
        local_b8 = local_d8;
        FUN_140e609c0(param_1);
        puVar9 = (undefined4 *)FUN_140e79230(&local_178,2,&local_c0);
        if (puVar9 != puVar8) {
          local_108 = *puVar9;
          uStack_104 = puVar9[1];
          uStack_100 = puVar9[2];
          uStack_fc = puVar9[3];
          if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar8);
          }
          FUN_140041b80(puVar8,&local_108);
        }
        FUN_140e60910(1);
        local_148 = 0x40;
        uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0ab18);
        uVar16 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
        uVar11 = uVar11 & 0xffffffffffffff00;
        FUN_140e87440(uVar5,DAT_141a0a978,0x80000000,&local_130,uVar11,uVar16);
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar11 = uVar11 & 0xffffffffffffff00;
        FUN_140e87440(uVar5,DAT_141a0a938,0x80000000,&local_a0,uVar11,uVar16);
        uVar10 = FUN_140e851f0(&local_130,&local_a0,DAT_141955260,1);
        if (uVar10 < 0x80000000) {
          local_148 = 0x42;
          uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0ab18);
          uVar16 = uVar16 & 0xffffffffffffff00;
          uVar11 = uVar11 & 0xffffffffffffff00;
          FUN_140e87440(uVar5,DAT_141a0a978,0x80000000,&local_130,uVar11,uVar16);
          uVar16 = uVar16 & 0xffffffffffffff00;
          uVar11 = uVar11 & 0xffffffffffffff00;
          FUN_140e87440(uVar5,DAT_141a0a938,0x80000000,&local_a0,uVar11,uVar16);
          uStack_17c = local_124;
          uStack_180 = local_128;
          if ((1 << ((byte)local_124 & 0x1f) & 0x46U) == 0) {
            local_188 = local_130;
          }
          else {
            FUN_1400419b0(&local_188,&local_130);
          }
          FUN_1400462a0(&local_188,&local_a0);
          local_108 = (undefined4)local_188;
          uStack_104 = local_188._4_4_;
          uStack_100 = uStack_180;
          uStack_fc = uStack_17c;
          if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_b0);
          }
          FUN_140041b80(&local_b0,&local_108);
          if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          local_148 = 0x44;
          plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a8e8);
          if (((*(int *)((longlong)plVar4 + 0xc) == 2) && (*plVar4 != 0)) &&
             (0 < *(int *)(*plVar4 + 0x24))) {
            local_148 = 0x45;
            if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_178);
            }
            local_178 = 0;
            local_170 = 0;
            local_16c = 5;
            uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0aa88);
            local_c8 = &local_b0;
            FUN_140e63610(param_1,param_2,&local_178,1,uVar5,&local_c8);
            local_148 = 0x51;
            goto LAB_140214fa8;
          }
          local_148 = 0x46;
          uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0ab18);
          uVar16 = uVar16 & 0xffffffffffffff00;
          uVar11 = uVar11 & 0xffffffffffffff00;
          FUN_140e87440(uVar5,DAT_141a0aa38,0x80000000,&local_70,uVar11,uVar16);
          iVar1 = FUN_140e851f0(&local_70,&DAT_1419df7b0,DAT_141955260,0);
          if (iVar1 != 0) {
            local_148 = 0x48;
            puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x10))();
            if (puVar12 != &DAT_141dcdd88) {
              local_108 = (undefined4)DAT_141dcdd88;
              uStack_104 = DAT_141dcdd88._4_4_;
              uStack_100 = DAT_141dcdd90;
              uStack_fc = DAT_141dcdd94;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar12);
              }
              FUN_140041b80(puVar12,&local_108);
            }
            local_148 = 0x49;
            puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a888);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar12);
            }
            *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
            *puVar12 = 0;
            local_148 = 0x51;
            goto LAB_140214fa8;
          }
          local_148 = 0x4d;
          puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab48);
          if (puVar12 != &DAT_141dcdc68) {
            local_108 = (undefined4)DAT_141dcdc68;
            uStack_104 = DAT_141dcdc68._4_4_;
            uStack_100 = DAT_141dcdc70;
            uStack_fc = DAT_141dcdc74;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar12);
            }
            FUN_140041b80(puVar12,&local_108);
          }
          local_148 = 0x4e;
          uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0ab18);
          puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aa98);
          FUN_140e87440(uVar5,DAT_141a0a998,0x80000000,&local_118,uVar11 & 0xffffffffffffff00,
                        uVar16 & 0xffffffffffffff00);
          FUN_140e609c0(param_1);
          if (&local_118 != puVar12) {
            local_108 = (undefined4)local_118;
            uStack_104 = local_118._4_4_;
            uStack_100 = uStack_110;
            uStack_fc = uStack_10c;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar12);
            }
            FUN_140041b80(puVar12,&local_108);
          }
          FUN_140e60910(1);
        }
        local_148 = 0x51;
        goto LAB_140214fa8;
      }
      if (iVar1 == 1) {
        local_148 = 0x54;
        uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a888);
        FUN_140e609c0(param_1);
        if (0 < (int)uVar2) {
          puVar12 = (undefined8 *)*local_48;
        }
        FUN_1400460e0(uVar5,puVar12);
        FUN_140e60910(1);
        local_148 = 0x55;
        uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a888);
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a9b8);
        uVar10 = FUN_140e851f0(uVar5,uVar6,DAT_141955260,1);
        if (uVar10 < 0x80000000) {
          local_148 = 0x57;
          puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab48);
          if (puVar12 != &DAT_141dcdc68) {
            local_188 = CONCAT44(DAT_141dcdc68._4_4_,(undefined4)DAT_141dcdc68);
            uStack_180 = DAT_141dcdc70;
            uStack_17c = DAT_141dcdc74;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar12);
            }
            FUN_140041b80(puVar12,&local_188);
          }
          local_148 = 0x58;
          uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0ab18);
          puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aa98);
          FUN_140e87440(uVar5,DAT_141a0a998,0x80000000,&local_118,
                        (ulonglong)pcVar13 & 0xffffffffffffff00,
                        (ulonglong)in_stack_fffffffffffffe70 & 0xffffffffffffff00);
          FUN_140e609c0(param_1);
          if (&local_118 != puVar12) {
            local_188 = local_118;
            uStack_180 = uStack_110;
            uStack_17c = uStack_10c;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar12);
            }
            FUN_140041b80(puVar12,&local_188);
          }
          FUN_140e60910(1);
        }
        local_148 = 0x5a;
        goto LAB_140214fa8;
      }
      if (iVar1 == 2) {
        local_148 = 0x5d;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a8b8);
        puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a9f8);
        uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aa98);
        if (puVar3 != &local_f8) {
          local_188 = *puVar3;
          uStack_180 = *(undefined4 *)(puVar3 + 1);
          uStack_17c = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          FUN_140041b80(&local_f8,&local_188);
        }
        local_c8 = &local_f8;
        if (0 < (int)local_50[0]) {
          puVar12 = (undefined8 *)*local_48;
        }
        puVar7 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_178,1,uVar5,&local_c8);
        uVar15 = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_15c = *(undefined4 *)((longlong)puVar7 + 0xc);
        uStack_160 = *(undefined4 *)(puVar7 + 1);
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
          local_168 = *puVar7;
        }
        else {
          FUN_1400419b0(&local_168,puVar7);
        }
        FUN_140042560(&local_168,puVar12);
        FUN_1400460e0(uVar6,&local_168);
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        local_148 = 0x5e;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0aa98);
        if (puVar3 != &local_f8) {
          local_188 = *puVar3;
          uStack_180 = *(undefined4 *)(puVar3 + 1);
          uStack_17c = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          FUN_140041b80(&local_f8,&local_188);
        }
        local_c8 = &local_f8;
        uVar14 = CONCAT44(uVar15,DAT_141a049b8);
        uVar6 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar14,&local_c8);
        uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
        uVar2 = FUN_140e851f0(uVar5,uVar6,DAT_141955260,1);
        if (uVar2 < 0x80000000) {
          local_148 = 0x60;
          if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_140);
          }
          local_140 = 0;
          local_138 = 0;
          local_134 = 5;
          puVar12 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a9f8);
          puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aa98);
          if (puVar12 != &local_e8) {
            local_188 = *puVar12;
            uStack_180 = *(undefined4 *)(puVar12 + 1);
            uStack_17c = *(undefined4 *)((longlong)puVar12 + 0xc);
            if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_e8);
            }
            FUN_140041b80(&local_e8,&local_188);
          }
          local_c0 = &local_e8;
          FUN_140e609c0(param_1);
          puVar12 = (undefined8 *)
                    FUN_140e634e0(param_1,param_2,&local_140,1,CONCAT44(uVar15,DAT_141a049b8),
                                  &local_c0);
          uStack_15c = *(undefined4 *)((longlong)puVar12 + 0xc);
          uStack_160 = *(undefined4 *)(puVar12 + 1);
          if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
            local_168 = *puVar12;
          }
          else {
            FUN_1400419b0(&local_168,puVar12);
          }
          uStack_17c = 7;
          local_188 = CONCAT44(local_188._4_4_,1);
          FUN_1400462a0(&local_168,&local_188);
          if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          if (&local_168 != puVar3) {
            local_188 = local_168;
            uStack_180 = uStack_160;
            uStack_17c = uStack_15c;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar3);
            }
            FUN_140041b80(puVar3,&local_188);
          }
          if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          FUN_140e60910(1);
          local_148 = 0x61;
          puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab48);
          if (puVar12 != &DAT_141dcdd78) {
            local_188 = CONCAT44(DAT_141dcdd78._4_4_,(undefined4)DAT_141dcdd78);
            uStack_180 = DAT_141dcdd80;
            uStack_17c = DAT_141dcdd84;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar12);
            }
            FUN_140041b80(puVar12,&local_188);
          }
        }
        local_148 = 99;
        uVar2 = local_50[0];
        goto LAB_140214fa8;
      }
      break;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 3);
LAB_140214fa8:
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,3,FUN_140041b30);
  if (0 < (int)uVar2) {
    uVar11 = (ulonglong)uVar2;
    puVar12 = local_48;
    do {
      puVar3 = (undefined8 *)*puVar12;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar12 = puVar12 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_48);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

