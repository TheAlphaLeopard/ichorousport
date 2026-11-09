// gml_Script_anon_43214_DefineTrinkets_TRINKETSINIT @ 0x14061a9f0

undefined8 *
gml_Script_anon_43214_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  
  local_170 = "gml_Script_anon@42278@DefineTrinkets@TRINKETSINIT";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 0x5de;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57be0);
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_168 = 0x5df;
  if (puVar5 != &local_138) {
    local_198 = *puVar5;
    uStack_190 = *(undefined4 *)(puVar5 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar5 + 0xc);
    FUN_140041b80(&local_138,&local_198);
  }
  local_168 = 0x5e0;
  uStack_17c = 0xf;
  local_188 = 0x1000000000000ee;
  FUN_140e87440(&local_188,DAT_141a1f090,0x80000000,&local_58,0,0);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_17c = 0xf;
  local_188 = 0x1000000000000ee;
  FUN_140e87440(&local_188,DAT_1419f5a58,0x80000000,&local_118,0,0);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_17c = local_10c;
  uStack_180 = local_110;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
    local_188 = local_118;
  }
  else {
    FUN_1400419b0(&local_188,&local_118);
  }
  uStack_18c = 0;
  local_198 = 0x3fe0000000000000;
  FUN_140042560(&local_188,&local_198);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  iVar4 = FUN_140e851f0(&local_58,&local_188,DAT_141955260,1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  uStack_13c = 0xd;
  if (iVar4 == -2 || -1 < iVar4) {
    local_148 = 0;
  }
  else {
    local_148 = 0x3ff0000000000000;
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_168 = 0x5e1;
  cVar3 = FUN_140e491e0(&local_138);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_14c = 0xd;
  if (cVar3 == '\0') {
    local_158 = 0x3ff0000000000000;
  }
  else {
    local_158 = 0;
  }
  local_168 = 0x5e3;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87440(uVar6,DAT_1419ff858,0x80000000,&local_68,0,0);
  iVar4 = FUN_140e851f0(&local_138,&local_68,DAT_141955260,0);
  if (iVar4 != 0) {
    local_168 = 0x5e5;
    cVar3 = FUN_140e491e0(&local_138);
    bVar7 = cVar3 == '\0';
    if (bVar7) {
      uStack_18c = 0;
      local_198 = 0x3fee79e79e79e79e;
      puVar5 = &local_198;
    }
    else {
      uStack_17c = 0;
      local_188 = 0x3ff0cccccccccccd;
      puVar5 = &local_188;
    }
    uVar2 = uStack_17c;
    uVar1 = uStack_18c;
    local_d8 = *(undefined4 *)puVar5;
    uStack_d4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_d0 = *(undefined4 *)(puVar5 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_d8);
    if ((bVar7) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_198);
    }
    if ((!bVar7) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_188);
    }
    local_168 = 0x5e6;
    uStack_18c = 0xf;
    local_198 = 0x1000000000000ee;
    FUN_140e87440(&local_198,DAT_1419f59c8,0x80000000,&local_98,0,0);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140042560(&local_98,&local_128);
    uStack_18c = 0xf;
    local_198 = 0x1000000000000ee;
    FUN_140e87930(&local_198,DAT_1419f59c8,0x80000000,&local_98);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_168 = 0x5e7;
    uStack_18c = 0xf;
    local_198 = 0x1000000000000ee;
    FUN_140e87440(&local_198,DAT_141a0a7d8,0x80000000,&local_a8,0,0);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140042560(&local_a8,&local_128);
    uStack_18c = 0xf;
    local_198 = 0x1000000000000ee;
    FUN_140e87930(&local_198,DAT_141a0a7d8,0x80000000,&local_a8);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_168 = 0x5e8;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    local_d8 = (undefined4)local_138;
    uStack_d4 = local_138._4_4_;
    uStack_d0 = uStack_130;
    uStack_cc = uStack_12c;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_d8);
    FUN_140e87930(uVar6,DAT_1419ff858,0x80000000,&local_e8);
  }
  local_168 = 0x5eb;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87440(uVar6,DAT_1419ffd68,0x80000000,&local_78,0,0);
  iVar4 = FUN_140e851f0(&local_148,&local_78,DAT_141955260,0);
  if (iVar4 != 0) {
    local_168 = 0x5ed;
    uStack_18c = 0xf;
    local_198 = 0x1000000000000ee;
    FUN_140e87440(&local_198,DAT_141a1f170,0x80000000,&local_b8,0,0);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    cVar3 = FUN_140e491e0(&local_148);
    bVar7 = cVar3 == '\0';
    if (bVar7) {
      uStack_18c = 0;
      local_198 = 0xc024000000000000;
      puVar5 = &local_198;
    }
    else {
      uStack_17c = 0;
      local_188 = 0x4024000000000000;
      puVar5 = &local_188;
    }
    FUN_1400460e0(&local_b8,puVar5);
    if ((bVar7) && ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_198);
    }
    if ((!bVar7) && ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_188);
    }
    uStack_18c = 0xf;
    local_198 = 0x1000000000000ee;
    FUN_140e87930(&local_198,DAT_141a1f170,0x80000000,&local_b8);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_168 = 0x5ee;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    local_d8 = (undefined4)local_148;
    uStack_d4 = local_148._4_4_;
    uStack_d0 = uStack_140;
    uStack_cc = uStack_13c;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_d8);
    FUN_140e87930(uVar6,DAT_1419ffd68,0x80000000,&local_f8);
  }
  local_168 = 0x5f1;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87440(uVar6,DAT_1419ffa98,0x80000000,&local_88,0,0);
  iVar4 = FUN_140e851f0(&local_158,&local_88,DAT_141955260,0);
  if (iVar4 != 0) {
    local_168 = 0x5f3;
    uStack_18c = 0xf;
    local_198 = 0x1000000000000ee;
    FUN_140e87440(&local_198,DAT_1419ff178,0x80000000,&local_c8,0,0);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    cVar3 = FUN_140e491e0(&local_158);
    bVar7 = cVar3 == '\0';
    if (bVar7) {
      uStack_18c = 0;
      local_198 = 0x3febd37a6f4de9be;
      puVar5 = &local_198;
    }
    else {
      uStack_17c = 0;
      local_188 = 0x3ff2666666666666;
      puVar5 = &local_188;
    }
    FUN_140042560(&local_c8,puVar5);
    if ((bVar7) && ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_198);
    }
    if ((!bVar7) && ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_188);
    }
    uStack_18c = 0xf;
    local_198 = 0x1000000000000ee;
    FUN_140e87930(&local_198,DAT_1419ff178,0x80000000,&local_c8);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_168 = 0x5f4;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    local_d8 = (undefined4)local_158;
    uStack_d4 = local_158._4_4_;
    uStack_d0 = uStack_150;
    uStack_cc = uStack_14c;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_d8);
    FUN_140e87930(uVar6,DAT_1419ffa98,0x80000000,&local_108);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  DAT_141dc7a50 = (undefined8 *)local_178;
  return param_3;
}

