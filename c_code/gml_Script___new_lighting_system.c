// gml_Script___new_lighting_system @ 0x1403a6820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___new_lighting_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  undefined8 *puVar10;
  double dVar11;
  int iVar12;
  double dVar13;
  undefined4 uVar17;
  undefined8 uVar14;
  ulonglong uVar15;
  double **ppdVar16;
  ulonglong uVar18;
  undefined8 local_398;
  undefined4 local_390;
  undefined4 local_38c;
  undefined8 local_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  uint uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  double local_368;
  undefined4 local_35c;
  double local_358;
  undefined4 local_34c;
  double local_348;
  undefined4 local_33c;
  double local_338;
  undefined4 local_32c;
  undefined8 local_328;
  undefined4 local_31c;
  double *local_318;
  double *local_310;
  double *local_308;
  double *local_300;
  undefined8 *local_2f8;
  undefined8 local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  char *local_2d0;
  undefined4 local_2c8;
  double local_2c0;
  uint local_2b4;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  uint local_2a0;
  undefined4 local_298;
  uint uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  double local_288;
  undefined4 local_280;
  undefined4 local_27c;
  double local_278;
  uint local_26c;
  double local_268;
  uint local_25c;
  double local_258;
  uint uStack_24c;
  double local_248;
  undefined4 local_240;
  undefined4 local_23c;
  double local_238;
  undefined4 local_230;
  undefined4 local_22c;
  double local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double local_1a8;
  undefined4 local_19c;
  double local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  uint uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double *local_178;
  double *local_170;
  double local_168;
  undefined4 local_15c;
  double local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double *local_f8;
  undefined8 local_f0;
  double *local_e8;
  double local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double *local_88;
  double *local_80;
  
  local_2d0 = "gml_Script_anon@4213@___struct___136@__new_lighting_system@lighting_system";
  local_2d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2d8;
  local_2c8 = 0x7e;
  _eh_vector_constructor_iterator_(&local_368,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_11c = 0xffffff;
  local_128 = 0.0;
  local_25c = 0xffffff;
  local_268 = 0.0;
  local_26c = 0xffffff;
  local_278 = 0.0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0.0;
  local_2b4 = 0xffffff;
  local_2c0 = 0.0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_2a0 = 0xffffff;
  uStack_24c = 0xffffff;
  dVar11 = 0.0;
  local_258 = 0.0;
  local_22c = 0xffffff;
  local_238 = 0.0;
  local_23c = 0xffffff;
  local_248 = 0.0;
  local_f0 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57b60);
  local_27c = 0xffffff;
  local_288 = 0.0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_21c = 0xffffff;
  local_228 = 0.0;
  local_80 = (double *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57b00);
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_38c = 0;
  local_398 = 0;
  local_2a4 = 0;
  local_2b0 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2c8 = 0x7f;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4fc8);
  if (param_4 < 1) {
    pdVar6 = (double *)&DAT_1419df7b0;
LAB_1403a6a7d:
    local_388 = *pdVar6;
    uStack_380 = *(undefined4 *)(pdVar6 + 1);
    uStack_37c = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_348);
    }
    FUN_140041b80(&local_348,&local_388);
  }
  else {
    pdVar6 = (double *)*param_5;
    if (pdVar6 != &local_348) goto LAB_1403a6a7d;
  }
  local_308 = &local_348;
  if (param_4 < 2) {
    pdVar6 = (double *)&DAT_1419df7b0;
LAB_1403a6acc:
    local_388 = *pdVar6;
    uStack_380 = *(undefined4 *)(pdVar6 + 1);
    uStack_37c = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_338);
    }
    FUN_140041b80(&local_338,&local_388);
  }
  else {
    pdVar6 = (double *)param_5[1];
    if (pdVar6 != &local_338) goto LAB_1403a6acc;
  }
  local_300 = &local_338;
  FUN_140e63610(param_1,param_2,&local_398,2,uVar5,&local_308);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_2c8 = 0x81;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f54c8);
  local_170 = pdVar6;
  if (pdVar6 != &local_368) {
    local_388 = *pdVar6;
    uStack_380 = *(undefined4 *)(pdVar6 + 1);
    uStack_37c = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    FUN_140041b80(&local_368,&local_388);
  }
  local_318 = &local_368;
  uVar14 = CONCAT44(uVar17,DAT_141a04798);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_398,1,uVar14,&local_318);
  uVar17 = (undefined4)((ulonglong)uVar14 >> 0x20);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_2c8 = 0x82;
    if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b0);
    }
    local_2b0 = 0;
    local_2a8 = 0;
    local_2a4 = 5;
    pdVar7 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f54c8);
    if (param_4 < 1) {
      pdVar8 = (double *)&DAT_1419df7b0;
LAB_1403a6c4e:
      local_388 = *pdVar8;
      uStack_380 = *(undefined4 *)(pdVar8 + 1);
      uStack_37c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      FUN_140041b80(&local_358,&local_388);
    }
    else {
      pdVar8 = (double *)*param_5;
      if (pdVar8 != &local_358) goto LAB_1403a6c4e;
    }
    local_310 = &local_358;
    if (param_4 < 2) {
      pdVar8 = (double *)&DAT_1419df7b0;
LAB_1403a6ca1:
      local_388 = *pdVar8;
      uStack_380 = *(undefined4 *)(pdVar8 + 1);
      uStack_37c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      FUN_140041b80(&local_348,&local_388);
    }
    else {
      pdVar8 = (double *)param_5[1];
      if (pdVar8 != &local_348) goto LAB_1403a6ca1;
    }
    local_308 = &local_348;
    FUN_140e609c0(param_1);
    uVar5 = CONCAT44(uVar17,DAT_141a04a78);
    pdVar8 = (double *)FUN_140e634e0(param_1,param_2,&local_2b0,2,uVar5,&local_310);
    uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (pdVar8 != pdVar7) {
      local_388 = *pdVar8;
      uStack_380 = *(undefined4 *)(pdVar8 + 1);
      uStack_37c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar7);
      }
      FUN_140041b80(pdVar7,&local_388);
    }
    FUN_140e60910(1);
  }
  local_2c8 = 0x84;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5418);
  local_178 = pdVar7;
  if (pdVar7 != &local_368) {
    local_388 = *pdVar7;
    uStack_380 = *(undefined4 *)(pdVar7 + 1);
    uStack_37c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    FUN_140041b80(&local_368,&local_388);
  }
  local_318 = &local_368;
  uVar14 = CONCAT44(uVar17,DAT_141a04798);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_398,1,uVar14,&local_318);
  uVar17 = (undefined4)((ulonglong)uVar14 >> 0x20);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_2c8 = 0x85;
    if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b0);
    }
    local_2b0 = 0;
    local_2a8 = 0;
    local_2a4 = 5;
    pdVar8 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5418);
    if (param_4 < 1) {
      pdVar9 = (double *)&DAT_1419df7b0;
LAB_1403a6e6f:
      local_388 = *pdVar9;
      uStack_380 = *(undefined4 *)(pdVar9 + 1);
      uStack_37c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      FUN_140041b80(&local_358,&local_388);
    }
    else {
      pdVar9 = (double *)*param_5;
      if (pdVar9 != &local_358) goto LAB_1403a6e6f;
    }
    local_310 = &local_358;
    if (param_4 < 2) {
      pdVar9 = (double *)&DAT_1419df7b0;
LAB_1403a6ec6:
      local_388 = *pdVar9;
      uStack_380 = *(undefined4 *)(pdVar9 + 1);
      uStack_37c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      FUN_140041b80(&local_348,&local_388);
    }
    else {
      pdVar9 = (double *)param_5[1];
      if (pdVar9 != &local_348) goto LAB_1403a6ec6;
    }
    local_308 = &local_348;
    FUN_140e609c0(param_1);
    uVar5 = CONCAT44(uVar17,DAT_141a04a78);
    pdVar9 = (double *)FUN_140e634e0(param_1,param_2,&local_2b0,2,uVar5,&local_310);
    uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (pdVar9 != pdVar8) {
      local_388 = *pdVar9;
      uStack_380 = *(undefined4 *)(pdVar9 + 1);
      uStack_37c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar8);
      }
      FUN_140041b80(pdVar8,&local_388);
    }
    FUN_140e60910(1);
  }
  local_2c8 = 0x87;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  local_e8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5408);
  if (local_e8 != &local_368) {
    local_388 = *local_e8;
    uStack_380 = *(undefined4 *)(local_e8 + 1);
    uStack_37c = *(undefined4 *)((longlong)local_e8 + 0xc);
    if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    FUN_140041b80(&local_368,&local_388);
  }
  local_318 = &local_368;
  uVar14 = CONCAT44(uVar17,DAT_141a04798);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_398,1,uVar14,&local_318);
  uVar17 = (undefined4)((ulonglong)uVar14 >> 0x20);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_2c8 = 0x88;
    if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b0);
    }
    local_2b0 = 0;
    local_2a8 = 0;
    local_2a4 = 5;
    pdVar8 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5408);
    if (param_4 < 1) {
      pdVar9 = (double *)&DAT_1419df7b0;
LAB_1403a7091:
      local_388 = *pdVar9;
      uStack_380 = *(undefined4 *)(pdVar9 + 1);
      uStack_37c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      FUN_140041b80(&local_358,&local_388);
    }
    else {
      pdVar9 = (double *)*param_5;
      if (pdVar9 != &local_358) goto LAB_1403a7091;
    }
    local_310 = &local_358;
    if (param_4 < 2) {
      pdVar9 = (double *)&DAT_1419df7b0;
LAB_1403a70e8:
      local_388 = *pdVar9;
      uStack_380 = *(undefined4 *)(pdVar9 + 1);
      uStack_37c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      FUN_140041b80(&local_348,&local_388);
    }
    else {
      pdVar9 = (double *)param_5[1];
      if (pdVar9 != &local_348) goto LAB_1403a70e8;
    }
    local_308 = &local_348;
    FUN_140e609c0(param_1);
    uVar5 = CONCAT44(uVar17,DAT_141a04a78);
    pdVar9 = (double *)FUN_140e634e0(param_1,param_2,&local_2b0,2,uVar5,&local_310);
    uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (pdVar9 != pdVar8) {
      local_388 = *pdVar9;
      uStack_380 = *(undefined4 *)(pdVar9 + 1);
      uStack_37c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar8);
      }
      FUN_140041b80(pdVar8,&local_388);
    }
    FUN_140e60910(1);
  }
  local_2c8 = 0x8b;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  iVar12 = 0;
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b0);
  }
  local_2b0 = 0;
  local_2a8 = 0;
  local_2a4 = 5;
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_128);
  local_388 = local_128;
  uStack_380 = uStack_120;
  uStack_37c = uStack_11c;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  FUN_140041b80(&local_368,&local_388);
  local_318 = &local_368;
  uVar5 = CONCAT44(uVar17,DAT_141a00e38);
  pdVar8 = (double *)FUN_140e634e0(param_1,param_2,&local_2b0,1,uVar5,&local_318);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (pdVar8 != &local_358) {
    local_388 = *pdVar8;
    uStack_380 = *(undefined4 *)(pdVar8 + 1);
    uStack_37c = *(undefined4 *)((longlong)pdVar8 + 0xc);
    if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    FUN_140041b80(&local_358,&local_388);
  }
  local_310 = &local_358;
  uVar5 = CONCAT44(uVar17,DAT_1419fe728);
  pdVar8 = (double *)FUN_140e634e0(param_1,param_2,&local_398,1,uVar5,&local_310);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (pdVar8 != &local_268) {
    local_388 = *pdVar8;
    uStack_380 = *(undefined4 *)(pdVar8 + 1);
    uStack_37c = *(undefined4 *)((longlong)pdVar8 + 0xc);
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    FUN_140041b80(&local_268,&local_388);
  }
  local_2c8 = 0x8c;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b0);
  }
  local_2b0 = 0;
  local_2a8 = 0;
  local_2a4 = 5;
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_128);
  local_388 = local_128;
  uStack_380 = uStack_120;
  uStack_37c = uStack_11c;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  FUN_140041b80(&local_368,&local_388);
  local_318 = &local_368;
  uVar5 = CONCAT44(uVar17,DAT_141a00dd8);
  pdVar8 = (double *)FUN_140e634e0(param_1,param_2,&local_2b0,1,uVar5,&local_318);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (pdVar8 != &local_358) {
    local_388 = *pdVar8;
    uStack_380 = *(undefined4 *)(pdVar8 + 1);
    uStack_37c = *(undefined4 *)((longlong)pdVar8 + 0xc);
    if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    FUN_140041b80(&local_358,&local_388);
  }
  local_310 = &local_358;
  uVar5 = CONCAT44(uVar17,DAT_1419fe728);
  pdVar8 = (double *)FUN_140e634e0(param_1,param_2,&local_398,1,uVar5,&local_310);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (pdVar8 != &local_278) {
    local_388 = *pdVar8;
    uStack_380 = *(undefined4 *)(pdVar8 + 1);
    uStack_37c = *(undefined4 *)((longlong)pdVar8 + 0xc);
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140041b80(&local_278,&local_388);
  }
  local_2c8 = 0x90;
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar13 = *pdVar6;
  }
  else {
    dVar13 = (double)FUN_140e4b060(pdVar6);
  }
  FUN_140ec60c0((longlong)dVar13,0xffffffff);
  local_2c8 = 0x91;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  local_388 = (double)CONCAT44(uRam0000000141dc6524,_DAT_141dc6520);
  uStack_380 = uRam0000000141dc6528;
  uStack_37c = uRam0000000141dc652c;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  FUN_140041b80(&local_368,&local_388);
  local_318 = &local_368;
  local_388 = (double)CONCAT44(uRam0000000141dc6524,_DAT_141dc6520);
  uStack_380 = uRam0000000141dc6528;
  uStack_37c = uRam0000000141dc652c;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  FUN_140041b80(&local_358,&local_388);
  local_310 = &local_358;
  uVar5 = CONCAT44(uVar17,DAT_141a04558);
  FUN_140e634e0(param_1,param_2,&local_398,2,uVar5,&local_318);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_2c8 = 0x93;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  uStack_37c = 0xf;
  local_388 = 7.291122019556935e-304;
  local_298 = 0x14c;
  uStack_294 = 0x1000000;
  uStack_290 = uStack_380;
  uStack_28c = 0xf;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  FUN_140041b80(&local_368,&local_298);
  local_318 = &local_368;
  ppdVar16 = &local_318;
  uVar15 = CONCAT44(uVar17,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_398,1,uVar15,ppdVar16);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_2c8 = 0x94;
    pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f54c8);
    uStack_2dc = 0xf;
    local_2e8 = 7.291177646402902e-304;
    local_170 = pdVar6;
    dVar13 = (double)FUN_140e4b060(&local_2e8);
    FUN_140ec9e10((int)dVar13);
    if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    local_2c8 = 0x95;
    uStack_2dc = 0xf;
    local_2e8 = 7.291122019556935e-304;
    uVar18 = (ulonglong)ppdVar16 & 0xffffffffffffff00;
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_140e87440(&local_2e8,DAT_1419f5338,0x80000000,&local_a8,uVar15,uVar18);
    if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    uStack_2dc = 0xf;
    local_2e8 = 7.291122019556935e-304;
    uVar18 = uVar18 & 0xffffffffffffff00;
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_140e87440(&local_2e8,DAT_1419f5498,0x80000000,&local_b8,uVar15,uVar18);
    if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    local_388 = (double)local_a8;
    uStack_380 = uStack_a0;
    uStack_37c = uStack_9c;
    if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    FUN_140041b80(&local_368,&local_388);
    local_318 = &local_368;
    local_388 = (double)local_b8;
    uStack_380 = uStack_b0;
    uStack_37c = uStack_ac;
    if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    FUN_140041b80(&local_358,&local_388);
    local_310 = &local_358;
    FUN_140ec9ea0(2,&local_318);
    local_2c8 = 0x96;
    uStack_2dc = 0xf;
    local_2e8 = 7.291122019556935e-304;
    uVar18 = uVar18 & 0xffffffffffffff00;
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_140e87440(&local_2e8,DAT_1419f4f58,0x80000000,&local_c8,uVar15,uVar18);
    if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    uStack_2dc = 0xf;
    local_2e8 = 7.291122019556935e-304;
    uVar18 = uVar18 & 0xffffffffffffff00;
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_140e87440(&local_2e8,DAT_1419f4f98,0x80000000,&local_98,uVar15,uVar18);
    if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    local_388 = (double)local_c8;
    uStack_380 = uStack_c0;
    uStack_37c = uStack_bc;
    if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    FUN_140041b80(&local_368,&local_388);
    local_318 = &local_368;
    local_388 = (double)local_98;
    uStack_380 = uStack_90;
    uStack_37c = uStack_8c;
    if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    FUN_140041b80(&local_358,&local_388);
    local_310 = &local_358;
    FUN_140ec9ea0(2,&local_318);
    local_2c8 = 0x97;
    uStack_2dc = 0xf;
    local_2e8 = 7.291122019556935e-304;
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_140e87440(&local_2e8,DAT_1419f5328,0x80000000,&local_d8,uVar15,uVar18 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    local_388 = local_d8;
    uStack_380 = uStack_d0;
    uStack_37c = uStack_cc;
    if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    FUN_140041b80(&local_368,&local_388);
    local_318 = &local_368;
    local_310 = &local_268;
    local_308 = &local_278;
    FUN_140ec9ea0(3,&local_318);
  }
  local_2c8 = 0x9a;
  if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c0);
  }
  local_2b4 = 0;
  local_2c0 = 0.0;
  local_2c8 = 0x9b;
  local_88 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5118);
  uVar17 = (undefined4)(uVar15 >> 0x20);
  if ((*(int *)((longlong)local_88 + 0xc) == 2) && (*local_88 != 0.0)) {
    iVar12 = *(int *)((longlong)*local_88 + 0x24);
  }
  if (0 < iVar12) {
    do {
      uVar17 = (undefined4)(uVar15 >> 0x20);
      iVar12 = iVar12 + -1;
      local_2c8 = 0x9c;
      pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5118);
      iVar2 = FUN_140e4a740(&local_2c0);
      if (((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 2) && (dVar13 = *pdVar6, dVar13 != 0.0)
         ) {
        if ((iVar2 < 0) || (*(int *)((longlong)dVar13 + 0x24) <= iVar2)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                        *(undefined4 *)((longlong)dVar13 + 0x24));
          pdVar6 = (double *)0x0;
        }
        else {
          pdVar6 = (double *)((longlong)iVar2 * 0x10 + *(longlong *)((longlong)dVar13 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (pdVar6 != &local_158) {
        local_188 = *(undefined4 *)pdVar6;
        uStack_184 = *(uint *)((longlong)pdVar6 + 4);
        uStack_180 = *(undefined4 *)(pdVar6 + 1);
        uStack_17c = *(undefined4 *)((longlong)pdVar6 + 0xc);
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_188);
      }
      local_2c8 = 0x9d;
      if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_398);
      }
      local_398 = 0;
      local_390 = 0;
      local_38c = 5;
      local_318 = &local_158;
      dVar13 = local_268;
      if ((local_25c & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_268);
      }
      local_188 = SUB84(dVar13,0);
      local_388 = -dVar13;
      uStack_37c = 0;
      uStack_184 = (uint)((ulonglong)dVar13 >> 0x20) ^ 0x80000000;
      uStack_180 = uStack_380;
      uStack_17c = 0;
      if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      FUN_140041b80(&local_358,&local_188);
      local_310 = &local_358;
      dVar13 = local_278;
      if ((local_26c & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_278);
      }
      uStack_184 = (uint)((ulonglong)dVar13 >> 0x20);
      local_298 = SUB84(dVar13,0);
      uStack_294 = uStack_184 ^ 0x80000000;
      uStack_28c = 0;
      uStack_184 = uStack_184 ^ 0x80000000;
      uStack_180 = uStack_290;
      uStack_17c = 0;
      local_188 = local_298;
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      FUN_140041b80(&local_348,&local_188);
      local_308 = &local_348;
      uVar15 = CONCAT44(uVar17,DAT_1419f54b8);
      FUN_140e634e0(param_1,param_2,&local_398,3,uVar15,&local_318);
      local_2c8 = 0x9e;
      uVar3 = local_2b4 & 0xffffff;
      if (uVar3 == 0) {
LAB_1403a7c7e:
        local_2c0 = local_2c0 + 1.0;
      }
      else {
        if (uVar3 == 1) {
          local_2c0 = (double)FUN_140e4b060(&local_2c0);
          local_2b4 = 0;
          goto LAB_1403a7c7e;
        }
        if (uVar3 == 7) {
          local_2c0 = (double)CONCAT44(local_2c0._4_4_,local_2c0._0_4_ + 1);
        }
        else if (uVar3 == 10) {
          local_2c0 = (double)((longlong)local_2c0 + 1);
        }
        else {
          if (uVar3 == 0xd) {
            local_2b4 = 0;
            goto LAB_1403a7c7e;
          }
          FUN_140042910(&DAT_14172c3d8,&local_2c0,&local_2c0);
        }
      }
      uVar17 = (undefined4)(uVar15 >> 0x20);
    } while (0 < iVar12);
    pdVar7 = local_178;
    pdVar6 = local_170;
  }
  local_2c8 = 0xa1;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  uStack_37c = 0xf;
  local_388 = 7.291122019556935e-304;
  local_298 = 0x14c;
  uStack_294 = 0x1000000;
  uStack_290 = uStack_380;
  uStack_28c = 0xf;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  FUN_140041b80(&local_368,&local_298);
  local_318 = &local_368;
  uVar14 = CONCAT44(uVar17,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_398,1,uVar14,&local_318);
  uVar17 = (undefined4)((ulonglong)uVar14 >> 0x20);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_2c8 = 0xa1;
    FUN_140ec9dc0();
  }
  local_2c8 = 0xa3;
  FUN_140ec7870();
  local_2c8 = 0xa9;
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar13 = *pdVar7;
  }
  else {
    dVar13 = (double)FUN_140e4b060(pdVar7);
  }
  FUN_140ec60c0((longlong)dVar13,0xffffffff);
  local_2c8 = 0xaa;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  local_388 = (double)CONCAT44(uRam0000000141dc6524,_DAT_141dc6520);
  uStack_380 = uRam0000000141dc6528;
  uStack_37c = uRam0000000141dc652c;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  FUN_140041b80(&local_368,&local_388);
  local_318 = &local_368;
  local_388 = (double)CONCAT44(uRam0000000141dc6524,_DAT_141dc6520);
  uStack_380 = uRam0000000141dc6528;
  uStack_37c = uRam0000000141dc652c;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  FUN_140041b80(&local_358,&local_388);
  local_310 = &local_358;
  uVar5 = CONCAT44(uVar17,DAT_141a04558);
  FUN_140e634e0(param_1,param_2,&local_398,2,uVar5,&local_318);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_2c8 = 0xab;
  uStack_2dc = 0xf;
  local_2e8 = 7.291177646402883e-304;
  dVar13 = (double)FUN_140e4b060(&local_2e8);
  FUN_140ec9e10((int)dVar13);
  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_2c8 = 0xac;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  uStack_37c = 0xf;
  local_388 = 7.291177646402883e-304;
  local_298 = 0xe;
  uStack_294 = 0x1000008;
  uStack_290 = uStack_380;
  uStack_28c = 0xf;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  FUN_140041b80(&local_368,&local_298);
  local_318 = &local_368;
  local_388 = (double)CONCAT44(uRam0000000141dd241c,_DAT_141dd2418);
  uStack_380 = uRam0000000141dd2420;
  uStack_37c = DAT_141dd2424;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  FUN_140041b80(&local_358,&local_388);
  local_310 = &local_358;
  uVar5 = CONCAT44(uVar17,DAT_141a04778);
  pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_398,2,uVar5,&local_318);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (pdVar7 != &local_348) {
    local_388 = *pdVar7;
    uStack_380 = *(undefined4 *)(pdVar7 + 1);
    uStack_37c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_348);
    }
    FUN_140041b80(&local_348,&local_388);
  }
  local_308 = &local_348;
  if (param_4 < 1) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)*param_5;
  }
  uStack_2dc = 0;
  local_2e8 = 1.0;
  FUN_140046500(&local_2e8,puVar10);
  local_388 = local_2e8;
  uStack_380 = uStack_2e0;
  uStack_37c = uStack_2dc;
  if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  FUN_140041b80(&local_338,&local_388);
  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_300 = &local_338;
  if (param_4 < 2) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)param_5[1];
  }
  uStack_2dc = 0;
  local_2e8 = 1.0;
  FUN_140046500(&local_2e8,puVar10);
  local_388 = local_2e8;
  uStack_380 = uStack_2e0;
  uStack_37c = uStack_2dc;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  FUN_140041b80(&local_328,&local_388);
  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_2f8 = &local_328;
  FUN_140ec9ea0(3,&local_308);
  local_2c8 = 0xae;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  uStack_37c = 0xf;
  local_388 = 7.291177646402883e-304;
  local_298 = 0xe;
  uStack_294 = 0x1000008;
  uStack_290 = uStack_380;
  uStack_28c = 0xf;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  FUN_140041b80(&local_368,&local_298);
  local_318 = &local_368;
  local_388 = (double)CONCAT44(uRam0000000141dd244c,_DAT_141dd2448);
  uStack_380 = uRam0000000141dd2450;
  uStack_37c = DAT_141dd2454;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  FUN_140041b80(&local_358,&local_388);
  local_310 = &local_358;
  pdVar7 = (double *)
           FUN_140e634e0(param_1,param_2,&local_398,2,CONCAT44(uVar17,DAT_141a04778),&local_318);
  if (pdVar7 != &local_348) {
    local_388 = *pdVar7;
    uStack_380 = *(undefined4 *)(pdVar7 + 1);
    uStack_37c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_348);
    }
    FUN_140041b80(&local_348,&local_388);
  }
  local_308 = &local_348;
  local_388 = (double)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_380 = uRam00000001419df7a8;
  uStack_37c = uRam00000001419df7ac;
  if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  FUN_140041b80(&local_338,&local_388);
  local_300 = &local_338;
  FUN_140eca000(2,&local_308);
  local_2c8 = 0xb0;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f52f8);
  dVar13 = local_268;
  if ((local_25c & 0xffffff) != 0) {
    dVar13 = (double)FUN_140e4b060(&local_268);
  }
  local_298 = SUB84(dVar13,0);
  local_388 = -dVar13;
  uStack_37c = 0;
  uStack_294 = (uint)((ulonglong)dVar13 >> 0x20) ^ 0x80000000;
  uStack_290 = uStack_380;
  uStack_28c = 0;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  FUN_140041b80(&local_368,&local_298);
  local_318 = &local_368;
  dVar13 = local_278;
  if ((local_26c & 0xffffff) != 0) {
    dVar13 = (double)FUN_140e4b060(&local_278);
  }
  local_298 = SUB84(dVar13,0);
  local_388 = -dVar13;
  uStack_37c = 0;
  uStack_294 = (uint)((ulonglong)dVar13 >> 0x20) ^ 0x80000000;
  uStack_290 = uStack_380;
  uStack_28c = 0;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  FUN_140041b80(&local_358,&local_298);
  local_310 = &local_358;
  FUN_140e63610(param_1,param_2,&local_398,2,uVar5,&local_318);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_2c8 = 0xb2;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  uStack_37c = 0xf;
  local_388 = 7.291177646402883e-304;
  local_298 = 0xe;
  uStack_294 = 0x1000008;
  uStack_290 = uStack_380;
  uStack_28c = 0xf;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  FUN_140041b80(&local_368,&local_298);
  local_318 = &local_368;
  local_388 = (double)CONCAT44(uRam0000000141dd244c,_DAT_141dd2448);
  uStack_380 = uRam0000000141dd2450;
  uStack_37c = DAT_141dd2454;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  FUN_140041b80(&local_358,&local_388);
  local_310 = &local_358;
  uVar5 = CONCAT44(uVar17,DAT_141a04778);
  pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_398,2,uVar5,&local_318);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (pdVar7 != &local_348) {
    local_388 = *pdVar7;
    uStack_380 = *(undefined4 *)(pdVar7 + 1);
    uStack_37c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_348);
    }
    FUN_140041b80(&local_348,&local_388);
  }
  local_308 = &local_348;
  local_388 = (double)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_380 = uRam00000001419df7c8;
  uStack_37c = uRam00000001419df7cc;
  if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  FUN_140041b80(&local_338,&local_388);
  local_300 = &local_338;
  FUN_140eca000(2,&local_308);
  local_2c8 = 0xb4;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  if (pdVar6 != &local_368) {
    local_388 = *pdVar6;
    uStack_380 = *(undefined4 *)(pdVar6 + 1);
    uStack_37c = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    FUN_140041b80(&local_368,&local_388);
  }
  local_318 = &local_368;
  local_388 = (double)CONCAT44(uRam0000000141dc6524,_DAT_141dc6520);
  uStack_380 = uRam0000000141dc6528;
  uStack_37c = uRam0000000141dc652c;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  FUN_140041b80(&local_358,&local_388);
  local_310 = &local_358;
  local_388 = (double)CONCAT44(uRam0000000141dc6524,_DAT_141dc6520);
  uStack_380 = uRam0000000141dc6528;
  uStack_37c = uRam0000000141dc652c;
  if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  FUN_140041b80(&local_348,&local_388);
  local_308 = &local_348;
  uVar5 = CONCAT44(uVar17,DAT_141a049d8);
  FUN_140e634e0(param_1,param_2,&local_398,3,uVar5,&local_318);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_2c8 = 0xb6;
  FUN_140ec9dc0();
  local_2c8 = 0xb7;
  FUN_140ec7870();
  pdVar6 = local_e8;
  local_2c8 = 0xbd;
  if ((*(uint *)((longlong)local_e8 + 0xc) & 0xffffff) == 0) {
    dVar13 = *local_e8;
  }
  else {
    dVar13 = (double)FUN_140e4b060(local_e8);
  }
  FUN_140ec60c0((longlong)dVar13,0xffffffff);
  local_2c8 = 0xbe;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  iVar12 = 0;
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  local_388 = (double)CONCAT44(uRam0000000141dc6524,_DAT_141dc6520);
  uStack_380 = uRam0000000141dc6528;
  uStack_37c = uRam0000000141dc652c;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  FUN_140041b80(&local_368,&local_388);
  local_318 = &local_368;
  uVar5 = CONCAT44(uVar17,DAT_1419f52e8);
  FUN_140e634e0(param_1,param_2,&local_398,1,uVar5,&local_318);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_2c8 = 0xc0;
  uStack_2dc = 0xf;
  local_2e8 = 7.291177646402881e-304;
  dVar13 = (double)FUN_140e4b060(&local_2e8);
  FUN_140ec9e10((int)dVar13);
  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_2c8 = 0xc3;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  local_388 = (double)CONCAT44(uRam00000001419e4694,_DAT_1419e4690);
  uStack_380 = uRam00000001419e4698;
  uStack_37c = uRam00000001419e469c;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  FUN_140041b80(&local_368,&local_388);
  local_318 = &local_368;
  uVar5 = CONCAT44(uVar17,DAT_1419f52c8);
  FUN_140e634e0(param_1,param_2,&local_398,1,uVar5,&local_318);
  local_2c8 = 0xc5;
  if (local_178 != &local_1a8) {
    local_388 = *local_178;
    uStack_380 = *(undefined4 *)(local_178 + 1);
    uStack_37c = *(undefined4 *)((longlong)local_178 + 0xc);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_388);
  }
  local_2c8 = 199;
  if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c0);
  }
  local_2b4 = 0;
  local_2c0 = 0.0;
  local_2c8 = 200;
  local_f8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5088);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if ((*(int *)((longlong)local_f8 + 0xc) == 2) && (*local_f8 != 0.0)) {
    iVar12 = *(int *)((longlong)*local_f8 + 0x24);
  }
  if (0 < iVar12) {
    do {
      uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
      iVar12 = iVar12 + -1;
      local_2c8 = 0xc9;
      local_170 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f54c8);
      local_178 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5418);
      local_e8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5408);
      pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5088);
      iVar2 = FUN_140e4a740(&local_2c0);
      if (((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 2) && (dVar13 = *pdVar6, dVar13 != 0.0)
         ) {
        if ((iVar2 < 0) || (*(int *)((longlong)dVar13 + 0x24) <= iVar2)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                        *(undefined4 *)((longlong)dVar13 + 0x24));
          pdVar6 = (double *)0x0;
        }
        else {
          pdVar6 = (double *)((longlong)iVar2 * 0x10 + *(longlong *)((longlong)dVar13 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (pdVar6 != &local_258) {
        local_378 = *(undefined4 *)pdVar6;
        uStack_374 = *(undefined4 *)((longlong)pdVar6 + 4);
        uStack_370 = *(undefined4 *)(pdVar6 + 1);
        uStack_36c = *(undefined4 *)((longlong)pdVar6 + 0xc);
        if ((1 << ((byte)local_2a0 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        FUN_140041b80(&local_258,&local_378);
        local_2a0 = uStack_24c;
        dVar11 = local_258;
      }
      uVar3 = local_2a0;
      local_2c8 = 0xca;
      uVar4 = local_2b4 & 0xffffff;
      if (uVar4 == 0) {
LAB_1403a8a0c:
        local_2c0 = local_2c0 + 1.0;
      }
      else {
        if (uVar4 == 1) {
          local_2c0 = (double)FUN_140e4b060(&local_2c0);
          local_2b4 = 0;
          goto LAB_1403a8a0c;
        }
        if (uVar4 == 7) {
          local_2c0 = (double)CONCAT44(local_2c0._4_4_,local_2c0._0_4_ + 1);
        }
        else if (uVar4 == 10) {
          local_2c0 = (double)((longlong)local_2c0 + 1);
        }
        else {
          if (uVar4 == 0xd) {
            local_2b4 = 0;
            goto LAB_1403a8a0c;
          }
          FUN_140042910(&DAT_14172c3d8,&local_2c0,&local_2c0);
        }
      }
      local_2c8 = 0xcc;
      pdVar6 = (double *)0x0;
      uVar3 = uVar3 & 0xffffff;
      if ((uVar3 == 2) && (dVar11 != 0.0)) {
        if (*(int *)((longlong)dVar11 + 0x24) < 1) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
        }
        else {
          pdVar6 = *(double **)((longlong)dVar11 + 8);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar6 = &local_258;
      }
      uStack_10c = *(undefined4 *)((longlong)pdVar6 + 0xc);
      uStack_110 = *(undefined4 *)(pdVar6 + 1);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_118 = *pdVar6;
      }
      else {
        FUN_1400419b0(&local_118,pdVar6);
      }
      FUN_1400462a0(&local_118,&local_268);
      local_378 = (undefined4)local_118;
      uStack_374 = local_118._4_4_;
      uStack_370 = uStack_110;
      uStack_36c = uStack_10c;
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_378);
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      pdVar6 = (double *)0x0;
      if ((uVar3 == 2) && (dVar11 != 0.0)) {
        if (*(int *)((longlong)dVar11 + 0x24) < 2) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
        }
        else {
          pdVar6 = (double *)(*(longlong *)((longlong)dVar11 + 8) + 0x10);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar6 = &local_258;
      }
      uStack_fc = *(undefined4 *)((longlong)pdVar6 + 0xc);
      uStack_100 = *(undefined4 *)(pdVar6 + 1);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_108 = *pdVar6;
      }
      else {
        FUN_1400419b0(&local_108,pdVar6);
      }
      FUN_1400462a0(&local_108,&local_278);
      local_378 = (undefined4)local_108;
      uStack_374 = local_108._4_4_;
      uStack_370 = uStack_100;
      uStack_36c = uStack_fc;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      FUN_140041b80(&local_248,&local_378);
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      pdVar6 = (double *)0x0;
      if ((uVar3 == 2) && (dVar11 != 0.0)) {
        if (*(int *)((longlong)dVar11 + 0x24) < 3) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",2);
        }
        else {
          pdVar6 = (double *)(*(longlong *)((longlong)dVar11 + 8) + 0x20);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar6 = &local_258;
      }
      uStack_13c = *(undefined4 *)((longlong)pdVar6 + 0xc);
      uStack_140 = *(undefined4 *)(pdVar6 + 1);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_148 = *pdVar6;
      }
      else {
        FUN_1400419b0(&local_148,pdVar6);
      }
      FUN_140042560(&local_148,local_f0);
      local_378 = (undefined4)local_148;
      uStack_374 = local_148._4_4_;
      uStack_370 = uStack_140;
      uStack_36c = uStack_13c;
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_378);
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      pdVar6 = (double *)0x0;
      if ((uVar3 == 2) && (dVar11 != 0.0)) {
        if (*(int *)((longlong)dVar11 + 0x24) < 6) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",5);
        }
        else {
          pdVar6 = (double *)(*(longlong *)((longlong)dVar11 + 8) + 0x50);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar6 = &local_258;
      }
      uStack_1bc = *(undefined4 *)((longlong)pdVar6 + 0xc);
      uStack_1c0 = *(undefined4 *)(pdVar6 + 1);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_1c8 = *pdVar6;
      }
      else {
        FUN_1400419b0(&local_1c8,pdVar6);
      }
      FUN_140042560(&local_1c8,local_f0);
      local_378 = (undefined4)local_1c8;
      uStack_374 = local_1c8._4_4_;
      uStack_370 = uStack_1c0;
      uStack_36c = uStack_1bc;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_378);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_2c8 = 0xd1;
      uStack_1dc = local_18c;
      uStack_1e0 = local_190;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
        local_1e8 = local_198;
      }
      else {
        FUN_1400419b0(&local_1e8,&local_198);
      }
      uStack_17c = 7;
      local_188 = 2;
      FUN_140042560(&local_1e8,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      uStack_1ac = local_27c;
      uStack_1b0 = local_280;
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) == 0) {
        local_1b8 = local_288;
      }
      else {
        FUN_1400419b0(&local_1b8,&local_288);
      }
      FUN_1400460e0(&local_1b8,&local_1e8);
      local_378 = (undefined4)local_1b8;
      uStack_374 = local_1b8._4_4_;
      uStack_370 = uStack_1b0;
      uStack_36c = uStack_1ac;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_378);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_2c8 = 0xd3;
      pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f51b8);
      if (pdVar6 != &local_368) {
        local_378 = *(undefined4 *)pdVar6;
        uStack_374 = *(undefined4 *)((longlong)pdVar6 + 4);
        uStack_370 = *(undefined4 *)(pdVar6 + 1);
        uStack_36c = *(undefined4 *)((longlong)pdVar6 + 0xc);
        if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_368);
        }
        FUN_140041b80(&local_368,&local_378);
      }
      local_318 = &local_368;
      if (local_80 != &local_358) {
        local_378 = *(undefined4 *)local_80;
        uStack_374 = *(undefined4 *)((longlong)local_80 + 4);
        uStack_370 = *(undefined4 *)(local_80 + 1);
        uStack_36c = *(undefined4 *)((longlong)local_80 + 0xc);
        if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_358);
        }
        FUN_140041b80(&local_358,&local_378);
      }
      local_310 = &local_358;
      FUN_140ec9ea0(2,&local_318);
      local_2c8 = 0xd4;
      pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4fb8);
      if (pdVar6 != &local_368) {
        local_378 = *(undefined4 *)pdVar6;
        uStack_374 = *(undefined4 *)((longlong)pdVar6 + 4);
        uStack_370 = *(undefined4 *)(pdVar6 + 1);
        uStack_36c = *(undefined4 *)((longlong)pdVar6 + 0xc);
        if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_368);
        }
        FUN_140041b80(&local_368,&local_378);
      }
      local_318 = &local_368;
      local_310 = &local_238;
      local_308 = &local_248;
      FUN_140ec9ea0(3,&local_318);
      local_2c8 = 0xd5;
      pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f53a8);
      if (pdVar6 != &local_368) {
        local_378 = *(undefined4 *)pdVar6;
        uStack_374 = *(undefined4 *)((longlong)pdVar6 + 4);
        uStack_370 = *(undefined4 *)(pdVar6 + 1);
        uStack_36c = *(undefined4 *)((longlong)pdVar6 + 0xc);
        if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_368);
        }
        FUN_140041b80(&local_368,&local_378);
      }
      local_318 = &local_368;
      local_310 = &local_288;
      local_308 = &local_198;
      FUN_140ec9ea0(3,&local_318);
      local_2c8 = 0xd6;
      pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5288);
      if (pdVar6 != &local_368) {
        local_378 = *(undefined4 *)pdVar6;
        uStack_374 = *(undefined4 *)((longlong)pdVar6 + 4);
        uStack_370 = *(undefined4 *)(pdVar6 + 1);
        uStack_36c = *(undefined4 *)((longlong)pdVar6 + 0xc);
        if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_368);
        }
        FUN_140041b80(&local_368,&local_378);
      }
      local_318 = &local_368;
      pdVar6 = (double *)0x0;
      if ((uVar3 == 2) && (dVar11 != 0.0)) {
        if (*(int *)((longlong)dVar11 + 0x24) < 5) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",4);
        }
        else {
          pdVar6 = (double *)(*(longlong *)((longlong)dVar11 + 8) + 0x40);
        }
        if (pdVar6 != &local_358) goto LAB_1403a91de;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar6 = &local_258;
LAB_1403a91de:
        local_378 = *(undefined4 *)pdVar6;
        uStack_374 = *(undefined4 *)((longlong)pdVar6 + 4);
        uStack_370 = *(undefined4 *)(pdVar6 + 1);
        uStack_36c = *(undefined4 *)((longlong)pdVar6 + 0xc);
        if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_358);
        }
        FUN_140041b80(&local_358,&local_378);
      }
      local_310 = &local_358;
      FUN_140ec9ea0(2,&local_318);
      local_2c8 = 0xd7;
      if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_398);
      }
      local_398 = 0;
      local_390 = 0;
      local_38c = 5;
      local_318 = &local_1a8;
      uStack_20c = local_22c;
      uStack_210 = local_230;
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) == 0) {
        local_218 = local_238;
      }
      else {
        FUN_1400419b0(&local_218,&local_238);
      }
      FUN_1400462a0(&local_218,&local_228);
      local_378 = (undefined4)local_218;
      uStack_374 = local_218._4_4_;
      uStack_370 = uStack_210;
      uStack_36c = uStack_20c;
      if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      FUN_140041b80(&local_358,&local_378);
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_310 = &local_358;
      uStack_1fc = local_23c;
      uStack_200 = local_240;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) == 0) {
        local_208 = local_248;
      }
      else {
        FUN_1400419b0(&local_208,&local_248);
      }
      FUN_1400462a0(&local_208,&local_228);
      local_378 = (undefined4)local_208;
      uStack_374 = local_208._4_4_;
      uStack_370 = uStack_200;
      uStack_36c = uStack_1fc;
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      FUN_140041b80(&local_348,&local_378);
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_308 = &local_348;
      uStack_1cc = local_21c;
      uStack_1d0 = local_220;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) == 0) {
        local_1d8 = local_228;
      }
      else {
        FUN_1400419b0(&local_1d8,&local_228);
      }
      uStack_28c = 7;
      local_298 = 2;
      FUN_140042560(&local_1d8,&local_298);
      if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      local_378 = (undefined4)local_1d8;
      uStack_374 = local_1d8._4_4_;
      uStack_370 = uStack_1d0;
      uStack_36c = uStack_1cc;
      if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_338);
      }
      FUN_140041b80(&local_338,&local_378);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_300 = &local_338;
      uStack_2dc = local_21c;
      uStack_2e0 = local_220;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) == 0) {
        local_2e8 = local_228;
      }
      else {
        FUN_1400419b0(&local_2e8,&local_228);
      }
      uStack_37c = 7;
      local_388 = (double)CONCAT44(local_388._4_4_,2);
      FUN_140042560(&local_2e8,&local_388);
      if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_388);
      }
      local_378 = (undefined4)local_2e8;
      uStack_374 = local_2e8._4_4_;
      uStack_370 = uStack_2e0;
      uStack_36c = uStack_2dc;
      if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_328);
      }
      FUN_140041b80(&local_328,&local_378);
      if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2e8);
      }
      local_2f8 = &local_328;
      uVar5 = CONCAT44(uVar17,DAT_141a04758);
      FUN_140e634e0(param_1,param_2,&local_398,5,uVar5,&local_318);
      uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
    } while (0 < iVar12);
    pdVar6 = local_e8;
  }
  local_2c8 = 0xda;
  FUN_140ec9dc0();
  local_2c8 = 0xdb;
  FUN_140ec7870();
  local_2c8 = 0xdd;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  local_378 = _DAT_141dc6520;
  uStack_374 = uRam0000000141dc6524;
  uStack_370 = uRam0000000141dc6528;
  uStack_36c = uRam0000000141dc652c;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  FUN_140041b80(&local_368,&local_378);
  local_318 = &local_368;
  uVar5 = CONCAT44(uVar17,DAT_141a04848);
  FUN_140e634e0(param_1,param_2,&local_398,1,uVar5,&local_318);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_2c8 = 0xe1;
  pdVar7 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5268);
  FUN_140e609c0(param_1);
  if (local_170 != pdVar7) {
    local_378 = *(undefined4 *)local_170;
    uStack_374 = *(undefined4 *)((longlong)local_170 + 4);
    uStack_370 = *(undefined4 *)(local_170 + 1);
    uStack_36c = *(undefined4 *)((longlong)local_170 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar7);
    }
    FUN_140041b80(pdVar7,&local_378);
  }
  FUN_140e60910(1);
  local_2c8 = 0xe3;
  pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5268);
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar13 = *pdVar7;
  }
  else {
    dVar13 = (double)FUN_140e4b060(pdVar7);
  }
  FUN_140ec60c0((longlong)dVar13,0xffffffff);
  local_2c8 = 0xe4;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  local_378 = _DAT_141dc6520;
  uStack_374 = uRam0000000141dc6524;
  uStack_370 = uRam0000000141dc6528;
  uStack_36c = uRam0000000141dc652c;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  FUN_140041b80(&local_368,&local_378);
  local_318 = &local_368;
  uVar5 = CONCAT44(uVar17,DAT_1419f52e8);
  FUN_140e634e0(param_1,param_2,&local_398,1,uVar5,&local_318);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_2c8 = 0xe8;
  uStack_37c = 0xf;
  local_388 = 7.291177646402878e-304;
  dVar13 = (double)FUN_140e4b060(&local_388);
  FUN_140ec9e10((int)dVar13);
  if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  local_2c8 = 0xe9;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  uStack_37c = 0xf;
  local_388 = 7.291177646402878e-304;
  local_378 = 0xb;
  uStack_374 = 0x1000008;
  uStack_370 = uStack_380;
  uStack_36c = 0xf;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  FUN_140041b80(&local_368,&local_378);
  local_318 = &local_368;
  local_378 = _DAT_141dd2478;
  uStack_374 = uRam0000000141dd247c;
  uStack_370 = uRam0000000141dd2480;
  uStack_36c = DAT_141dd2484;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  FUN_140041b80(&local_358,&local_378);
  local_310 = &local_358;
  uVar5 = CONCAT44(uVar17,DAT_141a04778);
  pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_398,2,uVar5,&local_318);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (pdVar7 != &local_348) {
    local_378 = *(undefined4 *)pdVar7;
    uStack_374 = *(undefined4 *)((longlong)pdVar7 + 4);
    uStack_370 = *(undefined4 *)(pdVar7 + 1);
    uStack_36c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_348);
    }
    FUN_140041b80(&local_348,&local_378);
  }
  local_308 = &local_348;
  dVar13 = local_268;
  if ((local_25c & 0xffffff) != 0) {
    dVar13 = (double)FUN_140e4b060(&local_268);
  }
  local_378 = SUB84(dVar13,0);
  local_388 = -dVar13;
  uStack_37c = 0;
  uStack_374 = (uint)((ulonglong)dVar13 >> 0x20) ^ 0x80000000;
  uStack_370 = uStack_380;
  uStack_36c = 0;
  if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  FUN_140041b80(&local_338,&local_378);
  local_300 = &local_338;
  dVar13 = local_278;
  if ((local_26c & 0xffffff) != 0) {
    dVar13 = (double)FUN_140e4b060(&local_278);
  }
  local_378 = SUB84(dVar13,0);
  local_388 = -dVar13;
  uStack_37c = 0;
  uStack_374 = (uint)((ulonglong)dVar13 >> 0x20) ^ 0x80000000;
  uStack_370 = uStack_380;
  uStack_36c = 0;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  FUN_140041b80(&local_328,&local_378);
  local_2f8 = &local_328;
  FUN_140ec9ea0(3,&local_308);
  local_2c8 = 0xea;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b0);
  }
  local_2b0 = 0;
  local_2a8 = 0;
  local_2a4 = 5;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uStack_37c = 0xf;
  local_388 = 7.291177646402878e-304;
  local_378 = 0xb;
  uStack_374 = 0x1000008;
  uStack_370 = uStack_380;
  uStack_36c = 0xf;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  FUN_140041b80(&local_368,&local_378);
  local_318 = &local_368;
  local_378 = _DAT_141dd24c8;
  uStack_374 = uRam0000000141dd24cc;
  uStack_370 = uRam0000000141dd24d0;
  uStack_36c = DAT_141dd24d4;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  FUN_140041b80(&local_358,&local_378);
  local_310 = &local_358;
  FUN_140e85f80(param_1,DAT_141a04608,0x80000000,&local_138);
  local_378 = (undefined4)local_138;
  uStack_374 = local_138._4_4_;
  uStack_370 = uStack_130;
  uStack_36c = uStack_12c;
  if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  FUN_140041b80(&local_348,&local_378);
  local_308 = &local_348;
  uVar5 = CONCAT44(uVar17,DAT_1419f54d8);
  pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_2b0,2,uVar5,&local_318);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (pdVar7 != &local_338) {
    local_378 = *(undefined4 *)pdVar7;
    uStack_374 = *(undefined4 *)((longlong)pdVar7 + 4);
    uStack_370 = *(undefined4 *)(pdVar7 + 1);
    uStack_36c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_338);
    }
    FUN_140041b80(&local_338,&local_378);
  }
  local_300 = &local_338;
  uVar5 = CONCAT44(uVar17,DAT_141a04b28);
  puVar10 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1f8,1,uVar5,&local_308);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar10 != &local_328) {
    local_378 = *(undefined4 *)puVar10;
    uStack_374 = *(undefined4 *)((longlong)puVar10 + 4);
    uStack_370 = *(undefined4 *)(puVar10 + 1);
    uStack_36c = *(undefined4 *)((longlong)puVar10 + 0xc);
    if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    FUN_140041b80(&local_328,&local_378);
  }
  local_2f8 = &local_328;
  FUN_140e634e0(param_1,param_2,&local_398,2,CONCAT44(uVar17,DAT_1419f5468),&local_300);
  local_2c8 = 0xeb;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5228);
  if (param_4 < 1) {
    pdVar7 = (double *)&DAT_1419df7b0;
LAB_1403a9cf7:
    local_378 = *(undefined4 *)pdVar7;
    uStack_374 = *(undefined4 *)((longlong)pdVar7 + 4);
    uStack_370 = *(undefined4 *)(pdVar7 + 1);
    uStack_36c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    FUN_140041b80(&local_368,&local_378);
  }
  else {
    pdVar7 = (double *)*param_5;
    if (pdVar7 != &local_368) goto LAB_1403a9cf7;
  }
  local_318 = &local_368;
  local_378 = _DAT_141dc6520;
  uStack_374 = uRam0000000141dc6524;
  uStack_370 = uRam0000000141dc6528;
  uStack_36c = uRam0000000141dc652c;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  FUN_140041b80(&local_358,&local_378);
  local_310 = &local_358;
  FUN_140e63610(param_1,param_2,&local_398,2,uVar5,&local_318);
  local_2c8 = 0xec;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b0);
  }
  local_2b0 = 0;
  local_2a8 = 0;
  local_2a4 = 5;
  pdVar7 = (double *)FUN_1403a22f0(param_1,param_2,&local_2b0,0,0);
  if (pdVar7 != &local_368) {
    local_378 = *(undefined4 *)pdVar7;
    uStack_374 = *(undefined4 *)((longlong)pdVar7 + 4);
    uStack_370 = *(undefined4 *)(pdVar7 + 1);
    uStack_36c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    FUN_140041b80(&local_368,&local_378);
  }
  local_318 = &local_368;
  ppdVar16 = &local_318;
  gml_Script_light_flash_list(param_1,param_2,&local_398,1,ppdVar16);
  uVar17 = (undefined4)((ulonglong)ppdVar16 >> 0x20);
  local_2c8 = 0xed;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  if (pdVar6 != &local_368) {
    local_378 = *(undefined4 *)pdVar6;
    uStack_374 = *(undefined4 *)((longlong)pdVar6 + 4);
    uStack_370 = *(undefined4 *)(pdVar6 + 1);
    uStack_36c = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    FUN_140041b80(&local_368,&local_378);
  }
  local_318 = &local_368;
  local_378 = _DAT_141dc6520;
  uStack_374 = uRam0000000141dc6524;
  uStack_370 = uRam0000000141dc6528;
  uStack_36c = uRam0000000141dc652c;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  FUN_140041b80(&local_358,&local_378);
  local_310 = &local_358;
  local_378 = _DAT_141dc6520;
  uStack_374 = uRam0000000141dc6524;
  uStack_370 = uRam0000000141dc6528;
  uStack_36c = uRam0000000141dc652c;
  if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  FUN_140041b80(&local_348,&local_378);
  local_308 = &local_348;
  uVar5 = CONCAT44(uVar17,DAT_141a049d8);
  FUN_140e634e0(param_1,param_2,&local_398,3,uVar5,&local_318);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_2c8 = 0xee;
  FUN_140ec9dc0();
  local_2c8 = 0xf4;
  if (local_178 != &local_1a8) {
    local_378 = *(undefined4 *)local_178;
    uStack_374 = *(undefined4 *)((longlong)local_178 + 4);
    uStack_370 = *(undefined4 *)(local_178 + 1);
    uStack_36c = *(undefined4 *)((longlong)local_178 + 0xc);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_378);
  }
  local_2c8 = 0xf5;
  uStack_37c = 0xf;
  local_388 = 7.29117764640288e-304;
  dVar13 = (double)FUN_140e4b060(&local_388);
  FUN_140ec9e10((int)dVar13);
  if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  local_2c8 = 0xf6;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  uStack_37c = 0xf;
  local_388 = 7.29117764640288e-304;
  local_378 = 0xc;
  uStack_374 = 0x1000008;
  uStack_370 = uStack_380;
  uStack_36c = 0xf;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  FUN_140041b80(&local_368,&local_378);
  local_318 = &local_368;
  local_378 = _DAT_141dd2478;
  uStack_374 = uRam0000000141dd247c;
  uStack_370 = uRam0000000141dd2480;
  uStack_36c = DAT_141dd2484;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  FUN_140041b80(&local_358,&local_378);
  local_310 = &local_358;
  uVar5 = CONCAT44(uVar17,DAT_141a04778);
  pdVar6 = (double *)FUN_140e634e0(param_1,param_2,&local_398,2,uVar5,&local_318);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (pdVar6 != &local_348) {
    local_378 = *(undefined4 *)pdVar6;
    uStack_374 = *(undefined4 *)((longlong)pdVar6 + 4);
    uStack_370 = *(undefined4 *)(pdVar6 + 1);
    uStack_36c = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_348);
    }
    FUN_140041b80(&local_348,&local_378);
  }
  local_308 = &local_348;
  dVar13 = local_268;
  if ((local_25c & 0xffffff) != 0) {
    dVar13 = (double)FUN_140e4b060(&local_268);
  }
  local_378 = SUB84(dVar13,0);
  local_388 = -dVar13;
  uStack_37c = 0;
  uStack_374 = (uint)((ulonglong)dVar13 >> 0x20) ^ 0x80000000;
  uStack_370 = uStack_380;
  uStack_36c = 0;
  if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  FUN_140041b80(&local_338,&local_378);
  local_300 = &local_338;
  dVar13 = local_278;
  if ((local_26c & 0xffffff) != 0) {
    dVar13 = (double)FUN_140e4b060(&local_278);
  }
  local_378 = SUB84(dVar13,0);
  local_388 = -dVar13;
  uStack_37c = 0;
  uStack_374 = (uint)((ulonglong)dVar13 >> 0x20) ^ 0x80000000;
  uStack_370 = uStack_380;
  uStack_36c = 0;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  FUN_140041b80(&local_328,&local_378);
  local_2f8 = &local_328;
  FUN_140ec9ea0(3,&local_308);
  local_2c8 = 0xf7;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  uStack_37c = 0xf;
  local_388 = 7.29117764640288e-304;
  local_378 = 0xc;
  uStack_374 = 0x1000008;
  uStack_370 = uStack_380;
  uStack_36c = 0xf;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  FUN_140041b80(&local_368,&local_378);
  local_318 = &local_368;
  local_378 = _DAT_141dd2408;
  uStack_374 = uRam0000000141dd240c;
  uStack_370 = uRam0000000141dd2410;
  uStack_36c = DAT_141dd2414;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  FUN_140041b80(&local_358,&local_378);
  local_310 = &local_358;
  uVar5 = CONCAT44(uVar17,DAT_141a04778);
  pdVar6 = (double *)FUN_140e634e0(param_1,param_2,&local_398,2,uVar5,&local_318);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (pdVar6 != &local_348) {
    local_378 = *(undefined4 *)pdVar6;
    uStack_374 = *(undefined4 *)((longlong)pdVar6 + 4);
    uStack_370 = *(undefined4 *)(pdVar6 + 1);
    uStack_36c = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_348);
    }
    FUN_140041b80(&local_348,&local_378);
  }
  local_308 = &local_348;
  if (param_4 < 1) {
    pdVar6 = (double *)&DAT_1419df7b0;
LAB_1403aa370:
    local_378 = *(undefined4 *)pdVar6;
    uStack_374 = *(undefined4 *)((longlong)pdVar6 + 4);
    uStack_370 = *(undefined4 *)(pdVar6 + 1);
    uStack_36c = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_338);
    }
    FUN_140041b80(&local_338,&local_378);
  }
  else {
    pdVar6 = (double *)*param_5;
    if (pdVar6 != &local_338) goto LAB_1403aa370;
  }
  local_300 = &local_338;
  if (param_4 < 2) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)param_5[1];
    if (puVar10 == &local_328) goto LAB_1403aa3ed;
  }
  local_378 = *(undefined4 *)puVar10;
  uStack_374 = *(undefined4 *)((longlong)puVar10 + 4);
  uStack_370 = *(undefined4 *)(puVar10 + 1);
  uStack_36c = *(undefined4 *)((longlong)puVar10 + 0xc);
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  FUN_140041b80(&local_328,&local_378);
LAB_1403aa3ed:
  local_2f8 = &local_328;
  FUN_140ec9ea0(3,&local_308);
  local_2c8 = 0xf8;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  iVar12 = 0;
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b0);
  }
  local_2b0 = 0;
  local_2a8 = 0;
  local_2a4 = 5;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uStack_37c = 0xf;
  local_388 = 7.29117764640288e-304;
  local_378 = 0xc;
  uStack_374 = 0x1000008;
  uStack_370 = uStack_380;
  uStack_36c = 0xf;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  FUN_140041b80(&local_368,&local_378);
  local_318 = &local_368;
  local_378 = _DAT_141dd24c8;
  uStack_374 = uRam0000000141dd24cc;
  uStack_370 = uRam0000000141dd24d0;
  uStack_36c = DAT_141dd24d4;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  FUN_140041b80(&local_358,&local_378);
  local_310 = &local_358;
  FUN_140e85f80(param_1,DAT_141a04608,0x80000000,&local_138);
  local_378 = (undefined4)local_138;
  uStack_374 = local_138._4_4_;
  uStack_370 = uStack_130;
  uStack_36c = uStack_12c;
  if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  FUN_140041b80(&local_348,&local_378);
  local_308 = &local_348;
  uVar5 = CONCAT44(uVar17,DAT_1419f54d8);
  pdVar6 = (double *)FUN_140e634e0(param_1,param_2,&local_2b0,2,uVar5,&local_318);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (pdVar6 != &local_338) {
    local_378 = *(undefined4 *)pdVar6;
    uStack_374 = *(undefined4 *)((longlong)pdVar6 + 4);
    uStack_370 = *(undefined4 *)(pdVar6 + 1);
    uStack_36c = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_338);
    }
    FUN_140041b80(&local_338,&local_378);
  }
  local_300 = &local_338;
  uVar5 = CONCAT44(uVar17,DAT_141a04b28);
  puVar10 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1f8,1,uVar5,&local_308);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar10 != &local_328) {
    local_378 = *(undefined4 *)puVar10;
    uStack_374 = *(undefined4 *)((longlong)puVar10 + 4);
    uStack_370 = *(undefined4 *)(puVar10 + 1);
    uStack_36c = *(undefined4 *)((longlong)puVar10 + 0xc);
    if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    FUN_140041b80(&local_328,&local_378);
  }
  local_2f8 = &local_328;
  uVar5 = CONCAT44(uVar17,DAT_1419f5468);
  FUN_140e634e0(param_1,param_2,&local_398,2,uVar5,&local_300);
  local_2c8 = 0xfa;
  if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c0);
  }
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_2b4 = 0;
  local_2c0 = 0.0;
  pdVar6 = local_f8;
  if ((*(int *)((longlong)local_f8 + 0xc) == 2) && (*local_f8 != 0.0)) {
    iVar12 = *(int *)((longlong)*local_f8 + 0x24);
  }
  do {
    local_f8 = pdVar6;
    if (iVar12 < 1) {
      local_2c8 = 0x10f;
      FUN_140ec9dc0();
      local_2c8 = 0x115;
      FUN_140ec7870();
      local_2c8 = 0x117;
      if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_398);
      }
      local_398 = 0;
      local_390 = 0;
      local_38c = 5;
      if (local_88 != &local_368) {
        local_378 = *(undefined4 *)local_88;
        uStack_374 = *(undefined4 *)((longlong)local_88 + 4);
        uStack_370 = *(undefined4 *)(local_88 + 1);
        uStack_36c = *(undefined4 *)((longlong)local_88 + 0xc);
        if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_368);
        }
        FUN_140041b80(&local_368,&local_378);
      }
      local_318 = &local_368;
      local_378 = _DAT_141dc6520;
      uStack_374 = uRam0000000141dc6524;
      uStack_370 = uRam0000000141dc6528;
      uStack_36c = uRam0000000141dc652c;
      if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      FUN_140041b80(&local_358,&local_378);
      local_310 = &local_358;
      uVar5 = CONCAT44(uVar17,DAT_1419fee68);
      FUN_140e634e0(param_1,param_2,&local_398,2,uVar5,&local_318);
      uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_2c8 = 0x118;
      if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_398);
      }
      local_398 = 0;
      local_390 = 0;
      local_38c = 5;
      if (pdVar6 != &local_368) {
        local_378 = *(undefined4 *)pdVar6;
        uStack_374 = *(undefined4 *)((longlong)pdVar6 + 4);
        uStack_370 = *(undefined4 *)(pdVar6 + 1);
        uStack_36c = *(undefined4 *)((longlong)pdVar6 + 0xc);
        if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_368);
        }
        FUN_140041b80(&local_368,&local_378);
      }
      local_318 = &local_368;
      local_378 = _DAT_141dc6520;
      uStack_374 = uRam0000000141dc6524;
      uStack_370 = uRam0000000141dc6528;
      uStack_36c = uRam0000000141dc652c;
      if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      FUN_140041b80(&local_358,&local_378);
      local_310 = &local_358;
      FUN_140e634e0(param_1,param_2,&local_398,2,CONCAT44(uVar17,DAT_1419fee68),&local_318);
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b0);
      }
      if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_398);
      }
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      if ((1 << ((byte)local_2a0 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c0);
      }
      if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      _eh_vector_destructor_iterator_(&local_368,0x10,5,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_2d8;
      return param_3;
    }
    iVar12 = iVar12 + -1;
    local_2c8 = 0xfc;
    (**(code **)(*param_1 + 8))(param_1,DAT_1419f54c8);
    (**(code **)(*param_1 + 8))(param_1,DAT_1419f5418);
    (**(code **)(*param_1 + 8))(param_1,DAT_1419f5408);
    local_f8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5088);
    pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5088);
    iVar2 = FUN_140e4a740(&local_2c0);
    if (((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 2) && (dVar13 = *pdVar6, dVar13 != 0.0))
    {
      if ((iVar2 < 0) || (*(int *)((longlong)dVar13 + 0x24) <= iVar2)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                      *(undefined4 *)((longlong)dVar13 + 0x24));
        pdVar6 = (double *)0x0;
      }
      else {
        pdVar6 = (double *)((longlong)iVar2 * 0x10 + *(longlong *)((longlong)dVar13 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar6 != &local_258) {
      local_378 = *(undefined4 *)pdVar6;
      uStack_374 = *(undefined4 *)((longlong)pdVar6 + 4);
      uStack_370 = *(undefined4 *)(pdVar6 + 1);
      uStack_36c = *(undefined4 *)((longlong)pdVar6 + 0xc);
      if ((1 << ((byte)local_2a0 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      FUN_140041b80(&local_258,&local_378);
      local_2a0 = uStack_24c;
      dVar11 = local_258;
    }
    uVar3 = local_2a0;
    local_2c8 = 0xfd;
    uVar4 = local_2b4 & 0xffffff;
    if (uVar4 == 0) {
LAB_1403aa80c:
      local_2c0 = local_2c0 + 1.0;
    }
    else {
      if (uVar4 == 1) {
        local_2c0 = (double)FUN_140e4b060(&local_2c0);
        local_2b4 = 0;
        goto LAB_1403aa80c;
      }
      if (uVar4 == 7) {
        local_2c0 = (double)CONCAT44(local_2c0._4_4_,local_2c0._0_4_ + 1);
      }
      else if (uVar4 == 10) {
        local_2c0 = (double)((longlong)local_2c0 + 1);
      }
      else {
        if (uVar4 == 0xd) {
          local_2b4 = 0;
          goto LAB_1403aa80c;
        }
        FUN_140042910(&DAT_14172c3d8,&local_2c0,&local_2c0);
      }
    }
    local_2c8 = 0xff;
    pdVar6 = (double *)0x0;
    uVar3 = uVar3 & 0xffffff;
    if ((uVar3 == 2) && (dVar11 != 0.0)) {
      if (*(int *)((longlong)dVar11 + 0x24) < 4) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",3);
      }
      else {
        pdVar6 = (double *)(*(longlong *)((longlong)dVar11 + 8) + 0x30);
      }
      if (pdVar6 != &local_168) goto LAB_1403aa891;
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      pdVar6 = &local_258;
LAB_1403aa891:
      local_378 = *(undefined4 *)pdVar6;
      uStack_374 = *(undefined4 *)((longlong)pdVar6 + 4);
      uStack_370 = *(undefined4 *)(pdVar6 + 1);
      uStack_36c = *(undefined4 *)((longlong)pdVar6 + 0xc);
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_378);
    }
    local_2c8 = 0x101;
    iVar2 = FUN_140e851f0(&local_168,&DAT_1419df7b0,DAT_141955260,0);
    pdVar6 = (double *)0x0;
    if (iVar2 != 0) {
      local_2c8 = 0x104;
      if ((uVar3 == 2) && (dVar11 != 0.0)) {
        if (*(int *)((longlong)dVar11 + 0x24) < 1) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
        }
        else {
          pdVar6 = *(double **)((longlong)dVar11 + 8);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar6 = &local_258;
      }
      uStack_2dc = *(undefined4 *)((longlong)pdVar6 + 0xc);
      uStack_2e0 = *(undefined4 *)(pdVar6 + 1);
      if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) == 0) {
        local_2e8 = *pdVar6;
      }
      else {
        FUN_1400419b0(&local_2e8,pdVar6);
      }
      FUN_1400462a0(&local_2e8,&local_268);
      local_378 = (undefined4)local_2e8;
      uStack_374 = local_2e8._4_4_;
      uStack_370 = uStack_2e0;
      uStack_36c = uStack_2dc;
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_378);
      if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2e8);
      }
      pdVar6 = (double *)0x0;
      if ((uVar3 == 2) && (dVar11 != 0.0)) {
        if (*(int *)((longlong)dVar11 + 0x24) < 2) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
        }
        else {
          pdVar6 = (double *)(*(longlong *)((longlong)dVar11 + 8) + 0x10);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar6 = &local_258;
      }
      uStack_1cc = *(undefined4 *)((longlong)pdVar6 + 0xc);
      uStack_1d0 = *(undefined4 *)(pdVar6 + 1);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_1d8 = *pdVar6;
      }
      else {
        FUN_1400419b0(&local_1d8,pdVar6);
      }
      FUN_1400462a0(&local_1d8,&local_278);
      local_378 = (undefined4)local_1d8;
      uStack_374 = local_1d8._4_4_;
      uStack_370 = uStack_1d0;
      uStack_36c = uStack_1cc;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      FUN_140041b80(&local_248,&local_378);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      pdVar6 = (double *)0x0;
      if ((uVar3 == 2) && (dVar11 != 0.0)) {
        if (*(int *)((longlong)dVar11 + 0x24) < 3) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",2);
        }
        else {
          pdVar6 = (double *)(*(longlong *)((longlong)dVar11 + 8) + 0x20);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar6 = &local_258;
      }
      uStack_1fc = *(undefined4 *)((longlong)pdVar6 + 0xc);
      uStack_200 = *(undefined4 *)(pdVar6 + 1);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_208 = *pdVar6;
      }
      else {
        FUN_1400419b0(&local_208,pdVar6);
      }
      FUN_140042560(&local_208,local_f0);
      local_378 = (undefined4)local_208;
      uStack_374 = local_208._4_4_;
      uStack_370 = uStack_200;
      uStack_36c = uStack_1fc;
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_378);
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_2c8 = 0x108;
      if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_398);
      }
      local_398 = 0;
      local_390 = 0;
      local_38c = 5;
      local_318 = &local_168;
      ppdVar16 = &local_318;
      gml_Script_light_add(param_1,param_2,&local_398,1,ppdVar16);
      uVar17 = (undefined4)((ulonglong)ppdVar16 >> 0x20);
      local_2c8 = 0x109;
      pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5368);
      if (pdVar6 != &local_368) {
        local_378 = *(undefined4 *)pdVar6;
        uStack_374 = *(undefined4 *)((longlong)pdVar6 + 4);
        uStack_370 = *(undefined4 *)(pdVar6 + 1);
        uStack_36c = *(undefined4 *)((longlong)pdVar6 + 0xc);
        if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_368);
        }
        FUN_140041b80(&local_368,&local_378);
      }
      local_318 = &local_368;
      local_310 = &local_238;
      local_308 = &local_248;
      FUN_140ec9ea0(3,&local_318);
      local_2c8 = 0x10a;
      pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4f48);
      if (pdVar6 != &local_368) {
        local_378 = *(undefined4 *)pdVar6;
        uStack_374 = *(undefined4 *)((longlong)pdVar6 + 4);
        uStack_370 = *(undefined4 *)(pdVar6 + 1);
        uStack_36c = *(undefined4 *)((longlong)pdVar6 + 0xc);
        if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_368);
        }
        FUN_140041b80(&local_368,&local_378);
      }
      local_318 = &local_368;
      local_310 = &local_288;
      FUN_140ec9ea0(2,&local_318);
      local_2c8 = 0x10c;
      if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_398);
      }
      local_398 = 0;
      local_390 = 0;
      local_38c = 5;
      local_318 = &local_1a8;
      uStack_20c = local_22c;
      uStack_210 = local_230;
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) == 0) {
        local_218 = local_238;
      }
      else {
        FUN_1400419b0(&local_218,&local_238);
      }
      FUN_1400462a0(&local_218,&local_288);
      local_378 = (undefined4)local_218;
      uStack_374 = local_218._4_4_;
      uStack_370 = uStack_210;
      uStack_36c = uStack_20c;
      if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      FUN_140041b80(&local_358,&local_378);
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_310 = &local_358;
      uStack_1dc = local_23c;
      uStack_1e0 = local_240;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) == 0) {
        local_1e8 = local_248;
      }
      else {
        FUN_1400419b0(&local_1e8,&local_248);
      }
      FUN_1400462a0(&local_1e8,&local_288);
      local_378 = (undefined4)local_1e8;
      uStack_374 = local_1e8._4_4_;
      uStack_370 = uStack_1e0;
      uStack_36c = uStack_1dc;
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      FUN_140041b80(&local_348,&local_378);
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_308 = &local_348;
      uStack_1ac = local_27c;
      uStack_1b0 = local_280;
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) == 0) {
        local_1b8 = local_288;
      }
      else {
        FUN_1400419b0(&local_1b8,&local_288);
      }
      uStack_37c = 7;
      local_388 = (double)CONCAT44(local_388._4_4_,2);
      FUN_140042560(&local_1b8,&local_388);
      if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_388);
      }
      local_378 = (undefined4)local_1b8;
      uStack_374 = local_1b8._4_4_;
      uStack_370 = uStack_1b0;
      uStack_36c = uStack_1ac;
      if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_338);
      }
      FUN_140041b80(&local_338,&local_378);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_300 = &local_338;
      uStack_1bc = local_27c;
      uStack_1c0 = local_280;
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) == 0) {
        local_1c8 = local_288;
      }
      else {
        FUN_1400419b0(&local_1c8,&local_288);
      }
      uStack_28c = 7;
      local_298 = 2;
      FUN_140042560(&local_1c8,&local_298);
      if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      local_378 = (undefined4)local_1c8;
      uStack_374 = local_1c8._4_4_;
      uStack_370 = uStack_1c0;
      uStack_36c = uStack_1bc;
      if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_328);
      }
      FUN_140041b80(&local_328,&local_378);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_2f8 = &local_328;
      uVar5 = CONCAT44(uVar17,DAT_141a04758);
      FUN_140e634e0(param_1,param_2,&local_398,5,uVar5,&local_318);
    }
    uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
    pdVar6 = local_f8;
  } while( true );
}

