// gml_Script_Checkbox_anon_95828_ImGui_ImGui @ 0x1402c7d00

undefined8 *
gml_Script_Checkbox_anon_95828_ImGui_ImGui
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
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  byte local_16c;
  undefined8 local_168;
  byte local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined8 local_148;
  byte local_13c;
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
  undefined4 local_c8 [3];
  byte local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  uint local_a0 [2];
  undefined8 *local_98;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined4 *local_30;
  
  local_b0 = "gml_Script_ImageButton@anon@94783@ImGui@ImGui";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0xb54;
  FUN_140041df0(local_a0,param_4,9,param_5);
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_178,0x10,0xc,FUN_1400424d0,FUN_140041b30);
  local_18c = 0;
  local_198 = 0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0xb54;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_a0[0];
  if ((int)local_a0[0] < 8) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_98[7];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_a8 = 0xb54;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    if ((int)local_a0[0] < 2) {
      puVar3 = &DAT_1419df7b0;
LAB_1402c7e49:
      local_1a8 = *(undefined4 *)puVar3;
      uStack_1a4 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_1a0 = *(undefined4 *)(puVar3 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_1a8);
    }
    else {
      puVar3 = (undefined8 *)local_98[1];
      if (puVar3 != &local_e8) goto LAB_1402c7e49;
    }
    local_40 = &local_e8;
    if ((int)local_a0[0] < 8) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_98[7];
    }
    uVar7 = CONCAT44(uVar8,DAT_141a047c8);
    puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,1,uVar7,&local_40);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar2 != puVar3) {
      local_1a8 = *(undefined4 *)puVar2;
      uStack_1a4 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_1a0 = *(undefined4 *)(puVar2 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_1a8);
    }
  }
  if ((int)local_a0[0] < 9) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_98[8];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    if ((int)local_a0[0] < 2) {
      puVar3 = &DAT_1419df7b0;
LAB_1402c7f61:
      local_1a8 = *(undefined4 *)puVar3;
      uStack_1a4 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_1a0 = *(undefined4 *)(puVar3 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1a8);
    }
    else {
      puVar3 = (undefined8 *)local_98[1];
      if (puVar3 != &local_178) goto LAB_1402c7f61;
    }
    local_88 = &local_178;
    if ((int)local_a0[0] < 9) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_98[8];
    }
    uVar7 = CONCAT44(uVar8,DAT_141a04808);
    puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,1,uVar7,&local_88);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar2 != puVar3) {
      local_1a8 = *(undefined4 *)puVar2;
      uStack_1a4 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_1a0 = *(undefined4 *)(puVar2 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_1a8);
    }
  }
  local_a8 = 0xb55;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  if ((int)local_a0[0] < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_1402c8082:
    local_1a8 = *(undefined4 *)puVar3;
    uStack_1a4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1a0 = *(undefined4 *)(puVar3 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1a8);
  }
  else {
    puVar3 = (undefined8 *)local_98[1];
    if (puVar3 != &local_178) goto LAB_1402c8082;
  }
  local_88 = &local_178;
  if ((int)local_a0[0] < 3) {
    puVar3 = &DAT_1419df7b0;
LAB_1402c80d6:
    local_1a8 = *(undefined4 *)puVar3;
    uStack_1a4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1a0 = *(undefined4 *)(puVar3 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1a8);
  }
  else {
    puVar3 = (undefined8 *)local_98[2];
    if (puVar3 != &local_168) goto LAB_1402c80d6;
  }
  local_80 = &local_168;
  if ((int)local_a0[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_1402c8127:
    local_1a8 = *(undefined4 *)puVar3;
    uStack_1a4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1a0 = *(undefined4 *)(puVar3 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1a8);
  }
  else {
    puVar3 = (undefined8 *)*local_98;
    if (puVar3 != &local_158) goto LAB_1402c8127;
  }
  local_78 = &local_158;
  if ((int)local_a0[0] < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_1402c8176:
    local_1a8 = *(undefined4 *)puVar3;
    uStack_1a4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1a0 = *(undefined4 *)(puVar3 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1a8);
  }
  else {
    puVar3 = (undefined8 *)local_98[1];
    if (puVar3 != &local_148) goto LAB_1402c8176;
  }
  local_70 = &local_148;
  if ((int)local_a0[0] < 3) {
    puVar3 = &DAT_1419df7b0;
LAB_1402c81c5:
    local_1a8 = *(undefined4 *)puVar3;
    uStack_1a4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1a0 = *(undefined4 *)(puVar3 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1a8);
  }
  else {
    puVar3 = (undefined8 *)local_98[2];
    if (puVar3 != &local_138) goto LAB_1402c81c5;
  }
  local_68 = &local_138;
  if ((int)local_a0[0] < 4) {
    puVar3 = &DAT_1419df7b0;
LAB_1402c8214:
    local_1a8 = *(undefined4 *)puVar3;
    uStack_1a4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1a0 = *(undefined4 *)(puVar3 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1a8);
  }
  else {
    puVar3 = (undefined8 *)local_98[3];
    if (puVar3 != &local_128) goto LAB_1402c8214;
  }
  local_60 = &local_128;
  if ((int)local_a0[0] < 5) {
    puVar3 = &DAT_1419df7b0;
LAB_1402c8263:
    local_1a8 = *(undefined4 *)puVar3;
    uStack_1a4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1a0 = *(undefined4 *)(puVar3 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1a8);
  }
  else {
    puVar3 = (undefined8 *)local_98[4];
    if (puVar3 != &local_118) goto LAB_1402c8263;
  }
  local_58 = &local_118;
  if ((int)local_a0[0] < 6) {
    puVar3 = &DAT_1419df7b0;
LAB_1402c82b5:
    local_1a8 = *(undefined4 *)puVar3;
    uStack_1a4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1a0 = *(undefined4 *)(puVar3 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1a8);
  }
  else {
    puVar3 = (undefined8 *)local_98[5];
    if (puVar3 != &local_108) goto LAB_1402c82b5;
  }
  local_50 = &local_108;
  if ((int)local_a0[0] < 7) {
    puVar3 = &DAT_1419df7b0;
LAB_1402c8307:
    local_1a8 = *(undefined4 *)puVar3;
    uStack_1a4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1a0 = *(undefined4 *)(puVar3 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1a8);
  }
  else {
    puVar3 = (undefined8 *)local_98[6];
    if (puVar3 != &local_f8) goto LAB_1402c8307;
  }
  local_48 = &local_f8;
  if ((int)local_a0[0] < 8) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_98[7];
    if (puVar3 == &local_e8) goto LAB_1402c8389;
  }
  local_1a8 = *(undefined4 *)puVar3;
  uStack_1a4 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_1a0 = *(undefined4 *)(puVar3 + 1);
  uStack_19c = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_1a8);
LAB_1402c8389:
  local_40 = &local_e8;
  if (((int)local_a0[0] < 9) || (puVar5 = (undefined8 *)local_98[8], puVar5 != &local_d8)) {
    local_1a8 = *(undefined4 *)puVar5;
    uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1a0 = *(undefined4 *)(puVar5 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_1a8);
  }
  uVar7 = CONCAT44(uVar8,DAT_141a04898);
  local_38 = &local_d8;
  puVar4 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_188,2,uVar7,&local_88);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar4 != local_c8) {
    local_1a8 = *puVar4;
    uStack_1a4 = puVar4[1];
    uStack_1a0 = puVar4[2];
    uStack_19c = puVar4[3];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_1a8);
  }
  local_30 = local_c8;
  puVar5 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_198,10,CONCAT44(uVar8,DAT_141a59730),&local_78);
  if (puVar5 != param_3) {
    local_1a8 = *(undefined4 *)puVar5;
    uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1a0 = *(undefined4 *)(puVar5 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_1a8);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  _eh_vector_destructor_iterator_(&local_178,0x10,0xc,FUN_140041b30);
  if (0 < (int)local_a0[0]) {
    puVar5 = local_98;
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
  FUN_140e4cd60(local_98);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

