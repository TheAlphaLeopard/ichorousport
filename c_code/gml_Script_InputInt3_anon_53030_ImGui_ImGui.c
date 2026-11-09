// gml_Script_InputInt3_anon_53030_ImGui_ImGui @ 0x1402b1520

undefined8 *
gml_Script_InputInt3_anon_53030_ImGui_ImGui
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
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
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  uint local_60 [2];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  local_70 = "gml_Script_InputInt@anon@52291@ImGui@ImGui";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x61c;
  FUN_140041df0(local_60,param_4,5,param_5);
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_c8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x61c;
  puVar3 = &DAT_1419df7b0;
  uVar4 = (ulonglong)local_60[0];
  if ((int)local_60[0] < 3) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_58[2];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_68 = 0x61c;
    if ((int)local_60[0] < 3) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_58[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0;
  }
  if ((int)local_60[0] < 4) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_58[3];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_60[0] < 4) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_58[3];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0;
  }
  if ((int)local_60[0] < 5) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_58[4];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_60[0] < 5) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_58[4];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 10;
    *puVar2 = 0;
  }
  local_68 = 0x61d;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  if ((int)local_60[0] < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_1402b1734:
    local_e8 = *(undefined4 *)puVar2;
    uStack_e4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_e0 = *(undefined4 *)(puVar2 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_e8);
  }
  else {
    puVar2 = (undefined8 *)*local_58;
    if (puVar2 != &local_c8) goto LAB_1402b1734;
  }
  local_50 = &local_c8;
  if ((int)local_60[0] < 2) {
    puVar2 = &DAT_1419df7b0;
LAB_1402b1783:
    local_e8 = *(undefined4 *)puVar2;
    uStack_e4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_e0 = *(undefined4 *)(puVar2 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_e8);
  }
  else {
    puVar2 = (undefined8 *)local_58[1];
    if (puVar2 != &local_b8) goto LAB_1402b1783;
  }
  local_48 = &local_b8;
  if ((int)local_60[0] < 3) {
    puVar2 = &DAT_1419df7b0;
LAB_1402b17d2:
    local_e8 = *(undefined4 *)puVar2;
    uStack_e4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_e0 = *(undefined4 *)(puVar2 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_e8);
  }
  else {
    puVar2 = (undefined8 *)local_58[2];
    if (puVar2 != &local_a8) goto LAB_1402b17d2;
  }
  local_40 = &local_a8;
  if ((int)local_60[0] < 4) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_58[3];
    if (puVar2 == &local_98) goto LAB_1402b1851;
  }
  local_e8 = *(undefined4 *)puVar2;
  uStack_e4 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_e0 = *(undefined4 *)(puVar2 + 1);
  uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_e8);
LAB_1402b1851:
  local_38 = &local_98;
  if (((int)local_60[0] < 5) || (puVar3 = (undefined8 *)local_58[4], puVar3 != &local_88)) {
    local_e8 = *(undefined4 *)puVar3;
    uStack_e4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_e0 = *(undefined4 *)(puVar3 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_e8);
  }
  local_30 = &local_88;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_d8,5,CONCAT44(uVar5,DAT_141a59730),&local_50);
  if (puVar3 != param_3) {
    local_e8 = *(undefined4 *)puVar3;
    uStack_e4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_e0 = *(undefined4 *)(puVar3 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,5,FUN_140041b30);
  if (0 < (int)local_60[0]) {
    puVar3 = local_58;
    do {
      puVar2 = (undefined8 *)*puVar3;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar3 = puVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  FUN_140e4cd60(local_58);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

