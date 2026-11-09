// gml_Script_InputPlugInGetTime @ 0x14035cd10

undefined8 *
gml_Script_InputPlugInGetTime(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulonglong in_stack_ffffffffffffff88;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_InputPlugInGetFrame";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 6;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde674) {
    _Init_thread_header(&DAT_141dde674);
    if (DAT_141dde674 == -1) {
      DAT_141dde678 = (longlong *)FUN_140e63aa0(DAT_1419f3388);
      _Init_thread_footer(&DAT_141dde674);
    }
  }
  if (DAT_141ddc12b == '\0') {
    FUN_140e64380(DAT_141dde678,"gml_Script_InputPlugInGetFrame");
    FUN_140e64380(param_1,"gml_Script_InputPlugInGetFrame");
  }
  local_28 = 8;
  if (DAT_141ddc12b == '\0') {
    DAT_141ddc12b = '\x01';
    puVar1 = (undefined4 *)(**(code **)(*DAT_141dde678 + 0x10))(DAT_141dde678,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde678);
    in_stack_ffffffffffffff88 = 0;
    puVar2 = (undefined4 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (param_1,param_2,&local_58,0,0);
    if (puVar2 != puVar1) {
      local_48 = *puVar2;
      uStack_44 = puVar2[1];
      uStack_40 = puVar2[2];
      uStack_3c = puVar2[3];
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_48);
    }
    FUN_140e60910(1);
  }
  local_28 = 9;
  uVar3 = (**(code **)(*DAT_141dde678 + 8))(DAT_141dde678,DAT_1419fcb48);
  FUN_140e87440(uVar3,DAT_1419fe1c8,0x80000000,&local_68,
                in_stack_ffffffffffffff88 & 0xffffffffffffff00,0);
  if (&local_68 != param_3) {
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_48);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

