// gml_Object_oBossUi_Step_0 @ 0x1408443c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Object_oBossUi_Step_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  double *pdVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 **ppuVar17;
  ulonglong uVar18;
  ulonglong in_stack_fffffffffffffb40;
  undefined1 **ppuVar19;
  ulonglong uVar20;
  double local_4a8;
  double dStack_4a0;
  undefined8 local_498;
  undefined4 local_490;
  undefined4 local_48c;
  double local_488;
  uint local_47c;
  undefined8 local_478;
  undefined4 local_470;
  undefined4 local_46c;
  double local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  char *local_450;
  undefined4 local_448;
  double local_438;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  double local_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  double local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  double local_408;
  undefined4 local_3fc;
  double local_3f8;
  undefined4 local_3ec;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined4 local_3dc;
  double local_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  double local_3c8;
  undefined4 local_3bc;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined4 local_3ac;
  double local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  undefined4 local_38c;
  double local_388;
  undefined4 local_380;
  undefined4 local_37c;
  double local_378;
  undefined4 local_36c;
  undefined8 local_368;
  undefined4 local_35c;
  undefined8 local_358;
  undefined4 local_34c;
  double local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 local_338;
  undefined4 local_330;
  undefined4 local_32c;
  double local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 local_30c;
  double local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8 [2];
  undefined1 local_2e8 [16];
  double local_2d8 [4];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  double local_298 [2];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  double local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 *local_198;
  undefined1 *local_190;
  double *local_188;
  double *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  double *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  double local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  
  local_450 = "gml_Script_anon@341@gml_Object_oBossUi_Create_0";
  local_458 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_458;
  local_448 = 0x16;
  _eh_vector_constructor_iterator_(local_2f8,0x10,0x12,FUN_1400424d0,FUN_140041b30);
  local_3dc = 0xffffff;
  local_3e8 = 0;
  local_47c = 0xffffff;
  local_488 = 0.0;
  uStack_33c = 0xffffff;
  local_348 = 0.0;
  local_38c = 0xffffff;
  local_398 = 0;
  local_3bc = 0xffffff;
  local_3c8 = 0.0;
  local_34c = 0xffffff;
  local_358 = 0;
  local_35c = 0xffffff;
  local_368 = 0;
  local_36c = 0xffffff;
  local_378 = 0.0;
  uStack_3cc = 0xffffff;
  local_3d8 = 0.0;
  local_3ec = 0xffffff;
  local_3f8 = 0.0;
  uStack_39c = 0xffffff;
  local_3a8 = 0.0;
  local_3fc = 0xffffff;
  local_408 = 0.0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_c8 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_48c = 0;
  uVar15 = 0;
  uVar16 = 0;
  local_498 = 0;
  local_46c = 0;
  local_478 = 0;
  local_3ac = 0;
  local_3b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_448 = 0x18;
  thunk_FUN_141039d20(0);
  local_448 = 0x19;
  thunk_FUN_141039d50(1);
  local_448 = 0x1a;
  if ((1 << ((byte)local_48c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_498);
  }
  local_498 = 0;
  local_490 = 0;
  local_48c = 5;
  local_468 = _DAT_141dd6fb8;
  uStack_460 = (double)uRam0000000141dd6fc0;
  if ((1 << ((byte)local_2f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2f8);
  }
  FUN_140041b80(local_2f8,&local_468);
  local_198 = local_2f8;
  ppuVar17 = &local_198;
  pdVar7 = (double *)gml_Script_anon_6431_INIT(param_1,param_2,&local_498,1,ppuVar17);
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar14 = *pdVar7;
  }
  else {
    dVar14 = (double)FUN_140e4b060(pdVar7);
  }
  thunk_FUN_141039cb0((int)dVar14);
  local_448 = 0x1b;
  plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09ee8);
  if (((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) && (*(int *)(*plVar8 + 0x24) != 0)
     ) {
    local_448 = 0x1d;
    if ((1 << ((byte)local_3dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_3e8);
    }
    local_3dc = 0;
    local_3e8 = 0;
    local_448 = 0x1e;
    if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_488);
    }
    local_47c = 0;
    local_488 = 0.0;
    bVar2 = true;
    do {
      if (!bVar2) {
        local_448 = 0x1e;
        uVar4 = local_47c & 0xffffff;
        if (uVar4 != 0) {
          if (uVar4 != 1) {
            if (uVar4 == 7) {
              local_488 = (double)CONCAT44(local_488._4_4_,local_488._0_4_ + 1);
            }
            else if (uVar4 == 10) {
              local_488 = (double)((longlong)local_488 + 1);
            }
            else {
              if (uVar4 == 0xd) goto LAB_140844746;
              FUN_140042910(&DAT_14172c3d8,&local_488,&local_488);
            }
            goto LAB_140844755;
          }
          local_488 = (double)FUN_140e4b060(&local_488);
LAB_140844746:
          local_47c = 0;
        }
        local_488 = local_488 + 1.0;
      }
LAB_140844755:
      bVar2 = false;
      plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09ee8);
      iVar5 = 0;
      if ((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) {
        iVar5 = *(int *)(*plVar8 + 0x24);
      }
      uStack_41c = 0;
      local_428 = (double)iVar5;
      iVar5 = FUN_140e851f0(&local_488,&local_428,DAT_141955260,1);
      if ((1 << ((byte)uStack_41c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_428);
      }
      if (iVar5 == -2 || -1 < iVar5) goto LAB_140844927;
      local_448 = 0x20;
      if ((1 << ((byte)local_48c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_498);
      }
      local_498 = 0;
      local_490 = 0;
      local_48c = 5;
      plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09ee8);
      iVar5 = FUN_140e4a740(&local_488);
      if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      in_stack_fffffffffffffb40 = in_stack_fffffffffffffb40 & 0xffffffffffffff00;
      FUN_140e87440(plVar8,DAT_141a09ed8,0x80000000,&local_348,
                    (ulonglong)ppuVar17 & 0xffffffffffffff00,in_stack_fffffffffffffb40);
      uStack_460 = (double)CONCAT44(uStack_33c,uStack_340);
      local_468 = local_348;
      if ((1 << ((byte)local_2f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_2f8);
      }
      FUN_140041b80(local_2f8,&local_468);
      local_198 = local_2f8;
      ppuVar17 = &local_198;
      uVar9 = gml_Script_bm_draw_text_outline(param_1,param_2,&local_498,1,ppuVar17);
      FUN_1400460e0(&local_3e8,uVar9);
    } while( true );
  }
  local_448 = 0x1b;
LAB_1408468a0:
  if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3b8);
  }
  if ((1 << ((byte)local_46c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_478);
  }
  if ((1 << ((byte)local_48c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_498);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_408);
  }
  if ((1 << ((byte)uStack_39c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3a8);
  }
  if ((1 << ((byte)local_3ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3f8);
  }
  if ((1 << ((byte)uStack_3cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3d8);
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
  if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3c8);
  }
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_488);
  }
  if ((1 << ((byte)local_3dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3e8);
  }
  _eh_vector_destructor_iterator_(local_2f8,0x10,0x12,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_458;
  return param_3;
LAB_140844927:
  local_448 = 0x23;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_38c = 0;
  local_398 = 0;
  local_448 = 0x24;
  if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3c8);
  }
  local_3bc = 0;
  local_3c8 = 0.08;
  local_448 = 0x25;
  if ((1 << ((byte)local_48c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_498);
  }
  local_498 = 0;
  local_490 = 0;
  local_48c = 5;
  if ((1 << ((byte)local_46c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_478);
  }
  local_478 = 0;
  local_470 = 0;
  local_46c = 5;
  local_468 = _DAT_141dd6fa8;
  uStack_460 = (double)uRam0000000141dd6fb0;
  if ((1 << ((byte)local_2f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2f8);
  }
  FUN_140041b80(local_2f8,&local_468);
  local_198 = local_2f8;
  local_468 = _DAT_141dd6f98;
  uStack_460 = (double)uRam0000000141dd6fa0;
  if ((1 << (local_2e8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2e8);
  }
  FUN_140041b80(local_2e8,&local_468);
  local_190 = local_2e8;
  uVar9 = gml_Script_bm_draw_text_outline(param_1,param_2,&local_478,1,&local_190);
  ppuVar17 = &local_198;
  pdVar7 = (double *)gml_Script_bm_draw_text_outline(param_1,param_2,&local_498,1,ppuVar17);
  uStack_42c = *(undefined4 *)((longlong)pdVar7 + 0xc);
  uStack_430 = *(undefined4 *)(pdVar7 + 1);
  if ((1 << ((byte)uStack_42c & 0x1f) & 0x46U) == 0) {
    local_438 = *pdVar7;
  }
  else {
    FUN_1400419b0(&local_438,pdVar7);
  }
  FUN_1400462a0(&local_438,uVar9);
  uStack_460 = (double)CONCAT44(uStack_42c,uStack_430);
  local_468 = local_438;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  FUN_140041b80(&local_358,&local_468);
  if ((1 << ((byte)uStack_42c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_438);
  }
  local_448 = 0x27;
  plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09eb8);
  if (((*(int *)((longlong)plVar10 + 0xc) == 2) && (*plVar10 != 0)) &&
     (*(int *)(*plVar10 + 0x24) != 0)) {
    pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09f28);
    uStack_40c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    uStack_410 = *(undefined4 *)(pdVar7 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_418 = *pdVar7;
    }
    else {
      FUN_1400419b0(&local_418,pdVar7);
    }
    pdVar7 = &local_418;
    uVar4 = 10;
  }
  else {
    uStack_41c = 0;
    local_428 = 1.0;
    pdVar7 = &local_428;
    uVar4 = 1;
  }
  uVar3 = uStack_41c;
  local_468 = *pdVar7;
  uStack_460 = pdVar7[1];
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  FUN_140041b80(&local_368,&local_468);
  if (((uVar4 & 2) != 0) &&
     (uVar4 = uVar4 & 0xfffffffd, (1 << ((byte)uStack_40c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_418);
  }
  if (((uVar4 & 1) != 0) && (uVar4 = uVar4 & 0xfffffffe, (1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0))
  {
    FUN_140041a50(&local_428);
  }
  local_448 = 0x29;
  if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_488);
  }
  local_47c = 0;
  local_488 = 0.0;
  bVar2 = true;
  do {
    plVar10 = (longlong *)0x0;
    if (!bVar2) {
      local_448 = 0x29;
      uVar6 = local_47c & 0xffffff;
      if ((local_47c & 0xffffff) == 0) {
LAB_140844d06:
        local_488 = (double)CONCAT44(uVar16,uVar15) + 1.0;
      }
      else if (uVar6 == 1) {
        local_488 = (double)FUN_140e4b060(&local_488);
        local_488 = local_488 + 1.0;
        local_47c = 0;
      }
      else if (uVar6 == 7) {
        local_488 = (double)CONCAT44(local_488._4_4_,local_488._0_4_ + 1);
      }
      else if (uVar6 == 10) {
        local_488 = (double)((longlong)local_488 + 1);
      }
      else {
        if (uVar6 == 0xd) {
          local_47c = 0;
          goto LAB_140844d06;
        }
        FUN_140042910(&DAT_14172c3d8,&local_488,&local_488);
      }
    }
    iVar5 = FUN_140e851f0(&local_488,&local_368,DAT_141955260,1);
    if ((iVar5 == -2) || (0 < iVar5)) break;
    local_448 = 0x2b;
    plVar11 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09ee8);
    iVar5 = FUN_140e4a740(&local_488);
    if (((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar11, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar11 = plVar10;
      }
      else {
        plVar11 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uVar18 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
    FUN_140e87440(plVar11,DAT_141a09ed8,0x80000000,&local_348,uVar18,
                  in_stack_fffffffffffffb40 & 0xffffffffffffff00);
    uVar15 = (undefined4)(uVar18 >> 0x20);
    dStack_4a0 = (double)CONCAT44(uStack_33c,uStack_340);
    local_4a8 = local_348;
    if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_378);
    }
    FUN_140041b80(&local_378,&local_4a8);
    local_448 = 0x2d;
    if ((1 << ((byte)local_48c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_498);
    }
    local_498 = 0;
    local_490 = 0;
    local_48c = 5;
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09f48);
    local_4a8 = _DAT_141dc6a70;
    dStack_4a0 = dRam0000000141dc6a78;
    if ((1 << ((byte)local_2f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2f8);
    }
    FUN_140041b80(local_2f8,&local_4a8);
    local_198 = local_2f8;
    ppuVar17 = &local_198;
    uVar18 = CONCAT44(uVar15,DAT_141a0a0d8);
    puVar12 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_498,1,uVar18,ppuVar17);
    local_32c = *(undefined4 *)((longlong)puVar12 + 0xc);
    local_330 = *(undefined4 *)(puVar12 + 1);
    if ((1 << ((byte)local_32c & 0x1f) & 0x46U) == 0) {
      local_338 = *puVar12;
    }
    else {
      FUN_1400419b0(&local_338,puVar12);
    }
    uVar6 = uVar4 | 0x10;
    local_fc = 0;
    local_108 = 0x3ff8000000000000;
    FUN_140042560(&local_338,&local_108);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    iVar5 = FUN_140e851f0(uVar9,&local_338,DAT_141955260,1,uVar18,ppuVar17,uVar6);
    if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_338);
    }
    if (iVar5 == -2 || -1 < iVar5) {
      local_448 = 0x35;
      if ((1 << ((byte)local_48c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_498);
      }
      local_498 = 0;
      local_490 = 0;
      local_48c = 5;
      plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09ee8);
      iVar5 = FUN_140e4a740(&local_488);
      if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0))
      {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar11 = plVar10;
      }
      uVar18 = uVar18 & 0xffffffffffffff00;
      FUN_140e87440(plVar11,DAT_141a0a718,0x80000000,&local_3d8,uVar18,
                    (ulonglong)ppuVar17 & 0xffffffffffffff00);
      uVar15 = (undefined4)(uVar18 >> 0x20);
      dStack_4a0 = (double)CONCAT44(uStack_3cc,uStack_3d0);
      local_4a8 = local_3d8;
      if ((1 << ((byte)local_2f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_2f8);
      }
      FUN_140041b80(local_2f8,&local_4a8);
      local_198 = local_2f8;
      local_4a8 = _DAT_141dc6a70;
      dStack_4a0 = dRam0000000141dc6a78;
      if ((1 << (local_2e8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_2e8);
      }
      FUN_140041b80(local_2e8,&local_4a8);
      local_190 = local_2e8;
      local_188 = &local_3c8;
      ppuVar17 = &local_198;
      uVar18 = CONCAT44(uVar15,DAT_141a00c58);
      pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_498,3,uVar18,ppuVar17);
      if (pdVar7 != &local_3f8) {
        local_4a8 = *pdVar7;
        dStack_4a0 = pdVar7[1];
        if ((1 << ((byte)local_3ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3f8);
        }
        FUN_140041b80(&local_3f8,&local_4a8);
      }
      iVar5 = FUN_140e4a740(&local_488);
      if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0))
      {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      FUN_140e87930(plVar10,DAT_141a0a718,0x80000000,&local_3f8);
      local_448 = 0x36;
      if ((1 << ((byte)local_48c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_498);
      }
      local_498 = 0;
      local_490 = 0;
      local_48c = 5;
      plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09ee8);
      iVar5 = FUN_140e4a740(&local_488);
      if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0))
      {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar11 = plVar10;
      }
      uVar18 = uVar18 & 0xffffffffffffff00;
      FUN_140e87440(plVar11,DAT_141a09ec8,0x80000000,&local_3a8,uVar18,
                    (ulonglong)ppuVar17 & 0xffffffffffffff00);
      uVar15 = (undefined4)(uVar18 >> 0x20);
      dStack_4a0 = (double)CONCAT44(uStack_39c,uStack_3a0);
      local_4a8 = local_3a8;
      if ((1 << ((byte)local_2f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_2f8);
      }
      FUN_140041b80(local_2f8,&local_4a8);
      local_198 = local_2f8;
      local_4a8 = _DAT_1419e8e70;
      dStack_4a0 = dRam00000001419e8e78;
      if ((1 << (local_2e8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_2e8);
      }
      FUN_140041b80(local_2e8,&local_4a8);
      local_190 = local_2e8;
      local_188 = &local_3c8;
      ppuVar17 = &local_198;
      uVar18 = CONCAT44(uVar15,DAT_141a00c58);
      pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_498,3,uVar18,ppuVar17);
      if (pdVar7 != &local_408) {
        local_4a8 = *pdVar7;
        dStack_4a0 = pdVar7[1];
        if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_408);
        }
        FUN_140041b80(&local_408,&local_4a8);
      }
      iVar5 = FUN_140e4a740(&local_488);
      if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0))
      {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      FUN_140e87930(plVar10,DAT_141a09ec8,0x80000000,&local_408);
      local_448 = 0x38;
      if ((1 << ((byte)local_48c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_498);
      }
      local_498 = 0;
      local_490 = 0;
      local_48c = 5;
      uVar13 = (**(code **)(*param_1 + 8))(param_1,DAT_141a08c58);
      plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09ee8);
      if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0))
      {
        if (*(int *)(lVar1 + 0x24) < 1) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = *(longlong **)(lVar1 + 8);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar11 = plVar10;
      }
      uVar20 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
      uVar18 = uVar18 & 0xffffffffffffff00;
      FUN_140e87440(plVar11,DAT_141a09ec8,0x80000000,&local_1b8,uVar18,uVar20);
      if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0))
      {
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
      FUN_140e87440(plVar10,DAT_141a0a718,0x80000000,&local_1c8,uVar18 & 0xffffffffffffff00,
                    uVar20 & 0xffffffffffffff00);
      local_4a8 = _DAT_141dc6a70;
      dStack_4a0 = dRam0000000141dc6a78;
      if ((1 << ((byte)local_2f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_2f8);
      }
      FUN_140041b80(local_2f8,&local_4a8);
      local_198 = local_2f8;
      uStack_19c = 0;
      local_1a8 = 10.0;
      FUN_1400460e0(&local_1a8,&local_1b8);
      dStack_4a0 = (double)CONCAT44(uStack_19c,uStack_1a0);
      local_4a8 = local_1a8;
      if ((1 << (local_2e8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_2e8);
      }
      FUN_140041b80(local_2e8,&local_4a8);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_190 = local_2e8;
      uStack_41c = 0;
      local_428 = 1.0;
      FUN_1400462a0(&local_428,&local_1c8);
      dStack_4a0 = (double)CONCAT44(uStack_41c,uStack_420);
      local_4a8 = local_428;
      if ((1 << ((byte)local_2d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_2d8);
      }
      FUN_140041b80(local_2d8,&local_4a8);
      uVar6 = uVar4;
      if ((1 << ((byte)uStack_41c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_428);
      }
      local_188 = local_2d8;
      ppuVar17 = &local_198;
      FUN_140e63610(param_1,param_2,&local_498,3,uVar13,ppuVar17,uVar6);
    }
    else {
      local_448 = 0x2f;
      if ((1 << ((byte)local_46c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_478);
      }
      local_478 = 0;
      local_470 = 0;
      local_46c = 5;
      plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09ee8);
      iVar5 = FUN_140e4a740(&local_488);
      if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0))
      {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar11 = plVar10;
      }
      uVar18 = uVar18 & 0xffffffffffffff00;
      FUN_140e87440(plVar11,DAT_141a0a718,0x80000000,&local_3d8,uVar18,
                    (ulonglong)ppuVar17 & 0xffffffffffffff00);
      uVar15 = (undefined4)(uVar18 >> 0x20);
      dStack_4a0 = (double)CONCAT44(uStack_3cc,uStack_3d0);
      local_4a8 = local_3d8;
      if ((1 << (local_2e8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_2e8);
      }
      FUN_140041b80(local_2e8,&local_4a8);
      local_190 = local_2e8;
      local_4a8 = _DAT_1419e8eb0;
      dStack_4a0 = dRam00000001419e8eb8;
      if ((1 << ((byte)local_2d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_2d8);
      }
      FUN_140041b80(local_2d8,&local_4a8);
      local_188 = local_2d8;
      local_180 = &local_3c8;
      ppuVar19 = &local_190;
      uVar18 = CONCAT44(uVar15,DAT_141a00c58);
      pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_478,3,uVar18,ppuVar19);
      if (pdVar7 != &local_3f8) {
        local_4a8 = *pdVar7;
        dStack_4a0 = pdVar7[1];
        if ((1 << ((byte)local_3ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3f8);
        }
        FUN_140041b80(&local_3f8,&local_4a8);
      }
      iVar5 = FUN_140e4a740(&local_488);
      if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0))
      {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      FUN_140e87930(plVar10,DAT_141a0a718,0x80000000,&local_3f8);
      local_448 = 0x30;
      if ((1 << ((byte)local_48c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_498);
      }
      local_498 = 0;
      local_490 = 0;
      local_48c = 5;
      plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09ee8);
      iVar5 = FUN_140e4a740(&local_488);
      if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0))
      {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar11 = plVar10;
      }
      uVar18 = uVar18 & 0xffffffffffffff00;
      FUN_140e87440(plVar11,DAT_141a09ec8,0x80000000,&local_3a8,uVar18,
                    (ulonglong)ppuVar19 & 0xffffffffffffff00);
      uVar15 = (undefined4)(uVar18 >> 0x20);
      dStack_4a0 = (double)CONCAT44(uStack_39c,uStack_3a0);
      local_4a8 = local_3a8;
      if ((1 << ((byte)local_2f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_2f8);
      }
      FUN_140041b80(local_2f8,&local_4a8);
      local_198 = local_2f8;
      local_4a8 = _DAT_141dc6a70;
      dStack_4a0 = dRam0000000141dc6a78;
      if ((1 << (local_2e8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_2e8);
      }
      FUN_140041b80(local_2e8,&local_4a8);
      local_190 = local_2e8;
      local_188 = &local_3c8;
      ppuVar17 = &local_198;
      uVar13 = CONCAT44(uVar15,DAT_141a00c58);
      pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_498,3,uVar13,ppuVar17);
      if (pdVar7 != &local_408) {
        local_4a8 = *pdVar7;
        dStack_4a0 = pdVar7[1];
        if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_408);
        }
        FUN_140041b80(&local_408,&local_4a8);
      }
      iVar5 = FUN_140e4a740(&local_488);
      if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0))
      {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      FUN_140e87930(plVar10,DAT_141a09ec8,0x80000000,&local_408);
    }
    bVar2 = false;
    local_448 = 0x3b;
    plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09ee8);
    iVar5 = FUN_140e4a740(&local_488);
    if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    in_stack_fffffffffffffb40 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(plVar10,DAT_141a0a718,0x80000000,&local_3d8,uVar13,in_stack_fffffffffffffb40);
    local_ec = 0;
    local_f8 = 0x3feccccccccccccd;
    uVar6 = FUN_140e851f0(&local_3d8,&local_f8,DAT_141955260,1);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if (uVar6 < 0x80000000) {
      uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09f28);
      iVar5 = FUN_140e851f0(&local_488,uVar9,DAT_141955260,0);
      if (iVar5 == 0) {
        uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09f28);
        plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09ee8);
        iVar5 = 0;
        if ((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) {
          iVar5 = *(int *)(*plVar8 + 0x24);
        }
        local_dc = 0;
        local_e8 = (double)(iVar5 + -1);
        iVar5 = FUN_140e851f0(uVar9,&local_e8,DAT_141955260,1);
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        if (iVar5 != -2 && iVar5 < 0) {
          local_448 = 0x3d;
          uVar9 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a09f28);
          FUN_140046040(uVar9);
        }
      }
    }
    local_448 = 0x41;
    if ((1 << ((byte)local_48c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_498);
    }
    local_498 = 0;
    local_490 = 0;
    local_48c = 5;
    if ((1 << ((byte)local_46c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_478);
    }
    local_478 = 0;
    local_470 = 0;
    local_46c = 5;
    if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_3b8);
    }
    local_3b8 = 0;
    local_3b0 = 0;
    local_3ac = 5;
    plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09ee8);
    iVar5 = FUN_140e4a740(&local_488);
    if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar11 = plVar10;
    }
    in_stack_fffffffffffffb40 = in_stack_fffffffffffffb40 & 0xffffffffffffff00;
    FUN_140e87440(plVar11,DAT_141a09ec8,0x80000000,&local_3a8,uVar13 & 0xffffffffffffff00,
                  in_stack_fffffffffffffb40);
    local_4a8 = _DAT_141dd6fb8;
    dStack_4a0 = (double)uRam0000000141dd6fc0;
    if ((1 << ((byte)local_2f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2f8);
    }
    FUN_140041b80(local_2f8,&local_4a8);
    local_198 = local_2f8;
    uStack_1cc = DAT_141dd6f94;
    uStack_1d0 = DAT_141dd6f90;
    if ((1 << ((byte)DAT_141dd6f94 & 0x1f) & 0x46U) == 0) {
      local_1d8 = DAT_141dd6f88;
    }
    else {
      FUN_1400419b0(&local_1d8,&DAT_141dd6f88);
    }
    uVar15 = uStack_1cc;
    dStack_4a0 = (double)CONCAT44(uStack_1cc,uStack_1d0);
    local_4a8 = local_1d8;
    if ((1 << (local_2e8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2e8);
    }
    FUN_140041b80(local_2e8,&local_4a8);
    if ((1 << ((byte)uVar15 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_190 = local_2e8;
    ppuVar17 = &local_198;
    pdVar7 = (double *)gml_Script____struct___117(param_1,param_2,&local_3b8,1,ppuVar17);
    if (pdVar7 != local_2d8) {
      local_4a8 = *pdVar7;
      dStack_4a0 = pdVar7[1];
      if ((1 << ((byte)local_2d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_2d8);
      }
      FUN_140041b80(local_2d8,&local_4a8);
    }
    local_188 = local_2d8;
    local_180 = &local_378;
    iVar5 = FUN_140e4a740(&local_488);
    if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    in_stack_fffffffffffffb40 = in_stack_fffffffffffffb40 & 0xffffffffffffff00;
    FUN_140e87440(plVar10,DAT_141a0a718,0x80000000,&local_3d8,
                  (ulonglong)ppuVar17 & 0xffffffffffffff00,in_stack_fffffffffffffb40);
    local_30c = local_3dc;
    local_310 = local_3e0;
    if ((1 << ((byte)local_3dc & 0x1f) & 0x46U) == 0) {
      local_318 = local_3e8;
    }
    else {
      FUN_1400419b0(&local_318,&local_3e8);
    }
    local_cc = 0;
    local_d8 = 0x4000000000000000;
    FUN_140046500(&local_318,&local_d8);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_37c = 0;
    local_388 = 240.0;
    FUN_1400462a0(&local_388,&local_318);
    uStack_31c = local_37c;
    uStack_320 = local_380;
    if ((1 << ((byte)local_37c & 0x1f) & 0x46U) == 0) {
      local_328 = local_388;
    }
    else {
      FUN_1400419b0(&local_328,&local_388);
    }
    FUN_1400460e0(&local_328,&local_398);
    dStack_4a0 = (double)CONCAT44(uStack_31c,uStack_320);
    local_4a8 = local_328;
    if ((1 << (local_2b8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2b8);
    }
    FUN_140041b80(local_2b8,&local_4a8);
    if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    if ((1 << ((byte)local_37c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_388);
    }
    if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    local_178 = local_2b8;
    uStack_42c = 0;
    local_438 = 270.0;
    FUN_1400460e0(&local_438,&local_3a8);
    uStack_2fc = uStack_42c;
    uStack_300 = uStack_430;
    if ((1 << ((byte)uStack_42c & 0x1f) & 0x46U) == 0) {
      local_308 = local_438;
    }
    else {
      FUN_1400419b0(&local_308,&local_438);
    }
    uStack_460 = (double)CONCAT44(7,(undefined4)uStack_460);
    local_468 = (double)CONCAT44(local_468._4_4_,0x16);
    FUN_1400462a0(&local_308,&local_468);
    if ((1 << ((byte)((ulonglong)uStack_460 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_468);
    }
    dStack_4a0 = (double)CONCAT44(uStack_2fc,uStack_300);
    local_4a8 = local_308;
    if ((1 << (local_2a8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2a8);
    }
    FUN_140041b80(local_2a8,&local_4a8);
    if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    uVar6 = uVar4;
    if ((1 << ((byte)uStack_42c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_438);
    }
    local_170 = local_2a8;
    pdVar7 = (double *)
             FUN_140e64420(param_1,param_2,&local_478,3,&local_190,in_stack_fffffffffffffb40,uVar6);
    if (pdVar7 != local_298) {
      local_4a8 = *pdVar7;
      dStack_4a0 = pdVar7[1];
      if ((1 << ((byte)local_298[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_298);
      }
      FUN_140041b80(local_298,&local_4a8);
    }
    local_168 = local_298;
    local_4a8 = DAT_1419df7b0;
    dStack_4a0 = (double)_DAT_1419df7b8;
    if ((1 << (local_288[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_288);
    }
    FUN_140041b80(local_288,&local_4a8);
    local_160 = local_288;
    local_4a8 = DAT_1419df7b0;
    dStack_4a0 = (double)_DAT_1419df7b8;
    if ((1 << (local_278[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_278);
    }
    FUN_140041b80(local_278,&local_4a8);
    local_158 = local_278;
    local_4a8 = _DAT_141dc6a70;
    dStack_4a0 = dRam0000000141dc6a78;
    if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_268);
    }
    FUN_140041b80(local_268,&local_4a8);
    local_150 = local_268;
    local_4a8 = _DAT_1419e8eb0;
    dStack_4a0 = dRam00000001419e8eb8;
    if ((1 << (local_258[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_258);
    }
    FUN_140041b80(local_258,&local_4a8);
    local_148 = local_258;
    local_4a8 = _DAT_1419e8ec0;
    dStack_4a0 = (double)uRam00000001419e8ec8;
    if ((1 << (local_248[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_248);
    }
    FUN_140041b80(local_248,&local_4a8);
    local_140 = local_248;
    dStack_4a0 = (double)CONCAT44(uStack_3cc,uStack_3d0);
    local_4a8 = local_3d8;
    if ((1 << (local_238[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_4a8);
    local_138 = local_238;
    local_4a8 = DAT_1419df7b0;
    dStack_4a0 = (double)_DAT_1419df7b8;
    if ((1 << (local_228[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_4a8);
    local_130 = local_228;
    local_4a8 = DAT_1419df7b0;
    dStack_4a0 = (double)_DAT_1419df7b8;
    if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_4a8);
    local_128 = local_218;
    local_4a8 = DAT_1419df7b0;
    dStack_4a0 = (double)_DAT_1419df7b8;
    if ((1 << (local_208[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_4a8);
    local_120 = local_208;
    local_4a8 = DAT_1419df7b0;
    dStack_4a0 = (double)_DAT_1419df7b8;
    if ((1 << (local_1f8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_4a8);
    local_118 = local_1f8;
    local_4a8 = DAT_1419df7b0;
    dStack_4a0 = (double)_DAT_1419df7b8;
    if ((1 << (local_1e8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_4a8);
    local_110 = local_1e8;
    gml_Script_draw_sprite_hires(param_1,param_2,&local_498,0xe,&local_178);
    local_448 = 0x43;
    if ((1 << ((byte)local_48c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_498);
    }
    local_498 = 0;
    local_490 = 0;
    local_48c = 5;
    local_198 = &local_378;
    ppuVar17 = &local_198;
    pdVar7 = (double *)gml_Script_bm_draw_text_outline(param_1,param_2,&local_498,1,ppuVar17);
    uStack_40c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    uStack_410 = *(undefined4 *)(pdVar7 + 1);
    if ((1 << ((byte)uStack_40c & 0x1f) & 0x46U) == 0) {
      local_418 = *pdVar7;
    }
    else {
      FUN_1400419b0(&local_418,pdVar7);
    }
    FUN_1400460e0(&local_418,&local_358);
    FUN_1400460e0(&local_398,&local_418);
    if ((1 << ((byte)uStack_40c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_418);
    }
    uVar15 = SUB84(local_488,0);
    uVar16 = (undefined4)((ulonglong)local_488 >> 0x20);
  } while( true );
  local_448 = 0x47;
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09f28);
  if ((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) {
    plVar10 = (longlong *)(ulonglong)*(uint *)(*plVar8 + 0x24);
  }
  uStack_460 = (double)((ulonglong)uStack_460 & 0xffffffff);
  local_468 = (double)((int)plVar10 + -1);
  iVar5 = FUN_140e851f0(uVar9,&local_468,DAT_141955260,0);
  if ((1 << ((byte)((ulonglong)uStack_460 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_468);
  }
  if (iVar5 == 0) {
    local_448 = 0x48;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a09ee8);
    uVar9 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a09f48);
    FUN_140e609c0(param_1);
    FUN_1400460e0(uVar9,local_c8);
    FUN_140e60910(1);
  }
  goto LAB_1408468a0;
}

