// gml_Script_Spacing_anon_54491_ImGui_ImGui @ 0x1402b2370

undefined8 *
gml_Script_Spacing_anon_54491_ImGui_ImGui
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  double local_88;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  uint local_60 [2];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  double *local_38;
  
  local_70 = "gml_Script_InputIntN@anon@53732@ImGui@ImGui";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x644;
  FUN_140041df0(local_60,param_4,3,param_5);
  uVar6 = 1;
  _eh_vector_constructor_iterator_(&local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x644;
  plVar4 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_60[0];
  if ((int)local_60[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_58[2];
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_68 = 0x644;
    if ((int)local_60[0] < 3) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_58[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 10;
    *puVar3 = 0;
  }
  iVar2 = 0;
  local_68 = 0x645;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  if ((int)local_60[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_1402b24dc:
    local_c8 = *puVar3;
    uStack_c0 = puVar3[1];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_c8);
  }
  else {
    puVar3 = (undefined8 *)*local_58;
    if (puVar3 != &local_b8) goto LAB_1402b24dc;
  }
  local_50 = &local_b8;
  if ((int)local_60[0] < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_1402b2529:
    local_c8 = *puVar3;
    uStack_c0 = puVar3[1];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_c8);
  }
  else {
    puVar3 = (undefined8 *)local_58[1];
    if (puVar3 != &local_a8) goto LAB_1402b2529;
  }
  local_48 = &local_a8;
  if ((int)local_60[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_58[2];
    if (puVar3 == &local_98) goto LAB_1402b25a4;
  }
  local_c8 = *puVar3;
  uStack_c0 = puVar3[1];
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_c8);
LAB_1402b25a4:
  local_40 = &local_98;
  if (1 < (int)local_60[0]) {
    plVar4 = (longlong *)local_58[1];
  }
  if ((*(int *)((longlong)plVar4 + 0xc) == 2) && (*plVar4 != 0)) {
    iVar2 = *(int *)(*plVar4 + 0x24);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_88 = (double)iVar2;
  local_38 = &local_88;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_d8,4,CONCAT44(uVar6,DAT_141a59730),&local_50);
  if (puVar3 != param_3) {
    local_c8 = *puVar3;
    uStack_c0 = puVar3[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_c8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,4,FUN_140041b30);
  if (0 < (int)local_60[0]) {
    puVar3 = local_58;
    do {
      puVar1 = (undefined8 *)*puVar3;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar3 = puVar3 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_58);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

