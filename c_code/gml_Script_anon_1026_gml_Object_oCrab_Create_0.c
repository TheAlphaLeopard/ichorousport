// gml_Script_anon_1026_gml_Object_oCrab_Create_0 @ 0x1408c4150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1026_gml_Object_oCrab_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  code *pcVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  ulonglong in_stack_fffffffffffffe80;
  undefined1 **ppuVar12;
  ulonglong uVar13;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined4 *local_60;
  uint local_58 [2];
  undefined8 *local_50;
  
  local_f0 = "gml_Script_anon@617@___struct___418@gml_Object_oCrab_Create_0";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x28;
  FUN_140041df0(local_58,param_4,1,param_5);
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_d8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_15c = 0;
  local_168 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x28;
  puVar7 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_50;
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_e8 = 0x28;
    uStack_16c = 6;
    in_stack_fffffffffffffe80 = in_stack_fffffffffffffe80 & 0xffffffffffffff00;
    pcVar9 = (code *)((ulonglong)pcVar9 & 0xffffffffffffff00);
    local_178 = param_1;
    FUN_140e87440(&local_178,DAT_141a0a818,0x80000000,&local_98,pcVar9,in_stack_fffffffffffffe80);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if ((int)local_58[0] < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*local_50;
      if (&local_98 == puVar3) goto LAB_1408c4344;
    }
    local_158 = (undefined4)local_98;
    uStack_154 = local_98._4_4_;
    uStack_150 = uStack_90;
    uStack_14c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_158);
  }
LAB_1408c4344:
  local_e8 = 0x29;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uStack_16c = 6;
  uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0a728,0x80000000,&local_118,uVar10,
                in_stack_fffffffffffffe80 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_158 = (undefined4)local_118;
  uStack_154 = local_118._4_4_;
  uStack_150 = uStack_110;
  uStack_14c = uStack_10c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_158);
  local_78 = local_d8;
  ppuVar12 = &local_78;
  uVar10 = CONCAT44(uVar11,DAT_141a09fe8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,1,uVar10,ppuVar12);
  if (puVar3 != &local_108) {
    local_158 = *(undefined4 *)puVar3;
    uStack_154 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_150 = *(undefined4 *)(puVar3 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
  }
  local_e8 = 0x2a;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uStack_16c = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0a728,0x80000000,&local_118,uVar10,
                (ulonglong)ppuVar12 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_158 = (undefined4)local_118;
  uStack_154 = local_118._4_4_;
  uStack_150 = uStack_110;
  uStack_14c = uStack_10c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_158);
  local_78 = local_d8;
  if (0 < (int)local_58[0]) {
    puVar7 = (undefined8 *)*local_50;
  }
  ppuVar12 = &local_78;
  uVar10 = CONCAT44(uVar11,DAT_141a0a068);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,1,uVar10,ppuVar12);
  uStack_16c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_170 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
    local_178 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_178,puVar3);
  }
  FUN_140042560(&local_178,puVar7);
  local_158 = (undefined4)local_178;
  uStack_154 = local_178._4_4_;
  uStack_150 = uStack_170;
  uStack_14c = uStack_16c;
  FUN_140041b80(&local_148,&local_158);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_e8 = 0x2b;
  uStack_16c = 0;
  local_178 = 0;
  iVar1 = FUN_140e851f0(&local_108,&local_178,DAT_141955260,0);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (iVar1 == 0) {
    local_e8 = 0x2c;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    uVar11 = (undefined4)(uVar10 >> 0x20);
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_158 = _DAT_141dc6cb0;
    uStack_154 = uRam0000000141dc6cb4;
    uStack_150 = uRam0000000141dc6cb8;
    uStack_14c = uRam0000000141dc6cbc;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_158);
    local_78 = local_d8;
    ppuVar12 = &local_78;
    uVar10 = CONCAT44(uVar11,DAT_141a0a0d8);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_168,1,uVar10,ppuVar12);
    uStack_16c = local_13c;
    uStack_170 = local_140;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
      local_178 = local_148;
      FUN_140046500(&local_178,uVar4);
      local_158 = (undefined4)local_178;
      uStack_154 = local_178._4_4_;
      uStack_150 = uStack_170;
      uStack_14c = uStack_16c;
    }
    else {
      FUN_1400419b0(&local_178,&local_148);
      FUN_140046500(&local_178,uVar4);
      local_158 = (undefined4)local_178;
      uStack_154 = local_178._4_4_;
      uStack_150 = uStack_170;
      uStack_14c = uStack_16c;
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_158);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
  }
  local_e8 = 0x2e;
  uStack_16c = 6;
  uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0cfc8,0x80000000,&local_138,uVar10,uVar13);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  uStack_16c = local_13c;
  uStack_170 = local_140;
  bVar6 = (byte)local_13c & 0x1f;
  if ((1 << bVar6 & 0x46U) == 0) {
    local_178 = local_148;
  }
  else {
    FUN_1400419b0(&local_178,&local_148);
  }
  FUN_140042560(&local_178,uVar2);
  FUN_1400460e0(&local_138,&local_178);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_138);
  local_e8 = 0x2f;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uStack_16c = 6;
  uVar13 = uVar13 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0cfc8,0x80000000,&local_88,uVar10,uVar13);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  uStack_16c = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0a728,0x80000000,&local_118,uVar10,uVar13 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_158 = (undefined4)local_118;
  uStack_154 = local_118._4_4_;
  uStack_150 = uStack_110;
  uStack_14c = uStack_10c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_158);
  local_78 = local_d8;
  local_158 = (undefined4)local_88;
  uStack_154 = local_88._4_4_;
  uStack_150 = uStack_80;
  uStack_14c = uStack_7c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_158);
  local_70 = local_c8;
  local_158 = _DAT_141dc6cb0;
  uStack_154 = uRam0000000141dc6cb4;
  uStack_150 = uRam0000000141dc6cb8;
  uStack_14c = uRam0000000141dc6cbc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_158);
  local_68 = local_b8;
  puVar5 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_128,1,CONCAT44(uVar11,DAT_141a049b8),&local_78);
  if (puVar5 != local_a8) {
    local_158 = *puVar5;
    uStack_154 = puVar5[1];
    uStack_150 = puVar5[2];
    uStack_14c = puVar5[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_158);
  }
  local_60 = local_a8;
  puVar7 = (undefined8 *)gml_RoomCC_rmGravePit01_0_Create(param_1,param_2,&local_168,3,&local_70);
  if (puVar7 != &local_138) {
    local_158 = *(undefined4 *)puVar7;
    uStack_154 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_150 = *(undefined4 *)(puVar7 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
  }
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_138);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << bVar6 & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,4,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar7 = local_50;
    do {
      puVar3 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

