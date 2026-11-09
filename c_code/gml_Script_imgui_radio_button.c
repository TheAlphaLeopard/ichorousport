// gml_Script_imgui_radio_button @ 0x1404e2af0

undefined8 *
gml_Script_imgui_radio_button
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined1 local_88 [32];
  undefined8 local_68;
  byte local_5c;
  undefined8 local_58;
  byte local_4c;
  undefined8 *local_38;
  undefined8 *local_30;
  
  local_a0 = "gml_Script_imgui_checkbox";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0xc22;
  _eh_vector_constructor_iterator_(local_88,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0xc23;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 == &local_68) goto LAB_1404e2bdb;
  }
  local_c8 = *(undefined4 *)puVar1;
  uStack_c4 = *(undefined4 *)((longlong)puVar1 + 4);
  uStack_c0 = *(undefined4 *)(puVar1 + 1);
  uStack_bc = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_c8);
LAB_1404e2bdb:
  local_38 = &local_68;
  if ((param_4 < 2) || (puVar2 = (undefined8 *)param_5[1], puVar2 != &local_58)) {
    local_c8 = *(undefined4 *)puVar2;
    uStack_c4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_c0 = *(undefined4 *)(puVar2 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    FUN_140041b80(&local_58,&local_c8);
  }
  local_30 = &local_58;
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_b8,2,DAT_141a59730,&local_38);
  if (puVar2 != param_3) {
    local_c8 = *(undefined4 *)puVar2;
    uStack_c4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_c0 = *(undefined4 *)(puVar2 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

