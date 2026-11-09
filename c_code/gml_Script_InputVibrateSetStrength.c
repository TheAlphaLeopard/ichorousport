// gml_Script_InputVibrateSetStrength @ 0x140386e20

undefined8 *
gml_Script_InputVibrateSetStrength
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double local_e8;
  uint local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  byte local_6c;
  uint local_58 [2];
  undefined8 *local_50;
  undefined8 *local_48;
  double *local_40;
  
  local_b0 = "gml_Script_InputVibrateSetPause";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 9;
  FUN_140041df0(local_58,param_4,2,param_5);
  _eh_vector_constructor_iterator_(&local_78,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde920) &&
     (_Init_thread_header(&DAT_141dde920), DAT_141dde920 == -1)) {
    DAT_141dde928 = (longlong *)FUN_140e63aa0(DAT_1419f4348);
    _Init_thread_footer(&DAT_141dde920);
  }
  local_a8 = 9;
  puVar7 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_50[1];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_a8 = 9;
    if ((int)local_58[0] < 2) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_50[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0;
  }
  if (DAT_141ddc15c == '\0') {
    FUN_140e64380(DAT_141dde928,"gml_Script_InputVibrateSetPause");
    FUN_140e64380(param_1,"gml_Script_InputVibrateSetPause");
  }
  local_a8 = 0xb;
  if (DAT_141ddc15c == '\0') {
    DAT_141ddc15c = '\x01';
    puVar4 = (undefined8 *)(**(code **)(*DAT_141dde928 + 0x10))(DAT_141dde928,DAT_141a026b8);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uVar9 = 0;
    uVar5 = FUN_1400ebd30(param_1,param_2,&local_d8,0,0);
    FUN_140e87440(uVar5,DAT_1419fed38,0x80000000,&local_88,uVar9 & 0xffffffffffffff00,0);
    FUN_140e609c0(DAT_141dde928);
    if (&local_88 != puVar4) {
      local_c8 = local_88;
      uStack_c0 = uStack_80;
      uStack_bc = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_c8);
    }
    FUN_140e60910(1);
  }
  local_a8 = 0xd;
  if ((int)local_58[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_50[1];
  }
  uStack_bc = 0;
  local_c8 = 0xc008000000000000;
  iVar2 = FUN_140e851f0(puVar4,&local_c8,DAT_141955260,0);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (iVar2 == 0) {
    local_a8 = 0xf;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_dc = 0;
    local_e8 = 0.0;
    local_a8 = 0x12;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if (((int)local_58[0] < 1) || (puVar7 = (undefined8 *)*local_50, puVar7 != &local_78)) {
      local_c8 = *puVar7;
      uStack_c0 = *(undefined4 *)(puVar7 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_c8);
    }
    local_48 = &local_78;
    local_40 = &local_e8;
    gml_Script_InputVibrateSetStrength(param_1,param_2,&local_d8,2,&local_48);
    local_a8 = 0x13;
    uVar3 = local_dc & 0xffffff;
    if (uVar3 != 0) {
      if (uVar3 == 1) {
        local_e8 = (double)FUN_140e4b060(&local_e8);
        local_e8 = local_e8 + 1.0;
        local_dc = 0;
        local_a8 = 0x16;
        goto LAB_1403873a5;
      }
      if (uVar3 == 7) {
        local_e8 = (double)CONCAT44(local_e8._4_4_,local_e8._0_4_ + 1);
        local_a8 = 0x16;
        goto LAB_1403873a5;
      }
      if (uVar3 == 10) {
        local_e8 = (double)((longlong)local_e8 + 1);
        local_a8 = 0x16;
        goto LAB_1403873a5;
      }
      if (uVar3 != 0xd) {
        FUN_140042910(&DAT_14172c3d8,&local_e8,&local_e8);
        local_a8 = 0x16;
        goto LAB_1403873a5;
      }
      local_dc = 0;
    }
    local_e8 = local_e8 + 1.0;
    local_a8 = 0x16;
    goto LAB_1403873a5;
  }
  local_a8 = 0x19;
  plVar6 = (longlong *)(**(code **)(*DAT_141dde928 + 8))(DAT_141dde928,DAT_141a026b8);
  if ((int)local_58[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_1403872f8:
    local_c8 = *puVar4;
    uStack_c0 = *(undefined4 *)(puVar4 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_c8);
  }
  else {
    puVar4 = (undefined8 *)*local_50;
    if (puVar4 != &local_a0) goto LAB_1403872f8;
  }
  if (1 < (int)local_58[0]) {
    puVar7 = (undefined8 *)local_50[1];
  }
  iVar2 = FUN_140e4a740(puVar7);
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
  FUN_140e87930(plVar6,DAT_141a03d88,0x80000000,&local_a0);
LAB_1403873a5:
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_78,0x10,2,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar7 = local_50;
    do {
      puVar4 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

