// gml_Script_outline_set_surface @ 0x14010d140

undefined8 *
gml_Script_outline_set_surface
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double *pdVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 **ppuVar11;
  undefined4 uVar12;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  char *local_198;
  undefined4 local_190;
  undefined8 local_188;
  byte local_17c;
  undefined8 local_178;
  byte local_16c;
  undefined8 local_168;
  byte local_15c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  uint local_c8 [2];
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  
  local_198 = "gml_Script_outline_draw_sprite";
  local_1a0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a0;
  local_190 = 0x368;
  FUN_140041df0(local_c8,param_4,5,param_5);
  _eh_vector_constructor_iterator_(&local_188,0x10,0xc,FUN_1400424d0,FUN_140041b30);
  local_1bc = 0;
  local_1c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_190 = 0x368;
  pdVar5 = (double *)&DAT_1419df7b0;
  uVar6 = (ulonglong)local_c8[0];
  if ((int)local_c8[0] < 5) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_c0[4];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_190 = 0x368;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    local_1b8 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1b0 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_1b8);
    local_90 = local_138;
    local_1b8 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1b0 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_1b8);
    local_88 = local_128;
    local_1b8 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1b0 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_1b8);
    local_80 = local_118;
    local_1b8 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1b0 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_1b8);
    local_78 = local_108;
    local_1b8 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1b0 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1b8);
    local_1b8 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1b0 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    local_70 = local_f8;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_1b8);
    local_68 = local_e8;
    local_1b8 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1b0 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_1b8);
    local_60 = local_d8;
    if ((int)local_c8[0] < 5) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_c0[4];
    }
    puVar2 = (undefined8 *)
             gml_Script_outline_bake_sprite_text(param_1,param_2,&local_1c8,7,&local_90);
    if (puVar2 != puVar3) {
      local_1b8 = (undefined8 *)*puVar2;
      uStack_1b0 = (char *)puVar2[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_1b8);
    }
  }
  local_190 = 0x369;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  if ((int)local_c8[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_14010d4d8:
    local_1b8 = (undefined8 *)*puVar3;
    uStack_1b0 = (char *)puVar3[1];
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1b8);
  }
  else {
    puVar3 = (undefined8 *)*local_c0;
    if (puVar3 != &local_188) goto LAB_14010d4d8;
  }
  local_b8 = &local_188;
  if ((int)local_c8[0] < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_14010d52b:
    local_1b8 = (undefined8 *)*puVar3;
    uStack_1b0 = (char *)puVar3[1];
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1b8);
  }
  else {
    puVar3 = (undefined8 *)local_c0[1];
    if (puVar3 != &local_178) goto LAB_14010d52b;
  }
  local_b0 = &local_178;
  if ((int)local_c8[0] < 5) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_c0[4];
    if (puVar3 == &local_168) goto LAB_14010d5aa;
  }
  local_1b8 = (undefined8 *)*puVar3;
  uStack_1b0 = (char *)puVar3[1];
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_1b8);
LAB_14010d5aa:
  local_a8 = &local_168;
  ppuVar11 = &local_b8;
  gml_Script_outline_draw_sprite(param_1,param_2,&local_1c8,3,ppuVar11);
  uVar12 = (undefined4)((ulonglong)ppuVar11 >> 0x20);
  local_190 = 0x36a;
  if ((int)local_c8[0] < 4) {
    pdVar4 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar4 = (double *)local_c0[3];
  }
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar7 = *pdVar4;
  }
  else {
    dVar7 = (double)FUN_140e4b060();
  }
  if ((int)local_c8[0] < 3) {
    pdVar4 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar4 = (double *)local_c0[2];
  }
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar8 = *pdVar4;
  }
  else {
    dVar8 = (double)FUN_140e4b060();
  }
  if ((int)local_c8[0] < 2) {
    pdVar4 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar4 = (double *)local_c0[1];
  }
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar9 = *pdVar4;
  }
  else {
    dVar9 = (double)FUN_140e4b060();
  }
  if (0 < (int)local_c8[0]) {
    pdVar5 = (double *)*local_c0;
  }
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar10 = *pdVar5;
  }
  else {
    dVar10 = (double)FUN_140e4b060(pdVar5);
  }
  FUN_140ec5d30(param_1,(longlong)dVar10,(float)dVar9,(float)dVar8,CONCAT44(uVar12,(float)dVar7));
  local_190 = 0x36b;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c0 = 0;
  uStack_1b0 = "gml_Script_outline_end";
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1b8;
  local_1bc = 5;
  local_1c8 = 0;
  local_1a8 = 0xc5;
  FUN_140ec9dc0();
  DAT_141dc7a50 = local_1b8;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  _eh_vector_destructor_iterator_(&local_188,0x10,0xc,FUN_140041b30);
  if (0 < (int)local_c8[0]) {
    puVar3 = local_c0;
    do {
      puVar2 = (undefined8 *)*puVar3;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar3 = puVar3 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_c0);
  DAT_141dc7a50 = (undefined8 *)local_1a0;
  return param_3;
}

