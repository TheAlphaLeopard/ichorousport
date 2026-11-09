// gml_Object_oFogWisp_Draw_0 @ 0x140ae4410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oFogWisp_Draw_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  local_b0 = "gml_Object_oFogWisp_Create_0";
  local_a8 = 0;
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_e8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = 0;
  local_a8 = 1;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2f48);
  uVar6 = FUN_140e78f40(0x11,0x1c);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = uVar6;
  local_a8 = 2;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2ff8);
  uVar6 = FUN_140e78f40(1,3);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = uVar6;
  local_a8 = 4;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2f48);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2ea8);
  FUN_140e609c0(param_1);
  if (puVar1 != puVar2) {
    local_128 = *puVar1;
    uStack_120 = *(undefined4 *)(puVar1 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_128);
  }
  FUN_140e60910(1);
  local_a8 = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2ff8);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3048);
  FUN_140e609c0(param_1);
  if (puVar2 != puVar3) {
    local_128 = *puVar2;
    uStack_120 = *(undefined4 *)(puVar2 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_128);
  }
  FUN_140e60910(1);
  local_a8 = 7;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  local_128 = CONCAT44(uRam00000001419eb6d4,_DAT_1419eb6d0);
  uStack_120 = uRam00000001419eb6d8;
  uStack_11c = uRam00000001419eb6dc;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_128);
  local_c8 = local_e8;
  local_128 = CONCAT44(uRam00000001419eb6c4,_DAT_1419eb6c0);
  uStack_120 = uRam00000001419eb6c8;
  uStack_11c = uRam00000001419eb6cc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_128);
  local_c0 = local_d8;
  FUN_140e609c0(param_1);
  uVar6 = FUN_140e794b0(0x9999999a,0x3fcc28f5c28f5c29);
  puVar4 = (undefined8 *)FUN_140e78db0(&local_118,2,&local_c8);
  uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_100 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_108 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_108,puVar4);
  }
  uStack_ec = 0;
  local_f8 = uVar6;
  FUN_140042560(&local_108,&local_f8);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (&local_108 != puVar3) {
    local_128 = local_108;
    uStack_120 = uStack_100;
    uStack_11c = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_128);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_a8 = 8;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  local_128 = CONCAT44(uRam00000001419eb6d4,_DAT_1419eb6d0);
  uStack_120 = uRam00000001419eb6d8;
  uStack_11c = uRam00000001419eb6dc;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_128);
  local_c8 = local_e8;
  local_128 = CONCAT44(uRam00000001419eb6c4,_DAT_1419eb6c0);
  uStack_120 = uRam00000001419eb6c8;
  uStack_11c = uRam00000001419eb6cc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_128);
  local_c0 = local_d8;
  FUN_140e609c0(param_1);
  uVar6 = FUN_140e794b0(0,0x3f80624dd2f1a9fc);
  puVar4 = (undefined8 *)FUN_140e78db0(&local_118,2,&local_c8);
  uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_100 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_108 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_108,puVar4);
  }
  uStack_ec = 0;
  local_f8 = uVar6;
  FUN_140042560(&local_108,&local_f8);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (&local_108 != puVar3) {
    local_128 = local_108;
    uStack_120 = uStack_100;
    uStack_11c = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_128);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_a8 = 10;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2fd8);
  uVar6 = FUN_140e79480(0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = uVar6;
  local_a8 = 0xb;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2fa8);
  uVar6 = FUN_140e794b0(0x9999999a,0x3fe0000000000000);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = uVar6;
  local_a8 = 0xd;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2e98);
  uVar6 = FUN_140e79480(0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = uVar6;
  local_a8 = 0xe;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2f88);
  uVar6 = FUN_140e794b0(0x33333333,0x3fe3333333333333);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = uVar6;
  local_a8 = 0xf;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2f58);
  uVar6 = FUN_140e794b0(0x9999999a,0x3ffccccccccccccd);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = uVar6;
  local_a8 = 0x11;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2ec8);
  uVar6 = FUN_140e79480(0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = uVar6;
  local_a8 = 0x12;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2f78);
  uVar6 = FUN_140e794b0(0x33333333,0x3fe6666666666666);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = uVar6;
  local_a8 = 0x13;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3018);
  uVar6 = FUN_140e794b0(0xcccccccd,0x400199999999999a);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = uVar6;
  local_a8 = 0x14;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2ee8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x3ffb333333333333;
  local_a8 = 0x16;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2f18);
  uVar6 = FUN_140e78f40(0x168,600);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = uVar6;
  local_a8 = 0x17;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2f18);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5838);
  FUN_140e609c0(param_1);
  if (puVar3 != puVar4) {
    local_128 = *puVar3;
    uStack_120 = *(undefined4 *)(puVar3 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_128);
  }
  FUN_140e60910(1);
  local_a8 = 0x18;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2f28);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x4054000000000000;
  local_a8 = 0x1a;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4f28);
  FUN_140e609c0(param_1);
  uStack_11c = 0xf;
  local_128 = 0x100000100000031;
  if (&local_128 != puVar3) {
    local_f8 = 0x100000100000031;
    uStack_f0 = uStack_120;
    uStack_ec = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_f8);
  }
  FUN_140e60910(1);
  local_a8 = 0x1b;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3028);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = &DAT_bff0000000000000;
  local_a8 = 0x1d;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57700);
  uStack_11c = 0xf;
  local_128 = 0x100000800000015;
  local_f8 = 0x100000800000015;
  uStack_f0 = uStack_120;
  uStack_ec = 0xf;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_f8);
  local_c8 = local_e8;
  local_128 = CONCAT44(uRam0000000141dd92ac,_DAT_141dd92a8);
  uStack_120 = uRam0000000141dd92b0;
  uStack_11c = DAT_141dd92b4;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_128);
  local_c0 = local_d8;
  FUN_140e609c0(param_1);
  uVar6 = CONCAT44(uVar7,DAT_141a04778);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_118,2,uVar6,&local_c8);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar4 != puVar3) {
    local_128 = *puVar4;
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_128);
  }
  FUN_140e60910(1);
  local_a8 = 0x1e;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2ef8);
  uStack_11c = 0xf;
  local_128 = 0x100000800000015;
  local_f8 = 0x100000800000015;
  uStack_f0 = uStack_120;
  uStack_ec = 0xf;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_f8);
  local_c8 = local_e8;
  local_128 = CONCAT44(uRam0000000141dd926c,_DAT_141dd9268);
  uStack_120 = uRam0000000141dd9270;
  uStack_11c = DAT_141dd9274;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_128);
  local_c0 = local_d8;
  FUN_140e609c0(param_1);
  uVar6 = CONCAT44(uVar7,DAT_141a04778);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_118,2,uVar6,&local_c8);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar4 != puVar3) {
    local_128 = *puVar4;
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_128);
  }
  FUN_140e60910(1);
  local_a8 = 0x1f;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2fc8);
  uStack_11c = 0xf;
  local_128 = 0x100000800000015;
  local_f8 = 0x100000800000015;
  uStack_f0 = uStack_120;
  uStack_ec = 0xf;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_f8);
  local_c8 = local_e8;
  local_128 = CONCAT44(uRam0000000141dd92ec,_DAT_141dd92e8);
  uStack_120 = uRam0000000141dd92f0;
  uStack_11c = DAT_141dd92f4;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_128);
  local_c0 = local_d8;
  FUN_140e609c0(param_1);
  uVar6 = CONCAT44(uVar7,DAT_141a04778);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_118,2,uVar6,&local_c8);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar4 != puVar3) {
    local_128 = *puVar4;
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_128);
  }
  FUN_140e60910(1);
  local_a8 = 0x20;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2f38);
  uStack_11c = 0xf;
  local_128 = 0x100000800000015;
  local_f8 = 0x100000800000015;
  uStack_f0 = uStack_120;
  uStack_ec = 0xf;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_f8);
  local_c8 = local_e8;
  local_128 = CONCAT44(uRam0000000141dd92bc,_DAT_141dd92b8);
  uStack_120 = uRam0000000141dd92c0;
  uStack_11c = DAT_141dd92c4;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_128);
  local_c0 = local_d8;
  FUN_140e609c0(param_1);
  uVar6 = CONCAT44(uVar7,DAT_141a04778);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_118,2,uVar6,&local_c8);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar4 != puVar3) {
    local_128 = *puVar4;
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_128);
  }
  FUN_140e60910(1);
  local_a8 = 0x21;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3008);
  uStack_11c = 0xf;
  local_128 = 0x100000800000015;
  local_f8 = 0x100000800000015;
  uStack_f0 = uStack_120;
  uStack_ec = 0xf;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_f8);
  local_c8 = local_e8;
  local_128 = CONCAT44(uRam0000000141dd92fc,_DAT_141dd92f8);
  uStack_120 = uRam0000000141dd9300;
  uStack_11c = DAT_141dd9304;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_128);
  local_c0 = local_d8;
  FUN_140e609c0(param_1);
  uVar6 = CONCAT44(uVar7,DAT_141a04778);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_118,2,uVar6,&local_c8);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar4 != puVar3) {
    local_128 = *puVar4;
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_128);
  }
  FUN_140e60910(1);
  local_a8 = 0x22;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2f98);
  uStack_11c = 0xf;
  local_128 = 0x100000800000015;
  local_f8 = 0x100000800000015;
  uStack_f0 = uStack_120;
  uStack_ec = 0xf;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_f8);
  local_c8 = local_e8;
  local_128 = CONCAT44(uRam0000000141dd92cc,_DAT_141dd92c8);
  uStack_120 = uRam0000000141dd92d0;
  uStack_11c = DAT_141dd92d4;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_128);
  local_c0 = local_d8;
  FUN_140e609c0(param_1);
  uVar6 = CONCAT44(uVar7,DAT_141a04778);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_118,2,uVar6,&local_c8);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar4 != puVar3) {
    local_128 = *puVar4;
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_128);
  }
  FUN_140e60910(1);
  local_a8 = 0x23;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2ed8);
  uStack_11c = 0xf;
  local_128 = 0x100000800000015;
  local_f8 = 0x100000800000015;
  uStack_f0 = uStack_120;
  uStack_ec = 0xf;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_f8);
  local_c8 = local_e8;
  local_128 = CONCAT44(uRam0000000141dd92dc,_DAT_141dd92d8);
  uStack_120 = uRam0000000141dd92e0;
  uStack_11c = DAT_141dd92e4;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_128);
  local_c0 = local_d8;
  FUN_140e609c0(param_1);
  uVar6 = CONCAT44(uVar7,DAT_141a04778);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_118,2,uVar6,&local_c8);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar4 != puVar3) {
    local_128 = *puVar4;
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_128);
  }
  FUN_140e60910(1);
  local_a8 = 0x24;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a576c0);
  uStack_11c = 0xf;
  local_128 = 0x100000800000015;
  local_f8 = 0x100000800000015;
  uStack_f0 = uStack_120;
  uStack_ec = 0xf;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_f8);
  local_c8 = local_e8;
  local_128 = CONCAT44(uRam0000000141dd929c,_DAT_141dd9298);
  uStack_120 = uRam0000000141dd92a0;
  uStack_11c = DAT_141dd92a4;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_128);
  local_c0 = local_d8;
  FUN_140e609c0(param_1);
  uVar6 = CONCAT44(uVar7,DAT_141a04778);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_118,2,uVar6,&local_c8);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar4 != puVar3) {
    local_128 = *puVar4;
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_128);
  }
  FUN_140e60910(1);
  local_a8 = 0x25;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3038);
  uStack_11c = 0xf;
  local_128 = 0x100000800000015;
  local_f8 = 0x100000800000015;
  uStack_f0 = uStack_120;
  uStack_ec = 0xf;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_f8);
  local_c8 = local_e8;
  local_128 = CONCAT44(uRam0000000141dd927c,_DAT_141dd9278);
  uStack_120 = uRam0000000141dd9280;
  uStack_11c = DAT_141dd9284;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_128);
  local_c0 = local_d8;
  FUN_140e609c0(param_1);
  uVar6 = CONCAT44(uVar7,DAT_141a04778);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_118,2,uVar6,&local_c8);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar4 != puVar3) {
    local_128 = *puVar4;
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_128);
  }
  FUN_140e60910(1);
  local_a8 = 0x26;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2eb8);
  uStack_11c = 0xf;
  local_128 = 0x100000800000015;
  local_f8 = 0x100000800000015;
  uStack_f0 = uStack_120;
  uStack_ec = 0xf;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_f8);
  local_c8 = local_e8;
  local_128 = CONCAT44(uRam0000000141dd928c,_DAT_141dd9288);
  uStack_120 = uRam0000000141dd9290;
  uStack_11c = DAT_141dd9294;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_128);
  local_c0 = local_d8;
  FUN_140e609c0(param_1);
  uVar6 = CONCAT44(uVar7,DAT_1419f54d8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_118,2,uVar6,&local_c8);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar4 != puVar3) {
    local_128 = *puVar4;
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_128);
  }
  FUN_140e60910(1);
  local_a8 = 0x28;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2f58);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f3018);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2f08);
  uStack_6c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_70 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) == 0) {
    local_78 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_78,puVar4);
  }
  uStack_ec = 7;
  local_f8 = CONCAT44(local_f8._4_4_,2);
  FUN_140042560(&local_78,&local_f8);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  uStack_fc = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_100 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_108 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_108,puVar1);
  }
  FUN_1400460e0(&local_108,puVar3);
  local_94 = uStack_fc;
  local_98 = uStack_100;
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_a0 = local_108;
  }
  else {
    FUN_1400419b0(&local_a0,&local_108);
  }
  FUN_1400460e0(&local_a0,&local_78);
  uStack_7c = local_94;
  uStack_80 = local_98;
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) == 0) {
    local_88 = local_a0;
  }
  else {
    FUN_1400419b0(&local_88,&local_a0);
  }
  uStack_ec = 7;
  local_f8 = CONCAT44(local_f8._4_4_,2);
  FUN_1400460e0(&local_88,&local_f8);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_128 = local_88;
  uStack_120 = uStack_80;
  uStack_11c = uStack_7c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_128);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_c8 = local_e8;
  FUN_140e609c0(param_1);
  uVar6 = CONCAT44(uVar7,DAT_141a08838);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_118,1,uVar6,&local_c8);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_fc = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_100 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_108 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_108,puVar1);
  }
  uStack_ec = 7;
  local_f8 = CONCAT44(local_f8._4_4_,2);
  FUN_140042560(&local_108,&local_f8);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (&local_108 != puVar5) {
    local_128 = local_108;
    uStack_120 = uStack_100;
    uStack_11c = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_128);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_a8 = 0x29;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2fb8);
  uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_f0 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
    local_f8 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_f8,puVar4);
  }
  uStack_11c = 7;
  local_128 = CONCAT44(local_128._4_4_,2);
  FUN_140042560(&local_f8,&local_128);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uStack_7c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_80 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) == 0) {
    local_88 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_88,puVar3);
  }
  uStack_11c = 0;
  local_128 = 0x3fd3333333333333;
  FUN_140042560(&local_88,&local_128);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_94 = *(undefined4 *)((longlong)puVar2 + 0xc);
  local_98 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) == 0) {
    local_a0 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_a0);
  }
  FUN_1400460e0(&local_a0,&local_88);
  uStack_fc = local_94;
  uStack_100 = local_98;
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) == 0) {
    local_108 = local_a0;
  }
  else {
    FUN_1400419b0(&local_108,&local_a0);
  }
  FUN_1400460e0(&local_108,&local_f8);
  uStack_6c = uStack_fc;
  uStack_70 = uStack_100;
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_78 = local_108;
  }
  else {
    FUN_1400419b0(&local_78,&local_108);
  }
  uStack_11c = 7;
  local_128 = CONCAT44(local_128._4_4_,2);
  FUN_1400460e0(&local_78,&local_128);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = local_78;
  uStack_120 = uStack_70;
  uStack_11c = uStack_6c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_128);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_c8 = local_e8;
  FUN_140e609c0(param_1);
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_118,1,CONCAT44(uVar7,DAT_141a08838),&local_c8);
  uStack_fc = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_100 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_108 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_108,puVar2);
  }
  uStack_11c = 7;
  local_128 = CONCAT44(local_128._4_4_,2);
  FUN_140042560(&local_108,&local_128);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (&local_108 != puVar1) {
    local_128 = local_108;
    uStack_120 = uStack_100;
    uStack_11c = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_128);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return;
}

