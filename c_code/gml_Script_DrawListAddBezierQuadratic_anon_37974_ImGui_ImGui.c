// gml_Script_DrawListAddBezierQuadratic_anon_37974_ImGui_ImGui @ 0x1402a8fc0

undefined8 *
gml_Script_DrawListAddBezierQuadratic_anon_37974_ImGui_ImGui
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined1 local_d8 [48];
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  double local_78;
  undefined4 local_6c;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  double *local_38;
  
  local_f0 = "gml_Script_DrawListAddConvexPolyFilled@anon@36635@ImGui@ImGui";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x46a;
  _eh_vector_constructor_iterator_(local_d8,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x46b;
  plVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
LAB_1402a9088:
    local_118 = *puVar1;
    uStack_110 = puVar1[1];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_118);
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 != &local_a8) goto LAB_1402a9088;
  }
  local_50 = &local_a8;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
LAB_1402a90d4:
    local_118 = *puVar1;
    uStack_110 = puVar1[1];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_118);
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
    if (puVar1 != &local_98) goto LAB_1402a90d4;
  }
  local_48 = &local_98;
  if (param_4 < 3) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)param_5[2];
    if (puVar1 == &local_88) goto LAB_1402a914e;
  }
  local_118 = *puVar1;
  uStack_110 = puVar1[1];
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_118);
LAB_1402a914e:
  local_40 = &local_88;
  if (1 < param_4) {
    plVar2 = (longlong *)param_5[1];
  }
  iVar3 = 0;
  if ((*(int *)((longlong)plVar2 + 0xc) == 2) && (*plVar2 != 0)) {
    iVar3 = *(int *)(*plVar2 + 0x24);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 0;
  local_78 = (double)iVar3;
  local_38 = &local_78;
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_108,4,DAT_141a59730,&local_50);
  if (puVar1 != param_3) {
    local_118 = *puVar1;
    uStack_110 = puVar1[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

