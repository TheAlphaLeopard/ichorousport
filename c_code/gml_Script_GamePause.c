// gml_Script_GamePause @ 0x14041b670

undefined8 *
gml_Script_GamePause
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
  ulonglong in_stack_ffffffffffffff10;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  uint local_58 [2];
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  local_b0 = "gml_Script_game_toggle";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x4b;
  FUN_140041df0(local_58,param_4,4,param_5);
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_98,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x4b;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 4) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_50[3];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_a8 = 0x4b;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    if ((int)local_58[0] < 4) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_50[3];
    }
    in_stack_ffffffffffffff10 = 0;
    pcVar7 = (code *)CONCAT44((int)((ulonglong)pcVar7 >> 0x20),DAT_1419fd6d8);
    puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_e8,0,pcVar7,0);
    if (puVar2 != puVar3) {
      local_d8 = *(undefined4 *)puVar2;
      uStack_d4 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_d0 = *(undefined4 *)(puVar2 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_d8);
    }
  }
  local_a8 = 0x4c;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  if ((int)local_58[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_50;
  }
  FUN_140e87440(puVar3,DAT_141a55260,0x80000000,&local_c8,(ulonglong)pcVar7 & 0xffffffffffffff00,
                in_stack_ffffffffffffff10 & 0xffffffffffffff00);
  if ((int)local_58[0] < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_14041b87d:
    local_d8 = *(undefined4 *)puVar3;
    uStack_d4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_d0 = *(undefined4 *)(puVar3 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_d8);
  }
  else {
    puVar3 = (undefined8 *)local_50[1];
    if (puVar3 != &local_98) goto LAB_14041b87d;
  }
  local_48 = &local_98;
  if ((int)local_58[0] < 3) {
    puVar3 = &DAT_1419df7b0;
LAB_14041b8cc:
    local_d8 = *(undefined4 *)puVar3;
    uStack_d4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_d0 = *(undefined4 *)(puVar3 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_d8);
  }
  else {
    puVar3 = (undefined8 *)local_50[2];
    if (puVar3 != &local_88) goto LAB_14041b8cc;
  }
  local_40 = &local_88;
  if ((int)local_58[0] < 4) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_50[3];
    if (puVar3 == &local_78) goto LAB_14041b94b;
  }
  local_d8 = *(undefined4 *)puVar3;
  uStack_d4 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_d0 = *(undefined4 *)(puVar3 + 1);
  uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_d8);
LAB_14041b94b:
  local_38 = &local_78;
  if (0 < (int)local_58[0]) {
    puVar5 = (undefined8 *)*local_50;
  }
  uVar4 = FUN_140069500(puVar5);
  puVar5 = (undefined8 *)FUN_140e63610(uVar4,param_2,&local_e8,3,&local_c8,&local_48);
  if (puVar5 != param_3) {
    local_d8 = *(undefined4 *)puVar5;
    uStack_d4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_d0 = *(undefined4 *)(puVar5 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_d8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,4,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar5 = local_50;
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
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

