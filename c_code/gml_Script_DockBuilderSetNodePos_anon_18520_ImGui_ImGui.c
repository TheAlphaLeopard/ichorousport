// gml_Script_DockBuilderSetNodePos_anon_18520_ImGui_ImGui @ 0x14029e730

undefined8 *
gml_Script_DockBuilderSetNodePos_anon_18520_ImGui_ImGui
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
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
  char *local_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48 [2];
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  local_70 = "gml_Script_DockBuilderRemoveNodeDockedWindows@anon@17894@ImGui@ImGui";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x27e;
  FUN_140041df0(local_48,param_4,2,param_5);
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_98,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x27e;
  puVar4 = &DAT_1419df7b0;
  uVar3 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_40[1];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_68 = 0x27e;
    uStack_4c = 0xd;
    local_58 = 0x3ff0000000000000;
    if ((int)local_48[0] < 2) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_40[1];
      if (&local_58 == puVar2) goto LAB_14029e87a;
    }
    local_a8 = 0;
    uStack_a4 = 0x3ff00000;
    uStack_a0 = uStack_50;
    uStack_9c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_a8);
  }
LAB_14029e87a:
  local_68 = 0x27f;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  if ((int)local_48[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_40;
    if (puVar2 == &local_98) goto LAB_14029e8ec;
  }
  local_a8 = *(undefined4 *)puVar2;
  uStack_a4 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_a0 = *(undefined4 *)(puVar2 + 1);
  uStack_9c = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_a8);
LAB_14029e8ec:
  local_38 = &local_98;
  if (((int)local_48[0] < 2) || (puVar4 = (undefined8 *)local_40[1], puVar4 != &local_88)) {
    local_a8 = *(undefined4 *)puVar4;
    uStack_a4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_a0 = *(undefined4 *)(puVar4 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_a8);
  }
  local_30 = &local_88;
  puVar4 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_b8,2,CONCAT44(uVar5,DAT_141a59730),&local_38);
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
  _eh_vector_destructor_iterator_(&local_98,0x10,2,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar4 = local_40;
    do {
      puVar2 = (undefined8 *)*puVar4;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar4 = puVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

