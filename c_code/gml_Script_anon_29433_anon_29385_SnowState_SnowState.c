// gml_Script_anon_29433_anon_29385_SnowState_SnowState @ 0x14050f200

undefined8 *
gml_Script_anon_29433_anon_29385_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_d8;
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  local_f0 = "gml_Script_anon@28896@SnowState@SnowState";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x3a3;
  FUN_140041df0(local_68,param_4,5,param_5);
  _eh_vector_constructor_iterator_(&local_d8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x3a3;
  puVar4 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_60[2];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_e8 = 0x3a3;
    FUN_140e645a0(&local_78,&LAB_14050f1d0,param_1);
    if ((int)local_68[0] < 3) {
      puVar3 = &DAT_1419df7b0;
LAB_14050f322:
      local_118 = (undefined4)local_78;
      uStack_114 = local_78._4_4_;
      uStack_110 = uStack_70;
      uStack_10c = uStack_6c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_118);
    }
    else {
      puVar3 = (undefined8 *)local_60[2];
      if (&local_78 != puVar3) goto LAB_14050f322;
    }
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
  }
  if ((int)local_68[0] < 4) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_60[3];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar1 == 0) && (3 < (int)local_68[0])) &&
     (puVar3 = (undefined8 *)local_60[3], puVar3 != &DAT_1419df7b0)) {
    local_118 = (undefined4)DAT_1419df7b0;
    uStack_114 = DAT_1419df7b0._4_4_;
    uStack_110 = DAT_1419df7b8;
    uStack_10c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_118);
  }
  if ((int)local_68[0] < 5) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_60[4];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar1 == 0) && (4 < (int)local_68[0])) &&
     (puVar3 = (undefined8 *)local_60[4], puVar3 != &DAT_1419df7b0)) {
    local_118 = (undefined4)DAT_1419df7b0;
    uStack_114 = DAT_1419df7b0._4_4_;
    uStack_110 = DAT_1419df7b8;
    uStack_10c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_118);
  }
  local_e8 = 0x3a4;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcd58);
  if ((int)local_68[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_14050f498:
    local_118 = *(undefined4 *)puVar3;
    uStack_114 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_110 = *(undefined4 *)(puVar3 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_118);
  }
  else {
    puVar3 = (undefined8 *)*local_60;
    if (puVar3 != &local_d8) goto LAB_14050f498;
  }
  local_58 = &local_d8;
  local_118 = (undefined4)DAT_141dd39a8;
  uStack_114 = DAT_141dd39a8._4_4_;
  uStack_110 = DAT_141dd39b0;
  uStack_10c = DAT_141dd39b4;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_118);
  local_50 = local_c8;
  if ((int)local_68[0] < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_14050f527:
    local_118 = *(undefined4 *)puVar3;
    uStack_114 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_110 = *(undefined4 *)(puVar3 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_118);
  }
  else {
    puVar3 = (undefined8 *)local_60[1];
    if (puVar3 != &local_b8) goto LAB_14050f527;
  }
  local_48 = &local_b8;
  if ((int)local_68[0] < 3) {
    puVar3 = &DAT_1419df7b0;
LAB_14050f576:
    local_118 = *(undefined4 *)puVar3;
    uStack_114 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_110 = *(undefined4 *)(puVar3 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_118);
  }
  else {
    puVar3 = (undefined8 *)local_60[2];
    if (puVar3 != &local_a8) goto LAB_14050f576;
  }
  local_40 = &local_a8;
  if ((int)local_68[0] < 4) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_60[3];
    if (puVar3 == &local_98) goto LAB_14050f5f5;
  }
  local_118 = *(undefined4 *)puVar3;
  uStack_114 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_110 = *(undefined4 *)(puVar3 + 1);
  uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_118);
LAB_14050f5f5:
  local_38 = &local_98;
  if (((int)local_68[0] < 5) || (puVar4 = (undefined8 *)local_60[4], puVar4 != &local_88)) {
    local_118 = *(undefined4 *)puVar4;
    uStack_114 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_110 = *(undefined4 *)(puVar4 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_118);
  }
  local_30 = &local_88;
  puVar4 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_108,6,uVar2,&local_58);
  if (puVar4 != param_3) {
    local_118 = *(undefined4 *)puVar4;
    uStack_114 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_110 = *(undefined4 *)(puVar4 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,6,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    puVar4 = local_60;
    do {
      puVar3 = (undefined8 *)*puVar4;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

