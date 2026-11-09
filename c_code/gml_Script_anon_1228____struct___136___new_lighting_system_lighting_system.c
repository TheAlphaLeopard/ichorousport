// gml_Script_anon_1228____struct___136___new_lighting_system_lighting_system @ 0x1403a29b0

undefined8 *
gml_Script_anon_1228____struct___136___new_lighting_system_lighting_system
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 **ppuVar9;
  byte bVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  byte local_84;
  uint local_70 [2];
  undefined8 *local_68;
  undefined8 *local_60 [4];
  
  local_b0 = "gml_Script_lighting_strength_pulse";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 10;
  FUN_140041df0(local_70,param_4,2,param_5);
  uVar14 = 1;
  _eh_vector_constructor_iterator_(&local_90,0x10,2,FUN_1400424d0,FUN_140041b30);
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f53f8);
  puVar6 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57b60);
  uStack_cc = 0xffffff;
  local_d8 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f5098);
  local_a0 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f5488);
  local_98 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f5358);
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 10;
  puVar12 = &DAT_1419df7b0;
  uVar13 = (ulonglong)local_70[0];
  if ((int)local_70[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*local_68;
  }
  iVar4 = FUN_140e851f0(puVar11,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_a8 = 10;
    if ((int)local_70[0] < 1) {
      puVar11 = &DAT_1419df7b0;
    }
    else {
      puVar11 = (undefined8 *)*local_68;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
    *puVar11 = 0x3fe999999999999a;
  }
  if ((int)local_70[0] < 2) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)local_68[1];
  }
  iVar4 = FUN_140e851f0(puVar11,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    if ((int)local_70[0] < 2) {
      puVar11 = &DAT_1419df7b0;
    }
    else {
      puVar11 = (undefined8 *)local_68[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
    *puVar11 = 0x403e000000000000;
  }
  local_a8 = 0xc;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  if (puVar5 != &local_90) {
    local_108 = (undefined8 *)*puVar5;
    uStack_100 = *(undefined4 *)(puVar5 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    FUN_140041b80(&local_90,&local_108);
  }
  local_60[0] = &local_90;
  uVar8 = FUN_140e634e0(param_1,param_2,&local_e8,1,CONCAT44(uVar14,DAT_1419fdc08),local_60);
  cVar3 = FUN_140e491e0(uVar8);
  if (cVar3 == '\0') {
    uStack_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_100 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_108 = (undefined8 *)*puVar5;
    }
    else {
      FUN_1400419b0(&local_108,puVar5);
    }
    ppuVar9 = (undefined8 **)&local_108;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    uStack_ec = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_f0 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_f8 = (undefined8 *)*puVar6;
    }
    else {
      FUN_1400419b0(&local_f8,puVar6);
    }
    ppuVar9 = &local_f8;
    bVar2 = true;
    bVar1 = false;
  }
  local_c8 = *(undefined4 *)ppuVar9;
  uStack_c4 = *(undefined4 *)((longlong)ppuVar9 + 4);
  uStack_c0 = *(undefined4 *)(ppuVar9 + 1);
  uStack_bc = *(undefined4 *)((longlong)ppuVar9 + 0xc);
  FUN_140041b80(&local_d8,&local_c8);
  if (bVar1) {
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
  }
  if (bVar2) {
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
  }
  local_a8 = 0xe;
  FUN_140e609c0(DAT_141a729d8);
  if (&local_d8 != puVar5) {
    local_c8 = (undefined4)local_d8;
    uStack_c4 = local_d8._4_4_;
    uStack_c0 = uStack_d0;
    uStack_bc = uStack_cc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_c8);
  }
  FUN_140e60910(1);
  local_a8 = 0xf;
  FUN_140e609c0(DAT_141a729d8);
  if ((int)local_70[0] < 1) {
    local_f8 = &DAT_1419df7b0;
  }
  else {
    local_f8 = (undefined8 *)*local_68;
  }
  uStack_fc = uStack_cc;
  uStack_100 = uStack_d0;
  bVar10 = (byte)uStack_cc & 0x1f;
  if ((1 << bVar10 & 0x46U) == 0) {
    local_108 = local_d8;
  }
  else {
    FUN_1400419b0(&local_108,&local_d8);
  }
  FUN_140042560(&local_108,local_f8);
  if (&local_108 != puVar7) {
    local_c8 = (undefined4)local_108;
    uStack_c4 = local_108._4_4_;
    uStack_c0 = uStack_100;
    uStack_bc = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_c8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_a8 = 0x10;
  FUN_140e609c0(DAT_141a729d8);
  if (puVar7 != puVar6) {
    local_c8 = *(undefined4 *)puVar7;
    uStack_c4 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_c0 = *(undefined4 *)(puVar7 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_c8);
  }
  FUN_140e60910(1);
  puVar5 = local_a0;
  local_a8 = 0x11;
  if ((1 << ((byte)*(undefined4 *)((longlong)local_a0 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a0);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_a8 = 0x12;
  FUN_140e609c0(DAT_141a729d8);
  puVar5 = local_98;
  if (1 < (int)local_70[0]) {
    puVar12 = (undefined8 *)local_68[1];
  }
  if (puVar12 != local_98) {
    local_c8 = *(undefined4 *)puVar12;
    uStack_c4 = *(undefined4 *)((longlong)puVar12 + 4);
    uStack_c0 = *(undefined4 *)(puVar12 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar12 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)local_98 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(puVar5,&local_c8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << bVar10 & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_90,0x10,2,FUN_140041b30);
  if (0 < (int)local_70[0]) {
    puVar12 = local_68;
    do {
      puVar5 = (undefined8 *)*puVar12;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar12 = puVar12 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  FUN_140e4cd60(local_68);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

