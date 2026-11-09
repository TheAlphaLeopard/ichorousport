// gml_Object_oEffectSlash_Step_0 @ 0x140923770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oEffectSlash_Step_0(longlong *param_1,ulonglong param_2)

{
  bool bVar1;
  undefined1 auVar2 [12];
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  double *pdVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  double *pdVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar18;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar19 [16];
  longlong *local_res8;
  ulonglong local_res10;
  undefined4 local_res18;
  code *pcVar26;
  undefined1 **ppuVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong in_stack_fffffffffffffc60;
  undefined4 uVar30;
  undefined8 local_378;
  undefined4 local_370;
  undefined4 local_36c;
  double local_368;
  double dStack_360;
  double local_358;
  undefined4 local_350;
  uint local_34c;
  double local_348;
  undefined4 local_33c;
  undefined8 local_338;
  char *local_330;
  undefined4 local_328;
  double local_320;
  undefined4 local_314;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined8 local_2c8;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined4 local_2ac;
  double local_2a8;
  undefined4 uStack_2a0;
  uint uStack_29c;
  undefined8 local_298;
  uint local_28c;
  undefined8 local_288;
  uint local_27c;
  undefined8 local_278;
  uint local_26c;
  undefined8 local_268;
  uint local_25c;
  undefined8 local_258;
  uint local_24c;
  undefined8 local_248;
  uint local_23c;
  double local_238;
  uint local_22c;
  undefined8 local_228;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  undefined4 local_1bc;
  double local_1b8;
  undefined4 local_1ac;
  longlong *local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined4 local_188 [3];
  undefined4 local_17c;
  ulonglong local_178;
  undefined4 local_16c;
  ulonglong local_168;
  undefined4 local_15c;
  longlong *local_158;
  undefined4 local_14c;
  longlong *local_148;
  undefined4 local_13c;
  longlong *local_138;
  undefined4 local_12c;
  longlong *local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  double dStack_100;
  undefined1 local_f8 [16];
  longlong local_e8;
  
  local_res18 = 0;
  local_330 = "gml_Object_oEffectFlurry_Draw_0";
  local_328 = 0;
  local_338 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_338;
  pcVar26 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_308,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_33c = 0xffffff;
  local_348 = 0.0;
  local_1bc = 0xffffff;
  local_1c8 = (undefined1 *)0x0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_314 = 0xffffff;
  local_320 = 0.0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  local_2bc = 0xffffff;
  local_2c8 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_22c = 0xffffff;
  local_238 = 0.0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_36c = 0xffffff;
  local_378 = 0;
  local_328 = 1;
  local_34c = 0;
  local_358 = 0.0;
  bVar1 = true;
  do {
    if (!bVar1) {
      local_328 = 1;
      uVar4 = local_34c & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_358 = (double)CONCAT44(local_358._4_4_,local_358._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_358 = (double)((longlong)local_358 + 1);
          }
          else {
            if (uVar4 == 0xd) goto LAB_1409239b2;
            FUN_140042910(&DAT_14172c3d8,&local_358,&local_358);
          }
          goto LAB_1409239c2;
        }
        local_358 = (double)FUN_140e4b060(&local_358);
LAB_1409239b2:
        local_34c = 0;
      }
      local_358 = local_358 + 1.0;
    }
LAB_1409239c2:
    bVar1 = false;
    plVar7 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419efc38);
    iVar5 = 0;
    if ((*(int *)((longlong)plVar7 + 0xc) == 2) && (*plVar7 != 0)) {
      iVar5 = *(int *)(*plVar7 + 0x24);
    }
    local_1ac = 0;
    local_1b8 = (double)iVar5;
    iVar5 = FUN_140e851f0(&local_358,&local_1b8,DAT_141955260,1);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    if (iVar5 == -2 || -1 < iVar5) {
      if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      if ((1 << ((byte)local_314 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_320);
      }
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      _eh_vector_destructor_iterator_(local_308,0x10,4,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_338;
      return;
    }
    local_328 = 3;
    pdVar8 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419efc38);
    iVar5 = FUN_140e4a740(&local_358);
    if (((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 2) && (dVar18 = *pdVar8, dVar18 != 0.0))
    {
      if ((iVar5 < 0) || (*(int *)((longlong)dVar18 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)((longlong)dVar18 + 0x24));
        pdVar8 = (double *)0x0;
      }
      else {
        pdVar8 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar18 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar8 != &local_348) {
      local_368 = *pdVar8;
      dStack_360 = pdVar8[1];
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      FUN_140041b80(&local_348,&local_368);
    }
    local_328 = 4;
    if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_378);
    }
    local_378 = 0;
    local_370 = 0;
    local_36c = 5;
    FUN_140e87440(&local_348,DAT_141a03228,0x80000000,&local_1c8,
                  (ulonglong)pcVar26 & 0xffffffffffffff00,
                  in_stack_fffffffffffffc60 & 0xffffffffffffff00);
    switch(local_33c) {
    default:
switchD_140923b70_caseD_1:
      dVar18 = 0.0;
      break;
    case 6:
      dVar18 = local_348;
      break;
    case 0xf:
      iVar5 = (int)((ulonglong)local_348 >> 0x20);
      if ((iVar5 != 0x1000000) && (iVar5 != 0x4000001)) goto switchD_140923b70_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar6 = FUN_140e4a8b0(&local_348);
      dVar18 = (double)FUN_140e87250(uVar6);
    }
    in_stack_fffffffffffffc60 = 0;
    ppuVar27 = &local_1c8;
    FUN_140e63610(dVar18,local_res10,&local_378,0,ppuVar27,0);
    local_328 = 6;
    iVar5 = FUN_140e63cb0(local_f8,&local_res8,&local_res10,&local_348);
    if (0 < iVar5) {
      do {
        local_328 = 8;
        local_19c = 6;
        local_1a8 = local_res8;
        in_stack_fffffffffffffc60 = in_stack_fffffffffffffc60 & 0xffffffffffffff00;
        FUN_140e87440(&local_1a8,DAT_141a0cfc8,0x80000000,&local_208,
                      (ulonglong)ppuVar27 & 0xffffffffffffff00,in_stack_fffffffffffffc60);
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_18c = 0;
        local_198 = 0x4008000000000000;
        uVar4 = FUN_140e851f0(&local_208,&local_198,DAT_141955260,1);
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        if (uVar4 < 0x80000000) {
          local_328 = 10;
          if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_378);
          }
          local_378 = 0;
          local_370 = 0;
          local_36c = 5;
          uStack_29c = local_34c;
          uStack_2a0 = local_350;
          if ((1 << ((byte)local_34c & 0x1f) & 0x46U) == 0) {
            local_2a8 = local_358;
          }
          else {
            FUN_1400419b0(&local_2a8,&local_358);
          }
          local_res18 = 1;
          local_17c = 7;
          local_188[0] = 1;
          FUN_1400460e0(&local_2a8,local_188);
          if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_188);
          }
          dStack_360 = (double)CONCAT44(uStack_29c,uStack_2a0);
          local_368 = local_2a8;
          if ((1 << (local_308[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_308);
          }
          FUN_140041b80(local_308,&local_368);
          local_res18 = 0;
          if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          local_1e8 = local_308;
          local_368 = _DAT_141dc6e00;
          dStack_360 = (double)uRam0000000141dc6e08;
          if ((1 << (local_2f8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_2f8);
          }
          FUN_140041b80(local_2f8,&local_368);
          local_1e0 = local_2f8;
          local_368 = _DAT_1419ea220;
          dStack_360 = (double)uRam00000001419ea228;
          if ((1 << (local_2e8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_2e8);
          }
          FUN_140041b80(local_2e8,&local_368);
          local_1d8 = local_2e8;
          ppuVar27 = &local_1e8;
          pdVar8 = (double *)
                   gml_RoomCC_rmGravePit01_0_Create(local_res8,local_res10,&local_378,3,ppuVar27);
          uVar9 = extraout_XMM0_Qb;
          if (pdVar8 != &local_320) {
            local_368 = *pdVar8;
            dStack_360 = pdVar8[1];
            if ((1 << ((byte)local_314 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_320);
            }
            FUN_140041b80(&local_320,&local_368);
            uVar9 = extraout_XMM0_Qb_00;
          }
          local_328 = 0xb;
          auVar2._4_8_ = uVar9;
          auVar2._0_4_ = local_108._4_4_;
          auVar19._0_8_ = auVar2._0_8_ << 0x20;
          auVar19._8_4_ = dStack_100._0_4_;
          auVar19._12_4_ = 0xd;
          dStack_360 = auVar19._8_8_;
          local_108 = 0x3ff0000000000000;
          local_368 = 1.0;
          dStack_100 = dStack_360;
          if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          FUN_140041b80(&local_228,&local_368);
          local_16c = 6;
          local_178 = local_res10;
          uVar6 = FUN_140e4a740(&local_320);
          in_stack_fffffffffffffc60 = in_stack_fffffffffffffc60 & 0xffffffffffffff00;
          uVar28 = (ulonglong)ppuVar27 & 0xffffffffffffff00;
          FUN_140e87440(&local_178,DAT_1419efc38,uVar6,&local_218,uVar28,in_stack_fffffffffffffc60);
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          FUN_140e87930(&local_218,DAT_141a58110,0x80000000,&local_228);
          local_328 = 0xc;
          if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          local_2ac = 0;
          local_2b8 = 0;
          local_15c = 6;
          local_168 = local_res10;
          uVar6 = FUN_140e4a740(&local_320);
          in_stack_fffffffffffffc60 = in_stack_fffffffffffffc60 & 0xffffffffffffff00;
          FUN_140e87440(&local_168,DAT_1419efc38,uVar6,&local_218,uVar28 & 0xffffffffffffff00,
                        in_stack_fffffffffffffc60);
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          FUN_140e86c30(&local_218,DAT_141a0cfc8,0x80000000,&local_2b8);
        }
        local_328 = 0xe;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        local_368 = DAT_1419df7b0;
        dStack_360 = _DAT_1419df7b8;
        if ((1 << (local_308[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_308);
        }
        FUN_140041b80(local_308,&local_368);
        local_1e8 = local_308;
        local_368 = DAT_1419df7b0;
        dStack_360 = _DAT_1419df7b8;
        if ((1 << (local_2f8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_2f8);
        }
        FUN_140041b80(local_2f8,&local_368);
        local_1e0 = local_2f8;
        ppuVar27 = &local_1e8;
        uVar9 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_378,2,ppuVar27);
        cVar3 = FUN_140e491e0(uVar9);
        if (cVar3 != '\0') {
          local_328 = 0x10;
          if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2c8);
          }
          local_2bc = 0;
          local_2c8 = 0;
          FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_2c8);
          local_328 = 0x11;
          puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a58110);
          uStack_10c = 0xd;
          local_118 = 0;
          if (&local_118 != puVar10) {
            dStack_360 = (double)CONCAT44(0xd,uStack_110);
            local_368 = 0.0;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar10);
            }
            FUN_140041b80(puVar10,&local_368);
          }
          local_328 = 0x12;
          if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_378);
          }
          local_378 = 0;
          local_370 = 0;
          local_36c = 5;
          pdVar8 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
          local_368 = _DAT_141dc6e00;
          dStack_360 = (double)uRam0000000141dc6e08;
          if ((1 << (local_308[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_308);
          }
          FUN_140041b80(local_308,&local_368);
          local_1e8 = local_308;
          local_368 = _DAT_1419ea230;
          dStack_360 = (double)uRam00000001419ea238;
          if ((1 << (local_2f8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_2f8);
          }
          FUN_140041b80(local_2f8,&local_368);
          local_1e0 = local_2f8;
          local_368 = _DAT_1419ea210;
          dStack_360 = (double)uRam00000001419ea218;
          if ((1 << (local_2e8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_2e8);
          }
          FUN_140041b80(local_2e8,&local_368);
          local_1d8 = local_2e8;
          local_368 = _DAT_1419ea200;
          dStack_360 = dRam00000001419ea208;
          if ((1 << (local_2d8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_2d8);
          }
          FUN_140041b80(local_2d8,&local_368);
          local_1d0 = local_2d8;
          FUN_140e609c0(local_res8);
          pdVar11 = (double *)FUN_140e78db0(&local_378,4,&local_1e8);
          if (pdVar11 != pdVar8) {
            local_368 = *pdVar11;
            dStack_360 = pdVar11[1];
            if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(pdVar8);
            }
            FUN_140041b80(pdVar8,&local_368);
          }
          FUN_140e60910(1);
        }
        cVar3 = FUN_140e643f0(local_f8,&local_res8,&local_res10);
      } while (cVar3 != '\0');
    }
    FUN_140e63970(local_f8,&local_res8,&local_res10);
    local_328 = 0x15;
    in_stack_fffffffffffffc60 = in_stack_fffffffffffffc60 & 0xffffffffffffff00;
    pcVar26 = (code *)((ulonglong)ppuVar27 & 0xffffffffffffff00);
    FUN_140e87440(&local_348,DAT_141a58110,0x80000000,&local_1f8,pcVar26,in_stack_fffffffffffffc60);
    cVar3 = FUN_140e491e0(&local_1f8);
    if (cVar3 != '\0') {
      local_328 = 0x16;
      FUN_140e87170(&local_348,DAT_141a0a728,0x80000000,&local_238,local_res8,local_res10);
      plVar7 = local_res8;
      uVar28 = local_res10;
      FUN_140e87170(&local_348,DAT_141a0cfc8,0x80000000,&local_248,local_res8,local_res10);
      local_14c = 6;
      local_158 = local_res8;
      uVar28 = uVar28 & 0xffffffffffffff00;
      uVar29 = (ulonglong)plVar7 & 0xffffffffffffff00;
      FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_258,uVar29,uVar28);
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_13c = 6;
      local_148 = local_res8;
      uVar28 = uVar28 & 0xffffffffffffff00;
      uVar29 = uVar29 & 0xffffffffffffff00;
      FUN_140e87440(&local_148,DAT_1419fe158,0x80000000,&local_268,uVar29,uVar28);
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_12c = 6;
      local_138 = local_res8;
      uVar28 = uVar28 & 0xffffffffffffff00;
      uVar29 = uVar29 & 0xffffffffffffff00;
      FUN_140e87440(&local_138,DAT_141a0f7f8,0x80000000,&local_278,uVar29,uVar28);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_11c = 6;
      local_128 = local_res8;
      uVar28 = uVar28 & 0xffffffffffffff00;
      uVar29 = uVar29 & 0xffffffffffffff00;
      FUN_140e87440(&local_128,DAT_141a0f938,0x80000000,&local_288,uVar29,uVar28);
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      uVar28 = uVar28 & 0xffffffffffffff00;
      uVar29 = uVar29 & 0xffffffffffffff00;
      FUN_140e87440(&local_348,DAT_141a0a7f8,0x80000000,&local_298,uVar29,uVar28);
      uVar6 = (undefined4)(uVar29 >> 0x20);
      uVar30 = (undefined4)(uVar28 >> 0x20);
      if ((local_28c & 0xffffff) == 0) {
        uVar12 = (undefined4)local_298;
        uVar20 = (undefined4)((ulonglong)local_298 >> 0x20);
      }
      else {
        uVar9 = FUN_140e4b060(&local_298);
        uVar12 = (undefined4)uVar9;
        uVar20 = (undefined4)((ulonglong)uVar9 >> 0x20);
      }
      if ((local_27c & 0xffffff) == 0) {
        uVar13 = (undefined4)local_288;
        uVar21 = (undefined4)((ulonglong)local_288 >> 0x20);
      }
      else {
        uVar9 = FUN_140e4b060(&local_288);
        uVar13 = (undefined4)uVar9;
        uVar21 = (undefined4)((ulonglong)uVar9 >> 0x20);
      }
      if ((local_26c & 0xffffff) == 0) {
        uVar14 = (undefined4)local_278;
        uVar22 = (undefined4)((ulonglong)local_278 >> 0x20);
      }
      else {
        uVar9 = FUN_140e4b060(&local_278);
        uVar14 = (undefined4)uVar9;
        uVar22 = (undefined4)((ulonglong)uVar9 >> 0x20);
      }
      if ((local_25c & 0xffffff) == 0) {
        uVar15 = (undefined4)local_268;
        uVar23 = (undefined4)((ulonglong)local_268 >> 0x20);
      }
      else {
        uVar9 = FUN_140e4b060(&local_268);
        uVar15 = (undefined4)uVar9;
        uVar23 = (undefined4)((ulonglong)uVar9 >> 0x20);
      }
      if ((local_24c & 0xffffff) == 0) {
        uVar16 = (undefined4)local_258;
        uVar24 = (undefined4)((ulonglong)local_258 >> 0x20);
      }
      else {
        uVar9 = FUN_140e4b060(&local_258);
        uVar16 = (undefined4)uVar9;
        uVar24 = (undefined4)((ulonglong)uVar9 >> 0x20);
      }
      if ((local_23c & 0xffffff) == 0) {
        uVar17 = (undefined4)local_248;
        uVar25 = (undefined4)((ulonglong)local_248 >> 0x20);
      }
      else {
        uVar9 = FUN_140e4b060(&local_248);
        uVar17 = (undefined4)uVar9;
        uVar25 = (undefined4)((ulonglong)uVar9 >> 0x20);
      }
      if ((local_22c & 0xffffff) == 0) {
        dVar18 = local_238;
      }
      else {
        dVar18 = (double)FUN_140e4b060(&local_238);
      }
      in_stack_fffffffffffffc60 = CONCAT44(uVar30,(float)(double)CONCAT44(uVar22,uVar14));
      pcVar26 = (code *)CONCAT44(uVar6,(float)(double)CONCAT44(uVar23,uVar15));
      FUN_140ec5dd0(local_res8,(longlong)dVar18,(float)(double)CONCAT44(uVar25,uVar17),
                    (float)(double)CONCAT44(uVar24,uVar16),pcVar26,in_stack_fffffffffffffc60,
                    (float)(double)CONCAT44(uVar21,uVar13),(float)(double)CONCAT44(uVar20,uVar12),
                    0xffffff,0x3f800000);
    }
    if (local_e8 != 0) {
      FUN_140e4cd60();
    }
  } while( true );
}

