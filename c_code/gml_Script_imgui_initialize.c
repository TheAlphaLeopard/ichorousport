// gml_Script_imgui_initialize @ 0x1404a4a80

undefined8 * gml_Script_imgui_initialize(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_SignalController";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x22;
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf1cc) {
    _Init_thread_header(&DAT_141ddf1cc);
    if (DAT_141ddf1cc == -1) {
      DAT_141ddf1d0 = (longlong *)FUN_140e63aa0(DAT_1419fa228);
      _Init_thread_footer(&DAT_141ddf1cc);
    }
  }
  if (DAT_141ddc1a2 == '\0') {
    FUN_140e64380(DAT_141ddf1d0,"gml_Script_SignalController");
    FUN_140e64380(param_1,"gml_Script_SignalController");
  }
  FUN_140e643a0(param_1,DAT_141ddf1d0);
  local_28 = 0x23;
  if (DAT_141ddc1a2 == '\0') {
    DAT_141ddc1a2 = '\x01';
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddf1d0 + 0x10))(DAT_141ddf1d0,DAT_1419fa278);
    FUN_140e609c0(DAT_141ddf1d0);
    puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_58,0,DAT_1419fd6d8,0);
    if (puVar2 != puVar1) {
      local_68 = *puVar2;
      uStack_64 = puVar2[1];
      uStack_60 = puVar2[2];
      uStack_5c = puVar2[3];
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_68);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddf1d0 + 0x10))(DAT_141ddf1d0,DAT_1419fa218);
    FUN_140e609c0(DAT_141ddf1d0);
    FUN_140e645a0(&local_68,gml_Script___remove_listener_anon_2139_SignalController_SIGNALS,0);
    if (&local_68 != puVar1) {
      local_48 = local_68;
      uStack_44 = uStack_64;
      uStack_40 = uStack_60;
      uStack_3c = uStack_5c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_48);
    }
    if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddf1d0 + 0x10))(DAT_141ddf1d0,DAT_1419fa188);
    FUN_140e609c0(DAT_141ddf1d0);
    FUN_140e645a0(&local_68,gml_Script___signal_send_anon_2791_SignalController_SIGNALS,0);
    if (&local_68 != puVar1) {
      local_48 = local_68;
      uStack_44 = uStack_64;
      uStack_40 = uStack_60;
      uStack_3c = uStack_5c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_48);
    }
    if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddf1d0 + 0x10))(DAT_141ddf1d0,DAT_1419fa268);
    FUN_140e609c0(DAT_141ddf1d0);
    FUN_140e645a0(&local_68,gml_Script_SignalController,0);
    if (&local_68 != puVar1) {
      local_48 = local_68;
      uStack_44 = uStack_64;
      uStack_40 = uStack_60;
      uStack_3c = uStack_5c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_48);
    }
    if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddf1d0 + 0x10))(DAT_141ddf1d0,DAT_1419fa248);
    FUN_140e609c0(DAT_141ddf1d0);
    FUN_140e645a0(&local_68,gml_GlobalScript_snake_case,0);
    if (&local_68 != puVar1) {
      local_48 = local_68;
      uStack_44 = uStack_64;
      uStack_40 = uStack_60;
      uStack_3c = uStack_5c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_48);
    }
    if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    FUN_140e60910(1);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

