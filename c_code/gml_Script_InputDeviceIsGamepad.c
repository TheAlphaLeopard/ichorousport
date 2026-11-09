// gml_Script_InputDeviceIsGamepad @ 0x140324830

longlong *
gml_Script_InputDeviceIsGamepad
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  double dVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  bool bVar10;
  uint uVar11;
  code *pcVar12;
  ulonglong uVar13;
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  double local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  double local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined1 local_48 [32];
  
  local_c0 = "gml_Script_InputDeviceIsConnected";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 9;
  pcVar12 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_48,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0.0;
  local_94 = 0xffffff;
  local_a0 = 0.0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_a4 = 0;
  uVar11 = 0;
  local_b0 = 0;
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde208) &&
     (_Init_thread_header(&DAT_141dde208), DAT_141dde208 == -1)) {
    DAT_141dde200 = (longlong *)FUN_140e63aa0(DAT_1419f11b8);
    _Init_thread_footer(&DAT_141dde208);
  }
  if (DAT_141ddc0de == '\0') {
    FUN_140e64380(DAT_141dde200,"gml_Script_InputDeviceIsConnected");
    FUN_140e64380(param_1,"gml_Script_InputDeviceIsConnected");
  }
  local_b8 = 0xb;
  if (DAT_141ddc0de == '\0') {
    DAT_141ddc0de = '\x01';
    pdVar5 = (double *)(**(code **)(*DAT_141dde200 + 0x10))(DAT_141dde200,DAT_141a01188);
    if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    local_b0 = 0;
    local_a8 = 0;
    local_a4 = 5;
    uVar13 = 0;
    uVar6 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (param_1,param_2,&local_b0,0,0);
    pcVar12 = (code *)(uVar13 & 0xffffffffffffff00);
    FUN_140e87440(uVar6,DAT_141a011a8,0x80000000,&local_78,pcVar12,0);
    FUN_140e609c0(DAT_141dde200);
    if (&local_78 != pdVar5) {
      uStack_d0 = (double)CONCAT44(uStack_6c,uStack_70);
      local_d8 = local_78;
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar5);
      }
      FUN_140041b80(pdVar5,&local_d8);
    }
    FUN_140e60910(1);
  }
  local_b8 = 0xd;
  puVar9 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*param_5;
  }
  local_84 = 0;
  local_90 = 0;
  uVar3 = FUN_140e851f0(puVar8,&local_90,DAT_141955260,1);
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if (0x7fffffff < uVar3) {
    local_b8 = 0x19;
    if (param_4 < 1) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)*param_5;
    }
    uStack_d0 = (double)((ulonglong)uStack_d0 & 0xffffffff);
    local_d8 = -100.0;
    iVar4 = FUN_140e851f0(puVar8,&local_d8,DAT_141955260,0);
    if ((1 << ((byte)((ulonglong)uStack_d0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    if (iVar4 == 0) {
      local_b8 = 0x1b;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
      *param_3 = 0x3ff0000000000000;
    }
    else {
      local_b8 = 0x1d;
      if (param_4 < 1) {
        puVar8 = &DAT_1419df7b0;
      }
      else {
        puVar8 = (undefined8 *)*param_5;
      }
      uStack_d0 = (double)((ulonglong)uStack_d0 & 0xffffffff);
      local_d8 = -200.0;
      iVar4 = FUN_140e851f0(puVar8,&local_d8,DAT_141955260,0);
      if ((1 << ((byte)((ulonglong)uStack_d0 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if (iVar4 == 0) {
        local_b8 = 0x1f;
        uStack_d0 = (double)CONCAT44(0xd,(undefined4)uStack_d0);
        local_d8 = 0.0;
        cVar2 = FUN_140e491e0(&local_d8);
        if ((1 << ((byte)((ulonglong)uStack_d0 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
        if (cVar2 != '\0') {
          uVar11 = 0x3ff00000;
        }
        *param_3 = (ulonglong)uVar11 << 0x20;
      }
      else {
        local_b8 = 0x21;
        if (0 < param_4) {
          puVar9 = (undefined8 *)*param_5;
        }
        uStack_d0 = (double)((ulonglong)uStack_d0 & 0xffffffff);
        local_d8 = -300.0;
        iVar4 = FUN_140e851f0(puVar9,&local_d8,DAT_141955260,0);
        if ((1 << ((byte)((ulonglong)uStack_d0 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
        if (iVar4 == 0) {
          local_b8 = 0x23;
          *param_3 = 0x3ff0000000000000;
        }
        else {
          local_b8 = 0x26;
          *param_3 = 0;
        }
      }
    }
    goto LAB_140324eda;
  }
  local_b8 = 0xf;
  local_84 = 0xd;
  local_90 = 0;
  cVar2 = FUN_140e491e0(&local_90);
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if (cVar2 == '\0') {
    plVar7 = (longlong *)(**(code **)(*DAT_141dde200 + 8))(DAT_141dde200,DAT_141a01188);
    iVar4 = 0;
    if ((*(int *)((longlong)plVar7 + 0xc) == 2) && (*plVar7 != 0)) {
      iVar4 = *(int *)(*plVar7 + 0x24);
    }
    if (param_4 < 1) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)*param_5;
    }
    uStack_d0 = (double)((ulonglong)uStack_d0 & 0xffffffff);
    local_d8 = (double)iVar4;
    uVar11 = FUN_140e851f0(puVar9,&local_d8,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)uStack_d0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    if (uVar11 < 0x80000000) goto LAB_140324ccc;
    local_b8 = 0x16;
    pdVar5 = (double *)(**(code **)(*DAT_141dde200 + 8))(DAT_141dde200,DAT_141a01188);
    if (param_4 < 1) {
      param_5 = &DAT_1419df7b0;
    }
    else {
      param_5 = (undefined8 *)*param_5;
    }
    iVar4 = FUN_140e4a740(param_5);
    if (((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 2) && (dVar1 = *pdVar5, dVar1 != 0.0)) {
      if ((iVar4 < 0) || (*(int *)((longlong)dVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)((longlong)dVar1 + 0x24));
        pdVar5 = (double *)0x0;
      }
      else {
        pdVar5 = (double *)((longlong)iVar4 * 0x10 + *(longlong *)((longlong)dVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar5 != &local_a0) {
      local_d8 = *pdVar5;
      uStack_d0 = pdVar5[1];
      if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      FUN_140041b80(&local_a0,&local_d8);
    }
    local_b8 = 0x17;
    bVar10 = false;
    iVar4 = FUN_140e851f0(&local_a0,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar4 != 0) {
      FUN_140e87440(&local_a0,DAT_1419fd318,0x80000000,&local_68,
                    (ulonglong)pcVar12 & 0xffffffffffffff00,0);
      cVar2 = FUN_140e491e0(&local_68);
      bVar10 = cVar2 == '\0';
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    if (bVar10) {
      *param_3 = 0x3ff0000000000000;
      goto LAB_140324eda;
    }
  }
  else {
LAB_140324ccc:
    local_b8 = 0xf;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  }
  *param_3 = 0;
LAB_140324eda:
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_48,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

