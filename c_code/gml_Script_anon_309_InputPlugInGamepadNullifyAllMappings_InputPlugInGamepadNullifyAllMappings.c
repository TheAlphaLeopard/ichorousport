// gml_Script_anon_309_InputPlugInGamepadNullifyAllMappings_InputPlugInGamepadNullifyAllMappings @ 0x14035a320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * gml_Script_anon_309_InputPlugInGamepadNullifyAllMappings_InputPlugInGamepadNullifyAllMappings
                   (longlong *param_1,undefined8 param_2,double *param_3,int param_4,
                   undefined8 *param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  double *pdVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *local_res8;
  undefined8 local_res10;
  ulonglong uVar9;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  double local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined1 local_70 [16];
  longlong local_60;
  
  local_80 = "gml_Script_InputPlugInGamepadGetVendorAndProduct";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 6;
  uStack_9c = 0xffffff;
  local_a8 = 0.0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  local_res8 = param_1;
  local_res10 = param_2;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde628) &&
     (_Init_thread_header(&DAT_141dde628), DAT_141dde628 == -1)) {
    DAT_141dde630 = (longlong *)FUN_140e63aa0(DAT_1419f31b8);
    _Init_thread_footer(&DAT_141dde628);
  }
  if (DAT_141ddc126 == '\0') {
    FUN_140e64380(DAT_141dde630,"gml_Script_InputPlugInGamepadGetVendorAndProduct");
    FUN_140e64380(local_res8,"gml_Script_InputPlugInGamepadGetVendorAndProduct");
  }
  local_78 = 8;
  if (DAT_141ddc126 == '\0') {
    DAT_141ddc126 = '\x01';
    pdVar4 = (double *)(**(code **)(*DAT_141dde630 + 0x10))(DAT_141dde630,DAT_141a01188);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    uVar9 = 0;
    uVar5 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (local_res8,local_res10,&local_c8,0,0);
    FUN_140e87440(uVar5,DAT_141a011a8,0x80000000,&local_a8,uVar9 & 0xffffffffffffff00,0);
    FUN_140e609c0(DAT_141dde630);
    if (&local_a8 != pdVar4) {
      uStack_90 = CONCAT44(uStack_9c,uStack_a0);
      local_98 = local_a8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      FUN_140041b80(pdVar4,&local_98);
    }
    FUN_140e60910(1);
  }
  local_78 = 10;
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  uStack_ac = 0;
  local_b8 = 0.0;
  uVar2 = FUN_140e851f0(puVar7,&local_b8,DAT_141955260,1);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if (uVar2 < 0x80000000) {
    plVar6 = (longlong *)(**(code **)(*DAT_141dde630 + 8))(DAT_141dde630,DAT_141a01188);
    iVar3 = 0;
    if ((*(int *)((longlong)plVar6 + 0xc) == 2) && (*plVar6 != 0)) {
      iVar3 = *(int *)(*plVar6 + 0x24);
    }
    if (param_4 < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*param_5;
    }
    uStack_90 = uStack_90 & 0xffffffff;
    local_98 = (double)iVar3;
    iVar3 = FUN_140e851f0(puVar7,&local_98,DAT_141955260,1);
    if ((1 << ((byte)(uStack_90 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    if (iVar3 != -2 && iVar3 < 0) {
      local_78 = 0xc;
      plVar6 = (longlong *)(**(code **)(*DAT_141dde630 + 8))(DAT_141dde630,DAT_141a01188);
      if (0 < param_4) {
        puVar8 = (undefined8 *)*param_5;
      }
      iVar3 = FUN_140e4a740(puVar8);
      if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
        if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      iVar3 = FUN_140e63cb0(local_70,&local_res8,&local_res10,plVar6);
      if (0 < iVar3) {
        local_78 = 0xe;
        pdVar4 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd288);
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd368);
        uStack_ac = *(undefined4 *)((longlong)pdVar4 + 0xc);
        uStack_b0 = *(undefined4 *)(pdVar4 + 1);
        if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) == 0) {
          local_b8 = *pdVar4;
        }
        else {
          FUN_1400419b0(&local_b8,pdVar4);
        }
        FUN_1400460e0(&local_b8,uVar5);
        if (&local_b8 != param_3) {
          uStack_90 = CONCAT44(uStack_ac,uStack_b0);
          local_98 = local_b8;
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          FUN_140041b80(param_3,&local_98);
        }
        if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        if (local_60 != 0) {
          FUN_140e4cd60();
        }
        goto LAB_14035a7b4;
      }
      FUN_140e63970(local_70,&local_res8,&local_res10);
      if (local_60 != 0) {
        FUN_140e4cd60();
      }
    }
  }
  local_78 = 0x12;
  if (param_3 != (double *)&DAT_141dd1378) {
    local_98 = _DAT_141dd1378;
    uStack_90 = uRam0000000141dd1380;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_98);
  }
LAB_14035a7b4:
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

