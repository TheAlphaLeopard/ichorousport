// gml_Object_oFogWispSpawner_Step_0 @ 0x140ae9be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oFogWispSpawner_Step_0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined8 local_368;
  undefined4 local_360;
  undefined4 local_35c;
  double local_358;
  undefined4 local_350;
  uint local_34c;
  undefined8 local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  double local_338;
  undefined4 local_330;
  uint local_32c;
  undefined8 local_328;
  char *local_320;
  undefined4 local_318;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  uint uStack_2fc;
  undefined8 local_2f8;
  undefined4 local_2ec;
  ulonglong local_2e8;
  uint local_2dc;
  double local_2d8;
  undefined4 local_2d0;
  uint local_2cc;
  double local_2c8;
  undefined4 local_2c0;
  uint local_2bc;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 uStack_240;
  uint uStack_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  uint uStack_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  undefined8 local_218;
  undefined4 local_20c;
  undefined4 local_208 [3];
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  undefined4 local_1d8 [3];
  undefined4 local_1cc;
  undefined4 local_1c8 [3];
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 *local_1a8;
  double *local_1a0;
  double *local_198;
  undefined8 *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined4 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined4 *local_160;
  undefined4 *local_158;
  undefined8 local_148;
  byte local_13c;
  undefined1 local_f8 [16];
  undefined4 local_e8 [4];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined4 local_b8 [4];
  undefined4 local_a8 [28];
  
  local_320 = "gml_Object_oFogWispSpawner_Create_0";
  local_318 = 0;
  local_328 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_328;
  uVar13 = 1;
  _eh_vector_constructor_iterator_(&local_148,0x10,0xb,FUN_1400424d0,FUN_140041b30);
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f3058);
  local_2dc = 0xffffff;
  local_2e8 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_2ec = 0xffffff;
  local_2f8 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_32c = 0xffffff;
  local_338 = 0.0;
  local_34c = 0xffffff;
  local_358 = 0.0;
  puVar5 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f3138);
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_35c = 0xffffff;
  local_368 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_318 = 1;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3128);
  uVar7 = FUN_140e78f40(0x14,0x50);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = uVar7;
  local_318 = 2;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3128);
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3118);
  uVar7 = FUN_140e4a8b0(uVar7);
  uVar7 = FUN_140e78f40(0,uVar7);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = uVar7;
  local_318 = 3;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3108);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0x4028000000000000;
  local_318 = 4;
  puVar8 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f30f8);
  if (puVar8 != &DAT_141dd9308) {
    local_348 = CONCAT44(uRam0000000141dd930c,_DAT_141dd9308);
    uStack_340 = uRam0000000141dd9310;
    uStack_33c = DAT_141dd9314;
    if ((1 << ((byte)*(undefined4 *)(puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_348);
  }
  local_318 = 5;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4f28);
  FUN_140e609c0(param_1);
  uStack_33c = 0xf;
  local_348 = 0x100000100000031;
  if (&local_348 != puVar6) {
    local_2b8 = 0x100000100000031;
    uStack_2b0 = uStack_340;
    uStack_2ac = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_2b8);
  }
  FUN_140e60910(1);
  local_318 = 7;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f30c8);
  FUN_140e609c0(param_1);
  puVar9 = (undefined8 *)FUN_140e8da20(&local_1b8,param_1,0);
  if (puVar9 != puVar6) {
    local_348 = *puVar9;
    uStack_340 = *(undefined4 *)(puVar9 + 1);
    uStack_33c = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_348);
  }
  FUN_140e60910(1);
  local_318 = 8;
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = &DAT_bff0000000000000;
  local_318 = 9;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3148);
  FUN_140e85f80(param_1,DAT_1419fd4e8,0x80000000,&local_2e8);
  FUN_140e609c0(param_1);
  uVar12 = local_2e8;
  if ((local_2dc & 0xffffff) != 0) {
    uVar12 = FUN_140e4b060(&local_2e8);
  }
  uStack_33c = 0;
  local_348 = uVar12 ^ 0x8000000000000000;
  if (&local_348 != puVar4) {
    local_348._4_4_ = (undefined4)(local_348 >> 0x20);
    local_2b8 = CONCAT44(local_348._4_4_,(int)uVar12);
    uStack_2b0 = uStack_340;
    uStack_2ac = 0;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_2b8);
  }
  FUN_140e60910(1);
  local_318 = 10;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f30e8);
  FUN_140e85f80(param_1,DAT_1419fd4e8,0x80000000,&local_2e8);
  FUN_140e609c0(param_1);
  uVar12 = local_2e8;
  if ((local_2dc & 0xffffff) != 0) {
    uVar12 = FUN_140e4b060(&local_2e8);
  }
  uStack_33c = 0;
  local_348 = uVar12 ^ 0x8000000000000000;
  if (&local_348 != puVar4) {
    local_348._4_4_ = (undefined4)(local_348 >> 0x20);
    local_2b8 = CONCAT44(local_348._4_4_,(int)uVar12);
    uStack_2b0 = uStack_340;
    uStack_2ac = 0;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_2b8);
  }
  FUN_140e60910(1);
  local_318 = 0xc;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  local_368 = 0;
  local_360 = 0;
  local_35c = 5;
  local_348 = CONCAT44(uRam0000000141dd931c,_DAT_141dd9318);
  uStack_340 = uRam0000000141dd9320;
  uStack_33c = DAT_141dd9324;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_348);
  local_1a8 = &local_148;
  uVar7 = CONCAT44(uVar13,DAT_141a1c640);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_368,1,uVar7,&local_1a8);
  uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar4 != &local_258) {
    local_348 = *puVar4;
    uStack_340 = *(undefined4 *)(puVar4 + 1);
    uStack_33c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_348);
  }
  local_318 = 0xd;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  local_368 = 0;
  local_360 = 0;
  local_35c = 5;
  local_1a8 = &local_258;
  uVar7 = CONCAT44(uVar13,DAT_1419f70c8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_368,1,uVar7,&local_1a8);
  uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar4 != &local_2f8) {
    local_348 = *puVar4;
    uStack_340 = *(undefined4 *)(puVar4 + 1);
    uStack_33c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    FUN_140041b80(&local_2f8,&local_348);
  }
  local_318 = 0xe;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  local_368 = 0;
  local_360 = 0;
  local_35c = 5;
  local_1a8 = &local_2f8;
  uVar7 = CONCAT44(uVar13,DAT_141a036f8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_368,1,uVar7,&local_1a8);
  uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar4 != &local_268) {
    local_348 = *puVar4;
    uStack_340 = *(undefined4 *)(puVar4 + 1);
    uStack_33c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    FUN_140041b80(&local_268,&local_348);
  }
  local_318 = 0xf;
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  local_368 = 0;
  local_360 = 0;
  local_35c = 5;
  local_1a8 = &local_2f8;
  uVar7 = CONCAT44(uVar13,DAT_141a036c8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_368,1,uVar7,&local_1a8);
  if (puVar4 != &local_278) {
    local_348 = *puVar4;
    uStack_340 = *(undefined4 *)(puVar4 + 1);
    uStack_33c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140041b80(&local_278,&local_348);
  }
  local_318 = 0x11;
  if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  local_32c = 0;
  local_338 = 0.0;
  bVar1 = true;
LAB_140aea3f0:
  if (bVar1) goto LAB_140aea455;
  local_318 = 0x11;
  uVar2 = local_32c & 0xffffff;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      local_338 = (double)FUN_140e4b060(&local_338);
      local_338 = local_338 + 1.0;
      local_32c = 0;
      goto LAB_140aea455;
    }
    if (uVar2 == 7) {
      local_338 = (double)CONCAT44(local_338._4_4_,local_338._0_4_ + 1);
      goto LAB_140aea455;
    }
    if (uVar2 == 10) {
      local_338 = (double)((longlong)local_338 + 1);
      goto LAB_140aea455;
    }
    if (uVar2 != 0xd) {
      FUN_140042910(&DAT_14172c3d8,&local_338,&local_338);
      goto LAB_140aea455;
    }
    local_32c = 0;
  }
  local_338 = local_338 + 1.0;
LAB_140aea455:
  iVar3 = FUN_140e851f0(&local_338,&local_268,DAT_141955260,1);
  if ((iVar3 == -2) || (-1 < iVar3)) {
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_338);
    }
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    _eh_vector_destructor_iterator_(&local_148,0x10,0xb,FUN_140041b30);
    DAT_141dc7a50 = (undefined8 *)local_328;
    return;
  }
  local_318 = 0x12;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_34c = 0;
  local_358 = 3.0;
  bVar1 = true;
  do {
    if (!bVar1) {
      local_318 = 0x12;
      uVar2 = local_34c & 0xffffff;
      if (uVar2 != 0) {
        if (uVar2 != 1) {
          if (uVar2 == 7) {
            local_358 = (double)CONCAT44(local_358._4_4_,local_358._0_4_ + 1);
          }
          else if (uVar2 == 10) {
            local_358 = (double)((longlong)local_358 + 1);
          }
          else {
            if (uVar2 == 0xd) {
              local_34c = 0;
              goto LAB_140aea53f;
            }
            FUN_140042910(&DAT_14172c3d8,&local_358,&local_358);
          }
          goto LAB_140aea549;
        }
        local_358 = (double)FUN_140e4b060(&local_358);
        local_34c = 0;
      }
LAB_140aea53f:
      local_358 = local_358 + 1.0;
    }
LAB_140aea549:
    bVar1 = false;
    iVar3 = FUN_140e851f0(&local_358,&local_278,DAT_141955260,1);
    uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((iVar3 == -2) || (-1 < iVar3)) break;
    local_318 = 0x13;
    if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    local_368 = 0;
    local_360 = 0;
    local_35c = 5;
    local_1a8 = &local_2f8;
    local_1a0 = &local_338;
    local_198 = &local_358;
    uVar7 = CONCAT44(uVar13,DAT_141a036b8);
    uVar10 = FUN_140e634e0(param_1,param_2,&local_368,3,uVar7,&local_1a8);
    local_20c = 0;
    local_218 = 0;
    iVar3 = FUN_140e851f0(uVar10,&local_218,DAT_141955260,0);
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (iVar3 != 0) {
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_288 = 0;
      local_280 = 0;
      local_27c = 5;
      local_190 = &local_2f8;
      local_188 = &local_338;
      uStack_23c = local_34c;
      uStack_240 = local_350;
      if ((1 << ((byte)local_34c & 0x1f) & 0x46U) == 0) {
        local_248 = local_358;
      }
      else {
        FUN_1400419b0(&local_248,&local_358);
      }
      local_1fc = 7;
      local_208[0] = 1;
      FUN_1400462a0(&local_248,local_208);
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_208);
      }
      local_308 = (undefined4)local_248;
      uStack_304 = local_248._4_4_;
      uStack_300 = uStack_240;
      uStack_2fc = uStack_23c;
      if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_308);
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_180 = local_f8;
      uVar7 = CONCAT44(uVar13,DAT_141a036b8);
      uVar10 = FUN_140e634e0(param_1,param_2,&local_288,3,uVar7,&local_190);
      local_1ec = 0;
      local_1f8 = 0;
      iVar3 = FUN_140e851f0(uVar10,&local_1f8,DAT_141955260,0);
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
      if (iVar3 == 0) {
        local_318 = 0x14;
        if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        local_298 = 0;
        local_290 = 0;
        local_28c = 5;
        if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        local_2a8 = 0;
        local_2a0 = 0;
        local_29c = 5;
        puVar11 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f30c8);
        FUN_140e609c0(DAT_141a729d8);
        FUN_140e645a0(&local_1e8,gml_Object_oFogWispSpawner_Draw_0,0);
        if (&local_1e8 != puVar5) {
          local_308 = local_1e8;
          uStack_304 = uStack_1e4;
          uStack_300 = uStack_1e0;
          uStack_2fc = uStack_1dc;
          if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_308);
        }
        FUN_140e60910(1);
        if (puVar5 != local_e8) {
          local_308 = *puVar5;
          uStack_304 = puVar5[1];
          uStack_300 = puVar5[2];
          uStack_2fc = puVar5[3];
          if ((1 << ((byte)local_e8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_e8);
          }
          FUN_140041b80(local_e8,&local_308);
        }
        if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_178 = local_e8;
        local_2cc = local_32c;
        local_2d0 = local_330;
        if ((1 << ((byte)local_32c & 0x1f) & 0x46U) == 0) {
          local_2d8 = local_338;
        }
        else {
          FUN_1400419b0(&local_2d8,&local_338);
        }
        local_1cc = 7;
        local_1d8[0] = 0x10;
        FUN_140042560(&local_2d8,local_1d8);
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1d8);
        }
        uStack_22c = local_2cc;
        uStack_230 = local_2d0;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) == 0) {
          local_238 = local_2d8;
        }
        else {
          FUN_1400419b0(&local_238,&local_2d8);
        }
        local_1bc = 7;
        local_1c8[0] = 8;
        FUN_1400460e0(&local_238,local_1c8);
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1c8);
        }
        local_308 = (undefined4)local_238;
        uStack_304 = local_238._4_4_;
        uStack_300 = uStack_230;
        uStack_2fc = uStack_22c;
        if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_308);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_170 = local_d8;
        uVar7 = FUN_140e794b0(0x9999999a,0x9999999a);
        local_2bc = local_34c;
        local_2c0 = local_350;
        if ((1 << ((byte)local_34c & 0x1f) & 0x46U) == 0) {
          local_2c8 = local_358;
        }
        else {
          FUN_1400419b0(&local_2c8,&local_358);
        }
        uStack_2ac = 0;
        local_2b8 = uVar7;
        FUN_1400462a0(&local_2c8,&local_2b8);
        if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        uStack_21c = local_2bc;
        uStack_220 = local_2c0;
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) == 0) {
          local_228 = local_2c8;
        }
        else {
          FUN_1400419b0(&local_228,&local_2c8);
        }
        uStack_33c = 7;
        local_348 = CONCAT44(local_348._4_4_,0x10);
        FUN_140042560(&local_228,&local_348);
        if ((1 << ((byte)uStack_33c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_348);
        }
        local_308 = (undefined4)local_228;
        uStack_304 = local_228._4_4_;
        uStack_300 = uStack_220;
        uStack_2fc = uStack_21c;
        if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_308);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        local_168 = local_c8;
        if (puVar11 != local_b8) {
          local_308 = *puVar11;
          uStack_304 = puVar11[1];
          uStack_300 = puVar11[2];
          uStack_2fc = puVar11[3];
          if ((1 << ((byte)local_b8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_b8);
          }
          FUN_140041b80(local_b8,&local_308);
        }
        local_160 = local_b8;
        uVar7 = CONCAT44(uVar13,DAT_1419fd6d8);
        puVar11 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_2a8,3,uVar7,&local_178);
        uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
        if (puVar11 != local_a8) {
          local_308 = *puVar11;
          uStack_304 = puVar11[1];
          uStack_300 = puVar11[2];
          uStack_2fc = puVar11[3];
          if ((1 << ((byte)local_a8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_a8);
          }
          FUN_140041b80(local_a8,&local_308);
        }
        local_158 = local_a8;
        uVar7 = CONCAT44(uVar13,DAT_1419fe568);
        FUN_140e634e0(param_1,param_2,&local_298,2,uVar7,&local_160);
      }
    }
  } while( true );
  bVar1 = false;
  goto LAB_140aea3f0;
}

