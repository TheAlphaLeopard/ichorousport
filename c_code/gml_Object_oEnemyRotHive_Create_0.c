// gml_Object_oEnemyRotHive_Create_0 @ 0x140a315f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oEnemyRotHive_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  code *pcVar10;
  ulonglong uVar11;
  undefined4 uVar13;
  undefined1 **ppuVar12;
  ulonglong in_stack_fffffffffffffe30;
  ulonglong uVar14;
  undefined1 **ppuVar15;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_f0 = "gml_Object_oEnemyRotFly_Step_0";
  local_e8 = 0;
  local_f8 = DAT_141dc7a50;
  pcVar10 = FUN_140041b30;
  DAT_141dc7a50 = &local_f8;
  _eh_vector_constructor_iterator_(local_d8,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_15c = 0xffffff;
  local_168 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_e8 = 3;
  FUN_140e98b30(param_1,param_2);
  local_e8 = 5;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  uStack_1bc = 6;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
  uVar11 = (ulonglong)pcVar10 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_168,uVar11,in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uStack_1bc = 6;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_178,uVar11,
                in_stack_fffffffffffffe30 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar11 >> 0x20);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = (longlong *)local_168;
  uStack_1c0 = uStack_160;
  uStack_1bc = uStack_15c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_1c8);
  local_78 = local_d8;
  local_1c8 = (longlong *)local_178;
  uStack_1c0 = uStack_170;
  uStack_1bc = uStack_16c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_1c8);
  local_70 = local_c8;
  uStack_1bc = 0xf;
  local_1c8 = (longlong *)0x100000000000149;
  local_188 = 0x100000000000149;
  uStack_180 = uStack_1c0;
  uStack_17c = 0xf;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_188);
  local_68 = local_b8;
  ppuVar15 = &local_78;
  uVar11 = CONCAT44(uVar13,DAT_141a12628);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_1a8,3,uVar11,ppuVar15);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    uStack_1bc = 6;
    uVar14 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
    uVar11 = uVar11 & 0xffffffffffffff00;
    local_1c8 = param_1;
    FUN_140e87440(&local_1c8,DAT_1419fded8,0x80000000,&local_108,uVar11,uVar14);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    uStack_1bc = 6;
    uVar11 = uVar11 & 0xffffffffffffff00;
    local_1c8 = param_1;
    FUN_140e87440(&local_1c8,DAT_1419fdd18,0x80000000,&local_118,uVar11,uVar14 & 0xffffffffffffff00)
    ;
    uVar13 = (undefined4)(uVar11 >> 0x20);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = (longlong *)local_108;
    uStack_1c0 = uStack_100;
    uStack_1bc = uStack_fc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_1c8);
    local_60 = local_a8;
    local_1c8 = (longlong *)local_118;
    uStack_1c0 = uStack_110;
    uStack_1bc = uStack_10c;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_1c8);
    local_58 = local_98;
    uStack_1bc = 0xf;
    local_1c8 = (longlong *)0x100000000000149;
    local_188 = 0x100000000000149;
    uStack_180 = uStack_1c0;
    uStack_17c = 0xf;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_188);
    local_50 = local_88;
    ppuVar15 = &local_60;
    uVar11 = CONCAT44(uVar13,DAT_141a12628);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_198,3,uVar11,ppuVar15);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 == '\0') {
      local_e8 = 7;
      uStack_1bc = 6;
      uVar14 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      local_1c8 = param_1;
      FUN_140e87440(&local_1c8,DAT_1419fded8,0x80000000,&local_108,uVar11,uVar14);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_1c8 = (longlong *)local_108;
      uStack_1c0 = uStack_100;
      uStack_1bc = uStack_fc;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_1c8);
      FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_128);
      local_e8 = 8;
      uStack_1bc = 6;
      ppuVar15 = (undefined1 **)(uVar14 & 0xffffffffffffff00);
      local_1c8 = param_1;
      FUN_140e87440(&local_1c8,DAT_1419fdd18,0x80000000,&local_118,uVar11 & 0xffffffffffffff00,
                    ppuVar15);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_1c8 = (longlong *)local_118;
      uStack_1c0 = uStack_110;
      uStack_1bc = uStack_10c;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_1c8);
      FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_138);
    }
  }
  local_e8 = 0xb;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  uStack_1bc = 0xf;
  local_1c8 = (longlong *)0x100000000000149;
  local_188 = 0x100000000000149;
  uStack_180 = uStack_1c0;
  uStack_17c = 0xf;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_188);
  local_78 = local_d8;
  ppuVar12 = &local_78;
  gml_GlobalScript_world_pos_to_gui(param_1,param_2,&local_1a8,1,ppuVar12);
  local_e8 = 0xd;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
  uStack_1bc = 0;
  local_1c8 = (longlong *)0x0;
  iVar2 = FUN_140e851f0(uVar4,&local_1c8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if (0 < iVar2) {
    uStack_1bc = 6;
    uVar11 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
    local_1c8 = param_1;
    FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_168,uVar11,
                  (ulonglong)ppuVar15 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    uStack_1bc = 0;
    local_1c8 = (longlong *)0x4030000000000000;
    iVar2 = FUN_140e851f0(&local_168,&local_1c8,DAT_141955260,1);
    bVar9 = iVar2 != -2 && iVar2 < 0;
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    uVar13 = (undefined4)(uVar11 >> 0x20);
    if (iVar2 == -2 || iVar2 >= 0) {
      uStack_1bc = 6;
      uVar4 = CONCAT71((int7)(uVar11 >> 8),bVar9);
      local_1c8 = param_1;
      FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_168,uVar4,bVar9);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140e85f80(param_1,DAT_141a00d18,0x80000000,&local_148);
      local_1ac = local_13c;
      local_1b0 = local_140;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
        local_1b8 = local_148;
      }
      else {
        FUN_1400419b0(&local_1b8,&local_148);
      }
      uStack_1bc = 7;
      local_1c8 = (longlong *)CONCAT44(local_1c8._4_4_,0x10);
      FUN_1400462a0(&local_1b8,&local_1c8);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      iVar2 = FUN_140e851f0(&local_168,&local_1b8,DAT_141955260,1);
      bVar9 = 0 < iVar2;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      uVar13 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if (!bVar9) {
        uStack_1bc = 6;
        uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),bVar9);
        local_1c8 = param_1;
        FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_178,uVar4,bVar9);
        if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        uStack_1bc = 0;
        local_1c8 = (longlong *)0x4030000000000000;
        iVar2 = FUN_140e851f0(&local_178,&local_1c8,DAT_141955260,1);
        bVar9 = iVar2 != -2 && iVar2 < 0;
        if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        uVar13 = (undefined4)((ulonglong)uVar4 >> 0x20);
        if (iVar2 == -2 || iVar2 >= 0) {
          uStack_1bc = 6;
          uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),bVar9);
          local_1c8 = param_1;
          FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_178,uVar4,bVar9);
          uVar13 = (undefined4)((ulonglong)uVar4 >> 0x20);
          if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          FUN_140e85f80(param_1,DAT_141a00c48,0x80000000,&local_158);
          local_1ac = local_14c;
          local_1b0 = local_150;
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
            local_1b8 = local_158;
          }
          else {
            FUN_1400419b0(&local_1b8,&local_158);
          }
          uStack_1bc = 7;
          local_1c8 = (longlong *)CONCAT44(local_1c8._4_4_,0x10);
          FUN_1400462a0(&local_1b8,&local_1c8);
          if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          iVar2 = FUN_140e851f0(&local_178,&local_1b8,DAT_141955260,1);
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          if (iVar2 < 1) goto LAB_140a3239c;
        }
      }
    }
    local_e8 = 0xf;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5a58);
    puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f090);
    local_1c8 = (longlong *)CONCAT44(uRam0000000141dc6f64,_DAT_141dc6f60);
    uStack_1c0 = uRam0000000141dc6f68;
    uStack_1bc = uRam0000000141dc6f6c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_1c8);
    local_78 = local_d8;
    local_1c8 = (longlong *)CONCAT44(uRam0000000141dc6f64,_DAT_141dc6f60);
    uStack_1c0 = uRam0000000141dc6f68;
    uStack_1bc = uRam0000000141dc6f6c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_1c8);
    local_70 = local_c8;
    uVar4 = FUN_140e634e0(param_1,param_2,&local_198,1,CONCAT44(uVar13,DAT_141a0a0d8),&local_78);
    local_1ac = *(undefined4 *)((longlong)puVar6 + 0xc);
    local_1b0 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
      local_1b8 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_1b8,puVar6);
    }
    FUN_140046500(&local_1b8,uVar4);
    uStack_1bc = local_1ac;
    uStack_1c0 = local_1b0;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
      local_1c8 = (longlong *)local_1b8;
    }
    else {
      FUN_1400419b0(&local_1c8,&local_1b8);
    }
    FUN_140042560(&local_1c8,uVar3);
    uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_180 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
      local_188 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_188,puVar5);
    }
    FUN_1400462a0(&local_188,&local_1c8);
    local_48 = (undefined4)local_188;
    uStack_44 = local_188._4_4_;
    uStack_40 = uStack_180;
    uStack_3c = uStack_17c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_48);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_68 = local_b8;
    FUN_140e609c0(param_1);
    puVar8 = (undefined4 *)FUN_140e79090(&local_1a8,2,&local_70);
    if (puVar8 != puVar7) {
      local_48 = *puVar8;
      uStack_44 = puVar8[1];
      uStack_40 = puVar8[2];
      uStack_3c = puVar8[3];
      if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_48);
    }
    FUN_140e60910(1);
  }
LAB_140a3239c:
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
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
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return;
}

