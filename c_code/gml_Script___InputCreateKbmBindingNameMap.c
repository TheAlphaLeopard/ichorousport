// gml_Script___InputCreateKbmBindingNameMap @ 0x140070f80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___InputCreateKbmBindingNameMap(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script___InputCreateGamepadBindingNameLookup";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 3;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_3c = 0xffffff;
  local_48 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 5;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3e8);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_b8,0,uVar2,0);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar1 != &local_48) {
    local_a8 = *(undefined4 *)puVar1;
    uStack_a4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_a0 = *(undefined4 *)(puVar1 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140041b80(&local_48,&local_a8);
  }
  local_28 = 7;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfbc0;
  uStack_a4 = uRam00000001419dfbc4;
  uStack_a0 = uRam00000001419dfbc8;
  uStack_9c = uRam00000001419dfbcc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7de8;
  uStack_a4 = uRam0000000141dc7dec;
  uStack_a0 = uRam0000000141dc7df0;
  uStack_9c = DAT_141dc7df4;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 8;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfc70;
  uStack_a4 = uRam00000001419dfc74;
  uStack_a0 = uRam00000001419dfc78;
  uStack_9c = uRam00000001419dfc7c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7f08;
  uStack_a4 = uRam0000000141dc7f0c;
  uStack_a0 = uRam0000000141dc7f10;
  uStack_9c = DAT_141dc7f14;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 9;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfda0;
  uStack_a4 = uRam00000001419dfda4;
  uStack_a0 = uRam00000001419dfda8;
  uStack_9c = uRam00000001419dfdac;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7e88;
  uStack_a4 = uRam0000000141dc7e8c;
  uStack_a0 = uRam0000000141dc7e90;
  uStack_9c = DAT_141dc7e94;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 10;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfc80;
  uStack_a4 = uRam00000001419dfc84;
  uStack_a0 = uRam00000001419dfc88;
  uStack_9c = uRam00000001419dfc8c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7dc8;
  uStack_a4 = uRam0000000141dc7dcc;
  uStack_a0 = uRam0000000141dc7dd0;
  uStack_9c = DAT_141dc7dd4;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0xb;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfde0;
  uStack_a4 = uRam00000001419dfde4;
  uStack_a0 = uRam00000001419dfde8;
  uStack_9c = uRam00000001419dfdec;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7fc8;
  uStack_a4 = uRam0000000141dc7fcc;
  uStack_a0 = uRam0000000141dc7fd0;
  uStack_9c = DAT_141dc7fd4;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0xd;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfd30;
  uStack_a4 = uRam00000001419dfd34;
  uStack_a0 = uRam00000001419dfd38;
  uStack_9c = uRam00000001419dfd3c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7f28;
  uStack_a4 = uRam0000000141dc7f2c;
  uStack_a0 = uRam0000000141dc7f30;
  uStack_9c = DAT_141dc7f34;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0xe;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfc30;
  uStack_a4 = uRam00000001419dfc34;
  uStack_a0 = uRam00000001419dfc38;
  uStack_9c = uRam00000001419dfc3c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7f98;
  uStack_a4 = uRam0000000141dc7f9c;
  uStack_a0 = uRam0000000141dc7fa0;
  uStack_9c = DAT_141dc7fa4;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0xf;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfca0;
  uStack_a4 = uRam00000001419dfca4;
  uStack_a0 = uRam00000001419dfca8;
  uStack_9c = uRam00000001419dfcac;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7e28;
  uStack_a4 = uRam0000000141dc7e2c;
  uStack_a0 = uRam0000000141dc7e30;
  uStack_9c = DAT_141dc7e34;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x10;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfdc0;
  uStack_a4 = uRam00000001419dfdc4;
  uStack_a0 = uRam00000001419dfdc8;
  uStack_9c = uRam00000001419dfdcc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7f58;
  uStack_a4 = uRam0000000141dc7f5c;
  uStack_a0 = uRam0000000141dc7f60;
  uStack_9c = DAT_141dc7f64;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x11;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfc10;
  uStack_a4 = uRam00000001419dfc14;
  uStack_a0 = uRam00000001419dfc18;
  uStack_9c = uRam00000001419dfc1c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7e68;
  uStack_a4 = uRam0000000141dc7e6c;
  uStack_a0 = uRam0000000141dc7e70;
  uStack_9c = DAT_141dc7e74;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x13;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfcd0;
  uStack_a4 = uRam00000001419dfcd4;
  uStack_a0 = uRam00000001419dfcd8;
  uStack_9c = uRam00000001419dfcdc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7e58;
  uStack_a4 = uRam0000000141dc7e5c;
  uStack_a0 = uRam0000000141dc7e60;
  uStack_9c = DAT_141dc7e64;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x14;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfbe0;
  uStack_a4 = uRam00000001419dfbe4;
  uStack_a0 = uRam00000001419dfbe8;
  uStack_9c = uRam00000001419dfbec;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7e98;
  uStack_a4 = uRam0000000141dc7e9c;
  uStack_a0 = uRam0000000141dc7ea0;
  uStack_9c = DAT_141dc7ea4;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x15;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfd70;
  uStack_a4 = uRam00000001419dfd74;
  uStack_a0 = uRam00000001419dfd78;
  uStack_9c = uRam00000001419dfd7c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7da8;
  uStack_a4 = uRam0000000141dc7dac;
  uStack_a0 = uRam0000000141dc7db0;
  uStack_9c = DAT_141dc7db4;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x16;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfd10;
  uStack_a4 = uRam00000001419dfd14;
  uStack_a0 = uRam00000001419dfd18;
  uStack_9c = uRam00000001419dfd1c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7db8;
  uStack_a4 = uRam0000000141dc7dbc;
  uStack_a0 = uRam0000000141dc7dc0;
  uStack_9c = DAT_141dc7dc4;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x18;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfcb0;
  uStack_a4 = uRam00000001419dfcb4;
  uStack_a0 = uRam00000001419dfcb8;
  uStack_9c = uRam00000001419dfcbc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7f68;
  uStack_a4 = uRam0000000141dc7f6c;
  uStack_a0 = uRam0000000141dc7f70;
  uStack_9c = DAT_141dc7f74;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x19;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfd80;
  uStack_a4 = uRam00000001419dfd84;
  uStack_a0 = uRam00000001419dfd88;
  uStack_9c = uRam00000001419dfd8c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7e08;
  uStack_a4 = uRam0000000141dc7e0c;
  uStack_a0 = uRam0000000141dc7e10;
  uStack_9c = DAT_141dc7e14;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x1a;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfdd0;
  uStack_a4 = uRam00000001419dfdd4;
  uStack_a0 = uRam00000001419dfdd8;
  uStack_9c = uRam00000001419dfddc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7dd8;
  uStack_a4 = uRam0000000141dc7ddc;
  uStack_a0 = uRam0000000141dc7de0;
  uStack_9c = DAT_141dc7de4;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x1b;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfdb0;
  uStack_a4 = uRam00000001419dfdb4;
  uStack_a0 = uRam00000001419dfdb8;
  uStack_9c = uRam00000001419dfdbc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7e78;
  uStack_a4 = uRam0000000141dc7e7c;
  uStack_a0 = uRam0000000141dc7e80;
  uStack_9c = DAT_141dc7e84;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x1d;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfd20;
  uStack_a4 = uRam00000001419dfd24;
  uStack_a0 = uRam00000001419dfd28;
  uStack_9c = uRam00000001419dfd2c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7e18;
  uStack_a4 = uRam0000000141dc7e1c;
  uStack_a0 = uRam0000000141dc7e20;
  uStack_9c = DAT_141dc7e24;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x1e;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfc20;
  uStack_a4 = uRam00000001419dfc24;
  uStack_a0 = uRam00000001419dfc28;
  uStack_9c = uRam00000001419dfc2c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7df8;
  uStack_a4 = uRam0000000141dc7dfc;
  uStack_a0 = uRam0000000141dc7e00;
  uStack_9c = DAT_141dc7e04;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x1f;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfd40;
  uStack_a4 = uRam00000001419dfd44;
  uStack_a0 = uRam00000001419dfd48;
  uStack_9c = uRam00000001419dfd4c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7eb8;
  uStack_a4 = uRam0000000141dc7ebc;
  uStack_a0 = uRam0000000141dc7ec0;
  uStack_9c = DAT_141dc7ec4;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x20;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfd50;
  uStack_a4 = uRam00000001419dfd54;
  uStack_a0 = uRam00000001419dfd58;
  uStack_9c = uRam00000001419dfd5c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7f78;
  uStack_a4 = uRam0000000141dc7f7c;
  uStack_a0 = uRam0000000141dc7f80;
  uStack_9c = DAT_141dc7f84;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x22;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfc60;
  uStack_a4 = uRam00000001419dfc64;
  uStack_a0 = uRam00000001419dfc68;
  uStack_9c = uRam00000001419dfc6c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7ec8;
  uStack_a4 = uRam0000000141dc7ecc;
  uStack_a0 = uRam0000000141dc7ed0;
  uStack_9c = DAT_141dc7ed4;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x23;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfc40;
  uStack_a4 = uRam00000001419dfc44;
  uStack_a0 = uRam00000001419dfc48;
  uStack_9c = uRam00000001419dfc4c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7fa8;
  uStack_a4 = uRam0000000141dc7fac;
  uStack_a0 = uRam0000000141dc7fb0;
  uStack_9c = DAT_141dc7fb4;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x24;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfd00;
  uStack_a4 = uRam00000001419dfd04;
  uStack_a0 = uRam00000001419dfd08;
  uStack_9c = uRam00000001419dfd0c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7d98;
  uStack_a4 = uRam0000000141dc7d9c;
  uStack_a0 = uRam0000000141dc7da0;
  uStack_9c = DAT_141dc7da4;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x26;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfcc0;
  uStack_a4 = uRam00000001419dfcc4;
  uStack_a0 = uRam00000001419dfcc8;
  uStack_9c = uRam00000001419dfccc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7fb8;
  uStack_a4 = uRam0000000141dc7fbc;
  uStack_a0 = uRam0000000141dc7fc0;
  uStack_9c = DAT_141dc7fc4;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x27;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfcf0;
  uStack_a4 = uRam00000001419dfcf4;
  uStack_a0 = uRam00000001419dfcf8;
  uStack_9c = uRam00000001419dfcfc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7ea8;
  uStack_a4 = uRam0000000141dc7eac;
  uStack_a0 = uRam0000000141dc7eb0;
  uStack_9c = DAT_141dc7eb4;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x28;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfce0;
  uStack_a4 = uRam00000001419dfce4;
  uStack_a0 = uRam00000001419dfce8;
  uStack_9c = uRam00000001419dfcec;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7e38;
  uStack_a4 = uRam0000000141dc7e3c;
  uStack_a0 = uRam0000000141dc7e40;
  uStack_9c = DAT_141dc7e44;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x29;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfc00;
  uStack_a4 = uRam00000001419dfc04;
  uStack_a0 = uRam00000001419dfc08;
  uStack_9c = uRam00000001419dfc0c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7f48;
  uStack_a4 = uRam0000000141dc7f4c;
  uStack_a0 = uRam0000000141dc7f50;
  uStack_9c = DAT_141dc7f54;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x2b;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfc50;
  uStack_a4 = uRam00000001419dfc54;
  uStack_a0 = uRam00000001419dfc58;
  uStack_9c = uRam00000001419dfc5c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7f18;
  uStack_a4 = uRam0000000141dc7f1c;
  uStack_a0 = uRam0000000141dc7f20;
  uStack_9c = DAT_141dc7f24;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x2c;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfbb0;
  uStack_a4 = uRam00000001419dfbb4;
  uStack_a0 = uRam00000001419dfbb8;
  uStack_9c = uRam00000001419dfbbc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7ed8;
  uStack_a4 = uRam0000000141dc7edc;
  uStack_a0 = uRam0000000141dc7ee0;
  uStack_9c = DAT_141dc7ee4;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x2d;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfc90;
  uStack_a4 = uRam00000001419dfc94;
  uStack_a0 = uRam00000001419dfc98;
  uStack_9c = uRam00000001419dfc9c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7f38;
  uStack_a4 = uRam0000000141dc7f3c;
  uStack_a0 = uRam0000000141dc7f40;
  uStack_9c = DAT_141dc7f44;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x2e;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfbf0;
  uStack_a4 = uRam00000001419dfbf4;
  uStack_a0 = uRam00000001419dfbf8;
  uStack_9c = uRam00000001419dfbfc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7e48;
  uStack_a4 = uRam0000000141dc7e4c;
  uStack_a0 = uRam0000000141dc7e50;
  uStack_9c = DAT_141dc7e54;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x2f;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfd90;
  uStack_a4 = uRam00000001419dfd94;
  uStack_a0 = uRam00000001419dfd98;
  uStack_9c = uRam00000001419dfd9c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7ee8;
  uStack_a4 = uRam0000000141dc7eec;
  uStack_a0 = uRam0000000141dc7ef0;
  uStack_9c = DAT_141dc7ef4;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x30;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfd60;
  uStack_a4 = uRam00000001419dfd64;
  uStack_a0 = uRam00000001419dfd68;
  uStack_9c = uRam00000001419dfd6c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7ef8;
  uStack_a4 = uRam0000000141dc7efc;
  uStack_a0 = uRam0000000141dc7f00;
  uStack_9c = DAT_141dc7f04;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_b8,3,uVar2,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x32;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_68 = &local_48;
  local_a8 = _DAT_1419dfbd0;
  uStack_a4 = uRam00000001419dfbd4;
  uStack_a0 = uRam00000001419dfbd8;
  uStack_9c = uRam00000001419dfbdc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_60 = local_88;
  local_a8 = _DAT_141dc7f88;
  uStack_a4 = uRam0000000141dc7f8c;
  uStack_a0 = uRam0000000141dc7f90;
  uStack_9c = DAT_141dc7f94;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_58 = local_78;
  FUN_140e634e0(param_1,param_2,&local_b8,3,CONCAT44(uVar3,DAT_1419ff3d8),&local_68);
  local_28 = 0x34;
  if (&local_48 != param_3) {
    local_a8 = (undefined4)local_48;
    uStack_a4 = local_48._4_4_;
    uStack_a0 = uStack_40;
    uStack_9c = uStack_3c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_a8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

