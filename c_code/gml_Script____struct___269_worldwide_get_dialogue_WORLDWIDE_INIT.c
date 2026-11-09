// gml_Script____struct___269_worldwide_get_dialogue_WORLDWIDE_INIT @ 0x14064b1c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script____struct___269_worldwide_get_dialogue_WORLDWIDE_INIT
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  undefined4 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined4 uVar11;
  undefined8 uVar10;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 *local_68;
  undefined4 *local_60;
  
  local_130 = 0;
  local_140 = "gml_Script_worldwide_load";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0xb;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_118,0x10,2,FUN_1400424d0,FUN_140041b30);
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a00eb8);
  local_6c = 0xffffff;
  local_78 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f63c8);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_68 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a00e68);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_60 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f63e8);
  local_18c = 0;
  local_198 = 0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_138 = 0xc;
  FUN_140e609c0(DAT_141a729d8);
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  if (puVar5 != puVar3) {
    local_128 = *puVar5;
    uStack_120 = *(undefined4 *)(puVar5 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_128);
  }
  FUN_140e60910(1);
  local_138 = 0xf;
  local_128 = CONCAT44(uRam0000000141dd501c,_DAT_141dd5018);
  uStack_120 = uRam0000000141dd5020;
  uStack_11c = DAT_141dd5024;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_128);
  local_138 = 0x10;
  uStack_11c = DAT_141dd5044;
  uStack_120 = DAT_141dd5040;
  if ((1 << ((byte)DAT_141dd5044 & 0x1f) & 0x46U) == 0) {
    local_128 = DAT_141dd5038;
  }
  else {
    FUN_1400419b0(&local_128,&DAT_141dd5038);
  }
  local_ac = DAT_141dd5014;
  local_b0 = DAT_141dd5010;
  if ((1 << ((byte)DAT_141dd5014 & 0x1f) & 0x46U) == 0) {
    local_b8 = DAT_141dd5008;
  }
  else {
    FUN_1400419b0(&local_b8,&DAT_141dd5008);
  }
  if (0 < param_4) {
    puVar8 = (undefined8 *)*param_5;
  }
  uVar9 = 1 << ((byte)local_ac & 0x1f) & 0x46;
  local_f0 = local_b0;
  local_ec = local_ac;
  if (uVar9 == 0) {
    local_f8 = local_b8;
  }
  else {
    FUN_1400419b0(&local_f8,&local_b8);
  }
  local_130 = 1;
  FUN_1400460e0(&local_f8,puVar8);
  uStack_8c = local_ec;
  uStack_90 = local_f0;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
    local_98 = local_f8;
  }
  else {
    FUN_1400419b0(&local_98,&local_f8);
  }
  local_130 = 3;
  FUN_1400460e0(&local_98,&local_128);
  local_178 = (undefined4)local_98;
  uStack_174 = local_98._4_4_;
  uStack_170 = uStack_90;
  uStack_16c = uStack_8c;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_178);
  local_130 = 1;
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (uVar9 != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_138 = 0x11;
  local_178 = _DAT_141dd4fe8;
  uStack_174 = uRam0000000141dd4fec;
  uStack_170 = uRam0000000141dd4ff0;
  uStack_16c = DAT_141dd4ff4;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_178);
  local_138 = 0x13;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  if (puVar4 != &local_118) {
    local_178 = *(undefined4 *)puVar4;
    uStack_174 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_170 = *(undefined4 *)(puVar4 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_178);
  }
  local_188 = &local_118;
  uVar10 = CONCAT44(uVar11,DAT_1419fcb88);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_198,1,uVar10,&local_188);
  uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    local_138 = 0x15;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_180 = &local_78;
    uVar6 = CONCAT44(uVar11,DAT_141a00e98);
    puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,1,uVar6,&local_180);
    uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar8 != &local_c8) {
      local_178 = *(undefined4 *)puVar8;
      uStack_174 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_170 = *(undefined4 *)(puVar8 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_178);
    }
    local_138 = 0x16;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_178 = _DAT_1419e6d70;
    uStack_174 = uRam00000001419e6d74;
    uStack_170 = uRam00000001419e6d78;
    uStack_16c = uRam00000001419e6d7c;
    local_188 = &local_c8;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_178);
    local_180 = &local_108;
    uVar6 = CONCAT44(uVar11,DAT_141a04da8);
    puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,2,uVar6,&local_188);
    uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar8 != &local_158) {
      local_178 = *(undefined4 *)puVar8;
      uStack_174 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_170 = *(undefined4 *)(puVar8 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_178);
    }
    local_138 = 0x18;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    uVar6 = CONCAT44(uVar11,DAT_1419ef3b8);
    local_188 = &local_c8;
    FUN_140e634e0(param_1,param_2,&local_198,1,uVar6,&local_188);
    uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
    local_138 = 0x1a;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_188 = &local_158;
    FUN_140e609c0(DAT_141a729d8);
    uVar6 = CONCAT44(uVar11,DAT_141a0a298);
    puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,1,uVar6,&local_188);
    uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar8 != puVar4) {
      local_178 = *(undefined4 *)puVar8;
      uStack_174 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_170 = *(undefined4 *)(puVar8 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_178);
    }
    FUN_140e60910(1);
  }
  local_138 = 0x1e;
  uStack_11c = 0xd;
  uVar9 = 0x3ff00000;
  local_128 = 0x3ff0000000000000;
  cVar2 = FUN_140e491e0(&local_128);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (cVar2 != '\0') {
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    puVar8 = local_68;
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    if (local_68 != &local_118) {
      local_178 = *(undefined4 *)local_68;
      uStack_174 = *(undefined4 *)((longlong)local_68 + 4);
      uStack_170 = *(undefined4 *)(local_68 + 1);
      uStack_16c = *(undefined4 *)((longlong)local_68 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_178);
    }
    local_188 = &local_118;
    uVar10 = CONCAT44(uVar11,DAT_1419fcb88);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_198,1,uVar10,&local_188);
    uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 == '\0') {
      local_138 = 0x20;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      local_180 = &local_88;
      uVar6 = CONCAT44(uVar11,DAT_141a00e98);
      puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,1,uVar6,&local_180);
      uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (puVar3 != &local_d8) {
        local_178 = *(undefined4 *)puVar3;
        uStack_174 = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_170 = *(undefined4 *)(puVar3 + 1);
        uStack_16c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        FUN_140041b80(&local_d8,&local_178);
      }
      local_138 = 0x21;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      local_188 = &local_d8;
      local_178 = _DAT_1419e6d70;
      uStack_174 = uRam00000001419e6d74;
      uStack_170 = uRam00000001419e6d78;
      uStack_16c = uRam00000001419e6d7c;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_178);
      local_180 = &local_108;
      uVar6 = CONCAT44(uVar11,DAT_141a04da8);
      puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,2,uVar6,&local_188);
      uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (puVar3 != &local_158) {
        local_178 = *(undefined4 *)puVar3;
        uStack_174 = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_170 = *(undefined4 *)(puVar3 + 1);
        uStack_16c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_178);
      }
      local_138 = 0x23;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      local_188 = &local_d8;
      uVar6 = CONCAT44(uVar11,DAT_1419ef3b8);
      FUN_140e634e0(param_1,param_2,&local_198,1,uVar6,&local_188);
      uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
      local_138 = 0x25;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      local_188 = &local_158;
      FUN_140e609c0(DAT_141a729d8);
      uVar6 = CONCAT44(uVar11,DAT_141a0a298);
      puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,1,uVar6,&local_188);
      uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (puVar3 != puVar8) {
        local_178 = *(undefined4 *)puVar3;
        uStack_174 = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_170 = *(undefined4 *)(puVar3 + 1);
        uStack_16c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        FUN_140041b80(puVar8,&local_178);
      }
      FUN_140e60910(1);
    }
  }
  local_138 = 0x29;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  local_188 = &local_a8;
  uVar10 = CONCAT44(uVar11,DAT_141a00df8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_198,1,uVar10,&local_188);
  uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    local_138 = 0x35;
    uVar9 = 0;
  }
  else {
    local_138 = 0x2b;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_180 = &local_a8;
    uVar6 = CONCAT44(uVar11,DAT_141a00e98);
    puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,1,uVar6,&local_180);
    uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar8 != &local_e8) {
      local_178 = *(undefined4 *)puVar8;
      uStack_174 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_170 = *(undefined4 *)(puVar8 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_178);
    }
    local_138 = 0x2c;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_188 = &local_e8;
    local_178 = _DAT_1419e6d70;
    uStack_174 = uRam00000001419e6d74;
    uStack_170 = uRam00000001419e6d78;
    uStack_16c = uRam00000001419e6d7c;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_178);
    local_180 = &local_108;
    uVar6 = CONCAT44(uVar11,DAT_141a04da8);
    puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,2,uVar6,&local_188);
    uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar8 != &local_158) {
      local_178 = *(undefined4 *)puVar8;
      uStack_174 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_170 = *(undefined4 *)(puVar8 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_178);
    }
    local_138 = 0x2e;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_188 = &local_e8;
    uVar6 = CONCAT44(uVar11,DAT_1419ef3b8);
    FUN_140e634e0(param_1,param_2,&local_198,1,uVar6,&local_188);
    uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
    local_138 = 0x30;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_188 = &local_158;
    FUN_140e609c0(DAT_141a729d8);
    puVar7 = (undefined4 *)
             FUN_140e634e0(param_1,param_2,&local_198,1,CONCAT44(uVar11,DAT_141a0a298),&local_188);
    puVar1 = local_60;
    if (puVar7 != local_60) {
      local_178 = *puVar7;
      uStack_174 = puVar7[1];
      uStack_170 = puVar7[2];
      uStack_16c = puVar7[3];
      if ((1 << ((byte)local_60[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_60);
      }
      FUN_140041b80(puVar1,&local_178);
    }
    FUN_140e60910(1);
    local_138 = 0x32;
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = (ulonglong)uVar9 << 0x20;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return param_3;
}

