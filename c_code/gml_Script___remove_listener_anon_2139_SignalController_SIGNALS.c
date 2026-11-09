// gml_Script___remove_listener_anon_2139_SignalController_SIGNALS @ 0x1404a2aa0

undefined8 *
gml_Script___remove_listener_anon_2139_SignalController_SIGNALS
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  double *pdVar8;
  undefined8 uVar9;
  undefined4 uVar11;
  undefined8 uVar10;
  double local_148;
  double dStack_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  double local_128;
  uint local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  double local_e8;
  byte local_dc;
  double local_d8;
  byte local_cc;
  double local_c8;
  byte local_bc;
  double local_b8;
  byte local_ac;
  double local_a8;
  byte local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  double *local_88;
  double *local_80;
  double *local_78;
  double *local_70;
  double *local_68;
  
  local_100 = "gml_Script___add_listener@anon@940@SignalController@SIGNALS";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x25;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_e8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_11c = 0xffffff;
  uVar9 = 0;
  local_128 = 0.0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_12c = 0;
  local_138 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x26;
  pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fa278);
  if (pdVar4 != &local_b8) {
    local_148 = *pdVar4;
    dStack_140 = pdVar4[1];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_148);
  }
  local_70 = &local_b8;
  pdVar8 = (double *)&DAT_1419df7b0;
  if (param_4 < 2) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_1404a2be7:
    local_148 = *pdVar5;
    dStack_140 = pdVar5[1];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_148);
  }
  else {
    pdVar5 = (double *)param_5[1];
    if (pdVar5 != &local_a8) goto LAB_1404a2be7;
  }
  local_68 = &local_a8;
  uVar10 = CONCAT44(uVar11,DAT_1419fa238);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_138,2,uVar10,&local_70);
  uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    local_f8 = 0x27;
    pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fa278);
    if (param_4 < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)param_5[1];
    }
    uVar6 = FUN_140e8da20(&local_98,param_1,0);
    FUN_140e98ef0(param_1,param_2,pdVar4,puVar7,uVar6);
    uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
  }
  local_f8 = 0x29;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if (pdVar4 != &local_e8) {
    local_148 = *pdVar4;
    dStack_140 = pdVar4[1];
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_148);
  }
  local_88 = &local_e8;
  if (param_4 < 2) {
    pdVar4 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar4 = (double *)param_5[1];
    if (pdVar4 == &local_d8) goto LAB_1404a2d75;
  }
  local_148 = *pdVar4;
  dStack_140 = pdVar4[1];
  if ((1 << ((byte)_local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_148);
LAB_1404a2d75:
  local_80 = &local_d8;
  uVar6 = CONCAT44(uVar11,DAT_141a01138);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_138,2,uVar6,&local_88);
  if (pdVar4 != &local_128) {
    local_148 = *pdVar4;
    dStack_140 = pdVar4[1];
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
  }
  local_f8 = 0x2a;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0;
  local_118 = 0;
  bVar1 = true;
  do {
    if (!bVar1) {
      local_f8 = 0x2a;
      (**(code **)(*param_1 + 8))(param_1,DAT_1419fa278);
      FUN_140162d40(&local_118,2);
    }
    bVar1 = false;
    iVar3 = 0;
    if ((local_11c == 2) && (local_128 != 0.0)) {
      iVar3 = *(int *)((longlong)local_128 + 0x24);
    }
    dStack_140 = (double)((ulonglong)dStack_140 & 0xffffffff);
    local_148 = (double)iVar3;
    iVar3 = FUN_140e851f0(&local_118,&local_148,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)dStack_140 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (iVar3 == -2 || -1 < iVar3) {
      local_f8 = 0x2f;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_138 = 0;
      local_130 = 0;
      local_12c = 5;
      local_88 = &local_128;
      if (param_4 < 1) {
        pdVar4 = (double *)&DAT_1419df7b0;
LAB_1404a2fce:
        local_148 = *pdVar4;
        dStack_140 = pdVar4[1];
        if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        FUN_140041b80(&local_d8,&local_148);
      }
      else {
        pdVar4 = (double *)*param_5;
        if (pdVar4 != &local_d8) goto LAB_1404a2fce;
      }
      local_80 = &local_d8;
      if ((param_4 < 3) || (pdVar8 = (double *)param_5[2], pdVar8 != &local_c8)) {
        local_148 = *pdVar8;
        dStack_140 = pdVar8[1];
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_148);
      }
      local_78 = &local_c8;
      FUN_140e634e0(param_1,param_2,&local_138,3,CONCAT44(uVar11,DAT_1419fe568),&local_88);
      local_f8 = 0x30;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      goto LAB_1404a30a1;
    }
    local_f8 = 0x2b;
    if (param_4 < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*param_5;
    }
    iVar3 = FUN_140e4a740(&local_118);
    pdVar4 = (double *)0x0;
    if (((local_11c & 0xffffff) == 2) && (local_128 != 0.0)) {
      if ((iVar3 < 0) || (*(int *)((longlong)local_128 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)((longlong)local_128 + 0x24));
      }
      else {
        pdVar4 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)local_128 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      pdVar4 = &local_128;
    }
    iVar3 = FUN_140e851f0(pdVar4,puVar7,DAT_141955260,0);
  } while (iVar3 != 0);
  local_f8 = 0x2c;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  uVar9 = 1;
LAB_1404a30a1:
  *(undefined4 *)((longlong)param_3 + 0xc) = 10;
  *param_3 = uVar9;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

