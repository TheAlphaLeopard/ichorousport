// gml_Script_get_level_flavor_key @ 0x140417f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_get_level_flavor_key
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined4 local_98 [3];
  byte local_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined4 *local_58;
  undefined4 *local_50 [3];
  
  local_b0 = "gml_Script_PatronChain";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x66;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_98,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_cc = 0;
  local_d8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddeb88) {
    _Init_thread_header(&DAT_141ddeb88);
    if (DAT_141ddeb88 == -1) {
      DAT_141ddeb98 = FUN_140e63aa0(DAT_1419f6328);
      _Init_thread_footer(&DAT_141ddeb88);
    }
  }
  FUN_140e643a0(param_1,DAT_141ddeb98);
  local_a8 = 0x68;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f0d0);
  FUN_140e609c0(param_1);
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
  }
  if (puVar2 != puVar1) {
    local_f8 = *puVar2;
    uStack_f0 = *(undefined4 *)(puVar2 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  FUN_140e60910(1);
  local_a8 = 0x69;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f62f8);
  FUN_140e609c0(param_1);
  if (param_4 < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
  }
  if (puVar2 != puVar1) {
    local_f8 = *puVar2;
    uStack_f0 = *(undefined4 *)(puVar2 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  FUN_140e60910(1);
  local_a8 = 0x6a;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6398);
  FUN_140e609c0(param_1);
  if (param_4 < 3) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[2];
  }
  if (puVar2 != puVar1) {
    local_f8 = *puVar2;
    uStack_f0 = *(undefined4 *)(puVar2 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  FUN_140e60910(1);
  local_a8 = 0x6b;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f63b8);
  FUN_140e609c0(param_1);
  if (3 < param_4) {
    puVar6 = (undefined8 *)param_5[3];
  }
  if (puVar6 != puVar1) {
    local_f8 = *puVar6;
    uStack_f0 = *(undefined4 *)(puVar6 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  FUN_140e60910(1);
  local_a8 = 0x6d;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a9f8);
  FUN_140e609c0(param_1);
  uStack_ec = 0xf;
  local_f8 = 0x100000100000326;
  if (&local_f8 != puVar6) {
    local_e8 = 0x326;
    uStack_e4 = 0x1000001;
    uStack_e0 = uStack_f0;
    uStack_dc = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_e8);
  }
  FUN_140e60910(1);
  local_a8 = 0x6e;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a9f8);
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6348);
  if (puVar3 != local_98) {
    local_e8 = *puVar3;
    uStack_e4 = puVar3[1];
    uStack_e0 = puVar3[2];
    uStack_dc = puVar3[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_e8);
  }
  local_58 = local_98;
  if (puVar3 != local_88) {
    local_e8 = *puVar3;
    uStack_e4 = puVar3[1];
    uStack_e0 = puVar3[2];
    uStack_dc = puVar3[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_e8);
  }
  local_50[0] = local_88;
  FUN_140e609c0(param_1);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_c8,1,CONCAT44(uVar7,DAT_141a04788),local_50);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_d8,1,DAT_141a047c8,&local_58);
  uStack_ec = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_f0 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
    local_f8 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_f8,puVar1);
  }
  FUN_1400462a0(&local_f8,uVar4);
  if (&local_f8 != puVar6) {
    local_e8 = (undefined4)local_f8;
    uStack_e4 = local_f8._4_4_;
    uStack_e0 = uStack_f0;
    uStack_dc = uStack_ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_e8);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140e60910(1);
  local_a8 = 0x70;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1dbd0);
  local_e8 = _DAT_141dc6570;
  uStack_e4 = uRam0000000141dc6574;
  uStack_e0 = uRam0000000141dc6578;
  uStack_dc = uRam0000000141dc657c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_e8);
  local_58 = local_98;
  local_e8 = _DAT_141dc6570;
  uStack_e4 = uRam0000000141dc6574;
  uStack_e0 = uRam0000000141dc6578;
  uStack_dc = uRam0000000141dc657c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_e8);
  local_50[0] = local_88;
  FUN_140e609c0(param_1);
  puVar5 = (undefined4 *)FUN_14040fdc0(param_1,param_2,&local_d8,2,&local_58);
  if (puVar5 != puVar3) {
    local_e8 = *puVar5;
    uStack_e4 = puVar5[1];
    uStack_e0 = puVar5[2];
    uStack_dc = puVar5[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_e8);
  }
  FUN_140e60910(1);
  local_a8 = 0x71;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6378);
  local_e8 = _DAT_141dc6570;
  uStack_e4 = uRam0000000141dc6574;
  uStack_e0 = uRam0000000141dc6578;
  uStack_dc = uRam0000000141dc657c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_e8);
  local_58 = local_98;
  local_e8 = _DAT_141dc6570;
  uStack_e4 = uRam0000000141dc6574;
  uStack_e0 = uRam0000000141dc6578;
  uStack_dc = uRam0000000141dc657c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_e8);
  local_50[0] = local_88;
  FUN_140e609c0(param_1);
  puVar5 = (undefined4 *)FUN_14040fdc0(param_1,param_2,&local_d8,2,&local_58);
  if (puVar5 != puVar3) {
    local_e8 = *puVar5;
    uStack_e4 = puVar5[1];
    uStack_e0 = puVar5[2];
    uStack_dc = puVar5[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_e8);
  }
  FUN_140e60910(1);
  local_a8 = 0x73;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a968);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_f8,gml_Script_PatronChain,param_1);
  if (&local_f8 != puVar6) {
    local_e8 = (undefined4)local_f8;
    uStack_e4 = local_f8._4_4_;
    uStack_e0 = uStack_f0;
    uStack_dc = uStack_ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_e8);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140e60910(1);
  local_a8 = 0x83;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05028);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_f8,gml_GlobalScript_PatronLevelFlavor,param_1);
  if (&local_f8 != puVar6) {
    local_e8 = (undefined4)local_f8;
    uStack_e4 = local_f8._4_4_;
    uStack_e0 = uStack_f0;
    uStack_dc = uStack_ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_e8);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

