// gml_Script_truestate_set_default @ 0x140627de0

undefined8 *
gml_Script_truestate_set_default(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_truestate_system_init";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0xe;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f2b0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0xc010000000000000;
  local_48 = 0xf;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00058);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0xc010000000000000;
  local_48 = 0x10;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fea18);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0xc010000000000000;
  local_48 = 0x11;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a001f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0xc010000000000000;
  local_48 = 0x12;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00278);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0xc010000000000000;
  local_48 = 0x14;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00168);
  uStack_6c = 0xd;
  local_78 = 0;
  if (&local_78 != puVar1) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  local_48 = 0x15;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fffd8);
  uStack_6c = 0xd;
  local_78 = 0;
  if (&local_78 != puVar1) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  local_48 = 0x16;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00088);
  uStack_6c = 0xd;
  local_78 = 0;
  if (&local_78 != puVar1) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  local_48 = 0x17;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a000e8);
  uStack_6c = 0xd;
  local_78 = 0;
  if (&local_78 != puVar1) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  local_48 = 0x19;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_88 = 0;
  local_80 = 0;
  local_7c = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00228);
  FUN_140e609c0(param_1);
  puVar3 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_88,0,DAT_1419ff3e8,0);
  if (puVar3 != puVar2) {
    local_68 = *puVar3;
    uStack_64 = puVar3[1];
    uStack_60 = puVar3[2];
    uStack_5c = puVar3[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x1a;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_88 = 0;
  local_80 = 0;
  local_7c = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00238);
  FUN_140e609c0(param_1);
  puVar3 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_88,0,DAT_1419ff3e8,0);
  if (puVar3 != puVar2) {
    local_68 = *puVar3;
    uStack_64 = puVar3[1];
    uStack_60 = puVar3[2];
    uStack_5c = puVar3[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x1b;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_88 = 0;
  local_80 = 0;
  local_7c = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd438);
  FUN_140e609c0(param_1);
  puVar3 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_88,0,DAT_1419ff3e8,0);
  if (puVar3 != puVar2) {
    local_68 = *puVar3;
    uStack_64 = puVar3[1];
    uStack_60 = puVar3[2];
    uStack_5c = puVar3[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x1c;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_88 = 0;
  local_80 = 0;
  local_7c = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fffa8);
  FUN_140e609c0(param_1);
  puVar3 = (undefined4 *)FUN_140ea9060(&local_88);
  if (puVar3 != puVar2) {
    local_68 = *puVar3;
    uStack_64 = puVar3[1];
    uStack_60 = puVar3[2];
    uStack_5c = puVar3[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x1d;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_88 = 0;
  local_80 = 0;
  local_7c = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00108);
  FUN_140e609c0(param_1);
  puVar3 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_88,0,DAT_141a00038,0);
  if (puVar3 != puVar2) {
    local_68 = *puVar3;
    uStack_64 = puVar3[1];
    uStack_60 = puVar3[2];
    uStack_5c = puVar3[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x1f;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd3b8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

