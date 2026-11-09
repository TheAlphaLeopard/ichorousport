// gml_Script_set_style_anon_1541_ImguiWindow_DebugPanelFuncs @ 0x140268900

undefined8 *
gml_Script_set_style_anon_1541_ImguiWindow_DebugPanelFuncs
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_set_name_dynamic@anon@1278@ImguiWindow@DebugPanelFuncs";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_3c = 0xffffff;
  local_48 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x35;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_48) goto LAB_1402689ca;
  }
  local_38 = *(undefined4 *)param_5;
  uStack_34 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_30 = *(undefined4 *)(param_5 + 1);
  uStack_2c = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140041b80(&local_48,&local_38);
LAB_1402689ca:
  FUN_140e87930(uVar1,DAT_141a57080,0x80000000,&local_48);
  local_18 = 0x36;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar1 = FUN_140e5c910();
  FUN_140e42c10(uVar1,param_1);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

