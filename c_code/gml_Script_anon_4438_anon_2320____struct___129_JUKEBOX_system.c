// gml_Script_anon_4438_anon_2320____struct___129_JUKEBOX_system @ 0x140395ac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_4438_anon_2320____struct___129_JUKEBOX_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined8 **ppuVar12;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  
  local_a0 = "gml_Script_anon@3694@anon@2320@___struct___129@JUKEBOX_system";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x8b;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,8,FUN_1400424d0,FUN_140041b30);
  puVar6 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f4958);
  local_15c = 0;
  local_168 = 0;
  local_14c = 0;
  local_158 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x8c;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4c58);
  uStack_16c = 0;
  local_178 = 0;
  iVar4 = FUN_140e851f0(uVar7,&local_178,DAT_141955260,1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (iVar4 < 1) {
    local_98 = 0x94;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4b78);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4b68);
    cVar3 = FUN_140e491e0(uVar7);
    if (cVar3 == '\0') {
      uStack_17c = 0;
      local_188 = 0;
      puVar8 = &local_188;
      bVar2 = false;
      bVar1 = true;
    }
    else {
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4ae8);
      if (puVar8 != &local_118) {
        local_188 = *puVar8;
        uStack_180 = *(undefined4 *)(puVar8 + 1);
        uStack_17c = *(undefined4 *)((longlong)puVar8 + 0xc);
        if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_188);
      }
      local_80 = &local_118;
      uVar7 = CONCAT44(uVar11,DAT_141a076c8);
      puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,1,uVar7,&local_80);
      uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uStack_16c = *(undefined4 *)((longlong)puVar8 + 0xc);
      uStack_170 = *(undefined4 *)(puVar8 + 1);
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
        local_178 = *puVar8;
      }
      else {
        FUN_1400419b0(&local_178,puVar8);
      }
      puVar8 = &local_178;
      bVar2 = true;
      bVar1 = false;
    }
    uVar5 = uStack_17c;
    FUN_140e609c0(param_1);
    if (puVar8 != puVar6) {
      local_148 = *puVar8;
      uStack_140 = *(undefined4 *)(puVar8 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_148);
    }
    if ((bVar1) && ((1 << ((byte)uVar5 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_188);
    }
    if ((bVar2) && ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_178);
    }
    FUN_140e60910(1);
    local_98 = 0x95;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4ae8);
    if (puVar6 != &local_128) {
      local_188 = *puVar6;
      uStack_180 = *(undefined4 *)(puVar6 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_188);
    }
    local_88 = &local_128;
    ppuVar12 = &local_88;
    uVar7 = 1;
    uVar5 = DAT_141a07788;
  }
  else {
    local_98 = 0x8d;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4c58);
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4ae8);
    if (puVar9 != &local_128) {
      local_188 = *puVar9;
      uStack_180 = *(undefined4 *)(puVar9 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_188);
    }
    local_88 = &local_128;
    local_188 = CONCAT44(uRam0000000141dc6514,_DAT_141dc6510);
    uStack_180 = uRam0000000141dc6518;
    uStack_17c = uRam0000000141dc651c;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_188);
    local_80 = &local_118;
    if (puVar8 != &local_108) {
      local_188 = *puVar8;
      uStack_180 = *(undefined4 *)(puVar8 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_188);
    }
    local_78 = &local_108;
    uVar7 = CONCAT44(uVar11,DAT_1419f4a48);
    FUN_140e634e0(param_1,param_2,&local_168,3,uVar7,&local_88);
    uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
    local_98 = 0x8e;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4c58);
    puVar10 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4b78);
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_178,gml_Script_anon_3694_anon_2320____struct___129_JUKEBOX_system,0);
    if (&local_178 != puVar6) {
      local_188 = local_178;
      uStack_180 = uStack_170;
      uStack_17c = uStack_16c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_188);
    }
    FUN_140e60910(1);
    if (puVar6 != &local_128) {
      local_188 = *puVar6;
      uStack_180 = *(undefined4 *)(puVar6 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_188);
    }
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_88 = &local_128;
    if (puVar9 != &local_118) {
      local_188 = *puVar9;
      uStack_180 = *(undefined4 *)(puVar9 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_188);
    }
    local_80 = &local_118;
    if (puVar10 != &local_108) {
      local_188 = *puVar10;
      uStack_180 = *(undefined4 *)(puVar10 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar10 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_188);
    }
    local_78 = &local_108;
    uVar7 = CONCAT44(uVar11,DAT_1419fd6d8);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_138,3,uVar7,&local_88);
    uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar6 != &local_f8) {
      local_188 = *puVar6;
      uStack_180 = *(undefined4 *)(puVar6 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_188);
    }
    local_70 = &local_f8;
    FUN_140e645a0(&local_188,gml_Script_anon_4274_anon_2320____struct___129_JUKEBOX_system,param_1);
    local_178 = local_188;
    uStack_170 = uStack_180;
    uStack_16c = uStack_17c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_178);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_68 = local_e8;
    uStack_13c = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_140 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
      local_148 = *puVar8;
    }
    else {
      FUN_1400419b0(&local_148,puVar8);
    }
    uStack_17c = 7;
    local_188 = CONCAT44(local_188._4_4_,10);
    FUN_1400460e0(&local_148,&local_188);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    uStack_16c = uStack_13c;
    uStack_170 = uStack_140;
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
      local_178 = local_148;
    }
    else {
      FUN_1400419b0(&local_178,&local_148);
    }
    uStack_17c = 0;
    local_188 = 0x408f400000000000;
    FUN_140046500(&local_178,&local_188);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = local_178;
    uStack_180 = uStack_170;
    uStack_17c = uStack_16c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_188);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_60 = &local_d8;
    local_188 = CONCAT44(uRam0000000141dc6514,_DAT_141dc6510);
    uStack_180 = uRam0000000141dc6518;
    uStack_17c = uRam0000000141dc651c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_188);
    local_58 = local_c8;
    uVar7 = CONCAT44(uVar11,DAT_1419fed78);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,2,uVar7,&local_70);
    uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar6 != &local_b8) {
      local_188 = *puVar6;
      uStack_180 = *(undefined4 *)(puVar6 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_188);
    }
    ppuVar12 = &local_60;
    uVar7 = 3;
    uVar5 = DAT_1419f4dd8;
    local_50 = &local_b8;
  }
  FUN_140e634e0(param_1,param_2,&local_168,uVar7,CONCAT44(uVar11,uVar5),ppuVar12);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

