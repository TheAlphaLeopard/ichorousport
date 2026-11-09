// gml_Script_InputVerbGetMetadata @ 0x1403741e0

longlong *
gml_Script_InputVerbGetMetadata
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong in_stack_ffffffffffffff38;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined4 local_8c;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_50 = "gml_Script_InputVerbGetExportName";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 7;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde7d4) {
    _Init_thread_header(&DAT_141dde7d4);
    if (DAT_141dde7d4 == -1) {
      DAT_141dde7d8 = (longlong *)FUN_140e63aa0(DAT_1419f3be8);
      _Init_thread_footer(&DAT_141dde7d4);
    }
  }
  if (DAT_141ddc145 == '\0') {
    FUN_140e64380(DAT_141dde7d8,"gml_Script_InputVerbGetExportName");
    FUN_140e64380(param_1,"gml_Script_InputVerbGetExportName");
  }
  local_48 = 9;
  if (DAT_141ddc145 == '\0') {
    DAT_141ddc145 = '\x01';
    plVar5 = (longlong *)(**(code **)(*DAT_141dde7d8 + 0x10))(DAT_141dde7d8,DAT_1419fd4f8);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    in_stack_ffffffffffffff38 = 0;
    uVar6 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (param_1,param_2,&local_a8,0,0);
    in_stack_ffffffffffffff38 = in_stack_ffffffffffffff38 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_1419fd668,0x80000000,&local_68,in_stack_ffffffffffffff38,0);
    FUN_140e609c0(DAT_141dde7d8);
    if (&local_68 != plVar5) {
      local_b8 = local_68;
      uStack_b0 = uStack_60;
      uStack_ac = uStack_5c;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar5);
      }
      FUN_140041b80(plVar5,&local_b8);
    }
    FUN_140e60910(1);
  }
  local_48 = 0xb;
  plVar5 = (longlong *)(**(code **)(*DAT_141dde7d8 + 8))(DAT_141dde7d8,DAT_1419fd4f8);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  iVar4 = FUN_140e4a740(param_5);
  if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar5 != &local_98) {
    local_b8 = *plVar5;
    uStack_b0 = (undefined4)plVar5[1];
    uStack_ac = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_b8);
  }
  local_48 = 0xc;
  iVar4 = FUN_140e851f0(&local_98,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    uStack_ac = DAT_1419df7bc;
    uStack_b0 = DAT_1419df7b8;
    if ((1 << ((byte)DAT_1419df7bc & 0x1f) & 0x46U) == 0) {
      local_b8 = DAT_1419df7b0;
    }
    else {
      FUN_1400419b0(&local_b8,&DAT_1419df7b0);
    }
    plVar5 = &local_b8;
    bVar3 = true;
    bVar2 = false;
  }
  else {
    FUN_140e87440(&local_98,DAT_1419fdcd8,0x80000000,&local_88,
                  in_stack_ffffffffffffff38 & 0xffffffffffffff00,0);
    local_6c = local_7c;
    local_70 = local_80;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) == 0) {
      local_78 = local_88;
    }
    else {
      FUN_1400419b0(&local_78,&local_88);
    }
    plVar5 = &local_78;
    bVar3 = false;
    bVar2 = true;
  }
  if (plVar5 != param_3) {
    local_40 = (undefined4)*plVar5;
    uStack_3c = *(undefined4 *)((longlong)plVar5 + 4);
    uStack_38 = (undefined4)plVar5[1];
    uStack_34 = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_40);
  }
  if (bVar2) {
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
  }
  if ((bVar3) && ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

