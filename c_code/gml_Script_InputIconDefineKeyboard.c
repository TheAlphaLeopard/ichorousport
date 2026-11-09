// gml_Script_InputIconDefineKeyboard @ 0x14032c2e0

undefined8 *
gml_Script_InputIconDefineKeyboard
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong in_stack_ffffffffffffff30;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  char *local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_48 = "gml_Script_InputIconDefineGamepad";
  local_50 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_50;
  local_40 = 0xc;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(&local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_2c = 0xffffff;
  local_38 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde2a0) &&
     (_Init_thread_header(&DAT_141dde2a0), DAT_141dde2a0 == -1)) {
    DAT_141dde298 = (longlong *)FUN_140e63aa0(DAT_1419f1508);
    _Init_thread_footer(&DAT_141dde2a0);
  }
  if (DAT_141ddc0e8 == '\0') {
    FUN_140e64380(DAT_141dde298,"gml_Script_InputIconDefineGamepad");
    FUN_140e64380(param_1,"gml_Script_InputIconDefineGamepad");
  }
  local_40 = 0xe;
  if (DAT_141ddc0e8 == '\0') {
    DAT_141ddc0e8 = '\x01';
    puVar2 = (undefined8 *)(**(code **)(*DAT_141dde298 + 0x10))(DAT_141dde298,DAT_1419f14e8);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    uVar5 = 0;
    uVar3 = FUN_1400ae430(param_1,param_2,&local_c8,0,0);
    uVar5 = uVar5 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_141a01998,0x80000000,&local_38,uVar5,
                  in_stack_ffffffffffffff30 & 0xffffffffffffff00);
    uVar6 = (undefined4)(uVar5 >> 0x20);
    FUN_140e609c0(DAT_141dde298);
    if (&local_38 != puVar2) {
      local_b8 = (undefined4)local_38;
      uStack_b4 = local_38._4_4_;
      uStack_b0 = uStack_30;
      uStack_ac = uStack_2c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_b8);
    }
    FUN_140e60910(1);
  }
  local_40 = 0x10;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  puVar2 = (undefined8 *)(**(code **)(*DAT_141dde298 + 8))(DAT_141dde298,DAT_1419f14e8);
  if (puVar2 != &local_98) {
    local_b8 = *(undefined4 *)puVar2;
    uStack_b4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_b0 = *(undefined4 *)(puVar2 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_b8);
  }
  local_68 = &local_98;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_14032c582:
    local_b8 = *(undefined4 *)puVar4;
    uStack_b4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_b0 = *(undefined4 *)(puVar4 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_b8);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_88) goto LAB_14032c582;
  }
  local_60 = &local_88;
  uVar3 = CONCAT44(uVar6,DAT_1419ff4f8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_c8,2,uVar3,&local_68);
  uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar4 != &local_a8) {
    local_b8 = *(undefined4 *)puVar4;
    uStack_b4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_b0 = *(undefined4 *)(puVar4 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_b8);
  }
  local_40 = 0x11;
  iVar1 = FUN_140e851f0(&local_a8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_40 = 0x13;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    uVar3 = CONCAT44(uVar6,DAT_1419ff3e8);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_c8,0,uVar3,0);
    uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (puVar4 != &local_a8) {
      local_b8 = *(undefined4 *)puVar4;
      uStack_b4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_b0 = *(undefined4 *)(puVar4 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_b8);
    }
    local_40 = 0x14;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    puVar4 = (undefined8 *)(**(code **)(*DAT_141dde298 + 8))(DAT_141dde298,DAT_1419f14e8);
    if (puVar4 != &local_98) {
      local_b8 = *(undefined4 *)puVar4;
      uStack_b4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_b0 = *(undefined4 *)(puVar4 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_b8);
    }
    local_68 = &local_98;
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_14032c74d:
      local_b8 = *(undefined4 *)puVar4;
      uStack_b4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_b0 = *(undefined4 *)(puVar4 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_b8);
    }
    else {
      puVar4 = (undefined8 *)*param_5;
      if (puVar4 != &local_88) goto LAB_14032c74d;
    }
    local_60 = &local_88;
    local_58 = &local_a8;
    uVar3 = CONCAT44(uVar6,DAT_1419ff3d8);
    FUN_140e634e0(param_1,param_2,&local_c8,3,uVar3,&local_68);
    uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  local_40 = 0x17;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_68 = &local_a8;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
    if (puVar4 == &local_88) goto LAB_14032c828;
  }
  local_b8 = *(undefined4 *)puVar4;
  uStack_b4 = *(undefined4 *)((longlong)puVar4 + 4);
  uStack_b0 = *(undefined4 *)(puVar4 + 1);
  uStack_ac = *(undefined4 *)((longlong)puVar4 + 0xc);
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_b8);
LAB_14032c828:
  local_60 = &local_88;
  if ((param_4 < 3) || (puVar2 = (undefined8 *)param_5[2], puVar2 != &local_78)) {
    local_b8 = *(undefined4 *)puVar2;
    uStack_b4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_b0 = *(undefined4 *)(puVar2 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_b8);
  }
  local_58 = &local_78;
  FUN_140e634e0(param_1,param_2,&local_c8,3,CONCAT44(uVar6,DAT_1419ff3d8),&local_68);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_50;
  return param_3;
}

