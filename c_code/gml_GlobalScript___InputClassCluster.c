// gml_GlobalScript___InputClassCluster @ 0x1400429f0

longlong *
gml_GlobalScript___InputClassCluster
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined4 local_78 [3];
  byte local_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined4 *local_40;
  
  local_e0 = "gml_Script__funcFilter@anon@236@__InputBindingScan@__InputBindingScan";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0xb;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_c8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_fc = 0;
  uVar6 = 0;
  local_108 = 0;
  local_10c = 0;
  local_118 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0xd;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140042ad0:
    local_128 = *(undefined4 *)puVar4;
    uStack_124 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_128);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_98) goto LAB_140042ad0;
  }
  local_50 = &local_98;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
LAB_140042b1c:
    local_128 = *(undefined4 *)puVar4;
    uStack_124 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_128);
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
    if (puVar4 != &local_88) goto LAB_140042b1c;
  }
  local_48 = &local_88;
  uVar3 = CONCAT44(uVar8,DAT_1419fcb18);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_118,1,uVar3,&local_50);
  uVar8 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar2 != local_78) {
    local_128 = *puVar2;
    uStack_124 = puVar2[1];
    uStack_120 = puVar2[2];
    uStack_11c = puVar2[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_128);
  }
  local_40 = local_78;
  uVar7 = CONCAT44(uVar8,DAT_1419fcba8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_108,2,uVar7,&local_48);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_d8 = 0xd;
    goto LAB_140042e48;
  }
  local_d8 = 0xe;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if (param_4 < 3) {
    puVar4 = &DAT_1419df7b0;
LAB_140042c41:
    local_128 = *(undefined4 *)puVar4;
    uStack_124 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_128);
  }
  else {
    puVar4 = (undefined8 *)param_5[2];
    if (puVar4 != &local_c8) goto LAB_140042c41;
  }
  local_68 = &local_c8;
  uVar7 = CONCAT44(uVar8,DAT_1419fcb88);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_108,1,uVar7,&local_68);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_140042d1a:
      local_128 = *(undefined4 *)puVar4;
      uStack_124 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_120 = *(undefined4 *)(puVar4 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_128);
    }
    else {
      puVar4 = (undefined8 *)*param_5;
      if (puVar4 != &local_b8) goto LAB_140042d1a;
    }
    local_60 = &local_b8;
    if ((param_4 < 3) || (puVar5 = (undefined8 *)param_5[2], puVar5 != &local_a8)) {
      local_128 = *(undefined4 *)puVar5;
      uStack_124 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_120 = *(undefined4 *)(puVar5 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_128);
    }
    local_58 = &local_a8;
    uVar3 = CONCAT44(uVar8,DAT_1419fcb18);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f8,1,uVar3,&local_60);
    uVar8 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (puVar5 != &local_98) {
      local_128 = *(undefined4 *)puVar5;
      uStack_124 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_120 = *(undefined4 *)(puVar5 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_128);
    }
    local_50 = &local_98;
    uVar3 = FUN_140e634e0(param_1,param_2,&local_118,2,CONCAT44(uVar8,DAT_1419fcba8),&local_58);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 == '\0') {
      local_d8 = 0xe;
      goto LAB_140042e48;
    }
  }
  local_d8 = 0xf;
  uVar6 = 0x3ff00000;
LAB_140042e48:
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = (ulonglong)uVar6 << 0x20;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

