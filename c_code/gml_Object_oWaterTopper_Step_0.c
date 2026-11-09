// gml_Object_oWaterTopper_Step_0 @ 0x140e30290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oWaterTopper_Step_0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  double *pdVar9;
  double *pdVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar15;
  double dVar14;
  undefined4 uVar16;
  undefined4 uVar17;
  code *pcVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  ulonglong in_stack_fffffffffffffc80;
  longlong **pplVar21;
  ulonglong uVar22;
  undefined8 local_378;
  undefined4 uStack_370;
  uint uStack_36c;
  undefined8 local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined4 local_350;
  undefined4 local_34c;
  double local_348;
  undefined4 local_340;
  uint local_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  double local_328;
  undefined4 local_320;
  uint local_31c;
  undefined8 local_318;
  char *local_310;
  undefined4 local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  longlong local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  double local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  longlong local_2c8;
  byte local_2bc;
  longlong local_2b8;
  byte local_2ac;
  undefined1 local_2a8 [12];
  byte local_29c;
  undefined1 local_298 [12];
  byte local_28c;
  undefined1 local_288 [12];
  byte local_27c;
  longlong *local_278;
  longlong *local_270;
  longlong *local_268;
  undefined1 *local_260;
  undefined1 *local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined4 local_244;
  longlong local_240;
  undefined4 local_234;
  undefined8 local_230;
  undefined4 local_228;
  undefined4 local_224;
  longlong local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f4;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  double local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  longlong local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  longlong local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8 [3];
  undefined4 local_dc;
  undefined4 local_d8 [3];
  undefined4 local_cc;
  undefined4 local_c8 [3];
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  
  local_310 = "gml_Object_oWeaponOptions_Create_0";
  local_308 = 0;
  local_318 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_318;
  pcVar18 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_2c8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_fc = 0xffffff;
  local_108 = 0;
  plVar5 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0aac8);
  local_33c = 0xffffff;
  local_348 = 0.0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  uStack_1dc = 0xffffff;
  local_1e8 = 0;
  local_2cc = 0xffffff;
  local_2d8 = 0.0;
  local_1f4 = 0xffffff;
  local_200 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  local_234 = 0xffffff;
  local_240 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_34c = 0xffffff;
  local_358 = 0;
  local_2f4 = 0xffffff;
  local_300 = 0;
  local_308 = 4;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03ee8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_378,FUN_140e2f840,0);
  if (&local_378 != puVar6) {
    local_368 = (longlong)local_378;
    uStack_360 = uStack_370;
    uStack_35c = uStack_36c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_368);
  }
  if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  FUN_140e60910(1);
  local_308 = 0x16;
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03e98);
  FUN_140e609c0(param_1);
  plVar8 = (longlong *)FUN_140e8da20(&local_98,param_1,0);
  if (plVar8 != plVar7) {
    local_368 = *plVar8;
    uStack_360 = (undefined4)plVar8[1];
    uStack_35c = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar7);
    }
    FUN_140041b80(plVar7,&local_368);
  }
  FUN_140e60910(1);
  local_308 = 0x17;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03eb8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0x4008000000000000;
  local_308 = 0x18;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03f58);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = &DAT_bff0000000000000;
  local_308 = 0x19;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03f38);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = &DAT_bff0000000000000;
  local_308 = 0x1b;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03f48);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0;
  local_308 = 0x1c;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03ea8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0;
  local_308 = 0x1e;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0;
  local_308 = 0x20;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03f28);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0x4000000000000000;
  local_308 = 0x21;
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03f08);
  uStack_36c = 0xf;
  local_378 = 7.291122019556822e-304;
  uVar19 = (ulonglong)pcVar18 & 0xffffffffffffff00;
  FUN_140e87440(&local_378,DAT_141a57b90,0x80000000,&local_108,uVar19,
                in_stack_fffffffffffffc80 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar19 >> 0x20);
  if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  FUN_140e609c0(param_1);
  if (&local_108 != plVar7) {
    local_368 = local_108;
    uStack_360 = uStack_100;
    uStack_35c = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar7);
    }
    FUN_140041b80(plVar7,&local_368);
  }
  FUN_140e60910(1);
  local_308 = 0x23;
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03e88);
  FUN_140e609c0(param_1);
  plVar8 = (longlong *)FUN_140e8da20(&local_a8,param_1,0);
  if (plVar8 != plVar7) {
    local_368 = *plVar8;
    uStack_360 = (undefined4)plVar8[1];
    uStack_35c = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar7);
    }
    FUN_140041b80(plVar7,&local_368);
  }
  FUN_140e60910(1);
  local_308 = 0x24;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03ef8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0;
  local_308 = 0x26;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_358 = 0;
  local_350 = 0;
  local_34c = 5;
  if (plVar5 != &local_2c8) {
    local_368 = *plVar5;
    uStack_360 = (undefined4)plVar5[1];
    uStack_35c = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    FUN_140041b80(&local_2c8,&local_368);
  }
  local_278 = &local_2c8;
  FUN_140e645a0(&local_368,FUN_140e2fe60,param_1);
  local_f8 = local_368;
  uStack_f0 = uStack_360;
  uStack_ec = uStack_35c;
  if ((1 << ((byte)_local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  FUN_140041b80(&local_2b8,&local_f8);
  if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  local_270 = &local_2b8;
  pplVar21 = &local_278;
  uVar19 = CONCAT44(uVar13,DAT_1419f4b88);
  FUN_140e634e0(param_1,param_2,&local_358,2,uVar19,pplVar21);
  local_308 = 0x2f;
  if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  local_33c = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar13 = 0;
  uVar15 = 0;
  local_348 = 0.0;
  bVar2 = true;
  do {
    dVar14 = (double)CONCAT44(uVar15,uVar13);
    if (!bVar2) {
      local_308 = 0x2f;
      uVar3 = local_33c & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_348 = (double)CONCAT44(local_348._4_4_,local_348._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_348 = (double)((longlong)local_348 + 1);
          }
          else {
            if (uVar3 == 0xd) goto LAB_140e30a35;
            FUN_140042910(&DAT_14172c3d8,&local_348,&local_348);
          }
          goto LAB_140e30a45;
        }
        dVar14 = (double)FUN_140e4b060(&local_348);
LAB_140e30a35:
        local_33c = 0;
      }
      local_348 = dVar14 + 1.0;
    }
LAB_140e30a45:
    bVar2 = false;
    pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03eb8);
    local_31c = *(uint *)((longlong)pdVar9 + 0xc);
    local_320 = *(undefined4 *)(pdVar9 + 1);
    if ((1 << ((byte)local_31c & 0x1f) & 0x46U) == 0) {
      local_328 = *pdVar9;
    }
    else {
      FUN_1400419b0(&local_328,pdVar9);
    }
    uStack_36c = 7;
    local_378 = (double)CONCAT44(local_378._4_4_,1);
    FUN_1400462a0(&local_328,&local_378);
    if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_378);
    }
    iVar4 = FUN_140e851f0(&local_348,&local_328,DAT_141955260,1);
    if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    if (iVar4 == -2 || -1 < iVar4) break;
    local_308 = 0x31;
    plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03e88);
    uVar13 = (undefined4)(uVar19 >> 0x20);
    iVar4 = 0;
    if ((*(int *)((longlong)plVar5 + 0xc) == 2) && (*plVar5 != 0)) {
      iVar4 = *(int *)(*plVar5 + 0x24);
    }
    lVar1 = FUN_140e78f00((longlong)(iVar4 + -1));
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1cc = 0;
    local_308 = 0x32;
    local_1d8 = lVar1;
    plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03e88);
    iVar4 = FUN_140e4a740(&local_1d8);
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar7 != &local_158) {
      local_368 = *plVar7;
      uStack_360 = (undefined4)plVar7[1];
      uStack_35c = *(undefined4 *)((longlong)plVar7 + 0xc);
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_368);
    }
    local_308 = 0x33;
    if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    local_358 = 0;
    local_350 = 0;
    local_34c = 5;
    if (plVar5 != &local_2c8) {
      local_368 = *plVar5;
      uStack_360 = (undefined4)plVar5[1];
      uStack_35c = *(undefined4 *)((longlong)plVar5 + 0xc);
      if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      FUN_140041b80(&local_2c8,&local_368);
    }
    local_278 = &local_2c8;
    local_270 = &local_1d8;
    local_368 = CONCAT44(uRam00000001419eea04,_DAT_1419eea00);
    uStack_360 = uRam00000001419eea08;
    uStack_35c = uRam00000001419eea0c;
    if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2a8);
    }
    FUN_140041b80(local_2a8,&local_368);
    uVar20 = CONCAT44(uVar13,DAT_1419fd808);
    local_268 = (longlong *)local_2a8;
    FUN_140e634e0(param_1,param_2,&local_358,3,uVar20,&local_278);
    uVar13 = (undefined4)((ulonglong)uVar20 >> 0x20);
    local_308 = 0x35;
    if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    local_358 = 0;
    local_350 = 0;
    local_34c = 5;
    if ((1 << ((byte)local_2f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_300);
    }
    local_300 = 0;
    local_2f8 = 0;
    local_2f4 = 5;
    plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03ee8);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03e98);
    FUN_140e85f80(param_1,DAT_141a00d08,0,&local_1e8);
    local_368 = local_1e8;
    uStack_360 = uStack_1e0;
    uStack_35c = uStack_1dc;
    if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    FUN_140041b80(&local_2c8,&local_368);
    local_278 = &local_2c8;
    if (plVar5 != &local_2b8) {
      local_368 = *plVar5;
      uStack_360 = (undefined4)plVar5[1];
      uStack_35c = *(undefined4 *)((longlong)plVar5 + 0xc);
      if ((1 << ((byte)_local_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      FUN_140041b80(&local_2b8,&local_368);
    }
    local_270 = &local_2b8;
    local_268 = &local_158;
    local_368 = CONCAT44(uRam0000000141dc7a24,_DAT_141dc7a20);
    uStack_360 = uRam0000000141dc7a28;
    uStack_35c = uRam0000000141dc7a2c;
    if ((1 << ((byte)_local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_298);
    }
    FUN_140041b80(local_298,&local_368);
    local_260 = local_298;
    uVar20 = CONCAT44(uVar13,DAT_141a00d58);
    plVar5 = (longlong *)FUN_140e634e0(param_1,param_2,&local_300,1,uVar20,&local_278);
    uVar13 = (undefined4)((ulonglong)uVar20 >> 0x20);
    uStack_2dc = *(undefined4 *)((longlong)plVar5 + 0xc);
    uStack_2e0 = (undefined4)plVar5[1];
    if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) == 0) {
      local_2e8 = *plVar5;
    }
    else {
      FUN_1400419b0(&local_2e8,plVar5);
    }
    local_244 = 0;
    local_250 = 0x3fe8000000000000;
    FUN_140042560(&local_2e8,&local_250);
    if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_250);
    }
    local_368 = local_2e8;
    uStack_360 = uStack_2e0;
    uStack_35c = uStack_2dc;
    if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_288);
    }
    FUN_140041b80(local_288,&local_368);
    if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    local_258 = local_288;
    FUN_140e609c0(param_1);
    uVar15 = FUN_140e4a740(&local_348);
    plVar5 = (longlong *)FUN_140e48e40(puVar6,uVar15);
    FUN_140e609c0(*(undefined8 *)*puVar6);
    pplVar21 = &local_270;
    uVar19 = CONCAT44(uVar13,DAT_1419fd6d8);
    plVar7 = (longlong *)FUN_140e634e0(param_1,param_2,&local_358,4,uVar19,pplVar21);
    if (plVar7 != plVar5) {
      local_368 = *plVar7;
      uStack_360 = (undefined4)plVar7[1];
      uStack_35c = *(undefined4 *)((longlong)plVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar5);
      }
      FUN_140041b80(plVar5,&local_368);
    }
    FUN_140e60910(2);
    uVar13 = SUB84(local_348,0);
    uVar15 = (undefined4)((ulonglong)local_348 >> 0x20);
  } while( true );
  local_308 = 0x38;
  if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  local_33c = 0;
  local_348 = 0.0;
  bVar2 = true;
  do {
    if (!bVar2) {
      local_308 = 0x38;
      uVar3 = local_33c & 0xffffff;
      if (uVar3 == 0) {
LAB_140e3108d:
        local_348 = (double)CONCAT44(uVar17,uVar16) + 1.0;
      }
      else if (uVar3 == 1) {
        local_348 = (double)FUN_140e4b060(&local_348);
        local_348 = local_348 + 1.0;
        local_33c = 0;
      }
      else if (uVar3 == 7) {
        local_348 = (double)CONCAT44(local_348._4_4_,local_348._0_4_ + 1);
      }
      else if (uVar3 == 10) {
        local_348 = (double)((longlong)local_348 + 1);
      }
      else {
        if (uVar3 == 0xd) {
          local_33c = 0;
          goto LAB_140e3108d;
        }
        FUN_140042910(&DAT_14172c3d8,&local_348,&local_348);
      }
    }
    bVar2 = false;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03eb8);
    local_10c = *(undefined4 *)((longlong)puVar6 + 0xc);
    local_110 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
      local_118 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_118,puVar6);
    }
    local_dc = 7;
    local_e8[0] = 1;
    FUN_1400462a0(&local_118,local_e8);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    iVar4 = FUN_140e851f0(&local_348,&local_118,DAT_141955260,1);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if (iVar4 == -2 || -1 < iVar4) {
      local_308 = 0x43;
      if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      uVar13 = (undefined4)(uVar19 >> 0x20);
      local_358 = 0;
      local_350 = 0;
      local_34c = 5;
      if ((1 << ((byte)local_2f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_300);
      }
      local_300 = 0;
      local_2f8 = 0;
      local_2f4 = 5;
      plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03ee8);
      pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03eb8);
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03e98);
      FUN_140e85f80(param_1,DAT_141a00d08,0,&local_1e8);
      local_338 = (undefined4)local_1e8;
      uStack_334 = local_1e8._4_4_;
      uStack_330 = uStack_1e0;
      uStack_32c = uStack_1dc;
      if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      FUN_140041b80(&local_2c8,&local_338);
      local_278 = &local_2c8;
      if (plVar5 != &local_2b8) {
        local_338 = (undefined4)*plVar5;
        uStack_334 = *(undefined4 *)((longlong)plVar5 + 4);
        uStack_330 = (undefined4)plVar5[1];
        uStack_32c = *(undefined4 *)((longlong)plVar5 + 0xc);
        if ((1 << (local_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        FUN_140041b80(&local_2b8,&local_338);
      }
      local_270 = &local_2b8;
      local_338 = _DAT_1419eea10;
      uStack_334 = uRam00000001419eea14;
      uStack_330 = uRam00000001419eea18;
      uStack_32c = uRam00000001419eea1c;
      if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_2a8);
      }
      FUN_140041b80(local_2a8,&local_338);
      local_338 = _DAT_141dc7a20;
      uStack_334 = uRam0000000141dc7a24;
      uStack_330 = uRam0000000141dc7a28;
      uStack_32c = uRam0000000141dc7a2c;
      local_268 = (longlong *)local_2a8;
      if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_298);
      }
      FUN_140041b80(local_298,&local_338);
      local_260 = local_298;
      uVar20 = CONCAT44(uVar13,DAT_141a00d58);
      pdVar10 = (double *)FUN_140e634e0(param_1,param_2,&local_300,1,uVar20,&local_278);
      uVar13 = (undefined4)((ulonglong)uVar20 >> 0x20);
      uStack_36c = *(undefined4 *)((longlong)pdVar10 + 0xc);
      uStack_370 = *(undefined4 *)(pdVar10 + 1);
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) == 0) {
        local_378 = *pdVar10;
      }
      else {
        FUN_1400419b0(&local_378,pdVar10);
      }
      uStack_35c = 0;
      local_368 = 0x3fe8000000000000;
      FUN_140042560(&local_378,&local_368);
      if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_368);
      }
      local_338 = (undefined4)local_378;
      uStack_334 = local_378._4_4_;
      uStack_330 = uStack_370;
      uStack_32c = uStack_36c;
      if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_288);
      }
      FUN_140041b80(local_288,&local_338);
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      local_258 = local_288;
      FUN_140e609c0(param_1);
      uStack_36c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      uStack_370 = *(undefined4 *)(pdVar9 + 1);
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) == 0) {
        local_378 = *pdVar9;
      }
      else {
        FUN_1400419b0(&local_378,pdVar9);
      }
      uStack_35c = 7;
      local_368 = CONCAT44(local_368._4_4_,1);
      FUN_1400462a0(&local_378,&local_368);
      if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_368);
      }
      uVar15 = FUN_140e4a740(&local_378);
      puVar11 = (undefined4 *)FUN_140e48e40(puVar6,uVar15);
      FUN_140e609c0(*(undefined8 *)*puVar6);
      pplVar21 = &local_270;
      uVar19 = CONCAT44(uVar13,DAT_1419fd6d8);
      puVar12 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_358,4,uVar19,pplVar21);
      if (puVar12 != puVar11) {
        local_338 = *puVar12;
        uStack_334 = puVar12[1];
        uStack_330 = puVar12[2];
        uStack_32c = puVar12[3];
        if ((1 << ((byte)puVar11[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar11);
        }
        FUN_140041b80(puVar11,&local_338);
      }
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      FUN_140e60910(2);
      local_308 = 0x44;
      plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03e98);
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_16c = 0;
      local_178 = 0x4049000000000000;
      pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03eb8);
      uStack_36c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      uStack_370 = *(undefined4 *)(pdVar9 + 1);
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) == 0) {
        local_378 = *pdVar9;
      }
      else {
        FUN_1400419b0(&local_378,pdVar9);
      }
      uStack_35c = 7;
      local_368 = CONCAT44(local_368._4_4_,1);
      FUN_1400462a0(&local_378,&local_368);
      if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_368);
      }
      iVar4 = FUN_140e4a740(&local_378);
      if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
        if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      FUN_140e87930(plVar5,DAT_141a03e78,0x80000000,&local_178);
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      local_308 = 0x45;
      plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03e98);
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_15c = 0;
      local_168 = 0x4049000000000000;
      pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03eb8);
      uStack_36c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      uStack_370 = *(undefined4 *)(pdVar9 + 1);
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) == 0) {
        local_378 = *pdVar9;
      }
      else {
        FUN_1400419b0(&local_378,pdVar9);
      }
      uStack_35c = 7;
      local_368 = CONCAT44(local_368._4_4_,1);
      FUN_1400462a0(&local_378,&local_368);
      if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_368);
      }
      iVar4 = FUN_140e4a740(&local_378);
      if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
        if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      FUN_140e87930(plVar5,DAT_141a03ec8,0x80000000,&local_168);
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      local_308 = 0x47;
      plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03e98);
      iVar4 = FUN_140e4a740(&local_348);
      if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
        if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      uVar22 = (ulonglong)pplVar21 & 0xffffffffffffff00;
      uVar19 = uVar19 & 0xffffffffffffff00;
      FUN_140e87440(plVar5,DAT_141a03e78,0x80000000,&local_2d8,uVar19,uVar22);
      uStack_36c = local_2cc;
      uStack_370 = local_2d0;
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) == 0) {
        local_378 = local_2d8;
      }
      else {
        FUN_1400419b0(&local_378,&local_2d8);
      }
      uStack_35c = 7;
      local_368 = CONCAT44(local_368._4_4_,10);
      FUN_1400460e0(&local_378,&local_368);
      if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_368);
      }
      local_338 = (undefined4)local_378;
      uStack_334 = local_378._4_4_;
      uStack_330 = uStack_370;
      uStack_32c = uStack_36c;
      if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_200);
      }
      FUN_140041b80(&local_200,&local_338);
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      local_308 = 0x48;
      local_31c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      local_320 = *(undefined4 *)(pdVar9 + 1);
      if ((1 << ((byte)local_31c & 0x1f) & 0x46U) == 0) {
        local_328 = *pdVar9;
      }
      else {
        FUN_1400419b0(&local_328,pdVar9);
      }
      uStack_35c = 7;
      local_368 = CONCAT44(local_368._4_4_,2);
      FUN_1400462a0(&local_328,&local_368);
      if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_368);
      }
      uStack_36c = local_31c;
      uStack_370 = local_320;
      if ((1 << ((byte)local_31c & 0x1f) & 0x46U) == 0) {
        local_378 = local_328;
      }
      else {
        FUN_1400419b0(&local_378,&local_328);
      }
      uStack_35c = 0;
      local_368 = 0x3fe0000000000000;
      FUN_140042560(&local_378,&local_368);
      if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_368);
      }
      local_338 = (undefined4)local_378;
      uStack_334 = local_378._4_4_;
      uStack_330 = uStack_370;
      uStack_32c = uStack_36c;
      if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_210);
      }
      FUN_140041b80(&local_210,&local_338);
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_328);
      }
      local_308 = 0x4a;
      plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03e98);
      pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03eb8);
      uStack_36c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      uStack_370 = *(undefined4 *)(pdVar9 + 1);
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) == 0) {
        local_378 = *pdVar9;
      }
      else {
        FUN_1400419b0(&local_378,pdVar9);
      }
      uStack_35c = 7;
      local_368 = CONCAT44(local_368._4_4_,1);
      FUN_1400462a0(&local_378,&local_368);
      if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_368);
      }
      iVar4 = FUN_140e4a740(&local_378);
      if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
        if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      uVar19 = uVar19 & 0xffffffffffffff00;
      FUN_140e87440(plVar5,DAT_141a03e78,0x80000000,&local_1a8,uVar19,uVar22 & 0xffffffffffffff00);
      uVar13 = (undefined4)(uVar19 >> 0x20);
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      uStack_36c = local_19c;
      uStack_370 = local_1a0;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
        local_378 = local_1a8;
      }
      else {
        FUN_1400419b0(&local_378,&local_1a8);
      }
      uStack_35c = 7;
      local_368 = CONCAT44(local_368._4_4_,0x1e);
      FUN_1400460e0(&local_378,&local_368);
      if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_368);
      }
      FUN_1400460e0(&local_240,&local_378);
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      local_308 = 0x4c;
      if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      local_358 = 0;
      local_350 = 0;
      local_34c = 5;
      plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03e98);
      local_278 = &local_240;
      uVar20 = CONCAT44(uVar13,DAT_141a08838);
      puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_358,1,uVar20,&local_278);
      uVar13 = (undefined4)((ulonglong)uVar20 >> 0x20);
      if (puVar6 != &local_1b8) {
        local_338 = *(undefined4 *)puVar6;
        uStack_334 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_330 = *(undefined4 *)(puVar6 + 1);
        uStack_32c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_338);
      }
      pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03eb8);
      uStack_36c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      uStack_370 = *(undefined4 *)(pdVar9 + 1);
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) == 0) {
        local_378 = *pdVar9;
      }
      else {
        FUN_1400419b0(&local_378,pdVar9);
      }
      uStack_35c = 7;
      local_368 = CONCAT44(local_368._4_4_,1);
      FUN_1400462a0(&local_378,&local_368);
      if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_368);
      }
      iVar4 = FUN_140e4a740(&local_378);
      if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
        if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      FUN_140e86c30(plVar5,DAT_1419fe0e8,0x80000000,&local_1b8);
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      local_308 = 0x4d;
      if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      local_358 = 0;
      local_350 = 0;
      local_34c = 5;
      plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03e98);
      local_278 = &local_240;
      puVar6 = (undefined8 *)
               FUN_140e634e0(param_1,param_2,&local_358,1,CONCAT44(uVar13,DAT_141a08838),&local_278)
      ;
      if (puVar6 != &local_1c8) {
        local_338 = *(undefined4 *)puVar6;
        uStack_334 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_330 = *(undefined4 *)(puVar6 + 1);
        uStack_32c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_338);
      }
      pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03eb8);
      uStack_36c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      uStack_370 = *(undefined4 *)(pdVar9 + 1);
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) == 0) {
        local_378 = *pdVar9;
      }
      else {
        FUN_1400419b0(&local_378,pdVar9);
      }
      uStack_35c = 7;
      local_368 = CONCAT44(local_368._4_4_,1);
      FUN_1400462a0(&local_378,&local_368);
      if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_368);
      }
      iVar4 = FUN_140e4a740(&local_378);
      if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
        if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      FUN_140e86c30(plVar5,DAT_1419fde18,0x80000000,&local_1c8);
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      if ((1 << ((byte)local_2f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_300);
      }
      if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
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
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_240);
      }
      if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_210);
      }
      if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_200);
      }
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      _eh_vector_destructor_iterator_(&local_2c8,0x10,5,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_318;
      return;
    }
    local_308 = 0x3a;
    plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03e98);
    iVar4 = FUN_140e4a740(&local_348);
    if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uVar19 = uVar19 & 0xffffffffffffff00;
    FUN_140e87440(plVar5,DAT_141a03e78,0x80000000,&local_2d8,uVar19,
                  (ulonglong)pplVar21 & 0xffffffffffffff00);
    uVar13 = (undefined4)(uVar19 >> 0x20);
    uStack_13c = local_2cc;
    uStack_140 = local_2d0;
    if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) == 0) {
      local_148 = local_2d8;
    }
    else {
      FUN_1400419b0(&local_148,&local_2d8);
    }
    local_cc = 7;
    local_d8[0] = 10;
    FUN_1400460e0(&local_148,local_d8);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    local_338 = (undefined4)local_148;
    uStack_334 = local_148._4_4_;
    uStack_330 = uStack_140;
    uStack_32c = uStack_13c;
    if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_200);
    }
    FUN_140041b80(&local_200,&local_338);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_308 = 0x3b;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03eb8);
    local_224 = *(undefined4 *)((longlong)puVar6 + 0xc);
    local_228 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)local_224 & 0x1f) & 0x46U) == 0) {
      local_230 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_230,puVar6);
    }
    local_bc = 7;
    local_c8[0] = 2;
    FUN_1400462a0(&local_230,local_c8);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    uStack_12c = local_224;
    uStack_130 = local_228;
    if ((1 << ((byte)local_224 & 0x1f) & 0x46U) == 0) {
      local_138 = local_230;
    }
    else {
      FUN_1400419b0(&local_138,&local_230);
    }
    local_ac = 0;
    local_b8 = 0x3fe0000000000000;
    FUN_140042560(&local_138,&local_b8);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_338 = (undefined4)local_138;
    uStack_334 = local_138._4_4_;
    uStack_330 = uStack_130;
    uStack_32c = uStack_12c;
    if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_210);
    }
    FUN_140041b80(&local_210,&local_338);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_230);
    }
    local_308 = 0x3d;
    if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    local_358 = 0;
    local_350 = 0;
    local_34c = 5;
    if ((1 << ((byte)local_2f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_300);
    }
    local_300 = 0;
    local_2f8 = 0;
    local_2f4 = 5;
    FUN_140e85f80(param_1,DAT_141a00d08,0,&local_1e8);
    local_338 = (undefined4)local_1e8;
    uStack_334 = local_1e8._4_4_;
    uStack_330 = uStack_1e0;
    uStack_32c = uStack_1dc;
    if ((1 << ((byte)_local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    FUN_140041b80(&local_2c8,&local_338);
    local_278 = &local_2c8;
    local_338 = (undefined4)local_1e8;
    uStack_334 = local_1e8._4_4_;
    uStack_330 = uStack_1e0;
    uStack_32c = uStack_1dc;
    if ((1 << ((byte)_local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    FUN_140041b80(&local_2b8,&local_338);
    local_270 = &local_2b8;
    local_31c = local_33c;
    local_320 = local_340;
    if ((1 << ((byte)local_33c & 0x1f) & 0x46U) == 0) {
      local_328 = local_348;
    }
    else {
      FUN_1400419b0(&local_328,&local_348);
    }
    FUN_1400462a0(&local_328,&local_210);
    uStack_36c = local_31c;
    uStack_370 = local_320;
    if ((1 << ((byte)local_31c & 0x1f) & 0x46U) == 0) {
      local_378 = local_328;
    }
    else {
      FUN_1400419b0(&local_378,&local_328);
    }
    FUN_140042560(&local_378,&local_200);
    uVar20 = CONCAT44(uVar13,DAT_141a00c98);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_300,1,uVar20,&local_270);
    uVar13 = (undefined4)((ulonglong)uVar20 >> 0x20);
    local_244 = *(undefined4 *)((longlong)puVar6 + 0xc);
    local_248 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)local_244 & 0x1f) & 0x46U) == 0) {
      local_250 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_250,puVar6);
    }
    uStack_ec = 0;
    local_f8 = 0x4000000000000000;
    FUN_140046500(&local_250,&local_f8);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    uVar20 = CONCAT44(uVar13,DAT_141a00e38);
    plVar5 = (longlong *)FUN_140e634e0(param_1,param_2,&local_358,1,uVar20,&local_278);
    uVar13 = (undefined4)((ulonglong)uVar20 >> 0x20);
    uStack_2dc = *(undefined4 *)((longlong)plVar5 + 0xc);
    uStack_2e0 = (undefined4)plVar5[1];
    if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) == 0) {
      local_2e8 = *plVar5;
    }
    else {
      FUN_1400419b0(&local_2e8,plVar5);
    }
    FUN_1400460e0(&local_2e8,&local_250);
    local_214 = uStack_2dc;
    local_218 = uStack_2e0;
    if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) == 0) {
      local_220 = local_2e8;
    }
    else {
      FUN_1400419b0(&local_220,&local_2e8);
    }
    uStack_35c = 7;
    local_368 = CONCAT44(local_368._4_4_,0x14);
    FUN_1400462a0(&local_220,&local_368);
    if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    uStack_11c = local_214;
    uStack_120 = local_218;
    if ((1 << ((byte)local_214 & 0x1f) & 0x46U) == 0) {
      local_128 = local_220;
    }
    else {
      FUN_1400419b0(&local_128,&local_220);
    }
    FUN_1400460e0(&local_128,&local_378);
    local_338 = (undefined4)local_128;
    uStack_334 = local_128._4_4_;
    uStack_330 = uStack_120;
    uStack_32c = uStack_11c;
    if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_240);
    }
    FUN_140041b80(&local_240,&local_338);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_220);
    }
    if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_250);
    }
    if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_378);
    }
    if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    local_308 = 0x3f;
    if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    local_358 = 0;
    local_350 = 0;
    local_34c = 5;
    local_278 = &local_240;
    uVar20 = CONCAT44(uVar13,DAT_1419fe728);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_358,1,uVar20,&local_278);
    uVar13 = (undefined4)((ulonglong)uVar20 >> 0x20);
    if (puVar6 != &local_198) {
      local_338 = *(undefined4 *)puVar6;
      uStack_334 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_330 = *(undefined4 *)(puVar6 + 1);
      uStack_32c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_338);
    }
    plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03e98);
    iVar4 = FUN_140e4a740(&local_348);
    if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    FUN_140e86c30(plVar5,DAT_1419fe0e8,0x80000000,&local_198);
    local_308 = 0x40;
    if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    local_358 = 0;
    local_350 = 0;
    local_34c = 5;
    local_278 = &local_240;
    pplVar21 = &local_278;
    uVar19 = CONCAT44(uVar13,DAT_1419fe728);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_358,1,uVar19,pplVar21);
    if (puVar6 != &local_188) {
      local_338 = *(undefined4 *)puVar6;
      uStack_334 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_330 = *(undefined4 *)(puVar6 + 1);
      uStack_32c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_338);
    }
    plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03e98);
    iVar4 = FUN_140e4a740(&local_348);
    if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    FUN_140e86c30(plVar5,DAT_1419fde18,0x80000000,&local_188);
    uVar16 = SUB84(local_348,0);
    uVar17 = (undefined4)((ulonglong)local_348 >> 0x20);
  } while( true );
}

