// gml_Script_InputDeviceIsAvailable @ 0x140323950

undefined8 *
gml_Script_InputDeviceIsAvailable
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *local_res18;
  code *pcVar7;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  byte local_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 *local_50;
  char *local_48;
  undefined4 local_40;
  
  local_80 = "gml_Script_InputDeviceIsActive";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = (undefined8 **)&local_88;
  local_78 = 9;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_70,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_54 = 0xffffff;
  local_60 = 0;
  local_9c = 0;
  local_a8 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde1e4) &&
     (_Init_thread_header(&DAT_141dde1e4), DAT_141dde1e4 == -1)) {
    DAT_141dde1e8 = (longlong *)FUN_140e63aa0(DAT_1419f1138);
    _Init_thread_footer(&DAT_141dde1e4);
  }
  if (DAT_141ddc0dc == '\0') {
    FUN_140e64380(DAT_141dde1e8,"gml_Script_InputDeviceIsActive");
    FUN_140e64380(param_1,"gml_Script_InputDeviceIsActive");
  }
  local_78 = 0xb;
  if (DAT_141ddc0dc == '\0') {
    DAT_141ddc0dc = '\x01';
    puVar4 = (undefined8 *)(**(code **)(*DAT_141dde1e8 + 0x10))(DAT_141dde1e8,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde1e8);
    pcVar7 = (code *)0x0;
    puVar5 = (undefined8 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (param_1,param_2,&local_a8,0,0);
    if (puVar5 != puVar4) {
      local_b8 = *puVar5;
      uStack_b0 = *(undefined4 *)(puVar5 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_b8);
    }
    FUN_140e60910(1);
  }
  local_78 = 0xc;
  uVar6 = (**(code **)(*DAT_141dde1e8 + 8))(DAT_141dde1e8,DAT_1419fcb48);
  FUN_140e87440(uVar6,DAT_141a02088,0x80000000,&local_60,(ulonglong)pcVar7 & 0xffffffffffffff00,0);
  cVar1 = FUN_140e491e0(&local_60);
  if (cVar1 == '\0') {
    local_78 = 0xc;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    *param_3 = 0;
    goto LAB_140323f7e;
  }
  local_78 = 0xe;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uStack_ac = 0;
  local_b8 = 0;
  uVar2 = FUN_140e851f0(puVar5,&local_b8,DAT_141955260,1);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if (uVar2 < 0x80000000) {
    local_78 = 0x12;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    if ((param_4 < 1) || (puVar4 = (undefined8 *)*param_5, puVar4 != &local_70)) {
      local_b8 = *puVar4;
      uStack_b0 = *(undefined4 *)(puVar4 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_70);
      }
      FUN_140041b80(&local_70,&local_b8);
    }
    local_res18 = &local_70;
    puVar4 = (undefined8 *)
             gml_Script___InputGetGamepadOutput(param_1,param_2,&local_a8,1,&local_res18);
    if (puVar4 != param_3) {
      local_b8 = *puVar4;
      uStack_b0 = *(undefined4 *)(puVar4 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_b8);
    }
    goto LAB_140323f7e;
  }
  local_78 = 0x15;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uStack_ac = 0;
  local_b8 = 0xc059000000000000;
  iVar3 = FUN_140e851f0(puVar5,&local_b8,DAT_141955260,0);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if (iVar3 == 0) {
    local_78 = 0x19;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_90 = 0;
    local_48 = "gml_Script___InputGetKeyboardActive";
    local_50 = DAT_141dc7a50;
    DAT_141dc7a50 = &local_50;
    local_8c = 5;
    local_98 = 0;
    local_40 = 7;
    local_b8 = 0;
    uStack_b0 = 0;
    uStack_ac = 5;
    uVar6 = gml_Script___InputGetMouseActive(param_1,param_2,&local_b8,0,0);
    iVar3 = FUN_140e851f0(uVar6,&DAT_1419df7b0,DAT_141955260,0);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_8c = 0xd;
    if (iVar3 == 0) {
      local_98 = 0;
    }
    else {
      local_98 = 0x3ff0000000000000;
    }
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    DAT_141dc7a50 = (undefined8 **)local_50;
    cVar1 = FUN_140e491e0(&local_98);
    if (cVar1 == '\0') {
      local_78 = 0x1e;
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      local_a8 = 0;
      local_a0 = 0;
      local_9c = 5;
      uVar6 = gml_Script___InputGetMouseOutput(param_1,param_2,&local_a8,0,0);
      cVar1 = FUN_140e491e0(uVar6);
      if (cVar1 == '\0') goto LAB_140323f66;
      local_78 = 0x1e;
      *param_3 = 0x3ff0000000000000;
    }
    else {
      local_78 = 0x19;
      *param_3 = 0x3ff0000000000000;
    }
  }
  else {
    local_78 = 0x21;
    if (param_4 < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*param_5;
    }
    uStack_ac = 0;
    local_b8 = 0xc069000000000000;
    iVar3 = FUN_140e851f0(puVar5,&local_b8,DAT_141955260,0);
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    if (iVar3 == 0) {
LAB_140323f66:
      local_78 = 0x30;
    }
    else {
      local_78 = 0x2a;
      if (0 < param_4) {
        puVar4 = (undefined8 *)*param_5;
      }
      uStack_ac = 0;
      local_b8 = 0xc072c00000000000;
      iVar3 = FUN_140e851f0(puVar4,&local_b8,DAT_141955260,0);
      if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      if (iVar3 != 0) goto LAB_140323f66;
      local_78 = 0x2d;
    }
    *param_3 = 0;
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
LAB_140323f7e:
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  _eh_vector_destructor_iterator_(&local_70,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 **)local_88;
  return param_3;
}

