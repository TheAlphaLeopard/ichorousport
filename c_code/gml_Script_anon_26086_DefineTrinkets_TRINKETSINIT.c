// gml_Script_anon_26086_DefineTrinkets_TRINKETSINIT @ 0x140601df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_26086_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  code *pcVar8;
  ulonglong uVar9;
  undefined8 **ppuVar10;
  ulonglong in_stack_fffffffffffffc90;
  undefined1 **ppuVar11;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined4 local_350;
  undefined4 local_34c;
  undefined8 local_348;
  undefined4 local_33c;
  undefined8 local_338;
  undefined4 local_32c;
  undefined8 local_328;
  undefined4 local_31c;
  undefined8 local_318;
  undefined4 local_30c;
  undefined8 local_308;
  undefined4 local_2fc;
  undefined8 local_2f8;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
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
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  char *local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined4 local_224;
  undefined8 local_220;
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
  undefined8 local_1b8 [2];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  
  local_240 = "gml_Script_anon@25249@DefineTrinkets@TRINKETSINIT";
  local_248 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_248;
  local_238 = 0x3c8;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_1b8,0x10,0xd,FUN_1400424d0,FUN_140041b30);
  uStack_1bc = 0xffffff;
  local_1c8 = 0;
  local_2dc = 0xffffff;
  local_2e8 = 0;
  uStack_25c = 0xffffff;
  local_268 = 0;
  uStack_26c = 0xffffff;
  local_278 = 0;
  local_2ec = 0xffffff;
  local_2f8 = 0;
  local_1d4 = 0xffffff;
  local_1e0 = 0;
  local_2fc = 0xffffff;
  local_308 = 0;
  local_1e4 = 0xffffff;
  local_1f0 = 0;
  local_30c = 0xffffff;
  local_318 = 0;
  local_1f4 = 0xffffff;
  local_200 = 0;
  local_31c = 0xffffff;
  local_328 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  local_32c = 0xffffff;
  local_338 = 0;
  local_214 = 0xffffff;
  local_220 = 0;
  local_33c = 0xffffff;
  local_348 = 0;
  local_224 = 0xffffff;
  local_230 = 0;
  local_34c = 0;
  local_358 = 0;
  local_27c = 0;
  local_288 = 0;
  local_28c = 0;
  local_298 = 0;
  local_29c = 0;
  local_2a8 = 0;
  local_2ac = 0;
  local_2b8 = 0;
  local_2bc = 0;
  local_2c8 = 0;
  local_2cc = 0;
  local_2d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_238 = 0x3c9;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  FUN_140e87440(param_5,DAT_141a1f440,0x80000000,&local_1c8,uVar9,
                in_stack_fffffffffffffc90 & 0xffffffffffffff00);
  uVar3 = (undefined4)(uVar9 >> 0x20);
  local_258 = local_1c8;
  uStack_250 = uStack_1c0;
  uStack_24c = uStack_1bc;
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  FUN_140041b80(&local_2e8,&local_258);
  local_238 = 0x3ca;
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  local_358 = 0;
  local_350 = 0;
  local_34c = 5;
  local_e8 = &local_2e8;
  uVar4 = FUN_140e634e0(param_1,param_2,&local_358,1,CONCAT44(uVar3,DAT_141a02ef8),&local_e8);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_238 = 0x3ca;
  }
  else {
    iVar7 = 8;
    do {
      iVar7 = iVar7 + -1;
      local_238 = 0x3d3;
      if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      local_358 = 0;
      local_350 = 0;
      local_34c = 5;
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_288 = 0;
      local_280 = 0;
      local_27c = 5;
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
      if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      local_2b8 = 0;
      local_2b0 = 0;
      local_2ac = 5;
      if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_2c8 = 0;
      local_2c0 = 0;
      local_2bc = 5;
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      local_2d8 = 0;
      local_2d0 = 0;
      local_2cc = 5;
      FUN_140e87170(&local_2e8,DAT_1419fe0e8,0x80000000,&local_268,param_1,param_2);
      uVar9 = param_2;
      FUN_140e87170(&local_2e8,DAT_1419fe158,0x80000000,&local_278,param_1,param_2);
      local_368 = (undefined4)local_268;
      uStack_364 = local_268._4_4_;
      uStack_360 = uStack_260;
      uStack_35c = uStack_25c;
      if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b8);
      }
      FUN_140041b80(local_1b8,&local_368);
      local_e8 = local_1b8;
      local_368 = (undefined4)local_278;
      uStack_364 = local_278._4_4_;
      uStack_360 = uStack_270;
      uStack_35c = uStack_26c;
      if ((1 << (local_1a8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a8);
      }
      FUN_140041b80(local_1a8,&local_368);
      local_e0 = local_1a8;
      local_368 = (undefined4)DAT_1419df7b0;
      uStack_364 = DAT_1419df7b0._4_4_;
      uStack_360 = DAT_1419df7b8;
      uStack_35c = DAT_1419df7bc;
      if ((1 << (local_198[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_368);
      local_d8 = local_198;
      ppuVar10 = &local_e8;
      puVar5 = (undefined8 *)FUN_14040f420(param_1,param_2,&local_358,3,ppuVar10);
      if (puVar5 != &local_2f8) {
        local_368 = *(undefined4 *)puVar5;
        uStack_364 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_360 = *(undefined4 *)(puVar5 + 1);
        uStack_35c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f8);
        }
        FUN_140041b80(&local_2f8,&local_368);
      }
      FUN_140e87440(&local_2f8,DAT_141a0a9f8,0x80000000,&local_1e0,
                    (ulonglong)ppuVar10 & 0xffffffffffffff00,uVar9 & 0xffffffffffffff00);
      uStack_24c = 0xf;
      local_258 = 0x100000100000279;
      local_368 = 0x279;
      uStack_364 = 0x1000001;
      uStack_360 = uStack_250;
      uStack_35c = 0xf;
      if ((1 << (local_188[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_368);
      local_d0 = local_188;
      local_368 = _DAT_141dc6760;
      uStack_364 = uRam0000000141dc6764;
      uStack_360 = uRam0000000141dc6768;
      uStack_35c = uRam0000000141dc676c;
      if ((1 << (local_178[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_368);
      local_c8 = local_178;
      switch(local_2ec) {
      default:
switchD_14060244d_caseD_1:
        uVar4 = 0;
        break;
      case 6:
        uVar4 = local_2f8;
        break;
      case 0xf:
        iVar2 = (int)((ulonglong)local_2f8 >> 0x20);
        if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_14060244d_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar3 = FUN_140e4a8b0(&local_2f8);
        uVar4 = FUN_140e87250(uVar3);
      }
      ppuVar11 = &local_d0;
      puVar5 = &local_1e0;
      puVar6 = (undefined8 *)FUN_140e63610(uVar4,param_2,&local_288,2,puVar5,ppuVar11);
      if (puVar6 != &local_308) {
        local_368 = *(undefined4 *)puVar6;
        uStack_364 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_360 = *(undefined4 *)(puVar6 + 1);
        uStack_35c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_308);
        }
        FUN_140041b80(&local_308,&local_368);
      }
      FUN_140e87440(&local_308,DAT_1419f5d48,0x80000000,&local_1f0,
                    (ulonglong)puVar5 & 0xffffffffffffff00,(ulonglong)ppuVar11 & 0xffffffffffffff00)
      ;
      local_368 = _DAT_1419df7c0;
      uStack_364 = uRam00000001419df7c4;
      uStack_360 = uRam00000001419df7c8;
      uStack_35c = uRam00000001419df7cc;
      if ((1 << (local_168[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_168);
      }
      FUN_140041b80(local_168,&local_368);
      local_c0 = local_168;
      switch(local_2fc) {
      default:
switchD_140602564_caseD_1:
        uVar4 = 0;
        break;
      case 6:
        uVar4 = local_308;
        break;
      case 0xf:
        iVar2 = (int)((ulonglong)local_308 >> 0x20);
        if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140602564_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar3 = FUN_140e4a8b0(&local_308);
        uVar4 = FUN_140e87250(uVar3);
      }
      ppuVar11 = &local_c0;
      puVar5 = &local_1f0;
      puVar6 = (undefined8 *)FUN_140e63610(uVar4,param_2,&local_298,1,puVar5,ppuVar11);
      if (puVar6 != &local_318) {
        local_368 = *(undefined4 *)puVar6;
        uStack_364 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_360 = *(undefined4 *)(puVar6 + 1);
        uStack_35c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        FUN_140041b80(&local_318,&local_368);
      }
      FUN_140e87440(&local_318,DAT_141a08788,0x80000000,&local_200,
                    (ulonglong)puVar5 & 0xffffffffffffff00,(ulonglong)ppuVar11 & 0xffffffffffffff00)
      ;
      local_368 = _DAT_1419e6a40;
      uStack_364 = uRam00000001419e6a44;
      uStack_360 = uRam00000001419e6a48;
      uStack_35c = uRam00000001419e6a4c;
      if ((1 << (local_158[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_368);
      local_b8 = local_158;
      local_368 = _DAT_141dc6760;
      uStack_364 = uRam0000000141dc6764;
      uStack_360 = uRam0000000141dc6768;
      uStack_35c = uRam0000000141dc676c;
      if ((1 << (local_148[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_368);
      local_b0 = local_148;
      local_368 = _DAT_1419e6a70;
      uStack_364 = uRam00000001419e6a74;
      uStack_360 = uRam00000001419e6a78;
      uStack_35c = uRam00000001419e6a7c;
      if ((1 << (local_138[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_368);
      local_a8 = local_138;
      switch(local_30c) {
      default:
switchD_140602708_caseD_1:
        uVar4 = 0;
        break;
      case 6:
        uVar4 = local_318;
        break;
      case 0xf:
        iVar2 = (int)((ulonglong)local_318 >> 0x20);
        if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140602708_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar3 = FUN_140e4a8b0(&local_318);
        uVar4 = FUN_140e87250(uVar3);
      }
      puVar5 = (undefined8 *)FUN_140e63610(uVar4,param_2,&local_2a8,3,&local_200,&local_b8);
      if (puVar5 != &local_328) {
        local_368 = *(undefined4 *)puVar5;
        uStack_364 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_360 = *(undefined4 *)(puVar5 + 1);
        uStack_35c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_328);
        }
        FUN_140041b80(&local_328,&local_368);
      }
      FUN_140e87170(&local_328,DAT_1419f57f8,0x80000000,&local_210,param_1,param_2);
      uVar4 = FUN_140e794b0(0x9999999a,0);
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_11c = 0;
      local_a0 = &local_128;
      local_128 = uVar4;
      switch(local_31c) {
      default:
switchD_140602826_caseD_1:
        uVar4 = 0;
        break;
      case 6:
        uVar4 = local_328;
        break;
      case 0xf:
        iVar2 = (int)((ulonglong)local_328 >> 0x20);
        if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140602826_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar3 = FUN_140e4a8b0(&local_328);
        uVar4 = FUN_140e87250(uVar3);
      }
      puVar5 = (undefined8 *)FUN_140e63610(uVar4,param_2,&local_2b8,1,&local_210,&local_a0);
      if (puVar5 != &local_338) {
        local_368 = *(undefined4 *)puVar5;
        uStack_364 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_360 = *(undefined4 *)(puVar5 + 1);
        uStack_35c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_338);
        }
        FUN_140041b80(&local_338,&local_368);
      }
      FUN_140e87170(&local_338,DAT_1419f5dc8,0x80000000,&local_220,param_1,param_2);
      uVar4 = FUN_140e79480(0);
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      local_10c = 0;
      local_98 = &local_118;
      local_118 = uVar4;
      switch(local_32c) {
      default:
switchD_14060293e_caseD_1:
        uVar4 = 0;
        break;
      case 6:
        uVar4 = local_338;
        break;
      case 0xf:
        iVar2 = (int)((ulonglong)local_338 >> 0x20);
        if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_14060293e_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar3 = FUN_140e4a8b0(&local_338);
        uVar4 = FUN_140e87250(uVar3);
      }
      ppuVar10 = &local_98;
      puVar5 = &local_220;
      puVar6 = (undefined8 *)FUN_140e63610(uVar4,param_2,&local_2c8,1,puVar5,ppuVar10);
      if (puVar6 != &local_348) {
        local_368 = *(undefined4 *)puVar6;
        uStack_364 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_360 = *(undefined4 *)(puVar6 + 1);
        uStack_35c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_348);
        }
        FUN_140041b80(&local_348,&local_368);
      }
      FUN_140e87440(&local_348,DAT_1419f5bd8,0x80000000,&local_230,
                    (ulonglong)puVar5 & 0xffffffffffffff00,(ulonglong)ppuVar10 & 0xffffffffffffff00)
      ;
      uVar4 = FUN_140e79480(0);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_fc = 0;
      local_90 = &local_108;
      local_108 = uVar4;
      uVar4 = FUN_140e794b0(0x9999999a,0x9999999a);
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_ec = 0;
      local_88 = &local_f8;
      local_f8 = uVar4;
      switch(local_33c) {
      default:
switchD_140602a9c_caseD_1:
        uVar4 = 0;
        break;
      case 6:
        uVar4 = local_348;
        break;
      case 0xf:
        iVar2 = (int)((ulonglong)local_348 >> 0x20);
        if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140602a9c_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar3 = FUN_140e4a8b0(&local_348);
        uVar4 = FUN_140e87250(uVar3);
      }
      FUN_140e63610(uVar4,param_2,&local_2d8,2,&local_230,&local_90);
    } while (0 < iVar7);
    iVar7 = 4;
    do {
      iVar7 = iVar7 + -1;
      local_238 = 0x3d7;
      if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      local_358 = 0;
      local_350 = 0;
      local_34c = 5;
      FUN_140e87170(&local_2e8,DAT_1419fe0e8,0x80000000,&local_268,param_1,param_2);
      uVar4 = param_1;
      FUN_140e87170(&local_2e8,DAT_1419fe158,0x80000000,&local_278,param_1,param_2);
      uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
      local_368 = (undefined4)local_268;
      uStack_364 = local_268._4_4_;
      uStack_360 = uStack_260;
      uStack_35c = uStack_25c;
      if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b8);
      }
      FUN_140041b80(local_1b8,&local_368);
      local_e8 = local_1b8;
      local_368 = (undefined4)local_278;
      uStack_364 = local_278._4_4_;
      uStack_360 = uStack_270;
      uStack_35c = uStack_26c;
      if ((1 << (local_1a8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a8);
      }
      FUN_140041b80(local_1a8,&local_368);
      local_e0 = local_1a8;
      local_368 = _DAT_141dd4d78;
      uStack_364 = uRam0000000141dd4d7c;
      uStack_360 = uRam0000000141dd4d80;
      uStack_35c = DAT_141dd4d84;
      if ((1 << (local_198[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_368);
      local_d8 = local_198;
      uStack_24c = 0xf;
      local_258 = 0x1000000000000f6;
      local_368 = 0xf6;
      uStack_364 = 0x1000000;
      uStack_360 = uStack_250;
      uStack_35c = 0xf;
      if ((1 << (local_188[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_368);
      local_d0 = local_188;
      FUN_140e634e0(param_1,param_2,&local_358,4,CONCAT44(uVar3,DAT_141a0a7c8),&local_e8);
    } while (0 < iVar7);
  }
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_230);
  }
  if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  _eh_vector_destructor_iterator_(local_1b8,0x10,0xd,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_248;
  return param_3;
}

