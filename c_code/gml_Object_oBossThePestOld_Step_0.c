// gml_Object_oBossThePestOld_Step_0 @ 0x14083ade0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oBossThePestOld_Step_0
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
  undefined4 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined4 uVar15;
  longlong *plVar16;
  longlong *local_res8;
  longlong *local_res10;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined1 **ppuVar19;
  undefined1 **ppuVar20;
  longlong *plVar21;
  ulonglong uVar22;
  undefined8 local_348;
  undefined4 uStack_340;
  uint uStack_33c;
  undefined8 local_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  uint uStack_314;
  undefined4 uStack_310;
  uint uStack_30c;
  longlong *local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  longlong *local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined4 uStack_2e0;
  uint uStack_2dc;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  longlong *local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  char *local_2a0;
  undefined4 local_298;
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
  undefined4 local_238 [3];
  byte local_22c;
  undefined1 local_228 [12];
  byte local_21c;
  undefined8 local_218;
  byte local_20c;
  undefined1 local_208 [12];
  byte local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined1 *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  undefined4 *local_1a0;
  undefined1 *local_198;
  undefined8 *local_190;
  undefined1 *local_188;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
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
  
  local_2a0 = "gml_Script_anon@336@gml_Object_oBossThePestOld_Create_0";
  local_2a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2a8;
  local_298 = 0x18;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_108,param_4,1,param_5);
  uVar15 = 1;
  _eh_vector_constructor_iterator_(local_288,0x10,9,FUN_1400424d0,FUN_140041b30);
  local_14c = 0xffffff;
  local_158 = 0;
  uStack_2bc = 0xffffff;
  local_2c8 = (longlong *)0x0;
  uStack_2dc = 0xffffff;
  local_2e8 = (longlong *)0x0;
  uStack_2ac = 0xffffff;
  local_2b8 = (longlong *)0x0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_31c = 0;
  local_328 = 0;
  local_2cc = 0;
  local_2d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_298 = 0x18;
  puVar12 = &DAT_1419df7b0;
  uVar13 = (ulonglong)local_108[0];
  if ((int)local_108[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_100;
  }
  iVar7 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar7 == 0) {
    local_298 = 0x18;
    if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    local_328 = 0;
    local_320 = 0;
    local_31c = 5;
    if (0 < (int)local_108[0]) {
      puVar12 = (undefined8 *)*local_100;
    }
    puVar8 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_328,0,CONCAT44(uVar15,DAT_1419fd6d8),0);
    if (puVar8 != puVar12) {
      local_338 = (longlong *)*puVar8;
      uStack_330 = *(undefined4 *)(puVar8 + 1);
      uStack_32c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar12);
      }
      FUN_140041b80(puVar12,&local_338);
    }
  }
  local_298 = 0x1a;
  uVar9 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a08658);
  plVar16 = local_res8;
  plVar21 = local_res10;
  FUN_140e87170(uVar9,DAT_1419fe0e8,0x80000000,&local_158,local_res8,local_res10);
  uStack_33c = 6;
  local_348 = local_res8;
  uVar22 = (ulonglong)plVar21 & 0xffffffffffffff00;
  uVar17 = (ulonglong)plVar16 & 0xffffffffffffff00;
  FUN_140e87440(&local_348,DAT_1419fe0e8,0x80000000,&local_2c8,uVar17,uVar22);
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  iVar7 = FUN_140e851f0(&local_158,&local_2c8,DAT_141955260,1);
  bVar14 = iVar7 == -2 || -1 < iVar7;
  if (bVar14) {
    uStack_33c = 0;
    local_348 = (longlong *)&DAT_bff0000000000000;
    pplVar10 = (longlong **)&local_348;
  }
  else {
    uStack_2fc = 0;
    local_308 = (longlong *)0x3ff0000000000000;
    pplVar10 = &local_308;
  }
  uVar15 = uStack_2fc;
  uVar5 = uStack_33c;
  local_338 = *pplVar10;
  uStack_330 = *(undefined4 *)(pplVar10 + 1);
  uStack_32c = *(undefined4 *)((longlong)pplVar10 + 0xc);
  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  FUN_140041b80(&local_2e8,&local_338);
  if ((bVar14) && ((1 << ((byte)uVar5 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_348);
  }
  if ((iVar7 != -2 && -1 >= iVar7) && ((1 << ((byte)uVar15 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_308);
  }
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar14 = false;
  local_298 = 0x1c;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_328 = 0;
  local_320 = 0;
  local_31c = 5;
  uStack_33c = 6;
  local_348 = local_res8;
  uVar22 = uVar22 & 0xffffffffffffff00;
  uVar17 = uVar17 & 0xffffffffffffff00;
  FUN_140e87440(&local_348,DAT_1419fe0e8,0x80000000,&local_2c8,uVar17,uVar22);
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  uStack_33c = 6;
  local_348 = local_res8;
  uVar17 = uVar17 & 0xffffffffffffff00;
  FUN_140e87440(&local_348,DAT_1419fe158,0x80000000,&local_2b8,uVar17,uVar22 & 0xffffffffffffff00);
  uVar15 = (undefined4)(uVar17 >> 0x20);
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  uStack_33c = 0;
  local_348 = (longlong *)0x4020000000000000;
  FUN_140042560(&local_348,&local_2e8);
  uStack_2fc = uStack_2bc;
  uStack_300 = uStack_2c0;
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) == 0) {
    local_308 = local_2c8;
  }
  else {
    FUN_1400419b0(&local_308,&local_2c8);
  }
  FUN_1400460e0(&local_308,&local_348);
  local_338 = local_308;
  uStack_330 = uStack_300;
  uStack_32c = uStack_2fc;
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_288);
  }
  FUN_140041b80(local_288,&local_338);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  local_1c8 = local_288;
  uStack_2fc = uStack_2ac;
  uStack_300 = uStack_2b0;
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) == 0) {
    local_308 = local_2b8;
  }
  else {
    FUN_1400419b0(&local_308,&local_2b8);
  }
  uStack_33c = 7;
  local_348 = (longlong *)CONCAT44(local_348._4_4_,1);
  FUN_1400462a0(&local_308,&local_348);
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  local_338 = local_308;
  uStack_330 = uStack_300;
  uStack_32c = uStack_2fc;
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_338);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  uStack_2ec = 0xf;
  local_2f8 = (longlong *)0x100000000000149;
  local_338 = (longlong *)0x100000000000149;
  uStack_330 = uStack_2f0;
  uStack_32c = 0xf;
  local_1c0 = local_278;
  if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  FUN_140041b80(local_268,&local_338);
  local_1b8 = local_268;
  uVar18 = CONCAT44(uVar15,DAT_141a12628);
  uVar9 = FUN_140e634e0(local_res8,local_res10,&local_328,3,uVar18,&local_1c8);
  uVar15 = (undefined4)((ulonglong)uVar18 >> 0x20);
  cVar6 = FUN_140e491e0(uVar9);
  if (cVar6 != '\0') {
    if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    local_2d8 = 0;
    local_2d0 = 0;
    local_2cc = 5;
    local_338 = (longlong *)CONCAT44(uRam00000001419e8d14,_DAT_1419e8d10);
    uStack_330 = uRam00000001419e8d18;
    uStack_32c = uRam00000001419e8d1c;
    if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_258);
    }
    FUN_140041b80(local_258,&local_338);
    local_1b0 = local_258;
    ppuVar19 = &local_1b0;
    uVar9 = gml_Script_choose_weighted(local_res8,local_res10,&local_2d8,1,ppuVar19);
    uVar15 = (undefined4)((ulonglong)ppuVar19 >> 0x20);
    cVar6 = FUN_140e491e0(uVar9);
    if (cVar6 != '\0') {
      uVar9 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fdae8);
      uStack_33c = 0;
      local_348 = (longlong *)0x3ff0000000000000;
      iVar7 = FUN_140e851f0(uVar9,&local_348,DAT_141955260,0);
      if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      if (iVar7 == 0) {
        uVar9 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f2b0);
        uStack_33c = 10;
        local_348 = (longlong *)0x1;
        iVar7 = FUN_140e851f0(uVar9,&local_348,DAT_141955260,0);
        if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_348);
        }
        if (iVar7 == 0) {
          local_298 = 0x1e;
          puVar12 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419feb68);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar12);
          }
          *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
          *puVar12 = 0x3ff0000000000000;
          local_298 = 0x1f;
          if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_328);
          }
          local_328 = 0;
          local_320 = 0;
          local_31c = 5;
          local_338 = (longlong *)CONCAT44(uRam00000001419e8d04,_DAT_1419e8d00);
          uStack_330 = uRam00000001419e8d08;
          uStack_32c = uRam00000001419e8d0c;
          if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_288);
          }
          FUN_140041b80(local_288,&local_338);
          local_1c8 = local_288;
          local_338 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_330 = DAT_1419df7b8;
          uStack_32c = DAT_1419df7bc;
          if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_278);
          }
          FUN_140041b80(local_278,&local_338);
          ppuVar19 = &local_1c8;
          local_1c0 = local_278;
          gml_Script_truestate_begin_step(local_res8,local_res10,&local_328,2,ppuVar19);
          uVar15 = (undefined4)((ulonglong)ppuVar19 >> 0x20);
        }
      }
    }
  }
  local_298 = 0x23;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_328 = 0;
  local_320 = 0;
  local_31c = 5;
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_2d8 = 0;
  local_2d0 = 0;
  local_2cc = 5;
  uStack_33c = 0;
  local_348 = (longlong *)0xc024000000000000;
  FUN_140042560(&local_348,&local_2e8);
  local_338 = local_348;
  uStack_330 = uStack_340;
  uStack_32c = uStack_33c;
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_288);
  }
  FUN_140041b80(local_288,&local_338);
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  local_1c8 = local_288;
  uStack_33c = 0;
  local_348 = (longlong *)0x4051800000000000;
  FUN_140042560(&local_348,&local_2e8);
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
  local_338 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_330 = DAT_1419df7b8;
  uStack_32c = DAT_1419df7bc;
  local_1c0 = local_278;
  if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  FUN_140041b80(local_268,&local_338);
  local_1b8 = local_268;
  local_338 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_330 = DAT_1419df7b8;
  uStack_32c = DAT_1419df7bc;
  if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_258);
  }
  FUN_140041b80(local_258,&local_338);
  local_1b0 = local_258;
  local_338 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_330 = DAT_1419df7b8;
  uStack_32c = DAT_1419df7bc;
  if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_248);
  }
  FUN_140041b80(local_248,&local_338);
  local_1a8 = local_248;
  local_338 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_330 = DAT_1419df7b8;
  uStack_32c = DAT_1419df7bc;
  if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_338);
  local_1a0 = local_238;
  local_338 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_330 = DAT_1419df7b8;
  uStack_32c = DAT_1419df7bc;
  if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_338);
  local_198 = local_228;
  ppuVar19 = &local_1c8;
  puVar12 = (undefined8 *)
            FUN_140e634e0(local_res8,local_res10,&local_2d8,2,CONCAT44(uVar15,DAT_1419fdca8),
                          ppuVar19);
  if (puVar12 != &local_218) {
    local_338 = (longlong *)*puVar12;
    uStack_330 = *(undefined4 *)(puVar12 + 1);
    uStack_32c = *(undefined4 *)((longlong)puVar12 + 0xc);
    if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_338);
  }
  local_190 = &local_218;
  local_338 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_330 = DAT_1419df7b8;
  uStack_32c = DAT_1419df7bc;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_338);
  local_188 = local_208;
  ppuVar20 = &local_1b8;
  gml_Script_get_blood_col(local_res8,local_res10,&local_328,7,ppuVar20);
  local_298 = 0x25;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_328 = 0;
  local_320 = 0;
  local_31c = 5;
  uStack_33c = 6;
  local_348 = local_res8;
  uVar22 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
  uVar17 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
  FUN_140e87440(&local_348,DAT_1419fe0e8,0x80000000,&local_2c8,uVar17,uVar22);
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  uStack_33c = 6;
  local_348 = local_res8;
  uVar17 = uVar17 & 0xffffffffffffff00;
  FUN_140e87440(&local_348,DAT_1419fe158,0x80000000,&local_2b8,uVar17,uVar22 & 0xffffffffffffff00);
  uVar15 = (undefined4)(uVar17 >> 0x20);
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  local_1d8 = FUN_140e794b0(0,0);
  uStack_33c = uStack_2dc;
  uStack_340 = uStack_2e0;
  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) == 0) {
    local_348 = local_2e8;
  }
  else {
    FUN_1400419b0(&local_348,&local_2e8);
  }
  local_1cc = 0;
  FUN_140042560(&local_348,&local_1d8);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_2fc = uStack_2bc;
  uStack_300 = uStack_2c0;
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) == 0) {
    local_308 = local_2c8;
  }
  else {
    FUN_1400419b0(&local_308,&local_2c8);
  }
  FUN_1400462a0(&local_308,&local_348);
  local_338 = local_308;
  uStack_330 = uStack_300;
  uStack_32c = uStack_2fc;
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_288);
  }
  FUN_140041b80(local_288,&local_338);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  local_1c8 = local_288;
  local_338 = local_2b8;
  uStack_330 = uStack_2b0;
  uStack_32c = uStack_2ac;
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_338);
  local_338 = (longlong *)CONCAT44(uRam0000000141dd6f0c,_DAT_141dd6f08);
  uStack_330 = uRam0000000141dd6f10;
  uStack_32c = DAT_141dd6f14;
  local_1c0 = local_278;
  if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  FUN_140041b80(local_268,&local_338);
  local_1b8 = local_268;
  uStack_2ec = 0xf;
  local_2f8 = (longlong *)0x10000000000012d;
  local_338 = (longlong *)0x10000000000012d;
  uStack_330 = uStack_2f0;
  uStack_32c = 0xf;
  if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_258);
  }
  FUN_140041b80(local_258,&local_338);
  local_1b0 = local_258;
  ppuVar19 = &local_1c8;
  uVar17 = CONCAT44(uVar15,DAT_141a0a7c8);
  uVar9 = FUN_140e634e0(local_res8,local_res10,&local_328,4,uVar17,ppuVar19);
  iVar7 = FUN_140e63cb0(local_c8,&local_res8,&local_res10,uVar9);
  if (0 < iVar7) {
    do {
      local_298 = 0x27;
      uStack_ec = 0xf;
      local_f8 = 0x100000100000063;
      local_318 = 99;
      uStack_314 = 0x1000001;
      uStack_310 = uStack_f0;
      uStack_30c = 0xf;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_318);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1e8);
      local_298 = 0x28;
      plVar16 = local_2e8;
      if ((uStack_2dc & 0xffffff) != 0) {
        plVar16 = (longlong *)FUN_140e4b060(&local_2e8);
      }
      local_318 = SUB84(plVar16,0);
      local_338 = (longlong *)((ulonglong)plVar16 ^ 0x8000000000000000);
      uStack_32c = 0;
      uStack_314 = (uint)((ulonglong)plVar16 >> 0x20) ^ 0x80000000;
      uStack_310 = uStack_330;
      uStack_30c = 0;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_318);
      FUN_140e86fa0(local_res8,DAT_141a0f938,0x80000000,&local_168);
      local_298 = 0x29;
      puVar12 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a1f090);
      if ((*(uint *)((longlong)puVar12 + 0xc) & 0xffffff) == 0) {
        uVar15 = (undefined4)*puVar12;
      }
      else {
        uVar15 = FUN_140e4b060(puVar12);
      }
      dVar1 = (double)FUN_1412a79b0(uVar15,0);
      if (dVar1 == 0.0) {
        local_298 = 0x2b;
        plVar16 = local_2e8;
        if ((uStack_2dc & 0xffffff) != 0) {
          plVar16 = (longlong *)FUN_140e4b060(&local_2e8);
        }
        local_13c = 0;
        local_148 = (ulonglong)plVar16 ^ 0x8000000000000000;
        local_1cc = 0;
        local_1d8 = 0x3ff0000000000000;
        iVar7 = FUN_140e851f0(&local_148,&local_1d8,DAT_141955260,0);
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        if (iVar7 == 0) {
          uStack_2fc = 0;
          local_308 = (longlong *)0x403e000000000000;
          pplVar10 = &local_308;
          bVar2 = true;
        }
        else {
          uStack_33c = 0;
          local_348 = (longlong *)0x4061800000000000;
          pplVar10 = (longlong **)&local_348;
          bVar14 = true;
        }
        local_318 = *(undefined4 *)pplVar10;
        uStack_314 = *(undefined4 *)((longlong)pplVar10 + 4);
        uStack_310 = *(undefined4 *)(pplVar10 + 1);
        uStack_30c = *(undefined4 *)((longlong)pplVar10 + 0xc);
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_318);
        if ((bVar14) && (bVar14 = false, (1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_348);
        }
        if ((bVar2) && (bVar2 = false, (1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_308);
        }
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
      }
      else {
        local_298 = 0x30;
        plVar16 = local_2e8;
        if ((uStack_2dc & 0xffffff) != 0) {
          plVar16 = (longlong *)FUN_140e4b060(&local_2e8);
        }
        uStack_2ec = 0;
        local_2f8 = (longlong *)((ulonglong)plVar16 ^ 0x8000000000000000);
        local_12c = 0;
        local_138 = 0x3ff0000000000000;
        iVar7 = FUN_140e851f0(&local_2f8,&local_138,DAT_141955260,0);
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        if (iVar7 == 0) {
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
        local_318 = *(undefined4 *)puVar12;
        uStack_314 = *(undefined4 *)((longlong)puVar12 + 4);
        uStack_310 = *(undefined4 *)(puVar12 + 1);
        uStack_30c = *(undefined4 *)((longlong)puVar12 + 0xc);
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_318);
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
      FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_1f8);
      cVar6 = FUN_140e643f0(local_c8,&local_res8,&local_res10);
    } while (cVar6 != '\0');
  }
  FUN_140e63970(local_c8,&local_res8,&local_res10);
  local_298 = 0x36;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_328 = 0;
  local_320 = 0;
  local_31c = 5;
  uStack_2ec = 6;
  local_2f8 = local_res8;
  uVar22 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
  uVar17 = uVar17 & 0xffffffffffffff00;
  FUN_140e87440(&local_2f8,DAT_1419fe0e8,0x80000000,&local_2c8,uVar17,uVar22);
  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  uStack_2ec = 6;
  local_2f8 = local_res8;
  uVar17 = uVar17 & 0xffffffffffffff00;
  FUN_140e87440(&local_2f8,DAT_1419fe158,0x80000000,&local_2b8,uVar17,uVar22 & 0xffffffffffffff00);
  uVar15 = (undefined4)(uVar17 >> 0x20);
  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_318 = (undefined4)local_2c8;
  uStack_314 = local_2c8._4_4_;
  uStack_310 = uStack_2c0;
  uStack_30c = uStack_2bc;
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_288);
  }
  FUN_140041b80(local_288,&local_318);
  local_1c8 = local_288;
  uStack_33c = uStack_2ac;
  uStack_340 = uStack_2b0;
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) == 0) {
    local_348 = local_2b8;
  }
  else {
    FUN_1400419b0(&local_348,&local_2b8);
  }
  uStack_2ec = 7;
  local_2f8 = (longlong *)CONCAT44(local_2f8._4_4_,4);
  FUN_1400462a0(&local_348,&local_2f8);
  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_318 = (undefined4)local_348;
  uStack_314 = local_348._4_4_;
  uStack_310 = uStack_340;
  uStack_30c = uStack_33c;
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_318);
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  local_318 = _DAT_141dd6ef8;
  uStack_314 = uRam0000000141dd6efc;
  uStack_310 = uRam0000000141dd6f00;
  uStack_30c = DAT_141dd6f04;
  local_1c0 = local_278;
  if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  FUN_140041b80(local_268,&local_318);
  local_1b8 = local_268;
  uStack_32c = 0xf;
  local_338 = (longlong *)0x10000000000012d;
  local_318 = 0x12d;
  uStack_314 = 0x1000000;
  uStack_310 = uStack_330;
  uStack_30c = 0xf;
  if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_258);
  }
  FUN_140041b80(local_258,&local_318);
  local_1b0 = local_258;
  uVar18 = CONCAT44(uVar15,DAT_141a0a7c8);
  uVar9 = FUN_140e634e0(local_res8,local_res10,&local_328,4,uVar18,&local_1c8);
  iVar7 = FUN_140e63cb0(local_e8,&local_res8,&local_res10,uVar9);
  uVar15 = (undefined4)((ulonglong)uVar18 >> 0x20);
  if (0 < iVar7) {
    do {
      local_298 = 0x38;
      uStack_32c = 0xf;
      local_338 = (longlong *)0x100000100000061;
      local_318 = 0x61;
      uStack_314 = 0x1000001;
      uStack_310 = uStack_330;
      uStack_30c = 0xf;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_318);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1e8);
      local_298 = 0x39;
      local_318 = (undefined4)local_2e8;
      uStack_314 = local_2e8._4_4_;
      uStack_310 = uStack_2e0;
      uStack_30c = uStack_2dc;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_318);
      FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_178);
      cVar6 = FUN_140e643f0(local_e8,&local_res8,&local_res10);
      uVar15 = (undefined4)((ulonglong)uVar18 >> 0x20);
    } while (cVar6 != '\0');
  }
  FUN_140e63970(local_e8,&local_res8,&local_res10);
  local_298 = 0x3c;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_328 = 0;
  local_320 = 0;
  local_31c = 5;
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_2d8 = 0;
  local_2d0 = 0;
  local_2cc = 5;
  uStack_32c = 0xf;
  local_338 = (longlong *)0x1000002000001a9;
  local_318 = 0x1a9;
  uStack_314 = 0x1000002;
  uStack_310 = uStack_330;
  uStack_30c = 0xf;
  if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_288);
  }
  FUN_140041b80(local_288,&local_318);
  local_1c8 = local_288;
  uStack_32c = 0xf;
  local_338 = (longlong *)0x1000002000001aa;
  local_318 = 0x1aa;
  uStack_314 = 0x1000002;
  uStack_310 = uStack_330;
  uStack_30c = 0xf;
  if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_318);
  uStack_32c = 0xf;
  local_338 = (longlong *)0x1000002000001ab;
  local_318 = 0x1ab;
  uStack_314 = 0x1000002;
  uStack_310 = uStack_330;
  uStack_30c = 0xf;
  local_1c0 = local_278;
  if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  FUN_140041b80(local_268,&local_318);
  local_1b8 = local_268;
  uStack_32c = 0xf;
  local_338 = (longlong *)0x1000002000001ac;
  local_318 = 0x1ac;
  uStack_314 = 0x1000002;
  uStack_310 = uStack_330;
  uStack_30c = 0xf;
  if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_258);
  }
  FUN_140041b80(local_258,&local_318);
  local_1b0 = local_258;
  uStack_32c = 0xf;
  local_338 = (longlong *)0x1000002000001ad;
  local_318 = 0x1ad;
  uStack_314 = 0x1000002;
  uStack_310 = uStack_330;
  uStack_30c = 0xf;
  if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_248);
  }
  FUN_140041b80(local_248,&local_318);
  local_1a8 = local_248;
  puVar11 = (undefined4 *)FUN_140e78db0(&local_2d8,5,&local_1c8);
  if (puVar11 != local_238) {
    local_318 = *puVar11;
    uStack_314 = puVar11[1];
    uStack_310 = puVar11[2];
    uStack_30c = puVar11[3];
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_318);
  }
  local_1a0 = local_238;
  local_318 = _DAT_1419e8d10;
  uStack_314 = uRam00000001419e8d14;
  uStack_310 = uRam00000001419e8d18;
  uStack_30c = uRam00000001419e8d1c;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_318);
  local_198 = local_228;
  local_318 = _DAT_1419df7a0;
  uStack_314 = uRam00000001419df7a4;
  uStack_310 = uRam00000001419df7a8;
  uStack_30c = uRam00000001419df7ac;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_318);
  local_190 = &local_218;
  FUN_140e634e0(local_res8,local_res10,&local_328,3,CONCAT44(uVar15,DAT_141a0a2e8),&local_1a0);
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
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_288,0x10,9,FUN_140041b30);
  if (0 < (int)local_108[0]) {
    puVar12 = local_100;
    do {
      puVar8 = (undefined8 *)*puVar12;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xc) = 5;
      puVar12 = puVar12 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  FUN_140e4cd60(local_100);
  DAT_141dc7a50 = (undefined8 *)local_2a8;
  return param_3;
}

