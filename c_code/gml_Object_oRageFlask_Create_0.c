// gml_Object_oRageFlask_Create_0 @ 0x140ca5650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oRageFlask_Create_0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  code *pcVar7;
  ulonglong uVar8;
  undefined1 **ppuVar9;
  undefined8 **in_stack_fffffffffffffc90;
  ulonglong uVar10;
  undefined8 **ppuVar11;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
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
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined4 local_2e0;
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
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  local_110 = "gml_Object_oPusGlob_Destroy_0";
  local_108 = 0;
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_1e8,0x10,0xd,FUN_1400424d0,FUN_140041b30);
  uStack_20c = 0xffffff;
  local_218 = 0;
  uStack_21c = 0xffffff;
  local_228 = 0;
  local_2fc = 0xffffff;
  local_308 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_30c = 0xffffff;
  local_318 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_31c = 0xffffff;
  local_328 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_32c = 0xffffff;
  local_338 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_33c = 0xffffff;
  local_348 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_34c = 0xffffff;
  local_358 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  local_2bc = 0xffffff;
  local_2c8 = 0;
  local_2cc = 0xffffff;
  local_2d8 = 0;
  local_2dc = 0xffffff;
  local_2e8 = 0;
  local_2ec = 0xffffff;
  local_2f8 = 0;
  iVar6 = 4;
  do {
    iVar6 = iVar6 + -1;
    local_108 = 10;
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
    if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    local_2e8 = 0;
    local_2e0 = 0;
    local_2dc = 5;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    local_1fc = 6;
    uVar10 = (ulonglong)in_stack_fffffffffffffc90 & 0xffffffffffffff00;
    uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
    local_208 = param_1;
    FUN_140e87440(&local_208,DAT_1419fe0e8,0x80000000,&local_218,uVar8,uVar10);
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_1ec = 6;
    uVar10 = uVar10 & 0xffffffffffffff00;
    local_1f8 = param_1;
    FUN_140e87440(&local_1f8,DAT_1419fe158,0x80000000,&local_228,uVar8 & 0xffffffffffffff00,uVar10);
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_368 = (undefined4)local_218;
    uStack_364 = local_218._4_4_;
    uStack_360 = uStack_210;
    uStack_35c = uStack_20c;
    if ((1 << (local_1e8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_368);
    local_f8 = local_1e8;
    local_368 = (undefined4)local_228;
    uStack_364 = local_228._4_4_;
    uStack_360 = uStack_220;
    uStack_35c = uStack_21c;
    if ((1 << (local_1d8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_368);
    local_f0 = local_1d8;
    local_368 = (undefined4)DAT_1419df7b0;
    uStack_364 = DAT_1419df7b0._4_4_;
    uStack_360 = DAT_1419df7b8;
    uStack_35c = DAT_1419df7bc;
    if ((1 << (local_1c8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_368);
    local_e8 = local_1c8;
    ppuVar9 = &local_f8;
    puVar3 = (undefined8 *)FUN_14040f420(param_1,param_2,&local_298,3,ppuVar9);
    if (puVar3 != &local_308) {
      local_368 = *(undefined4 *)puVar3;
      uStack_364 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_360 = *(undefined4 *)(puVar3 + 1);
      uStack_35c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_308);
      }
      FUN_140041b80(&local_308,&local_368);
    }
    FUN_140e87440(&local_308,DAT_141a0a9f8,0x80000000,&local_238,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00,uVar10 & 0xffffffffffffff00);
    uStack_7c = 0xf;
    local_88 = 0x100000100000279;
    local_368 = 0x279;
    uStack_364 = 0x1000001;
    uStack_360 = uStack_80;
    uStack_35c = 0xf;
    if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_368);
    local_e0 = local_1b8;
    local_368 = _DAT_141dc7520;
    uStack_364 = uRam0000000141dc7524;
    uStack_360 = uRam0000000141dc7528;
    uStack_35c = uRam0000000141dc752c;
    if ((1 << (local_1a8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_368);
    local_d8 = local_1a8;
    switch(local_2fc) {
    default:
switchD_140ca5baa_caseD_1:
      uVar4 = 0;
      break;
    case 6:
      uVar4 = local_308;
      break;
    case 0xf:
      iVar1 = (int)((ulonglong)local_308 >> 0x20);
      if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140ca5baa_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar2 = FUN_140e4a8b0(&local_308);
      uVar4 = FUN_140e87250(uVar2);
    }
    ppuVar9 = &local_e0;
    puVar3 = &local_238;
    puVar5 = (undefined8 *)FUN_140e63610(uVar4,param_2,&local_2a8,2,puVar3,ppuVar9);
    if (puVar5 != &local_318) {
      local_368 = *(undefined4 *)puVar5;
      uStack_364 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_360 = *(undefined4 *)(puVar5 + 1);
      uStack_35c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      FUN_140041b80(&local_318,&local_368);
    }
    FUN_140e87440(&local_318,DAT_1419f5d48,0x80000000,&local_248,
                  (ulonglong)puVar3 & 0xffffffffffffff00,(ulonglong)ppuVar9 & 0xffffffffffffff00);
    local_368 = _DAT_1419df7c0;
    uStack_364 = uRam00000001419df7c4;
    uStack_360 = uRam00000001419df7c8;
    uStack_35c = uRam00000001419df7cc;
    if ((1 << (local_198[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_368);
    local_d0 = local_198;
    switch(local_30c) {
    default:
switchD_140ca5cbb_caseD_1:
      uVar4 = 0;
      break;
    case 6:
      uVar4 = local_318;
      break;
    case 0xf:
      iVar1 = (int)((ulonglong)local_318 >> 0x20);
      if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140ca5cbb_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar2 = FUN_140e4a8b0(&local_318);
      uVar4 = FUN_140e87250(uVar2);
    }
    ppuVar9 = &local_d0;
    puVar3 = &local_248;
    puVar5 = (undefined8 *)FUN_140e63610(uVar4,param_2,&local_2b8,1,puVar3,ppuVar9);
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
    FUN_140e87440(&local_328,DAT_141a08788,0x80000000,&local_258,
                  (ulonglong)puVar3 & 0xffffffffffffff00,(ulonglong)ppuVar9 & 0xffffffffffffff00);
    local_368 = _DAT_1419ed370;
    uStack_364 = uRam00000001419ed374;
    uStack_360 = uRam00000001419ed378;
    uStack_35c = uRam00000001419ed37c;
    if ((1 << (local_188[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_368);
    local_c8 = local_188;
    local_368 = _DAT_141dc7520;
    uStack_364 = uRam0000000141dc7524;
    uStack_360 = uRam0000000141dc7528;
    uStack_35c = uRam0000000141dc752c;
    if ((1 << (local_178[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_368);
    local_c0 = local_178;
    local_368 = _DAT_1419ed380;
    uStack_364 = uRam00000001419ed384;
    uStack_360 = uRam00000001419ed388;
    uStack_35c = uRam00000001419ed38c;
    if ((1 << (local_168[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_368);
    local_b8 = local_168;
    switch(local_31c) {
    default:
switchD_140ca5e5f_caseD_1:
      uVar4 = 0;
      break;
    case 6:
      uVar4 = local_328;
      break;
    case 0xf:
      iVar1 = (int)((ulonglong)local_328 >> 0x20);
      if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140ca5e5f_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar2 = FUN_140e4a8b0(&local_328);
      uVar4 = FUN_140e87250(uVar2);
    }
    puVar3 = (undefined8 *)FUN_140e63610(uVar4,param_2,&local_2c8,3,&local_258,&local_c8);
    if (puVar3 != &local_338) {
      local_368 = *(undefined4 *)puVar3;
      uStack_364 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_360 = *(undefined4 *)(puVar3 + 1);
      uStack_35c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_338);
      }
      FUN_140041b80(&local_338,&local_368);
    }
    FUN_140e87170(&local_338,DAT_1419f57f8,0x80000000,&local_268,param_1,param_2);
    uVar4 = FUN_140e794b0(0x9999999a,0);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_14c = 0;
    local_b0 = &local_158;
    local_158 = uVar4;
    switch(local_32c) {
    default:
switchD_140ca5f7a_caseD_1:
      uVar4 = 0;
      break;
    case 6:
      uVar4 = local_338;
      break;
    case 0xf:
      iVar1 = (int)((ulonglong)local_338 >> 0x20);
      if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140ca5f7a_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar2 = FUN_140e4a8b0(&local_338);
      uVar4 = FUN_140e87250(uVar2);
    }
    puVar3 = (undefined8 *)FUN_140e63610(uVar4,param_2,&local_2d8,1,&local_268,&local_b0);
    if (puVar3 != &local_348) {
      local_368 = *(undefined4 *)puVar3;
      uStack_364 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_360 = *(undefined4 *)(puVar3 + 1);
      uStack_35c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      FUN_140041b80(&local_348,&local_368);
    }
    FUN_140e87170(&local_348,DAT_1419f5dc8,0x80000000,&local_278,param_1,param_2);
    uVar4 = FUN_140e79480(0);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_13c = 0;
    local_a8 = &local_148;
    local_148 = uVar4;
    switch(local_33c) {
    default:
switchD_140ca608f_caseD_1:
      uVar4 = 0;
      break;
    case 6:
      uVar4 = local_348;
      break;
    case 0xf:
      iVar1 = (int)((ulonglong)local_348 >> 0x20);
      if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140ca608f_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar2 = FUN_140e4a8b0(&local_348);
      uVar4 = FUN_140e87250(uVar2);
    }
    ppuVar11 = &local_a8;
    puVar3 = &local_278;
    puVar5 = (undefined8 *)FUN_140e63610(uVar4,param_2,&local_2e8,1,puVar3,ppuVar11);
    if (puVar5 != &local_358) {
      local_368 = *(undefined4 *)puVar5;
      uStack_364 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_360 = *(undefined4 *)(puVar5 + 1);
      uStack_35c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_358);
      }
      FUN_140041b80(&local_358,&local_368);
    }
    FUN_140e87440(&local_358,DAT_1419f5bd8,0x80000000,&local_288,
                  (ulonglong)puVar3 & 0xffffffffffffff00,(ulonglong)ppuVar11 & 0xffffffffffffff00);
    uVar4 = FUN_140e79480(0);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_12c = 0;
    local_a0 = &local_138;
    local_138 = uVar4;
    uVar4 = FUN_140e794b0(0x9999999a,0x9999999a);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_11c = 0;
    local_98 = &local_128;
    local_128 = uVar4;
    switch(local_34c) {
    default:
switchD_140ca61ed_caseD_1:
      uVar4 = 0;
      break;
    case 6:
      uVar4 = local_358;
      break;
    case 0xf:
      iVar1 = (int)((ulonglong)local_358 >> 0x20);
      if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140ca61ed_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar2 = FUN_140e4a8b0(&local_358);
      uVar4 = FUN_140e87250(uVar2);
    }
    in_stack_fffffffffffffc90 = &local_a0;
    pcVar7 = (code *)&local_288;
    FUN_140e63610(uVar4,param_2,&local_2f8,2,pcVar7,in_stack_fffffffffffffc90);
    if (iVar6 < 1) {
      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2e8);
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
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_338);
      }
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_328);
      }
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_308);
      }
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      _eh_vector_destructor_iterator_(local_1e8,0x10,0xd,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_118;
      return;
    }
  } while( true );
}

