// gml_GlobalScript___InputColorSystem @ 0x14006ac20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_GlobalScript___InputColorSystem(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined8 local_50;
  byte local_44;
  
  local_60 = 
  "gml_Script___SupportedByDevice@anon@1424@__InputColorClassPlayer@__InputColorClassPlayer";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x30;
  _eh_vector_constructor_iterator_(&local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_bc = 0;
  uVar6 = 0;
  local_c8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x32;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd7f8);
  if (puVar3 != &local_50) {
    local_d8 = *puVar3;
    uStack_d0 = *(undefined4 *)(puVar3 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_50);
    }
    FUN_140041b80(&local_50,&local_d8);
  }
  local_78 = &local_50;
  puVar3 = (undefined8 *)gml_Script_InputPlayerGetGamepadType(param_1,param_2,&local_c8,1,&local_78)
  ;
  if (puVar3 != &local_98) {
    local_d8 = *puVar3;
    uStack_d0 = *(undefined4 *)(puVar3 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_d8);
  }
  local_58 = 0x34;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = CONCAT44(uRam00000001419df904,_DAT_1419df900);
  uStack_d0 = uRam00000001419df908;
  uStack_cc = uRam00000001419df90c;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  FUN_140041b80(&local_50,&local_d8);
  local_78 = &local_50;
  uVar4 = gml_Script_InputIconDefineEmpty(param_1,param_2,&local_c8,1,&local_78);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_58 = 0x36;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    local_70 = &local_98;
    puVar3 = (undefined8 *)gml_Script_InputDeviceIsActive(param_1,param_2,&local_b8,1,&local_70);
    if (puVar3 != &local_88) {
      local_d8 = *puVar3;
      uStack_d0 = *(undefined4 *)(puVar3 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_d8);
    }
    local_58 = 0x37;
    iVar2 = FUN_140e851f0(&local_88,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar2 != 0) {
      local_58 = 0x39;
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0;
      local_bc = 5;
      local_78 = &local_98;
      puVar3 = (undefined8 *)
               gml_Script_InputDeviceGetGamepadValue(param_1,param_2,&local_c8,1,&local_78);
      if (puVar3 != &local_a8) {
        local_d8 = *puVar3;
        uStack_d0 = *(undefined4 *)(puVar3 + 1);
        uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        FUN_140041b80(&local_a8,&local_d8);
      }
      local_58 = 0x3a;
      uStack_cc = 0;
      local_d8 = 0x4008000000000000;
      iVar2 = FUN_140e851f0(&local_a8,&local_d8,DAT_141955260,0);
      if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if (iVar2 == 0) {
        bVar5 = true;
      }
      else {
        uStack_cc = 0;
        local_d8 = 0x4010000000000000;
        iVar2 = FUN_140e851f0(&local_a8,&local_d8,DAT_141955260,0);
        bVar5 = iVar2 == 0;
        if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
      }
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
      if (bVar5) {
        uVar6 = 0x3ff00000;
      }
      goto LAB_14006b030;
    }
  }
  local_58 = 0x42;
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
LAB_14006b030:
  *param_3 = (ulonglong)uVar6 << 0x20;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

