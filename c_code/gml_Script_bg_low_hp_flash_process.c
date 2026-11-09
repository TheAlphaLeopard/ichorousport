// gml_Script_bg_low_hp_flash_process @ 0x140232250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_bg_low_hp_flash_process(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  byte bVar8;
  undefined4 uVar9;
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
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  uint local_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_118;
  uint local_114;
  undefined8 local_110;
  undefined4 local_108;
  uint local_104;
  undefined8 *local_100;
  undefined1 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  
  local_140 = "gml_Script_bg_damage_flash_process";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0x16;
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_d8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1c530);
  local_78 = uVar3;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1c1f0);
  local_14c = 0xffffff;
  local_158 = 0;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1c2c0);
  uVar7 = 0xffffff;
  local_104 = 0xffffff;
  local_110 = 0;
  bVar8 = 0xff;
  local_7c = 0xffffff;
  local_88 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_18c = 0;
  local_198 = 0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_138 = 0x18;
  uStack_16c = 0;
  local_178 = 0;
  iVar2 = FUN_140e851f0(uVar3,&local_178,DAT_141955260,1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  uVar9 = 0;
  if (iVar2 == -2 || 0 < iVar2) {
    local_138 = 0x1e;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    uStack_19c = 0xf;
    local_1a8 = 0x100000100000008;
    local_178 = 0x100000100000008;
    uStack_170 = uStack_1a0;
    uStack_16c = 0xf;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_178);
    local_100 = &local_d8;
    uVar3 = CONCAT44(uVar12,DAT_141a047c8);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,1,uVar3,&local_100);
    uVar12 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uStack_17c = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_180 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
      local_188 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_188,puVar6);
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
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1a8);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_138 = 0x1f;
    uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_180 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
      local_188 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_188,puVar5);
    }
    FUN_1400462a0(&local_188,local_78);
    local_1a8 = local_188;
    uStack_1a0 = uStack_180;
    uStack_19c = uStack_17c;
    FUN_140041b80(&local_110,&local_1a8);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    uVar7 = local_104;
    local_138 = 0x20;
    uStack_17c = local_104;
    uStack_180 = local_108;
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) == 0) {
      local_188 = local_110;
    }
    else {
      FUN_1400419b0(&local_188,&local_110);
    }
    FUN_140046500(&local_188,puVar5);
    if ((uStack_17c & 0xffffff) == 0) {
      uVar13 = (undefined4)local_188;
    }
    else {
      uVar13 = FUN_140e4b060(&local_188);
    }
    local_88 = FUN_140e78ec0(uVar13,0,0x3ff0000000000000);
    bVar8 = 0;
    local_7c = 0;
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_138 = 0x21;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_114 = local_14c;
    local_118 = local_150;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
      local_120 = local_158;
    }
    else {
      FUN_1400419b0(&local_120,&local_158);
    }
    uStack_19c = 7;
    local_1a8 = CONCAT44(local_1a8._4_4_,1);
    FUN_1400462a0(&local_120,&local_1a8);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    uStack_16c = 0;
    uStack_170 = local_80;
    local_178 = local_88;
    FUN_140042560(&local_178,&local_120);
    uStack_17c = 0;
    local_188 = 0x3ff0000000000000;
    FUN_1400460e0(&local_188,&local_178);
    uVar3 = local_158;
    if ((local_14c & 0xffffff) != 0) {
      uVar3 = FUN_140e4b060(&local_158);
    }
    if ((uStack_17c & 0xffffff) == 0) {
      uVar13 = (undefined4)local_188;
    }
    else {
      uVar13 = FUN_140e4b060(&local_188);
    }
    local_d8 = FUN_140e78ec0(uVar13,0,uVar3);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_cc = 0;
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    uVar13 = 8;
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_120);
    }
    local_100 = &local_d8;
    FUN_140e609c0(DAT_141a729d8);
    uVar3 = CONCAT44(uVar12,DAT_1419fd658);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,1,uVar3,&local_100,uVar13);
    uVar12 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (puVar5 != puVar4) {
      local_1a8 = *puVar5;
      uStack_1a0 = *(undefined4 *)(puVar5 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_1a8);
    }
    FUN_140e60910(1);
    local_138 = 0x23;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_1a8 = CONCAT44(uRam0000000141dcddec,_DAT_141dcdde8);
    uStack_1a0 = uRam0000000141dcddf0;
    uStack_19c = DAT_141dcddf4;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_1a8);
    local_100 = &local_d8;
    uVar3 = CONCAT44(uVar12,DAT_141a1c640);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,1,uVar3,&local_100);
    uVar12 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (puVar5 != &local_130) {
      local_1a8 = *puVar5;
      uStack_1a0 = *(undefined4 *)(puVar5 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_130);
      }
      FUN_140041b80(&local_130,&local_1a8);
    }
    local_138 = 0x24;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_100 = &local_130;
    uVar10 = CONCAT44(uVar12,DAT_141a1c670);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_198,1,uVar10,&local_100);
    uVar12 = (undefined4)((ulonglong)uVar10 >> 0x20);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') {
      local_138 = 0x25;
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      uStack_19c = 0xf;
      local_1a8 = 0x100000100000008;
      local_178 = 0x100000100000008;
      uStack_170 = uStack_1a0;
      uStack_16c = 0xf;
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_178);
      local_f8 = local_c8;
      if (puVar4 != &local_b8) {
        local_1a8 = *puVar4;
        uStack_1a0 = *(undefined4 *)(puVar4 + 1);
        uStack_19c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        FUN_140041b80(&local_b8,&local_1a8);
      }
      local_f0 = &local_b8;
      local_e8 = &local_130;
      local_1a8 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
      uStack_1a0 = uRam00000001419df7a8;
      uStack_19c = uRam00000001419df7ac;
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_1a8);
      local_e0 = local_98;
      ppuVar11 = &local_f8;
      gml_Script_anon_5346_pal_swap_enable_layer_scr_retro_pal_swapper
                (param_1,param_2,&local_168,4,ppuVar11);
      uVar12 = (undefined4)((ulonglong)ppuVar11 >> 0x20);
      uVar9 = local_15c;
    }
    local_138 = 0x27;
    FUN_1400bdd80(local_78);
    local_138 = 0x29;
    uStack_19c = 0;
    local_1a8 = 0;
    iVar2 = FUN_140e851f0(local_78,&local_1a8,DAT_141955260,1);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    if (iVar2 != -2 && iVar2 < 1) {
      local_138 = 0x2b;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *puVar4 = 0;
      local_138 = 0x2c;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      local_100 = &local_130;
      uVar3 = FUN_140e634e0(param_1,param_2,&local_198,1,CONCAT44(uVar12,DAT_141a1c670),&local_100);
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 != '\0') {
        local_138 = 0x2d;
        if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        local_168 = 0;
        local_160 = 0;
        local_15c = 5;
        uStack_19c = 0xf;
        local_1a8 = 0x100000100000008;
        local_178 = 0x100000100000008;
        uStack_170 = uStack_1a0;
        uStack_16c = 0xf;
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_178);
        local_f8 = local_c8;
        local_1a8 = CONCAT44(uRam0000000141dc6314,_DAT_141dc6310);
        uStack_1a0 = uRam0000000141dc6318;
        uStack_19c = uRam0000000141dc631c;
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        FUN_140041b80(&local_b8,&local_1a8);
        local_f0 = &local_b8;
        local_e8 = &local_130;
        local_1a8 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
        uStack_1a0 = uRam00000001419df7a8;
        uStack_19c = uRam00000001419df7ac;
        if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_98);
        }
        FUN_140041b80(local_98,&local_1a8);
        local_e0 = local_98;
        gml_Script_anon_5346_pal_swap_enable_layer_scr_retro_pal_swapper
                  (param_1,param_2,&local_168,4,&local_f8);
        uVar9 = local_15c;
      }
    }
  }
  else {
    local_138 = 0x1a;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0;
    local_138 = 0x1b;
  }
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << (bVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return param_3;
}

