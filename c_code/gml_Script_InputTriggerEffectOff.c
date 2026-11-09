// gml_Script_InputTriggerEffectOff @ 0x14036b9c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_InputTriggerEffectOff
          (undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *local_res18;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_InputTriggerEffectGetSupported";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 9;
  FUN_140041df0(local_68,param_4,1,param_5);
  _eh_vector_constructor_iterator_(&local_98,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_9c = 0;
  uVar7 = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 9;
  puVar6 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_60;
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_48 = 9;
    if ((int)local_68[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_60;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0;
  }
  local_48 = 0xb;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  if (((int)local_68[0] < 1) || (puVar6 = (undefined8 *)*local_60, puVar6 != &local_98)) {
    local_78 = *puVar6;
    uStack_70 = *(undefined4 *)(puVar6 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_78);
  }
  local_res18 = &local_98;
  puVar6 = (undefined8 *)
           gml_Script_InputPlayerGetGamepadType(param_1,param_2,&local_a8,1,&local_res18);
  if (puVar6 != &local_88) {
    local_78 = *puVar6;
    uStack_70 = *(undefined4 *)(puVar6 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_78);
  }
  local_48 = 0xc;
  uStack_6c = 0;
  local_78 = 0;
  iVar2 = FUN_140e851f0(&local_88,&local_78,DAT_141955260,1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (iVar2 == -2 || -1 < iVar2) {
    local_48 = 0xd;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    local_res18 = &local_88;
    uVar3 = gml_Script_InputDeviceGetGamepadValue(param_1,param_2,&local_a8,1,&local_res18);
    uStack_6c = 0;
    local_78 = 0x4010000000000000;
    iVar2 = FUN_140e851f0(uVar3,&local_78,DAT_141955260,0);
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    if (iVar2 == 0) {
      local_48 = 0xf;
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      local_a8 = 0;
      local_a0 = 0;
      local_9c = 5;
      local_78 = CONCAT44(uRam00000001419e44a4,_DAT_1419e44a0);
      uStack_70 = uRam00000001419e44a8;
      uStack_6c = uRam00000001419e44ac;
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_78);
      local_res18 = &local_98;
      uVar3 = gml_Script_InputIconDefineEmpty(param_1,param_2,&local_a8,1,&local_res18);
      cVar1 = FUN_140e491e0(uVar3);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
      if (cVar1 != '\0') {
        uVar7 = 0x3ff00000;
      }
    }
    else {
      local_48 = 0xd;
      *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    }
  }
  else {
    local_48 = 0xc;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  }
  *param_3 = (ulonglong)uVar7 << 0x20;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,1,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    puVar6 = local_60;
    do {
      puVar4 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

