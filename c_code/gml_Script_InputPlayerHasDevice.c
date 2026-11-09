// gml_Script_InputPlayerHasDevice @ 0x14034c250

undefined8 *
gml_Script_InputPlayerHasDevice
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong *plVar5;
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
  
  local_30 = "gml_Script_InputPlayerGetStatus";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0xb;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde52c) {
    _Init_thread_header(&DAT_141dde52c);
    if (DAT_141dde52c == -1) {
      DAT_141dde530 = (longlong *)FUN_140e63aa0(DAT_1419f2b48);
      _Init_thread_footer(&DAT_141dde52c);
    }
  }
  if (DAT_141ddc114 == '\0') {
    FUN_140e64380(DAT_141dde530,"gml_Script_InputPlayerGetStatus");
    FUN_140e64380(param_1,"gml_Script_InputPlayerGetStatus");
  }
  local_28 = 0xd;
  if (DAT_141ddc114 == '\0') {
    DAT_141ddc114 = '\x01';
    puVar3 = (undefined4 *)(**(code **)(*DAT_141dde530 + 0x10))(DAT_141dde530,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde530);
    in_stack_ffffffffffffff88 = 0;
    puVar4 = (undefined4 *)gml_Script___InputTrace(param_1,param_2,&local_58,0,0);
    if (puVar4 != puVar3) {
      local_48 = *puVar4;
      uStack_44 = puVar4[1];
      uStack_40 = puVar4[2];
      uStack_3c = puVar4[3];
      if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_48);
    }
    FUN_140e60910(1);
  }
  local_28 = 0xe;
  plVar5 = (longlong *)(**(code **)(*DAT_141dde530 + 8))(DAT_141dde530,DAT_141a026b8);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  iVar2 = FUN_140e4a740(param_5);
  if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
    if ((iVar2 < 0) || (*(int *)(lVar1 + 0x24) <= iVar2)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  FUN_140e87440(plVar5,DAT_1419fd858,0x80000000,&local_68,
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

