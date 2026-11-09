// gml_Script_anon_41456_DefineDebuffs_OFFERINGSINIT @ 0x140400d10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_41456_DefineDebuffs_OFFERINGSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  code *pcVar9;
  ulonglong uVar10;
  ulonglong in_stack_fffffffffffffe30;
  undefined1 **ppuVar11;
  ulonglong uVar12;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
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
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  longlong local_138;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined4 local_11c;
  longlong local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  byte local_e4;
  undefined1 local_e0 [12];
  byte local_d4;
  undefined1 local_d0 [12];
  byte local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  longlong local_a0;
  undefined4 local_98;
  uint local_94;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_100 = "gml_Script_anon@40714@DefineDebuffs@OFFERINGSINIT";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x699;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_f0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_3c = 0xffffff;
  local_48 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x69b;
  uStack_1bc = 0xf;
  local_1c8 = 0x100000000000106;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
  uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_1c8,DAT_1419f5a98,0x80000000,&local_48,uVar10,in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uStack_1bc = 0xf;
  local_1c8 = 0x1000000000000ee;
  FUN_140e87440(&local_1c8,DAT_1419f5a58,0x80000000,&local_58,uVar10 & 0xffffffffffffff00,
                in_stack_fffffffffffffe30 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = local_58;
  uStack_1c0 = uStack_50;
  uStack_1bc = uStack_4c;
  if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d0);
  }
  FUN_140041b80(local_d0,&local_1c8);
  local_80 = local_d0;
  uStack_1bc = 0xf;
  local_1c8 = 0x100000000000106;
  uVar4 = FUN_140069500(&local_1c8);
  ppuVar11 = &local_80;
  puVar6 = &local_48;
  plVar5 = (longlong *)FUN_140e63610(uVar4,param_2,&local_1b8,1,puVar6,ppuVar11);
  if (plVar5 != &local_128) {
    local_118 = *plVar5;
    uStack_110 = (undefined4)plVar5[1];
    uStack_10c = *(uint *)((longlong)plVar5 + 0xc);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_118);
  }
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_f8 = 0x69c;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  puVar7 = &DAT_1419df7b0;
  uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  uVar10 = (ulonglong)puVar6 & 0xffffffffffffff00;
  if (param_4 < 2) {
    FUN_140e87440(&DAT_1419df7b0,DAT_1419f5d38,0x80000000,&local_158,uVar10,uVar12);
    puVar6 = &DAT_1419df7b0;
  }
  else {
    FUN_140e87440(*(undefined8 *)(param_5 + 8),DAT_1419f5d38,0x80000000,&local_158,uVar10,uVar12);
    puVar6 = *(undefined8 **)(param_5 + 8);
  }
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(puVar6,DAT_1419f5908,0x80000000,&local_68,uVar10,uVar12);
  local_1c8 = CONCAT44(uRam0000000141dc6554,_DAT_141dc6550);
  uStack_1c0 = uRam0000000141dc6558;
  uStack_1bc = uRam0000000141dc655c;
  if ((1 << (local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  FUN_140041b80(&local_f0,&local_1c8);
  local_90 = &local_f0;
  local_1a8 = (undefined4)local_68;
  uStack_1a4 = local_68._4_4_;
  uStack_1a0 = uStack_60;
  uStack_19c = uStack_5c;
  FUN_140041b80(&local_a0,&local_1a8);
  if ((local_94 & 0xffffff) == 3) {
    bVar8 = local_a0 == 0;
  }
  else {
    bVar8 = (local_94 & 0xffffff) == 5;
  }
  bVar1 = (byte)local_94;
  if (bVar8) {
    if (1 < param_4) {
      puVar7 = *(undefined8 **)(param_5 + 8);
    }
    uVar12 = uVar12 & 0xffffffffffffff00;
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(puVar7,DAT_1419f5e68,0x80000000,&local_138,uVar10,uVar12);
    uStack_1bc = local_12c;
    uStack_1c0 = local_130;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
      local_1c8 = local_138;
    }
    else {
      FUN_1400419b0(&local_1c8,&local_138);
    }
    plVar5 = &local_1c8;
    bVar2 = true;
    bVar8 = false;
  }
  else {
    uStack_10c = local_94;
    uStack_110 = local_98;
    if ((1 << (bVar1 & 0x1f) & 0x46U) == 0) {
      local_118 = local_a0;
    }
    else {
      FUN_1400419b0(&local_118,&local_a0);
    }
    plVar5 = &local_118;
    bVar2 = false;
    bVar8 = true;
  }
  local_16c = local_14c;
  local_170 = local_150;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
    local_178 = local_158;
  }
  else {
    FUN_1400419b0(&local_178,&local_158);
  }
  FUN_1400460e0(&local_178,plVar5);
  uStack_18c = local_16c;
  uStack_190 = local_170;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
    local_198 = local_178;
  }
  else {
    FUN_1400419b0(&local_198,&local_178);
  }
  FUN_1400462a0(&local_198,&local_128);
  local_1a8 = (undefined4)local_198;
  uStack_1a4 = local_198._4_4_;
  uStack_1a0 = uStack_190;
  uStack_19c = uStack_18c;
  if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e0);
  }
  FUN_140041b80(local_e0,&local_1a8);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((bVar8) && ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_118);
  }
  if ((bVar2) && ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1c8);
  }
  local_88 = local_e0;
  puVar6 = (undefined8 *)FUN_140e79090(&local_1b8,2,&local_90);
  if (puVar6 != &local_168) {
    local_1a8 = *(undefined4 *)puVar6;
    uStack_1a4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_1a0 = *(undefined4 *)(puVar6 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1a8);
  }
  local_f8 = 0x69d;
  uStack_1bc = 0;
  local_1c8 = 0;
  iVar3 = FUN_140e851f0(&local_168,&local_1c8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if (iVar3 == -2 || 0 < iVar3) {
    local_f8 = 0x69f;
    local_1a8 = (undefined4)local_168;
    uStack_1a4 = local_168._4_4_;
    uStack_1a0 = uStack_160;
    uStack_19c = uStack_15c;
    if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    FUN_140041b80(&local_b0,&local_1a8);
    local_f8 = 0x6a0;
    uStack_1bc = 0xf;
    local_1c8 = 0x1000000000000ee;
    uVar12 = uVar12 & 0xffffffffffffff00;
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(&local_1c8,DAT_141a1f090,0x80000000,&local_188,uVar10,uVar12);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1a8 = (undefined4)local_188;
    uStack_1a4 = local_188._4_4_;
    uStack_1a0 = uStack_180;
    uStack_19c = uStack_17c;
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    FUN_140041b80(&local_c0,&local_1a8);
    local_f8 = 0x6a1;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    uStack_1bc = 0xf;
    local_1c8 = 0x1000000000000ee;
    uVar12 = uVar12 & 0xffffffffffffff00;
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(&local_1c8,DAT_141a1f090,0x80000000,&local_188,uVar10,uVar12);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1a8 = _DAT_1419e47d0;
    uStack_1a4 = uRam00000001419e47d4;
    uStack_1a0 = uRam00000001419e47d8;
    uStack_19c = uRam00000001419e47dc;
    if ((1 << (local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    FUN_140041b80(&local_f0,&local_1a8);
    local_90 = &local_f0;
    uStack_18c = uStack_17c;
    uStack_190 = uStack_180;
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
      local_198 = local_188;
    }
    else {
      FUN_1400419b0(&local_198,&local_188);
    }
    FUN_1400462a0(&local_198,&local_b0);
    local_1a8 = (undefined4)local_198;
    uStack_1a4 = local_198._4_4_;
    uStack_1a0 = uStack_190;
    uStack_19c = uStack_18c;
    if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e0);
    }
    FUN_140041b80(local_e0,&local_1a8);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_88 = local_e0;
    puVar6 = (undefined8 *)FUN_140e79090(&local_1b8,2,&local_90);
    if (puVar6 != &local_148) {
      local_1a8 = *(undefined4 *)puVar6;
      uStack_1a4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_1a0 = *(undefined4 *)(puVar6 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_1a8);
    }
    uStack_1bc = 0xf;
    local_1c8 = 0x1000000000000ee;
    FUN_140e87930(&local_1c8,DAT_141a1f090,0x80000000,&local_148);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_f8 = 0x6a2;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    uStack_1bc = 0xf;
    local_1c8 = 0x100000000000106;
    uVar12 = uVar12 & 0xffffffffffffff00;
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(&local_1c8,DAT_1419f5f38,0x80000000,&local_78,uVar10,uVar12);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    uStack_1bc = 0xf;
    local_1c8 = 0x1000000000000ee;
    FUN_140e87440(&local_1c8,DAT_141a1f090,0x80000000,&local_188,uVar10 & 0xffffffffffffff00,
                  uVar12 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_90 = &local_c0;
    local_1a8 = (undefined4)local_188;
    uStack_1a4 = local_188._4_4_;
    uStack_1a0 = uStack_180;
    uStack_19c = uStack_17c;
    if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e0);
    }
    FUN_140041b80(local_e0,&local_1a8);
    local_88 = local_e0;
    uStack_1bc = 0xf;
    local_1c8 = 0x100000000000106;
    uVar4 = FUN_140069500(&local_1c8);
    FUN_140e63610(uVar4,param_2,&local_1b8,2,&local_78,&local_90);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
  }
  else {
    local_f8 = 0x69d;
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  _eh_vector_destructor_iterator_(&local_f0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

