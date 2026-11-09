// gml_Script_GetFontSize_anon_47093_ImGui_ImGui @ 0x1402ae1e0

undefined8 *
gml_Script_GetFontSize_anon_47093_ImGui_ImGui
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
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  uint local_38 [2];
  undefined8 *local_30;
  
  local_60 = "gml_Script_MemoryEditorDrawContents@anon@46730@ImGui@ImGui";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x581;
  FUN_140041df0(local_38,param_4,3,param_5);
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x581;
  puVar4 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_38[0];
  if ((int)local_38[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_30[1];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_58 = 0x581;
    if ((int)local_38[0] < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_30[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0;
  }
  if ((int)local_38[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_30[2];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    if ((int)local_38[0] < 1) {
      puVar3 = &DAT_1419df7b0;
LAB_1402ae365:
      local_a8 = *(undefined4 *)puVar3;
      uStack_a4 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_a0 = *(undefined4 *)(puVar3 + 1);
      uStack_9c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_a8);
    }
    else {
      puVar3 = (undefined8 *)*local_30;
      if (puVar3 != &local_98) goto LAB_1402ae365;
    }
    local_50 = &local_98;
    if ((int)local_38[0] < 3) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_30[2];
    }
    uVar6 = CONCAT44(uVar7,DAT_141a09068);
    puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_b8,1,uVar6,&local_50);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar2 != puVar3) {
      local_a8 = *(undefined4 *)puVar2;
      uStack_a4 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_a0 = *(undefined4 *)(puVar2 + 1);
      uStack_9c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_a8);
    }
  }
  local_58 = 0x582;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  if ((int)local_38[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_1402ae448:
    local_a8 = *(undefined4 *)puVar3;
    uStack_a4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_a0 = *(undefined4 *)(puVar3 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_a8);
  }
  else {
    puVar3 = (undefined8 *)*local_30;
    if (puVar3 != &local_98) goto LAB_1402ae448;
  }
  local_50 = &local_98;
  if ((int)local_38[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_30[1];
    if (puVar3 == &local_88) goto LAB_1402ae4c3;
  }
  local_a8 = *(undefined4 *)puVar3;
  uStack_a4 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_a0 = *(undefined4 *)(puVar3 + 1);
  uStack_9c = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_a8);
LAB_1402ae4c3:
  local_48 = &local_88;
  if (((int)local_38[0] < 3) || (puVar4 = (undefined8 *)local_30[2], puVar4 != &local_78)) {
    local_a8 = *(undefined4 *)puVar4;
    uStack_a4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_a0 = *(undefined4 *)(puVar4 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_a8);
  }
  local_40 = &local_78;
  puVar4 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_b8,3,CONCAT44(uVar7,DAT_141a59730),&local_50);
  if (puVar4 != param_3) {
    local_a8 = *(undefined4 *)puVar4;
    uStack_a4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_a0 = *(undefined4 *)(puVar4 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_a8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,3,FUN_140041b30);
  if (0 < (int)local_38[0]) {
    puVar4 = local_30;
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
  FUN_140e4cd60(local_30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

