// gml_Script_InputX @ 0x140388960

undefined8 * gml_Script_InputX(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong *local_res8;
  undefined8 local_res10;
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
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_InputVirtualDestroyAll";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 5;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_9c = 0xffffff;
  local_a8 = 0.0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde968) &&
     (_Init_thread_header(&DAT_141dde968), DAT_141dde968 == -1)) {
    DAT_141dde960 = (longlong *)FUN_140e63aa0(DAT_1419f44c8);
    _Init_thread_footer(&DAT_141dde968);
  }
  if (DAT_141ddc160 == '\0') {
    FUN_140e64380(DAT_141dde960,"gml_Script_InputVirtualDestroyAll");
    FUN_140e64380(local_res8,"gml_Script_InputVirtualDestroyAll");
  }
  local_48 = 7;
  if (DAT_141ddc160 == '\0') {
    DAT_141ddc160 = '\x01';
    puVar5 = (undefined8 *)(**(code **)(*DAT_141dde960 + 0x10))(DAT_141dde960,DAT_141a02998);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    uVar9 = 0;
    uVar6 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (local_res8,local_res10,&local_98,0,0);
    FUN_140e87440(uVar6,DAT_1419fe0b8,0x80000000,&local_88,uVar9 & 0xffffffffffffff00,
                  in_stack_ffffffffffffff50 & 0xffffffffffffff00);
    FUN_140e609c0(DAT_141dde960);
    if (&local_88 != puVar5) {
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = uStack_80;
      uStack_6c = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_78);
    }
    FUN_140e60910(1);
  }
  local_48 = 9;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = 0.0;
  local_48 = 10;
  plVar7 = (longlong *)(**(code **)(*DAT_141dde960 + 8))(DAT_141dde960,DAT_141a02998);
  iVar8 = 0;
  if ((*(int *)((longlong)plVar7 + 0xc) == 2) && (*plVar7 != 0)) {
    iVar8 = *(int *)(*plVar7 + 0x24);
  }
  do {
    if (iVar8 < 1) {
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
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
    local_48 = 0xc;
    plVar7 = (longlong *)(**(code **)(*DAT_141dde960 + 8))(DAT_141dde960,DAT_141a02998);
    iVar3 = FUN_140e4a740(&local_a8);
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
      if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    iVar3 = FUN_140e63cb0(&local_78,&local_res8,&local_res10,plVar7);
    if (0 < iVar3) {
      do {
        local_48 = 0xe;
        if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        local_98 = 0;
        local_90 = 0;
        local_8c = 5;
        uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe498);
        FUN_140e63610(local_res8,local_res10,&local_98,0,uVar6,0);
        cVar2 = FUN_140e643f0(&local_78,&local_res8,&local_res10);
      } while (cVar2 != '\0');
    }
    FUN_140e63970(&local_78,&local_res8,&local_res10);
    local_48 = 0x11;
    uVar4 = local_9c & 0xffffff;
    if (uVar4 == 0) {
LAB_140388d21:
      local_a8 = local_a8 + 1.0;
    }
    else {
      if (uVar4 == 1) {
        local_a8 = (double)FUN_140e4b060(&local_a8);
        local_9c = 0;
        goto LAB_140388d21;
      }
      if (uVar4 == 7) {
        local_a8 = (double)CONCAT44(local_a8._4_4_,local_a8._0_4_ + 1);
      }
      else if (uVar4 == 10) {
        local_a8 = (double)((longlong)local_a8 + 1);
      }
      else {
        if (uVar4 == 0xd) {
          local_9c = 0;
          goto LAB_140388d21;
        }
        FUN_140042910(&DAT_14172c3d8,&local_a8,&local_a8);
      }
    }
    if (local_68 != 0) {
      FUN_140e4cd60();
    }
  } while( true );
}

