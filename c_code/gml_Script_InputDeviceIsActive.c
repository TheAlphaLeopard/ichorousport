// gml_Script_InputDeviceIsActive @ 0x1403232a0

undefined8 *
gml_Script_InputDeviceIsActive
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint uVar8;
  undefined8 *local_res18;
  uint local_res20;
  ulonglong uVar9;
  undefined8 **ppuVar10;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
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
  local_80 = "gml_Script_InputDeviceGetSteamHandle";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 10;
  _eh_vector_constructor_iterator_(&local_98,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  uVar8 = 5;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde1e0) &&
     (_Init_thread_header(&DAT_141dde1e0), DAT_141dde1e0 == -1)) {
    DAT_141dde1d8 = (longlong *)FUN_140e63aa0(DAT_1419f1128);
    _Init_thread_footer(&DAT_141dde1e0);
  }
  if (DAT_141ddc0db == '\0') {
    FUN_140e64380(DAT_141dde1d8,"gml_Script_InputDeviceGetSteamHandle");
    FUN_140e64380(param_1,"gml_Script_InputDeviceGetSteamHandle");
  }
  local_78 = 0xc;
  if (DAT_141ddc0db == '\0') {
    DAT_141ddc0db = '\x01';
    puVar4 = (undefined8 *)(**(code **)(*DAT_141dde1d8 + 0x10))(DAT_141dde1d8,DAT_141a01188);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uVar9 = 0;
    uVar5 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (param_1,param_2,&local_d8,0,0);
    FUN_140e87440(uVar5,DAT_141a011a8,0x80000000,&local_a8,uVar9 & 0xffffffffffffff00,0);
    FUN_140e609c0(DAT_141dde1d8);
    if (&local_a8 != puVar4) {
      local_e8 = local_a8;
      uStack_e0 = uStack_a0;
      uStack_dc = uStack_9c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_e8);
    }
    FUN_140e60910(1);
  }
  local_78 = 0xe;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*param_5;
  }
  uStack_dc = 0;
  local_e8 = 0;
  iVar3 = FUN_140e851f0(puVar6,&local_e8,DAT_141955260,1);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if (iVar3 != -2 && iVar3 < 0) {
    local_78 = 0xe;
    if (param_3 != &DAT_1419df7b0) {
      local_e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_e0 = DAT_1419df7b8;
      uStack_dc = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_e8);
    }
    goto LAB_1403237ab;
  }
  local_78 = 0x10;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
LAB_1403235ac:
    local_e8 = *puVar6;
    uStack_e0 = *(undefined4 *)(puVar6 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_e8);
  }
  else {
    puVar6 = (undefined8 *)*param_5;
    if (puVar6 != &local_98) goto LAB_1403235ac;
  }
  local_res18 = &local_98;
  ppuVar10 = &local_res18;
  uVar5 = gml_Script_InputDeviceIsGamepad(param_1,param_2,&local_d8,1,ppuVar10);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 == '\0') {
    local_ac = DAT_1419df7bc;
    local_b0 = DAT_1419df7b8;
    if ((1 << ((byte)DAT_1419df7bc & 0x1f) & 0x46U) == 0) {
      local_b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    }
    else {
      FUN_1400419b0(&local_b8,&DAT_1419df7b0);
    }
    puVar4 = &local_b8;
    uVar8 = 10;
  }
  else {
    plVar7 = (longlong *)(**(code **)(*DAT_141dde1d8 + 8))(DAT_141dde1d8,DAT_141a01188);
    if (0 < param_4) {
      puVar4 = (undefined8 *)*param_5;
    }
    iVar3 = FUN_140e4a740(puVar4);
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
    FUN_140e87440(plVar7,DAT_1419fd378,0x80000000,&local_c8,(ulonglong)ppuVar10 & 0xffffffffffffff00
                  ,0);
    uStack_dc = local_bc;
    uStack_e0 = local_c0;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
      local_e8 = local_c8;
    }
    else {
      FUN_1400419b0(&local_e8,&local_c8);
    }
    puVar4 = &local_e8;
  }
  local_res20 = uVar8;
  if (puVar4 != param_3) {
    local_70 = *(undefined4 *)puVar4;
    uStack_6c = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_68 = *(undefined4 *)(puVar4 + 1);
    uStack_64 = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_70);
  }
  if (((uVar8 & 2) != 0) &&
     (uVar8 = uVar8 & 0xfffffffd, local_res20 = uVar8, (1 << ((byte)local_ac & 0x1f) & 0x46U) != 0))
  {
    FUN_140041a50(&local_b8);
  }
  if (((uVar8 & 1) != 0) && ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_e8);
  }
LAB_1403237ab:
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
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

