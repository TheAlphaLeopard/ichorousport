// gml_Script___scribble_asset_is_krutidev @ 0x1401f0e90

undefined8 *
gml_Script___scribble_asset_is_krutidev(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script___scribble_random";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x65;
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddda80) {
    _Init_thread_header(&DAT_141ddda80);
    if (DAT_141ddda80 == -1) {
      DAT_141ddda78 = (longlong *)FUN_140e63aa0(DAT_141a0a028);
      _Init_thread_footer(&DAT_141ddda80);
    }
  }
  if (DAT_141ddc09c == '\0') {
    FUN_140e64380(DAT_141ddda78,"gml_Script___scribble_random");
    FUN_140e64380(param_1,"gml_Script___scribble_random");
  }
  local_38 = 0x67;
  if (DAT_141ddc09c == '\0') {
    DAT_141ddc09c = '\x01';
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddda78 + 0x10))(DAT_141ddda78,DAT_141a0a1f8);
    FUN_140e609c0(DAT_141ddda78);
    puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_58,0,DAT_141a0a228,0);
    uStack_7c = *(undefined4 *)((longlong)puVar2 + 0xc);
    uStack_80 = *(undefined4 *)(puVar2 + 1);
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) == 0) {
      local_88 = *puVar2;
    }
    else {
      FUN_1400419b0(&local_88,puVar2);
    }
    uStack_6c = 7;
    local_78 = CONCAT44(local_78._4_4_,100);
    FUN_140042560(&local_88,&local_78);
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    if (&local_88 != puVar1) {
      local_68 = local_88;
      uStack_60 = uStack_80;
      uStack_5c = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_68);
    }
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140e60910(1);
  }
  local_38 = 0x68;
  puVar1 = (undefined8 *)(**(code **)(*DAT_141ddda78 + 8))(DAT_141ddda78,DAT_141a0a1f8);
  puVar2 = (undefined8 *)(**(code **)(*DAT_141ddda78 + 0x10))(DAT_141ddda78,DAT_141a0a1f8);
  FUN_140e609c0(DAT_141ddda78);
  uStack_6c = 0;
  local_78 = 0x40e791e000000000;
  FUN_140042560(&local_78,puVar1);
  uStack_7c = uStack_6c;
  uStack_80 = uStack_70;
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) == 0) {
    local_88 = local_78;
  }
  else {
    FUN_1400419b0(&local_88,&local_78);
  }
  uStack_5c = 7;
  local_68 = CONCAT44(local_68._4_4_,0x7fffffff);
  FUN_140046880(&local_88,&local_68);
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if (&local_88 != puVar2) {
    local_68 = local_88;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140e60910(1);
  local_38 = 0x69;
  uStack_6c = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_70 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) == 0) {
    local_78 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_78,puVar1);
  }
  uStack_5c = 0;
  local_68 = 0x41e0000000000000;
  FUN_140046500(&local_78,&local_68);
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if (&local_78 != param_3) {
    local_68 = local_78;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_68);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

