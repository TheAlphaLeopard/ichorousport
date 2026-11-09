// gml_Script____struct___344_gml_Object_oBossEmbrace_Create_0 @ 0x140733b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___344_gml_Object_oBossEmbrace_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  double *pdVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  code *pcVar12;
  ulonglong uVar13;
  ulonglong in_stack_fffffffffffffe40;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  uint local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  longlong local_e0;
  int local_d4;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  
  local_f0 = "gml_Script_anon@9417@___struct___344@gml_Object_oBossEmbrace_Create_0";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x133;
  pcVar12 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_c8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0;
  local_178 = 0;
  local_12c = 0;
  local_138 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x134;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = 0;
  FUN_140e87930(uVar5,DAT_141a0a848,0x80000000,&local_108);
  local_e8 = 0x136;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5a58);
  uStack_19c = *(uint *)((longlong)puVar6 + 0xc);
  uStack_1a0 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
    local_1a8 = *puVar6;
  }
  else {
    FUN_1400419b0(&local_1a8,puVar6);
  }
  FUN_140046500(&local_1a8,uVar5);
  if ((uStack_19c & 0xffffff) == 0) {
    uVar9 = (undefined4)local_1a8;
  }
  else {
    uVar9 = FUN_140e4b060(&local_1a8);
  }
  uVar5 = FUN_140e78ec0(uVar9,0,0x3ff0000000000000);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0;
  local_118 = uVar5;
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_e8 = 0x137;
  uStack_17c = 0;
  local_188 = 0x3fe0000000000000;
  iVar4 = FUN_140e851f0(&local_118,&local_188,DAT_141955260,1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if (iVar4 == -2 || -1 < iVar4) {
    uStack_17c = 0;
    local_188 = 0;
    puVar6 = &local_188;
    bVar3 = false;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_140087a30(&local_198,&local_118,2);
    puVar6 = (undefined8 *)FUN_1400464c0(&local_1b8,1,uVar5);
    bVar3 = true;
    bVar2 = true;
    bVar1 = false;
    if (puVar6 == &local_128) goto LAB_140733e71;
  }
  local_1a8 = *puVar6;
  uStack_1a0 = *(undefined4 *)(puVar6 + 1);
  uStack_19c = *(uint *)((longlong)puVar6 + 0xc);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_1a8);
LAB_140733e71:
  if ((bVar1) && ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_188);
  }
  if ((bVar2) && ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1b8);
  }
  if ((bVar3) && ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_198);
  }
  local_e8 = 0x138;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar13 = (ulonglong)pcVar12 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_141a06e68,0x80000000,&local_e0,uVar13,
                in_stack_fffffffffffffe40 & 0xffffffffffffff00);
  uVar9 = (undefined4)(uVar13 >> 0x20);
  if (((local_d4 == 2) && (local_e0 != 0)) && (0 < *(int *)(local_e0 + 0x24))) {
    local_e8 = 0x139;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a075e8);
    local_1b8 = _DAT_1419e7e20;
    uStack_1b4 = uRam00000001419e7e24;
    uStack_1b0 = uRam00000001419e7e28;
    uStack_1ac = uRam00000001419e7e2c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_1b8);
    local_78 = local_c8;
    local_1b8 = _DAT_1419e7e70;
    uStack_1b4 = uRam00000001419e7e74;
    uStack_1b0 = uRam00000001419e7e78;
    uStack_1ac = uRam00000001419e7e7c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_1b8);
    local_70 = local_b8;
    local_68 = &local_128;
    uVar8 = FUN_140e634e0(param_1,param_2,&local_178,3,CONCAT44(uVar9,DAT_141a00c58),&local_78);
    uStack_18c = *(uint *)((longlong)pdVar7 + 0xc);
    uStack_190 = *(undefined4 *)(pdVar7 + 1);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
      local_198 = *pdVar7;
    }
    else {
      FUN_1400419b0(&local_198,pdVar7);
    }
    FUN_140042560(&local_198,uVar8);
    local_1b8 = (undefined4)local_198;
    uStack_1b4 = local_198._4_4_;
    uStack_1b0 = uStack_190;
    uStack_1ac = uStack_18c;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1b8);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
  }
  else {
    local_e8 = 0x13b;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    local_1b8 = _DAT_141dc6970;
    uStack_1b4 = uRam0000000141dc6974;
    uStack_1b0 = uRam0000000141dc6978;
    uStack_1ac = uRam0000000141dc697c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_1b8);
    local_78 = local_c8;
    local_1b8 = _DAT_141dc6970;
    uStack_1b4 = uRam0000000141dc6974;
    uStack_1b0 = uRam0000000141dc6978;
    uStack_1ac = uRam0000000141dc697c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_1b8);
    local_70 = local_b8;
    local_1b8 = _DAT_1419e7e20;
    uStack_1b4 = uRam00000001419e7e24;
    uStack_1b0 = uRam00000001419e7e28;
    uStack_1ac = uRam00000001419e7e2c;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_1b8);
    local_68 = &local_a8;
    local_1b8 = _DAT_1419e7df0;
    uStack_1b4 = uRam00000001419e7df4;
    uStack_1b0 = uRam00000001419e7df8;
    uStack_1ac = uRam00000001419e7dfc;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_1b8);
    local_60 = local_98;
    local_58 = &local_128;
    uVar8 = CONCAT44(uVar9,DAT_141a0a0d8);
    pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_138,1,uVar8,&local_70);
    uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
    uStack_18c = *(uint *)((longlong)pdVar7 + 0xc);
    uStack_190 = *(undefined4 *)(pdVar7 + 1);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
      local_198 = *pdVar7;
    }
    else {
      FUN_1400419b0(&local_198,pdVar7);
    }
    uStack_1ac = 7;
    local_1b8 = 2;
    FUN_140042560(&local_198,&local_1b8);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    uVar8 = CONCAT44(uVar9,DAT_141a0a0d8);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_178,1,uVar8,&local_78);
    uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
    uStack_19c = *(uint *)((longlong)puVar6 + 0xc);
    uStack_1a0 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
      local_1a8 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_1a8,puVar6);
    }
    uStack_1ac = 7;
    local_1b8 = 4;
    FUN_140042560(&local_1a8,&local_1b8);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    dVar11 = local_198;
    if ((uStack_18c & 0xffffff) != 0) {
      dVar11 = (double)FUN_140e4b060(&local_198);
    }
    uVar10 = FUN_140e78f00((longlong)dVar11);
    local_14c = uStack_19c;
    local_150 = uStack_1a0;
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
      local_158 = local_1a8;
    }
    else {
      FUN_1400419b0(&local_158,&local_1a8);
    }
    FUN_140162c50(&local_158,uVar10);
    uVar8 = FUN_140e634e0(param_1,param_2,&local_148,3,CONCAT44(uVar9,DAT_141a00c58),&local_68);
    uStack_17c = local_14c;
    uStack_180 = local_150;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
      local_188 = local_158;
    }
    else {
      FUN_1400419b0(&local_188,&local_158);
    }
    FUN_140042560(&local_188,uVar8);
    local_1b8 = (undefined4)local_188;
    uStack_1b4 = local_188._4_4_;
    uStack_1b0 = uStack_180;
    uStack_1ac = uStack_17c;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1b8);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
  }
  FUN_140e87930(uVar5,DAT_141a06f88,0x80000000,&local_168);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

