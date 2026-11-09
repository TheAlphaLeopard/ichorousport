// gml_Object_oTitleScreen_Draw_64 @ 0x140dc02f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oTitleScreen_Draw_64(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined8 local_res20;
  undefined8 **ppuVar11;
  undefined8 local_378;
  undefined4 local_370;
  undefined4 local_36c;
  undefined8 local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 local_338;
  char *local_330;
  undefined4 local_328;
  undefined8 local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298 [2];
  undefined8 local_288 [2];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [12];
  byte local_24c;
  undefined1 local_248 [12];
  byte local_23c;
  undefined1 local_238 [12];
  byte local_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_20c;
  undefined8 *local_208;
  undefined8 *local_200;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_174;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  longlong local_d8;
  
  local_res18 = 0;
  local_330 = "gml_Object_oTitleScreen_Step_0";
  local_328 = 0;
  local_338 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_338;
  uVar8 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_298,0x10,7,FUN_1400424d0,FUN_140041b30);
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57ca0);
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  uStack_29c = 0xffffff;
  local_2a8 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  local_2bc = 0xffffff;
  local_2c8 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_2cc = 0xffffff;
  local_2d8 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_1c4 = 0xffffff;
  local_1d0 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_36c = 0xffffff;
  local_378 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_2fc = 0xffffff;
  local_308 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  iVar9 = 2;
  local_328 = 2;
  uStack_30c = 0xd;
  local_318 = 0;
  local_res20 = uVar5;
  if (&local_318 != puVar4) {
    local_368 = 0;
    uStack_360 = uStack_310;
    uStack_35c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_368);
  }
  local_328 = 4;
  uStack_34c = 0xd;
  local_358 = 0;
  cVar2 = FUN_140e491e0(&local_358);
  if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  if (cVar2 != '\0') {
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a01768);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 == '\0') {
      local_328 = 6;
      uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a016d8);
      FUN_140e609c0(local_res8);
      FUN_1400462a0(uVar6,uVar5);
      FUN_140e60910(1);
      local_328 = 7;
      uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a016d8);
      uStack_34c = 0;
      local_358 = 0;
      iVar3 = FUN_140e851f0(uVar6,&local_358,DAT_141955260,1);
      if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      if (iVar3 != -2 && iVar3 < 1) {
        local_328 = 9;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a016d8);
        local_368 = CONCAT44(uRam0000000141dc7844,_DAT_141dc7840);
        uStack_360 = uRam0000000141dc7848;
        uStack_35c = uRam0000000141dc784c;
        if ((1 << ((byte)local_298[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_298);
        }
        FUN_140041b80(local_298,&local_368);
        local_208 = local_298;
        FUN_140e609c0(local_res8);
        uVar6 = CONCAT44(uVar8,DAT_141a0a0d8);
        puVar7 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_378,1,uVar6,&local_208);
        uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (puVar7 != puVar4) {
          local_368 = *puVar7;
          uStack_360 = *(undefined4 *)(puVar7 + 1);
          uStack_35c = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          FUN_140041b80(puVar4,&local_368);
        }
        FUN_140e60910(1);
        local_328 = 10;
        if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_378 = 0;
        local_370 = 0;
        local_36c = 5;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a01768);
        local_368 = CONCAT44(uRam0000000141dc7844,_DAT_141dc7840);
        uStack_360 = uRam0000000141dc7848;
        uStack_35c = uRam0000000141dc784c;
        if ((1 << ((byte)local_298[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_298);
        }
        FUN_140041b80(local_298,&local_368);
        local_208 = local_298;
        FUN_140e609c0(local_res8);
        puVar7 = (undefined8 *)
                 FUN_140e634e0(local_res8,local_res10,&local_378,1,CONCAT44(uVar8,DAT_141a59730),
                               &local_208);
        if (puVar7 != puVar4) {
          local_368 = *puVar7;
          uStack_360 = *(undefined4 *)(puVar7 + 1);
          uStack_35c = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          FUN_140041b80(puVar4,&local_368);
        }
        FUN_140e60910(1);
      }
    }
  }
  local_328 = 0xe;
  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a575f0);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    local_328 = 0xf;
    if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_378);
    }
    local_378 = 0;
    local_370 = 0;
    local_36c = 5;
    uVar8 = 0;
    uVar6 = gml_Script_InputMousePressed(local_res8,local_res10,&local_378,0,0);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 != '\0') {
      local_328 = 0x10;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a575f0);
      uStack_30c = 0xd;
      local_318 = 0x3ff0000000000000;
      if (&local_318 != puVar4) {
        local_368 = 0x3ff0000000000000;
        uStack_360 = uStack_310;
        uStack_35c = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_368);
      }
    }
  }
  else {
    local_328 = 0x12;
    if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_378);
    }
    local_378 = 0;
    local_370 = 0;
    local_36c = 5;
    puVar4 = (undefined8 *)
             FUN_140e8da20(&local_128,local_res8,8,&DAT_1419ee170,&DAT_1419ee1e0,&DAT_1419ee190,
                           &DAT_1419ee1b0,&DAT_1419ee1c0,&DAT_1419ee160,&DAT_1419ee200,
                           &DAT_1419ee180);
    if (puVar4 != local_298) {
      local_368 = *puVar4;
      uStack_360 = *(undefined4 *)(puVar4 + 1);
      uStack_35c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_298[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_298);
      }
      FUN_140041b80(local_298,&local_368);
    }
    local_208 = local_298;
    local_368 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_360 = DAT_1419df7b8;
    uStack_35c = DAT_1419df7bc;
    if ((1 << ((byte)local_288[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_288);
    }
    FUN_140041b80(local_288,&local_368);
    local_200 = local_288;
    ppuVar11 = &local_208;
    uVar6 = gml_Script_InputReleased(local_res8,local_res10,&local_378,2,ppuVar11);
    uVar8 = (undefined4)((ulonglong)ppuVar11 >> 0x20);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 != '\0') {
      local_328 = 0x13;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a575f0);
      uStack_30c = 0xd;
      local_318 = 0;
      if (&local_318 != puVar4) {
        local_368 = 0;
        uStack_360 = uStack_310;
        uStack_35c = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_368);
      }
    }
  }
  local_328 = 0x16;
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_378 = 0;
  local_370 = 0;
  local_36c = 5;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
  if (puVar4 != local_298) {
    local_368 = *puVar4;
    uStack_360 = *(undefined4 *)(puVar4 + 1);
    uStack_35c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_298[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_298);
    }
    FUN_140041b80(local_298,&local_368);
  }
  local_208 = local_298;
  uVar6 = CONCAT44(uVar8,DAT_1419fd658);
  puVar4 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_378,1,uVar6,&local_208);
  uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar10 = (undefined4)*puVar4;
  }
  else {
    uVar10 = FUN_140e4b060(puVar4);
  }
  dVar1 = (double)FUN_1412a79b0(uVar10,0x4030000000000000);
  uVar10 = 0xffffff;
  if (dVar1 == 0.0) {
    local_328 = 0x18;
    if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    local_308 = 0;
    local_300 = 0;
    local_2fc = 5;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_2a8);
    local_368 = local_2a8;
    uStack_360 = uStack_2a0;
    uStack_35c = uStack_29c;
    if ((1 << ((byte)local_288[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_288);
    }
    FUN_140041b80(local_288,&local_368);
    local_200 = local_288;
    local_368 = local_2a8;
    uStack_360 = uStack_2a0;
    uStack_35c = uStack_29c;
    if ((1 << (local_278[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_278);
    }
    FUN_140041b80(local_278,&local_368);
    local_1f8 = local_278;
    uVar5 = FUN_140e794b0(0,0x3ff4000000000000);
    uVar6 = CONCAT44(uVar8,DAT_141a00c98);
    puVar4 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_228,1,uVar6,&local_1f8);
    uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uStack_33c = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_340 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) == 0) {
      local_348 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_348,puVar4);
    }
    local_res18 = 1;
    uStack_34c = 0;
    local_358 = uVar5;
    FUN_140042560(&local_348,&local_358);
    if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    uVar5 = CONCAT44(uVar8,DAT_141a00e38);
    puVar4 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_308,1,uVar5,&local_200);
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_2ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_2f0 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) == 0) {
      local_2f8 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_2f8,puVar4);
    }
    local_res18 = 3;
    FUN_1400460e0(&local_2f8,&local_348);
    local_368 = local_2f8;
    uStack_360 = uStack_2f0;
    uStack_35c = uStack_2ec;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    FUN_140041b80(&local_2b8,&local_368);
    local_res18 = 1;
    if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_res18 = 0;
    if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_348);
    }
    local_328 = 0x19;
    if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_378);
    }
    local_378 = 0;
    local_370 = 0;
    local_36c = 5;
    FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_2a8);
    local_368 = local_2a8;
    uStack_360 = uStack_2a0;
    uStack_35c = uStack_29c;
    if ((1 << ((byte)local_298[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_298);
    }
    FUN_140041b80(local_298,&local_368);
    local_208 = local_298;
    puVar4 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_378,1,CONCAT44(uVar8,DAT_141a00dd8),
                           &local_208);
    uStack_33c = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_340 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) == 0) {
      local_348 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_348,puVar4);
    }
    local_res18 = 4;
    uStack_34c = 7;
    local_358 = CONCAT44(local_358._4_4_,8);
    FUN_1400462a0(&local_348,&local_358);
    if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    local_368 = local_348;
    uStack_360 = uStack_340;
    uStack_35c = uStack_33c;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    FUN_140041b80(&local_2c8,&local_368);
    local_res18 = 0;
    if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_348);
    }
    local_328 = 0x1b;
    if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_378);
    }
    local_378 = 0;
    local_370 = 0;
    local_36c = 5;
    local_208 = &local_2b8;
    local_200 = &local_2c8;
    local_368 = CONCAT44(uRam00000001419ee1a4,_DAT_1419ee1a0);
    uStack_360 = uRam00000001419ee1a8;
    uStack_35c = uRam00000001419ee1ac;
    if ((1 << (local_278[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_278);
    }
    FUN_140041b80(local_278,&local_368);
    local_1f8 = local_278;
    local_368 = CONCAT44(uRam00000001419ee1f4,_DAT_1419ee1f0);
    uStack_360 = uRam00000001419ee1f8;
    uStack_35c = uRam00000001419ee1fc;
    if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_268);
    }
    FUN_140041b80(local_268,&local_368);
    local_1f0 = local_268;
    local_368 = CONCAT44(uRam00000001419ee1d4,_DAT_1419ee1d0);
    uStack_360 = uRam00000001419ee1d8;
    uStack_35c = uRam00000001419ee1dc;
    if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_258);
    }
    FUN_140041b80(local_258,&local_368);
    local_1e8 = local_258;
    local_368 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_360 = DAT_1419df7b8;
    uStack_35c = DAT_1419df7bc;
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_248);
    }
    FUN_140041b80(local_248,&local_368);
    local_1e0 = local_248;
    local_368 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_360 = DAT_1419df7b8;
    uStack_35c = DAT_1419df7bc;
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_368);
    local_1d8 = local_238;
    ppuVar11 = &local_208;
    puVar4 = (undefined8 *)gml_Script_get_blood_col(local_res8,local_res10,&local_378,7,ppuVar11);
    if (puVar4 != &local_218) {
      local_368 = *puVar4;
      uStack_360 = *(undefined4 *)(puVar4 + 1);
      uStack_35c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_368);
    }
    local_328 = 0x1c;
    if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c0);
    }
    local_1b4 = 0;
    local_1c0 = 0x3fa999999999999a;
    FUN_140e87930(&local_218,DAT_141a1f310,0x80000000,&local_1c0);
    local_328 = 0x1d;
    local_318 = 0x3ff0000000000000;
    uStack_30c = 0xd;
    local_368 = 0x3ff0000000000000;
    uStack_360 = uStack_310;
    uStack_35c = 0xd;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_368);
    FUN_140e87930(&local_218,DAT_141a56af0,0x80000000,&local_158);
    uVar8 = 0xffffff;
    do {
      uVar10 = (undefined4)((ulonglong)ppuVar11 >> 0x20);
      iVar9 = iVar9 + -1;
      local_328 = 0x2c;
      if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      local_378 = 0;
      local_370 = 0;
      local_36c = 5;
      if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_308);
      }
      local_308 = 0;
      local_300 = 0;
      local_2fc = 5;
      FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_2a8);
      local_2e8 = (undefined4)local_2a8;
      uStack_2e4 = local_2a8._4_4_;
      uStack_2e0 = uStack_2a0;
      uStack_2dc = uStack_29c;
      if ((1 << ((byte)local_298[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_298);
      }
      FUN_140041b80(local_298,&local_2e8);
      local_208 = local_298;
      local_2e8 = (undefined4)local_2a8;
      uStack_2e4 = local_2a8._4_4_;
      uStack_2e0 = uStack_2a0;
      uStack_2dc = uStack_29c;
      if ((1 << ((byte)local_288[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_288);
      }
      FUN_140041b80(local_288,&local_2e8);
      local_200 = local_288;
      uVar5 = FUN_140e794b0(0x9999999a,0x4000000000000000);
      uVar6 = CONCAT44(uVar10,DAT_141a00c98);
      puVar4 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_308,1,uVar6,&local_200);
      uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_2ec = *(undefined4 *)((longlong)puVar4 + 0xc);
      uStack_2f0 = *(undefined4 *)(puVar4 + 1);
      if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) == 0) {
        local_2f8 = *puVar4;
      }
      else {
        FUN_1400419b0(&local_2f8,puVar4);
      }
      local_res18 = 0x100;
      local_12c = 0;
      local_138 = uVar5;
      FUN_140042560(&local_2f8,&local_138);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      uVar5 = CONCAT44(uVar10,DAT_141a00e38);
      puVar4 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_378,1,uVar5,&local_208);
      uVar10 = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_33c = *(undefined4 *)((longlong)puVar4 + 0xc);
      uStack_340 = *(undefined4 *)(puVar4 + 1);
      if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) == 0) {
        local_348 = *puVar4;
      }
      else {
        FUN_1400419b0(&local_348,puVar4);
      }
      local_res18 = 0x300;
      FUN_1400460e0(&local_348,&local_2f8);
      local_2e8 = (undefined4)local_348;
      uStack_2e4 = local_348._4_4_;
      uStack_2e0 = uStack_340;
      uStack_2dc = uStack_33c;
      if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      FUN_140041b80(&local_2b8,&local_2e8);
      local_res18 = 0x100;
      if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      local_328 = 0x2d;
      uVar5 = FUN_140e794b0(0,0x4054000000000000);
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      local_2cc = 0;
      local_328 = 0x2e;
      uStack_13c = 0;
      local_148 = 0x4064000000000000;
      local_res18 = 0x400;
      local_2d8 = uVar5;
      FUN_1400462a0(&local_148,&local_2d8);
      local_2e8 = (undefined4)local_148;
      uStack_2e4 = local_148._4_4_;
      uStack_2e0 = uStack_140;
      uStack_2dc = uStack_13c;
      if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      FUN_140041b80(&local_2c8,&local_2e8);
      local_res18 = 0;
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_328 = 0x2f;
      local_1a4 = local_2cc;
      local_1a8 = local_2d0;
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) == 0) {
        local_1b0 = local_2d8;
      }
      else {
        FUN_1400419b0(&local_1b0,&local_2d8);
      }
      local_res18 = 0x800;
      uStack_30c = 0;
      local_318 = 0x4054000000000000;
      FUN_140046500(&local_1b0,&local_318);
      if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      uStack_34c = 0;
      local_358 = 0x3ff0000000000000;
      local_res18 = 0x1800;
      FUN_1400462a0(&local_358,&local_1b0);
      local_2e8 = (undefined4)local_358;
      uStack_2e4 = local_358._4_4_;
      uStack_2e0 = uStack_350;
      uStack_2dc = uStack_34c;
      if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_2e8);
      local_res18 = 0x800;
      if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      local_res18 = 0;
      if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b0);
      }
      local_328 = 0x30;
      if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      local_378 = 0;
      local_370 = 0;
      local_36c = 5;
      local_208 = &local_2b8;
      local_200 = &local_2c8;
      local_2e8 = _DAT_141ddbaa8;
      uStack_2e4 = uRam0000000141ddbaac;
      uStack_2e0 = uRam0000000141ddbab0;
      uStack_2dc = DAT_141ddbab4;
      if ((1 << (local_278[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_278);
      }
      FUN_140041b80(local_278,&local_2e8);
      local_1f8 = local_278;
      uStack_10c = 0xf;
      local_118 = 0x10000000000012d;
      local_2e8 = 0x12d;
      uStack_2e4 = 0x1000000;
      uStack_2e0 = uStack_110;
      uStack_2dc = 0xf;
      if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_268);
      }
      FUN_140041b80(local_268,&local_2e8);
      local_1f0 = local_268;
      ppuVar11 = (undefined8 **)CONCAT44(uVar10,DAT_141a0a7c8);
      uVar5 = FUN_140e634e0(local_res8,local_res10,&local_378,4,ppuVar11,&local_208);
      iVar3 = FUN_140e63cb0(local_e8,&local_res8,&local_res10,uVar5);
      if (0 < iVar3) {
        uStack_100 = CONCAT44(uStack_15c,uStack_160);
        local_108 = local_168;
        local_f8 = local_168;
        uStack_f0 = uStack_100;
        do {
          local_328 = 0x32;
          uStack_35c = 0xf;
          local_368 = 0x10000010000005b;
          local_2e8 = 0x5b;
          uStack_2e4 = 0x1000001;
          uStack_2e0 = uStack_360;
          uStack_2dc = 0xf;
          if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_180);
          }
          FUN_140041b80(&local_180,&local_2e8);
          FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_180);
          local_328 = 0x33;
          uVar5 = FUN_140e794b0(0,0x3ff8000000000000);
          if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d0);
          }
          local_1c4 = 0;
          local_1d0 = uVar5;
          FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_1d0);
          local_328 = 0x35;
          if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_190);
          }
          FUN_140041b80(&local_190,&local_108);
          FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_190);
          local_328 = 0x36;
          if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a0);
          }
          FUN_140041b80(&local_1a0,&local_f8);
          FUN_140e86fa0(local_res8,DAT_141a0f938,0x80000000,&local_1a0);
          cVar2 = FUN_140e643f0(local_e8,&local_res8,&local_res10);
        } while (cVar2 != '\0');
      }
      FUN_140e63970(local_e8,&local_res8);
      if (local_d8 != 0) {
        FUN_140e4cd60();
      }
      uVar8 = uStack_15c;
    } while (0 < iVar9);
    uVar5 = local_res20;
    uVar10 = uStack_15c;
  }
  local_328 = 0x45;
  uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
  FUN_140e609c0(local_res8);
  FUN_1400460e0(uVar6,uVar5);
  FUN_140e60910(1);
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  _eh_vector_destructor_iterator_(local_298,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_338;
  return;
}

