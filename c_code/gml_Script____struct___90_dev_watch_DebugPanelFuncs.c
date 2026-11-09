// gml_Script____struct___90_dev_watch_DebugPanelFuncs @ 0x14026eed0

undefined8 *
gml_Script____struct___90_dev_watch_DebugPanelFuncs
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *local_res18 [2];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  byte local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_dev_section";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0xf0;
  _eh_vector_constructor_iterator_(&local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_6c = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0xf1;
  gml_Script_imgui_indent(param_1,param_2,&local_78,0,0);
  local_38 = 0xf2;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_78 = 0;
  local_70 = 0;
  local_6c = 5;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_68) goto LAB_14026eff8;
  }
  local_58 = *(undefined4 *)param_5;
  uStack_54 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_58);
LAB_14026eff8:
  local_res18[0] = &local_68;
  gml_Script_imgui_text_disabled(param_1,param_2,&local_78,1,local_res18);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

