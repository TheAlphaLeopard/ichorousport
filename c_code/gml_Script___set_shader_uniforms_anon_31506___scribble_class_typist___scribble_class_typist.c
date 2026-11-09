// gml_Script___set_shader_uniforms_anon_31506___scribble_class_typist___scribble_class_typist @ 0x1401743e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___set_shader_uniforms_anon_31506___scribble_class_typist___scribble_class_typist
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  double *pdVar6;
  double *pdVar7;
  undefined8 uVar8;
  double dVar9;
  double *pdVar10;
  uint local_res8;
  code *pcVar11;
  undefined8 *puVar12;
  undefined1 **in_stack_fffffffffffffc80;
  ulonglong uVar13;
  double **ppdVar14;
  ulonglong uVar15;
  double local_378;
  undefined8 uStack_370;
  double local_368;
  double dStack_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined4 local_34c;
  double local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  char *local_330;
  undefined4 local_328;
  double local_320;
  int local_314;
  double local_310;
  undefined4 local_304;
  undefined8 local_300;
  undefined4 local_2f4;
  double local_2e8;
  byte local_2dc;
  double local_2d8;
  byte local_2cc;
  double local_2c8;
  byte local_2bc;
  double local_2b8;
  undefined4 local_2ac;
  undefined1 local_2a8 [12];
  byte local_29c;
  undefined1 local_298 [12];
  byte local_28c;
  undefined1 local_288 [12];
  byte local_27c;
  undefined1 local_278 [12];
  byte local_26c;
  undefined1 local_268 [12];
  byte local_25c;
  undefined1 local_258 [12];
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
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  double local_138;
  undefined4 local_12c;
  double local_128;
  undefined4 local_120;
  undefined4 local_11c;
  double local_118;
  undefined4 local_110;
  undefined4 local_10c;
  double local_108;
  uint uStack_fc;
  double *local_f8;
  double *local_f0;
  double *local_e8;
  double *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  
  local_330 = 
  "gml_Script___set_shader_uniforms@anon@31506@__scribble_class_typist@__scribble_class_typist";
  local_338 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_338;
  local_328 = 0x37e;
  pcVar11 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_2e8,0x10,0x12,FUN_1400424d0,FUN_140041b30);
  local_314 = 0xffffff;
  local_320 = 0.0;
  local_2f4 = 0xffffff;
  local_300 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_304 = 0xffffff;
  local_310 = 0.0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_res8._0_1_ = 0xff;
  local_res8 = 0xffffff;
  uStack_fc = 0xffffff;
  local_108 = 0.0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_34c = 0;
  local_358 = 0;
  local_13c = 0;
  local_148 = 0;
  local_14c = 0;
  local_158 = 0;
  local_15c = 0;
  local_168 = 0;
  local_16c = 0;
  local_178 = 0;
  local_17c = 0;
  local_188 = 0;
  local_18c = 0;
  local_198 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddd004) &&
     (_Init_thread_header(&DAT_141ddd004), DAT_141ddd004 == -1)) {
    DAT_141ddcff8 = (longlong *)FUN_140e63aa0(DAT_141a07998);
    _Init_thread_footer(&DAT_141ddd004);
  }
  if (DAT_141ddc087 == '\0') {
    FUN_140e64380(DAT_141ddcff8,
                  "gml_Script___set_shader_uniforms@anon@31506@__scribble_class_typist@__scribble_class_typist"
                 );
    FUN_140e64380(param_1,
                  "gml_Script___set_shader_uniforms@anon@31506@__scribble_class_typist@__scribble_class_typist"
                 );
  }
  local_328 = 0x380;
  if (DAT_141ddc087 == '\0') {
    DAT_141ddc087 = '\x01';
    pdVar6 = (double *)(**(code **)(*DAT_141ddcff8 + 0x10))(DAT_141ddcff8,DAT_141a04db8);
    uVar5 = (undefined4)((ulonglong)pcVar11 >> 0x20);
    uStack_370 = (double)CONCAT44(0xf,(undefined4)uStack_370);
    local_378 = 7.291177646402876e-304;
    local_348 = 7.291177646402876e-304;
    uStack_340 = uStack_370;
    if ((1 << (local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    FUN_140041b80(&local_2e8,&local_348);
    local_f8 = &local_2e8;
    local_378 = _DAT_141dcbb08;
    uStack_370 = dRam0000000141dcbb10;
    if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    FUN_140041b80(&local_2d8,&local_378);
    local_f0 = &local_2d8;
    FUN_140e609c0(DAT_141ddcff8);
    uVar8 = CONCAT44(uVar5,DAT_141a04778);
    pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_358,2,uVar8,&local_f8);
    uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (pdVar7 != pdVar6) {
      local_378 = *pdVar7;
      uStack_370 = pdVar7[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar6);
      }
      FUN_140041b80(pdVar6,&local_378);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    pdVar6 = (double *)(**(code **)(*DAT_141ddcff8 + 0x10))(DAT_141ddcff8,DAT_141a05ef8);
    uStack_370 = (double)CONCAT44(0xf,(undefined4)uStack_370);
    local_378 = 7.291177646402876e-304;
    local_348 = 7.291177646402876e-304;
    uStack_340 = uStack_370;
    if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    FUN_140041b80(&local_2c8,&local_348);
    local_e8 = &local_2c8;
    local_378 = _DAT_141dcbaa8;
    uStack_370 = dRam0000000141dcbab0;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    FUN_140041b80(&local_2b8,&local_378);
    local_e0 = &local_2b8;
    FUN_140e609c0(DAT_141ddcff8);
    uVar8 = CONCAT44(uVar5,DAT_141a04778);
    pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_148,2,uVar8,&local_e8);
    uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (pdVar7 != pdVar6) {
      local_378 = *pdVar7;
      uStack_370 = pdVar7[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar6);
      }
      FUN_140041b80(pdVar6,&local_378);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    pdVar6 = (double *)(**(code **)(*DAT_141ddcff8 + 0x10))(DAT_141ddcff8,DAT_141a055a8);
    uStack_370 = (double)CONCAT44(0xf,(undefined4)uStack_370);
    local_378 = 7.291177646402876e-304;
    local_348 = 7.291177646402876e-304;
    uStack_340 = uStack_370;
    if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2a8);
    }
    FUN_140041b80(local_2a8,&local_348);
    local_378 = _DAT_141dcb9f8;
    uStack_370 = dRam0000000141dcba00;
    local_d8 = local_2a8;
    if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_298);
    }
    FUN_140041b80(local_298,&local_378);
    local_d0 = local_298;
    FUN_140e609c0(DAT_141ddcff8);
    uVar8 = CONCAT44(uVar5,DAT_141a04778);
    pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_158,2,uVar8,&local_d8);
    uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (pdVar7 != pdVar6) {
      local_378 = *pdVar7;
      uStack_370 = pdVar7[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar6);
      }
      FUN_140041b80(pdVar6,&local_378);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    pdVar6 = (double *)(**(code **)(*DAT_141ddcff8 + 0x10))(DAT_141ddcff8,DAT_141a05638);
    uStack_370 = (double)CONCAT44(0xf,(undefined4)uStack_370);
    local_378 = 7.291177646402876e-304;
    local_348 = 7.291177646402876e-304;
    uStack_340 = uStack_370;
    if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_288);
    }
    FUN_140041b80(local_288,&local_348);
    local_c8 = local_288;
    local_378 = _DAT_141dcb968;
    uStack_370 = dRam0000000141dcb970;
    if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_278);
    }
    FUN_140041b80(local_278,&local_378);
    local_c0 = local_278;
    FUN_140e609c0(DAT_141ddcff8);
    uVar8 = CONCAT44(uVar5,DAT_141a04778);
    pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_168,2,uVar8,&local_c8);
    uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (pdVar7 != pdVar6) {
      local_378 = *pdVar7;
      uStack_370 = pdVar7[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar6);
      }
      FUN_140041b80(pdVar6,&local_378);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    pdVar6 = (double *)(**(code **)(*DAT_141ddcff8 + 0x10))(DAT_141ddcff8,DAT_141a04f08);
    uStack_370 = (double)CONCAT44(0xf,(undefined4)uStack_370);
    local_378 = 7.291177646402876e-304;
    local_348 = 7.291177646402876e-304;
    uStack_340 = uStack_370;
    if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_268);
    }
    FUN_140041b80(local_268,&local_348);
    local_b8 = local_268;
    local_378 = _DAT_141dcb9b8;
    uStack_370 = dRam0000000141dcb9c0;
    if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_258);
    }
    FUN_140041b80(local_258,&local_378);
    local_b0 = local_258;
    FUN_140e609c0(DAT_141ddcff8);
    uVar8 = CONCAT44(uVar5,DAT_141a04778);
    pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_178,2,uVar8,&local_b8);
    uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (pdVar7 != pdVar6) {
      local_378 = *pdVar7;
      uStack_370 = pdVar7[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar6);
      }
      FUN_140041b80(pdVar6,&local_378);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    pdVar6 = (double *)(**(code **)(*DAT_141ddcff8 + 0x10))(DAT_141ddcff8,DAT_141a050c8);
    uStack_370 = (double)CONCAT44(0xf,(undefined4)uStack_370);
    local_378 = 7.291177646402876e-304;
    local_348 = 7.291177646402876e-304;
    uStack_340 = uStack_370;
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_248);
    }
    FUN_140041b80(local_248,&local_348);
    local_a8 = local_248;
    local_378 = _DAT_141dcbaf8;
    uStack_370 = dRam0000000141dcbb00;
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_378);
    local_a0 = local_238;
    FUN_140e609c0(DAT_141ddcff8);
    uVar8 = CONCAT44(uVar5,DAT_141a04778);
    pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_188,2,uVar8,&local_a8);
    uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (pdVar7 != pdVar6) {
      local_378 = *pdVar7;
      uStack_370 = pdVar7[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar6);
      }
      FUN_140041b80(pdVar6,&local_378);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    pdVar6 = (double *)(**(code **)(*DAT_141ddcff8 + 0x10))(DAT_141ddcff8,DAT_141a05e78);
    uStack_370 = (double)CONCAT44(0xf,(undefined4)uStack_370);
    local_378 = 7.291177646402876e-304;
    local_348 = 7.291177646402876e-304;
    uStack_340 = uStack_370;
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_348);
    local_98 = local_228;
    local_378 = _DAT_141dcba68;
    uStack_370 = dRam0000000141dcba70;
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_378);
    local_90 = local_218;
    FUN_140e609c0(DAT_141ddcff8);
    uVar8 = CONCAT44(uVar5,DAT_141a04778);
    pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_198,2,uVar8,&local_98);
    uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (pdVar7 != pdVar6) {
      local_378 = *pdVar7;
      uStack_370 = pdVar7[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar6);
      }
      FUN_140041b80(pdVar6,&local_378);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    pdVar6 = (double *)(**(code **)(*DAT_141ddcff8 + 0x10))(DAT_141ddcff8,DAT_141a055c8);
    uStack_370 = (double)CONCAT44(0xf,(undefined4)uStack_370);
    local_378 = 7.291177646402876e-304;
    local_348 = 7.291177646402876e-304;
    uStack_340 = uStack_370;
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_348);
    local_88 = local_208;
    local_378 = _DAT_141dcba98;
    uStack_370 = dRam0000000141dcbaa0;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_378);
    local_80 = local_1f8;
    FUN_140e609c0(DAT_141ddcff8);
    uVar8 = CONCAT44(uVar5,DAT_141a04778);
    pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_1a8,2,uVar8,&local_88);
    uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (pdVar7 != pdVar6) {
      local_378 = *pdVar7;
      uStack_370 = pdVar7[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar6);
      }
      FUN_140041b80(pdVar6,&local_378);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    pdVar6 = (double *)(**(code **)(*DAT_141ddcff8 + 0x10))(DAT_141ddcff8,DAT_141a05bb8);
    uStack_370 = (double)CONCAT44(0xf,(undefined4)uStack_370);
    local_378 = 7.291177646402876e-304;
    local_348 = 7.291177646402876e-304;
    uStack_340 = uStack_370;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_348);
    local_78 = local_1e8;
    local_378 = _DAT_141dcb9c8;
    uStack_370 = dRam0000000141dcb9d0;
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_378);
    local_70 = local_1d8;
    FUN_140e609c0(DAT_141ddcff8);
    in_stack_fffffffffffffc80 = &local_78;
    pcVar11 = (code *)CONCAT44(uVar5,DAT_141a04778);
    pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_1b8,2,pcVar11,in_stack_fffffffffffffc80)
    ;
    if (pdVar7 != pdVar6) {
      local_378 = *pdVar7;
      uStack_370 = pdVar7[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar6);
      }
      FUN_140041b80(pdVar6,&local_378);
    }
    FUN_140e60910(1);
  }
  local_328 = 0x38b;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07738);
  iVar4 = FUN_140e851f0(uVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_328 = 0x38d;
    pdVar6 = (double *)(**(code **)(*DAT_141ddcff8 + 8))(DAT_141ddcff8,DAT_141a05ef8);
    if (pdVar6 != &local_2e8) {
      local_378 = *pdVar6;
      uStack_370 = pdVar6[1];
      if ((1 << (local_2dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2e8);
      }
      FUN_140041b80(&local_2e8,&local_378);
    }
    local_f8 = &local_2e8;
    local_378 = _DAT_1419e1e80;
    uStack_370 = dRam00000001419e1e88;
    if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    FUN_140041b80(&local_2d8,&local_378);
    local_f0 = &local_2d8;
    FUN_140eca000(2,&local_f8);
    local_328 = 0x38e;
    if ((double *)param_3 != &DAT_1419df7b0) {
      local_378 = DAT_1419df7b0;
      uStack_370 = _DAT_1419df7b8;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_378);
    }
    goto LAB_140176320;
  }
  local_328 = 0x391;
  pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a078b8);
  if (pdVar6 != &local_320) {
    local_378 = *pdVar6;
    uStack_370 = pdVar6[1];
    if ((1 << ((byte)local_314 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_320);
    }
    FUN_140041b80(&local_320,&local_378);
  }
  local_328 = 0x392;
  cVar3 = FUN_140e491e0(uVar8);
  bVar2 = false;
  bVar1 = true;
  if (cVar3 == '\0') {
    local_328 = 0x392;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a07738);
    if (local_314 == 0) {
LAB_14017540c:
      local_320 = local_320 + 15.0;
    }
    else if (local_314 == 1) {
      FUN_140e632c0("unable to add a number to string");
    }
    else if (local_314 == 7) {
      local_320 = (double)CONCAT44(local_320._4_4_,local_320._0_4_ + 0xf);
    }
    else if (local_314 == 10) {
      local_320 = (double)((longlong)local_320 + 0xf);
    }
    else {
      if (local_314 == 0xd) {
        local_314 = 0;
        goto LAB_14017540c;
      }
      uStack_370 = (double)CONCAT44(10,(undefined4)uStack_370);
      local_378 = 7.4109846876187e-323;
      FUN_140042910(&DAT_14172c404,&local_320,&local_378);
      if ((1 << ((byte)((ulonglong)uStack_370 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
    }
  }
  local_328 = 0x394;
  if ((1 << ((byte)local_2f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_300);
  }
  pdVar6 = (double *)0x0;
  local_2f4 = 0;
  local_300 = 0;
  local_328 = 0x395;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07b88);
  cVar3 = FUN_140e491e0(uVar8);
  if (cVar3 == '\0') goto LAB_140175bd7;
  local_328 = 0x397;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_358 = 0;
  local_350 = 0;
  local_34c = 5;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07698);
  uVar13 = (ulonglong)in_stack_fffffffffffffc80 & 0xffffffffffffff00;
  uVar15 = (ulonglong)pcVar11 & 0xffffffffffffff00;
  FUN_140e87440(uVar8,DAT_141a05da8,0x80000000,&local_1c8,uVar15,uVar13);
  FUN_140e87440(&local_1c8,DAT_141a05ac8,0x80000000,&local_58,uVar15 & 0xffffffffffffff00,
                uVar13 & 0xffffffffffffff00);
  local_378 = _DAT_1419df7c0;
  uStack_370 = dRam00000001419df7c8;
  if ((1 << (local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  FUN_140041b80(&local_2e8,&local_378);
  local_f8 = &local_2e8;
  switch(local_1bc) {
  default:
switchD_140175552_caseD_1:
    uVar8 = 0;
    break;
  case 6:
    uVar8 = local_1c8;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_1c8 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_140175552_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar5 = FUN_140e4a8b0(&local_1c8);
    uVar8 = FUN_140e87250(uVar5);
  }
  puVar12 = &local_58;
  pdVar7 = (double *)FUN_140e63610(uVar8,param_2,&local_358,1,puVar12,&local_f8);
  uVar5 = (undefined4)((ulonglong)puVar12 >> 0x20);
  if (pdVar7 != &local_310) {
    local_378 = *pdVar7;
    uStack_370 = pdVar7[1];
    if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_310);
    }
    FUN_140041b80(&local_310,&local_378);
  }
  local_328 = 0x398;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_358 = 0;
  local_350 = 0;
  local_34c = 5;
  local_f8 = &local_310;
  ppdVar14 = &local_f8;
  uVar15 = CONCAT44(uVar5,DAT_1419fcb88);
  uVar8 = FUN_140e634e0(param_1,param_2,&local_358,1,uVar15,ppdVar14);
  cVar3 = FUN_140e491e0(uVar8);
  if (cVar3 == '\0') {
    local_328 = 0x398;
    if ((double *)param_3 != &DAT_1419df7b0) {
      local_378 = DAT_1419df7b0;
      uStack_370 = _DAT_1419df7b8;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_378);
    }
    goto LAB_140176319;
  }
  local_328 = 0x39a;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_358 = 0;
  local_350 = 0;
  local_34c = 5;
  FUN_140e87440(&local_310,DAT_141a06b68,0x80000000,&local_68,uVar15 & 0xffffffffffffff00,
                (ulonglong)ppdVar14 & 0xffffffffffffff00);
  switch(local_304) {
  default:
switchD_140175741_caseD_1:
    dVar9 = 0.0;
    break;
  case 6:
    dVar9 = local_310;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_310 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_140175741_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar5 = FUN_140e4a8b0(&local_310);
    dVar9 = (double)FUN_140e87250(uVar5);
  }
  uVar15 = 0;
  puVar12 = &local_68;
  pdVar7 = (double *)FUN_140e63610(dVar9,param_2,&local_358,0,puVar12,0);
  dVar9 = 0.0;
  if (pdVar7 != &local_108) {
    local_378 = *pdVar7;
    uStack_370 = pdVar7[1];
    FUN_140041b80(&local_108,&local_378);
    local_res8 = uStack_fc;
    dVar9 = local_108;
  }
  local_328 = 0x39b;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07c18);
  uVar5 = 0;
  if ((local_res8 == 2) && (dVar9 != 0.0)) {
    uVar5 = *(undefined4 *)((longlong)dVar9 + 0x24);
  }
  cVar3 = FUN_140162f90(uVar5,uVar8);
  if (cVar3 == '\0') {
    local_328 = 0x3a2;
    if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    local_358 = 0;
    local_350 = 0;
    local_34c = 5;
    pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07c18);
    local_368 = _DAT_141dcb998;
    dStack_360 = (double)uRam0000000141dcb9a0;
    if ((1 << (local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    FUN_140041b80(&local_2e8,&local_368);
    local_f8 = &local_2e8;
    if (pdVar6 != &local_2d8) {
      local_368 = *pdVar6;
      dStack_360 = pdVar6[1];
      if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      FUN_140041b80(&local_2d8,&local_368);
    }
    local_f0 = &local_2d8;
    local_368 = _DAT_141dcba08;
    dStack_360 = (double)uRam0000000141dcba10;
    if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    FUN_140041b80(&local_2c8,&local_368);
    local_e8 = &local_2c8;
    iVar4 = 0;
    if ((local_res8 == 2) && (dVar9 != 0.0)) {
      iVar4 = *(int *)((longlong)dVar9 + 0x24);
    }
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_2ac = 0;
    local_2b8 = (double)iVar4;
    local_e0 = &local_2b8;
    local_368 = _DAT_141dcba28;
    dStack_360 = dRam0000000141dcba30;
    if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2a8);
    }
    FUN_140041b80(local_2a8,&local_368);
    pcVar11 = (code *)&local_f8;
    local_d8 = local_2a8;
    gml_Script___scribble_error(param_1,param_2,&local_358,5,pcVar11);
  }
  else {
    local_328 = 0x39d;
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07c18);
    iVar4 = FUN_140e4a740(uVar8);
    if (((local_res8 & 0xffffff) == 2) && (dVar9 != 0.0)) {
      if ((iVar4 < 0) || (*(int *)((longlong)dVar9 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)((longlong)dVar9 + 0x24));
      }
      else {
        pdVar6 = (double *)((longlong)iVar4 * 0x10 + *(longlong *)((longlong)dVar9 + 8));
      }
      if (pdVar6 != &local_138) goto LAB_140175888;
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      pdVar6 = &local_108;
LAB_140175888:
      local_378 = *pdVar6;
      uStack_370 = pdVar6[1];
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_378);
    }
    local_328 = 0x39e;
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07818);
    cVar3 = FUN_140e491e0(uVar8);
    pcVar11 = (code *)((ulonglong)puVar12 & 0xffffffffffffff00);
    if (cVar3 == '\0') {
      FUN_140e87440(&local_138,DAT_141a07348,0x80000000,&local_128,pcVar11,
                    uVar15 & 0xffffffffffffff00);
      uStack_340 = CONCAT44(local_11c,local_120);
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
        local_348 = local_128;
      }
      else {
        FUN_1400419b0(&local_348,&local_128);
      }
      pdVar6 = &local_348;
    }
    else {
      FUN_140e87440(&local_138,DAT_141a06688,0x80000000,&local_118,pcVar11,
                    uVar15 & 0xffffffffffffff00);
      uStack_370 = (double)CONCAT44(local_10c,local_110);
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
        local_378 = local_118;
      }
      else {
        FUN_1400419b0(&local_378,&local_118);
      }
      pdVar6 = &local_378;
      bVar2 = true;
      bVar1 = false;
    }
    local_368 = *pdVar6;
    dStack_360 = pdVar6[1];
    if ((1 << ((byte)local_2f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_300);
    }
    FUN_140041b80(&local_300,&local_368);
    if ((bVar1) && ((1 << ((byte)((ulonglong)uStack_340 >> 0x20) & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_348);
    }
    if ((bVar2) && ((1 << ((byte)((ulonglong)uStack_370 >> 0x20) & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_378);
    }
  }
LAB_140175bd7:
  uVar5 = (undefined4)((ulonglong)pcVar11 >> 0x20);
  local_328 = 0x3a6;
  pdVar6 = (double *)(**(code **)(*DAT_141ddcff8 + 8))(DAT_141ddcff8,DAT_141a04db8);
  pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07818);
  if (pdVar6 != &local_2e8) {
    local_368 = *pdVar6;
    dStack_360 = pdVar6[1];
    if ((1 << (local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    FUN_140041b80(&local_2e8,&local_368);
  }
  local_f8 = &local_2e8;
  if (pdVar7 != &local_2d8) {
    local_368 = *pdVar7;
    dStack_360 = pdVar7[1];
    if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    FUN_140041b80(&local_2d8,&local_368);
  }
  local_f0 = &local_2d8;
  FUN_140eca000(2,&local_f8);
  local_328 = 0x3a7;
  pdVar6 = (double *)(**(code **)(*DAT_141ddcff8 + 8))(DAT_141ddcff8,DAT_141a05ef8);
  if (pdVar6 != &local_2e8) {
    local_368 = *pdVar6;
    dStack_360 = pdVar6[1];
    if ((1 << (local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    FUN_140041b80(&local_2e8,&local_368);
  }
  local_f8 = &local_2e8;
  local_f0 = &local_320;
  FUN_140eca000(2,&local_f8);
  local_328 = 0x3a8;
  pdVar6 = (double *)(**(code **)(*DAT_141ddcff8 + 8))(DAT_141ddcff8,DAT_141a055a8);
  if (pdVar6 != &local_2e8) {
    local_368 = *pdVar6;
    dStack_360 = pdVar6[1];
    if ((1 << (local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    FUN_140041b80(&local_2e8,&local_368);
  }
  local_f8 = &local_2e8;
  local_f0 = (double *)&local_300;
  FUN_140eca000(2,&local_f8);
  local_328 = 0x3a9;
  pdVar6 = (double *)(**(code **)(*DAT_141ddcff8 + 8))(DAT_141ddcff8,DAT_141a04f08);
  pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a077f8);
  if (pdVar6 != &local_2e8) {
    local_368 = *pdVar6;
    dStack_360 = pdVar6[1];
    if ((1 << (local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    FUN_140041b80(&local_2e8,&local_368);
  }
  local_f8 = &local_2e8;
  if (pdVar7 != &local_2d8) {
    local_368 = *pdVar7;
    dStack_360 = pdVar7[1];
    if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    FUN_140041b80(&local_2d8,&local_368);
  }
  local_f0 = &local_2d8;
  FUN_140ec9ea0(2,&local_f8);
  local_328 = 0x3aa;
  pdVar6 = (double *)(**(code **)(*DAT_141ddcff8 + 8))(DAT_141ddcff8,DAT_141a050c8);
  pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07858);
  pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07718);
  if (pdVar6 != &local_2e8) {
    local_368 = *pdVar6;
    dStack_360 = pdVar6[1];
    if ((1 << (local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    FUN_140041b80(&local_2e8,&local_368);
  }
  local_f8 = &local_2e8;
  if (pdVar7 != &local_2d8) {
    local_368 = *pdVar7;
    dStack_360 = pdVar7[1];
    if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    FUN_140041b80(&local_2d8,&local_368);
  }
  local_f0 = &local_2d8;
  if (pdVar10 != &local_2c8) {
    local_368 = *pdVar10;
    dStack_360 = pdVar10[1];
    if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    FUN_140041b80(&local_2c8,&local_368);
  }
  local_e8 = &local_2c8;
  FUN_140ec9ea0(3,&local_f8);
  local_328 = 0x3ab;
  pdVar6 = (double *)(**(code **)(*DAT_141ddcff8 + 8))(DAT_141ddcff8,DAT_141a05e78);
  pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a079f8);
  pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07bb8);
  if (pdVar6 != &local_2e8) {
    local_368 = *pdVar6;
    dStack_360 = pdVar6[1];
    if ((1 << (local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    FUN_140041b80(&local_2e8,&local_368);
  }
  local_f8 = &local_2e8;
  if (pdVar7 != &local_2d8) {
    local_368 = *pdVar7;
    dStack_360 = pdVar7[1];
    if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    FUN_140041b80(&local_2d8,&local_368);
  }
  local_f0 = &local_2d8;
  if (pdVar10 != &local_2c8) {
    local_368 = *pdVar10;
    dStack_360 = pdVar10[1];
    if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    FUN_140041b80(&local_2c8,&local_368);
  }
  local_e8 = &local_2c8;
  FUN_140ec9ea0(3,&local_f8);
  local_328 = 0x3ac;
  pdVar6 = (double *)(**(code **)(*DAT_141ddcff8 + 8))(DAT_141ddcff8,DAT_141a055c8);
  pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07838);
  if (pdVar6 != &local_2e8) {
    local_368 = *pdVar6;
    dStack_360 = pdVar6[1];
    if ((1 << (local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    FUN_140041b80(&local_2e8,&local_368);
  }
  local_f8 = &local_2e8;
  if (pdVar7 != &local_2d8) {
    local_368 = *pdVar7;
    dStack_360 = pdVar7[1];
    if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    FUN_140041b80(&local_2d8,&local_368);
  }
  local_f0 = &local_2d8;
  FUN_140ec9ea0(2,&local_f8);
  local_328 = 0x3ad;
  pdVar6 = (double *)(**(code **)(*DAT_141ddcff8 + 8))(DAT_141ddcff8,DAT_141a05bb8);
  pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07bc8);
  if (pdVar6 != &local_2e8) {
    local_368 = *pdVar6;
    dStack_360 = pdVar6[1];
    if ((1 << (local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    FUN_140041b80(&local_2e8,&local_368);
  }
  local_f8 = &local_2e8;
  if (pdVar7 != &local_2d8) {
    local_368 = *pdVar7;
    dStack_360 = pdVar7[1];
    if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    FUN_140041b80(&local_2d8,&local_368);
  }
  local_f0 = &local_2d8;
  FUN_140ec9ea0(2,&local_f8);
  local_328 = 0x3ae;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_358 = 0;
  local_350 = 0;
  local_34c = 5;
  pdVar6 = (double *)(**(code **)(*DAT_141ddcff8 + 8))(DAT_141ddcff8,DAT_141a05638);
  pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05ad8);
  if (pdVar6 != &local_2e8) {
    local_368 = *pdVar6;
    dStack_360 = pdVar6[1];
    if ((1 << (local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    FUN_140041b80(&local_2e8,&local_368);
  }
  local_f8 = &local_2e8;
  if (pdVar7 != &local_2d8) {
    local_368 = *pdVar7;
    dStack_360 = pdVar7[1];
    if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    FUN_140041b80(&local_2d8,&local_368);
  }
  local_f0 = &local_2d8;
  FUN_140e634e0(param_1,param_2,&local_358,2,CONCAT44(uVar5,DAT_141a047e8),&local_f8);
LAB_140176319:
LAB_140176320:
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
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
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_res8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_310);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_2f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_300);
  }
  if ((1 << ((byte)local_314 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_320);
  }
  _eh_vector_destructor_iterator_(&local_2e8,0x10,0x12,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_338;
  return param_3;
}

