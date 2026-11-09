// gml_Script_bias @ 0x1402331a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_bias(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar12;
  undefined8 uVar10;
  undefined1 **ppuVar11;
  undefined4 uVar13;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  uint local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  uint local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  uint local_f4;
  undefined8 *local_f0;
  undefined1 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_78 [12];
  byte local_6c;
  
  local_120 = "gml_Script_bg_low_hp_flash_process";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0x3d;
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1c570);
  local_13c = 0xffffff;
  local_148 = 0;
  local_168 = uVar3;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1c610);
  uVar9 = 0xffffff;
  local_f4 = 0xffffff;
  local_100 = 0;
  bVar7 = 0xff;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_18c = 0;
  local_198 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0x3f;
  uStack_16c = 0;
  local_178 = 0;
  iVar2 = FUN_140e851f0(uVar3,&local_178,DAT_141955260,1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  uVar8 = 0;
  if (iVar2 == -2 || 0 < iVar2) {
    local_118 = 0x42;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    uStack_19c = 0xf;
    local_1a8 = 0x100000100000009;
    local_178 = 0x100000100000009;
    uStack_170 = uStack_1a0;
    uStack_16c = 0xf;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_178);
    local_f0 = &local_b8;
    uVar3 = CONCAT44(uVar12,DAT_141a047c8);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,1,uVar3,&local_f0);
    uVar12 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_180 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
      local_188 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_188,puVar5);
    }
    uStack_16c = 7;
    local_178 = CONCAT44(local_178._4_4_,1);
    FUN_1400462a0(&local_188,&local_178);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_1a8 = local_188;
    uStack_1a0 = uStack_180;
    uStack_19c = uStack_17c;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1a8);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_118 = 0x43;
    uStack_17c = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_180 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
      local_188 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_188,puVar4);
    }
    uVar3 = local_168;
    FUN_1400462a0(&local_188,local_168);
    local_1a8 = local_188;
    uStack_1a0 = uStack_180;
    uStack_19c = uStack_17c;
    FUN_140041b80(&local_100,&local_1a8);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    uVar9 = local_f4;
    local_118 = 0x44;
    local_15c = local_f4;
    local_160 = local_f8;
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) == 0) {
      local_168 = local_100;
    }
    else {
      FUN_1400419b0(&local_168,&local_100);
    }
    FUN_140046500(&local_168,puVar4);
    if ((local_15c & 0xffffff) == 0) {
      uVar13 = (undefined4)local_168;
    }
    else {
      uVar13 = FUN_140e4b060(&local_168);
    }
    local_c8 = FUN_140e78ec0(uVar13,0,0x3ff0000000000000);
    bVar7 = 0;
    local_bc = 0;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_118 = 0x45;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_15c = local_13c;
    local_160 = local_140;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
      local_168 = local_148;
    }
    else {
      FUN_1400419b0(&local_168,&local_148);
    }
    uStack_19c = 7;
    local_1a8 = CONCAT44(local_1a8._4_4_,1);
    FUN_1400462a0(&local_168,&local_1a8);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    uStack_16c = 0;
    uStack_170 = local_c0;
    local_178 = local_c8;
    FUN_140042560(&local_178,&local_168);
    uStack_17c = 0;
    local_188 = 0x3ff0000000000000;
    FUN_1400460e0(&local_188,&local_178);
    uVar6 = local_148;
    if ((local_13c & 0xffffff) != 0) {
      uVar6 = FUN_140e4b060(&local_148);
    }
    if ((uStack_17c & 0xffffff) == 0) {
      uVar13 = (undefined4)local_188;
    }
    else {
      uVar13 = FUN_140e4b060(&local_188);
    }
    local_b8 = FUN_140e78ec0(uVar13,0,uVar6);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_ac = 0;
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    uVar13 = 8;
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_f0 = &local_b8;
    uVar6 = CONCAT44(uVar12,DAT_1419fd658);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,1,uVar6,&local_f0,uVar13);
    uVar12 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar4 != &local_110) {
      local_1a8 = *puVar4;
      uStack_1a0 = *(undefined4 *)(puVar4 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_110);
      }
      FUN_140041b80(&local_110,&local_1a8);
    }
    local_118 = 0x47;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_1a8 = CONCAT44(uRam0000000141dcddec,_DAT_141dcdde8);
    uStack_1a0 = uRam0000000141dcddf0;
    uStack_19c = DAT_141dcddf4;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_1a8);
    local_f0 = &local_b8;
    uVar6 = CONCAT44(uVar12,DAT_141a1c640);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,1,uVar6,&local_f0);
    uVar12 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar4 != &local_138) {
      local_1a8 = *puVar4;
      uStack_1a0 = *(undefined4 *)(puVar4 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_1a8);
    }
    local_118 = 0x48;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_f0 = &local_138;
    uVar10 = CONCAT44(uVar12,DAT_141a1c670);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_198,1,uVar10,&local_f0);
    uVar12 = (undefined4)((ulonglong)uVar10 >> 0x20);
    cVar1 = FUN_140e491e0(uVar6);
    if (cVar1 != '\0') {
      local_118 = 0x49;
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      uStack_19c = 0xf;
      local_1a8 = 0x100000100000009;
      local_178 = 0x100000100000009;
      uStack_170 = uStack_1a0;
      uStack_16c = 0xf;
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_178);
      local_e8 = local_a8;
      local_e0 = &local_110;
      local_d8 = &local_138;
      local_1a8 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
      uStack_1a0 = uRam00000001419df7a8;
      uStack_19c = uRam00000001419df7ac;
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_1a8);
      local_d0 = local_78;
      ppuVar11 = &local_e8;
      gml_Script_anon_5346_pal_swap_enable_layer_scr_retro_pal_swapper
                (param_1,param_2,&local_158,4,&local_e8);
      uVar12 = (undefined4)((ulonglong)ppuVar11 >> 0x20);
      uVar8 = local_14c;
    }
    local_118 = 0x4b;
    FUN_1400bdd80(uVar3);
    local_118 = 0x4d;
    uStack_19c = 0;
    local_1a8 = 0;
    iVar2 = FUN_140e851f0(uVar3,&local_1a8,DAT_141955260,1);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    if (iVar2 != -2 && iVar2 < 1) {
      local_118 = 0x4f;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      local_f0 = &local_138;
      uVar3 = FUN_140e634e0(param_1,param_2,&local_198,1,CONCAT44(uVar12,DAT_141a1c670),&local_f0);
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 != '\0') {
        local_118 = 0x50;
        if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_158 = 0;
        local_150 = 0;
        local_14c = 5;
        uStack_19c = 0xf;
        local_1a8 = 0x100000100000009;
        local_178 = 0x100000100000009;
        uStack_170 = uStack_1a0;
        uStack_16c = 0xf;
        if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a8);
        }
        FUN_140041b80(local_a8,&local_178);
        local_e8 = local_a8;
        local_1a8 = CONCAT44(uRam0000000141dc6314,_DAT_141dc6310);
        uStack_1a0 = uRam0000000141dc6318;
        uStack_19c = uRam0000000141dc631c;
        if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        FUN_140041b80(&local_98,&local_1a8);
        local_e0 = &local_98;
        local_d8 = &local_138;
        local_1a8 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
        uStack_1a0 = uRam00000001419df7a8;
        uStack_19c = uRam00000001419df7ac;
        if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_78);
        }
        FUN_140041b80(local_78,&local_1a8);
        local_d0 = local_78;
        gml_Script_anon_5346_pal_swap_enable_layer_scr_retro_pal_swapper
                  (param_1,param_2,&local_158,4,&local_e8);
        uVar8 = local_14c;
      }
    }
  }
  else {
    local_118 = 0x40;
  }
  if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << (bVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

