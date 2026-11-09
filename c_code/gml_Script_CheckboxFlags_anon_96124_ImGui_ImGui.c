// gml_Script_CheckboxFlags_anon_96124_ImGui_ImGui @ 0x1402c8580

undefined8 *
gml_Script_CheckboxFlags_anon_96124_ImGui_ImGui
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
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
  byte local_9c;
  undefined4 local_98 [3];
  byte local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined4 *local_40;
  uint local_38 [2];
  undefined8 *local_30;
  
  local_80 = "gml_Script_Surface@anon@95410@ImGui@ImGui";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0xb60;
  FUN_140041df0(local_38,param_4,5,param_5);
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_f8,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = 0;
  local_12c = 0;
  local_138 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0xb60;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_38[0];
  if ((int)local_38[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_30[1];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_78 = 0xb60;
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
    *puVar3 = 0x416fffffe0000000;
  }
  if ((int)local_38[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_30[2];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_38[0] < 3) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_30[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0x3ff0000000000000;
  }
  if ((int)local_38[0] < 4) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_30[3];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    if ((int)local_38[0] < 1) {
      puVar3 = &DAT_1419df7b0;
LAB_1402c8794:
      local_128 = *(undefined4 *)puVar3;
      uStack_124 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_120 = *(undefined4 *)(puVar3 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_128);
    }
    else {
      puVar3 = (undefined8 *)*local_30;
      if (puVar3 != &local_f8) goto LAB_1402c8794;
    }
    local_70 = &local_f8;
    if ((int)local_38[0] < 4) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_30[3];
    }
    uVar7 = CONCAT44(uVar8,DAT_141a047b8);
    puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_138,1,uVar7,&local_70);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar2 != puVar3) {
      local_128 = *(undefined4 *)puVar2;
      uStack_124 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_120 = *(undefined4 *)(puVar2 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_128);
    }
  }
  if ((int)local_38[0] < 5) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_30[4];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    if ((int)local_38[0] < 1) {
      puVar3 = &DAT_1419df7b0;
LAB_1402c88a8:
      local_128 = *(undefined4 *)puVar3;
      uStack_124 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_120 = *(undefined4 *)(puVar3 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_128);
    }
    else {
      puVar3 = (undefined8 *)*local_30;
      if (puVar3 != &local_f8) goto LAB_1402c88a8;
    }
    local_70 = &local_f8;
    if ((int)local_38[0] < 5) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_30[4];
    }
    uVar7 = CONCAT44(uVar8,DAT_141a04548);
    puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_138,1,uVar7,&local_70);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar2 != puVar3) {
      local_128 = *(undefined4 *)puVar2;
      uStack_124 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_120 = *(undefined4 *)(puVar2 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_128);
    }
  }
  local_78 = 0xb61;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if ((int)local_38[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_1402c899a:
    local_128 = *(undefined4 *)puVar3;
    uStack_124 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_120 = *(undefined4 *)(puVar3 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_128);
  }
  else {
    puVar3 = (undefined8 *)*local_30;
    if (puVar3 != &local_f8) goto LAB_1402c899a;
  }
  local_70 = &local_f8;
  uVar7 = CONCAT44(uVar8,DAT_141a04b28);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_138,1,uVar7,&local_70);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar3 != &local_108) {
    local_128 = *(undefined4 *)puVar3;
    uStack_124 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_120 = *(undefined4 *)(puVar3 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_128);
  }
  local_78 = 0xb62;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  local_70 = &local_108;
  if ((int)local_38[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_1402c8abb:
    local_128 = *(undefined4 *)puVar3;
    uStack_124 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_120 = *(undefined4 *)(puVar3 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_128);
  }
  else {
    puVar3 = (undefined8 *)*local_30;
    if (puVar3 != &local_e8) goto LAB_1402c8abb;
  }
  local_68 = &local_e8;
  if ((int)local_38[0] < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_1402c8b0a:
    local_128 = *(undefined4 *)puVar3;
    uStack_124 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_120 = *(undefined4 *)(puVar3 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_128);
  }
  else {
    puVar3 = (undefined8 *)local_30[1];
    if (puVar3 != &local_d8) goto LAB_1402c8b0a;
  }
  local_60 = &local_d8;
  if ((int)local_38[0] < 3) {
    puVar3 = &DAT_1419df7b0;
LAB_1402c8b59:
    local_128 = *(undefined4 *)puVar3;
    uStack_124 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_120 = *(undefined4 *)(puVar3 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_128);
  }
  else {
    puVar3 = (undefined8 *)local_30[2];
    if (puVar3 != &local_c8) goto LAB_1402c8b59;
  }
  local_58 = &local_c8;
  if ((int)local_38[0] < 4) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_30[3];
    if (puVar3 == &local_b8) goto LAB_1402c8bd8;
  }
  local_128 = *(undefined4 *)puVar3;
  uStack_124 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_120 = *(undefined4 *)(puVar3 + 1);
  uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_128);
LAB_1402c8bd8:
  local_50 = &local_b8;
  if (((int)local_38[0] < 5) || (puVar5 = (undefined8 *)local_30[4], puVar5 != &local_a8)) {
    local_128 = *(undefined4 *)puVar5;
    uStack_124 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_120 = *(undefined4 *)(puVar5 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_128);
  }
  local_48 = &local_a8;
  uVar7 = CONCAT44(uVar8,DAT_141a04a88);
  puVar4 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_118,1,uVar7,&local_70);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar4 != local_98) {
    local_128 = *puVar4;
    uStack_124 = puVar4[1];
    uStack_120 = puVar4[2];
    uStack_11c = puVar4[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_128);
  }
  local_40 = local_98;
  puVar5 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_138,6,CONCAT44(uVar8,DAT_141a59730),&local_68);
  if (puVar5 != param_3) {
    local_128 = *(undefined4 *)puVar5;
    uStack_124 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_120 = *(undefined4 *)(puVar5 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,7,FUN_140041b30);
  if (0 < (int)local_38[0]) {
    puVar5 = local_30;
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
  FUN_140e4cd60(local_30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

