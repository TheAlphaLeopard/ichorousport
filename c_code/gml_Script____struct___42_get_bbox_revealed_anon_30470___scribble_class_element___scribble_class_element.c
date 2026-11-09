// gml_Script____struct___42_get_bbox_revealed_anon_30470___scribble_class_element___scribble_class_element @ 0x140122e10

undefined8 *
gml_Script____struct___42_get_bbox_revealed_anon_30470___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 local_278;
  char *local_270;
  undefined4 local_268;
  undefined8 local_258;
  byte local_24c;
  undefined8 local_248;
  byte local_23c;
  undefined8 local_238;
  byte local_22c;
  undefined1 local_228 [12];
  byte local_21c;
  undefined1 local_218 [12];
  byte local_20c;
  undefined1 local_208 [12];
  byte local_1fc;
  undefined1 local_1f8 [12];
  byte local_1ec;
  undefined4 local_1e8 [3];
  byte local_1dc;
  undefined4 local_1d8 [3];
  byte local_1cc;
  undefined1 local_1c8 [12];
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
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
  undefined8 local_148;
  undefined4 *local_140;
  undefined4 *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  uint local_f0 [2];
  undefined8 *local_e8;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined4 *local_a0;
  undefined4 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  
  local_270 = "gml_Script_get_bbox@anon@29671@__scribble_class_element@__scribble_class_element";
  local_278 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_278;
  local_268 = 0x399;
  FUN_140041df0(local_f0,param_4,2,param_5);
  _eh_vector_constructor_iterator_(&local_258,0x10,0x11,FUN_1400424d0,FUN_140041b30);
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a05c88);
  local_27c = 0;
  local_288 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_268 = 0x399;
  puVar6 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_f0[0];
  if ((int)local_f0[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_e8;
  }
  iVar1 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_268 = 0x399;
    if ((int)local_f0[0] < 1) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)*local_e8;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = 0;
  }
  if ((int)local_f0[0] < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_e8[1];
  }
  iVar1 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_f0[0] < 2) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)local_e8[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = 0;
  }
  local_268 = 0x39b;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_288 = 0;
  local_280 = 0;
  local_27c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05ff8);
  FUN_140e63610(param_1,param_2,&local_288,0,uVar3,0);
  uVar9 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_268 = 0x39d;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_288 = 0;
  local_280 = 0;
  local_27c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05f58);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05628);
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a059a8);
  local_148 = (**(code **)(*param_1 + 8))(param_1,DAT_141a058d8);
  local_140 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05938);
  local_138 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05588);
  local_130 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05088);
  local_128 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05a08);
  local_120 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05eb8);
  local_118 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05398);
  local_110 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04de8);
  local_108 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04fb8);
  local_100 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05d58);
  local_f8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05478);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_2a8,
                gml_Script____struct___41_get_bbox_revealed_anon_30470___scribble_class_element___scribble_class_element
                ,0);
  if (&local_2a8 != puVar2) {
    local_298 = (undefined4)local_2a8;
    uStack_294 = local_2a8._4_4_;
    uStack_290 = uStack_2a0;
    uStack_28c = uStack_29c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_298);
  }
  FUN_140e60910(1);
  if (puVar2 != &local_258) {
    local_298 = *(undefined4 *)puVar2;
    uStack_294 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_290 = *(undefined4 *)(puVar2 + 1);
    uStack_28c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_298);
  }
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_d8 = &local_258;
  if ((int)local_f0[0] < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_14012326f:
    local_298 = *(undefined4 *)puVar2;
    uStack_294 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_290 = *(undefined4 *)(puVar2 + 1);
    uStack_28c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_298);
  }
  else {
    puVar2 = (undefined8 *)*local_e8;
    if (puVar2 != &local_248) goto LAB_14012326f;
  }
  local_d0 = &local_248;
  if ((int)local_f0[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_e8[1];
    if (puVar2 == &local_238) goto LAB_1401232f1;
  }
  local_298 = *(undefined4 *)puVar2;
  uStack_294 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_290 = *(undefined4 *)(puVar2 + 1);
  uStack_28c = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  FUN_140041b80(&local_238,&local_298);
LAB_1401232f1:
  local_c8 = &local_238;
  if ((int)local_f0[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_e8;
  }
  uStack_29c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_2a0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) == 0) {
    local_2a8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_2a8);
  }
  FUN_1400460e0(&local_2a8,uVar3);
  local_298 = (undefined4)local_2a8;
  uStack_294 = local_2a8._4_4_;
  uStack_290 = uStack_2a0;
  uStack_28c = uStack_29c;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_298);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_c0 = local_228;
  if ((int)local_f0[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_e8[1];
  }
  uStack_29c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_2a0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) == 0) {
    local_2a8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_2a8);
  }
  FUN_1400460e0(&local_2a8,uVar4);
  local_298 = (undefined4)local_2a8;
  uStack_294 = local_2a8._4_4_;
  uStack_290 = uStack_2a0;
  uStack_28c = uStack_29c;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_298);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_b8 = local_218;
  if ((int)local_f0[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_e8;
  }
  uStack_29c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_2a0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) == 0) {
    local_2a8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_2a8);
  }
  FUN_1400460e0(&local_2a8,uVar5);
  local_298 = (undefined4)local_2a8;
  uStack_294 = local_2a8._4_4_;
  uStack_290 = uStack_2a0;
  uStack_28c = uStack_29c;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_298);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_b0 = local_208;
  if ((int)local_f0[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_e8[1];
  }
  uStack_29c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_2a0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) == 0) {
    local_2a8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_2a8);
  }
  FUN_1400460e0(&local_2a8,local_148);
  local_298 = (undefined4)local_2a8;
  uStack_294 = local_2a8._4_4_;
  uStack_290 = uStack_2a0;
  uStack_28c = uStack_29c;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_298);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_a8 = local_1f8;
  if (local_140 != local_1e8) {
    local_298 = *local_140;
    uStack_294 = local_140[1];
    uStack_290 = local_140[2];
    uStack_28c = local_140[3];
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_298);
  }
  local_a0 = local_1e8;
  if (local_138 != local_1d8) {
    local_298 = *local_138;
    uStack_294 = local_138[1];
    uStack_290 = local_138[2];
    uStack_28c = local_138[3];
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_298);
  }
  if ((int)local_f0[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_e8;
  }
  uStack_29c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_2a0 = *(undefined4 *)(puVar2 + 1);
  local_98 = local_1d8;
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) == 0) {
    local_2a8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_2a8);
  }
  FUN_1400460e0(&local_2a8,local_130);
  local_298 = (undefined4)local_2a8;
  uStack_294 = local_2a8._4_4_;
  uStack_290 = uStack_2a0;
  uStack_28c = uStack_29c;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_298);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_90 = local_1c8;
  if ((int)local_f0[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_e8[1];
  }
  uStack_29c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_2a0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) == 0) {
    local_2a8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_2a8);
  }
  FUN_1400460e0(&local_2a8,local_128);
  local_298 = (undefined4)local_2a8;
  uStack_294 = local_2a8._4_4_;
  uStack_290 = uStack_2a0;
  uStack_28c = uStack_29c;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_298);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_88 = local_1b8;
  if ((int)local_f0[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_e8;
  }
  uStack_29c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_2a0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) == 0) {
    local_2a8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_2a8);
  }
  FUN_1400460e0(&local_2a8,local_120);
  local_298 = (undefined4)local_2a8;
  uStack_294 = local_2a8._4_4_;
  uStack_290 = uStack_2a0;
  uStack_28c = uStack_29c;
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_298);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_80 = local_1a8;
  if ((int)local_f0[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_e8[1];
  }
  uStack_29c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_2a0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) == 0) {
    local_2a8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_2a8);
  }
  FUN_1400460e0(&local_2a8,local_118);
  local_298 = (undefined4)local_2a8;
  uStack_294 = local_2a8._4_4_;
  uStack_290 = uStack_2a0;
  uStack_28c = uStack_29c;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_298);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_78 = local_198;
  if ((int)local_f0[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_e8;
  }
  uStack_29c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_2a0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) == 0) {
    local_2a8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_2a8);
  }
  FUN_1400460e0(&local_2a8,local_110);
  local_298 = (undefined4)local_2a8;
  uStack_294 = local_2a8._4_4_;
  uStack_290 = uStack_2a0;
  uStack_28c = uStack_29c;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_298);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_70 = local_188;
  if ((int)local_f0[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_e8[1];
  }
  uStack_29c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_2a0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) == 0) {
    local_2a8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_2a8);
  }
  FUN_1400460e0(&local_2a8,local_108);
  local_298 = (undefined4)local_2a8;
  uStack_294 = local_2a8._4_4_;
  uStack_290 = uStack_2a0;
  uStack_28c = uStack_29c;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_298);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_68 = local_178;
  if ((int)local_f0[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_e8;
  }
  uStack_29c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_2a0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) == 0) {
    local_2a8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_2a8);
  }
  FUN_1400460e0(&local_2a8,local_100);
  local_298 = (undefined4)local_2a8;
  uStack_294 = local_2a8._4_4_;
  uStack_290 = uStack_2a0;
  uStack_28c = uStack_29c;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_298);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_60 = local_168;
  if (1 < (int)local_f0[0]) {
    puVar6 = (undefined8 *)local_e8[1];
  }
  uStack_29c = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_2a0 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) == 0) {
    local_2a8 = *puVar6;
  }
  else {
    FUN_1400419b0(&local_2a8,puVar6);
  }
  FUN_1400460e0(&local_2a8,local_f8);
  local_298 = (undefined4)local_2a8;
  uStack_294 = local_2a8._4_4_;
  uStack_290 = uStack_2a0;
  uStack_28c = uStack_29c;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_298);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_58 = local_158;
  puVar6 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_288,0x11,CONCAT44(uVar9,DAT_1419fd6d8),&local_d8);
  if (puVar6 != param_3) {
    local_298 = *(undefined4 *)puVar6;
    uStack_294 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_290 = *(undefined4 *)(puVar6 + 1);
    uStack_28c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_298);
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  _eh_vector_destructor_iterator_(&local_258,0x10,0x11,FUN_140041b30);
  if (0 < (int)local_f0[0]) {
    puVar6 = local_e8;
    do {
      puVar2 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_e8);
  DAT_141dc7a50 = (undefined8 *)local_278;
  return param_3;
}

