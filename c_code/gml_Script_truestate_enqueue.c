// gml_Script_truestate_enqueue @ 0x140628450

undefined8 *
gml_Script_truestate_enqueue
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  
  local_80 = "gml_Script_truestate_create_state";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x26;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_108,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_9c = 0;
  local_a8 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x29;
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00228);
  if (puVar4 != &local_108) {
    local_138 = *puVar4;
    uStack_130 = *(undefined4 *)(puVar4 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_138);
  }
  local_70 = &local_108;
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14062858a:
    local_138 = *puVar5;
    uStack_130 = *(undefined4 *)(puVar5 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_138);
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 != &local_f8) goto LAB_14062858a;
  }
  local_68 = &local_f8;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_1406285da:
    local_138 = *puVar5;
    uStack_130 = *(undefined4 *)(puVar5 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_138);
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
    if (puVar5 != &local_e8) goto LAB_1406285da;
  }
  local_60 = &local_e8;
  uVar6 = CONCAT44(uVar7,DAT_141a00078);
  FUN_140e634e0(param_1,param_2,&local_128,3,uVar6,&local_70);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_78 = 0x2a;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00238);
  if (puVar5 != &local_e8) {
    local_138 = *puVar5;
    uStack_130 = *(undefined4 *)(puVar5 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_138);
  }
  local_60 = &local_e8;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1406286cd:
    local_138 = *puVar5;
    uStack_130 = *(undefined4 *)(puVar5 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_138);
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 != &local_d8) goto LAB_1406286cd;
  }
  local_58 = &local_d8;
  if (param_4 < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[2];
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 != 0) {
    if (param_4 < 3) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)param_5[2];
    }
    uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_130 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_138 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_138);
    }
    puVar5 = &local_138;
    bVar2 = true;
    bVar1 = false;
    goto LAB_140628851;
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_1406287b8:
    local_b8 = *puVar5;
    uStack_b0 = *(undefined4 *)(puVar5 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_b8);
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
    if (puVar5 != &local_f8) goto LAB_1406287b8;
  }
  local_68 = &local_f8;
  uVar6 = CONCAT44(uVar7,DAT_1419f7628);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_118,1,uVar6,&local_68);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_b0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
    local_b8 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_b8,puVar5);
  }
  puVar5 = &local_b8;
  bVar2 = false;
  bVar1 = true;
LAB_140628851:
  local_98 = *(undefined4 *)puVar5;
  uStack_94 = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_90 = *(undefined4 *)(puVar5 + 1);
  uStack_8c = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_98);
  if ((bVar1) && ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_b8);
  }
  if ((bVar2) && ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_138);
  }
  local_50 = local_c8;
  uVar6 = CONCAT44(uVar7,DAT_141a00078);
  FUN_140e634e0(param_1,param_2,&local_128,3,uVar6,&local_60);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_78 = 0x2b;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if (puVar4 != &local_108) {
    local_98 = *(undefined4 *)puVar4;
    uStack_94 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_90 = *(undefined4 *)(puVar4 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_98);
  }
  local_70 = &local_108;
  uVar6 = FUN_140e634e0(param_1,param_2,&local_128,1,CONCAT44(uVar7,DAT_1419fffe8),&local_70);
  uStack_12c = 0;
  local_138 = 0x3ff0000000000000;
  iVar3 = FUN_140e851f0(uVar6,&local_138,DAT_141955260,0);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  uVar7 = 0;
  if (iVar3 == 0) {
    local_78 = 0x2c;
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a00228);
    if ((param_4 < 1) || (puVar8 = (undefined8 *)*param_5, puVar8 != &local_f8)) {
      local_98 = *(undefined4 *)puVar8;
      uStack_94 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_90 = *(undefined4 *)(puVar8 + 1);
      uStack_8c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_98);
    }
    local_68 = &local_f8;
    gml_Script_truestate_queue_start(param_1,param_2,&local_a8,1,&local_68);
    uVar7 = local_9c;
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

