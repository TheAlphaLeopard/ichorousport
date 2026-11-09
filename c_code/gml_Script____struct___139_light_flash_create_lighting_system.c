// gml_Script____struct___139_light_flash_create_lighting_system @ 0x1403b41f0

undefined8 *
gml_Script____struct___139_light_flash_create_lighting_system
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  undefined8 *local_30;
  
  local_e0 = "gml_Script_light_add";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x1d3;
  FUN_140041df0(local_68,param_4,5,param_5);
  _eh_vector_constructor_iterator_(&local_c8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x1d3;
  puVar3 = &DAT_1419df7b0;
  uVar4 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 4) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_60[3];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar1 == 0) && (local_d8 = 0x1d3, 3 < (int)local_68[0])) &&
     (puVar2 = (undefined8 *)local_60[3], puVar2 != &DAT_1419df7b0)) {
    local_118 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_110 = DAT_1419df7b8;
    uStack_10c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_118);
  }
  if ((int)local_68[0] < 5) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_60[4];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_68[0] < 3) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_60[2];
    }
    uStack_fc = *(undefined4 *)((longlong)puVar2 + 0xc);
    uStack_100 = *(undefined4 *)(puVar2 + 1);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
      local_108 = *puVar2;
    }
    else {
      FUN_1400419b0(&local_108);
    }
    uStack_10c = 0;
    local_118 = 0x3fd3333333333333;
    FUN_140042560(&local_108,&local_118);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if ((int)local_68[0] < 5) {
      puVar2 = &DAT_1419df7b0;
LAB_1403b43ec:
      local_118 = local_108;
      uStack_110 = uStack_100;
      uStack_10c = uStack_fc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_118);
    }
    else {
      puVar2 = (undefined8 *)local_60[4];
      if (&local_108 != puVar2) goto LAB_1403b43ec;
    }
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
  }
  local_d8 = 0x1d4;
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  if ((int)local_68[0] < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_1403b446d:
    local_118 = *puVar2;
    uStack_110 = *(undefined4 *)(puVar2 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_118);
  }
  else {
    puVar2 = (undefined8 *)*local_60;
    if (puVar2 != &local_c8) goto LAB_1403b446d;
  }
  local_58 = &local_c8;
  if ((int)local_68[0] < 2) {
    puVar2 = &DAT_1419df7b0;
LAB_1403b44bc:
    local_118 = *puVar2;
    uStack_110 = *(undefined4 *)(puVar2 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_118);
  }
  else {
    puVar2 = (undefined8 *)local_60[1];
    if (puVar2 != &local_b8) goto LAB_1403b44bc;
  }
  local_50 = &local_b8;
  if ((int)local_68[0] < 3) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_60[2];
  }
  uStack_fc = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_100 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_108 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_108);
  }
  uStack_10c = 0;
  local_118 = 0x3fe3333333333333;
  FUN_140042560(&local_108,&local_118);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = local_108;
  uStack_110 = uStack_100;
  uStack_10c = uStack_fc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_118);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_48 = local_a8;
  if ((int)local_68[0] < 4) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_60[3];
    if (puVar2 == &local_98) goto LAB_1403b4618;
  }
  local_118 = *puVar2;
  uStack_110 = *(undefined4 *)(puVar2 + 1);
  uStack_10c = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_118);
LAB_1403b4618:
  local_40 = &local_98;
  local_118 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_110 = DAT_1419df7b8;
  uStack_10c = DAT_1419df7bc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_118);
  local_38 = local_88;
  if (((int)local_68[0] < 5) || (puVar3 = (undefined8 *)local_60[4], puVar3 != &local_78)) {
    local_118 = *puVar3;
    uStack_110 = *(undefined4 *)(puVar3 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_118);
  }
  local_30 = &local_78;
  gml_Script_draw_sprite_general_lit(param_1,param_2,&local_f8,6,&local_58);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,6,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    puVar3 = local_60;
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
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

