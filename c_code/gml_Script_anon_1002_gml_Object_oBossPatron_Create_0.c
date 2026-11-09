// gml_Script_anon_1002_gml_Object_oBossPatron_Create_0 @ 0x1407a6920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1002_gml_Object_oBossPatron_Create_0
          (longlong *param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong **pplVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined4 uVar14;
  longlong *plVar15;
  longlong *local_res8;
  longlong *local_res10;
  ulonglong uVar16;
  undefined1 **ppuVar17;
  undefined8 uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined1 **ppuVar21;
  undefined8 local_348;
  undefined4 uStack_340;
  uint uStack_33c;
  undefined8 local_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_31c;
  longlong *local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  uint uStack_304;
  undefined4 uStack_300;
  uint uStack_2fc;
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  uint uStack_2ec;
  longlong *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  longlong *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
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
  undefined8 local_228;
  undefined4 local_21c;
  undefined1 local_218 [12];
  byte local_20c;
  undefined8 local_208;
  byte local_1fc;
  undefined1 local_1f8 [12];
  byte local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
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
  undefined8 *local_180;
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
  
  local_2b0 = "gml_Script_anon@218@gml_Object_oBossPatron_Create_0";
  local_2b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2b8;
  local_2a8 = 0x10;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_108,param_4,1,param_5);
  uVar14 = 1;
  _eh_vector_constructor_iterator_(local_278,0x10,9,FUN_1400424d0,FUN_140041b30);
  local_14c = 0xffffff;
  local_158 = 0;
  uStack_2bc = 0xffffff;
  local_2c8 = (longlong *)0x0;
  uStack_2ec = 0xffffff;
  local_2f8 = (longlong *)0x0;
  uStack_2cc = 0xffffff;
  local_2d8 = (longlong *)0x0;
  local_284 = 0xffffff;
  local_290 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_294 = 0xffffff;
  local_2a0 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_31c = 0;
  local_328 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2a8 = 0x10;
  puVar11 = &DAT_1419df7b0;
  uVar12 = (ulonglong)local_108[0];
  if ((int)local_108[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_100;
  }
  iVar7 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar7 == 0) {
    local_2a8 = 0x10;
    if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    local_328 = 0;
    local_320 = 0;
    local_31c = 5;
    if (0 < (int)local_108[0]) {
      puVar11 = (undefined8 *)*local_100;
    }
    puVar8 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_328,0,CONCAT44(uVar14,DAT_1419fd6d8),0);
    if (puVar8 != puVar11) {
      local_338 = (longlong *)*puVar8;
      uStack_330 = *(undefined4 *)(puVar8 + 1);
      uStack_32c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar11);
      }
      FUN_140041b80(puVar11,&local_338);
    }
  }
  local_2a8 = 0x12;
  uVar9 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a08658);
  plVar15 = local_res8;
  plVar19 = local_res10;
  FUN_140e87170(uVar9,DAT_1419fe0e8,0x80000000,&local_158,local_res8,local_res10);
  uStack_33c = 6;
  local_348 = local_res8;
  uVar20 = (ulonglong)plVar19 & 0xffffffffffffff00;
  uVar16 = (ulonglong)plVar15 & 0xffffffffffffff00;
  FUN_140e87440(&local_348,DAT_1419fe0e8,0x80000000,&local_2c8,uVar16,uVar20);
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  iVar7 = FUN_140e851f0(&local_158,&local_2c8,DAT_141955260,1);
  bVar13 = iVar7 == -2 || -1 < iVar7;
  if (bVar13) {
    uStack_33c = 0;
    local_348 = (longlong *)&DAT_bff0000000000000;
    pplVar10 = (longlong **)&local_348;
  }
  else {
    uStack_30c = 0;
    local_318 = (longlong *)0x3ff0000000000000;
    pplVar10 = &local_318;
  }
  uVar14 = uStack_30c;
  uVar5 = uStack_33c;
  local_338 = *pplVar10;
  uStack_330 = *(undefined4 *)(pplVar10 + 1);
  uStack_32c = *(undefined4 *)((longlong)pplVar10 + 0xc);
  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  FUN_140041b80(&local_2f8,&local_338);
  if ((bVar13) && ((1 << ((byte)uVar5 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_348);
  }
  if ((iVar7 != -2 && -1 >= iVar7) && ((1 << ((byte)uVar14 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_318);
  }
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar13 = false;
  local_2a8 = 0x14;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_328 = 0;
  local_320 = 0;
  local_31c = 5;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  puVar11 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a08c78);
  uStack_33c = 6;
  local_348 = local_res8;
  uVar20 = uVar20 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  FUN_140e87440(&local_348,DAT_1419fe0e8,0x80000000,&local_2c8,uVar16,uVar20);
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  uStack_33c = 6;
  local_348 = local_res8;
  uVar16 = uVar16 & 0xffffffffffffff00;
  FUN_140e87440(&local_348,DAT_1419fe158,0x80000000,&local_2d8,uVar16,uVar20 & 0xffffffffffffff00);
  uVar14 = (undefined4)(uVar16 >> 0x20);
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  uStack_33c = 0;
  local_348 = (longlong *)0xc024000000000000;
  FUN_140042560(&local_348,&local_2f8);
  local_338 = local_348;
  uStack_330 = uStack_340;
  uStack_32c = uStack_33c;
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_338);
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  uStack_33c = 0;
  local_348 = (longlong *)0x4051800000000000;
  local_1a8 = local_278;
  FUN_140042560(&local_348,&local_2f8);
  local_338 = local_348;
  uStack_330 = uStack_340;
  uStack_32c = uStack_33c;
  if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  FUN_140041b80(local_268,&local_338);
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  local_1a0 = local_268;
  local_338 = local_2c8;
  uStack_330 = uStack_2c0;
  uStack_32c = uStack_2bc;
  if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_258);
  }
  FUN_140041b80(local_258,&local_338);
  local_198 = local_258;
  uStack_30c = uStack_2cc;
  uStack_310 = uStack_2d0;
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) == 0) {
    local_318 = local_2d8;
  }
  else {
    FUN_1400419b0(&local_318,&local_2d8);
  }
  uStack_33c = 7;
  local_348 = (longlong *)CONCAT44(local_348._4_4_,10);
  FUN_1400462a0(&local_318,&local_348);
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  local_338 = local_318;
  uStack_330 = uStack_310;
  uStack_32c = uStack_30c;
  if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_248);
  }
  FUN_140041b80(local_248,&local_338);
  if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_190 = local_248;
  uStack_30c = *(undefined4 *)((longlong)puVar11 + 0xc);
  uStack_310 = *(undefined4 *)(puVar11 + 1);
  if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) == 0) {
    local_318 = (longlong *)*puVar11;
  }
  else {
    FUN_1400419b0(&local_318,puVar11);
  }
  FUN_140042560(&local_318,&local_2f8);
  local_338 = local_318;
  uStack_330 = uStack_310;
  uStack_32c = uStack_30c;
  if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_338);
  if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_188 = local_238;
  local_338 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_330 = DAT_1419df7b8;
  uStack_32c = DAT_1419df7bc;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_140041b80(&local_228,&local_338);
  local_180 = &local_228;
  local_338 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_330 = DAT_1419df7b8;
  uStack_32c = DAT_1419df7bc;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_338);
  local_178 = local_218;
  ppuVar21 = &local_1a8;
  puVar11 = (undefined8 *)
            FUN_140e634e0(local_res8,local_res10,&local_1e8,2,CONCAT44(uVar14,DAT_1419fdca8),
                          ppuVar21);
  if (puVar11 != &local_208) {
    local_338 = (longlong *)*puVar11;
    uStack_330 = *(undefined4 *)(puVar11 + 1);
    uStack_32c = *(undefined4 *)((longlong)puVar11 + 0xc);
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_338);
  }
  local_170 = &local_208;
  local_338 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_330 = DAT_1419df7b8;
  uStack_32c = DAT_1419df7bc;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_338);
  local_168 = local_1f8;
  ppuVar17 = &local_198;
  gml_Script_get_blood_col(local_res8,local_res10,&local_328,7,ppuVar17);
  local_2a8 = 0x16;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_328 = 0;
  local_320 = 0;
  local_31c = 5;
  uStack_33c = 6;
  local_348 = local_res8;
  uVar20 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
  uVar16 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
  FUN_140e87440(&local_348,DAT_1419fe0e8,0x80000000,&local_2c8,uVar16,uVar20);
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  uStack_33c = 6;
  local_348 = local_res8;
  uVar16 = uVar16 & 0xffffffffffffff00;
  FUN_140e87440(&local_348,DAT_1419fe158,0x80000000,&local_2d8,uVar16,uVar20 & 0xffffffffffffff00);
  uVar14 = (undefined4)(uVar16 >> 0x20);
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  local_1d8 = FUN_140e794b0(0,0);
  uStack_33c = uStack_2ec;
  uStack_340 = uStack_2f0;
  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) == 0) {
    local_348 = local_2f8;
  }
  else {
    FUN_1400419b0(&local_348,&local_2f8);
  }
  local_1cc = 0;
  FUN_140042560(&local_348,&local_1d8);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_30c = uStack_2bc;
  uStack_310 = uStack_2c0;
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) == 0) {
    local_318 = local_2c8;
  }
  else {
    FUN_1400419b0(&local_318,&local_2c8);
  }
  FUN_1400462a0(&local_318,&local_348);
  local_338 = local_318;
  uStack_330 = uStack_310;
  uStack_32c = uStack_30c;
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_338);
  if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  local_338 = local_2d8;
  uStack_330 = uStack_2d0;
  uStack_32c = uStack_2cc;
  local_1a8 = local_278;
  if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  FUN_140041b80(local_268,&local_338);
  local_1a0 = local_268;
  local_338 = (longlong *)CONCAT44(uRam0000000141dd69dc,_DAT_141dd69d8);
  uStack_330 = uRam0000000141dd69e0;
  uStack_32c = DAT_141dd69e4;
  if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_258);
  }
  FUN_140041b80(local_258,&local_338);
  local_198 = local_258;
  uStack_2dc = 0xf;
  local_2e8 = (longlong *)0x10000000000012d;
  local_338 = (longlong *)0x10000000000012d;
  uStack_330 = uStack_2e0;
  uStack_32c = 0xf;
  if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_248);
  }
  FUN_140041b80(local_248,&local_338);
  local_190 = local_248;
  ppuVar21 = &local_1a8;
  uVar16 = CONCAT44(uVar14,DAT_141a0a7c8);
  uVar9 = FUN_140e634e0(local_res8,local_res10,&local_328,4,uVar16,ppuVar21);
  iVar7 = FUN_140e63cb0(local_c8,&local_res8,&local_res10,uVar9);
  if (0 < iVar7) {
    do {
      local_2a8 = 0x18;
      uStack_ec = 0xf;
      local_f8 = 0x100000100000063;
      local_308 = 99;
      uStack_304 = 0x1000001;
      uStack_300 = uStack_f0;
      uStack_2fc = 0xf;
      if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_290);
      }
      FUN_140041b80(&local_290,&local_308);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_290);
      local_2a8 = 0x19;
      plVar15 = local_2f8;
      if ((uStack_2ec & 0xffffff) != 0) {
        plVar15 = (longlong *)FUN_140e4b060(&local_2f8);
      }
      local_308 = SUB84(plVar15,0);
      local_338 = (longlong *)((ulonglong)plVar15 ^ 0x8000000000000000);
      uStack_32c = 0;
      uStack_304 = (uint)((ulonglong)plVar15 >> 0x20) ^ 0x80000000;
      uStack_300 = uStack_330;
      uStack_2fc = 0;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_308);
      FUN_140e86fa0(local_res8,DAT_141a0f938,0x80000000,&local_1b8);
      local_2a8 = 0x1a;
      puVar11 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a1f090);
      if ((*(uint *)((longlong)puVar11 + 0xc) & 0xffffff) == 0) {
        uVar14 = (undefined4)*puVar11;
      }
      else {
        uVar14 = FUN_140e4b060(puVar11);
      }
      dVar1 = (double)FUN_1412a79b0(uVar14,0);
      if (dVar1 == 0.0) {
        local_2a8 = 0x1c;
        plVar15 = local_2f8;
        if ((uStack_2ec & 0xffffff) != 0) {
          plVar15 = (longlong *)FUN_140e4b060(&local_2f8);
        }
        local_13c = 0;
        local_148 = (ulonglong)plVar15 ^ 0x8000000000000000;
        local_1cc = 0;
        local_1d8 = 0x3ff0000000000000;
        iVar7 = FUN_140e851f0(&local_148,&local_1d8,DAT_141955260,0);
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        if (iVar7 == 0) {
          uStack_30c = 0;
          local_318 = (longlong *)0x403e000000000000;
          pplVar10 = &local_318;
          bVar2 = true;
        }
        else {
          uStack_33c = 0;
          local_348 = (longlong *)0x4061800000000000;
          pplVar10 = (longlong **)&local_348;
          bVar13 = true;
        }
        local_308 = *(undefined4 *)pplVar10;
        uStack_304 = *(undefined4 *)((longlong)pplVar10 + 4);
        uStack_300 = *(undefined4 *)(pplVar10 + 1);
        uStack_2fc = *(undefined4 *)((longlong)pplVar10 + 0xc);
        if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a0);
        }
        FUN_140041b80(&local_2a0,&local_308);
        if ((bVar13) && (bVar13 = false, (1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_348);
        }
        if ((bVar2) && (bVar2 = false, (1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_318);
        }
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
      }
      else {
        local_2a8 = 0x21;
        plVar15 = local_2f8;
        if ((uStack_2ec & 0xffffff) != 0) {
          plVar15 = (longlong *)FUN_140e4b060(&local_2f8);
        }
        uStack_2dc = 0;
        local_2e8 = (longlong *)((ulonglong)plVar15 ^ 0x8000000000000000);
        local_12c = 0;
        local_138 = 0x3ff0000000000000;
        iVar7 = FUN_140e851f0(&local_2e8,&local_138,DAT_141955260,0);
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        if (iVar7 == 0) {
          uStack_10c = 0;
          local_118 = 0;
          puVar11 = &local_118;
          bVar4 = true;
        }
        else {
          local_11c = 0;
          local_128 = 0x4066800000000000;
          puVar11 = &local_128;
          bVar3 = true;
        }
        local_308 = *(undefined4 *)puVar11;
        uStack_304 = *(undefined4 *)((longlong)puVar11 + 4);
        uStack_300 = *(undefined4 *)(puVar11 + 1);
        uStack_2fc = *(undefined4 *)((longlong)puVar11 + 0xc);
        if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a0);
        }
        FUN_140041b80(&local_2a0,&local_308);
        if ((bVar3) && (bVar3 = false, (1 << ((byte)local_11c & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_128);
        }
        if ((bVar4) && (bVar4 = false, (1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_118);
        }
        if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
      }
      FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_2a0);
      cVar6 = FUN_140e643f0(local_c8,&local_res8,&local_res10);
    } while (cVar6 != '\0');
  }
  FUN_140e63970(local_c8,&local_res8,&local_res10);
  local_2a8 = 0x27;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_328 = 0;
  local_320 = 0;
  local_31c = 5;
  uStack_2dc = 6;
  local_2e8 = local_res8;
  uVar20 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  FUN_140e87440(&local_2e8,DAT_1419fe0e8,0x80000000,&local_2c8,uVar16,uVar20);
  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  uStack_2dc = 6;
  local_2e8 = local_res8;
  uVar16 = uVar16 & 0xffffffffffffff00;
  FUN_140e87440(&local_2e8,DAT_1419fe158,0x80000000,&local_2d8,uVar16,uVar20 & 0xffffffffffffff00);
  uVar14 = (undefined4)(uVar16 >> 0x20);
  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_308 = (undefined4)local_2c8;
  uStack_304 = local_2c8._4_4_;
  uStack_300 = uStack_2c0;
  uStack_2fc = uStack_2bc;
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_308);
  uStack_33c = uStack_2cc;
  uStack_340 = uStack_2d0;
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) == 0) {
    local_348 = local_2d8;
    local_1a8 = local_278;
  }
  else {
    local_1a8 = local_278;
    FUN_1400419b0(&local_348,&local_2d8);
  }
  uStack_2dc = 7;
  local_2e8 = (longlong *)CONCAT44(local_2e8._4_4_,4);
  FUN_1400462a0(&local_348,&local_2e8);
  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_308 = (undefined4)local_348;
  uStack_304 = local_348._4_4_;
  uStack_300 = uStack_340;
  uStack_2fc = uStack_33c;
  if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  FUN_140041b80(local_268,&local_308);
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  local_1a0 = local_268;
  local_308 = _DAT_141dd69f8;
  uStack_304 = uRam0000000141dd69fc;
  uStack_300 = uRam0000000141dd6a00;
  uStack_2fc = DAT_141dd6a04;
  if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_258);
  }
  FUN_140041b80(local_258,&local_308);
  local_198 = local_258;
  uStack_32c = 0xf;
  local_338 = (longlong *)0x10000000000012d;
  local_308 = 0x12d;
  uStack_304 = 0x1000000;
  uStack_300 = uStack_330;
  uStack_2fc = 0xf;
  if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_248);
  }
  FUN_140041b80(local_248,&local_308);
  local_190 = local_248;
  uVar18 = CONCAT44(uVar14,DAT_141a0a7c8);
  uVar9 = FUN_140e634e0(local_res8,local_res10,&local_328,4,uVar18,&local_1a8);
  iVar7 = FUN_140e63cb0(local_e8,&local_res8,&local_res10,uVar9);
  uVar14 = (undefined4)((ulonglong)uVar18 >> 0x20);
  if (0 < iVar7) {
    do {
      local_2a8 = 0x29;
      uStack_32c = 0xf;
      local_338 = (longlong *)0x100000100000061;
      local_308 = 0x61;
      uStack_304 = 0x1000001;
      uStack_300 = uStack_330;
      uStack_2fc = 0xf;
      if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_290);
      }
      FUN_140041b80(&local_290,&local_308);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_290);
      local_2a8 = 0x2a;
      local_308 = (undefined4)local_2f8;
      uStack_304 = local_2f8._4_4_;
      uStack_300 = uStack_2f0;
      uStack_2fc = uStack_2ec;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_308);
      FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_1c8);
      cVar6 = FUN_140e643f0(local_e8,&local_res8,&local_res10);
      uVar14 = (undefined4)((ulonglong)uVar18 >> 0x20);
    } while (cVar6 != '\0');
  }
  FUN_140e63970(local_e8,&local_res8,&local_res10);
  local_2a8 = 0x2d;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_328 = 0;
  local_320 = 0;
  local_31c = 5;
  uStack_32c = 0xf;
  local_338 = (longlong *)0x1000002000000a7;
  local_308 = 0xa7;
  uStack_304 = 0x1000002;
  uStack_300 = uStack_330;
  uStack_2fc = 0xf;
  if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_308);
  local_308 = _DAT_1419e83e0;
  uStack_304 = uRam00000001419e83e4;
  uStack_300 = uRam00000001419e83e8;
  uStack_2fc = uRam00000001419e83ec;
  local_1a8 = local_278;
  if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  FUN_140041b80(local_268,&local_308);
  local_1a0 = local_268;
  local_308 = _DAT_1419df7a0;
  uStack_304 = uRam00000001419df7a4;
  uStack_300 = uRam00000001419df7a8;
  uStack_2fc = uRam00000001419df7ac;
  if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_258);
  }
  FUN_140041b80(local_258,&local_308);
  local_198 = local_258;
  local_308 = (undefined4)DAT_1419df7b0;
  uStack_304 = DAT_1419df7b0._4_4_;
  uStack_300 = DAT_1419df7b8;
  uStack_2fc = DAT_1419df7bc;
  if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_248);
  }
  FUN_140041b80(local_248,&local_308);
  local_190 = local_248;
  local_308 = (undefined4)DAT_1419df7b0;
  uStack_304 = DAT_1419df7b0._4_4_;
  uStack_300 = DAT_1419df7b8;
  uStack_2fc = DAT_1419df7bc;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_308);
  local_188 = local_238;
  local_228 = FUN_140e794b0(0,0);
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_21c = 0;
  local_180 = &local_228;
  FUN_140e634e0(local_res8,local_res10,&local_328,6,CONCAT44(uVar14,DAT_141a0a2e8),&local_1a8);
  if (local_d8 != 0) {
    FUN_140e4cd60();
    local_d8 = 0;
  }
  if (local_b8 != 0) {
    FUN_140e4cd60();
    local_b8 = 0;
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
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
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_278,0x10,9,FUN_140041b30);
  if (0 < (int)local_108[0]) {
    puVar11 = local_100;
    do {
      puVar8 = (undefined8 *)*puVar11;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xc) = 5;
      puVar11 = puVar11 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_140e4cd60(local_100);
  DAT_141dc7a50 = (undefined8 *)local_2b8;
  return param_3;
}

