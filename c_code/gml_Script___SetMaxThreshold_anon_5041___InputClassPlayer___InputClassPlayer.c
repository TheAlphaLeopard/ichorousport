// gml_Script___SetMaxThreshold_anon_5041___InputClassPlayer___InputClassPlayer @ 0x140046f40

undefined8 *
gml_Script___SetMaxThreshold_anon_5041___InputClassPlayer___InputClassPlayer
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  byte local_64;
  undefined8 local_60;
  byte local_54;
  undefined8 *local_50;
  undefined8 *local_48 [4];
  
  local_90 = "gml_Script___UpdateStatus@anon@3806@__InputClassPlayer@__InputClassPlayer";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x66;
  _eh_vector_constructor_iterator_(&local_70,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  local_74 = 0;
  local_80 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x68;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd708);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd5c8);
    if (puVar4 != &local_70) {
      local_c8 = *puVar4;
      uStack_c0 = *(undefined4 *)(puVar4 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_70);
      }
      FUN_140041b80(&local_70,&local_c8);
    }
    local_50 = &local_70;
    uVar3 = gml_Script_InputDeviceIsGamepad(param_1,param_2,&local_b8,1,&local_50);
    cVar1 = FUN_140e491e0(uVar3);
  }
  else {
    cVar1 = '\x01';
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  uStack_9c = 0xd;
  if (cVar1 == '\0') {
    local_a8 = 0;
  }
  else {
    local_a8 = 0x3ff0000000000000;
  }
  local_88 = 0x6a;
  cVar1 = FUN_140e491e0(&local_a8);
  if (cVar1 == '\0') {
    local_88 = 0x78;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd858);
    uStack_bc = 10;
    local_c8 = 2;
    iVar2 = FUN_140e851f0(uVar3,&local_c8,DAT_141955260,0);
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    if (iVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd858);
      uStack_bc = 10;
      local_c8 = 3;
      iVar2 = FUN_140e851f0(uVar3,&local_c8,DAT_141955260,0);
      if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if (iVar2 != 0) {
        local_88 = 0x7e;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd858);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        *puVar4 = 0;
        goto LAB_1400474d5;
      }
    }
    local_88 = 0x7a;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd858);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *puVar4 = 1;
LAB_1400474d5:
    *(undefined4 *)((longlong)puVar4 + 0xc) = 10;
  }
  else {
    local_88 = 0x6c;
    uVar3 = (**(code **)(*param_1 + 8))();
    uStack_bc = 10;
    local_c8 = 1;
    iVar2 = FUN_140e851f0(uVar3,&local_c8,DAT_141955260,0);
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    if (iVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd858);
      uStack_bc = 10;
      local_c8 = 0;
      iVar2 = FUN_140e851f0(uVar3,&local_c8,DAT_141955260,0);
      if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if (iVar2 != 0) {
        local_88 = 0x73;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd858);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        *puVar4 = 3;
        goto LAB_1400474d5;
      }
    }
    local_88 = 0x6e;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd858);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 10;
    *puVar4 = 2;
    local_88 = 0x6f;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd5c8);
    if (puVar4 != &local_70) {
      local_c8 = *puVar4;
      uStack_c0 = *(undefined4 *)(puVar4 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_70);
      }
      FUN_140041b80(&local_70,&local_c8);
    }
    local_50 = &local_70;
    uVar3 = gml_Script_InputDeviceSetRebinding(param_1,param_2,&local_b8,1,&local_50);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') {
      local_88 = 0x6f;
      if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_80);
      }
      local_80 = 0;
      local_78 = 0;
      local_74 = 5;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd5c8);
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd5b8);
      if (puVar4 != &local_60) {
        local_c8 = *puVar4;
        uStack_c0 = *(undefined4 *)(puVar4 + 1);
        uStack_bc = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_60);
        }
        FUN_140041b80(&local_60,&local_c8);
      }
      local_48[0] = &local_60;
      FUN_140e609c0(param_1);
      puVar4 = (undefined8 *)
               gml_Script_InputDeviceGetGamepadValue(param_1,param_2,&local_80,1,local_48);
      if (puVar4 != puVar5) {
        local_c8 = *puVar4;
        uStack_c0 = *(undefined4 *)(puVar4 + 1);
        uStack_bc = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_c8);
      }
      FUN_140e60910(1);
    }
  }
  local_88 = 0x82;
  if (&local_a8 != param_3) {
    local_c8 = local_a8;
    uStack_c0 = uStack_a0;
    uStack_bc = uStack_9c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_c8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_70,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

