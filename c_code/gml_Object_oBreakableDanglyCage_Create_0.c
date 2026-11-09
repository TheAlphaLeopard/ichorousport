// gml_Object_oBreakableDanglyCage_Create_0 @ 0x140858670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBreakableDanglyCage_Create_0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong **pplVar11;
  undefined8 *puVar12;
  longlong **pplVar13;
  longlong *plVar14;
  float fVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar20 [16];
  undefined4 uVar21;
  undefined4 uVar22;
  longlong *local_res8;
  undefined8 local_res10;
  uint local_res18;
  undefined4 local_res20;
  code *pcVar23;
  longlong ***ppplVar24;
  ulonglong uVar25;
  undefined4 uVar26;
  ulonglong in_stack_fffffffffffffc60;
  ulonglong uVar27;
  longlong *local_398;
  uint uStack_390;
  uint uStack_38c;
  longlong *local_388;
  undefined8 uStack_380;
  longlong *local_378;
  uint uStack_370;
  undefined4 uStack_36c;
  double local_368;
  undefined4 local_360;
  uint local_35c;
  longlong *local_358;
  longlong *plStack_350;
  undefined8 local_348;
  undefined4 local_340;
  undefined4 local_33c;
  undefined8 local_338;
  char *local_330;
  undefined4 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined4 local_314;
  longlong *local_308;
  longlong *plStack_300;
  longlong *local_2f8;
  byte local_2ec;
  longlong *local_2e8;
  byte local_2dc;
  undefined1 local_2d8 [12];
  byte local_2cc;
  undefined1 local_2c8 [16];
  longlong *local_2b8;
  undefined4 local_2b0;
  uint local_2ac;
  longlong *local_2a8;
  undefined4 uStack_2a0;
  uint uStack_29c;
  undefined8 local_298;
  undefined4 local_28c;
  longlong **local_288;
  longlong **local_280;
  undefined1 *local_278;
  undefined1 *local_270;
  undefined8 local_268;
  uint local_25c;
  ulonglong local_258;
  uint local_24c;
  longlong *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  longlong *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  longlong *local_228;
  undefined4 local_21c;
  double local_218;
  undefined4 local_210;
  uint local_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  longlong *local_1f8;
  uint local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  longlong *local_1d8;
  uint local_1d0;
  undefined4 local_1cc;
  longlong *local_1c8;
  uint local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  longlong *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_16c;
  longlong *local_168;
  uint local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  longlong *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  longlong *local_d8;
  undefined4 local_cc;
  longlong *local_c8;
  undefined4 local_bc;
  undefined4 local_b8 [3];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 local_98 [16];
  longlong local_88;
  
  local_res18 = 0;
  local_330 = "gml_Object_oBreakableDangly_Step_0";
  local_328 = 0;
  local_338 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_338;
  pcVar23 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_2f8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_16c = 0xffffff;
  local_178 = 0;
  uStack_17c = 0xffffff;
  local_188 = (longlong *)0x0;
  uStack_18c = 0xffffff;
  local_198 = (longlong *)0x0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_29c = 0xffffff;
  local_2a8 = (longlong *)0x0;
  local_1cc = 0xffffff;
  local_1d8 = (longlong *)0x0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  uStack_fc = 0xffffff;
  local_108 = (longlong *)0x0;
  local_1bc = 0xffffff;
  local_1c8 = (longlong *)0x0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  uStack_10c = 0xffffff;
  local_118 = (longlong *)0x0;
  local_35c = 0xffffff;
  local_368 = 0.0;
  local_21c = 0xffffff;
  local_228 = (longlong *)0x0;
  local_1ec = 0xffffff;
  local_1f8 = (longlong *)0x0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_218 = (double)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_2ac = 0xffffff;
  local_2b8 = (longlong *)0x0;
  local_res20 = 0xffffff;
  local_15c = 0xffffff;
  local_168 = (longlong *)0x0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  uStack_22c = 0xffffff;
  local_238 = (longlong *)0x0;
  uStack_23c = 0xffffff;
  local_248 = (longlong *)0x0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_314 = 0xffffff;
  local_320 = 0;
  local_33c = 0xffffff;
  local_348 = 0;
  local_328 = 2;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a158);
  uStack_38c = 6;
  local_398 = local_res8;
  ppplVar24 = (longlong ***)(in_stack_fffffffffffffc60 & 0xffffffffffffff00);
  uVar27 = (ulonglong)pcVar23 & 0xffffffffffffff00;
  FUN_140e87440(&local_398,DAT_141a0a728,0x80000000,&local_178,uVar27,ppplVar24);
  if ((1 << ((byte)uStack_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  iVar4 = FUN_140e851f0(&local_178,uVar7,DAT_141955260,0);
  if (iVar4 == 0) {
    local_328 = 4;
    if ((1 << ((byte)local_314 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_320);
    }
    local_320 = 0;
    local_318 = 0;
    local_314 = 5;
    uStack_38c = 6;
    local_398 = local_res8;
    uVar25 = (ulonglong)ppplVar24 & 0xffffffffffffff00;
    uVar27 = uVar27 & 0xffffffffffffff00;
    FUN_140e87440(&local_398,DAT_1419fe0e8,0x80000000,&local_188,uVar27,uVar25);
    if ((1 << ((byte)uStack_38c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_398);
    }
    uStack_38c = 6;
    local_398 = local_res8;
    uVar27 = uVar27 & 0xffffffffffffff00;
    FUN_140e87440(&local_398,DAT_1419fe158,0x80000000,&local_198,uVar27,uVar25 & 0xffffffffffffff00)
    ;
    uVar21 = (undefined4)(uVar27 >> 0x20);
    if ((1 << ((byte)uStack_38c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_398);
    }
    uStack_380 = (longlong *)CONCAT44(uStack_17c,uStack_180);
    local_388 = local_188;
    if ((1 << ((byte)_local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    FUN_140041b80(&local_2f8,&local_388);
    local_288 = &local_2f8;
    uStack_380 = (longlong *)CONCAT44(uStack_18c,uStack_190);
    local_388 = local_198;
    if ((1 << ((byte)_local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    FUN_140041b80(&local_2e8,&local_388);
    local_280 = &local_2e8;
    uStack_380 = (longlong *)CONCAT44(0xf,(uint)uStack_380);
    local_388 = (longlong *)0x100000000000005;
    local_308 = (longlong *)0x100000000000005;
    plStack_300 = uStack_380;
    if ((1 << ((byte)_local_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2d8);
    }
    FUN_140041b80(local_2d8,&local_308);
    local_278 = local_2d8;
    ppplVar24 = &local_288;
    uVar27 = CONCAT44(uVar21,DAT_141a12628);
    uVar8 = FUN_140e634e0(local_res8,local_res10,&local_320,3,uVar27,ppplVar24);
    cVar3 = FUN_140e491e0(uVar8);
    if (cVar3 != '\0') {
      local_328 = 6;
      uStack_380 = (longlong *)CONCAT44(0xf,(uint)uStack_380);
      local_388 = (longlong *)0x100000100000091;
      local_308 = (longlong *)0x100000100000091;
      plStack_300 = uStack_380;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_308);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1a8);
      local_328 = 7;
      if ((1 << ((byte)local_314 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_320);
      }
      local_320 = 0;
      local_318 = 0;
      local_314 = 5;
      uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a09f88);
      uVar27 = 0;
      FUN_140e63610(local_res8,local_res10,&local_320,0,uVar7,0);
      local_328 = 8;
      if ((1 << ((byte)local_314 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_320);
      }
      local_320 = 0;
      local_318 = 0;
      local_314 = 5;
      local_388 = _DAT_1419e8fe0;
      uStack_380 = plRam00000001419e8fe8;
      if ((1 << (local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      FUN_140041b80(&local_2f8,&local_388);
      local_288 = &local_2f8;
      ppplVar24 = &local_288;
      uVar7 = gml_Script_choose_weighted(local_res8,local_res10,&local_320,1,ppplVar24);
      cVar3 = FUN_140e491e0(uVar7);
      uVar21 = 0xffffff;
      if (cVar3 != '\0') {
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a3a8);
        uStack_38c = 0;
        local_398 = (longlong *)0x3ff0000000000000;
        iVar4 = FUN_140e851f0(uVar7,&local_398,DAT_141955260,1);
        if ((1 << ((byte)uStack_38c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_398);
        }
        if (0 < iVar4) {
          local_328 = 10;
          puVar9 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a3a8);
          plVar10 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a358);
          uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a388);
          uStack_36c = *(undefined4 *)((longlong)puVar9 + 0xc);
          uStack_370 = *(uint *)(puVar9 + 1);
          if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) == 0) {
            local_378 = (longlong *)*puVar9;
          }
          else {
            FUN_1400419b0(&local_378,puVar9);
          }
          local_res18 = 4;
          uStack_38c = 7;
          local_398 = (longlong *)CONCAT44(local_398._4_4_,1);
          FUN_1400462a0(&local_378,&local_398);
          if ((1 << ((byte)uStack_38c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_398);
          }
          iVar4 = FUN_140e4a740(&local_378);
          if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) &&
             (lVar1 = *plVar10, lVar1 != 0)) {
            if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                            *(undefined4 *)(lVar1 + 0x24));
              plVar10 = (longlong *)0x0;
            }
            else {
              plVar10 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
          }
          uVar25 = (ulonglong)ppplVar24 & 0xffffffffffffff00;
          FUN_140e87440(plVar10,DAT_1419fe5d8,0x80000000,&local_e8,uVar25,
                        uVar27 & 0xffffffffffffff00);
          uVar21 = (undefined4)(uVar25 >> 0x20);
          if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_378);
          }
          FUN_140e609c0(local_res8);
          FUN_1400462a0(uVar7,&local_e8);
          FUN_140e60910(1);
          local_328 = 0xb;
          if ((1 << ((byte)local_314 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_320);
          }
          local_320 = 0;
          local_318 = 0;
          local_314 = 5;
          pplVar11 = (longlong **)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a358);
          if (pplVar11 != &local_2f8) {
            local_388 = *pplVar11;
            uStack_380 = pplVar11[1];
            if ((1 << (local_2ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2f8);
            }
            FUN_140041b80(&local_2f8,&local_388);
          }
          local_288 = &local_2f8;
          FUN_140e634e0(local_res8,local_res10,&local_320,1,CONCAT44(uVar21,DAT_141a08f88),
                        &local_288);
          local_328 = 0xc;
          uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a3a8);
          FUN_1400bdd80(uVar7);
        }
        uVar21 = local_res20;
      }
      local_328 = 0x10;
      goto LAB_14085b217;
    }
  }
  local_328 = 0x19;
  pplVar11 = (longlong **)FUN_140e8da20(&local_320,local_res8,0);
  if (pplVar11 != &local_2a8) {
    local_388 = *pplVar11;
    uStack_380 = pplVar11[1];
    if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    FUN_140041b80(&local_2a8,&local_388);
  }
  local_328 = 0x1a;
  uStack_38c = 6;
  local_398 = local_res8;
  uVar25 = (ulonglong)ppplVar24 & 0xffffffffffffff00;
  uVar27 = uVar27 & 0xffffffffffffff00;
  FUN_140e87440(&local_398,DAT_141a101f8,0x80000000,&local_1d8,uVar27,uVar25);
  if ((1 << ((byte)uStack_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  uStack_38c = 6;
  local_398 = local_res8;
  ppplVar24 = (longlong ***)(uVar25 & 0xffffffffffffff00);
  uVar27 = uVar27 & 0xffffffffffffff00;
  FUN_140e87440(&local_398,DAT_141a0a788,0x80000000,&local_f8,uVar27,ppplVar24);
  if ((1 << ((byte)uStack_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  uStack_36c = local_1cc;
  uStack_370 = local_1d0;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
    local_378 = local_1d8;
  }
  else {
    FUN_1400419b0(&local_378,&local_1d8);
  }
  local_res18 = 8;
  FUN_1400462a0(&local_378,&local_f8);
  uStack_38c = uStack_36c;
  uStack_390 = uStack_370;
  if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) == 0) {
    local_398 = local_378;
  }
  else {
    FUN_1400419b0(&local_398,&local_378);
  }
  local_res18 = 0x18;
  local_28c = 0;
  local_298 = 0x4000000000000000;
  FUN_140046500(&local_398,&local_298);
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  uStack_380._0_4_ = uStack_390;
  uStack_380._4_4_ = uStack_38c;
  local_388 = local_398;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_388);
  local_res18 = 8;
  if ((1 << ((byte)uStack_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_res18 = 0;
  if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_328 = 0x1b;
  local_28c = 0xf;
  local_298 = 0x10000000000009d;
  iVar4 = FUN_140e63cb0(local_98,&local_res8,&local_res10,&local_298);
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if (0 < iVar4) {
    do {
      local_328 = 0x1c;
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      local_348 = 0;
      local_340 = 0;
      local_33c = 5;
      local_28c = 6;
      local_298 = local_res10;
      uVar25 = (ulonglong)ppplVar24 & 0xffffffffffffff00;
      uVar27 = uVar27 & 0xffffffffffffff00;
      FUN_140e87440(&local_298,DAT_1419fe0e8,0x80000000,&local_108,uVar27,uVar25);
      if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      local_9c = 6;
      local_a8 = local_res10;
      uVar25 = uVar25 & 0xffffffffffffff00;
      uVar27 = uVar27 & 0xffffffffffffff00;
      FUN_140e87440(&local_a8,DAT_1419fe158,0x80000000,&local_1c8,uVar27,uVar25);
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      local_cc = 6;
      local_d8 = local_res8;
      uVar25 = uVar25 & 0xffffffffffffff00;
      uVar27 = uVar27 & 0xffffffffffffff00;
      FUN_140e87440(&local_d8,DAT_1419fe0e8,0x80000000,&local_188,uVar27,uVar25);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_bc = 6;
      local_c8 = local_res8;
      uVar27 = uVar27 & 0xffffffffffffff00;
      FUN_140e87440(&local_c8,DAT_1419fe158,0x80000000,&local_198,uVar27,uVar25 & 0xffffffffffffff00
                   );
      uVar21 = (undefined4)(uVar27 >> 0x20);
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      plStack_350 = (longlong *)CONCAT44(uStack_fc,uStack_100);
      local_358 = local_108;
      if ((1 << ((byte)_local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      FUN_140041b80(&local_2f8,&local_358);
      local_288 = &local_2f8;
      uStack_36c = local_1bc;
      uStack_370 = local_1c0;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
        local_378 = local_1c8;
      }
      else {
        FUN_1400419b0(&local_378,&local_1c8);
      }
      local_res18 = 0x20;
      FUN_1400460e0(&local_378,&local_1b8);
      uStack_38c = uStack_36c;
      uStack_390 = uStack_370;
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) == 0) {
        local_398 = local_378;
      }
      else {
        FUN_1400419b0(&local_398,&local_378);
      }
      local_res18 = 0x60;
      local_ac = 7;
      local_b8[0] = 2;
      FUN_1400460e0(&local_398,local_b8);
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      plStack_350 = (longlong *)CONCAT44(uStack_38c,uStack_390);
      local_358 = local_398;
      if ((1 << ((byte)_local_2dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2e8);
      }
      FUN_140041b80(&local_2e8,&local_358);
      local_res18 = 0x20;
      if ((1 << ((byte)uStack_38c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_398);
      }
      local_res18 = 0;
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      local_280 = &local_2e8;
      plStack_350 = (longlong *)CONCAT44(uStack_17c,uStack_180);
      local_358 = local_188;
      if ((1 << ((byte)_local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_2d8);
      }
      FUN_140041b80(local_2d8,&local_358);
      local_278 = local_2d8;
      plStack_350 = (longlong *)CONCAT44(uStack_18c,uStack_190);
      local_358 = local_198;
      if ((1 << (local_2c8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_2c8);
      }
      FUN_140041b80(local_2c8,&local_358);
      ppplVar24 = &local_288;
      uVar27 = CONCAT44(uVar21,DAT_1419fd548);
      local_270 = local_2c8;
      puVar9 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_348,4,uVar27,ppplVar24);
      if (puVar9 != &local_1e8) {
        local_358 = (longlong *)*puVar9;
        plStack_350 = (longlong *)puVar9[1];
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_358);
      }
      local_328 = 0x1d;
      plStack_300 = (longlong *)((ulonglong)plStack_300 & 0xffffffff);
      local_308 = (longlong *)0x4038000000000000;
      iVar4 = FUN_140e851f0(&local_1e8,&local_308,DAT_141955260,1);
      if ((1 << ((byte)((ulonglong)plStack_300 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_308);
      }
      if (iVar4 != -2 && iVar4 < 0) {
        local_328 = 0x1d;
        if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_348);
        }
        local_348 = 0;
        local_340 = 0;
        local_33c = 5;
        uStack_380._4_4_ = 6;
        local_388 = local_res8;
        uVar27 = uVar27 & 0xffffffffffffff00;
        FUN_140e87440(&local_388,DAT_141a0a828,0x80000000,&local_118,uVar27,
                      (ulonglong)ppplVar24 & 0xffffffffffffff00);
        uVar21 = (undefined4)(uVar27 >> 0x20);
        if ((1 << ((byte)uStack_380._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_388);
        }
        local_288 = &local_2a8;
        plStack_350 = (longlong *)CONCAT44(uStack_10c,uStack_110);
        local_358 = local_118;
        if ((1 << ((byte)_local_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
        FUN_140041b80(&local_2e8,&local_358);
        local_280 = &local_2e8;
        ppplVar24 = &local_288;
        uVar27 = CONCAT44(uVar21,DAT_1419fe568);
        FUN_140e634e0(local_res8,local_res10,&local_348,2,uVar27,ppplVar24);
      }
      cVar3 = FUN_140e643f0(local_98,&local_res8,&local_res10);
    } while (cVar3 != '\0');
  }
  FUN_140e63970(local_98,&local_res8,&local_res10);
  local_328 = 0x20;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  local_35c = 0;
  uVar21 = 0;
  uVar22 = 0;
  local_368 = 0.0;
  bVar2 = true;
LAB_140859806:
  uVar26 = (undefined4)(uVar27 >> 0x20);
  if (!bVar2) {
    local_328 = 0x20;
    uVar5 = local_35c & 0xffffff;
    if (uVar5 != 0) {
      if (uVar5 != 1) {
        if (uVar5 == 7) {
          local_368 = (double)CONCAT44(local_368._4_4_,local_368._0_4_ + 1);
        }
        else if (uVar5 == 10) {
          local_368 = (double)((longlong)local_368 + 1);
        }
        else {
          if (uVar5 == 0xd) {
            local_35c = 0;
            goto LAB_140859860;
          }
          FUN_140042910(&DAT_14172c3d8,&local_368,&local_368);
        }
        goto LAB_14085986b;
      }
      local_368 = (double)FUN_140e4b060(&local_368);
      local_35c = 0;
    }
LAB_140859860:
    local_368 = local_368 + 1.0;
  }
LAB_14085986b:
  bVar2 = false;
  iVar4 = 0;
  if ((uStack_29c == 2) && (local_2a8 != (longlong *)0x0)) {
    iVar4 = *(int *)((longlong)local_2a8 + 0x24);
  }
  uStack_380._4_4_ = 0;
  local_388 = (longlong *)(double)iVar4;
  iVar4 = FUN_140e851f0(&local_368,&local_388,DAT_141955260,1);
  if ((1 << ((byte)uStack_380._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  if (iVar4 != -2 && iVar4 < 0) {
    local_328 = 0x21;
    iVar4 = FUN_140e4a740(&local_368);
    pplVar11 = (longlong **)0x0;
    if (((uStack_29c & 0xffffff) == 2) && (local_2a8 != (longlong *)0x0)) {
      if ((iVar4 < 0) || (*(int *)((longlong)local_2a8 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)((longlong)local_2a8 + 0x24));
      }
      else {
        pplVar11 = (longlong **)((longlong)iVar4 * 0x10 + local_2a8[1]);
      }
      if (pplVar11 != &local_228) goto LAB_14085996f;
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      pplVar11 = &local_2a8;
LAB_14085996f:
      local_358 = *pplVar11;
      plStack_350 = pplVar11[1];
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_358);
    }
    local_328 = 0x22;
    if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_348);
    }
    local_348 = 0;
    local_340 = 0;
    local_33c = 5;
    pplVar11 = (longlong **)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a3b8);
    if (pplVar11 != &local_2f8) {
      local_358 = *pplVar11;
      plStack_350 = pplVar11[1];
      if ((1 << ((byte)_local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      FUN_140041b80(&local_2f8,&local_358);
    }
    local_288 = &local_2f8;
    local_280 = &local_228;
    ppplVar24 = &local_288;
    uVar27 = CONCAT44(uVar26,DAT_1419f5d88);
    uVar8 = FUN_140e634e0(local_res8,local_res10,&local_348,2,uVar27,ppplVar24);
    cVar3 = FUN_140e491e0(uVar8);
    if (cVar3 == '\0') {
      local_328 = 0x23;
      pplVar11 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a08dd8);
      uVar27 = uVar27 & 0xffffffffffffff00;
      FUN_140e87440(&local_228,DAT_141a1f230,0x80000000,&local_1f8,uVar27,
                    (ulonglong)ppplVar24 & 0xffffffffffffff00);
      FUN_140e609c0(local_res8);
      uStack_36c = local_1ec;
      uStack_370 = local_1f0;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
        local_378 = local_1f8;
      }
      else {
        FUN_1400419b0(&local_378,&local_1f8);
      }
      local_res18 = 0x80;
      plStack_300 = (longlong *)((ulonglong)plStack_300 & 0xffffffff);
      local_308 = (longlong *)0x3fd0000000000000;
      FUN_140042560(&local_378,&local_308);
      if ((1 << ((byte)((ulonglong)plStack_300 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_308);
      }
      if (&local_378 != pplVar11) {
        plStack_350 = (longlong *)CONCAT44(uStack_36c,uStack_370);
        local_358 = local_378;
        if ((1 << ((byte)*(undefined4 *)((longlong)pplVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pplVar11);
        }
        FUN_140041b80(pplVar11,&local_358);
      }
      local_res18 = 0;
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      FUN_140e60910(1);
    }
    goto LAB_140859806;
  }
  local_328 = 0x26;
  pplVar11 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a3b8);
  FUN_140e609c0(local_res8);
  if (&local_2a8 != pplVar11) {
    plStack_350 = (longlong *)CONCAT44(uStack_29c,uStack_2a0);
    local_358 = local_2a8;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar11);
    }
    FUN_140041b80(pplVar11,&local_358);
  }
  FUN_140e60910(1);
  local_328 = 0x2b;
  uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7f8);
  uStack_380 = (longlong *)(ulonglong)(uint)uStack_380;
  local_388 = (longlong *)0x406ae00000000000;
  iVar4 = FUN_140e851f0(uVar8,&local_388,DAT_141955260,1);
  if ((1 << ((byte)((ulonglong)uStack_380 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  if (iVar4 == -2 || -1 < iVar4) {
    local_328 = 0x2d;
    pplVar11 = (longlong **)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7f8);
    uStack_380 = (longlong *)((ulonglong)uStack_380 & 0xffffffff);
    local_388 = (longlong *)0x4074500000000000;
    iVar4 = FUN_140e851f0(pplVar11,&local_388,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)uStack_380 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_388);
    }
    if (0 < iVar4) {
      local_328 = 0x2e;
      pplVar11 = (longlong **)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7f8);
      uVar8 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a08dd8);
      uStack_36c = *(undefined4 *)((longlong)pplVar11 + 0xc);
      uStack_370 = *(uint *)(pplVar11 + 1);
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) == 0) {
        local_378 = *pplVar11;
      }
      else {
        FUN_1400419b0(&local_378,pplVar11);
      }
      local_res18 = 0x400;
      uStack_380._4_4_ = 7;
      local_388 = (longlong *)CONCAT44(local_388._4_4_,0x145);
      FUN_1400462a0(&local_378,&local_388);
      if ((1 << ((byte)uStack_380._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_388);
      }
      uStack_38c = uStack_36c;
      uStack_390 = uStack_370;
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) == 0) {
        local_398 = local_378;
      }
      else {
        FUN_1400419b0(&local_398,&local_378);
      }
      local_res18 = 0xc00;
      uStack_380 = (longlong *)(ulonglong)(uint)uStack_380;
      local_388 = (longlong *)0x3fa47ae147ae147b;
      FUN_140042560(&local_398,&local_388);
      if ((1 << ((byte)((ulonglong)uStack_380 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_388);
      }
      FUN_1400462a0(uVar8,&local_398);
      local_res18 = 0x400;
      if ((1 << ((byte)uStack_38c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_398);
      }
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
    }
  }
  else {
    local_328 = 0x2c;
    pplVar11 = (longlong **)(**(code **)(*local_res8 + 8))();
    uVar8 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a08dd8);
    uStack_36c = 0;
    local_378 = (longlong *)0x406ae00000000000;
    local_res18 = 0x100;
    FUN_1400462a0(&local_378,pplVar11);
    uStack_38c = uStack_36c;
    uStack_390 = uStack_370;
    if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) == 0) {
      local_398 = local_378;
    }
    else {
      FUN_1400419b0(&local_398,&local_378);
    }
    local_res18 = 0x300;
    uStack_380 = (longlong *)((ulonglong)uStack_380 & 0xffffffff);
    local_388 = (longlong *)0x3fa47ae147ae147b;
    FUN_140042560(&local_398,&local_388);
    if ((1 << ((byte)((ulonglong)uStack_380 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_388);
    }
    FUN_1400460e0(uVar8,&local_398);
    local_res18 = 0x100;
    if ((1 << ((byte)uStack_38c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_398);
    }
    if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_378);
    }
  }
  local_328 = 0x30;
  if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  local_348 = 0;
  local_340 = 0;
  local_33c = 5;
  if (pplVar11 != &local_2f8) {
    local_358 = *pplVar11;
    plStack_350 = pplVar11[1];
    if ((1 << (local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    FUN_140041b80(&local_2f8,&local_358);
  }
  local_288 = &local_2f8;
  ppplVar24 = &local_288;
  uVar27 = CONCAT44(uVar26,DAT_141a00e28);
  uVar8 = FUN_140e634e0(local_res8,local_res10,&local_348,1,uVar27,ppplVar24);
  uStack_38c = 0;
  local_398 = (longlong *)0xbfa999999999999a;
  local_res18 = 0x1000;
  FUN_140042560(&local_398,uVar8);
  plStack_350 = (longlong *)CONCAT44(uStack_38c,uStack_390);
  local_358 = local_398;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_358);
  if ((1 << ((byte)uStack_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_328 = 0x32;
  puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a08dd8);
  FUN_140e609c0(local_res8);
  FUN_1400460e0(puVar9,&local_138);
  FUN_140e60910(1);
  local_328 = 0x33;
  puVar12 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a08dd8);
  uVar8 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
  FUN_140e609c0(local_res8);
  FUN_1400460e0(uVar8,puVar12);
  FUN_140e60910(1);
  local_328 = 0x35;
  if ((*(uint *)((longlong)puVar12 + 0xc) & 0xffffff) == 0) {
    uVar8 = *puVar12;
  }
  else {
    uVar8 = FUN_140e4b060(puVar12);
  }
  uVar8 = FUN_140e78ec0(uVar8,0xbffc000000000000,0x3ffc000000000000);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar9);
  }
  *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
  *puVar9 = uVar8;
  local_328 = 0x36;
  uStack_380._4_4_ = 6;
  local_388 = local_res8;
  uVar27 = uVar27 & 0xffffffffffffff00;
  FUN_140e87440(&local_388,DAT_141a0a728,0x80000000,&local_178,uVar27,
                (ulonglong)ppplVar24 & 0xffffffffffffff00);
  uVar26 = (undefined4)(uVar27 >> 0x20);
  if ((1 << ((byte)uStack_380._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  iVar4 = FUN_140e851f0(&local_178,uVar7,DAT_141955260,0);
  if (iVar4 == 0) {
    plStack_300 = (longlong *)((ulonglong)plStack_300 & 0xffffffff);
    local_308 = (longlong *)0x3fefae147ae147ae;
    pplVar13 = &local_308;
    uVar5 = 1;
  }
  else {
    uStack_380._4_4_ = 0;
    local_388 = (longlong *)0x3feff7ced916872b;
    pplVar13 = &local_388;
    uVar5 = 2;
  }
  local_res18 = uVar5;
  FUN_140042560(puVar9,pplVar13);
  if ((uVar5 & 2) != 0) {
    uVar5 = uVar5 & 0xfffffffd;
    local_res18 = uVar5;
    if ((1 << ((byte)uStack_380._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_388);
    }
  }
  if (((uVar5 & 1) != 0) &&
     (uVar5 = uVar5 & 0xfffffffe,
     (1 << ((byte)((ulonglong)plStack_300 >> 0x20) & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_308);
  }
  local_328 = 0x38;
  if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  local_348 = 0;
  local_340 = 0;
  local_33c = 5;
  pplVar13 = (longlong **)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a338);
  puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a338);
  if (pplVar13 != &local_2f8) {
    local_358 = *pplVar13;
    plStack_350 = pplVar13[1];
    if ((1 << (local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    FUN_140041b80(&local_2f8,&local_358);
  }
  local_288 = &local_2f8;
  if (pplVar11 != &local_2e8) {
    local_358 = *pplVar11;
    plStack_350 = pplVar11[1];
    if ((1 << (local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    FUN_140041b80(&local_2e8,&local_358);
  }
  local_280 = &local_2e8;
  uStack_38c = 0;
  local_398 = (longlong *)0x3fb999999999999a;
  local_res18 = uVar5 | 0x2000;
  FUN_140042560(&local_398,local_218);
  plStack_350 = (longlong *)CONCAT44(uStack_38c,uStack_390);
  local_358 = local_398;
  if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2d8);
  }
  FUN_140041b80(local_2d8,&local_358);
  local_res18 = uVar5;
  if ((1 << ((byte)uStack_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_278 = local_2d8;
  FUN_140e609c0(local_res8);
  ppplVar24 = &local_288;
  uVar27 = CONCAT44(uVar26,DAT_141a00c58);
  puVar12 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_348,3,uVar27,ppplVar24);
  if (puVar12 != puVar9) {
    local_358 = (longlong *)*puVar12;
    plStack_350 = (longlong *)puVar12[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_358);
  }
  FUN_140e60910(1);
  local_328 = 0x39;
  uStack_38c = *(undefined4 *)((longlong)pplVar11 + 0xc);
  uStack_390 = *(uint *)(pplVar11 + 1);
  if ((1 << ((byte)uStack_38c & 0x1f) & 0x46U) == 0) {
    local_398 = *pplVar11;
  }
  else {
    FUN_1400419b0(&local_398,pplVar11);
  }
  local_res18 = uVar5 | 0x4000;
  FUN_1400462a0(&local_398,pplVar13);
  plStack_350 = (longlong *)CONCAT44(uStack_38c,uStack_390);
  local_358 = local_398;
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  FUN_140041b80(&local_2b8,&local_358);
  local_res18 = uVar5;
  if ((1 << ((byte)uStack_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_328 = 0x3a;
  if ((local_2ac & 0xffffff) != 0) {
    FUN_140e4b060(&local_2b8);
  }
  dVar16 = (double)FUN_140e78d00();
  if (12.0 < dVar16) {
    local_328 = 0x3b;
    (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a158);
    puVar9 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7f8);
    (**(code **)(*local_res8 + 8))(local_res8,DAT_141a08dd8);
    (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a338);
    (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a08dd8);
    pplVar11 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a338);
    FUN_140e609c0(local_res8);
    if ((local_2ac & 0xffffff) != 0) {
      FUN_140e4b060(&local_2b8);
    }
    dVar16 = (double)FUN_140e79500();
    uStack_36c = *(undefined4 *)((longlong)puVar9 + 0xc);
    uStack_370 = *(uint *)(puVar9 + 1);
    if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) == 0) {
      local_378 = (longlong *)*puVar9;
    }
    else {
      FUN_1400419b0(&local_378,puVar9);
    }
    local_res18 = uVar5 | 0x8000;
    uStack_380._4_4_ = 0;
    local_388 = (longlong *)(dVar16 * 12.0);
    FUN_1400462a0(&local_378,&local_388);
    if ((1 << ((byte)uStack_380._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_388);
    }
    if (&local_378 != pplVar11) {
      plStack_350 = (longlong *)CONCAT44(uStack_36c,uStack_370);
      local_358 = local_378;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar11);
      }
      FUN_140041b80(pplVar11,&local_358);
    }
    local_res18 = uVar5;
    if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_378);
    }
    FUN_140e60910(1);
  }
  local_328 = 0x3d;
  uStack_38c = local_2ac;
  uStack_390 = local_2b0;
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) == 0) {
    local_398 = local_2b8;
  }
  else {
    FUN_1400419b0(&local_398,&local_2b8);
  }
  local_res18 = uVar5 | 0x10000;
  uStack_380._4_4_ = 7;
  local_388 = (longlong *)CONCAT44(local_388._4_4_,3);
  FUN_140042560(&local_398,&local_388);
  if ((1 << ((byte)uStack_380._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  plStack_350 = (longlong *)CONCAT44(uStack_38c,uStack_390);
  local_358 = local_398;
  FUN_140041b80(&local_168,&local_358);
  local_res18 = uVar5;
  if ((1 << ((byte)uStack_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_328 = 0x3e;
  if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  local_348 = 0;
  local_340 = 0;
  local_33c = 5;
  puVar9 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a3a8);
  uStack_38c = *(undefined4 *)((longlong)puVar9 + 0xc);
  uStack_390 = *(uint *)(puVar9 + 1);
  if ((1 << ((byte)uStack_38c & 0x1f) & 0x46U) == 0) {
    local_398 = (longlong *)*puVar9;
  }
  else {
    FUN_1400419b0(&local_398,puVar9);
  }
  local_res18 = uVar5 | 0x20000;
  uStack_380 = (longlong *)CONCAT44(7,(uint)uStack_380);
  local_388 = (longlong *)CONCAT44(local_388._4_4_,1);
  FUN_1400462a0(&local_398,&local_388);
  if ((1 << ((byte)((ulonglong)uStack_380 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  plStack_350 = (longlong *)CONCAT44(uStack_38c,uStack_390);
  local_358 = local_398;
  if ((1 << (local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  FUN_140041b80(&local_2f8,&local_358);
  local_res18 = uVar5;
  if ((1 << ((byte)uStack_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_288 = &local_2f8;
  local_358 = _DAT_1419e8fd0;
  plStack_350 = plRam00000001419e8fd8;
  if ((1 << (local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  FUN_140041b80(&local_2e8,&local_358);
  local_280 = &local_2e8;
  puVar9 = (undefined8 *)FUN_140e79090(&local_348,2,&local_288);
  if (puVar9 != &local_208) {
    local_358 = (longlong *)*puVar9;
    plStack_350 = (longlong *)puVar9[1];
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_358);
  }
  local_328 = 0x3f;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  plVar10 = local_168;
  local_35c = 0;
  local_368 = 0.0;
  bVar2 = true;
  local_res20 = local_15c;
  do {
    if (!bVar2) {
      local_328 = 0x3f;
      uVar6 = local_35c & 0xffffff;
      if (uVar6 != 0) {
        if (uVar6 != 1) {
          if (uVar6 == 7) {
            local_368 = (double)CONCAT44(local_368._4_4_,local_368._0_4_ + 1);
          }
          else if (uVar6 == 10) {
            local_368 = (double)((longlong)local_368 + 1);
          }
          else {
            if (uVar6 == 0xd) goto LAB_14085a9d6;
            FUN_140042910(&DAT_14172c3d8,&local_368,&local_368);
          }
          goto LAB_14085a9e6;
        }
        local_368 = (double)FUN_140e4b060(&local_368);
LAB_14085a9d6:
        local_35c = 0;
      }
      local_368 = local_368 + 1.0;
    }
LAB_14085a9e6:
    bVar2 = false;
    uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a3a8);
    iVar4 = FUN_140e851f0(&local_368,uVar7,DAT_141955260,1);
    if ((iVar4 == -2) || (-1 < iVar4)) break;
    local_328 = 0x40;
    puVar9 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7f8);
    plVar14 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a358);
    local_20c = local_35c;
    local_210 = local_360;
    if ((1 << ((byte)local_35c & 0x1f) & 0x46U) == 0) {
      local_218 = local_368;
    }
    else {
      FUN_1400419b0(&local_218,&local_368);
    }
    local_res18 = uVar5 | 0x40000;
    FUN_140046500(&local_218,&local_208);
    uStack_36c = local_res20;
    uStack_370 = local_160;
    if ((1 << ((byte)local_res20 & 0x1f) & 0x46U) == 0) {
      local_378 = plVar10;
    }
    else {
      FUN_1400419b0(&local_378,&local_168);
    }
    local_res18 = uVar5 | 0xc0000;
    FUN_140042560(&local_378,&local_218);
    uStack_38c = *(undefined4 *)((longlong)puVar9 + 0xc);
    uStack_390 = *(uint *)(puVar9 + 1);
    if ((1 << ((byte)uStack_38c & 0x1f) & 0x46U) == 0) {
      local_398 = (longlong *)*puVar9;
    }
    else {
      FUN_1400419b0(&local_398,puVar9);
    }
    local_res18 = uVar5 | 0x1c0000;
    FUN_1400462a0(&local_398,&local_378);
    plStack_350 = (longlong *)CONCAT44(uStack_38c,uStack_390);
    local_358 = local_398;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_358);
    local_res18 = uVar5 | 0xc0000;
    if ((1 << ((byte)uStack_38c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_398);
    }
    local_res18 = uVar5 | 0x40000;
    if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_378);
    }
    local_res18 = uVar5;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    iVar4 = FUN_140e4a740(&local_368);
    if (((*(uint *)((longlong)plVar14 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar14, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar14 = (longlong *)0x0;
      }
      else {
        plVar14 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    FUN_140e87930(plVar14,DAT_141a0a7f8,0x80000000,&local_158);
  } while( true );
  local_328 = 0x42;
  pplVar11 = (longlong **)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a368);
  if (pplVar11 != &local_238) {
    local_358 = *pplVar11;
    plStack_350 = pplVar11[1];
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_358);
  }
  local_328 = 0x43;
  pplVar11 = (longlong **)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a398);
  if (pplVar11 != &local_248) {
    local_358 = *pplVar11;
    plStack_350 = pplVar11[1];
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_358);
  }
  local_328 = 0x44;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  local_35c = 0;
  local_368 = 0.0;
  bVar2 = true;
  do {
    if (!bVar2) {
      local_328 = 0x44;
      uVar5 = local_35c & 0xffffff;
      if (uVar5 == 0) {
LAB_14085adc0:
        local_368 = (double)CONCAT44(uVar22,uVar21) + 1.0;
      }
      else if (uVar5 == 1) {
        local_368 = (double)FUN_140e4b060(&local_368);
        local_368 = local_368 + 1.0;
        local_35c = 0;
      }
      else if (uVar5 == 7) {
        local_368 = (double)CONCAT44(local_368._4_4_,local_368._0_4_ + 1);
      }
      else if (uVar5 == 10) {
        local_368 = (double)((longlong)local_368 + 1);
      }
      else {
        if (uVar5 == 0xd) {
          local_35c = 0;
          goto LAB_14085adc0;
        }
        FUN_140042910(&DAT_14172c3d8,&local_368,&local_368);
      }
    }
    bVar2 = false;
    uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a3a8);
    iVar4 = FUN_140e851f0(&local_368,uVar7,DAT_141955260,1);
    if ((iVar4 == -2) || (-1 < iVar4)) break;
    local_328 = 0x45;
    plVar10 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a358);
    iVar4 = FUN_140e4a740(&local_368);
    if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar14 = (longlong *)0x0;
      }
      else {
        plVar14 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar14 = plVar10;
    }
    uVar25 = (ulonglong)ppplVar24 & 0xffffffffffffff00;
    uVar27 = uVar27 & 0xffffffffffffff00;
    FUN_140e87440(plVar14,DAT_1419fe5d8,0x80000000,&local_258,uVar27,uVar25);
    iVar4 = FUN_140e4a740(&local_368);
    if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uVar25 = uVar25 & 0xffffffffffffff00;
    uVar27 = uVar27 & 0xffffffffffffff00;
    FUN_140e87440(plVar10,DAT_141a0a7f8,0x80000000,&local_268,uVar27,uVar25);
    if ((local_25c & 0xffffff) == 0) {
      uVar21 = (undefined4)local_268;
      uVar22 = (undefined4)((ulonglong)local_268 >> 0x20);
    }
    else {
      uVar7 = FUN_140e4b060(&local_268);
      uVar21 = (undefined4)uVar7;
      uVar22 = (undefined4)((ulonglong)uVar7 >> 0x20);
    }
    if ((local_24c & 0xffffff) == 0) {
      auVar17._8_8_ = 0;
      auVar17._0_8_ = local_258;
    }
    else {
      auVar17._0_8_ = FUN_140e4b060(&local_258);
      auVar17._8_8_ = extraout_XMM0_Qb;
    }
    auVar18._4_12_ = auVar17._4_12_;
    auVar18._0_4_ = (float)auVar17._0_8_;
    fVar15 = (float)FUN_140e78f90(auVar18._0_8_,(float)(double)CONCAT44(uVar22,uVar21));
    FUN_140162c50(&local_238,(double)fVar15);
    local_328 = 0x46;
    plVar10 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a358);
    iVar4 = FUN_140e4a740(&local_368);
    if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar14 = (longlong *)0x0;
      }
      else {
        plVar14 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar14 = plVar10;
    }
    uVar25 = uVar25 & 0xffffffffffffff00;
    uVar27 = uVar27 & 0xffffffffffffff00;
    FUN_140e87440(plVar14,DAT_1419fe5d8,0x80000000,&local_258,uVar27,uVar25);
    iVar4 = FUN_140e4a740(&local_368);
    if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    ppplVar24 = (longlong ***)(uVar25 & 0xffffffffffffff00);
    uVar27 = uVar27 & 0xffffffffffffff00;
    FUN_140e87440(plVar10,DAT_141a0a7f8,0x80000000,&local_268,uVar27,ppplVar24);
    if ((local_25c & 0xffffff) == 0) {
      uVar21 = (undefined4)local_268;
      uVar22 = (undefined4)((ulonglong)local_268 >> 0x20);
    }
    else {
      uVar7 = FUN_140e4b060(&local_268);
      uVar21 = (undefined4)uVar7;
      uVar22 = (undefined4)((ulonglong)uVar7 >> 0x20);
    }
    if ((local_24c & 0xffffff) == 0) {
      auVar19._8_8_ = 0;
      auVar19._0_8_ = local_258;
    }
    else {
      auVar19._0_8_ = FUN_140e4b060(&local_258);
      auVar19._8_8_ = extraout_XMM0_Qb_00;
    }
    auVar20._4_12_ = auVar19._4_12_;
    auVar20._0_4_ = (float)auVar19._0_8_;
    fVar15 = (float)FUN_140e79010(auVar20._0_8_,(float)(double)CONCAT44(uVar22,uVar21));
    FUN_140162c50(&local_248,(double)fVar15);
    uVar21 = SUB84(local_368,0);
    uVar22 = (undefined4)((ulonglong)local_368 >> 0x20);
  } while( true );
  local_328 = 0x48;
  plStack_350 = (longlong *)CONCAT44(uStack_22c,uStack_230);
  local_358 = local_238;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_358);
  FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_148);
  local_328 = 0x49;
  plStack_350 = (longlong *)CONCAT44(uStack_23c,uStack_240);
  local_358 = local_248;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_358);
  FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_128);
  if (local_88 != 0) {
    FUN_140e4cd60();
    local_88 = 0;
  }
  uVar21 = local_res20;
LAB_14085b217:
  if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  if ((1 << ((byte)local_314 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_320);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)uVar21 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  _eh_vector_destructor_iterator_(&local_2f8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_338;
  return;
}

