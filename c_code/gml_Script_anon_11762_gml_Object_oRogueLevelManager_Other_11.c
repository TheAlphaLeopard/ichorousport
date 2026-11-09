// gml_Script_anon_11762_gml_Object_oRogueLevelManager_Other_11 @ 0x140cf3400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_11762_gml_Object_oRogueLevelManager_Other_11
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  double *pdVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 local_348;
  undefined4 local_340;
  undefined4 local_33c;
  double local_338;
  uint local_32c;
  double local_328;
  uint local_31c;
  undefined4 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined4 local_304;
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  uint uStack_2ec;
  double local_2e8;
  uint local_2dc;
  double local_2d8;
  uint local_2cc;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  undefined8 local_2b8;
  char *local_2b0;
  undefined4 local_2a8;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  uint uStack_28c;
  undefined8 local_288;
  undefined4 local_27c;
  double local_278;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 uStack_260;
  uint uStack_25c;
  undefined8 local_258;
  undefined4 uStack_250;
  uint uStack_24c;
  double *local_248;
  double *local_240;
  undefined1 *local_238;
  undefined1 *local_230;
  undefined1 *local_228;
  undefined1 *local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  uint uStack_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined4 local_198 [3];
  undefined4 local_18c;
  undefined1 *local_188;
  undefined4 local_17c;
  undefined4 local_178 [3];
  undefined4 local_16c;
  undefined4 local_168 [3];
  undefined4 local_15c;
  undefined1 *local_158;
  undefined4 local_14c;
  undefined4 local_148 [3];
  undefined4 local_13c;
  undefined4 local_138 [3];
  undefined4 local_12c;
  undefined1 *local_128;
  undefined4 local_11c;
  undefined4 local_118 [3];
  undefined4 local_10c;
  undefined4 local_108 [3];
  undefined4 local_fc;
  undefined1 *local_f8;
  undefined4 local_ec;
  undefined1 local_e8 [16];
  double local_d8;
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  
  local_2b0 = "gml_Script_anon@11995@anon@11762@gml_Object_oRogueLevelManager_Other_11";
  local_2b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2b8;
  local_2a8 = 0x18b;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_e8,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_2ec = 0xffffff;
  local_2f8 = 0.0;
  local_26c = 0xffffff;
  local_278 = 0.0;
  local_2cc = 0xffffff;
  local_2d8 = 0.0;
  local_2dc = 0xffffff;
  local_2e8 = 0.0;
  uStack_24c = 0xffffff;
  local_258 = 0.0;
  uStack_25c = 0xffffff;
  local_268 = 0.0;
  local_318 = 0xffffff;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_31c = 0xffffff;
  local_328 = 0.0;
  local_32c = 0xffffff;
  local_338 = 0.0;
  local_33c = 0;
  local_348 = 0;
  local_304 = 0;
  local_310 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2a8 = 0x18c;
  pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57b70);
  if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
    dVar13 = *pdVar8;
  }
  else {
    dVar13 = (double)FUN_140e4b060(pdVar8);
  }
  uVar4 = FUN_140e4a740(pdVar8);
  puVar9 = (undefined8 *)FUN_140ea89f0(&local_348,uVar4,(longlong)dVar13);
  if (puVar9 != &local_2f8) {
    local_218 = *(undefined4 *)puVar9;
    uStack_214 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_210 = *(undefined4 *)(puVar9 + 1);
    uStack_20c = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    FUN_140041b80(&local_2f8,&local_218);
  }
  local_2a8 = 0x18d;
  if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  local_348 = 0;
  local_340 = 0;
  local_33c = 5;
  local_248 = (double *)&local_2f8;
  local_218 = _DAT_141dc75b0;
  uStack_214 = uRam0000000141dc75b4;
  uStack_210 = uRam0000000141dc75b8;
  uStack_20c = uRam0000000141dc75bc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_218);
  local_240 = &local_d8;
  local_218 = _DAT_141dc75b0;
  uStack_214 = uRam0000000141dc75b4;
  uStack_210 = uRam0000000141dc75b8;
  uStack_20c = uRam0000000141dc75bc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_218);
  local_238 = local_c8;
  uStack_2bc = *(undefined4 *)((longlong)pdVar8 + 0xc);
  uStack_2c0 = *(undefined4 *)(pdVar8 + 1);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) == 0) {
    local_2c8 = *pdVar8;
  }
  else {
    FUN_1400419b0(&local_2c8,pdVar8);
  }
  local_27c = 7;
  local_288 = CONCAT44(local_288._4_4_,1);
  FUN_1400462a0(&local_2c8,&local_288);
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_218 = (undefined4)local_2c8;
  uStack_214 = local_2c8._4_4_;
  uStack_210 = uStack_2c0;
  uStack_20c = uStack_2bc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_218);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_230 = local_b8;
  uStack_2bc = *(uint *)((longlong)pdVar8 + 0xc);
  uStack_2c0 = *(undefined4 *)(pdVar8 + 1);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) == 0) {
    local_2c8 = *pdVar8;
  }
  else {
    FUN_1400419b0(&local_2c8,pdVar8);
  }
  local_27c = 7;
  local_288 = CONCAT44(local_288._4_4_,1);
  FUN_1400462a0(&local_2c8,&local_288);
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_218 = (undefined4)local_2c8;
  uStack_214 = local_2c8._4_4_;
  uStack_210 = uStack_2c0;
  uStack_20c = uStack_2bc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_218);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_228 = local_a8;
  local_218 = _DAT_1419ed5f0;
  uStack_214 = uRam00000001419ed5f4;
  uStack_210 = uRam00000001419ed5f8;
  uStack_20c = uRam00000001419ed5fc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_218);
  local_220 = local_98;
  uVar11 = CONCAT44(uVar7,DAT_141a08858);
  FUN_140e634e0(param_1,param_2,&local_348,6,uVar11,&local_248);
  uVar7 = (undefined4)((ulonglong)uVar11 >> 0x20);
  local_2a8 = 399;
  if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  local_348 = 0;
  local_340 = 0;
  local_33c = 5;
  uVar11 = CONCAT44(uVar7,DAT_141a00038);
  pdVar8 = (double *)FUN_140e634e0(param_1,param_2,&local_348,0,uVar11,0);
  if (pdVar8 != &local_278) {
    local_218 = *(undefined4 *)pdVar8;
    uStack_214 = *(undefined4 *)((longlong)pdVar8 + 4);
    uStack_210 = *(undefined4 *)(pdVar8 + 1);
    uStack_20c = *(undefined4 *)((longlong)pdVar8 + 0xc);
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140041b80(&local_278,&local_218);
  }
  local_2a8 = 0x191;
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_2cc = 0;
  local_2d8 = 0.0;
  bVar1 = true;
LAB_140cf3924:
  if (bVar1) goto LAB_140cf3991;
  local_2a8 = 0x191;
  (**(code **)(*param_1 + 8))(param_1,DAT_141a57b70);
  uVar5 = local_2cc & 0xffffff;
  if (uVar5 != 0) {
    if (uVar5 == 1) {
      local_2d8 = (double)FUN_140e4b060(&local_2d8);
      local_2cc = 0;
    }
    else {
      if (uVar5 == 7) {
        local_2d8 = (double)CONCAT44(local_2d8._4_4_,local_2d8._0_4_ + 1);
        goto LAB_140cf3991;
      }
      if (uVar5 == 10) {
        local_2d8 = (double)((longlong)local_2d8 + 1);
        goto LAB_140cf3991;
      }
      if (uVar5 != 0xd) {
        FUN_140042910(&DAT_14172c3d8,&local_2d8,&local_2d8);
        goto LAB_140cf3991;
      }
      local_2cc = 0;
    }
  }
  local_2d8 = local_2d8 + 1.0;
LAB_140cf3991:
  bVar1 = false;
  uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b70);
  iVar6 = FUN_140e851f0(&local_2d8,uVar10,DAT_141955260,1);
  if ((iVar6 == -2) || (-1 < iVar6)) {
    local_2a8 = 0x19d;
    uVar7 = local_318;
    while( true ) {
      uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      local_348 = 0;
      local_340 = 0;
      local_33c = 5;
      uVar10 = CONCAT44(uVar4,DAT_1419fa568);
      local_248 = &local_278;
      uVar11 = FUN_140e634e0(param_1,param_2,&local_348,1,uVar10,&local_248);
      uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
      cVar3 = FUN_140e491e0(uVar11);
      if (cVar3 != '\0') break;
      local_2a8 = 0x19e;
      if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_310);
      }
      local_310 = 0;
      local_308 = 0;
      local_304 = 5;
      uVar11 = CONCAT44(uVar4,DAT_1419fff98);
      local_240 = &local_278;
      puVar9 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_310,1,uVar11,&local_240);
      uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
      if (puVar9 != &local_258) {
        local_298 = *(undefined4 *)puVar9;
        uStack_294 = *(undefined4 *)((longlong)puVar9 + 4);
        uStack_290 = *(undefined4 *)(puVar9 + 1);
        uStack_28c = *(uint *)((longlong)puVar9 + 0xc);
        if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        FUN_140041b80(&local_258,&local_298);
      }
      local_2a8 = 0x19f;
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      local_348 = 0;
      local_340 = 0;
      local_33c = 5;
      local_248 = &local_278;
      puVar9 = (undefined8 *)
               FUN_140e634e0(param_1,param_2,&local_348,1,CONCAT44(uVar4,DAT_1419fff98),&local_248);
      if (puVar9 != &local_268) {
        local_298 = *(undefined4 *)puVar9;
        uStack_294 = *(undefined4 *)((longlong)puVar9 + 4);
        uStack_290 = *(undefined4 *)(puVar9 + 1);
        uStack_28c = *(uint *)((longlong)puVar9 + 0xc);
        if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        FUN_140041b80(&local_268,&local_298);
      }
      local_2a8 = 0x1a0;
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      local_348 = 0;
      local_340 = 0;
      local_33c = 5;
      dVar13 = local_268;
      if ((uStack_25c & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_268);
      }
      dVar14 = local_258;
      if ((uStack_24c & 0xffffff) != 0) {
        dVar14 = (double)FUN_140e4b060(&local_258);
      }
      uVar4 = FUN_140e4a740(&local_2f8);
      puVar9 = (undefined8 *)FUN_140ea8b20(&local_348,uVar4,(longlong)dVar14,(longlong)dVar13);
      if (puVar9 != &local_208) {
        local_298 = *(undefined4 *)puVar9;
        uStack_294 = *(undefined4 *)((longlong)puVar9 + 4);
        uStack_290 = *(undefined4 *)(puVar9 + 1);
        uStack_28c = *(uint *)((longlong)puVar9 + 0xc);
        if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        FUN_140041b80(&local_208,&local_298);
        local_318 = local_1fc;
      }
      local_2a8 = 0x1a4;
      uStack_2bc = uStack_24c;
      uStack_2c0 = uStack_250;
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
        local_2c8 = local_258;
      }
      else {
        FUN_1400419b0(&local_2c8,&local_258);
      }
      local_18c = 7;
      local_198[0] = 1;
      FUN_1400460e0(&local_2c8,local_198);
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      local_298 = (undefined4)local_2c8;
      uStack_294 = local_2c8._4_4_;
      uStack_290 = uStack_2c0;
      uStack_28c = uStack_2bc;
      if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_328);
      }
      FUN_140041b80(&local_328,&local_298);
      if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_298 = (undefined4)local_268;
      uStack_294 = local_268._4_4_;
      uStack_290 = uStack_260;
      uStack_28c = uStack_25c;
      if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_338);
      }
      FUN_140041b80(&local_338,&local_298);
      local_2a8 = 0x1a5;
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      local_348 = 0;
      local_340 = 0;
      local_33c = 5;
      uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
      local_248 = &local_328;
      local_240 = &local_338;
      uVar10 = uVar11;
      uVar12 = FUN_140e63610(param_1,param_2,&local_348,2,uVar11,&local_248);
      uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
      cVar3 = FUN_140e491e0(uVar12);
      if (cVar3 != '\0') {
        if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_310);
        }
        local_310 = 0;
        local_308 = 0;
        local_304 = 5;
        dVar13 = local_338;
        if ((local_32c & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_338);
        }
        dVar14 = local_328;
        if ((local_31c & 0xffffff) != 0) {
          dVar14 = (double)FUN_140e4b060(&local_328);
        }
        uVar4 = FUN_140e4a740(&local_2f8);
        uVar10 = FUN_140ea8b20(&local_310,uVar4,(longlong)dVar14,(longlong)dVar13);
        local_17c = 0;
        local_188 = &DAT_bff0000000000000;
        iVar6 = FUN_140e851f0(uVar10,&local_188,DAT_141955260,0);
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        if (iVar6 == 0) {
          local_2a8 = 0x1a5;
          local_19c = local_318;
          if ((1 << ((byte)local_318 & 0x1f) & 0x46U) == 0) {
            local_1a8 = local_208;
          }
          else {
            FUN_1400419b0(&local_1a8,&local_208);
          }
          local_16c = 7;
          local_178[0] = 1;
          FUN_1400460e0(&local_1a8,local_178);
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_178);
          }
          dVar13 = local_338;
          if ((local_32c & 0xffffff) != 0) {
            dVar13 = (double)FUN_140e4b060(&local_338);
          }
          dVar14 = local_328;
          if ((local_31c & 0xffffff) != 0) {
            dVar14 = (double)FUN_140e4b060(&local_328);
          }
          dVar15 = local_2f8;
          if ((uStack_2ec & 0xffffff) != 0) {
            dVar15 = (double)FUN_140e4b060(&local_2f8);
          }
          FUN_140ea8d00((longlong)dVar15,(longlong)dVar14,(longlong)dVar13,&local_1a8);
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_348);
          }
          local_348 = 0;
          local_340 = 0;
          local_33c = 5;
          local_240 = &local_328;
          uVar10 = CONCAT44(uVar7,DAT_1419fffb8);
          local_248 = &local_278;
          FUN_140e634e0(param_1,param_2,&local_348,2,uVar10,&local_248);
          uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
          if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_348);
          }
          local_348 = 0;
          local_340 = 0;
          local_33c = 5;
          local_240 = &local_338;
          local_248 = &local_278;
          FUN_140e634e0(param_1,param_2,&local_348,2,CONCAT44(uVar7,DAT_1419fffb8),&local_248);
        }
      }
      local_2a8 = 0x1a7;
      uStack_1ac = uStack_24c;
      uStack_1b0 = uStack_250;
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
        local_1b8 = local_258;
      }
      else {
        FUN_1400419b0(&local_1b8,&local_258);
      }
      local_15c = 7;
      local_168[0] = 1;
      FUN_1400462a0(&local_1b8,local_168);
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_168);
      }
      local_298 = (undefined4)local_1b8;
      uStack_294 = local_1b8._4_4_;
      uStack_290 = uStack_1b0;
      uStack_28c = uStack_1ac;
      if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_328);
      }
      FUN_140041b80(&local_328,&local_298);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_298 = (undefined4)local_268;
      uStack_294 = local_268._4_4_;
      uStack_290 = uStack_260;
      uStack_28c = uStack_25c;
      if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_338);
      }
      FUN_140041b80(&local_338,&local_298);
      local_2a8 = 0x1a8;
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      local_348 = 0;
      local_340 = 0;
      local_33c = 5;
      local_248 = &local_328;
      local_240 = &local_338;
      uVar10 = uVar11;
      uVar12 = FUN_140e63610(param_1,param_2,&local_348,2,uVar11,&local_248);
      uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
      cVar3 = FUN_140e491e0(uVar12);
      if (cVar3 != '\0') {
        if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_310);
        }
        local_310 = 0;
        local_308 = 0;
        local_304 = 5;
        uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
        dVar13 = local_338;
        if ((local_32c & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_338);
        }
        dVar14 = local_328;
        if ((local_31c & 0xffffff) != 0) {
          dVar14 = (double)FUN_140e4b060(&local_328);
        }
        uVar4 = FUN_140e4a740(&local_2f8);
        uVar10 = FUN_140ea8b20(&local_310,uVar4,(longlong)dVar14,(longlong)dVar13);
        local_14c = 0;
        local_158 = &DAT_bff0000000000000;
        iVar6 = FUN_140e851f0(uVar10,&local_158,DAT_141955260,0);
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        if (iVar6 == 0) {
          local_2a8 = 0x1a8;
          local_1bc = local_318;
          if ((1 << ((byte)local_318 & 0x1f) & 0x46U) == 0) {
            local_1c8 = local_208;
          }
          else {
            FUN_1400419b0(&local_1c8,&local_208);
          }
          local_13c = 7;
          local_148[0] = 1;
          FUN_1400460e0(&local_1c8,local_148);
          if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_148);
          }
          dVar13 = local_338;
          if ((local_32c & 0xffffff) != 0) {
            dVar13 = (double)FUN_140e4b060(&local_338);
          }
          dVar14 = local_328;
          if ((local_31c & 0xffffff) != 0) {
            dVar14 = (double)FUN_140e4b060(&local_328);
          }
          dVar15 = local_2f8;
          if ((uStack_2ec & 0xffffff) != 0) {
            dVar15 = (double)FUN_140e4b060(&local_2f8);
          }
          FUN_140ea8d00((longlong)dVar15,(longlong)dVar14,(longlong)dVar13,&local_1c8);
          if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_348);
          }
          local_348 = 0;
          local_340 = 0;
          local_33c = 5;
          local_240 = &local_328;
          uVar10 = CONCAT44(uVar7,DAT_1419fffb8);
          local_248 = &local_278;
          FUN_140e634e0(param_1,param_2,&local_348,2,uVar10,&local_248);
          uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
          if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_348);
          }
          local_348 = 0;
          local_340 = 0;
          local_33c = 5;
          local_240 = &local_338;
          local_248 = &local_278;
          FUN_140e634e0(param_1,param_2,&local_348,2,CONCAT44(uVar7,DAT_1419fffb8),&local_248);
        }
      }
      local_2a8 = 0x1aa;
      local_298 = (undefined4)local_258;
      uStack_294 = local_258._4_4_;
      uStack_290 = uStack_250;
      uStack_28c = uStack_24c;
      if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_328);
      }
      FUN_140041b80(&local_328,&local_298);
      uStack_1cc = uStack_25c;
      uStack_1d0 = uStack_260;
      if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) == 0) {
        local_1d8 = local_268;
      }
      else {
        FUN_1400419b0(&local_1d8,&local_268);
      }
      local_12c = 7;
      local_138[0] = 1;
      FUN_1400460e0(&local_1d8,local_138);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      local_298 = (undefined4)local_1d8;
      uStack_294 = local_1d8._4_4_;
      uStack_290 = uStack_1d0;
      uStack_28c = uStack_1cc;
      if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_338);
      }
      FUN_140041b80(&local_338,&local_298);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_2a8 = 0x1ab;
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      local_348 = 0;
      local_340 = 0;
      local_33c = 5;
      local_248 = &local_328;
      local_240 = &local_338;
      uVar10 = uVar11;
      uVar12 = FUN_140e63610(param_1,param_2,&local_348,2,uVar11,&local_248);
      uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
      cVar3 = FUN_140e491e0(uVar12);
      if (cVar3 != '\0') {
        if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_310);
        }
        local_310 = 0;
        local_308 = 0;
        local_304 = 5;
        uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
        dVar13 = local_338;
        if ((local_32c & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_338);
        }
        dVar14 = local_328;
        if ((local_31c & 0xffffff) != 0) {
          dVar14 = (double)FUN_140e4b060(&local_328);
        }
        uVar4 = FUN_140e4a740(&local_2f8);
        uVar10 = FUN_140ea8b20(&local_310,uVar4,(longlong)dVar14,(longlong)dVar13);
        local_11c = 0;
        local_128 = &DAT_bff0000000000000;
        iVar6 = FUN_140e851f0(uVar10,&local_128,DAT_141955260,0);
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        if (iVar6 == 0) {
          local_2a8 = 0x1ab;
          local_1dc = local_318;
          if ((1 << ((byte)local_318 & 0x1f) & 0x46U) == 0) {
            local_1e8 = local_208;
          }
          else {
            FUN_1400419b0(&local_1e8,&local_208);
          }
          local_10c = 7;
          local_118[0] = 1;
          FUN_1400460e0(&local_1e8,local_118);
          if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_118);
          }
          dVar13 = local_338;
          if ((local_32c & 0xffffff) != 0) {
            dVar13 = (double)FUN_140e4b060(&local_338);
          }
          dVar14 = local_328;
          if ((local_31c & 0xffffff) != 0) {
            dVar14 = (double)FUN_140e4b060(&local_328);
          }
          dVar15 = local_2f8;
          if ((uStack_2ec & 0xffffff) != 0) {
            dVar15 = (double)FUN_140e4b060(&local_2f8);
          }
          FUN_140ea8d00((longlong)dVar15,(longlong)dVar14,(longlong)dVar13,&local_1e8);
          if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_348);
          }
          local_348 = 0;
          local_340 = 0;
          local_33c = 5;
          local_240 = &local_328;
          uVar10 = CONCAT44(uVar7,DAT_1419fffb8);
          local_248 = &local_278;
          FUN_140e634e0(param_1,param_2,&local_348,2,uVar10,&local_248);
          uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
          if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_348);
          }
          local_348 = 0;
          local_340 = 0;
          local_33c = 5;
          local_240 = &local_338;
          local_248 = &local_278;
          FUN_140e634e0(param_1,param_2,&local_348,2,CONCAT44(uVar7,DAT_1419fffb8),&local_248);
        }
      }
      local_2a8 = 0x1ad;
      local_298 = (undefined4)local_258;
      uStack_294 = local_258._4_4_;
      uStack_290 = uStack_250;
      uStack_28c = uStack_24c;
      if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_328);
      }
      FUN_140041b80(&local_328,&local_298);
      uStack_1ec = uStack_25c;
      uStack_1f0 = uStack_260;
      if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) == 0) {
        local_1f8 = local_268;
      }
      else {
        FUN_1400419b0(&local_1f8,&local_268);
      }
      local_fc = 7;
      local_108[0] = 1;
      FUN_1400462a0(&local_1f8,local_108);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      local_298 = (undefined4)local_1f8;
      uStack_294 = local_1f8._4_4_;
      uStack_290 = uStack_1f0;
      uStack_28c = uStack_1ec;
      if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_338);
      }
      FUN_140041b80(&local_338,&local_298);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_2a8 = 0x1ae;
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      local_348 = 0;
      local_340 = 0;
      local_33c = 5;
      local_248 = &local_328;
      local_240 = &local_338;
      uVar10 = FUN_140e63610(param_1,param_2,&local_348,2,uVar11,&local_248);
      cVar3 = FUN_140e491e0(uVar10);
      uVar7 = local_318;
      if (cVar3 != '\0') {
        if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_310);
        }
        local_310 = 0;
        local_308 = 0;
        local_304 = 5;
        (**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
        dVar13 = local_338;
        if ((local_32c & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_338);
        }
        dVar14 = local_328;
        if ((local_31c & 0xffffff) != 0) {
          dVar14 = (double)FUN_140e4b060(&local_328);
        }
        uVar7 = FUN_140e4a740(&local_2f8);
        uVar10 = FUN_140ea8b20(&local_310,uVar7,(longlong)dVar14,(longlong)dVar13);
        local_ec = 0;
        local_f8 = &DAT_bff0000000000000;
        iVar6 = FUN_140e851f0(uVar10,&local_f8,DAT_141955260,0);
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        uVar7 = local_318;
        uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
        if (iVar6 == 0) {
          local_2a8 = 0x1ae;
          local_27c = local_318;
          if ((1 << ((byte)local_318 & 0x1f) & 0x46U) == 0) {
            local_288 = local_208;
          }
          else {
            FUN_1400419b0(&local_288,&local_208);
          }
          uStack_20c = 7;
          local_218 = 1;
          FUN_1400460e0(&local_288,&local_218);
          if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_218);
          }
          dVar13 = local_338;
          if ((local_32c & 0xffffff) != 0) {
            dVar13 = (double)FUN_140e4b060(&local_338);
          }
          dVar14 = local_328;
          if ((local_31c & 0xffffff) != 0) {
            dVar14 = (double)FUN_140e4b060(&local_328);
          }
          dVar15 = local_2f8;
          if ((uStack_2ec & 0xffffff) != 0) {
            dVar15 = (double)FUN_140e4b060(&local_2f8);
          }
          FUN_140ea8d00((longlong)dVar15,(longlong)dVar14,(longlong)dVar13,&local_288);
          if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_348);
          }
          local_348 = 0;
          local_340 = 0;
          local_33c = 5;
          local_240 = &local_328;
          uVar11 = CONCAT44(uVar4,DAT_1419fffb8);
          local_248 = &local_278;
          FUN_140e634e0(param_1,param_2,&local_348,2,uVar11,&local_248);
          uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
          if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_348);
          }
          local_348 = 0;
          local_340 = 0;
          local_33c = 5;
          local_240 = &local_338;
          uVar11 = CONCAT44(uVar4,DAT_1419fffb8);
          local_248 = &local_278;
          FUN_140e634e0(param_1,param_2,&local_348,2,uVar11,&local_248);
        }
      }
    }
    local_2a8 = 0x1b1;
    if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_348);
    }
    local_348 = 0;
    local_340 = 0;
    local_33c = 5;
    local_248 = &local_278;
    FUN_140e634e0(param_1,param_2,&local_348,1,CONCAT44(uVar4,DAT_141a000b8),&local_248);
    local_2a8 = 0x1b2;
    if (&local_2f8 != param_3) {
      local_298 = (undefined4)local_2f8;
      uStack_294 = local_2f8._4_4_;
      uStack_290 = uStack_2f0;
      uStack_28c = uStack_2ec;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_298);
    }
    if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_310);
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
    if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    _eh_vector_destructor_iterator_(local_e8,0x10,6,FUN_140041b30);
    DAT_141dc7a50 = (undefined8 *)local_2b8;
    return param_3;
  }
  local_2a8 = 0x192;
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_2dc = 0;
  local_2e8 = 0.0;
  bVar2 = true;
  do {
    if (!bVar2) {
      local_2a8 = 0x192;
      uVar5 = local_2dc & 0xffffff;
      if (uVar5 != 0) {
        if (uVar5 != 1) {
          if (uVar5 == 7) {
            local_2e8 = (double)CONCAT44(local_2e8._4_4_,local_2e8._0_4_ + 1);
          }
          else if (uVar5 == 10) {
            local_2e8 = (double)((longlong)local_2e8 + 1);
          }
          else {
            if (uVar5 == 0xd) {
              local_2dc = 0;
              goto LAB_140cf3a6b;
            }
            FUN_140042910(&DAT_14172c3d8,&local_2e8,&local_2e8);
          }
          goto LAB_140cf3a75;
        }
        local_2e8 = (double)FUN_140e4b060(&local_2e8);
        local_2dc = 0;
      }
LAB_140cf3a6b:
      local_2e8 = local_2e8 + 1.0;
    }
LAB_140cf3a75:
    bVar2 = false;
    uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b70);
    iVar6 = FUN_140e851f0(&local_2e8,uVar10,DAT_141955260,1);
    if ((iVar6 == -2) || (-1 < iVar6)) goto LAB_140cf3924;
    local_2a8 = 0x194;
    if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_348);
    }
    local_348 = 0;
    local_340 = 0;
    local_33c = 5;
    uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
    local_248 = &local_2e8;
    local_240 = &local_2d8;
    uVar10 = FUN_140e63610(param_1,param_2,&local_348,2,uVar11,&local_248);
    cVar3 = FUN_140e491e0(uVar10);
    if (cVar3 == '\0') {
      local_2a8 = 0x194;
    }
    else {
      local_2a8 = 0x196;
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      local_348 = 0;
      local_340 = 0;
      local_33c = 5;
      uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fa438);
      local_248 = &local_2e8;
      local_240 = &local_2d8;
      uVar10 = FUN_140e63610(param_1,param_2,&local_348,2,uVar11,&local_248);
      local_27c = 0;
      local_288 = 0x4010000000000000;
      iVar6 = FUN_140e851f0(uVar10,&local_288,DAT_141955260,1);
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      uVar7 = (undefined4)((ulonglong)uVar11 >> 0x20);
      if (iVar6 != -2 && iVar6 < 0) {
        local_2a8 = 0x197;
        uStack_1ec = 0;
        local_1f8 = 0.0;
        dVar13 = local_2d8;
        if ((local_2cc & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_2d8);
        }
        dVar14 = local_2e8;
        if ((local_2dc & 0xffffff) != 0) {
          dVar14 = (double)FUN_140e4b060(&local_2e8);
        }
        dVar15 = local_2f8;
        if ((uStack_2ec & 0xffffff) != 0) {
          dVar15 = (double)FUN_140e4b060(&local_2f8);
        }
        FUN_140ea8d00((longlong)dVar15,(longlong)dVar14,(longlong)dVar13,&local_1f8);
        if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_2a8 = 0x198;
        if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_348);
        }
        local_348 = 0;
        local_340 = 0;
        local_33c = 5;
        local_240 = &local_2e8;
        uVar11 = CONCAT44(uVar7,DAT_1419fffb8);
        local_248 = &local_278;
        FUN_140e634e0(param_1,param_2,&local_348,2,uVar11,&local_248);
        uVar7 = (undefined4)((ulonglong)uVar11 >> 0x20);
        local_2a8 = 0x199;
        if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_348);
        }
        local_348 = 0;
        local_340 = 0;
        local_33c = 5;
        local_240 = &local_2d8;
        uVar11 = CONCAT44(uVar7,DAT_1419fffb8);
        local_248 = &local_278;
        FUN_140e634e0(param_1,param_2,&local_348,2,uVar11,&local_248);
      }
    }
  } while( true );
}

