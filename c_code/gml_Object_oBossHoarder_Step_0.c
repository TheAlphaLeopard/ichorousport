// gml_Object_oBossHoarder_Step_0 @ 0x140797a90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBossHoarder_Step_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  ulonglong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 local_40;
  char *local_38;
  undefined4 local_30;
  
  local_38 = "gml_Object_oBossHoarder_Create_0";
  local_30 = 0;
  local_40 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_40;
  _eh_vector_constructor_iterator_(local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_30 = 3;
  FUN_140e98b30(param_1,param_2);
  local_30 = 4;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar7 = 0;
  gml_Script_truestate_set_default(param_1,param_2,&local_a8,0,0);
  local_30 = 6;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f60d8);
  FUN_140e609c0(param_1);
  uStack_ac = 0xf;
  local_b8 = 0x100000200000108;
  if (&local_b8 != puVar1) {
    local_68 = 0x100000200000108;
    uStack_60 = uStack_b0;
    uStack_5c = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  local_30 = 8;
  puVar2 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05b88);
  if (puVar2 != &DAT_141dd6838) {
    local_b8 = CONCAT44(uRam0000000141dd683c,_DAT_141dd6838);
    uStack_b0 = uRam0000000141dd6840;
    uStack_ac = DAT_141dd6844;
    if ((1 << ((byte)*(undefined4 *)(puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_b8);
  }
  local_30 = 10;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdec8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4004000000000000;
  local_30 = 0xb;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f090);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x409db00000000000;
  local_30 = 0xc;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5a58);
  FUN_140e609c0(param_1);
  if (puVar1 != puVar3) {
    local_b8 = *puVar1;
    uStack_b0 = *(undefined4 *)(puVar1 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_b8);
  }
  FUN_140e60910(1);
  local_30 = 0xe;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7d8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4020000000000000;
  local_30 = 0x10;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fddc8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_30 = 0x11;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  puVar4 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fde88);
  local_b8 = CONCAT44(uRam0000000141dc69a4,_DAT_141dc69a0);
  uStack_b0 = uRam0000000141dc69a8;
  uStack_ac = uRam0000000141dc69ac;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_58 = local_98;
  FUN_140e609c0(param_1);
  puVar5 = (ulonglong *)
           FUN_140e634e0(param_1,param_2,&local_a8,1,CONCAT44(uVar7,DAT_141a0a0d8),&local_58);
  uStack_5c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_60 = (undefined4)puVar5[1];
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) == 0) {
    local_68 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_68,puVar5);
  }
  uStack_ac = 0;
  local_b8 = 0x3ffc000000000000;
  FUN_140042560(&local_68,&local_b8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if (&local_68 != puVar4) {
    local_b8 = local_68;
    uStack_b0 = uStack_60;
    uStack_ac = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_b8);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_30 = 0x13;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04ba8);
  FUN_140e609c0(param_1);
  uStack_ac = 0xf;
  local_b8 = 0x10000010000001d;
  if (&local_b8 != puVar1) {
    local_68 = 0x10000010000001d;
    uStack_60 = uStack_b0;
    uStack_5c = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  local_30 = 0x15;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fde48);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0xc010000000000000;
  local_30 = 0x16;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1ed50);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3fe0000000000000;
  local_30 = 0x19;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04b78);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_b8,gml_Object_oBossHoarder_Step_1,param_1);
  if (&local_b8 != puVar1) {
    local_68 = local_b8;
    uStack_60 = uStack_b0;
    uStack_5c = uStack_ac;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140e60910(1);
  local_30 = 0x3b;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = CONCAT44(uRam00000001419e8234,_DAT_1419e8230);
  uStack_b0 = uRam00000001419e8238;
  uStack_ac = uRam00000001419e823c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_58 = local_98;
  uVar6 = (int)(DAT_141a08868 | 0x5000000) >> 0x18 & 0xff;
  if (uVar6 == 0xf) {
    uVar6 = 0x4000004;
  }
  else {
    uVar6 = uVar6 | 0x1000000;
  }
  uStack_ac = 0xf;
  local_b8 = CONCAT44(uVar6,DAT_141a08868) & 0xffffffff00ffffff;
  local_68 = CONCAT44(uVar6,DAT_141a08868) & 0xffffffff00ffffff;
  uStack_60 = uStack_b0;
  uStack_5c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_68);
  local_50 = local_88;
  local_b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_b0 = DAT_1419df7b8;
  uStack_ac = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_a8,3,&local_58);
  local_30 = 0x3c;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = CONCAT44(uRam00000001419e82c4,_DAT_1419e82c0);
  uStack_b0 = uRam00000001419e82c8;
  uStack_ac = uRam00000001419e82cc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_58 = local_98;
  uVar6 = (int)(DAT_141a088d8 | 0x5000000) >> 0x18 & 0xff;
  if (uVar6 == 0xf) {
    uVar6 = 0x4000004;
  }
  else {
    uVar6 = uVar6 | 0x1000000;
  }
  uStack_ac = 0xf;
  local_b8 = CONCAT44(uVar6,DAT_141a088d8) & 0xffffffff00ffffff;
  local_68 = CONCAT44(uVar6,DAT_141a088d8) & 0xffffffff00ffffff;
  uStack_60 = uStack_b0;
  uStack_5c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_68);
  local_50 = local_88;
  local_b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_b0 = DAT_1419df7b8;
  uStack_ac = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_a8,3,&local_58);
  local_30 = 0x3e;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = CONCAT44(uRam00000001419e82b4,_DAT_1419e82b0);
  uStack_b0 = uRam00000001419e82b8;
  uStack_ac = uRam00000001419e82bc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_58 = local_98;
  uVar6 = (int)(DAT_141a088c8 | 0x5000000) >> 0x18 & 0xff;
  if (uVar6 == 0xf) {
    uVar6 = 0x4000004;
  }
  else {
    uVar6 = uVar6 | 0x1000000;
  }
  uStack_ac = 0xf;
  local_b8 = CONCAT44(uVar6,DAT_141a088c8) & 0xffffffff00ffffff;
  local_68 = CONCAT44(uVar6,DAT_141a088c8) & 0xffffffff00ffffff;
  uStack_60 = uStack_b0;
  uStack_5c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_68);
  local_50 = local_88;
  local_b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_b0 = DAT_1419df7b8;
  uStack_ac = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_a8,3,&local_58);
  local_30 = 0x3f;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = CONCAT44(uRam00000001419e8264,_DAT_1419e8260);
  uStack_b0 = uRam00000001419e8268;
  uStack_ac = uRam00000001419e826c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_58 = local_98;
  uVar6 = (int)(DAT_141a088a8 | 0x5000000) >> 0x18 & 0xff;
  if (uVar6 == 0xf) {
    uVar6 = 0x4000004;
  }
  else {
    uVar6 = uVar6 | 0x1000000;
  }
  uStack_ac = 0xf;
  local_b8 = CONCAT44(uVar6,DAT_141a088a8) & 0xffffffff00ffffff;
  local_68 = CONCAT44(uVar6,DAT_141a088a8) & 0xffffffff00ffffff;
  uStack_60 = uStack_b0;
  uStack_5c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_68);
  local_50 = local_88;
  local_b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_b0 = DAT_1419df7b8;
  uStack_ac = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_a8,3,&local_58);
  local_30 = 0x41;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = CONCAT44(uRam00000001419e8274,_DAT_1419e8270);
  uStack_b0 = uRam00000001419e8278;
  uStack_ac = uRam00000001419e827c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_58 = local_98;
  uVar6 = (int)(DAT_141a08898 | 0x5000000) >> 0x18 & 0xff;
  if (uVar6 == 0xf) {
    uVar6 = 0x4000004;
  }
  else {
    uVar6 = uVar6 | 0x1000000;
  }
  uStack_ac = 0xf;
  local_b8 = CONCAT44(uVar6,DAT_141a08898) & 0xffffffff00ffffff;
  local_68 = CONCAT44(uVar6,DAT_141a08898) & 0xffffffff00ffffff;
  uStack_60 = uStack_b0;
  uStack_5c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_68);
  local_50 = local_88;
  local_b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_b0 = DAT_1419df7b8;
  uStack_ac = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_a8,3,&local_58);
  local_30 = 0x43;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = CONCAT44(uRam00000001419e8284,_DAT_1419e8280);
  uStack_b0 = uRam00000001419e8288;
  uStack_ac = uRam00000001419e828c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_58 = local_98;
  uVar6 = (int)(DAT_141a088f8 | 0x5000000) >> 0x18 & 0xff;
  if (uVar6 == 0xf) {
    uVar6 = 0x4000004;
  }
  else {
    uVar6 = uVar6 | 0x1000000;
  }
  uStack_ac = 0xf;
  local_b8 = CONCAT44(uVar6,DAT_141a088f8) & 0xffffffff00ffffff;
  local_68 = CONCAT44(uVar6,DAT_141a088f8) & 0xffffffff00ffffff;
  uStack_60 = uStack_b0;
  uStack_5c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_68);
  local_50 = local_88;
  local_b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_b0 = DAT_1419df7b8;
  uStack_ac = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_a8,3,&local_58);
  local_30 = 0x44;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = CONCAT44(uRam00000001419e82d4,_DAT_1419e82d0);
  uStack_b0 = uRam00000001419e82d8;
  uStack_ac = uRam00000001419e82dc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_58 = local_98;
  uVar6 = (int)(DAT_141a08878 | 0x5000000) >> 0x18 & 0xff;
  if (uVar6 == 0xf) {
    uVar6 = 0x4000004;
  }
  else {
    uVar6 = uVar6 | 0x1000000;
  }
  uStack_ac = 0xf;
  local_b8 = CONCAT44(uVar6,DAT_141a08878) & 0xffffffff00ffffff;
  local_68 = CONCAT44(uVar6,DAT_141a08878) & 0xffffffff00ffffff;
  uStack_60 = uStack_b0;
  uStack_5c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_68);
  local_50 = local_88;
  local_b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_b0 = DAT_1419df7b8;
  uStack_ac = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_a8,3,&local_58);
  local_30 = 0x46;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = CONCAT44(uRam00000001419e8224,_DAT_1419e8220);
  uStack_b0 = uRam00000001419e8228;
  uStack_ac = uRam00000001419e822c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_58 = local_98;
  uVar6 = (int)(DAT_141a088b8 | 0x5000000) >> 0x18 & 0xff;
  if (uVar6 == 0xf) {
    uVar6 = 0x4000004;
  }
  else {
    uVar6 = uVar6 | 0x1000000;
  }
  uStack_ac = 0xf;
  local_b8 = CONCAT44(uVar6,DAT_141a088b8) & 0xffffffff00ffffff;
  local_68 = CONCAT44(uVar6,DAT_141a088b8) & 0xffffffff00ffffff;
  uStack_60 = uStack_b0;
  uStack_5c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_68);
  local_50 = local_88;
  local_b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_b0 = DAT_1419df7b8;
  uStack_ac = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_a8,3,&local_58);
  local_30 = 0x47;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = CONCAT44(uRam00000001419e8254,_DAT_1419e8250);
  uStack_b0 = uRam00000001419e8258;
  uStack_ac = uRam00000001419e825c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_58 = local_98;
  uVar6 = (int)(DAT_141a08908 | 0x5000000) >> 0x18 & 0xff;
  if (uVar6 == 0xf) {
    uVar6 = 0x4000004;
  }
  else {
    uVar6 = uVar6 | 0x1000000;
  }
  uStack_ac = 0xf;
  local_b8 = CONCAT44(uVar6,DAT_141a08908) & 0xffffffff00ffffff;
  local_68 = CONCAT44(uVar6,DAT_141a08908) & 0xffffffff00ffffff;
  uStack_60 = uStack_b0;
  uStack_5c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_68);
  local_50 = local_88;
  local_b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_b0 = DAT_1419df7b8;
  uStack_ac = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_a8,3,&local_58);
  local_30 = 0x49;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = CONCAT44(uRam00000001419e8294,_DAT_1419e8290);
  uStack_b0 = uRam00000001419e8298;
  uStack_ac = uRam00000001419e829c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_58 = local_98;
  uVar6 = (int)(DAT_141a08918 | 0x5000000) >> 0x18 & 0xff;
  if (uVar6 == 0xf) {
    uVar6 = 0x4000004;
  }
  else {
    uVar6 = uVar6 | 0x1000000;
  }
  uStack_ac = 0xf;
  local_b8 = CONCAT44(uVar6,DAT_141a08918) & 0xffffffff00ffffff;
  local_68 = CONCAT44(uVar6,DAT_141a08918) & 0xffffffff00ffffff;
  uStack_60 = uStack_b0;
  uStack_5c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_68);
  local_50 = local_88;
  local_b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_b0 = DAT_1419df7b8;
  uStack_ac = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_a8,3,&local_58);
  local_30 = 0x4b;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = CONCAT44(uRam00000001419e82a4,_DAT_1419e82a0);
  uStack_b0 = uRam00000001419e82a8;
  uStack_ac = uRam00000001419e82ac;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_58 = local_98;
  uVar6 = (int)(DAT_141a088e8 | 0x5000000) >> 0x18 & 0xff;
  if (uVar6 == 0xf) {
    uVar6 = 0x4000004;
  }
  else {
    uVar6 = uVar6 | 0x1000000;
  }
  uStack_ac = 0xf;
  local_b8 = CONCAT44(uVar6,DAT_141a088e8) & 0xffffffff00ffffff;
  local_68 = CONCAT44(uVar6,DAT_141a088e8) & 0xffffffff00ffffff;
  uStack_60 = uStack_b0;
  uStack_5c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_68);
  local_50 = local_88;
  local_b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_b0 = DAT_1419df7b8;
  uStack_ac = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_a8,3,&local_58);
  local_30 = 0x4c;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = CONCAT44(uRam00000001419e8214,_DAT_1419e8210);
  uStack_b0 = uRam00000001419e8218;
  uStack_ac = uRam00000001419e821c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_58 = local_98;
  uVar6 = (int)(DAT_141a08888 | 0x5000000) >> 0x18 & 0xff;
  if (uVar6 == 0xf) {
    uVar6 = 0x4000004;
  }
  else {
    uVar6 = uVar6 | 0x1000000;
  }
  uStack_ac = 0xf;
  local_b8 = CONCAT44(uVar6,DAT_141a08888) & 0xffffffff00ffffff;
  local_68 = CONCAT44(uVar6,DAT_141a08888) & 0xffffffff00ffffff;
  uStack_60 = uStack_b0;
  uStack_5c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_68);
  local_50 = local_88;
  local_b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_b0 = DAT_1419df7b8;
  uStack_ac = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_a8,3,&local_58);
  local_30 = 0x4e;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = CONCAT44(uRam00000001419e8234,_DAT_1419e8230);
  uStack_b0 = uRam00000001419e8238;
  uStack_ac = uRam00000001419e823c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_58 = local_98;
  gml_Script_truestate_queue_start(param_1,param_2,&local_a8,1,&local_58);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_40;
  return;
}

