// gml_Script_anon_887_gml_Object_oBossPatron_Create_0 @ 0x1407ab960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_887_gml_Object_oBossPatron_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 local_40;
  char *local_38;
  undefined4 local_30;
  
  local_38 = "gml_Object_oBossPatron_Create_0";
  local_30 = 0;
  local_40 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_40;
  _eh_vector_constructor_iterator_(local_88,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_30 = 4;
  FUN_140e98b30(param_1,param_2);
  local_30 = 6;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f60d8);
  FUN_140e609c0(param_1);
  uStack_8c = 0xf;
  local_98 = 0x1000002000000a8;
  if (&local_98 != puVar1) {
    local_b8 = 0xa8;
    uStack_b4 = 0x1000002;
    uStack_b0 = uStack_90;
    uStack_ac = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_30 = 8;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08c68);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_30 = 9;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdf88);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_30 = 0xb;
  puVar2 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05b88);
  if (puVar2 != &DAT_141dd6a18) {
    local_b8 = _DAT_141dd6a18;
    uStack_b4 = uRam0000000141dd6a1c;
    uStack_b0 = uRam0000000141dd6a20;
    uStack_ac = DAT_141dd6a24;
    if ((1 << ((byte)*(undefined4 *)(puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_b8);
  }
  local_30 = 0xc;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f090);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4099000000000000;
  local_30 = 0xd;
  puVar3 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
  puVar4 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5a58);
  FUN_140e609c0(param_1);
  if (puVar3 != puVar4) {
    local_b8 = *puVar3;
    uStack_b4 = puVar3[1];
    uStack_b0 = puVar3[2];
    uStack_ac = puVar3[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_b8);
  }
  FUN_140e60910(1);
  local_30 = 0x10;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04b78);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_anon_1002_gml_Object_oBossPatron_Create_0,param_1);
  if (&local_98 != puVar1) {
    local_b8 = (uint)local_98;
    uStack_b4 = local_98._4_4_;
    uStack_b0 = uStack_90;
    uStack_ac = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_30 = 0x31;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdf38);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_anon_2256_gml_Object_oBossPatron_Create_0,param_1);
  if (&local_98 != puVar1) {
    local_b8 = (uint)local_98;
    uStack_b4 = local_98._4_4_;
    uStack_b0 = uStack_90;
    uStack_ac = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_30 = 0x39;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe008);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_anon_2428_gml_Object_oBossPatron_Create_0,param_1);
  if (&local_98 != puVar1) {
    local_b8 = (uint)local_98;
    uStack_b4 = local_98._4_4_;
    uStack_b0 = uStack_90;
    uStack_ac = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_30 = 0x70;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd588);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,FUN_1407aa310,param_1);
  if (&local_98 != puVar1) {
    local_b8 = (uint)local_98;
    uStack_b4 = local_98._4_4_;
    uStack_b0 = uStack_90;
    uStack_ac = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_30 = 0x78;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08c58);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,FUN_1407aa8b0,param_1);
  if (&local_98 != puVar1) {
    local_b8 = (uint)local_98;
    uStack_b4 = local_98._4_4_;
    uStack_b0 = uStack_90;
    uStack_ac = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_30 = 0x8c;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = _DAT_1419e84b0;
  uStack_b4 = uRam00000001419e84b4;
  uStack_b0 = uRam00000001419e84b8;
  uStack_ac = uRam00000001419e84bc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_58 = local_88;
  local_b8 = DAT_141a08ce8 & 0xffffff;
  uStack_b4 = (int)(DAT_141a08ce8 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_b4 == 0xf) {
    uStack_b4 = 0x4000004;
  }
  else {
    uStack_b4 = uStack_b4 | 0x1000000;
  }
  uStack_8c = 0xf;
  local_98 = CONCAT44(uStack_b4,DAT_141a08ce8) & 0xffffffff00ffffff;
  uStack_b0 = uStack_90;
  uStack_ac = 0xf;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_50 = local_78;
  local_b8 = (uint)DAT_1419df7b0;
  uStack_b4 = DAT_1419df7b0._4_4_;
  uStack_b0 = DAT_1419df7b8;
  uStack_ac = DAT_1419df7bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_b8);
  local_48 = local_68;
  gml_Script_truestate_enqueue(param_1,param_2,&local_a8,3,&local_58);
  local_30 = 0x8d;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = _DAT_1419e8470;
  uStack_b4 = uRam00000001419e8474;
  uStack_b0 = uRam00000001419e8478;
  uStack_ac = uRam00000001419e847c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_58 = local_88;
  local_b8 = DAT_141a08ca8 & 0xffffff;
  uStack_b4 = (int)(DAT_141a08ca8 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_b4 == 0xf) {
    uStack_b4 = 0x4000004;
  }
  else {
    uStack_b4 = uStack_b4 | 0x1000000;
  }
  uStack_8c = 0xf;
  local_98 = CONCAT44(uStack_b4,DAT_141a08ca8) & 0xffffffff00ffffff;
  uStack_b0 = uStack_90;
  uStack_ac = 0xf;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_50 = local_78;
  local_b8 = (uint)DAT_1419df7b0;
  uStack_b4 = DAT_1419df7b0._4_4_;
  uStack_b0 = DAT_1419df7b8;
  uStack_ac = DAT_1419df7bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_b8);
  local_48 = local_68;
  gml_Script_truestate_enqueue(param_1,param_2,&local_a8,3,&local_58);
  local_30 = 0x8e;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = _DAT_1419e83f0;
  uStack_b4 = uRam00000001419e83f4;
  uStack_b0 = uRam00000001419e83f8;
  uStack_ac = uRam00000001419e83fc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_58 = local_88;
  local_b8 = DAT_141a08cd8 & 0xffffff;
  uStack_b4 = (int)(DAT_141a08cd8 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_b4 == 0xf) {
    uStack_b4 = 0x4000004;
  }
  else {
    uStack_b4 = uStack_b4 | 0x1000000;
  }
  uStack_8c = 0xf;
  local_98 = CONCAT44(uStack_b4,DAT_141a08cd8) & 0xffffffff00ffffff;
  uStack_b0 = uStack_90;
  uStack_ac = 0xf;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_50 = local_78;
  local_b8 = (uint)DAT_1419df7b0;
  uStack_b4 = DAT_1419df7b0._4_4_;
  uStack_b0 = DAT_1419df7b8;
  uStack_ac = DAT_1419df7bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_b8);
  local_48 = local_68;
  gml_Script_truestate_enqueue(param_1,param_2,&local_a8,3,&local_58);
  local_30 = 0x8f;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = _DAT_1419e8400;
  uStack_b4 = uRam00000001419e8404;
  uStack_b0 = uRam00000001419e8408;
  uStack_ac = uRam00000001419e840c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_58 = local_88;
  local_b8 = DAT_141a08c98 & 0xffffff;
  uStack_b4 = (int)(DAT_141a08c98 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_b4 == 0xf) {
    uStack_b4 = 0x4000004;
  }
  else {
    uStack_b4 = uStack_b4 | 0x1000000;
  }
  uStack_8c = 0xf;
  local_98 = CONCAT44(uStack_b4,DAT_141a08c98) & 0xffffffff00ffffff;
  uStack_b0 = uStack_90;
  uStack_ac = 0xf;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_50 = local_78;
  local_b8 = (uint)DAT_1419df7b0;
  uStack_b4 = DAT_1419df7b0._4_4_;
  uStack_b0 = DAT_1419df7b8;
  uStack_ac = DAT_1419df7bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_b8);
  local_48 = local_68;
  gml_Script_truestate_enqueue(param_1,param_2,&local_a8,3,&local_58);
  local_30 = 0x90;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = _DAT_1419e8460;
  uStack_b4 = uRam00000001419e8464;
  uStack_b0 = uRam00000001419e8468;
  uStack_ac = uRam00000001419e846c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_58 = local_88;
  local_b8 = DAT_141a08c48 & 0xffffff;
  uStack_b4 = (int)(DAT_141a08c48 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_b4 == 0xf) {
    uStack_b4 = 0x4000004;
  }
  else {
    uStack_b4 = uStack_b4 | 0x1000000;
  }
  uStack_8c = 0xf;
  local_98 = CONCAT44(uStack_b4,DAT_141a08c48) & 0xffffffff00ffffff;
  uStack_b0 = uStack_90;
  uStack_ac = 0xf;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_50 = local_78;
  local_b8 = (uint)DAT_1419df7b0;
  uStack_b4 = DAT_1419df7b0._4_4_;
  uStack_b0 = DAT_1419df7b8;
  uStack_ac = DAT_1419df7bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_b8);
  local_48 = local_68;
  gml_Script_truestate_enqueue(param_1,param_2,&local_a8,3,&local_58);
  local_30 = 0x91;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = _DAT_1419e8410;
  uStack_b4 = uRam00000001419e8414;
  uStack_b0 = uRam00000001419e8418;
  uStack_ac = uRam00000001419e841c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_58 = local_88;
  local_b8 = DAT_141a08c88 & 0xffffff;
  uStack_b4 = (int)(DAT_141a08c88 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_b4 == 0xf) {
    uStack_b4 = 0x4000004;
  }
  else {
    uStack_b4 = uStack_b4 | 0x1000000;
  }
  uStack_8c = 0xf;
  local_98 = CONCAT44(uStack_b4,DAT_141a08c88) & 0xffffffff00ffffff;
  uStack_b0 = uStack_90;
  uStack_ac = 0xf;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_50 = local_78;
  local_b8 = (uint)DAT_1419df7b0;
  uStack_b4 = DAT_1419df7b0._4_4_;
  uStack_b0 = DAT_1419df7b8;
  uStack_ac = DAT_1419df7bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_b8);
  local_48 = local_68;
  gml_Script_truestate_enqueue(param_1,param_2,&local_a8,3,&local_58);
  local_30 = 0x92;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = _DAT_1419e8440;
  uStack_b4 = uRam00000001419e8444;
  uStack_b0 = uRam00000001419e8448;
  uStack_ac = uRam00000001419e844c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_58 = local_88;
  local_b8 = DAT_141a08cc8 & 0xffffff;
  uStack_b4 = (int)(DAT_141a08cc8 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_b4 == 0xf) {
    uStack_b4 = 0x4000004;
  }
  else {
    uStack_b4 = uStack_b4 | 0x1000000;
  }
  uStack_8c = 0xf;
  local_98 = CONCAT44(uStack_b4,DAT_141a08cc8) & 0xffffffff00ffffff;
  uStack_b0 = uStack_90;
  uStack_ac = 0xf;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_50 = local_78;
  local_b8 = (uint)DAT_1419df7b0;
  uStack_b4 = DAT_1419df7b0._4_4_;
  uStack_b0 = DAT_1419df7b8;
  uStack_ac = DAT_1419df7bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_b8);
  local_48 = local_68;
  gml_Script_truestate_enqueue(param_1,param_2,&local_a8,3,&local_58);
  local_30 = 0x94;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = _DAT_1419e8450;
  uStack_b4 = uRam00000001419e8454;
  uStack_b0 = uRam00000001419e8458;
  uStack_ac = uRam00000001419e845c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_58 = local_88;
  local_b8 = DAT_141a08cb8 & 0xffffff;
  uStack_b4 = (int)(DAT_141a08cb8 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_b4 == 0xf) {
    uStack_b4 = 0x4000004;
  }
  else {
    uStack_b4 = uStack_b4 | 0x1000000;
  }
  uStack_8c = 0xf;
  local_98 = CONCAT44(uStack_b4,DAT_141a08cb8) & 0xffffffff00ffffff;
  uStack_b0 = uStack_90;
  uStack_ac = 0xf;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_50 = local_78;
  local_b8 = (uint)DAT_1419df7b0;
  uStack_b4 = DAT_1419df7b0._4_4_;
  uStack_b0 = DAT_1419df7b8;
  uStack_ac = DAT_1419df7bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_b8);
  local_48 = local_68;
  gml_Script_truestate_enqueue(param_1,param_2,&local_a8,3,&local_58);
  local_30 = 0x96;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = _DAT_1419e8470;
  uStack_b4 = uRam00000001419e8474;
  uStack_b0 = uRam00000001419e8478;
  uStack_ac = uRam00000001419e847c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_58 = local_88;
  gml_Script_truestate_queue_start(param_1,param_2,&local_a8,1,&local_58);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_40;
  return;
}

