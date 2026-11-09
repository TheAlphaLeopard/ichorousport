// gml_Script_InputDeviceGetRebinding @ 0x140322190

double * gml_Script_InputDeviceGetRebinding(undefined8 param_1,undefined8 param_2,double *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  double *pdVar4;
  double *pdVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong in_stack_ffffffffffffff58;
  double local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_InputDeviceGetPlayerUsingGeneric";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 6;
  uStack_8c = 0xffffff;
  local_98 = 0.0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde1b4) &&
     (_Init_thread_header(&DAT_141dde1b4), DAT_141dde1b4 == -1)) {
    DAT_141dde1b8 = (longlong *)FUN_140e63aa0(DAT_1419f0ff8);
    _Init_thread_footer(&DAT_141dde1b4);
  }
  if (DAT_141ddc0d8 == '\0') {
    FUN_140e64380(DAT_141dde1b8,"gml_Script_InputDeviceGetPlayerUsingGeneric");
    FUN_140e64380(param_1,"gml_Script_InputDeviceGetPlayerUsingGeneric");
  }
  local_48 = 8;
  if (DAT_141ddc0d8 == '\0') {
    DAT_141ddc0d8 = '\x01';
    pdVar4 = (double *)(**(code **)(*DAT_141dde1b8 + 0x10))(DAT_141dde1b8,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde1b8);
    in_stack_ffffffffffffff58 = 0;
    pdVar5 = (double *)gml_Script___InputTrace(param_1,param_2,&local_68,0,0);
    if (pdVar5 != pdVar4) {
      local_78 = *pdVar5;
      uStack_70 = *(undefined4 *)(pdVar5 + 1);
      uStack_6c = *(uint *)((longlong)pdVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      FUN_140041b80(pdVar4,&local_78);
    }
    FUN_140e60910(1);
  }
  local_48 = 10;
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  uStack_8c = 0;
  local_98 = 0.0;
  iVar7 = 1;
  do {
    iVar7 = iVar7 + -1;
    local_48 = 0xd;
    plVar6 = (longlong *)(**(code **)(*DAT_141dde1b8 + 8))(DAT_141dde1b8,DAT_141a026b8);
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
    in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffffffffffff00;
    FUN_140e87440(plVar6,DAT_1419fd5c8,0x80000000,&local_88,in_stack_ffffffffffffff58,0);
    uStack_6c = 0;
    local_78 = -300.0;
    iVar2 = FUN_140e851f0(&local_88,&local_78,DAT_141955260,0);
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    if (iVar2 == 0) {
      local_48 = 0xf;
      if (&local_98 == param_3) goto LAB_140322510;
      local_78 = local_98;
      uStack_70 = uStack_90;
      uStack_6c = uStack_8c;
      goto LAB_1403224ec;
    }
    local_48 = 0x12;
    uVar3 = uStack_8c & 0xffffff;
    if (uVar3 == 0) {
LAB_140322487:
      local_98 = local_98 + 1.0;
    }
    else {
      if (uVar3 == 1) {
        local_98 = (double)FUN_140e4b060(&local_98);
        uStack_8c = 0;
        goto LAB_140322487;
      }
      if (uVar3 == 7) {
        local_98 = (double)CONCAT44(local_98._4_4_,local_98._0_4_ + 1);
      }
      else if (uVar3 == 10) {
        local_98 = (double)((longlong)local_98 + 1);
      }
      else {
        if (uVar3 == 0xd) {
          uStack_8c = 0;
          goto LAB_140322487;
        }
        FUN_140042910(&DAT_14172c3d8,&local_98,&local_98);
      }
    }
  } while (0 < iVar7);
  local_48 = 0x15;
  if (param_3 != (double *)&DAT_1419df7b0) {
    local_78 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_70 = DAT_1419df7b8;
    uStack_6c = DAT_1419df7bc;
LAB_1403224ec:
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_78);
  }
LAB_140322510:
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

