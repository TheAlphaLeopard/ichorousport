// gml_Script_draw_text_scribble_ext @ 0x14027d030

undefined8 *
gml_Script_draw_text_scribble_ext
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulonglong uVar8;
  undefined4 uVar10;
  undefined8 uVar9;
  ulonglong in_stack_fffffffffffffe00;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined8 local_188;
  byte local_17c;
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
  undefined1 local_c8 [12];
  byte local_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  uint local_a8 [2];
  undefined8 *local_a0;
  undefined8 *local_98;
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
  undefined1 *local_38;
  undefined4 *local_30;
  
  local_1a0 = "gml_Script_draw_sprite_hires";
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  local_198 = 0x28;
  FUN_140041df0(local_a8,param_4,0xb,param_5);
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_188,0x10,0xe,FUN_1400424d0,FUN_140041b30);
  uStack_1ac = 0xffffff;
  local_1b8 = 0;
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57920);
  local_1cc = 0;
  local_1d8 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_198 = 0x28;
  puVar4 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_a8[0];
  if ((int)local_a8[0] < 5) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_a0[4];
  }
  iVar1 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_198 = 0x28;
    if ((int)local_a8[0] < 5) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_a0[4];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0x3ff0000000000000;
  }
  if ((int)local_a8[0] < 6) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_a0[5];
  }
  iVar1 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_a8[0] < 6) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_a0[5];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0x3ff0000000000000;
  }
  if ((int)local_a8[0] < 7) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_a0[6];
  }
  iVar1 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_a8[0] < 7) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_a0[6];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
  }
  if ((int)local_a8[0] < 8) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_a0[7];
  }
  iVar1 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_a8[0] < 8) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_a0[7];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0x416fffffe0000000;
  }
  if ((int)local_a8[0] < 9) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_a0[8];
  }
  iVar1 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_a8[0] < 9) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_a0[8];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0x3ff0000000000000;
  }
  if ((int)local_a8[0] < 10) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_a0[9];
  }
  iVar1 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_a8[0] < 10) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_a0[9];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = &DAT_bff0000000000000;
  }
  if ((int)local_a8[0] < 0xb) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_a0[10];
  }
  iVar1 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_a8[0] < 0xb) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_a0[10];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
  }
  local_198 = 0x2a;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  uStack_1bc = 0xf;
  local_1c8 = 0x100000000000058;
  uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  FUN_140e87440(&local_1c8,DAT_141a578e0,0x80000000,&local_1b8,uVar8,
                in_stack_fffffffffffffe00 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar8 >> 0x20);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_1f8,gml_GlobalScript_draw_text_scribble_ext,0);
  if ((undefined8 *)&local_1f8 != puVar2) {
    local_1c8 = CONCAT44(uStack_1f4,local_1f8);
    uStack_1c0 = uStack_1f0;
    uStack_1bc = uStack_1ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_1c8);
  }
  FUN_140e60910(1);
  if (puVar2 != &local_188) {
    local_1c8 = *puVar2;
    uStack_1c0 = *(undefined4 *)(puVar2 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1c8);
  }
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_98 = &local_188;
  if ((int)local_a8[0] < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_14027d570:
    local_1f8 = *(undefined4 *)puVar2;
    uStack_1f4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_1f0 = *(undefined4 *)(puVar2 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1f8);
  }
  else {
    puVar2 = (undefined8 *)*local_a0;
    if (puVar2 != &local_178) goto LAB_14027d570;
  }
  local_90 = &local_178;
  if ((int)local_a8[0] < 2) {
    puVar2 = &DAT_1419df7b0;
LAB_14027d5c2:
    local_1f8 = *(undefined4 *)puVar2;
    uStack_1f4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_1f0 = *(undefined4 *)(puVar2 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1f8);
  }
  else {
    puVar2 = (undefined8 *)local_a0[1];
    if (puVar2 != &local_168) goto LAB_14027d5c2;
  }
  local_88 = &local_168;
  if ((int)local_a8[0] < 3) {
    puVar2 = &DAT_1419df7b0;
LAB_14027d614:
    local_1f8 = *(undefined4 *)puVar2;
    uStack_1f4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_1f0 = *(undefined4 *)(puVar2 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1f8);
  }
  else {
    puVar2 = (undefined8 *)local_a0[2];
    if (puVar2 != &local_158) goto LAB_14027d614;
  }
  local_80 = &local_158;
  if ((int)local_a8[0] < 4) {
    puVar2 = &DAT_1419df7b0;
LAB_14027d666:
    local_1f8 = *(undefined4 *)puVar2;
    uStack_1f4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_1f0 = *(undefined4 *)(puVar2 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1f8);
  }
  else {
    puVar2 = (undefined8 *)local_a0[3];
    if (puVar2 != &local_148) goto LAB_14027d666;
  }
  local_78 = &local_148;
  if ((int)local_a8[0] < 5) {
    puVar2 = &DAT_1419df7b0;
LAB_14027d6b8:
    local_1f8 = *(undefined4 *)puVar2;
    uStack_1f4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_1f0 = *(undefined4 *)(puVar2 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1f8);
  }
  else {
    puVar2 = (undefined8 *)local_a0[4];
    if (puVar2 != &local_138) goto LAB_14027d6b8;
  }
  local_70 = &local_138;
  if ((int)local_a8[0] < 6) {
    puVar2 = &DAT_1419df7b0;
LAB_14027d70a:
    local_1f8 = *(undefined4 *)puVar2;
    uStack_1f4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_1f0 = *(undefined4 *)(puVar2 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1f8);
  }
  else {
    puVar2 = (undefined8 *)local_a0[5];
    if (puVar2 != &local_128) goto LAB_14027d70a;
  }
  local_68 = &local_128;
  if ((int)local_a8[0] < 7) {
    puVar2 = &DAT_1419df7b0;
LAB_14027d75c:
    local_1f8 = *(undefined4 *)puVar2;
    uStack_1f4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_1f0 = *(undefined4 *)(puVar2 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1f8);
  }
  else {
    puVar2 = (undefined8 *)local_a0[6];
    if (puVar2 != &local_118) goto LAB_14027d75c;
  }
  local_60 = &local_118;
  if ((int)local_a8[0] < 8) {
    puVar2 = &DAT_1419df7b0;
LAB_14027d7ae:
    local_1f8 = *(undefined4 *)puVar2;
    uStack_1f4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_1f0 = *(undefined4 *)(puVar2 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1f8);
  }
  else {
    puVar2 = (undefined8 *)local_a0[7];
    if (puVar2 != &local_108) goto LAB_14027d7ae;
  }
  local_58 = &local_108;
  if ((int)local_a8[0] < 9) {
    puVar2 = &DAT_1419df7b0;
LAB_14027d800:
    local_1f8 = *(undefined4 *)puVar2;
    uStack_1f4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_1f0 = *(undefined4 *)(puVar2 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1f8);
  }
  else {
    puVar2 = (undefined8 *)local_a0[8];
    if (puVar2 != &local_f8) goto LAB_14027d800;
  }
  local_50 = &local_f8;
  if ((int)local_a8[0] < 10) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_a0[9];
    if (puVar2 == &local_e8) goto LAB_14027d882;
  }
  local_1f8 = *(undefined4 *)puVar2;
  uStack_1f4 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_1f0 = *(undefined4 *)(puVar2 + 1);
  uStack_1ec = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_1f8);
LAB_14027d882:
  local_48 = &local_e8;
  if (((int)local_a8[0] < 0xb) || (puVar4 = (undefined8 *)local_a0[10], puVar4 != &local_d8)) {
    local_1f8 = *(undefined4 *)puVar4;
    uStack_1f4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1f0 = *(undefined4 *)(puVar4 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_1f8);
  }
  local_40 = &local_d8;
  local_1f8 = (undefined4)local_1b8;
  uStack_1f4 = local_1b8._4_4_;
  uStack_1f0 = uStack_1b0;
  uStack_1ec = uStack_1ac;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_1f8);
  local_38 = local_c8;
  uVar9 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar3 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_1e8,0xc,uVar9,&local_98);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (puVar3 != local_b8) {
    local_1f8 = *puVar3;
    uStack_1f4 = puVar3[1];
    uStack_1f0 = puVar3[2];
    uStack_1ec = puVar3[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_1f8);
  }
  local_30 = local_b8;
  FUN_140e634e0(param_1,param_2,&local_1d8,2,CONCAT44(uVar10,DAT_1419fe568),&local_38);
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  _eh_vector_destructor_iterator_(&local_188,0x10,0xe,FUN_140041b30);
  if (0 < (int)local_a8[0]) {
    puVar4 = local_a0;
    do {
      puVar2 = (undefined8 *)*puVar4;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_a0);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return param_3;
}

