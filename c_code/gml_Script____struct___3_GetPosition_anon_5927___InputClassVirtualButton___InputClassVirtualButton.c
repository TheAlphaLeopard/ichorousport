// gml_Script____struct___3_GetPosition_anon_5927___InputClassVirtualButton___InputClassVirtualButton @ 0x140056a00

undefined8 *
gml_Script____struct___3_GetPosition_anon_5927___InputClassVirtualButton___InputClassVirtualButton
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 *local_58;
  undefined8 *local_50;
  
  local_100 = "gml_Script_Rectangle@anon@4602@__InputClassVirtualButton@__InputClassVirtualButton";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x93;
  _eh_vector_constructor_iterator_(&local_98,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_cc = 0xffffff;
  local_d8 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x95;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe108);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    local_f8 = 0x95;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    goto LAB_1400576e0;
  }
  local_f8 = 0x97;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_140056b74:
    local_138 = *puVar3;
    uStack_130 = *(undefined4 *)(puVar3 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_138);
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 != &local_98) goto LAB_140056b74;
  }
  local_58 = &local_98;
  if (param_4 < 3) {
    puVar3 = &DAT_1419df7b0;
LAB_140056bc1:
    local_138 = *puVar3;
    uStack_130 = *(undefined4 *)(puVar3 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_138);
  }
  else {
    puVar3 = (undefined8 *)param_5[2];
    if (puVar3 != &local_88) goto LAB_140056bc1;
  }
  local_50 = &local_88;
  puVar3 = (undefined8 *)FUN_140e79230(&local_118,2,&local_58);
  if (puVar3 != &local_d8) {
    local_138 = *puVar3;
    uStack_130 = *(undefined4 *)(puVar3 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_138);
  }
  local_f8 = 0x98;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_140056c89:
    local_138 = *puVar3;
    uStack_130 = *(undefined4 *)(puVar3 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_138);
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
    if (puVar3 != &local_98) goto LAB_140056c89;
  }
  local_58 = &local_98;
  if (param_4 < 4) {
    puVar3 = &DAT_1419df7b0;
LAB_140056cd6:
    local_138 = *puVar3;
    uStack_130 = *(undefined4 *)(puVar3 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_138);
  }
  else {
    puVar3 = (undefined8 *)param_5[3];
    if (puVar3 != &local_88) goto LAB_140056cd6;
  }
  local_50 = &local_88;
  puVar3 = (undefined8 *)FUN_140e79230(&local_118,2,&local_58);
  if (puVar3 != &local_a8) {
    local_138 = *puVar3;
    uStack_130 = *(undefined4 *)(puVar3 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_138);
  }
  local_f8 = 0x99;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_140056d9d:
    local_138 = *puVar3;
    uStack_130 = *(undefined4 *)(puVar3 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_138);
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 != &local_98) goto LAB_140056d9d;
  }
  local_58 = &local_98;
  if (param_4 < 3) {
    puVar3 = &DAT_1419df7b0;
LAB_140056dea:
    local_138 = *puVar3;
    uStack_130 = *(undefined4 *)(puVar3 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_138);
  }
  else {
    puVar3 = (undefined8 *)param_5[2];
    if (puVar3 != &local_88) goto LAB_140056dea;
  }
  local_50 = &local_88;
  puVar3 = (undefined8 *)FUN_140e79090(&local_118,2,&local_58);
  if (puVar3 != &local_b8) {
    local_138 = *puVar3;
    uStack_130 = *(undefined4 *)(puVar3 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_138);
  }
  local_f8 = 0x9a;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_140056eb2:
    local_138 = *puVar3;
    uStack_130 = *(undefined4 *)(puVar3 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_138);
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
    if (puVar3 != &local_98) goto LAB_140056eb2;
  }
  local_58 = &local_98;
  if (param_4 < 4) {
    puVar3 = &DAT_1419df7b0;
LAB_140056eff:
    local_138 = *puVar3;
    uStack_130 = *(undefined4 *)(puVar3 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_138);
  }
  else {
    puVar3 = (undefined8 *)param_5[3];
    if (puVar3 != &local_88) goto LAB_140056eff;
  }
  local_50 = &local_88;
  puVar3 = (undefined8 *)FUN_140e79090(&local_118,2,&local_58);
  if (puVar3 != &local_e8) {
    local_138 = *puVar3;
    uStack_130 = *(undefined4 *)(puVar3 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_138);
  }
  local_f8 = 0x9c;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe668);
  uStack_12c = 0xd;
  local_138 = 0;
  if (&local_138 != puVar3) {
    local_128 = 0;
    uStack_120 = uStack_130;
    uStack_11c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_128);
  }
  local_f8 = 0x9d;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe418);
  FUN_140e609c0(param_1);
  if (&local_d8 != puVar3) {
    local_138 = local_d8;
    uStack_130 = uStack_d0;
    uStack_12c = uStack_cc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_138);
  }
  FUN_140e60910(1);
  local_f8 = 0x9e;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe4d8);
  FUN_140e609c0(param_1);
  if (&local_a8 != puVar3) {
    local_138 = local_a8;
    uStack_130 = uStack_a0;
    uStack_12c = uStack_9c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_138);
  }
  FUN_140e60910(1);
  local_f8 = 0x9f;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe228);
  FUN_140e609c0(param_1);
  if (&local_b8 != puVar3) {
    local_138 = local_b8;
    uStack_130 = uStack_b0;
    uStack_12c = uStack_ac;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_138);
  }
  FUN_140e60910(1);
  local_f8 = 0xa0;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe678);
  FUN_140e609c0(param_1);
  if (&local_e8 != puVar3) {
    local_138 = local_e8;
    uStack_130 = uStack_e0;
    uStack_12c = uStack_dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_138);
  }
  FUN_140e60910(1);
  local_f8 = 0xa1;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe278);
  FUN_140e609c0(param_1);
  uStack_12c = 0;
  local_138 = 0x3ff0000000000000;
  FUN_1400460e0(&local_138,&local_b8);
  uStack_11c = uStack_12c;
  uStack_120 = uStack_130;
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_128 = local_138;
  }
  else {
    FUN_1400419b0(&local_128,&local_138);
  }
  FUN_1400462a0(&local_128,&local_d8);
  if (&local_128 != puVar3) {
    local_c8 = (undefined4)local_128;
    uStack_c4 = local_128._4_4_;
    uStack_c0 = uStack_120;
    uStack_bc = uStack_11c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_c8);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140e60910(1);
  local_f8 = 0xa2;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe3f8);
  FUN_140e609c0(param_1);
  uStack_11c = 0;
  local_128 = 0x3ff0000000000000;
  FUN_1400460e0(&local_128,&local_e8);
  uStack_12c = uStack_11c;
  uStack_130 = uStack_120;
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_138 = local_128;
  }
  else {
    FUN_1400419b0(&local_138,&local_128);
  }
  FUN_1400462a0(&local_138,&local_a8);
  if (&local_138 != puVar3) {
    local_c8 = (undefined4)local_138;
    uStack_c4 = local_138._4_4_;
    uStack_c0 = uStack_130;
    uStack_bc = uStack_12c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_c8);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140e60910(1);
  local_f8 = 0xa3;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe328);
  FUN_140e609c0(param_1);
  uStack_12c = uStack_cc;
  uStack_130 = uStack_d0;
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) == 0) {
    local_138 = local_d8;
  }
  else {
    FUN_1400419b0(&local_138,&local_d8);
  }
  FUN_1400460e0(&local_138,&local_b8);
  uStack_11c = 0;
  local_128 = 0x3fe0000000000000;
  FUN_140042560(&local_128,&local_138);
  if (&local_128 != puVar3) {
    local_c8 = (undefined4)local_128;
    uStack_c4 = local_128._4_4_;
    uStack_c0 = uStack_120;
    uStack_bc = uStack_11c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_c8);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140e60910(1);
  local_f8 = 0xa4;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe528);
  FUN_140e609c0(param_1);
  uStack_12c = uStack_dc;
  uStack_130 = uStack_e0;
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
    local_138 = local_e8;
  }
  else {
    FUN_1400419b0(&local_138,&local_e8);
  }
  FUN_1400460e0(&local_138,&local_a8);
  uStack_11c = 0;
  local_128 = 0x3fe0000000000000;
  FUN_140042560(&local_128,&local_138);
  if (&local_128 != puVar3) {
    local_c8 = (undefined4)local_128;
    uStack_c4 = local_128._4_4_;
    uStack_c0 = uStack_120;
    uStack_bc = uStack_11c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_c8);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140e60910(1);
  local_f8 = 0xa5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe368);
  FUN_140e609c0(param_1);
  if (puVar3 != &DAT_1419df7b0) {
    local_c8 = (undefined4)DAT_1419df7b0;
    uStack_c4 = DAT_1419df7b0._4_4_;
    uStack_c0 = DAT_1419df7b8;
    uStack_bc = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_c8);
  }
  FUN_140e60910(1);
  local_f8 = 0xa7;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe328);
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe188);
  FUN_140e609c0(param_1);
  if (puVar4 != puVar5) {
    local_c8 = *puVar4;
    uStack_c4 = puVar4[1];
    uStack_c0 = puVar4[2];
    uStack_bc = puVar4[3];
    if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_c8);
  }
  FUN_140e60910(1);
  local_f8 = 0xa8;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe528);
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe6d8);
  FUN_140e609c0(param_1);
  if (puVar4 != puVar5) {
    local_c8 = *puVar4;
    uStack_c4 = puVar4[1];
    uStack_c0 = puVar4[2];
    uStack_bc = puVar4[3];
    if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_c8);
  }
  FUN_140e60910(1);
  local_f8 = 0xaa;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
LAB_1400576e0:
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar2 = FUN_140e5c910();
  FUN_140e42c10(uVar2,param_1);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

