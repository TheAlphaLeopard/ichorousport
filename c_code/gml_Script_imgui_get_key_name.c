// gml_Script_imgui_get_key_name @ 0x1404c2f10

undefined8 *
gml_Script_imgui_get_key_name
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  uint local_50 [2];
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  local_60 = "gml_Script_imgui_is_key_chord_pressed";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x5e9;
  FUN_140041df0(local_50,param_4,3,param_5);
  _eh_vector_constructor_iterator_(&local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x5e9;
  puVar4 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_50[0];
  if ((int)local_50[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_48[1];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar1 == 0) && (local_58 = 0x5e9, 1 < (int)local_50[0])) &&
     (puVar3 = (undefined8 *)local_48[1], puVar3 != &DAT_1419df7b0)) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_b8);
  }
  if ((int)local_50[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_48[2];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar1 == 0) && (2 < (int)local_50[0])) &&
     (puVar3 = (undefined8 *)local_48[2], puVar3 != &DAT_1419df7b0)) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_b8);
  }
  local_58 = 0x5ea;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fbbf8);
  if ((int)local_50[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_1404c30f8:
    local_b8 = *(undefined4 *)puVar3;
    uStack_b4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_b0 = *(undefined4 *)(puVar3 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_b8);
  }
  else {
    puVar3 = (undefined8 *)*local_48;
    if (puVar3 != &local_98) goto LAB_1404c30f8;
  }
  local_40 = &local_98;
  if ((int)local_50[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_48[1];
    if (puVar3 == &local_88) goto LAB_1404c3173;
  }
  local_b8 = *(undefined4 *)puVar3;
  uStack_b4 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_b0 = *(undefined4 *)(puVar3 + 1);
  uStack_ac = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_b8);
LAB_1404c3173:
  local_38 = &local_88;
  if (((int)local_50[0] < 3) || (puVar4 = (undefined8 *)local_48[2], puVar4 != &local_78)) {
    local_b8 = *(undefined4 *)puVar4;
    uStack_b4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_b0 = *(undefined4 *)(puVar4 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_b8);
  }
  local_30 = &local_78;
  puVar4 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_a8,3,uVar2,&local_40);
  if (puVar4 != param_3) {
    local_b8 = *(undefined4 *)puVar4;
    uStack_b4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_b0 = *(undefined4 *)(puVar4 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,3,FUN_140041b30);
  if (0 < (int)local_50[0]) {
    puVar4 = local_48;
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
  FUN_140e4cd60(local_48);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

