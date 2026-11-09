// gml_Script_outline_draw_sprite @ 0x140109d40

undefined8 *
gml_Script_outline_draw_sprite
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,uint param_4,
          undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  double *pdVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  double dVar10;
  undefined8 local_res8;
  undefined8 local_res10;
  uint local_res18;
  uint local_res20 [2];
  code *pcVar11;
  ulonglong uVar12;
  ulonglong in_stack_fffffffffffffcd0;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined8 local_2f8;
  char *local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d4;
  undefined8 local_2d0;
  undefined4 local_2c4;
  undefined8 local_2c0;
  undefined4 local_2b4;
  undefined8 local_2b0;
  undefined4 local_2a4;
  undefined8 local_2a0;
  undefined4 local_294;
  undefined8 local_290;
  undefined4 local_284;
  undefined8 local_280;
  undefined4 local_274;
  undefined8 local_270;
  undefined4 local_264;
  undefined8 local_260;
  undefined4 local_254;
  undefined8 local_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined1 *local_150;
  undefined1 local_148 [48];
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  uint local_a8 [2];
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  uint *local_80;
  undefined8 **local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  local_res18 = 0;
  local_2f0 = "gml_Script_outline_set_sprite";
  local_2f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2f8;
  local_2e8 = 0x317;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res20[0] = param_4;
  FUN_140041df0(local_a8,param_4,3,param_5);
  uVar8 = (ulonglong)local_a8[0];
  local_res20[0] = local_a8[0];
  param_5 = local_a0;
  pcVar11 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_148,0x10,10,FUN_1400424d0,FUN_140041b30);
  uStack_1cc = 0xffffff;
  local_1d8 = 0;
  local_254 = 0xffffff;
  local_260 = 0;
  uStack_1dc = 0xffffff;
  local_1e8 = 0;
  local_264 = 0xffffff;
  local_270 = 0;
  uStack_1ec = 0xffffff;
  local_1f8 = 0;
  local_274 = 0xffffff;
  local_280 = 0;
  uStack_1fc = 0xffffff;
  local_208 = 0;
  local_284 = 0xffffff;
  local_290 = 0;
  uStack_20c = 0xffffff;
  local_218 = 0;
  local_294 = 0xffffff;
  local_2a0 = 0;
  uStack_21c = 0xffffff;
  local_228 = 0;
  local_2a4 = 0xffffff;
  local_2b0 = 0;
  uStack_22c = 0xffffff;
  local_238 = 0;
  local_2b4 = 0xffffff;
  local_2c0 = 0;
  local_2c4 = 0xffffff;
  local_2d0 = 0;
  local_2d4 = 0xffffff;
  local_2e0 = 0;
  local_2fc = 0;
  local_308 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2e8 = 0x317;
  puVar9 = &DAT_1419df7b0;
  if ((int)local_res20[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[2];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_2e8 = 0x317;
    if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    local_308 = 0;
    local_300 = 0;
    local_2fc = 5;
    local_318 = (undefined4)DAT_1419df7b0;
    uStack_314 = DAT_1419df7b0._4_4_;
    uStack_310 = DAT_1419df7b8;
    uStack_30c = DAT_1419df7bc;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_318);
    local_180 = &local_118;
    local_318 = (undefined4)DAT_1419df7b0;
    uStack_314 = DAT_1419df7b0._4_4_;
    uStack_310 = DAT_1419df7b8;
    uStack_30c = DAT_1419df7bc;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_318);
    local_178 = (undefined8 *)local_108;
    local_318 = (undefined4)DAT_1419df7b0;
    uStack_314 = DAT_1419df7b0._4_4_;
    uStack_310 = DAT_1419df7b8;
    uStack_30c = DAT_1419df7bc;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_318);
    local_170 = (undefined8 *)local_f8;
    local_318 = (undefined4)DAT_1419df7b0;
    uStack_314 = DAT_1419df7b0._4_4_;
    uStack_310 = DAT_1419df7b8;
    uStack_30c = DAT_1419df7bc;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_318);
    local_168 = (undefined8 *)local_e8;
    local_318 = (undefined4)DAT_1419df7b0;
    uStack_314 = DAT_1419df7b0._4_4_;
    uStack_310 = DAT_1419df7b8;
    uStack_30c = DAT_1419df7bc;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_318);
    local_160 = (undefined8 *)local_d8;
    local_318 = (undefined4)DAT_1419df7b0;
    uStack_314 = DAT_1419df7b0._4_4_;
    uStack_310 = DAT_1419df7b8;
    uStack_30c = DAT_1419df7bc;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_318);
    local_158 = (undefined8 *)local_c8;
    local_318 = (undefined4)DAT_1419df7b0;
    uStack_314 = DAT_1419df7b0._4_4_;
    uStack_310 = DAT_1419df7b8;
    uStack_30c = DAT_1419df7bc;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_318);
    local_150 = local_b8;
    if ((int)local_res20[0] < 3) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)param_5[2];
    }
    pcVar11 = (code *)&local_180;
    puVar4 = (undefined8 *)
             gml_Script_outline_bake_sprite_text(local_res8,local_res10,&local_308,7,pcVar11);
    if (puVar4 != puVar5) {
      local_318 = *(undefined4 *)puVar4;
      uStack_314 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_310 = *(undefined4 *)(puVar4 + 1);
      uStack_30c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_318);
    }
  }
  local_2e8 = 0x318;
  if ((int)local_res20[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[2];
  }
  in_stack_fffffffffffffcd0 = in_stack_fffffffffffffcd0 & 0xffffffffffffff00;
  uVar12 = (ulonglong)pcVar11 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a044a8,0x80000000,&local_1d8,uVar12,in_stack_fffffffffffffcd0);
  local_318 = (undefined4)local_1d8;
  uStack_314 = local_1d8._4_4_;
  uStack_310 = uStack_1d0;
  uStack_30c = uStack_1cc;
  if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_260);
  }
  FUN_140041b80(&local_260,&local_318);
  local_2e8 = 0x319;
  if ((int)local_res20[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[2];
  }
  in_stack_fffffffffffffcd0 = in_stack_fffffffffffffcd0 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a04948,0x80000000,&local_1e8,uVar12,in_stack_fffffffffffffcd0);
  local_318 = (undefined4)local_1e8;
  uStack_314 = local_1e8._4_4_;
  uStack_310 = uStack_1e0;
  uStack_30c = uStack_1dc;
  if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_270);
  }
  FUN_140041b80(&local_270,&local_318);
  local_2e8 = 0x31a;
  if ((int)local_res20[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[2];
  }
  in_stack_fffffffffffffcd0 = in_stack_fffffffffffffcd0 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a04988,0x80000000,&local_1f8,uVar12,in_stack_fffffffffffffcd0);
  local_318 = (undefined4)local_1f8;
  uStack_314 = local_1f8._4_4_;
  uStack_310 = uStack_1f0;
  uStack_30c = uStack_1ec;
  if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_280);
  }
  FUN_140041b80(&local_280,&local_318);
  local_2e8 = 0x31b;
  if ((int)local_res20[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[2];
  }
  in_stack_fffffffffffffcd0 = in_stack_fffffffffffffcd0 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a046a8,0x80000000,&local_208,uVar12,in_stack_fffffffffffffcd0);
  local_318 = (undefined4)local_208;
  uStack_314 = local_208._4_4_;
  uStack_310 = uStack_200;
  uStack_30c = uStack_1fc;
  if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_290);
  }
  FUN_140041b80(&local_290,&local_318);
  local_2e8 = 0x31c;
  if ((int)local_res20[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[2];
  }
  in_stack_fffffffffffffcd0 = in_stack_fffffffffffffcd0 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a04888,0x80000000,&local_218,uVar12,in_stack_fffffffffffffcd0);
  local_318 = (undefined4)local_218;
  uStack_314 = local_218._4_4_;
  uStack_310 = uStack_210;
  uStack_30c = uStack_20c;
  if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a0);
  }
  FUN_140041b80(&local_2a0,&local_318);
  local_2e8 = 0x31d;
  if ((int)local_res20[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[2];
  }
  in_stack_fffffffffffffcd0 = in_stack_fffffffffffffcd0 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a047a8,0x80000000,&local_228,uVar12,in_stack_fffffffffffffcd0);
  local_318 = (undefined4)local_228;
  uStack_314 = local_228._4_4_;
  uStack_310 = uStack_220;
  uStack_30c = uStack_21c;
  if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b0);
  }
  FUN_140041b80(&local_2b0,&local_318);
  local_2e8 = 0x31e;
  if ((int)local_res20[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[2];
  }
  FUN_140e87440(puVar5,DAT_141a045c8,0x80000000,&local_238,uVar12 & 0xffffffffffffff00,
                in_stack_fffffffffffffcd0 & 0xffffffffffffff00);
  local_318 = (undefined4)local_238;
  uStack_314 = local_238._4_4_;
  uStack_310 = uStack_230;
  uStack_30c = uStack_22c;
  if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c0);
  }
  FUN_140041b80(&local_2c0,&local_318);
  local_2e8 = 800;
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_308 = 0;
  local_300 = 0;
  local_2fc = 5;
  gml_Script___outline_set_uniforms(local_res8,local_res10,&local_308,0,0);
  local_2e8 = 0x321;
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_308 = 0;
  local_300 = 0;
  local_2fc = 5;
  gml_Script____struct___37___outline_surface_create___scr_outline
            (local_res8,local_res10,&local_308,0,0);
  local_2e8 = 0x322;
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_308 = 0;
  local_300 = 0;
  local_2fc = 5;
  if ((int)local_res20[0] < 2) {
    pdVar6 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar6 = (double *)param_5[1];
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar10 = *pdVar6;
  }
  else {
    dVar10 = (double)FUN_140e4b060();
  }
  if ((int)local_res20[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uVar3 = FUN_140e4a740(puVar5);
  puVar5 = (undefined8 *)FUN_140ec6010(&local_308,uVar3,(longlong)dVar10);
  if (puVar5 != &local_2d0) {
    local_318 = *(undefined4 *)puVar5;
    uStack_314 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_310 = *(undefined4 *)(puVar5 + 1);
    uStack_30c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d0);
    }
    FUN_140041b80(&local_2d0,&local_318);
  }
  local_2e8 = 0x323;
  cVar1 = FUN_140e491e0(&local_2c0);
  if (cVar1 == '\0') {
    puVar5 = (undefined8 *)
             FUN_140e8da20(&local_1c8,local_res8,4,&DAT_141dc6190,&DAT_141dc6190,&DAT_1419e1d20,
                           &DAT_1419e1d20);
    uStack_244 = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_248 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_250 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_250,puVar5);
    }
    puVar5 = &local_250;
    uVar7 = 2;
    local_res18 = 2;
  }
  else {
    local_98 = &local_1b8;
    local_90 = local_148;
    local_88 = &param_5;
    local_80 = local_res20;
    local_78 = &local_198;
    local_70 = &local_res8;
    local_68 = &local_res10;
    puVar5 = (undefined8 *)FUN_14010abf0(&local_98,&local_318);
    uVar7 = 1;
    local_res18 = 1;
    if (puVar5 == &local_2e0) goto LAB_14010a7e5;
  }
  local_1a8 = *(undefined4 *)puVar5;
  uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_1a0 = *(undefined4 *)(puVar5 + 1);
  uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e0);
  }
  FUN_140041b80(&local_2e0,&local_1a8);
LAB_14010a7e5:
  if (((uVar7 & 2) != 0) &&
     (uVar7 = uVar7 & 0xfffffffd, local_res18 = uVar7, (1 << ((byte)uStack_244 & 0x1f) & 0x46U) != 0
     )) {
    FUN_140041a50(&local_250);
  }
  if (((uVar7 & 1) != 0) && ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_318);
  }
  local_2e8 = 0x324;
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_308 = 0;
  local_300 = 0;
  local_2fc = 5;
  local_198 = &local_2d0;
  local_190 = &local_2e0;
  local_188 = &local_260;
  local_180 = &local_270;
  local_178 = &local_280;
  local_170 = &local_2a0;
  local_168 = &local_2b0;
  local_160 = &local_290;
  local_158 = &local_2e0;
  gml_Script____struct___38___outline_surface_create___scr_outline
            (local_res8,local_res10,&local_308,9,&local_198);
  local_2e8 = 0x325;
  if (0 < (int)local_res20[0]) {
    puVar9 = (undefined8 *)*param_5;
  }
  if (puVar9 != param_3) {
    local_1a8 = *(undefined4 *)puVar9;
    uStack_1a4 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_1a0 = *(undefined4 *)(puVar9 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_1a8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e0);
  }
  if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d0);
  }
  if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c0);
  }
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b0);
  }
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a0);
  }
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_290);
  }
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_280);
  }
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_270);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_260);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  _eh_vector_destructor_iterator_(local_148,0x10,10,FUN_140041b30);
  if (0 < (int)local_a8[0]) {
    puVar9 = local_a0;
    do {
      puVar5 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_a0);
  DAT_141dc7a50 = (undefined8 *)local_2f8;
  return param_3;
}

