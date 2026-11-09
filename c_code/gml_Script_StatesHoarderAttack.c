// gml_Script_StatesHoarderAttack @ 0x140546d70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesHoarderAttack
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong **pplVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong **pplVar11;
  bool bVar12;
  code *pcVar13;
  undefined4 uVar16;
  longlong ***ppplVar14;
  longlong ***ppplVar15;
  ulonglong in_stack_fffffffffffffcd0;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_31c;
  longlong *local_318;
  undefined4 local_30c;
  undefined8 local_308;
  undefined8 uStack_300;
  longlong ***local_2f8;
  undefined8 local_2e8;
  char *local_2e0;
  undefined4 local_2d8;
  longlong *local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  longlong *local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  longlong local_2a8;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  longlong *local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  longlong local_268;
  undefined4 local_260;
  undefined4 local_25c;
  longlong *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  longlong *local_238;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  longlong *local_198;
  undefined4 local_18c;
  longlong *local_188;
  undefined4 local_17c;
  longlong *local_178;
  byte local_16c;
  longlong *local_168;
  byte local_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [80];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  longlong **local_d8;
  longlong **local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_98;
  undefined1 *local_90;
  longlong *local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined4 local_64;
  
  local_2e0 = "gml_Script_StatesHoarderIdle";
  local_2e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2e8;
  local_2d8 = 0x7b;
  pcVar13 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_178,0x10,10,FUN_1400424d0,FUN_140041b30);
  local_1ec = 0xffffff;
  local_1f8 = 0;
  plVar5 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  uStack_28c = 0xffffff;
  local_298 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  uStack_24c = 0xffffff;
  local_258 = (longlong *)0x0;
  local_21c = 0xffffff;
  local_228 = 0;
  uStack_2bc = 0xffffff;
  local_2c8 = (longlong *)0x0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_31c = 0;
  local_328 = 0;
  local_25c = 0;
  local_268 = 0;
  local_64 = 0;
  local_70 = 0;
  local_23c = 0;
  local_248 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2d8 = 0x7d;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_1dc = *(undefined4 *)((longlong)param_5 + 0xc);
  local_1e0 = *(undefined4 *)(param_5 + 1);
  local_88 = plVar5;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
    local_1e8 = *param_5;
  }
  else {
    FUN_1400419b0(&local_1e8);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddfe20) &&
     (_Init_thread_header(&DAT_141ddfe20), DAT_141ddfe20 == -1)) {
    _DAT_141ddfcbc = 0;
    _DAT_141ddfcb0 = 0x4000000000000000;
    _DAT_141ddfcd0 = 0;
    _DAT_141ddfcc4 = 0;
    _DAT_141ddfcd4 = 1;
    _DAT_141ddfce4 = 0;
    _DAT_141ddfcd8 = 0x3ff0000000000000;
    _DAT_141ddfce8 = 2;
    _DAT_141ddfcf8 = 0;
    _DAT_141ddfcec = 0x4008000000000000;
    _DAT_141ddfcfc = 3;
    atexit((_func_5014 *)&LAB_141481f90);
    _Init_thread_footer(&DAT_141ddfe20);
  }
  uVar10 = 0;
  do {
    iVar4 = FUN_140e851f0(&DAT_141ddfcb0 + (longlong)(int)uVar10 * 0x14,&local_1e8,DAT_141955260,0);
    if (iVar4 == 0) {
      iVar4 = *(int *)(&DAT_141ddfcc0 + (longlong)(int)uVar10 * 0x14);
      if (iVar4 == 0) {
        local_2d8 = 0x81;
        uStack_26c = 0xf;
        local_278 = (longlong *)0x10000010000016b;
        local_308 = (longlong *)0x10000010000016b;
        uStack_300 = (longlong **)CONCAT44(0xf,uStack_270);
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_308);
        FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_1f8);
        local_2d8 = 0x82;
        if (plVar5 != &local_2a8) {
          local_308 = (longlong *)*plVar5;
          uStack_300 = (longlong **)plVar5[1];
          if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          FUN_140041b80(&local_2a8,&local_308);
        }
        FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_2a8);
        local_2d8 = 0x84;
        if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_328);
        }
        local_328 = 0;
        local_320 = 0;
        local_31c = 5;
        local_30c = 6;
        in_stack_fffffffffffffcd0 = in_stack_fffffffffffffcd0 & 0xffffffffffffff00;
        uVar18 = (ulonglong)pcVar13 & 0xffffffffffffff00;
        local_318 = param_1;
        FUN_140e87440(&local_318,DAT_1419fe0e8,0x80000000,&local_1c8,uVar18,
                      in_stack_fffffffffffffcd0);
        if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        local_30c = 6;
        uVar18 = uVar18 & 0xffffffffffffff00;
        local_318 = param_1;
        FUN_140e87440(&local_318,DAT_1419fe0e8,0x80000000,&local_298,uVar18,
                      in_stack_fffffffffffffcd0 & 0xffffffffffffff00);
        uVar16 = (undefined4)(uVar18 >> 0x20);
        if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        local_308 = (longlong *)local_298;
        uStack_300 = (longlong **)CONCAT44(uStack_28c,uStack_290);
        if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        FUN_140041b80(&local_178,&local_308);
        local_d8 = &local_178;
        ppplVar15 = &local_d8;
        uVar18 = CONCAT44(uVar16,DAT_141a579a0);
        uVar6 = FUN_140e634e0(param_1,param_2,&local_328,1,uVar18,ppplVar15);
        FUN_1400462a0(&local_1c8,uVar6);
        FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_1c8);
        local_2d8 = 0x85;
        if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_328);
        }
        local_328 = 0;
        local_320 = 0;
        local_31c = 5;
        local_30c = 6;
        uVar17 = (ulonglong)ppplVar15 & 0xffffffffffffff00;
        uVar18 = uVar18 & 0xffffffffffffff00;
        local_318 = param_1;
        FUN_140e87440(&local_318,DAT_1419fe158,0x80000000,&local_1d8,uVar18,uVar17);
        if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        local_30c = 6;
        uVar18 = uVar18 & 0xffffffffffffff00;
        local_318 = param_1;
        FUN_140e87440(&local_318,DAT_1419fe158,0x80000000,&local_258,uVar18,
                      uVar17 & 0xffffffffffffff00);
        uVar16 = (undefined4)(uVar18 >> 0x20);
        if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        local_308 = local_258;
        uStack_300 = (longlong **)CONCAT44(uStack_24c,uStack_250);
        if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        FUN_140041b80(&local_178,&local_308);
        local_d8 = &local_178;
        uVar6 = FUN_140e634e0(param_1,param_2,&local_328,1,CONCAT44(uVar16,DAT_141a579a0),&local_d8)
        ;
        FUN_1400462a0(&local_1d8,uVar6);
        FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_1d8);
        local_2d8 = 0x87;
        puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
        *puVar8 = 0;
        local_2d8 = 0x88;
        puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
        *puVar8 = 0;
        local_2d8 = 0x8a;
      }
      else {
        if (iVar4 == 1) {
          local_2d8 = 0x8e;
          uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
          uVar16 = (undefined4)((ulonglong)pcVar13 >> 0x20);
          FUN_140162c50(uVar6,0x3fc999999999999a);
          local_2d8 = 0x90;
          if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_328);
          }
          local_328 = 0;
          local_320 = 0;
          local_31c = 5;
          local_278 = (longlong *)CONCAT44(uRam0000000141dc66e4,_DAT_141dc66e0);
          uStack_270 = uRam0000000141dc66e8;
          uStack_26c = uRam0000000141dc66ec;
          if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          FUN_140041b80(&local_178,&local_278);
          local_d8 = &local_178;
          ppplVar15 = &local_d8;
          uVar6 = FUN_140e634e0(param_1,param_2,&local_328,1,CONCAT44(uVar16,DAT_141a0a0d8),
                                ppplVar15);
          uStack_27c = 0;
          local_288 = (longlong *)0x40c3880000000000;
          FUN_140042560(&local_288,uVar6);
          local_278 = local_288;
          uStack_270 = uStack_280;
          uStack_26c = uStack_27c;
          if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          FUN_140041b80(&local_228,&local_278);
          bVar1 = false;
          bVar12 = false;
          if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          local_2d8 = 0x92;
          uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd3b8);
          uVar10 = FUN_140e851f0(uVar6,&local_228,DAT_141955260,1);
          if (0x7fffffff < uVar10) goto LAB_140547c02;
          goto LAB_140547250;
        }
        if (iVar4 == 2) {
          local_2d8 = 0xbb;
          if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_328);
          }
          local_328 = 0;
          local_320 = 0;
          local_31c = 5;
          uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b18);
          FUN_140e63610(param_1,param_2,&local_328,0,uVar6,0);
          local_2d8 = 0xbc;
        }
        else if (iVar4 == 3) {
          local_2d8 = 0xc0;
        }
      }
      break;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 4);
  goto LAB_1405483c6;
  while( true ) {
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fda58);
    iVar4 = FUN_140e851f0(&local_2c8,uVar6,DAT_141955260,0);
    if (iVar4 != 0) break;
LAB_140547250:
    local_2d8 = 0x96;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdae8);
    local_19c = 0;
    local_1a8 = 0x3ff0000000000000;
    iVar4 = FUN_140e851f0(uVar6,&local_1a8,DAT_141955260,0);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    if (iVar4 == 0) {
      local_308 = &local_268;
      uStack_300 = &local_178;
      local_2f8 = &local_d8;
      pplVar7 = (longlong **)FUN_140548570(&local_308,local_80);
      bVar1 = true;
      if (pplVar7 != &local_2c8) goto LAB_14054740c;
    }
    else {
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_248 = 0;
      local_240 = 0;
      local_23c = 5;
      local_308 = (longlong *)CONCAT44(uRam00000001419e62b4,_DAT_1419e62b0);
      uStack_300 = (longlong **)CONCAT44(uRam00000001419e62bc,uRam00000001419e62b8);
      if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_308);
      local_98 = local_f8;
      local_308 = (longlong *)CONCAT44(uRam00000001419e6354,_DAT_1419e6350);
      uStack_300 = (longlong **)CONCAT44(uRam00000001419e635c,uRam00000001419e6358);
      if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_308);
      local_90 = local_e8;
      puVar8 = (undefined8 *)FUN_140e78db0(&local_248,2,&local_98);
      uStack_27c = *(undefined4 *)((longlong)puVar8 + 0xc);
      uStack_280 = *(undefined4 *)(puVar8 + 1);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_288 = (longlong *)*puVar8;
      }
      else {
        FUN_1400419b0(&local_288,puVar8);
      }
      pplVar7 = &local_288;
      bVar12 = true;
LAB_14054740c:
      local_308 = *pplVar7;
      uStack_300 = (longlong **)pplVar7[1];
      if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      FUN_140041b80(&local_2c8,&local_308);
    }
    if ((bVar12) && (bVar12 = false, (1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_288);
    }
    if ((bVar1) && (bVar1 = false, (1 << (local_80[0xc] & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(local_80);
    }
    local_2d8 = 0x98;
    if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    local_328 = 0;
    local_320 = 0;
    local_31c = 5;
    local_308 = (longlong *)CONCAT44(uRam00000001419e62f4,_DAT_1419e62f0);
    uStack_300 = (longlong **)CONCAT44(uRam00000001419e62fc,uRam00000001419e62f8);
    if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_308);
    local_d8 = &local_178;
    ppplVar14 = &local_d8;
    uVar6 = gml_Script_choose_weighted(param_1,param_2,&local_328,1,ppplVar14);
    cVar3 = FUN_140e491e0(uVar6);
    if (cVar3 == '\0') {
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
      local_18c = 6;
      uVar17 = (ulonglong)ppplVar15 & 0xffffffffffffff00;
      uVar18 = (ulonglong)ppplVar14 & 0xffffffffffffff00;
      local_198 = param_1;
      FUN_140e87440(&local_198,DAT_1419fe0e8,0x80000000,&local_298,uVar18,uVar17);
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_17c = 6;
      uVar18 = uVar18 & 0xffffffffffffff00;
      local_188 = param_1;
      FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_258,uVar18,
                    uVar17 & 0xffffffffffffff00);
      uVar16 = (undefined4)(uVar18 >> 0x20);
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_1fc = *(undefined4 *)((longlong)puVar8 + 0xc);
      local_200 = *(undefined4 *)(puVar8 + 1);
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) == 0) {
        local_208 = *puVar8;
      }
      else {
        FUN_1400419b0(&local_208,puVar8);
      }
      uStack_22c = 7;
      local_238 = (longlong *)CONCAT44(local_238._4_4_,8);
      FUN_140042560(&local_208,&local_238);
      if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      uStack_20c = uStack_28c;
      uStack_210 = uStack_290;
      if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) == 0) {
        local_218 = local_298;
      }
      else {
        FUN_1400419b0(&local_218,&local_298);
      }
      FUN_1400462a0(&local_218,&local_208);
      local_308 = (longlong *)local_218;
      uStack_300 = (longlong **)CONCAT44(uStack_20c,uStack_210);
      if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_308);
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_d0 = &local_168;
      uStack_2ac = uStack_24c;
      uStack_2b0 = uStack_250;
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
        local_2b8 = local_258;
      }
      else {
        FUN_1400419b0(&local_2b8,&local_258);
      }
      local_30c = 7;
      local_318 = (longlong *)CONCAT44(local_318._4_4_,1);
      FUN_1400462a0(&local_2b8,&local_318);
      if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      local_308 = local_2b8;
      uStack_300 = (longlong **)CONCAT44(uStack_2ac,uStack_2b0);
      if ((1 << (local_158[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_308);
      if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      local_c8 = local_158;
      uStack_26c = 0xf;
      local_278 = (longlong *)0x100000000000149;
      local_308 = (longlong *)0x100000000000149;
      uStack_300 = (longlong **)CONCAT44(0xf,uStack_270);
      if ((1 << (local_148[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_308);
      local_c0 = local_148;
      ppplVar15 = &local_d0;
      uVar6 = FUN_140e634e0(param_1,param_2,&local_268,3,CONCAT44(uVar16,DAT_141a12628),ppplVar15);
      cVar3 = FUN_140e491e0(uVar6);
      if (cVar3 != '\0') goto LAB_1405478b0;
    }
    else {
LAB_1405478b0:
      local_2d8 = 0x9a;
      if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      uStack_2bc = 10;
      local_2c8 = (longlong *)0xb;
    }
  }
  local_2d8 = 0xa0;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fde88);
  iVar4 = FUN_140e851f0(&local_228,uVar6,DAT_141955260,0);
  if (iVar4 == 0) {
    local_2d8 = 0xa1;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fddc8);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = 0;
  }
  local_2d8 = 0xa3;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
  plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5a58);
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1ed50);
  uStack_2ac = *(undefined4 *)((longlong)plVar5 + 0xc);
  uStack_2b0 = (undefined4)plVar5[1];
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) == 0) {
    local_2b8 = (longlong *)*plVar5;
  }
  else {
    FUN_1400419b0(&local_2b8,plVar5);
  }
  FUN_140042560(&local_2b8,uVar9);
  iVar4 = FUN_140e851f0(uVar6,&local_2b8,DAT_141955260,1);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if (iVar4 != -2 && iVar4 < 1) {
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdae8);
    local_30c = 0;
    local_318 = (longlong *)0x3ff0000000000000;
    iVar4 = FUN_140e851f0(uVar6,&local_318,DAT_141955260,0);
    if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    if (iVar4 == 0) {
      local_2d8 = 0xa5;
      if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      uStack_2bc = 10;
      local_2c8 = (longlong *)0xa;
    }
  }
  local_2d8 = 0xa9;
  pplVar7 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fda58);
  FUN_140e609c0(param_1);
  if (&local_2c8 != pplVar7) {
    local_308 = local_2c8;
    uStack_300 = (longlong **)CONCAT44(uStack_2bc,uStack_2c0);
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar7);
    }
    FUN_140041b80(pplVar7,&local_308);
  }
  FUN_140e60910(1);
  local_2d8 = 0xaa;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_328 = 0;
  local_320 = 0;
  local_31c = 5;
  local_d8 = &local_2c8;
  local_308 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_300 = (longlong **)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_308);
  local_d0 = &local_168;
  gml_Script_truestate_begin_step(param_1,param_2,&local_328,2,&local_d8);
  local_2d8 = 0xab;
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419fddc8);
  FUN_140046040(uVar6);
  plVar5 = local_88;
LAB_140547c02:
  local_2d8 = 0xaf;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_328 = 0;
  local_320 = 0;
  local_31c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_328,0,uVar6,0);
  local_2d8 = 0xb0;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_328 = 0;
  local_320 = 0;
  local_31c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_328,0,uVar6,0);
  local_2d8 = 0xb1;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_328 = 0;
  local_320 = 0;
  local_31c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
  uVar18 = 0;
  FUN_140e63610(param_1,param_2,&local_328,0,uVar6,0);
  local_2d8 = 0xb2;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_328 = 0;
  local_320 = 0;
  local_31c = 5;
  uStack_26c = 0xf;
  local_278 = (longlong *)0x100000000000149;
  local_308 = (longlong *)0x100000000000149;
  uStack_300 = (longlong **)CONCAT44(0xf,uStack_270);
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_308);
  local_d8 = &local_178;
  ppplVar15 = &local_d8;
  gml_GlobalScript_world_pos_to_gui(param_1,param_2,&local_328,1,ppplVar15);
  local_2d8 = 0xb4;
  if (plVar5 != &local_2a8) {
    local_308 = (longlong *)*plVar5;
    uStack_300 = (longlong **)plVar5[1];
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    FUN_140041b80(&local_2a8,&local_308);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_2a8);
  local_2d8 = 0xb5;
  pplVar7 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  local_30c = 6;
  local_318 = param_1;
  FUN_140e87440(&local_318,DAT_1419fe0e8,0x80000000,&local_298,
                (ulonglong)ppplVar15 & 0xffffffffffffff00,uVar18 & 0xffffffffffffff00);
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_30c = 0xf;
  local_318 = (longlong *)0x1000000000000ee;
  FUN_140e87170(&local_318,DAT_1419fe0e8,0x80000000,&local_1b8,param_1,param_2);
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  iVar4 = FUN_140e851f0(&local_298,&local_1b8,DAT_141955260,1);
  bVar12 = iVar4 == -2 || -1 < iVar4;
  if (bVar12) {
    local_30c = 0;
    local_318 = (longlong *)&DAT_bff0000000000000;
    pplVar11 = &local_318;
  }
  else {
    uStack_22c = 0;
    local_238 = (longlong *)0x3ff0000000000000;
    pplVar11 = &local_238;
  }
  uVar2 = uStack_22c;
  uVar16 = local_30c;
  FUN_140e609c0(param_1);
  if (pplVar11 != pplVar7) {
    local_308 = *pplVar11;
    uStack_300 = (longlong **)pplVar11[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar7);
    }
    FUN_140041b80(pplVar7,&local_308);
  }
  if ((bVar12) && ((1 << ((byte)uVar16 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_318);
  }
  if ((iVar4 != -2 && -1 >= iVar4) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_238);
  }
  FUN_140e60910(1);
  local_2d8 = 0xb7;
LAB_1405483c6:
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  _eh_vector_destructor_iterator_(&local_178,0x10,10,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_2e8;
  return param_3;
}

