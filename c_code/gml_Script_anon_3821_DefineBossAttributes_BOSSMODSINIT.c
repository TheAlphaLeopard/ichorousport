// gml_Script_anon_3821_DefineBossAttributes_BOSSMODSINIT @ 0x1402383b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_3821_DefineBossAttributes_BOSSMODSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  double *pdVar8;
  double *pdVar9;
  longlong *plVar10;
  uint uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  uint local_res20;
  code *pcVar19;
  ulonglong uVar20;
  undefined1 **in_stack_fffffffffffffbd0;
  ulonglong uVar21;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  uint uStack_41c;
  undefined8 local_418;
  undefined4 local_410;
  undefined4 local_40c;
  double local_408;
  uint local_3fc;
  undefined8 local_3f8;
  undefined4 uStack_3f0;
  uint uStack_3ec;
  undefined8 local_3e8;
  undefined4 uStack_3e0;
  uint uStack_3dc;
  undefined8 local_3d8;
  char *local_3d0;
  undefined4 local_3c8;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined8 local_378;
  undefined4 local_36c;
  double local_368;
  uint local_35c;
  double local_358;
  uint local_34c;
  undefined8 local_348;
  undefined4 local_33c;
  undefined8 local_338;
  undefined4 local_32c;
  undefined8 local_328;
  undefined4 local_31c;
  undefined8 local_318;
  undefined4 local_30c;
  int local_308;
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  uint uStack_2ec;
  undefined8 local_2e8;
  undefined4 uStack_2e0;
  uint uStack_2dc;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  uint uStack_2cc;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  undefined8 local_2b8;
  undefined4 local_2ac;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  undefined1 *local_290;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  longlong *local_278;
  undefined4 local_26c;
  longlong *local_268;
  undefined4 local_25c;
  longlong *local_258;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_22c;
  longlong *local_228;
  undefined4 local_21c;
  longlong *local_218;
  undefined4 local_20c;
  longlong *local_208;
  undefined4 local_1fc;
  longlong *local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  longlong *local_1c8;
  undefined4 local_1bc;
  longlong *local_1b8;
  undefined4 local_1ac;
  longlong *local_1a8;
  undefined4 local_19c;
  longlong *local_198;
  undefined4 local_18c;
  undefined1 local_188 [16];
  longlong local_178;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
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
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  longlong local_f8;
  
  uVar11 = 0;
  local_res20 = 0;
  local_3d0 = "gml_Script_anon@2072@DefineBossAttributes@BOSSMODSINIT";
  local_3d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_3d8;
  local_3c8 = 0x5e;
  pcVar19 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_3b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_3dc = 0xffffff;
  local_3e8 = 0.0;
  uStack_3ec = 0xffffff;
  local_3f8 = 0.0;
  local_30c = 0xffffff;
  local_318 = 0;
  local_3fc = 0xffffff;
  local_408 = 0.0;
  local_34c = 0xffffff;
  local_358 = 0.0;
  local_35c = 0xffffff;
  local_368 = 0.0;
  local_36c = 0xffffff;
  local_378 = 0;
  local_31c = 0xffffff;
  local_328 = 0;
  uStack_27c = 0xffffff;
  local_288 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  local_32c = 0xffffff;
  local_338 = 0;
  local_33c = 0xffffff;
  local_348 = 0;
  local_40c = 0;
  local_418 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_3c8 = 0x60;
  if (param_4 < 1) {
    plVar10 = &DAT_1419df7b0;
  }
  else {
    plVar10 = (longlong *)*param_5;
  }
  if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = *(longlong **)(lVar1 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  iVar4 = FUN_140e63cb0(local_108,&local_res8,&local_res10,plVar10);
  if (0 < iVar4) {
    do {
      local_3c8 = 0x62;
      if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_418);
      }
      local_418 = 0;
      local_410 = 0;
      local_40c = 5;
      local_26c = 6;
      local_278 = local_res8;
      uVar21 = (ulonglong)in_stack_fffffffffffffbd0 & 0xffffffffffffff00;
      uVar20 = (ulonglong)pcVar19 & 0xffffffffffffff00;
      FUN_140e87440(&local_278,DAT_1419fe0e8,0x80000000,&local_3e8,uVar20,uVar21);
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      local_25c = 6;
      local_268 = local_res8;
      uVar20 = uVar20 & 0xffffffffffffff00;
      FUN_140e87440(&local_268,DAT_1419fe158,0x80000000,&local_3f8,uVar20,
                    uVar21 & 0xffffffffffffff00);
      uVar14 = (undefined4)(uVar20 >> 0x20);
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_428 = (undefined4)local_3e8;
      uStack_424 = local_3e8._4_4_;
      uStack_420 = uStack_3e0;
      uStack_41c = uStack_3dc;
      if ((1 << (local_3a8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_3a8);
      }
      FUN_140041b80(local_3a8,&local_428);
      local_2a0 = local_3a8;
      local_428 = (undefined4)local_3f8;
      uStack_424 = local_3f8._4_4_;
      uStack_420 = uStack_3f0;
      uStack_41c = uStack_3ec;
      if ((1 << (local_398[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_398);
      }
      FUN_140041b80(local_398,&local_428);
      local_298 = local_398;
      uStack_15c = 0xf;
      local_168 = 0x100000000000091;
      local_428 = 0x91;
      uStack_424 = 0x1000000;
      uStack_420 = uStack_160;
      uStack_41c = 0xf;
      if ((1 << (local_388[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_388);
      }
      FUN_140041b80(local_388,&local_428);
      local_290 = local_388;
      in_stack_fffffffffffffbd0 = &local_2a0;
      pcVar19 = (code *)CONCAT44(uVar14,DAT_141a124c8);
      puVar6 = (undefined8 *)
               FUN_140e634e0(local_res8,local_res10,&local_418,3,pcVar19,in_stack_fffffffffffffbd0);
      if (puVar6 != &local_318) {
        local_428 = *(undefined4 *)puVar6;
        uStack_424 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_420 = *(undefined4 *)(puVar6 + 1);
        uStack_41c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        FUN_140041b80(&local_318,&local_428);
      }
      local_3c8 = 99;
      cVar3 = FUN_140e491e0(&local_318);
      if (cVar3 == '\0') {
        local_3c8 = 99;
      }
      else {
        iVar4 = 2;
        do {
          iVar4 = iVar4 + -1;
          local_3c8 = 0x67;
          dVar17 = (double)FUN_140e794b0(0x9999999a,0);
          if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_408);
          }
          local_3fc = 0;
          local_3c8 = 0x68;
          local_408 = dVar17;
          if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_418);
          }
          local_418 = 0;
          local_410 = 0;
          local_40c = 5;
          local_18c = 6;
          local_198 = local_res8;
          uVar21 = (ulonglong)in_stack_fffffffffffffbd0 & 0xffffffffffffff00;
          uVar20 = (ulonglong)pcVar19 & 0xffffffffffffff00;
          FUN_140e87440(&local_198,DAT_1419fe0e8,0x80000000,&local_3e8,uVar20,uVar21);
          if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          local_1ac = 6;
          local_1b8 = local_res8;
          uVar20 = uVar20 & 0xffffffffffffff00;
          FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_3f8,uVar20,
                        uVar21 & 0xffffffffffffff00);
          uVar14 = (undefined4)(uVar20 >> 0x20);
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          uVar12 = FUN_140e794b0(0,0);
          uStack_2ec = uStack_3dc;
          uStack_2f0 = uStack_3e0;
          if ((1 << ((byte)uStack_3dc & 0x1f) & 0x46U) == 0) {
            local_2f8 = local_3e8;
          }
          else {
            FUN_1400419b0(&local_2f8,&local_3e8);
          }
          local_res20 = uVar11 | 1;
          FUN_140162c50(&local_2f8,uVar12);
          local_428 = (undefined4)local_2f8;
          uStack_424 = local_2f8._4_4_;
          uStack_420 = uStack_2f0;
          uStack_41c = uStack_2ec;
          if ((1 << (local_3b8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_3b8);
          }
          FUN_140041b80(local_3b8,&local_428);
          uVar2 = uVar11 & 0xfffffffe;
          local_res20 = uVar2;
          if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2f8);
          }
          local_2a8 = local_3b8;
          uVar12 = FUN_140e794b0(0,0);
          uStack_2dc = uStack_3ec;
          uStack_2e0 = uStack_3f0;
          if ((1 << ((byte)uStack_3ec & 0x1f) & 0x46U) == 0) {
            local_2e8 = local_3f8;
          }
          else {
            FUN_1400419b0(&local_2e8,&local_3f8);
          }
          local_res20 = uVar2 | 2;
          FUN_140162c50(&local_2e8,uVar12);
          local_428 = (undefined4)local_2e8;
          uStack_424 = local_2e8._4_4_;
          uStack_420 = uStack_2e0;
          uStack_41c = uStack_2dc;
          if ((1 << (local_3a8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_3a8);
          }
          FUN_140041b80(local_3a8,&local_428);
          uVar11 = uVar11 & 0xfffffffc;
          local_res20 = uVar11;
          if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2e8);
          }
          local_2a0 = local_3a8;
          local_428 = _DAT_141dcded8;
          uStack_424 = uRam0000000141dcdedc;
          uStack_420 = uRam0000000141dcdee0;
          uStack_41c = DAT_141dcdee4;
          if ((1 << (local_398[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_398);
          }
          FUN_140041b80(local_398,&local_428);
          local_298 = local_398;
          uStack_10c = 0xf;
          local_118 = 0x10000000000011a;
          local_428 = 0x11a;
          uStack_424 = 0x1000000;
          uStack_420 = uStack_110;
          uStack_41c = 0xf;
          if ((1 << (local_388[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_388);
          }
          FUN_140041b80(local_388,&local_428);
          local_290 = local_388;
          in_stack_fffffffffffffbd0 = &local_2a8;
          pcVar19 = (code *)CONCAT44(uVar14,DAT_141a0a7c8);
          uVar7 = FUN_140e634e0(local_res8,local_res10,&local_418,4,pcVar19,
                                in_stack_fffffffffffffbd0);
          iVar5 = FUN_140e63cb0(local_188,&local_res8,&local_res10,uVar7);
          if (0 < iVar5) {
            do {
              local_3c8 = 0x6a;
              pdVar8 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
              local_19c = 6;
              local_1a8 = local_res8;
              uVar21 = (ulonglong)in_stack_fffffffffffffbd0 & 0xffffffffffffff00;
              uVar20 = (ulonglong)pcVar19 & 0xffffffffffffff00;
              FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_3e8,uVar20,uVar21);
              if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1a8);
              }
              local_24c = 6;
              local_258 = local_res8;
              uVar21 = uVar21 & 0xffffffffffffff00;
              uVar20 = uVar20 & 0xffffffffffffff00;
              FUN_140e87440(&local_258,DAT_1419fe158,0x80000000,&local_3f8,uVar20,uVar21);
              if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_258);
              }
              local_23c = 6;
              local_248 = local_res10;
              uVar21 = uVar21 & 0xffffffffffffff00;
              uVar20 = uVar20 & 0xffffffffffffff00;
              FUN_140e87440(&local_248,DAT_1419fe0e8,0x80000000,&local_358,uVar20,uVar21);
              if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_248);
              }
              local_22c = 6;
              local_238 = local_res10;
              in_stack_fffffffffffffbd0 = (undefined1 **)(uVar21 & 0xffffffffffffff00);
              pcVar19 = (code *)(uVar20 & 0xffffffffffffff00);
              FUN_140e87440(&local_238,DAT_1419fe158,0x80000000,&local_368,pcVar19,
                            in_stack_fffffffffffffbd0);
              if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_238);
              }
              FUN_140e609c0(local_res8);
              dVar17 = local_368;
              if ((local_35c & 0xffffff) != 0) {
                dVar17 = (double)FUN_140e4b060(&local_368);
              }
              dVar18 = local_358;
              if ((local_34c & 0xffffff) != 0) {
                dVar18 = (double)FUN_140e4b060(&local_358);
              }
              dVar15 = local_3f8;
              if ((uStack_3ec & 0xffffff) != 0) {
                dVar15 = (double)FUN_140e4b060(&local_3f8);
              }
              dVar16 = local_3e8;
              if ((uStack_3dc & 0xffffff) != 0) {
                dVar16 = (double)FUN_140e4b060(&local_3e8);
              }
              fVar13 = (float)FUN_140e793d0((float)dVar16,(float)dVar15,(float)dVar18,(float)dVar17)
              ;
              if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pdVar8);
              }
              *(undefined4 *)((longlong)pdVar8 + 0xc) = 0;
              *pdVar8 = (double)(fVar13 + 180.0);
              FUN_140e60910(1);
              local_3c8 = 0x6c;
              pdVar8 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
              pdVar9 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
              if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
                dVar17 = *pdVar8;
              }
              else {
                dVar17 = (double)FUN_140e4b060(pdVar8);
              }
              dVar18 = local_408;
              if ((local_3fc & 0xffffff) != 0) {
                dVar18 = (double)FUN_140e4b060(&local_408);
              }
              fVar13 = (float)FUN_140e78f90((float)dVar18,(float)dVar17);
              if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pdVar9);
              }
              *(undefined4 *)((longlong)pdVar9 + 0xc) = 0;
              *pdVar9 = (double)fVar13;
              local_3c8 = 0x6d;
              pdVar9 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
              if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
                dVar17 = *pdVar8;
              }
              else {
                dVar17 = (double)FUN_140e4b060(pdVar8);
              }
              dVar18 = local_408;
              if ((local_3fc & 0xffffff) != 0) {
                dVar18 = (double)FUN_140e4b060(&local_408);
              }
              fVar13 = (float)FUN_140e79010((float)dVar18,(float)dVar17);
              if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pdVar9);
              }
              *(undefined4 *)((longlong)pdVar9 + 0xc) = 0;
              *pdVar9 = (double)fVar13;
              local_3c8 = 0x6f;
              uStack_14c = 0xf;
              local_158 = 0x10000010000014a;
              local_428 = 0x14a;
              uStack_424 = 0x1000001;
              uStack_420 = uStack_150;
              uStack_41c = 0xf;
              if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_378);
              }
              FUN_140041b80(&local_378,&local_428);
              FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_378);
              cVar3 = FUN_140e643f0(local_188,&local_res8,&local_res10);
            } while (cVar3 != '\0');
          }
          FUN_140e63970(local_188,&local_res8,&local_res10);
          if (local_178 != 0) {
            FUN_140e4cd60();
          }
        } while (0 < iVar4);
        iVar4 = 5;
        do {
          local_3c8 = 0x77;
          local_308 = iVar4 + -1;
          dVar17 = (double)FUN_140e794b0(0,0);
          if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_408);
          }
          local_3fc = 0;
          local_3c8 = 0x78;
          local_408 = dVar17;
          if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_418);
          }
          local_418 = 0;
          local_410 = 0;
          local_40c = 5;
          local_21c = 6;
          local_228 = local_res8;
          uVar21 = (ulonglong)in_stack_fffffffffffffbd0 & 0xffffffffffffff00;
          uVar20 = (ulonglong)pcVar19 & 0xffffffffffffff00;
          FUN_140e87440(&local_228,DAT_1419fe0e8,0x80000000,&local_3e8,uVar20,uVar21);
          if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          local_20c = 6;
          local_218 = local_res8;
          uVar20 = uVar20 & 0xffffffffffffff00;
          FUN_140e87440(&local_218,DAT_1419fe158,0x80000000,&local_3f8,uVar20,
                        uVar21 & 0xffffffffffffff00);
          uVar14 = (undefined4)(uVar20 >> 0x20);
          if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_218);
          }
          uVar12 = FUN_140e794b0(0,0);
          uStack_2cc = uStack_3dc;
          uStack_2d0 = uStack_3e0;
          if ((1 << ((byte)uStack_3dc & 0x1f) & 0x46U) == 0) {
            local_2d8 = local_3e8;
          }
          else {
            FUN_1400419b0(&local_2d8,&local_3e8);
          }
          local_res20 = uVar11 | 4;
          FUN_140162c50(&local_2d8,uVar12);
          local_428 = (undefined4)local_2d8;
          uStack_424 = local_2d8._4_4_;
          uStack_420 = uStack_2d0;
          uStack_41c = uStack_2cc;
          if ((1 << (local_3b8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_3b8);
          }
          FUN_140041b80(local_3b8,&local_428);
          uVar2 = uVar11 & 0xfffffffb;
          local_res20 = uVar2;
          if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          local_2a8 = local_3b8;
          uVar12 = FUN_140e794b0(0,0);
          uStack_2bc = uStack_3ec;
          uStack_2c0 = uStack_3f0;
          if ((1 << ((byte)uStack_3ec & 0x1f) & 0x46U) == 0) {
            local_2c8 = local_3f8;
          }
          else {
            FUN_1400419b0(&local_2c8,&local_3f8);
          }
          local_res20 = uVar2 | 8;
          FUN_140162c50(&local_2c8,uVar12);
          local_428 = (undefined4)local_2c8;
          uStack_424 = local_2c8._4_4_;
          uStack_420 = uStack_2c0;
          uStack_41c = uStack_2bc;
          if ((1 << (local_3a8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_3a8);
          }
          FUN_140041b80(local_3a8,&local_428);
          uVar11 = uVar11 & 0xfffffff3;
          local_res20 = uVar11;
          if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2c8);
          }
          local_2a0 = local_3a8;
          local_428 = _DAT_141dcded8;
          uStack_424 = uRam0000000141dcdedc;
          uStack_420 = uRam0000000141dcdee0;
          uStack_41c = DAT_141dcdee4;
          if ((1 << (local_398[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_398);
          }
          FUN_140041b80(local_398,&local_428);
          local_298 = local_398;
          uStack_13c = 0xf;
          local_148 = 0x100000000000017;
          local_428 = 0x17;
          uStack_424 = 0x1000000;
          uStack_420 = uStack_140;
          uStack_41c = 0xf;
          if ((1 << (local_388[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_388);
          }
          FUN_140041b80(local_388,&local_428);
          local_290 = local_388;
          in_stack_fffffffffffffbd0 = &local_2a8;
          pcVar19 = (code *)CONCAT44(uVar14,DAT_141a0a7c8);
          uVar7 = FUN_140e634e0(local_res8,local_res10,&local_418,4,pcVar19,
                                in_stack_fffffffffffffbd0);
          iVar5 = FUN_140e63cb0(local_188,&local_res8,&local_res10,uVar7);
          iVar4 = iVar4 + -1;
          if (0 < iVar5) {
            do {
              local_3c8 = 0x7a;
              pdVar8 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
              local_1fc = 6;
              local_208 = local_res8;
              uVar21 = (ulonglong)in_stack_fffffffffffffbd0 & 0xffffffffffffff00;
              uVar20 = (ulonglong)pcVar19 & 0xffffffffffffff00;
              FUN_140e87440(&local_208,DAT_1419fe0e8,0x80000000,&local_3e8,uVar20,uVar21);
              if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_208);
              }
              local_1ec = 6;
              local_1f8 = local_res8;
              uVar21 = uVar21 & 0xffffffffffffff00;
              uVar20 = uVar20 & 0xffffffffffffff00;
              FUN_140e87440(&local_1f8,DAT_1419fe158,0x80000000,&local_3f8,uVar20,uVar21);
              if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1f8);
              }
              local_1dc = 6;
              local_1e8 = local_res10;
              uVar21 = uVar21 & 0xffffffffffffff00;
              uVar20 = uVar20 & 0xffffffffffffff00;
              FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_358,uVar20,uVar21);
              if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1e8);
              }
              local_1cc = 6;
              local_1d8 = local_res10;
              uVar21 = uVar21 & 0xffffffffffffff00;
              uVar20 = uVar20 & 0xffffffffffffff00;
              FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_368,uVar20,uVar21);
              if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1d8);
              }
              FUN_140e609c0(local_res8);
              dVar17 = local_368;
              if ((local_35c & 0xffffff) != 0) {
                dVar17 = (double)FUN_140e4b060(&local_368);
              }
              dVar18 = local_358;
              if ((local_34c & 0xffffff) != 0) {
                dVar18 = (double)FUN_140e4b060(&local_358);
              }
              dVar15 = local_3f8;
              if ((uStack_3ec & 0xffffff) != 0) {
                dVar15 = (double)FUN_140e4b060(&local_3f8);
              }
              dVar16 = local_3e8;
              if ((uStack_3dc & 0xffffff) != 0) {
                dVar16 = (double)FUN_140e4b060(&local_3e8);
              }
              fVar13 = (float)FUN_140e793d0((float)dVar16,(float)dVar15,(float)dVar18,(float)dVar17)
              ;
              if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pdVar8);
              }
              *(undefined4 *)((longlong)pdVar8 + 0xc) = 0;
              *pdVar8 = (double)(fVar13 + 180.0);
              FUN_140e60910(1);
              local_3c8 = 0x7c;
              pdVar8 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
              pdVar9 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
              if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
                dVar17 = *pdVar8;
              }
              else {
                dVar17 = (double)FUN_140e4b060(pdVar8);
              }
              dVar18 = local_408;
              if ((local_3fc & 0xffffff) != 0) {
                dVar18 = (double)FUN_140e4b060(&local_408);
              }
              fVar13 = (float)FUN_140e78f90((float)dVar18,(float)dVar17);
              if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pdVar9);
              }
              *(undefined4 *)((longlong)pdVar9 + 0xc) = 0;
              *pdVar9 = (double)fVar13;
              local_3c8 = 0x7d;
              pdVar9 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
              if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
                dVar17 = *pdVar8;
              }
              else {
                dVar17 = (double)FUN_140e4b060(pdVar8);
              }
              dVar18 = local_408;
              if ((local_3fc & 0xffffff) != 0) {
                dVar18 = (double)FUN_140e4b060(&local_408);
              }
              fVar13 = (float)FUN_140e79010((float)dVar18,(float)dVar17);
              if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pdVar9);
              }
              *(undefined4 *)((longlong)pdVar9 + 0xc) = 0;
              *pdVar9 = (double)fVar13;
              local_3c8 = 0x7f;
              uStack_12c = 0xf;
              local_138 = 0x100000100000182;
              local_428 = 0x182;
              uStack_424 = 0x1000001;
              uStack_420 = uStack_130;
              uStack_41c = 0xf;
              if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_378);
              }
              FUN_140041b80(&local_378,&local_428);
              FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_378);
              local_3c8 = 0x80;
              uVar7 = FUN_140e794b0(0,0);
              if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_328);
              }
              local_31c = 0;
              local_328 = uVar7;
              FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_328);
              local_3c8 = 0x81;
              local_1bc = 6;
              local_1c8 = local_res8;
              uVar20 = uVar20 & 0xffffffffffffff00;
              FUN_140e87440(&local_1c8,DAT_141a0f7f8,0x80000000,&local_288,uVar20,
                            uVar21 & 0xffffffffffffff00);
              uVar14 = (undefined4)(uVar20 >> 0x20);
              if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1c8);
              }
              local_428 = (undefined4)local_288;
              uStack_424 = local_288._4_4_;
              uStack_420 = uStack_280;
              uStack_41c = uStack_27c;
              if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2b8);
              }
              FUN_140041b80(&local_2b8,&local_428);
              FUN_140e86fa0(local_res8,DAT_141a0f938,0x80000000,&local_2b8);
              local_3c8 = 0x82;
              if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_338);
              }
              local_32c = 0;
              local_338 = 0;
              FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_338);
              local_3c8 = 0x83;
              if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_418);
              }
              local_418 = 0;
              local_410 = 0;
              local_40c = 5;
              uStack_11c = 0xf;
              local_128 = 0x100000100000182;
              local_428 = 0x182;
              uStack_424 = 0x1000001;
              uStack_420 = uStack_120;
              uStack_41c = 0xf;
              if ((1 << (local_3b8[0xc] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_3b8);
              }
              FUN_140041b80(local_3b8,&local_428);
              local_2a8 = local_3b8;
              in_stack_fffffffffffffbd0 = &local_2a8;
              pcVar19 = (code *)CONCAT44(uVar14,DAT_141a049b8);
              uVar7 = FUN_140e634e0(local_res8,local_res10,&local_418,1,pcVar19,
                                    in_stack_fffffffffffffbd0);
              uVar7 = FUN_140e4a8b0(uVar7);
              uVar7 = FUN_140e78f00(uVar7);
              if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_348);
              }
              local_33c = 0;
              local_348 = uVar7;
              FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_348);
              local_3c8 = 0x85;
              puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f310);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar6);
              }
              *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
              *puVar6 = 0x3fb999999999999a;
              local_3c8 = 0x86;
              puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
              pdVar8 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eea0);
              FUN_140e609c0(local_res8);
              if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
                uVar14 = (undefined4)*puVar6;
              }
              else {
                uVar14 = FUN_140e4b060(puVar6);
              }
              dVar17 = (double)FUN_140e79500(uVar14);
              if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pdVar8);
              }
              *(undefined4 *)((longlong)pdVar8 + 0xc) = 0;
              *pdVar8 = dVar17 * 5.0;
              FUN_140e60910(1);
              local_3c8 = 0x87;
              puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f5a0);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar6);
              }
              *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
              *puVar6 = 0x3fa1eb851eb851ec;
              cVar3 = FUN_140e643f0(local_188,&local_res8,&local_res10);
            } while (cVar3 != '\0');
            uVar11 = local_res20;
            iVar4 = local_308;
          }
          FUN_140e63970(local_188,&local_res8,&local_res10);
          if (local_178 != 0) {
            FUN_140e4cd60();
          }
        } while (0 < iVar4);
      }
      cVar3 = FUN_140e643f0(local_108,&local_res8,&local_res10);
    } while (cVar3 != '\0');
    param_3 = local_res18;
  }
  FUN_140e63970(local_108,&local_res8,&local_res10);
  if (local_f8 != 0) {
    FUN_140e4cd60();
    local_f8 = 0;
  }
  if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_418);
  }
  if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_408);
  }
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  if ((1 << ((byte)uStack_3ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3f8);
  }
  if ((1 << ((byte)uStack_3dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3e8);
  }
  _eh_vector_destructor_iterator_(local_3b8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_3d8;
  return param_3;
}

