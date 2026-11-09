// gml_Script_anon_2934_Attribute_OFFERINGSINIT @ 0x1403c0ed0

undefined8 *
gml_Script_anon_2934_Attribute_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint *puVar7;
  undefined4 uVar9;
  undefined8 uVar8;
  undefined8 local_e8;
  uint uStack_e0;
  uint uStack_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  uint local_a0 [2];
  undefined8 *local_98;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 *local_48 [4];
  
  local_b0 = "gml_Script_Offering";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 3;
  FUN_140041df0(local_a0,param_4,4,param_5);
  uVar9 = 1;
  _eh_vector_constructor_iterator_(local_88,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddeb68) &&
     (_Init_thread_header(&DAT_141ddeb68), DAT_141ddeb68 == -1)) {
    DAT_141ddeb40 = FUN_140e63aa0(DAT_1419f5b58);
    _Init_thread_footer(&DAT_141ddeb68);
  }
  local_a8 = 3;
  puVar7 = (uint *)&DAT_1419df7b0;
  uVar6 = (ulonglong)local_a0[0];
  if ((int)local_a0[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_98;
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_a8 = 3;
    if ((int)local_a0[0] < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*local_98;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  if ((int)local_a0[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_98[1];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    local_d8 = DAT_1419f6148 & 0xffffff;
    uStack_d4 = (int)(DAT_1419f6148 | 0x5000000) >> 0x18 & 0xff;
    if (uStack_d4 == 0xf) {
      uStack_d4 = 0x4000004;
    }
    else {
      uStack_d4 = uStack_d4 | 0x1000000;
    }
    uStack_dc = 0xf;
    local_e8 = CONCAT44(uStack_d4,DAT_1419f6148) & 0xffffffff00ffffff;
    uStack_d0 = uStack_e0;
    uStack_cc = 0xf;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_d8);
    local_48[0] = local_88;
    if ((int)local_a0[0] < 2) {
      puVar4 = (uint *)&DAT_1419df7b0;
    }
    else {
      puVar4 = (uint *)local_98[1];
    }
    uVar8 = CONCAT44(uVar9,DAT_1419fd6d8);
    puVar3 = (uint *)FUN_140e634e0(param_1,param_2,&local_c8,1,uVar8,local_48);
    uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (puVar3 != puVar4) {
      local_d8 = *puVar3;
      uStack_d4 = puVar3[1];
      uStack_d0 = puVar3[2];
      uStack_cc = puVar3[3];
      if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_d8);
    }
  }
  if ((int)local_a0[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_98[2];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    local_d8 = DAT_1419f5e28 & 0xffffff;
    uStack_d4 = (int)(DAT_1419f5e28 | 0x5000000) >> 0x18 & 0xff;
    if (uStack_d4 == 0xf) {
      uStack_d4 = 0x4000004;
    }
    else {
      uStack_d4 = uStack_d4 | 0x1000000;
    }
    uStack_dc = 0xf;
    local_e8 = CONCAT44(uStack_d4,DAT_1419f5e28) & 0xffffffff00ffffff;
    uStack_d0 = uStack_e0;
    uStack_cc = 0xf;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_d8);
    local_48[0] = local_88;
    if ((int)local_a0[0] < 3) {
      puVar4 = (uint *)&DAT_1419df7b0;
    }
    else {
      puVar4 = (uint *)local_98[2];
    }
    puVar3 = (uint *)FUN_140e634e0(param_1,param_2,&local_c8,1,CONCAT44(uVar9,DAT_1419fd6d8),
                                   local_48);
    if (puVar3 != puVar4) {
      local_d8 = *puVar3;
      uStack_d4 = puVar3[1];
      uStack_d0 = puVar3[2];
      uStack_cc = puVar3[3];
      if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_d8);
    }
  }
  if ((int)local_a0[0] < 4) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_98[3];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_a0[0] < 4) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_98[3];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = &DAT_bff0000000000000;
  }
  FUN_140e643a0(param_1,DAT_141ddeb40);
  local_a8 = 5;
  puVar4 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6238);
  FUN_140e609c0(param_1);
  if ((int)local_a0[0] < 1) {
    puVar3 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar3 = (uint *)*local_98;
  }
  if (puVar3 != puVar4) {
    local_d8 = *puVar3;
    uStack_d4 = puVar3[1];
    uStack_d0 = puVar3[2];
    uStack_cc = puVar3[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_d8);
  }
  FUN_140e60910(1);
  local_a8 = 7;
  puVar4 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ca8);
  FUN_140e609c0(param_1);
  if ((int)local_a0[0] < 2) {
    puVar3 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar3 = (uint *)local_98[1];
  }
  if (puVar3 != puVar4) {
    local_d8 = *puVar3;
    uStack_d4 = puVar3[1];
    uStack_d0 = puVar3[2];
    uStack_cc = puVar3[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_d8);
  }
  FUN_140e60910(1);
  local_a8 = 8;
  puVar4 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5d58);
  FUN_140e609c0(param_1);
  if ((int)local_a0[0] < 3) {
    puVar3 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar3 = (uint *)local_98[2];
  }
  if (puVar3 != puVar4) {
    local_d8 = *puVar3;
    uStack_d4 = puVar3[1];
    uStack_d0 = puVar3[2];
    uStack_cc = puVar3[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_d8);
  }
  FUN_140e60910(1);
  local_a8 = 9;
  puVar4 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ea8);
  FUN_140e609c0(param_1);
  if (3 < (int)local_a0[0]) {
    puVar7 = (uint *)local_98[3];
  }
  if (puVar7 != puVar4) {
    local_d8 = *puVar7;
    uStack_d4 = puVar7[1];
    uStack_d0 = puVar7[2];
    uStack_cc = puVar7[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_d8);
  }
  FUN_140e60910(1);
  local_a8 = 0xb;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6048);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_e8,gml_Script_anon_829_Offering_OFFERINGSINIT,param_1);
  if (&local_e8 != puVar5) {
    local_d8 = (uint)local_e8;
    uStack_d4 = local_e8._4_4_;
    uStack_d0 = uStack_e0;
    uStack_cc = uStack_dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_d8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140e60910(1);
  local_a8 = 0x11;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5a28);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_e8,gml_Script_anon_1923_Offering_OFFERINGSINIT,param_1);
  if (&local_e8 != puVar5) {
    local_d8 = (uint)local_e8;
    uStack_d4 = local_e8._4_4_;
    uStack_d0 = uStack_e0;
    uStack_cc = uStack_dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_d8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140e60910(1);
  local_a8 = 0x1b;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05028);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_e8,gml_Script_Offering,param_1);
  if (&local_e8 != puVar5) {
    local_d8 = (uint)local_e8;
    uStack_d4 = local_e8._4_4_;
    uStack_d0 = uStack_e0;
    uStack_cc = uStack_dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_d8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140e60910(1);
  local_a8 = 0x3b;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f61f8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_e8,gml_Script_anon_2793_Attribute_OFFERINGSINIT,param_1);
  if (&local_e8 != puVar5) {
    local_d8 = (uint)local_e8;
    uStack_d4 = local_e8._4_4_;
    uStack_d0 = uStack_e0;
    uStack_cc = uStack_dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_d8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,4,FUN_140041b30);
  if (0 < (int)local_a0[0]) {
    puVar5 = local_98;
    do {
      puVar1 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_98);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

