// gml_Script_anon_1213_gml_Object_oBossThePestOld_Create_0 @ 0x14083cec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_1213_gml_Object_oBossThePestOld_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 local_40;
  char *local_38;
  undefined4 local_30;
  
  local_38 = "gml_Object_oBossThePestOld_Create_0";
  local_30 = 0;
  local_40 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_40;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_30 = 4;
  FUN_140e98b30(param_1,param_2);
  local_30 = 6;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe918);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4000000000000000;
  local_30 = 7;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419feb68);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = &DAT_bff0000000000000;
  local_30 = 8;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419feac8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_30 = 9;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe958);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_30 = 0xb;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdd28);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_30 = 0xd;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdd98);
  uStack_5c = 0xd;
  local_68 = 0;
  if (&local_68 != puVar1) {
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = uStack_60;
    uStack_9c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_a8);
  }
  local_30 = 0xe;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419feb88);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4010000000000000;
  local_30 = 0xf;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe978);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_30 = 0x11;
  puVar2 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05b88);
  if (puVar2 != &DAT_141dd6ee8) {
    local_a8 = _DAT_141dd6ee8;
    uStack_a4 = uRam0000000141dd6eec;
    uStack_a0 = uRam0000000141dd6ef0;
    uStack_9c = DAT_141dd6ef4;
    if ((1 << ((byte)*(undefined4 *)(puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_a8);
  }
  local_30 = 0x12;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  puVar3 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09d78);
  FUN_140e609c0(param_1);
  puVar4 = (uint *)FUN_140e634e0(param_1,param_2,&local_b8,0,CONCAT44(uVar5,DAT_1419ef5d8),0);
  if (puVar4 != puVar3) {
    local_a8 = *puVar4;
    uStack_a4 = puVar4[1];
    uStack_a0 = puVar4[2];
    uStack_9c = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_a8);
  }
  FUN_140e60910(1);
  local_30 = 0x14;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5a58);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4092c00000000000;
  local_30 = 0x15;
  puVar3 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5a58);
  puVar4 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f090);
  FUN_140e609c0(param_1);
  if (puVar3 != puVar4) {
    local_a8 = *puVar3;
    uStack_a4 = puVar3[1];
    uStack_a0 = puVar3[2];
    uStack_9c = puVar3[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_a8);
  }
  FUN_140e60910(1);
  local_30 = 0x18;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04b78);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Object_oBossThePestOld_Step_0,param_1);
  if (&local_68 != puVar1) {
    local_a8 = (uint)local_68;
    uStack_a4 = local_68._4_4_;
    uStack_a0 = uStack_60;
    uStack_9c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_a8);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_30 = 0x41;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09dd8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Object_oBossThePestOld_Other_76,param_1);
  if (&local_68 != puVar1) {
    local_a8 = (uint)local_68;
    uStack_a4 = local_68._4_4_;
    uStack_a0 = uStack_60;
    uStack_9c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_a8);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_30 = 0x48;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_a8 = _DAT_1419e8cd0;
  uStack_a4 = uRam00000001419e8cd4;
  uStack_a0 = uRam00000001419e8cd8;
  uStack_9c = uRam00000001419e8cdc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_a8);
  local_58 = local_98;
  local_a8 = DAT_141a09e08 & 0xffffff;
  uStack_a4 = (int)(DAT_141a09e08 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_a4 == 0xf) {
    uStack_a4 = 0x4000004;
  }
  else {
    uStack_a4 = uStack_a4 | 0x1000000;
  }
  uStack_5c = 0xf;
  local_68 = CONCAT44(uStack_a4,DAT_141a09e08) & 0xffffffff00ffffff;
  uStack_a0 = uStack_60;
  uStack_9c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_50 = local_88;
  local_a8 = (uint)DAT_1419df7b0;
  uStack_a4 = DAT_1419df7b0._4_4_;
  uStack_a0 = DAT_1419df7b8;
  uStack_9c = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_b8,3,&local_58);
  local_30 = 0x49;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_a8 = _DAT_1419e8c70;
  uStack_a4 = uRam00000001419e8c74;
  uStack_a0 = uRam00000001419e8c78;
  uStack_9c = uRam00000001419e8c7c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_a8);
  local_58 = local_98;
  local_a8 = DAT_141a09df8 & 0xffffff;
  uStack_a4 = (int)(DAT_141a09df8 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_a4 == 0xf) {
    uStack_a4 = 0x4000004;
  }
  else {
    uStack_a4 = uStack_a4 | 0x1000000;
  }
  uStack_5c = 0xf;
  local_68 = CONCAT44(uStack_a4,DAT_141a09df8) & 0xffffffff00ffffff;
  uStack_a0 = uStack_60;
  uStack_9c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_50 = local_88;
  local_a8 = (uint)DAT_1419df7b0;
  uStack_a4 = DAT_1419df7b0._4_4_;
  uStack_a0 = DAT_1419df7b8;
  uStack_9c = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_b8,3,&local_58);
  local_30 = 0x4a;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_a8 = _DAT_1419e8d00;
  uStack_a4 = uRam00000001419e8d04;
  uStack_a0 = uRam00000001419e8d08;
  uStack_9c = uRam00000001419e8d0c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_a8);
  local_58 = local_98;
  local_a8 = DAT_141a09e28 & 0xffffff;
  uStack_a4 = (int)(DAT_141a09e28 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_a4 == 0xf) {
    uStack_a4 = 0x4000004;
  }
  else {
    uStack_a4 = uStack_a4 | 0x1000000;
  }
  uStack_5c = 0xf;
  local_68 = CONCAT44(uStack_a4,DAT_141a09e28) & 0xffffffff00ffffff;
  uStack_a0 = uStack_60;
  uStack_9c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_50 = local_88;
  local_a8 = (uint)DAT_1419df7b0;
  uStack_a4 = DAT_1419df7b0._4_4_;
  uStack_a0 = DAT_1419df7b8;
  uStack_9c = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_b8,3,&local_58);
  local_30 = 0x4b;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_a8 = _DAT_1419e8d30;
  uStack_a4 = uRam00000001419e8d34;
  uStack_a0 = uRam00000001419e8d38;
  uStack_9c = uRam00000001419e8d3c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_a8);
  local_58 = local_98;
  local_a8 = DAT_141a09d48 & 0xffffff;
  uStack_a4 = (int)(DAT_141a09d48 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_a4 == 0xf) {
    uStack_a4 = 0x4000004;
  }
  else {
    uStack_a4 = uStack_a4 | 0x1000000;
  }
  uStack_5c = 0xf;
  local_68 = CONCAT44(uStack_a4,DAT_141a09d48) & 0xffffffff00ffffff;
  uStack_a0 = uStack_60;
  uStack_9c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_50 = local_88;
  local_a8 = (uint)DAT_1419df7b0;
  uStack_a4 = DAT_1419df7b0._4_4_;
  uStack_a0 = DAT_1419df7b8;
  uStack_9c = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_b8,3,&local_58);
  local_30 = 0x4c;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_a8 = _DAT_1419e8d20;
  uStack_a4 = uRam00000001419e8d24;
  uStack_a0 = uRam00000001419e8d28;
  uStack_9c = uRam00000001419e8d2c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_a8);
  local_58 = local_98;
  local_a8 = DAT_141a09d68 & 0xffffff;
  uStack_a4 = (int)(DAT_141a09d68 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_a4 == 0xf) {
    uStack_a4 = 0x4000004;
  }
  else {
    uStack_a4 = uStack_a4 | 0x1000000;
  }
  uStack_5c = 0xf;
  local_68 = CONCAT44(uStack_a4,DAT_141a09d68) & 0xffffffff00ffffff;
  uStack_a0 = uStack_60;
  uStack_9c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_50 = local_88;
  local_a8 = (uint)DAT_1419df7b0;
  uStack_a4 = DAT_1419df7b0._4_4_;
  uStack_a0 = DAT_1419df7b8;
  uStack_9c = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_b8,3,&local_58);
  local_30 = 0x4d;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_a8 = _DAT_1419e8ce0;
  uStack_a4 = uRam00000001419e8ce4;
  uStack_a0 = uRam00000001419e8ce8;
  uStack_9c = uRam00000001419e8cec;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_a8);
  local_58 = local_98;
  local_a8 = DAT_141a09d58 & 0xffffff;
  uStack_a4 = (int)(DAT_141a09d58 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_a4 == 0xf) {
    uStack_a4 = 0x4000004;
  }
  else {
    uStack_a4 = uStack_a4 | 0x1000000;
  }
  uStack_5c = 0xf;
  local_68 = CONCAT44(uStack_a4,DAT_141a09d58) & 0xffffffff00ffffff;
  uStack_a0 = uStack_60;
  uStack_9c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_50 = local_88;
  local_a8 = (uint)DAT_1419df7b0;
  uStack_a4 = DAT_1419df7b0._4_4_;
  uStack_a0 = DAT_1419df7b8;
  uStack_9c = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_b8,3,&local_58);
  local_30 = 0x4e;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_a8 = _DAT_1419e8cf0;
  uStack_a4 = uRam00000001419e8cf4;
  uStack_a0 = uRam00000001419e8cf8;
  uStack_9c = uRam00000001419e8cfc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_a8);
  local_58 = local_98;
  local_a8 = DAT_141a09de8 & 0xffffff;
  uStack_a4 = (int)(DAT_141a09de8 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_a4 == 0xf) {
    uStack_a4 = 0x4000004;
  }
  else {
    uStack_a4 = uStack_a4 | 0x1000000;
  }
  uStack_5c = 0xf;
  local_68 = CONCAT44(uStack_a4,DAT_141a09de8) & 0xffffffff00ffffff;
  uStack_a0 = uStack_60;
  uStack_9c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_50 = local_88;
  local_a8 = (uint)DAT_1419df7b0;
  uStack_a4 = DAT_1419df7b0._4_4_;
  uStack_a0 = DAT_1419df7b8;
  uStack_9c = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_b8,3,&local_58);
  local_30 = 0x4f;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_a8 = _DAT_1419e8c90;
  uStack_a4 = uRam00000001419e8c94;
  uStack_a0 = uRam00000001419e8c98;
  uStack_9c = uRam00000001419e8c9c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_a8);
  local_58 = local_98;
  local_a8 = DAT_141a09d88 & 0xffffff;
  uStack_a4 = (int)(DAT_141a09d88 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_a4 == 0xf) {
    uStack_a4 = 0x4000004;
  }
  else {
    uStack_a4 = uStack_a4 | 0x1000000;
  }
  uStack_5c = 0xf;
  local_68 = CONCAT44(uStack_a4,DAT_141a09d88) & 0xffffffff00ffffff;
  uStack_a0 = uStack_60;
  uStack_9c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_50 = local_88;
  local_a8 = (uint)DAT_1419df7b0;
  uStack_a4 = DAT_1419df7b0._4_4_;
  uStack_a0 = DAT_1419df7b8;
  uStack_9c = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_b8,3,&local_58);
  local_30 = 0x50;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_a8 = _DAT_1419e8cb0;
  uStack_a4 = uRam00000001419e8cb4;
  uStack_a0 = uRam00000001419e8cb8;
  uStack_9c = uRam00000001419e8cbc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_a8);
  local_58 = local_98;
  local_a8 = DAT_141a09db8 & 0xffffff;
  uStack_a4 = (int)(DAT_141a09db8 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_a4 == 0xf) {
    uStack_a4 = 0x4000004;
  }
  else {
    uStack_a4 = uStack_a4 | 0x1000000;
  }
  uStack_5c = 0xf;
  local_68 = CONCAT44(uStack_a4,DAT_141a09db8) & 0xffffffff00ffffff;
  uStack_a0 = uStack_60;
  uStack_9c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_50 = local_88;
  local_a8 = (uint)DAT_1419df7b0;
  uStack_a4 = DAT_1419df7b0._4_4_;
  uStack_a0 = DAT_1419df7b8;
  uStack_9c = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_b8,3,&local_58);
  local_30 = 0x52;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_a8 = _DAT_1419e8c80;
  uStack_a4 = uRam00000001419e8c84;
  uStack_a0 = uRam00000001419e8c88;
  uStack_9c = uRam00000001419e8c8c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_a8);
  local_58 = local_98;
  local_a8 = DAT_141a09dc8 & 0xffffff;
  uStack_a4 = (int)(DAT_141a09dc8 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_a4 == 0xf) {
    uStack_a4 = 0x4000004;
  }
  else {
    uStack_a4 = uStack_a4 | 0x1000000;
  }
  uStack_5c = 0xf;
  local_68 = CONCAT44(uStack_a4,DAT_141a09dc8) & 0xffffffff00ffffff;
  uStack_a0 = uStack_60;
  uStack_9c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_50 = local_88;
  local_a8 = (uint)DAT_1419df7b0;
  uStack_a4 = DAT_1419df7b0._4_4_;
  uStack_a0 = DAT_1419df7b8;
  uStack_9c = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_b8,3,&local_58);
  local_30 = 0x53;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_a8 = _DAT_1419e8ca0;
  uStack_a4 = uRam00000001419e8ca4;
  uStack_a0 = uRam00000001419e8ca8;
  uStack_9c = uRam00000001419e8cac;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_a8);
  local_58 = local_98;
  local_a8 = DAT_141a09d98 & 0xffffff;
  uStack_a4 = (int)(DAT_141a09d98 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_a4 == 0xf) {
    uStack_a4 = 0x4000004;
  }
  else {
    uStack_a4 = uStack_a4 | 0x1000000;
  }
  uStack_5c = 0xf;
  local_68 = CONCAT44(uStack_a4,DAT_141a09d98) & 0xffffffff00ffffff;
  uStack_a0 = uStack_60;
  uStack_9c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_50 = local_88;
  local_a8 = (uint)DAT_1419df7b0;
  uStack_a4 = DAT_1419df7b0._4_4_;
  uStack_a0 = DAT_1419df7b8;
  uStack_9c = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_b8,3,&local_58);
  local_30 = 0x54;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_a8 = _DAT_1419e8cc0;
  uStack_a4 = uRam00000001419e8cc4;
  uStack_a0 = uRam00000001419e8cc8;
  uStack_9c = uRam00000001419e8ccc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_a8);
  local_58 = local_98;
  local_a8 = DAT_141a09da8 & 0xffffff;
  uStack_a4 = (int)(DAT_141a09da8 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_a4 == 0xf) {
    uStack_a4 = 0x4000004;
  }
  else {
    uStack_a4 = uStack_a4 | 0x1000000;
  }
  uStack_5c = 0xf;
  local_68 = CONCAT44(uStack_a4,DAT_141a09da8) & 0xffffffff00ffffff;
  uStack_a0 = uStack_60;
  uStack_9c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_50 = local_88;
  local_a8 = (uint)DAT_1419df7b0;
  uStack_a4 = DAT_1419df7b0._4_4_;
  uStack_a0 = DAT_1419df7b8;
  uStack_9c = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_b8,3,&local_58);
  local_30 = 0x56;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_a8 = _DAT_1419e8c60;
  uStack_a4 = uRam00000001419e8c64;
  uStack_a0 = uRam00000001419e8c68;
  uStack_9c = uRam00000001419e8c6c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_a8);
  local_58 = local_98;
  local_a8 = DAT_141a09e18 & 0xffffff;
  uStack_a4 = (int)(DAT_141a09e18 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_a4 == 0xf) {
    uStack_a4 = 0x4000004;
  }
  else {
    uStack_a4 = uStack_a4 | 0x1000000;
  }
  uStack_5c = 0xf;
  local_68 = CONCAT44(uStack_a4,DAT_141a09e18) & 0xffffffff00ffffff;
  uStack_a0 = uStack_60;
  uStack_9c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_50 = local_88;
  local_a8 = (uint)DAT_1419df7b0;
  uStack_a4 = DAT_1419df7b0._4_4_;
  uStack_a0 = DAT_1419df7b8;
  uStack_9c = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_48 = local_78;
  gml_Script_truestate_enqueue(param_1,param_2,&local_b8,3,&local_58);
  local_30 = 0x58;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_a8 = _DAT_1419e8cd0;
  uStack_a4 = uRam00000001419e8cd4;
  uStack_a0 = uRam00000001419e8cd8;
  uStack_9c = uRam00000001419e8cdc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_a8);
  local_58 = local_98;
  gml_Script_truestate_queue_start(param_1,param_2,&local_b8,1,&local_58);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_40;
  return;
}

