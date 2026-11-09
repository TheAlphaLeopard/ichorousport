// gml_Script_SliderFloat2_anon_72625_ImGui_ImGui @ 0x1402ba970

undefined8 *
gml_Script_SliderFloat2_anon_72625_ImGui_ImGui
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
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
  char *local_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78 [2];
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  
  local_a0 = "gml_Script_Selectable@anon@71569@ImGui@ImGui";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x88d;
  FUN_140041df0(local_78,param_4,5,param_5);
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_f8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x88d;
  puVar3 = &DAT_1419df7b0;
  uVar4 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_70[1];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_98 = 0x88d;
    uStack_7c = 0xd;
    local_88 = 0;
    if ((int)local_78[0] < 2) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_70[1];
      if (&local_88 == puVar2) goto LAB_1402baab8;
    }
    local_118 = 0;
    uStack_114 = 0;
    uStack_110 = uStack_80;
    uStack_10c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_118);
  }
LAB_1402baab8:
  if ((int)local_78[0] < 3) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_70[2];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_78[0] < 3) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_70[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 10;
    *puVar2 = 0;
  }
  if ((int)local_78[0] < 4) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_70[3];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_78[0] < 4) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_70[3];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0;
  }
  if ((int)local_78[0] < 5) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_70[4];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_78[0] < 5) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_70[4];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0;
  }
  local_98 = 0x88e;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if ((int)local_78[0] < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_1402bac06:
    local_118 = *(undefined4 *)puVar2;
    uStack_114 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_110 = *(undefined4 *)(puVar2 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_118);
  }
  else {
    puVar2 = (undefined8 *)*local_70;
    if (puVar2 != &local_f8) goto LAB_1402bac06;
  }
  local_68 = &local_f8;
  if ((int)local_78[0] < 2) {
    puVar2 = &DAT_1419df7b0;
LAB_1402bac5a:
    local_118 = *(undefined4 *)puVar2;
    uStack_114 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_110 = *(undefined4 *)(puVar2 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_118);
  }
  else {
    puVar2 = (undefined8 *)local_70[1];
    if (puVar2 != &local_e8) goto LAB_1402bac5a;
  }
  local_60 = &local_e8;
  if ((int)local_78[0] < 3) {
    puVar2 = &DAT_1419df7b0;
LAB_1402bacae:
    local_118 = *(undefined4 *)puVar2;
    uStack_114 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_110 = *(undefined4 *)(puVar2 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_118);
  }
  else {
    puVar2 = (undefined8 *)local_70[2];
    if (puVar2 != &local_d8) goto LAB_1402bacae;
  }
  local_58 = &local_d8;
  if ((int)local_78[0] < 4) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_70[3];
    if (puVar2 == &local_c8) goto LAB_1402bad31;
  }
  local_118 = *(undefined4 *)puVar2;
  uStack_114 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_110 = *(undefined4 *)(puVar2 + 1);
  uStack_10c = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_118);
LAB_1402bad31:
  local_50 = &local_c8;
  if (((int)local_78[0] < 5) || (puVar3 = (undefined8 *)local_70[4], puVar3 != &local_b8)) {
    local_118 = *(undefined4 *)puVar3;
    uStack_114 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_110 = *(undefined4 *)(puVar3 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_118);
  }
  local_48 = &local_b8;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_108,5,CONCAT44(uVar5,DAT_141a59730),&local_68);
  if (puVar3 != param_3) {
    local_118 = *(undefined4 *)puVar3;
    uStack_114 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_110 = *(undefined4 *)(puVar3 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,5,FUN_140041b30);
  if (0 < (int)local_78[0]) {
    puVar3 = local_70;
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
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

