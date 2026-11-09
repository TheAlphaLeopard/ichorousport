// gml_Script_anon_1042_gml_Object_oCageArm_Create_0 @ 0x140878d20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1042_gml_Object_oCageArm_Create_0
          (longlong *param_1,undefined1 **param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined4 uVar6;
  code *pcVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong in_stack_fffffffffffffe20;
  ulonglong uVar10;
  undefined1 **ppuVar11;
  ulonglong uVar12;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  longlong *local_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  longlong *local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
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
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  
  local_150 = "gml_Script_anon@619@gml_Object_oCageArm_Create_0";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0x2e;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_f8,0x10,7,FUN_1400424d0,FUN_140041b30);
  uStack_17c = 0xffffff;
  local_188 = 0;
  uStack_18c = 0xffffff;
  local_198 = (longlong *)0x0;
  uStack_19c = 0xffffff;
  local_1a8 = (longlong *)0x0;
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_148 = 0x30;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  uVar12 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_141a1f440,0x80000000,&local_188,uVar12,
                in_stack_fffffffffffffe20 & 0xffffffffffffff00);
  uVar6 = (undefined4)(uVar12 >> 0x20);
  local_1d8 = (longlong *)local_188;
  uStack_1d0 = uStack_180;
  uStack_1cc = uStack_17c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_1d8);
  local_88 = local_f8;
  ppuVar11 = &local_88;
  uVar12 = CONCAT44(uVar6,DAT_141a02ef8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_1b8,1,uVar12,ppuVar11);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_148 = 0x30;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    *param_3 = 0;
  }
  else {
    local_148 = 0x31;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f62a8);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 == '\0') {
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff3b8);
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a120c8);
      iVar2 = FUN_140e851f0(uVar3,uVar4,DAT_141955260,1);
      if ((iVar2 == -2) || (-1 < iVar2)) {
        local_148 = 0x31;
        *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
        *param_3 = 0;
        goto LAB_140879864;
      }
    }
    local_148 = 0x33;
    bVar5 = false;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a11db8);
    uStack_1bc = 6;
    uVar10 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
    uVar12 = uVar12 & 0xffffffffffffff00;
    local_1c8 = param_1;
    FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_198,uVar12,uVar10);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
    FUN_140e87440(uVar4,DAT_141a1f440,0x80000000,&local_188,uVar12 & 0xffffffffffffff00,
                  uVar10 & 0xffffffffffffff00);
    plVar8 = param_1;
    ppuVar11 = param_2;
    FUN_140e87170(&local_188,DAT_1419fe0e8,0x80000000,&local_1a8,param_1,param_2);
    uStack_1bc = uStack_18c;
    uStack_1c0 = uStack_190;
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
      local_1c8 = local_198;
    }
    else {
      FUN_1400419b0(&local_1c8,&local_198);
    }
    FUN_1400462a0(&local_1c8,&local_1a8);
    if ((uStack_1bc & 0xffffff) == 0) {
      uVar6 = SUB84(local_1c8,0);
    }
    else {
      uVar6 = FUN_140e4b060(&local_1c8);
    }
    local_1d8 = (longlong *)FUN_140e78d00(uVar6);
    uStack_1cc = 0;
    iVar2 = FUN_140e851f0(&local_1d8,uVar3,DAT_141955260,1);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    if (iVar2 != -2 && iVar2 < 0) {
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
      FUN_140e87440(uVar3,DAT_141a1f440,0x80000000,&local_188,(ulonglong)plVar8 & 0xffffffffffffff00
                    ,(ulonglong)ppuVar11 & 0xffffffffffffff00);
      plVar8 = param_1;
      ppuVar11 = param_2;
      FUN_140e87170(&local_188,DAT_1419fe0e8,0x80000000,&local_1a8,param_1,param_2);
      uStack_1cc = 6;
      uVar10 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
      uVar12 = (ulonglong)plVar8 & 0xffffffffffffff00;
      local_1d8 = param_1;
      FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_198,uVar12,uVar10);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      uStack_1cc = 6;
      ppuVar11 = (undefined1 **)(uVar10 & 0xffffffffffffff00);
      plVar8 = (longlong *)(uVar12 & 0xffffffffffffff00);
      local_1d8 = param_1;
      FUN_140e87440(&local_1d8,DAT_141a0f7f8,0x80000000,&local_108,plVar8,ppuVar11);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      uStack_1bc = uStack_19c;
      uStack_1c0 = uStack_1a0;
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
        local_1c8 = local_1a8;
      }
      else {
        FUN_1400419b0(&local_1c8,&local_1a8);
      }
      FUN_1400462a0(&local_1c8,&local_198);
      if ((uStack_1bc & 0xffffff) == 0) {
        uVar6 = SUB84(local_1c8,0);
      }
      else {
        uVar6 = FUN_140e4b060(&local_1c8);
      }
      local_1d8 = (longlong *)FUN_140e79500(uVar6);
      uStack_1cc = 0;
      iVar2 = FUN_140e851f0(&local_1d8,&local_108,DAT_141955260,0);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if (iVar2 == 0) {
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_1b8 = 0;
        local_1b0 = 0;
        local_1ac = 5;
        uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
        uStack_1cc = 6;
        uVar10 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
        uVar12 = (ulonglong)plVar8 & 0xffffffffffffff00;
        local_1d8 = param_1;
        FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_198,uVar12,uVar10);
        if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        uStack_1cc = 6;
        uVar10 = uVar10 & 0xffffffffffffff00;
        uVar12 = uVar12 & 0xffffffffffffff00;
        local_1d8 = param_1;
        FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_138,uVar12,uVar10);
        if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140e87440(uVar3,DAT_141a1f440,0x80000000,&local_188,uVar12 & 0xffffffffffffff00,
                      uVar10 & 0xffffffffffffff00);
        plVar8 = param_1;
        FUN_140e87170(&local_188,DAT_1419fe0e8,0x80000000,&local_1a8,param_1,param_2);
        uVar6 = (undefined4)((ulonglong)plVar8 >> 0x20);
        local_1d8 = local_198;
        uStack_1d0 = uStack_190;
        uStack_1cc = uStack_18c;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_1d8);
        local_88 = local_f8;
        local_1d8 = (longlong *)local_138;
        uStack_1d0 = uStack_130;
        uStack_1cc = uStack_12c;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_1d8);
        local_80 = local_e8;
        local_1d8 = local_1a8;
        uStack_1d0 = uStack_1a0;
        uStack_1cc = uStack_19c;
        if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_1d8);
        local_78 = local_d8;
        local_1d8 = (longlong *)local_138;
        uStack_1d0 = uStack_130;
        uStack_1cc = uStack_12c;
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_1d8);
        local_70 = local_c8;
        uStack_1cc = 0xf;
        local_1d8 = (longlong *)0x100000000000149;
        local_1c8 = (longlong *)0x100000000000149;
        uStack_1c0 = uStack_1d0;
        uStack_1bc = 0xf;
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_1c8);
        local_68 = local_b8;
        local_1d8 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
        uStack_1d0 = uRam00000001419df7a8;
        uStack_1cc = uRam00000001419df7ac;
        if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a8);
        }
        FUN_140041b80(local_a8,&local_1d8);
        local_60 = local_a8;
        local_1d8 = (longlong *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
        uStack_1d0 = uRam00000001419df7c8;
        uStack_1cc = uRam00000001419df7cc;
        if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_98);
        }
        FUN_140041b80(local_98,&local_1d8);
        local_58 = local_98;
        ppuVar11 = &local_88;
        plVar8 = (longlong *)CONCAT44(uVar6,DAT_1419f60a8);
        uVar3 = FUN_140e634e0(param_1,param_2,&local_1b8,7,plVar8,ppuVar11);
        uStack_1cc = 0;
        local_1d8 = (longlong *)0xc010000000000000;
        iVar2 = FUN_140e851f0(uVar3,&local_1d8,DAT_141955260,0);
        bVar5 = iVar2 == 0;
        if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
      }
    }
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_15c = 0xd;
    if (bVar5) {
      local_168 = 0x3ff0000000000000;
    }
    else {
      local_168 = 0;
    }
    local_148 = 0x34;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar3,DAT_1419f5df8,0x80000000,&local_118,(ulonglong)plVar8 & 0xffffffffffffff00,
                  (ulonglong)ppuVar11 & 0xffffffffffffff00);
    uStack_1bc = DAT_141dd72e4;
    uStack_1c0 = DAT_141dd72e0;
    if ((1 << ((byte)DAT_141dd72e4 & 0x1f) & 0x46U) == 0) {
      local_1c8 = DAT_141dd72d8;
    }
    else {
      FUN_1400419b0(&local_1c8,&DAT_141dd72d8);
    }
    uVar3 = FUN_140069500(uVar3);
    uVar12 = 0;
    puVar9 = &local_118;
    uVar3 = FUN_140e63610(uVar3,param_2,&local_1b8,0,puVar9,0);
    iVar2 = FUN_140e851f0(uVar3,&local_1c8,DAT_141955260,0);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    if ((iVar2 == 0) && (cVar1 = FUN_140e491e0(&local_168), cVar1 != '\0')) {
      local_148 = 0x36;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_128,(ulonglong)puVar9 & 0xffffffffffffff00
                    ,uVar12 & 0xffffffffffffff00);
      local_1d8 = (longlong *)CONCAT44(uRam0000000141dd730c,_DAT_141dd7308);
      uStack_1d0 = uRam0000000141dd7310;
      uStack_1cc = DAT_141dd7314;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_1d8);
      local_88 = local_f8;
      uVar3 = FUN_140069500(uVar3);
      FUN_140e63610(uVar3,param_2,&local_178,1,&local_128,&local_88);
      local_148 = 0x37;
      *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
      *param_3 = 0x3ff0000000000000;
    }
    else {
      local_148 = 0x3b;
      *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
      *param_3 = 0;
    }
  }
LAB_140879864:
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

