// gml_Object_oBossGrub_Step_0 @ 0x140792340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oBossGrub_Step_0
          (longlong *param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined4 uVar15;
  longlong *plVar16;
  longlong *local_res8;
  longlong *local_res10;
  ulonglong uVar17;
  undefined1 **ppuVar18;
  undefined8 uVar19;
  longlong *plVar20;
  undefined1 **ppuVar21;
  ulonglong uVar22;
  undefined8 local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 local_338;
  undefined4 uStack_330;
  uint uStack_32c;
  undefined4 local_328;
  uint uStack_324;
  undefined4 uStack_320;
  uint uStack_31c;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 local_30c;
  undefined8 local_308;
  undefined4 uStack_300;
  uint uStack_2fc;
  longlong *local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  char *local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined4 local_294;
  undefined8 local_290;
  undefined4 local_284;
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
  undefined4 local_228 [3];
  byte local_21c;
  undefined1 local_218 [12];
  byte local_20c;
  undefined8 local_208;
  byte local_1fc;
  undefined1 local_1f8 [12];
  byte local_1ec;
  longlong *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined1 *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined4 *local_180;
  undefined1 *local_178;
  undefined8 *local_170;
  undefined1 *local_168;
  undefined8 local_158;
  undefined4 local_14c;
  ulonglong local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_10c;
  uint local_108 [2];
  undefined8 *local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  longlong local_d8;
  undefined1 local_c8 [16];
  longlong local_b8;
  
  local_2b0 = "gml_Script_anon@1251@gml_Object_oBossGrub_Create_0";
  local_2b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2b8;
  local_2a8 = 0x45;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_108,param_4,1,param_5);
  uVar15 = 1;
  _eh_vector_constructor_iterator_(local_278,0x10,9,FUN_1400424d0,FUN_140041b30);
  local_14c = 0xffffff;
  local_158 = 0;
  uStack_2bc = 0xffffff;
  local_2c8 = 0;
  uStack_2fc = 0xffffff;
  local_308 = (longlong *)0x0;
  uStack_1dc = 0xffffff;
  local_1e8 = (longlong *)0x0;
  local_284 = 0xffffff;
  local_290 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_294 = 0xffffff;
  local_2a0 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_30c = 0;
  local_318 = 0;
  local_2cc = 0;
  local_2d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2a8 = 0x45;
  puVar12 = &DAT_1419df7b0;
  uVar13 = (ulonglong)local_108[0];
  if ((int)local_108[0] < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*local_100;
  }
  iVar8 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar8 == 0) {
    local_2a8 = 0x45;
    if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    local_318 = 0;
    local_310 = 0;
    local_30c = 5;
    if (0 < (int)local_108[0]) {
      puVar12 = (undefined8 *)*local_100;
    }
    puVar9 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_318,0,CONCAT44(uVar15,DAT_1419fd6d8),0);
    if (puVar9 != puVar12) {
      local_348 = (longlong *)*puVar9;
      uStack_340 = *(undefined4 *)(puVar9 + 1);
      uStack_33c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar12);
      }
      FUN_140041b80(puVar12,&local_348);
    }
  }
  local_2a8 = 0x47;
  uVar10 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a08658);
  plVar16 = local_res8;
  plVar20 = local_res10;
  FUN_140e87170(uVar10,DAT_1419fe0e8,0x80000000,&local_158,local_res8,local_res10);
  uStack_32c = 6;
  local_338 = local_res8;
  uVar17 = (ulonglong)plVar16 & 0xffffffffffffff00;
  FUN_140e87440(&local_338,DAT_1419fe0e8,0x80000000,&local_2c8,uVar17,
                (ulonglong)plVar20 & 0xffffffffffffff00);
  uVar15 = (undefined4)(uVar17 >> 0x20);
  if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  iVar8 = FUN_140e851f0(&local_158,&local_2c8,DAT_141955260,1);
  bVar14 = iVar8 == -2 || -1 < iVar8;
  if (bVar14) {
    uStack_32c = 0;
    local_338 = (longlong *)&DAT_bff0000000000000;
    puVar12 = &local_338;
  }
  else {
    uStack_2dc = 0;
    local_2e8 = 0x3ff0000000000000;
    puVar12 = &local_2e8;
  }
  uVar6 = uStack_2dc;
  uVar5 = uStack_32c;
  local_348 = (longlong *)*puVar12;
  uStack_340 = *(undefined4 *)(puVar12 + 1);
  uStack_33c = *(undefined4 *)((longlong)puVar12 + 0xc);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  FUN_140041b80(&local_308,&local_348);
  if ((bVar14) && ((1 << ((byte)uVar5 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_338);
  }
  if ((iVar8 != -2 && -1 >= iVar8) && ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_2e8);
  }
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar14 = false;
  local_2a8 = 0x49;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_2d8 = 0;
  local_2d0 = 0;
  local_2cc = 5;
  uStack_32c = 0;
  local_338 = (longlong *)0xc024000000000000;
  FUN_140042560(&local_338,&local_308);
  local_348 = local_338;
  uStack_340 = uStack_330;
  uStack_33c = uStack_32c;
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_348);
  if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  uStack_32c = 0;
  local_338 = (longlong *)0x4051800000000000;
  local_1a8 = local_278;
  FUN_140042560(&local_338,&local_308);
  local_348 = local_338;
  uStack_340 = uStack_330;
  uStack_33c = uStack_32c;
  if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  FUN_140041b80(local_268,&local_348);
  if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  local_1a0 = local_268;
  local_348 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_340 = DAT_1419df7b8;
  uStack_33c = DAT_1419df7bc;
  if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_258);
  }
  FUN_140041b80(local_258,&local_348);
  local_198 = local_258;
  local_348 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_340 = DAT_1419df7b8;
  uStack_33c = DAT_1419df7bc;
  if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_248);
  }
  FUN_140041b80(local_248,&local_348);
  local_190 = local_248;
  local_348 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_340 = DAT_1419df7b8;
  uStack_33c = DAT_1419df7bc;
  if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_348);
  local_188 = local_238;
  local_348 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_340 = DAT_1419df7b8;
  uStack_33c = DAT_1419df7bc;
  if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_348);
  local_180 = local_228;
  local_348 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_340 = DAT_1419df7b8;
  uStack_33c = DAT_1419df7bc;
  if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_348);
  local_178 = local_218;
  ppuVar21 = &local_1a8;
  puVar12 = (undefined8 *)
            FUN_140e634e0(local_res8,local_res10,&local_2d8,2,CONCAT44(uVar15,DAT_1419fdca8),
                          ppuVar21);
  if (puVar12 != &local_208) {
    local_348 = (longlong *)*puVar12;
    uStack_340 = *(undefined4 *)(puVar12 + 1);
    uStack_33c = *(undefined4 *)((longlong)puVar12 + 0xc);
    if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_348);
  }
  local_170 = &local_208;
  local_348 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_340 = DAT_1419df7b8;
  uStack_33c = DAT_1419df7bc;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_348);
  local_168 = local_1f8;
  ppuVar18 = &local_198;
  gml_Script_get_blood_col(local_res8,local_res10,&local_318,7,ppuVar18);
  local_2a8 = 0x4b;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  uStack_32c = 6;
  local_338 = local_res8;
  uVar22 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
  uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
  FUN_140e87440(&local_338,DAT_1419fe0e8,0x80000000,&local_2c8,uVar17,uVar22);
  if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  uStack_32c = 6;
  local_338 = local_res8;
  uVar17 = uVar17 & 0xffffffffffffff00;
  FUN_140e87440(&local_338,DAT_1419fe158,0x80000000,&local_1e8,uVar17,uVar22 & 0xffffffffffffff00);
  uVar15 = (undefined4)(uVar17 >> 0x20);
  if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  local_1d8 = FUN_140e794b0(0,0);
  uStack_32c = uStack_2fc;
  uStack_330 = uStack_300;
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) == 0) {
    local_338 = local_308;
  }
  else {
    FUN_1400419b0(&local_338,&local_308);
  }
  local_1cc = 0;
  FUN_140042560(&local_338,&local_1d8);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_2dc = uStack_2bc;
  uStack_2e0 = uStack_2c0;
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) == 0) {
    local_2e8 = local_2c8;
  }
  else {
    FUN_1400419b0(&local_2e8,&local_2c8);
  }
  FUN_1400462a0(&local_2e8,&local_338);
  local_348 = (longlong *)local_2e8;
  uStack_340 = uStack_2e0;
  uStack_33c = uStack_2dc;
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_348);
  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  local_348 = local_1e8;
  uStack_340 = uStack_1e0;
  uStack_33c = uStack_1dc;
  local_1a8 = local_278;
  if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  FUN_140041b80(local_268,&local_348);
  local_1a0 = local_268;
  local_348 = (longlong *)CONCAT44(uRam0000000141dd681c,_DAT_141dd6818);
  uStack_340 = uRam0000000141dd6820;
  uStack_33c = DAT_141dd6824;
  if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_258);
  }
  FUN_140041b80(local_258,&local_348);
  local_198 = local_258;
  uStack_2ec = 0xf;
  local_2f8 = (longlong *)0x10000000000012d;
  local_348 = (longlong *)0x10000000000012d;
  uStack_340 = uStack_2f0;
  uStack_33c = 0xf;
  if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_248);
  }
  FUN_140041b80(local_248,&local_348);
  local_190 = local_248;
  ppuVar21 = &local_1a8;
  uVar17 = CONCAT44(uVar15,DAT_141a0a7c8);
  uVar10 = FUN_140e634e0(local_res8,local_res10,&local_318,4,uVar17,ppuVar21);
  iVar8 = FUN_140e63cb0(local_c8,&local_res8,&local_res10,uVar10);
  if (0 < iVar8) {
    do {
      local_2a8 = 0x4d;
      uStack_ec = 0xf;
      local_f8 = 0x100000100000063;
      local_328 = 99;
      uStack_324 = 0x1000001;
      uStack_320 = uStack_f0;
      uStack_31c = 0xf;
      if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_290);
      }
      FUN_140041b80(&local_290,&local_328);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_290);
      local_2a8 = 0x4e;
      plVar16 = local_308;
      if ((uStack_2fc & 0xffffff) != 0) {
        plVar16 = (longlong *)FUN_140e4b060(&local_308);
      }
      local_328 = SUB84(plVar16,0);
      local_348 = (longlong *)((ulonglong)plVar16 ^ 0x8000000000000000);
      uStack_33c = 0;
      uStack_324 = (uint)((ulonglong)plVar16 >> 0x20) ^ 0x80000000;
      uStack_320 = uStack_340;
      uStack_31c = 0;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_328);
      FUN_140e86fa0(local_res8,DAT_141a0f938,0x80000000,&local_1b8);
      local_2a8 = 0x4f;
      puVar12 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a1f090);
      if ((*(uint *)((longlong)puVar12 + 0xc) & 0xffffff) == 0) {
        uVar15 = (undefined4)*puVar12;
      }
      else {
        uVar15 = FUN_140e4b060(puVar12);
      }
      dVar1 = (double)FUN_1412a79b0(uVar15,0);
      if (dVar1 == 0.0) {
        local_2a8 = 0x51;
        plVar16 = local_308;
        if ((uStack_2fc & 0xffffff) != 0) {
          plVar16 = (longlong *)FUN_140e4b060(&local_308);
        }
        local_13c = 0;
        local_148 = (ulonglong)plVar16 ^ 0x8000000000000000;
        local_1cc = 0;
        local_1d8 = 0x3ff0000000000000;
        iVar8 = FUN_140e851f0(&local_148,&local_1d8,DAT_141955260,0);
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        if (iVar8 == 0) {
          uStack_2dc = 0;
          local_2e8 = 0x403e000000000000;
          puVar12 = &local_2e8;
          bVar2 = true;
        }
        else {
          uStack_32c = 0;
          local_338 = (longlong *)0x4061800000000000;
          puVar12 = &local_338;
          bVar14 = true;
        }
        local_328 = *(undefined4 *)puVar12;
        uStack_324 = *(undefined4 *)((longlong)puVar12 + 4);
        uStack_320 = *(undefined4 *)(puVar12 + 1);
        uStack_31c = *(undefined4 *)((longlong)puVar12 + 0xc);
        if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a0);
        }
        FUN_140041b80(&local_2a0,&local_328);
        if ((bVar14) && (bVar14 = false, (1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_338);
        }
        if ((bVar2) && (bVar2 = false, (1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_2e8);
        }
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
      }
      else {
        local_2a8 = 0x56;
        plVar16 = local_308;
        if ((uStack_2fc & 0xffffff) != 0) {
          plVar16 = (longlong *)FUN_140e4b060(&local_308);
        }
        uStack_2ec = 0;
        local_2f8 = (longlong *)((ulonglong)plVar16 ^ 0x8000000000000000);
        local_12c = 0;
        local_138 = 0x3ff0000000000000;
        iVar8 = FUN_140e851f0(&local_2f8,&local_138,DAT_141955260,0);
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        if (iVar8 == 0) {
          uStack_10c = 0;
          local_118 = 0;
          puVar12 = &local_118;
          bVar4 = true;
        }
        else {
          local_11c = 0;
          local_128 = 0x4066800000000000;
          puVar12 = &local_128;
          bVar3 = true;
        }
        local_328 = *(undefined4 *)puVar12;
        uStack_324 = *(undefined4 *)((longlong)puVar12 + 4);
        uStack_320 = *(undefined4 *)(puVar12 + 1);
        uStack_31c = *(undefined4 *)((longlong)puVar12 + 0xc);
        if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a0);
        }
        FUN_140041b80(&local_2a0,&local_328);
        if ((bVar3) && (bVar3 = false, (1 << ((byte)local_11c & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_128);
        }
        if ((bVar4) && (bVar4 = false, (1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_118);
        }
        if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f8);
        }
      }
      FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_2a0);
      cVar7 = FUN_140e643f0(local_c8,&local_res8,&local_res10);
    } while (cVar7 != '\0');
  }
  FUN_140e63970(local_c8,&local_res8,&local_res10);
  local_2a8 = 0x5c;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  uStack_2ec = 6;
  local_2f8 = local_res8;
  uVar22 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
  uVar17 = uVar17 & 0xffffffffffffff00;
  FUN_140e87440(&local_2f8,DAT_1419fe0e8,0x80000000,&local_2c8,uVar17,uVar22);
  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  uStack_2ec = 6;
  local_2f8 = local_res8;
  uVar17 = uVar17 & 0xffffffffffffff00;
  FUN_140e87440(&local_2f8,DAT_1419fe158,0x80000000,&local_1e8,uVar17,uVar22 & 0xffffffffffffff00);
  uVar15 = (undefined4)(uVar17 >> 0x20);
  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_328 = (undefined4)local_2c8;
  uStack_324 = local_2c8._4_4_;
  uStack_320 = uStack_2c0;
  uStack_31c = uStack_2bc;
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_328);
  uStack_32c = uStack_1dc;
  uStack_330 = uStack_1e0;
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
    local_338 = local_1e8;
    local_1a8 = local_278;
  }
  else {
    local_1a8 = local_278;
    FUN_1400419b0(&local_338,&local_1e8);
  }
  uStack_2ec = 7;
  local_2f8 = (longlong *)CONCAT44(local_2f8._4_4_,4);
  FUN_1400462a0(&local_338,&local_2f8);
  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_328 = (undefined4)local_338;
  uStack_324 = local_338._4_4_;
  uStack_320 = uStack_330;
  uStack_31c = uStack_32c;
  if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  FUN_140041b80(local_268,&local_328);
  if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  local_1a0 = local_268;
  local_328 = _DAT_141dd6808;
  uStack_324 = uRam0000000141dd680c;
  uStack_320 = uRam0000000141dd6810;
  uStack_31c = DAT_141dd6814;
  if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_258);
  }
  FUN_140041b80(local_258,&local_328);
  local_198 = local_258;
  uStack_33c = 0xf;
  local_348 = (longlong *)0x10000000000012d;
  local_328 = 0x12d;
  uStack_324 = 0x1000000;
  uStack_320 = uStack_340;
  uStack_31c = 0xf;
  if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_248);
  }
  FUN_140041b80(local_248,&local_328);
  local_190 = local_248;
  uVar19 = CONCAT44(uVar15,DAT_141a0a7c8);
  uVar10 = FUN_140e634e0(local_res8,local_res10,&local_318,4,uVar19,&local_1a8);
  iVar8 = FUN_140e63cb0(local_e8,&local_res8,&local_res10,uVar10);
  uVar15 = (undefined4)((ulonglong)uVar19 >> 0x20);
  if (0 < iVar8) {
    do {
      local_2a8 = 0x5e;
      uStack_33c = 0xf;
      local_348 = (longlong *)0x100000100000061;
      local_328 = 0x61;
      uStack_324 = 0x1000001;
      uStack_320 = uStack_340;
      uStack_31c = 0xf;
      if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_290);
      }
      FUN_140041b80(&local_290,&local_328);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_290);
      local_2a8 = 0x5f;
      local_328 = (undefined4)local_308;
      uStack_324 = local_308._4_4_;
      uStack_320 = uStack_300;
      uStack_31c = uStack_2fc;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_328);
      FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_1c8);
      cVar7 = FUN_140e643f0(local_e8,&local_res8,&local_res10);
      uVar15 = (undefined4)((ulonglong)uVar19 >> 0x20);
    } while (cVar7 != '\0');
  }
  FUN_140e63970(local_e8,&local_res8,&local_res10);
  local_2a8 = 99;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_2d8 = 0;
  local_2d0 = 0;
  local_2cc = 5;
  uStack_33c = 0xf;
  local_348 = (longlong *)0x1000002000001a0;
  local_328 = 0x1a0;
  uStack_324 = 0x1000002;
  uStack_320 = uStack_340;
  uStack_31c = 0xf;
  if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_328);
  uStack_33c = 0xf;
  local_348 = (longlong *)0x1000002000001a1;
  local_328 = 0x1a1;
  uStack_324 = 0x1000002;
  uStack_320 = uStack_340;
  uStack_31c = 0xf;
  local_1a8 = local_278;
  if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  FUN_140041b80(local_268,&local_328);
  local_1a0 = local_268;
  uStack_33c = 0xf;
  local_348 = (longlong *)0x1000002000001a2;
  local_328 = 0x1a2;
  uStack_324 = 0x1000002;
  uStack_320 = uStack_340;
  uStack_31c = 0xf;
  if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_258);
  }
  FUN_140041b80(local_258,&local_328);
  local_198 = local_258;
  uStack_33c = 0xf;
  local_348 = (longlong *)0x1000002000001a3;
  local_328 = 0x1a3;
  uStack_324 = 0x1000002;
  uStack_320 = uStack_340;
  uStack_31c = 0xf;
  if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_248);
  }
  FUN_140041b80(local_248,&local_328);
  local_190 = local_248;
  uStack_33c = 0xf;
  local_348 = (longlong *)0x1000002000001a4;
  local_328 = 0x1a4;
  uStack_324 = 0x1000002;
  uStack_320 = uStack_340;
  uStack_31c = 0xf;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_328);
  local_188 = local_238;
  puVar11 = (undefined4 *)FUN_140e78db0(&local_2d8,5,&local_1a8);
  if (puVar11 != local_228) {
    local_328 = *puVar11;
    uStack_324 = puVar11[1];
    uStack_320 = puVar11[2];
    uStack_31c = puVar11[3];
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_328);
  }
  local_180 = local_228;
  local_328 = _DAT_1419e8190;
  uStack_324 = uRam00000001419e8194;
  uStack_320 = uRam00000001419e8198;
  uStack_31c = uRam00000001419e819c;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_328);
  local_178 = local_218;
  local_328 = _DAT_1419df7a0;
  uStack_324 = uRam00000001419df7a4;
  uStack_320 = uRam00000001419df7a8;
  uStack_31c = uRam00000001419df7ac;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  FUN_140041b80(&local_208,&local_328);
  local_170 = &local_208;
  FUN_140e634e0(local_res8,local_res10,&local_318,3,CONCAT44(uVar15,DAT_141a0a2e8),&local_180);
  if (local_d8 != 0) {
    FUN_140e4cd60();
    local_d8 = 0;
  }
  if (local_b8 != 0) {
    FUN_140e4cd60();
    local_b8 = 0;
  }
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a0);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_290);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_278,0x10,9,FUN_140041b30);
  if (0 < (int)local_108[0]) {
    puVar12 = local_100;
    do {
      puVar9 = (undefined8 *)*puVar12;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      *puVar9 = 0;
      *(undefined4 *)(puVar9 + 1) = 0;
      *(undefined4 *)((longlong)puVar9 + 0xc) = 5;
      puVar12 = puVar12 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  FUN_140e4cd60(local_100);
  DAT_141dc7a50 = (undefined8 *)local_2b8;
  return param_3;
}

