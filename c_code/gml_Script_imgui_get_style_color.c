// gml_Script_imgui_get_style_color @ 0x1404d8f40

undefined8 *
gml_Script_imgui_get_style_color
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
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
  
  local_a0 = "gml_Script_imgui_push_style_var_y";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0xa40;
  _eh_vector_constructor_iterator_(local_88,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0xa41;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419faef8);
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 == &local_68) goto LAB_1404d9041;
  }
  local_c8 = *(undefined4 *)puVar2;
  uStack_c4 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_c0 = *(undefined4 *)(puVar2 + 1);
  uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_c8);
LAB_1404d9041:
  local_38 = &local_68;
  if ((param_4 < 2) || (puVar3 = (undefined8 *)param_5[1], puVar3 != &local_58)) {
    local_c8 = *(undefined4 *)puVar3;
    uStack_c4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_c0 = *(undefined4 *)(puVar3 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    FUN_140041b80(&local_58,&local_c8);
  }
  local_30 = &local_58;
  puVar3 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_b8,2,uVar1,&local_38);
  if (puVar3 != param_3) {
    local_c8 = *(undefined4 *)puVar3;
    uStack_c4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_c0 = *(undefined4 *)(puVar3 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
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

