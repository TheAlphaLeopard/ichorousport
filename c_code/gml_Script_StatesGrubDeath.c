// gml_Script_StatesGrubDeath @ 0x140538ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesGrubDeath
          (longlong *param_1,longlong *param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong **pplVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  double dVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  longlong *local_res8;
  longlong *local_res10;
  undefined8 *local_res18;
  uint local_res20;
  code *pcVar17;
  undefined4 uVar19;
  undefined8 **ppuVar18;
  ulonglong in_stack_fffffffffffffc30;
  undefined8 **ppuVar20;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined4 local_3bc;
  longlong *local_3b8;
  undefined4 local_3ac;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined8 local_398;
  char *local_390;
  undefined4 local_388;
  undefined8 *local_380;
  undefined1 *local_378;
  undefined8 *local_370;
  undefined8 *local_368;
  undefined1 *local_360;
  undefined1 *local_358;
  undefined1 *local_350;
  undefined8 local_348 [2];
  undefined1 local_338 [16];
  undefined8 local_328;
  undefined4 local_31c;
  undefined8 local_318 [2];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [12];
  byte local_2cc;
  longlong *local_2c8;
  uint local_2bc;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_22c;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  longlong local_208;
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
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined4 local_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [120];
  
  local_res20 = 0;
  local_390 = "gml_Script_StatesGrubDrill";
  local_398 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_398;
  local_388 = 0x34b;
  pcVar17 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_348,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_28c = 0xffffff;
  local_298 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  plVar4 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_3bc = 0;
  local_3c8 = 0;
  local_39c = 0;
  local_3a8 = 0;
  local_2ac = 0;
  local_2b8 = 0;
  local_24c = 0;
  local_258 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_388 = 0x34d;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_2c8 = plVar4;
  FUN_1400424a0(local_158,param_5);
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf950) &&
     (_Init_thread_header(&DAT_141ddf950), DAT_141ddf950 == -1)) {
    _DAT_141ddf74c = 0;
    _DAT_141ddf740 = 0x4000000000000000;
    _DAT_141ddf760 = 0;
    _DAT_141ddf754 = 0;
    _DAT_141ddf764 = 1;
    _DAT_141ddf774 = 0;
    _DAT_141ddf768 = 0x3ff0000000000000;
    _DAT_141ddf778 = 2;
    _DAT_141ddf788 = 0;
    _DAT_141ddf77c = 0x4008000000000000;
    _DAT_141ddf78c = 3;
    atexit((_func_5014 *)&LAB_141481ca0);
    _Init_thread_footer(&DAT_141ddf950);
  }
  uVar11 = 0;
  do {
    iVar2 = FUN_140e851f0(&DAT_141ddf740 + (longlong)(int)uVar11 * 0x14,local_158,DAT_141955260,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(&DAT_141ddf750 + (longlong)(int)uVar11 * 0x14);
      if (iVar2 == 0) {
        local_388 = 0x351;
        local_3ac = 0xf;
        local_3b8 = (longlong *)0x100000100000314;
        FUN_140041c60(&local_298,&local_3b8);
        if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3b8);
        }
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_298);
        local_388 = 0x352;
        if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3c8);
        }
        local_3c8 = 0;
        local_3c0 = 0;
        local_3bc = 5;
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
        local_3ac = 6;
        local_3b8 = local_res8;
        uVar12 = (ulonglong)pcVar17 & 0xffffffffffffff00;
        FUN_140e87440(&local_3b8,DAT_1419fe0e8,0x80000000,&local_2a8,uVar12,
                      in_stack_fffffffffffffc30 & 0xffffffffffffff00);
        uVar19 = (undefined4)(uVar12 >> 0x20);
        if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3b8);
        }
        FUN_140e85f80(local_res8,DAT_141a00d18,0x80000000,&local_248);
        FUN_140041c60(local_348,uVar5);
        local_380 = local_348;
        FUN_140041c60(local_338,&DAT_141dd3e78);
        local_378 = local_338;
        uVar6 = FUN_140081e90(local_2d8,&local_248,0x4000000000000000);
        iVar2 = FUN_140e851f0(&local_2a8,uVar6,DAT_141955260,1);
        if (iVar2 == -2 || -1 < iVar2) {
          local_3ac = 0;
          local_3b8 = (longlong *)&DAT_bff0000000000000;
          pplVar10 = &local_3b8;
          uVar11 = 2;
        }
        else {
          local_2bc = 0;
          local_2c8 = (longlong *)0x3ff0000000000000;
          pplVar10 = &local_2c8;
          uVar11 = 1;
        }
        local_res20 = uVar11;
        FUN_140041c60(&local_328,pplVar10);
        if (((uVar11 & 2) != 0) &&
           (uVar11 = uVar11 & 0xfffffffd, local_res20 = uVar11,
           (1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_3b8);
        }
        if (((uVar11 & 1) != 0) && ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_2c8);
        }
        if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_2d8);
        }
        local_370 = &local_328;
        uVar6 = CONCAT44(uVar19,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_3c8,3,uVar6,&local_380);
        uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_388 = 0x353;
        if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3c8);
        }
        local_3c8 = 0;
        local_3c0 = 0;
        local_3bc = 5;
        FUN_140041c60(local_348,uVar5);
        local_380 = local_348;
        FUN_140041c60(local_338,&DAT_141dd3e28);
        local_378 = local_338;
        FUN_1400441d0(&local_328,&DAT_1419df7a0);
        local_370 = &local_328;
        uVar6 = CONCAT44(uVar19,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_3c8,3,uVar6,&local_380);
        uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_388 = 0x354;
        if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3c8);
        }
        local_3c8 = 0;
        local_3c0 = 0;
        local_3bc = 5;
        FUN_140041c60(local_348,uVar5);
        local_380 = local_348;
        FUN_140041c60(local_338,&DAT_141dd3f08);
        local_378 = local_338;
        FUN_1400441d0(&local_328,&DAT_1419df7a0);
        local_370 = &local_328;
        uVar6 = CONCAT44(uVar19,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_3c8,3,uVar6,&local_380);
        uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_388 = 0x356;
        if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3c8);
        }
        local_3c8 = 0;
        local_3c0 = 0;
        local_3bc = 5;
        FUN_140041c60(local_348,uVar5);
        local_380 = local_348;
        FUN_140041c60(local_338,&DAT_141dd3de8);
        local_378 = local_338;
        FUN_1400441d0(&local_328,&DAT_141dc66d0);
        local_370 = &local_328;
        uVar6 = CONCAT44(uVar19,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_3c8,3,uVar6,&local_380);
        uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_388 = 0x357;
        if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3c8);
        }
        local_3c8 = 0;
        local_3c0 = 0;
        local_3bc = 5;
        FUN_140041c60(local_348,uVar5);
        local_380 = local_348;
        FUN_140041c60(local_338,&DAT_141dd3e58);
        local_378 = local_338;
        FUN_1400441d0(&local_328,&DAT_141dc66d0);
        local_370 = &local_328;
        uVar6 = CONCAT44(uVar19,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_3c8,3,uVar6,&local_380);
        uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_388 = 0x359;
        if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3c8);
        }
        local_3c8 = 0;
        local_3c0 = 0;
        local_3bc = 5;
        FUN_140041c60(local_348,uVar5);
        local_380 = local_348;
        FUN_140041c60(local_338,&DAT_141dd3ef8);
        local_378 = local_338;
        FUN_1400441d0(&local_328,&DAT_141dc66d0);
        local_370 = &local_328;
        uVar6 = CONCAT44(uVar19,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_3c8,3,uVar6,&local_380);
        uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_388 = 0x35a;
        if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3c8);
        }
        local_3c8 = 0;
        local_3c0 = 0;
        local_3bc = 5;
        FUN_140041c60(local_348,uVar5);
        local_380 = local_348;
        FUN_140041c60(local_338,&DAT_141dd3e88);
        local_378 = local_338;
        FUN_1400441d0(&local_328,&DAT_141dc66d0);
        local_370 = &local_328;
        ppuVar20 = &local_380;
        uVar12 = CONCAT44(uVar19,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_3c8,3,uVar12,ppuVar20);
        local_388 = 0x35c;
        if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3c8);
        }
        local_3c8 = 0;
        local_3c0 = 0;
        local_3bc = 5;
        local_3ac = 6;
        local_3b8 = local_res8;
        uVar12 = uVar12 & 0xffffffffffffff00;
        FUN_140e87440(&local_3b8,DAT_1419fe0e8,0x80000000,&local_2a8,uVar12,
                      (ulonglong)ppuVar20 & 0xffffffffffffff00);
        uVar19 = (undefined4)(uVar12 >> 0x20);
        if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3b8);
        }
        FUN_140041c60(local_348,uVar5);
        local_380 = local_348;
        FUN_140041c60(local_338,&DAT_141dd3ea8);
        local_378 = local_338;
        FUN_140041c60(&local_328,&local_2a8);
        local_370 = &local_328;
        uVar6 = CONCAT44(uVar19,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_3c8,3,uVar6,&local_380);
        uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_388 = 0x35e;
        if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3c8);
        }
        local_3c8 = 0;
        local_3c0 = 0;
        local_3bc = 5;
        uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5ef8);
        FUN_140041c60(local_348,uVar5);
        local_380 = local_348;
        FUN_140041c60(local_338,&DAT_141dd3e78);
        local_378 = local_338;
        FUN_140e609c0(local_res8);
        uVar5 = FUN_140e634e0(local_res8,local_res10,&local_3c8,2,CONCAT44(uVar19,DAT_1419ff4f8),
                              &local_380);
        FUN_140041c60(uVar6,uVar5);
        FUN_140e60910(1);
        local_388 = 0x360;
      }
      else if (iVar2 == 1) {
        local_388 = 0x364;
        if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3c8);
        }
        local_3c8 = 0;
        local_3c0 = 0;
        local_3bc = 5;
        if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3a8);
        }
        local_3a8 = 0;
        local_3a0 = 0;
        local_39c = 5;
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
        local_3ac = 6;
        local_3b8 = local_res8;
        in_stack_fffffffffffffc30 = in_stack_fffffffffffffc30 & 0xffffffffffffff00;
        uVar12 = (ulonglong)pcVar17 & 0xffffffffffffff00;
        FUN_140e87440(&local_3b8,DAT_1419fe0e8,0x80000000,&local_2a8,uVar12,
                      in_stack_fffffffffffffc30);
        if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3b8);
        }
        FUN_140041c60(local_348,uVar5);
        local_380 = local_348;
        FUN_140041c60(local_338,&DAT_141dd3e78);
        local_378 = local_338;
        local_3ac = 6;
        local_3b8 = local_res8;
        uVar12 = uVar12 & 0xffffffffffffff00;
        FUN_140e87440(&local_3b8,DAT_1419fe158,0x80000000,&local_278,uVar12,
                      in_stack_fffffffffffffc30 & 0xffffffffffffff00);
        uVar19 = (undefined4)(uVar12 >> 0x20);
        if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3b8);
        }
        uVar9 = CONCAT44(uVar19,DAT_1419ff4f8);
        uVar6 = FUN_140e634e0(local_res8,local_res10,&local_3a8,2,uVar9,&local_380);
        uVar19 = (undefined4)((ulonglong)uVar9 >> 0x20);
        uVar6 = FUN_140087a30(local_2d8,uVar6,2);
        FUN_1400424a0(&local_3b8,&local_2a8);
        local_res20 = 0x1000;
        FUN_1400460e0(&local_3b8,uVar6);
        FUN_140041c60(&local_328,&local_3b8);
        local_res20 = 0;
        if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3b8);
        }
        if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_2d8);
        }
        local_370 = &local_328;
        uVar6 = FUN_140053940(local_2d8,&local_278,2);
        FUN_140041c60(local_318,uVar6);
        if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_2d8);
        }
        local_368 = local_318;
        local_3ac = 0xf;
        local_3b8 = (longlong *)0x100000000000149;
        FUN_140041c60(local_308,&local_3b8);
        if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3b8);
        }
        local_360 = local_308;
        uVar9 = CONCAT44(uVar19,DAT_141a124c8);
        uVar6 = FUN_140e634e0(local_res8,local_res10,&local_3c8,3,uVar9,&local_370);
        uVar19 = (undefined4)((ulonglong)uVar9 >> 0x20);
        FUN_140041c60(&local_268,uVar6);
        local_388 = 0x365;
        if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3c8);
        }
        local_3c8 = 0;
        local_3c0 = 0;
        local_3bc = 5;
        FUN_140041c60(local_348,uVar5);
        local_380 = local_348;
        FUN_140041c60(local_338,&DAT_141dd3e28);
        local_378 = local_338;
        ppuVar20 = &local_380;
        uVar12 = CONCAT44(uVar19,DAT_1419ff4f8);
        uVar6 = FUN_140e634e0(local_res8,local_res10,&local_3c8,2,uVar12,ppuVar20);
        cVar1 = FUN_140e491e0(uVar6);
        if (cVar1 != '\0') {
          local_388 = 0x39d;
          local_3ac = 6;
          local_3b8 = local_res8;
          uVar15 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
          uVar12 = uVar12 & 0xffffffffffffff00;
          FUN_140e87440(&local_3b8,DAT_141a0a728,0x80000000,&local_288,uVar12,uVar15);
          if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3b8);
          }
          local_3ac = 0xf;
          local_3b8 = (longlong *)0x100000100000311;
          iVar2 = FUN_140e851f0(&local_288,&local_3b8,DAT_141955260,0);
          if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3b8);
          }
          if (iVar2 == 0) {
            local_388 = 0x39f;
            local_3ac = 0xf;
            local_3b8 = (longlong *)0x100000100000312;
            FUN_140041c60(&local_298,&local_3b8);
            if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3b8);
            }
            FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_298);
          }
          local_388 = 0x3a3;
          local_3ac = 6;
          local_3b8 = local_res8;
          uVar12 = uVar12 & 0xffffffffffffff00;
          FUN_140e87440(&local_3b8,DAT_141a0a728,0x80000000,&local_288,uVar12,
                        uVar15 & 0xffffffffffffff00);
          uVar19 = (undefined4)(uVar12 >> 0x20);
          if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3b8);
          }
          local_3ac = 0xf;
          local_3b8 = (longlong *)0x100000100000312;
          iVar2 = FUN_140e851f0(&local_288,&local_3b8,DAT_141955260,0);
          if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3b8);
          }
          if (iVar2 != 0) goto LAB_14053bff7;
          local_388 = 0x3a5;
          if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3c8);
          }
          local_3c8 = 0;
          local_3c0 = 0;
          local_3bc = 5;
          if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3a8);
          }
          local_3a8 = 0;
          local_3a0 = 0;
          local_39c = 5;
          uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          FUN_140041c60(local_348,uVar5);
          local_380 = local_348;
          FUN_140041c60(local_338,&DAT_141dd3e58);
          local_378 = local_338;
          FUN_1400441d0(&local_328,&DAT_141dc66d0);
          local_370 = &local_328;
          uVar6 = CONCAT44(uVar19,DAT_141a0a0d8);
          uVar5 = FUN_140e634e0(local_res8,local_res10,&local_3a8,1,uVar6,&local_370);
          uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
          uVar5 = FUN_140087a30(local_2d8,uVar5,2);
          ppuVar20 = &local_380;
          uVar12 = CONCAT44(uVar19,DAT_1419ff4f8);
          uVar6 = FUN_140e634e0(local_res8,local_res10,&local_3c8,2,uVar12,ppuVar20);
          iVar2 = FUN_140e851f0(uVar6,uVar5,DAT_141955260,1);
          if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_2d8);
          }
          if (iVar2 == -2 || 0 < iVar2) {
            if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            uVar19 = (undefined4)(uVar12 >> 0x20);
            local_2b8 = 0;
            local_2b0 = 0;
            local_2ac = 5;
            if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_258);
            }
            local_258 = 0;
            local_250 = 0;
            local_24c = 5;
            uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            FUN_140041c60(local_318,uVar5);
            local_368 = local_318;
            FUN_140041c60(local_308,&DAT_141dd3e58);
            local_360 = local_308;
            FUN_1400441d0(local_2f8,&DAT_141dc66d0);
            uVar6 = CONCAT44(uVar19,DAT_141a0a0d8);
            local_358 = local_2f8;
            uVar5 = FUN_140e634e0(local_res8,local_res10,&local_258,1,uVar6,&local_358);
            uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
            uVar5 = FUN_1400b46b0(local_2d8,uVar5,0x400599999999999a);
            ppuVar20 = &local_368;
            uVar12 = CONCAT44(uVar19,DAT_1419ff4f8);
            uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2b8,2,uVar12,ppuVar20);
            uVar11 = FUN_140e851f0(uVar6,uVar5,DAT_141955260,1);
            if ((1 << (local_2cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_2d8);
            }
            if (uVar11 < 0x80000000) goto LAB_14053a961;
          }
          else {
LAB_14053a961:
            cVar1 = thunk_FUN_140e491e0(&local_268);
            if (cVar1 != '\0') {
              local_388 = 0x3a7;
              FUN_1400ec6d0(local_2d8,local_res8);
              FUN_140e87440(local_2d8,DAT_1419fe0e8,0x80000000,&local_2a8,
                            uVar12 & 0xffffffffffffff00,(ulonglong)ppuVar20 & 0xffffffffffffff00);
              FUN_140041b30(local_2d8);
              FUN_140e85f80(local_res8,DAT_141a00d18,0x80000000,&local_248);
              uVar5 = FUN_140081e90(local_228,&local_248,0x4000000000000000);
              cVar1 = FUN_140046d00(&local_2a8,uVar5);
              pplVar10 = &local_res10;
              if (cVar1 == '\0') {
                uVar5 = FUN_14053cd10(local_148,&local_268,&local_168,&local_res8,pplVar10);
                uVar19 = (undefined4)((ulonglong)pplVar10 >> 0x20);
                uVar5 = FUN_14053cc80(uVar5,local_2d8);
                uVar11 = 0x20;
              }
              else {
                uVar5 = FUN_14053cc60(local_128,&local_268,&local_198);
                uVar19 = (undefined4)((ulonglong)pplVar10 >> 0x20);
                uVar5 = FUN_14053cbd0(uVar5,&local_3b8);
                uVar11 = 0x10;
              }
              local_res20 = uVar11;
              FUN_140041c60(&local_1f8,uVar5);
              if ((uVar11 & 0x20) != 0) {
                uVar11 = uVar11 & 0xffffffdf;
                local_res20 = uVar11;
                FUN_140041b30(local_2d8);
              }
              if ((uVar11 & 0x10) != 0) {
                uVar11 = uVar11 & 0xffffffef;
                local_res20 = uVar11;
                FUN_140041b30(&local_3b8);
              }
              FUN_140041b30(local_228);
              local_388 = 0x3a8;
              if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_3c8);
              }
              local_3c8 = 0;
              local_3c0 = 0;
              local_3bc = 5;
              uVar5 = FUN_140042490(local_res8,DAT_1419fd438);
              FUN_140041c60(local_348,uVar5);
              local_380 = local_348;
              FUN_140041c60(local_338,&DAT_141dd3f08);
              local_378 = local_338;
              ppuVar20 = &local_380;
              uVar12 = CONCAT44(uVar19,DAT_1419ff4f8);
              uVar5 = FUN_140e634e0(local_res8,local_res10,&local_3c8,2,uVar12,ppuVar20);
              cVar1 = FUN_140e491e0(uVar5);
              if (cVar1 == '\0') {
                local_388 = 0x3aa;
                if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_3a8);
                }
                local_3a8 = 0;
                local_3a0 = 0;
                local_39c = 5;
                FUN_1400ec6d0(local_2d8,local_res8);
                uVar12 = uVar12 & 0xffffffffffffff00;
                FUN_140e87440(local_2d8,DAT_1419fe158,0x80000000,&local_278,uVar12,
                              (ulonglong)ppuVar20 & 0xffffffffffffff00);
                uVar19 = (undefined4)(uVar12 >> 0x20);
                FUN_140041b30(local_2d8);
                local_370 = &local_1f8;
                FUN_140041c60(local_318,&local_278);
                local_368 = local_318;
                FUN_140041c60(local_308,&DAT_141dd3e38);
                local_360 = local_308;
                uVar5 = FUN_140045f40(local_228,0x7f,1);
                FUN_140041c60(local_2f8,uVar5);
                FUN_140041b30(local_228);
                ppuVar20 = &local_370;
                uVar12 = CONCAT44(uVar19,DAT_141a0a7c8);
                local_358 = local_2f8;
                uVar5 = FUN_140e634e0(local_res8,local_res10,&local_3a8,4,uVar12,ppuVar20);
                iVar2 = FUN_140e63cb0(local_128,&local_res8,&local_res10,uVar5);
                if (0 < iVar2) {
                  do {
                    local_388 = 0x3ab;
                    FUN_1400ec6d0(local_2d8,local_res8);
                    ppuVar20 = (undefined8 **)((ulonglong)ppuVar20 & 0xffffffffffffff00);
                    uVar12 = uVar12 & 0xffffffffffffff00;
                    FUN_140e87440(local_2d8,DAT_1419fe0e8,0x80000000,&local_2a8,uVar12,ppuVar20);
                    FUN_140041b30(local_2d8);
                    FUN_140e85f80(local_res8,DAT_141a00d18,0x80000000,&local_248);
                    uVar5 = FUN_140081e90(local_188,&local_248,0x4000000000000000);
                    cVar1 = FUN_140046d00(&local_2a8,uVar5);
                    if (cVar1 == '\0') {
                      uVar5 = FUN_140041c20(local_228,0xb4);
                      uVar11 = uVar11 | 0x80;
                    }
                    else {
                      uVar5 = FUN_140041c20(&local_3b8,0);
                      uVar11 = uVar11 | 0x40;
                    }
                    local_res20 = uVar11;
                    FUN_140041c60(&local_1a8,uVar5);
                    if ((char)uVar11 < '\0') {
                      uVar11 = uVar11 & 0xffffff7f;
                      local_res20 = uVar11;
                      FUN_140041b30(local_228);
                    }
                    if ((uVar11 & 0x40) != 0) {
                      uVar11 = uVar11 & 0xffffffbf;
                      local_res20 = uVar11;
                      FUN_140041b30(&local_3b8);
                    }
                    FUN_140041b30(local_188);
                    FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_1a8);
                    cVar1 = FUN_140e643f0(local_128,&local_res8,&local_res10);
                  } while (cVar1 != '\0');
                }
                FUN_140e63970(local_128,&local_res8,&local_res10);
                iVar2 = 4;
                do {
                  iVar2 = iVar2 + -1;
                  local_388 = 0x3af;
                  if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_3c8);
                  }
                  local_3c8 = 0;
                  local_3c0 = 0;
                  local_3bc = 5;
                  if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_3a8);
                  }
                  local_3a8 = 0;
                  local_3a0 = 0;
                  local_39c = 5;
                  uVar5 = FUN_140042490(local_res8,DAT_1419fd438);
                  FUN_140041c60(local_348,uVar5);
                  local_380 = local_348;
                  FUN_140041c60(local_338,&DAT_141dd3e78);
                  local_378 = local_338;
                  FUN_1400ec6d0(local_2d8,local_res8);
                  uVar12 = uVar12 & 0xffffffffffffff00;
                  FUN_140e87440(local_2d8,DAT_1419fe158,0x80000000,&local_278,uVar12,
                                (ulonglong)ppuVar20 & 0xffffffffffffff00);
                  uVar19 = (undefined4)(uVar12 >> 0x20);
                  FUN_140041b30(local_2d8);
                  uVar6 = CONCAT44(uVar19,DAT_1419ff4f8);
                  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_3a8,2,uVar6,&local_380);
                  uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
                  uVar12 = FUN_140041980(uVar5);
                  uVar5 = FUN_140042540(&local_3b8,uVar12 ^ 0x8000000000000000);
                  uVar5 = FUN_140046840(local_228,2,uVar5);
                  uVar5 = FUN_140046230(local_188,&local_1f8,uVar5);
                  FUN_140041c60(&local_328,uVar5);
                  FUN_140041b30(local_188);
                  FUN_140041b30(local_228);
                  FUN_140041b30(&local_3b8);
                  local_370 = &local_328;
                  FUN_140041c60(local_318,&local_278);
                  local_368 = local_318;
                  FUN_140041c60(local_308,&DAT_141dd3ee8);
                  local_360 = local_308;
                  uVar5 = FUN_140045f40(local_108,0x4f,1);
                  FUN_140041c60(local_2f8,uVar5);
                  FUN_140041b30(local_108);
                  ppuVar20 = &local_370;
                  uVar12 = CONCAT44(uVar19,DAT_141a0a7c8);
                  local_358 = local_2f8;
                  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_3c8,4,uVar12,ppuVar20);
                  iVar3 = FUN_140e63cb0(local_148,&local_res8,&local_res10,uVar5);
                  if (0 < iVar3) {
                    do {
                      uVar19 = (undefined4)(uVar12 >> 0x20);
                      local_388 = 0x3b1;
                      uVar5 = FUN_140045f40(local_f8,0x1000318,1);
                      FUN_140041c60(&local_298,uVar5);
                      FUN_140041b30(local_f8);
                      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_298);
                      local_388 = 0x3b2;
                      uVar5 = FUN_140e79480(0x4018000000000000);
                      FUN_140041cb0(&local_1c8,uVar5);
                      FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_1c8);
                      local_388 = 0x3b3;
                      uVar5 = FUN_1400419a0(local_res8,DAT_1419fdad8);
                      FUN_140041cb0(uVar5,0x3f847ae147ae147b);
                      local_388 = 0x3b5;
                      if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_3c8);
                      }
                      local_3c8 = 0;
                      local_3c0 = 0;
                      local_3bc = 5;
                      if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_3a8);
                      }
                      local_3a8 = 0;
                      local_3a0 = 0;
                      local_39c = 5;
                      if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_2b8);
                      }
                      local_2b8 = 0;
                      local_2b0 = 0;
                      local_2ac = 5;
                      uVar5 = FUN_140042490(local_res10,DAT_1419fd438);
                      uVar6 = FUN_1400419a0(local_res8,DAT_141a1f230);
                      FUN_140041c60(local_348,uVar5);
                      local_380 = local_348;
                      FUN_140041c60(local_338,&DAT_141dd3e78);
                      local_378 = local_338;
                      FUN_140041c60(&local_328,uVar5);
                      local_370 = &local_328;
                      FUN_140041c60(local_318,&DAT_141dd3e58);
                      local_368 = local_318;
                      FUN_1400441d0(local_308,&DAT_141dc66d0);
                      local_360 = local_308;
                      uVar9 = CONCAT44(uVar19,DAT_141a0a0d8);
                      uVar5 = FUN_140e634e0(local_res8,local_res10,&local_2b8,1,uVar9,&local_360);
                      uVar19 = (undefined4)((ulonglong)uVar9 >> 0x20);
                      uVar5 = FUN_1400b46b0(local_218,uVar5,0x4002666666666666);
                      uVar16 = CONCAT44(uVar19,DAT_1419ff4f8);
                      uVar9 = FUN_140e634e0(local_res8,local_res10,&local_3a8,2,uVar16,&local_370);
                      uVar19 = (undefined4)((ulonglong)uVar16 >> 0x20);
                      cVar1 = FUN_140046da0(uVar9,uVar5);
                      if (cVar1 == '\0') {
                        uVar5 = FUN_140041c20(local_b8,1);
                        uVar11 = uVar11 | 0x200;
                      }
                      else {
                        uVar5 = FUN_140041c20(local_178,0xffffffff);
                        uVar11 = uVar11 | 0x100;
                      }
                      local_res20 = uVar11;
                      FUN_140e609c0(local_res8);
                      ppuVar20 = &local_380;
                      uVar12 = CONCAT44(uVar19,DAT_1419ff4f8);
                      uVar9 = FUN_140e634e0(local_res8,local_res10,&local_3c8,2,uVar12,ppuVar20);
                      uVar15 = FUN_140041980(uVar9);
                      uVar9 = FUN_140042540(local_c8,uVar15 ^ 0x8000000000000000);
                      uVar16 = FUN_140e794b0(0x3ff0000000000000,0x4008000000000000);
                      uVar9 = FUN_1400426f0(local_d8,uVar16,uVar9);
                      uVar5 = FUN_1400467d0(local_e8,uVar9,uVar5);
                      FUN_140041c60(uVar6,uVar5);
                      FUN_140041b30(local_e8);
                      FUN_140041b30(local_d8);
                      FUN_140041b30(local_c8);
                      if (uVar11 >> 9 != 0) {
                        uVar11 = uVar11 & 0xfffffdff;
                        local_res20 = uVar11;
                        FUN_140041b30(local_b8);
                      }
                      if ((uVar11 >> 8 & 1) != 0) {
                        uVar11 = uVar11 & 0xfffffeff;
                        local_res20 = uVar11;
                        FUN_140041b30(local_178);
                      }
                      FUN_140041b30(local_218);
                      FUN_140e60910(1);
                      local_388 = 0x3b6;
                      uVar5 = FUN_1400419a0(local_res8,DAT_141a1f500);
                      uVar15 = FUN_140e794b0(0x3ff0000000000000,0x4018000000000000);
                      FUN_140041cb0(uVar5,uVar15 ^ 0x8000000000000000);
                      cVar1 = FUN_140e643f0(local_148,&local_res8,&local_res10);
                    } while (cVar1 != '\0');
                  }
                  FUN_140e63970(local_148,&local_res8,&local_res10);
                  FUN_140045ef0(local_148);
                } while (0 < iVar2);
                local_388 = 0x3bc;
                if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_3c8);
                }
                uVar19 = (undefined4)(uVar12 >> 0x20);
                local_3c8 = 0;
                local_3c0 = 0;
                local_3bc = 5;
                uVar5 = FUN_140042490(local_res8,DAT_1419fd438);
                FUN_140041c60(local_348,uVar5);
                local_380 = local_348;
                FUN_140041c60(local_338,&DAT_141dd3f08);
                local_378 = local_338;
                FUN_1400441d0(&local_328,&DAT_1419df7c0);
                local_370 = &local_328;
                ppuVar20 = &local_380;
                uVar12 = CONCAT44(uVar19,DAT_1419ff3d8);
                FUN_140e634e0(local_res8,local_res10,&local_3c8,3,uVar12,ppuVar20);
                FUN_140045ef0(local_128);
                param_3 = local_res18;
                plVar4 = local_2c8;
              }
              local_388 = 0x3bf;
              if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_3c8);
              }
              local_3c8 = 0;
              local_3c0 = 0;
              local_3bc = 5;
              uVar5 = FUN_140042490(local_res8,DAT_1419fd438);
              FUN_1400ec6d0(local_2d8,local_res8);
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_140e87440(local_2d8,DAT_1419fe0e8,0x80000000,&local_238,uVar12,
                            (ulonglong)ppuVar20 & 0xffffffffffffff00);
              uVar19 = (undefined4)(uVar12 >> 0x20);
              FUN_140041b30(local_2d8);
              FUN_140041c60(local_348,uVar5);
              local_380 = local_348;
              FUN_140041c60(local_338,&DAT_141dd3e78);
              local_378 = local_338;
              uVar6 = CONCAT44(uVar19,DAT_1419ff4f8);
              uVar5 = FUN_140e634e0(local_res8,local_res10,&local_3c8,2,uVar6,&local_380);
              uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
              uVar5 = FUN_1400426f0(local_178,0x3fd999999999999a,uVar5);
              uVar5 = FUN_1400467d0(local_218,uVar5,plVar4);
              FUN_1400460e0(&local_238,uVar5);
              FUN_140041b30(local_218);
              FUN_140041b30(local_178);
              FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_238);
LAB_14053baab:
              local_388 = 0x3c8;
              if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_3c8);
              }
              local_3c8 = 0;
              local_3c0 = 0;
              local_3bc = 5;
              if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_3a8);
              }
              local_3a8 = 0;
              local_3a0 = 0;
              local_39c = 5;
              uVar5 = FUN_140042490(local_res8,DAT_1419fd438);
              FUN_140041c60(local_348,uVar5);
              local_380 = local_348;
              FUN_140041c60(local_338,&DAT_141dd3e58);
              local_378 = local_338;
              FUN_140041c60(&local_328,uVar5);
              local_370 = &local_328;
              FUN_140041c60(local_318,&DAT_141dd3e58);
              local_368 = local_318;
              uVar9 = CONCAT44(uVar19,DAT_1419ff4f8);
              uVar6 = FUN_140e634e0(local_res8,local_res10,&local_3a8,2,uVar9,&local_380);
              uVar19 = (undefined4)((ulonglong)uVar9 >> 0x20);
              uVar6 = FUN_140053820(local_218,uVar6,1);
              FUN_140041c60(local_308,uVar6);
              FUN_140041b30(local_218);
              local_360 = local_308;
              uVar6 = CONCAT44(uVar19,DAT_1419fd648);
              FUN_140e634e0(local_res8,local_res10,&local_3c8,3,uVar6,&local_370);
              uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
              local_388 = 0x3c9;
              uVar6 = FUN_1400419a0(local_res8,DAT_1419fd5d8);
              uVar9 = FUN_140e794b0(&DAT_bff0000000000000,0x3ff0000000000000);
              FUN_140041cb0(uVar6,uVar9);
              local_388 = 0x3cb;
              cVar1 = FUN_140041d90(&local_268,0xfffffffc);
              if (cVar1 != '\0') {
                local_388 = 0x3cd;
                uVar5 = FUN_140045f40(local_218,0x1000311,1);
                FUN_140041c60(&local_298,uVar5);
                FUN_140041b30(local_218);
                FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_298);
                local_388 = 0x3ce;
                if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_3c8);
                }
                local_3c8 = 0;
                local_3c0 = 0;
                local_3bc = 5;
                uVar5 = FUN_140042490(local_res8,DAT_1419fd438);
                FUN_140041c60(local_348,uVar5);
                local_380 = local_348;
                FUN_140041c60(local_338,&DAT_141dd3e28);
                local_378 = local_338;
                FUN_1400441d0(&local_328,&DAT_1419df7a0);
                local_370 = &local_328;
                ppuVar20 = &local_380;
                uVar12 = CONCAT44(uVar19,DAT_1419ff3d8);
                FUN_140e634e0(local_res8,local_res10,&local_3c8,3,uVar12,ppuVar20);
                local_388 = 0x3cf;
                if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_3c8);
                }
                local_3c8 = 0;
                local_3c0 = 0;
                local_3bc = 5;
                uVar5 = FUN_140042490(local_res8,DAT_1419fd438);
                FUN_1400ec6d0(local_2d8,local_res8);
                uVar12 = uVar12 & 0xffffffffffffff00;
                FUN_140e87440(local_2d8,DAT_1419fe0e8,0x80000000,&local_2a8,uVar12,
                              (ulonglong)ppuVar20 & 0xffffffffffffff00);
                uVar19 = (undefined4)(uVar12 >> 0x20);
                FUN_140041b30(local_2d8);
                FUN_140041c60(local_348,uVar5);
                local_380 = local_348;
                FUN_140041c60(local_338,&DAT_141dd3ea8);
                local_378 = local_338;
                FUN_140041c60(&local_328,&local_2a8);
                local_370 = &local_328;
                uVar5 = CONCAT44(uVar19,DAT_1419ff3d8);
                FUN_140e634e0(local_res8,local_res10,&local_3c8,3,uVar5,&local_380);
                uVar19 = (undefined4)((ulonglong)uVar5 >> 0x20);
                local_388 = 0x3d0;
                if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_3c8);
                }
                local_3c8 = 0;
                local_3c0 = 0;
                local_3bc = 5;
                if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_3a8);
                }
                local_3a8 = 0;
                local_3a0 = 0;
                local_39c = 5;
                uVar5 = FUN_140042490(local_res8,DAT_1419fd438);
                FUN_140041c60(local_348,uVar5);
                local_380 = local_348;
                FUN_140041c60(local_338,&DAT_141dd3de8);
                local_378 = local_338;
                FUN_140041c60(&local_328,uVar5);
                local_370 = &local_328;
                FUN_140041c60(local_318,&DAT_141dd3de8);
                local_368 = local_318;
                uVar9 = CONCAT44(uVar19,DAT_1419ff4f8);
                uVar6 = FUN_140e634e0(local_res8,local_res10,&local_3a8,2,uVar9,&local_380);
                uVar19 = (undefined4)((ulonglong)uVar9 >> 0x20);
                uVar6 = FUN_140053820(local_218,uVar6,1);
                FUN_140041c60(local_308,uVar6);
                FUN_140041b30(local_218);
                local_360 = local_308;
                FUN_140e634e0(local_res8,local_res10,&local_3c8,3,CONCAT44(uVar19,DAT_1419fd648),
                              &local_370);
                local_388 = 0x3d1;
                uVar6 = FUN_1400419a0(local_res8,DAT_1419fd5d8);
                FUN_140044220(uVar6,0);
              }
LAB_14053bff7:
              local_388 = 0x3d6;
              if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_3c8);
              }
              local_3c8 = 0;
              local_3c0 = 0;
              local_3bc = 5;
              uVar6 = FUN_140042490(local_res8,DAT_1419fd418);
              goto LAB_14053c03c;
            }
          }
          uVar19 = (undefined4)(uVar12 >> 0x20);
          local_388 = 0x3c1;
          if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3c8);
          }
          local_3c8 = 0;
          local_3c0 = 0;
          local_3bc = 5;
          if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3a8);
          }
          local_3a8 = 0;
          local_3a0 = 0;
          local_39c = 5;
          uVar5 = FUN_140042490(local_res8,DAT_1419fd438);
          FUN_140041c60(local_348,uVar5);
          local_380 = local_348;
          FUN_140041c60(local_338,&DAT_141dd3e58);
          local_378 = local_338;
          FUN_1400441d0(&local_328,&DAT_141dc66d0);
          local_370 = &local_328;
          uVar6 = CONCAT44(uVar19,DAT_141a0a0d8);
          uVar5 = FUN_140e634e0(local_res8,local_res10,&local_3a8,1,uVar6,&local_370);
          uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
          uVar5 = FUN_1400b46b0(local_218,uVar5,0x4002666666666666);
          uVar9 = CONCAT44(uVar19,DAT_1419ff4f8);
          uVar6 = FUN_140e634e0(local_res8,local_res10,&local_3c8,2,uVar9,&local_380);
          uVar19 = (undefined4)((ulonglong)uVar9 >> 0x20);
          cVar1 = FUN_140046da0(uVar6,uVar5);
          FUN_140041b30(local_218);
          if ((cVar1 != '\0') && (cVar1 = thunk_FUN_140e491e0(&local_268), cVar1 != '\0')) {
            local_388 = 0x3c3;
            if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            local_2b8 = 0;
            local_2b0 = 0;
            local_2ac = 5;
            uVar5 = FUN_140042490(local_res8,DAT_1419fd438);
            FUN_140041c60(local_318,uVar5);
            local_368 = local_318;
            FUN_140041c60(local_308,&DAT_141dd3ef8);
            local_360 = local_308;
            uVar6 = CONCAT44(uVar19,DAT_1419ff4f8);
            uVar5 = FUN_140e634e0(local_res8,local_res10,&local_2b8,2,uVar6,&local_368);
            uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
            FUN_140041c60(&local_238,uVar5);
            FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_238);
            local_388 = 0x3c4;
            if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3c8);
            }
            local_3c8 = 0;
            local_3c0 = 0;
            local_3bc = 5;
            uVar5 = FUN_140042490(local_res8,DAT_1419fd438);
            FUN_140041c60(local_348,uVar5);
            local_380 = local_348;
            FUN_140041c60(local_338,&DAT_141dd3e88);
            local_378 = local_338;
            uVar6 = CONCAT44(uVar19,DAT_1419ff4f8);
            uVar5 = FUN_140e634e0(local_res8,local_res10,&local_3c8,2,uVar6,&local_380);
            uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
            FUN_140041c60(&local_1d8,uVar5);
            FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_1d8);
            local_388 = 0x3c5;
            if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3c8);
            }
            local_3c8 = 0;
            local_3c0 = 0;
            local_3bc = 5;
            uVar5 = FUN_140042490(local_res8,DAT_1419fd438);
            FUN_140041c60(local_348,uVar5);
            local_380 = local_348;
            FUN_140041c60(local_338,&DAT_141dd3f08);
            local_378 = local_338;
            FUN_1400441d0(&local_328,&DAT_1419df7a0);
            local_370 = &local_328;
            uVar5 = CONCAT44(uVar19,DAT_1419ff3d8);
            FUN_140e634e0(local_res8,local_res10,&local_3c8,3,uVar5,&local_380);
            uVar19 = (undefined4)((ulonglong)uVar5 >> 0x20);
          }
          goto LAB_14053baab;
        }
        local_388 = 0x368;
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
        local_3ac = 6;
        local_3b8 = local_res8;
        ppuVar20 = (undefined8 **)((ulonglong)ppuVar20 & 0xffffffffffffff00);
        ppuVar18 = (undefined8 **)(uVar12 & 0xffffffffffffff00);
        FUN_140e87440(&local_3b8,DAT_141a0a728,0x80000000,&local_288,ppuVar18,ppuVar20);
        if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3b8);
        }
        local_3ac = 0xf;
        local_3b8 = (longlong *)0x100000100000314;
        iVar2 = FUN_140e851f0(&local_288,&local_3b8,DAT_141955260,0);
        if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3b8);
        }
        if (iVar2 == 0) {
          local_388 = 0x36a;
          if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3a8);
          }
          uVar19 = (undefined4)((ulonglong)ppuVar18 >> 0x20);
          local_3a8 = 0;
          local_3a0 = 0;
          local_39c = 5;
          uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
          FUN_140041c60(&local_328,uVar5);
          local_370 = &local_328;
          FUN_140041c60(local_318,&DAT_141dd3e78);
          local_368 = local_318;
          FUN_140e609c0(local_res8);
          ppuVar20 = &local_370;
          puVar7 = (ulonglong *)
                   FUN_140e634e0(local_res8,local_res10,&local_3a8,2,CONCAT44(uVar19,DAT_1419ff4f8),
                                 ppuVar20);
          if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
            uVar12 = *puVar7;
          }
          else {
            uVar12 = FUN_140e4b060(puVar7);
          }
          local_2bc = 0;
          local_2c8 = (longlong *)(uVar12 ^ 0x8000000000000000);
          FUN_1400424a0(&local_3b8,&local_2c8);
          local_res20 = 0x4000;
          FUN_140042560(&local_3b8,plVar4);
          FUN_140041c60(uVar6,&local_3b8);
          if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3b8);
          }
          if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2c8);
          }
          FUN_140e60910(1);
          local_388 = 0x36c;
          if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3c8);
          }
          local_3c8 = 0;
          local_3c0 = 0;
          local_3bc = 5;
          FUN_140041c60(local_348,&DAT_1419df7b0);
          local_380 = local_348;
          FUN_140041c60(local_338,&DAT_1419df7b0);
          local_378 = local_338;
          ppuVar18 = &local_380;
          uVar6 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_3c8,2,ppuVar18);
          cVar1 = FUN_140e491e0(uVar6);
          if (cVar1 != '\0') {
            local_388 = 0x36e;
            local_3ac = 0xf;
            local_3b8 = (longlong *)0x100000100000311;
            FUN_140041c60(&local_298,&local_3b8);
            if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3b8);
            }
            FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_298);
            local_388 = 0x36f;
            if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3c8);
            }
            local_3c8 = 0;
            local_3c0 = 0;
            local_3bc = 5;
            uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            local_3ac = 6;
            local_3b8 = local_res8;
            uVar12 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
            FUN_140e87440(&local_3b8,DAT_1419fe0e8,0x80000000,&local_2a8,uVar12,
                          (ulonglong)ppuVar20 & 0xffffffffffffff00);
            uVar19 = (undefined4)(uVar12 >> 0x20);
            if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3b8);
            }
            FUN_140041c60(local_348,uVar5);
            local_380 = local_348;
            FUN_140041c60(local_338,&DAT_141dd3ea8);
            local_378 = local_338;
            FUN_140041c60(&local_328,&local_2a8);
            local_370 = &local_328;
            ppuVar20 = &local_380;
            ppuVar18 = (undefined8 **)CONCAT44(uVar19,DAT_1419ff3d8);
            FUN_140e634e0(local_res8,local_res10,&local_3c8,3,ppuVar18,ppuVar20);
          }
        }
        local_388 = 0x375;
        local_3ac = 6;
        local_3b8 = local_res8;
        uVar12 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
        FUN_140e87440(&local_3b8,DAT_141a0a728,0x80000000,&local_288,uVar12,
                      (ulonglong)ppuVar20 & 0xffffffffffffff00);
        uVar19 = (undefined4)(uVar12 >> 0x20);
        if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3b8);
        }
        local_3ac = 0xf;
        local_3b8 = (longlong *)0x100000100000311;
        iVar2 = FUN_140e851f0(&local_288,&local_3b8,DAT_141955260,0);
        if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3b8);
        }
        if (iVar2 == 0) {
          local_388 = 0x377;
          if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3c8);
          }
          local_3c8 = 0;
          local_3c0 = 0;
          local_3bc = 5;
          uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
          FUN_140041c60(local_348,uVar5);
          local_380 = local_348;
          FUN_140041c60(local_338,&DAT_141dd3e78);
          local_378 = local_338;
          FUN_140e609c0(local_res8);
          ppuVar20 = &local_380;
          uVar12 = CONCAT44(uVar19,DAT_1419ff4f8);
          uVar5 = FUN_140e634e0(local_res8,local_res10,&local_3c8,2,uVar12,ppuVar20);
          local_2bc = 0;
          local_2c8 = (longlong *)0x4018000000000000;
          local_res20 = 0x8000;
          FUN_140042560(&local_2c8,uVar5);
          FUN_140041c60(uVar6,&local_2c8);
          local_res20 = 0;
          if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2c8);
          }
          FUN_140e60910(1);
          local_388 = 0x379;
          if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3c8);
          }
          local_3c8 = 0;
          local_3c0 = 0;
          local_3bc = 5;
          if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3a8);
          }
          local_3a8 = 0;
          local_3a0 = 0;
          local_39c = 5;
          uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          FUN_140041c60(local_348,uVar5);
          local_380 = local_348;
          FUN_140041c60(local_338,&DAT_141dd3ea8);
          local_378 = local_338;
          local_3ac = 6;
          local_3b8 = local_res8;
          uVar12 = uVar12 & 0xffffffffffffff00;
          FUN_140e87440(&local_3b8,DAT_1419fe0e8,0x80000000,&local_2a8,uVar12,
                        (ulonglong)ppuVar20 & 0xffffffffffffff00);
          uVar19 = (undefined4)(uVar12 >> 0x20);
          if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3b8);
          }
          uVar9 = CONCAT44(uVar19,DAT_1419ff4f8);
          uVar6 = FUN_140e634e0(local_res8,local_res10,&local_3a8,2,uVar9,&local_380);
          uVar19 = (undefined4)((ulonglong)uVar9 >> 0x20);
          FUN_1400424a0(&local_2c8,uVar6);
          local_res20 = 0x10000;
          FUN_1400462a0(&local_2c8,&local_2a8);
          if ((local_2bc & 0xffffff) == 0) {
            plVar13 = local_2c8;
          }
          else {
            plVar13 = (longlong *)FUN_140e4b060(&local_2c8);
          }
          local_328 = FUN_140e78d00(plVar13);
          if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_328);
          }
          local_31c = 0;
          if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2c8);
          }
          local_370 = &local_328;
          ppuVar20 = &local_370;
          uVar12 = CONCAT44(uVar19,DAT_1419fd658);
          puVar8 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_3c8,1,uVar12,ppuVar20);
          if ((*(uint *)((longlong)puVar8 + 0xc) & 0xffffff) == 0) {
            uVar6 = *puVar8;
          }
          else {
            uVar6 = FUN_140e4b060(puVar8);
          }
          dVar14 = (double)FUN_1412a79b0(uVar6,0x4030000000000000);
          uVar11 = 4;
          if ((dVar14 == 0.0) && (cVar1 = FUN_140041d90(plVar4,0), cVar1 == '\0')) {
            local_388 = 0x37b;
            if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            local_2b8 = 0;
            local_2b0 = 0;
            local_2ac = 5;
            local_3ac = 6;
            local_3b8 = local_res8;
            uVar15 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
            uVar12 = uVar12 & 0xffffffffffffff00;
            FUN_140e87440(&local_3b8,DAT_1419fe0e8,0x80000000,&local_2a8,uVar12,uVar15);
            if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3b8);
            }
            local_3ac = 6;
            local_3b8 = local_res8;
            uVar12 = uVar12 & 0xffffffffffffff00;
            FUN_140e87440(&local_3b8,DAT_1419fe158,0x80000000,&local_278,uVar12,
                          uVar15 & 0xffffffffffffff00);
            uVar19 = (undefined4)(uVar12 >> 0x20);
            if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3b8);
            }
            FUN_140041c60(local_318,&local_2a8);
            local_368 = local_318;
            FUN_140041c60(local_308,&local_278);
            local_360 = local_308;
            FUN_140041c60(local_2f8,&DAT_141dd3ee8);
            local_3ac = 0xf;
            local_3b8 = (longlong *)0x100000000000003;
            local_358 = local_2f8;
            FUN_140041c60(local_2e8,&local_3b8);
            if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3b8);
            }
            local_350 = local_2e8;
            ppuVar20 = &local_368;
            uVar12 = CONCAT44(uVar19,DAT_141a0a7c8);
            uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2b8,4,uVar12,ppuVar20);
            iVar2 = FUN_140e63cb0(local_218,&local_res8,&local_res10,uVar6);
            if (0 < iVar2) {
              do {
                (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
                local_388 = 0x37d;
                uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
                FUN_140044220(uVar6,0);
                local_388 = 0x37e;
                uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
                FUN_140044220(uVar6,0xfffffffe);
                local_388 = 0x37f;
                local_3ac = 0xf;
                local_3b8 = (longlong *)0x100000100000037;
                FUN_140041c60(&local_298,&local_3b8);
                if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_3b8);
                }
                FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_298);
                local_388 = 0x380;
                puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
                uVar6 = FUN_140e79480(0x4076800000000000);
                if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar8);
                }
                *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
                *puVar8 = uVar6;
                local_388 = 0x381;
                uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
                local_2bc = 6;
                local_2c8 = local_res10;
                ppuVar20 = (undefined8 **)((ulonglong)ppuVar20 & 0xffffffffffffff00);
                uVar12 = uVar12 & 0xffffffffffffff00;
                FUN_140e87440(&local_2c8,DAT_141a0a828,0x80000000,&local_1b8,uVar12,ppuVar20);
                if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2c8);
                }
                FUN_140e609c0(local_res8);
                FUN_140041c60(uVar6,&local_1b8);
                FUN_140e60910(1);
                cVar1 = FUN_140e643f0(local_218,&local_res8,&local_res10);
              } while (cVar1 != '\0');
              param_3 = local_res18;
            }
            FUN_140e63970(local_218,&local_res8,&local_res10);
            if (local_208 != 0) {
              FUN_140e4cd60();
            }
          }
          uVar19 = (undefined4)(uVar12 >> 0x20);
          local_388 = 0x387;
          cVar1 = FUN_140e491e0(&local_268);
          if (cVar1 != '\0') {
            local_388 = 0x389;
            if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3c8);
            }
            local_3c8 = 0;
            local_3c0 = 0;
            local_3bc = 5;
            uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            FUN_140041c60(local_348,uVar5);
            local_380 = local_348;
            FUN_140041c60(local_338,&DAT_141dd3e28);
            local_378 = local_338;
            FUN_1400441d0(&local_328,&DAT_1419df7c0);
            local_370 = &local_328;
            uVar5 = CONCAT44(uVar19,DAT_1419ff3d8);
            FUN_140e634e0(local_res8,local_res10,&local_3c8,3,uVar5,&local_380);
            uVar19 = (undefined4)((ulonglong)uVar5 >> 0x20);
            local_388 = 0x38a;
            if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3c8);
            }
            local_3c8 = 0;
            local_3c0 = 0;
            local_3bc = 5;
            if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3a8);
            }
            local_3a8 = 0;
            local_3a0 = 0;
            local_39c = 5;
            uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            FUN_140041c60(local_348,uVar5);
            local_380 = local_348;
            FUN_140041c60(local_338,&DAT_141dd3e78);
            local_378 = local_338;
            FUN_140041c60(&local_328,uVar5);
            local_370 = &local_328;
            FUN_140041c60(local_318,&DAT_141dd3ef8);
            local_368 = local_318;
            uVar6 = CONCAT44(uVar19,DAT_1419ff4f8);
            uVar5 = FUN_140e634e0(local_res8,local_res10,&local_3a8,2,uVar6,&local_380);
            uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
            cVar1 = FUN_140041d90(uVar5,1);
            if (cVar1 == '\0') {
              local_3ac = 0;
              local_3b8 = (longlong *)0x4074000000000000;
              pplVar10 = &local_3b8;
              uVar11 = 8;
            }
            else {
              local_2bc = 0;
              local_2c8 = (longlong *)0x4040000000000000;
              pplVar10 = &local_2c8;
            }
            local_res20 = uVar11;
            FUN_140041c60(local_308,pplVar10);
            if (((uVar11 & 8) != 0) &&
               (uVar11 = uVar11 & 0xfffffff7, local_res20 = uVar11,
               (1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0)) {
              FUN_140041a50(&local_3b8);
            }
            if (((uVar11 & 4) != 0) && ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0)) {
              FUN_140041a50(&local_2c8);
            }
            local_360 = local_308;
            uVar5 = CONCAT44(uVar19,DAT_1419ff3d8);
            FUN_140e634e0(local_res8,local_res10,&local_3c8,3,uVar5,&local_370);
            uVar19 = (undefined4)((ulonglong)uVar5 >> 0x20);
            local_388 = 0x38b;
            if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3c8);
            }
            local_3c8 = 0;
            local_3c0 = 0;
            local_3bc = 5;
            uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            FUN_140041c60(local_348,uVar5);
            local_380 = local_348;
            FUN_140041c60(local_338,&DAT_141dd3e88);
            local_378 = local_338;
            uVar5 = FUN_140e794b0(0x4052000000000000,0x4061800000000000);
            if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_328);
            }
            local_31c = 0;
            local_370 = &local_328;
            uVar6 = CONCAT44(uVar19,DAT_1419ff3d8);
            local_328 = uVar5;
            FUN_140e634e0(local_res8,local_res10,&local_3c8,3,uVar6,&local_380);
            uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
            local_388 = 0x38d;
            if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3c8);
            }
            local_3c8 = 0;
            local_3c0 = 0;
            local_3bc = 5;
            uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            FUN_140041c60(local_348,uVar5);
            local_380 = local_348;
            FUN_140041c60(local_338,&DAT_141dd3f08);
            local_378 = local_338;
            FUN_1400441d0(&local_328,&DAT_1419df7a0);
            local_370 = &local_328;
            uVar5 = CONCAT44(uVar19,DAT_1419ff3d8);
            FUN_140e634e0(local_res8,local_res10,&local_3c8,3,uVar5,&local_380);
            uVar19 = (undefined4)((ulonglong)uVar5 >> 0x20);
            local_388 = 0x38e;
            if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3c8);
            }
            local_3c8 = 0;
            local_3c0 = 0;
            local_3bc = 5;
            uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            FUN_140041c60(local_348,uVar5);
            local_380 = local_348;
            FUN_140041c60(local_338,&DAT_141dd3e58);
            local_378 = local_338;
            FUN_1400441d0(&local_328,&DAT_141dc66d0);
            local_370 = &local_328;
            FUN_140e634e0(local_res8,local_res10,&local_3c8,3,CONCAT44(uVar19,DAT_1419ff3d8),
                          &local_380);
          }
          local_388 = 0x391;
          if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3c8);
          }
          local_3c8 = 0;
          local_3c0 = 0;
          local_3bc = 5;
          uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd418);
          FUN_140e63610(local_res8,local_res10,&local_3c8,0,uVar6,0);
          local_388 = 0x392;
          if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3c8);
          }
          local_3c8 = 0;
          local_3c0 = 0;
          local_3bc = 5;
          uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd398);
          uVar6 = FUN_140e63610(local_res8,local_res10,&local_3c8,0,uVar6,0);
          cVar1 = FUN_140e491e0(uVar6);
          if (cVar1 != '\0') {
            uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f090);
            cVar1 = FUN_140046c90(uVar6,0);
            if (cVar1 != '\0') {
              local_388 = 0x394;
              if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_3a8);
              }
              local_3a8 = 0;
              local_3a0 = 0;
              local_39c = 5;
              FUN_1400441d0(local_348,&DAT_1419e6190);
              local_380 = local_348;
              FUN_140041c60(local_338,&DAT_1419df7b0);
              local_378 = local_338;
              gml_Script_truestate_begin_step(local_res8,local_res10,&local_3a8,2,&local_380);
            }
          }
        }
        local_388 = 0x398;
        if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3c8);
        }
        local_3c8 = 0;
        local_3c0 = 0;
        local_3bc = 5;
        uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd4b8);
LAB_14053c03c:
        FUN_140e63610(local_res8,local_res10,&local_3c8,0,uVar6,0);
        uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_388 = 0x3d9;
        if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3c8);
        }
        local_3c8 = 0;
        local_3c0 = 0;
        local_3bc = 5;
        FUN_140041c60(local_348,uVar5);
        local_380 = local_348;
        FUN_140041c60(local_338,&DAT_141dd3de8);
        local_378 = local_338;
        uVar5 = FUN_140e634e0(local_res8,local_res10,&local_3c8,2,CONCAT44(uVar19,DAT_1419ff4f8),
                              &local_380);
        cVar1 = FUN_140046dd0(uVar5,2);
        if (cVar1 != '\0') {
          local_388 = 0x3db;
          if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3a8);
          }
          local_3a8 = 0;
          local_3a0 = 0;
          local_39c = 5;
          FUN_140042490(local_res8,DAT_1419fd438);
          FUN_1400441d0(&local_328,&DAT_1419e61d0);
          local_370 = &local_328;
          FUN_140041c60(local_318,&DAT_1419df7b0);
          local_368 = local_318;
          gml_Script_truestate_begin_step(local_res8,local_res10,&local_3a8,2,&local_370);
        }
        local_388 = 0x3df;
        if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3c8);
        }
        local_3c8 = 0;
        local_3c0 = 0;
        local_3bc = 5;
        uVar5 = FUN_140042490(local_res8,DAT_1419fd398);
        FUN_140e63610(local_res8,local_res10,&local_3c8,0,uVar5,0);
        local_388 = 0x3e0;
        FUN_140041c60(&local_1e8,plVar4);
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_1e8);
        local_388 = 0x3e2;
      }
      else if (iVar2 == 2) {
        local_388 = 0x3e6;
        if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3c8);
        }
        local_3c8 = 0;
        local_3c0 = 0;
        local_3bc = 5;
        uVar5 = FUN_140042490(local_res8,DAT_1419f5b18);
        FUN_140e63610(local_res8,local_res10,&local_3c8,0,uVar5,0);
        local_388 = 999;
      }
      else if (iVar2 == 3) {
        local_388 = 0x3eb;
      }
      break;
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 4);
  FUN_140041b30(local_158);
  FUN_140041b30(&local_258);
  FUN_140041b30(&local_2b8);
  FUN_140041b30(&local_3a8);
  FUN_140041b30(&local_3c8);
  FUN_140041b30(&local_1e8);
  FUN_140041b30(&local_1d8);
  FUN_140041b30(&local_238);
  FUN_140041b30(&local_1c8);
  FUN_140041b30(&local_1a8);
  FUN_140041b30(&local_1f8);
  FUN_140041b30(&local_168);
  FUN_140041b30(&local_198);
  FUN_140041b30(&local_1b8);
  FUN_140041b30(&local_288);
  FUN_140041b30(&local_268);
  FUN_140041b30(&local_278);
  FUN_140041b30(&local_248);
  FUN_140041b30(&local_2a8);
  FUN_140041b30(&local_298);
  _eh_vector_destructor_iterator_(local_348,0x10,7,FUN_140041b30);
  FUN_140041970(&local_398);
  return param_3;
}

