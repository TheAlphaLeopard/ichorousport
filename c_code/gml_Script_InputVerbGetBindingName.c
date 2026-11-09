// gml_Script_InputVerbGetBindingName @ 0x1403730a0

undefined8 *
gml_Script_InputVerbGetBindingName(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 *in_stack_ffffffffffffff78;
  ulonglong in_stack_ffffffffffffff80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_InputVerbCount";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 5;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde7d0) {
    _Init_thread_header(&DAT_141dde7d0);
    if (DAT_141dde7d0 == -1) {
      DAT_141dde7c8 = (longlong *)FUN_140e63aa0(DAT_1419f3b38);
      _Init_thread_footer(&DAT_141dde7d0);
    }
  }
  if (DAT_141ddc144 == '\0') {
    FUN_140e64380(DAT_141dde7c8,"gml_Script_InputVerbCount");
    FUN_140e64380(param_1,"gml_Script_InputVerbCount");
  }
  local_28 = 7;
  if (DAT_141ddc144 == '\0') {
    DAT_141ddc144 = '\x01';
    puVar1 = (undefined4 *)(**(code **)(*DAT_141dde7c8 + 0x10))(DAT_141dde7c8,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde7c8);
    FUN_140e645a0(local_58,gml_GlobalScript_InputVerbGetBindingName,0);
    in_stack_ffffffffffffff80 = 0;
    in_stack_ffffffffffffff78 = local_58;
    puVar2 = (undefined4 *)FUN_140e63610(param_1,param_2,&local_68,0,in_stack_ffffffffffffff78,0);
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
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    FUN_140e60910(1);
  }
  local_28 = 0xe;
  uVar3 = (**(code **)(*DAT_141dde7c8 + 8))(DAT_141dde7c8,DAT_1419fcb48);
  FUN_140e87440(uVar3,DAT_1419fd6a8,0x80000000,&local_78,
                (ulonglong)in_stack_ffffffffffffff78 & 0xffffffffffffff00,
                in_stack_ffffffffffffff80 & 0xffffffffffffff00);
  if (&local_78 != param_3) {
    local_48 = (undefined4)local_78;
    uStack_44 = local_78._4_4_;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_48);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

