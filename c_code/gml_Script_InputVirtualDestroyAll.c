// gml_Script_InputVirtualDestroyAll @ 0x1403883a0

undefined8 *
gml_Script_InputVirtualDestroyAll(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 *in_stack_ffffffffffffff48;
  ulonglong uVar9;
  ulonglong in_stack_ffffffffffffff50;
  double local_a8;
  uint local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_InputVirtualDebugDraw";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 6;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_9c = 0xffffff;
  local_a8 = 0.0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde958) &&
     (_Init_thread_header(&DAT_141dde958), DAT_141dde958 == -1)) {
    DAT_141dde950 = (longlong *)FUN_140e63aa0(DAT_1419f44b8);
    _Init_thread_footer(&DAT_141dde958);
  }
  if (DAT_141ddc15f == '\0') {
    FUN_140e64380(DAT_141dde950,"gml_Script_InputVirtualDebugDraw");
    FUN_140e64380(param_1,"gml_Script_InputVirtualDebugDraw");
  }
  local_48 = 8;
  if (DAT_141ddc15f == '\0') {
    DAT_141ddc15f = '\x01';
    puVar4 = (undefined8 *)(**(code **)(*DAT_141dde950 + 0x10))(DAT_141dde950,DAT_141a02998);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    uVar9 = 0;
    uVar5 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (param_1,param_2,&local_98,0,0);
    in_stack_ffffffffffffff50 = in_stack_ffffffffffffff50 & 0xffffffffffffff00;
    in_stack_ffffffffffffff48 = (undefined8 *)(uVar9 & 0xffffffffffffff00);
    FUN_140e87440(uVar5,DAT_1419fe0b8,0x80000000,&local_88,in_stack_ffffffffffffff48,
                  in_stack_ffffffffffffff50);
    FUN_140e609c0(DAT_141dde950);
    if (&local_88 != puVar4) {
      local_68 = (undefined4)local_88;
      uStack_64 = local_88._4_4_;
      uStack_60 = uStack_80;
      uStack_5c = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_68);
    }
    FUN_140e60910(1);
  }
  local_48 = 10;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = 0.0;
  local_48 = 0xb;
  plVar6 = (longlong *)(**(code **)(*DAT_141dde950 + 8))(DAT_141dde950,DAT_141a02998);
  iVar8 = 0;
  if ((*(int *)((longlong)plVar6 + 0xc) == 2) && (*plVar6 != 0)) {
    iVar8 = *(int *)(*plVar6 + 0x24);
  }
  do {
    while( true ) {
      if (iVar8 < 1) {
        if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_78);
        }
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        DAT_141dc7a50 = (undefined8 *)local_58;
        return param_3;
      }
      iVar8 = iVar8 + -1;
      local_48 = 0xd;
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      local_98 = 0;
      local_90 = 0;
      local_8c = 5;
      plVar6 = (longlong *)(**(code **)(*DAT_141dde950 + 8))(DAT_141dde950,DAT_141a02998);
      iVar2 = FUN_140e4a740(&local_a8);
      if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
        if ((iVar2 < 0) || (*(int *)(lVar1 + 0x24) <= iVar2)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar7 = plVar6;
      }
      FUN_140e87440(plVar7,DAT_1419fe6c8,0x80000000,&local_78,
                    (ulonglong)in_stack_ffffffffffffff48 & 0xffffffffffffff00,
                    in_stack_ffffffffffffff50 & 0xffffffffffffff00);
      iVar2 = FUN_140e4a740(&local_a8);
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
      uVar5 = FUN_140069500(plVar6);
      in_stack_ffffffffffffff50 = 0;
      in_stack_ffffffffffffff48 = &local_78;
      FUN_140e63610(uVar5,param_2,&local_98,0,in_stack_ffffffffffffff48,0);
      local_48 = 0xe;
      uVar3 = local_9c & 0xffffff;
      if (uVar3 != 0) break;
LAB_140388795:
      local_a8 = local_a8 + 1.0;
    }
    if (uVar3 == 1) {
      local_a8 = (double)FUN_140e4b060(&local_a8);
      local_9c = 0;
      goto LAB_140388795;
    }
    if (uVar3 == 7) {
      local_a8 = (double)CONCAT44(local_a8._4_4_,local_a8._0_4_ + 1);
    }
    else if (uVar3 == 10) {
      local_a8 = (double)((longlong)local_a8 + 1);
    }
    else {
      if (uVar3 == 0xd) {
        local_9c = 0;
        goto LAB_140388795;
      }
      FUN_140042910(&DAT_14172c3d8,&local_a8,&local_a8);
    }
  } while( true );
}

