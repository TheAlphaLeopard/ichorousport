// gml_Script_StatesVendorIdle @ 0x1405b5120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesVendorIdle
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 **ppuVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  double dVar14;
  longlong *local_res8;
  ulonglong local_res10;
  undefined8 *local_res18;
  uint local_res20;
  code *pcVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined8 **ppuVar20;
  undefined1 **ppuVar21;
  undefined8 local_488;
  undefined4 local_480;
  undefined4 local_47c;
  undefined8 local_478;
  undefined4 local_470;
  undefined4 local_46c;
  longlong *local_468;
  undefined4 local_45c;
  undefined8 local_458;
  char *local_450;
  undefined4 local_448;
  undefined8 *local_438;
  undefined1 *local_430;
  undefined8 *local_428;
  undefined8 *local_420;
  undefined1 *local_418;
  undefined1 *local_410;
  undefined1 *local_408;
  undefined1 *local_400;
  undefined1 *local_3f8;
  undefined1 *local_3f0;
  undefined1 local_3e8 [16];
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined8 local_3c8 [2];
  undefined1 local_3b8 [16];
  undefined8 local_3a8 [2];
  undefined8 local_398 [2];
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined8 local_318;
  undefined4 local_30c;
  undefined1 local_308 [12];
  byte local_2fc;
  undefined8 local_2f8;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined4 local_2cc;
  undefined1 local_2c8 [16];
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_25c;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined8 local_238;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
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
  undefined8 *local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined1 local_108 [16];
  undefined1 local_f8 [32];
  undefined1 local_d8 [152];
  
  uVar11 = 0;
  local_res20 = 0;
  local_450 = "gml_Script_StatesVendorIntro";
  local_458 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_458;
  local_448 = 1;
  pcVar15 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_3c8,0x10,10,FUN_1400424d0,FUN_140041b30);
  local_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_30c = 0xffffff;
  local_318 = 0;
  local_2ec = 0xffffff;
  local_2f8 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57ca0);
  local_2dc = 0xffffff;
  local_2e8 = 0;
  local_2cc = 0xffffff;
  local_2d8 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_11c = 0xffffff;
  local_128 = (undefined8 *)0x0;
  local_10c = 0xffffff;
  local_118 = 0;
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef328);
  local_47c = 0;
  local_488 = 0;
  local_46c = 0;
  local_478 = 0;
  local_3cc = 0;
  local_3d8 = 0;
  local_29c = 0;
  local_2a8 = 0;
  local_2ac = 0;
  local_2b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_448 = 3;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  FUN_1400424a0(local_d8,param_5);
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de0a70) &&
     (_Init_thread_header(&DAT_141de0a70), DAT_141de0a70 == -1)) {
    _DAT_141de0b9c = 0;
    _DAT_141de0b90 = 0x4000000000000000;
    _DAT_141de0bb0 = 0;
    _DAT_141de0ba4 = 0;
    _DAT_141de0bb4 = 1;
    _DAT_141de0bc4 = 0;
    _DAT_141de0bb8 = 0x3ff0000000000000;
    _DAT_141de0bc8 = 2;
    _DAT_141de0bd8 = 0;
    _DAT_141de0bcc = 0x4008000000000000;
    _DAT_141de0bdc = 3;
    atexit((_func_5014 *)&LAB_141483520);
    _Init_thread_footer(&DAT_141de0a70);
  }
  uVar10 = 0;
  while( true ) {
    iVar3 = FUN_140e851f0(&DAT_141de0b90 + (longlong)(int)uVar10 * 0x14,local_d8,DAT_141955260,0);
    uVar13 = (undefined4)((ulonglong)pcVar15 >> 0x20);
    if (iVar3 == 0) break;
    uVar10 = uVar10 + 1;
    if (3 < uVar10) goto LAB_1405b95c0;
  }
  iVar3 = (&DAT_141de0ba0)[(longlong)(int)uVar10 * 5];
  bVar1 = (byte)local_47c;
  if (iVar3 == 0) {
    local_448 = 7;
    if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_488);
    }
    local_488 = 0;
    local_480 = 0;
    local_47c = 5;
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
    FUN_140041c60(local_3b8,uVar6);
    local_430 = local_3b8;
    FUN_140041c60(local_3a8,&DAT_141dd44f8);
    local_428 = local_3a8;
    FUN_1400441d0(local_398,&DAT_1419e6890);
    local_420 = local_398;
    ppuVar21 = &local_430;
    uVar17 = CONCAT44(uVar13,DAT_1419ff3d8);
    FUN_140e634e0(local_res8,local_res10,&local_488,3,uVar17,ppuVar21);
    local_448 = 8;
    if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_488);
    }
    local_488 = 0;
    local_480 = 0;
    local_47c = 5;
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
    local_45c = 0xf;
    local_468 = (longlong *)0x100000000000106;
    uVar17 = uVar17 & 0xffffffffffffff00;
    FUN_140e87440(&local_468,DAT_141a57b90,0x80000000,&local_168,uVar17,
                  (ulonglong)ppuVar21 & 0xffffffffffffff00);
    uVar13 = (undefined4)(uVar17 >> 0x20);
    if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_468);
    }
    FUN_140041c60(local_3c8,uVar6);
    local_438 = local_3c8;
    FUN_140041c60(local_3b8,&DAT_141dd4458);
    local_430 = local_3b8;
    uVar7 = FUN_140081e90(local_308,&local_168,0x4014000000000000);
    FUN_140041c60(local_3a8,uVar7);
    if ((1 << (local_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_308);
    }
    local_428 = local_3a8;
    uVar7 = CONCAT44(uVar13,DAT_1419ff3d8);
    FUN_140e634e0(local_res8,local_res10,&local_488,3,uVar7,&local_438);
    uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
    local_448 = 10;
    if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_488);
    }
    local_488 = 0;
    local_480 = 0;
    local_47c = 5;
    FUN_140041c60(local_3c8,uVar6);
    local_438 = local_3c8;
    FUN_140041c60(local_3b8,&DAT_141dd4428);
    local_430 = local_3b8;
    FUN_1400441d0(local_3a8,&DAT_141dc6730);
    local_428 = local_3a8;
    uVar7 = CONCAT44(uVar13,DAT_1419ff3d8);
    FUN_140e634e0(local_res8,local_res10,&local_488,3,uVar7,&local_438);
    uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
    local_448 = 0xb;
    if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_488);
    }
    local_488 = 0;
    local_480 = 0;
    local_47c = 5;
    FUN_140041c60(local_3c8,uVar6);
    local_438 = local_3c8;
    FUN_140041c60(local_3b8,&DAT_141dd4518);
    local_430 = local_3b8;
    FUN_1400441d0(local_3a8,&DAT_141dc6730);
    local_428 = local_3a8;
    uVar7 = CONCAT44(uVar13,DAT_1419ff3d8);
    FUN_140e634e0(local_res8,local_res10,&local_488,3,uVar7,&local_438);
    uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
    local_448 = 0xc;
    if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_488);
    }
    local_488 = 0;
    local_480 = 0;
    local_47c = 5;
    FUN_140041c60(local_3c8,uVar6);
    local_438 = local_3c8;
    FUN_140041c60(local_3b8,&DAT_141dd4418);
    local_430 = local_3b8;
    FUN_1400441d0(local_3a8,&DAT_141dc6730);
    local_428 = local_3a8;
    FUN_140e634e0(local_res8,local_res10,&local_488,3,CONCAT44(uVar13,DAT_1419ff3d8),&local_438);
    local_448 = 0xe;
    if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_488);
    }
    local_488 = 0;
    local_480 = 0;
    local_47c = 5;
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
    local_45c = 0xf;
    local_468 = (longlong *)0x1000000000000ee;
    plVar19 = local_res8;
    FUN_140e87170(&local_468,DAT_141a101f8,0x80000000,&local_178,local_res8,local_res10);
    uVar13 = (undefined4)((ulonglong)plVar19 >> 0x20);
    if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_468);
    }
    FUN_140041c60(local_3c8,uVar6);
    local_438 = local_3c8;
    FUN_140041c60(local_3b8,&DAT_141dd44b8);
    local_430 = local_3b8;
    FUN_140041c60(local_3a8,&local_178);
    local_428 = local_3a8;
    uVar7 = CONCAT44(uVar13,DAT_1419ff3d8);
    FUN_140e634e0(local_res8,local_res10,&local_488,3,uVar7,&local_438);
    uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
    local_448 = 0xf;
    if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_488);
    }
    local_488 = 0;
    local_480 = 0;
    local_47c = 5;
    FUN_140041c60(local_3c8,uVar6);
    local_438 = local_3c8;
    FUN_140041c60(local_3b8,&DAT_141dd4488);
    local_430 = local_3b8;
    FUN_1400441d0(local_3a8,&DAT_1419e68d0);
    local_428 = local_3a8;
    FUN_140e634e0(local_res8,local_res10,&local_488,3,CONCAT44(uVar13,DAT_1419ff3d8),&local_438);
    local_448 = 0x11;
    uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5ef8);
    FUN_140044220(uVar6,0xffffffff);
    local_448 = 0x13;
    local_45c = 0xf;
    local_468 = (longlong *)0x100000100000332;
    FUN_140041c60(&local_318,&local_468);
    if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_468);
    }
    FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_318);
    local_448 = 0x14;
    FUN_140044220(&local_2f8,0);
    FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_2f8);
    local_448 = 0x16;
    local_45c = 0xd;
    local_468 = (longlong *)0x0;
    FUN_140041c60(uVar4,&local_468);
    if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_468);
    }
    local_448 = 0x17;
    local_45c = 0xd;
    local_468 = (longlong *)0x0;
    FUN_140041c60(uVar5,&local_468);
    if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_468);
    }
    local_448 = 0x19;
    goto LAB_1405b95c0;
  }
  if (iVar3 != 1) {
    if (iVar3 == 2) {
      local_448 = 0xdb;
      if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_488);
      }
      local_488 = 0;
      local_480 = 0;
      local_47c = 5;
      uVar4 = FUN_140042490(local_res8,DAT_1419f5b18);
      FUN_140e63610(local_res8,local_res10,&local_488,0,uVar4,0);
      local_448 = 0xdc;
    }
    else if (iVar3 == 3) {
      local_448 = 0xe0;
    }
    goto LAB_1405b95c0;
  }
  local_448 = 0x1f;
  if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_488);
  }
  local_488 = 0;
  local_480 = 0;
  local_47c = 5;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
  FUN_140041c60(local_3c8,uVar7);
  local_438 = local_3c8;
  FUN_140041c60(local_3b8,&DAT_141dd44f8);
  uVar16 = CONCAT44(uVar13,DAT_1419ff4f8);
  local_430 = local_3b8;
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_488,2,uVar16,&local_438);
  uVar13 = (undefined4)((ulonglong)uVar16 >> 0x20);
  cVar2 = FUN_140041d90(uVar7,0xffffffff);
  if (cVar2 == '\0') {
    local_448 = 0x2e;
    if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_488);
    }
    local_488 = 0;
    local_480 = 0;
    local_47c = 5;
    uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
    FUN_140041c60(local_3c8,uVar7);
    local_438 = local_3c8;
    FUN_140041c60(local_3b8,&DAT_141dd44f8);
    uVar16 = CONCAT44(uVar13,DAT_1419ff4f8);
    local_430 = local_3b8;
    uVar7 = FUN_140e634e0(local_res8,local_res10,&local_488,2,uVar16,&local_438);
    uVar13 = (undefined4)((ulonglong)uVar16 >> 0x20);
    cVar2 = FUN_140041d90(uVar7,0);
    if (cVar2 == '\0') {
      local_448 = 0x43;
      if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_488);
      }
      local_488 = 0;
      local_480 = 0;
      local_47c = 5;
      uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
      FUN_140041c60(local_3c8,uVar7);
      local_438 = local_3c8;
      FUN_140041c60(local_3b8,&DAT_141dd44f8);
      ppuVar20 = &local_438;
      uVar16 = CONCAT44(uVar13,DAT_1419ff4f8);
      local_430 = local_3b8;
      uVar7 = FUN_140e634e0(local_res8,local_res10,&local_488,2,uVar16,ppuVar20);
      uVar13 = (undefined4)((ulonglong)uVar16 >> 0x20);
      cVar2 = FUN_140041d90(uVar7,1);
      if (cVar2 == '\0') {
        local_448 = 0x61;
        if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_488);
        }
        local_488 = 0;
        local_480 = 0;
        local_47c = 5;
        uVar7 = FUN_140042490(local_res8,DAT_1419fd438);
        FUN_140041c60(local_3c8,uVar7);
        local_438 = local_3c8;
        FUN_140041c60(local_3b8,&DAT_141dd44f8);
        ppuVar20 = &local_438;
        uVar17 = CONCAT44(uVar13,DAT_1419ff4f8);
        local_430 = local_3b8;
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_488,2,uVar17,ppuVar20);
        cVar2 = FUN_140041d90(uVar7,2);
        if (cVar2 != '\0') {
          local_448 = 99;
          uVar4 = FUN_140045f40(local_328,0xee,1);
          iVar3 = FUN_140e63cb0(local_f8,&local_res8,&local_res10,uVar4);
          FUN_140041b30(local_328);
          if (0 < iVar3) {
            do {
              local_448 = 0x66;
              uVar4 = FUN_1400419a0(local_res8,DAT_1419fd428);
              uVar13 = FUN_140e794b0(&DAT_bff0000000000000,0);
              FUN_140041cb0(uVar4,uVar13);
              local_448 = 0x67;
              uVar4 = FUN_1400419a0(local_res8,DAT_1419fd5d8);
              uVar13 = FUN_140e794b0(&DAT_bff0000000000000,0);
              FUN_140041cb0(uVar4,uVar13);
              local_448 = 0x68;
              uVar4 = FUN_1400419a0(local_res8,DAT_141a1f500);
              FUN_140044220(uVar4,0);
              local_448 = 0x69;
              if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_488);
              }
              local_488 = 0;
              local_480 = 0;
              local_47c = 5;
              uVar4 = FUN_140042490(local_res8,DAT_1419f5e38);
              uVar18 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
              uVar17 = uVar17 & 0xffffffffffffff00;
              FUN_140e87440(uVar4,DAT_1419f5868,0x80000000,&local_298,uVar17,uVar18);
              FUN_140e87440(&local_298,DAT_1419f5848,0x80000000,&local_1f8,
                            uVar17 & 0xffffffffffffff00,uVar18 & 0xffffffffffffff00);
              FUN_140041c60(local_3c8,&DAT_141dd44e8);
              local_438 = local_3c8;
              uVar4 = FUN_140069500(&local_298);
              ppuVar20 = &local_438;
              puVar12 = &local_1f8;
              uVar4 = FUN_140e63610(uVar4,local_res10,&local_488,1,puVar12,ppuVar20);
              cVar2 = FUN_140e491e0(uVar4);
              if (cVar2 == '\0') {
                local_448 = 0x69;
                if ((1 << ((byte)local_46c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_478);
                }
                local_478 = 0;
                local_470 = 0;
                local_46c = 5;
                uVar4 = FUN_140042490(local_res8,DAT_1419f5e38);
                uVar18 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
                uVar17 = (ulonglong)puVar12 & 0xffffffffffffff00;
                FUN_140e87440(uVar4,DAT_1419f5868,0x80000000,&local_298,uVar17,uVar18);
                FUN_140e87440(&local_298,DAT_141a55540,0x80000000,&local_138,
                              uVar17 & 0xffffffffffffff00,uVar18 & 0xffffffffffffff00);
                FUN_140041c60(local_3b8,&DAT_141dd44e8);
                local_430 = local_3b8;
                uVar4 = FUN_140069500(&local_298);
                puVar12 = &local_138;
                FUN_140e63610(uVar4,local_res10,&local_478,1,puVar12,&local_430);
              }
              uVar13 = (undefined4)((ulonglong)puVar12 >> 0x20);
              local_448 = 0x6a;
              uVar4 = FUN_140045f40(local_328,0x1000411,1);
              FUN_140041c60(&local_318,uVar4);
              FUN_140041b30(local_328);
              FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_318);
              local_448 = 0x6b;
              FUN_140044220(&local_2f8,2);
              FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_2f8);
              local_448 = 0x6c;
              FUN_140044220(&local_158,2);
              uVar4 = FUN_140042490(local_res8,DAT_1419f5e38);
              FUN_140e86c30(uVar4,DAT_141a0a818,0x80000000,&local_158);
              local_448 = 0x6e;
              if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_488);
              }
              local_488 = 0;
              local_480 = 0;
              local_47c = 5;
              uVar4 = FUN_140042490(local_res10,DAT_1419fd438);
              FUN_140041c60(local_3c8,uVar4);
              local_438 = local_3c8;
              FUN_140041c60(local_3b8,&DAT_141dd4428);
              ppuVar20 = &local_438;
              uVar17 = CONCAT44(uVar13,DAT_1419ff4f8);
              local_430 = local_3b8;
              uVar5 = FUN_140e634e0(local_res8,local_res10,&local_488,2,uVar17,ppuVar20);
              uVar5 = FUN_140041980(uVar5);
              dVar14 = (double)FUN_1412a79b0(uVar5,0);
              if (dVar14 == 0.0) {
                local_448 = 0x71;
                if ((1 << ((byte)local_46c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_478);
                }
                local_478 = 0;
                local_470 = 0;
                local_46c = 5;
                FUN_1400441d0(local_3a8,&DAT_1419e6870);
                local_428 = local_3a8;
                FUN_1400441d0(local_398,&DAT_1419e68e0);
                local_420 = local_398;
                uVar4 = FUN_140e78db0(&local_478,2,&local_428);
                cVar2 = FUN_140041d90(uVar4,1);
                if (cVar2 == '\0') {
                  uVar4 = FUN_140041c20(local_2c8,0x87);
                  uVar11 = uVar11 | 2;
                }
                else {
                  uVar4 = FUN_140041c20(local_248,0x2d);
                  uVar11 = uVar11 | 1;
                }
                local_res20 = uVar11;
                FUN_140041c60(&local_218,uVar4);
                if ((uVar11 & 2) != 0) {
                  uVar11 = uVar11 & 0xfffffffd;
                  local_res20 = uVar11;
                  FUN_140041b30(local_2c8);
                }
                if ((uVar11 & 1) != 0) {
                  uVar11 = uVar11 & 0xfffffffe;
                  local_res20 = uVar11;
                  FUN_140041b30(local_248);
                }
                local_448 = 0x72;
                uVar13 = FUN_140e794b0(0x3ff0000000000000,0);
                FUN_140041cb0(&local_148,uVar13);
                local_448 = 0x73;
                uVar13 = FUN_140e794b0(0xc02e000000000000,0);
                FUN_140162c50(&local_218,uVar13);
                local_448 = 0x78;
                if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_488);
                }
                local_488 = 0;
                local_480 = 0;
                local_47c = 5;
                FUN_1400ec6d0(local_308,local_res8);
                uVar18 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
                uVar17 = uVar17 & 0xffffffffffffff00;
                FUN_140e87440(local_308,DAT_1419fe0e8,0x80000000,&local_268,uVar17,uVar18);
                FUN_140041b30(local_308);
                FUN_1400ec6d0(&local_468,local_res8);
                FUN_140e87440(&local_468,DAT_1419fe158,0x80000000,&local_278,
                              uVar17 & 0xffffffffffffff00,uVar18 & 0xffffffffffffff00);
                FUN_140041b30(&local_468);
                FUN_140041c60(local_3c8,&local_268);
                local_438 = local_3c8;
                uVar4 = FUN_140e794b0(0xc014000000000000,0);
                uVar4 = FUN_1400c4980(local_258,&local_278,uVar4);
                FUN_140041c60(local_3b8,uVar4);
                FUN_140041b30(local_258);
                local_428 = &local_218;
                local_420 = &local_148;
                local_430 = local_3b8;
                FUN_1400441d0(local_388,&DAT_1419e68e0);
                local_418 = local_388;
                FUN_140041c60(local_378,&DAT_1419df7b0);
                local_410 = local_378;
                FUN_140041c60(local_368,&DAT_1419df7b0);
                local_408 = local_368;
                ppuVar20 = &local_438;
                gml_Script_get_blood_col(local_res8,local_res10,&local_488,7,ppuVar20);
                uVar13 = (undefined4)((ulonglong)ppuVar20 >> 0x20);
                local_448 = 0x7a;
                if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_488);
                }
                local_488 = 0;
                local_480 = 0;
                local_47c = 5;
                if ((1 << ((byte)local_46c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_478);
                }
                local_478 = 0;
                local_470 = 0;
                local_46c = 5;
                uVar4 = FUN_140042490(local_res10,DAT_1419fd438);
                FUN_140041c60(local_3c8,uVar4);
                local_438 = local_3c8;
                FUN_140041c60(local_3b8,&DAT_141dd4458);
                local_430 = local_3b8;
                FUN_140041c60(local_3a8,uVar4);
                local_428 = local_3a8;
                FUN_140041c60(local_398,&DAT_141dd4458);
                local_420 = local_398;
                uVar6 = CONCAT44(uVar13,DAT_1419ff4f8);
                uVar5 = FUN_140e634e0(local_res8,local_res10,&local_478,2,uVar6,&local_438);
                uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
                uVar5 = FUN_140053940(local_108,uVar5,1);
                FUN_140041c60(local_388,uVar5);
                FUN_140041b30(local_108);
                local_418 = local_388;
                uVar17 = CONCAT44(uVar13,DAT_1419fd648);
                FUN_140e634e0(local_res8,local_res10,&local_488,3,uVar17,&local_428);
              }
              uVar13 = (undefined4)(uVar17 >> 0x20);
              local_448 = 0x7c;
              if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_488);
              }
              local_488 = 0;
              local_480 = 0;
              local_47c = 5;
              if ((1 << ((byte)local_46c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_478);
              }
              local_478 = 0;
              local_470 = 0;
              local_46c = 5;
              FUN_140041c60(local_3c8,uVar4);
              local_438 = local_3c8;
              FUN_140041c60(local_3b8,&DAT_141dd4428);
              local_430 = local_3b8;
              FUN_140041c60(local_3a8,uVar4);
              local_428 = local_3a8;
              FUN_140041c60(local_398,&DAT_141dd4428);
              local_420 = local_398;
              uVar5 = CONCAT44(uVar13,DAT_1419ff4f8);
              uVar4 = FUN_140e634e0(local_res8,local_res10,&local_478,2,uVar5,&local_438);
              uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
              uVar4 = FUN_140053820(local_3e8,uVar4,1);
              FUN_140041c60(local_388,uVar4);
              FUN_140041b30(local_3e8);
              local_418 = local_388;
              ppuVar20 = &local_428;
              uVar17 = CONCAT44(uVar13,DAT_1419fd648);
              FUN_140e634e0(local_res8,local_res10,&local_488,3,uVar17,ppuVar20);
              cVar2 = FUN_140e643f0(local_f8,&local_res8,&local_res10);
            } while (cVar2 != '\0');
          }
          uVar13 = (undefined4)(uVar17 >> 0x20);
          FUN_140e63970(local_f8,&local_res8,&local_res10);
          local_448 = 0x80;
          if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_488);
          }
          local_488 = 0;
          local_480 = 0;
          local_47c = 5;
          uVar4 = FUN_140042490(local_res8,DAT_1419fd438);
          FUN_140041c60(local_3c8,uVar4);
          local_438 = local_3c8;
          FUN_140041c60(local_3b8,&DAT_141dd4458);
          uVar5 = CONCAT44(uVar13,DAT_1419ff4f8);
          local_430 = local_3b8;
          uVar4 = FUN_140e634e0(local_res8,local_res10,&local_488,2,uVar5,&local_438);
          uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
          cVar2 = FUN_140046c90(uVar4,0);
          if (cVar2 == '\0') {
            if ((1 << ((byte)local_46c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_478);
            }
            local_478 = 0;
            local_470 = 0;
            local_46c = 5;
            if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3d8);
            }
            local_3d8 = 0;
            local_3d0 = 0;
            local_3cc = 5;
            uVar4 = FUN_140042490(local_res8,DAT_1419fd438);
            FUN_140041c60(local_3a8,uVar4);
            local_428 = local_3a8;
            FUN_140041c60(local_398,&DAT_141dd4428);
            local_420 = local_398;
            FUN_1400441d0(local_388,&DAT_141dc6730);
            local_418 = local_388;
            uVar5 = CONCAT44(uVar13,DAT_141a0a0d8);
            uVar4 = FUN_140e634e0(local_res8,local_res10,&local_3d8,1,uVar5,&local_418);
            uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
            uVar4 = FUN_140087a30(local_3e8,uVar4,5);
            uVar6 = CONCAT44(uVar13,DAT_1419ff4f8);
            uVar5 = FUN_140e634e0(local_res8,local_res10,&local_478,2,uVar6,&local_428);
            uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
            cVar2 = FUN_140046da0(uVar5,uVar4);
            FUN_140041b30(local_3e8);
            if (cVar2 != '\0') goto LAB_1405b794e;
          }
          else {
LAB_1405b794e:
            local_448 = 0x82;
            if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            local_2a8 = 0;
            local_2a0 = 0;
            local_29c = 5;
            if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            local_2b8 = 0;
            local_2b0 = 0;
            local_2ac = 5;
            uVar4 = FUN_140042490(local_res8,DAT_1419fd438);
            FUN_140041c60(local_378,uVar4);
            local_410 = local_378;
            FUN_140041c60(local_368,&DAT_141dd44f8);
            local_408 = local_368;
            FUN_140041c60(local_358,uVar4);
            local_400 = local_358;
            FUN_140041c60(local_348,&DAT_141dd44f8);
            local_3f8 = local_348;
            uVar5 = CONCAT44(uVar13,DAT_1419ff4f8);
            uVar4 = FUN_140e634e0(local_res8,local_res10,&local_2b8,2,uVar5,&local_410);
            uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
            uVar4 = FUN_140053820(local_3e8,uVar4,1);
            FUN_140041c60(local_338,uVar4);
            FUN_140041b30(local_3e8);
            local_3f0 = local_338;
            FUN_140e634e0(local_res8,local_res10,&local_2a8,3,CONCAT44(uVar13,DAT_1419fd648),
                          &local_400);
            local_448 = 0x83;
            uVar4 = FUN_140045f40(local_328,0x1000328,1);
            FUN_140041c60(&local_318,uVar4);
            FUN_140041b30(local_328);
            FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_318);
            local_448 = 0x84;
            FUN_140044220(&local_2e8,0);
            FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_2e8);
          }
          FUN_140045ef0(local_f8);
          local_448 = 0xd7;
LAB_1405b95c0:
          FUN_140041b30(local_d8);
          FUN_140041b30(&local_2b8);
          FUN_140041b30(&local_2a8);
          FUN_140041b30(&local_3d8);
          FUN_140041b30(&local_478);
          FUN_140041b30(&local_488);
          FUN_140041b30(&local_118);
          FUN_140041b30(&local_128);
          FUN_140041b30(&local_228);
          FUN_140041b30(&local_148);
          FUN_140041b30(&local_218);
          FUN_140041b30(&local_158);
          FUN_140041b30(&local_138);
          FUN_140041b30(&local_1f8);
          FUN_140041b30(&local_298);
          FUN_140041b30(&local_1e8);
          FUN_140041b30(&local_1d8);
          FUN_140041b30(&local_1c8);
          FUN_140041b30(&local_1b8);
          FUN_140041b30(&local_1a8);
          FUN_140041b30(&local_288);
          FUN_140041b30(&local_238);
          FUN_140041b30(&local_198);
          FUN_140041b30(&local_208);
          FUN_140041b30(&local_188);
          FUN_140041b30(&local_278);
          FUN_140041b30(&local_268);
          FUN_140041b30(&local_2d8);
          FUN_140041b30(&local_2e8);
          FUN_140041b30(&local_2f8);
          FUN_140041b30(&local_318);
          FUN_140041b30(&local_178);
          FUN_140041b30(&local_168);
          _eh_vector_destructor_iterator_(local_3c8,0x10,10,FUN_140041b30);
          FUN_140041970(&local_458);
          return local_res18;
        }
        local_448 = 0x88;
        if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_488);
        }
        uVar13 = (undefined4)(uVar17 >> 0x20);
        local_488 = 0;
        local_480 = 0;
        local_47c = 5;
        uVar7 = FUN_140042490(local_res8,DAT_1419fd438);
        FUN_140041c60(local_3c8,uVar7);
        local_438 = local_3c8;
        FUN_140041c60(local_3b8,&DAT_141dd44f8);
        ppuVar20 = &local_438;
        uVar16 = CONCAT44(uVar13,DAT_1419ff4f8);
        local_430 = local_3b8;
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_488,2,uVar16,ppuVar20);
        uVar13 = (undefined4)((ulonglong)uVar16 >> 0x20);
        cVar2 = FUN_140041d90(uVar7,3);
        if (cVar2 != '\0') {
          local_448 = 0x8a;
          if ((1 << ((byte)local_46c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_478);
          }
          local_478 = 0;
          local_470 = 0;
          local_46c = 5;
          uVar7 = FUN_140045f40(local_3e8,0x1000328,1);
          FUN_140041c60(local_3a8,uVar7);
          FUN_140041b30(local_3e8);
          local_428 = local_3a8;
          FUN_140041c60(local_398,&DAT_1419df7b0);
          local_420 = local_398;
          ppuVar8 = &local_428;
          uVar7 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_478,2,ppuVar8);
          cVar2 = FUN_140e491e0(uVar7);
          if (cVar2 != '\0') {
            local_448 = 0x8c;
            FUN_140044220(&local_2f8,0);
            FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_2f8);
            local_448 = 0x8d;
            FUN_140044220(&local_2e8,0);
            FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_2e8);
            local_448 = 0x8e;
            uVar7 = FUN_140045f40(local_3e8,0x1000332,1);
            FUN_140041c60(&local_318,uVar7);
            FUN_140041b30(local_3e8);
            FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_318);
            local_448 = 0x8f;
            if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_488);
            }
            local_488 = 0;
            local_480 = 0;
            local_47c = 5;
            uVar7 = FUN_140045f40(local_3e8,0xee,1);
            uVar18 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
            uVar17 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
            FUN_140e87440(uVar7,DAT_1419f5868,0x80000000,&local_228,uVar17,uVar18);
            FUN_140041b30(local_3e8);
            FUN_140e87440(&local_228,DAT_141a55540,0x80000000,&local_128,uVar17 & 0xffffffffffffff00
                          ,uVar18 & 0xffffffffffffff00);
            FUN_140041c60(local_3c8,&DAT_141dd4438);
            local_438 = local_3c8;
            uVar7 = FUN_140069500(&local_228);
            ppuVar20 = &local_438;
            ppuVar8 = &local_128;
            FUN_140e63610(uVar7,local_res10,&local_488,1,ppuVar8,ppuVar20);
            local_448 = 0x91;
            uVar7 = FUN_1400441b0(local_328,0);
            FUN_140041c60(uVar4,uVar7);
            FUN_140041b30(local_328);
            local_448 = 0x92;
            uVar4 = FUN_1400441b0(local_2c8,0);
            FUN_140041c60(uVar5,uVar4);
            FUN_140041b30(local_2c8);
          }
          local_448 = 0x96;
          uVar4 = FUN_140045f40(local_3e8,0xee,1);
          iVar3 = FUN_140e63cb0(local_f8,&local_res8,&local_res10,uVar4);
          FUN_140041b30(local_3e8);
          if (0 < iVar3) {
            do {
              local_448 = 0x98;
              if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_488);
              }
              local_488 = 0;
              local_480 = 0;
              local_47c = 5;
              FUN_1400ec6d0(local_308,local_res8);
              uVar18 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
              uVar17 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
              FUN_140e87440(local_308,DAT_1419fe0e8,0x80000000,&local_268,uVar17,uVar18);
              FUN_140041b30(local_308);
              FUN_1400ec6d0(&local_468,local_res8);
              uVar17 = uVar17 & 0xffffffffffffff00;
              FUN_140e87440(&local_468,DAT_1419fe158,0x80000000,&local_278,uVar17,
                            uVar18 & 0xffffffffffffff00);
              uVar13 = (undefined4)(uVar17 >> 0x20);
              FUN_140041b30(&local_468);
              FUN_140041c60(local_3c8,&local_268);
              local_438 = local_3c8;
              uVar4 = FUN_140053820(local_3e8,&local_278,1);
              FUN_140041c60(local_3b8,uVar4);
              FUN_140041b30(local_3e8);
              local_430 = local_3b8;
              uVar4 = FUN_140045f40(local_328,0x149,1);
              FUN_140041c60(local_3a8,uVar4);
              FUN_140041b30(local_328);
              local_428 = local_3a8;
              uVar5 = CONCAT44(uVar13,DAT_141a12628);
              uVar4 = FUN_140e634e0(local_res8,local_res10,&local_488,3,uVar5,&local_438);
              uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
              cVar2 = FUN_140e491e0(uVar4);
              if (cVar2 != '\0') {
                local_448 = 0x9a;
                uVar4 = FUN_1400419a0(local_res8,DAT_1419fd428);
                FUN_140044220(uVar4,0);
                local_448 = 0x9b;
                uVar4 = FUN_1400419a0(local_res8,DAT_1419fd5d8);
                FUN_140044220(uVar4,1);
                local_448 = 0x9d;
                if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_488);
                }
                local_488 = 0;
                local_480 = 0;
                local_47c = 5;
                if ((1 << ((byte)local_46c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_478);
                }
                local_478 = 0;
                local_470 = 0;
                local_46c = 5;
                uVar4 = FUN_140042490(local_res10,DAT_1419fd438);
                FUN_140041c60(local_3c8,uVar4);
                local_438 = local_3c8;
                FUN_140041c60(local_3b8,&DAT_141dd4518);
                local_430 = local_3b8;
                FUN_1400441d0(local_3a8,&DAT_141dc6730);
                local_428 = local_3a8;
                uVar7 = CONCAT44(uVar13,DAT_141a0a0d8);
                uVar5 = FUN_140e634e0(local_res8,local_res10,&local_478,1,uVar7,&local_428);
                uVar16 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),DAT_1419ff4f8);
                uVar7 = FUN_140e634e0(local_res8,local_res10,&local_488,2,uVar16,&local_438);
                uVar13 = (undefined4)((ulonglong)uVar16 >> 0x20);
                cVar2 = FUN_140046da0(uVar7,uVar5);
                if (cVar2 != '\0') {
                  local_448 = 0x9f;
                  FUN_140044220(&local_118,1);
                  FUN_140e86fa0(local_res10,DAT_141a0a818,0x80000000,&local_118);
                  local_448 = 0xa0;
                  if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_488);
                  }
                  local_488 = 0;
                  local_480 = 0;
                  local_47c = 5;
                  uVar4 = FUN_140045f40(local_2c8,0x20000a9,1);
                  FUN_140041c60(local_3c8,uVar4);
                  FUN_140041b30(local_2c8);
                  local_438 = local_3c8;
                  FUN_1400441d0(local_3b8,&DAT_1419e6860);
                  local_430 = local_3b8;
                  FUN_1400441d0(local_3a8,&DAT_1419df7a0);
                  local_428 = local_3a8;
                  FUN_140e634e0(local_res8,local_res10,&local_488,3,CONCAT44(uVar13,DAT_141a0a2e8),
                                &local_438);
                  local_448 = 0xa2;
                  cVar2 = FUN_140041d90(uVar6,0);
                  if (cVar2 == '\0') {
                    local_448 = 0xa5;
                    if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_488);
                    }
                    puVar9 = &DAT_141dd4468;
                  }
                  else {
                    local_448 = 0xa3;
                    if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_488);
                    }
                    puVar9 = &DAT_141dd4498;
                  }
                  local_488 = 0;
                  local_480 = 0;
                  local_47c = 5;
                  FUN_140041c60(local_3c8,puVar9);
                  local_438 = local_3c8;
                  ppuVar20 = &local_438;
                  gml_Script_CreateBossUi(local_res8,local_res10,&local_488,1,ppuVar20);
                  uVar13 = (undefined4)((ulonglong)ppuVar20 >> 0x20);
                  local_448 = 0xa7;
                  if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_488);
                  }
                  local_488 = 0;
                  local_480 = 0;
                  local_47c = 5;
                  if ((1 << ((byte)local_46c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_478);
                  }
                  local_478 = 0;
                  local_470 = 0;
                  local_46c = 5;
                  uVar4 = FUN_140042490(local_res10,DAT_1419fd438);
                  FUN_140041c60(local_3c8,uVar4);
                  local_438 = local_3c8;
                  FUN_140041c60(local_3b8,&DAT_141dd44f8);
                  local_430 = local_3b8;
                  FUN_140041c60(local_3a8,uVar4);
                  local_428 = local_3a8;
                  FUN_140041c60(local_398,&DAT_141dd44f8);
                  local_420 = local_398;
                  uVar7 = CONCAT44(uVar13,DAT_1419ff4f8);
                  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_478,2,uVar7,&local_438);
                  uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
                  uVar5 = FUN_140053820(local_248,uVar5,1);
                  FUN_140041c60(local_388,uVar5);
                  FUN_140041b30(local_248);
                  local_418 = local_388;
                  uVar5 = CONCAT44(uVar13,DAT_1419fd648);
                  FUN_140e634e0(local_res8,local_res10,&local_488,3,uVar5,&local_428);
                  uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
                }
                local_448 = 0xab;
                if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_488);
                }
                local_488 = 0;
                local_480 = 0;
                local_47c = 5;
                if ((1 << ((byte)local_46c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_478);
                }
                local_478 = 0;
                local_470 = 0;
                local_46c = 5;
                FUN_140041c60(local_3c8,uVar4);
                local_438 = local_3c8;
                FUN_140041c60(local_3b8,&DAT_141dd4518);
                local_430 = local_3b8;
                FUN_140041c60(local_3a8,uVar4);
                local_428 = local_3a8;
                FUN_140041c60(local_398,&DAT_141dd4518);
                local_420 = local_398;
                uVar5 = CONCAT44(uVar13,DAT_1419ff4f8);
                uVar4 = FUN_140e634e0(local_res8,local_res10,&local_478,2,uVar5,&local_438);
                uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
                uVar4 = FUN_140053820(local_258,uVar4,1);
                FUN_140041c60(local_388,uVar4);
                FUN_140041b30(local_258);
                local_418 = local_388;
                FUN_140e634e0(local_res8,local_res10,&local_488,3,CONCAT44(uVar13,DAT_1419fd648),
                              &local_428);
              }
              local_448 = 0xae;
              if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_488);
              }
              local_488 = 0;
              local_480 = 0;
              local_47c = 5;
              ppuVar8 = (undefined8 **)FUN_140042490(local_res8,DAT_1419fd4b8);
              ppuVar20 = (undefined8 **)0x0;
              FUN_140e63610(local_res8,local_res10,&local_488,0,ppuVar8,0);
              cVar2 = FUN_140e643f0(local_f8,&local_res8,&local_res10);
            } while (cVar2 != '\0');
          }
          FUN_140e63970(local_f8,&local_res8,&local_res10);
          FUN_140045ef0(local_f8);
          local_448 = 0xd7;
          goto LAB_1405b95c0;
        }
        local_448 = 0xb3;
        if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_488);
        }
        local_488 = 0;
        local_480 = 0;
        local_47c = 5;
        uVar6 = FUN_140042490(local_res8,DAT_1419fd438);
        FUN_140041c60(local_3c8,uVar6);
        local_438 = local_3c8;
        FUN_140041c60(local_3b8,&DAT_141dd44f8);
        ppuVar20 = &local_438;
        local_430 = local_3b8;
        uVar6 = FUN_140e634e0(local_res8,local_res10,&local_488,2,CONCAT44(uVar13,DAT_1419ff4f8),
                              ppuVar20);
        cVar2 = FUN_140041d90(uVar6,4);
        if (cVar2 != '\0') {
          local_448 = 0xb5;
          uVar6 = FUN_1400441b0(local_3e8,0);
          FUN_140041c60(uVar4,uVar6);
          FUN_140041b30(local_3e8);
          local_448 = 0xb6;
          uVar4 = FUN_1400441b0(local_328,0);
          FUN_140041c60(uVar5,uVar4);
          FUN_140041b30(local_328);
          local_448 = 0xb8;
          if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_488);
          }
          local_488 = 0;
          local_480 = 0;
          local_47c = 5;
          FUN_140041c60(local_3c8,&DAT_1419df7b0);
          local_438 = local_3c8;
          FUN_140041c60(local_3b8,&DAT_1419df7b0);
          ppuVar8 = &local_438;
          local_430 = local_3b8;
          uVar4 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_488,2,ppuVar8);
          cVar2 = thunk_FUN_140e491e0(uVar4);
          if (cVar2 != '\0') {
            FUN_1400ec6d0(local_308,local_res8);
            ppuVar8 = (undefined8 **)((ulonglong)ppuVar8 & 0xffffffffffffff00);
            FUN_140e87440(local_308,DAT_141a0a728,0x80000000,&local_2d8,ppuVar8,
                          (ulonglong)ppuVar20 & 0xffffffffffffff00);
            FUN_140041b30(local_308);
            uVar4 = FUN_140045f40(local_3e8,0x1000332,1);
            cVar2 = FUN_140041d70(&local_2d8,uVar4);
            FUN_140041b30(local_3e8);
            if (cVar2 != '\0') {
              local_448 = 0xba;
              FUN_140044220(&local_2f8,0);
              FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_2f8);
              local_448 = 0xbb;
              FUN_140044220(&local_2e8,6);
              FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_2e8);
            }
          }
          uVar13 = (undefined4)((ulonglong)ppuVar8 >> 0x20);
          local_448 = 0xbf;
          if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_488);
          }
          local_488 = 0;
          local_480 = 0;
          local_47c = 5;
          uVar4 = FUN_140045f40(local_3e8,0x7e,1);
          FUN_140041c60(local_3c8,uVar4);
          FUN_140041b30(local_3e8);
          local_438 = local_3c8;
          ppuVar20 = &local_438;
          uVar17 = CONCAT44(uVar13,DAT_141a02ef8);
          uVar4 = FUN_140e634e0(local_res8,local_res10,&local_488,1,uVar17,ppuVar20);
          cVar2 = FUN_140e491e0(uVar4);
          if (cVar2 == '\0') {
            local_448 = 0xc1;
            FUN_1400ec6d0(local_308,local_res8);
            uVar18 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
            FUN_140e87440(local_308,DAT_141a0a728,0x80000000,&local_2d8,uVar17 & 0xffffffffffffff00,
                          uVar18);
            FUN_140041b30(local_308);
            uVar4 = FUN_140045f40(local_3e8,0x1000332,1);
            cVar2 = FUN_140041d70(&local_2d8,uVar4);
            FUN_140041b30(local_3e8);
            if (cVar2 != '\0') {
              local_448 = 0xc3;
              FUN_140044220(&local_2f8,1);
              FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_2f8);
              local_448 = 0xc4;
              uVar4 = FUN_140045f40(local_3e8,0x1000333,1);
              FUN_140041c60(&local_318,uVar4);
              FUN_140041b30(local_3e8);
              FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_318);
              local_448 = 0xc5;
              FUN_140044220(&local_2e8,0);
              FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_2e8);
            }
            local_448 = 0xc9;
            if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_488);
            }
            local_488 = 0;
            local_480 = 0;
            local_47c = 5;
            FUN_140041c60(local_3c8,&DAT_1419df7b0);
            local_438 = local_3c8;
            FUN_140041c60(local_3b8,&DAT_1419df7b0);
            ppuVar20 = &local_438;
            local_430 = local_3b8;
            uVar4 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_488,2,ppuVar20);
            cVar2 = thunk_FUN_140e491e0(uVar4);
            if (cVar2 != '\0') {
              FUN_1400ec6d0(local_308,local_res8);
              FUN_140e87440(local_308,DAT_141a0a728,0x80000000,&local_2d8,
                            (ulonglong)ppuVar20 & 0xffffffffffffff00,uVar18 & 0xffffffffffffff00);
              FUN_140041b30(local_308);
              uVar4 = FUN_140045f40(local_3e8,0x1000333,1);
              cVar2 = FUN_140041d70(&local_2d8,uVar4);
              FUN_140041b30(local_3e8);
              if (cVar2 != '\0') {
                local_448 = 0xcb;
                if ((1 << ((byte)local_46c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_478);
                }
                local_478 = 0;
                local_470 = 0;
                local_46c = 5;
                FUN_1400441d0(local_3a8,&DAT_1419e68a0);
                local_428 = local_3a8;
                FUN_140041c60(local_398,&DAT_1419df7b0);
                local_420 = local_398;
                ppuVar20 = &local_428;
                gml_Script_truestate_begin_step(local_res8,local_res10,&local_478,2,ppuVar20);
                uVar13 = (undefined4)((ulonglong)ppuVar20 >> 0x20);
                local_448 = 0xcc;
                if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_488);
                }
                local_488 = 0;
                local_480 = 0;
                local_47c = 5;
                uVar4 = FUN_140045f40(local_3e8,0x20000a9,1);
                FUN_140041c60(local_3c8,uVar4);
                FUN_140041b30(local_3e8);
                local_438 = local_3c8;
                FUN_140e634e0(local_res8,local_res10,&local_488,1,CONCAT44(uVar13,DAT_141a07788),
                              &local_438);
                local_448 = 0xcd;
                FUN_140044220(&local_2f8,0);
                FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_2f8);
                local_448 = 0xcf;
                FUN_140044220(&local_2e8,0);
                FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_2e8);
                local_448 = 0xd0;
                uVar4 = FUN_140045f40(local_328,0x1000332,1);
                FUN_140041c60(&local_318,uVar4);
                FUN_140041b30(local_328);
                puVar12 = &local_318;
                uVar13 = DAT_141a0a728;
                goto LAB_1405b8e8f;
              }
            }
          }
        }
      }
      else {
        local_448 = 0x45;
        if ((1 << ((byte)local_46c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_478);
        }
        local_478 = 0;
        local_470 = 0;
        local_46c = 5;
        FUN_140041c60(local_3a8,&DAT_1419df7b0);
        local_428 = local_3a8;
        FUN_140041c60(local_398,&DAT_1419df7b0);
        local_420 = local_398;
        ppuVar8 = &local_428;
        uVar4 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_478,2,ppuVar8);
        cVar2 = FUN_140e491e0(uVar4);
        if (cVar2 != '\0') {
          local_45c = 6;
          local_468 = local_res8;
          ppuVar20 = (undefined8 **)((ulonglong)ppuVar20 & 0xffffffffffffff00);
          ppuVar8 = (undefined8 **)((ulonglong)ppuVar8 & 0xffffffffffffff00);
          FUN_140e87440(&local_468,DAT_141a0a728,0x80000000,&local_2d8,ppuVar8,ppuVar20);
          if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_468);
          }
          local_45c = 0xf;
          local_468 = (longlong *)0x100000100000327;
          iVar3 = FUN_140e851f0(&local_2d8,&local_468,DAT_141955260,0);
          if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_468);
          }
          if (iVar3 == 0) {
            local_448 = 0x47;
            FUN_140044220(&local_2e8,0);
            FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_2e8);
            local_448 = 0x48;
            local_45c = 0xf;
            local_468 = (longlong *)0x100000100000329;
            FUN_140041c60(&local_318,&local_468);
            FUN_140041b30(&local_468);
            FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_318);
          }
        }
        local_448 = 0x4d;
        FUN_1400ec6d0(&local_468,local_res8);
        uVar18 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
        uVar17 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
        FUN_140e87440(&local_468,DAT_141a0a728,0x80000000,&local_2d8,uVar17,uVar18);
        FUN_140041b30(&local_468);
        uVar4 = FUN_140045f40(local_308,0x1000329,1);
        cVar2 = FUN_140041d70(&local_2d8,uVar4);
        FUN_140041b30(local_308);
        if (cVar2 != '\0') {
          local_448 = 0x4f;
          if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_488);
          }
          local_488 = 0;
          local_480 = 0;
          local_47c = 5;
          FUN_1400ec6d0(&local_468,local_res8);
          uVar18 = uVar18 & 0xffffffffffffff00;
          uVar17 = uVar17 & 0xffffffffffffff00;
          FUN_140e87440(&local_468,DAT_1419fe0e8,0x80000000,&local_268,uVar17,uVar18);
          FUN_140041b30(&local_468);
          FUN_1400ec6d0(&local_468,local_res8);
          uVar18 = uVar18 & 0xffffffffffffff00;
          uVar17 = uVar17 & 0xffffffffffffff00;
          FUN_140e87440(&local_468,DAT_1419fe158,0x80000000,&local_278,uVar17,uVar18);
          FUN_140041b30(&local_468);
          FUN_1400ec6d0(&local_468,local_res8);
          uVar17 = uVar17 & 0xffffffffffffff00;
          FUN_140e87440(&local_468,DAT_141a1b910,0x80000000,&local_188,uVar17,
                        uVar18 & 0xffffffffffffff00);
          uVar13 = (undefined4)(uVar17 >> 0x20);
          FUN_140041b30(&local_468);
          FUN_140041c60(local_3c8,&local_268);
          local_438 = local_3c8;
          FUN_140041c60(local_3b8,&local_278);
          local_430 = local_3b8;
          FUN_140041c60(local_3a8,&local_188);
          local_428 = local_3a8;
          uVar4 = FUN_140045f40(local_108,0x72,1);
          FUN_140041c60(local_398,uVar4);
          FUN_140041b30(local_108);
          local_420 = local_398;
          FUN_140e634e0(local_res8,local_res10,&local_488,4,CONCAT44(uVar13,DAT_141a0a7c8),
                        &local_438);
          local_448 = 0x51;
          uVar4 = FUN_140045f40(local_258,0x1000329,1);
          FUN_140041c60(&local_318,uVar4);
          FUN_140041b30(local_258);
          FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_318);
          local_448 = 0x52;
          uVar4 = FUN_140045f40(local_248,0xee,1);
          plVar19 = local_res8;
          uVar17 = local_res10;
          FUN_140e87170(uVar4,DAT_1419fe158,0x80000000,&local_208,local_res8,local_res10);
          FUN_140041b30(local_248);
          FUN_140041c20(local_308,1);
          FUN_1400462a0(&local_208,local_308);
          FUN_140041b30(local_308);
          uVar4 = FUN_140045f40(local_2c8,0xee,1);
          FUN_140e86c30(uVar4,DAT_1419fe158,0x80000000,&local_208);
          FUN_140041b30(local_2c8);
          local_448 = 0x53;
          FUN_140044220(&local_198,0);
          uVar4 = FUN_140045f40(local_328,0xee,1);
          FUN_140e87930(uVar4,DAT_141a1f500,0x80000000,&local_198);
          FUN_140041b30(local_328);
          local_448 = 0x54;
          if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_488);
          }
          local_488 = 0;
          local_480 = 0;
          local_47c = 5;
          uVar4 = FUN_140045f40(local_328,0xee,1);
          uVar17 = uVar17 & 0xffffffffffffff00;
          uVar18 = (ulonglong)plVar19 & 0xffffffffffffff00;
          FUN_140e87440(uVar4,DAT_1419f5e38,0x80000000,&local_238,uVar18,uVar17);
          FUN_140041b30(local_328);
          uVar17 = uVar17 & 0xffffffffffffff00;
          uVar18 = uVar18 & 0xffffffffffffff00;
          FUN_140e87440(&local_238,DAT_1419f5868,0x80000000,&local_288,uVar18,uVar17);
          FUN_140e87440(&local_288,DAT_1419f5848,0x80000000,&local_1a8,uVar18 & 0xffffffffffffff00,
                        uVar17 & 0xffffffffffffff00);
          FUN_140041c60(local_3c8,&DAT_141dd44e8);
          local_438 = local_3c8;
          uVar4 = FUN_140069500(&local_288);
          ppuVar20 = &local_438;
          puVar12 = &local_1a8;
          uVar4 = FUN_140e63610(uVar4,local_res10,&local_488,1,puVar12,ppuVar20);
          cVar2 = FUN_140e491e0(uVar4);
          if (cVar2 == '\0') {
            local_448 = 0x54;
            if ((1 << ((byte)local_46c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_478);
            }
            local_478 = 0;
            local_470 = 0;
            local_46c = 5;
            uVar4 = FUN_140045f40(local_328,0xee,1);
            uVar18 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
            uVar17 = (ulonglong)puVar12 & 0xffffffffffffff00;
            FUN_140e87440(uVar4,DAT_1419f5e38,0x80000000,&local_238,uVar17,uVar18);
            FUN_140041b30(local_328);
            uVar18 = uVar18 & 0xffffffffffffff00;
            uVar17 = uVar17 & 0xffffffffffffff00;
            FUN_140e87440(&local_238,DAT_1419f5868,0x80000000,&local_288,uVar17,uVar18);
            FUN_140e87440(&local_288,DAT_141a55540,0x80000000,&local_1b8,uVar17 & 0xffffffffffffff00
                          ,uVar18 & 0xffffffffffffff00);
            FUN_140041c60(local_3b8,&DAT_141dd44e8);
            local_430 = local_3b8;
            uVar4 = FUN_140069500(&local_288);
            FUN_140e63610(uVar4,local_res10,&local_478,1,&local_1b8,&local_430);
          }
          local_448 = 0x55;
          uVar4 = FUN_140045f40(local_328,0x1000411,1);
          FUN_140041c60(&local_1c8,uVar4);
          FUN_140041b30(local_328);
          uVar4 = FUN_140045f40(local_2c8,0xee,1);
          FUN_140e86c30(uVar4,DAT_141a0a728,0x80000000,&local_1c8);
          FUN_140041b30(local_2c8);
          local_448 = 0x56;
          FUN_140044220(&local_1d8,1);
          uVar4 = FUN_140045f40(local_248,0xee,1);
          FUN_140e86c30(uVar4,DAT_141a0a818,0x80000000,&local_1d8);
          FUN_140041b30(local_248);
          local_448 = 0x58;
          uVar4 = FUN_140045f40(local_258,0xee,1);
          plVar19 = local_res8;
          FUN_140e87170(uVar4,DAT_1419fe158,0x80000000,&local_1e8,local_res8,local_res10);
          uVar13 = (undefined4)((ulonglong)plVar19 >> 0x20);
          FUN_140041b30(local_258);
          cVar2 = FUN_140046c90(&local_1e8,100);
          if (cVar2 != '\0') {
            local_448 = 0x5a;
            if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_488);
            }
            local_488 = 0;
            local_480 = 0;
            local_47c = 5;
            if ((1 << ((byte)local_46c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_478);
            }
            local_478 = 0;
            local_470 = 0;
            local_46c = 5;
            uVar4 = FUN_140042490(local_res8,DAT_1419fd438);
            FUN_140041c60(local_3c8,uVar4);
            local_438 = local_3c8;
            FUN_140041c60(local_3b8,&DAT_141dd44f8);
            local_430 = local_3b8;
            FUN_140041c60(local_3a8,uVar4);
            local_428 = local_3a8;
            FUN_140041c60(local_398,&DAT_141dd44f8);
            local_420 = local_398;
            uVar5 = CONCAT44(uVar13,DAT_1419ff4f8);
            uVar4 = FUN_140e634e0(local_res8,local_res10,&local_478,2,uVar5,&local_438);
            uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
            uVar4 = FUN_140053820(local_328,uVar4,1);
            FUN_140041c60(local_388,uVar4);
            FUN_140041b30(local_328);
            local_418 = local_388;
            FUN_140e634e0(local_res8,local_res10,&local_488,3,CONCAT44(uVar13,DAT_1419fd648),
                          &local_428);
            local_448 = 0xd7;
            goto LAB_1405b95c0;
          }
        }
      }
    }
    else {
      local_448 = 0x30;
      if ((1 << ((byte)local_46c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_478);
      }
      local_478 = 0;
      local_470 = 0;
      local_46c = 5;
      local_45c = 0xf;
      local_468 = (longlong *)0x10000000000007e;
      FUN_140041c60(local_3a8,&local_468);
      if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_468);
      }
      local_428 = local_3a8;
      uVar7 = CONCAT44(uVar13,DAT_141a02ef8);
      uVar6 = FUN_140e634e0(local_res8,local_res10,&local_478,1,uVar7,&local_428);
      uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
      cVar2 = FUN_140e491e0(uVar6);
      if (cVar2 == '\0') {
        local_448 = 0x32;
        if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3d8);
        }
        local_3d8 = 0;
        local_3d0 = 0;
        local_3cc = 5;
        local_45c = 0xf;
        local_468 = (longlong *)0x1000002000000a9;
        FUN_140041c60(local_398,&local_468);
        if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_468);
        }
        local_420 = local_398;
        FUN_140e634e0(local_res8,local_res10,&local_3d8,1,CONCAT44(uVar13,DAT_141a07788),&local_420)
        ;
        local_448 = 0x33;
        FUN_140044220(&local_2f8,1);
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_2f8);
        local_448 = 0x34;
        local_45c = 0xf;
        local_468 = (longlong *)0x100000100000333;
        FUN_140041c60(&local_318,&local_468);
        if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_468);
        }
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_318);
        local_448 = 0x35;
        if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_488);
        }
        local_488 = 0;
        local_480 = 0;
        local_47c = 5;
        FUN_140041c60(local_3c8,&DAT_1419df7b0);
        local_438 = local_3c8;
        FUN_140041c60(local_3b8,&DAT_1419df7b0);
        ppuVar20 = &local_438;
        local_430 = local_3b8;
        uVar6 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_488,2,ppuVar20);
        uVar13 = (undefined4)((ulonglong)ppuVar20 >> 0x20);
        cVar2 = FUN_140e491e0(uVar6);
        if (cVar2 != '\0') {
          local_448 = 0x37;
          if ((1 << ((byte)local_46c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_478);
          }
          local_478 = 0;
          local_470 = 0;
          local_46c = 5;
          if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3d8);
          }
          local_3d8 = 0;
          local_3d0 = 0;
          local_3cc = 5;
          uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          FUN_140041c60(local_3a8,uVar6);
          local_428 = local_3a8;
          FUN_140041c60(local_398,&DAT_141dd44f8);
          local_420 = local_398;
          FUN_140041c60(local_388,uVar6);
          local_418 = local_388;
          FUN_140041c60(local_378,&DAT_141dd44f8);
          local_410 = local_378;
          uVar7 = CONCAT44(uVar13,DAT_1419ff4f8);
          uVar6 = FUN_140e634e0(local_res8,local_res10,&local_3d8,2,uVar7,&local_428);
          uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
          uVar6 = FUN_140053820(&local_468,uVar6,1);
          FUN_140041c60(local_368,uVar6);
          if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_468);
          }
          local_408 = local_368;
          FUN_140e634e0(local_res8,local_res10,&local_478,3,CONCAT44(uVar13,DAT_1419fd648),
                        &local_418);
          local_448 = 0x38;
          local_45c = 0xf;
          local_468 = (longlong *)0x100000100000327;
          FUN_140041c60(&local_318,&local_468);
          if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_468);
          }
          FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_318);
          local_448 = 0x39;
          FUN_140044220(&local_2e8,0);
          FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_2e8);
          local_448 = 0x3a;
          local_45c = 0xd;
          local_468 = (longlong *)0x0;
          FUN_140041c60(uVar4,&local_468);
          if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_468);
          }
          local_448 = 0x3b;
          local_45c = 0xd;
          local_468 = (longlong *)0x0;
          FUN_140041c60(uVar5,&local_468);
          if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_468);
          }
          local_448 = 0xd7;
          goto LAB_1405b95c0;
        }
      }
    }
  }
  else {
    local_448 = 0x21;
    FUN_140044220(&local_2f8,1);
    FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_2f8);
    local_448 = 0x22;
    if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_488);
    }
    local_488 = 0;
    local_480 = 0;
    local_47c = 5;
    FUN_140041c60(local_3c8,&DAT_1419df7b0);
    local_438 = local_3c8;
    FUN_140041c60(local_3b8,&DAT_1419df7b0);
    local_430 = local_3b8;
    uVar4 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_488,2,&local_438);
    cVar2 = FUN_140e491e0(uVar4);
    if (cVar2 != '\0') {
      local_448 = 0x24;
      if ((1 << ((byte)local_46c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_478);
      }
      local_478 = 0;
      local_470 = 0;
      local_46c = 5;
      if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3d8);
      }
      local_3d8 = 0;
      local_3d0 = 0;
      local_3cc = 5;
      uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
      FUN_140041c60(local_3a8,&DAT_141dd4478);
      local_428 = local_3a8;
      FUN_140041c60(local_398,uVar4);
      local_420 = local_398;
      FUN_140041c60(local_388,&DAT_141dd4488);
      local_418 = local_388;
      ppuVar20 = &local_428;
      uVar4 = gml_Script_CreateBossUi(local_res8,local_res10,&local_3d8,1,ppuVar20);
      uVar13 = (undefined4)((ulonglong)ppuVar20 >> 0x20);
      FUN_140041c60(local_378,uVar4);
      local_410 = local_378;
      uVar4 = CONCAT44(uVar13,DAT_1419ff3d8);
      FUN_140e634e0(local_res8,local_res10,&local_478,3,uVar4,&local_420);
      uVar13 = (undefined4)((ulonglong)uVar4 >> 0x20);
      local_448 = 0x25;
      if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_488);
      }
      local_488 = 0;
      local_480 = 0;
      local_47c = 5;
      if ((1 << ((byte)local_46c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_478);
      }
      local_478 = 0;
      local_470 = 0;
      local_46c = 5;
      uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
      FUN_140041c60(local_3c8,uVar4);
      local_438 = local_3c8;
      FUN_140041c60(local_3b8,&DAT_141dd44f8);
      local_430 = local_3b8;
      FUN_140041c60(local_3a8,uVar4);
      local_428 = local_3a8;
      FUN_140041c60(local_398,&DAT_141dd44f8);
      local_420 = local_398;
      uVar5 = CONCAT44(uVar13,DAT_1419ff4f8);
      uVar4 = FUN_140e634e0(local_res8,local_res10,&local_478,2,uVar5,&local_438);
      uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
      uVar4 = FUN_140053820(&local_468,uVar4,1);
      FUN_140041c60(local_388,uVar4);
      if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_468);
      }
      local_418 = local_388;
      uVar4 = CONCAT44(uVar13,DAT_1419fd648);
      FUN_140e634e0(local_res8,local_res10,&local_488,3,uVar4,&local_428);
      uVar13 = (undefined4)((ulonglong)uVar4 >> 0x20);
      local_448 = 0x26;
      if ((1 << ((byte)local_47c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_488);
      }
      local_488 = 0;
      local_480 = 0;
      local_47c = 5;
      local_45c = 0xf;
      local_468 = (longlong *)0x1000002000000a9;
      FUN_140041c60(local_3c8,&local_468);
      if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_468);
      }
      local_438 = local_3c8;
      FUN_1400441d0(local_3b8,&DAT_1419e6860);
      local_430 = local_3b8;
      FUN_1400441d0(local_3a8,&DAT_1419df7a0);
      local_428 = local_3a8;
      FUN_140e634e0(local_res8,local_res10,&local_488,3,CONCAT44(uVar13,DAT_141a0a2e8),&local_438);
      local_448 = 0x28;
      FUN_140044220(&local_2e8,6);
      FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_2e8);
      local_448 = 0x29;
      FUN_140044220(&local_2f8,0);
      puVar12 = &local_2f8;
      uVar13 = DAT_141a0a818;
LAB_1405b8e8f:
      FUN_140e86fa0(local_res8,uVar13,0x80000000,puVar12);
    }
  }
  local_448 = 0xd7;
  goto LAB_1405b95c0;
}

