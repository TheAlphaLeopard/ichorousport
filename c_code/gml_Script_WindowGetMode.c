// gml_Script_WindowGetMode @ 0x14028acf0

longlong * gml_Script_WindowGetMode(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong **pplVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong local_350;
  undefined4 local_348;
  undefined4 local_344;
  char local_340;
  longlong local_338;
  uint uStack_32c;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_31c;
  longlong local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  longlong local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  longlong lStack_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  longlong local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  longlong local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  longlong local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined1 *local_298;
  undefined4 local_28c;
  longlong local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  char *local_270;
  undefined4 local_268;
  longlong local_258 [2];
  longlong local_248 [2];
  longlong local_238 [2];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  longlong local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  longlong local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  longlong local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  longlong local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  longlong local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  longlong local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  longlong local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  longlong local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong local_188;
  undefined4 local_180;
  undefined4 local_17c;
  longlong local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_148;
  undefined4 local_140;
  undefined4 local_13c;
  longlong local_138;
  undefined4 local_130;
  undefined4 local_12c;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined4 local_100 [3];
  undefined4 local_f4;
  undefined4 local_f0 [3];
  undefined4 local_e4;
  undefined4 local_e0 [3];
  undefined4 local_d4;
  undefined4 local_d0 [3];
  undefined4 local_c4;
  undefined4 local_c0 [3];
  undefined4 local_b4;
  undefined4 local_b0 [3];
  undefined4 local_a4;
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  undefined4 local_7c;
  undefined4 local_78 [3];
  undefined4 local_6c;
  undefined4 local_68 [3];
  undefined4 local_5c;
  undefined4 local_58 [3];
  undefined4 local_4c;
  
  uVar10 = 0;
  local_270 = "gml_Script_WindowGetMonitorRect";
  local_278 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_278;
  local_268 = 0x26;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_258,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_2ac = 0xffffff;
  local_2b8 = 0;
  local_2bc = 0xffffff;
  local_2c8 = 0;
  uStack_32c = 0xffffff;
  local_338 = 0;
  plVar3 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57f10);
  uStack_27c = 0xffffff;
  local_288 = 0;
  local_28c = 0xffffff;
  local_298 = (undefined1 *)0x0;
  local_344 = 0xffffff;
  local_350 = 0;
  uStack_1fc = 0xffffff;
  local_208 = 0;
  plVar4 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57eb0);
  local_31c = 0;
  local_328 = 0;
  local_2cc = 0;
  local_2d8 = 0;
  local_2dc = 0;
  local_2e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_268 = 0x28;
  uVar6 = CONCAT44(uVar7,DAT_141a56d80);
  plVar5 = (longlong *)FUN_140e634e0(param_1,param_2,&local_328,0,uVar6,0,uVar10);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (plVar5 != &local_2b8) {
    local_308 = *plVar5;
    uStack_300 = plVar5[1];
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    FUN_140041b80(&local_2b8,&local_308);
  }
  local_268 = 0x29;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_328 = 0;
  local_320 = 0;
  local_31c = 5;
  uVar6 = CONCAT44(uVar7,DAT_141a571b0);
  plVar5 = (longlong *)FUN_140e634e0(param_1,param_2,&local_328,0,uVar6,0);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (plVar5 != &local_2c8) {
    local_308 = *plVar5;
    uStack_300 = plVar5[1];
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    FUN_140041b80(&local_2c8,&local_308);
  }
  local_268 = 0x2a;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_328 = 0;
  local_320 = 0;
  local_31c = 5;
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_2d8 = 0;
  local_2d0 = 0;
  local_2cc = 5;
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_2e8 = 0;
  local_2e0 = 0;
  local_2dc = 5;
  local_128 = &local_2b8;
  local_120 = &local_2c8;
  uVar8 = CONCAT44(uVar7,DAT_141a01008);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_2d8,0,uVar8,0);
  uVar7 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_30c = local_2ac;
  uStack_310 = local_2b0;
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) == 0) {
    local_318 = local_2b8;
  }
  else {
    FUN_1400419b0(&local_318,&local_2b8);
  }
  FUN_1400460e0(&local_318,uVar6);
  uStack_300 = CONCAT44(uStack_30c,uStack_310);
  local_308 = local_318;
  if ((1 << ((byte)local_238[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_308);
  uVar10 = 0;
  if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_118 = local_238;
  uVar8 = CONCAT44(uVar7,DAT_141a01018);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_2e8,0,uVar8,0,uVar10);
  uVar7 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_30c = local_2bc;
  uStack_310 = local_2c0;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) == 0) {
    local_318 = local_2c8;
  }
  else {
    FUN_1400419b0(&local_318,&local_2c8);
  }
  FUN_1400460e0(&local_318,uVar6);
  uStack_300 = CONCAT44(uStack_30c,uStack_310);
  local_308 = local_318;
  if ((1 << (local_228[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_308);
  uVar10 = 0;
  if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_110 = local_228;
  uVar6 = CONCAT44(uVar7,DAT_141a57fd0);
  plVar5 = (longlong *)FUN_140e634e0(param_1,param_2,&local_328,4,uVar6,&local_128,uVar10);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (plVar5 != &local_338) {
    local_308 = *plVar5;
    uStack_300 = plVar5[1];
    if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_338);
    }
    FUN_140041b80(&local_338);
  }
  local_268 = 0x2c;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_328 = 0;
  local_320 = 0;
  local_31c = 5;
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_2d8 = 0;
  local_2d0 = 0;
  local_2cc = 5;
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_2e8 = 0;
  local_2e0 = 0;
  local_2dc = 5;
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_2a8,gml_Script_WindowGetMonitorRect,0);
  if (&local_2a8 != plVar3) {
    uStack_300 = CONCAT44(uStack_29c,uStack_2a0);
    local_308 = local_2a8;
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar3);
    }
    FUN_140041b80(plVar3,&local_308);
  }
  FUN_140e60910(1);
  if (plVar3 != local_258) {
    local_308 = *plVar3;
    uStack_300 = plVar3[1];
    if ((1 << ((byte)local_258[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_258);
    }
    FUN_140041b80(local_258,&local_308);
  }
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_128 = local_258;
  uVar6 = CONCAT44(uVar7,DAT_141a57030);
  plVar3 = (longlong *)FUN_140e634e0(param_1,param_2,&local_2d8,0,uVar6,0);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (plVar3 != local_248) {
    local_308 = *plVar3;
    uStack_300 = plVar3[1];
    if ((1 << ((byte)local_248[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_248);
    }
    FUN_140041b80(local_248,&local_308);
  }
  local_120 = local_248;
  uVar6 = CONCAT44(uVar7,DAT_141a56f40);
  plVar3 = (longlong *)FUN_140e634e0(param_1,param_2,&local_2e8,0,uVar6,0);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (plVar3 != local_238) {
    local_308 = *plVar3;
    uStack_300 = plVar3[1];
    if ((1 << ((byte)local_238[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_308);
  }
  local_118 = local_238;
  pplVar9 = &local_128;
  uVar6 = CONCAT44(uVar7,DAT_1419fd6d8);
  plVar3 = (longlong *)FUN_140e634e0(param_1,param_2,&local_328,3,uVar6,pplVar9);
  uVar7 = 0xffffff;
  if (plVar3 != &local_288) {
    local_308 = *plVar3;
    uStack_300 = plVar3[1];
    FUN_140041b80(&local_288,&local_308);
    uVar7 = uStack_27c;
  }
  local_268 = 0x2d;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_28c = 0;
  local_298 = &DAT_bff0000000000000;
  local_268 = 0x2e;
  if ((1 << ((byte)local_344 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_350);
  }
  local_344 = 0;
  local_350 = 0;
  cVar1 = '\x01';
  do {
    while( true ) {
      if (cVar1 == '\0') {
        local_268 = 0x2e;
        FUN_140162d40(&local_350,8);
      }
      local_340 = '\0';
      local_15c = local_344;
      local_160 = local_348;
      if ((1 << ((byte)local_344 & 0x1f) & 0x46U) == 0) {
        local_168 = local_350;
      }
      else {
        FUN_1400419b0(&local_168,&local_350);
      }
      uVar10 = 4;
      local_e4 = 7;
      local_f0[0] = 7;
      FUN_1400460e0(&local_168,local_f0);
      if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50();
      }
      iVar2 = 0;
      if ((uStack_32c == 2) && (local_338 != 0)) {
        iVar2 = *(int *)(local_338 + 0x24);
      }
      local_7c = 0;
      local_88 = (double)iVar2;
      iVar2 = FUN_140e851f0(&local_168,&local_88,DAT_141955260,1,uVar6,pplVar9,uVar10);
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if (iVar2 == -2 || -1 < iVar2) {
        local_268 = 0x3c;
        if (&local_288 != param_3) {
          lStack_2f0 = CONCAT44(uStack_27c,uStack_280);
          local_2f8 = local_288;
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          FUN_140041b80(param_3,&local_2f8);
        }
        if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_328);
        }
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        if ((1 << ((byte)local_344 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_350);
        }
        if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        if ((1 << ((byte)uStack_32c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_338);
        }
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        _eh_vector_destructor_iterator_(local_258,0x10,5,FUN_140041b30);
        DAT_141dc7a50 = (undefined8 *)local_278;
        return param_3;
      }
      local_268 = 0x30;
      local_1ec = local_344;
      local_1f0 = local_348;
      if ((1 << ((byte)local_344 & 0x1f) & 0x46U) == 0) {
        local_1f8 = local_350;
      }
      else {
        FUN_1400419b0(&local_1f8,&local_350);
      }
      local_6c = 7;
      local_78[0] = 1;
      FUN_1400460e0(&local_1f8,local_78);
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      local_12c = local_344;
      local_130 = local_348;
      if ((1 << ((byte)local_344 & 0x1f) & 0x46U) == 0) {
        local_138 = local_350;
      }
      else {
        FUN_1400419b0(&local_138,&local_350);
      }
      local_5c = 7;
      local_68[0] = 3;
      FUN_1400460e0(&local_138,local_68);
      if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_68);
      }
      iVar2 = FUN_140e4a740(&local_1f8);
      plVar3 = (longlong *)0x0;
      if (((uStack_32c & 0xffffff) == 2) && (local_338 != 0)) {
        if ((iVar2 < 0) || (*(int *)(local_338 + 0x24) <= iVar2)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                        *(undefined4 *)(local_338 + 0x24));
        }
        else {
          plVar3 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(local_338 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar3 = &local_338;
      }
      iVar2 = FUN_140e4a740(&local_138);
      plVar5 = (longlong *)0x0;
      if (((uStack_32c & 0xffffff) == 2) && (local_338 != 0)) {
        if ((iVar2 < 0) || (*(int *)(local_338 + 0x24) <= iVar2)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                        *(undefined4 *)(local_338 + 0x24));
        }
        else {
          plVar5 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(local_338 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar5 = &local_338;
      }
      local_1bc = *(undefined4 *)((longlong)plVar5 + 0xc);
      local_1c0 = (int)plVar5[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_1c8 = *plVar5;
      }
      else {
        FUN_1400419b0(&local_1c8,plVar5);
      }
      FUN_1400462a0(&local_1c8,plVar3);
      local_13c = local_344;
      local_140 = local_348;
      if ((1 << ((byte)local_344 & 0x1f) & 0x46U) == 0) {
        local_148 = local_350;
      }
      else {
        FUN_1400419b0(&local_148,&local_350);
      }
      local_f4 = 7;
      local_100[0] = 2;
      FUN_1400460e0(&local_148,local_100);
      if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_100);
      }
      iVar2 = FUN_140e4a740(&local_350);
      plVar3 = (longlong *)0x0;
      if (((uStack_32c & 0xffffff) == 2) && (local_338 != 0)) {
        if ((iVar2 < 0) || (*(int *)(local_338 + 0x24) <= iVar2)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                        *(undefined4 *)(local_338 + 0x24));
        }
        else {
          plVar3 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(local_338 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar3 = &local_338;
      }
      iVar2 = FUN_140e4a740(&local_148);
      plVar5 = (longlong *)0x0;
      if (((uStack_32c & 0xffffff) == 2) && (local_338 != 0)) {
        if ((iVar2 < 0) || (*(int *)(local_338 + 0x24) <= iVar2)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                        *(undefined4 *)(local_338 + 0x24));
        }
        else {
          plVar5 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(local_338 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar5 = &local_338;
      }
      uStack_30c = *(undefined4 *)((longlong)plVar5 + 0xc);
      uStack_310 = (int)plVar5[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_318 = *plVar5;
      }
      else {
        FUN_1400419b0(&local_318,plVar5);
      }
      FUN_1400462a0(&local_318,plVar3);
      uStack_14c = uStack_30c;
      uStack_150 = uStack_310;
      if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) == 0) {
        local_158 = local_318;
      }
      else {
        FUN_1400419b0(&local_158,&local_318);
      }
      FUN_140042560(&local_158,&local_1c8);
      lStack_2f0 = CONCAT44(uStack_14c,uStack_150);
      local_2f8 = local_158;
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_2f8);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      uVar10 = 0;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_268 = 0x31;
      iVar2 = FUN_140e851f0(&local_208,&local_298,DAT_141955260,1,uVar6,pplVar9,uVar10);
      if (0 < iVar2) break;
LAB_14028c4c0:
      cVar1 = local_340;
    }
    local_268 = 0x33;
    lStack_2f0 = CONCAT44(uStack_1fc,uStack_200);
    local_2f8 = local_208;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
    FUN_140041b80(&local_298,&local_2f8);
    local_268 = 0x34;
    if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    local_328 = 0;
    local_320 = 0;
    local_31c = 5;
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_98,gml_Script_WindowSetScaled,0);
    if (&local_98 != plVar4) {
      lStack_2f0 = CONCAT44(uStack_8c,uStack_90);
      local_2f8 = local_98;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar4);
      }
      FUN_140041b80(plVar4,&local_2f8);
    }
    FUN_140e60910(1);
    if (plVar4 != local_258) {
      local_2f8 = *plVar4;
      lStack_2f0 = plVar4[1];
      if ((1 << ((byte)local_258[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_258);
      }
      FUN_140041b80(local_258,&local_2f8);
    }
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_128 = local_258;
    local_1dc = local_344;
    local_1e0 = local_348;
    if ((1 << ((byte)local_344 & 0x1f) & 0x46U) == 0) {
      local_1e8 = local_350;
    }
    else {
      FUN_1400419b0(&local_1e8,&local_350);
    }
    local_d4 = 7;
    local_e0[0] = 4;
    FUN_1400460e0(&local_1e8,local_e0);
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e0);
    }
    iVar2 = FUN_140e4a740(&local_1e8);
    plVar3 = (longlong *)0x0;
    if (((uStack_32c & 0xffffff) == 2) && (local_338 != 0)) {
      if ((iVar2 < 0) || (*(int *)(local_338 + 0x24) <= iVar2)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                      *(undefined4 *)(local_338 + 0x24));
      }
      else {
        plVar3 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(local_338 + 8));
      }
      if (plVar3 != local_248) goto LAB_14028bd29;
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar3 = &local_338;
LAB_14028bd29:
      local_2f8 = *plVar3;
      lStack_2f0 = plVar3[1];
      if ((1 << ((byte)local_248[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_248);
      }
      FUN_140041b80(local_248,&local_2f8);
    }
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_120 = local_248;
    local_1cc = local_344;
    local_1d0 = local_348;
    if ((1 << ((byte)local_344 & 0x1f) & 0x46U) == 0) {
      local_1d8 = local_350;
    }
    else {
      FUN_1400419b0(&local_1d8,&local_350);
    }
    local_c4 = 7;
    local_d0[0] = 5;
    FUN_1400460e0(&local_1d8,local_d0);
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d0);
    }
    iVar2 = FUN_140e4a740(&local_1d8);
    plVar3 = (longlong *)0x0;
    if (((uStack_32c & 0xffffff) == 2) && (local_338 != 0)) {
      if ((iVar2 < 0) || (*(int *)(local_338 + 0x24) <= iVar2)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                      *(undefined4 *)(local_338 + 0x24));
      }
      else {
        plVar3 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(local_338 + 8));
      }
      if (plVar3 != local_238) goto LAB_14028be80;
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar3 = &local_338;
LAB_14028be80:
      local_2f8 = *plVar3;
      lStack_2f0 = plVar3[1];
      if ((1 << ((byte)local_238[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_238);
      }
      FUN_140041b80(local_238,&local_2f8);
    }
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_118 = local_238;
    local_19c = local_344;
    local_1a0 = local_348;
    if ((1 << ((byte)local_344 & 0x1f) & 0x46U) == 0) {
      local_1a8 = local_350;
    }
    else {
      FUN_1400419b0(&local_1a8,&local_350);
    }
    local_b4 = 7;
    local_c0[0] = 4;
    FUN_1400460e0(&local_1a8,local_c0);
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c0);
    }
    local_1ac = local_344;
    local_1b0 = local_348;
    if ((1 << ((byte)local_344 & 0x1f) & 0x46U) == 0) {
      local_1b8 = local_350;
    }
    else {
      FUN_1400419b0(&local_1b8,&local_350);
    }
    local_a4 = 7;
    local_b0[0] = 6;
    FUN_1400460e0(&local_1b8,local_b0);
    if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b0);
    }
    iVar2 = FUN_140e4a740(&local_1a8);
    plVar3 = (longlong *)0x0;
    if (((uStack_32c & 0xffffff) == 2) && (local_338 != 0)) {
      if ((iVar2 < 0) || (*(int *)(local_338 + 0x24) <= iVar2)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                      *(undefined4 *)(local_338 + 0x24));
      }
      else {
        plVar3 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(local_338 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar3 = &local_338;
    }
    iVar2 = FUN_140e4a740(&local_1b8);
    plVar5 = (longlong *)0x0;
    if (((uStack_32c & 0xffffff) == 2) && (local_338 != 0)) {
      if ((iVar2 < 0) || (*(int *)(local_338 + 0x24) <= iVar2)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                      *(undefined4 *)(local_338 + 0x24));
      }
      else {
        plVar5 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(local_338 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar5 = &local_338;
    }
    uStack_16c = *(undefined4 *)((longlong)plVar5 + 0xc);
    uStack_170 = (int)plVar5[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_178 = *plVar5;
    }
    else {
      FUN_1400419b0(&local_178,plVar5);
    }
    FUN_1400462a0(&local_178,plVar3);
    lStack_2f0 = CONCAT44(uStack_16c,uStack_170);
    local_2f8 = local_178;
    if ((1 << (local_228[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_2f8);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_110 = local_228;
    uStack_29c = local_344;
    uStack_2a0 = local_348;
    if ((1 << ((byte)local_344 & 0x1f) & 0x46U) == 0) {
      local_2a8 = local_350;
    }
    else {
      FUN_1400419b0(&local_2a8,&local_350);
    }
    local_4c = 7;
    local_58[0] = 5;
    FUN_1400460e0(&local_2a8,local_58);
    if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    local_17c = local_344;
    local_180 = local_348;
    if ((1 << ((byte)local_344 & 0x1f) & 0x46U) == 0) {
      local_188 = local_350;
    }
    else {
      FUN_1400419b0(&local_188,&local_350);
    }
    uStack_300 = CONCAT44(7,(undefined4)uStack_300);
    local_308 = CONCAT44(local_308._4_4_,7);
    FUN_1400460e0(&local_188,&local_308);
    if ((1 << ((byte)((ulonglong)uStack_300 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    iVar2 = FUN_140e4a740(&local_2a8);
    plVar3 = (longlong *)0x0;
    if (((uStack_32c & 0xffffff) == 2) && (local_338 != 0)) {
      if ((iVar2 < 0) || (*(int *)(local_338 + 0x24) <= iVar2)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                      *(undefined4 *)(local_338 + 0x24));
      }
      else {
        plVar3 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(local_338 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar3 = &local_338;
    }
    iVar2 = FUN_140e4a740(&local_188);
    plVar5 = (longlong *)0x0;
    if (((uStack_32c & 0xffffff) == 2) && (local_338 != 0)) {
      if ((iVar2 < 0) || (*(int *)(local_338 + 0x24) <= iVar2)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                      *(undefined4 *)(local_338 + 0x24));
      }
      else {
        plVar5 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(local_338 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar5 = &local_338;
    }
    uStack_18c = *(undefined4 *)((longlong)plVar5 + 0xc);
    uStack_190 = (int)plVar5[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_198 = *plVar5;
    }
    else {
      FUN_1400419b0(&local_198,plVar5);
    }
    FUN_1400462a0(&local_198,plVar3);
    lStack_2f0 = CONCAT44(uStack_18c,uStack_190);
    local_2f8 = local_198;
    if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_2f8);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    uVar11 = 0;
    if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_108 = local_218;
    pplVar9 = &local_128;
    uVar6 = CONCAT44(uVar10,DAT_1419fd6d8);
    plVar3 = (longlong *)FUN_140e634e0(param_1,param_2,&local_328,5,uVar6,pplVar9,uVar11);
    if (plVar3 == &local_288) goto LAB_14028c4c0;
    local_2f8 = *plVar3;
    lStack_2f0 = plVar3[1];
    if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_2f8);
    uVar7 = uStack_27c;
    cVar1 = local_340;
  } while( true );
}

