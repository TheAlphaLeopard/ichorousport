// gml_Script_SetNextWindowBgAlpha_anon_103222_ImGui_ImGui @ 0x1402cc510

undefined8 *
gml_Script_SetNextWindowBgAlpha_anon_103222_ImGui_ImGui
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_SetNextWindowFocus@anon@102711@ImGui@ImGui";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_3c = 0;
  local_48 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0xc49;
  puVar1 = (undefined8 *)FUN_140e634e0(0,param_2,&local_48,0,DAT_141a59730,0);
  if (puVar1 != param_3) {
    local_38 = *(undefined4 *)puVar1;
    uStack_34 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_30 = *(undefined4 *)(puVar1 + 1);
    uStack_2c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_38);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

