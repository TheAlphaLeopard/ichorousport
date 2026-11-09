// gml_Object_oBossTongue_Draw_0 @ 0x1408436b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBossTongue_Draw_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined8 local_30;
  char *local_28;
  undefined4 local_20;
  
  local_28 = "gml_Object_oBossTongue_Create_0";
  local_20 = 0;
  local_30 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_30;
  _eh_vector_constructor_iterator_(local_78,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_20 = 3;
  FUN_140e98b30(param_1,param_2);
  local_20 = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f0d0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0xc010000000000000;
  local_20 = 6;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fde08);
  uStack_7c = 0xd;
  local_88 = 0;
  if (&local_88 != puVar1) {
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = uStack_80;
    uStack_9c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_a8);
  }
  local_20 = 9;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04b78);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_88,gml_Object_oBossUi_Create_0,param_1);
  if (&local_88 != puVar1) {
    local_a8 = (uint)local_88;
    uStack_a4 = local_88._4_4_;
    uStack_a0 = uStack_80;
    uStack_9c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_a8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140e60910(1);
  local_20 = 0x11;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04ba8);
  FUN_140e609c0(param_1);
  uStack_7c = 0xf;
  local_88 = 0x10000010000001d;
  if (&local_88 != puVar1) {
    local_a8 = 0x1d;
    uStack_a4 = 0x1000001;
    uStack_a0 = uStack_80;
    uStack_9c = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_a8);
  }
  FUN_140e60910(1);
  local_20 = 0x13;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419feea8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = &DAT_bff0000000000000;
  local_20 = 0x15;
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  local_a8 = _DAT_1419e8e20;
  uStack_a4 = uRam00000001419e8e24;
  uStack_a0 = uRam00000001419e8e28;
  uStack_9c = uRam00000001419e8e2c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_48 = local_78;
  local_a8 = DAT_141a09e78 & 0xffffff;
  uStack_a4 = (int)(DAT_141a09e78 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_a4 == 0xf) {
    uStack_a4 = 0x4000004;
  }
  else {
    uStack_a4 = uStack_a4 | 0x1000000;
  }
  uStack_7c = 0xf;
  local_88 = CONCAT44(uStack_a4,DAT_141a09e78) & 0xffffffff00ffffff;
  uStack_a0 = uStack_80;
  uStack_9c = 0xf;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_a8);
  local_40 = local_68;
  local_a8 = (uint)DAT_1419df7b0;
  uStack_a4 = DAT_1419df7b0._4_4_;
  uStack_a0 = DAT_1419df7b8;
  uStack_9c = DAT_1419df7bc;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_a8);
  local_38 = local_58;
  gml_Script_truestate_enqueue(param_1,param_2,&local_98,3,&local_48);
  local_20 = 0x17;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  local_a8 = _DAT_1419e8e10;
  uStack_a4 = uRam00000001419e8e14;
  uStack_a0 = uRam00000001419e8e18;
  uStack_9c = uRam00000001419e8e1c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_48 = local_78;
  local_a8 = DAT_141a09e88 & 0xffffff;
  uStack_a4 = (int)(DAT_141a09e88 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_a4 == 0xf) {
    uStack_a4 = 0x4000004;
  }
  else {
    uStack_a4 = uStack_a4 | 0x1000000;
  }
  uStack_7c = 0xf;
  local_88 = CONCAT44(uStack_a4,DAT_141a09e88) & 0xffffffff00ffffff;
  uStack_a0 = uStack_80;
  uStack_9c = 0xf;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_a8);
  local_40 = local_68;
  local_a8 = (uint)DAT_1419df7b0;
  uStack_a4 = DAT_1419df7b0._4_4_;
  uStack_a0 = DAT_1419df7b8;
  uStack_9c = DAT_1419df7bc;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_a8);
  local_38 = local_58;
  gml_Script_truestate_enqueue(param_1,param_2,&local_98,3,&local_48);
  local_20 = 0x19;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  local_a8 = _DAT_1419e8e60;
  uStack_a4 = uRam00000001419e8e64;
  uStack_a0 = uRam00000001419e8e68;
  uStack_9c = uRam00000001419e8e6c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_48 = local_78;
  local_a8 = DAT_141a09e68 & 0xffffff;
  uStack_a4 = (int)(DAT_141a09e68 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_a4 == 0xf) {
    uStack_a4 = 0x4000004;
  }
  else {
    uStack_a4 = uStack_a4 | 0x1000000;
  }
  uStack_7c = 0xf;
  local_88 = CONCAT44(uStack_a4,DAT_141a09e68) & 0xffffffff00ffffff;
  uStack_a0 = uStack_80;
  uStack_9c = 0xf;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_a8);
  local_40 = local_68;
  local_a8 = (uint)DAT_1419df7b0;
  uStack_a4 = DAT_1419df7b0._4_4_;
  uStack_a0 = DAT_1419df7b8;
  uStack_9c = DAT_1419df7bc;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_a8);
  local_38 = local_58;
  gml_Script_truestate_enqueue(param_1,param_2,&local_98,3,&local_48);
  local_20 = 0x1a;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  local_a8 = _DAT_1419e8e50;
  uStack_a4 = uRam00000001419e8e54;
  uStack_a0 = uRam00000001419e8e58;
  uStack_9c = uRam00000001419e8e5c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_48 = local_78;
  local_a8 = DAT_141a09e48 & 0xffffff;
  uStack_a4 = (int)(DAT_141a09e48 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_a4 == 0xf) {
    uStack_a4 = 0x4000004;
  }
  else {
    uStack_a4 = uStack_a4 | 0x1000000;
  }
  uStack_7c = 0xf;
  local_88 = CONCAT44(uStack_a4,DAT_141a09e48) & 0xffffffff00ffffff;
  uStack_a0 = uStack_80;
  uStack_9c = 0xf;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_a8);
  local_40 = local_68;
  local_a8 = (uint)DAT_1419df7b0;
  uStack_a4 = DAT_1419df7b0._4_4_;
  uStack_a0 = DAT_1419df7b8;
  uStack_9c = DAT_1419df7bc;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_a8);
  local_38 = local_58;
  gml_Script_truestate_enqueue(param_1,param_2,&local_98,3,&local_48);
  local_20 = 0x1b;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  local_a8 = _DAT_1419e8e30;
  uStack_a4 = uRam00000001419e8e34;
  uStack_a0 = uRam00000001419e8e38;
  uStack_9c = uRam00000001419e8e3c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_48 = local_78;
  local_a8 = DAT_141a09ea8 & 0xffffff;
  uStack_a4 = (int)(DAT_141a09ea8 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_a4 == 0xf) {
    uStack_a4 = 0x4000004;
  }
  else {
    uStack_a4 = uStack_a4 | 0x1000000;
  }
  uStack_7c = 0xf;
  local_88 = CONCAT44(uStack_a4,DAT_141a09ea8) & 0xffffffff00ffffff;
  uStack_a0 = uStack_80;
  uStack_9c = 0xf;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_a8);
  local_40 = local_68;
  local_a8 = (uint)DAT_1419df7b0;
  uStack_a4 = DAT_1419df7b0._4_4_;
  uStack_a0 = DAT_1419df7b8;
  uStack_9c = DAT_1419df7bc;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_a8);
  local_38 = local_58;
  gml_Script_truestate_enqueue(param_1,param_2,&local_98,3,&local_48);
  local_20 = 0x1c;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  local_a8 = _DAT_1419e8e40;
  uStack_a4 = uRam00000001419e8e44;
  uStack_a0 = uRam00000001419e8e48;
  uStack_9c = uRam00000001419e8e4c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_48 = local_78;
  local_a8 = DAT_141a09e58 & 0xffffff;
  uStack_a4 = (int)(DAT_141a09e58 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_a4 == 0xf) {
    uStack_a4 = 0x4000004;
  }
  else {
    uStack_a4 = uStack_a4 | 0x1000000;
  }
  uStack_7c = 0xf;
  local_88 = CONCAT44(uStack_a4,DAT_141a09e58) & 0xffffffff00ffffff;
  uStack_a0 = uStack_80;
  uStack_9c = 0xf;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_a8);
  local_40 = local_68;
  local_a8 = (uint)DAT_1419df7b0;
  uStack_a4 = DAT_1419df7b0._4_4_;
  uStack_a0 = DAT_1419df7b8;
  uStack_9c = DAT_1419df7bc;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_a8);
  local_38 = local_58;
  gml_Script_truestate_enqueue(param_1,param_2,&local_98,3,&local_48);
  local_20 = 0x1e;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  local_a8 = _DAT_1419e8e00;
  uStack_a4 = uRam00000001419e8e04;
  uStack_a0 = uRam00000001419e8e08;
  uStack_9c = uRam00000001419e8e0c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_48 = local_78;
  local_a8 = DAT_141a09e98 & 0xffffff;
  uStack_a4 = (int)(DAT_141a09e98 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_a4 == 0xf) {
    uStack_a4 = 0x4000004;
  }
  else {
    uStack_a4 = uStack_a4 | 0x1000000;
  }
  uStack_7c = 0xf;
  local_88 = CONCAT44(uStack_a4,DAT_141a09e98) & 0xffffffff00ffffff;
  uStack_a0 = uStack_80;
  uStack_9c = 0xf;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_a8);
  local_40 = local_68;
  local_a8 = (uint)DAT_1419df7b0;
  uStack_a4 = DAT_1419df7b0._4_4_;
  uStack_a0 = DAT_1419df7b8;
  uStack_9c = DAT_1419df7bc;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_a8);
  local_38 = local_58;
  gml_Script_truestate_enqueue(param_1,param_2,&local_98,3,&local_48);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_30;
  return;
}

