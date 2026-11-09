// gml_Script___Update_anon_433___InputVibrateClassPulse___InputVibrateClassPulse @ 0x1400e91c0

undefined8 *
gml_Script___Update_anon_433___InputVibrateClassPulse___InputVibrateClassPulse
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 local_78;
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
  
  local_40 = "gml_Script___InputVibrateClassPlayer";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 5;
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc9b4) {
    _Init_thread_header(&DAT_141ddc9b4);
    if (DAT_141ddc9b4 == -1) {
      DAT_141ddc9a8 = (longlong *)FUN_140e63aa0(DAT_141a04378);
      _Init_thread_footer(&DAT_141ddc9b4);
    }
  }
  if (DAT_141ddc071 == '\0') {
    FUN_140e64380(DAT_141ddc9a8,"gml_Script___InputVibrateClassPlayer");
    FUN_140e64380(param_1,"gml_Script___InputVibrateClassPlayer");
  }
  FUN_140e643a0(param_1,DAT_141ddc9a8);
  local_38 = 0xe;
  if (DAT_141ddc071 == '\0') {
    DAT_141ddc071 = '\x01';
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc9a8 + 0x10))(DAT_141ddc9a8,DAT_1419fd598);
    FUN_140e609c0(DAT_141ddc9a8);
    FUN_140e645a0(&local_78,gml_GlobalScript___InputVibrateClassPulse,0);
    if (&local_78 != puVar1) {
      local_58 = (undefined4)local_78;
      uStack_54 = local_78._4_4_;
      uStack_50 = uStack_70;
      uStack_4c = uStack_6c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_58);
    }
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140e60910(1);
  }
  local_38 = 7;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd7f8);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  if (param_5 != puVar1) {
    local_58 = *(undefined4 *)param_5;
    uStack_54 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_50 = *(undefined4 *)(param_5 + 1);
    uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 9;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03db8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_38 = 10;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03d88);
  uStack_6c = 0xd;
  local_78 = 0;
  if (&local_78 != puVar1) {
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = uStack_70;
    uStack_4c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  local_38 = 0xc;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04338);
  FUN_140e609c0(param_1);
  puVar3 = (undefined4 *)FUN_140e8da20(&local_68,param_1,0);
  if (puVar3 != puVar2) {
    local_58 = *puVar3;
    uStack_54 = puVar3[1];
    uStack_50 = puVar3[2];
    uStack_4c = puVar3[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

