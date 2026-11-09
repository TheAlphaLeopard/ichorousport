// gml_Script_anon_1077_ThrowAnimQueue_ALTWEAPONSINIT @ 0x140212a20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1077_ThrowAnimQueue_ALTWEAPONSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined4 uVar9;
  ulonglong uVar8;
  undefined8 **ppuVar10;
  ulonglong uVar11;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined8 local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  char *local_2f0;
  undefined4 local_2e8;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
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
  undefined8 local_278;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_21c;
  undefined8 local_218;
  byte local_20c;
  undefined1 local_208 [12];
  byte local_1fc;
  undefined1 local_1f8 [16];
  undefined8 local_1e8 [2];
  undefined8 local_1d8;
  byte local_1cc;
  undefined8 local_1c8;
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  longlong *local_138;
  undefined4 local_12c;
  undefined8 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [16];
  longlong local_c8;
  undefined1 local_b8 [16];
  longlong local_a8;
  
  local_318 = 0;
  local_2f0 = "gml_Script_add_hit_combo";
  local_2f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2f8;
  local_2e8 = 0x12;
  uVar9 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(&local_218,0x10,8,FUN_1400424d0,FUN_140041b30);
  uVar7 = 0xffffff;
  local_2c8 = 0xffffff;
  local_15c = 0xffffff;
  local_168 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  uStack_18c = 0xffffff;
  local_198 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_31c = 0;
  local_328 = 0;
  local_29c = 0;
  local_2a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2e8 = 0x13;
  uStack_2ac = 0xf;
  local_2b8 = (longlong *)0x1000000000000b9;
  local_308 = 0x1000000000000b9;
  uStack_300 = uStack_2b0;
  uStack_2fc = 0xf;
  if ((1 << ((byte)local_1e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_308);
  local_110 = local_1e8;
  ppuVar10 = &local_110;
  uVar8 = CONCAT44(uVar9,DAT_141a02ef8);
  uVar3 = FUN_140e634e0(local_res8,local_res10,&local_328,1,uVar8,ppuVar10);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') goto LAB_140212e19;
  local_2e8 = 0x14;
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  uVar9 = (undefined4)(uVar8 >> 0x20);
  local_2a8 = 0;
  local_2a0 = 0;
  local_29c = 5;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140212c5f:
    local_308 = *puVar4;
    uStack_300 = *(undefined4 *)(puVar4 + 1);
    uStack_2fc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_308);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_1d8) goto LAB_140212c5f;
  }
  local_108 = &local_1d8;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
LAB_140212cc2:
    local_308 = *puVar4;
    uStack_300 = *(undefined4 *)(puVar4 + 1);
    uStack_2fc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_308);
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
    if (puVar4 != &local_1c8) goto LAB_140212cc2;
  }
  local_100 = &local_1c8;
  local_308 = CONCAT44(uRam0000000141dcdc4c,_DAT_141dcdc48);
  uStack_300 = uRam0000000141dcdc50;
  uStack_2fc = DAT_141dcdc54;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_308);
  local_f8 = local_1b8;
  uStack_2ac = 0xf;
  local_2b8 = (longlong *)0x1000000000000b9;
  local_308 = 0x1000000000000b9;
  uStack_300 = uStack_2b0;
  uStack_2fc = 0xf;
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_308);
  local_f0 = local_1a8;
  ppuVar10 = &local_108;
  uVar8 = CONCAT44(uVar9,DAT_141a0a7c8);
  puVar4 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_2a8,4,uVar8,ppuVar10);
  if (puVar4 != &local_168) {
    local_308 = *puVar4;
    uStack_300 = *(undefined4 *)(puVar4 + 1);
    uStack_2fc = *(undefined4 *)((longlong)puVar4 + 0xc);
    FUN_140041b80(&local_168,&local_308);
    local_2c8 = local_15c;
    uVar7 = local_15c;
  }
LAB_140212e19:
  local_2e8 = 0x18;
  uStack_2cc = 0xf;
  local_2d8 = 0x1000000000000b9;
  iVar2 = FUN_140e63cb0(local_d8,&local_res8,&local_res10,&local_2d8);
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if (iVar2 < 1) {
  }
  else {
    do {
      local_2e8 = 0x19;
      uVar3 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7d8);
      FUN_140e609c0(local_res8);
      if (param_4 < 3) {
        puVar4 = &DAT_1419df7b0;
      }
      else {
        puVar4 = (undefined8 *)param_5[2];
      }
      FUN_1400460e0(uVar3,puVar4);
      FUN_140e60910(1);
      local_2e8 = 0x1a;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7d8);
      if (puVar4 != &local_268) {
        local_338 = *(undefined4 *)puVar4;
        uStack_334 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_330 = *(undefined4 *)(puVar4 + 1);
        uStack_32c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        FUN_140041b80(&local_268,&local_338);
      }
      local_14c = 0xf;
      local_158 = 0x1000000000000ee;
      FUN_140e87930(&local_158,DAT_141a0a738,0x80000000,&local_268);
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_2e8 = 0x1c;
      if (param_4 < 1) {
        puVar4 = &DAT_1419df7b0;
      }
      else {
        puVar4 = (undefined8 *)*param_5;
      }
      uVar7 = FUN_140e794b0(0,0);
      uStack_24c = *(undefined4 *)((longlong)puVar4 + 0xc);
      uStack_250 = *(undefined4 *)(puVar4 + 1);
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
        local_258 = *puVar4;
      }
      else {
        FUN_1400419b0(&local_258,puVar4);
      }
      local_318 = 1;
      FUN_140162c50(&local_258,uVar7);
      local_338 = (undefined4)local_258;
      uStack_334 = local_258._4_4_;
      uStack_330 = uStack_250;
      uStack_32c = uStack_24c;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_338);
      local_318 = 0;
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_228);
      local_2e8 = 0x1d;
      if (param_4 < 2) {
        puVar4 = &DAT_1419df7b0;
      }
      else {
        puVar4 = (undefined8 *)param_5[1];
      }
      uVar7 = FUN_140e794b0(0,0);
      uStack_2cc = *(undefined4 *)((longlong)puVar4 + 0xc);
      uStack_2d0 = *(undefined4 *)(puVar4 + 1);
      if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) == 0) {
        local_2d8 = *puVar4;
      }
      else {
        FUN_1400419b0(&local_2d8,puVar4);
      }
      local_318 = 2;
      FUN_140162c50(&local_2d8,uVar7);
      local_338 = (undefined4)local_2d8;
      uStack_334 = local_2d8._4_4_;
      uStack_330 = uStack_2d0;
      uStack_32c = uStack_2cc;
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_338);
      local_318 = 0;
      if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_238);
      local_2e8 = 0x1e;
      local_13c = 0xf;
      local_148 = 0x100000000000058;
      ppuVar10 = (undefined8 **)((ulonglong)ppuVar10 & 0xffffffffffffff00);
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(&local_148,DAT_141a0a758,0x80000000,&local_178,uVar8,ppuVar10);
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      cVar1 = FUN_140e491e0(&local_178);
      if (cVar1 != '\0') {
        local_2e8 = 0x20;
        if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_328);
        }
        local_328 = 0;
        local_320 = 0;
        local_31c = 5;
        local_12c = 6;
        local_138 = local_res8;
        uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
        uVar8 = uVar8 & 0xffffffffffffff00;
        FUN_140e87440(&local_138,DAT_1419fe0e8,0x80000000,&local_188,uVar8,uVar11);
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        uStack_2ac = 6;
        local_2b8 = local_res8;
        uVar8 = uVar8 & 0xffffffffffffff00;
        FUN_140e87440(&local_2b8,DAT_1419fe158,0x80000000,&local_198,uVar8,
                      uVar11 & 0xffffffffffffff00);
        uVar7 = (undefined4)(uVar8 >> 0x20);
        if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        local_338 = (undefined4)local_188;
        uStack_334 = local_188._4_4_;
        uStack_330 = uStack_180;
        uStack_32c = uStack_17c;
        if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        FUN_140041b80(&local_218,&local_338);
        local_128 = &local_218;
        local_338 = (undefined4)local_198;
        uStack_334 = local_198._4_4_;
        uStack_330 = uStack_190;
        uStack_32c = uStack_18c;
        if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_208);
        }
        FUN_140041b80(local_208,&local_338);
        local_120 = local_208;
        local_338 = _DAT_141dcdc38;
        uStack_334 = uRam0000000141dcdc3c;
        uStack_330 = uRam0000000141dcdc40;
        uStack_32c = DAT_141dcdc44;
        if ((1 << (local_1f8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1f8);
        }
        FUN_140041b80(local_1f8,&local_338);
        local_118 = local_1f8;
        uStack_dc = 0xf;
        local_e8 = 0x10000000000012d;
        local_338 = 0x12d;
        uStack_334 = 0x1000000;
        uStack_330 = uStack_e0;
        uStack_32c = 0xf;
        if ((1 << ((byte)local_1e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_338);
        local_110 = local_1e8;
        ppuVar10 = &local_128;
        uVar8 = CONCAT44(uVar7,DAT_141a0a7c8);
        uVar3 = FUN_140e634e0(local_res8,local_res10,&local_328,4,uVar8,ppuVar10);
        iVar2 = FUN_140e63cb0(local_b8,&local_res8,&local_res10,uVar3);
        if (0 < iVar2) {
          do {
            local_2e8 = 0x22;
            uStack_2fc = 0xf;
            local_308 = 0x100000100000308;
            local_338 = 0x308;
            uStack_334 = 0x1000001;
            uStack_330 = uStack_300;
            uStack_32c = 0xf;
            if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_248);
            }
            FUN_140041b80(&local_248,&local_338);
            FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_248);
            local_2e8 = 0x23;
            uVar3 = FUN_140e79480(0);
            if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_278);
            }
            local_26c = 0;
            local_278 = uVar3;
            FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_278);
            local_2e8 = 0x24;
            if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            local_27c = 0;
            local_288 = 0x3ff0000000000000;
            FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_288);
            cVar1 = FUN_140e643f0(local_b8,&local_res8,&local_res10);
          } while (cVar1 != '\0');
        }
        FUN_140e63970(local_b8,&local_res8,&local_res10);
        if (local_a8 != 0) {
          FUN_140e4cd60();
        }
      }
      local_2e8 = 0x29;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *puVar4 = 0;
      local_2e8 = 0x2a;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a748);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *puVar4 = 0x3ff0000000000000;
      local_2e8 = 0x2b;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a858);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *puVar4 = 0x3ff0000000000000;
      local_2e8 = 0x2c;
      if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_328);
      }
      local_328 = 0;
      local_320 = 0;
      local_31c = 5;
      puVar5 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
      local_338 = _DAT_1419e3690;
      uStack_334 = uRam00000001419e3694;
      uStack_330 = uRam00000001419e3698;
      uStack_32c = uRam00000001419e369c;
      if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_338);
      local_128 = &local_218;
      local_338 = _DAT_1419e36a0;
      uStack_334 = uRam00000001419e36a4;
      uStack_330 = uRam00000001419e36a8;
      uStack_32c = uRam00000001419e36ac;
      if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_208);
      }
      FUN_140041b80(local_208,&local_338);
      local_120 = local_208;
      FUN_140e609c0(local_res8);
      puVar6 = (undefined4 *)FUN_140e78db0(&local_328,2,&local_128);
      if (puVar6 != puVar5) {
        local_338 = *puVar6;
        uStack_334 = puVar6[1];
        uStack_330 = puVar6[2];
        uStack_32c = puVar6[3];
        if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_338);
      }
      FUN_140e60910(1);
      local_2e8 = 0x2d;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a718);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *puVar4 = 0x3ff0000000000000;
      local_2e8 = 0x2f;
      if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      local_28c = 0;
      local_298 = 0x4049000000000000;
      FUN_140e86fa0(local_res8,DAT_141a0a7e8,0,&local_298);
      cVar1 = FUN_140e643f0(local_d8,&local_res8,&local_res10);
    } while (cVar1 != '\0');
    param_3 = local_res18;
    uVar7 = local_2c8;
  }
  uVar9 = (undefined4)(uVar8 >> 0x20);
  FUN_140e63970(local_d8,&local_res8,&local_res10);
  local_2e8 = 0x32;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_328 = 0;
  local_320 = 0;
  local_31c = 5;
  uStack_2fc = 0xf;
  local_308 = 0x1000000000000b9;
  local_338 = 0xb9;
  uStack_334 = 0x1000000;
  uStack_330 = uStack_300;
  uStack_32c = 0xf;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_338);
  local_128 = &local_218;
  local_338 = _DAT_141dc62d0;
  uStack_334 = uRam0000000141dc62d4;
  uStack_330 = uRam0000000141dc62d8;
  uStack_32c = uRam0000000141dc62dc;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_338);
  local_120 = local_208;
  puVar4 = (undefined8 *)
           FUN_140e634e0(local_res8,local_res10,&local_328,2,CONCAT44(uVar9,DAT_141a0a7b8),
                         &local_128);
  if (puVar4 != param_3) {
    local_338 = *(undefined4 *)puVar4;
    uStack_334 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_330 = *(undefined4 *)(puVar4 + 1);
    uStack_32c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_338);
  }
  if (local_c8 != 0) {
    FUN_140e4cd60();
    local_c8 = 0;
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(&local_218,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_2f8;
  return param_3;
}

