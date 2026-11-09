// gml_Script____struct___362_anon_198_gml_Object_oBossKillText_Create_0 @ 0x1407a1380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___362_anon_198_gml_Object_oBossKillText_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 **ppuVar9;
  sbyte sVar10;
  sbyte sVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  uint local_19c;
  undefined8 local_198;
  undefined4 local_190;
  uint local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined1 local_f8 [16];
  undefined8 local_e8 [6];
  undefined8 local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  uint local_9c;
  uint local_98 [2];
  undefined8 *local_90;
  uint local_88;
  uint local_84;
  undefined8 local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  
  local_170 = "gml_Script_anon@1193@anon@198@gml_Object_oBossKillText_Create_0";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 0x36;
  FUN_140041df0(local_98,param_4,1,param_5);
  uVar14 = 1;
  _eh_vector_constructor_iterator_(&local_108,0x10,5,FUN_1400424d0,FUN_140041b30);
  puVar5 = local_90;
  uVar2 = local_98[0];
  uStack_17c = 0xffffff;
  local_188 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_1fc = 0;
  local_208 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_168 = 0x36;
  if ((int)local_98[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_90;
  }
  iVar4 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_168 = 0x36;
    if ((int)uVar2 < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*puVar5;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = &DAT_bff0000000000000;
  }
  local_168 = 0x38;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a08b68);
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_188);
  local_1d8 = local_188;
  uStack_1d0 = uStack_180;
  uStack_1cc = uStack_17c;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_1d8);
  local_160 = &local_108;
  uVar7 = CONCAT44(uVar14,DAT_141a00e38);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_208,1,uVar7,&local_160);
  uVar14 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_1f0 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
    local_1f8 = *puVar6;
  }
  else {
    FUN_1400419b0(&local_1f8,puVar6);
  }
  FUN_1400460e0(&local_1f8,puVar5);
  local_1d8 = local_1f8;
  uStack_1d0 = uStack_1f0;
  uStack_1cc = uStack_1ec;
  FUN_140041b80(&local_a8,&local_1d8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_168 = 0x39;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_188);
  local_1d8 = local_188;
  uStack_1d0 = uStack_180;
  uStack_1cc = uStack_17c;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_1d8);
  local_160 = &local_108;
  uVar7 = CONCAT44(uVar14,DAT_141a00dd8);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_208,1,uVar7,&local_160);
  uVar14 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_1f0 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
    local_1f8 = *puVar6;
  }
  else {
    FUN_1400419b0(&local_1f8,puVar6);
  }
  FUN_1400460e0(&local_1f8,puVar5);
  local_1d8 = local_1f8;
  uStack_1d0 = uStack_1f0;
  uStack_1cc = uStack_1ec;
  FUN_140041b80(&local_b8,&local_1d8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_168 = 0x3a;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_188);
  local_1d8 = local_188;
  uStack_1d0 = uStack_180;
  uStack_1cc = uStack_17c;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_1d8);
  local_160 = &local_108;
  uStack_1dc = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_1e0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
    local_1e8 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_1e8,puVar5);
  }
  uStack_1bc = 7;
  local_1c8 = CONCAT44(local_1c8._4_4_,2);
  FUN_140042560(&local_1e8,&local_1c8);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uVar7 = CONCAT44(uVar14,DAT_141a00c98);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_208,1,uVar7,&local_160);
  uVar14 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_1f0 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
    local_1f8 = *puVar6;
  }
  else {
    FUN_1400419b0(&local_1f8,puVar6);
  }
  FUN_1400462a0(&local_1f8,&local_1e8);
  local_1d8 = local_1f8;
  uStack_1d0 = uStack_1f0;
  uStack_1cc = uStack_1ec;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_1d8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_168 = 0x3b;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_188);
  local_1d8 = local_188;
  uStack_1d0 = uStack_180;
  uStack_1cc = uStack_17c;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_1d8);
  local_160 = &local_108;
  uStack_1ec = *(uint *)((longlong)puVar5 + 0xc);
  uStack_1f0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
    local_1f8 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_1f8,puVar5);
  }
  uStack_1bc = 7;
  local_1c8 = CONCAT44(local_1c8._4_4_,2);
  FUN_140042560(&local_1f8,&local_1c8);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uVar7 = CONCAT44(uVar14,DAT_141a00d58);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_208,1,uVar7,&local_160);
  uStack_1dc = *(uint *)((longlong)puVar5 + 0xc);
  uStack_1e0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
    local_1e8 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_1e8,puVar5);
  }
  FUN_1400462a0(&local_1e8,&local_1f8);
  local_1d8 = local_1e8;
  uStack_1d0 = uStack_1e0;
  uStack_1cc = uStack_1dc;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_1d8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  uVar1 = local_a8;
  iVar4 = 0x10;
  local_84 = local_9c & 0x1f;
  sVar10 = (sbyte)local_84;
  local_88 = local_ac & 0x1f;
  sVar11 = (sbyte)local_88;
  do {
    uVar14 = (undefined4)((ulonglong)uVar7 >> 0x20);
    iVar4 = iVar4 + -1;
    local_168 = 0x3f;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a08b68);
    if ((local_18c & 0xffffff) == 0) {
      uVar13 = (undefined4)local_198;
    }
    else {
      uVar13 = FUN_140e4b060(&local_198);
    }
    uVar7 = FUN_140e79480(uVar13);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_fc = 0;
    local_160 = &local_108;
    uStack_1dc = local_18c;
    uStack_1e0 = local_190;
    local_108 = uVar7;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
      local_1e8 = local_198;
    }
    else {
      FUN_1400419b0(&local_1e8,&local_198);
    }
    local_5c = 0;
    local_68 = 0x3fe0000000000000;
    FUN_140042560(&local_1e8,&local_68);
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    local_1b8 = (undefined4)local_1e8;
    uStack_1b4 = local_1e8._4_4_;
    uStack_1b0 = uStack_1e0;
    uStack_1ac = uStack_1dc;
    if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1b8);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_158 = (undefined8 *)local_f8;
    local_1b8 = _DAT_1419e83c0;
    uStack_1b4 = uRam00000001419e83c4;
    uStack_1b0 = uRam00000001419e83c8;
    uStack_1ac = uRam00000001419e83cc;
    if ((1 << ((byte)local_e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_1b8);
    local_150 = local_e8;
    uVar8 = CONCAT44(uVar14,DAT_141a00c58);
    uVar7 = FUN_140e634e0(param_1,param_2,&local_208,3,uVar8,&local_160);
    uVar14 = (undefined4)((ulonglong)uVar8 >> 0x20);
    uStack_1ec = local_9c;
    uStack_1f0 = local_a0;
    if ((1 << sVar10 & 0x46U) == 0) {
      local_1f8 = uVar1;
    }
    else {
      FUN_1400419b0(&local_1f8,&local_a8);
    }
    FUN_1400460e0(&local_1f8,uVar7);
    local_1b8 = (undefined4)local_1f8;
    uStack_1b4 = local_1f8._4_4_;
    uStack_1b0 = uStack_1f0;
    uStack_1ac = uStack_1ec;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1b8);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_168 = 0x40;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    if ((local_19c & 0xffffff) == 0) {
      uVar13 = (undefined4)local_1a8;
    }
    else {
      uVar13 = FUN_140e4b060(&local_1a8);
    }
    uVar7 = FUN_140e79480(uVar13);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_fc = 0;
    local_160 = &local_108;
    uStack_6c = local_19c;
    uStack_70 = local_1a0;
    local_108 = uVar7;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
      local_78 = local_1a8;
    }
    else {
      FUN_1400419b0(&local_78,&local_1a8);
    }
    uStack_1cc = 0;
    local_1d8 = 0x3fe0000000000000;
    FUN_140042560(&local_78,&local_1d8);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1b8 = (undefined4)local_78;
    uStack_1b4 = local_78._4_4_;
    uStack_1b0 = uStack_70;
    uStack_1ac = uStack_6c;
    if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1b8);
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    local_158 = (undefined8 *)local_f8;
    local_1b8 = _DAT_1419e83c0;
    uStack_1b4 = uRam00000001419e83c4;
    uStack_1b0 = uRam00000001419e83c8;
    uStack_1ac = uRam00000001419e83cc;
    if ((1 << ((byte)local_e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_1b8);
    local_150 = local_e8;
    uVar7 = FUN_140e634e0(param_1,param_2,&local_208,3,CONCAT44(uVar14,DAT_141a00c58),&local_160);
    uStack_1bc = local_ac;
    uStack_1c0 = local_b0;
    if ((1 << sVar11 & 0x46U) == 0) {
      local_1c8 = local_b8;
    }
    else {
      FUN_1400419b0(&local_1c8,&local_b8);
    }
    FUN_1400460e0(&local_1c8,uVar7);
    local_1b8 = (undefined4)local_1c8;
    uStack_1b4 = local_1c8._4_4_;
    uStack_1b0 = uStack_1c0;
    uStack_1ac = uStack_1bc;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1b8);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_168 = 0x42;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a08b48);
    local_160 = &local_118;
    local_158 = &local_128;
    if ((int)local_98[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_1407a2151:
      local_1b8 = *(undefined4 *)puVar5;
      uStack_1b4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_1b0 = *(undefined4 *)(puVar5 + 1);
      uStack_1ac = *(uint *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_1b8);
    }
    else {
      puVar5 = (undefined8 *)*local_90;
      if (puVar5 != local_e8) goto LAB_1407a2151;
    }
    local_150 = local_e8;
    uVar8 = FUN_140e63610(param_1,param_2,&local_208,3,uVar7,&local_160);
    cVar3 = FUN_140e491e0(uVar8);
    uVar14 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (cVar3 == '\0') {
      local_168 = 0x43;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_138 = 0;
      local_130 = 0;
      local_12c = 5;
      local_148 = &local_118;
      local_140 = &local_128;
      ppuVar9 = &local_148;
      puVar5 = &local_138;
      goto LAB_1407a225e;
    }
    if (iVar4 < 1) {
      local_168 = 0x46;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      local_160 = &local_118;
      local_158 = &local_128;
      ppuVar9 = &local_160;
      puVar5 = &local_208;
LAB_1407a225e:
      puVar5 = (undefined8 *)
               FUN_140e634e0(param_1,param_2,puVar5,2,CONCAT44(uVar14,DAT_1419fdca8),ppuVar9);
      if (puVar5 != param_3) {
        local_1b8 = *(undefined4 *)puVar5;
        uStack_1b4 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_1b0 = *(undefined4 *)(puVar5 + 1);
        uStack_1ac = *(uint *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_1b8);
      }
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)local_88 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      _eh_vector_destructor_iterator_(&local_108,0x10,5,FUN_140041b30);
      if (0 < (int)local_98[0]) {
        uVar12 = (ulonglong)local_98[0];
        puVar5 = local_90;
        do {
          puVar6 = (undefined8 *)*puVar5;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          *puVar6 = 0;
          *(undefined4 *)(puVar6 + 1) = 0;
          *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
          puVar5 = puVar5 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      FUN_140e4cd60(local_90);
      DAT_141dc7a50 = (undefined8 *)local_178;
      return param_3;
    }
  } while( true );
}

