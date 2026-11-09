// gml_Object_oBurstRing_Step_0 @ 0x140868450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBurstRing_Step_0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  double *pdVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  undefined8 **ppuVar20;
  undefined4 **ppuVar21;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined8 local_408;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined8 local_3f8;
  undefined4 local_3ec;
  undefined8 local_3e8;
  undefined4 local_3dc;
  undefined8 local_3d8;
  undefined4 local_3cc;
  undefined8 local_3c8;
  undefined4 local_3bc;
  undefined8 local_3b8;
  undefined4 local_3ac;
  undefined8 local_3a8;
  undefined4 local_39c;
  ulonglong local_398;
  undefined4 uStack_390;
  uint uStack_38c;
  ulonglong local_388;
  undefined4 local_380;
  undefined4 local_37c;
  undefined8 local_378;
  undefined4 local_370;
  undefined4 local_36c;
  undefined8 local_368;
  undefined4 local_360;
  undefined4 local_35c;
  undefined8 local_358;
  undefined4 local_350;
  undefined4 local_34c;
  undefined8 local_348;
  undefined4 local_340;
  undefined4 local_33c;
  undefined8 local_338;
  undefined4 local_330;
  undefined4 local_32c;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_31c;
  undefined8 local_318;
  undefined4 local_30c;
  undefined8 local_308;
  char *local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  ulonglong local_2d0;
  undefined4 local_2c4;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined4 local_28c;
  ulonglong local_288;
  uint local_27c;
  undefined8 local_278;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_21c;
  ulonglong local_218;
  byte local_20c;
  undefined1 local_1f8 [12];
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined1 local_1d8 [12];
  undefined4 local_1cc;
  undefined1 local_1c8 [12];
  undefined4 local_1bc;
  undefined4 local_198 [3];
  undefined4 local_18c;
  undefined1 local_188 [12];
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined1 local_168 [12];
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined4 local_148 [3];
  undefined4 local_13c;
  undefined4 local_138 [3];
  undefined4 local_12c;
  ulonglong *local_128;
  undefined8 *local_120;
  undefined1 *local_118;
  undefined8 *local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined4 *local_e8;
  undefined1 *local_e0;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined4 *local_b8;
  
  local_300 = "gml_Object_oBurnUpEffect_Step_0";
  local_2f8 = 0;
  local_308 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_308;
  uVar17 = 1;
  _eh_vector_constructor_iterator_(&local_218,0x10,0xf,FUN_1400424d0,FUN_140041b30);
  local_2e4 = 0xffffff;
  local_2f0 = 0;
  local_2c4 = 0xffffff;
  local_2d0 = 0;
  local_2d4 = 0xffffff;
  local_2e0 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_30c = 0xffffff;
  local_318 = 0;
  local_39c = 0xffffff;
  local_3a8 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_3ac = 0xffffff;
  local_3b8 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_3bc = 0xffffff;
  local_3c8 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_3cc = 0xffffff;
  local_3d8 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_3dc = 0xffffff;
  local_3e8 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_3ec = 0xffffff;
  local_3f8 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_3fc = 0xffffff;
  local_408 = 0;
  local_31c = 0xffffff;
  local_328 = 0;
  local_32c = 0xffffff;
  local_338 = 0;
  local_33c = 0xffffff;
  local_348 = 0;
  local_34c = 0xffffff;
  local_358 = 0;
  local_35c = 0xffffff;
  local_368 = 0;
  local_36c = 0xffffff;
  local_378 = 0;
  local_2f8 = 2;
  puVar6 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1d8a0);
  uVar4 = FUN_140e851f0(puVar6,uVar7,DAT_141955260,1);
  if (0x7fffffff < uVar4) {
    if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_408);
    }
    local_408 = 0;
    local_400 = 0;
    local_3fc = 5;
    puVar8 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    if (puVar8 != &local_218) {
      local_398 = *puVar8;
      uStack_390 = (undefined4)puVar8[1];
      uStack_38c = *(uint *)((longlong)puVar8 + 0xc);
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_398);
    }
    local_128 = &local_218;
    uVar7 = FUN_140e634e0(param_1,param_2,&local_408,1,CONCAT44(uVar17,DAT_141a02ef8),&local_128);
    cVar3 = FUN_140e491e0(uVar7);
    if (cVar3 != '\0') {
      local_2f8 = 8;
      uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57490);
      local_37c = *(undefined4 *)((longlong)puVar6 + 0xc);
      local_380 = (undefined4)puVar6[1];
      if ((1 << ((byte)local_37c & 0x1f) & 0x46U) == 0) {
        local_388 = *puVar6;
      }
      else {
        FUN_1400419b0(&local_388,puVar6);
      }
      FUN_140046880(&local_388,uVar7);
      uStack_38c = 0;
      local_398 = 0;
      iVar5 = FUN_140e851f0(&local_388,&local_398,DAT_141955260,0);
      if ((1 << ((byte)uStack_38c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_398);
      }
      if ((1 << ((byte)local_37c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_388);
      }
      if (iVar5 == 0) {
        local_2f8 = 10;
        (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
        pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01aa8);
        if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
          dVar19 = *pdVar9;
        }
        else {
          dVar19 = (double)FUN_140e4b060(pdVar9);
        }
        iVar5 = (int)(longlong)dVar19;
        uVar2 = (longlong)dVar19;
        while (0 < iVar5) {
          local_388 = (ulonglong)((int)uVar2 - 1);
          local_2f8 = 0xc;
          uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
          puVar6 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57380);
          FUN_140e87170(uVar7,DAT_1419fe0e8,0x80000000,&local_2f0,param_1,param_2);
          uVar4 = *(uint *)((longlong)puVar6 + 0xc);
          if ((uVar4 & 0xffffff) == 0) {
            local_288 = *puVar6;
          }
          else {
            local_288 = FUN_140e4b060(puVar6);
            uVar4 = *(uint *)((longlong)puVar6 + 0xc);
          }
          uVar17 = (undefined4)local_288;
          local_27c = 0;
          local_288 = local_288 ^ 0x8000000000000000;
          if ((uVar4 & 0xffffff) == 0) {
            uVar18 = (undefined4)*puVar6;
          }
          else {
            uVar18 = FUN_140e4b060(puVar6);
            uVar17 = (undefined4)local_288;
          }
          if ((local_27c & 0xffffff) != 0) {
            uVar17 = FUN_140e4b060(&local_288);
          }
          uVar17 = FUN_140e794b0(uVar17,uVar18);
          uStack_2ac = local_2e4;
          uStack_2b0 = local_2e8;
          if ((1 << ((byte)local_2e4 & 0x1f) & 0x46U) == 0) {
            local_2b8 = local_2f0;
          }
          else {
            FUN_1400419b0(&local_2b8,&local_2f0);
          }
          FUN_140162c50(&local_2b8,uVar17);
          local_418 = (undefined4)local_2b8;
          uStack_414 = local_2b8._4_4_;
          uStack_410 = uStack_2b0;
          uStack_40c = uStack_2ac;
          if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d0);
          }
          FUN_140041b80(&local_2d0,&local_418);
          if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
          puVar6 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57380);
          FUN_140e87170(uVar7,DAT_1419fe158,0x80000000,&local_2e0,param_1,param_2);
          uVar4 = *(uint *)((longlong)puVar6 + 0xc);
          if ((uVar4 & 0xffffff) == 0) {
            local_398 = *puVar6;
          }
          else {
            local_398 = FUN_140e4b060(puVar6);
            uVar4 = *(uint *)((longlong)puVar6 + 0xc);
          }
          uVar17 = (undefined4)local_398;
          uStack_38c = 0;
          local_398 = local_398 ^ 0x8000000000000000;
          if ((uVar4 & 0xffffff) == 0) {
            uVar18 = (undefined4)*puVar6;
          }
          else {
            uVar18 = FUN_140e4b060(puVar6);
            uVar17 = (undefined4)local_398;
          }
          if ((uStack_38c & 0xffffff) != 0) {
            uVar17 = FUN_140e4b060(&local_398);
          }
          uVar17 = FUN_140e794b0(uVar17,uVar18);
          uStack_29c = local_2d4;
          uStack_2a0 = local_2d8;
          if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) == 0) {
            local_2a8 = local_2e0;
          }
          else {
            FUN_1400419b0(&local_2a8,&local_2e0);
          }
          FUN_140162c50(&local_2a8,uVar17);
          local_418 = (undefined4)local_2a8;
          uStack_414 = local_2a8._4_4_;
          uStack_410 = uStack_2a0;
          uStack_40c = uStack_29c;
          if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_298);
          }
          FUN_140041b80(&local_298,&local_418);
          if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          if ((1 << ((byte)uStack_38c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_398);
          }
          local_2f8 = 0xe;
          if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_318);
          }
          local_30c = 0;
          local_318 = 0x4056800000000000;
          local_2f8 = 0x16;
          if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_408);
          }
          local_408 = 0;
          local_400 = 0;
          local_3fc = 5;
          if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_328);
          }
          local_328 = 0;
          local_320 = 0;
          local_31c = 5;
          if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_338);
          }
          local_338 = 0;
          local_330 = 0;
          local_32c = 5;
          if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_348);
          }
          local_348 = 0;
          local_340 = 0;
          local_33c = 5;
          if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_358);
          }
          local_358 = 0;
          local_350 = 0;
          local_34c = 5;
          if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_368);
          }
          local_368 = 0;
          local_360 = 0;
          local_35c = 5;
          if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_378);
          }
          local_378 = 0;
          local_370 = 0;
          local_36c = 5;
          puVar10 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a9f8);
          plVar11 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05568);
          plVar12 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05568);
          puVar13 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a578b0);
          puVar14 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57820);
          local_128 = &local_2d0;
          local_120 = &local_298;
          local_418 = (undefined4)DAT_1419df7b0;
          uStack_414 = DAT_1419df7b0._4_4_;
          uStack_410 = DAT_1419df7b8;
          uStack_40c = DAT_1419df7bc;
          if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1f8);
          }
          FUN_140041b80(local_1f8,&local_418);
          local_118 = local_1f8;
          puVar15 = (undefined8 *)FUN_14040f420(param_1,param_2,&local_408,3,&local_128);
          if (puVar15 != &local_3a8) {
            local_418 = *(undefined4 *)puVar15;
            uStack_414 = *(undefined4 *)((longlong)puVar15 + 4);
            uStack_410 = *(undefined4 *)(puVar15 + 1);
            uStack_40c = *(undefined4 *)((longlong)puVar15 + 0xc);
            if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3a8);
            }
            FUN_140041b80(&local_3a8,&local_418);
          }
          FUN_140e87170(&local_3a8,DAT_1419f57f8,0x80000000,&local_228,param_1,param_2);
          uVar7 = FUN_140e794b0(0,0);
          if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          local_1dc = 0;
          local_110 = &local_1e8;
          local_418 = _DAT_141dc6b00;
          uStack_414 = uRam0000000141dc6b04;
          uStack_410 = uRam0000000141dc6b08;
          uStack_40c = uRam0000000141dc6b0c;
          local_1e8 = uVar7;
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1d8);
          }
          FUN_140041b80(local_1d8,&local_418);
          local_108 = local_1d8;
          local_418 = _DAT_1419e91c0;
          uStack_414 = uRam00000001419e91c4;
          uStack_410 = uRam00000001419e91c8;
          uStack_40c = uRam00000001419e91cc;
          if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1c8);
          }
          FUN_140041b80(local_1c8,&local_418);
          local_100 = local_1c8;
          switch(local_39c) {
          default:
switchD_140868f30_caseD_1:
            uVar7 = 0;
            break;
          case 6:
            uVar7 = local_3a8;
            break;
          case 0xf:
            iVar5 = (int)((ulonglong)local_3a8 >> 0x20);
            if ((iVar5 != 0x1000000) && (iVar5 != 0x4000001)) goto switchD_140868f30_caseD_1;
          case 0:
          case 7:
          case 10:
          case 0xd:
            uVar17 = FUN_140e4a8b0(&local_3a8);
            uVar7 = FUN_140e87250(uVar17);
          }
          puVar15 = (undefined8 *)FUN_140e63610(uVar7,param_2,&local_328,3,&local_228,&local_110);
          if (puVar15 != &local_3b8) {
            local_418 = *(undefined4 *)puVar15;
            uStack_414 = *(undefined4 *)((longlong)puVar15 + 4);
            uStack_410 = *(undefined4 *)(puVar15 + 1);
            uStack_40c = *(undefined4 *)((longlong)puVar15 + 0xc);
            if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3b8);
            }
            FUN_140041b80(&local_3b8,&local_418);
          }
          FUN_140e87170(&local_3b8,DAT_1419f5dc8,0x80000000,&local_238,param_1,param_2);
          local_f8 = &local_318;
          switch(local_3ac) {
          default:
switchD_14086900f_caseD_1:
            uVar7 = 0;
            break;
          case 6:
            uVar7 = local_3b8;
            break;
          case 0xf:
            iVar5 = (int)((ulonglong)local_3b8 >> 0x20);
            if ((iVar5 != 0x1000000) && (iVar5 != 0x4000001)) goto switchD_14086900f_caseD_1;
          case 0:
          case 7:
          case 10:
          case 0xd:
            uVar17 = FUN_140e4a8b0(&local_3b8);
            uVar7 = FUN_140e87250(uVar17);
          }
          ppuVar20 = &local_f8;
          puVar15 = &local_238;
          puVar16 = (undefined8 *)FUN_140e63610(uVar7,param_2,&local_338,1,puVar15,ppuVar20);
          if (puVar16 != &local_3c8) {
            local_418 = *(undefined4 *)puVar16;
            uStack_414 = *(undefined4 *)((longlong)puVar16 + 4);
            uStack_410 = *(undefined4 *)(puVar16 + 1);
            uStack_40c = *(undefined4 *)((longlong)puVar16 + 0xc);
            if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3c8);
            }
            FUN_140041b80(&local_3c8,&local_418);
          }
          FUN_140e87440(&local_3c8,DAT_1419f5bd8,0x80000000,&local_248,
                        (ulonglong)puVar15 & 0xffffffffffffff00,
                        (ulonglong)ppuVar20 & 0xffffffffffffff00);
          local_f0 = &local_318;
          switch(local_3bc) {
          default:
switchD_1408690eb_caseD_1:
            uVar7 = 0;
            break;
          case 6:
            uVar7 = local_3c8;
            break;
          case 0xf:
            iVar5 = (int)((ulonglong)local_3c8 >> 0x20);
            if ((iVar5 != 0x1000000) && (iVar5 != 0x4000001)) goto switchD_1408690eb_caseD_1;
          case 0:
          case 7:
          case 10:
          case 0xd:
            uVar17 = FUN_140e4a8b0(&local_3c8);
            uVar7 = FUN_140e87250(uVar17);
          }
          ppuVar20 = &local_f0;
          puVar15 = &local_248;
          puVar16 = (undefined8 *)FUN_140e63610(uVar7,param_2,&local_348,1,puVar15,ppuVar20);
          if (puVar16 != &local_3d8) {
            local_418 = *(undefined4 *)puVar16;
            uStack_414 = *(undefined4 *)((longlong)puVar16 + 4);
            uStack_410 = *(undefined4 *)(puVar16 + 1);
            uStack_40c = *(undefined4 *)((longlong)puVar16 + 0xc);
            if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3d8);
            }
            FUN_140041b80(&local_3d8,&local_418);
          }
          FUN_140e87440(&local_3d8,DAT_141a0a9f8,0x80000000,&local_258,
                        (ulonglong)puVar15 & 0xffffffffffffff00,
                        (ulonglong)ppuVar20 & 0xffffffffffffff00);
          if (puVar10 != local_198) {
            local_418 = *puVar10;
            uStack_414 = puVar10[1];
            uStack_410 = puVar10[2];
            uStack_40c = puVar10[3];
            if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_198);
            }
            FUN_140041b80(local_198,&local_418);
          }
          local_e8 = local_198;
          local_418 = _DAT_1419e91d0;
          uStack_414 = uRam00000001419e91d4;
          uStack_410 = uRam00000001419e91d8;
          uStack_40c = uRam00000001419e91dc;
          if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_188);
          }
          FUN_140041b80(local_188,&local_418);
          local_e0 = local_188;
          switch(local_3cc) {
          default:
switchD_14086925a_caseD_1:
            uVar7 = 0;
            break;
          case 6:
            uVar7 = local_3d8;
            break;
          case 0xf:
            iVar5 = (int)((ulonglong)local_3d8 >> 0x20);
            if ((iVar5 != 0x1000000) && (iVar5 != 0x4000001)) goto switchD_14086925a_caseD_1;
          case 0:
          case 7:
          case 10:
          case 0xd:
            uVar17 = FUN_140e4a8b0(&local_3d8);
            uVar7 = FUN_140e87250(uVar17);
          }
          ppuVar21 = &local_e8;
          puVar15 = &local_258;
          puVar16 = (undefined8 *)FUN_140e63610(uVar7,param_2,&local_358,2,puVar15,ppuVar21);
          if (puVar16 != &local_3e8) {
            local_418 = *(undefined4 *)puVar16;
            uStack_414 = *(undefined4 *)((longlong)puVar16 + 4);
            uStack_410 = *(undefined4 *)(puVar16 + 1);
            uStack_40c = *(undefined4 *)((longlong)puVar16 + 0xc);
            if ((1 << ((byte)local_3dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3e8);
            }
            FUN_140041b80(&local_3e8,&local_418);
          }
          FUN_140e87440(&local_3e8,DAT_141a08788,0x80000000,&local_268,
                        (ulonglong)puVar15 & 0xffffffffffffff00,
                        (ulonglong)ppuVar21 & 0xffffffffffffff00);
          if (((*(uint *)((longlong)plVar12 + 0xc) & 0xffffff) == 2) &&
             (lVar1 = *plVar12, lVar1 != 0)) {
            if (*(int *)(lVar1 + 0x24) < 2) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
              plVar12 = (longlong *)0x0;
            }
            else {
              plVar12 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
          }
          if ((*(uint *)((longlong)plVar12 + 0xc) & 0xffffff) == 0) {
            uVar17 = (undefined4)*plVar12;
          }
          else {
            uVar17 = FUN_140e4b060(plVar12);
          }
          if (((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 2) &&
             (lVar1 = *plVar11, lVar1 != 0)) {
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
          }
          if ((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 0) {
            uVar18 = (undefined4)*plVar11;
          }
          else {
            uVar18 = FUN_140e4b060(plVar11);
          }
          uVar7 = FUN_140e794b0(uVar18,uVar17);
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          local_16c = 0;
          local_d8 = &local_178;
          local_418 = _DAT_141dc6b00;
          uStack_414 = uRam0000000141dc6b04;
          uStack_410 = uRam0000000141dc6b08;
          uStack_40c = uRam0000000141dc6b0c;
          local_178 = uVar7;
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_418);
          local_d0 = local_168;
          uVar7 = FUN_140e794b0(0x47ae147b,0x47ae147b);
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          local_14c = 0;
          local_c8 = &local_158;
          local_158 = uVar7;
          switch(local_3dc) {
          default:
switchD_1408694d2_caseD_1:
            uVar7 = 0;
            break;
          case 6:
            uVar7 = local_3e8;
            break;
          case 0xf:
            iVar5 = (int)((ulonglong)local_3e8 >> 0x20);
            if ((iVar5 != 0x1000000) && (iVar5 != 0x4000001)) goto switchD_1408694d2_caseD_1;
          case 0:
          case 7:
          case 10:
          case 0xd:
            uVar17 = FUN_140e4a8b0(&local_3e8);
            uVar7 = FUN_140e87250(uVar17);
          }
          ppuVar20 = &local_d8;
          puVar15 = &local_268;
          puVar16 = (undefined8 *)FUN_140e63610(uVar7,param_2,&local_368,3,puVar15,ppuVar20);
          if (puVar16 != &local_3f8) {
            local_418 = *(undefined4 *)puVar16;
            uStack_414 = *(undefined4 *)((longlong)puVar16 + 4);
            uStack_410 = *(undefined4 *)(puVar16 + 1);
            uStack_40c = *(undefined4 *)((longlong)puVar16 + 0xc);
            if ((1 << ((byte)local_3ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3f8);
            }
            FUN_140041b80(&local_3f8,&local_418);
          }
          FUN_140e87440(&local_3f8,DAT_1419f4f28,0x80000000,&local_278,
                        (ulonglong)puVar15 & 0xffffffffffffff00,
                        (ulonglong)ppuVar20 & 0xffffffffffffff00);
          if (puVar13 != local_148) {
            local_418 = *puVar13;
            uStack_414 = puVar13[1];
            uStack_410 = puVar13[2];
            uStack_40c = puVar13[3];
            if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_148);
            }
            FUN_140041b80(local_148,&local_418);
          }
          local_c0 = local_148;
          if (puVar14 != local_138) {
            local_418 = *puVar14;
            uStack_414 = puVar14[1];
            uStack_410 = puVar14[2];
            uStack_40c = puVar14[3];
            if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_138);
            }
            FUN_140041b80(local_138,&local_418);
          }
          local_b8 = local_138;
          switch(local_3ec) {
          default:
switchD_140869657_caseD_1:
            uVar7 = 0;
            break;
          case 6:
            uVar7 = local_3f8;
            break;
          case 0xf:
            iVar5 = (int)((ulonglong)local_3f8 >> 0x20);
            if ((iVar5 != 0x1000000) && (iVar5 != 0x4000001)) goto switchD_140869657_caseD_1;
          case 0:
          case 7:
          case 10:
          case 0xd:
            uVar17 = FUN_140e4a8b0(&local_3f8);
            uVar7 = FUN_140e87250(uVar17);
          }
          FUN_140e63610(uVar7,param_2,&local_378,2,&local_278,&local_c0);
          uVar2 = local_388;
          iVar5 = (int)local_388;
        }
      }
      local_2f8 = 0x1e;
      uVar7 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
      FUN_140046040(uVar7);
      goto LAB_14086970c;
    }
  }
  local_2f8 = 4;
  FUN_140edd0e0(param_1,param_2,0,0);
  local_2f8 = 5;
LAB_14086970c:
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_408);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_3ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3f8);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_3dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3e8);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3d8);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3c8);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3b8);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3a8);
  }
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e0);
  }
  if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d0);
  }
  if ((1 << ((byte)local_2e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f0);
  }
  _eh_vector_destructor_iterator_(&local_218,0x10,0xf,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_308;
  return;
}

