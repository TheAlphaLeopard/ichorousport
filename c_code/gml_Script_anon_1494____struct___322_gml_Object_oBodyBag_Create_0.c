// gml_Script_anon_1494____struct___322_gml_Object_oBodyBag_Create_0 @ 0x1406ee150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1494____struct___322_gml_Object_oBodyBag_Create_0
          (longlong *param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  double *pdVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  bool bVar12;
  float fVar13;
  undefined4 uVar14;
  double dVar15;
  longlong *plVar16;
  longlong *local_res8;
  longlong *local_res10;
  code *pcVar17;
  ulonglong uVar18;
  undefined8 **ppuVar19;
  undefined8 uVar20;
  ulonglong in_stack_fffffffffffffc90;
  longlong *plVar21;
  ulonglong uVar22;
  undefined8 local_368;
  undefined4 uStack_360;
  uint uStack_35c;
  undefined8 local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  undefined4 local_340;
  undefined4 local_33c;
  undefined8 local_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined4 uStack_320;
  uint uStack_31c;
  undefined4 local_318;
  uint uStack_314;
  undefined4 uStack_310;
  uint uStack_30c;
  undefined8 local_308;
  char *local_300;
  undefined4 local_2f8;
  longlong *local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  ulonglong local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_24c;
  undefined8 local_248;
  byte local_23c;
  undefined1 local_238 [12];
  byte local_22c;
  undefined1 local_228 [12];
  byte local_21c;
  undefined8 local_218;
  byte local_20c;
  undefined1 local_208 [12];
  byte local_1fc;
  undefined1 local_1f8 [12];
  byte local_1ec;
  undefined1 local_1e8 [12];
  byte local_1dc;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 *local_198;
  longlong **local_190;
  undefined1 *local_188;
  undefined8 *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  ulonglong local_160;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined4 local_114;
  uint local_110 [2];
  undefined8 *local_108;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  longlong local_d8;
  undefined1 local_c8 [16];
  longlong local_b8;
  
  local_300 = "gml_Script_anon@276@gml_Object_oBodyBag_Create_0";
  local_308 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_308;
  local_2f8 = 0x14;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_110,param_4,1,param_5);
  pcVar17 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_248,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  uStack_31c = 0xffffff;
  local_328 = (longlong *)0x0;
  local_2d4 = 0xffffff;
  local_2e0 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_2e4 = 0xffffff;
  local_2f0 = (longlong *)0x0;
  uStack_1cc = 0xffffff;
  local_1d8 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_33c = 0;
  local_348 = 0;
  local_114 = 0;
  local_120 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2f8 = 0x14;
  puVar10 = &DAT_1419df7b0;
  uVar11 = (ulonglong)local_110[0];
  if ((int)local_110[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_108;
  }
  iVar6 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar6 == 0) {
    local_2f8 = 0x14;
    if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_348);
    }
    local_348 = 0;
    local_340 = 0;
    local_33c = 5;
    if (0 < (int)local_110[0]) {
      puVar10 = (undefined8 *)*local_108;
    }
    in_stack_fffffffffffffc90 = 0;
    pcVar17 = (code *)CONCAT44((int)((ulonglong)pcVar17 >> 0x20),DAT_1419fd6d8);
    puVar7 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_348,0,pcVar17,0);
    if (puVar7 != puVar10) {
      local_358 = *puVar7;
      uStack_350 = *(undefined4 *)(puVar7 + 1);
      uStack_34c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      FUN_140041b80(puVar10,&local_358);
    }
  }
  local_2f8 = 0x16;
  uVar8 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd3c8);
  uStack_35c = 0xf;
  local_368 = (longlong *)0x1000000000000ee;
  in_stack_fffffffffffffc90 = in_stack_fffffffffffffc90 & 0xffffffffffffff00;
  uVar18 = (ulonglong)pcVar17 & 0xffffffffffffff00;
  FUN_140e87440(&local_368,DAT_1419f5ef8,0x80000000,&local_1a8,uVar18,in_stack_fffffffffffffc90);
  if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  uStack_35c = 0;
  local_368 = (longlong *)0x4000000000000000;
  FUN_140042560(&local_368,&local_1a8);
  FUN_1400460e0(uVar8,&local_368);
  if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  local_2f8 = 0x18;
  if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  local_348 = 0;
  local_340 = 0;
  local_33c = 5;
  uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5868);
  FUN_140e87440(uVar8,DAT_1419f5848,0x80000000,&local_1b8,uVar18 & 0xffffffffffffff00,
                in_stack_fffffffffffffc90 & 0xffffffffffffff00);
  local_358 = CONCAT44(uRam0000000141dd5f0c,_DAT_141dd5f08);
  uStack_350 = uRam0000000141dd5f10;
  uStack_34c = DAT_141dd5f14;
  if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140041b80(&local_248,&local_358);
  local_198 = &local_248;
  uVar8 = FUN_140069500(uVar8);
  uVar8 = FUN_140e63610(uVar8,local_res10,&local_348,1,&local_1b8,&local_198);
  cVar5 = FUN_140e491e0(uVar8);
  if (cVar5 == '\0') {
    local_2f8 = 0x1a;
    uStack_35c = 0xf;
    local_368 = (longlong *)0x1000000000000ee;
    plVar16 = local_res8;
    plVar21 = local_res10;
    FUN_140e87170(&local_368,DAT_1419fe0e8,0x80000000,&local_1c8,local_res8,local_res10);
    if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    uStack_35c = 6;
    local_368 = local_res8;
    uVar22 = (ulonglong)plVar21 & 0xffffffffffffff00;
    uVar18 = (ulonglong)plVar16 & 0xffffffffffffff00;
    FUN_140e87440(&local_368,DAT_1419fe0e8,0x80000000,&local_298,uVar18,uVar22);
    if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    iVar6 = FUN_140e851f0(&local_1c8,&local_298,DAT_141955260,1);
    bVar12 = iVar6 == -2 || -1 < iVar6;
    if (bVar12) {
      uStack_35c = 0;
      local_368 = (longlong *)&DAT_bff0000000000000;
      puVar10 = &local_368;
    }
    else {
      uStack_32c = 0;
      local_338 = 0x3ff0000000000000;
      puVar10 = &local_338;
    }
    uVar14 = uStack_32c;
    uVar4 = uStack_35c;
    local_358 = *puVar10;
    uStack_350 = *(undefined4 *)(puVar10 + 1);
    uStack_34c = *(undefined4 *)((longlong)puVar10 + 0xc);
    if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    FUN_140041b80(&local_328,&local_358);
    if ((bVar12) && ((1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_368);
    }
    if ((iVar6 != -2 && -1 >= iVar6) && ((1 << ((byte)uVar14 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_338);
    }
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
    bVar12 = false;
    local_2f8 = 0x1b;
    pdVar9 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7f8);
    uStack_35c = 6;
    local_368 = local_res8;
    uVar22 = uVar22 & 0xffffffffffffff00;
    uVar18 = uVar18 & 0xffffffffffffff00;
    FUN_140e87440(&local_368,DAT_1419fe0e8,0x80000000,&local_298,uVar18,uVar22);
    if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
      dVar15 = *pdVar9;
    }
    else {
      dVar15 = (double)FUN_140e4b060(pdVar9);
    }
    fVar13 = (float)FUN_140e78f90(0x42700000,(float)dVar15);
    uStack_32c = local_28c;
    uStack_330 = local_290;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) == 0) {
      local_338 = local_298;
    }
    else {
      FUN_1400419b0(&local_338,&local_298);
    }
    FUN_140162c50(&local_338,SUB84((double)fVar13,0));
    local_358 = local_338;
    uStack_350 = uStack_330;
    uStack_34c = uStack_32c;
    if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e0);
    }
    FUN_140041b80(&local_2e0,&local_358);
    if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_338);
    }
    local_2f8 = 0x1c;
    uStack_35c = 6;
    local_368 = local_res8;
    uVar22 = uVar22 & 0xffffffffffffff00;
    uVar18 = uVar18 & 0xffffffffffffff00;
    FUN_140e87440(&local_368,DAT_1419fe158,0x80000000,&local_278,uVar18,uVar22);
    if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
      dVar15 = *pdVar9;
    }
    else {
      dVar15 = (double)FUN_140e4b060(pdVar9);
    }
    fVar13 = (float)FUN_140e79010(0x42700000,(float)dVar15);
    uStack_32c = local_26c;
    uStack_330 = local_270;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) == 0) {
      local_338 = local_278;
    }
    else {
      FUN_1400419b0(&local_338,&local_278);
    }
    FUN_140162c50(&local_338,SUB84((double)fVar13,0));
    local_358 = local_338;
    uStack_350 = uStack_330;
    uStack_34c = uStack_32c;
    if ((1 << ((byte)local_2e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f0);
    }
    FUN_140041b80(&local_2f0,&local_358);
    if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_338);
    }
    local_2f8 = 0x30;
    if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_348);
    }
    local_348 = 0;
    local_340 = 0;
    local_33c = 5;
    uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff338);
    (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7f8);
    FUN_140e87440(uVar8,DAT_141a572c0,0x80000000,&local_1d8,uVar18 & 0xffffffffffffff00,
                  uVar22 & 0xffffffffffffff00);
    local_198 = &local_2e0;
    local_190 = &local_2f0;
    local_358 = local_1d8;
    uStack_350 = uStack_1d0;
    uStack_34c = uStack_1cc;
    if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_358);
    local_188 = local_228;
    puVar10 = (undefined8 *)FUN_140e8da20(&local_120,local_res8,2,&DAT_1419e7aa0,&DAT_1419e7a90);
    if (puVar10 != &local_218) {
      local_358 = *puVar10;
      uStack_350 = *(undefined4 *)(puVar10 + 1);
      uStack_34c = *(undefined4 *)((longlong)puVar10 + 0xc);
      if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_358);
    }
    local_180 = &local_218;
    local_358 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_350 = DAT_1419df7b8;
    uStack_34c = DAT_1419df7bc;
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_358);
    local_178 = local_208;
    local_358 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_350 = DAT_1419df7b8;
    uStack_34c = DAT_1419df7bc;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_358);
    local_170 = local_1f8;
    local_358 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_350 = DAT_1419df7b8;
    uStack_34c = DAT_1419df7bc;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_358);
    local_168 = local_1e8;
    ppuVar19 = &local_198;
    gml_Script_get_blood_col(local_res8,local_res10,&local_348,7,ppuVar19);
    uVar14 = (undefined4)((ulonglong)ppuVar19 >> 0x20);
    local_2f8 = 0x31;
    if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_348);
    }
    local_348 = 0;
    local_340 = 0;
    local_33c = 5;
    local_288 = FUN_140e794b0(0,0);
    uStack_35c = uStack_31c;
    uStack_360 = uStack_320;
    if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) == 0) {
      local_368 = local_328;
    }
    else {
      FUN_1400419b0(&local_368,&local_328);
    }
    local_27c = 0;
    FUN_140042560(&local_368,&local_288);
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    uStack_32c = local_2d4;
    uStack_330 = local_2d8;
    if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) == 0) {
      local_338 = local_2e0;
    }
    else {
      FUN_1400419b0(&local_338,&local_2e0);
    }
    FUN_1400462a0(&local_338,&local_368);
    local_358 = local_338;
    uStack_350 = uStack_330;
    uStack_34c = uStack_32c;
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_358);
    if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_338);
    }
    if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    local_198 = &local_248;
    local_190 = &local_2f0;
    local_358 = CONCAT44(uRam0000000141dd5efc,_DAT_141dd5ef8);
    uStack_350 = uRam0000000141dd5f00;
    uStack_34c = DAT_141dd5f04;
    if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_358);
    local_188 = local_228;
    uStack_2bc = 0xf;
    local_2c8 = 0x10000000000012d;
    local_358 = 0x10000000000012d;
    uStack_350 = uStack_2c0;
    uStack_34c = 0xf;
    if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_358);
    local_180 = &local_218;
    uVar20 = CONCAT44(uVar14,DAT_141a0a7c8);
    uVar8 = FUN_140e634e0(local_res8,local_res10,&local_348,4,uVar20,&local_198);
    iVar6 = FUN_140e63cb0(local_c8,&local_res8,&local_res10,uVar8);
    uVar14 = (undefined4)((ulonglong)uVar20 >> 0x20);
    if (0 < iVar6) {
      do {
        local_2f8 = 0x33;
        uStack_ec = 0xf;
        local_f8 = 0x100000100000063;
        local_318 = 99;
        uStack_314 = 0x1000001;
        uStack_310 = uStack_f0;
        uStack_30c = 0xf;
        if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        FUN_140041b80(&local_2a8,&local_318);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_2a8);
        local_2f8 = 0x34;
        plVar16 = local_328;
        if ((uStack_31c & 0xffffff) != 0) {
          plVar16 = (longlong *)FUN_140e4b060(&local_328);
        }
        local_318 = SUB84(plVar16,0);
        local_358 = (ulonglong)plVar16 ^ 0x8000000000000000;
        uStack_34c = 0;
        uStack_314 = (uint)((ulonglong)plVar16 >> 0x20) ^ 0x80000000;
        uStack_310 = uStack_350;
        uStack_30c = 0;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        FUN_140041b80(&local_258,&local_318);
        FUN_140e86fa0(local_res8,DAT_141a0f938,0x80000000,&local_258);
        local_2f8 = 0x35;
        puVar10 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a1f090);
        if ((*(uint *)((longlong)puVar10 + 0xc) & 0xffffff) == 0) {
          uVar14 = (undefined4)*puVar10;
        }
        else {
          uVar14 = FUN_140e4b060(puVar10);
        }
        dVar15 = (double)FUN_1412a79b0(uVar14,0);
        if (dVar15 == 0.0) {
          local_2f8 = 0x37;
          plVar16 = local_328;
          if ((uStack_31c & 0xffffff) != 0) {
            plVar16 = (longlong *)FUN_140e4b060(&local_328);
          }
          local_154 = 0;
          local_160 = (ulonglong)plVar16 ^ 0x8000000000000000;
          local_27c = 0;
          local_288 = 0x3ff0000000000000;
          iVar6 = FUN_140e851f0(&local_160,&local_288,DAT_141955260,0);
          if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          if (iVar6 == 0) {
            uStack_32c = 0;
            local_338 = 0x403e000000000000;
            puVar10 = &local_338;
            bVar1 = true;
          }
          else {
            uStack_35c = 0;
            local_368 = (longlong *)0x4061800000000000;
            puVar10 = &local_368;
            bVar12 = true;
          }
          local_318 = *(undefined4 *)puVar10;
          uStack_314 = *(undefined4 *)((longlong)puVar10 + 4);
          uStack_310 = *(undefined4 *)(puVar10 + 1);
          uStack_30c = *(uint *)((longlong)puVar10 + 0xc);
          if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          FUN_140041b80(&local_2b8,&local_318);
          if ((bVar12) && (bVar12 = false, (1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_368);
          }
          if ((bVar1) && (bVar1 = false, (1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_338);
          }
          if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_160);
          }
        }
        else {
          local_2f8 = 0x3c;
          plVar16 = local_328;
          if ((uStack_31c & 0xffffff) != 0) {
            plVar16 = (longlong *)FUN_140e4b060(&local_328);
          }
          uStack_2bc = 0;
          local_2c8 = (ulonglong)plVar16 ^ 0x8000000000000000;
          local_144 = 0;
          local_150 = 0x3ff0000000000000;
          iVar6 = FUN_140e851f0(&local_2c8,&local_150,DAT_141955260,0);
          if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_150);
          }
          if (iVar6 == 0) {
            uStack_124 = 0;
            local_130 = 0;
            puVar10 = &local_130;
            bVar3 = true;
          }
          else {
            local_134 = 0;
            local_140 = 0x4066800000000000;
            puVar10 = &local_140;
            bVar2 = true;
          }
          local_318 = *(undefined4 *)puVar10;
          uStack_314 = *(undefined4 *)((longlong)puVar10 + 4);
          uStack_310 = *(undefined4 *)(puVar10 + 1);
          uStack_30c = *(uint *)((longlong)puVar10 + 0xc);
          if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          FUN_140041b80(&local_2b8,&local_318);
          if ((bVar2) && (bVar2 = false, (1 << ((byte)local_134 & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_140);
          }
          if ((bVar3) && (bVar3 = false, (1 << ((byte)uStack_124 & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_130);
          }
          if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2c8);
          }
        }
        FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_2b8);
        cVar5 = FUN_140e643f0(local_c8,&local_res8,&local_res10);
        uVar14 = (undefined4)((ulonglong)uVar20 >> 0x20);
      } while (cVar5 != '\0');
    }
    FUN_140e63970(local_c8,&local_res8,&local_res10);
    local_2f8 = 0x41;
    if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_348);
    }
    local_348 = 0;
    local_340 = 0;
    local_33c = 5;
    local_198 = &local_2e0;
    uStack_35c = local_2e4;
    uStack_360 = local_2e8;
    if ((1 << ((byte)local_2e4 & 0x1f) & 0x46U) == 0) {
      local_368 = local_2f0;
    }
    else {
      FUN_1400419b0(&local_368,&local_2f0);
    }
    uStack_2bc = 7;
    local_2c8 = CONCAT44(local_2c8._4_4_,4);
    FUN_1400462a0(&local_368,&local_2c8);
    if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_318 = (undefined4)local_368;
    uStack_314 = local_368._4_4_;
    uStack_310 = uStack_360;
    uStack_30c = uStack_35c;
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_318);
    if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    local_190 = (longlong **)local_238;
    local_318 = _DAT_141dd5f38;
    uStack_314 = uRam0000000141dd5f3c;
    uStack_310 = uRam0000000141dd5f40;
    uStack_30c = DAT_141dd5f44;
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_318);
    local_188 = local_228;
    uStack_34c = 0xf;
    local_358 = 0x10000000000012d;
    local_318 = 0x12d;
    uStack_314 = 0x1000000;
    uStack_310 = uStack_350;
    uStack_30c = 0xf;
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_318);
    local_180 = &local_218;
    uVar8 = FUN_140e634e0(local_res8,local_res10,&local_348,4,CONCAT44(uVar14,DAT_141a0a7c8),
                          &local_198);
    iVar6 = FUN_140e63cb0(local_e8,&local_res8,&local_res10,uVar8);
    if (0 < iVar6) {
      do {
        local_2f8 = 0x43;
        uStack_34c = 0xf;
        local_358 = 0x100000100000061;
        local_318 = 0x61;
        uStack_314 = 0x1000001;
        uStack_310 = uStack_350;
        uStack_30c = 0xf;
        if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        FUN_140041b80(&local_2a8,&local_318);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_2a8);
        local_2f8 = 0x44;
        local_318 = (undefined4)local_328;
        uStack_314 = local_328._4_4_;
        uStack_310 = uStack_320;
        uStack_30c = uStack_31c;
        if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        FUN_140041b80(&local_268,&local_318);
        FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_268);
        cVar5 = FUN_140e643f0(local_e8,&local_res8,&local_res10);
      } while (cVar5 != '\0');
    }
    FUN_140e63970(local_e8,&local_res8,&local_res10);
    local_2f8 = 0x48;
    uVar8 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a04b88);
    FUN_140046040(uVar8);
    if (local_d8 != 0) {
      FUN_140e4cd60();
      local_d8 = 0;
    }
    if (local_b8 != 0) {
      FUN_140e4cd60();
      local_b8 = 0;
    }
  }
  else {
    local_2f8 = 0x18;
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_2e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f0);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e0);
  }
  if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  _eh_vector_destructor_iterator_(&local_248,0x10,7,FUN_140041b30);
  if (0 < (int)local_110[0]) {
    puVar10 = local_108;
    do {
      puVar7 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_108);
  DAT_141dc7a50 = (undefined8 *)local_308;
  return param_3;
}

