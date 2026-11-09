// gml_Object_oLockedShop_Create_0 @ 0x140b435f0

void gml_Object_oLockedShop_Create_0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Object_oLifeStealEffect_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_38 = 2;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3e58);
  FUN_140e85f80(param_1,DAT_141a00d18,0x80000000,&local_68);
  FUN_140e609c0(param_1);
  uStack_7c = local_5c;
  uStack_80 = local_60;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) == 0) {
    local_88 = local_68;
  }
  else {
    FUN_1400419b0(&local_88,&local_68);
  }
  uStack_4c = 0;
  local_58 = 0x4000000000000000;
  FUN_140046500(&local_88,&local_58);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if (&local_88 != puVar1) {
    local_58 = local_88;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140e60910(1);
  local_38 = 3;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3e68);
  FUN_140e85f80(param_1,DAT_141a00c48,0x80000000,&local_78);
  FUN_140e609c0(param_1);
  uStack_7c = local_6c;
  uStack_80 = local_70;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) == 0) {
    local_88 = local_78;
  }
  else {
    FUN_1400419b0(&local_88,&local_78);
  }
  uStack_4c = 0;
  local_58 = 0x4000000000000000;
  FUN_140046500(&local_88,&local_58);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if (&local_88 != puVar1) {
    local_58 = local_88;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140e60910(1);
  local_38 = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0xc010000000000000;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return;
}

