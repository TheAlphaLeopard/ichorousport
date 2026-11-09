// gml_Script_InputDeviceGetGamepadValue @ 0x14031f240

undefined8 *
gml_Script_InputDeviceGetGamepadValue
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  uint uVar9;
  undefined8 *local_res18;
  uint local_res20;
  ulonglong uVar10;
  undefined8 **ppuVar11;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  local_res20 = 0;
  local_80 = "gml_Script_InputDeviceGetGamepadType";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x10;
  _eh_vector_constructor_iterator_(&local_98,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_dc = 0;
  local_e8 = 0;
  uVar9 = 5;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde198) &&
     (_Init_thread_header(&DAT_141dde198), DAT_141dde198 == -1)) {
    DAT_141dde190 = (longlong *)FUN_140e63aa0(DAT_1419f0e48);
    _Init_thread_footer(&DAT_141dde198);
  }
  if (DAT_141ddc0d5 == '\0') {
    FUN_140e64380(DAT_141dde190,"gml_Script_InputDeviceGetGamepadType");
    FUN_140e64380(param_1,"gml_Script_InputDeviceGetGamepadType");
  }
  local_78 = 0x12;
  if (DAT_141ddc0d5 == '\0') {
    DAT_141ddc0d5 = '\x01';
    puVar5 = (undefined8 *)(**(code **)(*DAT_141dde190 + 0x10))(DAT_141dde190,DAT_141a01188);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    uVar10 = 0;
    uVar6 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (param_1,param_2,&local_e8,0,0);
    FUN_140e87440(uVar6,DAT_141a011a8,0x80000000,&local_a8,uVar10 & 0xffffffffffffff00,0);
    FUN_140e609c0(DAT_141dde190);
    if (&local_a8 != puVar5) {
      local_b8 = local_a8;
      uStack_b0 = uStack_a0;
      uStack_ac = uStack_9c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_b8);
    }
    FUN_140e60910(1);
  }
  local_78 = 0x14;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  uStack_cc = 0;
  local_d8 = 0;
  iVar4 = FUN_140e851f0(puVar7,&local_d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (iVar4 != -2 && iVar4 < 0) {
    local_78 = 0x14;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = 0;
    goto LAB_14031f6f9;
  }
  local_78 = 0x16;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
LAB_14031f52e:
    local_b8 = *puVar7;
    uStack_b0 = *(undefined4 *)(puVar7 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_b8);
  }
  else {
    puVar7 = (undefined8 *)*param_5;
    if (puVar7 != &local_98) goto LAB_14031f52e;
  }
  local_res18 = &local_98;
  ppuVar11 = &local_res18;
  uVar6 = gml_Script_InputDeviceIsGamepad(param_1,param_2,&local_e8,1,ppuVar11);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 == '\0') {
    uStack_ac = 0;
    local_b8 = 0;
    puVar5 = &local_b8;
    uVar9 = 2;
  }
  else {
    plVar8 = (longlong *)(**(code **)(*DAT_141dde190 + 8))(DAT_141dde190,DAT_141a01188);
    if (0 < param_4) {
      puVar5 = (undefined8 *)*param_5;
    }
    iVar4 = FUN_140e4a740(puVar5);
    if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    FUN_140e87440(plVar8,DAT_1419fd248,0x80000000,&local_c8,(ulonglong)ppuVar11 & 0xffffffffffffff00
                  ,0);
    uStack_cc = local_bc;
    uStack_d0 = local_c0;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
      local_d8 = local_c8;
    }
    else {
      FUN_1400419b0(&local_d8,&local_c8);
    }
    puVar5 = &local_d8;
  }
  uVar2 = uStack_ac;
  local_res20 = uVar9;
  if (puVar5 != param_3) {
    local_70 = *(undefined4 *)puVar5;
    uStack_6c = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_68 = *(undefined4 *)(puVar5 + 1);
    uStack_64 = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_70);
  }
  if (((uVar9 & 2) != 0) &&
     (uVar9 = uVar9 & 0xfffffffd, local_res20 = uVar9, (1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_b8);
  }
  if (((uVar9 & 1) != 0) && ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_d8);
  }
LAB_14031f6f9:
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

