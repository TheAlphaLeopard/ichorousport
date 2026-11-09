// gml_Script_draw_sprite_hires @ 0x14027bc30

undefined8 *
gml_Script_draw_sprite_hires
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  code *pcVar11;
  ulonglong uVar12;
  undefined4 uVar14;
  undefined8 uVar13;
  ulonglong in_stack_fffffffffffffd70;
  undefined8 local_288;
  undefined4 uStack_280;
  uint uStack_27c;
  longlong local_278;
  undefined4 uStack_270;
  uint uStack_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  longlong local_238;
  undefined4 local_230;
  uint local_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  char *local_210;
  undefined4 local_208;
  longlong local_1f8;
  byte local_1ec;
  longlong local_1e8;
  byte local_1dc;
  longlong local_1d8;
  byte local_1cc;
  longlong local_1c8;
  byte local_1bc;
  longlong local_1b8;
  byte local_1ac;
  longlong local_1a8;
  byte local_19c;
  longlong local_198;
  byte local_18c;
  longlong local_188;
  byte local_17c;
  longlong local_178;
  byte local_16c;
  longlong local_168;
  byte local_15c;
  longlong local_158;
  byte local_14c;
  longlong local_148;
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined4 local_f8 [3];
  byte local_ec;
  uint local_e8 [2];
  undefined8 *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined4 *local_58;
  
  local_210 = "gml_Script_draw_text_hires";
  local_218 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_218;
  local_208 = 0x12;
  FUN_140041df0(local_e8,param_4,0xe,param_5);
  pcVar11 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_1f8,0x10,0x11,FUN_1400424d0,FUN_140041b30);
  uStack_21c = 0xffffff;
  local_228 = 0;
  plVar3 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57900);
  local_22c = 0xffffff;
  local_238 = 0;
  local_24c = 0;
  local_258 = 0;
  local_25c = 0;
  local_268 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_208 = 0x12;
  puVar6 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_e8[0];
  if ((int)local_e8[0] < 4) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_e0[3];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_208 = 0x12;
    if ((int)local_e8[0] < 4) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_e0[3];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = &DAT_bff0000000000000;
  }
  if ((int)local_e8[0] < 5) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_e0[4];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar2 == 0) && (4 < (int)local_e8[0])) &&
     (puVar4 = (undefined8 *)local_e0[4], puVar4 != &DAT_1419df7b0)) {
    local_288 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_280 = DAT_1419df7b8;
    uStack_27c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_288);
  }
  if ((int)local_e8[0] < 6) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_e0[5];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_e8[0] < 6) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_e0[5];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0;
  }
  if ((int)local_e8[0] < 7) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_e0[6];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_e8[0] < 7) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_e0[6];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0;
  }
  if ((int)local_e8[0] < 8) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_e0[7];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_e8[0] < 8) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_e0[7];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0x416fffffe0000000;
  }
  if ((int)local_e8[0] < 9) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_e0[8];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_e8[0] < 9) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_e0[8];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0x3ff0000000000000;
  }
  if ((int)local_e8[0] < 10) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_e0[9];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_e8[0] < 10) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_e0[9];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0x3ff0000000000000;
  }
  if ((int)local_e8[0] < 0xb) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_e0[10];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_e8[0] < 0xb) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_e0[10];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0;
  }
  if ((int)local_e8[0] < 0xc) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_e0[0xb];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar2 == 0) && (0xb < (int)local_e8[0])) &&
     (puVar4 = (undefined8 *)local_e0[0xb], puVar4 != &DAT_1419df7b0)) {
    local_288 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_280 = DAT_1419df7b8;
    uStack_27c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_288);
  }
  if ((int)local_e8[0] < 0xd) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_e0[0xc];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_e8[0] < 0xd) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_e0[0xc];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = &DAT_bff0000000000000;
  }
  if ((int)local_e8[0] < 0xe) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_e0[0xd];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_e8[0] < 0xe) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_e0[0xd];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0;
  }
  local_208 = 0x14;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  uStack_27c = 0xf;
  local_288 = 0x100000000000058;
  uVar12 = (ulonglong)pcVar11 & 0xffffffffffffff00;
  FUN_140e87440(&local_288,DAT_141a57880,0x80000000,&local_228,uVar12,
                in_stack_fffffffffffffd70 & 0xffffffffffffff00);
  uVar14 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_278,gml_Script____struct___93_draw_sprite_hires_draw_text_hires,0);
  if (&local_278 != plVar3) {
    local_288 = local_278;
    uStack_280 = uStack_270;
    uStack_27c = uStack_26c;
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar3);
    }
    FUN_140041b80(plVar3,&local_288);
  }
  FUN_140e60910(1);
  if (plVar3 != &local_1f8) {
    local_288 = *plVar3;
    uStack_280 = (undefined4)plVar3[1];
    uStack_27c = *(uint *)((longlong)plVar3 + 0xc);
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_288);
  }
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_d8 = &local_1f8;
  if ((int)local_e8[0] < 1) {
    plVar3 = &DAT_1419df7b0;
LAB_14027c2ed:
    local_288 = *plVar3;
    uStack_280 = (undefined4)plVar3[1];
    uStack_27c = *(uint *)((longlong)plVar3 + 0xc);
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_288);
  }
  else {
    plVar3 = (longlong *)*local_e0;
    if (plVar3 != &local_1e8) goto LAB_14027c2ed;
  }
  local_d0 = &local_1e8;
  if ((int)local_e8[0] < 2) {
    plVar3 = &DAT_1419df7b0;
LAB_14027c33f:
    local_288 = *plVar3;
    uStack_280 = (undefined4)plVar3[1];
    uStack_27c = *(uint *)((longlong)plVar3 + 0xc);
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_288);
  }
  else {
    plVar3 = (longlong *)local_e0[1];
    if (plVar3 != &local_1d8) goto LAB_14027c33f;
  }
  local_c8 = &local_1d8;
  if ((int)local_e8[0] < 3) {
    plVar3 = &DAT_1419df7b0;
LAB_14027c391:
    local_288 = *plVar3;
    uStack_280 = (undefined4)plVar3[1];
    uStack_27c = *(uint *)((longlong)plVar3 + 0xc);
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_288);
  }
  else {
    plVar3 = (longlong *)local_e0[2];
    if (plVar3 != &local_1c8) goto LAB_14027c391;
  }
  local_c0 = &local_1c8;
  if ((int)local_e8[0] < 4) {
    plVar3 = &DAT_1419df7b0;
LAB_14027c3e3:
    local_288 = *plVar3;
    uStack_280 = (undefined4)plVar3[1];
    uStack_27c = *(uint *)((longlong)plVar3 + 0xc);
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_288);
  }
  else {
    plVar3 = (longlong *)local_e0[3];
    if (plVar3 != &local_1b8) goto LAB_14027c3e3;
  }
  local_b8 = &local_1b8;
  if ((int)local_e8[0] < 5) {
    plVar3 = &DAT_1419df7b0;
LAB_14027c435:
    local_288 = *plVar3;
    uStack_280 = (undefined4)plVar3[1];
    uStack_27c = *(uint *)((longlong)plVar3 + 0xc);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_288);
  }
  else {
    plVar3 = (longlong *)local_e0[4];
    if (plVar3 != &local_1a8) goto LAB_14027c435;
  }
  local_b0 = &local_1a8;
  if ((int)local_e8[0] < 6) {
    plVar3 = &DAT_1419df7b0;
LAB_14027c487:
    local_288 = *plVar3;
    uStack_280 = (undefined4)plVar3[1];
    uStack_27c = *(uint *)((longlong)plVar3 + 0xc);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_288);
  }
  else {
    plVar3 = (longlong *)local_e0[5];
    if (plVar3 != &local_198) goto LAB_14027c487;
  }
  local_a8 = &local_198;
  if ((int)local_e8[0] < 7) {
    plVar3 = &DAT_1419df7b0;
LAB_14027c4d9:
    local_288 = *plVar3;
    uStack_280 = (undefined4)plVar3[1];
    uStack_27c = *(uint *)((longlong)plVar3 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_288);
  }
  else {
    plVar3 = (longlong *)local_e0[6];
    if (plVar3 != &local_188) goto LAB_14027c4d9;
  }
  local_a0 = &local_188;
  if ((int)local_e8[0] < 8) {
    plVar3 = &DAT_1419df7b0;
LAB_14027c52b:
    local_288 = *plVar3;
    uStack_280 = (undefined4)plVar3[1];
    uStack_27c = *(uint *)((longlong)plVar3 + 0xc);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_288);
  }
  else {
    plVar3 = (longlong *)local_e0[7];
    if (plVar3 != &local_178) goto LAB_14027c52b;
  }
  local_98 = &local_178;
  if ((int)local_e8[0] < 9) {
    plVar3 = &DAT_1419df7b0;
LAB_14027c57d:
    local_288 = *plVar3;
    uStack_280 = (undefined4)plVar3[1];
    uStack_27c = *(uint *)((longlong)plVar3 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_288);
  }
  else {
    plVar3 = (longlong *)local_e0[8];
    if (plVar3 != &local_168) goto LAB_14027c57d;
  }
  local_90 = &local_168;
  if ((int)local_e8[0] < 10) {
    plVar3 = &DAT_1419df7b0;
LAB_14027c5cf:
    local_288 = *plVar3;
    uStack_280 = (undefined4)plVar3[1];
    uStack_27c = *(uint *)((longlong)plVar3 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_288);
  }
  else {
    plVar3 = (longlong *)local_e0[9];
    if (plVar3 != &local_158) goto LAB_14027c5cf;
  }
  local_88 = &local_158;
  if ((int)local_e8[0] < 0xb) {
    plVar3 = &DAT_1419df7b0;
LAB_14027c621:
    local_288 = *plVar3;
    uStack_280 = (undefined4)plVar3[1];
    uStack_27c = *(uint *)((longlong)plVar3 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_288);
  }
  else {
    plVar3 = (longlong *)local_e0[10];
    if (plVar3 != &local_148) goto LAB_14027c621;
  }
  local_80 = &local_148;
  if ((int)local_e8[0] < 0xc) {
    plVar3 = &DAT_1419df7b0;
LAB_14027c673:
    local_288 = *plVar3;
    uStack_280 = (undefined4)plVar3[1];
    uStack_27c = *(uint *)((longlong)plVar3 + 0xc);
    FUN_140041b80(&local_238,&local_288);
    lVar9 = local_238;
    uVar8 = local_22c;
  }
  else {
    plVar3 = (longlong *)local_e0[0xb];
    lVar9 = 0;
    uVar8 = 0xffffff;
    if (plVar3 != &local_238) goto LAB_14027c673;
  }
  if ((uVar8 & 0xffffff) == 3) {
    bVar10 = lVar9 == 0;
  }
  else {
    bVar10 = (uVar8 & 0xffffff) == 5;
  }
  if (bVar10) {
    if ((int)local_e8[0] < 10) {
      plVar3 = &DAT_1419df7b0;
    }
    else {
      plVar3 = (longlong *)local_e0[9];
    }
    uStack_27c = *(uint *)((longlong)plVar3 + 0xc);
    uStack_280 = (int)plVar3[1];
    if ((1 << ((byte)*(uint *)((longlong)plVar3 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_288 = *plVar3;
    }
    else {
      FUN_1400419b0(&local_288);
    }
    plVar3 = &local_288;
    bVar1 = true;
    bVar10 = false;
  }
  else {
    uStack_26c = uVar8;
    uStack_270 = local_230;
    if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) == 0) {
      local_278 = lVar9;
    }
    else {
      FUN_1400419b0(&local_278,&local_238);
    }
    plVar3 = &local_278;
    bVar1 = false;
    bVar10 = true;
  }
  local_248 = (undefined4)*plVar3;
  uStack_244 = *(undefined4 *)((longlong)plVar3 + 4);
  uStack_240 = (undefined4)plVar3[1];
  uStack_23c = *(undefined4 *)((longlong)plVar3 + 0xc);
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_248);
  if ((bVar10) && ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_278);
  }
  if ((bVar1) && ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_288);
  }
  local_78 = local_138;
  if ((int)local_e8[0] < 0xd) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_e0[0xc];
    if (puVar4 == &local_128) goto LAB_14027c823;
  }
  local_248 = *(undefined4 *)puVar4;
  uStack_244 = *(undefined4 *)((longlong)puVar4 + 4);
  uStack_240 = *(undefined4 *)(puVar4 + 1);
  uStack_23c = *(undefined4 *)((longlong)puVar4 + 0xc);
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_248);
LAB_14027c823:
  local_70 = &local_128;
  if (((int)local_e8[0] < 0xe) || (puVar6 = (undefined8 *)local_e0[0xd], puVar6 != &local_118)) {
    local_248 = *(undefined4 *)puVar6;
    uStack_244 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_240 = *(undefined4 *)(puVar6 + 1);
    uStack_23c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_248);
  }
  local_68 = &local_118;
  local_248 = (undefined4)local_228;
  uStack_244 = local_228._4_4_;
  uStack_240 = uStack_220;
  uStack_23c = uStack_21c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_248);
  local_60 = local_108;
  uVar13 = CONCAT44(uVar14,DAT_1419fd6d8);
  puVar5 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_268,0xf,uVar13,&local_d8);
  uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
  if (puVar5 != local_f8) {
    local_248 = *puVar5;
    uStack_244 = puVar5[1];
    uStack_240 = puVar5[2];
    uStack_23c = puVar5[3];
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_248);
  }
  local_58 = local_f8;
  FUN_140e634e0(param_1,param_2,&local_258,2,CONCAT44(uVar14,DAT_1419fe568),&local_60);
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  _eh_vector_destructor_iterator_(&local_1f8,0x10,0x11,FUN_140041b30);
  if (0 < (int)local_e8[0]) {
    puVar6 = local_e0;
    do {
      puVar4 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_e0);
  DAT_141dc7a50 = (undefined8 *)local_218;
  return param_3;
}

