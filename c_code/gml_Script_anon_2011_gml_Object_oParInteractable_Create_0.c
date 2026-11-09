// gml_Script_anon_2011_gml_Object_oParInteractable_Create_0 @ 0x140ba9360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_2011_gml_Object_oParInteractable_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined1 **ppuVar10;
  ulonglong uVar11;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  uint local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  uint local_a4;
  undefined8 local_a0;
  char *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68 [2];
  undefined8 *local_60;
  
  local_98 = "gml_Script_anon@394@gml_Object_oParInteractable_Create_0";
  local_a0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a0;
  local_90 = 0x1f;
  FUN_140041df0(local_68,param_4,1,param_5);
  uVar8 = 1;
  _eh_vector_constructor_iterator_(local_f8,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_90 = 0x1f;
  puVar6 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_60;
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_90 = 0x1f;
    if ((int)local_68[0] < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*local_60;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0x3ff0000000000000;
  }
  local_90 = 0x21;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  uStack_11c = 0xf;
  local_128 = 0x10000010000018d;
  local_118 = 0x10000010000018d;
  uStack_110 = uStack_120;
  uStack_10c = 0xf;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_118);
  local_e8 = local_f8;
  ppuVar10 = &local_e8;
  uVar9 = CONCAT44(uVar8,DAT_141a049b8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_108,1,uVar9,ppuVar10);
  uVar7 = 0xffffff;
  if (puVar3 != &local_b0) {
    local_128 = *puVar3;
    uStack_120 = *(undefined4 *)(puVar3 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
    FUN_140041b80(&local_b0,&local_128);
    uVar7 = local_a4;
  }
  local_90 = 0x23;
  if ((int)local_68[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_60;
  }
  uStack_10c = 0;
  local_118 = 0;
  iVar2 = FUN_140e851f0(puVar3,&local_118,DAT_141955260,1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  bVar1 = (byte)uVar7;
  if (iVar2 < 1) {
LAB_140ba9736:
    if ((int)local_68[0] < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*local_60;
    }
    uStack_11c = 0;
    local_128 = 0;
    iVar2 = FUN_140e851f0(puVar3,&local_128,DAT_141955260,1);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if (iVar2 == -2 || -1 < iVar2) goto LAB_140ba9e82;
    uStack_11c = 6;
    ppuVar10 = (undefined1 **)((ulonglong)ppuVar10 & 0xffffffffffffff00);
    uVar9 = uVar9 & 0xffffffffffffff00;
    local_128 = param_1;
    FUN_140e87440(&local_128,DAT_141a0cfc8,0x80000000,&local_c0,uVar9,ppuVar10);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    uStack_11c = 0;
    local_128 = 0;
    iVar2 = FUN_140e851f0(&local_c0,&local_128,DAT_141955260,1);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if (iVar2 < 1) goto LAB_140ba9e82;
  }
  else {
    uStack_10c = 6;
    ppuVar10 = (undefined1 **)((ulonglong)ppuVar10 & 0xffffffffffffff00);
    uVar9 = uVar9 & 0xffffffffffffff00;
    local_118 = param_1;
    FUN_140e87440(&local_118,DAT_141a0cfc8,0x80000000,&local_c0,uVar9,ppuVar10);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    uStack_110 = local_a8;
    if ((1 << (bVar1 & 0x1f) & 0x46U) == 0) {
      local_118 = local_b0;
      uStack_10c = uVar7;
    }
    else {
      uStack_10c = uVar7;
      FUN_1400419b0(&local_118,&local_b0);
    }
    uStack_11c = 0;
    local_128 = 0x3fe8000000000000;
    FUN_1400462a0(&local_118,&local_128);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    iVar2 = FUN_140e851f0(&local_c0,&local_118,DAT_141955260,1);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if (iVar2 == -2 || 0 < iVar2) goto LAB_140ba9736;
  }
  local_90 = 0x25;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  uStack_11c = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_141a0a728,0x80000000,&local_78,uVar9,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = local_78;
  uStack_120 = uStack_70;
  uStack_11c = uStack_6c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_128);
  local_e8 = local_f8;
  ppuVar10 = &local_e8;
  uVar9 = CONCAT44(uVar8,DAT_141a09fe8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_108,1,uVar9,ppuVar10);
  if (puVar3 != &local_88) {
    local_128 = *puVar3;
    uStack_120 = *(undefined4 *)(puVar3 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_128);
  }
  local_90 = 0x26;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  uStack_11c = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_141a0a728,0x80000000,&local_78,uVar9,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = local_78;
  uStack_120 = uStack_70;
  uStack_11c = uStack_6c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_128);
  local_e8 = local_f8;
  if (0 < (int)local_68[0]) {
    puVar6 = (undefined8 *)*local_60;
  }
  ppuVar10 = &local_e8;
  uVar9 = CONCAT44(uVar8,DAT_141a0a068);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_108,1,uVar9,ppuVar10);
  uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_110 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
    local_118 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_118,puVar3);
  }
  FUN_140042560(&local_118,puVar6);
  local_128 = local_118;
  uStack_120 = uStack_110;
  uStack_11c = uStack_10c;
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  FUN_140041b80(&local_e0,&local_128);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_90 = 0x27;
  uStack_11c = 0;
  local_128 = 0;
  iVar2 = FUN_140e851f0(&local_88,&local_128,DAT_141955260,0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (iVar2 == 0) {
    local_90 = 0x28;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    uVar8 = (undefined4)(uVar9 >> 0x20);
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    local_128 = CONCAT44(uRam0000000141dc7364,_DAT_141dc7360);
    uStack_120 = uRam0000000141dc7368;
    uStack_11c = uRam0000000141dc736c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_128);
    local_e8 = local_f8;
    ppuVar10 = &local_e8;
    uVar9 = CONCAT44(uVar8,DAT_141a0a0d8);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_108,1,uVar9,ppuVar10);
    uStack_10c = local_d4;
    uStack_110 = local_d8;
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) == 0) {
      local_118 = local_e0;
    }
    else {
      FUN_1400419b0(&local_118,&local_e0);
    }
    FUN_140046500(&local_118,uVar4);
    local_128 = local_118;
    uStack_120 = uStack_110;
    uStack_11c = uStack_10c;
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    FUN_140041b80(&local_e0,&local_128);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
  }
  local_90 = 0x2a;
  uStack_11c = 6;
  uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_141a0cfc8,0x80000000,&local_d0,uVar9,uVar11);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_1400460e0(&local_d0,&local_e0);
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_d0);
  local_90 = 0x2b;
  uStack_11c = 6;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_141a0cfc8,0x80000000,&local_c0,uVar9 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uStack_110 = local_a8;
  if ((1 << (bVar1 & 0x1f) & 0x46U) == 0) {
    local_118 = local_b0;
    uStack_10c = uVar7;
  }
  else {
    uStack_10c = uVar7;
    FUN_1400419b0(&local_118,&local_b0);
  }
  uStack_11c = 0;
  local_128 = 0x3fe8000000000000;
  FUN_1400462a0(&local_118,&local_128);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uVar4 = local_118;
  if ((uStack_10c & 0xffffff) != 0) {
    uVar4 = FUN_140e4b060(&local_118);
  }
  if ((local_b4 & 0xffffff) == 0) {
    uVar8 = (undefined4)local_c0;
  }
  else {
    uVar8 = FUN_140e4b060(&local_c0);
  }
  uVar4 = FUN_140e78ec0(uVar8,0,uVar4);
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  local_c4 = 0;
  local_d0 = uVar4;
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_d0);
LAB_140ba9e82:
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,1,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    puVar6 = local_60;
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
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_a0;
  return param_3;
}

