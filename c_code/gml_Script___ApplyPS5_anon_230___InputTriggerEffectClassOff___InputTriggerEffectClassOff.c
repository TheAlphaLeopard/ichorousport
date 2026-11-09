// gml_Script___ApplyPS5_anon_230___InputTriggerEffectClassOff___InputTriggerEffectClassOff @ 0x1400d7080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___ApplyPS5_anon_230___InputTriggerEffectClassOff___InputTriggerEffectClassOff
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined8 local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  
  local_60 = "gml_Script___InputTrggerEffectClassFeedback";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 3;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc880) {
    _Init_thread_header(&DAT_141ddc880);
    if (DAT_141ddc880 == -1) {
      DAT_141ddc878 = (longlong *)FUN_140e63aa0(DAT_141a03578);
      _Init_thread_footer(&DAT_141ddc880);
    }
  }
  if (DAT_141ddc05f == '\0') {
    FUN_140e64380(DAT_141ddc878,"gml_Script___InputTrggerEffectClassFeedback");
    FUN_140e64380(param_1,"gml_Script___InputTrggerEffectClassFeedback");
  }
  FUN_140e643a0(param_1,DAT_141ddc878);
  local_58 = 5;
  if (DAT_141ddc05f == '\0') {
    DAT_141ddc05f = '\x01';
    puVar2 = (undefined *)(**(code **)(*DAT_141ddc878 + 0x10))(DAT_141ddc878,DAT_141a03558);
    if (puVar2 != &DAT_141dcb148) {
      local_78 = _DAT_141dcb148;
      uStack_74 = uRam0000000141dcb14c;
      uStack_70 = uRam0000000141dcb150;
      uStack_6c = DAT_141dcb154;
      if ((1 << ((byte)*(undefined4 *)(puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_78);
    }
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc878 + 0x10))(DAT_141ddc878,DAT_141a035c8);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 10;
    *puVar3 = 1;
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc878 + 0x10))(DAT_141ddc878,DAT_141a035e8);
    FUN_140e609c0(DAT_141ddc878);
    FUN_140e645a0(&local_b8,gml_Script___InputTrggerEffectClassFeedback,0);
    if (&local_b8 != puVar3) {
      local_78 = (undefined4)local_b8;
      uStack_74 = local_b8._4_4_;
      uStack_70 = uStack_b0;
      uStack_6c = uStack_ac;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_78);
    }
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140e60910(1);
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc878 + 0x10))(DAT_141ddc878,DAT_141a03548);
    FUN_140e609c0(DAT_141ddc878);
    FUN_140e645a0(&local_b8,gml_GlobalScript___InputTriggerEffectClassOff,0);
    if (&local_b8 != puVar3) {
      local_78 = (undefined4)local_b8;
      uStack_74 = local_b8._4_4_;
      uStack_70 = uStack_b0;
      uStack_6c = uStack_ac;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_78);
    }
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140e60910(1);
  }
  local_58 = 8;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03588);
  FUN_140e609c0(param_1);
  puVar5 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_a8,0,DAT_1419fd6d8,0);
  if (puVar5 != puVar4) {
    local_78 = *puVar5;
    uStack_74 = puVar5[1];
    uStack_70 = puVar5[2];
    uStack_6c = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_78);
  }
  FUN_140e60910(1);
  local_58 = 3;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a03588);
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  uStack_ac = *(uint *)((longlong)puVar7 + 0xc);
  uStack_b0 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) == 0) {
    local_b8 = *puVar7;
  }
  else {
    FUN_1400419b0(&local_b8);
  }
  uStack_6c = 7;
  local_78 = 10;
  FUN_140042560(&local_b8,&local_78);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((uStack_ac & 0xffffff) == 0) {
    uVar8 = (undefined4)local_b8;
  }
  else {
    uVar8 = FUN_140e4b060(&local_b8);
  }
  uVar1 = FUN_140e78ec0(uVar8,0,0x4022000000000000);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_88 = uVar1;
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140e87930(uVar6,DAT_141a035f8,0x80000000,&local_88);
  if (1 < param_4) {
    puVar3 = (undefined8 *)param_5[1];
  }
  uStack_ac = *(uint *)((longlong)puVar3 + 0xc);
  uStack_b0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) == 0) {
    local_b8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_b8,puVar3);
  }
  uStack_6c = 7;
  local_78 = 8;
  FUN_140042560(&local_b8,&local_78);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((uStack_ac & 0xffffff) == 0) {
    uVar8 = (undefined4)local_b8;
  }
  else {
    uVar8 = FUN_140e4b060(&local_b8);
  }
  uVar6 = FUN_140e78ec0(uVar8,0,0x4020000000000000);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = uVar6;
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a03588);
  FUN_140e87930(uVar6,DAT_141a03598,0x80000000,&local_98);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

