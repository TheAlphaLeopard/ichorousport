// gml_Script_InputPlugInGamepadSetMapping @ 0x14035b940

undefined8 *
gml_Script_InputPlugInGamepadSetMapping
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  double dVar1;
  int iVar2;
  uint uVar3;
  double *pdVar4;
  undefined8 uVar5;
  longlong *plVar6;
  double *pdVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  double local_a8;
  undefined4 local_9c;
  double local_98;
  undefined4 local_8c;
  double local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  double local_68;
  double dStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_InputPlugInGamepadSetDescription";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 6;
  uStack_7c = 0xffffff;
  local_88 = 0.0;
  local_9c = 0xffffff;
  local_a8 = 0.0;
  local_8c = 0xffffff;
  local_98 = 0.0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde648) &&
     (_Init_thread_header(&DAT_141dde648), DAT_141dde648 == -1)) {
    DAT_141dde650 = (longlong *)FUN_140e63aa0(DAT_1419f32a8);
    _Init_thread_footer(&DAT_141dde648);
  }
  if (DAT_141ddc128 == '\0') {
    FUN_140e64380(DAT_141dde650,"gml_Script_InputPlugInGamepadSetDescription");
    FUN_140e64380(param_1,"gml_Script_InputPlugInGamepadSetDescription");
  }
  local_48 = 8;
  if (DAT_141ddc128 == '\0') {
    DAT_141ddc128 = '\x01';
    pdVar4 = (double *)(**(code **)(*DAT_141dde650 + 0x10))(DAT_141dde650,DAT_141a01188);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    uVar9 = 0;
    uVar5 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (param_1,param_2,&local_b8,0,0);
    FUN_140e87440(uVar5,DAT_141a011a8,0x80000000,&local_88,uVar9 & 0xffffffffffffff00,0);
    FUN_140e609c0(DAT_141dde650);
    if (&local_88 != pdVar4) {
      dStack_60 = (double)CONCAT44(uStack_7c,uStack_80);
      local_68 = local_88;
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      FUN_140041b80(pdVar4,&local_68);
    }
    FUN_140e60910(1);
  }
  local_48 = 10;
  pdVar4 = (double *)&DAT_1419df7b0;
  if (param_4 < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*param_5;
  }
  local_6c = 0;
  local_78 = 0;
  iVar2 = FUN_140e851f0(puVar8,&local_78,DAT_141955260,1);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (iVar2 == -2 || -1 < iVar2) {
    plVar6 = (longlong *)(**(code **)(*DAT_141dde650 + 8))(DAT_141dde650,DAT_141a01188);
    iVar2 = 0;
    if ((*(int *)((longlong)plVar6 + 0xc) == 2) && (*plVar6 != 0)) {
      iVar2 = *(int *)(*plVar6 + 0x24);
    }
    if (param_4 < 1) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)*param_5;
    }
    dStack_60 = (double)((ulonglong)dStack_60 & 0xffffffff);
    local_68 = (double)iVar2;
    uVar3 = FUN_140e851f0(puVar8,&local_68,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)dStack_60 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    if (0x7fffffff < uVar3) {
      local_48 = 0xc;
      pdVar7 = (double *)(**(code **)(*DAT_141dde650 + 8))(DAT_141dde650,DAT_141a01188);
      if (param_4 < 1) {
        puVar8 = &DAT_1419df7b0;
      }
      else {
        puVar8 = (undefined8 *)*param_5;
      }
      iVar2 = FUN_140e4a740(puVar8);
      if (((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 2) && (dVar1 = *pdVar7, dVar1 != 0.0))
      {
        if ((iVar2 < 0) || (*(int *)((longlong)dVar1 + 0x24) <= iVar2)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                        *(undefined4 *)((longlong)dVar1 + 0x24));
          pdVar7 = (double *)0x0;
        }
        else {
          pdVar7 = (double *)((longlong)iVar2 * 0x10 + *(longlong *)((longlong)dVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (pdVar7 != &local_a8) {
        local_68 = *pdVar7;
        dStack_60 = pdVar7[1];
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        FUN_140041b80(&local_a8,&local_68);
      }
      local_48 = 0xd;
      iVar2 = FUN_140e851f0(&local_a8,&DAT_1419df7b0,DAT_141955260,0);
      if (iVar2 == 0) {
        local_48 = 0xd;
      }
      else {
        local_48 = 0xf;
        if ((param_4 < 2) || (pdVar4 = (double *)param_5[1], pdVar4 != &local_98)) {
          local_68 = *pdVar4;
          dStack_60 = pdVar4[1];
          if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_98);
          }
          FUN_140041b80(&local_98,&local_68);
        }
        FUN_140e87930(&local_a8,DAT_1419fd238,0x80000000,&local_98);
      }
      goto LAB_14035bd66;
    }
  }
  local_48 = 10;
LAB_14035bd66:
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
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

