// gml_Script_animcurve_lerp @ 0x14021e6d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_animcurve_lerp
          (undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  code *pcVar8;
  ulonglong uVar9;
  undefined4 uVar11;
  undefined8 uVar10;
  ulonglong in_stack_fffffffffffffee0;
  undefined8 **ppuVar12;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_c0 = "gml_Script_animation_end";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 4;
  FUN_140041df0(local_48,param_4,2,param_5);
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_e8,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0;
  uVar7 = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 4;
  puVar6 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_40;
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_b8 = 4;
    uStack_10c = 6;
    in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffffffffffff00;
    pcVar8 = (code *)((ulonglong)pcVar8 & 0xffffffffffffff00);
    local_118 = param_1;
    FUN_140e87440(&local_118,DAT_141a0a728,0x80000000,&local_98,pcVar8,in_stack_fffffffffffffee0);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if ((int)local_48[0] < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*local_40;
      if (&local_98 == puVar3) goto LAB_14021e890;
    }
    local_118 = local_98;
    uStack_110 = uStack_90;
    uStack_10c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_118);
  }
LAB_14021e890:
  if ((int)local_48[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_40[1];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    uStack_10c = 6;
    in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffffffffffff00;
    pcVar8 = (code *)((ulonglong)pcVar8 & 0xffffffffffffff00);
    local_118 = param_1;
    FUN_140e87440(&local_118,DAT_141a0cfc8,0x80000000,&local_68,pcVar8,in_stack_fffffffffffffee0);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if ((int)local_48[0] < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_40[1];
      if (&local_68 == puVar3) goto LAB_14021e94d;
    }
    local_118 = local_68;
    uStack_110 = uStack_60;
    uStack_10c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_118);
  }
LAB_14021e94d:
  local_b8 = 6;
  uStack_10c = 6;
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_141a0a728,0x80000000,&local_98,uVar9,
                in_stack_fffffffffffffee0 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((int)local_48[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_40;
  }
  iVar1 = FUN_140e851f0(&local_98,puVar3,DAT_141955260,0);
  if (iVar1 != 0) {
    local_b8 = 7;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    *param_3 = 0;
    goto LAB_14021ef7c;
  }
  local_b8 = 9;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if ((int)local_48[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_14021ea2d:
    local_118 = *puVar3;
    uStack_110 = *(undefined4 *)(puVar3 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_118);
  }
  else {
    puVar3 = (undefined8 *)*local_40;
    if (puVar3 != &local_e8) goto LAB_14021ea2d;
  }
  local_88[0] = &local_e8;
  ppuVar12 = local_88;
  uVar9 = CONCAT44(uVar11,DAT_141a09fe8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_108,1,uVar9,ppuVar12);
  if (puVar3 != &local_b0) {
    local_118 = *puVar3;
    uStack_110 = *(undefined4 *)(puVar3 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    FUN_140041b80(&local_b0,&local_118);
  }
  local_b8 = 10;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if ((int)local_48[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_14021eb15:
    local_118 = *puVar3;
    uStack_110 = *(undefined4 *)(puVar3 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_118);
  }
  else {
    puVar3 = (undefined8 *)*local_40;
    if (puVar3 != &local_e8) goto LAB_14021eb15;
  }
  local_88[0] = &local_e8;
  uStack_10c = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_141a0a818,0x80000000,&local_58,uVar9,
                (ulonglong)ppuVar12 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  uVar4 = CONCAT44(uVar11,DAT_141a0a068);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_108,1,uVar4,local_88);
  uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_110 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
    local_118 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_118,puVar3);
  }
  FUN_140042560(&local_118,&local_58);
  local_78 = (undefined4)local_118;
  uStack_74 = local_118._4_4_;
  uStack_70 = uStack_110;
  uStack_6c = uStack_10c;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_78);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_b8 = 0xb;
  uStack_10c = 0;
  local_118 = 0;
  iVar1 = FUN_140e851f0(&local_b0,&local_118,DAT_141955260,0);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (iVar1 == 0) {
    local_b8 = 0xc;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    local_78 = _DAT_141dc62f0;
    uStack_74 = uRam0000000141dc62f4;
    uStack_70 = uRam0000000141dc62f8;
    uStack_6c = uRam0000000141dc62fc;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_78);
    local_88[0] = &local_e8;
    uVar10 = CONCAT44(uVar11,DAT_141a0a0d8);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_108,1,uVar10,local_88);
    uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uStack_10c = local_ec;
    uStack_110 = local_f0;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
      local_118 = local_f8;
    }
    else {
      FUN_1400419b0(&local_118,&local_f8);
    }
    FUN_140046500(&local_118,uVar4);
    local_78 = (undefined4)local_118;
    uStack_74 = local_118._4_4_;
    uStack_70 = uStack_110;
    uStack_6c = uStack_10c;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_78);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
  }
  local_b8 = 0xe;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if ((int)local_48[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_14021ee4d:
    local_78 = *(undefined4 *)puVar3;
    uStack_74 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_70 = *(undefined4 *)(puVar3 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_78);
  }
  else {
    puVar3 = (undefined8 *)*local_40;
    if (puVar3 != &local_e8) goto LAB_14021ee4d;
  }
  local_88[0] = &local_e8;
  if (1 < (int)local_48[0]) {
    puVar6 = (undefined8 *)local_40[1];
  }
  uStack_10c = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_110 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
    local_118 = *puVar6;
  }
  else {
    FUN_1400419b0(&local_118,puVar6);
  }
  FUN_1400460e0(&local_118,&local_f8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_108,1,CONCAT44(uVar11,DAT_141a049b8),local_88);
  uVar2 = FUN_140e851f0(&local_118,uVar4,DAT_141955260,1);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (uVar2 < 0x80000000) {
    uVar7 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar7 << 0x20;
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
LAB_14021ef7c:
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,2,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar6 = local_40;
    do {
      puVar3 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

