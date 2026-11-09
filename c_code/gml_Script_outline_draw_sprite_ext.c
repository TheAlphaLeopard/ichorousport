// gml_Script_outline_draw_sprite_ext @ 0x14010ad90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 **
gml_Script_outline_draw_sprite_ext
          (undefined8 param_1,undefined8 param_2,undefined8 **param_3,undefined4 param_4,
          undefined8 param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  double *pdVar8;
  undefined8 uVar9;
  byte bVar10;
  byte bVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar16;
  code *pcVar20;
  ulonglong uVar21;
  undefined4 uVar24;
  undefined8 ***pppuVar22;
  undefined8 uVar23;
  ulonglong in_stack_fffffffffffffd00;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined8 *local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  undefined8 *local_2c8;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  undefined8 local_2b8;
  char *local_2b0;
  undefined4 local_2a8;
  undefined8 *local_2a0;
  undefined4 local_298;
  uint local_294;
  double local_290;
  uint local_284;
  undefined8 *local_280;
  undefined4 local_278;
  uint local_274;
  undefined8 *local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  uint local_258;
  uint local_254;
  undefined8 *local_248 [2];
  double local_238;
  byte local_22c;
  undefined1 local_228 [12];
  byte local_21c;
  undefined1 local_218 [16];
  double local_208 [2];
  double local_1f8 [2];
  undefined8 local_1e8 [2];
  undefined8 local_1d8 [2];
  undefined8 *local_1c8;
  byte local_1bc;
  undefined8 *local_1b8;
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined8 **local_198;
  double *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  double *local_178;
  double *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 **local_158;
  undefined8 **local_150;
  undefined1 *local_148;
  undefined8 *local_138;
  uint local_12c;
  undefined8 *local_128;
  uint local_11c;
  double local_118;
  uint local_10c;
  undefined8 *local_108;
  undefined4 local_100;
  uint local_fc;
  undefined8 *local_f8;
  undefined4 local_f0;
  uint local_ec;
  double local_e8;
  undefined4 local_dc;
  undefined8 *local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 *local_a8;
  undefined4 local_9c;
  undefined8 *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88 [2];
  undefined8 *local_80;
  
  local_2b0 = "gml_Script_outline_bake_sprite";
  local_2b8 = DAT_141dc7a50;
  DAT_141dc7a50 = (undefined8 **)&local_2b8;
  local_2a8 = 0x32d;
  FUN_140041df0(local_88,param_4,4,param_5);
  pcVar20 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_248,0x10,0xb,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = (undefined8 *)0x0;
  local_9c = 0xffffff;
  local_a8 = (undefined8 *)0x0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_274 = 0xffffff;
  local_280 = (undefined8 *)0x0;
  local_cc = 0xffffff;
  local_d8 = (undefined8 *)0x0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_258 = 0xffffff;
  local_ec = 0xffffff;
  local_f8 = (undefined8 *)0x0;
  local_254 = 0xffffff;
  local_fc = 0xffffff;
  local_108 = (undefined8 *)0x0;
  local_11c = 0xffffff;
  local_128 = (undefined8 *)0x0;
  local_12c = 0xffffff;
  local_138 = (undefined8 *)0x0;
  uStack_25c = 0xffffff;
  local_268 = (undefined8 *)0x0;
  local_284 = 0xffffff;
  local_290 = 0.0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_2ec = 0;
  local_2f8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = (undefined8 *)0x0;
  local_2a8 = 0x32d;
  uVar12 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 4) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_80[3];
  }
  iVar3 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_2a8 = 0x32d;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    local_2e8 = DAT_1419df7b0;
    uStack_2e0 = (char *)_DAT_1419df7b8;
    if ((1 << ((byte)local_208[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_2e8);
    local_178 = local_208;
    local_2e8 = DAT_1419df7b0;
    uStack_2e0 = (char *)_DAT_1419df7b8;
    if ((1 << ((byte)local_1f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_2e8);
    local_170 = local_1f8;
    local_2e8 = DAT_1419df7b0;
    uStack_2e0 = (char *)_DAT_1419df7b8;
    if ((1 << ((byte)local_1e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_2e8);
    local_168 = local_1e8;
    local_2e8 = DAT_1419df7b0;
    uStack_2e0 = (char *)_DAT_1419df7b8;
    if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_2e8);
    local_160 = local_1d8;
    local_2e8 = DAT_1419df7b0;
    uStack_2e0 = (char *)_DAT_1419df7b8;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_2e8);
    local_158 = &local_1c8;
    local_2e8 = DAT_1419df7b0;
    uStack_2e0 = (char *)_DAT_1419df7b8;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_2e8);
    local_150 = &local_1b8;
    local_2e8 = DAT_1419df7b0;
    uStack_2e0 = (char *)_DAT_1419df7b8;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_2e8);
    local_148 = local_1a8;
    if ((int)local_88[0] < 4) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)local_80[3];
    }
    pcVar20 = (code *)&local_178;
    puVar5 = (undefined8 *)gml_Script_outline_bake_sprite_text(param_1,param_2,&local_2f8,7,pcVar20)
    ;
    if (puVar5 != puVar7) {
      local_2e8 = (undefined8 *)*puVar5;
      uStack_2e0 = (char *)puVar5[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_2e8);
    }
  }
  local_2a8 = 0x32e;
  if ((int)local_88[0] < 4) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_80[3];
  }
  uVar21 = (ulonglong)pcVar20 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a044a8,0x80000000,&local_98,uVar21,
                in_stack_fffffffffffffd00 & 0xffffffffffffff00);
  uVar24 = (undefined4)(uVar21 >> 0x20);
  uStack_2e0 = (char *)CONCAT44(uStack_8c,uStack_90);
  local_2e8 = local_98;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_2e8);
  local_2a8 = 0x330;
  iVar3 = FUN_140ec9d80();
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0;
  local_118 = (double)iVar3;
  local_2a8 = 0x331;
  cVar2 = FUN_140e491e0(&local_118);
  if (cVar2 != '\0') {
    local_2a8 = 0x332;
    FUN_140ec9dc0();
  }
  local_2a8 = 0x335;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  local_198 = &local_a8;
  local_2e8 = _DAT_141dc6190;
  uStack_2e0 = (char *)puRam0000000141dc6198;
  if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  FUN_140041b80(&local_238,&local_2e8);
  local_190 = &local_238;
  ppuVar6 = (undefined8 **)FUN_140e79090(&local_2f8,2,&local_198);
  if (ppuVar6 != &local_280) {
    local_2e8 = *ppuVar6;
    uStack_2e0 = (char *)ppuVar6[1];
    if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_280);
    }
    FUN_140041b80(&local_280,&local_2e8);
  }
  local_2a8 = 0x336;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  if ((int)local_88[0] < 1) {
    ppuVar6 = &DAT_1419df7b0;
LAB_14010b3de:
    local_2e8 = *ppuVar6;
    uStack_2e0 = (char *)ppuVar6[1];
    if ((1 << ((byte)local_248[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_248);
    }
    FUN_140041b80(local_248,&local_2e8);
  }
  else {
    ppuVar6 = (undefined8 **)*local_80;
    if (ppuVar6 != local_248) goto LAB_14010b3de;
  }
  local_198 = local_248;
  local_294 = local_274;
  local_298 = local_278;
  if ((1 << ((byte)local_274 & 0x1f) & 0x46U) == 0) {
    local_2a0 = local_280;
  }
  else {
    FUN_1400419b0(&local_2a0,&local_280);
  }
  uStack_2e0._4_4_ = 7;
  local_2e8 = (undefined8 *)CONCAT44(local_2e8._4_4_,2);
  FUN_140042560(&local_2a0,&local_2e8);
  if ((1 << ((byte)uStack_2e0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  uVar9 = CONCAT44(uVar24,DAT_141a047c8);
  puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2f8,1,uVar9,&local_198);
  uVar24 = (undefined4)((ulonglong)uVar9 >> 0x20);
  uStack_2bc = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_2c0 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) == 0) {
    local_2c8 = (undefined8 *)*puVar7;
  }
  else {
    FUN_1400419b0(&local_2c8,puVar7);
  }
  FUN_1400460e0(&local_2c8,&local_2a0);
  uStack_2e0 = (char *)CONCAT44(uStack_2bc,uStack_2c0);
  local_2e8 = local_2c8;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_2e8);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a0);
  }
  local_2a8 = 0x337;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  if ((int)local_88[0] < 1) {
    ppuVar6 = &DAT_1419df7b0;
LAB_14010b5da:
    local_2e8 = *ppuVar6;
    uStack_2e0 = (char *)ppuVar6[1];
    if ((1 << ((byte)local_248[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_248);
    }
    FUN_140041b80(local_248,&local_2e8);
  }
  else {
    ppuVar6 = (undefined8 **)*local_80;
    if (ppuVar6 != local_248) goto LAB_14010b5da;
  }
  local_198 = local_248;
  local_294 = local_274;
  local_298 = local_278;
  if ((1 << ((byte)local_274 & 0x1f) & 0x46U) == 0) {
    local_2a0 = local_280;
  }
  else {
    FUN_1400419b0(&local_2a0,&local_280);
  }
  uStack_2e0._4_4_ = 7;
  local_2e8 = (undefined8 *)CONCAT44(local_2e8._4_4_,2);
  FUN_140042560(&local_2a0,&local_2e8);
  if ((1 << ((byte)uStack_2e0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  uVar9 = CONCAT44(uVar24,DAT_141a04808);
  puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2f8,1,uVar9,&local_198);
  uVar24 = (undefined4)((ulonglong)uVar9 >> 0x20);
  uStack_2bc = *(uint *)((longlong)puVar7 + 0xc);
  uStack_2c0 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) == 0) {
    local_2c8 = (undefined8 *)*puVar7;
  }
  else {
    FUN_1400419b0(&local_2c8,puVar7);
  }
  FUN_1400460e0(&local_2c8,&local_2a0);
  uStack_2e0 = (char *)CONCAT44(uStack_2bc,uStack_2c0);
  local_2e8 = local_2c8;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_2e8);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a0);
  }
  local_2a8 = 0x338;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  if ((int)local_88[0] < 1) {
    ppuVar6 = &DAT_1419df7b0;
LAB_14010b7d8:
    local_2e8 = *ppuVar6;
    uStack_2e0 = (char *)ppuVar6[1];
    if ((1 << ((byte)local_248[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_248);
    }
    FUN_140041b80(local_248,&local_2e8);
  }
  else {
    ppuVar6 = (undefined8 **)*local_80;
    if (ppuVar6 != local_248) goto LAB_14010b7d8;
  }
  local_198 = local_248;
  uVar9 = CONCAT44(uVar24,DAT_141a04788);
  ppuVar6 = (undefined8 **)FUN_140e634e0(param_1,param_2,&local_2f8,1,uVar9,&local_198);
  uVar24 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (ppuVar6 != &local_f8) {
    local_2e8 = *ppuVar6;
    uStack_2e0 = (char *)ppuVar6[1];
    FUN_140041b80(&local_f8,&local_2e8);
    local_258 = local_ec;
  }
  local_2a8 = 0x339;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  if ((int)local_88[0] < 1) {
    ppuVar6 = &DAT_1419df7b0;
LAB_14010b8be:
    local_2e8 = *ppuVar6;
    uStack_2e0 = (char *)ppuVar6[1];
    if ((1 << ((byte)local_248[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_248);
    }
    FUN_140041b80(local_248,&local_2e8);
  }
  else {
    ppuVar6 = (undefined8 **)*local_80;
    if (ppuVar6 != local_248) goto LAB_14010b8be;
  }
  local_198 = local_248;
  uVar9 = CONCAT44(uVar24,DAT_141a04768);
  ppuVar6 = (undefined8 **)FUN_140e634e0(param_1,param_2,&local_2f8,1,uVar9,&local_198);
  uVar24 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (ppuVar6 != &local_108) {
    local_2e8 = *ppuVar6;
    uStack_2e0 = (char *)ppuVar6[1];
    FUN_140041b80(&local_108,&local_2e8);
    local_254 = local_fc;
  }
  local_2a8 = 0x33b;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  local_198 = &local_d8;
  local_190 = &local_e8;
  uVar9 = CONCAT44(uVar24,DAT_141a04a78);
  pdVar8 = (double *)FUN_140e634e0(param_1,param_2,&local_2f8,2,uVar9,&local_198);
  uVar24 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if ((undefined8 **)pdVar8 != &local_128) {
    local_2e8 = (undefined8 *)*pdVar8;
    uStack_2e0 = (char *)pdVar8[1];
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_2e8);
  }
  local_2a8 = 0x33c;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  local_198 = &local_d8;
  local_190 = &local_e8;
  uVar9 = CONCAT44(uVar24,DAT_141a04a78);
  pdVar8 = (double *)FUN_140e634e0(param_1,param_2,&local_2f8,2,uVar9,&local_198);
  uVar24 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if ((undefined8 **)pdVar8 != &local_138) {
    local_2e8 = (undefined8 *)*pdVar8;
    uStack_2e0 = (char *)pdVar8[1];
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_2e8);
  }
  local_2a8 = 0x33d;
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_25c = 0;
  local_268 = (undefined8 *)&DAT_bff0000000000000;
  local_2a8 = 0x33f;
  if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_290);
  }
  local_284 = 0;
  local_290 = 0.0;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  if ((int)local_88[0] < 1) {
    ppuVar6 = &DAT_1419df7b0;
  }
  else {
    ppuVar6 = (undefined8 **)*local_80;
    if (ppuVar6 == local_248) goto LAB_14010bbb1;
  }
  local_2e8 = *ppuVar6;
  uStack_2e0 = (char *)ppuVar6[1];
  if ((1 << ((byte)local_248[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_248);
  }
  FUN_140041b80(local_248,&local_2e8);
LAB_14010bbb1:
  local_198 = local_248;
  uVar9 = CONCAT44(uVar24,DAT_141a049b8);
  puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2f8,1,uVar9,&local_198);
  if (puVar7 != &local_b8) {
    local_2e8 = (undefined8 *)*puVar7;
    uStack_2e0 = (char *)puVar7[1];
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_2e8);
  }
  bVar1 = true;
  do {
    uVar24 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if (!bVar1) {
      local_2a8 = 0x33f;
      uVar4 = local_284 & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_290 = (double)CONCAT44(local_290._4_4_,local_290._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_290 = (double)((longlong)local_290 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_284 = 0;
              goto LAB_14010bc94;
            }
            FUN_140042910(&DAT_14172c3d8,&local_290,&local_290);
          }
          goto LAB_14010bc9e;
        }
        local_290 = (double)FUN_140e4b060(&local_290);
        local_284 = 0;
      }
LAB_14010bc94:
      local_290 = local_290 + 1.0;
    }
LAB_14010bc9e:
    bVar1 = false;
    iVar3 = FUN_140e851f0(&local_290,&local_b8,DAT_141955260,1);
    if ((iVar3 == -2) || (-1 < iVar3)) {
      local_2a8 = 0x356;
      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      local_2f8 = 0;
      local_2f0 = 0;
      local_2ec = 5;
      local_198 = &local_268;
      uStack_2bc = local_258;
      uStack_2c0 = local_f0;
      bVar10 = (byte)local_258 & 0x1f;
      if ((1 << bVar10 & 0x46U) == 0) {
        local_2c8 = local_f8;
      }
      else {
        FUN_1400419b0(&local_2c8,&local_f8);
      }
      FUN_1400460e0(&local_2c8,&local_280);
      uStack_2e0 = (char *)CONCAT44(uStack_2bc,uStack_2c0);
      local_2e8 = local_2c8;
      if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_2e8);
      if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_190 = &local_238;
      uStack_2bc = local_254;
      uStack_2c0 = local_100;
      bVar11 = (byte)local_254 & 0x1f;
      if ((1 << bVar11 & 0x46U) == 0) {
        local_2c8 = local_108;
      }
      else {
        FUN_1400419b0(&local_2c8,&local_108);
      }
      FUN_1400460e0(&local_2c8,&local_280);
      uStack_2e0 = (char *)CONCAT44(uStack_2bc,uStack_2c0);
      local_2e8 = local_2c8;
      if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_228);
      }
      FUN_140041b80(local_228,&local_2e8);
      if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      uVar9 = CONCAT44(uVar24,DAT_141a04ab8);
      local_188 = local_228;
      FUN_140e634e0(param_1,param_2,&local_2f8,3,uVar9,&local_198);
      uVar24 = (undefined4)((ulonglong)uVar9 >> 0x20);
      local_2a8 = 0x358;
      cVar2 = FUN_140e491e0(&local_118);
      if (cVar2 != '\0') {
        local_2a8 = 0x359;
        if ((local_10c & 0xffffff) == 0) {
          dVar16 = local_118;
        }
        else {
          dVar16 = (double)FUN_140e4b060(&local_118);
        }
        FUN_140ec9e10((longlong)dVar16);
      }
      local_2a8 = 0x35c;
      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      local_2f8 = 0;
      local_2f0 = 0;
      local_2ec = 5;
      local_198 = &local_128;
      uVar9 = CONCAT44(uVar24,DAT_141a04918);
      FUN_140e634e0(param_1,param_2,&local_2f8,1,uVar9,&local_198);
      uVar24 = (undefined4)((ulonglong)uVar9 >> 0x20);
      local_2a8 = 0x35d;
      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      local_2f8 = 0;
      local_2f0 = 0;
      local_2ec = 5;
      local_198 = &local_138;
      FUN_140e634e0(param_1,param_2,&local_2f8,1,CONCAT44(uVar24,DAT_141a04918),&local_198);
      local_2a8 = 0x35f;
      if (&local_268 != param_3) {
        uStack_2e0 = (char *)CONCAT44(uStack_25c,uStack_260);
        local_2e8 = local_268;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_2e8);
      }
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_290);
      }
      if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << bVar11 & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << bVar10 & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_280);
      }
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      _eh_vector_destructor_iterator_(local_248,0x10,0xb,FUN_140041b30);
      if (0 < (int)local_88[0]) {
        puVar7 = local_80;
        do {
          puVar5 = (undefined8 *)*puVar7;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 1) = 0;
          *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
          puVar7 = puVar7 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      FUN_140e4cd60(local_80);
      DAT_141dc7a50 = (undefined8 **)local_2b8;
      return param_3;
    }
    local_2a8 = 0x340;
    if ((local_11c & 0xffffff) == 0) {
      puVar7 = local_128;
    }
    else {
      puVar7 = (undefined8 *)FUN_140e4b060(&local_128);
    }
    FUN_140ec60c0((longlong)(double)puVar7,0xffffffff);
    local_2a8 = 0x341;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    local_2e8 = _DAT_141dc6190;
    uStack_2e0 = (char *)puRam0000000141dc6198;
    if ((1 << ((byte)local_248[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_248);
    }
    FUN_140041b80(local_248,&local_2e8);
    local_198 = local_248;
    local_2e8 = _DAT_141dc6190;
    uStack_2e0 = (char *)puRam0000000141dc6198;
    if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_2e8);
    local_190 = &local_238;
    uVar9 = CONCAT44(uVar24,DAT_141a04558);
    FUN_140e634e0(param_1,param_2,&local_2f8,2,uVar9,&local_198);
    uVar24 = (undefined4)((ulonglong)uVar9 >> 0x20);
    local_2a8 = 0x342;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    local_2e8 = _DAT_1419e1d50;
    uStack_2e0 = (char *)uRam00000001419e1d58;
    if ((1 << ((byte)local_248[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_248);
    }
    FUN_140041b80(local_248,&local_2e8);
    local_198 = local_248;
    local_2e8 = _DAT_1419e1d30;
    uStack_2e0 = (char *)uRam00000001419e1d38;
    if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_2e8);
    local_190 = &local_238;
    uVar9 = CONCAT44(uVar24,DAT_141a04a18);
    FUN_140e634e0(param_1,param_2,&local_2f8,2,uVar9,&local_198);
    uVar24 = (undefined4)((ulonglong)uVar9 >> 0x20);
    local_2a8 = 0x343;
    uStack_2bc = local_254;
    uStack_2c0 = local_100;
    if ((1 << ((byte)local_254 & 0x1f) & 0x46U) == 0) {
      local_2c8 = local_108;
    }
    else {
      FUN_1400419b0(&local_2c8,&local_108);
    }
    FUN_1400460e0(&local_2c8,&local_280);
    local_294 = local_258;
    local_298 = local_f0;
    if ((1 << ((byte)local_258 & 0x1f) & 0x46U) == 0) {
      local_2a0 = local_f8;
    }
    else {
      FUN_1400419b0(&local_2a0,&local_f8);
    }
    FUN_1400460e0(&local_2a0,&local_280);
    if ((uStack_2bc & 0xffffff) == 0) {
      uVar13 = SUB84(local_2c8,0);
      uVar17 = (undefined4)((ulonglong)local_2c8 >> 0x20);
    }
    else {
      uVar9 = FUN_140e4b060(&local_2c8);
      uVar13 = (undefined4)uVar9;
      uVar17 = (undefined4)((ulonglong)uVar9 >> 0x20);
    }
    if ((local_294 & 0xffffff) == 0) {
      uVar14 = SUB84(local_2a0,0);
      uVar18 = (undefined4)((ulonglong)local_2a0 >> 0x20);
    }
    else {
      uVar9 = FUN_140e4b060(&local_2a0);
      uVar14 = (undefined4)uVar9;
      uVar18 = (undefined4)((ulonglong)uVar9 >> 0x20);
    }
    if ((local_284 & 0xffffff) == 0) {
      uVar15 = SUB84(local_290,0);
      uVar19 = (undefined4)((ulonglong)local_290 >> 0x20);
    }
    else {
      uVar9 = FUN_140e4b060(&local_290);
      uVar15 = (undefined4)uVar9;
      uVar19 = (undefined4)((ulonglong)uVar9 >> 0x20);
    }
    if ((int)local_88[0] < 1) {
      pdVar8 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar8 = (double *)*local_80;
    }
    if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
      dVar16 = *pdVar8;
    }
    else {
      dVar16 = (double)FUN_140e4b060();
    }
    uVar9 = CONCAT44(uVar24,(float)(double)CONCAT44(uVar17,uVar13));
    FUN_140ec5d30(param_1,(longlong)dVar16,(float)(double)CONCAT44(uVar19,uVar15),
                  (float)(double)CONCAT44(uVar18,uVar14),uVar9);
    uVar24 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a0);
    }
    if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2a8 = 0x344;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    local_2e8 = _DAT_141dc6190;
    uStack_2e0 = (char *)puRam0000000141dc6198;
    if ((1 << ((byte)local_248[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_248);
    }
    FUN_140041b80(local_248,&local_2e8);
    local_198 = local_248;
    FUN_140e634e0(param_1,param_2,&local_2f8,1,CONCAT44(uVar24,DAT_141a04848),&local_198);
    local_2a8 = 0x345;
    FUN_140ec7870();
    local_2a8 = 0x347;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    local_198 = &local_138;
    if ((int)local_88[0] < 4) {
      pdVar8 = (double *)&DAT_1419df7b0;
LAB_14010c190:
      local_2e8 = (undefined8 *)*pdVar8;
      uStack_2e0 = (char *)pdVar8[1];
      if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_2e8);
    }
    else {
      pdVar8 = (double *)local_80[3];
      if (pdVar8 != &local_238) goto LAB_14010c190;
    }
    local_190 = &local_238;
    pppuVar22 = &local_198;
    gml_Script_outline_draw_surface_ext(param_1,param_2,&local_2f8,2,pppuVar22);
    uVar24 = (undefined4)((ulonglong)pppuVar22 >> 0x20);
    local_2a8 = 0x348;
    if ((local_12c & 0xffffff) == 0) {
      puVar7 = local_138;
    }
    else {
      puVar7 = (undefined8 *)FUN_140e4b060(&local_138);
    }
    FUN_140ec60c0((longlong)(double)puVar7,0xffffffff);
    local_2a8 = 0x349;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    local_2e8 = _DAT_141dc6190;
    uStack_2e0 = (char *)puRam0000000141dc6198;
    if ((1 << ((byte)local_248[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_248);
    }
    FUN_140041b80(local_248,&local_2e8);
    local_198 = local_248;
    local_2e8 = _DAT_141dc6190;
    uStack_2e0 = (char *)puRam0000000141dc6198;
    if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_2e8);
    local_190 = &local_238;
    uVar9 = CONCAT44(uVar24,DAT_141a04558);
    FUN_140e634e0(param_1,param_2,&local_2f8,2,uVar9,&local_198);
    uVar24 = (undefined4)((ulonglong)uVar9 >> 0x20);
    local_2a8 = 0x34a;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    local_2e8 = _DAT_1419e1d50;
    uStack_2e0 = (char *)uRam00000001419e1d58;
    if ((1 << ((byte)local_248[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_248);
    }
    FUN_140041b80(local_248,&local_2e8);
    local_198 = local_248;
    local_2e8 = _DAT_1419e1d30;
    uStack_2e0 = (char *)uRam00000001419e1d38;
    if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_2e8);
    local_190 = &local_238;
    uVar9 = CONCAT44(uVar24,DAT_141a04a18);
    FUN_140e634e0(param_1,param_2,&local_2f8,2,uVar9,&local_198);
    uVar24 = (undefined4)((ulonglong)uVar9 >> 0x20);
    local_2a8 = 0x34b;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    local_198 = &local_128;
    local_2e8 = _DAT_141dc6190;
    uStack_2e0 = (char *)puRam0000000141dc6198;
    if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_2e8);
    local_190 = &local_238;
    local_2e8 = _DAT_141dc6190;
    uStack_2e0 = (char *)puRam0000000141dc6198;
    if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_2e8);
    local_2e8 = _DAT_1419e1d20;
    uStack_2e0 = (char *)uRam00000001419e1d28;
    local_188 = local_228;
    if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_2e8);
    local_180 = local_218;
    local_2e8 = _DAT_1419e1d20;
    uStack_2e0 = (char *)uRam00000001419e1d28;
    if ((1 << ((byte)local_208[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_2e8);
    local_178 = local_208;
    local_2e8 = _DAT_141dc6190;
    uStack_2e0 = (char *)puRam0000000141dc6198;
    if ((1 << ((byte)local_1f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_2e8);
    local_170 = local_1f8;
    if ((int)local_88[0] < 2) {
      puVar7 = &DAT_1419df7b0;
LAB_14010c581:
      local_2e8 = (undefined8 *)*puVar7;
      uStack_2e0 = (char *)puVar7[1];
      if ((1 << ((byte)local_1e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1e8);
      }
      FUN_140041b80(local_1e8,&local_2e8);
    }
    else {
      puVar7 = (undefined8 *)local_80[1];
      if (puVar7 != local_1e8) goto LAB_14010c581;
    }
    local_168 = local_1e8;
    if ((int)local_88[0] < 3) {
      puVar7 = &DAT_1419df7b0;
LAB_14010c5d9:
      local_2e8 = (undefined8 *)*puVar7;
      uStack_2e0 = (char *)puVar7[1];
      if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1d8);
      }
      FUN_140041b80(local_1d8,&local_2e8);
    }
    else {
      puVar7 = (undefined8 *)local_80[2];
      if (puVar7 != local_1d8) goto LAB_14010c5d9;
    }
    local_160 = local_1d8;
    uVar9 = CONCAT44(uVar24,DAT_141a04498);
    FUN_140e634e0(param_1,param_2,&local_2f8,8,uVar9,&local_198);
    uVar24 = (undefined4)((ulonglong)uVar9 >> 0x20);
    local_2a8 = 0x34c;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    local_2e8 = _DAT_141dc6190;
    uStack_2e0 = (char *)puRam0000000141dc6198;
    if ((1 << ((byte)local_248[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_248);
    }
    FUN_140041b80(local_248,&local_2e8);
    local_198 = local_248;
    uVar9 = CONCAT44(uVar24,DAT_141a04848);
    FUN_140e634e0(param_1,param_2,&local_2f8,1,uVar9,&local_198);
    uVar24 = (undefined4)((ulonglong)uVar9 >> 0x20);
    local_2a8 = 0x34d;
    FUN_140ec7870();
    local_2a8 = 0x34e;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50();
    }
    local_2f0 = 0;
    uStack_2e0 = "gml_Script_outline_end";
    local_2e8 = DAT_141dc7a50;
    DAT_141dc7a50 = &local_2e8;
    local_2ec = 5;
    local_2f8 = 0;
    local_2d8 = 0xc5;
    FUN_140ec9dc0();
    DAT_141dc7a50 = (undefined8 **)local_2e8;
    local_2a8 = 0x350;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    local_198 = &local_268;
    uVar23 = CONCAT44(uVar24,DAT_141a04628);
    uVar9 = FUN_140e634e0(param_1,param_2,&local_2f8,1,uVar23,&local_198);
    uVar24 = (undefined4)((ulonglong)uVar23 >> 0x20);
    cVar2 = FUN_140e491e0(uVar9);
    if (cVar2 == '\0') {
      local_2a8 = 0x351;
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0;
      local_bc = 5;
      local_190 = (double *)&local_138;
      local_2e8 = _DAT_141dc6190;
      uStack_2e0 = (char *)puRam0000000141dc6198;
      if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_228);
      }
      FUN_140041b80(local_228,&local_2e8);
      local_2e8 = _DAT_141dc6190;
      uStack_2e0 = (char *)puRam0000000141dc6198;
      local_188 = local_228;
      if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_218);
      }
      FUN_140041b80(local_218,&local_2e8);
      local_180 = local_218;
      local_178 = (double *)&local_d8;
      local_170 = &local_e8;
      local_2e8 = _DAT_1419df7a0;
      uStack_2e0 = (char *)puRam00000001419df7a8;
      if ((1 << ((byte)local_1e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1e8);
      }
      FUN_140041b80(local_1e8,&local_2e8);
      local_168 = local_1e8;
      local_2e8 = _DAT_1419df7a0;
      uStack_2e0 = (char *)puRam00000001419df7a8;
      if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1d8);
      }
      FUN_140041b80(local_1d8,&local_2e8);
      local_160 = local_1d8;
      local_158 = &local_280;
      local_150 = &local_280;
      uVar9 = CONCAT44(uVar24,DAT_141a04ad8);
      ppuVar6 = (undefined8 **)FUN_140e634e0(param_1,param_2,&local_c8,9,uVar9,&local_190);
      if (ppuVar6 != &local_268) {
        local_2e8 = *ppuVar6;
        uStack_2e0 = (char *)ppuVar6[1];
        if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        FUN_140041b80(&local_268,&local_2e8);
      }
    }
    else {
      local_2a8 = 0x353;
      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      local_2f8 = 0;
      local_2f0 = 0;
      local_2ec = 5;
      local_198 = &local_268;
      local_190 = (double *)&local_138;
      local_2e8 = _DAT_141dc6190;
      uStack_2e0 = (char *)puRam0000000141dc6198;
      if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_228);
      }
      FUN_140041b80(local_228,&local_2e8);
      local_2e8 = _DAT_141dc6190;
      uStack_2e0 = (char *)puRam0000000141dc6198;
      local_188 = local_228;
      if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_218);
      }
      FUN_140041b80(local_218,&local_2e8);
      local_180 = local_218;
      local_178 = (double *)&local_d8;
      local_170 = &local_e8;
      local_2e8 = _DAT_1419df7a0;
      uStack_2e0 = (char *)puRam00000001419df7a8;
      if ((1 << ((byte)local_1e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1e8);
      }
      FUN_140041b80(local_1e8,&local_2e8);
      local_168 = local_1e8;
      local_2e8 = _DAT_1419df7a0;
      uStack_2e0 = (char *)puRam00000001419df7a8;
      if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1d8);
      }
      FUN_140041b80(local_1d8,&local_2e8);
      local_160 = local_1d8;
      uVar9 = CONCAT44(uVar24,DAT_141a045a8);
      FUN_140e634e0(param_1,param_2,&local_2f8,8,uVar9,&local_198);
    }
  } while( true );
}

