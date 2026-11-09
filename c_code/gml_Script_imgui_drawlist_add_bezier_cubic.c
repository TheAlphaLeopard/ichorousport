// gml_Script_imgui_drawlist_add_bezier_cubic @ 0x1404bbc40

undefined8 *
gml_Script_imgui_drawlist_add_bezier_cubic
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined1 local_138 [80];
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  double local_98;
  undefined4 local_8c;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  double *local_38;
  
  local_150 = "gml_Script_imgui_drawlist_add_polyline";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0x496;
  _eh_vector_constructor_iterator_(local_138,0x10,0xb,FUN_1400424d0,FUN_140041b30);
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_148 = 0x497;
  plVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
LAB_1404bbd0c:
    local_178 = *puVar1;
    uStack_170 = puVar1[1];
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_178);
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 != &local_e8) goto LAB_1404bbd0c;
  }
  local_60 = &local_e8;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
LAB_1404bbd58:
    local_178 = *puVar1;
    uStack_170 = puVar1[1];
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_178);
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
    if (puVar1 != &local_d8) goto LAB_1404bbd58;
  }
  local_58 = &local_d8;
  if (param_4 < 3) {
    puVar1 = &DAT_1419df7b0;
LAB_1404bbda5:
    local_178 = *puVar1;
    uStack_170 = puVar1[1];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_178);
  }
  else {
    puVar1 = (undefined8 *)param_5[2];
    if (puVar1 != &local_c8) goto LAB_1404bbda5;
  }
  local_50 = &local_c8;
  if (param_4 < 4) {
    puVar1 = &DAT_1419df7b0;
LAB_1404bbdf2:
    local_178 = *puVar1;
    uStack_170 = puVar1[1];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_178);
  }
  else {
    puVar1 = (undefined8 *)param_5[3];
    if (puVar1 != &local_b8) goto LAB_1404bbdf2;
  }
  local_48 = &local_b8;
  if (param_4 < 5) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)param_5[4];
    if (puVar1 == &local_a8) goto LAB_1404bbe6c;
  }
  local_178 = *puVar1;
  uStack_170 = puVar1[1];
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_178);
LAB_1404bbe6c:
  if (1 < param_4) {
    plVar2 = (longlong *)param_5[1];
  }
  iVar3 = 0;
  if ((*(int *)((longlong)plVar2 + 0xc) == 2) && (*plVar2 != 0)) {
    iVar3 = *(int *)(*plVar2 + 0x24);
  }
  local_40 = &local_a8;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = (double)iVar3;
  local_38 = &local_98;
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,6,DAT_141a59730,&local_60);
  if (puVar1 != param_3) {
    local_178 = *puVar1;
    uStack_170 = puVar1[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(local_138,0x10,0xb,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

