// gml_Script_InputDeviceGetDescription @ 0x14031e1d0

longlong *
gml_Script_InputDeviceGetDescription(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  double *local_res18 [2];
  ulonglong uVar8;
  double local_b8;
  uint local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  
  local_60 = "gml_Script_InputDeviceGetAnyGamepadConnected";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 5;
  _eh_vector_constructor_iterator_(local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_ac = 0xffffff;
  local_b8 = 0.0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde178) &&
     (_Init_thread_header(&DAT_141dde178), DAT_141dde178 == -1)) {
    DAT_141dde170 = (longlong *)FUN_140e63aa0(DAT_1419f0d28);
    _Init_thread_footer(&DAT_141dde178);
  }
  if (DAT_141ddc0d3 == '\0') {
    FUN_140e64380(DAT_141dde170,"gml_Script_InputDeviceGetAnyGamepadConnected");
    FUN_140e64380(param_1,"gml_Script_InputDeviceGetAnyGamepadConnected");
  }
  local_58 = 7;
  if (DAT_141ddc0d3 == '\0') {
    DAT_141ddc0d3 = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141dde170 + 0x10))(DAT_141dde170,DAT_141a01188);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    uVar8 = 0;
    uVar4 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (param_1,param_2,&local_a8,0,0);
    FUN_140e87440(uVar4,DAT_141a011a8,0x80000000,&local_98,uVar8 & 0xffffffffffffff00,0);
    FUN_140e609c0(DAT_141dde170);
    if (&local_98 != puVar3) {
      local_88 = (undefined4)local_98;
      uStack_84 = local_98._4_4_;
      uStack_80 = uStack_90;
      uStack_7c = uStack_8c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_88);
    }
    FUN_140e60910(1);
  }
  local_58 = 0xb;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = 0.0;
  local_58 = 0xc;
  plVar5 = (longlong *)(**(code **)(*DAT_141dde170 + 8))(DAT_141dde170,DAT_141a01188);
  iVar6 = 0;
  if ((*(int *)((longlong)plVar5 + 0xc) == 2) && (*plVar5 != 0)) {
    iVar6 = *(int *)(*plVar5 + 0x24);
  }
  if (0 < iVar6) {
    uVar7 = 0x3ff00000;
    do {
      iVar6 = iVar6 + -1;
      local_58 = 0xe;
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      local_a8 = 0;
      local_a0 = 0;
      local_9c = 5;
      local_res18[0] = &local_b8;
      uVar4 = gml_Script_InputDeviceIsGamepad(param_1,param_2,&local_a8,1,local_res18);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 != '\0') {
        local_58 = 0xe;
        goto LAB_14031e523;
      }
      local_58 = 0xf;
      uVar2 = local_ac & 0xffffff;
      if (uVar2 == 0) {
LAB_14031e508:
        local_b8 = local_b8 + 1.0;
      }
      else {
        if (uVar2 == 1) {
          local_b8 = (double)FUN_140e4b060(&local_b8);
          local_ac = 0;
          goto LAB_14031e508;
        }
        if (uVar2 == 7) {
          local_b8 = (double)CONCAT44(local_b8._4_4_,local_b8._0_4_ + 1);
        }
        else if (uVar2 == 10) {
          local_b8 = (double)((longlong)local_b8 + 1);
        }
        else {
          if (uVar2 == 0xd) {
            local_ac = 0;
            goto LAB_14031e508;
          }
          FUN_140042910(&DAT_14172c3d8,&local_b8,&local_b8);
        }
      }
    } while (0 < iVar6);
  }
  local_58 = 0x12;
  uVar7 = 0;
LAB_14031e523:
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = (ulonglong)uVar7 << 0x20;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

