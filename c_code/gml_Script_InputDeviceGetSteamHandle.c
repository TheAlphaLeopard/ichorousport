// gml_Script_InputDeviceGetSteamHandle @ 0x140322c60

undefined8 *
gml_Script_InputDeviceGetSteamHandle
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong in_stack_ffffffffffffff10;
  undefined8 **ppuVar8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_60 = "gml_Script_InputDeviceGetRebindingResult";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0xb;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_88,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde1cc) &&
     (_Init_thread_header(&DAT_141dde1cc), DAT_141dde1cc == -1)) {
    DAT_141dde1d0 = (longlong *)FUN_140e63aa0(DAT_1419f10e8);
    _Init_thread_footer(&DAT_141dde1cc);
  }
  if (DAT_141ddc0da == '\0') {
    FUN_140e64380(DAT_141dde1d0,"gml_Script_InputDeviceGetRebindingResult");
    FUN_140e64380(param_1,"gml_Script_InputDeviceGetRebindingResult");
  }
  local_58 = 0xd;
  if (DAT_141ddc0da == '\0') {
    DAT_141ddc0da = '\x01';
    puVar4 = (undefined8 *)(**(code **)(*DAT_141dde1d0 + 0x10))(DAT_141dde1d0,DAT_1419f1038);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    uVar6 = 0;
    uVar5 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (param_1,param_2,&local_e8,0,0);
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_141a02e18,0x80000000,&local_98,uVar6,
                  in_stack_ffffffffffffff10 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar6 >> 0x20);
    FUN_140e609c0(DAT_141dde1d0);
    if (&local_98 != puVar4) {
      local_d8 = local_98;
      uStack_d0 = uStack_90;
      uStack_cc = uStack_8c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_d8);
    }
    FUN_140e60910(1);
  }
  local_58 = 0xf;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141dde1d0 + 8))(DAT_141dde1d0,DAT_1419f1038);
  if (puVar4 != &local_88) {
    local_d8 = *puVar4;
    uStack_d0 = *(undefined4 *)(puVar4 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_d8);
  }
  local_50 = &local_88;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_78) goto LAB_140322f4d;
  }
  local_d8 = *param_5;
  uStack_d0 = *(undefined4 *)(param_5 + 1);
  uStack_cc = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_d8);
LAB_140322f4d:
  local_48 = &local_78;
  ppuVar8 = &local_50;
  uVar6 = CONCAT44(uVar7,DAT_1419ff4f8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_e8,2,uVar6,ppuVar8);
  if (puVar4 != &local_c8) {
    local_d8 = *puVar4;
    uStack_d0 = *(undefined4 *)(puVar4 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_d8);
  }
  local_58 = 0x10;
  iVar3 = FUN_140e851f0(&local_c8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    uStack_cc = DAT_1419df7bc;
    uStack_d0 = DAT_1419df7b8;
    if ((1 << ((byte)DAT_1419df7bc & 0x1f) & 0x46U) == 0) {
      local_d8 = DAT_1419df7b0;
    }
    else {
      FUN_1400419b0(&local_d8,&DAT_1419df7b0);
    }
    puVar4 = &local_d8;
    bVar2 = true;
    bVar1 = false;
  }
  else {
    FUN_140e87440(&local_c8,DAT_1419fdc18,0x80000000,&local_b8,uVar6 & 0xffffffffffffff00,
                  (ulonglong)ppuVar8 & 0xffffffffffffff00);
    local_9c = local_ac;
    local_a0 = local_b0;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
      local_a8 = local_b8;
    }
    else {
      FUN_1400419b0(&local_a8,&local_b8);
    }
    puVar4 = &local_a8;
    bVar2 = false;
    bVar1 = true;
  }
  if (puVar4 != param_3) {
    local_40 = *(undefined4 *)puVar4;
    uStack_3c = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_38 = *(undefined4 *)(puVar4 + 1);
    uStack_34 = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_40);
  }
  if ((bVar1) && ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_a8);
  }
  if ((bVar2) && ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_88,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

