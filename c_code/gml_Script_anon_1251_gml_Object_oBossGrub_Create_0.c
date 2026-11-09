// gml_Script_anon_1251_gml_Object_oBossGrub_Create_0 @ 0x140794790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_1251_gml_Object_oBossGrub_Create_0(longlong *param_1,undefined8 param_2)

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
  
  local_38 = "gml_Object_oBossGrub_Create_0";
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
  local_98 = 0x1000002000000cc;
  if (&local_98 != puVar1) {
    local_b8 = 0xcc;
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
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdab8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_30 = 9;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdaf8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4020000000000000;
  local_30 = 0xb;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdae8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_30 = 0xc;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04ba8);
  FUN_140e609c0(param_1);
  uStack_8c = 0xf;
  local_98 = 0x100000100000018;
  if (&local_98 != puVar1) {
    local_b8 = 0x18;
    uStack_b4 = 0x1000001;
    uStack_b0 = uStack_90;
    uStack_ac = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_30 = 0xe;
  puVar2 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05b88);
  if (puVar2 != &DAT_141dd67f8) {
    local_b8 = _DAT_141dd67f8;
    uStack_b4 = uRam0000000141dd67fc;
    uStack_b0 = uRam0000000141dd6800;
    uStack_ac = DAT_141dd6804;
    if ((1 << ((byte)*(undefined4 *)(puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_b8);
  }
  local_30 = 0x10;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f090);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4097700000000000;
  local_30 = 0x11;
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
  local_30 = 0x13;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1ed50);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3fd51eb851eb851f;
  local_30 = 0x16;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdb58);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_anon_1953_gml_Object_oBossGrub_Create_0,param_1);
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
  local_30 = 0x45;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04b78);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Object_oBossGrub_Step_0,param_1);
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
  local_30 = 0x68;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fda68);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Object_oBossGrub_Other_76,param_1);
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
  local_30 = 0x72;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = _DAT_1419e8140;
  uStack_b4 = uRam00000001419e8144;
  uStack_b0 = uRam00000001419e8148;
  uStack_ac = uRam00000001419e814c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_58 = local_88;
  local_b8 = DAT_141a08648 & 0xffffff;
  uStack_b4 = (int)(DAT_141a08648 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_b4 == 0xf) {
    uStack_b4 = 0x4000004;
  }
  else {
    uStack_b4 = uStack_b4 | 0x1000000;
  }
  uStack_8c = 0xf;
  local_98 = CONCAT44(uStack_b4,DAT_141a08648) & 0xffffffff00ffffff;
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
  local_30 = 0x73;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = _DAT_1419e8110;
  uStack_b4 = uRam00000001419e8114;
  uStack_b0 = uRam00000001419e8118;
  uStack_ac = uRam00000001419e811c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_58 = local_88;
  local_b8 = DAT_141a08668 & 0xffffff;
  uStack_b4 = (int)(DAT_141a08668 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_b4 == 0xf) {
    uStack_b4 = 0x4000004;
  }
  else {
    uStack_b4 = uStack_b4 | 0x1000000;
  }
  uStack_8c = 0xf;
  local_98 = CONCAT44(uStack_b4,DAT_141a08668) & 0xffffffff00ffffff;
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
  local_30 = 0x75;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = _DAT_1419e8160;
  uStack_b4 = uRam00000001419e8164;
  uStack_b0 = uRam00000001419e8168;
  uStack_ac = uRam00000001419e816c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_58 = local_88;
  local_b8 = DAT_141a08618 & 0xffffff;
  uStack_b4 = (int)(DAT_141a08618 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_b4 == 0xf) {
    uStack_b4 = 0x4000004;
  }
  else {
    uStack_b4 = uStack_b4 | 0x1000000;
  }
  uStack_8c = 0xf;
  local_98 = CONCAT44(uStack_b4,DAT_141a08618) & 0xffffffff00ffffff;
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
  local_30 = 0x77;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = _DAT_1419e8130;
  uStack_b4 = uRam00000001419e8134;
  uStack_b0 = uRam00000001419e8138;
  uStack_ac = uRam00000001419e813c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_58 = local_88;
  local_b8 = DAT_141a08678 & 0xffffff;
  uStack_b4 = (int)(DAT_141a08678 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_b4 == 0xf) {
    uStack_b4 = 0x4000004;
  }
  else {
    uStack_b4 = uStack_b4 | 0x1000000;
  }
  uStack_8c = 0xf;
  local_98 = CONCAT44(uStack_b4,DAT_141a08678) & 0xffffffff00ffffff;
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
  local_30 = 0x78;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = _DAT_1419e8170;
  uStack_b4 = uRam00000001419e8174;
  uStack_b0 = uRam00000001419e8178;
  uStack_ac = uRam00000001419e817c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_58 = local_88;
  local_b8 = DAT_141a086b8 & 0xffffff;
  uStack_b4 = (int)(DAT_141a086b8 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_b4 == 0xf) {
    uStack_b4 = 0x4000004;
  }
  else {
    uStack_b4 = uStack_b4 | 0x1000000;
  }
  uStack_8c = 0xf;
  local_98 = CONCAT44(uStack_b4,DAT_141a086b8) & 0xffffffff00ffffff;
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
  local_30 = 0x79;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = _DAT_1419e81c0;
  uStack_b4 = uRam00000001419e81c4;
  uStack_b0 = uRam00000001419e81c8;
  uStack_ac = uRam00000001419e81cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_58 = local_88;
  local_b8 = DAT_141a08628 & 0xffffff;
  uStack_b4 = (int)(DAT_141a08628 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_b4 == 0xf) {
    uStack_b4 = 0x4000004;
  }
  else {
    uStack_b4 = uStack_b4 | 0x1000000;
  }
  uStack_8c = 0xf;
  local_98 = CONCAT44(uStack_b4,DAT_141a08628) & 0xffffffff00ffffff;
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
  local_30 = 0x7b;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = _DAT_1419e8100;
  uStack_b4 = uRam00000001419e8104;
  uStack_b0 = uRam00000001419e8108;
  uStack_ac = uRam00000001419e810c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_58 = local_88;
  local_b8 = DAT_141a08688 & 0xffffff;
  uStack_b4 = (int)(DAT_141a08688 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_b4 == 0xf) {
    uStack_b4 = 0x4000004;
  }
  else {
    uStack_b4 = uStack_b4 | 0x1000000;
  }
  uStack_8c = 0xf;
  local_98 = CONCAT44(uStack_b4,DAT_141a08688) & 0xffffffff00ffffff;
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
  local_30 = 0x7c;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = _DAT_1419e81d0;
  uStack_b4 = uRam00000001419e81d4;
  uStack_b0 = uRam00000001419e81d8;
  uStack_ac = uRam00000001419e81dc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_58 = local_88;
  local_b8 = DAT_141a08698 & 0xffffff;
  uStack_b4 = (int)(DAT_141a08698 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_b4 == 0xf) {
    uStack_b4 = 0x4000004;
  }
  else {
    uStack_b4 = uStack_b4 | 0x1000000;
  }
  uStack_8c = 0xf;
  local_98 = CONCAT44(uStack_b4,DAT_141a08698) & 0xffffffff00ffffff;
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
  local_30 = 0x7d;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = _DAT_1419e8180;
  uStack_b4 = uRam00000001419e8184;
  uStack_b0 = uRam00000001419e8188;
  uStack_ac = uRam00000001419e818c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_58 = local_88;
  local_b8 = DAT_141a086c8 & 0xffffff;
  uStack_b4 = (int)(DAT_141a086c8 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_b4 == 0xf) {
    uStack_b4 = 0x4000004;
  }
  else {
    uStack_b4 = uStack_b4 | 0x1000000;
  }
  uStack_8c = 0xf;
  local_98 = CONCAT44(uStack_b4,DAT_141a086c8) & 0xffffffff00ffffff;
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
  local_30 = 0x7f;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = _DAT_1419e8120;
  uStack_b4 = uRam00000001419e8124;
  uStack_b0 = uRam00000001419e8128;
  uStack_ac = uRam00000001419e812c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_58 = local_88;
  local_b8 = DAT_141a086a8 & 0xffffff;
  uStack_b4 = (int)(DAT_141a086a8 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_b4 == 0xf) {
    uStack_b4 = 0x4000004;
  }
  else {
    uStack_b4 = uStack_b4 | 0x1000000;
  }
  uStack_8c = 0xf;
  local_98 = CONCAT44(uStack_b4,DAT_141a086a8) & 0xffffffff00ffffff;
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
  local_30 = 0x81;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_b8 = _DAT_1419e8140;
  uStack_b4 = uRam00000001419e8144;
  uStack_b0 = uRam00000001419e8148;
  uStack_ac = uRam00000001419e814c;
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

