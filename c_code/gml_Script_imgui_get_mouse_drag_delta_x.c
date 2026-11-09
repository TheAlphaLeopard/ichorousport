// gml_Script_imgui_get_mouse_drag_delta_x @ 0x1404c53c0

undefined8 *
gml_Script_imgui_get_mouse_drag_delta_x(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_imgui_get_mouse_pos_on_opening_current_popup_x";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_3c = 0;
  local_48 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x65c;
  uVar1 = (**(code **)(*param_1 + 8))(0,DAT_1419fb2a8);
  puVar2 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_48,0,uVar1,0);
  if (puVar2 != param_3) {
    local_38 = *(undefined4 *)puVar2;
    uStack_34 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_30 = *(undefined4 *)(puVar2 + 1);
    uStack_2c = *(undefined4 *)((longlong)puVar2 + 0xc);
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

