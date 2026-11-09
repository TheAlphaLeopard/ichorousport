// gml_Script_imgui_begin_listbox @ 0x1404cd580

undefined8 *
gml_Script_imgui_begin_listbox
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined1 local_118 [80];
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  local_130 = "gml_Script_imgui_push_clip_rect";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0x82b;
  _eh_vector_constructor_iterator_(local_118,0x10,10,FUN_1400424d0,FUN_140041b30);
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 0x82c;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
LAB_1404cd64b:
    local_158 = *(undefined4 *)puVar1;
    uStack_154 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_150 = *(undefined4 *)(puVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_158);
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 != &local_c8) goto LAB_1404cd64b;
  }
  local_50 = &local_c8;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
LAB_1404cd697:
    local_158 = *(undefined4 *)puVar1;
    uStack_154 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_150 = *(undefined4 *)(puVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_158);
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
    if (puVar1 != &local_b8) goto LAB_1404cd697;
  }
  local_48 = &local_b8;
  if (param_4 < 3) {
    puVar1 = &DAT_1419df7b0;
LAB_1404cd6e4:
    local_158 = *(undefined4 *)puVar1;
    uStack_154 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_150 = *(undefined4 *)(puVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_158);
  }
  else {
    puVar1 = (undefined8 *)param_5[2];
    if (puVar1 != &local_a8) goto LAB_1404cd6e4;
  }
  local_40 = &local_a8;
  if (param_4 < 4) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)param_5[3];
    if (puVar1 == &local_98) goto LAB_1404cd75e;
  }
  local_158 = *(undefined4 *)puVar1;
  uStack_154 = *(undefined4 *)((longlong)puVar1 + 4);
  uStack_150 = *(undefined4 *)(puVar1 + 1);
  uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_158);
LAB_1404cd75e:
  local_38 = &local_98;
  if ((param_4 < 5) || (puVar2 = (undefined8 *)param_5[4], puVar2 != &local_88)) {
    local_158 = *(undefined4 *)puVar2;
    uStack_154 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_150 = *(undefined4 *)(puVar2 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_158);
  }
  local_30 = &local_88;
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,5,DAT_141a59730,&local_50);
  if (puVar2 != param_3) {
    local_158 = *(undefined4 *)puVar2;
    uStack_154 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_150 = *(undefined4 *)(puVar2 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(local_118,0x10,10,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

