// gml_Script_anon_5070_gml_Object_oRunManager_Create_0 @ 0x140d460b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_5070_gml_Object_oRunManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 **ppuVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  uint local_res20;
  code *pcVar15;
  undefined8 **ppuVar16;
  ulonglong uVar17;
  undefined8 **in_stack_fffffffffffffc80;
  undefined8 local_378;
  undefined4 local_370;
  undefined4 local_36c;
  undefined1 *local_368;
  undefined1 *puStack_360;
  double local_358;
  uint local_34c;
  undefined8 local_348;
  char *local_340;
  undefined4 local_338;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined1 *local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined1 *local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined4 local_2dc;
  undefined1 *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined1 *local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined1 *local_2b8;
  undefined4 local_2ac;
  undefined8 local_2a8;
  byte local_29c;
  undefined1 *local_298 [4];
  undefined1 local_278 [12];
  byte local_26c;
  undefined8 local_268;
  byte local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  longlong local_238;
  int local_22c;
  undefined8 *local_228;
  undefined1 **local_220;
  undefined8 *local_218;
  undefined1 *local_210;
  undefined8 *local_208;
  undefined8 local_200;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c4;
  uint local_1c0 [2];
  undefined8 *local_1b8;
  undefined1 *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined1 *local_178;
  undefined4 local_16c;
  undefined1 *local_168;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  double local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [16];
  longlong local_c8;
  
  uVar11 = 0;
  local_res20 = 0;
  local_340 = "gml_Script_anon@3771@gml_Object_oRunManager_Create_0";
  local_348 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_348;
  local_338 = 0x9d;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_1c0,param_4,2,param_5);
  pcVar15 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_2a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_30c = 0xffffff;
  local_318 = (undefined1 *)0x0;
  local_2ac = 0xffffff;
  local_2b8 = (undefined1 *)0x0;
  local_1f4 = 0xffffff;
  local_200 = 0;
  local_2bc = 0xffffff;
  local_2c8 = (undefined1 *)0x0;
  local_34c = 0xffffff;
  local_358 = 0.0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_2dc = 0xffffff;
  local_2e8 = 0;
  local_1c4 = 0xffffff;
  local_1d0 = 0;
  local_1d4 = 0xffffff;
  local_1e0 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_1e4 = 0xffffff;
  local_1f0 = 0;
  local_108 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_19c = 0xffffff;
  local_1a8 = (undefined1 *)0x0;
  puVar6 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fd898);
  puVar8 = local_1b8;
  uVar4 = local_1c0[0];
  local_36c = 0;
  local_378 = 0;
  local_23c = 0;
  local_248 = 0;
  local_24c = 0;
  local_258 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_338 = 0x9d;
  puVar10 = &DAT_1419df7b0;
  if ((int)local_1c0[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_1b8;
  }
  local_100 = puVar6;
  iVar3 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_338 = 0x9d;
    puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b90);
    if ((int)uVar4 < 1) {
      puVar13 = &DAT_1419df7b0;
    }
    else {
      puVar13 = (undefined8 *)*puVar8;
    }
    if (puVar7 != puVar13) {
      local_328 = *puVar7;
      uStack_320 = puVar7[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar13);
      }
      FUN_140041b80(puVar13,&local_328);
    }
  }
  if ((int)uVar4 < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)puVar8[1];
  }
  iVar3 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1d7d0);
    if ((int)uVar4 < 2) {
      puVar13 = &DAT_1419df7b0;
    }
    else {
      puVar13 = (undefined8 *)puVar8[1];
    }
    if (puVar7 != puVar13) {
      local_328 = *puVar7;
      uStack_320 = puVar7[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar13);
      }
      FUN_140041b80(puVar13,&local_328);
    }
  }
  local_338 = 0x9f;
  if ((int)uVar4 < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)puVar8[1];
  }
  if (0 < (int)uVar4) {
    puVar10 = (undefined8 *)*puVar8;
  }
  puVar10 = (undefined8 *)FUN_140046e40(&local_2d8,puVar10,puVar7);
  if ((undefined1 **)puVar10 != &local_318) {
    local_328 = *puVar10;
    uStack_320 = puVar10[1];
    if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    FUN_140041b80(&local_318,&local_328);
  }
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_338 = 0xa0;
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_2ac = 0;
  local_2b8 = &DAT_bff0000000000000;
  local_338 = 0xa1;
  puVar10 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5998);
  local_f8 = puVar10;
  iVar3 = FUN_140e851f0(&local_318,puVar10,DAT_141955260,1);
  if (0 < iVar3) {
    local_338 = 0xa3;
    local_2fc = 0xf;
    local_308 = 0x100000000000147;
    iVar3 = FUN_140e63cb0(local_d8,&local_res8,&local_res10,&local_308);
    if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    if (0 < iVar3) {
      do {
        local_338 = 0xa5;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd9a8);
        local_328 = _DAT_1419ed8c0;
        uStack_320 = uRam00000001419ed8c8;
        if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        FUN_140041b80(&local_2a8,&local_328);
        local_328 = _DAT_1419ed8a0;
        uStack_320 = uRam00000001419ed8a8;
        local_228 = &local_2a8;
        if ((1 << ((byte)local_298[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_298);
        }
        FUN_140041b80(local_298,&local_328);
        local_220 = local_298;
        FUN_140e609c0(local_res8);
        puVar8 = (undefined8 *)FUN_140e78db0(&local_378,2,&local_228);
        if (puVar8 != puVar10) {
          local_328 = *puVar8;
          uStack_320 = puVar8[1];
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar10);
          }
          FUN_140041b80(puVar10,&local_328);
        }
        FUN_140e60910(1);
        local_338 = 0xa6;
        puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd988);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar10);
        }
        *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
        *puVar10 = 0x4000000000000000;
        local_338 = 0xa7;
        puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd908);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar10);
        }
        *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
        *puVar10 = 0x4000000000000000;
        local_338 = 0xa8;
        puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd8c8);
        uVar14 = FUN_140e794b0();
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar10);
        }
        *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
        *puVar10 = uVar14;
        local_338 = 0xa9;
        puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419eedc8);
        FUN_140e609c0(local_res8);
        puVar8 = (undefined8 *)FUN_140e48e40(puVar10,0);
        FUN_140e609c0(*(undefined8 *)*puVar10);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
        *puVar8 = 0;
        FUN_140e60910(2);
        cVar2 = FUN_140e643f0(local_d8,&local_res8,&local_res10);
      } while (cVar2 != '\0');
    }
    FUN_140e63970(local_d8,&local_res8,&local_res10);
    local_338 = 0xab;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_2ac = 0;
    local_2b8 = (undefined1 *)0x3ff0000000000000;
    local_338 = 0xad;
    local_2fc = 0;
    local_308 = 0x4026000000000000;
    iVar3 = FUN_140e851f0(&local_318,&local_308,DAT_141955260,0);
    if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    if (iVar3 == 0) {
      local_338 = 0xaf;
      if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      uVar5 = (undefined4)((ulonglong)pcVar15 >> 0x20);
      local_378 = 0;
      local_370 = 0;
      local_36c = 5;
      local_328 = _DAT_141dc7620;
      uStack_320 = uRam0000000141dc7628;
      if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      FUN_140041b80(&local_2a8,&local_328);
      in_stack_fffffffffffffc80 = &local_228;
      pcVar15 = (code *)CONCAT44(uVar5,DAT_141a0a0d8);
      local_228 = &local_2a8;
      puVar10 = (undefined8 *)
                FUN_140e634e0(local_res8,local_res10,&local_378,1,pcVar15,in_stack_fffffffffffffc80)
      ;
      if (puVar10 != &local_200) {
        local_328 = *puVar10;
        uStack_320 = puVar10[1];
        if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_200);
        }
        FUN_140041b80(&local_200,&local_328);
      }
      FUN_140e86fa0(local_res8,DAT_141a0a7e8,2,&local_200);
    }
    local_338 = 0xb2;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2bc = 0;
    local_2c8 = (undefined1 *)0x0;
    local_338 = 0xb3;
    if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    local_34c = 0;
    local_358 = 0.0;
    bVar1 = true;
LAB_140d469f0:
    iVar3 = 0;
    if (!bVar1) {
      local_338 = 0xb3;
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
            if (uVar4 == 0xd) {
              local_34c = 0;
              goto LAB_140d46a4a;
            }
            FUN_140042910(&DAT_14172c3d8,&local_358,&local_358);
          }
          goto LAB_140d46a54;
        }
        local_358 = (double)FUN_140e4b060(&local_358);
        local_34c = 0;
      }
LAB_140d46a4a:
      local_358 = local_358 + 1.0;
    }
LAB_140d46a54:
    bVar1 = false;
    local_12c = 0xf;
    local_138 = 0x100000000000147;
    in_stack_fffffffffffffc80 =
         (undefined8 **)((ulonglong)in_stack_fffffffffffffc80 & 0xffffffffffffff00);
    pcVar15 = (code *)((ulonglong)pcVar15 & 0xffffffffffffff00);
    FUN_140e87440(&local_138,DAT_1419fd978,0x80000000,&local_238,pcVar15,in_stack_fffffffffffffc80);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if ((local_22c == 2) && (local_238 != 0)) {
      iVar3 = *(int *)(local_238 + 0x24);
    }
    local_11c = 0;
    local_128 = (double)iVar3;
    iVar3 = FUN_140e851f0(&local_358,&local_128,DAT_141955260,1);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    puVar10 = local_f8;
    puVar6 = local_100;
    if (iVar3 != -2 && iVar3 < 0) {
      local_338 = 0xb5;
      if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      local_378 = 0;
      local_370 = 0;
      local_36c = 5;
      local_368 = _DAT_1419ed8f0;
      puStack_360 = (undefined1 *)uRam00000001419ed8f8;
      if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      FUN_140041b80(&local_2a8,&local_368);
      pcVar15 = (code *)&local_228;
      local_228 = &local_2a8;
      uVar14 = gml_Script_choose_weighted(local_res8,local_res10,&local_378,1,pcVar15);
      cVar2 = FUN_140e491e0(uVar14);
      if (cVar2 == '\0') {
        local_338 = 0xb7;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        local_368 = _DAT_1419ed8d0;
        puStack_360 = (undefined1 *)uRam00000001419ed8d8;
        if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        FUN_140041b80(&local_2a8,&local_368);
        ppuVar16 = &local_228;
        local_228 = &local_2a8;
        uVar14 = gml_Script_choose_weighted(local_res8,local_res10,&local_378,1,ppuVar16);
        cVar2 = FUN_140e491e0(uVar14);
        if (cVar2 == '\0') {
          if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_258);
          }
          local_258 = 0;
          local_250 = 0;
          local_24c = 5;
          uStack_dc = 0xf;
          local_e8 = 0x100000100000063;
          puStack_360 = (undefined1 *)CONCAT44(0xf,uStack_e0);
          local_368 = (undefined1 *)0x100000100000063;
          if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_278);
          }
          FUN_140041b80(local_278,&local_368);
          local_210 = local_278;
          uStack_320 = CONCAT44(0xf,(undefined4)uStack_320);
          local_328 = 0x100000100000061;
          local_368 = (undefined1 *)0x100000100000061;
          puStack_360 = (undefined1 *)uStack_320;
          if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_268);
          }
          FUN_140041b80(&local_268,&local_368);
          local_208 = &local_268;
          puVar10 = (undefined8 *)FUN_140e78db0(&local_258,2,&local_210);
          local_2fc = *(undefined4 *)((longlong)puVar10 + 0xc);
          local_300 = *(undefined4 *)(puVar10 + 1);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) == 0) {
            local_308 = *puVar10;
          }
          else {
            FUN_1400419b0(&local_308,puVar10);
          }
          puVar10 = &local_308;
          uVar11 = uVar11 | 0x22;
        }
        else {
          uStack_10c = 0xf;
          local_118 = 0x100000100000062;
          puVar10 = &local_118;
          uVar11 = uVar11 | 1;
        }
        local_368 = (undefined1 *)*puVar10;
        puStack_360 = (undefined1 *)puVar10[1];
        local_res20 = uVar11;
        if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d0);
        }
        FUN_140041b80(&local_1d0,&local_368);
        if ((uVar11 & 2) != 0) {
          uVar11 = uVar11 & 0xfffffffd;
          local_res20 = uVar11;
          if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_308);
          }
        }
        if (((uVar11 & 1) != 0) &&
           (uVar11 = uVar11 & 0xfffffffe, (1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_118);
        }
        local_17c = 0xf;
        local_188 = 0x100000000000147;
        uVar5 = FUN_140e4a740(&local_358);
        uVar12 = (ulonglong)in_stack_fffffffffffffc80 & 0xffffffffffffff00;
        FUN_140e87440(&local_188,DAT_1419fd978,uVar5,&local_2e8,
                      (ulonglong)ppuVar16 & 0xffffffffffffff00,uVar12);
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        FUN_140e87930(&local_2e8,DAT_141a0a9f8,0x80000000,&local_1d0);
        local_338 = 0xb8;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        local_368 = _DAT_1419ed8b0;
        puStack_360 = (undefined1 *)uRam00000001419ed8b8;
        if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        FUN_140041b80(&local_2a8,&local_368);
        ppuVar16 = &local_228;
        local_228 = &local_2a8;
        uVar14 = gml_Script_choose_weighted(local_res8,local_res10,&local_378,1,ppuVar16);
        cVar2 = FUN_140e491e0(uVar14);
        if (cVar2 == '\0') {
          local_16c = 0;
          local_178 = &DAT_bff0000000000000;
          ppuVar9 = &local_178;
          uVar11 = uVar11 | 8;
        }
        else {
          uStack_15c = 0;
          local_168 = (undefined1 *)0x0;
          ppuVar9 = &local_168;
          uVar11 = uVar11 | 4;
        }
        local_368 = *ppuVar9;
        puStack_360 = ppuVar9[1];
        local_res20 = uVar11;
        if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e0);
        }
        FUN_140041b80(&local_1e0,&local_368);
        if ((uVar11 & 8) != 0) {
          uVar11 = uVar11 & 0xfffffff7;
          local_res20 = uVar11;
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
        }
        if ((uVar11 & 4) != 0) {
          uVar11 = uVar11 & 0xfffffffb;
          local_res20 = uVar11;
          if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
        }
        local_14c = 0xf;
        local_158 = 0x100000000000147;
        uVar5 = FUN_140e4a740(&local_358);
        uVar12 = uVar12 & 0xffffffffffffff00;
        uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
        FUN_140e87440(&local_158,DAT_1419fd978,uVar5,&local_2e8,uVar17,uVar12);
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140e87930(&local_2e8,DAT_141a57830,0x80000000,&local_1e0);
        local_338 = 0xba;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        local_13c = 0xf;
        local_148 = 0x100000000000147;
        uVar5 = FUN_140e4a740(&local_358);
        uVar12 = uVar12 & 0xffffffffffffff00;
        uVar17 = uVar17 & 0xffffffffffffff00;
        FUN_140e87440(&local_148,DAT_1419fd978,uVar5,&local_2e8,uVar17,uVar12);
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140e87440(&local_2e8,DAT_1419fd888,0x80000000,&local_198,uVar17 & 0xffffffffffffff00,
                      uVar12 & 0xffffffffffffff00);
        uVar14 = FUN_140e794b0();
        uStack_2ec = local_2bc;
        uStack_2f0 = local_2c0;
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) == 0) {
          local_2f8 = local_2c8;
        }
        else {
          FUN_1400419b0(&local_2f8,&local_2c8);
        }
        local_res20 = uVar11 | 0x40;
        FUN_140162c50(&local_2f8,uVar14);
        puStack_360 = (undefined1 *)CONCAT44(uStack_2ec,uStack_2f0);
        local_368 = local_2f8;
        if ((1 << ((byte)_local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        FUN_140041b80(&local_2a8,&local_368);
        local_res20 = uVar11;
        if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f8);
        }
        switch(local_2dc) {
        default:
switchD_140d4729f_caseD_1:
          uVar14 = 0;
          local_228 = &local_2a8;
          break;
        case 6:
          uVar14 = local_2e8;
          local_228 = &local_2a8;
          break;
        case 0xf:
          iVar3 = (int)((ulonglong)local_2e8 >> 0x20);
          if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_140d4729f_caseD_1;
        case 0:
        case 7:
        case 10:
        case 0xd:
          local_228 = &local_2a8;
          uVar5 = FUN_140e4a8b0(&local_2e8);
          uVar14 = FUN_140e87250(uVar5);
        }
        in_stack_fffffffffffffc80 = &local_228;
        puVar10 = &local_198;
        FUN_140e63610(uVar14,local_res10,&local_378,1,puVar10,in_stack_fffffffffffffc80);
        local_338 = 0xbb;
        uStack_2cc = 0xf;
        local_2d8 = (undefined1 *)0x100000000000147;
        in_stack_fffffffffffffc80 =
             (undefined8 **)((ulonglong)in_stack_fffffffffffffc80 & 0xffffffffffffff00);
        pcVar15 = (code *)((ulonglong)puVar10 & 0xffffffffffffff00);
        FUN_140e87440(&local_2d8,DAT_1419fd978,0x80000000,&local_238,pcVar15,
                      in_stack_fffffffffffffc80);
        if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        iVar3 = 0;
        if ((local_22c == 2) && (local_238 != 0)) {
          iVar3 = *(int *)(local_238 + 0x24);
        }
        FUN_140162c50(&local_2c8,360.0 / (double)iVar3);
      }
      else {
        local_338 = 0xb5;
      }
      goto LAB_140d469f0;
    }
    if (local_c8 != 0) {
      FUN_140e4cd60();
    }
    puVar8 = local_1b8;
    uVar4 = local_1c0[0];
  }
  local_338 = 0xbf;
  iVar3 = FUN_140e851f0(&local_318,puVar10,DAT_141955260,0);
  if (iVar3 != 0) {
    local_338 = 0xc1;
    puVar10 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5998);
    uStack_2ec = uStack_30c;
    uStack_2f0 = uStack_310;
    if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) == 0) {
      local_2f8 = local_318;
    }
    else {
      FUN_1400419b0(&local_2f8,&local_318);
    }
    local_res20 = uVar11 | 0x80;
    FUN_1400462a0(&local_2f8,puVar10);
    puStack_360 = (undefined1 *)CONCAT44(uStack_2ec,uStack_2f0);
    local_368 = local_2f8;
    if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f0);
    }
    FUN_140041b80(&local_1f0,&local_368);
    if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_338 = 0xc2;
    puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5998);
    FUN_140e609c0(local_res8);
    if (&local_318 != (undefined1 **)puVar7) {
      puStack_360 = (undefined1 *)CONCAT44(uStack_30c,uStack_310);
      local_368 = local_318;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_368);
    }
    FUN_140e60910(1);
    local_338 = 0xc3;
    if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_378);
    }
    local_378 = 0;
    local_370 = 0;
    local_36c = 5;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    uVar12 = (ulonglong)pcVar15 & 0xffffffffffffff00;
    FUN_140e87440(local_108,DAT_1419ef578,0x80000000,&local_1a8,uVar12,
                  (ulonglong)in_stack_fffffffffffffc80 & 0xffffffffffffff00);
    uVar5 = (undefined4)(uVar12 >> 0x20);
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_2d8,gml_Script_anon_4965_gml_Object_oRunManager_Create_0,0);
    if (&local_2d8 != (undefined1 **)puVar6) {
      puStack_360 = (undefined1 *)CONCAT44(uStack_2cc,uStack_2d0);
      local_368 = local_2d8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_368);
    }
    FUN_140e60910(1);
    if (puVar6 != &local_2a8) {
      local_368 = (undefined1 *)*puVar6;
      puStack_360 = (undefined1 *)puVar6[1];
      if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      FUN_140041b80(&local_2a8,&local_368);
    }
    if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    local_220 = &local_2b8;
    local_218 = &local_1f0;
    puStack_360 = (undefined1 *)CONCAT44(uStack_19c,uStack_1a0);
    local_368 = local_1a8;
    local_228 = &local_2a8;
    if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_278);
    }
    FUN_140041b80(local_278,&local_368);
    local_210 = local_278;
    puVar6 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_248,3,CONCAT44(uVar5,DAT_1419fd6d8),
                           &local_228);
    if (puVar6 != &local_268) {
      local_368 = (undefined1 *)*puVar6;
      puStack_360 = (undefined1 *)puVar6[1];
      if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      FUN_140041b80(&local_268,&local_368);
    }
    local_208 = &local_268;
    gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
              (local_res8,local_res10,&local_378,2,&local_210);
  }
  puVar6 = local_res18;
  local_338 = 0xc9;
  if (puVar10 != local_res18) {
    local_368 = (undefined1 *)*puVar10;
    puStack_360 = (undefined1 *)puVar10[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)local_res18 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_res18);
    }
    FUN_140041b80(puVar6,&local_368);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  _eh_vector_destructor_iterator_(&local_2a8,0x10,5,FUN_140041b30);
  if (0 < (int)uVar4) {
    uVar12 = (ulonglong)uVar4;
    puVar10 = puVar8;
    do {
      puVar7 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_140e4cd60(puVar8);
  DAT_141dc7a50 = (undefined8 *)local_348;
  return puVar6;
}

