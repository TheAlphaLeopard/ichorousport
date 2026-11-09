// gml_Script___InputGamepadGUIDParse @ 0x1400901f0

double * gml_Script___InputGamepadGUIDParse
                   (undefined8 param_1,undefined8 param_2,double *param_3,int param_4,
                   undefined8 *param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  double *pdVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong in_stack_ffffffffffffff28;
  ulonglong uVar9;
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  double local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_44;
  
  local_60 = "gml_Script___InputGamepadGetReadArray";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 5;
  uStack_6c = 0xffffff;
  local_78 = 0.0;
  uStack_7c = 0xffffff;
  local_88 = 0.0;
  uStack_8c = 0xffffff;
  local_98 = 0.0;
  local_9c = 0;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc5d8) &&
     (_Init_thread_header(&DAT_141ddc5d8), DAT_141ddc5d8 == -1)) {
    DAT_141ddc5d0 = (longlong *)FUN_140e63aa0(DAT_141a01198);
    _Init_thread_footer(&DAT_141ddc5d8);
  }
  if (DAT_141ddc040 == '\0') {
    FUN_140e64380(DAT_141ddc5d0,"gml_Script___InputGamepadGetReadArray");
    FUN_140e64380(param_1,"gml_Script___InputGamepadGetReadArray");
  }
  local_58 = 7;
  if (DAT_141ddc040 == '\0') {
    DAT_141ddc040 = '\x01';
    pdVar4 = (double *)(**(code **)(*DAT_141ddc5d0 + 0x10))(DAT_141ddc5d0,DAT_141a01188);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    uVar9 = 0;
    uVar5 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (param_1,param_2,&local_a8,0,0);
    FUN_140e87440(uVar5,DAT_141a011a8,0x80000000,&local_78,uVar9 & 0xffffffffffffff00,0);
    FUN_140e609c0(DAT_141ddc5d0);
    if (&local_78 != pdVar4) {
      dStack_c0 = (double)CONCAT44(uStack_6c,uStack_70);
      local_c8 = local_78;
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      FUN_140041b80(pdVar4,&local_c8);
    }
    FUN_140e60910(1);
    pdVar4 = (double *)(**(code **)(*DAT_141ddc5d0 + 0x10))(DAT_141ddc5d0,DAT_1419fd298);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    in_stack_ffffffffffffff28 = 0;
    uVar5 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (param_1,param_2,&local_b8,0,0);
    in_stack_ffffffffffffff28 = in_stack_ffffffffffffff28 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_1419fd268,0x80000000,&local_88,in_stack_ffffffffffffff28,0);
    FUN_140e609c0(DAT_141ddc5d0);
    if (&local_88 != pdVar4) {
      dStack_c0 = (double)CONCAT44(uStack_7c,uStack_80);
      local_c8 = local_88;
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      FUN_140041b80(pdVar4,&local_c8);
    }
    FUN_140e60910(1);
  }
  local_58 = 10;
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  local_44 = 0;
  local_50 = 0;
  iVar2 = FUN_140e851f0(puVar7,&local_50,DAT_141955260,1);
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  if (iVar2 == -2 || -1 < iVar2) {
    plVar6 = (longlong *)(**(code **)(*DAT_141ddc5d0 + 8))(DAT_141ddc5d0,DAT_141a01188);
    iVar2 = 0;
    if ((*(int *)((longlong)plVar6 + 0xc) == 2) && (*plVar6 != 0)) {
      iVar2 = *(int *)(*plVar6 + 0x24);
    }
    if (param_4 < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*param_5;
    }
    dStack_c0 = (double)((ulonglong)dStack_c0 & 0xffffffff);
    local_c8 = (double)iVar2;
    uVar3 = FUN_140e851f0(puVar7,&local_c8,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)dStack_c0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    if (uVar3 < 0x80000000) goto LAB_14009064d;
    local_58 = 0xc;
    plVar6 = (longlong *)(**(code **)(*DAT_141ddc5d0 + 8))(DAT_141ddc5d0,DAT_141a01188);
    if (0 < param_4) {
      puVar8 = (undefined8 *)*param_5;
    }
    iVar2 = FUN_140e4a740(puVar8);
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
    FUN_140e87440(plVar6,DAT_1419fd228,0x80000000,&local_98,
                  in_stack_ffffffffffffff28 & 0xffffffffffffff00,0);
    if (&local_98 == param_3) goto LAB_140090696;
    dStack_c0 = (double)CONCAT44(uStack_8c,uStack_90);
    local_c8 = local_98;
  }
  else {
LAB_14009064d:
    local_58 = 10;
    pdVar4 = (double *)(**(code **)(*DAT_141ddc5d0 + 8))(DAT_141ddc5d0,DAT_1419fd298);
    if (pdVar4 == param_3) goto LAB_140090696;
    local_c8 = *pdVar4;
    dStack_c0 = pdVar4[1];
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  FUN_140041b80(param_3,&local_c8);
LAB_140090696:
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

