// gml_Script___ApplyPS5_anon_534___InputTriggerEffectClassVibration___InputTriggerEffectClassVibration @ 0x1400d79c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___ApplyPS5_anon_534___InputTriggerEffectClassVibration___InputTriggerEffectClassVibration
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script___InputTriggerEffectClassOff";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 3;
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc884) {
    _Init_thread_header(&DAT_141ddc884);
    if (DAT_141ddc884 == -1) {
      DAT_141ddc888 = (longlong *)FUN_140e63aa0(DAT_141a03618);
      _Init_thread_footer(&DAT_141ddc884);
    }
  }
  if (DAT_141ddc060 == '\0') {
    FUN_140e64380(DAT_141ddc888,"gml_Script___InputTriggerEffectClassOff");
    FUN_140e64380(param_1,"gml_Script___InputTriggerEffectClassOff");
  }
  FUN_140e643a0(param_1,DAT_141ddc888);
  local_28 = 5;
  if (DAT_141ddc060 == '\0') {
    DAT_141ddc060 = '\x01';
    puVar1 = (undefined *)(**(code **)(*DAT_141ddc888 + 0x10))(DAT_141ddc888,DAT_141a03558);
    if (puVar1 != &DAT_141dcb158) {
      local_58 = _DAT_141dcb158;
      uStack_54 = uRam0000000141dcb15c;
      uStack_50 = uRam0000000141dcb160;
      uStack_4c = DAT_141dcb164;
      if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_58);
    }
    puVar2 = (undefined8 *)(**(code **)(*DAT_141ddc888 + 0x10))(DAT_141ddc888,DAT_141a035c8);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 10;
    *puVar2 = 0;
    puVar3 = (undefined4 *)(**(code **)(*DAT_141ddc888 + 0x10))(DAT_141ddc888,DAT_141a035e8);
    FUN_140e609c0(DAT_141ddc888);
    FUN_140e645a0(&local_58,gml_Script___InputTriggerEffectClassOff,0);
    if (&local_58 != puVar3) {
      local_48 = local_58;
      uStack_44 = uStack_54;
      uStack_40 = uStack_50;
      uStack_3c = uStack_4c;
      if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_48);
    }
    if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    FUN_140e60910(1);
    puVar3 = (undefined4 *)(**(code **)(*DAT_141ddc888 + 0x10))(DAT_141ddc888,DAT_141a03548);
    FUN_140e609c0(DAT_141ddc888);
    FUN_140e645a0(&local_58,gml_GlobalScript___InputTriggerEffectClassVibration,0);
    if (&local_58 != puVar3) {
      local_48 = local_58;
      uStack_44 = uStack_54;
      uStack_40 = uStack_50;
      uStack_3c = uStack_4c;
      if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_48);
    }
    if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    FUN_140e60910(1);
  }
  local_28 = 8;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03588);
  FUN_140e609c0(param_1);
  puVar4 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_68,0,DAT_1419fd6d8,0);
  if (puVar4 != puVar3) {
    local_48 = *puVar4;
    uStack_44 = puVar4[1];
    uStack_40 = puVar4[2];
    uStack_3c = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_48);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

