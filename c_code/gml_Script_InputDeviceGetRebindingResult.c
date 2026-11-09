// gml_Script_InputDeviceGetRebindingResult @ 0x1403226a0

longlong *
gml_Script_InputDeviceGetRebindingResult
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong in_stack_ffffffffffffff00;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  undefined4 local_d0;
  uint local_cc;
  longlong local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  byte local_9c;
  longlong local_98;
  byte local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  longlong *local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  local_80 = "gml_Script_InputDeviceGetRebinding";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 7;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_a8,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde1c8) &&
     (_Init_thread_header(&DAT_141dde1c8), DAT_141dde1c8 == -1)) {
    DAT_141dde1c0 = (longlong *)FUN_140e63aa0(DAT_1419f1018);
    _Init_thread_footer(&DAT_141dde1c8);
  }
  if (DAT_141ddc0d9 == '\0') {
    FUN_140e64380(DAT_141dde1c0,"gml_Script_InputDeviceGetRebinding");
    FUN_140e64380(param_1,"gml_Script_InputDeviceGetRebinding");
  }
  local_78 = 9;
  if (DAT_141ddc0d9 == '\0') {
    DAT_141ddc0d9 = '\x01';
    plVar2 = (longlong *)(**(code **)(*DAT_141dde1c0 + 0x10))(DAT_141dde1c0,DAT_1419f1038);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uVar7 = 0;
    uVar3 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (param_1,param_2,&local_f8,0,0);
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_141a02e18,0x80000000,&local_b8,uVar7,
                  in_stack_ffffffffffffff00 & 0xffffffffffffff00);
    uVar8 = (undefined4)(uVar7 >> 0x20);
    FUN_140e609c0(DAT_141dde1c0);
    if (&local_b8 != plVar2) {
      local_e8 = local_b8;
      uStack_e0 = uStack_b0;
      uStack_dc = uStack_ac;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar2);
      }
      FUN_140041b80(plVar2,&local_e8);
    }
    FUN_140e60910(1);
  }
  local_78 = 10;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  plVar2 = (longlong *)(**(code **)(*DAT_141dde1c0 + 8))(DAT_141dde1c0,DAT_1419f1038);
  if (plVar2 != &local_a8) {
    local_e8 = *plVar2;
    uStack_e0 = (undefined4)plVar2[1];
    uStack_dc = *(undefined4 *)((longlong)plVar2 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_e8);
  }
  local_70 = &local_a8;
  if (param_4 < 1) {
    plVar2 = &DAT_1419df7b0;
  }
  else {
    plVar2 = (longlong *)*param_5;
    if (plVar2 == &local_98) goto LAB_140322987;
  }
  local_e8 = *plVar2;
  uStack_e0 = (undefined4)plVar2[1];
  uStack_dc = *(undefined4 *)((longlong)plVar2 + 0xc);
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_e8);
LAB_140322987:
  local_68 = &local_98;
  plVar2 = (longlong *)
           FUN_140e634e0(param_1,param_2,&local_f8,2,CONCAT44(uVar8,DAT_1419ff4f8),&local_70);
  lVar4 = 0;
  uVar5 = 0xffffff;
  if (plVar2 != &local_d8) {
    local_e8 = *plVar2;
    uStack_e0 = (undefined4)plVar2[1];
    uStack_dc = *(undefined4 *)((longlong)plVar2 + 0xc);
    FUN_140041b80(&local_d8,&local_e8);
    lVar4 = local_d8;
    uVar5 = local_cc;
  }
  if ((uVar5 & 0xffffff) == 3) {
    bVar6 = lVar4 == 0;
  }
  else {
    bVar6 = (uVar5 & 0xffffff) == 5;
  }
  if (bVar6) {
    uStack_dc = 0xd;
    local_e8 = 0;
    plVar2 = &local_e8;
    bVar1 = true;
    bVar6 = false;
  }
  else {
    uStack_bc = uVar5;
    uStack_c0 = local_d0;
    if ((1 << ((byte)uVar5 & 0x1f) & 0x46U) == 0) {
      local_c8 = lVar4;
    }
    else {
      FUN_1400419b0(&local_c8,&local_d8);
    }
    plVar2 = &local_c8;
    bVar1 = false;
    bVar6 = true;
  }
  uVar8 = uStack_dc;
  if (plVar2 != param_3) {
    local_60 = (undefined4)*plVar2;
    uStack_5c = *(undefined4 *)((longlong)plVar2 + 4);
    uStack_58 = (undefined4)plVar2[1];
    uStack_54 = *(undefined4 *)((longlong)plVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_60);
  }
  if ((bVar6) && ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_c8);
  }
  if ((bVar1) && ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uVar5 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

