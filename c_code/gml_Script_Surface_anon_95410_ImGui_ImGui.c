// gml_Script_Surface_anon_95410_ImGui_ImGui @ 0x1402c74c0

undefined8 *
gml_Script_Surface_anon_95410_ImGui_ImGui
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
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined4 *local_48;
  uint local_38 [2];
  undefined8 *local_30;
  
  local_a0 = "gml_Script_Image@anon@94064@ImGui@ImGui";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0xb44;
  FUN_140041df0(local_38,param_4,6,param_5);
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_138,0x10,9,FUN_1400424d0,FUN_140041b30);
  local_14c = 0;
  local_158 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0xb44;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_38[0];
  if ((int)local_38[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_30[2];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_98 = 0xb44;
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
    *puVar3 = 0x416fffffe0000000;
  }
  if ((int)local_38[0] < 4) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_30[3];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_38[0] < 4) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_30[3];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0x3ff0000000000000;
  }
  if ((int)local_38[0] < 5) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_30[4];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    if ((int)local_38[0] < 1) {
      puVar3 = &DAT_1419df7b0;
LAB_1402c76c7:
      local_168 = *(undefined4 *)puVar3;
      uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_160 = *(undefined4 *)(puVar3 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_168);
    }
    else {
      puVar3 = (undefined8 *)*local_30;
      if (puVar3 != &local_138) goto LAB_1402c76c7;
    }
    local_88 = &local_138;
    if ((int)local_38[0] < 5) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_30[4];
    }
    uVar7 = CONCAT44(uVar8,DAT_141a047c8);
    puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,1,uVar7,&local_88);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar2 != puVar3) {
      local_168 = *(undefined4 *)puVar2;
      uStack_164 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_160 = *(undefined4 *)(puVar2 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_168);
    }
  }
  if ((int)local_38[0] < 6) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_30[5];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    if ((int)local_38[0] < 1) {
      puVar3 = &DAT_1419df7b0;
LAB_1402c77db:
      local_168 = *(undefined4 *)puVar3;
      uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_160 = *(undefined4 *)(puVar3 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_168);
    }
    else {
      puVar3 = (undefined8 *)*local_30;
      if (puVar3 != &local_138) goto LAB_1402c77db;
    }
    local_88 = &local_138;
    if ((int)local_38[0] < 6) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_30[5];
    }
    uVar7 = CONCAT44(uVar8,DAT_141a04808);
    puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,1,uVar7,&local_88);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar2 != puVar3) {
      local_168 = *(undefined4 *)puVar2;
      uStack_164 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_160 = *(undefined4 *)(puVar2 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_168);
    }
  }
  local_98 = 0xb45;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((int)local_38[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_1402c78fa:
    local_168 = *(undefined4 *)puVar3;
    uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_160 = *(undefined4 *)(puVar3 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_168);
  }
  else {
    puVar3 = (undefined8 *)*local_30;
    if (puVar3 != &local_138) goto LAB_1402c78fa;
  }
  local_88 = &local_138;
  if ((int)local_38[0] < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_1402c794e:
    local_168 = *(undefined4 *)puVar3;
    uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_160 = *(undefined4 *)(puVar3 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_168);
  }
  else {
    puVar3 = (undefined8 *)local_30[1];
    if (puVar3 != &local_128) goto LAB_1402c794e;
  }
  local_80 = &local_128;
  if ((int)local_38[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_1402c799f:
    local_168 = *(undefined4 *)puVar3;
    uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_160 = *(undefined4 *)(puVar3 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_168);
  }
  else {
    puVar3 = (undefined8 *)*local_30;
    if (puVar3 != &local_118) goto LAB_1402c799f;
  }
  local_78 = &local_118;
  if ((int)local_38[0] < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_1402c79ee:
    local_168 = *(undefined4 *)puVar3;
    uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_160 = *(undefined4 *)(puVar3 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_168);
  }
  else {
    puVar3 = (undefined8 *)local_30[1];
    if (puVar3 != &local_108) goto LAB_1402c79ee;
  }
  local_70 = &local_108;
  if ((int)local_38[0] < 3) {
    puVar3 = &DAT_1419df7b0;
LAB_1402c7a3d:
    local_168 = *(undefined4 *)puVar3;
    uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_160 = *(undefined4 *)(puVar3 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_168);
  }
  else {
    puVar3 = (undefined8 *)local_30[2];
    if (puVar3 != &local_f8) goto LAB_1402c7a3d;
  }
  local_68 = &local_f8;
  if ((int)local_38[0] < 4) {
    puVar3 = &DAT_1419df7b0;
LAB_1402c7a8c:
    local_168 = *(undefined4 *)puVar3;
    uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_160 = *(undefined4 *)(puVar3 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_168);
  }
  else {
    puVar3 = (undefined8 *)local_30[3];
    if (puVar3 != &local_e8) goto LAB_1402c7a8c;
  }
  local_60 = &local_e8;
  if ((int)local_38[0] < 5) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_30[4];
    if (puVar3 == &local_d8) goto LAB_1402c7b0b;
  }
  local_168 = *(undefined4 *)puVar3;
  uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_160 = *(undefined4 *)(puVar3 + 1);
  uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_168);
LAB_1402c7b0b:
  local_58 = &local_d8;
  if (((int)local_38[0] < 6) || (puVar5 = (undefined8 *)local_30[5], puVar5 != &local_c8)) {
    local_168 = *(undefined4 *)puVar5;
    uStack_164 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_160 = *(undefined4 *)(puVar5 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_168);
  }
  local_50 = &local_c8;
  uVar7 = CONCAT44(uVar8,DAT_141a04898);
  puVar4 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_148,2,uVar7,&local_88);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar4 != local_b8) {
    local_168 = *puVar4;
    uStack_164 = puVar4[1];
    uStack_160 = puVar4[2];
    uStack_15c = puVar4[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_168);
  }
  local_48 = local_b8;
  puVar5 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_158,7,CONCAT44(uVar8,DAT_141a59730),&local_78);
  if (puVar5 != param_3) {
    local_168 = *(undefined4 *)puVar5;
    uStack_164 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_160 = *(undefined4 *)(puVar5 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_168);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(&local_138,0x10,9,FUN_140041b30);
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
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

