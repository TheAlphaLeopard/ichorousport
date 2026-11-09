// gml_Object_oTransition_Create_0 @ 0x140dd8ab0

undefined8 *
gml_Object_oTransition_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 **ppuVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  bool bVar12;
  ulonglong uVar13;
  undefined1 *local_res8;
  code *pcVar14;
  undefined4 uVar15;
  ulonglong in_stack_fffffffffffffec0;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  ulonglong local_108;
  uint local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined1 *local_70;
  undefined4 uStack_64;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_80 = "gml_Script_anon@77@gml_Object_oTrainingDummy_Create_0";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 6;
  FUN_140041df0(local_48,param_4,1,param_5);
  pcVar14 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_98,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_bc = 0xffffff;
  local_c8 = (undefined1 *)0x0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 6;
  puVar11 = &DAT_1419df7b0;
  uVar10 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*local_40;
  }
  iVar5 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 == 0) {
    local_78 = 6;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    if ((int)local_48[0] < 1) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)*local_40;
    }
    in_stack_fffffffffffffec0 = 0;
    pcVar14 = (code *)CONCAT44((int)((ulonglong)pcVar14 >> 0x20),DAT_1419fd6d8);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_128,0,pcVar14,0);
    if (puVar6 != puVar9) {
      local_118 = (undefined1 *)*puVar6;
      uStack_110 = *(undefined4 *)(puVar6 + 1);
      uStack_10c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_118);
    }
  }
  local_78 = 8;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if ((int)local_48[0] < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*local_40;
  }
  in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
  uVar13 = (ulonglong)pcVar14 & 0xffffffffffffff00;
  FUN_140e87440(puVar9,DAT_141a1f4e0,0x80000000,&local_c8,uVar13,in_stack_fffffffffffffec0);
  local_118 = local_c8;
  uStack_110 = uStack_c0;
  uStack_10c = uStack_bc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_118);
  local_res8 = local_98;
  uStack_12c = 6;
  uVar13 = uVar13 & 0xffffffffffffff00;
  local_138 = param_1;
  FUN_140e87440(&local_138,DAT_1419fe0e8,0x80000000,&local_a8,uVar13,
                in_stack_fffffffffffffec0 & 0xffffffffffffff00);
  uVar15 = (undefined4)(uVar13 >> 0x20);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  ppuVar8 = &local_res8;
  uVar13 = CONCAT44(uVar15,DAT_141a02ef8);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar13,ppuVar8);
  cVar4 = FUN_140e491e0(uVar7);
  if (cVar4 == '\0') {
    if (0 < (int)local_48[0]) {
      puVar11 = (undefined8 *)*local_40;
    }
    FUN_140e87170(puVar11,DAT_1419fe0e8,0x80000000,&local_f8,param_1,param_2);
    local_ac = local_ec;
    local_b0 = local_f0;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
      local_b8 = local_f8;
    }
    else {
      FUN_1400419b0(&local_b8,&local_f8);
    }
    puVar11 = &local_b8;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    if (0 < (int)local_48[0]) {
      puVar11 = (undefined8 *)*local_40;
    }
    FUN_140e87440(puVar11,DAT_141a1f4e0,0x80000000,&local_c8,uVar13 & 0xffffffffffffff00,
                  (ulonglong)ppuVar8 & 0xffffffffffffff00);
    FUN_140e87170(&local_c8,DAT_1419fe0e8,0x80000000,&local_e8,param_1,param_2);
    uStack_12c = local_dc;
    uStack_130 = local_e0;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
      local_138 = local_e8;
    }
    else {
      FUN_1400419b0(&local_138,&local_e8);
    }
    puVar11 = &local_138;
    bVar2 = true;
    bVar1 = false;
  }
  iVar5 = FUN_140e851f0(puVar11,&local_a8,DAT_141955260,1);
  bVar12 = iVar5 == -2 || -1 < iVar5;
  if (bVar12) {
    uStack_64 = 0;
    local_70 = &DAT_bff0000000000000;
    ppuVar8 = &local_70;
  }
  else {
    uStack_10c = 0;
    local_118 = (undefined1 *)0x3ff0000000000000;
    ppuVar8 = &local_118;
  }
  uVar3 = uStack_64;
  uVar15 = uStack_10c;
  local_58 = *(undefined4 *)ppuVar8;
  uStack_54 = *(undefined4 *)((longlong)ppuVar8 + 4);
  uStack_50 = *(undefined4 *)(ppuVar8 + 1);
  uStack_4c = *(undefined4 *)((longlong)ppuVar8 + 0xc);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_58);
  if ((bVar12) && ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_70);
  }
  if ((iVar5 != -2 && -1 >= iVar5) && ((1 << ((byte)uVar15 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_118);
  }
  if ((bVar1) && ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_b8);
  }
  if ((bVar2) && ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_138);
  }
  local_78 = 10;
  uVar13 = local_108;
  if ((local_fc & 0xffffff) != 0) {
    uVar13 = FUN_140e4b060(&local_108);
  }
  uStack_10c = 0;
  local_118 = (undefined1 *)(uVar13 ^ 0x8000000000000000);
  uStack_12c = 0;
  local_138 = 0x4046800000000000;
  FUN_140042560(&local_138,&local_118);
  local_58 = (undefined4)local_138;
  uStack_54 = local_138._4_4_;
  uStack_50 = uStack_130;
  uStack_4c = uStack_12c;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_58);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_d8);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,1,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar11 = local_40;
    do {
      puVar9 = (undefined8 *)*puVar11;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      *puVar9 = 0;
      *(undefined4 *)(puVar9 + 1) = 0;
      *(undefined4 *)((longlong)puVar9 + 0xc) = 5;
      puVar11 = puVar11 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

