// gml_GlobalScript_BYTEMAP_draw @ 0x14023f7a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_GlobalScript_BYTEMAP_draw(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 **ppuVar10;
  undefined4 uVar12;
  undefined8 uVar11;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [16];
  double local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 *local_98;
  double *local_90;
  undefined1 *local_88;
  double local_80;
  uint local_74;
  undefined8 local_70;
  char *local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_68 = "gml_Script_BM_INPUTS";
  local_70 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_70;
  local_60 = 0xcf;
  _eh_vector_constructor_iterator_(local_d8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_74 = 0xffffff;
  local_80 = 0.0;
  local_ec = 0;
  uVar9 = 0;
  local_f8 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_60 = 0xd3;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a455f8);
  local_e8 = CONCAT44(uRam00000001419e3774,_DAT_1419e3770);
  uStack_e0 = uRam00000001419e3778;
  uStack_dc = uRam00000001419e377c;
  if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_e8);
  local_98 = local_d8;
  local_e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_e0 = DAT_1419df7b8;
  uStack_dc = DAT_1419df7bc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_e8);
  local_90 = &local_c8;
  FUN_140e609c0(param_1);
  puVar5 = (undefined8 *)gml_Script_InputPressedMany(param_1,param_2,&local_f8,2,&local_98);
  if (puVar5 != puVar4) {
    local_e8 = *puVar5;
    uStack_e0 = *(undefined4 *)(puVar5 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_e8);
  }
  FUN_140e60910(1);
  local_60 = 0xd4;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a45738);
  local_e8 = CONCAT44(uRam00000001419e37f4,_DAT_1419e37f0);
  uStack_e0 = uRam00000001419e37f8;
  uStack_dc = uRam00000001419e37fc;
  if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_e8);
  local_98 = local_d8;
  local_e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_e0 = DAT_1419df7b8;
  uStack_dc = DAT_1419df7bc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_e8);
  local_90 = &local_c8;
  FUN_140e609c0(param_1);
  puVar5 = (undefined8 *)gml_Script_InputPressedMany(param_1,param_2,&local_f8,2,&local_98);
  if (puVar5 != puVar4) {
    local_e8 = *puVar5;
    uStack_e0 = *(undefined4 *)(puVar5 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_e8);
  }
  FUN_140e60910(1);
  local_60 = 0xd5;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44be8);
  local_e8 = CONCAT44(uRam00000001419e3784,_DAT_1419e3780);
  uStack_e0 = uRam00000001419e3788;
  uStack_dc = uRam00000001419e378c;
  if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_e8);
  local_98 = local_d8;
  local_e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_e0 = DAT_1419df7b8;
  uStack_dc = DAT_1419df7bc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_e8);
  local_90 = &local_c8;
  FUN_140e609c0(param_1);
  puVar5 = (undefined8 *)gml_Script_InputPressedMany(param_1,param_2,&local_f8,2,&local_98);
  if (puVar5 != puVar4) {
    local_e8 = *puVar5;
    uStack_e0 = *(undefined4 *)(puVar5 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_e8);
  }
  FUN_140e60910(1);
  local_60 = 0xd6;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a45448);
  local_e8 = CONCAT44(uRam00000001419e3794,_DAT_1419e3790);
  uStack_e0 = uRam00000001419e3798;
  uStack_dc = uRam00000001419e379c;
  if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_e8);
  local_98 = local_d8;
  local_e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_e0 = DAT_1419df7b8;
  uStack_dc = DAT_1419df7bc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_e8);
  local_90 = &local_c8;
  FUN_140e609c0(param_1);
  puVar5 = (undefined8 *)gml_Script_InputPressedMany(param_1,param_2,&local_f8,2,&local_98);
  if (puVar5 != puVar4) {
    local_e8 = *puVar5;
    uStack_e0 = *(undefined4 *)(puVar5 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_e8);
  }
  FUN_140e60910(1);
  local_60 = 0xda;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a452d8);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  local_e8 = CONCAT44(uRam00000001419e37b4,_DAT_1419e37b0);
  uStack_e0 = uRam00000001419e37b8;
  uStack_dc = uRam00000001419e37bc;
  if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_e8);
  local_98 = local_d8;
  local_e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_e0 = DAT_1419df7b8;
  uStack_dc = DAT_1419df7bc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_e8);
  local_90 = &local_c8;
  ppuVar10 = &local_98;
  uVar7 = gml_Script_InputCheckMany(param_1,param_2,&local_f8,2,ppuVar10);
  uVar12 = (undefined4)((ulonglong)ppuVar10 >> 0x20);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    local_e8 = CONCAT44(uRam00000001419e37e4,_DAT_1419e37e0);
    uStack_e0 = uRam00000001419e37e8;
    uStack_dc = uRam00000001419e37ec;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_e8);
    local_88 = local_b8;
    uVar7 = FUN_140e634e0(param_1,param_2,&local_a8,1,CONCAT44(uVar12,DAT_141a02988),&local_88);
    cVar2 = FUN_140e491e0(uVar7);
  }
  else {
    cVar2 = '\x01';
  }
  FUN_140e609c0(param_1);
  if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(plVar6);
  }
  *(undefined4 *)((longlong)plVar6 + 0xc) = 0xd;
  if (cVar2 == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x3ff00000;
  }
  *plVar6 = (ulonglong)uVar8 << 0x20;
  FUN_140e60910(1);
  local_60 = 0xdb;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a449c8);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  local_e8 = CONCAT44(uRam00000001419e37b4,_DAT_1419e37b0);
  uStack_e0 = uRam00000001419e37b8;
  uStack_dc = uRam00000001419e37bc;
  if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_e8);
  local_98 = local_d8;
  local_e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_e0 = DAT_1419df7b8;
  uStack_dc = DAT_1419df7bc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_e8);
  local_90 = &local_c8;
  ppuVar10 = &local_98;
  uVar7 = gml_Script_InputPressedMany(param_1,param_2,&local_f8,2,ppuVar10);
  uVar12 = (undefined4)((ulonglong)ppuVar10 >> 0x20);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    local_e8 = CONCAT44(uRam00000001419e37e4,_DAT_1419e37e0);
    uStack_e0 = uRam00000001419e37e8;
    uStack_dc = uRam00000001419e37ec;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_e8);
    local_88 = local_b8;
    uVar7 = FUN_140e634e0(param_1,param_2,&local_a8,1,CONCAT44(uVar12,DAT_141a44e08),&local_88);
    cVar2 = FUN_140e491e0(uVar7);
  }
  else {
    cVar2 = '\x01';
  }
  FUN_140e609c0(param_1);
  if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(plVar6);
  }
  *(undefined4 *)((longlong)plVar6 + 0xc) = 0xd;
  if (cVar2 == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x3ff00000;
  }
  *plVar6 = (ulonglong)uVar8 << 0x20;
  FUN_140e60910(1);
  local_60 = 0xdc;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44908);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  local_e8 = CONCAT44(uRam00000001419e37b4,_DAT_1419e37b0);
  uStack_e0 = uRam00000001419e37b8;
  uStack_dc = uRam00000001419e37bc;
  if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_e8);
  local_98 = local_d8;
  local_e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_e0 = DAT_1419df7b8;
  uStack_dc = DAT_1419df7bc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_e8);
  local_90 = &local_c8;
  ppuVar10 = &local_98;
  uVar7 = gml_Script_InputReleasedMany(param_1,param_2,&local_f8,2,ppuVar10);
  uVar12 = (undefined4)((ulonglong)ppuVar10 >> 0x20);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    local_e8 = CONCAT44(uRam00000001419e37e4,_DAT_1419e37e0);
    uStack_e0 = uRam00000001419e37e8;
    uStack_dc = uRam00000001419e37ec;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_e8);
    local_88 = local_b8;
    uVar11 = CONCAT44(uVar12,DAT_141a44d98);
    uVar7 = FUN_140e634e0(param_1,param_2,&local_a8,1,uVar11,&local_88);
    uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
    cVar2 = FUN_140e491e0(uVar7);
  }
  else {
    cVar2 = '\x01';
  }
  FUN_140e609c0(param_1);
  if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(plVar6);
  }
  *(undefined4 *)((longlong)plVar6 + 0xc) = 0xd;
  if (cVar2 == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x3ff00000;
  }
  *plVar6 = (ulonglong)uVar8 << 0x20;
  FUN_140e60910(1);
  local_60 = 0xde;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a456c8);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  local_e8 = CONCAT44(uRam0000000141dc6334,_DAT_141dc6330);
  uStack_e0 = uRam0000000141dc6338;
  uStack_dc = uRam0000000141dc633c;
  if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_e8);
  local_98 = local_d8;
  local_e8 = CONCAT44(uRam00000001419e37d4,_DAT_1419e37d0);
  uStack_e0 = uRam00000001419e37d8;
  uStack_dc = uRam00000001419e37dc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_e8);
  local_90 = &local_c8;
  uVar11 = CONCAT44(uVar12,DAT_141a44d58);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_f8,2,uVar11,&local_98);
  cVar2 = FUN_140e491e0(uVar7);
  uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
  if (cVar2 == '\0') {
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    local_e8 = CONCAT44(uRam00000001419e37a4,_DAT_1419e37a0);
    uStack_e0 = uRam00000001419e37a8;
    uStack_dc = uRam00000001419e37ac;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_e8);
    local_88 = local_b8;
    uVar11 = CONCAT44(uVar12,DAT_141a44a08);
    uVar7 = FUN_140e634e0(param_1,param_2,&local_a8,1,uVar11,&local_88);
    cVar2 = FUN_140e491e0(uVar7);
  }
  else {
    cVar2 = '\x01';
  }
  FUN_140e609c0(param_1);
  if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(plVar6);
  }
  *(undefined4 *)((longlong)plVar6 + 0xc) = 0xd;
  if (cVar2 == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x3ff00000;
  }
  *plVar6 = (ulonglong)uVar8 << 0x20;
  FUN_140e60910(1);
  local_60 = 0xe0;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44c68);
  cVar2 = FUN_140eab100(1);
  uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
  if (cVar2 == '\0') {
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    local_e8 = CONCAT44(uRam0000000141dc6334,_DAT_141dc6330);
    uStack_e0 = uRam0000000141dc6338;
    uStack_dc = uRam0000000141dc633c;
    if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_e8);
    local_98 = local_d8;
    local_e8 = CONCAT44(uRam00000001419e37c4,_DAT_1419e37c0);
    uStack_e0 = uRam00000001419e37c8;
    uStack_dc = uRam00000001419e37cc;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_e8);
    local_90 = &local_c8;
    uVar11 = CONCAT44(uVar12,DAT_141a44ad8);
    uVar7 = FUN_140e634e0(param_1,param_2,&local_f8,2,uVar11,&local_98);
    cVar2 = FUN_140e491e0(uVar7);
  }
  else {
    cVar2 = '\x01';
  }
  FUN_140e609c0(param_1);
  if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(plVar6);
  }
  *(undefined4 *)((longlong)plVar6 + 0xc) = 0xd;
  if (cVar2 != '\0') {
    uVar9 = 0x3ff00000;
  }
  *plVar6 = (ulonglong)uVar9 << 0x20;
  FUN_140e60910(1);
  local_60 = 0xe3;
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  local_74 = 0;
  local_80 = 32769.0;
  bVar1 = true;
  do {
    uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
    if (!bVar1) {
      local_60 = 0xe3;
      uVar9 = local_74 & 0xffffff;
      if (uVar9 != 0) {
        if (uVar9 != 1) {
          if (uVar9 == 7) {
            local_80 = (double)CONCAT44(local_80._4_4_,local_80._0_4_ + 1);
          }
          else if (uVar9 == 10) {
            local_80 = (double)((longlong)local_80 + 1);
          }
          else {
            if (uVar9 == 0xd) {
              local_74 = 0;
              goto LAB_140240559;
            }
            FUN_140042910(&DAT_14172c3d8,&local_80,&local_80);
          }
          goto LAB_140240562;
        }
        local_80 = (double)FUN_140e4b060(&local_80);
        local_74 = 0;
      }
LAB_140240559:
      local_80 = local_80 + 1.0;
    }
LAB_140240562:
    bVar1 = false;
    uStack_dc = 0;
    local_e8 = 0x40e0028000000000;
    iVar3 = FUN_140e851f0(&local_80,&local_e8,DAT_141955260,1);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    if (iVar3 == -2 || -1 < iVar3) {
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_80);
      }
      _eh_vector_destructor_iterator_(local_d8,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_70;
      return param_3;
    }
    local_60 = 0xe4;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    local_58 = _DAT_141dc6330;
    uStack_54 = uRam0000000141dc6334;
    uStack_50 = uRam0000000141dc6338;
    uStack_4c = uRam0000000141dc633c;
    if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_58);
    local_98 = local_d8;
    local_90 = &local_80;
    uVar11 = CONCAT44(uVar12,DAT_141a44ad8);
    uVar7 = FUN_140e634e0(param_1,param_2,&local_f8,2,uVar11,&local_98);
    cVar2 = FUN_140e491e0(uVar7);
    if (cVar2 != '\0') {
      local_60 = 0xe5;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44c68);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *puVar4 = 0x3ff0000000000000;
    }
  } while( true );
}

