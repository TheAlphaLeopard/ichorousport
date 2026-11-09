// gml_Script_outline_draw_surface_ext @ 0x14010dfa0

undefined8 *
gml_Script_outline_draw_surface_ext
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  code *pcVar9;
  ulonglong uVar10;
  undefined4 uVar12;
  undefined8 uVar11;
  ulonglong in_stack_fffffffffffffd40;
  undefined8 local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined8 local_288;
  char *local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined4 local_264;
  undefined8 local_260;
  undefined4 local_254;
  undefined8 local_250;
  undefined4 local_244;
  undefined8 local_240;
  undefined4 local_234;
  undefined8 local_230;
  undefined4 local_224;
  undefined8 local_220;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_280 = "gml_Script_outline_set_surface";
  local_288 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_288;
  local_278 = 0x386;
  bVar2 = false;
  bVar1 = true;
  FUN_140041df0(local_48,param_4,2,param_5);
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_d8,0x10,9,FUN_1400424d0,FUN_140041b30);
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_1d4 = 0xffffff;
  local_1e0 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_1e4 = 0xffffff;
  local_1f0 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  local_1f4 = 0xffffff;
  local_200 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  uStack_18c = 0xffffff;
  local_198 = 0;
  local_214 = 0xffffff;
  local_220 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  local_224 = 0xffffff;
  local_230 = 0;
  uStack_1ac = 0xffffff;
  local_1b8 = 0;
  local_234 = 0xffffff;
  local_240 = 0;
  local_254 = 0xffffff;
  local_260 = 0;
  local_244 = 0xffffff;
  local_250 = 0;
  local_28c = 0;
  local_298 = 0;
  local_264 = 0;
  local_270 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_278 = 0x386;
  puVar8 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_40[1];
  }
  iVar4 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_278 = 0x386;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    local_2a8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_2a0 = DAT_1419df7b8;
    uStack_29c = DAT_1419df7bc;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_2a8);
    local_128 = &local_b8;
    local_2a8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_2a0 = DAT_1419df7b8;
    uStack_29c = DAT_1419df7bc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_2a8);
    local_120 = (undefined8 *)local_a8;
    local_2a8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_2a0 = DAT_1419df7b8;
    uStack_29c = DAT_1419df7bc;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_2a8);
    local_118 = (undefined8 *)local_98;
    local_2a8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_2a0 = DAT_1419df7b8;
    uStack_29c = DAT_1419df7bc;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_2a8);
    local_110 = (undefined8 *)local_88;
    local_2a8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_2a0 = DAT_1419df7b8;
    uStack_29c = DAT_1419df7bc;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_2a8);
    local_108 = (undefined8 *)local_78;
    local_2a8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_2a0 = DAT_1419df7b8;
    uStack_29c = DAT_1419df7bc;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_2a8);
    local_100 = (undefined8 *)local_68;
    local_2a8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_2a0 = DAT_1419df7b8;
    uStack_29c = DAT_1419df7bc;
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    FUN_140041b80(local_58,&local_2a8);
    local_f8 = (undefined8 *)local_58;
    if ((int)local_48[0] < 2) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_40[1];
    }
    pcVar9 = (code *)&local_128;
    puVar5 = (undefined8 *)gml_Script_outline_bake_sprite_text(param_1,param_2,&local_298,7,pcVar9);
    if (puVar5 != puVar6) {
      local_2a8 = *puVar5;
      uStack_2a0 = *(undefined4 *)(puVar5 + 1);
      uStack_29c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_2a8);
    }
  }
  local_278 = 0x387;
  if ((int)local_48[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_40[1];
  }
  in_stack_fffffffffffffd40 = in_stack_fffffffffffffd40 & 0xffffffffffffff00;
  uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  FUN_140e87440(puVar6,DAT_141a044a8,0x80000000,&local_158,uVar10,in_stack_fffffffffffffd40);
  local_2a8 = local_158;
  uStack_2a0 = uStack_150;
  uStack_29c = uStack_14c;
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  FUN_140041b80(&local_1e0,&local_2a8);
  local_278 = 0x388;
  if ((int)local_48[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_40[1];
  }
  in_stack_fffffffffffffd40 = in_stack_fffffffffffffd40 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(puVar6,DAT_141a04948,0x80000000,&local_168,uVar10,in_stack_fffffffffffffd40);
  local_2a8 = local_168;
  uStack_2a0 = uStack_160;
  uStack_29c = uStack_15c;
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  FUN_140041b80(&local_1f0,&local_2a8);
  local_278 = 0x389;
  if ((int)local_48[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_40[1];
  }
  in_stack_fffffffffffffd40 = in_stack_fffffffffffffd40 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(puVar6,DAT_141a04988,0x80000000,&local_178,uVar10,in_stack_fffffffffffffd40);
  local_2a8 = local_178;
  uStack_2a0 = uStack_170;
  uStack_29c = uStack_16c;
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  FUN_140041b80(&local_200,&local_2a8);
  local_278 = 0x38a;
  if ((int)local_48[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_40[1];
  }
  in_stack_fffffffffffffd40 = in_stack_fffffffffffffd40 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(puVar6,DAT_141a046a8,0x80000000,&local_188,uVar10,in_stack_fffffffffffffd40);
  local_2a8 = local_188;
  uStack_2a0 = uStack_180;
  uStack_29c = uStack_17c;
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  FUN_140041b80(&local_210,&local_2a8);
  local_278 = 0x38b;
  if ((int)local_48[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_40[1];
  }
  in_stack_fffffffffffffd40 = in_stack_fffffffffffffd40 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(puVar6,DAT_141a04888,0x80000000,&local_198,uVar10,in_stack_fffffffffffffd40);
  local_2a8 = local_198;
  uStack_2a0 = uStack_190;
  uStack_29c = uStack_18c;
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  FUN_140041b80(&local_220,&local_2a8);
  local_278 = 0x38c;
  if ((int)local_48[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_40[1];
  }
  in_stack_fffffffffffffd40 = in_stack_fffffffffffffd40 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(puVar6,DAT_141a047a8,0x80000000,&local_1a8,uVar10,in_stack_fffffffffffffd40);
  local_2a8 = local_1a8;
  uStack_2a0 = uStack_1a0;
  uStack_29c = uStack_19c;
  if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_230);
  }
  FUN_140041b80(&local_230,&local_2a8);
  local_278 = 0x38d;
  if ((int)local_48[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_40[1];
  }
  FUN_140e87440(puVar6,DAT_141a045c8,0x80000000,&local_1b8,uVar10 & 0xffffffffffffff00,
                in_stack_fffffffffffffd40 & 0xffffffffffffff00);
  local_2a8 = local_1b8;
  uStack_2a0 = uStack_1b0;
  uStack_29c = uStack_1ac;
  if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_240);
  }
  FUN_140041b80(&local_240,&local_2a8);
  local_278 = 0x38f;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  gml_Script___outline_set_uniforms(param_1,param_2,&local_298,0,0);
  local_278 = 0x390;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  uVar12 = 0;
  gml_Script____struct___37___outline_surface_create___scr_outline(param_1,param_2,&local_298,0,0);
  local_278 = 0x391;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  if ((int)local_48[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_40;
    if (puVar6 == &local_d8) goto LAB_14010e82b;
  }
  local_2a8 = *puVar6;
  uStack_2a0 = *(undefined4 *)(puVar6 + 1);
  uStack_29c = *(undefined4 *)((longlong)puVar6 + 0xc);
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_2a8);
LAB_14010e82b:
  local_138 = &local_d8;
  uVar11 = CONCAT44(uVar12,DAT_141a04b28);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_298,1,uVar11,&local_138);
  uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
  if (puVar6 != &local_260) {
    local_2a8 = *puVar6;
    uStack_2a0 = *(undefined4 *)(puVar6 + 1);
    uStack_29c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_260);
    }
    FUN_140041b80(&local_260,&local_2a8);
  }
  local_278 = 0x392;
  cVar3 = FUN_140e491e0(&local_240);
  if (cVar3 == '\0') {
    puVar6 = (undefined8 *)
             FUN_140e8da20(&local_148,param_1,4,&DAT_141dc6190,&DAT_141dc6190,&DAT_1419e1d20,
                           &DAT_1419e1d20);
    local_1c4 = *(undefined4 *)((longlong)puVar6 + 0xc);
    local_1c8 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_1d0 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_1d0,puVar6);
    }
    puVar6 = &local_1d0;
  }
  else {
    if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_270);
    }
    local_270 = 0;
    local_268 = 0;
    local_264 = 5;
    local_130 = &local_260;
    puVar6 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_270,1,CONCAT44(uVar12,DAT_141a04a88),&local_130);
    uStack_29c = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_2a0 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_2a8 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_2a8,puVar6);
    }
    puVar6 = &local_2a8;
    bVar2 = true;
    bVar1 = false;
  }
  local_e8 = *(undefined4 *)puVar6;
  uStack_e4 = *(undefined4 *)((longlong)puVar6 + 4);
  uStack_e0 = *(undefined4 *)(puVar6 + 1);
  uStack_dc = *(undefined4 *)((longlong)puVar6 + 0xc);
  if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_250);
  }
  FUN_140041b80(&local_250,&local_e8);
  if ((bVar1) && ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1d0);
  }
  if ((bVar2) && ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_2a8);
  }
  local_278 = 0x393;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  local_138 = &local_260;
  local_130 = &local_250;
  local_128 = &local_1e0;
  local_120 = &local_1f0;
  local_118 = &local_200;
  local_110 = &local_220;
  local_108 = &local_230;
  local_100 = &local_210;
  local_f8 = &local_250;
  gml_Script____struct___38___outline_surface_create___scr_outline
            (param_1,param_2,&local_298,9,&local_138);
  local_278 = 0x394;
  if (0 < (int)local_48[0]) {
    puVar8 = (undefined8 *)*local_40;
  }
  if (puVar8 != param_3) {
    local_e8 = *(undefined4 *)puVar8;
    uStack_e4 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_e0 = *(undefined4 *)(puVar8 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_e8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_270);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_250);
  }
  if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_260);
  }
  if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_240);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_230);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,9,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar8 = local_40;
    do {
      puVar6 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_288;
  return param_3;
}

