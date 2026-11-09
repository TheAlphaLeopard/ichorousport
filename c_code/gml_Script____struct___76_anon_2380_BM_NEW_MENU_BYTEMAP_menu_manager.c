// gml_Script____struct___76_anon_2380_BM_NEW_MENU_BYTEMAP_menu_manager @ 0x14024d4c0

undefined8 *
gml_Script____struct___76_anon_2380_BM_NEW_MENU_BYTEMAP_menu_manager
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script____struct___75@anon@2380@BM_NEW_MENU@BYTEMAP_menu_manager";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x48;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddcbc) {
    _Init_thread_header(&DAT_141dddcbc);
    if (DAT_141dddcbc == -1) {
      DAT_141dddcb0 = FUN_140e63aa0(DAT_141a55760);
      _Init_thread_footer(&DAT_141dddcbc);
    }
  }
  FUN_140e643a0(param_1,DAT_141dddcb0);
  local_38 = 0x4c;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a46588);
  FUN_140e609c0(param_1);
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
  }
  if (puVar2 != puVar1) {
    local_68 = *(undefined4 *)puVar2;
    uStack_64 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_60 = *(undefined4 *)(puVar2 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x4d;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44c08);
  FUN_140e609c0(param_1);
  if (param_4 < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
  }
  if (puVar2 != puVar1) {
    local_68 = *(undefined4 *)puVar2;
    uStack_64 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_60 = *(undefined4 *)(puVar2 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x4f;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a450f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_38 = 0x50;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a45668);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_38 = 0x52;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a45158);
  FUN_140e609c0(param_1);
  if (param_4 < 3) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[2];
  }
  if (puVar2 != puVar1) {
    local_68 = *(undefined4 *)puVar2;
    uStack_64 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_60 = *(undefined4 *)(puVar2 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x54;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a45718);
  FUN_140e609c0(param_1);
  if (param_4 < 4) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[3];
  }
  if (puVar2 != puVar1) {
    local_68 = *(undefined4 *)puVar2;
    uStack_64 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_60 = *(undefined4 *)(puVar2 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x55;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44898);
  FUN_140e609c0(param_1);
  if (param_4 < 5) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[4];
  }
  if (puVar2 != puVar1) {
    local_68 = *(undefined4 *)puVar2;
    uStack_64 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_60 = *(undefined4 *)(puVar2 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x56;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44f78);
  FUN_140e609c0(param_1);
  if (param_4 < 6) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[5];
  }
  if (puVar2 != puVar1) {
    local_68 = *(undefined4 *)puVar2;
    uStack_64 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_60 = *(undefined4 *)(puVar2 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x59;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a46a08);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_38 = 0x5a;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a469e8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_38 = 0x5e;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a550e0);
  FUN_140e609c0(param_1);
  if (param_4 < 7) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[6];
  }
  if (puVar2 != puVar1) {
    local_68 = *(undefined4 *)puVar2;
    uStack_64 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_60 = *(undefined4 *)(puVar2 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x60;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a553b0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_38 = 0x62;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a54eb0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_38 = 99;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a54dd0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_38 = 0x67;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a9f8);
  FUN_140e609c0(param_1);
  if (param_4 < 8) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[7];
  }
  if (puVar2 != puVar1) {
    local_68 = *(undefined4 *)puVar2;
    uStack_64 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_60 = *(undefined4 *)(puVar2 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x69;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a46b38);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_38 = 0x6b;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a55620);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_38 = 0x6c;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a552e0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_38 = 0x72;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07c38);
  FUN_140e609c0(param_1);
  if (8 < param_4) {
    puVar4 = (undefined8 *)param_5[8];
  }
  if (puVar4 != puVar1) {
    local_68 = *(undefined4 *)puVar4;
    uStack_64 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_60 = *(undefined4 *)(puVar4 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x76;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a467b8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,&LAB_14024d490,param_1);
  if (&local_68 != puVar3) {
    local_58 = local_68;
    uStack_54 = uStack_64;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

