// gml_Script_imgui_create_context @ 0x1404a54e0

longlong * gml_Script_imgui_create_context(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong in_stack_ffffffffffffff98;
  ulonglong in_stack_ffffffffffffffa0;
  undefined8 local_58;
  undefined4 local_4c;
  longlong local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_imgui_update";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0xd;
  if (DAT_141dc7a60 == 0) {
    DAT_141dc7a60 = FUN_140e63aa0(DAT_141a57070);
  }
  local_48 = DAT_141dc7a60;
  local_4c = 0xffffff;
  local_58 = 0;
  local_2c = 0;
  local_38 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0xe;
  uStack_3c = 6;
  FUN_140e87440(&local_48,DAT_1419fd598,0x80000000,&local_58,
                in_stack_ffffffffffffff98 & 0xffffffffffffff00,
                in_stack_ffffffffffffffa0 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  plVar1 = (longlong *)FUN_140e63610(DAT_141dc7a60,param_2,&local_38,0,&local_58,0);
  if (plVar1 != param_3) {
    local_48 = *plVar1;
    uStack_40 = (undefined4)plVar1[1];
    uStack_3c = *(undefined4 *)((longlong)plVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_48);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

