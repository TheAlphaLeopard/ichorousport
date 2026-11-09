// gml_Script_GetBackgroundDrawList_anon_27792_ImGui_ImGui @ 0x1402a36a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_GetBackgroundDrawList_anon_27792_ImGui_ImGui
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
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
  undefined8 local_98;
  byte local_8c;
  double local_88;
  undefined4 local_7c;
  uint local_78 [2];
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  double *local_30;
  
  local_110 = "gml_Script_DragIntN@anon@26732@ImGui@ImGui";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x35e;
  FUN_140041df0(local_78,param_4,7,param_5);
  uVar6 = 1;
  _eh_vector_constructor_iterator_(&local_f8,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x35e;
  plVar4 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_70[2];
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_108 = 0x35e;
    if ((int)local_78[0] < 3) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_70[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0x3ff0000000000000;
  }
  if ((int)local_78[0] < 4) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_70[3];
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_78[0] < 4) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_70[3];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0;
  }
  if ((int)local_78[0] < 5) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_70[4];
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_78[0] < 5) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_70[4];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0;
  }
  if ((int)local_78[0] < 6) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_70[5];
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_78[0] < 6) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_70[5];
      if (puVar3 == (undefined8 *)&DAT_141dce6b8) goto LAB_1402a38ee;
    }
    local_138 = _DAT_141dce6b8;
    uStack_130 = uRam0000000141dce6c0;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_138);
  }
LAB_1402a38ee:
  if ((int)local_78[0] < 7) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_70[6];
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_78[0] < 7) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_70[6];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 10;
    *puVar3 = 0;
  }
  local_108 = 0x35f;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  iVar2 = 0;
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if ((int)local_78[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_1402a3995:
    local_138 = *puVar3;
    uStack_130 = puVar3[1];
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_138);
  }
  else {
    puVar3 = (undefined8 *)*local_70;
    if (puVar3 != &local_f8) goto LAB_1402a3995;
  }
  local_68 = &local_f8;
  if ((int)local_78[0] < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_1402a39e8:
    local_138 = *puVar3;
    uStack_130 = puVar3[1];
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_138);
  }
  else {
    puVar3 = (undefined8 *)local_70[1];
    if (puVar3 != &local_e8) goto LAB_1402a39e8;
  }
  local_60 = &local_e8;
  if ((int)local_78[0] < 3) {
    puVar3 = &DAT_1419df7b0;
LAB_1402a3a37:
    local_138 = *puVar3;
    uStack_130 = puVar3[1];
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_138);
  }
  else {
    puVar3 = (undefined8 *)local_70[2];
    if (puVar3 != &local_d8) goto LAB_1402a3a37;
  }
  local_58 = &local_d8;
  if ((int)local_78[0] < 4) {
    puVar3 = &DAT_1419df7b0;
LAB_1402a3a86:
    local_138 = *puVar3;
    uStack_130 = puVar3[1];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_138);
  }
  else {
    puVar3 = (undefined8 *)local_70[3];
    if (puVar3 != &local_c8) goto LAB_1402a3a86;
  }
  local_50 = &local_c8;
  if ((int)local_78[0] < 5) {
    puVar3 = &DAT_1419df7b0;
LAB_1402a3ad5:
    local_138 = *puVar3;
    uStack_130 = puVar3[1];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_138);
  }
  else {
    puVar3 = (undefined8 *)local_70[4];
    if (puVar3 != &local_b8) goto LAB_1402a3ad5;
  }
  local_48 = &local_b8;
  if ((int)local_78[0] < 6) {
    puVar3 = &DAT_1419df7b0;
LAB_1402a3b24:
    local_138 = *puVar3;
    uStack_130 = puVar3[1];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_138);
  }
  else {
    puVar3 = (undefined8 *)local_70[5];
    if (puVar3 != &local_a8) goto LAB_1402a3b24;
  }
  local_40 = &local_a8;
  if ((int)local_78[0] < 7) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_70[6];
    if (puVar3 == &local_98) goto LAB_1402a3ba3;
  }
  local_138 = *puVar3;
  uStack_130 = puVar3[1];
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_138);
LAB_1402a3ba3:
  local_38 = &local_98;
  if (1 < (int)local_78[0]) {
    plVar4 = (longlong *)local_70[1];
  }
  if ((*(int *)((longlong)plVar4 + 0xc) == 2) && (*plVar4 != 0)) {
    iVar2 = *(int *)(*plVar4 + 0x24);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_88 = (double)iVar2;
  local_30 = &local_88;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_128,8,CONCAT44(uVar6,DAT_141a59730),&local_68);
  if (puVar3 != param_3) {
    local_138 = *puVar3;
    uStack_130 = puVar3[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,8,FUN_140041b30);
  if (0 < (int)local_78[0]) {
    puVar3 = local_70;
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
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

