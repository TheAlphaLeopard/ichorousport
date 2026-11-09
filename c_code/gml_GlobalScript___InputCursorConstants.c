// gml_GlobalScript___InputCursorConstants @ 0x140086190

undefined8 *
gml_GlobalScript___InputCursorConstants
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script___InputCursorClassPlayer";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 5;
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc588) {
    _Init_thread_header(&DAT_141ddc588);
    if (DAT_141ddc588 == -1) {
      DAT_141ddc590 = (longlong *)FUN_140e63aa0(DAT_141a00da8);
      _Init_thread_footer(&DAT_141ddc588);
    }
  }
  if (DAT_141ddc03c == '\0') {
    FUN_140e64380(DAT_141ddc590,"gml_Script___InputCursorClassPlayer");
    FUN_140e64380(param_1,"gml_Script___InputCursorClassPlayer");
  }
  FUN_140e643a0(param_1,DAT_141ddc590);
  local_38 = 7;
  if (DAT_141ddc03c == '\0') {
    DAT_141ddc03c = '\x01';
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddc590 + 0x10))(DAT_141ddc590,DAT_1419fcb48);
    FUN_140e609c0(DAT_141ddc590);
    puVar2 = (undefined4 *)
             gml_Script____struct___12___InputCursorTransformCoordinate___InputCursorTransformCoordinate
                       (param_1,param_2,&local_68,0,0);
    if (puVar2 != puVar1) {
      local_78 = *puVar2;
      uStack_74 = puVar2[1];
      uStack_70 = puVar2[2];
      uStack_6c = puVar2[3];
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_78);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddc590 + 0x10))(DAT_141ddc590,DAT_1419fd598);
    FUN_140e609c0(DAT_141ddc590);
    FUN_140e645a0(&local_78,gml_Script___InputCursorClassPlayer,0);
    if (&local_78 != puVar1) {
      local_58 = local_78;
      uStack_54 = uStack_74;
      uStack_50 = uStack_70;
      uStack_4c = uStack_6c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_58);
    }
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddc590 + 0x10))(DAT_141ddc590,DAT_141a00dc8);
    FUN_140e609c0(DAT_141ddc590);
    FUN_140e645a0(&local_78,gml_GlobalScript___InputCursorConfig,0);
    if (&local_78 != puVar1) {
      local_58 = local_78;
      uStack_54 = uStack_74;
      uStack_50 = uStack_70;
      uStack_4c = uStack_6c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_58);
    }
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140e60910(1);
  }
  local_38 = 9;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd7f8);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  if (param_5 != puVar3) {
    local_58 = *(undefined4 *)param_5;
    uStack_54 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_50 = *(undefined4 *)(param_5 + 1);
    uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0xb;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00db8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x4000000000000000;
  local_38 = 0xd;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe328);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_38 = 0xe;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe528);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_38 = 0xf;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe4a8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_38 = 0x10;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe398);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_38 = 0x12;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00cd8);
  FUN_140e609c0(param_1);
  if (puVar3 != &DAT_1419df7b0) {
    local_58 = (undefined4)DAT_1419df7b0;
    uStack_54 = DAT_1419df7b0._4_4_;
    uStack_50 = DAT_1419df7b8;
    uStack_4c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x13;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00e48);
  FUN_140e609c0(param_1);
  if (puVar3 != &DAT_1419df7b0) {
    local_58 = (undefined4)DAT_1419df7b0;
    uStack_54 = DAT_1419df7b0._4_4_;
    uStack_50 = DAT_1419df7b8;
    uStack_4c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x14;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00e18);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_38 = 0x16;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00d28);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_38 = 0x17;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00cf8);
  FUN_140e609c0(param_1);
  if (puVar3 != &DAT_1419df7b0) {
    local_58 = (undefined4)DAT_1419df7b0;
    uStack_54 = DAT_1419df7b0._4_4_;
    uStack_50 = DAT_1419df7b8;
    uStack_4c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x18;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00e08);
  FUN_140e609c0(param_1);
  if (puVar3 != &DAT_1419df7b0) {
    local_58 = (undefined4)DAT_1419df7b0;
    uStack_54 = DAT_1419df7b0._4_4_;
    uStack_50 = DAT_1419df7b8;
    uStack_4c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x19;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00de8);
  FUN_140e609c0(param_1);
  if (puVar3 != &DAT_1419df7b0) {
    local_58 = (undefined4)DAT_1419df7b0;
    uStack_54 = DAT_1419df7b0._4_4_;
    uStack_50 = DAT_1419df7b8;
    uStack_4c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x1a;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00d38);
  FUN_140e609c0(param_1);
  if (puVar3 != &DAT_1419df7b0) {
    local_58 = (undefined4)DAT_1419df7b0;
    uStack_54 = DAT_1419df7b0._4_4_;
    uStack_50 = DAT_1419df7b8;
    uStack_4c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x1b;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00d98);
  FUN_140e609c0(param_1);
  if (puVar3 != &DAT_1419df7b0) {
    local_58 = (undefined4)DAT_1419df7b0;
    uStack_54 = DAT_1419df7b0._4_4_;
    uStack_50 = DAT_1419df7b8;
    uStack_4c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x1c;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00e58);
  FUN_140e609c0(param_1);
  if (puVar3 != &DAT_1419df7b0) {
    local_58 = (undefined4)DAT_1419df7b0;
    uStack_54 = DAT_1419df7b0._4_4_;
    uStack_50 = DAT_1419df7b8;
    uStack_4c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x1d;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00c88);
  FUN_140e609c0(param_1);
  if (puVar3 != &DAT_1419df7b0) {
    local_58 = (undefined4)DAT_1419df7b0;
    uStack_54 = DAT_1419df7b0._4_4_;
    uStack_50 = DAT_1419df7b8;
    uStack_4c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x1e;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00cc8);
  FUN_140e609c0(param_1);
  if (puVar3 != &DAT_1419df7b0) {
    local_58 = (undefined4)DAT_1419df7b0;
    uStack_54 = DAT_1419df7b0._4_4_;
    uStack_50 = DAT_1419df7b8;
    uStack_4c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

