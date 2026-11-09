// gml_Script____struct___160_GamePause_PauseMenuFunctions @ 0x14041b2b0

undefined8 *
gml_Script____struct___160_GamePause_PauseMenuFunctions
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  code *pcVar7;
  ulonglong in_stack_ffffffffffffff30;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  byte local_74;
  undefined8 local_70;
  byte local_64;
  uint local_50 [2];
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  local_90 = "gml_Script_game_btn";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x47;
  FUN_140041df0(local_50,param_4,3,param_5);
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_80,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x47;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_50[0];
  if ((int)local_50[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_48[2];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_88 = 0x47;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    if ((int)local_50[0] < 3) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_48[2];
    }
    in_stack_ffffffffffffff30 = 0;
    pcVar7 = (code *)CONCAT44((int)((ulonglong)pcVar7 >> 0x20),DAT_1419fd6d8);
    puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_c8,0,pcVar7,0);
    if (puVar2 != puVar3) {
      local_b8 = *(undefined4 *)puVar2;
      uStack_b4 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_b0 = *(undefined4 *)(puVar2 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_b8);
    }
  }
  local_88 = 0x48;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((int)local_50[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_48;
  }
  FUN_140e87440(puVar3,DAT_141a55560,0x80000000,&local_a8,(ulonglong)pcVar7 & 0xffffffffffffff00,
                in_stack_ffffffffffffff30 & 0xffffffffffffff00);
  if ((int)local_50[0] < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_14041b4ae:
    local_b8 = *(undefined4 *)puVar3;
    uStack_b4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_b0 = *(undefined4 *)(puVar3 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_b8);
  }
  else {
    puVar3 = (undefined8 *)local_48[1];
    if (puVar3 != &local_80) goto LAB_14041b4ae;
  }
  local_40 = &local_80;
  if ((int)local_50[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_48[2];
    if (puVar3 == &local_70) goto LAB_14041b529;
  }
  local_b8 = *(undefined4 *)puVar3;
  uStack_b4 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_b0 = *(undefined4 *)(puVar3 + 1);
  uStack_ac = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  FUN_140041b80(&local_70,&local_b8);
LAB_14041b529:
  local_38 = &local_70;
  if (0 < (int)local_50[0]) {
    puVar5 = (undefined8 *)*local_48;
  }
  uVar4 = FUN_140069500(puVar5);
  puVar5 = (undefined8 *)FUN_140e63610(uVar4,param_2,&local_c8,2,&local_a8,&local_40);
  if (puVar5 != param_3) {
    local_b8 = *(undefined4 *)puVar5;
    uStack_b4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_b0 = *(undefined4 *)(puVar5 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_b8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_80,0x10,3,FUN_140041b30);
  if (0 < (int)local_50[0]) {
    puVar5 = local_48;
    do {
      puVar3 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_48);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

