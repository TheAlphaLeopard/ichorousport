// gml_Script_StatesPestAttack5 @ 0x14057f930

/* WARNING: Removing unreachable block (ram,0x0001405831b7) */
/* WARNING: Removing unreachable block (ram,0x0001405831d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesPestAttack5
          (undefined1 ****param_1,undefined8 **param_2,undefined8 *param_3,int param_4,
          undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  longlong ****pppplVar9;
  uint uVar10;
  bool bVar11;
  undefined4 uVar12;
  double dVar13;
  undefined1 ****ppppuVar14;
  ulonglong uVar15;
  undefined1 ****ppppuVar16;
  undefined1 ****local_res8;
  undefined8 **local_res10;
  code *pcVar17;
  undefined4 uVar20;
  undefined8 uVar18;
  undefined1 **ppuVar19;
  ulonglong uVar21;
  undefined8 **ppuVar22;
  undefined8 local_458;
  undefined4 local_450;
  undefined4 local_44c;
  undefined1 ****local_448;
  undefined4 local_43c;
  undefined1 ****local_438;
  undefined4 local_42c;
  undefined1 ****local_428;
  uint local_41c;
  undefined1 local_418 [12];
  byte local_40c;
  undefined8 local_408;
  char *local_400;
  undefined4 local_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined1 ***local_3e0;
  undefined4 local_3d4;
  undefined8 ***local_3c8;
  undefined1 *local_3c0;
  undefined1 *local_3b8;
  undefined1 *local_3b0;
  undefined8 *local_3a8;
  undefined1 *local_3a0;
  undefined8 *local_398;
  undefined1 *local_390;
  undefined1 *local_388;
  undefined1 *local_380;
  undefined1 *local_378;
  undefined1 *local_370;
  undefined1 *local_368;
  undefined1 *local_360;
  undefined1 *local_358;
  undefined1 *local_350;
  undefined8 local_348;
  undefined4 local_33c;
  undefined8 local_338;
  undefined4 local_32c;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_31c;
  undefined8 local_318;
  undefined4 local_30c;
  undefined8 local_308;
  undefined4 local_2fc;
  longlong ***local_2f8;
  undefined4 local_2ec;
  longlong ***local_2e8 [2];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined8 local_2a8;
  undefined4 local_29c;
  undefined1 local_298 [16];
  undefined8 local_288;
  undefined4 local_27c;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 *local_118;
  longlong ****local_110;
  undefined1 ****local_108;
  longlong ****local_100;
  undefined8 ***local_f8;
  undefined1 ****local_f0;
  undefined1 ***local_e8;
  undefined8 *local_e0;
  longlong ****local_d8;
  undefined1 ****local_d0;
  longlong ****local_c8;
  undefined8 ***local_c0;
  undefined1 ****local_b8;
  undefined1 ***local_b0;
  undefined1 local_a8 [112];
  
  ppuVar19 = &local_388;
  local_400 = "gml_Script_StatesPestDodge";
  local_408 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_408;
  local_3f8 = 0x1a4;
  pcVar17 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_2e8,0x10,0x10,FUN_1400424d0,FUN_140041b30);
  local_2fc = 0xffffff;
  local_308 = 0;
  local_32c = 0xffffff;
  local_338 = 0;
  local_33c = 0xffffff;
  local_348 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_3d4 = 0xffffff;
  local_3e0 = (undefined1 ***)0x0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_2ec = 0xffffff;
  local_2f8 = (longlong ***)0x0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_30c = 0xffffff;
  local_318 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_44c = 0;
  local_458 = 0;
  local_3e4 = 0;
  local_3f0 = 0;
  local_31c = 0;
  local_328 = 0;
  local_1cc = 0;
  local_1d8 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_3f8 = 0x1a6;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  FUN_1400424a0(local_a8,param_5);
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de0554) &&
     (_Init_thread_header(&DAT_141de0554), DAT_141de0554 == -1)) {
    _DAT_141de05cc = 0;
    _DAT_141de05c0 = 0x4000000000000000;
    _DAT_141de05e0 = 0;
    _DAT_141de05d4 = 0;
    _DAT_141de05e4 = 1;
    _DAT_141de05f4 = 0;
    _DAT_141de05e8 = 0x3ff0000000000000;
    _DAT_141de05f8 = 2;
    _DAT_141de0608 = 0;
    _DAT_141de05fc = 0x4008000000000000;
    _DAT_141de060c = 3;
    atexit((_func_5014 *)&LAB_1414829d0);
    _Init_thread_footer(&DAT_141de0554);
  }
  uVar10 = 0;
  do {
    iVar2 = FUN_140e851f0(&DAT_141de05c0 + (longlong)(int)uVar10 * 0x14,local_a8,DAT_141955260,0);
    uVar20 = (undefined4)((ulonglong)pcVar17 >> 0x20);
    if (iVar2 == 0) {
      iVar2 = *(int *)(&DAT_141de05d0 + (longlong)(int)uVar10 * 0x14);
      if (iVar2 == 0) {
        local_3f8 = 0x1aa;
        FUN_140044220(&local_308,1);
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_308);
        local_3f8 = 0x1ab;
        FUN_140044220(&local_338,0);
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_338);
        local_3f8 = 0x1ad;
        if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_458);
        }
        local_458 = 0;
        local_450 = 0;
        local_44c = 5;
        uVar3 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419fd438);
        uVar5 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419feb68);
        FUN_140041c60(local_2e8,uVar3);
        local_3c8 = local_2e8;
        FUN_140041c60(local_2d8,&DAT_141dd41c8);
        local_3c0 = local_2d8;
        cVar1 = FUN_140041d90(uVar5,0xffffffff);
        bVar11 = cVar1 == '\0';
        if (bVar11) {
          FUN_1400424a0(&local_448,uVar5);
          pppplVar9 = (longlong ****)&local_448;
        }
        else {
          local_438 = (undefined1 ****)FUN_140e78f00(2);
          local_42c = 0;
          pppplVar9 = (longlong ****)&local_438;
        }
        FUN_140041c60(local_2c8,pppplVar9);
        if ((bVar11) && ((1 << ((byte)local_43c & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_448);
        }
        if ((!bVar11) && ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_438);
        }
        local_3b8 = local_2c8;
        uVar5 = CONCAT44(uVar20,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_458,3,uVar5,&local_3c8);
        uVar20 = (undefined4)((ulonglong)uVar5 >> 0x20);
        local_3f8 = 0x1ae;
        uVar5 = (*(code *)(*local_res8)[2])(local_res8,DAT_1419feb68);
        FUN_140044220(uVar5,0xffffffff);
        local_3f8 = 0x1af;
        uVar5 = (*(code *)(*local_res8)[2])(local_res8,DAT_1419feac8);
        FUN_140044220(uVar5,0);
        local_3f8 = 0x1b1;
        if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_458);
        }
        local_458 = 0;
        local_450 = 0;
        local_44c = 5;
        FUN_140041c60(local_2e8,uVar3);
        local_3c8 = local_2e8;
        FUN_140041c60(local_2d8,&DAT_141dd41c8);
        local_3c0 = local_2d8;
        uVar5 = CONCAT44(uVar20,DAT_1419ff4f8);
        uVar3 = FUN_140e634e0(local_res8,local_res10,&local_458,2,uVar5,&local_3c8);
        uVar20 = (undefined4)((ulonglong)uVar5 >> 0x20);
        cVar1 = FUN_140041d90(uVar3,0);
        if (cVar1 == '\0') {
          local_3f8 = 0x1b8;
          if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_458);
          }
          local_458 = 0;
          local_450 = 0;
          local_44c = 5;
          uVar3 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419fd438);
          FUN_140041c60(local_2e8,uVar3);
          local_3c8 = local_2e8;
          FUN_140041c60(local_2d8,&DAT_141dd41c8);
          local_3c0 = local_2d8;
          uVar15 = CONCAT44(uVar20,DAT_1419ff4f8);
          uVar3 = FUN_140e634e0(local_res8,local_res10,&local_458,2,uVar15,&local_3c8);
          cVar1 = FUN_140041d90(uVar3,1);
          if (cVar1 == '\0') {
            local_3f8 = 0x1e7;
            local_43c = 0xf;
            local_448 = (undefined1 ****)0x10000010000035b;
            FUN_140041c60(&local_348,&local_448);
            if ((1 << ((byte)local_43c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_448);
            }
            FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_348);
            local_3f8 = 0x1e9;
            if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_458);
            }
            local_458 = 0;
            local_450 = 0;
            local_44c = 5;
            if ((1 << ((byte)local_3e4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3f0);
            }
            local_3f0 = 0;
            local_3e8 = 0;
            local_3e4 = 5;
            uVar3 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419fd438);
            FUN_1400441d0(local_2e8,&DAT_1419e64d0);
            local_3c8 = local_2e8;
            FUN_140041c60(local_218,uVar3);
            local_360 = local_218;
            FUN_140041c60(local_208,&DAT_141dd4148);
            local_358 = local_208;
            ppppuVar14 = (undefined1 ****)&local_3c8;
            uVar3 = gml_Script_choose_weighted(local_res8,local_res10,&local_3f0,1,ppppuVar14);
            uVar20 = (undefined4)((ulonglong)ppppuVar14 >> 0x20);
            cVar1 = FUN_140e491e0(uVar3);
            bVar11 = cVar1 == '\0';
            if (bVar11) {
              local_118 = &local_128;
              local_110 = (longlong ****)&local_res8;
              local_108 = &local_3e0;
              local_100 = &local_2f8;
              local_f8 = local_2e8;
              local_f0 = (undefined1 ****)&local_3c8;
              local_e8 = (undefined1 ***)&local_res10;
              uVar3 = FUN_1405838d0(&local_118,local_418);
            }
            else {
              local_e0 = &local_1d8;
              local_d8 = (longlong ****)&local_res8;
              local_d0 = &local_3e0;
              local_c8 = &local_2f8;
              local_c0 = local_2e8;
              local_b8 = (undefined1 ****)&local_3c8;
              local_b0 = (undefined1 ***)&local_res10;
              uVar3 = FUN_140583660(&local_e0,&local_448);
            }
            FUN_140041c60(local_1f8,uVar3);
            if ((bVar11) && ((1 << (local_40c & 0x1f) & 0x46U) != 0)) {
              FUN_140041a50(local_418);
            }
            if ((!bVar11) && ((1 << ((byte)local_43c & 0x1f) & 0x46U) != 0)) {
              FUN_140041a50(&local_448);
            }
            local_350 = local_1f8;
            FUN_140e634e0(local_res8,local_res10,&local_458,3,CONCAT44(uVar20,DAT_1419ff3d8),
                          &local_360);
          }
          else {
            local_3f8 = 0x1ba;
            uVar3 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419fdd98);
            cVar1 = FUN_140e491e0(uVar3);
            bVar11 = cVar1 != '\0';
            if (bVar11) {
              local_42c = 0xf;
              local_438 = (undefined1 ****)0x10000010000035f;
              pppplVar9 = (longlong ****)&local_438;
            }
            else {
              local_41c = 0xf;
              local_428 = (undefined1 ****)0x100000100000359;
              pppplVar9 = (longlong ****)&local_428;
            }
            FUN_140041c60(&local_348,pppplVar9);
            if ((bVar11) && ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0)) {
              FUN_140041a50(&local_438);
            }
            if ((!bVar11) && ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0)) {
              FUN_140041a50(&local_428);
            }
            FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_348);
            do {
              uVar20 = (undefined4)(uVar15 >> 0x20);
              local_3f8 = 0x1d3;
              if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_458);
              }
              local_458 = 0;
              local_450 = 0;
              local_44c = 5;
              uVar3 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419fd438);
              FUN_140e85f80(local_res8,DAT_141a00d18,0x80000000,&local_138);
              FUN_140041c60(local_2e8,uVar3);
              local_3c8 = local_2e8;
              FUN_140041c60(local_2d8,&DAT_141dd41e8);
              local_3c0 = local_2d8;
              uVar3 = FUN_140081e90(local_418,&local_138,0x4000000000000000);
              uVar12 = FUN_140e794b0(0xc054000000000000,0);
              FUN_1400424a0(&local_438,uVar3);
              FUN_140162c50(&local_438,uVar12);
              FUN_140041c60(local_2c8,&local_438);
              if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_438);
              }
              if ((1 << ((byte)_local_40c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_418);
              }
              local_3b8 = local_2c8;
              ppppuVar14 = (undefined1 ****)&local_3c8;
              uVar15 = CONCAT44(uVar20,DAT_1419ff3d8);
              FUN_140e634e0(local_res8,local_res10,&local_458,3,uVar15,ppppuVar14);
              if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_458);
              }
              local_458 = 0;
              local_450 = 0;
              local_44c = 5;
              uVar3 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419fd438);
              FUN_140041c60(local_2e8,uVar3);
              local_3c8 = local_2e8;
              FUN_140041c60(local_2d8,&DAT_141dd41e8);
              local_3c0 = local_2d8;
              local_43c = 6;
              local_448 = local_res8;
              uVar15 = uVar15 & 0xffffffffffffff00;
              FUN_140e87440(&local_448,DAT_1419fe0e8,0x80000000,&local_3e0,uVar15,
                            (ulonglong)ppppuVar14 & 0xffffffffffffff00);
              uVar20 = (undefined4)(uVar15 >> 0x20);
              if ((1 << ((byte)local_43c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_448);
              }
              ppppuVar14 = (undefined1 ****)&local_3c8;
              uVar15 = CONCAT44(uVar20,DAT_1419ff4f8);
              uVar3 = FUN_140e634e0(local_res8,local_res10,&local_458,2,uVar15,ppppuVar14);
              FUN_1400424a0(&local_428,uVar3);
              FUN_1400462a0(&local_428,&local_3e0);
              if ((local_41c & 0xffffff) == 0) {
                ppppuVar16 = local_428;
              }
              else {
                ppppuVar16 = (undefined1 ****)FUN_140e4b060(&local_428);
              }
              dVar13 = (double)FUN_140e78d00(ppppuVar16);
              if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_428);
              }
            } while (dVar13 < 64.0);
            local_3f8 = 0x1d8;
            if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_458);
            }
            local_458 = 0;
            local_450 = 0;
            local_44c = 5;
            uVar3 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419fd438);
            local_43c = 6;
            local_448 = local_res8;
            uVar15 = uVar15 & 0xffffffffffffff00;
            FUN_140e87440(&local_448,DAT_141a101f8,0x80000000,&local_148,uVar15,
                          (ulonglong)ppppuVar14 & 0xffffffffffffff00);
            uVar20 = (undefined4)(uVar15 >> 0x20);
            if ((1 << ((byte)local_43c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_448);
            }
            FUN_140041c60(local_2e8,uVar3);
            local_3c8 = local_2e8;
            FUN_140041c60(local_2d8,&DAT_141dd40f8);
            local_3c0 = local_2d8;
            FUN_140041c60(local_2c8,&local_148);
            local_3b8 = local_2c8;
            ppppuVar14 = (undefined1 ****)&local_3c8;
            uVar15 = CONCAT44(uVar20,DAT_1419ff3d8);
            FUN_140e634e0(local_res8,local_res10,&local_458,3,uVar15,ppppuVar14);
            local_3f8 = 0x1da;
            if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_458);
            }
            local_458 = 0;
            local_450 = 0;
            local_44c = 5;
            uVar3 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419fd438);
            local_43c = 6;
            local_448 = local_res8;
            uVar15 = uVar15 & 0xffffffffffffff00;
            FUN_140e87440(&local_448,DAT_1419fe158,0x80000000,&local_2f8,uVar15,
                          (ulonglong)ppppuVar14 & 0xffffffffffffff00);
            uVar20 = (undefined4)(uVar15 >> 0x20);
            if ((1 << ((byte)local_43c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_448);
            }
            FUN_140041c60(local_2e8,uVar3);
            local_3c8 = local_2e8;
            FUN_140041c60(local_2d8,&DAT_141dd4138);
            local_3c0 = local_2d8;
            FUN_140041c60(local_2c8,&local_2f8);
            local_3b8 = local_2c8;
            uVar3 = CONCAT44(uVar20,DAT_1419ff3d8);
            FUN_140e634e0(local_res8,local_res10,&local_458,3,uVar3,&local_3c8);
            uVar20 = (undefined4)((ulonglong)uVar3 >> 0x20);
            local_3f8 = 0x1dc;
            if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_458);
            }
            local_458 = 0;
            local_450 = 0;
            local_44c = 5;
            uVar3 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419fd438);
            FUN_140041c60(local_2e8,uVar3);
            local_3c8 = local_2e8;
            FUN_140041c60(local_2d8,&DAT_141dd4178);
            local_3c0 = local_2d8;
            FUN_1400441d0(local_2c8,&DAT_141dc6700);
            local_3b8 = local_2c8;
            ppppuVar14 = (undefined1 ****)&local_3c8;
            uVar15 = CONCAT44(uVar20,DAT_1419ff3d8);
            FUN_140e634e0(local_res8,local_res10,&local_458,3,uVar15,ppppuVar14);
            local_3f8 = 0x1dd;
            if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_458);
            }
            local_458 = 0;
            local_450 = 0;
            local_44c = 5;
            if ((1 << ((byte)local_3e4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3f0);
            }
            local_3f0 = 0;
            local_3e8 = 0;
            local_3e4 = 5;
            uVar3 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419fd438);
            FUN_140041c60(local_2e8,uVar3);
            local_3c8 = local_2e8;
            FUN_140041c60(local_2d8,&DAT_141dd41e8);
            local_3c0 = local_2d8;
            local_43c = 6;
            local_448 = local_res8;
            uVar15 = uVar15 & 0xffffffffffffff00;
            FUN_140e87440(&local_448,DAT_1419fe0e8,0x80000000,&local_3e0,uVar15,
                          (ulonglong)ppppuVar14 & 0xffffffffffffff00);
            uVar20 = (undefined4)(uVar15 >> 0x20);
            if ((1 << ((byte)local_43c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_448);
            }
            FUN_140041c60(local_2c8,uVar3);
            local_3b8 = local_2c8;
            FUN_140041c60(local_2b8,&DAT_141dd4168);
            local_3b0 = local_2b8;
            uVar5 = CONCAT44(uVar20,DAT_1419ff4f8);
            uVar3 = FUN_140e634e0(local_res8,local_res10,&local_3f0,2,uVar5,&local_3c8);
            uVar20 = (undefined4)((ulonglong)uVar5 >> 0x20);
            FUN_1400424a0(&local_428,uVar3);
            FUN_1400462a0(&local_428,&local_3e0);
            if ((local_41c & 0xffffff) == 0) {
              ppppuVar14 = local_428;
            }
            else {
              ppppuVar14 = (undefined1 ****)FUN_140e4b060(&local_428);
            }
            local_2a8 = FUN_140e78d00(ppppuVar14);
            if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            local_29c = 0;
            if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_428);
            }
            local_3a8 = &local_2a8;
            uVar3 = CONCAT44(uVar20,DAT_1419ff3d8);
            FUN_140e634e0(local_res8,local_res10,&local_458,3,uVar3,&local_3b8);
            uVar20 = (undefined4)((ulonglong)uVar3 >> 0x20);
            local_3f8 = 0x1df;
            if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_458);
            }
            local_458 = 0;
            local_450 = 0;
            local_44c = 5;
            uVar3 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419fd438);
            FUN_140041c60(local_2e8,uVar3);
            local_3c8 = local_2e8;
            FUN_140041c60(local_2d8,&DAT_141dd4128);
            local_3c0 = local_2d8;
            FUN_1400441d0(local_2c8,&DAT_141dc6700);
            local_3b8 = local_2c8;
            ppppuVar14 = (undefined1 ****)&local_3c8;
            uVar15 = CONCAT44(uVar20,DAT_1419ff3d8);
            FUN_140e634e0(local_res8,local_res10,&local_458,3,uVar15,ppppuVar14);
            local_3f8 = 0x1e1;
            uVar3 = (*(code *)(*local_res8)[2])(local_res8,DAT_1419f5ef8);
            local_43c = 6;
            local_448 = local_res8;
            FUN_140e87440(&local_448,DAT_1419fe0e8,0x80000000,&local_3e0,uVar15 & 0xffffffffffffff00
                          ,(ulonglong)ppppuVar14 & 0xffffffffffffff00);
            if ((1 << ((byte)local_43c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_448);
            }
            local_43c = 0xf;
            local_448 = (undefined1 ****)0x1000000000000ee;
            FUN_140e87170(&local_448,DAT_1419fe0e8,0x80000000,&local_1c8,local_res8,local_res10);
            if ((1 << ((byte)local_43c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_448);
            }
            iVar2 = FUN_140e851f0(&local_3e0,&local_1c8,DAT_141955260,1);
            if (iVar2 == -2 || -1 < iVar2) {
              local_43c = 0;
              local_448 = (undefined1 ****)&DAT_bff0000000000000;
              pppplVar9 = (longlong ****)&local_448;
            }
            else {
              local_42c = 0;
              local_438 = (undefined1 ****)0x3ff0000000000000;
              pppplVar9 = (longlong ****)&local_438;
            }
            FUN_140e609c0(local_res8);
            FUN_140041c60(uVar3,pppplVar9);
            if ((iVar2 != -2 && -1 >= iVar2) && ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0)) {
              FUN_140041a50(&local_438);
            }
            FUN_140e60910(1);
          }
        }
        else {
          local_3f8 = 0x1b3;
          (*(code *)(*local_res8)[1])(local_res8,DAT_1419fd438);
          local_42c = 0xf;
          local_438 = (undefined1 ****)0x100000100000357;
          FUN_140041c60(&local_348,&local_438);
          if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_438);
          }
          FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_348);
          local_3f8 = 0x1b4;
          uVar3 = (*(code *)(*local_res8)[2])(local_res8,DAT_1419f5ef8);
          local_42c = 0xf;
          local_438 = (undefined1 ****)0x1000000000000ee;
          ppppuVar14 = local_res8;
          ppuVar22 = local_res10;
          FUN_140e87170(&local_438,DAT_1419fe0e8,0x80000000,&local_1c8,local_res8,local_res10);
          if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_438);
          }
          local_42c = 6;
          local_438 = local_res8;
          FUN_140e87440(&local_438,DAT_1419fe0e8,0x80000000,&local_3e0,
                        (ulonglong)ppppuVar14 & 0xffffffffffffff00,
                        (ulonglong)ppuVar22 & 0xffffffffffffff00);
          if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_438);
          }
          iVar2 = FUN_140e851f0(&local_1c8,&local_3e0,DAT_141955260,1);
          bVar11 = iVar2 == -2 || -1 < iVar2;
          if (bVar11) {
            local_42c = 0;
            local_438 = (undefined1 ****)0x3ff0000000000000;
            pppplVar9 = (longlong ****)&local_438;
          }
          else {
            local_41c = 0;
            local_428 = (undefined1 ****)&DAT_bff0000000000000;
            pppplVar9 = (longlong ****)&local_428;
          }
          FUN_140e609c0(local_res8);
          FUN_140041c60(uVar3,pppplVar9);
          if ((bVar11) && ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_438);
          }
          if ((iVar2 != -2 && -1 >= iVar2) && ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_428);
          }
          FUN_140e60910(1);
          local_3f8 = 0x1b5;
          puVar8 = (ulonglong *)(*(code *)(*local_res8)[1])(local_res8,DAT_1419f5ef8);
          uVar3 = (*(code *)(*local_res8)[2])(local_res8,DAT_141a1f230);
          FUN_140e609c0(local_res8);
          if ((*(uint *)((longlong)puVar8 + 0xc) & 0xffffff) == 0) {
            uVar15 = *puVar8;
          }
          else {
            uVar15 = FUN_140e4b060(puVar8);
          }
          local_42c = 0;
          local_438 = (undefined1 ****)(uVar15 ^ 0x8000000000000000);
          local_41c = 0;
          local_428 = (undefined1 ****)0x4014000000000000;
          FUN_140042560(&local_428,&local_438);
          FUN_140041c60(uVar3,&local_428);
          if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_428);
          }
          if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_438);
          }
          FUN_140e60910(1);
        }
        local_3f8 = 0x1ed;
      }
      else if (iVar2 == 1) {
        local_3f8 = 0x1f1;
        if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_458);
        }
        local_458 = 0;
        local_450 = 0;
        local_44c = 5;
        uVar3 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419fd438);
        FUN_140041c60(local_2e8,uVar3);
        local_3c8 = local_2e8;
        FUN_140041c60(local_2d8,&DAT_141dd41c8);
        local_3c0 = local_2d8;
        uVar5 = CONCAT44(uVar20,DAT_1419ff4f8);
        uVar3 = FUN_140e634e0(local_res8,local_res10,&local_458,2,uVar5,&local_3c8);
        uVar20 = (undefined4)((ulonglong)uVar5 >> 0x20);
        cVar1 = FUN_140041d90(uVar3,0);
        if (cVar1 == '\0') {
          local_3f8 = 0x20c;
          if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_458);
          }
          local_458 = 0;
          local_450 = 0;
          local_44c = 5;
          uVar3 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419fd438);
          FUN_140041c60(local_2e8,uVar3);
          local_3c8 = local_2e8;
          FUN_140041c60(local_2d8,&DAT_141dd41c8);
          local_3c0 = local_2d8;
          ppppuVar14 = (undefined1 ****)&local_3c8;
          uVar15 = CONCAT44(uVar20,DAT_1419ff4f8);
          uVar3 = FUN_140e634e0(local_res8,local_res10,&local_458,2,uVar15,ppppuVar14);
          cVar1 = FUN_140041d90(uVar3,1);
          if (cVar1 == '\0') {
            local_3f8 = 0x243;
            FUN_1400ec6d0(local_418,local_res8);
            ppuVar22 = (undefined8 **)((ulonglong)ppppuVar14 & 0xffffffffffffff00);
            FUN_140e87440(local_418,DAT_141a0a728,0x80000000,&local_318,uVar15 & 0xffffffffffffff00,
                          ppuVar22);
            FUN_140041b30(local_418);
            uVar3 = FUN_140045f40(&local_448,0x100035b,1);
            cVar1 = FUN_140041d70(&local_318,uVar3);
            FUN_140041b30(&local_448);
            if (cVar1 != '\0') {
              local_3f8 = 0x245;
              if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_458);
              }
              local_458 = 0;
              local_450 = 0;
              local_44c = 5;
              FUN_140041c60(local_2e8,&DAT_1419df7b0);
              local_3c8 = local_2e8;
              FUN_140041c60(local_2d8,&DAT_1419df7b0);
              local_3c0 = local_2d8;
              ppppuVar14 = (undefined1 ****)&local_3c8;
              uVar3 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_458,2,ppppuVar14);
              cVar1 = FUN_140e491e0(uVar3);
              if (cVar1 != '\0') {
                local_3f8 = 0x247;
                uVar3 = FUN_140042490(local_res8,DAT_1419fd438);
                uVar20 = (undefined4)((ulonglong)ppppuVar14 >> 0x20);
                if ((1 << ((byte)local_3e4 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_3f0);
                }
                local_3f0 = 0;
                local_3e8 = 0;
                local_3e4 = 5;
                FUN_140041c60(local_2c8,uVar3);
                local_3b8 = local_2c8;
                FUN_140041c60(local_2b8,&DAT_141dd4148);
                local_3b0 = local_2b8;
                uVar3 = FUN_140e634e0(local_res8,local_res10,&local_3f0,2,
                                      CONCAT44(uVar20,DAT_1419ff4f8),&local_3b8);
                ppppuVar14 = local_res8;
                ppuVar22 = local_res10;
                FUN_140e87170(uVar3,DAT_1419fe0e8,0x80000000,&local_198,local_res8,local_res10);
                FUN_140041c60(&local_1b8,&local_198);
                FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_1b8);
                local_3f8 = 0x248;
                FUN_140044220(&local_338,0);
                FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_338);
                local_3f8 = 0x249;
                uVar3 = FUN_140045f40(&local_448,0x100035d,1);
                FUN_140041c60(&local_348,uVar3);
                FUN_140041b30(&local_448);
                FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_348);
                local_3f8 = 0x24a;
                uVar3 = FUN_1400419a0(local_res8,DAT_1419f5ef8);
                FUN_1400ec6d0(local_418,local_res8);
                FUN_140e87440(local_418,DAT_1419fe0e8,0x80000000,&local_3e0,
                              (ulonglong)ppppuVar14 & 0xffffffffffffff00,
                              (ulonglong)ppuVar22 & 0xffffffffffffff00);
                FUN_140041b30(local_418);
                uVar5 = FUN_140045f40(&local_438,0xee,1);
                ppppuVar14 = local_res8;
                ppuVar22 = local_res10;
                FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_1c8,local_res8,local_res10);
                FUN_140041b30(&local_438);
                cVar1 = FUN_140046bc0(&local_3e0,&local_1c8);
                if (cVar1 == '\0') {
                  uVar5 = FUN_140041c20(local_418,0xffffffff);
                }
                else {
                  uVar5 = FUN_140041c20(&local_448,1);
                }
                FUN_140e609c0(local_res8);
                FUN_140041c60(uVar3,uVar5);
                if (cVar1 == '\0') {
                  FUN_140041b30(local_418);
                }
                else {
                  FUN_140041b30(&local_448);
                }
                FUN_140e60910(1);
              }
              local_3f8 = 0x24d;
              if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_458);
              }
              local_458 = 0;
              local_450 = 0;
              local_44c = 5;
              FUN_1400ec6d0(local_418,local_res8);
              uVar21 = (ulonglong)ppuVar22 & 0xffffffffffffff00;
              uVar15 = (ulonglong)ppppuVar14 & 0xffffffffffffff00;
              FUN_140e87440(local_418,DAT_1419fe0e8,0x80000000,&local_3e0,uVar15,uVar21);
              FUN_140041b30(local_418);
              if ((1 << ((byte)local_3e4 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_3f0);
              }
              local_3f0 = 0;
              local_3e8 = 0;
              local_3e4 = 5;
              FUN_1400ec6d0(local_418,local_res8);
              uVar21 = uVar21 & 0xffffffffffffff00;
              uVar15 = uVar15 & 0xffffffffffffff00;
              FUN_140e87440(local_418,DAT_1419fe0e8,0x80000000,&local_3e0,uVar15,uVar21);
              FUN_140041b30(local_418);
              FUN_1400ec6d0(&local_448,local_res8);
              uVar15 = uVar15 & 0xffffffffffffff00;
              FUN_140e87440(&local_448,DAT_1419fe158,0x80000000,&local_2f8,uVar15,
                            uVar21 & 0xffffffffffffff00);
              uVar20 = (undefined4)(uVar15 >> 0x20);
              FUN_140041b30(&local_448);
              FUN_140041c60(local_2e8,&local_3e0);
              local_3c8 = local_2e8;
              FUN_140041c60(local_2d8,&local_2f8);
              local_3c0 = local_2d8;
              uVar3 = FUN_140045f40(&local_438,0x9e,1);
              FUN_140041c60(local_2c8,uVar3);
              FUN_140041b30(&local_438);
              local_3b8 = local_2c8;
              uVar3 = FUN_140e634e0(local_res8,local_res10,&local_3f0,3,
                                    CONCAT44(uVar20,DAT_141a1f460),&local_3c8);
              ppuVar22 = local_res10;
              FUN_140e87170(uVar3,DAT_1419fe0e8,0x80000000,&local_1a8,local_res8,local_res10);
              FUN_140041c60(local_2b8,&local_3e0);
              local_3b0 = local_2b8;
              FUN_140041c60(&local_2a8,&local_1a8);
              local_3a8 = &local_2a8;
              FUN_1400441d0(local_298,&DAT_1419e64c0);
              local_3a0 = local_298;
              uVar3 = gml_Script_arc(local_res8,local_res10,&local_458,3,&local_3b0);
              FUN_140041c60(&local_1b8,uVar3);
              FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_1b8);
            }
            local_3f8 = 0x251;
            if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_458);
            }
            local_458 = 0;
            local_450 = 0;
            local_44c = 5;
            FUN_140041c60(local_2e8,&DAT_1419df7b0);
            local_3c8 = local_2e8;
            FUN_140041c60(local_2d8,&DAT_1419df7b0);
            local_3c0 = local_2d8;
            ppppuVar14 = (undefined1 ****)&local_3c8;
            uVar3 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_458,2,ppppuVar14);
            cVar1 = thunk_FUN_140e491e0(uVar3);
            if (cVar1 != '\0') {
              FUN_1400ec6d0(local_418,local_res8);
              FUN_140e87440(local_418,DAT_141a0a728,0x80000000,&local_318,
                            (ulonglong)ppppuVar14 & 0xffffffffffffff00,
                            (ulonglong)ppuVar22 & 0xffffffffffffff00);
              FUN_140041b30(local_418);
              uVar3 = FUN_140045f40(&local_448,0x100035d,1);
              cVar1 = FUN_140041d70(&local_318,uVar3);
              FUN_140041b30(&local_448);
              if (cVar1 != '\0') {
                local_3f8 = 0x253;
                if ((1 << ((byte)local_3e4 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_3f0);
                }
                local_3f0 = 0;
                local_3e8 = 0;
                local_3e4 = 5;
                FUN_1400441d0(local_2c8,&DAT_1419e6550);
                local_3b8 = local_2c8;
                FUN_140041c60(local_2b8,&DAT_1419df7b0);
                local_3b0 = local_2b8;
                gml_Script_truestate_begin_step(local_res8,local_res10,&local_3f0,2,&local_3b8);
              }
            }
          }
          else {
            local_3f8 = 0x20e;
            if ((1 << ((byte)local_3e4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3f0);
            }
            local_3f0 = 0;
            local_3e8 = 0;
            local_3e4 = 5;
            if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_328);
            }
            local_328 = 0;
            local_320 = 0;
            local_31c = 5;
            uVar3 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419fd438);
            FUN_140041c60(local_2c8,uVar3);
            local_3b8 = local_2c8;
            FUN_140041c60(local_2b8,&DAT_141dd41e8);
            local_3b0 = local_2b8;
            local_41c = 6;
            local_428 = local_res8;
            uVar15 = uVar15 & 0xffffffffffffff00;
            FUN_140e87440(&local_428,DAT_1419fe0e8,0x80000000,&local_3e0,uVar15,
                          (ulonglong)ppppuVar14 & 0xffffffffffffff00);
            uVar20 = (undefined4)(uVar15 >> 0x20);
            if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_428);
            }
            FUN_140041c60(&local_2a8,uVar3);
            local_3a8 = &local_2a8;
            FUN_140041c60(local_298,&DAT_141dd4178);
            local_3a0 = local_298;
            uVar5 = CONCAT44(uVar20,DAT_1419ff4f8);
            uVar3 = FUN_140e634e0(local_res8,local_res10,&local_328,2,uVar5,&local_3b8);
            uVar20 = (undefined4)((ulonglong)uVar5 >> 0x20);
            FUN_1400424a0(&local_428,uVar3);
            FUN_1400462a0(&local_428,&local_3e0);
            if ((local_41c & 0xffffff) == 0) {
              ppppuVar14 = local_428;
            }
            else {
              ppppuVar14 = (undefined1 ****)FUN_140e4b060(&local_428);
            }
            local_288 = FUN_140e78d00(ppppuVar14);
            if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            local_27c = 0;
            if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_428);
            }
            local_398 = &local_288;
            uVar3 = CONCAT44(uVar20,DAT_1419ff3d8);
            FUN_140e634e0(local_res8,local_res10,&local_3f0,3,uVar3,&local_3a8);
            uVar20 = (undefined4)((ulonglong)uVar3 >> 0x20);
            local_3f8 = 0x210;
            if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_458);
            }
            local_458 = 0;
            local_450 = 0;
            local_44c = 5;
            uVar3 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419fd438);
            uVar5 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419fdae8);
            uVar6 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419f5ef8);
            uVar7 = (*(code *)(*local_res8)[2])(local_res8,DAT_141a1f230);
            FUN_140041c60(local_2e8,uVar3);
            local_3c8 = local_2e8;
            FUN_140041c60(local_2d8,&DAT_141dd4168);
            local_3c0 = local_2d8;
            cVar1 = FUN_140041d90(uVar5,1);
            bVar11 = cVar1 == '\0';
            if (bVar11) {
              local_e0 = &local_1e8;
              local_d8 = local_2e8;
              local_d0 = (undefined1 ****)&local_3c8;
              local_c8 = (longlong ****)&local_res8;
              local_c0 = &local_res10;
              uVar3 = FUN_140583d00(&local_e0,&local_448);
            }
            else {
              local_118 = &local_328;
              local_110 = local_2e8;
              local_108 = (undefined1 ****)&local_3c8;
              local_100 = (longlong ****)&local_res8;
              local_f8 = &local_res10;
              uVar3 = FUN_140583c00(&local_118,local_418);
            }
            FUN_140e609c0(local_res8);
            uVar18 = CONCAT44(uVar20,DAT_1419ff4f8);
            uVar5 = FUN_140e634e0(local_res8,local_res10,&local_458,2,uVar18,&local_3c8);
            uVar20 = (undefined4)((ulonglong)uVar18 >> 0x20);
            FUN_1400424a0(&local_438,uVar5);
            FUN_140046500(&local_438,uVar3);
            FUN_1400424a0(&local_428,&local_438);
            FUN_140042560(&local_428,uVar6);
            FUN_140041c60(uVar7,&local_428);
            if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_428);
            }
            if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_438);
            }
            if ((bVar11) && ((1 << ((byte)local_43c & 0x1f) & 0x46U) != 0)) {
              FUN_140041a50(&local_448);
            }
            if ((!bVar11) && ((1 << (local_40c & 0x1f) & 0x46U) != 0)) {
              FUN_140041a50(local_418);
            }
            FUN_140e60910(1);
            local_3f8 = 0x212;
            if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_458);
            }
            local_458 = 0;
            local_450 = 0;
            local_44c = 5;
            if ((1 << ((byte)local_3e4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3f0);
            }
            local_3f0 = 0;
            local_3e8 = 0;
            local_3e4 = 5;
            if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_328);
            }
            local_328 = 0;
            local_320 = 0;
            local_31c = 5;
            if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            local_1d8 = 0;
            local_1d0 = 0;
            local_1cc = 5;
            if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            local_1e8 = 0;
            local_1e0 = 0;
            local_1dc = 5;
            uVar3 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419fd438);
            FUN_140041c60(local_2e8,uVar3);
            local_3c8 = local_2e8;
            FUN_140041c60(local_2d8,&DAT_141dd4138);
            local_3c0 = local_2d8;
            FUN_140041c60(local_2c8,uVar3);
            local_3b8 = local_2c8;
            FUN_140041c60(local_2b8,&DAT_141dd4138);
            local_3b0 = local_2b8;
            FUN_140041c60(&local_2a8,uVar3);
            local_3a8 = &local_2a8;
            FUN_140041c60(local_298,&DAT_141dd4178);
            local_3a0 = local_298;
            FUN_140041c60(&local_288,uVar3);
            local_398 = &local_288;
            FUN_140041c60(local_278,&DAT_141dd4168);
            local_390 = local_278;
            uVar5 = CONCAT44(uVar20,DAT_1419ff4f8);
            uVar3 = FUN_140e634e0(local_res8,local_res10,&local_3f0,2,uVar5,&local_3c8);
            uVar20 = (undefined4)((ulonglong)uVar5 >> 0x20);
            FUN_140041c60(local_268,uVar3);
            local_388 = local_268;
            uVar5 = CONCAT44(uVar20,DAT_1419ff4f8);
            uVar3 = FUN_140e634e0(local_res8,local_res10,&local_328,2,uVar5,&local_3b8);
            uVar20 = (undefined4)((ulonglong)uVar5 >> 0x20);
            uVar3 = FUN_140053940(local_418,uVar3,0x30);
            FUN_140041c60(local_258,uVar3);
            if ((1 << (local_40c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_418);
            }
            local_380 = local_258;
            FUN_1400441d0(local_248,&DAT_1419e6520);
            local_378 = local_248;
            uVar3 = FUN_140e634e0(local_res8,local_res10,&local_1e8,2,CONCAT44(uVar20,DAT_1419ff4f8)
                                  ,&local_398);
            ppuVar22 = &local_3a8;
            uVar5 = FUN_140e634e0(local_res8,local_res10,&local_1d8,2,DAT_1419ff4f8,ppuVar22);
            FUN_1400424a0(&local_438,uVar5);
            FUN_140046500(&local_438,uVar3);
            FUN_140041c60(local_238,&local_438);
            if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_438);
            }
            local_370 = local_238;
            FUN_1400441d0(local_228,&DAT_1419e6590);
            local_368 = local_228;
            uVar3 = gml_Script_arm_apply_force(local_res8,local_res10,&local_458,5,ppuVar19);
            FUN_140041c60(&local_158,uVar3);
            local_3f8 = 0x213;
            FUN_140041c60(&local_168,&local_158);
            FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_168);
            local_3f8 = 0x215;
            local_42c = 6;
            local_438 = local_res8;
            uVar21 = (ulonglong)ppuVar22 & 0xffffffffffffff00;
            uVar15 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
            FUN_140e87440(&local_438,DAT_1419fe158,0x80000000,&local_2f8,uVar15,uVar21);
            if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_438);
            }
            local_43c = 6;
            local_448 = local_res8;
            uVar21 = uVar21 & 0xffffffffffffff00;
            uVar15 = uVar15 & 0xffffffffffffff00;
            FUN_140e87440(&local_448,DAT_1419fdd18,0x80000000,&local_178,uVar15,uVar21);
            FUN_140041b30(&local_448);
            uVar3 = FUN_140046450(local_418,&local_2f8,&local_178);
            FUN_140041c60(&local_188,uVar3);
            FUN_140041b30(local_418);
            local_3f8 = 0x217;
            FUN_140041980(&local_188);
            dVar13 = (double)FUN_140e79500();
            if (dVar13 == 1.0) {
              local_3f8 = 0x228;
              FUN_1400ec6d0(local_418,local_res8);
              uVar21 = uVar21 & 0xffffffffffffff00;
              uVar15 = uVar15 & 0xffffffffffffff00;
              FUN_140e87440(local_418,DAT_141a0a728,0x80000000,&local_318,uVar15,uVar21);
              FUN_140041b30(local_418);
              uVar3 = FUN_140045f40(&local_448,0x1000351,1);
              cVar1 = FUN_140042730(&local_318,uVar3);
              FUN_140041b30(&local_448);
              if (cVar1 == '\0') {
                FUN_1400ec6d0(local_418,local_res8);
                uVar21 = uVar21 & 0xffffffffffffff00;
                FUN_140e87440(local_418,DAT_141a0a728,0x80000000,&local_318,
                              uVar15 & 0xffffffffffffff00,uVar21);
                FUN_140041b30(local_418);
                uVar3 = FUN_140045f40(&local_448,0x1000352,1);
                cVar1 = FUN_140042730(&local_318,uVar3);
                FUN_140041b30(&local_448);
                if (cVar1 != '\0') goto LAB_140580fea;
              }
              else {
LAB_140580fea:
                local_3f8 = 0x22a;
                FUN_140044220(&local_338,0);
                FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_338);
                local_3f8 = 0x22b;
                uVar3 = FUN_140042490(local_res8,DAT_1419fdd98);
                cVar1 = FUN_140e491e0(uVar3);
                if (cVar1 != '\0') {
                  uVar3 = FUN_140045f40(local_418,0x1000352,1);
                }
                else {
                  uVar3 = FUN_140045f40(&local_448,0x1000351,1);
                }
                FUN_140041c60(&local_348,uVar3);
                if (cVar1 != '\0') {
                  FUN_140041b30(local_418);
                }
                else {
                  FUN_140041b30(&local_448);
                }
                FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_348);
                local_3f8 = 0x22c;
                FUN_140044220(&local_308,1);
                FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_308);
              }
              local_3f8 = 0x22f;
              if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_458);
              }
              local_458 = 0;
              local_450 = 0;
              local_44c = 5;
              FUN_140041c60(local_2e8,&DAT_1419df7b0);
              local_3c8 = local_2e8;
              FUN_140041c60(local_2d8,&DAT_1419df7b0);
              local_3c0 = local_2d8;
              ppppuVar14 = (undefined1 ****)&local_3c8;
              uVar3 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_458,2,ppppuVar14);
              cVar1 = FUN_140e491e0(uVar3);
              if (cVar1 != '\0') {
                local_3f8 = 0x231;
                FUN_140044220(&local_338,1);
                FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_338);
                local_3f8 = 0x232;
                goto LAB_1405811c8;
              }
            }
            else {
              local_3f8 = 0x219;
              FUN_1400ec6d0(local_418,local_res8);
              uVar21 = uVar21 & 0xffffffffffffff00;
              uVar15 = uVar15 & 0xffffffffffffff00;
              FUN_140e87440(local_418,DAT_141a0a728,0x80000000,&local_318,uVar15,uVar21);
              FUN_140041b30(local_418);
              uVar3 = FUN_140045f40(&local_448,0x1000359,1);
              cVar1 = FUN_140042730(&local_318,uVar3);
              FUN_140041b30(&local_448);
              if (cVar1 == '\0') {
                FUN_1400ec6d0(local_418,local_res8);
                uVar21 = uVar21 & 0xffffffffffffff00;
                FUN_140e87440(local_418,DAT_141a0a728,0x80000000,&local_318,
                              uVar15 & 0xffffffffffffff00,uVar21);
                FUN_140041b30(local_418);
                uVar3 = FUN_140045f40(&local_448,0x1000359,1);
                cVar1 = FUN_140042730(&local_318,uVar3);
                FUN_140041b30(&local_448);
                if (cVar1 != '\0') goto LAB_140580d52;
              }
              else {
LAB_140580d52:
                local_3f8 = 0x21b;
                uVar3 = FUN_140042490(local_res8,DAT_1419fdd98);
                cVar1 = FUN_140e491e0(uVar3);
                if (cVar1 != '\0') {
                  uVar3 = FUN_140045f40(local_418,0x100035f,1);
                }
                else {
                  uVar3 = FUN_140045f40(&local_448,0x1000359,1);
                }
                FUN_140041c60(&local_348,uVar3);
                if (cVar1 != '\0') {
                  FUN_140041b30(local_418);
                }
                else {
                  FUN_140041b30(&local_448);
                }
                FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_348);
                local_3f8 = 0x21c;
                FUN_140044220(&local_308,1);
                FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_308);
              }
              local_3f8 = 0x21f;
              if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_458);
              }
              local_458 = 0;
              local_450 = 0;
              local_44c = 5;
              FUN_140041c60(local_2e8,&DAT_1419df7b0);
              local_3c8 = local_2e8;
              FUN_140041c60(local_2d8,&DAT_1419df7b0);
              local_3c0 = local_2d8;
              ppppuVar14 = (undefined1 ****)&local_3c8;
              uVar3 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_458,2,ppppuVar14);
              cVar1 = FUN_140e491e0(uVar3);
              if (cVar1 != '\0') {
                local_3f8 = 0x221;
                FUN_140044220(&local_338,1);
                FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_338);
                local_3f8 = 0x222;
LAB_1405811c8:
                FUN_140044220(&local_308,0);
                FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_308);
              }
            }
            local_3f8 = 0x238;
            if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_458);
            }
            local_458 = 0;
            local_450 = 0;
            local_44c = 5;
            FUN_1400ec6d0(local_418,local_res8);
            uVar21 = uVar21 & 0xffffffffffffff00;
            uVar15 = (ulonglong)ppppuVar14 & 0xffffffffffffff00;
            FUN_140e87440(local_418,DAT_1419fe0e8,0x80000000,&local_3e0,uVar15,uVar21);
            FUN_140041b30(local_418);
            FUN_1400ec6d0(&local_448,local_res8);
            uVar15 = uVar15 & 0xffffffffffffff00;
            FUN_140e87440(&local_448,DAT_1419fe158,0x80000000,&local_2f8,uVar15,
                          uVar21 & 0xffffffffffffff00);
            uVar20 = (undefined4)(uVar15 >> 0x20);
            FUN_140041b30(&local_448);
            FUN_140041c60(local_2e8,&local_3e0);
            local_3c8 = local_2e8;
            uVar3 = FUN_140053820(&local_438,&local_2f8,4);
            FUN_140041c60(local_2d8,uVar3);
            FUN_140041b30(&local_438);
            local_3c0 = local_2d8;
            uVar3 = FUN_140045f40(&local_428,0x149,1);
            FUN_140041c60(local_2c8,uVar3);
            FUN_140041b30(&local_428);
            local_3b8 = local_2c8;
            uVar3 = FUN_140e634e0(local_res8,local_res10,&local_458,3,CONCAT44(uVar20,DAT_141a12628)
                                  ,&local_3c8);
            cVar1 = thunk_FUN_140e491e0(uVar3);
            if (cVar1 != '\0') {
              uVar3 = FUN_140042490(local_res8,DAT_1419fd3b8);
              cVar1 = FUN_140046dd0(uVar3,10);
              if (cVar1 != '\0') {
                local_3f8 = 0x23a;
                if ((1 << ((byte)local_3e4 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_3f0);
                }
                local_3f0 = 0;
                local_3e8 = 0;
                local_3e4 = 5;
                FUN_1400441d0(local_2b8,&DAT_1419e6550);
                local_3b0 = local_2b8;
                FUN_140041c60(&local_2a8,&DAT_1419df7b0);
                local_3a8 = &local_2a8;
                gml_Script_truestate_begin_step(local_res8,local_res10,&local_3f0,2,&local_3b0);
                local_3f8 = 0x23b;
                if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_458);
                }
                local_458 = 0;
                local_450 = 0;
                local_44c = 5;
                FUN_1400441d0(local_2e8,&DAT_1419e6510);
                local_3c8 = local_2e8;
                FUN_1400441d0(local_2d8,&DAT_1419e65b0);
                local_3c0 = local_2d8;
                FUN_1400441d0(local_2c8,&DAT_1419e6490);
                local_3b8 = local_2c8;
                FUN_140041c60(local_2b8,&DAT_1419df7b0);
                local_3b0 = local_2b8;
                ppppuVar14 = (undefined1 ****)&local_3c8;
                FUN_14044e5b0(local_res8,local_res10,&local_458,4,ppppuVar14);
                uVar20 = (undefined4)((ulonglong)ppppuVar14 >> 0x20);
                local_3f8 = 0x23c;
                if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_458);
                }
                local_458 = 0;
                local_450 = 0;
                local_44c = 5;
                uVar3 = FUN_140045f40(local_418,0x2000169,1);
                FUN_140041c60(local_2e8,uVar3);
                FUN_140041b30(local_418);
                local_3c8 = local_2e8;
                FUN_1400441d0(local_2d8,&DAT_1419e6650);
                local_3c0 = local_2d8;
                FUN_1400441d0(local_2c8,&DAT_1419df7a0);
                local_3b8 = local_2c8;
                FUN_140041c60(local_2b8,&DAT_1419df7b0);
                local_3b0 = local_2b8;
                FUN_140041c60(&local_2a8,&DAT_1419df7b0);
                local_3a8 = &local_2a8;
                FUN_140e634e0(local_res8,local_res10,&local_458,5,CONCAT44(uVar20,DAT_141a0a2e8),
                              &local_3c8);
              }
            }
            local_3f8 = 0x23f;
            if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_458);
            }
            local_458 = 0;
            local_450 = 0;
            local_44c = 5;
            uVar3 = FUN_140042490(local_res8,DAT_1419fd418);
            FUN_140e63610(local_res8,local_res10,&local_458,0,uVar3,0);
          }
        }
        else {
          local_3f8 = 499;
          local_41c = 0xf;
          local_428 = (undefined1 ****)0x100000100000347;
          FUN_140041c60(&local_348,&local_428);
          if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_428);
          }
          FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_348);
          local_3f8 = 500;
          FUN_140044220(&local_308,0);
          FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_308);
          local_3f8 = 0x1f6;
          if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_458);
          }
          local_458 = 0;
          local_450 = 0;
          local_44c = 5;
          puVar4 = (undefined8 *)(*(code *)(*local_res8)[1])(local_res8,DAT_141a1f230);
          uVar3 = (*(code *)(*local_res8)[2])(local_res8,DAT_141a1f230);
          FUN_140041c60(local_2e8,puVar4);
          local_3c8 = local_2e8;
          FUN_1400441d0(local_2d8,&DAT_141dc6700);
          local_3c0 = local_2d8;
          FUN_1400441d0(local_2c8,&DAT_1419e6530);
          local_3b8 = local_2c8;
          FUN_140e609c0(local_res8);
          uVar5 = gml_Script_arc(local_res8,local_res10,&local_458,3,&local_3c8);
          FUN_140041c60(uVar3,uVar5);
          FUN_140e60910(1);
          local_3f8 = 0x1f8;
          if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
            uVar3 = *puVar4;
          }
          else {
            uVar3 = FUN_140e4b060(puVar4);
          }
          dVar13 = (double)FUN_140e78d00(uVar3);
          bVar11 = DAT_141955260 < dVar13 - 0.2;
          if (bVar11) {
            local_3f8 = 0x1ff;
          }
          else {
            local_3f8 = 0x1fa;
            puVar4 = (undefined8 *)(*(code *)(*local_res8)[1])(local_res8,DAT_141a1f230);
          }
          FUN_140044220(&local_338,bVar11);
          FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_338);
          local_3f8 = 0x203;
          if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
            uVar3 = *puVar4;
          }
          else {
            uVar3 = FUN_140e4b060(puVar4);
          }
          dVar13 = (double)FUN_140e78d00(uVar3);
          if (dVar13 - 0.1 <= DAT_141955260) {
            local_3f8 = 0x205;
            (*(code *)(*local_res8)[1])(local_res8,DAT_141a1f230);
            uVar3 = (*(code *)(*local_res8)[2])(local_res8,DAT_141a1f230);
            FUN_140044220(uVar3,0);
            local_3f8 = 0x206;
            uVar3 = (*(code *)(*local_res8)[2])(local_res8,DAT_1419feac8);
            FUN_140044220(uVar3,0);
            local_3f8 = 0x207;
            if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_458);
            }
            local_458 = 0;
            local_450 = 0;
            local_44c = 5;
            FUN_1400441d0(local_2e8,&DAT_1419e6550);
            local_3c8 = local_2e8;
            FUN_140041c60(local_2d8,&DAT_1419df7b0);
            local_3c0 = local_2d8;
            gml_Script_truestate_begin_step(local_res8,local_res10,&local_458,2,&local_3c8);
          }
          local_3f8 = 0x20a;
          if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_458);
          }
          local_458 = 0;
          local_450 = 0;
          local_44c = 5;
          uVar3 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419fd418);
          FUN_140e63610(local_res8,local_res10,&local_458,0,uVar3,0);
        }
        local_3f8 = 0x259;
        if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_458);
        }
        local_458 = 0;
        local_450 = 0;
        local_44c = 5;
        uVar3 = FUN_140042490(local_res8,DAT_1419fd4b8);
        FUN_140e63610(local_res8,local_res10,&local_458,0,uVar3,0);
        local_3f8 = 0x25b;
        if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_458);
        }
        local_458 = 0;
        local_450 = 0;
        local_44c = 5;
        uVar3 = FUN_140045f40(local_418,0x149,1);
        FUN_140041c60(local_2e8,uVar3);
        FUN_140041b30(local_418);
        local_3c8 = local_2e8;
        gml_GlobalScript_world_pos_to_gui(local_res8,local_res10,&local_458,1,&local_3c8);
        local_3f8 = 0x25d;
      }
      else if (iVar2 == 2) {
        local_3f8 = 0x261;
        if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_458);
        }
        local_458 = 0;
        local_450 = 0;
        local_44c = 5;
        uVar3 = FUN_140042490(local_res8,DAT_1419f5b18);
        FUN_140e63610(local_res8,local_res10,&local_458,0,uVar3,0);
        local_3f8 = 0x262;
      }
      else if (iVar2 == 3) {
        local_3f8 = 0x266;
        uVar3 = FUN_1400419a0(local_res8,DAT_1419feb68);
        FUN_140044220(uVar3,0xffffffff);
        local_3f8 = 0x267;
      }
      break;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 4);
  FUN_140041b30(local_a8);
  FUN_140041b30(&local_128);
  FUN_140041b30(&local_1e8);
  FUN_140041b30(&local_1d8);
  FUN_140041b30(&local_328);
  FUN_140041b30(&local_3f0);
  FUN_140041b30(&local_458);
  FUN_140041b30(&local_1a8);
  FUN_140041b30(&local_1b8);
  FUN_140041b30(&local_198);
  FUN_140041b30(&local_318);
  FUN_140041b30(&local_188);
  FUN_140041b30(&local_178);
  FUN_140041b30(&local_168);
  FUN_140041b30(&local_158);
  FUN_140041b30(&local_2f8);
  FUN_140041b30(&local_148);
  FUN_140041b30(&local_138);
  FUN_140041b30(&local_3e0);
  FUN_140041b30(&local_1c8);
  FUN_140041b30(&local_348);
  FUN_140041b30(&local_338);
  FUN_140041b30(&local_308);
  _eh_vector_destructor_iterator_(local_2e8,0x10,0x10,FUN_140041b30);
  FUN_140041970(&local_408);
  return param_3;
}

