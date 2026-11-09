// gml_Script_DrawListPathStroke_anon_38731_ImGui_ImGui @ 0x1402a98a0

undefined8 *
gml_Script_DrawListPathStroke_anon_38731_ImGui_ImGui
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
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
  undefined8 local_98;
  byte local_8c;
  uint local_88 [2];
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
  undefined8 *local_30;
  
  local_140 = "gml_Script_DrawListAddBezierQuadratic@anon@37974@ImGui@ImGui";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0x48e;
  FUN_140041df0(local_88,param_4,10,param_5);
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,10,FUN_1400424d0,FUN_140041b30);
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_138 = 0x48e;
  puVar3 = &DAT_1419df7b0;
  uVar4 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 10) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_80[9];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_138 = 0x48e;
    if ((int)local_88[0] < 10) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_80[9];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0;
  }
  local_138 = 0x48f;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((int)local_88[0] < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_1402a9a16:
    local_168 = *(undefined4 *)puVar2;
    uStack_164 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_160 = *(undefined4 *)(puVar2 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_168);
  }
  else {
    puVar2 = (undefined8 *)*local_80;
    if (puVar2 != &local_128) goto LAB_1402a9a16;
  }
  local_78 = &local_128;
  if ((int)local_88[0] < 2) {
    puVar2 = &DAT_1419df7b0;
LAB_1402a9a69:
    local_168 = *(undefined4 *)puVar2;
    uStack_164 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_160 = *(undefined4 *)(puVar2 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_168);
  }
  else {
    puVar2 = (undefined8 *)local_80[1];
    if (puVar2 != &local_118) goto LAB_1402a9a69;
  }
  local_70 = &local_118;
  if ((int)local_88[0] < 3) {
    puVar2 = &DAT_1419df7b0;
LAB_1402a9ab8:
    local_168 = *(undefined4 *)puVar2;
    uStack_164 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_160 = *(undefined4 *)(puVar2 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_168);
  }
  else {
    puVar2 = (undefined8 *)local_80[2];
    if (puVar2 != &local_108) goto LAB_1402a9ab8;
  }
  local_68 = &local_108;
  if ((int)local_88[0] < 4) {
    puVar2 = &DAT_1419df7b0;
LAB_1402a9b07:
    local_168 = *(undefined4 *)puVar2;
    uStack_164 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_160 = *(undefined4 *)(puVar2 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_168);
  }
  else {
    puVar2 = (undefined8 *)local_80[3];
    if (puVar2 != &local_f8) goto LAB_1402a9b07;
  }
  local_60 = &local_f8;
  if ((int)local_88[0] < 5) {
    puVar2 = &DAT_1419df7b0;
LAB_1402a9b56:
    local_168 = *(undefined4 *)puVar2;
    uStack_164 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_160 = *(undefined4 *)(puVar2 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_168);
  }
  else {
    puVar2 = (undefined8 *)local_80[4];
    if (puVar2 != &local_e8) goto LAB_1402a9b56;
  }
  local_58 = &local_e8;
  if ((int)local_88[0] < 6) {
    puVar2 = &DAT_1419df7b0;
LAB_1402a9ba5:
    local_168 = *(undefined4 *)puVar2;
    uStack_164 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_160 = *(undefined4 *)(puVar2 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_168);
  }
  else {
    puVar2 = (undefined8 *)local_80[5];
    if (puVar2 != &local_d8) goto LAB_1402a9ba5;
  }
  local_50 = &local_d8;
  if ((int)local_88[0] < 7) {
    puVar2 = &DAT_1419df7b0;
LAB_1402a9bf4:
    local_168 = *(undefined4 *)puVar2;
    uStack_164 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_160 = *(undefined4 *)(puVar2 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_168);
  }
  else {
    puVar2 = (undefined8 *)local_80[6];
    if (puVar2 != &local_c8) goto LAB_1402a9bf4;
  }
  local_48 = &local_c8;
  if ((int)local_88[0] < 8) {
    puVar2 = &DAT_1419df7b0;
LAB_1402a9c43:
    local_168 = *(undefined4 *)puVar2;
    uStack_164 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_160 = *(undefined4 *)(puVar2 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_168);
  }
  else {
    puVar2 = (undefined8 *)local_80[7];
    if (puVar2 != &local_b8) goto LAB_1402a9c43;
  }
  local_40 = &local_b8;
  if ((int)local_88[0] < 9) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_80[8];
    if (puVar2 == &local_a8) goto LAB_1402a9cc2;
  }
  local_168 = *(undefined4 *)puVar2;
  uStack_164 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_160 = *(undefined4 *)(puVar2 + 1);
  uStack_15c = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_168);
LAB_1402a9cc2:
  local_38 = &local_a8;
  if (((int)local_88[0] < 10) || (puVar3 = (undefined8 *)local_80[9], puVar3 != &local_98)) {
    local_168 = *(undefined4 *)puVar3;
    uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_160 = *(undefined4 *)(puVar3 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_168);
  }
  local_30 = &local_98;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_158,10,CONCAT44(uVar5,DAT_141a59730),&local_78);
  if (puVar3 != param_3) {
    local_168 = *(undefined4 *)puVar3;
    uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_160 = *(undefined4 *)(puVar3 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,10,FUN_140041b30);
  if (0 < (int)local_88[0]) {
    puVar3 = local_80;
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
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return param_3;
}

