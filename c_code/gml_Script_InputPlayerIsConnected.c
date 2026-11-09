// gml_Script_InputPlayerIsConnected @ 0x14034d090

undefined1 **
gml_Script_InputPlayerIsConnected(undefined8 param_1,undefined8 param_2,undefined1 **param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong in_stack_ffffffffffffff58;
  double local_98;
  uint local_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_InputPlayerHasDeviceCount";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 7;
  uStack_7c = 0xffffff;
  local_88 = (undefined1 *)0x0;
  local_8c = 0xffffff;
  local_98 = 0.0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = (undefined1 *)0x0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde538) &&
     (_Init_thread_header(&DAT_141dde538), DAT_141dde538 == -1)) {
    DAT_141dde540 = (longlong *)FUN_140e63aa0(DAT_1419f2b78);
    _Init_thread_footer(&DAT_141dde538);
  }
  if (DAT_141ddc115 == '\0') {
    FUN_140e64380(DAT_141dde540,"gml_Script_InputPlayerHasDeviceCount");
    FUN_140e64380(param_1,"gml_Script_InputPlayerHasDeviceCount");
  }
  local_38 = 9;
  if (DAT_141ddc115 == '\0') {
    DAT_141ddc115 = '\x01';
    puVar4 = (undefined8 *)(**(code **)(*DAT_141dde540 + 0x10))(DAT_141dde540,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde540);
    in_stack_ffffffffffffff58 = 0;
    puVar5 = (undefined8 *)gml_Script___InputTrace(param_1,param_2,&local_58,0,0);
    if (puVar5 != puVar4) {
      local_68 = (undefined1 *)*puVar5;
      uStack_60 = *(undefined4 *)(puVar5 + 1);
      uStack_5c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_68);
    }
    FUN_140e60910(1);
  }
  local_38 = 0xb;
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  uStack_7c = 0;
  local_88 = (undefined1 *)0x0;
  local_38 = 0xd;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = 0.0;
  local_38 = 0x10;
  plVar6 = (longlong *)(**(code **)(*DAT_141dde540 + 8))(DAT_141dde540,DAT_141a026b8);
  iVar2 = FUN_140e4a740(&local_98);
  if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
    if ((iVar2 < 0) || (*(int *)(lVar1 + 0x24) <= iVar2)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  FUN_140e87440(plVar6,DAT_1419fd5c8,0x80000000,&local_78,
                in_stack_ffffffffffffff58 & 0xffffffffffffff00,0);
  uStack_5c = 0;
  local_68 = &DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(&local_78,&local_68,DAT_141955260,0);
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140162d40(&local_88,iVar2 != 0);
  local_38 = 0x11;
  uVar3 = local_8c & 0xffffff;
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      local_98 = (double)FUN_140e4b060(&local_98);
      local_8c = 0;
    }
    else {
      if (uVar3 == 7) {
        local_98 = (double)CONCAT44(local_98._4_4_,local_98._0_4_ + 1);
        goto LAB_14034d3c7;
      }
      if (uVar3 == 10) {
        local_98 = (double)((longlong)local_98 + 1);
        goto LAB_14034d3c7;
      }
      if (uVar3 != 0xd) {
        FUN_140042910(&DAT_14172c3d8,&local_98,&local_98);
        goto LAB_14034d3c7;
      }
      local_8c = 0;
    }
  }
  local_98 = local_98 + 1.0;
LAB_14034d3c7:
  local_38 = 0x14;
  if (&local_88 != param_3) {
    local_68 = local_88;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

