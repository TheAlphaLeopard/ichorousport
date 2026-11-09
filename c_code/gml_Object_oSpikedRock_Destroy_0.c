// gml_Object_oSpikedRock_Destroy_0 @ 0x140d95de0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oSpikedRock_Destroy_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  double *pdVar10;
  undefined4 uVar11;
  float fVar12;
  longlong *plVar13;
  longlong *plVar14;
  double dVar15;
  double dVar16;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  code *pcVar17;
  undefined4 uVar18;
  ulonglong in_stack_fffffffffffffc70;
  ulonglong uVar19;
  undefined1 **ppuVar20;
  undefined8 local_388;
  undefined4 uStack_380;
  uint uStack_37c;
  longlong *local_378;
  undefined4 local_370;
  uint local_36c;
  longlong *local_368;
  undefined4 local_35c;
  undefined8 local_358;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  uint uStack_33c;
  undefined8 local_338;
  undefined4 uStack_330;
  uint uStack_32c;
  longlong *local_328;
  undefined4 local_320;
  uint local_31c;
  undefined8 local_318;
  char *local_310;
  undefined4 local_308;
  longlong *local_2f8;
  undefined4 uStack_2f0;
  uint uStack_2ec;
  longlong *local_2e8;
  undefined4 uStack_2e0;
  uint uStack_2dc;
  double local_2d8;
  uint local_2cc;
  double local_2c8;
  uint local_2bc;
  longlong *local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_27c;
  undefined1 local_278 [12];
  byte local_26c;
  undefined1 local_268 [12];
  byte local_25c;
  undefined1 local_258 [12];
  byte local_24c;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  double local_208;
  uint local_1fc;
  double local_1f8;
  uint local_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  longlong *local_170;
  undefined4 local_164;
  longlong *local_160;
  undefined4 local_154;
  undefined4 local_150 [3];
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  longlong *local_120;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [16];
  longlong local_e8;
  
  local_res18 = 0;
  local_310 = "gml_Object_oSpikeBall_Step_0";
  local_308 = 0;
  local_318 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_318;
  pcVar17 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_278,0x10,7,FUN_1400424d0,FUN_140041b30);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  uStack_2ec = 0xffffff;
  local_2f8 = (longlong *)0x0;
  local_31c = 0xffffff;
  local_328 = (longlong *)0x0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  uStack_1ac = 0xffffff;
  local_1b8 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0.0;
  local_1fc = 0xffffff;
  local_208 = 0.0;
  local_2bc = 0xffffff;
  local_2c8 = 0.0;
  local_2cc = 0xffffff;
  local_2d8 = 0.0;
  local_34c = 0xffffff;
  local_358 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_308 = 1;
  uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
  uStack_37c = 0;
  local_388 = (longlong *)0x3fb999999999999a;
  local_res18 = 1;
  FUN_140042560(&local_388,uVar4);
  FUN_1400460e0(uVar5,&local_388);
  local_res18 = 0;
  if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  local_308 = 3;
  puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
  uStack_37c = 6;
  local_388 = local_res8;
  in_stack_fffffffffffffc70 = in_stack_fffffffffffffc70 & 0xffffffffffffff00;
  uVar9 = (ulonglong)pcVar17 & 0xffffffffffffff00;
  FUN_140e87440(&local_388,DAT_1419fe0e8,0x80000000,&local_1c8,uVar9,in_stack_fffffffffffffc70);
  if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  local_36c = *(undefined4 *)((longlong)puVar6 + 0xc);
  local_370 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) == 0) {
    local_378 = (longlong *)*puVar6;
  }
  else {
    FUN_1400419b0(&local_378,puVar6);
  }
  local_res18 = 2;
  FUN_140042560(&local_378,uVar4);
  FUN_1400460e0(&local_1c8,&local_378);
  local_res18 = 0;
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_1c8);
  local_308 = 4;
  puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
  uStack_37c = 6;
  local_388 = local_res8;
  FUN_140e87440(&local_388,DAT_1419fe158,0x80000000,&local_1d8,uVar9 & 0xffffffffffffff00,
                in_stack_fffffffffffffc70 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  local_36c = *(undefined4 *)((longlong)puVar7 + 0xc);
  local_370 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) == 0) {
    local_378 = (longlong *)*puVar7;
  }
  else {
    FUN_1400419b0(&local_378,puVar7);
  }
  local_res18 = 4;
  FUN_140042560(&local_378,uVar4);
  FUN_1400460e0(&local_1d8,&local_378);
  local_res18 = 0;
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_1d8);
  local_308 = 6;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
  uVar8 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
  local_36c = *(uint *)((longlong)puVar6 + 0xc);
  local_370 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) == 0) {
    local_378 = (longlong *)*puVar6;
  }
  else {
    FUN_1400419b0(&local_378,puVar6);
  }
  local_res18 = 8;
  local_35c = 7;
  local_368 = (longlong *)CONCAT44(local_368._4_4_,2);
  FUN_140042560(&local_378,&local_368);
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  uStack_32c = local_36c;
  uStack_330 = local_370;
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) == 0) {
    local_338 = local_378;
  }
  else {
    FUN_1400419b0(&local_338,&local_378);
  }
  local_res18 = 0x18;
  FUN_140042560(&local_338,uVar5);
  uStack_37c = uStack_32c;
  uStack_380 = uStack_330;
  if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) == 0) {
    local_388 = local_338;
  }
  else {
    FUN_1400419b0(&local_388,&local_338);
  }
  local_res18 = 0x38;
  FUN_140042560(&local_388,uVar4);
  FUN_1400460e0(uVar8,&local_388);
  local_res18 = 0x18;
  if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  local_res18 = 8;
  if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  local_res18 = 0;
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_308 = 7;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_358 = 0;
  local_350 = 0;
  local_34c = 5;
  uVar9 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a01b58);
  uVar19 = 0;
  FUN_140e63610(local_res8,local_res10,&local_358,0,uVar9,0);
  local_308 = 9;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_358 = 0;
  local_350 = 0;
  local_34c = 5;
  local_35c = 6;
  local_368 = local_res8;
  uVar19 = uVar19 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_368,DAT_1419fe0e8,0x80000000,&local_2f8,uVar9,uVar19);
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  local_35c = 6;
  local_368 = local_res8;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_368,DAT_1419fe158,0x80000000,&local_328,uVar9,uVar19 & 0xffffffffffffff00);
  uVar18 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  local_2e8 = local_2f8;
  uStack_2e0 = uStack_2f0;
  uStack_2dc = uStack_2ec;
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_2e8);
  local_1a8 = local_278;
  uStack_37c = local_31c;
  uStack_380 = local_320;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) == 0) {
    local_388 = local_328;
  }
  else {
    FUN_1400419b0(&local_388,&local_328);
  }
  local_res18 = 0x40;
  local_35c = 7;
  local_368 = (longlong *)CONCAT44(local_368._4_4_,1);
  FUN_1400460e0(&local_388,&local_368);
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  local_2e8 = local_388;
  uStack_2e0 = uStack_380;
  uStack_2dc = uStack_37c;
  if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  FUN_140041b80(local_268,&local_2e8);
  local_res18 = 0;
  if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  local_1a0 = local_268;
  uStack_2ac = 0xf;
  local_2b8 = (longlong *)0x100000000000149;
  local_2e8 = (longlong *)0x100000000000149;
  uStack_2e0 = uStack_2b0;
  uStack_2dc = 0xf;
  if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_258);
  }
  FUN_140041b80(local_258,&local_2e8);
  local_198 = local_258;
  ppuVar20 = &local_1a8;
  uVar9 = CONCAT44(uVar18,DAT_141a12628);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_358,3,uVar9,ppuVar20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
    uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
    local_35c = 0;
    local_368 = (longlong *)0x0;
    iVar2 = FUN_140e851f0(uVar4,&local_368,DAT_141955260,1);
    if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    if (0 < iVar2) {
      local_308 = 0xb;
      uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a010c8);
      local_35c = 0;
      local_368 = (longlong *)0x0;
      iVar2 = FUN_140e851f0(uVar4,&local_368,DAT_141955260,1);
      if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_368);
      }
      if (iVar2 < 1) {
        local_308 = 0x24;
        uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        uStack_2ac = 0;
        local_2b8 = (longlong *)0xbfeb333333333333;
        FUN_140042560(uVar4,&local_2b8);
        if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        local_308 = 0x25;
        uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a010c8);
        FUN_140046040(uVar4);
      }
      else {
        iVar2 = 6;
        do {
          iVar2 = iVar2 + -1;
          local_308 = 0xe;
          if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          local_2a8 = 0;
          local_2a0 = 0;
          local_29c = 5;
          local_35c = 6;
          local_368 = local_res8;
          uVar19 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
          uVar9 = uVar9 & 0xffffffffffffff00;
          FUN_140e87440(&local_368,DAT_1419fe0e8,0x80000000,&local_2f8,uVar9,uVar19);
          if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_368);
          }
          local_164 = 6;
          local_170 = local_res8;
          uVar9 = uVar9 & 0xffffffffffffff00;
          FUN_140e87440(&local_170,DAT_1419fe158,0x80000000,&local_328,uVar9,
                        uVar19 & 0xffffffffffffff00);
          uVar18 = (undefined4)(uVar9 >> 0x20);
          if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_170);
          }
          uVar11 = FUN_140e794b0(0,0);
          uStack_37c = uStack_2ec;
          uStack_380 = uStack_2f0;
          if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) == 0) {
            local_388 = local_2f8;
          }
          else {
            FUN_1400419b0(&local_388,&local_2f8);
          }
          local_res18 = 0x80;
          FUN_140162c50(&local_388,uVar11);
          local_348 = (undefined4)local_388;
          uStack_344 = local_388._4_4_;
          uStack_340 = uStack_380;
          uStack_33c = uStack_37c;
          if ((1 << (local_248[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_248);
          }
          FUN_140041b80(local_248,&local_348);
          local_res18 = 0;
          if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_388);
          }
          local_190 = local_248;
          uVar11 = FUN_140e794b0(0,0);
          uStack_32c = local_31c;
          uStack_330 = local_320;
          if ((1 << ((byte)local_31c & 0x1f) & 0x46U) == 0) {
            local_338 = local_328;
          }
          else {
            FUN_1400419b0(&local_338,&local_328);
          }
          local_res18 = 0x100;
          FUN_140162c50(&local_338,uVar11);
          local_348 = (undefined4)local_338;
          uStack_344 = local_338._4_4_;
          uStack_340 = uStack_330;
          uStack_33c = uStack_32c;
          if ((1 << (local_238[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_238);
          }
          FUN_140041b80(local_238,&local_348);
          local_res18 = 0;
          if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_338);
          }
          local_188 = local_238;
          local_348 = _DAT_141ddb918;
          uStack_344 = uRam0000000141ddb91c;
          uStack_340 = uRam0000000141ddb920;
          uStack_33c = DAT_141ddb924;
          if ((1 << (local_228[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_228);
          }
          FUN_140041b80(local_228,&local_348);
          local_180 = local_228;
          uStack_fc = 0xf;
          local_108 = 0x100000000000041;
          local_348 = 0x41;
          uStack_344 = 0x1000000;
          uStack_340 = uStack_100;
          uStack_33c = 0xf;
          if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_218);
          }
          FUN_140041b80(local_218,&local_348);
          local_178 = local_218;
          ppuVar20 = &local_190;
          uVar9 = CONCAT44(uVar18,DAT_141a0a7c8);
          uVar4 = FUN_140e634e0(local_res8,local_res10,&local_2a8,4,uVar9,ppuVar20);
          iVar3 = FUN_140e63cb0(local_f8,&local_res8,&local_res10,uVar4);
          if (0 < iVar3) {
            do {
              (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
              local_308 = 0xf;
              uStack_2dc = 0xf;
              local_2e8 = (longlong *)0x100000100000199;
              local_348 = 0x199;
              uStack_344 = 0x1000001;
              uStack_340 = uStack_2e0;
              uStack_33c = 0xf;
              if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1e8);
              }
              FUN_140041b80(&local_1e8,&local_348);
              FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1e8);
              local_308 = 0x11;
              if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_358);
              }
              local_358 = 0;
              local_350 = 0;
              local_34c = 5;
              local_154 = 6;
              local_160 = local_res8;
              uVar9 = uVar9 & 0xffffffffffffff00;
              FUN_140e87440(&local_160,DAT_141a0a728,0x80000000,&local_1b8,uVar9,
                            (ulonglong)ppuVar20 & 0xffffffffffffff00);
              uVar18 = (undefined4)(uVar9 >> 0x20);
              if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_160);
              }
              local_348 = (undefined4)local_1b8;
              uStack_344 = local_1b8._4_4_;
              uStack_340 = uStack_1b0;
              uStack_33c = uStack_1ac;
              if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_278);
              }
              FUN_140041b80(local_278,&local_348);
              local_1a8 = local_278;
              ppuVar20 = &local_1a8;
              uVar9 = CONCAT44(uVar18,DAT_141a049b8);
              puVar6 = (undefined8 *)
                       FUN_140e634e0(local_res8,local_res10,&local_358,1,uVar9,ppuVar20);
              local_36c = *(uint *)((longlong)puVar6 + 0xc);
              local_370 = *(undefined4 *)(puVar6 + 1);
              if ((1 << ((byte)local_36c & 0x1f) & 0x46U) == 0) {
                local_378 = (longlong *)*puVar6;
              }
              else {
                FUN_1400419b0(&local_378,puVar6);
              }
              local_res18 = 0x200;
              local_144 = 7;
              local_150[0] = 1;
              FUN_1400462a0(&local_378,local_150);
              if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_150);
              }
              plVar13 = local_378;
              if ((local_36c & 0xffffff) != 0) {
                plVar13 = (longlong *)FUN_140e4b060(&local_378);
              }
              uVar4 = FUN_140e78f00((longlong)(double)plVar13);
              if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_288);
              }
              local_27c = 0;
              local_res18 = 0;
              local_288 = uVar4;
              if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_378);
              }
              FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_288);
              local_308 = 0x12;
              if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_298);
              }
              local_28c = 0;
              local_298 = 0;
              FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_298);
              local_308 = 0x15;
              local_134 = 6;
              local_140 = local_res10;
              uVar19 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
              uVar9 = uVar9 & 0xffffffffffffff00;
              FUN_140e87440(&local_140,DAT_1419fe0e8,0x80000000,&local_1f8,uVar9,uVar19);
              if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_140);
              }
              local_124 = 6;
              local_130 = local_res10;
              uVar19 = uVar19 & 0xffffffffffffff00;
              uVar9 = uVar9 & 0xffffffffffffff00;
              FUN_140e87440(&local_130,DAT_1419fe158,0x80000000,&local_208,uVar9,uVar19);
              if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_130);
              }
              local_114 = 6;
              local_120 = local_res8;
              uVar19 = uVar19 & 0xffffffffffffff00;
              uVar9 = uVar9 & 0xffffffffffffff00;
              FUN_140e87440(&local_120,DAT_1419fe0e8,0x80000000,&local_2f8,uVar9,uVar19);
              if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_120);
              }
              uStack_2ac = 6;
              local_2b8 = local_res8;
              ppuVar20 = (undefined1 **)(uVar19 & 0xffffffffffffff00);
              uVar9 = uVar9 & 0xffffffffffffff00;
              FUN_140e87440(&local_2b8,DAT_1419fe158,0x80000000,&local_328,uVar9,ppuVar20);
              if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2b8);
              }
              plVar13 = local_328;
              if ((local_31c & 0xffffff) != 0) {
                plVar13 = (longlong *)FUN_140e4b060(&local_328);
              }
              plVar14 = local_2f8;
              if ((uStack_2ec & 0xffffff) != 0) {
                plVar14 = (longlong *)FUN_140e4b060(&local_2f8);
              }
              dVar15 = local_208;
              if ((local_1fc & 0xffffff) != 0) {
                dVar15 = (double)FUN_140e4b060(&local_208);
              }
              dVar16 = local_1f8;
              if ((local_1ec & 0xffffff) != 0) {
                dVar16 = (double)FUN_140e4b060(&local_1f8);
              }
              fVar12 = (float)FUN_140e793d0((float)dVar16,(float)dVar15,(float)(double)plVar14,
                                            (float)(double)plVar13);
              dVar15 = (double)FUN_140e794b0(0,0);
              if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2c8);
              }
              local_2bc = 0;
              local_308 = 0x16;
              local_2c8 = dVar15 + (double)fVar12;
              dVar15 = (double)FUN_140e794b0(0,0);
              if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2d8);
              }
              local_2cc = 0;
              local_308 = 0x17;
              local_2d8 = dVar15;
              pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
              dVar15 = local_2c8;
              if ((local_2bc & 0xffffff) != 0) {
                dVar15 = (double)FUN_140e4b060(&local_2c8);
              }
              dVar16 = local_2d8;
              if ((local_2cc & 0xffffff) != 0) {
                dVar16 = (double)FUN_140e4b060(&local_2d8);
              }
              fVar12 = (float)FUN_140e78f90((float)dVar16,(float)dVar15);
              if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pdVar10);
              }
              *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
              *pdVar10 = (double)fVar12;
              local_308 = 0x18;
              pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
              dVar15 = local_2c8;
              if ((local_2bc & 0xffffff) != 0) {
                dVar15 = (double)FUN_140e4b060(&local_2c8);
              }
              dVar16 = local_2d8;
              if ((local_2cc & 0xffffff) != 0) {
                dVar16 = (double)FUN_140e4b060(&local_2d8);
              }
              fVar12 = (float)FUN_140e79010((float)dVar16,(float)dVar15);
              if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pdVar10);
              }
              *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
              *pdVar10 = (double)fVar12;
              cVar1 = FUN_140e643f0(local_f8,&local_res8,&local_res10);
            } while (cVar1 != '\0');
          }
          FUN_140e63970(local_f8,&local_res8,&local_res10);
          if (local_e8 != 0) {
            FUN_140e4cd60();
          }
        } while (0 < iVar2);
        local_308 = 0x1d;
        if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_358);
        }
        uVar18 = (undefined4)(uVar9 >> 0x20);
        local_358 = 0;
        local_350 = 0;
        local_34c = 5;
        uStack_2dc = 0xf;
        local_2e8 = (longlong *)0x100000200000102;
        local_348 = 0x102;
        uStack_344 = 0x1000002;
        uStack_340 = uStack_2e0;
        uStack_33c = 0xf;
        if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_278);
        }
        FUN_140041b80(local_278,&local_348);
        local_1a8 = local_278;
        local_348 = _DAT_1419ede70;
        uStack_344 = uRam00000001419ede74;
        uStack_340 = uRam00000001419ede78;
        uStack_33c = uRam00000001419ede7c;
        if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_268);
        }
        FUN_140041b80(local_268,&local_348);
        local_1a0 = local_268;
        local_348 = _DAT_1419df7a0;
        uStack_344 = uRam00000001419df7a4;
        uStack_340 = uRam00000001419df7a8;
        uStack_33c = uRam00000001419df7ac;
        if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_258);
        }
        FUN_140041b80(local_258,&local_348);
        local_198 = local_258;
        uVar4 = CONCAT44(uVar18,DAT_141a0a2e8);
        FUN_140e634e0(local_res8,local_res10,&local_358,3,uVar4,&local_1a8);
        uVar18 = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_308 = 0x1e;
        if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_358);
        }
        local_358 = 0;
        local_350 = 0;
        local_34c = 5;
        uStack_2dc = 0xf;
        local_2e8 = (longlong *)0x10000020000012c;
        local_348 = 300;
        uStack_344 = 0x1000002;
        uStack_340 = uStack_2e0;
        uStack_33c = 0xf;
        if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_278);
        }
        FUN_140041b80(local_278,&local_348);
        local_1a8 = local_278;
        local_348 = _DAT_1419ede70;
        uStack_344 = uRam00000001419ede74;
        uStack_340 = uRam00000001419ede78;
        uStack_33c = uRam00000001419ede7c;
        if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_268);
        }
        FUN_140041b80(local_268,&local_348);
        local_1a0 = local_268;
        local_348 = _DAT_1419df7a0;
        uStack_344 = uRam00000001419df7a4;
        uStack_340 = uRam00000001419df7a8;
        uStack_33c = uRam00000001419df7ac;
        if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_258);
        }
        FUN_140041b80(local_258,&local_348);
        local_198 = local_258;
        FUN_140e634e0(local_res8,local_res10,&local_358,3,CONCAT44(uVar18,DAT_141a0a2e8),&local_1a8)
        ;
        local_308 = 0x20;
        FUN_140edd0e0(local_res8,local_res10,0,0);
      }
    }
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  _eh_vector_destructor_iterator_(local_278,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_318;
  return;
}

