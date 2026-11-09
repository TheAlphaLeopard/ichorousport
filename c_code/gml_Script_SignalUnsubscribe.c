// gml_Script_SignalUnsubscribe @ 0x1404a4e80

undefined8 * gml_Script_SignalUnsubscribe(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined1 *local_res8;
  undefined4 uVar6;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
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
  
  local_30 = "gml_GlobalScript_SIGNALS";
  local_28 = 0;
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  puVar3 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fa1c8);
  local_4c = 0xffffff;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 2;
  uVar2 = (int)(DAT_1419fa228 | 0x5000000) >> 0x18 & 0xff;
  if (uVar2 == 0xf) {
    uVar2 = 0x4000004;
  }
  else {
    uVar2 = uVar2 | 0x1000000;
  }
  uStack_5c = 0xf;
  uVar1 = CONCAT44(uVar2,DAT_1419fa228) & 0xffffffff00ffffff;
  local_68._0_4_ = (undefined4)uVar1;
  local_68._4_4_ = (undefined4)(uVar1 >> 0x20);
  local_48 = (undefined4)local_68;
  uStack_44 = local_68._4_4_;
  uStack_40 = uStack_60;
  uStack_3c = 0xf;
  local_68 = uVar1;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_48);
  local_res8 = local_78;
  FUN_140e609c0(DAT_141a729d8);
  puVar4 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_58,1,CONCAT44(uVar6,DAT_1419fd6d8),&local_res8);
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
  local_28 = 0x12;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fa208);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script_SignalRemove,param_1);
  if (&local_68 != puVar5) {
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_48);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_28 = 0x16;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fa1f8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script_SignalSend,param_1);
  if (&local_68 != puVar5) {
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_48);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_28 = 0x1a;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fa258);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script___add_listener_anon_940_SignalController_SIGNALS,param_1);
  if (&local_68 != puVar5) {
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_48);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_28 = 0x1e;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fa1b8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,
                gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS,param_1)
  ;
  if (&local_68 != puVar5) {
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_48);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_28 = 0x22;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fa1d8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script_imgui_initialize,0);
  if (&local_68 != puVar5) {
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_48);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

