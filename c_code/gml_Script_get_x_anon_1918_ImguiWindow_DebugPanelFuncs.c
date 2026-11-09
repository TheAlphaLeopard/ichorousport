// gml_Script_get_x_anon_1918_ImguiWindow_DebugPanelFuncs @ 0x140268ff0

undefined8 *
gml_Script_get_x_anon_1918_ImguiWindow_DebugPanelFuncs
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong *local_res8;
  longlong local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_toggle_open@anon@1655@ImguiWindow@DebugPanelFuncs";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x47;
  _eh_vector_constructor_iterator_(&local_88,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_5c = 0;
  uVar4 = 0;
  local_68 = 0;
  local_6c = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x48;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57180);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56de0);
  uVar3 = FUN_140e63610(param_1,param_2,&local_78,0,uVar3,0);
  cVar1 = FUN_140e491e0(uVar3);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0xd;
  if (cVar1 == '\0') {
    uVar4 = 0x3ff00000;
  }
  local_88 = (ulonglong)uVar4 << 0x20;
  local_res8 = &local_88;
  FUN_140e63610(param_1,param_2,&local_68,1,uVar2,&local_res8);
  local_48 = 0x49;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar2 = FUN_140e5c910();
  FUN_140e42c10(uVar2,param_1);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_88,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

