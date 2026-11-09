// gml_Script_outline_draw_surface @ 0x14010d7d0

undefined8 *
gml_Script_outline_draw_surface
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  double *pdVar5;
  double *pdVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 **ppuVar16;
  undefined4 uVar17;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  undefined8 local_260;
  char *local_258;
  undefined4 local_250;
  uint local_248 [2];
  undefined8 *local_240;
  undefined8 local_238;
  byte local_22c;
  undefined8 local_228;
  byte local_21c;
  undefined8 local_218;
  byte local_20c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  
  local_258 = "gml_Script_outline_draw_sprite_ext";
  local_260 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_260;
  local_250 = 0x379;
  FUN_140041df0(local_248,param_4,10,param_5);
  _eh_vector_constructor_iterator_(&local_238,0x10,0x11,FUN_1400424d0,FUN_140041b30);
  local_27c = 0;
  local_288 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_250 = 0x379;
  pdVar6 = (double *)&DAT_1419df7b0;
  uVar7 = (ulonglong)local_248[0];
  if ((int)local_248[0] < 10) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_240[9];
  }
  iVar1 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_250 = 0x379;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    local_278 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_270 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_278);
    local_d8 = local_198;
    local_278 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_270 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_278);
    local_d0 = local_188;
    local_278 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_270 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_278);
    local_c8 = local_178;
    local_278 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_270 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_278);
    local_c0 = local_168;
    local_278 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_270 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_278);
    local_b8 = local_158;
    local_278 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_270 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_278);
    local_b0 = local_148;
    local_278 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_270 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_278);
    local_a8 = local_138;
    if ((int)local_248[0] < 10) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_240[9];
    }
    puVar3 = (undefined8 *)
             gml_Script_outline_bake_sprite_text(param_1,param_2,&local_288,7,&local_d8);
    if (puVar3 != puVar4) {
      local_278 = (undefined8 *)*puVar3;
      uStack_270 = (char *)puVar3[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_278);
    }
  }
  local_250 = 0x37a;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_288 = 0;
  local_280 = 0;
  local_27c = 5;
  if ((int)local_248[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_14010dbab:
    local_278 = (undefined8 *)*puVar4;
    uStack_270 = (char *)puVar4[1];
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_278);
  }
  else {
    puVar4 = (undefined8 *)*local_240;
    if (puVar4 != &local_238) goto LAB_14010dbab;
  }
  local_128 = &local_238;
  if ((int)local_248[0] < 2) {
    puVar4 = &DAT_1419df7b0;
LAB_14010dbfd:
    local_278 = (undefined8 *)*puVar4;
    uStack_270 = (char *)puVar4[1];
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_278);
  }
  else {
    puVar4 = (undefined8 *)local_240[1];
    if (puVar4 != &local_228) goto LAB_14010dbfd;
  }
  local_120 = &local_228;
  if ((int)local_248[0] < 10) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_240[9];
    if (puVar4 == &local_218) goto LAB_14010dc7f;
  }
  local_278 = (undefined8 *)*puVar4;
  uStack_270 = (char *)puVar4[1];
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_278);
LAB_14010dc7f:
  local_118 = &local_218;
  ppuVar16 = &local_128;
  gml_Script_outline_draw_sprite(param_1,param_2,&local_288,3,ppuVar16);
  uVar17 = (undefined4)((ulonglong)ppuVar16 >> 0x20);
  local_250 = 0x37b;
  if ((int)local_248[0] < 9) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)local_240[8];
  }
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar8 = *pdVar5;
  }
  else {
    dVar8 = (double)FUN_140e4b060();
  }
  if ((int)local_248[0] < 8) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_240[7];
  }
  uVar2 = FUN_140e4a8b0(puVar4);
  if ((int)local_248[0] < 7) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)local_240[6];
  }
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar9 = *pdVar5;
  }
  else {
    dVar9 = (double)FUN_140e4b060();
  }
  if ((int)local_248[0] < 6) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)local_240[5];
  }
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar10 = *pdVar5;
  }
  else {
    dVar10 = (double)FUN_140e4b060();
  }
  if ((int)local_248[0] < 5) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)local_240[4];
  }
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar11 = *pdVar5;
  }
  else {
    dVar11 = (double)FUN_140e4b060();
  }
  if ((int)local_248[0] < 4) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)local_240[3];
  }
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar12 = *pdVar5;
  }
  else {
    dVar12 = (double)FUN_140e4b060();
  }
  if ((int)local_248[0] < 3) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)local_240[2];
  }
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar13 = *pdVar5;
  }
  else {
    dVar13 = (double)FUN_140e4b060();
  }
  if ((int)local_248[0] < 2) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)local_240[1];
  }
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar14 = *pdVar5;
  }
  else {
    dVar14 = (double)FUN_140e4b060();
  }
  if (0 < (int)local_248[0]) {
    pdVar6 = (double *)*local_240;
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar15 = *pdVar6;
  }
  else {
    dVar15 = (double)FUN_140e4b060(pdVar6);
  }
  FUN_140ec5dd0(param_1,(longlong)dVar15,(float)dVar14,(float)dVar13,CONCAT44(uVar17,(float)dVar12),
                (float)dVar11,(float)dVar10,(float)dVar9,uVar2,(float)dVar8);
  local_250 = 0x37c;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_280 = 0;
  uStack_270 = "gml_Script_outline_end";
  local_278 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_278;
  local_27c = 5;
  local_288 = 0;
  local_268 = 0xc5;
  FUN_140ec9dc0();
  DAT_141dc7a50 = local_278;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  _eh_vector_destructor_iterator_(&local_238,0x10,0x11,FUN_140041b30);
  if (0 < (int)local_248[0]) {
    puVar4 = local_240;
    do {
      puVar3 = (undefined8 *)*puVar4;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar4 = puVar4 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_240);
  DAT_141dc7a50 = (undefined8 *)local_260;
  return param_3;
}

