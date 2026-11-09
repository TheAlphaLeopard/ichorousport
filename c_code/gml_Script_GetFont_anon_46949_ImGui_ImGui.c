// gml_Script_GetFont_anon_46949_ImGui_ImGui @ 0x1402add40

undefined8 *
gml_Script_GetFont_anon_46949_ImGui_ImGui
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
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
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  uint local_40 [2];
  undefined8 *local_38;
  
  local_70 = "gml_Script_MemoryEditorShowWindow@anon@46325@ImGui@ImGui";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x577;
  FUN_140041df0(local_40,param_4,4,param_5);
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x577;
  puVar4 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_40[0];
  if ((int)local_40[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_38[2];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_68 = 0x577;
    if ((int)local_40[0] < 3) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_38[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0;
  }
  if ((int)local_40[0] < 4) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_38[3];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if ((int)local_40[0] < 2) {
      puVar3 = &DAT_1419df7b0;
LAB_1402adeca:
      local_c8 = *(undefined4 *)puVar3;
      uStack_c4 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_c0 = *(undefined4 *)(puVar3 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_c8);
    }
    else {
      puVar3 = (undefined8 *)local_38[1];
      if (puVar3 != &local_b8) goto LAB_1402adeca;
    }
    local_60 = &local_b8;
    if ((int)local_40[0] < 4) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_38[3];
    }
    uVar6 = CONCAT44(uVar7,DAT_141a09068);
    puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_d8,1,uVar6,&local_60);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar2 != puVar3) {
      local_c8 = *(undefined4 *)puVar2;
      uStack_c4 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_c0 = *(undefined4 *)(puVar2 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_c8);
    }
  }
  local_68 = 0x578;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  if ((int)local_40[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_1402adfb0:
    local_c8 = *(undefined4 *)puVar3;
    uStack_c4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_c0 = *(undefined4 *)(puVar3 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_c8);
  }
  else {
    puVar3 = (undefined8 *)*local_38;
    if (puVar3 != &local_b8) goto LAB_1402adfb0;
  }
  local_60 = &local_b8;
  if ((int)local_40[0] < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_1402adffd:
    local_c8 = *(undefined4 *)puVar3;
    uStack_c4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_c0 = *(undefined4 *)(puVar3 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_c8);
  }
  else {
    puVar3 = (undefined8 *)local_38[1];
    if (puVar3 != &local_a8) goto LAB_1402adffd;
  }
  local_58 = &local_a8;
  if ((int)local_40[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_38[2];
    if (puVar3 == &local_98) goto LAB_1402ae078;
  }
  local_c8 = *(undefined4 *)puVar3;
  uStack_c4 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_c0 = *(undefined4 *)(puVar3 + 1);
  uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_c8);
LAB_1402ae078:
  local_50 = &local_98;
  if (((int)local_40[0] < 4) || (puVar4 = (undefined8 *)local_38[3], puVar4 != &local_88)) {
    local_c8 = *(undefined4 *)puVar4;
    uStack_c4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_c0 = *(undefined4 *)(puVar4 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_c8);
  }
  local_48 = &local_88;
  puVar4 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_d8,4,CONCAT44(uVar7,DAT_141a59730),&local_60);
  if (puVar4 != param_3) {
    local_c8 = *(undefined4 *)puVar4;
    uStack_c4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_c0 = *(undefined4 *)(puVar4 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_c8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,4,FUN_140041b30);
  if (0 < (int)local_40[0]) {
    puVar4 = local_38;
    do {
      puVar3 = (undefined8 *)*puVar4;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_38);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

