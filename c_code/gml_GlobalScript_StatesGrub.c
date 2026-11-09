// gml_GlobalScript_StatesGrub @ 0x14051e0b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript_StatesGrub
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  code *pcVar14;
  undefined4 uVar18;
  ulonglong uVar15;
  undefined1 **ppuVar16;
  undefined8 **ppuVar17;
  ulonglong uVar19;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  longlong *local_388;
  undefined4 local_37c;
  undefined8 local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined1 *local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  byte local_33c;
  undefined8 local_338;
  byte local_32c;
  undefined8 local_328;
  byte local_31c;
  undefined1 local_318 [16];
  undefined4 local_308 [4];
  undefined8 local_2f8;
  byte local_2ec;
  undefined8 local_2e8;
  char *local_2e0;
  undefined4 local_2d8;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined8 *local_298;
  undefined8 *local_290;
  undefined8 *local_288;
  undefined1 *local_280;
  undefined4 *local_278;
  undefined8 *local_270;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined8 local_240;
  undefined4 local_234;
  undefined8 local_230;
  undefined4 local_224;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined4 local_1d4;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  undefined4 local_15c;
  longlong *local_158;
  undefined4 local_14c;
  undefined4 local_148 [3];
  undefined4 local_13c;
  longlong *local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_fc;
  longlong *local_f8;
  undefined4 local_ec;
  longlong *local_e8;
  undefined4 local_dc;
  undefined4 local_d8 [3];
  undefined4 local_cc;
  undefined8 local_c8;
  
  uVar12 = 0;
  local_2e0 = "gml_Script_StatesClotAtk";
  local_2e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2e8;
  local_2d8 = 0xdb;
  pcVar14 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_348,0x10,6,FUN_1400424d0,FUN_140041b30);
  uVar13 = 0xffffff;
  local_248 = 0xffffff;
  uStack_24c = 0xffffff;
  local_258 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_234 = 0xffffff;
  local_240 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_224 = 0xffffff;
  local_230 = 0;
  local_1f4 = 0xffffff;
  local_200 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  local_1e4 = 0xffffff;
  local_1f0 = 0;
  local_1d4 = 0xffffff;
  local_1e0 = 0;
  local_c8 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_17c = 0xffffff;
  local_188 = 0;
  local_39c = 0;
  local_3a8 = 0;
  local_2ac = 0;
  local_2b8 = 0;
  local_214 = 0;
  local_220 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2d8 = 0xdd;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_1ac = *(undefined4 *)((longlong)param_5 + 0xc);
  local_1b0 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
    local_1b8 = *param_5;
  }
  else {
    FUN_1400419b0(&local_1b8);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf538) &&
     (_Init_thread_header(&DAT_141ddf538), DAT_141ddf538 == -1)) {
    _DAT_141ddf5fc = 0;
    _DAT_141ddf5f0 = 0x4000000000000000;
    _DAT_141ddf610 = 0;
    _DAT_141ddf604 = 0;
    _DAT_141ddf614 = 1;
    _DAT_141ddf624 = 0;
    _DAT_141ddf618 = 0x3ff0000000000000;
    _DAT_141ddf628 = 2;
    _DAT_141ddf638 = 0;
    _DAT_141ddf62c = 0x4008000000000000;
    _DAT_141ddf63c = 3;
    atexit((_func_5014 *)&LAB_141481740);
    _Init_thread_footer(&DAT_141ddf538);
  }
  do {
    iVar4 = FUN_140e851f0(&DAT_141ddf5f0 + (longlong)(int)uVar12 * 0x14,&local_1b8,DAT_141955260,0);
    uVar18 = (undefined4)((ulonglong)pcVar14 >> 0x20);
    if (iVar4 == 0) {
      iVar4 = (&DAT_141ddf600)[(longlong)(int)uVar12 * 5];
      if (iVar4 == 0) {
        local_2d8 = 0xe1;
        puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = 0xc014000000000000;
        local_2d8 = 0xe2;
        if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3a8);
        }
        local_3a8 = 0;
        local_3a0 = 0;
        local_39c = 5;
        puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
        if (puVar7 != &local_348) {
          local_398 = *(undefined4 *)puVar7;
          uStack_394 = *(undefined4 *)((longlong)puVar7 + 4);
          uStack_390 = *(undefined4 *)(puVar7 + 1);
          uStack_38c = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << (local_33c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_348);
          }
          FUN_140041b80(&local_348,&local_398);
        }
        local_298 = &local_348;
        local_398 = _DAT_141dd3d98;
        uStack_394 = uRam0000000141dd3d9c;
        uStack_390 = uRam0000000141dd3da0;
        uStack_38c = DAT_141dd3da4;
        if ((1 << (local_32c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_338);
        }
        FUN_140041b80(&local_338,&local_398);
        local_290 = &local_338;
        local_398 = _DAT_1419df7a0;
        uStack_394 = uRam00000001419df7a4;
        uStack_390 = uRam00000001419df7a8;
        uStack_38c = uRam00000001419df7ac;
        if ((1 << (local_31c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_328);
        }
        FUN_140041b80(&local_328,&local_398);
        local_288 = &local_328;
        uVar6 = CONCAT44(uVar18,DAT_1419ff3d8);
        FUN_140e634e0(param_1,param_2,&local_3a8,3,uVar6,&local_298);
        uVar18 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_2d8 = 0xe3;
        if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3a8);
        }
        local_3a8 = 0;
        local_3a0 = 0;
        local_39c = 5;
        if (puVar7 != &local_348) {
          local_398 = *(undefined4 *)puVar7;
          uStack_394 = *(undefined4 *)((longlong)puVar7 + 4);
          uStack_390 = *(undefined4 *)(puVar7 + 1);
          uStack_38c = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << (local_33c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_348);
          }
          FUN_140041b80(&local_348,&local_398);
        }
        local_298 = &local_348;
        local_398 = _DAT_141dd3da8;
        uStack_394 = uRam0000000141dd3dac;
        uStack_390 = uRam0000000141dd3db0;
        uStack_38c = DAT_141dd3db4;
        if ((1 << (local_32c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_338);
        }
        FUN_140041b80(&local_338,&local_398);
        local_290 = &local_338;
        local_398 = _DAT_1419df7a0;
        uStack_394 = uRam00000001419df7a4;
        uStack_390 = uRam00000001419df7a8;
        uStack_38c = uRam00000001419df7ac;
        if ((1 << (local_31c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_328);
        }
        FUN_140041b80(&local_328,&local_398);
        local_288 = &local_328;
        FUN_140e634e0(param_1,param_2,&local_3a8,3,CONCAT44(uVar18,DAT_1419ff3d8),&local_298);
        local_2d8 = 0xe5;
      }
      else if (iVar4 == 1) {
        local_2d8 = 0xe9;
        if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3a8);
        }
        local_3a8 = 0;
        local_3a0 = 0;
        local_39c = 5;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd3b8);
        local_358 = CONCAT44(uRam0000000141dc66c4,_DAT_141dc66c0);
        uStack_350 = uRam0000000141dc66c8;
        uStack_34c = uRam0000000141dc66cc;
        if ((1 << ((byte)_local_33c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_348);
        }
        FUN_140041b80(&local_348,&local_358);
        local_298 = &local_348;
        uVar9 = CONCAT44(uVar18,DAT_141a0a0d8);
        puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_3a8,1,uVar9,&local_298);
        uVar13 = (undefined4)((ulonglong)uVar9 >> 0x20);
        uStack_2bc = *(undefined4 *)((longlong)puVar7 + 0xc);
        uStack_2c0 = *(undefined4 *)(puVar7 + 1);
        if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) == 0) {
          local_2c8 = *puVar7;
        }
        else {
          FUN_1400419b0(&local_2c8,puVar7);
        }
        local_37c = 0;
        local_388 = (longlong *)0x3fe8000000000000;
        FUN_140042560(&local_2c8,&local_388);
        if ((1 << ((byte)local_37c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_388);
        }
        uVar12 = FUN_140e851f0(uVar6,&local_2c8,DAT_141955260,1);
        if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        if (uVar12 < 0x80000000) {
          local_2d8 = 0xeb;
          if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          local_2b8 = 0;
          local_2b0 = 0;
          local_2ac = 5;
          puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
          if (puVar7 != &local_338) {
            local_358 = *puVar7;
            uStack_350 = *(undefined4 *)(puVar7 + 1);
            uStack_34c = *(undefined4 *)((longlong)puVar7 + 0xc);
            if ((1 << ((byte)_local_32c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_338);
            }
            FUN_140041b80(&local_338,&local_358);
          }
          local_290 = &local_338;
          local_358 = CONCAT44(uRam0000000141dd3dac,_DAT_141dd3da8);
          uStack_350 = uRam0000000141dd3db0;
          uStack_34c = DAT_141dd3db4;
          if ((1 << ((byte)_local_31c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_328);
          }
          FUN_140041b80(&local_328,&local_358);
          local_288 = &local_328;
          uVar9 = CONCAT44(uVar13,DAT_1419ff4f8);
          uVar6 = FUN_140e634e0(param_1,param_2,&local_2b8,2,uVar9,&local_290);
          uVar13 = (undefined4)((ulonglong)uVar9 >> 0x20);
          cVar3 = FUN_140e491e0(uVar6);
          if (cVar3 == '\0') {
            local_2d8 = 0xed;
            puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd448);
            puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
            FUN_140e609c0(param_1);
            uStack_2bc = *(undefined4 *)((longlong)puVar7 + 0xc);
            uStack_2c0 = *(undefined4 *)(puVar7 + 1);
            if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) == 0) {
              local_2c8 = *puVar7;
            }
            else {
              FUN_1400419b0(&local_2c8,puVar7);
            }
            local_37c = 0;
            local_388 = (longlong *)0x3fe0000000000000;
            FUN_140042560(&local_2c8,&local_388);
            if ((1 << ((byte)local_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_388);
            }
            if (&local_2c8 != puVar8) {
              local_358 = local_2c8;
              uStack_350 = uStack_2c0;
              uStack_34c = uStack_2bc;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar8);
              }
              FUN_140041b80(puVar8,&local_358);
            }
            if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2c8);
            }
            FUN_140e60910(1);
            local_2d8 = 0xee;
            puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd518);
            puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
            FUN_140e609c0(param_1);
            uStack_2bc = *(undefined4 *)((longlong)puVar7 + 0xc);
            uStack_2c0 = *(undefined4 *)(puVar7 + 1);
            if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) == 0) {
              local_2c8 = *puVar7;
            }
            else {
              FUN_1400419b0(&local_2c8,puVar7);
            }
            local_37c = 7;
            local_388 = (longlong *)CONCAT44(local_388._4_4_,2);
            FUN_140042560(&local_2c8,&local_388);
            if ((1 << ((byte)local_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_388);
            }
            if (&local_2c8 != puVar8) {
              local_358 = local_2c8;
              uStack_350 = uStack_2c0;
              uStack_34c = uStack_2bc;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar8);
              }
              FUN_140041b80(puVar8,&local_358);
            }
            if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2c8);
            }
            FUN_140e60910(1);
            local_2d8 = 0xef;
            if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_3a8);
            }
            local_3a8 = 0;
            local_3a0 = 0;
            local_39c = 5;
            puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
            if (puVar7 != &local_348) {
              local_358 = *puVar7;
              uStack_350 = *(undefined4 *)(puVar7 + 1);
              uStack_34c = *(undefined4 *)((longlong)puVar7 + 0xc);
              if ((1 << ((byte)_local_33c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_348);
              }
              FUN_140041b80(&local_348,&local_358);
            }
            local_298 = &local_348;
            local_358 = CONCAT44(uRam0000000141dd3dac,_DAT_141dd3da8);
            uStack_350 = uRam0000000141dd3db0;
            uStack_34c = DAT_141dd3db4;
            if ((1 << ((byte)_local_32c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_338);
            }
            FUN_140041b80(&local_338,&local_358);
            local_290 = &local_338;
            local_358 = CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
            uStack_350 = uRam00000001419df7c8;
            uStack_34c = uRam00000001419df7cc;
            if ((1 << ((byte)_local_31c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_328);
            }
            FUN_140041b80(&local_328,&local_358);
            local_288 = &local_328;
            uVar6 = CONCAT44(uVar13,DAT_1419ff3d8);
            FUN_140e634e0(param_1,param_2,&local_3a8,3,uVar6,&local_298);
            uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
            local_2d8 = 0xf0;
            puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar8);
            }
            *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
            *puVar8 = 0xc014000000000000;
          }
          local_2d8 = 0xf3;
          uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
          local_37c = 0;
          local_388 = (longlong *)0x0;
          local_2c8 = uVar6;
          uVar12 = FUN_140e851f0(uVar6,&local_388,DAT_141955260,1);
          if ((1 << ((byte)local_37c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_388);
          }
          if (uVar12 < 0x80000000) {
            local_2d8 = 0xf4;
            uVar9 = (**(code **)(*param_1 + 0x10))();
            uVar10 = 0x3fe0000000000000;
          }
          else {
            local_2d8 = 0xf6;
            uVar9 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
            uVar10 = 0x3fc999999999999a;
          }
          FUN_140162c50(uVar9,uVar10);
          local_2d8 = 0xf8;
          if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3a8);
          }
          local_3a8 = 0;
          local_3a0 = 0;
          local_39c = 5;
          if (puVar7 != &local_348) {
            local_358 = *puVar7;
            uStack_350 = *(undefined4 *)(puVar7 + 1);
            uStack_34c = *(undefined4 *)((longlong)puVar7 + 0xc);
            if ((1 << ((byte)_local_33c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_348);
            }
            FUN_140041b80(&local_348,&local_358);
          }
          local_298 = &local_348;
          local_358 = CONCAT44(uRam0000000141dd3d9c,_DAT_141dd3d98);
          uStack_350 = uRam0000000141dd3da0;
          uStack_34c = DAT_141dd3da4;
          if ((1 << ((byte)_local_32c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_338);
          }
          FUN_140041b80(&local_338,&local_358);
          local_290 = &local_338;
          ppuVar17 = &local_298;
          uVar15 = CONCAT44(uVar13,DAT_1419ff4f8);
          uVar9 = FUN_140e634e0(param_1,param_2,&local_3a8,2,uVar15,ppuVar17);
          cVar3 = FUN_140e491e0(uVar9);
          if (cVar3 == '\0') {
            if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            local_2b8 = 0;
            local_2b0 = 0;
            local_2ac = 5;
            (**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
            local_37c = 6;
            uVar19 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
            uVar15 = uVar15 & 0xffffffffffffff00;
            local_388 = param_1;
            FUN_140e87440(&local_388,DAT_1419fe0e8,0x80000000,&local_258,uVar15,uVar19);
            if ((1 << ((byte)local_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_388);
            }
            local_37c = 6;
            uVar15 = uVar15 & 0xffffffffffffff00;
            local_388 = param_1;
            FUN_140e87440(&local_388,DAT_1419fe158,0x80000000,&local_2a8,uVar15,
                          uVar19 & 0xffffffffffffff00);
            uVar13 = (undefined4)(uVar15 >> 0x20);
            if ((1 << ((byte)local_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_388);
            }
            local_358 = local_258;
            uStack_350 = uStack_250;
            uStack_34c = uStack_24c;
            if ((1 << ((byte)_local_31c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_328);
            }
            FUN_140041b80(&local_328,&local_358);
            local_288 = &local_328;
            uStack_25c = local_29c;
            uStack_260 = local_2a0;
            if ((1 << ((byte)local_29c & 0x1f) & 0x46U) == 0) {
              local_268 = local_2a8;
            }
            else {
              FUN_1400419b0(&local_268,&local_2a8);
            }
            local_37c = 7;
            local_388 = (longlong *)CONCAT44(local_388._4_4_,1);
            FUN_1400460e0(&local_268,&local_388);
            if ((1 << ((byte)local_37c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_388);
            }
            local_358 = local_268;
            uStack_350 = uStack_260;
            uStack_34c = uStack_25c;
            if ((1 << (local_318[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_318);
            }
            FUN_140041b80(local_318,&local_358);
            bVar2 = false;
            bVar1 = false;
            if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_268);
            }
            local_280 = local_318;
            uStack_35c = 0xf;
            local_368 = (undefined1 *)0x100000000000149;
            local_358 = 0x100000000000149;
            uStack_350 = uStack_360;
            uStack_34c = 0xf;
            if ((1 << ((byte)local_308[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_308);
            }
            FUN_140041b80(local_308,&local_358);
            local_278 = local_308;
            uVar10 = CONCAT44(uVar13,DAT_141a12628);
            uVar9 = FUN_140e634e0(param_1,param_2,&local_2b8,3,uVar10,&local_288);
            uVar13 = (undefined4)((ulonglong)uVar10 >> 0x20);
            cVar3 = FUN_140e491e0(uVar9);
            if (cVar3 != '\0') {
              if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_220);
              }
              local_220 = 0;
              local_218 = 0;
              local_214 = 5;
              uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd3b8);
              local_358 = CONCAT44(uRam0000000141dc66c4,_DAT_141dc66c0);
              uStack_350 = uRam0000000141dc66c8;
              uStack_34c = uRam0000000141dc66cc;
              if ((1 << (local_2ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2f8);
              }
              FUN_140041b80(&local_2f8,&local_358);
              local_270 = &local_2f8;
              ppuVar17 = &local_270;
              ppuVar16 = (undefined1 **)CONCAT44(uVar13,DAT_141a0a0d8);
              uVar10 = FUN_140e634e0(param_1,param_2,&local_220,1,ppuVar16,ppuVar17);
              iVar4 = FUN_140e851f0(uVar9,uVar10,DAT_141955260,1);
              if ((iVar4 != -2) && (-1 < iVar4)) {
                local_2d8 = 0xfa;
                if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_240);
                }
                local_234 = 0;
                local_240 = 0x3ff0000000000000;
                local_2d8 = 0xfb;
                local_198 = FUN_140e794b0(0,0x4004000000000000);
                local_248 = 0;
                local_18c = 0;
                iVar4 = 2;
                do {
                  iVar4 = iVar4 + -1;
                  local_2d8 = 0xfe;
                  if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_3a8);
                  }
                  local_3a8 = 0;
                  local_3a0 = 0;
                  local_39c = 5;
                  local_15c = 6;
                  uVar19 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
                  uVar15 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
                  local_168 = param_1;
                  FUN_140e87440(&local_168,DAT_1419fe0e8,0x80000000,&local_258,uVar15,uVar19);
                  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_168);
                  }
                  local_14c = 6;
                  uVar15 = uVar15 & 0xffffffffffffff00;
                  local_158 = param_1;
                  FUN_140e87440(&local_158,DAT_1419fe158,0x80000000,&local_2a8,uVar15,
                                uVar19 & 0xffffffffffffff00);
                  uVar13 = (undefined4)(uVar15 >> 0x20);
                  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_158);
                  }
                  local_398 = (undefined4)local_258;
                  uStack_394 = local_258._4_4_;
                  uStack_390 = uStack_250;
                  uStack_38c = uStack_24c;
                  if ((1 << ((byte)_local_33c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_348);
                  }
                  FUN_140041b80(&local_348,&local_398);
                  local_298 = &local_348;
                  uStack_25c = local_29c;
                  uStack_260 = local_2a0;
                  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) == 0) {
                    local_268 = local_2a8;
                  }
                  else {
                    FUN_1400419b0(&local_268,&local_2a8);
                  }
                  local_13c = 7;
                  local_148[0] = 3;
                  FUN_1400462a0(&local_268,local_148);
                  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(local_148);
                  }
                  local_398 = (undefined4)local_268;
                  uStack_394 = local_268._4_4_;
                  uStack_390 = uStack_260;
                  uStack_38c = uStack_25c;
                  if ((1 << ((byte)_local_32c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_338);
                  }
                  FUN_140041b80(&local_338,&local_398);
                  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_268);
                  }
                  local_290 = &local_338;
                  local_398 = _DAT_141dd3d68;
                  uStack_394 = uRam0000000141dd3d6c;
                  uStack_390 = uRam0000000141dd3d70;
                  uStack_38c = DAT_141dd3d74;
                  if ((1 << ((byte)_local_31c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_328);
                  }
                  FUN_140041b80(&local_328,&local_398);
                  local_288 = &local_328;
                  uStack_34c = 0xf;
                  local_358 = 0x100000000000064;
                  local_398 = 100;
                  uStack_394 = 0x1000000;
                  uStack_390 = uStack_350;
                  uStack_38c = 0xf;
                  if ((1 << (local_318[0xc] & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(local_318);
                  }
                  FUN_140041b80(local_318,&local_398);
                  local_280 = local_318;
                  ppuVar17 = &local_298;
                  uVar15 = CONCAT44(uVar13,DAT_141a0a7c8);
                  puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_3a8,4,uVar15,ppuVar17)
                  ;
                  if (puVar7 != &local_230) {
                    local_398 = *(undefined4 *)puVar7;
                    uStack_394 = *(undefined4 *)((longlong)puVar7 + 4);
                    uStack_390 = *(undefined4 *)(puVar7 + 1);
                    uStack_38c = *(undefined4 *)((longlong)puVar7 + 0xc);
                    if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_230);
                    }
                    FUN_140041b80(&local_230,&local_398);
                  }
                  local_2d8 = 0x100;
                  uStack_19c = 0;
                  uStack_1a0 = local_190;
                  local_1a8 = local_198;
                  FUN_140042560(&local_1a8,&local_240);
                  local_398 = (undefined4)local_1a8;
                  uStack_394 = local_1a8._4_4_;
                  uStack_390 = uStack_1a0;
                  uStack_38c = uStack_19c;
                  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_200);
                  }
                  FUN_140041b80(&local_200,&local_398);
                  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_1a8);
                  }
                  FUN_140e87930(&local_230,DAT_141a1f230,0x80000000,&local_200);
                  local_2d8 = 0x101;
                  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_210);
                  }
                  local_204 = 0;
                  local_210 = 0xc014000000000000;
                  FUN_140e87930(&local_230,DAT_141a1f500,0x80000000,&local_210);
                  local_2d8 = 0x102;
                  local_12c = 6;
                  uVar19 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
                  uVar15 = uVar15 & 0xffffffffffffff00;
                  local_138 = param_1;
                  FUN_140e87440(&local_138,DAT_141a0a828,0x80000000,&local_178,uVar15,uVar19);
                  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_138);
                  }
                  local_398 = (undefined4)local_178;
                  uStack_394 = local_178._4_4_;
                  uStack_390 = uStack_170;
                  uStack_38c = uStack_16c;
                  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_1f0);
                  }
                  FUN_140041b80(&local_1f0,&local_398);
                  FUN_140e87930(&local_230,DAT_141a1f0d0,0x80000000,&local_1f0);
                  local_2d8 = 0x104;
                  local_11c = 0;
                  local_128 = 0x3ff0000000000000;
                  iVar5 = FUN_140e851f0(&local_240,&local_128,DAT_141955260,0);
                  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_128);
                  }
                  if (iVar5 == 0) {
                    uStack_fc = 0;
                    local_108 = 0x4039000000000000;
                    puVar7 = &local_108;
                    bVar2 = true;
                  }
                  else {
                    local_10c = 0;
                    local_118 = 0x4063600000000000;
                    puVar7 = &local_118;
                    bVar1 = true;
                  }
                  local_398 = *(undefined4 *)puVar7;
                  uStack_394 = *(undefined4 *)((longlong)puVar7 + 4);
                  uStack_390 = *(undefined4 *)(puVar7 + 1);
                  uStack_38c = *(undefined4 *)((longlong)puVar7 + 0xc);
                  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_1e0);
                  }
                  FUN_140041b80(&local_1e0,&local_398);
                  if ((bVar1) && (bVar1 = false, (1 << ((byte)local_10c & 0x1f) & 0x46U) != 0)) {
                    FUN_140041a50(&local_118);
                  }
                  if ((bVar2) && (bVar2 = false, (1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0)) {
                    FUN_140041a50(&local_108);
                  }
                  local_2d8 = 0x105;
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
                  uVar19 = uVar19 & 0xffffffffffffff00;
                  uVar15 = uVar15 & 0xffffffffffffff00;
                  FUN_140e87440(local_c8,DAT_141a1f210,0x80000000,&local_188,uVar15,uVar19);
                  local_ec = 6;
                  uVar19 = uVar19 & 0xffffffffffffff00;
                  uVar15 = uVar15 & 0xffffffffffffff00;
                  local_f8 = param_1;
                  FUN_140e87440(&local_f8,DAT_1419fe0e8,0x80000000,&local_258,uVar15,uVar19);
                  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_f8);
                  }
                  local_dc = 6;
                  uVar15 = uVar15 & 0xffffffffffffff00;
                  local_e8 = param_1;
                  FUN_140e87440(&local_e8,DAT_1419fe158,0x80000000,&local_2a8,uVar15,
                                uVar19 & 0xffffffffffffff00);
                  uVar13 = (undefined4)(uVar15 >> 0x20);
                  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_e8);
                  }
                  local_37c = 0;
                  local_388 = (longlong *)0x4020000000000000;
                  FUN_140042560(&local_388,&local_240);
                  uStack_1bc = uStack_24c;
                  uStack_1c0 = uStack_250;
                  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
                    local_1c8 = local_258;
                  }
                  else {
                    FUN_1400419b0(&local_1c8,&local_258);
                  }
                  FUN_1400460e0(&local_1c8,&local_388);
                  local_398 = (undefined4)local_1c8;
                  uStack_394 = local_1c8._4_4_;
                  uStack_390 = uStack_1c0;
                  uStack_38c = uStack_1bc;
                  if ((1 << ((byte)_local_33c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_348);
                  }
                  FUN_140041b80(&local_348,&local_398);
                  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_1c8);
                  }
                  if ((1 << ((byte)local_37c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_388);
                  }
                  local_298 = &local_348;
                  uStack_36c = local_29c;
                  uStack_370 = local_2a0;
                  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) == 0) {
                    local_378 = local_2a8;
                  }
                  else {
                    FUN_1400419b0(&local_378,&local_2a8);
                  }
                  local_cc = 7;
                  local_d8[0] = 3;
                  FUN_1400462a0(&local_378,local_d8);
                  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(local_d8);
                  }
                  local_398 = (undefined4)local_378;
                  uStack_394 = local_378._4_4_;
                  uStack_390 = uStack_370;
                  uStack_38c = uStack_36c;
                  if ((1 << ((byte)_local_32c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_338);
                  }
                  FUN_140041b80(&local_338,&local_398);
                  if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_378);
                  }
                  local_290 = &local_338;
                  local_288 = &local_1e0;
                  local_398 = (undefined4)local_188;
                  uStack_394 = local_188._4_4_;
                  uStack_390 = uStack_180;
                  uStack_38c = uStack_17c;
                  if ((1 << (local_318[0xc] & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(local_318);
                  }
                  FUN_140041b80(local_318,&local_398);
                  local_280 = local_318;
                  ppuVar17 = &local_298;
                  puVar11 = (undefined4 *)
                            FUN_140e634e0(param_1,param_2,&local_2b8,3,
                                          CONCAT44(uVar13,DAT_1419fdca8),ppuVar17);
                  if (puVar11 != local_308) {
                    local_398 = *puVar11;
                    uStack_394 = puVar11[1];
                    uStack_390 = puVar11[2];
                    uStack_38c = puVar11[3];
                    if ((1 << ((byte)local_308[3] & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(local_308);
                    }
                    FUN_140041b80(local_308,&local_398);
                  }
                  local_278 = local_308;
                  ppuVar16 = &local_280;
                  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
                            (param_1,param_2,&local_3a8,2,ppuVar16);
                  local_2d8 = 0x107;
                  uStack_35c = 0;
                  local_368 = &DAT_bff0000000000000;
                  FUN_140042560(&local_240,&local_368);
                  if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_368);
                  }
                } while (0 < iVar4);
                local_2d8 = 0x10a;
                if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_3a8);
                }
                local_3a8 = 0;
                local_3a0 = 0;
                local_39c = 5;
                local_398 = _DAT_1419e60a0;
                uStack_394 = uRam00000001419e60a4;
                uStack_390 = uRam00000001419e60a8;
                uStack_38c = uRam00000001419e60ac;
                if ((1 << (local_33c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_348);
                }
                FUN_140041b80(&local_348,&local_398);
                local_298 = &local_348;
                local_398 = (undefined4)DAT_1419df7b0;
                uStack_394 = DAT_1419df7b0._4_4_;
                uStack_390 = DAT_1419df7b8;
                uStack_38c = DAT_1419df7bc;
                if ((1 << (local_32c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_338);
                }
                FUN_140041b80(&local_338,&local_398);
                local_290 = &local_338;
                ppuVar17 = &local_298;
                gml_Script_truestate_begin_step(param_1,param_2,&local_3a8,2,ppuVar17);
                uVar13 = (undefined4)((ulonglong)ppuVar17 >> 0x20);
                local_2d8 = 0x10b;
                if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_3a8);
                }
                local_3a8 = 0;
                local_3a0 = 0;
                local_39c = 5;
                puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
                if (puVar7 != &local_348) {
                  local_398 = *(undefined4 *)puVar7;
                  uStack_394 = *(undefined4 *)((longlong)puVar7 + 4);
                  uStack_390 = *(undefined4 *)(puVar7 + 1);
                  uStack_38c = *(undefined4 *)((longlong)puVar7 + 0xc);
                  if ((1 << (local_33c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_348);
                  }
                  FUN_140041b80(&local_348,&local_398);
                }
                local_298 = &local_348;
                local_398 = _DAT_141dd3d98;
                uStack_394 = uRam0000000141dd3d9c;
                uStack_390 = uRam0000000141dd3da0;
                uStack_38c = DAT_141dd3da4;
                if ((1 << (local_32c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_338);
                }
                FUN_140041b80(&local_338,&local_398);
                local_290 = &local_338;
                local_398 = _DAT_1419df7c0;
                uStack_394 = uRam00000001419df7c4;
                uStack_390 = uRam00000001419df7c8;
                uStack_38c = uRam00000001419df7cc;
                if ((1 << (local_31c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_328);
                }
                FUN_140041b80(&local_328,&local_398);
                local_288 = &local_328;
                FUN_140e634e0(param_1,param_2,&local_3a8,3,CONCAT44(uVar13,DAT_1419ff3d8),&local_298
                             );
                uVar6 = local_2c8;
              }
            }
          }
          local_2d8 = 0x10f;
          if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3a8);
          }
          local_3a8 = 0;
          local_3a0 = 0;
          local_39c = 5;
          uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
          FUN_140e63610(param_1,param_2,&local_3a8,0,uVar9,0);
          local_2d8 = 0x111;
          uStack_35c = 0;
          local_368 = (undefined1 *)0x0;
          iVar4 = FUN_140e851f0(uVar6,&local_368,DAT_141955260,1);
          if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_368);
          }
          uVar12 = 1 << ((byte)local_39c & 0x1f);
          if (iVar4 == -2 || 0 < iVar4) {
            local_2d8 = 0x114;
            if ((uVar12 & 0x46) != 0) {
              FUN_140041a50(&local_3a8);
            }
            local_3a8 = 0;
            local_3a0 = 0;
            local_39c = 5;
            uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd588);
            puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd448);
            puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd518);
            uStack_36c = *(undefined4 *)((longlong)puVar7 + 0xc);
            uStack_370 = *(undefined4 *)(puVar7 + 1);
            if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) == 0) {
              local_378 = *puVar7;
            }
            else {
              FUN_1400419b0(&local_378,puVar7);
            }
            uStack_35c = 0;
            local_368 = (undefined1 *)0x3fe0000000000000;
            FUN_140042560(&local_378,&local_368);
            if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_368);
            }
            local_398 = (undefined4)local_378;
            uStack_394 = local_378._4_4_;
            uStack_390 = uStack_370;
            uStack_38c = uStack_36c;
            if ((1 << (local_33c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_348);
            }
            FUN_140041b80(&local_348,&local_398);
            if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_378);
            }
            local_298 = &local_348;
            uStack_36c = *(undefined4 *)((longlong)puVar8 + 0xc);
            uStack_370 = *(undefined4 *)(puVar8 + 1);
            if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) == 0) {
              local_378 = *puVar8;
            }
            else {
              FUN_1400419b0(&local_378,puVar8);
            }
            uStack_35c = 0;
            local_368 = (undefined1 *)0x3ff8000000000000;
            FUN_140042560(&local_378,&local_368);
            if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_368);
            }
            local_398 = (undefined4)local_378;
            uStack_394 = local_378._4_4_;
            uStack_390 = uStack_370;
            uStack_38c = uStack_36c;
            if ((1 << (local_32c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_338);
            }
            FUN_140041b80(&local_338,&local_398);
            if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_378);
            }
            local_290 = &local_338;
            local_398 = _DAT_1419e60b0;
            uStack_394 = uRam00000001419e60b4;
            uStack_390 = uRam00000001419e60b8;
            uStack_38c = uRam00000001419e60bc;
            if ((1 << (local_31c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_328);
            }
            FUN_140041b80(&local_328,&local_398);
          }
          else {
            local_2d8 = 0x112;
            if ((uVar12 & 0x46) != 0) {
              FUN_140041a50(&local_3a8);
            }
            local_3a8 = 0;
            local_3a0 = 0;
            local_39c = 5;
            (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
            uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd588);
            local_398 = (undefined4)DAT_1419df7b0;
            uStack_394 = DAT_1419df7b0._4_4_;
            uStack_390 = DAT_1419df7b8;
            uStack_38c = DAT_1419df7bc;
            if ((1 << (local_33c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_348);
            }
            FUN_140041b80(&local_348,&local_398);
            local_298 = &local_348;
            local_398 = (undefined4)DAT_1419df7b0;
            uStack_394 = DAT_1419df7b0._4_4_;
            uStack_390 = DAT_1419df7b8;
            uStack_38c = DAT_1419df7bc;
            if ((1 << (local_32c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_338);
            }
            FUN_140041b80(&local_338,&local_398);
            local_290 = &local_338;
            local_398 = _DAT_1419e60b0;
            uStack_394 = uRam00000001419e60b4;
            uStack_390 = uRam00000001419e60b8;
            uStack_38c = uRam00000001419e60bc;
            if ((1 << (local_31c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_328);
            }
            FUN_140041b80(&local_328,&local_398);
          }
          local_288 = &local_328;
          FUN_140e63610(param_1,param_2,&local_3a8,3,uVar6,&local_298);
        }
        else {
          local_2d8 = 0x11a;
          if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3a8);
          }
          local_3a8 = 0;
          local_3a0 = 0;
          local_39c = 5;
          uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd588);
          puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd448);
          puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd518);
          uStack_36c = *(undefined4 *)((longlong)puVar7 + 0xc);
          uStack_370 = *(undefined4 *)(puVar7 + 1);
          if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) == 0) {
            local_378 = *puVar7;
          }
          else {
            FUN_1400419b0(&local_378,puVar7);
          }
          uStack_35c = 0;
          local_368 = (undefined1 *)0x3ff8000000000000;
          FUN_140042560(&local_378,&local_368);
          if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_368);
          }
          local_398 = (undefined4)local_378;
          uStack_394 = local_378._4_4_;
          uStack_390 = uStack_370;
          uStack_38c = uStack_36c;
          if ((1 << (local_33c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_348);
          }
          FUN_140041b80(&local_348,&local_398);
          if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_378);
          }
          local_298 = &local_348;
          uStack_36c = *(undefined4 *)((longlong)puVar8 + 0xc);
          uStack_370 = *(undefined4 *)(puVar8 + 1);
          if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) == 0) {
            local_378 = *puVar8;
          }
          else {
            FUN_1400419b0(&local_378,puVar8);
          }
          uStack_35c = 0;
          local_368 = (undefined1 *)0x3fe0000000000000;
          FUN_140042560(&local_378,&local_368);
          if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_368);
          }
          local_398 = (undefined4)local_378;
          uStack_394 = local_378._4_4_;
          uStack_390 = uStack_370;
          uStack_38c = uStack_36c;
          if ((1 << (local_32c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_338);
          }
          FUN_140041b80(&local_338,&local_398);
          if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_378);
          }
          local_290 = &local_338;
          local_398 = _DAT_1419e60b0;
          uStack_394 = uRam00000001419e60b4;
          uStack_390 = uRam00000001419e60b8;
          uStack_38c = uRam00000001419e60bc;
          if ((1 << (local_31c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_328);
          }
          FUN_140041b80(&local_328,&local_398);
          local_288 = &local_328;
          FUN_140e63610(param_1,param_2,&local_3a8,3,uVar6,&local_298);
        }
        local_2d8 = 0x11d;
        if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3a8);
        }
        local_3a8 = 0;
        local_3a0 = 0;
        local_39c = 5;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
        FUN_140e63610(param_1,param_2,&local_3a8,0,uVar6,0);
        local_2d8 = 0x11e;
        if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3a8);
        }
        local_3a8 = 0;
        local_3a0 = 0;
        local_39c = 5;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
        FUN_140e63610(param_1,param_2,&local_3a8,0,uVar6,0);
        local_2d8 = 0x120;
        uVar13 = local_248;
      }
      else if (iVar4 == 2) {
        local_2d8 = 0x124;
        if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3a8);
        }
        local_3a8 = 0;
        local_3a0 = 0;
        local_39c = 5;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b18);
        FUN_140e63610(param_1,param_2,&local_3a8,0,uVar6,0);
        local_2d8 = 0x125;
      }
      else if (iVar4 == 3) {
        local_2d8 = 0x129;
      }
      break;
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 < 4);
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3a8);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_230);
  }
  if ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_240);
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  _eh_vector_destructor_iterator_(&local_348,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_2e8;
  return param_3;
}

