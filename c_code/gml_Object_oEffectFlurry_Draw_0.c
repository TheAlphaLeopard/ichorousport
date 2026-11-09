// gml_Object_oEffectFlurry_Draw_0 @ 0x1409223b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oEffectFlurry_Draw_0
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
  ulonglong in_stack_fffffffffffffe90;
  undefined1 **ppuVar12;
  ulonglong uVar13;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined4 local_98 [3];
  byte local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined4 *local_60;
  uint local_58 [2];
  undefined8 *local_50;
  
  local_e0 = "gml_Script_anon@157@anon@15@gml_Object_oEffectFlurry_Create_0";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 10;
  FUN_140041df0(local_58,param_4,1,param_5);
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_14c = 0;
  local_158 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 10;
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
    local_d8 = 10;
    if ((int)local_58[0] < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*local_50;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0x4000000000000000;
  }
  local_d8 = 0xb;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uStack_15c = 6;
  uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  local_168 = param_1;
  FUN_140e87440(&local_168,DAT_141a0a728,0x80000000,&local_108,uVar10,
                in_stack_fffffffffffffe90 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_148 = (undefined4)local_108;
  uStack_144 = local_108._4_4_;
  uStack_140 = uStack_100;
  uStack_13c = uStack_fc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_148);
  local_78 = local_c8;
  ppuVar12 = &local_78;
  uVar10 = CONCAT44(uVar11,DAT_141a09fe8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,1,uVar10,ppuVar12);
  if (puVar3 != &local_f8) {
    local_148 = *(undefined4 *)puVar3;
    uStack_144 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_140 = *(undefined4 *)(puVar3 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
  }
  local_d8 = 0xc;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uStack_15c = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_168 = param_1;
  FUN_140e87440(&local_168,DAT_141a0a728,0x80000000,&local_108,uVar10,
                (ulonglong)ppuVar12 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_148 = (undefined4)local_108;
  uStack_144 = local_108._4_4_;
  uStack_140 = uStack_100;
  uStack_13c = uStack_fc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_148);
  local_78 = local_c8;
  if (0 < (int)local_58[0]) {
    puVar7 = (undefined8 *)*local_50;
  }
  ppuVar12 = &local_78;
  uVar10 = CONCAT44(uVar11,DAT_141a0a068);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,1,uVar10,ppuVar12);
  uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_160 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
    local_168 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_168,puVar3);
  }
  FUN_140042560(&local_168,puVar7);
  local_148 = (undefined4)local_168;
  uStack_144 = local_168._4_4_;
  uStack_140 = uStack_160;
  uStack_13c = uStack_15c;
  FUN_140041b80(&local_138,&local_148);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_d8 = 0xe;
  uStack_15c = 0;
  local_168 = 0;
  iVar1 = FUN_140e851f0(&local_f8,&local_168,DAT_141955260,0);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (iVar1 == 0) {
    local_d8 = 0xf;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    uVar11 = (undefined4)(uVar10 >> 0x20);
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_148 = _DAT_141dc6df0;
    uStack_144 = uRam0000000141dc6df4;
    uStack_140 = uRam0000000141dc6df8;
    uStack_13c = uRam0000000141dc6dfc;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_148);
    local_78 = local_c8;
    ppuVar12 = &local_78;
    uVar10 = CONCAT44(uVar11,DAT_141a0a0d8);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_158,1,uVar10,ppuVar12);
    uStack_15c = local_12c;
    uStack_160 = local_130;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
      local_168 = local_138;
      FUN_140046500(&local_168,uVar4);
      local_148 = (undefined4)local_168;
      uStack_144 = local_168._4_4_;
      uStack_140 = uStack_160;
      uStack_13c = uStack_15c;
    }
    else {
      FUN_1400419b0(&local_168,&local_138);
      FUN_140046500(&local_168,uVar4);
      local_148 = (undefined4)local_168;
      uStack_144 = local_168._4_4_;
      uStack_140 = uStack_160;
      uStack_13c = uStack_15c;
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_148);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
  }
  local_d8 = 0x11;
  uStack_15c = 6;
  uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_168 = param_1;
  FUN_140e87440(&local_168,DAT_141a0cfc8,0x80000000,&local_128,uVar10,uVar13);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  uStack_15c = local_12c;
  uStack_160 = local_130;
  bVar6 = (byte)local_12c & 0x1f;
  if ((1 << bVar6 & 0x46U) == 0) {
    local_168 = local_138;
  }
  else {
    FUN_1400419b0(&local_168,&local_138);
  }
  FUN_140042560(&local_168,uVar2);
  FUN_1400460e0(&local_128,&local_168);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_128);
  local_d8 = 0x12;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uStack_15c = 6;
  uVar13 = uVar13 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_168 = param_1;
  FUN_140e87440(&local_168,DAT_141a0cfc8,0x80000000,&local_88,uVar10,uVar13);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  uStack_15c = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_168 = param_1;
  FUN_140e87440(&local_168,DAT_141a0a728,0x80000000,&local_108,uVar10,uVar13 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_148 = (undefined4)local_108;
  uStack_144 = local_108._4_4_;
  uStack_140 = uStack_100;
  uStack_13c = uStack_fc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_148);
  local_78 = local_c8;
  local_148 = (undefined4)local_88;
  uStack_144 = local_88._4_4_;
  uStack_140 = uStack_80;
  uStack_13c = uStack_7c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_148);
  local_70 = local_b8;
  local_148 = _DAT_141dc6df0;
  uStack_144 = uRam0000000141dc6df4;
  uStack_140 = uRam0000000141dc6df8;
  uStack_13c = uRam0000000141dc6dfc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_148);
  local_68 = local_a8;
  puVar5 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_118,1,CONCAT44(uVar11,DAT_141a049b8),&local_78);
  if (puVar5 != local_98) {
    local_148 = *puVar5;
    uStack_144 = puVar5[1];
    uStack_140 = puVar5[2];
    uStack_13c = puVar5[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_148);
  }
  local_60 = local_98;
  puVar7 = (undefined8 *)gml_RoomCC_rmGravePit01_0_Create(param_1,param_2,&local_158,3,&local_70);
  if (puVar7 != &local_128) {
    local_148 = *(undefined4 *)puVar7;
    uStack_144 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_140 = *(undefined4 *)(puVar7 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
  }
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_128);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << bVar6 & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,4,FUN_140041b30);
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
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

