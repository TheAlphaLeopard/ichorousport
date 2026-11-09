// gml_Script_DefineStatus @ 0x1405d0100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_DefineStatus(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 **ppuVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_e0 = "gml_Script_anon@13652@DefineStatus@STATUSINIT";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x271;
  _eh_vector_constructor_iterator_(local_108,0x10,2,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_7c = 0xffffff;
  local_88 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x272;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff218);
  uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_150 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
    local_158 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_158,puVar4);
  }
  FUN_140042560(&local_158,uVar3);
  local_178 = local_158;
  uStack_170 = uStack_150;
  uStack_16c = uStack_14c;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_178);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_d8 = 0x274;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  plVar8 = param_1;
  uVar11 = param_2;
  FUN_140e87170(uVar3,DAT_141a1f580,0x80000000,&local_48,param_1,param_2);
  uStack_15c = 0xf;
  local_168 = 0x1000000000000ee;
  iVar2 = FUN_140e851f0(&local_48,&local_168,DAT_141955260,0);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (iVar2 != 0) {
    local_d8 = 0x275;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff3a8);
    uVar11 = uVar11 & 0xffffffffffffff00;
    ppuVar9 = (undefined1 **)((ulonglong)plVar8 & 0xffffffffffffff00);
    FUN_140e87440(uVar3,DAT_1419ff3b8,0x80000000,&local_98,ppuVar9,uVar11);
    iVar2 = FUN_140e851f0(&local_98,uVar5,DAT_141955260,1);
    if (iVar2 != -2 && iVar2 < 0) {
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = 0;
      local_140 = 0;
      local_13c = 5;
      local_178 = CONCAT44(uRam00000001419e6924,_DAT_1419e6920);
      uStack_170 = uRam00000001419e6928;
      uStack_16c = uRam00000001419e692c;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_178);
      local_78 = local_108;
      ppuVar9 = &local_78;
      uVar3 = gml_Script_choose_weighted(param_1,param_2,&local_148,1,ppuVar9);
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 != '\0') {
        local_d8 = 0x276;
        uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
        FUN_140e85f80(param_1,DAT_1419fd4e8,0x80000000,&local_58);
        local_178 = local_58;
        uStack_170 = uStack_50;
        uStack_16c = uStack_4c;
        if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_68);
        }
        FUN_140041b80(&local_68,&local_178);
        FUN_140e87930(uVar3,DAT_141a57420,0x80000000,&local_68);
      }
    }
    local_d8 = 0x277;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff3a8);
    uVar11 = uVar11 & 0xffffffffffffff00;
    uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_1419ff3b8,0x80000000,&local_98,uVar10,uVar11);
    FUN_140e609c0(param_1);
    if (&local_98 != puVar4) {
      local_178 = local_98;
      uStack_170 = uStack_90;
      uStack_16c = uStack_8c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_178);
    }
    FUN_140e60910(1);
    local_d8 = 0x279;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5fc8);
    uVar11 = uVar11 & 0xffffffffffffff00;
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_1419f5a58,0x80000000,&local_128,uVar10,uVar11);
    uStack_14c = uStack_11c;
    uStack_150 = uStack_120;
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
      local_158 = local_128;
    }
    else {
      FUN_1400419b0(&local_158,&local_128);
    }
    uStack_16c = 0;
    local_178 = 0x3fd3333333333333;
    FUN_140042560(&local_158,&local_178);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_10c = uStack_14c;
    local_110 = uStack_150;
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
      local_118 = local_158;
    }
    else {
      FUN_1400419b0(&local_118,&local_158);
    }
    FUN_140046500(&local_118,uVar5);
    uStack_15c = local_10c;
    uStack_160 = local_110;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
      local_168 = local_118;
    }
    else {
      FUN_1400419b0(&local_168,&local_118);
    }
    FUN_140042560(&local_168,&local_88);
    local_178 = local_168;
    uStack_170 = uStack_160;
    uStack_16c = uStack_15c;
    if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    FUN_140041b80(&local_b0,&local_178);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_d8 = 0x27a;
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff198);
    FUN_140e609c0(param_1);
    FUN_1400460e0(uVar3,&local_b0);
    FUN_140e60910(1);
    local_d8 = 0x27c;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    uVar11 = uVar11 & 0xffffffffffffff00;
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_141a1f090,0x80000000,&local_138,uVar10,uVar11);
    uStack_16c = 0;
    local_178 = 0;
    iVar2 = FUN_140e851f0(&local_138,&local_178,DAT_141955260,1);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if (0 < iVar2) {
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
      uVar11 = uVar11 & 0xffffffffffffff00;
      uVar10 = uVar10 & 0xffffffffffffff00;
      FUN_140e87440(uVar3,DAT_141a1f090,0x80000000,&local_138,uVar10,uVar11);
      uVar11 = uVar11 & 0xffffffffffffff00;
      uVar10 = uVar10 & 0xffffffffffffff00;
      FUN_140e87440(uVar3,DAT_1419f5a58,0x80000000,&local_128,uVar10,uVar11);
      iVar2 = FUN_140e851f0(&local_138,&local_128,DAT_141955260,1);
      if (iVar2 != -2 && iVar2 < 0) {
        uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff198);
        uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff098);
        iVar2 = FUN_140e851f0(uVar3,uVar5,DAT_141955260,1);
        if ((iVar2 != -2) && (iVar2 < 0)) {
          local_d8 = 0x27d;
          if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          local_148 = 0;
          local_140 = 0;
          local_13c = 5;
          uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
          uVar11 = uVar11 & 0xffffffffffffff00;
          uVar10 = uVar10 & 0xffffffffffffff00;
          FUN_140e87440(uVar3,DAT_141a1f090,0x80000000,&local_138,uVar10,uVar11);
          FUN_140e87440(uVar3,DAT_1419f5a58,0x80000000,&local_128,uVar10 & 0xffffffffffffff00,
                        uVar11 & 0xffffffffffffff00);
          uStack_15c = local_12c;
          uStack_160 = local_130;
          if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
            local_168 = local_138;
          }
          else {
            FUN_1400419b0(&local_168,&local_138);
          }
          FUN_1400460e0(&local_168,&local_b0);
          local_178 = local_168;
          uStack_170 = uStack_160;
          uStack_16c = uStack_15c;
          if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_108);
          }
          FUN_140041b80(local_108,&local_178);
          if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          local_78 = local_108;
          local_178 = local_128;
          uStack_170 = uStack_120;
          uStack_16c = uStack_11c;
          if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_f8);
          }
          FUN_140041b80(local_f8,&local_178);
          local_70 = local_f8;
          puVar4 = (undefined8 *)FUN_140e79230(&local_148,2,&local_78);
          if (puVar4 != &local_c0) {
            local_178 = *puVar4;
            uStack_170 = *(undefined4 *)(puVar4 + 1);
            uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
            if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_c0);
            }
            FUN_140041b80(&local_c0,&local_178);
          }
          FUN_140e87930(uVar3,DAT_141a1f090,0x80000000,&local_c0);
        }
      }
    }
    local_d8 = 0x27f;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    uVar3 = FUN_140e794b0(0,0x3ff0000000000000);
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    local_c4 = 0;
    local_d0 = uVar3;
    FUN_140e87930(uVar5,DAT_1419fd428,0x80000000,&local_d0);
  }
  local_d8 = 0x282;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5838);
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff0c8);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5838);
  local_178 = CONCAT44(uRam0000000141dc6744,_DAT_141dc6740);
  uStack_170 = uRam0000000141dc6748;
  uStack_16c = uRam0000000141dc674c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_178);
  local_78 = local_108;
  uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_150 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
    local_158 = *puVar6;
  }
  else {
    FUN_1400419b0(&local_158,puVar6);
  }
  FUN_140042560(&local_158,&local_88);
  uStack_15c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_160 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
    local_168 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_168,puVar4);
  }
  FUN_1400462a0(&local_168,&local_158);
  local_178 = local_168;
  uStack_170 = uStack_160;
  uStack_16c = uStack_15c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_178);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_70 = local_f8;
  FUN_140e609c0(param_1);
  puVar4 = (undefined8 *)FUN_140e79090(&local_148,2,&local_78);
  if (puVar4 != puVar7) {
    local_178 = *puVar4;
    uStack_170 = *(undefined4 *)(puVar4 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_178);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_108,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

