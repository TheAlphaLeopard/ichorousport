// gml_Script_StatesSalesmanIntro @ 0x140598d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesSalesmanIntro
          (longlong *param_1,longlong *param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong **pplVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uVar18;
  double dVar17;
  longlong *local_res8;
  longlong *local_res10;
  undefined8 *local_res18;
  uint local_res20;
  code *pcVar19;
  undefined1 **ppuVar20;
  ulonglong uVar21;
  undefined8 local_418;
  undefined4 local_410;
  undefined4 local_40c;
  longlong *local_408;
  undefined4 local_3fc;
  undefined8 local_3f8;
  char *local_3f0;
  undefined4 local_3e8;
  double local_3e0;
  uint local_3d4;
  undefined8 local_3d0;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined8 local_3c0;
  uint local_3b4;
  undefined1 *local_3b0;
  undefined1 *local_3a8;
  undefined1 *local_3a0;
  undefined1 *local_398;
  undefined1 *local_390;
  undefined1 *local_388;
  undefined1 *local_380;
  undefined1 local_378 [12];
  byte local_36c;
  longlong *local_368;
  undefined4 local_35c;
  longlong *local_358;
  undefined4 local_34c;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined8 local_2d8;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined4 local_2bc;
  longlong *local_2b8;
  undefined4 local_2ac;
  longlong *local_2a8;
  undefined4 local_29c;
  undefined8 local_288;
  undefined4 local_27c;
  ulonglong local_278;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_24c;
  longlong *local_248;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_21c;
  double local_218;
  uint local_20c;
  undefined1 local_208 [16];
  longlong local_1f8;
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
  undefined1 local_158 [16];
  longlong local_148;
  longlong *local_138;
  undefined4 local_12c;
  undefined1 local_118 [16];
  undefined1 local_108 [200];
  
  local_res20 = 0;
  local_278 = local_278 & 0xffffffff00000000;
  local_3f0 = "gml_Script_StatesPestDeath";
  local_3f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_3f8;
  local_3e8 = 0x54f;
  pcVar19 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_348,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_27c = 0xffffff;
  local_288 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_2bc = 0xffffff;
  local_2c8 = 0;
  local_2cc = 0xffffff;
  local_2d8 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_20c = 0xffffff;
  local_218 = 0.0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_3d4 = 0xffffff;
  local_3e0 = 0.0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_3b4 = 0xffffff;
  local_3c0 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_40c = 0;
  local_418 = 0;
  local_3c4 = 0;
  local_3d0 = 0;
  local_25c = 0;
  local_268 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_3e8 = 0x551;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_278 = uVar6;
  FUN_1400424a0(local_118,param_5);
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de05b0) &&
     (_Init_thread_header(&DAT_141de05b0), DAT_141de05b0 == -1)) {
    _DAT_141de03bc = 0;
    _DAT_141de03b0 = 0x4000000000000000;
    _DAT_141de03d0 = 0;
    _DAT_141de03c4 = 0;
    _DAT_141de03d4 = 1;
    _DAT_141de03e4 = 0;
    _DAT_141de03d8 = 0x3ff0000000000000;
    _DAT_141de03e8 = 2;
    _DAT_141de03f8 = 0;
    _DAT_141de03ec = 0x4008000000000000;
    _DAT_141de03fc = 3;
    atexit((_func_5014 *)&LAB_141482b30);
    _Init_thread_footer(&DAT_141de05b0);
  }
  uVar11 = 0;
  do {
    iVar2 = FUN_140e851f0(&DAT_141de03b0 + (longlong)(int)uVar11 * 0x14,local_118,DAT_141955260,0);
    uVar13 = (undefined4)((ulonglong)pcVar19 >> 0x20);
    if (iVar2 == 0) {
      iVar2 = *(int *)(&DAT_141de03c0 + (longlong)(int)uVar11 * 0x14);
      if (iVar2 == 0) {
        local_3e8 = 0x555;
        local_3fc = 0xf;
        local_408 = (longlong *)0x100000100000346;
        FUN_140041c60(&local_288,&local_408);
        if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_408);
        }
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_288);
        local_3e8 = 0x556;
        uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        FUN_140044220(uVar7,0);
        local_3e8 = 0x557;
        if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_418);
        }
        local_418 = 0;
        local_410 = 0;
        local_40c = 5;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
        FUN_140041c60(local_348,uVar7);
        local_3b0 = local_348;
        FUN_140041c60(local_338,&DAT_141dd41a8);
        local_3a8 = local_338;
        FUN_1400441d0(local_328,&DAT_1419e6560);
        local_3a0 = local_328;
        uVar8 = CONCAT44(uVar13,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_418,3,uVar8,&local_3b0);
        uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_3e8 = 0x558;
        if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_418);
        }
        local_418 = 0;
        local_410 = 0;
        local_40c = 5;
        FUN_140041c60(local_348,uVar7);
        local_3b0 = local_348;
        FUN_140041c60(local_338,&DAT_141dd41b8);
        local_3a8 = local_338;
        FUN_1400441d0(local_328,&DAT_141dc6700);
        local_3a0 = local_328;
        uVar8 = CONCAT44(uVar13,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_418,3,uVar8,&local_3b0);
        uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_3e8 = 0x559;
        if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_418);
        }
        local_418 = 0;
        local_410 = 0;
        local_40c = 5;
        FUN_140041c60(local_348,uVar7);
        local_3b0 = local_348;
        FUN_140041c60(local_338,&DAT_141dd4238);
        local_3a8 = local_338;
        FUN_1400441d0(local_328,&DAT_1419e6560);
        local_3a0 = local_328;
        FUN_140e634e0(local_res8,local_res10,&local_418,3,CONCAT44(uVar13,DAT_1419ff3d8),&local_3b0)
        ;
        local_3e8 = 0x55b;
        uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd3b8);
        FUN_140044220(uVar7,0);
        local_3e8 = 0x55c;
        local_3fc = 0xf;
        local_408 = (longlong *)0x10000010000011b;
        FUN_140041c60(&local_168,&local_408);
        if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_408);
        }
        FUN_140e86fa0(local_res8,DAT_1419f5c58,0x80000000,&local_168);
        local_3e8 = 0x55e;
      }
      else if (iVar2 == 1) {
        local_3e8 = 0x562;
        if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_418);
        }
        local_418 = 0;
        local_410 = 0;
        local_40c = 5;
        if ((1 << ((byte)local_3c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3d0);
        }
        local_3d0 = 0;
        local_3c8 = 0;
        local_3c4 = 5;
        uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
        FUN_140041c60(local_348,uVar8);
        local_3b0 = local_348;
        FUN_140041c60(local_338,&DAT_141dd41a8);
        local_3a8 = local_338;
        FUN_1400441d0(local_328,&DAT_1419e6560);
        local_3a0 = local_328;
        FUN_1400441d0(local_318,&DAT_1419e6560);
        local_398 = local_318;
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_3d0,2,CONCAT44(uVar13,DAT_1419ff4f8),
                              &local_3b0);
        cVar1 = FUN_140041d90(uVar7,1);
        if (cVar1 == '\0') {
          local_2ac = 0;
          local_2b8 = (longlong *)0x4066800000000000;
          pplVar10 = &local_2b8;
          uVar11 = 2;
          local_res20 = 2;
        }
        else {
          local_29c = 0;
          local_2a8 = (longlong *)0x0;
          pplVar10 = &local_2a8;
          uVar11 = 1;
          local_res20 = 1;
        }
        FUN_140041c60(local_308,pplVar10);
        if (((uVar11 & 2) != 0) &&
           (uVar11 = uVar11 & 0xfffffffd, local_res20 = uVar11,
           (1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_2b8);
        }
        if (((uVar11 & 1) != 0) &&
           (uVar11 = uVar11 & 0xfffffffe, local_res20 = uVar11,
           (1 << ((byte)local_29c & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_2a8);
        }
        local_390 = local_308;
        FUN_140041c60(local_2f8,&DAT_1419df7b0);
        local_388 = local_2f8;
        ppuVar20 = &local_3a0;
        FUN_14044e5b0(local_res8,local_res10,&local_418,4,ppuVar20);
        uVar13 = (undefined4)((ulonglong)ppuVar20 >> 0x20);
        local_3e8 = 0x563;
        if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_418);
        }
        local_418 = 0;
        local_410 = 0;
        local_40c = 5;
        if ((1 << ((byte)local_3c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3d0);
        }
        local_3d0 = 0;
        local_3c8 = 0;
        local_3c4 = 5;
        FUN_140041c60(local_348,uVar8);
        local_3b0 = local_348;
        FUN_140041c60(local_338,&DAT_141dd41a8);
        local_3a8 = local_338;
        FUN_140041c60(local_328,uVar8);
        local_3a0 = local_328;
        FUN_140041c60(local_318,&DAT_141dd41a8);
        local_398 = local_318;
        uVar15 = CONCAT44(uVar13,DAT_1419ff4f8);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_3d0,2,uVar15,&local_3b0);
        uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
        uVar7 = FUN_140087a30(&local_408,uVar7,0xffffffff);
        FUN_140041c60(local_308,uVar7);
        if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_408);
        }
        local_390 = local_308;
        uVar7 = CONCAT44(uVar13,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_418,3,uVar7,&local_3a0);
        uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_3e8 = 0x565;
        if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_418);
        }
        local_418 = 0;
        local_410 = 0;
        local_40c = 5;
        FUN_140041c60(local_348,uVar8);
        local_3b0 = local_348;
        FUN_140041c60(local_338,&DAT_141dd41b8);
        local_3a8 = local_338;
        uVar7 = CONCAT44(uVar13,DAT_1419ff4f8);
        puVar9 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_418,2,uVar7,&local_3b0);
        uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
        if ((*(uint *)((longlong)puVar9 + 0xc) & 0xffffff) == 0) {
          uVar7 = *puVar9;
        }
        else {
          uVar7 = FUN_140e4b060(puVar9);
        }
        dVar14 = (double)FUN_1412a79b0(uVar7,0x402e000000000000);
        if (dVar14 == 0.0) {
          local_3e8 = 0x567;
          if ((1 << ((byte)local_3c4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3d0);
          }
          local_3d0 = 0;
          local_3c8 = 0;
          local_3c4 = 5;
          if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_268);
          }
          local_268 = 0;
          local_260 = 0;
          local_25c = 5;
          uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          FUN_140041c60(local_328,uVar7);
          local_3a0 = local_328;
          FUN_140041c60(local_318,&DAT_141dd4238);
          local_398 = local_318;
          FUN_140041c60(local_308,uVar7);
          local_390 = local_308;
          FUN_140041c60(local_2f8,&DAT_141dd4238);
          local_388 = local_2f8;
          uVar8 = CONCAT44(uVar13,DAT_1419ff4f8);
          uVar7 = FUN_140e634e0(local_res8,local_res10,&local_268,2,uVar8,&local_3a0);
          uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
          uVar7 = FUN_140087a30(&local_408,uVar7,0xffffffff);
          FUN_140041c60(local_2e8,uVar7);
          if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_408);
          }
          local_380 = local_2e8;
          ppuVar20 = &local_390;
          uVar21 = CONCAT44(uVar13,DAT_1419ff3d8);
          FUN_140e634e0(local_res8,local_res10,&local_3d0,3,uVar21,ppuVar20);
          local_3e8 = 0x568;
          if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_418);
          }
          local_418 = 0;
          local_410 = 0;
          local_40c = 5;
          if ((1 << ((byte)local_3c4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3d0);
          }
          local_3d0 = 0;
          local_3c8 = 0;
          local_3c4 = 5;
          uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          local_29c = 6;
          local_2a8 = local_res8;
          uVar12 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
          uVar21 = uVar21 & 0xffffffffffffff00;
          FUN_140e87440(&local_2a8,DAT_1419fe0e8,0x80000000,&local_2c8,uVar21,uVar12);
          if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          FUN_140041c60(local_348,uVar8);
          local_3b0 = local_348;
          FUN_140041c60(local_338,&DAT_141dd4238);
          local_3a8 = local_338;
          local_29c = 6;
          local_2a8 = local_res8;
          uVar21 = uVar21 & 0xffffffffffffff00;
          FUN_140e87440(&local_2a8,DAT_1419fe158,0x80000000,&local_2d8,uVar21,
                        uVar12 & 0xffffffffffffff00);
          uVar13 = (undefined4)(uVar21 >> 0x20);
          if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          uVar15 = CONCAT44(uVar13,DAT_1419ff4f8);
          uVar7 = FUN_140e634e0(local_res8,local_res10,&local_3d0,2,uVar15,&local_3b0);
          uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
          uVar15 = FUN_140e794b0(0,0x4014000000000000);
          FUN_140042540(&local_2b8,uVar15);
          local_res20 = uVar11 | 0x40000;
          FUN_140042560(&local_2b8,uVar7);
          FUN_1400424a0(&local_2a8,&local_2c8);
          local_res20 = uVar11 | 0xc0000;
          FUN_1400460e0(&local_2a8,&local_2b8);
          FUN_140041c60(local_328,&local_2a8);
          local_res20 = uVar11 | 0x40000;
          if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          local_res20 = uVar11;
          if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          local_3a0 = local_328;
          uVar7 = FUN_140e794b0(0,0x4028000000000000);
          uVar7 = FUN_1400c4980(&local_408,&local_2d8,uVar7);
          FUN_140041c60(local_318,uVar7);
          if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_408);
          }
          local_398 = local_318;
          FUN_140041c60(local_308,&DAT_141dd4218);
          local_390 = local_308;
          local_29c = 0xf;
          local_2a8 = (longlong *)0x10000000000012d;
          FUN_140041c60(local_2f8,&local_2a8);
          if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          local_388 = local_2f8;
          uVar15 = CONCAT44(uVar13,DAT_141a0a7c8);
          uVar7 = FUN_140e634e0(local_res8,local_res10,&local_418,4,uVar15,&local_3a0);
          iVar2 = FUN_140e63cb0(local_158,&local_res8,&local_res10,uVar7);
          uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
          if (0 < iVar2) {
            do {
              uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
              local_3e8 = 0x56a;
              local_29c = 0xf;
              local_2a8 = (longlong *)0x100000100000062;
              FUN_140041c60(&local_288,&local_2a8);
              if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2a8);
              }
              FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_288);
              local_3e8 = 0x56b;
              if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_418);
              }
              local_418 = 0;
              local_410 = 0;
              local_40c = 5;
              uVar7 = (**(code **)(*local_res10 + 8))(local_res10,DAT_1419fd438);
              FUN_140041c60(local_348,uVar7);
              local_3b0 = local_348;
              FUN_140041c60(local_338,&DAT_141dd4238);
              local_3a8 = local_338;
              uVar15 = CONCAT44(uVar13,DAT_1419ff4f8);
              uVar7 = FUN_140e634e0(local_res8,local_res10,&local_418,2,uVar15,&local_3b0);
              FUN_140041c60(&local_178,uVar7);
              FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_178);
              cVar1 = FUN_140e643f0(local_158,&local_res8,&local_res10);
              uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
            } while (cVar1 != '\0');
          }
          FUN_140e63970(local_158,&local_res8,&local_res10);
          if (local_148 != 0) {
            FUN_140e4cd60();
            local_148 = 0;
          }
        }
        local_3e8 = 0x571;
        if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_418);
        }
        local_418 = 0;
        local_410 = 0;
        local_40c = 5;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
        FUN_1400441d0(local_348,&DAT_141dc6700);
        uVar21 = CONCAT44(uVar13,DAT_141a0a0d8);
        local_3b0 = local_348;
        uVar15 = FUN_140e634e0(local_res8,local_res10,&local_418,1,uVar21,&local_3b0);
        uVar15 = FUN_140087a30(&local_408,uVar15,2);
        uVar3 = FUN_140e851f0(uVar7,uVar15,DAT_141955260,1);
        if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_408);
        }
        uVar13 = (undefined4)(uVar21 >> 0x20);
        if (uVar3 < 0x80000000) {
          local_3e8 = 0x573;
          puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd428);
          uVar8 = FUN_140e78f40(0xfffffffffffffffd,3);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar9);
          }
          *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
          *puVar9 = uVar8;
          local_3e8 = 0x574;
          if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_418);
          }
          local_418 = 0;
          local_410 = 0;
          local_40c = 5;
          uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          FUN_140041c60(local_348,uVar8);
          local_3b0 = local_348;
          FUN_140041c60(local_338,&DAT_141dd41b8);
          local_3a8 = local_338;
          ppuVar20 = &local_3b0;
          uVar21 = CONCAT44(uVar13,DAT_1419ff4f8);
          puVar9 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_418,2,uVar21,ppuVar20);
          if ((*(uint *)((longlong)puVar9 + 0xc) & 0xffffff) == 0) {
            uVar15 = *puVar9;
          }
          else {
            uVar15 = FUN_140e4b060(puVar9);
          }
          dVar14 = (double)FUN_1412a79b0(uVar15,0x4000000000000000);
          if (dVar14 == 0.0) {
            local_3e8 = 0x576;
            FUN_140044220(&local_218,1);
            local_3e8 = 0x578;
            if ((local_20c & 0xffffff) == 0) {
              dVar14 = local_218;
            }
            else {
              dVar14 = (double)FUN_140e4b060(&local_218);
            }
            uVar12 = (ulonglong)dVar14;
            if (0 < (int)uVar12) {
              do {
                uVar3 = (int)uVar12 - 1;
                uVar12 = (ulonglong)uVar3;
                local_3e8 = 0x57a;
                if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_418);
                }
                local_418 = 0;
                local_410 = 0;
                local_40c = 5;
                local_29c = 6;
                local_2a8 = local_res8;
                uVar6 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
                uVar21 = uVar21 & 0xffffffffffffff00;
                FUN_140e87440(&local_2a8,DAT_1419fe0e8,0x80000000,&local_2c8,uVar21,uVar6);
                if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2a8);
                }
                local_2ac = 6;
                local_2b8 = local_res8;
                uVar6 = uVar6 & 0xffffffffffffff00;
                uVar21 = uVar21 & 0xffffffffffffff00;
                FUN_140e87440(&local_2b8,DAT_1419fe158,0x80000000,&local_2d8,uVar21,uVar6);
                if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2b8);
                }
                local_12c = 6;
                local_138 = local_res8;
                uVar21 = uVar21 & 0xffffffffffffff00;
                FUN_140e87440(&local_138,DAT_141a1b910,0x80000000,&local_1e8,uVar21,
                              uVar6 & 0xffffffffffffff00);
                uVar13 = (undefined4)(uVar21 >> 0x20);
                if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_138);
                }
                FUN_140041c60(local_348,&local_2c8);
                local_3b0 = local_348;
                uVar15 = FUN_140e794b0(0xc014000000000000,0x4024000000000000);
                uVar15 = FUN_1400c4980(local_378,&local_2d8,uVar15);
                FUN_140041c60(local_338,uVar15);
                if ((1 << ((byte)_local_36c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_378);
                }
                local_3a8 = local_338;
                FUN_140041c60(local_328,&local_1e8);
                local_3a0 = local_328;
                local_21c = 0xf;
                local_228 = 0x10000000000000f;
                FUN_140041c60(local_318,&local_228);
                if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_228);
                }
                local_398 = local_318;
                ppuVar20 = &local_3b0;
                uVar21 = CONCAT44(uVar13,DAT_141a0a7c8);
                uVar15 = FUN_140e634e0(local_res8,local_res10,&local_418,4,uVar21,ppuVar20);
                FUN_140041c60(&local_1d8,uVar15);
                local_3e8 = 0x57b;
                if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_418);
                }
                local_418 = 0;
                local_410 = 0;
                local_40c = 5;
                FUN_1400441d0(local_348,&DAT_1419e6660);
                local_3b0 = local_348;
                FUN_1400441d0(local_338,&DAT_1419e6560);
                local_3a8 = local_338;
                uVar15 = FUN_140e78db0(&local_418,2,&local_3b0);
                cVar1 = FUN_140041d90(uVar15,1);
                if (cVar1 == '\0') {
                  local_22c = 0;
                  local_238 = 0x4060e00000000000;
                  puVar9 = &local_238;
                  uVar11 = uVar11 | 8;
                }
                else {
                  local_24c = 0;
                  local_258 = 0x4046800000000000;
                  puVar9 = &local_258;
                  uVar11 = uVar11 | 4;
                }
                local_res20 = uVar11;
                FUN_140041c60(&local_1c8,puVar9);
                if (((uVar11 & 8) != 0) &&
                   (uVar11 = uVar11 & 0xfffffff7, local_res20 = uVar11,
                   (1 << ((byte)local_22c & 0x1f) & 0x46U) != 0)) {
                  FUN_140041a50(&local_238);
                }
                if (((uVar11 & 4) != 0) &&
                   (uVar11 = uVar11 & 0xfffffffb, local_res20 = uVar11,
                   (1 << ((byte)local_24c & 0x1f) & 0x46U) != 0)) {
                  FUN_140041a50(&local_258);
                }
                local_3e8 = 0x57c;
                uVar15 = FUN_140e794b0(0x4000000000000000,0x4014000000000000);
                FUN_140041cb0(&local_3e0,uVar15);
                local_3e8 = 0x57d;
                iVar2 = FUN_140e63cb0(local_208,&local_res8,&local_res10,&local_1d8);
                if (0 < iVar2) {
                  do {
                    local_3e8 = 0x57f;
                    uVar15 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f4e0);
                    local_23c = 6;
                    local_248 = local_res10;
                    ppuVar20 = (undefined1 **)((ulonglong)ppuVar20 & 0xffffffffffffff00);
                    uVar21 = uVar21 & 0xffffffffffffff00;
                    FUN_140e87440(&local_248,DAT_141a0a828,0x80000000,&local_1b8,uVar21,ppuVar20);
                    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_248);
                    }
                    FUN_140e609c0(local_res8);
                    FUN_140041c60(uVar15,&local_1b8);
                    FUN_140e60910(1);
                    local_3e8 = 0x580;
                    uVar15 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
                    cVar1 = FUN_140041d90(&local_218,1);
                    if (cVar1 == '\0') {
                      local_368 = (longlong *)FUN_140e79480(0x4076800000000000);
                      local_35c = 0;
                      pplVar10 = &local_368;
                      uVar11 = uVar11 | 0x20;
                    }
                    else {
                      local_408 = (longlong *)FUN_140e794b0(0xc02e000000000000,0x4041800000000000);
                      local_3fc = 0;
                      pplVar10 = &local_408;
                      uVar11 = uVar11 | 0x10;
                    }
                    local_res20 = uVar11;
                    FUN_140e609c0(local_res8);
                    FUN_1400424a0(&local_358,&local_1c8);
                    local_res20 = uVar11 | 0x800000;
                    FUN_1400460e0(&local_358,pplVar10);
                    FUN_140041c60(uVar15,&local_358);
                    local_res20 = uVar11;
                    if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_358);
                    }
                    if (((uVar11 & 0x20) != 0) &&
                       (uVar11 = uVar11 & 0xff7fffdf, local_res20 = uVar11,
                       (1 << ((byte)local_35c & 0x1f) & 0x46U) != 0)) {
                      FUN_140041a50(&local_368);
                    }
                    if (((uVar11 & 0x10) != 0) &&
                       (uVar11 = uVar11 & 0xffffffef, local_res20 = uVar11,
                       (1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0)) {
                      FUN_140041a50(&local_408);
                    }
                    FUN_140e60910(1);
                    local_3e8 = 0x581;
                    puVar9 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
                    uVar15 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
                    if ((*(uint *)((longlong)puVar9 + 0xc) & 0xffffff) == 0) {
                      uVar13 = (undefined4)*puVar9;
                      uVar18 = (undefined4)((ulonglong)*puVar9 >> 0x20);
                    }
                    else {
                      uVar16 = FUN_140e4b060(puVar9);
                      uVar13 = (undefined4)uVar16;
                      uVar18 = (undefined4)((ulonglong)uVar16 >> 0x20);
                    }
                    if ((local_3d4 & 0xffffff) == 0) {
                      dVar14 = local_3e0;
                    }
                    else {
                      dVar14 = (double)FUN_140e4b060(&local_3e0);
                    }
                    uVar16 = FUN_140e78f90((float)dVar14,(float)(double)CONCAT44(uVar18,uVar13));
                    FUN_140045f90(uVar15,uVar16);
                    local_3e8 = 0x582;
                    uVar15 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
                    if ((*(uint *)((longlong)puVar9 + 0xc) & 0xffffff) == 0) {
                      uVar13 = (undefined4)*puVar9;
                      uVar18 = (undefined4)((ulonglong)*puVar9 >> 0x20);
                    }
                    else {
                      uVar16 = FUN_140e4b060(puVar9);
                      uVar13 = (undefined4)uVar16;
                      uVar18 = (undefined4)((ulonglong)uVar16 >> 0x20);
                    }
                    if ((local_3d4 & 0xffffff) == 0) {
                      dVar14 = local_3e0;
                    }
                    else {
                      dVar14 = (double)FUN_140e4b060(&local_3e0);
                    }
                    uVar16 = FUN_140e79010((float)dVar14,(float)(double)CONCAT44(uVar18,uVar13));
                    FUN_140045f90(uVar15,uVar16);
                    cVar1 = FUN_140e643f0(local_208,&local_res8,&local_res10);
                  } while (cVar1 != '\0');
                }
                FUN_140e63970(local_208,&local_res8,&local_res10);
                if (local_1f8 != 0) {
                  FUN_140e4cd60();
                }
              } while (0 < (int)uVar3);
              uVar6 = local_278;
            }
          }
        }
        uVar13 = (undefined4)(uVar21 >> 0x20);
        local_3e8 = 0x58b;
        if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_418);
        }
        local_418 = 0;
        local_410 = 0;
        local_40c = 5;
        if ((1 << ((byte)local_3c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3d0);
        }
        local_3d0 = 0;
        local_3c8 = 0;
        local_3c4 = 5;
        if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        local_268 = 0;
        local_260 = 0;
        local_25c = 5;
        FUN_140041c60(local_348,uVar8);
        local_3b0 = local_348;
        FUN_140041c60(local_338,&DAT_141dd41b8);
        local_3a8 = local_338;
        FUN_140041c60(local_328,uVar6);
        local_3a0 = local_328;
        FUN_140041c60(local_318,uVar8);
        local_398 = local_318;
        FUN_140041c60(local_308,&DAT_141dd41b8);
        local_390 = local_308;
        uVar15 = CONCAT44(uVar13,DAT_1419fd658);
        uVar8 = FUN_140e634e0(local_res8,local_res10,&local_268,1,uVar15,&local_3a0);
        uVar16 = CONCAT44((int)((ulonglong)uVar15 >> 0x20),DAT_1419ff4f8);
        uVar15 = FUN_140e634e0(local_res8,local_res10,&local_3d0,2,uVar16,&local_3b0);
        uVar13 = (undefined4)((ulonglong)uVar16 >> 0x20);
        FUN_1400424a0(&local_408,uVar15);
        local_res20 = uVar11 | 0x1000000;
        FUN_1400460e0(&local_408,uVar8);
        FUN_140041c60(local_2f8,&local_408);
        if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_408);
        }
        local_388 = local_2f8;
        uVar8 = CONCAT44(uVar13,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_418,3,uVar8,&local_398);
        uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_3e8 = 0x58d;
        if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_418);
        }
        local_418 = 0;
        local_410 = 0;
        local_40c = 5;
        FUN_1400441d0(local_348,&DAT_141dc6700);
        uVar15 = CONCAT44(uVar13,DAT_141a0a0d8);
        local_3b0 = local_348;
        uVar8 = FUN_140e634e0(local_res8,local_res10,&local_418,1,uVar15,&local_3b0);
        uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
        uVar8 = FUN_140087a30(local_378,uVar8,5);
        uVar3 = FUN_140e851f0(uVar7,uVar8,DAT_141955260,1);
        if ((1 << ((byte)_local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_378);
        }
        if (uVar3 < 0x80000000) {
          local_3e8 = 0x58f;
          if ((1 << ((byte)local_3c4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3d0);
          }
          local_3d0 = 0;
          local_3c8 = 0;
          local_3c4 = 5;
          (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
          local_3fc = 0xf;
          local_408 = (longlong *)0x100000200000109;
          FUN_140041c60(local_338,&local_408);
          if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_408);
          }
          local_3a8 = local_338;
          FUN_1400441d0(local_328,&DAT_1419e64e0);
          local_3a0 = local_328;
          FUN_1400441d0(local_318,&DAT_1419df7a0);
          local_398 = local_318;
          ppuVar20 = &local_3a8;
          uVar6 = CONCAT44(uVar13,DAT_141a0a2e8);
          FUN_140e634e0(local_res8,local_res10,&local_3d0,3,uVar6,ppuVar20);
          local_3e8 = 0x590;
          if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_418);
          }
          local_418 = 0;
          local_410 = 0;
          local_40c = 5;
          uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
          local_3fc = 6;
          local_408 = local_res8;
          uVar21 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
          uVar6 = uVar6 & 0xffffffffffffff00;
          FUN_140e87440(&local_408,DAT_1419fe0e8,0x80000000,&local_2c8,uVar6,uVar21);
          if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_408);
          }
          local_3fc = 6;
          local_408 = local_res8;
          uVar6 = uVar6 & 0xffffffffffffff00;
          FUN_140e87440(&local_408,DAT_1419fe158,0x80000000,&local_2d8,uVar6,
                        uVar21 & 0xffffffffffffff00);
          uVar13 = (undefined4)(uVar6 >> 0x20);
          if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_408);
          }
          local_26c = 0;
          local_278 = 0x4008000000000000;
          local_res20 = uVar11 | 0x4000000;
          FUN_140042560(&local_278,uVar7);
          FUN_1400424a0(&local_408,&local_2c8);
          local_res20 = uVar11 | 0xc000000;
          FUN_1400460e0(&local_408,&local_278);
          FUN_140041c60(local_348,&local_408);
          local_res20 = uVar11 | 0x4000000;
          if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_408);
          }
          if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_278);
          }
          local_3b0 = local_348;
          uVar7 = FUN_140053940(local_378,&local_2d8,5);
          FUN_140041c60(local_338,uVar7);
          if ((1 << ((byte)_local_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_378);
          }
          local_3a8 = local_338;
          FUN_140041c60(local_328,&DAT_141dd4188);
          local_3a0 = local_328;
          local_3fc = 0xf;
          local_408 = (longlong *)0x100000000000023;
          FUN_140041c60(local_318,&local_408);
          if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_408);
          }
          local_398 = local_318;
          ppuVar20 = &local_3b0;
          uVar6 = CONCAT44(uVar13,DAT_141a0a7c8);
          uVar7 = FUN_140e634e0(local_res8,local_res10,&local_418,4,uVar6,ppuVar20);
          iVar2 = FUN_140e63cb0(local_108,&local_res8,&local_res10,uVar7);
          if (0 < iVar2) {
            do {
              local_3e8 = 0x592;
              local_3fc = 0xf;
              local_408 = (longlong *)0x100000100000349;
              FUN_140041c60(&local_288,&local_408);
              if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_408);
              }
              FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_288);
              local_3e8 = 0x593;
              uVar7 = (**(code **)(*local_res10 + 8))(local_res10,DAT_1419f5ef8);
              cVar1 = FUN_140041d90(uVar7,1);
              if (cVar1 == '\0') {
                local_35c = 0;
                local_368 = (longlong *)0x4052c00000000000;
                pplVar10 = &local_368;
                uVar11 = uVar11 | 0x80;
              }
              else {
                local_34c = 0;
                local_358 = (longlong *)0x405a400000000000;
                pplVar10 = &local_358;
                uVar11 = uVar11 | 0x40;
              }
              local_res20 = uVar11;
              FUN_140041c60(&local_3c0,pplVar10);
              if (((char)uVar11 < '\0') &&
                 (uVar11 = uVar11 & 0xffffff7f, local_res20 = uVar11,
                 (1 << ((byte)local_35c & 0x1f) & 0x46U) != 0)) {
                FUN_140041a50(&local_368);
              }
              if (((uVar11 & 0x40) != 0) &&
                 (uVar11 = uVar11 & 0xffffffbf, (1 << ((byte)local_34c & 0x1f) & 0x46U) != 0)) {
                FUN_140041a50(&local_358);
              }
              local_3e8 = 0x594;
              uVar7 = FUN_140e794b0(0x4008000000000000,0x4020000000000000);
              FUN_140041cb0(&local_3e0,uVar7);
              local_3e8 = 0x595;
              uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
              if ((local_3b4 & 0xffffff) == 0) {
                uVar13 = (undefined4)local_3c0;
                uVar18 = (undefined4)((ulonglong)local_3c0 >> 0x20);
              }
              else {
                uVar8 = FUN_140e4b060(&local_3c0);
                uVar13 = (undefined4)uVar8;
                uVar18 = (undefined4)((ulonglong)uVar8 >> 0x20);
              }
              if ((local_3d4 & 0xffffff) == 0) {
                dVar14 = local_3e0;
              }
              else {
                dVar14 = (double)FUN_140e4b060(&local_3e0);
              }
              uVar8 = FUN_140e78f90((float)dVar14,(float)(double)CONCAT44(uVar18,uVar13));
              FUN_140045f90(uVar7,uVar8);
              local_3e8 = 0x596;
              uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
              if ((local_3b4 & 0xffffff) == 0) {
                uVar13 = (undefined4)local_3c0;
                uVar18 = (undefined4)((ulonglong)local_3c0 >> 0x20);
              }
              else {
                uVar8 = FUN_140e4b060(&local_3c0);
                uVar13 = (undefined4)uVar8;
                uVar18 = (undefined4)((ulonglong)uVar8 >> 0x20);
              }
              if ((local_3d4 & 0xffffff) == 0) {
                dVar14 = local_3e0;
              }
              else {
                dVar14 = (double)FUN_140e4b060(&local_3e0);
              }
              uVar8 = FUN_140e79010((float)dVar14,(float)(double)CONCAT44(uVar18,uVar13));
              FUN_140045f90(uVar7,uVar8);
              cVar1 = FUN_140e643f0(local_108,&local_res8,&local_res10);
            } while (cVar1 != '\0');
          }
          FUN_140e63970(local_108,&local_res8,&local_res10);
          iVar2 = 3;
          do {
            iVar2 = iVar2 + -1;
            local_3e8 = 0x59c;
            if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_418);
            }
            local_418 = 0;
            local_410 = 0;
            local_40c = 5;
            uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
            local_3fc = 6;
            local_408 = local_res8;
            uVar21 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
            uVar6 = uVar6 & 0xffffffffffffff00;
            FUN_140e87440(&local_408,DAT_1419fe0e8,0x80000000,&local_2c8,uVar6,uVar21);
            if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_408);
            }
            local_35c = 6;
            local_368 = local_res8;
            uVar6 = uVar6 & 0xffffffffffffff00;
            FUN_140e87440(&local_368,DAT_1419fe158,0x80000000,&local_2d8,uVar6,
                          uVar21 & 0xffffffffffffff00);
            uVar13 = (undefined4)(uVar6 >> 0x20);
            if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_368);
            }
            local_26c = 0;
            local_278 = 0x4008000000000000;
            local_res20 = uVar11 | 0x20000000;
            FUN_140042560(&local_278,uVar7);
            FUN_1400424a0(&local_358,&local_2c8);
            local_res20 = uVar11 | 0x60000000;
            FUN_1400460e0(&local_358,&local_278);
            FUN_140041c60(local_348,&local_358);
            local_res20 = uVar11 | 0x20000000;
            if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_358);
            }
            local_res20 = uVar11;
            if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_278);
            }
            local_3b0 = local_348;
            uVar8 = FUN_140053940(local_378,&local_2d8,5);
            FUN_140041c60(local_338,uVar8);
            if ((1 << ((byte)_local_36c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_378);
            }
            local_3a8 = local_338;
            FUN_140041c60(local_328,&DAT_141dd4188);
            local_3a0 = local_328;
            local_23c = 0xf;
            local_248 = (longlong *)0x100000000000023;
            FUN_140041c60(local_318,&local_248);
            if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_248);
            }
            local_398 = local_318;
            ppuVar20 = &local_3b0;
            uVar6 = CONCAT44(uVar13,DAT_141a0a7c8);
            uVar8 = FUN_140e634e0(local_res8,local_res10,&local_418,4,uVar6,ppuVar20);
            iVar4 = FUN_140e63cb0(local_158,&local_res8,&local_res10,uVar8);
            if (0 < iVar4) {
              do {
                local_3e8 = 0x59e;
                local_24c = 0xf;
                local_258 = 0x10000010000034b;
                FUN_140041c60(&local_288,&local_258);
                if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_258);
                }
                FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_288);
                local_3e8 = 0x59f;
                uVar8 = (**(code **)(*local_res10 + 8))(local_res10,DAT_1419f5ef8);
                cVar1 = FUN_140041d90(uVar8,1);
                if (cVar1 == '\0') {
                  local_22c = 0;
                  local_238 = 0x4052c00000000000;
                  puVar9 = &local_238;
                  uVar11 = uVar11 | 0x200;
                }
                else {
                  local_21c = 0;
                  local_228 = 0x405a400000000000;
                  puVar9 = &local_228;
                  uVar11 = uVar11 | 0x100;
                }
                local_res20 = uVar11;
                FUN_140041c60(&local_3c0,puVar9);
                if ((uVar11 >> 9 != 0) &&
                   (uVar11 = uVar11 & 0xfffffdff, local_res20 = uVar11,
                   (1 << ((byte)local_22c & 0x1f) & 0x46U) != 0)) {
                  FUN_140041a50(&local_238);
                }
                if (((uVar11 >> 8 & 1) != 0) &&
                   (uVar11 = uVar11 & 0xfffffeff, local_res20 = uVar11,
                   (1 << ((byte)local_21c & 0x1f) & 0x46U) != 0)) {
                  FUN_140041a50(&local_228);
                }
                local_3e8 = 0x5a0;
                uVar8 = FUN_140e794b0(0x4008000000000000,0x4020000000000000);
                FUN_140041cb0(&local_3e0,uVar8);
                local_3e8 = 0x5a1;
                uVar8 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
                if ((local_3b4 & 0xffffff) == 0) {
                  uVar13 = (undefined4)local_3c0;
                  uVar18 = (undefined4)((ulonglong)local_3c0 >> 0x20);
                }
                else {
                  uVar15 = FUN_140e4b060(&local_3c0);
                  uVar13 = (undefined4)uVar15;
                  uVar18 = (undefined4)((ulonglong)uVar15 >> 0x20);
                }
                if ((local_3d4 & 0xffffff) == 0) {
                  dVar14 = local_3e0;
                }
                else {
                  dVar14 = (double)FUN_140e4b060(&local_3e0);
                }
                uVar15 = FUN_140e78f90((float)dVar14,(float)(double)CONCAT44(uVar18,uVar13));
                FUN_140045f90(uVar8,uVar15);
                local_3e8 = 0x5a2;
                uVar8 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
                if ((local_3b4 & 0xffffff) == 0) {
                  uVar13 = (undefined4)local_3c0;
                  uVar18 = (undefined4)((ulonglong)local_3c0 >> 0x20);
                }
                else {
                  uVar15 = FUN_140e4b060(&local_3c0);
                  uVar13 = (undefined4)uVar15;
                  uVar18 = (undefined4)((ulonglong)uVar15 >> 0x20);
                }
                if ((local_3d4 & 0xffffff) == 0) {
                  dVar14 = local_3e0;
                }
                else {
                  dVar14 = (double)FUN_140e4b060(&local_3e0);
                }
                uVar15 = FUN_140e79010((float)dVar14,(float)(double)CONCAT44(uVar18,uVar13));
                FUN_140045f90(uVar8,uVar15);
                cVar1 = FUN_140e643f0(local_158,&local_res8,&local_res10);
              } while (cVar1 != '\0');
            }
            FUN_140e63970(local_158,&local_res8,&local_res10);
            if (local_148 != 0) {
              FUN_140e4cd60();
              local_148 = 0;
            }
          } while (0 < iVar2);
          local_3e8 = 0x5a7;
          iVar2 = 3;
          if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_418);
          }
          local_418 = 0;
          local_410 = 0;
          local_40c = 5;
          local_3fc = 6;
          local_408 = local_res8;
          uVar21 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
          uVar6 = uVar6 & 0xffffffffffffff00;
          FUN_140e87440(&local_408,DAT_1419fe0e8,0x80000000,&local_2c8,uVar6,uVar21);
          if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_408);
          }
          local_3fc = 6;
          local_408 = local_res8;
          uVar6 = uVar6 & 0xffffffffffffff00;
          FUN_140e87440(&local_408,DAT_1419fe158,0x80000000,&local_2d8,uVar6,
                        uVar21 & 0xffffffffffffff00);
          uVar13 = (undefined4)(uVar6 >> 0x20);
          if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_408);
          }
          local_2ac = 0;
          local_2b8 = (longlong *)0x4018000000000000;
          local_278._0_4_ = 1;
          FUN_140042560(&local_2b8,uVar7);
          FUN_1400424a0(&local_408,&local_2c8);
          local_278._0_4_ = 3;
          FUN_1400460e0(&local_408,&local_2b8);
          FUN_140041c60(local_348,&local_408);
          local_278 = CONCAT44(local_278._4_4_,1);
          if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_408);
          }
          if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          local_3b0 = local_348;
          uVar8 = FUN_140053820(local_378,&local_2d8,5);
          FUN_140041c60(local_338,uVar8);
          if ((1 << (local_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_378);
          }
          local_3a8 = local_338;
          FUN_140041c60(local_328,&DAT_141dd4188);
          local_3a0 = local_328;
          local_3fc = 0xf;
          local_408 = (longlong *)0x100000000000023;
          FUN_140041c60(local_318,&local_408);
          if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_408);
          }
          local_398 = local_318;
          ppuVar20 = &local_3b0;
          uVar6 = CONCAT44(uVar13,DAT_141a0a7c8);
          uVar8 = FUN_140e634e0(local_res8,local_res10,&local_418,4,uVar6,ppuVar20);
          iVar4 = FUN_140e63cb0(&local_2a8,&local_res8,&local_res10,uVar8);
          if (0 < iVar4) {
            do {
              (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
              local_3e8 = 0x5a9;
              (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
              local_3fc = 0xf;
              local_408 = (longlong *)0x100000100000348;
              FUN_140041c60(&local_288,&local_408);
              if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_408);
              }
              FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_288);
              local_3e8 = 0x5aa;
              uVar8 = (**(code **)(*local_res10 + 8))(local_res10,DAT_1419f5ef8);
              cVar1 = FUN_140041d90(uVar8,1);
              if (cVar1 == '\0') {
                local_35c = 0;
                local_368 = (longlong *)0x4060e00000000000;
                pplVar10 = &local_368;
                uVar11 = uVar11 | 0x800;
              }
              else {
                local_34c = 0;
                local_358 = (longlong *)0x4046800000000000;
                pplVar10 = &local_358;
                uVar11 = uVar11 | 0x400;
              }
              local_res20 = uVar11;
              FUN_140041c60(&local_3c0,pplVar10);
              if ((uVar11 >> 0xb != 0) &&
                 (uVar11 = uVar11 & 0xfffff7ff, local_res20 = uVar11,
                 (1 << ((byte)local_35c & 0x1f) & 0x46U) != 0)) {
                FUN_140041a50(&local_368);
              }
              if (((uVar11 >> 10 & 1) != 0) &&
                 (uVar11 = uVar11 & 0xfffffbff, local_res20 = uVar11,
                 (1 << ((byte)local_34c & 0x1f) & 0x46U) != 0)) {
                FUN_140041a50(&local_358);
              }
              local_3e8 = 0x5ab;
              uVar8 = FUN_140e794b0(0x4008000000000000,0x4020000000000000);
              FUN_140041cb0(&local_3e0,uVar8);
              local_3e8 = 0x5ac;
              uVar8 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
              if ((local_3b4 & 0xffffff) == 0) {
                uVar13 = (undefined4)local_3c0;
                uVar18 = (undefined4)((ulonglong)local_3c0 >> 0x20);
              }
              else {
                uVar15 = FUN_140e4b060(&local_3c0);
                uVar13 = (undefined4)uVar15;
                uVar18 = (undefined4)((ulonglong)uVar15 >> 0x20);
              }
              if ((local_3d4 & 0xffffff) == 0) {
                dVar14 = local_3e0;
              }
              else {
                dVar14 = (double)FUN_140e4b060(&local_3e0);
              }
              uVar15 = FUN_140e78f90((float)dVar14,(float)(double)CONCAT44(uVar18,uVar13));
              FUN_140045f90(uVar8,uVar15);
              local_3e8 = 0x5ad;
              uVar8 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
              if ((local_3b4 & 0xffffff) == 0) {
                uVar13 = (undefined4)local_3c0;
                uVar18 = (undefined4)((ulonglong)local_3c0 >> 0x20);
              }
              else {
                uVar15 = FUN_140e4b060(&local_3c0);
                uVar13 = (undefined4)uVar15;
                uVar18 = (undefined4)((ulonglong)uVar15 >> 0x20);
              }
              if ((local_3d4 & 0xffffff) == 0) {
                dVar14 = local_3e0;
              }
              else {
                dVar14 = (double)FUN_140e4b060(&local_3e0);
              }
              uVar15 = FUN_140e79010((float)dVar14,(float)(double)CONCAT44(uVar18,uVar13));
              FUN_140045f90(uVar8,uVar15);
              cVar1 = FUN_140e643f0(&local_2a8,&local_res8,&local_res10);
            } while (cVar1 != '\0');
          }
          FUN_140e63970(&local_2a8,&local_res8,&local_res10);
          local_3e8 = 0x5b1;
          if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_418);
          }
          local_418 = 0;
          local_410 = 0;
          local_40c = 5;
          local_3fc = 6;
          local_408 = local_res8;
          uVar21 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
          uVar6 = uVar6 & 0xffffffffffffff00;
          FUN_140e87440(&local_408,DAT_1419fe0e8,0x80000000,&local_2c8,uVar6,uVar21);
          if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_408);
          }
          local_3fc = 6;
          local_408 = local_res8;
          uVar6 = uVar6 & 0xffffffffffffff00;
          FUN_140e87440(&local_408,DAT_1419fe158,0x80000000,&local_2d8,uVar6,
                        uVar21 & 0xffffffffffffff00);
          uVar13 = (undefined4)(uVar6 >> 0x20);
          if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_408);
          }
          local_3fc = 0;
          local_408 = (longlong *)0x4018000000000000;
          local_278 = CONCAT44(local_278._4_4_,8);
          FUN_140042560(&local_408,uVar7);
          uVar7 = FUN_140046450(local_378,&local_2c8,&local_408);
          FUN_140041c60(local_348,uVar7);
          FUN_140041b30(local_378);
          FUN_140041b30(&local_408);
          local_3b0 = local_348;
          uVar7 = FUN_140053820(&local_368,&local_2d8,5);
          FUN_140041c60(local_338,uVar7);
          FUN_140041b30(&local_368);
          local_3a8 = local_338;
          FUN_140041c60(local_328,&DAT_141dd4188);
          local_3a0 = local_328;
          uVar7 = FUN_140045f40(&local_358,0x23,1);
          FUN_140041c60(local_318,uVar7);
          FUN_140041b30(&local_358);
          local_398 = local_318;
          ppuVar20 = &local_3b0;
          uVar6 = CONCAT44(uVar13,DAT_141a0a7c8);
          uVar7 = FUN_140e634e0(local_res8,local_res10,&local_418,4,uVar6,ppuVar20);
          iVar4 = FUN_140e63cb0(&local_138,&local_res8,&local_res10,uVar7);
          if (0 < iVar4) {
            do {
              FUN_140042490(local_res8,DAT_1419f5ef8);
              local_3e8 = 0x5b3;
              FUN_140042490(local_res8,DAT_1419f5ef8);
              uVar7 = FUN_140045f40(local_378,0x1000348,1);
              FUN_140041c60(&local_288,uVar7);
              FUN_140041b30(local_378);
              FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_288);
              local_3e8 = 0x5b4;
              FUN_140044220(&local_188,0xffffffff);
              FUN_140e86fa0(local_res8,DAT_141a0f938,0x80000000,&local_188);
              local_3e8 = 0x5b5;
              uVar7 = FUN_140042490(local_res10,DAT_1419f5ef8);
              cVar1 = FUN_140041d90(uVar7,1);
              if (cVar1 == '\0') {
                uVar7 = FUN_140041c20(&local_408,0x2d);
                uVar11 = uVar11 | 0x2000;
              }
              else {
                uVar7 = FUN_140041c20(&local_368,0x87);
                uVar11 = uVar11 | 0x1000;
              }
              local_res20 = uVar11;
              FUN_140041c60(&local_3c0,uVar7);
              if (uVar11 >> 0xd != 0) {
                uVar11 = uVar11 & 0xffffdfff;
                local_res20 = uVar11;
                FUN_140041b30(&local_408);
              }
              if ((uVar11 >> 0xc & 1) != 0) {
                uVar11 = uVar11 & 0xffffefff;
                local_res20 = uVar11;
                FUN_140041b30(&local_368);
              }
              local_3e8 = 0x5b6;
              uVar7 = FUN_140e794b0(0x4008000000000000,0x4020000000000000);
              FUN_140041cb0(&local_3e0,uVar7);
              local_3e8 = 0x5b7;
              uVar7 = FUN_1400419a0(local_res8,DAT_141a1f230);
              dVar14 = (double)FUN_140041980(&local_3c0);
              dVar17 = (double)FUN_140041980(&local_3e0);
              uVar8 = FUN_140e78f90((float)dVar17,(float)dVar14);
              FUN_140045f90(uVar7,uVar8);
              local_3e8 = 0x5b8;
              uVar7 = FUN_1400419a0(local_res8,DAT_141a1f500);
              dVar14 = (double)FUN_140041980(&local_3c0);
              dVar17 = (double)FUN_140041980(&local_3e0);
              uVar8 = FUN_140e79010((float)dVar17,(float)dVar14);
              FUN_140045f90(uVar7,uVar8);
              cVar1 = FUN_140e643f0(&local_138,&local_res8,&local_res10);
            } while (cVar1 != '\0');
          }
          FUN_140e63970(&local_138,&local_res8,&local_res10);
          iVar4 = 5;
          do {
            iVar4 = iVar4 + -1;
            local_3e8 = 0x5be;
            if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_418);
            }
            local_418 = 0;
            local_410 = 0;
            local_40c = 5;
            FUN_1400ec6d0(local_378,local_res8);
            uVar21 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
            uVar6 = uVar6 & 0xffffffffffffff00;
            FUN_140e87440(local_378,DAT_1419fe0e8,0x80000000,&local_2c8,uVar6,uVar21);
            FUN_140041b30(local_378);
            FUN_1400ec6d0(&local_408,local_res8);
            uVar6 = uVar6 & 0xffffffffffffff00;
            FUN_140e87440(&local_408,DAT_1419fe158,0x80000000,&local_2d8,uVar6,
                          uVar21 & 0xffffffffffffff00);
            uVar13 = (undefined4)(uVar6 >> 0x20);
            FUN_140041b30(&local_408);
            FUN_140041c60(local_348,&local_2c8);
            local_3b0 = local_348;
            FUN_140041c60(local_338,&local_2d8);
            local_3a8 = local_338;
            FUN_140041c60(local_328,&DAT_141dd4188);
            local_3a0 = local_328;
            uVar7 = FUN_140045f40(&local_368,0x23,1);
            FUN_140041c60(local_318,uVar7);
            FUN_140041b30(&local_368);
            local_398 = local_318;
            ppuVar20 = &local_3b0;
            uVar6 = CONCAT44(uVar13,DAT_141a0a7c8);
            uVar7 = FUN_140e634e0(local_res8,local_res10,&local_418,4,uVar6,ppuVar20);
            iVar5 = FUN_140e63cb0(local_208,&local_res8,&local_res10,uVar7);
            if (0 < iVar5) {
              do {
                local_3e8 = 0x5c0;
                uVar7 = FUN_140045f40(&local_358,0x100034a,1);
                FUN_140041c60(&local_288,uVar7);
                FUN_140041b30(&local_358);
                FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_288);
                local_3e8 = 0x5c1;
                FUN_140044220(&local_198,0);
                FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_198);
                local_3e8 = 0x5c2;
                uVar7 = FUN_140e78f00(3);
                FUN_140041cb0(&local_1a8,uVar7);
                FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_1a8);
                local_3e8 = 0x5c3;
                uVar7 = FUN_140e794b0(0x4039000000000000,0x4062200000000000);
                FUN_140041cb0(&local_3c0,uVar7);
                local_3e8 = 0x5c4;
                uVar7 = FUN_140e794b0(0x4008000000000000,0x4020000000000000);
                FUN_140041cb0(&local_3e0,uVar7);
                local_3e8 = 0x5c5;
                uVar7 = FUN_1400419a0(local_res8,DAT_141a1f230);
                dVar14 = (double)FUN_140041980(&local_3c0);
                dVar17 = (double)FUN_140041980(&local_3e0);
                uVar8 = FUN_140e78f90((float)dVar17,(float)dVar14);
                FUN_140045f90(uVar7,uVar8);
                local_3e8 = 0x5c6;
                uVar7 = FUN_1400419a0(local_res8,DAT_141a1f500);
                dVar14 = (double)FUN_140041980(&local_3c0);
                dVar17 = (double)FUN_140041980(&local_3e0);
                uVar8 = FUN_140e79010((float)dVar17,(float)dVar14);
                FUN_140045f90(uVar7,uVar8);
                cVar1 = FUN_140e643f0(local_208,&local_res8,&local_res10);
              } while (cVar1 != '\0');
            }
            FUN_140e63970(local_208,&local_res8,&local_res10);
            FUN_140045ef0(local_208);
          } while (0 < iVar4);
          do {
            iVar2 = iVar2 + -1;
            local_3e8 = 0x5ce;
            if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_418);
            }
            local_418 = 0;
            local_410 = 0;
            local_40c = 5;
            FUN_1400ec6d0(local_378,local_res8);
            uVar21 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
            uVar6 = uVar6 & 0xffffffffffffff00;
            FUN_140e87440(local_378,DAT_1419fe0e8,0x80000000,&local_2c8,uVar6,uVar21);
            FUN_140041b30(local_378);
            FUN_1400ec6d0(&local_408,local_res8);
            uVar6 = uVar6 & 0xffffffffffffff00;
            FUN_140e87440(&local_408,DAT_1419fe158,0x80000000,&local_2d8,uVar6,
                          uVar21 & 0xffffffffffffff00);
            uVar13 = (undefined4)(uVar6 >> 0x20);
            FUN_140041b30(&local_408);
            FUN_140041c60(local_348,&local_2c8);
            local_3b0 = local_348;
            uVar7 = FUN_140053940(&local_368,&local_2d8,8);
            FUN_140041c60(local_338,uVar7);
            FUN_140041b30(&local_368);
            local_3a8 = local_338;
            FUN_140041c60(local_328,&DAT_141dd4188);
            local_3a0 = local_328;
            uVar7 = FUN_140045f40(&local_358,0x23,1);
            FUN_140041c60(local_318,uVar7);
            FUN_140041b30(&local_358);
            local_398 = local_318;
            ppuVar20 = &local_3b0;
            uVar6 = CONCAT44(uVar13,DAT_141a0a7c8);
            uVar7 = FUN_140e634e0(local_res8,local_res10,&local_418,4,uVar6,ppuVar20);
            iVar4 = FUN_140e63cb0(local_208,&local_res8,&local_res10,uVar7);
            if (0 < iVar4) {
              do {
                local_3e8 = 0x5d0;
                uVar7 = FUN_140045f40(&local_248,0x100034b,1);
                FUN_140041c60(&local_288,uVar7);
                FUN_140041b30(&local_248);
                FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_288);
                local_3e8 = 0x5d1;
                uVar7 = FUN_140042490(local_res10,DAT_1419f5ef8);
                cVar1 = FUN_140041d90(uVar7,1);
                if (cVar1 == '\0') {
                  uVar7 = FUN_140e794b0(0x405b800000000000,0x4060400000000000);
                  uVar7 = FUN_140042540(&local_258,uVar7);
                  uVar11 = uVar11 | 0x8000;
                }
                else {
                  uVar7 = FUN_140e794b0(0x403e000000000000,0x404e000000000000);
                  uVar7 = FUN_140042540(&local_238,uVar7);
                  uVar11 = uVar11 | 0x4000;
                }
                local_res20 = uVar11;
                FUN_140041c60(&local_3c0,uVar7);
                if (uVar11 >> 0xf != 0) {
                  uVar11 = uVar11 & 0xffff7fff;
                  local_res20 = uVar11;
                  FUN_140041b30(&local_258);
                }
                if ((uVar11 >> 0xe & 1) != 0) {
                  uVar11 = uVar11 & 0xffffbfff;
                  local_res20 = uVar11;
                  FUN_140041b30(&local_238);
                }
                local_3e8 = 0x5d2;
                uVar7 = FUN_140e794b0(0x4008000000000000,0x4020000000000000);
                FUN_140041cb0(&local_3e0,uVar7);
                local_3e8 = 0x5d3;
                uVar7 = FUN_1400419a0(local_res8,DAT_141a1f230);
                dVar14 = (double)FUN_140041980(&local_3c0);
                dVar17 = (double)FUN_140041980(&local_3e0);
                uVar8 = FUN_140e78f90((float)dVar17,(float)dVar14);
                FUN_140045f90(uVar7,uVar8);
                local_3e8 = 0x5d4;
                uVar7 = FUN_1400419a0(local_res8,DAT_141a1f500);
                dVar14 = (double)FUN_140041980(&local_3c0);
                dVar17 = (double)FUN_140041980(&local_3e0);
                uVar8 = FUN_140e79010((float)dVar17,(float)dVar14);
                FUN_140045f90(uVar7,uVar8);
                cVar1 = FUN_140e643f0(local_208,&local_res8,&local_res10);
              } while (cVar1 != '\0');
            }
            FUN_140e63970(local_208,&local_res8,&local_res10);
            FUN_140045ef0(local_208);
          } while (0 < iVar2);
          iVar2 = 0x3c;
          do {
            iVar2 = iVar2 + -1;
            local_3e8 = 0x5dc;
            if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_418);
            }
            local_418 = 0;
            local_410 = 0;
            local_40c = 5;
            FUN_1400ec6d0(local_378,local_res8);
            uVar21 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
            uVar6 = uVar6 & 0xffffffffffffff00;
            FUN_140e87440(local_378,DAT_1419fe0e8,0x80000000,&local_2c8,uVar6,uVar21);
            FUN_140041b30(local_378);
            FUN_1400ec6d0(&local_408,local_res8);
            uVar21 = uVar21 & 0xffffffffffffff00;
            uVar6 = uVar6 & 0xffffffffffffff00;
            FUN_140e87440(&local_408,DAT_1419fe158,0x80000000,&local_2d8,uVar6,uVar21);
            FUN_140041b30(&local_408);
            FUN_1400ec6d0(&local_368,local_res8);
            uVar6 = uVar6 & 0xffffffffffffff00;
            FUN_140e87440(&local_368,DAT_141a1b910,0x80000000,&local_1e8,uVar6,
                          uVar21 & 0xffffffffffffff00);
            uVar13 = (undefined4)(uVar6 >> 0x20);
            FUN_140041b30(&local_368);
            uVar7 = FUN_140e794b0(0xc020000000000000,0x4020000000000000);
            uVar7 = FUN_140162e10(&local_248,&local_2c8,uVar7);
            FUN_140041c60(local_348,uVar7);
            FUN_140041b30(&local_248);
            local_3b0 = local_348;
            uVar7 = FUN_140e794b0(0xc020000000000000,0x4020000000000000);
            uVar7 = FUN_140162e10(&local_258,&local_2d8,uVar7);
            FUN_140041c60(local_338,uVar7);
            FUN_140041b30(&local_258);
            local_3a8 = local_338;
            FUN_140041c60(local_328,&local_1e8);
            local_3a0 = local_328;
            uVar7 = FUN_140045f40(&local_238,0xf,1);
            FUN_140041c60(local_318,uVar7);
            FUN_140041b30(&local_238);
            local_398 = local_318;
            ppuVar20 = &local_3b0;
            uVar6 = CONCAT44(uVar13,DAT_141a0a7c8);
            uVar7 = FUN_140e634e0(local_res8,local_res10,&local_418,4,uVar6,ppuVar20);
            FUN_140041c60(&local_1d8,uVar7);
            local_3e8 = 0x5dd;
            uVar7 = FUN_140e794b0(0xc024000000000000,0x406c200000000000);
            FUN_140041cb0(&local_1c8,uVar7);
            local_3e8 = 0x5de;
            uVar7 = FUN_140e794b0(0x4000000000000000,0x4020000000000000);
            FUN_140041cb0(&local_3e0,uVar7);
            local_3e8 = 0x5df;
            iVar4 = FUN_140e63cb0(local_208,&local_res8,&local_res10,&local_1d8);
            if (0 < iVar4) {
              do {
                local_3e8 = 0x5e1;
                uVar7 = FUN_1400419a0(local_res8,DAT_141a1f4e0);
                FUN_1400ec6d0(&local_358,local_res10);
                ppuVar20 = (undefined1 **)((ulonglong)ppuVar20 & 0xffffffffffffff00);
                uVar6 = uVar6 & 0xffffffffffffff00;
                FUN_140e87440(&local_358,DAT_141a0a828,0x80000000,&local_1b8,uVar6,ppuVar20);
                FUN_140041b30(&local_358);
                FUN_140e609c0(local_res8);
                FUN_140041c60(uVar7,&local_1b8);
                FUN_140e60910(1);
                local_3e8 = 0x5e2;
                uVar7 = FUN_1400419a0(local_res8,DAT_141a1eed0);
                FUN_140e609c0(local_res8);
                FUN_140041c60(uVar7,&local_1c8);
                FUN_140e60910(1);
                local_3e8 = 0x5e3;
                uVar7 = FUN_140042490(local_res8,DAT_141a1eed0);
                uVar8 = FUN_1400419a0(local_res8,DAT_141a1f230);
                dVar14 = (double)FUN_140041980(uVar7);
                dVar17 = (double)FUN_140041980(&local_3e0);
                uVar15 = FUN_140e78f90((float)dVar17,(float)dVar14);
                FUN_140045f90(uVar8,uVar15);
                local_3e8 = 0x5e4;
                uVar8 = FUN_1400419a0(local_res8,DAT_141a1f500);
                dVar14 = (double)FUN_140041980(uVar7);
                dVar17 = (double)FUN_140041980(&local_3e0);
                uVar7 = FUN_140e79010((float)dVar17,(float)dVar14);
                FUN_140045f90(uVar8,uVar7);
                cVar1 = FUN_140e643f0(local_208,&local_res8,&local_res10);
              } while (cVar1 != '\0');
            }
            FUN_140e63970(local_208,&local_res8,&local_res10);
            FUN_140045ef0(local_208);
          } while (0 < iVar2);
          local_3e8 = 0x5e9;
          if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_418);
          }
          uVar13 = (undefined4)(uVar6 >> 0x20);
          local_418 = 0;
          local_410 = 0;
          local_40c = 5;
          uVar7 = FUN_140045f40(local_378,0x2000014,1);
          FUN_140041c60(local_348,uVar7);
          FUN_140041b30(local_378);
          uVar7 = CONCAT44(uVar13,DAT_141a07788);
          local_3b0 = local_348;
          FUN_140e634e0(local_res8,local_res10,&local_418,1,uVar7,&local_3b0);
          uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
          local_3e8 = 0x5ea;
          if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_418);
          }
          local_418 = 0;
          local_410 = 0;
          local_40c = 5;
          uVar7 = FUN_140045f40(local_378,0x2000015,1);
          FUN_140041c60(local_348,uVar7);
          FUN_140041b30(local_378);
          local_3b0 = local_348;
          FUN_140e634e0(local_res8,local_res10,&local_418,1,CONCAT44(uVar13,DAT_141a07788),
                        &local_3b0);
          local_3e8 = 0x5ec;
          FUN_140edd0e0(local_res8,local_res10,0,0);
          FUN_140045ef0(&local_138);
          FUN_140045ef0(&local_2a8);
          FUN_140045ef0(local_108);
        }
        local_3e8 = 0x5ef;
        if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_418);
        }
        local_418 = 0;
        local_410 = 0;
        local_40c = 5;
        uVar7 = FUN_140042490(local_res8,DAT_1419fd4b8);
        FUN_140e63610(local_res8,local_res10,&local_418,0,uVar7,0);
        local_3e8 = 0x5f1;
      }
      else if (iVar2 == 2) {
        local_3e8 = 0x5f5;
        if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_418);
        }
        local_418 = 0;
        local_410 = 0;
        local_40c = 5;
        uVar7 = FUN_140042490(local_res8,DAT_1419f5b18);
        FUN_140e63610(local_res8,local_res10,&local_418,0,uVar7,0);
        local_3e8 = 0x5f6;
      }
      else if (iVar2 == 3) {
        local_3e8 = 0x5fa;
      }
      break;
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 4);
  FUN_140041b30(local_118);
  FUN_140041b30(&local_268);
  FUN_140041b30(&local_3d0);
  FUN_140041b30(&local_418);
  FUN_140041b30(&local_1a8);
  FUN_140041b30(&local_198);
  FUN_140041b30(&local_188);
  FUN_140041b30(&local_3c0);
  FUN_140041b30(&local_1b8);
  FUN_140041b30(&local_3e0);
  FUN_140041b30(&local_1c8);
  FUN_140041b30(&local_1d8);
  FUN_140041b30(&local_1e8);
  FUN_140041b30(&local_218);
  FUN_140041b30(&local_178);
  FUN_140041b30(&local_2d8);
  FUN_140041b30(&local_2c8);
  FUN_140041b30(&local_168);
  FUN_140041b30(&local_288);
  _eh_vector_destructor_iterator_(local_348,0x10,7,FUN_140041b30);
  FUN_140041970(&local_3f8);
  return local_res18;
}

