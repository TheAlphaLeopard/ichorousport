// gml_Script_InputVerbStateWrite @ 0x14037d7b0

undefined8 *
gml_Script_InputVerbStateWrite(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_InputVerbStateByteLength";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 6;
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde880) {
    _Init_thread_header(&DAT_141dde880);
    if (DAT_141dde880 == -1) {
      DAT_141dde888 = (longlong *)FUN_140e63aa0(DAT_1419f3f38);
      _Init_thread_footer(&DAT_141dde880);
    }
  }
  if (DAT_141ddc151 == '\0') {
    FUN_140e64380(DAT_141dde888,"gml_Script_InputVerbStateByteLength");
    FUN_140e64380(param_1,"gml_Script_InputVerbStateByteLength");
  }
  local_38 = 8;
  if (DAT_141ddc151 == '\0') {
    DAT_141ddc151 = '\x01';
    puVar1 = (undefined8 *)(**(code **)(*DAT_141dde888 + 0x10))(DAT_141dde888,DAT_1419f3f28);
    FUN_140e609c0(DAT_141dde888);
    puVar2 = (undefined8 *)gml_Script_InputVerbGetBindingName(param_1,param_2,&local_58,0,0);
    uStack_6c = *(undefined4 *)((longlong)puVar2 + 0xc);
    uStack_70 = *(undefined4 *)(puVar2 + 1);
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) == 0) {
      local_78 = *puVar2;
    }
    else {
      FUN_1400419b0(&local_78,puVar2);
    }
    uStack_5c = 7;
    local_68 = 0x14;
    FUN_140042560(&local_78,&local_68);
    if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    if (&local_78 != puVar1) {
      local_68 = (undefined4)local_78;
      uStack_64 = local_78._4_4_;
      uStack_60 = uStack_70;
      uStack_5c = uStack_6c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_68);
    }
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140e60910(1);
  }
  local_38 = 0xf;
  puVar1 = (undefined8 *)(**(code **)(*DAT_141dde888 + 8))(DAT_141dde888,DAT_1419f3f28);
  if (puVar1 != param_3) {
    local_68 = *(undefined4 *)puVar1;
    uStack_64 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_60 = *(undefined4 *)(puVar1 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

