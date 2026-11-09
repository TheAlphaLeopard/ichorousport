// gml_Script_InputPlayerHasDeviceCount @ 0x14034c630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_InputPlayerHasDeviceCount
          (undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  uint local_58 [2];
  undefined8 *local_50;
  
  local_90 = "gml_Script_InputPlayerHasDevice";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 7;
  FUN_140041df0(local_58,param_4,1,param_5);
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_108,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_10c = 0;
  local_118 = 0;
  local_9c = 0;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 7;
  puVar7 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_50;
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_88 = 7;
    if ((int)local_58[0] < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*local_50;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  local_88 = 5;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  if ((int)local_58[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14034c7bf:
    local_128 = (undefined1 *)*puVar5;
    uStack_120 = *(undefined4 *)(puVar5 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_128);
  }
  else {
    puVar5 = (undefined8 *)*local_50;
    if (puVar5 != &local_108) goto LAB_14034c7bf;
  }
  local_80 = &local_108;
  uVar10 = CONCAT44(uVar8,DAT_141a014a8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_118,1,uVar10,&local_80);
  uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  uVar8 = 0;
  if (cVar1 == '\0') {
    local_88 = 0xb;
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    if ((int)local_58[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_14034c88c:
      local_128 = (undefined1 *)*puVar5;
      uStack_120 = *(undefined4 *)(puVar5 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_128);
    }
    else {
      puVar5 = (undefined8 *)*local_50;
      if (puVar5 != &local_f8) goto LAB_14034c88c;
    }
    local_78 = &local_f8;
    local_128 = (undefined1 *)CONCAT44(uRam0000000141dd0dcc,_DAT_141dd0dc8);
    uStack_120 = uRam0000000141dd0dd0;
    uStack_11c = DAT_141dd0dd4;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_128);
    local_70 = local_e8;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_b8,1,CONCAT44(uVar11,DAT_1419fdc58),&local_78);
    if (puVar5 != &local_d8) {
      local_128 = (undefined1 *)*puVar5;
      uStack_120 = *(undefined4 *)(puVar5 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_128);
    }
    local_68 = &local_d8;
    local_128 = (undefined1 *)CONCAT44(uRam0000000141dd0e0c,_DAT_141dd0e08);
    uStack_120 = uRam0000000141dd0e10;
    uStack_11c = DAT_141dd0e14;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_128);
    local_60 = local_c8;
    FUN_14008e020(param_1,param_2,&local_a8,3,&local_70);
    uVar8 = local_9c;
  }
  local_88 = 0xe;
  if ((int)local_58[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_50;
  }
  uStack_11c = 0;
  uVar9 = 0x3ff00000;
  local_128 = (undefined1 *)0x3ff0000000000000;
  uVar3 = FUN_140e851f0(puVar5,&local_128,DAT_141955260,1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (uVar3 < 0x80000000) {
    local_88 = 0xe;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    local_128 = (undefined1 *)CONCAT44(uRam0000000141dd0dbc,_DAT_141dd0db8);
    uStack_120 = uRam0000000141dd0dc0;
    uStack_11c = DAT_141dd0dc4;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_128);
    local_80 = &local_108;
    if ((int)local_58[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_14034caca:
      local_128 = (undefined1 *)*puVar5;
      uStack_120 = *(undefined4 *)(puVar5 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_128);
    }
    else {
      puVar5 = (undefined8 *)*local_50;
      if (puVar5 != &local_f8) goto LAB_14034caca;
    }
    local_78 = &local_f8;
    local_128 = (undefined1 *)CONCAT44(uRam0000000141dd0dec,_DAT_141dd0de8);
    uStack_120 = uRam0000000141dd0df0;
    uStack_11c = DAT_141dd0df4;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_128);
    local_70 = local_e8;
    local_128 = (undefined1 *)CONCAT44(uRam00000001419e4264,_DAT_1419e4260);
    uStack_120 = uRam00000001419e4268;
    uStack_11c = uRam00000001419e426c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_128);
    local_68 = &local_d8;
    local_128 = (undefined1 *)CONCAT44(uRam0000000141dd0dfc,_DAT_141dd0df8);
    uStack_120 = uRam0000000141dd0e00;
    uStack_11c = DAT_141dd0e04;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_128);
    local_60 = local_c8;
    FUN_14008e020(param_1,param_2,&local_118,5,&local_80);
  }
  if ((int)local_58[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_50;
  }
  uStack_11c = 0;
  local_128 = (undefined1 *)0x0;
  iVar2 = FUN_140e851f0(puVar5,&local_128,DAT_141955260,1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (iVar2 == -2 || -1 < iVar2) goto LAB_14034cd6a;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  local_128 = (undefined1 *)CONCAT44(uRam0000000141dd0dbc,_DAT_141dd0db8);
  uStack_120 = uRam0000000141dd0dc0;
  uStack_11c = DAT_141dd0dc4;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_128);
  local_80 = &local_108;
  if ((int)local_58[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14034ccc5:
    local_128 = (undefined1 *)*puVar5;
    uStack_120 = *(undefined4 *)(puVar5 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_128);
  }
  else {
    puVar5 = (undefined8 *)*local_50;
    if (puVar5 != &local_f8) goto LAB_14034ccc5;
  }
  local_78 = &local_f8;
  local_128 = (undefined1 *)CONCAT44(uRam0000000141dd0ddc,_DAT_141dd0dd8);
  uStack_120 = uRam0000000141dd0de0;
  uStack_11c = DAT_141dd0de4;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_128);
  local_70 = local_e8;
  FUN_14008e020(param_1,param_2,&local_118,3,&local_80);
LAB_14034cd6a:
  local_88 = 0xb;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  if (((int)local_58[0] < 1) || (puVar7 = (undefined8 *)*local_50, puVar7 != &local_108)) {
    local_128 = (undefined1 *)*puVar7;
    uStack_120 = *(undefined4 *)(puVar7 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_128);
  }
  local_80 = &local_108;
  uVar4 = gml_Script_InputPlayerGetGamepadType(param_1,param_2,&local_118,1,&local_80);
  uStack_11c = 0;
  local_128 = &DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(uVar4,&local_128,DAT_141955260,0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (iVar2 == 0) {
    uVar9 = 0;
  }
  *param_3 = (ulonglong)uVar9 << 0x20;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,5,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar7 = local_50;
    do {
      puVar5 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

