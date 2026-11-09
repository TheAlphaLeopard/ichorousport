// gml_Object_oSmoke_Create_0 @ 0x140d8a620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oSmoke_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined8 *puVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  bool bVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar18;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  byte local_res18;
  code *pcVar19;
  ulonglong uVar20;
  undefined4 uVar23;
  undefined8 **ppuVar21;
  double **ppdVar22;
  ulonglong in_stack_fffffffffffffc80;
  ulonglong uVar24;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined4 local_348;
  undefined8 local_338;
  undefined4 local_330;
  undefined4 local_32c;
  longlong *local_328;
  undefined4 uStack_320;
  uint uStack_31c;
  longlong *local_318;
  undefined4 local_310;
  uint local_30c;
  undefined8 local_308;
  char *local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  double local_2c8;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  undefined8 local_2b8;
  undefined4 local_2ac;
  double local_2a8;
  byte local_29c;
  undefined8 local_298;
  byte local_28c;
  double local_288;
  byte local_27c;
  double local_278;
  byte local_26c;
  undefined1 local_268 [12];
  byte local_25c;
  undefined8 local_258;
  byte local_24c;
  undefined1 local_248 [12];
  byte local_23c;
  undefined1 local_238 [12];
  byte local_22c;
  undefined1 local_228 [12];
  byte local_21c;
  undefined1 local_218 [12];
  byte local_20c;
  undefined1 local_208 [12];
  byte local_1fc;
  undefined1 local_1f8 [12];
  byte local_1ec;
  undefined1 local_1e8 [12];
  byte local_1dc;
  undefined1 local_1d8 [12];
  byte local_1cc;
  undefined1 local_1c8 [12];
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  double local_198;
  undefined4 local_18c;
  double local_188;
  undefined4 local_17c;
  double local_178;
  undefined4 local_16c;
  double local_168;
  undefined4 local_15c;
  double local_158;
  undefined4 local_14c;
  double *local_148;
  double *local_140;
  double *local_138;
  double *local_130;
  undefined1 *local_128;
  undefined8 *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_6c;
  
  local_300 = "gml_Object_oSignature_Draw_0";
  local_2f8 = 0;
  local_308 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_308;
  pcVar19 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_2a8,0x10,0x11,FUN_1400424d0,FUN_140041b30);
  uStack_2bc = 0xffffff;
  local_2c8 = 0.0;
  local_30c = 0xffffff;
  local_318 = (longlong *)0x0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef528);
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef508);
  local_7c = 0xffffff;
  local_88 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  local_res18 = 0xff;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_32c = 0xffffff;
  local_338 = 0;
  local_2d4 = 0xffffff;
  local_2e0 = 0;
  local_2e4 = 0xffffff;
  local_2f0 = 0;
  local_2f8 = 1;
  thunk_FUN_141039d20(0);
  local_2f8 = 2;
  thunk_FUN_141039d50(0);
  local_2f8 = 4;
  pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03608);
  uStack_31c = 6;
  in_stack_fffffffffffffc80 = in_stack_fffffffffffffc80 & 0xffffffffffffff00;
  uVar20 = (ulonglong)pcVar19 & 0xffffffffffffff00;
  local_328 = param_1;
  FUN_140e87440(&local_328,DAT_1419fe0e8,0x80000000,&local_2c8,uVar20,in_stack_fffffffffffffc80);
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  uStack_31c = 6;
  in_stack_fffffffffffffc80 = in_stack_fffffffffffffc80 & 0xffffffffffffff00;
  uVar20 = uVar20 & 0xffffffffffffff00;
  local_328 = param_1;
  FUN_140e87440(&local_328,DAT_1419fe158,0x80000000,&local_318,uVar20,in_stack_fffffffffffffc80);
  uVar23 = (undefined4)(uVar20 >> 0x20);
  uVar3 = (undefined4)(in_stack_fffffffffffffc80 >> 0x20);
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  uStack_31c = 0xf;
  local_328 = (longlong *)0x100000100000242;
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar14 = *pdVar6;
  }
  else {
    dVar14 = (double)FUN_140e4b060(pdVar6);
  }
  plVar12 = local_318;
  if ((local_30c & 0xffffff) != 0) {
    plVar12 = (longlong *)FUN_140e4b060(&local_318);
  }
  dVar15 = local_2c8;
  if ((uStack_2bc & 0xffffff) != 0) {
    dVar15 = (double)FUN_140e4b060(&local_2c8);
  }
  plVar13 = local_328;
  if ((uStack_31c & 0xffffff) != 0) {
    plVar13 = (longlong *)FUN_140e4b060(&local_328);
  }
  uVar24 = CONCAT44(uVar3,(float)dVar14);
  uVar20 = CONCAT44(uVar23,(float)(double)plVar12);
  FUN_140ec5dd0(param_1,(int)(double)plVar13,0,(float)dVar15,uVar20,uVar24,0x3f800000,0,0,0x3f800000
               );
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_2f8 = 6;
  uVar24 = uVar24 & 0xffffffffffffff00;
  uVar20 = uVar20 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419eef38,0x80000000,&local_88,uVar20,uVar24);
  iVar2 = FUN_140e851f0(uVar4,&local_88,DAT_141955260,0);
  local_148 = &local_2a8;
  if (iVar2 == 0) {
    local_2f8 = 8;
    if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_338);
    }
    local_338 = 0;
    local_330 = 0;
    local_32c = 5;
    uStack_31c = 6;
    uVar24 = uVar24 & 0xffffffffffffff00;
    uVar20 = uVar20 & 0xffffffffffffff00;
    local_328 = param_1;
    FUN_140e87440(&local_328,DAT_1419fe0e8,0x80000000,&local_2c8,uVar20,uVar24);
    if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    uStack_31c = 6;
    local_328 = param_1;
    FUN_140e87440(&local_328,DAT_1419fe158,0x80000000,&local_318,uVar20 & 0xffffffffffffff00,
                  uVar24 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    local_358 = (longlong *)local_2c8;
    uStack_350 = (char *)CONCAT44(uStack_2bc,uStack_2c0);
    if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    FUN_140041b80(&local_2a8,&local_358);
    uStack_31c = local_30c;
    uStack_320 = local_310;
    if ((1 << ((byte)local_30c & 0x1f) & 0x46U) == 0) {
      local_328 = local_318;
    }
    else {
      FUN_1400419b0(&local_328,&local_318);
    }
    uStack_350._4_4_ = 7;
    local_358 = (longlong *)CONCAT44(local_358._4_4_,2);
    FUN_1400460e0(&local_328,&local_358);
    if ((1 << ((byte)uStack_350._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    local_358 = local_328;
    uStack_350 = (char *)CONCAT44(uStack_31c,uStack_320);
    if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    FUN_140041b80(&local_298,&local_358);
    if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    local_140 = (double *)&local_298;
    puVar7 = (undefined8 *)gml_Script_worldwide_load(param_1,param_2,&local_338,2,&local_148);
    if (puVar7 != &local_2b8) {
      local_358 = (longlong *)*puVar7;
      uStack_350 = (char *)puVar7[1];
      if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      FUN_140041b80(&local_2b8,&local_358);
    }
    local_2f8 = 9;
    if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_338);
    }
    local_338 = 0;
    local_330 = 0;
    local_32c = 5;
    if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e0);
    }
    local_2e0 = 0;
    local_2d8 = 0;
    local_2d4 = 5;
    if ((1 << ((byte)local_2e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f0);
    }
    local_2f0 = 0;
    local_2e8 = 0;
    local_2e4 = 5;
    FUN_140e87170(&local_2b8,DAT_1419fe0e8,0x80000000,&local_98,param_1,param_2);
    FUN_140e87170(&local_2b8,DAT_1419fe158,0x80000000,&local_a8,param_1,param_2);
    local_358 = (longlong *)CONCAT44(uRam0000000141ddb85c,_DAT_141ddb858);
    uStack_350 = (char *)CONCAT44(DAT_141ddb864,uRam0000000141ddb860);
    if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    FUN_140041b80(&local_2a8,&local_358);
    uStack_31c = DAT_141ddb884;
    uStack_320 = DAT_141ddb880;
    if ((1 << ((byte)DAT_141ddb884 & 0x1f) & 0x46U) == 0) {
      local_328 = DAT_141ddb878;
      local_148 = &local_2a8;
    }
    else {
      local_148 = &local_2a8;
      FUN_1400419b0(&local_328,&DAT_141ddb878);
    }
    uVar18 = uStack_31c;
    local_358 = local_328;
    uStack_350 = (char *)CONCAT44(uStack_31c,uStack_320);
    if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    FUN_140041b80(&local_298,&local_358);
    if ((1 << ((byte)uVar18 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    local_140 = (double *)&local_298;
    pdVar6 = (double *)gml_Script____struct___117(param_1,param_2,&local_2f0,1,&local_148);
    if (pdVar6 != &local_288) {
      local_358 = (longlong *)*pdVar6;
      uStack_350 = (char *)pdVar6[1];
      if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_358);
    }
    local_138 = &local_288;
    local_358 = (longlong *)local_98;
    uStack_350 = (char *)CONCAT44(uStack_8c,uStack_90);
    if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140041b80(&local_278,&local_358);
    local_130 = &local_278;
    local_358 = (longlong *)local_a8;
    uStack_350 = (char *)CONCAT44(uStack_9c,uStack_a0);
    if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_268);
    }
    FUN_140041b80(local_268,&local_358);
    local_128 = local_268;
    puVar7 = (undefined8 *)FUN_140e64420(param_1,param_2,&local_2e0,2,&local_140);
    if (puVar7 != &local_258) {
      local_358 = (longlong *)*puVar7;
      uStack_350 = (char *)puVar7[1];
      if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      FUN_140041b80(&local_258,&local_358);
    }
    local_120 = &local_258;
    local_358 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_350 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_248);
    }
    FUN_140041b80(local_248,&local_358);
    local_118 = local_248;
    local_358 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_350 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_358);
    local_110 = local_238;
    local_358 = (longlong *)CONCAT44(uRam0000000141dc7714,_DAT_141dc7710);
    uStack_350 = (char *)CONCAT44(uRam0000000141dc771c,uRam0000000141dc7718);
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_358);
    local_108 = local_228;
    local_358 = (longlong *)CONCAT44(uRam0000000141dc7714,_DAT_141dc7710);
    uStack_350 = (char *)CONCAT44(uRam0000000141dc771c,uRam0000000141dc7718);
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_358);
    local_100 = local_218;
    local_358 = (longlong *)CONCAT44(uRam0000000141dc7714,_DAT_141dc7710);
    uStack_350 = (char *)CONCAT44(uRam0000000141dc771c,uRam0000000141dc7718);
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_358);
    local_f8 = local_208;
    local_358 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_350 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_358);
    local_f0 = local_1f8;
    local_358 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_350 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_358);
    local_e8 = local_1e8;
    local_358 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_350 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_358);
    local_e0 = local_1d8;
    local_358 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_350 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_358);
    local_d8 = local_1c8;
    local_358 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_350 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_358);
    local_d0 = local_1b8;
    local_358 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_350 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_358);
    local_c8 = local_1a8;
    ppuVar21 = &local_130;
    gml_Script_draw_sprite_hires(param_1,param_2,&local_338,0xe,ppuVar21);
    uVar23 = (undefined4)((ulonglong)ppuVar21 >> 0x20);
  }
  else {
    local_2f8 = 0xd;
    if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_338);
    }
    local_338 = 0;
    local_330 = 0;
    local_32c = 5;
    local_358 = (longlong *)CONCAT44(uRam0000000141ddb85c,_DAT_141ddb858);
    uStack_350 = (char *)CONCAT44(DAT_141ddb864,uRam0000000141ddb860);
    if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    FUN_140041b80(&local_2a8,&local_358);
    ppdVar22 = &local_148;
    pdVar6 = (double *)gml_Script_anon_6431_INIT(param_1,param_2,&local_338,1,ppdVar22);
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar14 = *pdVar6;
    }
    else {
      dVar14 = (double)FUN_140e4b060(pdVar6);
    }
    thunk_FUN_141039cb0((int)dVar14);
    local_2f8 = 0xe;
    FUN_140e9c240(0);
    local_2f8 = 0xf;
    if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_338);
    }
    local_338 = 0;
    local_330 = 0;
    local_32c = 5;
    uStack_350._4_4_ = 6;
    uVar24 = uVar24 & 0xffffffffffffff00;
    uVar20 = (ulonglong)ppdVar22 & 0xffffffffffffff00;
    local_358 = param_1;
    FUN_140e87440(&local_358,DAT_1419fe0e8,0x80000000,&local_2c8,uVar20,uVar24);
    if ((1 << ((byte)uStack_350._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    uStack_350._4_4_ = 6;
    uVar20 = uVar20 & 0xffffffffffffff00;
    local_358 = param_1;
    FUN_140e87440(&local_358,DAT_1419fe158,0x80000000,&local_318,uVar20,uVar24 & 0xffffffffffffff00)
    ;
    uVar23 = (undefined4)(uVar20 >> 0x20);
    if ((1 << ((byte)uStack_350._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    local_358 = (longlong *)local_2c8;
    uStack_350 = (char *)CONCAT44(uStack_2bc,uStack_2c0);
    if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    FUN_140041b80(&local_2a8,&local_358);
    uStack_31c = local_30c;
    uStack_320 = local_310;
    if ((1 << ((byte)local_30c & 0x1f) & 0x46U) == 0) {
      local_328 = local_318;
      local_148 = &local_2a8;
    }
    else {
      local_148 = &local_2a8;
      FUN_1400419b0(&local_328,&local_318);
    }
    uStack_350._4_4_ = 7;
    local_358 = (longlong *)CONCAT44(local_358._4_4_,2);
    FUN_1400460e0(&local_328,&local_358);
    if ((1 << ((byte)uStack_350._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    local_358 = local_328;
    uStack_350 = (char *)CONCAT44(uStack_31c,uStack_320);
    if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    FUN_140041b80(&local_298,&local_358);
    if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    local_140 = (double *)&local_298;
    local_358 = (longlong *)CONCAT44(uRam0000000141ddb88c,_DAT_141ddb888);
    uStack_350 = (char *)CONCAT44(DAT_141ddb894,uRam0000000141ddb890);
    if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_358);
    local_138 = &local_288;
    uVar4 = CONCAT44(uVar23,DAT_141a04598);
    FUN_140e634e0(param_1,param_2,&local_338,3,uVar4,&local_148);
    uVar23 = (undefined4)((ulonglong)uVar4 >> 0x20);
  }
  local_2f8 = 0x12;
  FUN_140e9c240(0xffffff);
  local_2f8 = 0x14;
  if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  local_338 = 0;
  local_330 = 0;
  local_32c = 5;
  pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a004c8);
  if (pdVar6 != &local_2a8) {
    local_358 = (longlong *)*pdVar6;
    uStack_350 = (char *)pdVar6[1];
    if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    FUN_140041b80(&local_2a8,&local_358);
  }
  uVar4 = CONCAT44(uVar23,DAT_141a047c8);
  local_148 = &local_2a8;
  pdVar8 = (double *)FUN_140e634e0(param_1,param_2,&local_338,1,uVar4,&local_148);
  uVar23 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (pdVar8 != &local_158) {
    local_358 = (longlong *)*pdVar8;
    uStack_350 = (char *)pdVar8[1];
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_358);
  }
  local_2f8 = 0x15;
  if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  local_338 = 0;
  local_330 = 0;
  local_32c = 5;
  if (pdVar6 != &local_2a8) {
    local_358 = (longlong *)*pdVar6;
    uStack_350 = (char *)pdVar6[1];
    if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    FUN_140041b80(&local_2a8,&local_358);
  }
  local_148 = &local_2a8;
  pdVar8 = (double *)
           FUN_140e634e0(param_1,param_2,&local_338,1,CONCAT44(uVar23,DAT_141a04808),&local_148);
  if (pdVar8 != &local_168) {
    local_358 = (longlong *)*pdVar8;
    uStack_350 = (char *)pdVar8[1];
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_358);
  }
  local_2f8 = 0x17;
  if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  local_338 = 0;
  local_330 = 0;
  local_32c = 5;
  local_358 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_350 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  FUN_140041b80(&local_2a8,&local_358);
  local_358 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_350 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  local_148 = &local_2a8;
  if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  FUN_140041b80(&local_298,&local_358);
  local_140 = (double *)&local_298;
  pdVar8 = (double *)gml_Script_InputCursorY(param_1,param_2,&local_338,2,&local_148);
  if (pdVar8 != &local_178) {
    local_358 = (longlong *)*pdVar8;
    uStack_350 = (char *)pdVar8[1];
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_358);
  }
  local_2f8 = 0x18;
  if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  local_338 = 0;
  local_330 = 0;
  local_32c = 5;
  local_358 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_350 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  FUN_140041b80(&local_2a8,&local_358);
  local_358 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_350 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  local_148 = &local_2a8;
  if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  FUN_140041b80(&local_298,&local_358);
  local_140 = (double *)&local_298;
  ppdVar22 = &local_148;
  pdVar8 = (double *)gml_Script_InputDefineCluster(param_1,param_2,&local_338,2,ppdVar22);
  uVar23 = (undefined4)((ulonglong)ppdVar22 >> 0x20);
  if (pdVar8 != &local_188) {
    local_358 = (longlong *)*pdVar8;
    uStack_350 = (char *)pdVar8[1];
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_358);
  }
  local_2f8 = 0x1a;
  if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  local_338 = 0;
  local_330 = 0;
  local_32c = 5;
  pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00498);
  pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a004a8);
  local_148 = &local_178;
  local_140 = &local_188;
  if (pdVar8 != &local_288) {
    local_358 = (longlong *)*pdVar8;
    uStack_350 = (char *)pdVar8[1];
    if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_358);
  }
  local_138 = &local_288;
  if (pdVar9 != &local_278) {
    local_358 = (longlong *)*pdVar9;
    uStack_350 = (char *)pdVar9[1];
    if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140041b80(&local_278,&local_358);
  }
  local_130 = &local_278;
  uStack_31c = *(undefined4 *)((longlong)pdVar8 + 0xc);
  uStack_320 = *(undefined4 *)(pdVar8 + 1);
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) == 0) {
    local_328 = (longlong *)*pdVar8;
  }
  else {
    FUN_1400419b0(&local_328,pdVar8);
  }
  FUN_1400460e0(&local_328,&local_158);
  local_358 = local_328;
  uStack_350 = (char *)CONCAT44(uStack_31c,uStack_320);
  if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  FUN_140041b80(local_268,&local_358);
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_128 = local_268;
  uStack_31c = *(undefined4 *)((longlong)pdVar9 + 0xc);
  uStack_320 = *(undefined4 *)(pdVar9 + 1);
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) == 0) {
    local_328 = (longlong *)*pdVar9;
  }
  else {
    FUN_1400419b0(&local_328,pdVar9);
  }
  FUN_1400460e0(&local_328,&local_168);
  local_358 = local_328;
  uStack_350 = (char *)CONCAT44(uStack_31c,uStack_320);
  if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  FUN_140041b80(&local_258,&local_358);
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_120 = &local_258;
  uVar4 = CONCAT44(uVar23,DAT_1419fe198);
  puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_338,6,uVar4,&local_148);
  uVar23 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar7 != &local_b8) {
    local_358 = (longlong *)*puVar7;
    uStack_350 = (char *)puVar7[1];
    FUN_140041b80(&local_b8,&local_358);
    local_res18 = (byte)local_ac;
  }
  local_2f8 = 0x21;
  bVar11 = false;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a00438);
  uStack_350._4_4_ = 0xf;
  local_358 = (longlong *)0x100000000000020;
  dVar14 = (double)FUN_140e4b060(&local_358);
  uVar3 = FUN_140edd1e0(param_1,param_2,(int)dVar14);
  cVar1 = FUN_140162f90(uVar3,uVar4);
  if ((1 << ((byte)uStack_350._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_338);
    }
    local_338 = 0;
    local_330 = 0;
    local_32c = 5;
    pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a004c8);
    uStack_350._4_4_ = 0xf;
    local_358 = (longlong *)0x10000000000013a;
    local_328 = (longlong *)0x10000000000013a;
    uStack_320 = (undefined4)uStack_350;
    uStack_31c = 0xf;
    if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    FUN_140041b80(&local_2a8,&local_328);
    local_148 = &local_2a8;
    uVar4 = FUN_140e634e0(param_1,param_2,&local_338,1,CONCAT44(uVar23,DAT_141a02ef8),&local_148);
    cVar1 = FUN_140e491e0(uVar4);
    bVar11 = cVar1 == '\0';
  }
  local_6c = 0xd;
  if (bVar11) {
    uVar18 = 0x3ff00000;
  }
  else {
    uVar18 = 0;
  }
  local_78 = (ulonglong)uVar18 << 0x20;
  local_2f8 = 0x23;
  if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  local_338 = 0;
  local_330 = 0;
  local_32c = 5;
  if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e0);
  }
  local_2e0 = 0;
  local_2d8 = 0;
  local_2d4 = 5;
  if ((1 << ((byte)local_2e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f0);
  }
  local_2f0 = 0;
  local_2e8 = 0;
  local_2e4 = 5;
  local_358 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_350 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  FUN_140041b80(&local_2a8,&local_358);
  uStack_31c = DAT_141ddb874;
  uStack_320 = DAT_141ddb870;
  if ((1 << ((byte)DAT_141ddb874 & 0x1f) & 0x46U) == 0) {
    local_328 = DAT_141ddb868;
    local_148 = &local_2a8;
  }
  else {
    local_148 = &local_2a8;
    FUN_1400419b0(&local_328,&DAT_141ddb868);
  }
  uVar18 = uStack_31c;
  local_358 = local_328;
  uStack_350 = (char *)CONCAT44(uStack_31c,uStack_320);
  if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  FUN_140041b80(&local_298,&local_358);
  if ((1 << ((byte)uVar18 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_140 = (double *)&local_298;
  pdVar10 = (double *)
            gml_Script_anon_147_DefineBossAttributes_BOSSMODSINIT
                      (param_1,param_2,&local_2f0,1,&local_148);
  if (pdVar10 != &local_288) {
    local_358 = (longlong *)*pdVar10;
    uStack_350 = (char *)pdVar10[1];
    if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_358);
  }
  local_138 = &local_288;
  ppuVar21 = &local_140;
  pdVar10 = (double *)FUN_140e64420(param_1,param_2,&local_2e0,2,ppuVar21);
  uVar23 = (undefined4)((ulonglong)ppuVar21 >> 0x20);
  if (pdVar10 != &local_278) {
    local_358 = (longlong *)*pdVar10;
    uStack_350 = (char *)pdVar10[1];
    if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140041b80(&local_278,&local_358);
  }
  local_130 = &local_278;
  puVar7 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_338,1,CONCAT44(uVar23,DAT_141a086f8),&local_130);
  if ((double *)puVar7 != &local_198) {
    local_358 = (longlong *)*puVar7;
    uStack_350 = (char *)puVar7[1];
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_358);
  }
  local_2f8 = 0x25;
  if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  local_338 = 0;
  local_330 = 0;
  local_32c = 5;
  local_148 = &local_198;
  local_358 = (longlong *)CONCAT44(uRam00000001419eddf4,_DAT_1419eddf0);
  uStack_350 = (char *)CONCAT44(uRam00000001419eddfc,uRam00000001419eddf8);
  if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  FUN_140041b80(&local_298,&local_358);
  local_140 = (double *)&local_298;
  local_358 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_350 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
  if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_358);
  local_138 = &local_288;
  ppdVar22 = &local_148;
  gml_Script_pal_swap_layer_init(param_1,param_2,&local_338,3,ppdVar22);
  uVar23 = (undefined4)((ulonglong)ppdVar22 >> 0x20);
  local_2f8 = 0x27;
  pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00448);
  if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
    dVar14 = *pdVar9;
  }
  else {
    dVar14 = (double)FUN_140e4b060(pdVar9);
  }
  if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
    dVar15 = *pdVar8;
  }
  else {
    dVar15 = (double)FUN_140e4b060(pdVar8);
  }
  if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
    dVar16 = *pdVar10;
  }
  else {
    dVar16 = (double)FUN_140e4b060(pdVar10);
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar17 = *pdVar6;
  }
  else {
    dVar17 = (double)FUN_140e4b060(pdVar6);
  }
  FUN_140ec5d30(param_1,(longlong)dVar17,(float)dVar16,(float)dVar15,CONCAT44(uVar23,(float)dVar14))
  ;
  local_2f8 = 0x29;
  if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  local_330 = 0;
  uStack_350 = "gml_Script_pal_swap_reset";
  local_358 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_358;
  local_32c = 5;
  local_338 = 0;
  local_348 = 0x71;
  iVar2 = FUN_140ec9d80();
  if (iVar2 != -1) {
    local_348 = 0x71;
    FUN_140ec9dc0();
  }
  DAT_141dc7a50 = local_358;
  if ((1 << ((byte)local_2e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f0);
  }
  if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e0);
  }
  if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << (local_res18 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  _eh_vector_destructor_iterator_(&local_2a8,0x10,0x11,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_308;
  return;
}

