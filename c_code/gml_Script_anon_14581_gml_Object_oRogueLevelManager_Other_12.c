// gml_Script_anon_14581_gml_Object_oRogueLevelManager_Other_12 @ 0x140d12740

undefined8 *
gml_Script_anon_14581_gml_Object_oRogueLevelManager_Other_12
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  bool bVar9;
  longlong *local_res8;
  ulonglong local_res10;
  undefined8 *local_res18;
  uint local_res20;
  ulonglong uVar10;
  double local_408;
  uint local_3fc;
  longlong local_3f8;
  undefined4 local_3ec;
  undefined8 local_3e8;
  undefined4 local_3dc;
  undefined8 local_3d8;
  undefined4 local_3cc;
  longlong local_3c8;
  longlong lStack_3c0;
  longlong local_3b8;
  undefined4 local_3ac;
  undefined8 local_3a8;
  char *local_3a0;
  undefined4 local_398;
  undefined8 local_390;
  undefined4 local_384;
  undefined8 local_380;
  undefined4 local_374;
  longlong local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  longlong local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  longlong local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 local_338;
  undefined4 local_32c;
  undefined8 local_328;
  undefined4 local_31c;
  double local_318;
  undefined4 local_30c;
  undefined8 local_308;
  undefined4 local_2fc;
  undefined8 local_2f8;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined4 local_2bc;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined8 *local_298;
  longlong *local_290;
  undefined8 *local_288;
  longlong **local_280;
  ulonglong *local_278;
  undefined8 *local_270;
  undefined8 *local_268;
  undefined1 *local_260;
  undefined1 *local_258;
  undefined8 *local_250;
  longlong *local_248;
  undefined8 *local_240;
  longlong **local_238;
  ulonglong *local_230;
  undefined8 *local_228;
  undefined8 *local_220;
  undefined8 *local_218;
  undefined1 *local_210;
  undefined1 *local_208;
  undefined8 local_200;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e4;
  undefined1 local_1e0 [16];
  longlong local_1d0;
  undefined1 local_1b8 [112];
  undefined1 local_148 [264];
  
  uVar8 = 0;
  local_res20 = 0;
  local_3a0 = "gml_Script_anon@13848@gml_Object_oRogueLevelManager_Other_12";
  local_3a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_3a8;
  local_398 = 0x1ea;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_148,0x10,0xe,FUN_1400424d0,FUN_140041b30);
  local_3ec = 0xffffff;
  local_3f8 = 0;
  local_3cc = 0xffffff;
  local_3d8 = 0;
  local_3dc = 0xffffff;
  local_3e8 = 0;
  local_31c = 0xffffff;
  local_328 = 0;
  local_32c = 0xffffff;
  local_338 = 0;
  local_2bc = 0xffffff;
  local_2c8 = 0;
  local_3ac = 0xffffff;
  local_3b8 = 0;
  uStack_35c = 0xffffff;
  local_368 = 0;
  uStack_33c = 0xffffff;
  local_348 = 0;
  local_374 = 0xffffff;
  local_380 = 0;
  uStack_34c = 0xffffff;
  local_358 = 0;
  local_384 = 0xffffff;
  local_390 = 0;
  local_1f4 = 0;
  local_200 = 0;
  local_2cc = 0;
  local_2d8 = 0;
  local_1e4 = 0;
  local_1f0 = 0;
  local_2dc = 0;
  local_2e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_398 = 0x1eb;
  local_3fc = 0;
  local_408 = 0.0;
  bVar2 = true;
  do {
    plVar7 = &DAT_1419df7b0;
    iVar5 = 0;
    if (!bVar2) {
      local_398 = 0x1eb;
      uVar4 = local_3fc & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_408 = (double)CONCAT44(local_408._4_4_,local_408._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_408 = (double)((longlong)local_408 + 1);
          }
          else {
            if (uVar4 == 0xd) goto LAB_140d1291c;
            FUN_140042910(&DAT_14172c3d8,&local_408,&local_408);
          }
          goto LAB_140d1292a;
        }
        local_408 = (double)FUN_140e4b060(&local_408);
LAB_140d1291c:
        local_3fc = 0;
      }
      local_408 = local_408 + 1.0;
    }
LAB_140d1292a:
    bVar2 = false;
    if (param_4 < 1) {
      plVar6 = &DAT_1419df7b0;
    }
    else {
      plVar6 = (longlong *)*param_5;
    }
    if ((*(int *)((longlong)plVar6 + 0xc) == 2) && (*plVar6 != 0)) {
      iVar5 = *(int *)(*plVar6 + 0x24);
    }
    local_30c = 0;
    local_318 = (double)iVar5;
    iVar5 = FUN_140e851f0(&local_408,&local_318,DAT_141955260,1);
    if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    if (iVar5 == -2 || -1 < iVar5) {
      if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2e8);
      }
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      if ((1 << ((byte)local_384 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_390);
      }
      if ((1 << ((byte)uStack_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      if ((1 << ((byte)local_374 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_380);
      }
      if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_368);
      }
      if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3b8);
      }
      if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_338);
      }
      if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_328);
      }
      if ((1 << ((byte)local_3dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3e8);
      }
      if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3d8);
      }
      if ((1 << ((byte)local_3ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3f8);
      }
      if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_408);
      }
      _eh_vector_destructor_iterator_(local_148,0x10,0xe,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_3a8;
      return local_res18;
    }
    local_398 = 0x1ec;
    iVar5 = FUN_140e4a740(&local_408);
    if (0 < param_4) {
      plVar7 = (longlong *)*param_5;
    }
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar7 != &local_3f8) {
      local_3c8 = *plVar7;
      lStack_3c0 = plVar7[1];
      if ((1 << ((byte)local_3ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3f8);
      }
      FUN_140041b80(&local_3f8,&local_3c8);
    }
    local_398 = 0x1ed;
    plVar7 = local_res8;
    uVar10 = local_res10;
    FUN_140e87170(&local_3f8,DAT_141a1f580,0x80000000,&local_3d8,local_res8,local_res10);
    local_2fc = 0xf;
    local_308 = 0x100000000000114;
    iVar5 = FUN_140e851f0(&local_3d8,&local_308,DAT_141955260,0);
    if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    if (iVar5 == 0) {
      bVar9 = true;
    }
    else {
      plVar7 = local_res8;
      uVar10 = local_res10;
      FUN_140e87170(&local_3f8,DAT_141a1f580,0x80000000,&local_3d8,local_res8,local_res10);
      local_2ec = 0xf;
      local_2f8 = 0x100000000000118;
      iVar5 = FUN_140e851f0(&local_3d8,&local_2f8,DAT_141955260,0);
      bVar9 = iVar5 == 0;
      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
    }
    if ((1 << ((byte)local_3dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_3e8);
    }
    local_3dc = 0xd;
    if (bVar9) {
      local_3e8 = 0x3ff0000000000000;
    }
    else {
      local_3e8 = 0;
    }
    local_398 = 0x1ee;
    cVar3 = FUN_140e491e0(&local_3e8);
    if (cVar3 == '\0') {
      local_250 = &local_2e8;
      local_248 = &local_3f8;
      local_240 = &local_328;
      local_238 = &local_res8;
      local_230 = &local_res10;
      local_220 = &local_2c8;
      local_218 = &local_3d8;
      local_210 = local_148;
      local_208 = local_1b8;
      local_228 = &local_338;
      plVar6 = (longlong *)FUN_140d13380(&local_250,local_2b8);
      uVar8 = uVar8 | 2;
    }
    else {
      local_298 = &local_2d8;
      local_290 = &local_3f8;
      local_288 = &local_328;
      local_280 = &local_res8;
      local_278 = &local_res10;
      local_268 = &local_3d8;
      local_260 = local_148;
      local_258 = local_1b8;
      local_270 = &local_338;
      plVar6 = (longlong *)FUN_140d13140(&local_298,local_2a8);
      uVar8 = uVar8 | 1;
    }
    local_res20 = uVar8;
    if (plVar6 != &local_3b8) {
      local_3c8 = *plVar6;
      lStack_3c0 = plVar6[1];
      if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3b8);
      }
      FUN_140041b80(&local_3b8,&local_3c8);
    }
    if (((uVar8 & 2) != 0) &&
       (uVar8 = uVar8 & 0xfffffffd, local_res20 = uVar8, (1 << (local_2b8[0xc] & 0x1f) & 0x46U) != 0
       )) {
      FUN_140041a50(local_2b8);
    }
    if (((uVar8 & 1) != 0) &&
       (uVar8 = uVar8 & 0xfffffffe, local_res20 = uVar8, (1 << (local_2a8[0xc] & 0x1f) & 0x46U) != 0
       )) {
      FUN_140041a50(local_2a8);
    }
    local_398 = 0x1f1;
    iVar5 = FUN_140e63cb0(local_1e0,&local_res8,&local_res10,&local_3b8);
    if (0 < iVar5) {
      do {
        local_398 = 0x1f2;
        plVar6 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57b30);
        FUN_140e87440(&local_3f8,DAT_141a57b30,0x80000000,&local_368,
                      (ulonglong)plVar7 & 0xffffffffffffff00,uVar10 & 0xffffffffffffff00);
        FUN_140e609c0(local_res8);
        if (&local_368 != plVar6) {
          lStack_3c0 = CONCAT44(uStack_35c,uStack_360);
          local_3c8 = local_368;
          if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(plVar6);
          }
          FUN_140041b80(plVar6,&local_3c8);
        }
        FUN_140e60910(1);
        local_398 = 499;
        FUN_140e87170(&local_3f8,DAT_1419fde18,0x80000000,&local_348,local_res8,local_res10);
        lStack_3c0 = CONCAT44(uStack_33c,uStack_340);
        local_3c8 = local_348;
        if ((1 << ((byte)local_374 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_380);
        }
        FUN_140041b80(&local_380,&local_3c8);
        FUN_140e86fa0(local_res8,DAT_1419fde18,0x80000000,&local_380);
        plVar7 = local_res8;
        uVar10 = local_res10;
        FUN_140e87170(&local_3f8,DAT_1419fec88,0x80000000,&local_358,local_res8,local_res10);
        lStack_3c0 = CONCAT44(uStack_34c,uStack_350);
        local_3c8 = local_358;
        if ((1 << ((byte)local_384 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_390);
        }
        FUN_140041b80(&local_390,&local_3c8);
        FUN_140e86fa0(local_res8,DAT_1419fec88,0x80000000,&local_390);
        cVar3 = FUN_140e643f0(local_1e0,&local_res8,&local_res10);
      } while (cVar3 != '\0');
    }
    FUN_140e63970(local_1e0,&local_res8,&local_res10);
    if (local_1d0 != 0) {
      FUN_140e4cd60();
    }
  } while( true );
}

