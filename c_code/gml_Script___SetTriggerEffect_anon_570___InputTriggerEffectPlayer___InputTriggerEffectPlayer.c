// gml_Script___SetTriggerEffect_anon_570___InputTriggerEffectPlayer___InputTriggerEffectPlayer @ 0x1400dcd90

undefined8 *
gml_Script___SetTriggerEffect_anon_570___InputTriggerEffectPlayer___InputTriggerEffectPlayer
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script___InputTriggerEffectGamepad";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 5;
  local_5c = 0;
  local_68 = 0;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc8ac) {
    _Init_thread_header(&DAT_141ddc8ac);
    if (DAT_141ddc8ac == -1) {
      DAT_141ddc8b8 = (longlong *)FUN_140e63aa0(DAT_141a03cc8);
      _Init_thread_footer(&DAT_141ddc8ac);
    }
  }
  if (DAT_141ddc064 == '\0') {
    FUN_140e64380(DAT_141ddc8b8,"gml_Script___InputTriggerEffectGamepad");
    FUN_140e64380(param_1,"gml_Script___InputTriggerEffectGamepad");
  }
  FUN_140e643a0(param_1,DAT_141ddc8b8);
  local_38 = 7;
  if (DAT_141ddc064 == '\0') {
    DAT_141ddc064 = '\x01';
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddc8b8 + 0x10))(DAT_141ddc8b8,DAT_1419fcb48);
    FUN_140e609c0(DAT_141ddc8b8);
    puVar2 = (undefined4 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (param_1,param_2,&local_68,0,0);
    if (puVar2 != puVar1) {
      local_78 = *puVar2;
      uStack_74 = puVar2[1];
      uStack_70 = puVar2[2];
      uStack_6c = puVar2[3];
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_78);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    local_88 = 0;
    local_80 = 0;
    local_7c = 5;
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddc8b8 + 0x10))(DAT_141ddc8b8,DAT_141a03d18);
    FUN_140e609c0(DAT_141ddc8b8);
    FUN_140e645a0(&local_78,gml_Script___InputTriggerEffectGamepad,0);
    puVar2 = (undefined4 *)FUN_140e63610(param_1,param_2,&local_88,0,&local_78,0);
    if (puVar2 != puVar1) {
      local_58 = *puVar2;
      uStack_54 = puVar2[1];
      uStack_50 = puVar2[2];
      uStack_4c = puVar2[3];
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_58);
    }
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddc8b8 + 0x10))(DAT_141ddc8b8,DAT_141a03d28);
    FUN_140e609c0(DAT_141ddc8b8);
    FUN_140e645a0(&local_78,gml_GlobalScript___InputTriggerEffectPlayer,0);
    if (&local_78 != puVar1) {
      local_58 = local_78;
      uStack_54 = uStack_74;
      uStack_50 = uStack_70;
      uStack_4c = uStack_6c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_58);
    }
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140e60910(1);
  }
  local_38 = 0x19;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd5c8);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  if (param_5 != puVar3) {
    local_58 = *(undefined4 *)param_5;
    uStack_54 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_50 = *(undefined4 *)(param_5 + 1);
    uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

