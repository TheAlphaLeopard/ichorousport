// gml_Script_BeginPopupModal_anon_68571_ImGui_ImGui @ 0x1402b8600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_BeginPopupModal_anon_68571_ImGui_ImGui
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
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
  uint local_88 [2];
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  double *local_38;
  
  local_130 = "gml_Script_PlotHistogram@anon@67656@ImGui@ImGui";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0x829;
  FUN_140041df0(local_88,param_4,8,param_5);
  uVar6 = 1;
  _eh_vector_constructor_iterator_(&local_118,0x10,9,FUN_1400424d0,FUN_140041b30);
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 0x829;
  plVar4 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_80[2];
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_128 = 0x829;
    if ((int)local_88[0] < 3) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_80[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0;
  }
  if ((int)local_88[0] < 4) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_80[3];
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_88[0] < 4) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_80[3];
      if (puVar3 == (undefined8 *)&DAT_141dce6c8) goto LAB_1402b879a;
    }
    local_158 = _DAT_141dce6c8;
    uStack_150 = uRam0000000141dce6d0;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_158);
  }
LAB_1402b879a:
  if ((int)local_88[0] < 5) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_80[4];
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_88[0] < 5) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_80[4];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0;
  }
  if ((int)local_88[0] < 6) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_80[5];
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_88[0] < 6) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_80[5];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0;
  }
  if ((int)local_88[0] < 7) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_80[6];
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_88[0] < 7) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_80[6];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0;
  }
  if ((int)local_88[0] < 8) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_80[7];
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_88[0] < 8) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_80[7];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0;
  }
  local_128 = 0x82a;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  iVar2 = 0;
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((int)local_88[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_1402b8937:
    local_158 = *puVar3;
    uStack_150 = puVar3[1];
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
  }
  else {
    puVar3 = (undefined8 *)*local_80;
    if (puVar3 != &local_118) goto LAB_1402b8937;
  }
  local_78 = &local_118;
  if ((int)local_88[0] < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_1402b898a:
    local_158 = *puVar3;
    uStack_150 = puVar3[1];
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
  }
  else {
    puVar3 = (undefined8 *)local_80[1];
    if (puVar3 != &local_108) goto LAB_1402b898a;
  }
  local_70 = &local_108;
  if ((int)local_88[0] < 3) {
    puVar3 = &DAT_1419df7b0;
LAB_1402b89d9:
    local_158 = *puVar3;
    uStack_150 = puVar3[1];
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_158);
  }
  else {
    puVar3 = (undefined8 *)local_80[2];
    if (puVar3 != &local_f8) goto LAB_1402b89d9;
  }
  local_68 = &local_f8;
  if ((int)local_88[0] < 4) {
    puVar3 = &DAT_1419df7b0;
LAB_1402b8a28:
    local_158 = *puVar3;
    uStack_150 = puVar3[1];
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_158);
  }
  else {
    puVar3 = (undefined8 *)local_80[3];
    if (puVar3 != &local_e8) goto LAB_1402b8a28;
  }
  local_60 = &local_e8;
  if ((int)local_88[0] < 5) {
    puVar3 = &DAT_1419df7b0;
LAB_1402b8a77:
    local_158 = *puVar3;
    uStack_150 = puVar3[1];
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_158);
  }
  else {
    puVar3 = (undefined8 *)local_80[4];
    if (puVar3 != &local_d8) goto LAB_1402b8a77;
  }
  local_58 = &local_d8;
  if ((int)local_88[0] < 6) {
    puVar3 = &DAT_1419df7b0;
LAB_1402b8ac6:
    local_158 = *puVar3;
    uStack_150 = puVar3[1];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_158);
  }
  else {
    puVar3 = (undefined8 *)local_80[5];
    if (puVar3 != &local_c8) goto LAB_1402b8ac6;
  }
  local_50 = &local_c8;
  if ((int)local_88[0] < 7) {
    puVar3 = &DAT_1419df7b0;
LAB_1402b8b15:
    local_158 = *puVar3;
    uStack_150 = puVar3[1];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_158);
  }
  else {
    puVar3 = (undefined8 *)local_80[6];
    if (puVar3 != &local_b8) goto LAB_1402b8b15;
  }
  local_48 = &local_b8;
  if ((int)local_88[0] < 8) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_80[7];
    if (puVar3 == &local_a8) goto LAB_1402b8b94;
  }
  local_158 = *puVar3;
  uStack_150 = puVar3[1];
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_158);
LAB_1402b8b94:
  local_40 = &local_a8;
  if (1 < (int)local_88[0]) {
    plVar4 = (longlong *)local_80[1];
  }
  if ((*(int *)((longlong)plVar4 + 0xc) == 2) && (*plVar4 != 0)) {
    iVar2 = *(int *)(*plVar4 + 0x24);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = (double)iVar2;
  local_38 = &local_98;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_148,9,CONCAT44(uVar6,DAT_141a59730),&local_78);
  if (puVar3 != param_3) {
    local_158 = *puVar3;
    uStack_150 = puVar3[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,9,FUN_140041b30);
  if (0 < (int)local_88[0]) {
    puVar3 = local_80;
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
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

