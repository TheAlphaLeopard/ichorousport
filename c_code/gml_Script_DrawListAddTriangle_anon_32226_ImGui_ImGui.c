// gml_Script_DrawListAddTriangle_anon_32226_ImGui_ImGui @ 0x1402a5df0

undefined8 *
gml_Script_DrawListAddTriangle_anon_32226_ImGui_ImGui
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
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
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  uint local_98 [2];
  undefined8 *local_90;
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
  
  local_160 = "gml_Script_DrawListAddQuad@anon@31077@ImGui@ImGui";
  local_168 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_168;
  local_158 = 0x3d3;
  FUN_140041df0(local_98,param_4,0xb,param_5);
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_148,0x10,0xb,FUN_1400424d0,FUN_140041b30);
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_158 = 0x3d3;
  puVar3 = &DAT_1419df7b0;
  uVar4 = (ulonglong)local_98[0];
  if ((int)local_98[0] < 0xb) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_90[10];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_158 = 0x3d3;
    if ((int)local_98[0] < 0xb) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_90[10];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0x3ff0000000000000;
  }
  local_158 = 0x3d4;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  if ((int)local_98[0] < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_1402a5f75:
    local_188 = *(undefined4 *)puVar2;
    uStack_184 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_180 = *(undefined4 *)(puVar2 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_188);
  }
  else {
    puVar2 = (undefined8 *)*local_90;
    if (puVar2 != &local_148) goto LAB_1402a5f75;
  }
  local_88 = &local_148;
  if ((int)local_98[0] < 2) {
    puVar2 = &DAT_1419df7b0;
LAB_1402a5fc8:
    local_188 = *(undefined4 *)puVar2;
    uStack_184 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_180 = *(undefined4 *)(puVar2 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_188);
  }
  else {
    puVar2 = (undefined8 *)local_90[1];
    if (puVar2 != &local_138) goto LAB_1402a5fc8;
  }
  local_80 = &local_138;
  if ((int)local_98[0] < 3) {
    puVar2 = &DAT_1419df7b0;
LAB_1402a6017:
    local_188 = *(undefined4 *)puVar2;
    uStack_184 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_180 = *(undefined4 *)(puVar2 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_188);
  }
  else {
    puVar2 = (undefined8 *)local_90[2];
    if (puVar2 != &local_128) goto LAB_1402a6017;
  }
  local_78 = &local_128;
  if ((int)local_98[0] < 4) {
    puVar2 = &DAT_1419df7b0;
LAB_1402a6066:
    local_188 = *(undefined4 *)puVar2;
    uStack_184 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_180 = *(undefined4 *)(puVar2 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_188);
  }
  else {
    puVar2 = (undefined8 *)local_90[3];
    if (puVar2 != &local_118) goto LAB_1402a6066;
  }
  local_70 = &local_118;
  if ((int)local_98[0] < 5) {
    puVar2 = &DAT_1419df7b0;
LAB_1402a60b5:
    local_188 = *(undefined4 *)puVar2;
    uStack_184 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_180 = *(undefined4 *)(puVar2 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_188);
  }
  else {
    puVar2 = (undefined8 *)local_90[4];
    if (puVar2 != &local_108) goto LAB_1402a60b5;
  }
  local_68 = &local_108;
  if ((int)local_98[0] < 6) {
    puVar2 = &DAT_1419df7b0;
LAB_1402a6104:
    local_188 = *(undefined4 *)puVar2;
    uStack_184 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_180 = *(undefined4 *)(puVar2 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_188);
  }
  else {
    puVar2 = (undefined8 *)local_90[5];
    if (puVar2 != &local_f8) goto LAB_1402a6104;
  }
  local_60 = &local_f8;
  if ((int)local_98[0] < 7) {
    puVar2 = &DAT_1419df7b0;
LAB_1402a6153:
    local_188 = *(undefined4 *)puVar2;
    uStack_184 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_180 = *(undefined4 *)(puVar2 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_188);
  }
  else {
    puVar2 = (undefined8 *)local_90[6];
    if (puVar2 != &local_e8) goto LAB_1402a6153;
  }
  local_58 = &local_e8;
  if ((int)local_98[0] < 8) {
    puVar2 = &DAT_1419df7b0;
LAB_1402a61a2:
    local_188 = *(undefined4 *)puVar2;
    uStack_184 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_180 = *(undefined4 *)(puVar2 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_188);
  }
  else {
    puVar2 = (undefined8 *)local_90[7];
    if (puVar2 != &local_d8) goto LAB_1402a61a2;
  }
  local_50 = &local_d8;
  if ((int)local_98[0] < 9) {
    puVar2 = &DAT_1419df7b0;
LAB_1402a61f1:
    local_188 = *(undefined4 *)puVar2;
    uStack_184 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_180 = *(undefined4 *)(puVar2 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_188);
  }
  else {
    puVar2 = (undefined8 *)local_90[8];
    if (puVar2 != &local_c8) goto LAB_1402a61f1;
  }
  local_48 = &local_c8;
  if ((int)local_98[0] < 10) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_90[9];
    if (puVar2 == &local_b8) goto LAB_1402a6270;
  }
  local_188 = *(undefined4 *)puVar2;
  uStack_184 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_180 = *(undefined4 *)(puVar2 + 1);
  uStack_17c = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_188);
LAB_1402a6270:
  local_40 = &local_b8;
  if (((int)local_98[0] < 0xb) || (puVar3 = (undefined8 *)local_90[10], puVar3 != &local_a8)) {
    local_188 = *(undefined4 *)puVar3;
    uStack_184 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_180 = *(undefined4 *)(puVar3 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_188);
  }
  local_38 = &local_a8;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_178,0xb,CONCAT44(uVar5,DAT_141a59730),&local_88);
  if (puVar3 != param_3) {
    local_188 = *(undefined4 *)puVar3;
    uStack_184 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_180 = *(undefined4 *)(puVar3 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,0xb,FUN_140041b30);
  if (0 < (int)local_98[0]) {
    puVar3 = local_90;
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
  FUN_140e4cd60(local_90);
  DAT_141dc7a50 = (undefined8 *)local_168;
  return param_3;
}

