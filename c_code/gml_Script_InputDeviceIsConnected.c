// gml_Script_InputDeviceIsConnected @ 0x140324120

longlong *
gml_Script_InputDeviceIsConnected
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong in_stack_ffffffffffffff40;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 local_60;
  byte local_54;
  undefined8 local_50;
  byte local_44;
  
  local_70 = "gml_Script_InputDeviceIsAvailable";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 10;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = (undefined1 *)0x0;
  local_ac = 0;
  uVar8 = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde1f0) &&
     (_Init_thread_header(&DAT_141dde1f0), DAT_141dde1f0 == -1)) {
    DAT_141dde1f8 = (longlong *)FUN_140e63aa0(DAT_1419f1158);
    _Init_thread_footer(&DAT_141dde1f0);
  }
  if (DAT_141ddc0dd == '\0') {
    FUN_140e64380(DAT_141dde1f8,"gml_Script_InputDeviceIsAvailable");
    FUN_140e64380(param_1,"gml_Script_InputDeviceIsAvailable");
  }
  local_68 = 0xc;
  if (DAT_141ddc0dd == '\0') {
    DAT_141ddc0dd = '\x01';
    ppuVar4 = (undefined1 **)(**(code **)(*DAT_141dde1f8 + 0x10))(DAT_141dde1f8,DAT_1419febe8);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    uVar9 = 0;
    uVar5 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (param_1,param_2,&local_b8,0,0);
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_1419febc8,0x80000000,&local_a8,uVar9,
                  in_stack_ffffffffffffff40 & 0xffffffffffffff00);
    uVar10 = (undefined4)(uVar9 >> 0x20);
    FUN_140e609c0(DAT_141dde1f8);
    if (&local_a8 != ppuVar4) {
      local_98 = local_a8;
      uStack_90 = uStack_a0;
      uStack_8c = uStack_9c;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar4);
      }
      FUN_140041b80(ppuVar4,&local_98);
    }
    FUN_140e60910(1);
  }
  local_68 = 0xe;
  puVar7 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*param_5;
  }
  uStack_8c = 0;
  local_98 = &DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(puVar6,&local_98,DAT_141955260,0);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if (iVar2 == 0) {
    local_68 = 0xe;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  }
  else {
    local_68 = 0xf;
    if (param_4 < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*param_5;
    }
    uStack_8c = 0;
    local_98 = (undefined1 *)0x0;
    uVar3 = FUN_140e851f0(puVar6,&local_98,DAT_141955260,1);
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    if (uVar3 < 0x80000000) {
      uStack_8c = 0xd;
      local_98 = (undefined1 *)0x0;
      cVar1 = FUN_140e491e0(&local_98);
      if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      if (cVar1 != '\0') {
        local_68 = 0xf;
        *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
        goto LAB_1403246a3;
      }
    }
    local_68 = 0x10;
    if (param_4 < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*param_5;
    }
    uStack_8c = 0;
    local_98 = (undefined1 *)0xc059000000000000;
    FUN_140e851f0(puVar6,&local_98,DAT_141955260,0);
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_68 = 0x11;
    if (param_4 < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*param_5;
    }
    uStack_8c = 0;
    local_98 = (undefined1 *)0xc069000000000000;
    iVar2 = FUN_140e851f0(puVar6,&local_98,DAT_141955260,0);
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    if (iVar2 == 0) {
      local_68 = 0x11;
      *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    }
    else {
      local_68 = 0x12;
      if (param_4 < 1) {
        puVar6 = &DAT_1419df7b0;
      }
      else {
        puVar6 = (undefined8 *)*param_5;
      }
      uStack_8c = 0;
      local_98 = (undefined1 *)0xc072c00000000000;
      iVar2 = FUN_140e851f0(puVar6,&local_98,DAT_141955260,0);
      if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      if (iVar2 == 0) {
        local_68 = 0x12;
        *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
      }
      else {
        local_68 = 0x14;
        if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        local_b8 = 0;
        local_b0 = 0;
        local_ac = 5;
        puVar6 = (undefined8 *)(**(code **)(*DAT_141dde1f8 + 8))(DAT_141dde1f8,DAT_1419febe8);
        if (puVar6 != &local_60) {
          local_98 = (undefined1 *)*puVar6;
          uStack_90 = *(undefined4 *)(puVar6 + 1);
          uStack_8c = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_60);
          }
          FUN_140041b80(&local_60,&local_98);
        }
        local_88 = &local_60;
        if ((param_4 < 1) || (puVar7 = (undefined8 *)*param_5, puVar7 != &local_50)) {
          local_98 = (undefined1 *)*puVar7;
          uStack_90 = *(undefined4 *)(puVar7 + 1);
          uStack_8c = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_50);
          }
          FUN_140041b80(&local_50,&local_98);
        }
        local_80 = &local_50;
        uVar5 = FUN_140e634e0(param_1,param_2,&local_b8,2,CONCAT44(uVar10,DAT_141a01478),&local_88);
        cVar1 = FUN_140e491e0(uVar5);
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
        if (cVar1 != '\0') goto LAB_1403246a3;
      }
      uVar8 = 0x3ff00000;
    }
  }
LAB_1403246a3:
  *param_3 = (ulonglong)uVar8 << 0x20;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

