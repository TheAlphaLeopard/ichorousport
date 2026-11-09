// gml_Object_oEnemyMoistMan_Create_0 @ 0x1409d90f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oEnemyMoistMan_Create_0(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 **ppuVar10;
  ulonglong uVar11;
  undefined1 **ppuVar12;
  undefined8 local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined8 local_238;
  char *local_230;
  undefined4 local_228;
  longlong *local_220;
  undefined4 local_218;
  undefined4 local_214;
  longlong *local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  
  local_230 = "gml_Object_oEnemyFreezeOverlay_Step_0";
  local_228 = 0;
  local_238 = DAT_141dc7a50;
  uVar7 = 1;
  DAT_141dc7a50 = &local_238;
  _eh_vector_constructor_iterator_(&local_158,0x10,0xb,FUN_1400424d0,FUN_140041b30);
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_1e4 = 0xffffff;
  local_1f0 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  local_1f4 = 0xffffff;
  local_200 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_204 = 0xffffff;
  local_210 = (longlong *)0x0;
  local_214 = 0xffffff;
  local_220 = (longlong *)0x0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  local_2bc = 0xffffff;
  local_2c8 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_2cc = 0xffffff;
  local_2d8 = 0;
  local_1c4 = 0xffffff;
  local_1d0 = 0;
  local_2dc = 0xffffff;
  local_2e8 = 0;
  local_1d4 = 0xffffff;
  local_1e0 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_28c = 0xffffff;
  local_298 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_228 = 2;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar4 != &local_158) {
    local_308 = (longlong *)*puVar4;
    uStack_300 = *(undefined4 *)(puVar4 + 1);
    uStack_2fc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_308);
  }
  local_a8 = &local_158;
  uVar5 = FUN_140e634e0(param_1,param_2,&local_298,1,CONCAT44(uVar7,DAT_141a02ef8),&local_a8);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_228 = 4;
    FUN_140edd0e0(param_1,param_2,0,0);
    local_228 = 5;
    goto LAB_1409d9fdf;
  }
  local_228 = 9;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_168,param_1,param_2);
  local_308 = (longlong *)local_168;
  uStack_300 = uStack_160;
  uStack_2fc = uStack_15c;
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  FUN_140041b80(&local_1f0,&local_308);
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_1f0);
  local_228 = 10;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  plVar8 = param_1;
  uVar11 = param_2;
  FUN_140e87170(uVar5,DAT_1419fe158,0x80000000,&local_178,param_1,param_2);
  local_308 = (longlong *)local_178;
  uStack_300 = uStack_170;
  uStack_2fc = uStack_16c;
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  FUN_140041b80(&local_200,&local_308);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_200);
  local_228 = 0xc;
  uStack_2fc = 6;
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar9 = (ulonglong)plVar8 & 0xffffffffffffff00;
  local_308 = param_1;
  FUN_140e87440(&local_308,DAT_141a0a7e8,0,&local_190,uVar9,uVar11);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  uStack_2fc = 0;
  local_308 = (longlong *)&DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(&local_190,&local_308,DAT_141955260,0);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  if (iVar2 != 0) goto LAB_1409d9fdf;
  local_228 = 0xe;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f1188);
  uStack_2fc = 0;
  local_308 = (longlong *)0x4039000000000000;
  iVar2 = FUN_140e851f0(uVar5,&local_308,DAT_141955260,1);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  if (iVar2 < 1) goto LAB_1409d9fab;
  local_228 = 0x15;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_288 = 0;
  local_280 = 0;
  local_27c = 5;
  uStack_2fc = 6;
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_308 = param_1;
  FUN_140e87440(&local_308,DAT_1419fe0e8,0x80000000,&local_210,uVar9,uVar11);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  uStack_2fc = 6;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_308 = param_1;
  FUN_140e87440(&local_308,DAT_1419fe158,0x80000000,&local_220,uVar9 & 0xffffffffffffff00,uVar11);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  uVar7 = FUN_140e794b0(0,0);
  uStack_2fc = local_204;
  uStack_300 = local_208;
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) == 0) {
    local_308 = local_210;
  }
  else {
    FUN_1400419b0(&local_308,&local_210);
  }
  FUN_140162c50(&local_308,uVar7);
  local_2f8 = (undefined4)local_308;
  uStack_2f4 = local_308._4_4_;
  uStack_2f0 = uStack_300;
  uStack_2ec = uStack_2fc;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_2f8);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_a8 = &local_158;
  uVar7 = FUN_140e794b0(0,0);
  uStack_2fc = local_214;
  uStack_300 = local_218;
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) == 0) {
    local_308 = local_220;
  }
  else {
    FUN_1400419b0(&local_308,&local_220);
  }
  FUN_140162c50(&local_308,uVar7);
  local_2f8 = (undefined4)local_308;
  uStack_2f4 = local_308._4_4_;
  uStack_2f0 = uStack_300;
  uStack_2ec = uStack_2fc;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_2f8);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_a0 = local_148;
  local_2f8 = _DAT_1419df7c0;
  uStack_2f4 = uRam00000001419df7c4;
  uStack_2f0 = uRam00000001419df7c8;
  uStack_2ec = uRam00000001419df7cc;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_2f8);
  local_98 = local_138;
  ppuVar10 = &local_a8;
  puVar4 = (undefined8 *)FUN_14040f420(param_1,param_2,&local_298,3,ppuVar10);
  if (puVar4 != &local_2a8) {
    local_2f8 = *(undefined4 *)puVar4;
    uStack_2f4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_2f0 = *(undefined4 *)(puVar4 + 1);
    uStack_2ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    FUN_140041b80(&local_2a8,&local_2f8);
  }
  FUN_140e87440(&local_2a8,DAT_141a0a9f8,0x80000000,&local_1a0,
                (ulonglong)ppuVar10 & 0xffffffffffffff00,uVar11 & 0xffffffffffffff00);
  uStack_2fc = 0xf;
  local_308 = (longlong *)0x100000100000183;
  local_2f8 = 0x183;
  uStack_2f4 = 0x1000001;
  uStack_2f0 = uStack_300;
  uStack_2ec = 0xf;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_2f8);
  local_90 = local_128;
  local_2f8 = _DAT_1419eaa20;
  uStack_2f4 = uRam00000001419eaa24;
  uStack_2f0 = uRam00000001419eaa28;
  uStack_2ec = uRam00000001419eaa2c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_2f8);
  local_88 = local_118;
  local_2f8 = _DAT_141dc6ed0;
  uStack_2f4 = uRam0000000141dc6ed4;
  uStack_2f0 = uRam0000000141dc6ed8;
  uStack_2ec = uRam0000000141dc6edc;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_2f8);
  local_80 = local_108;
  switch(local_29c) {
  default:
switchD_1409d9a74_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_2a8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_2a8 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1409d9a74_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar7 = FUN_140e4a8b0(&local_2a8);
    uVar5 = FUN_140e87250(uVar7);
  }
  puVar4 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_248,3,&local_1a0,&local_90);
  if (puVar4 != &local_2b8) {
    local_2f8 = *(undefined4 *)puVar4;
    uStack_2f4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_2f0 = *(undefined4 *)(puVar4 + 1);
    uStack_2ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    FUN_140041b80(&local_2b8,&local_2f8);
  }
  FUN_140e87170(&local_2b8,DAT_1419f57f8,0x80000000,&local_1b0,param_1,param_2);
  local_2f8 = _DAT_141dc6ed0;
  uStack_2f4 = uRam0000000141dc6ed4;
  uStack_2f0 = uRam0000000141dc6ed8;
  uStack_2ec = uRam0000000141dc6edc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_2f8);
  local_78 = local_f8;
  switch(local_2ac) {
  default:
switchD_1409d9b8a_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_2b8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_2b8 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1409d9b8a_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar7 = FUN_140e4a8b0(&local_2b8);
    uVar5 = FUN_140e87250(uVar7);
  }
  ppuVar12 = &local_78;
  puVar4 = &local_1b0;
  puVar6 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_258,1,puVar4,ppuVar12);
  if (puVar6 != &local_2c8) {
    local_2f8 = *(undefined4 *)puVar6;
    uStack_2f4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_2f0 = *(undefined4 *)(puVar6 + 1);
    uStack_2ec = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    FUN_140041b80(&local_2c8,&local_2f8);
  }
  FUN_140e87440(&local_2c8,DAT_1419f5d48,0x80000000,&local_1c0,
                (ulonglong)puVar4 & 0xffffffffffffff00,(ulonglong)ppuVar12 & 0xffffffffffffff00);
  local_2f8 = _DAT_1419df7a0;
  uStack_2f4 = uRam00000001419df7a4;
  uStack_2f0 = uRam00000001419df7a8;
  uStack_2ec = uRam00000001419df7ac;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_2f8);
  local_70 = local_e8;
  switch(local_2bc) {
  default:
switchD_1409d9ca0_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_2c8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_2c8 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1409d9ca0_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar7 = FUN_140e4a8b0(&local_2c8);
    uVar5 = FUN_140e87250(uVar7);
  }
  ppuVar12 = &local_70;
  puVar4 = &local_1c0;
  puVar6 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_268,1,puVar4,ppuVar12);
  if (puVar6 != &local_2d8) {
    local_2f8 = *(undefined4 *)puVar6;
    uStack_2f4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_2f0 = *(undefined4 *)(puVar6 + 1);
    uStack_2ec = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    FUN_140041b80(&local_2d8,&local_2f8);
  }
  FUN_140e87440(&local_2d8,DAT_141a08788,0x80000000,&local_1d0,
                (ulonglong)puVar4 & 0xffffffffffffff00,(ulonglong)ppuVar12 & 0xffffffffffffff00);
  local_2f8 = _DAT_1419eaa20;
  uStack_2f4 = uRam00000001419eaa24;
  uStack_2f0 = uRam00000001419eaa28;
  uStack_2ec = uRam00000001419eaa2c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_2f8);
  local_68 = local_d8;
  switch(local_2cc) {
  default:
switchD_1409d9db6_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_2d8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_2d8 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1409d9db6_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar7 = FUN_140e4a8b0(&local_2d8);
    uVar5 = FUN_140e87250(uVar7);
  }
  ppuVar12 = &local_68;
  puVar4 = &local_1d0;
  puVar6 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_278,1,puVar4,ppuVar12);
  if (puVar6 != &local_2e8) {
    local_2f8 = *(undefined4 *)puVar6;
    uStack_2f4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_2f0 = *(undefined4 *)(puVar6 + 1);
    uStack_2ec = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    FUN_140041b80(&local_2e8,&local_2f8);
  }
  FUN_140e87440(&local_2e8,DAT_1419f61a8,0x80000000,&local_1e0,
                (ulonglong)puVar4 & 0xffffffffffffff00,(ulonglong)ppuVar12 & 0xffffffffffffff00);
  local_2f8 = _DAT_1419eaa30;
  uStack_2f4 = uRam00000001419eaa34;
  uStack_2f0 = uRam00000001419eaa38;
  uStack_2ec = uRam00000001419eaa3c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_2f8);
  local_60 = local_c8;
  local_2f8 = _DAT_1419df7c0;
  uStack_2f4 = uRam00000001419df7c4;
  uStack_2f0 = uRam00000001419df7c8;
  uStack_2ec = uRam00000001419df7cc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_2f8);
  local_58 = local_b8;
  switch(local_2dc) {
  default:
switchD_1409d9f14_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_2e8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_2e8 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1409d9f14_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar7 = FUN_140e4a8b0(&local_2e8);
    uVar5 = FUN_140e87250(uVar7);
  }
  FUN_140e63610(uVar5,param_2,&local_288,2,&local_1e0,&local_60);
  local_228 = 0x18;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f1188);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
LAB_1409d9fab:
  local_228 = 0x1a;
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f1188);
  FUN_140e609c0(param_1);
  FUN_1400460e0(uVar5,uVar3);
  FUN_140e60910(1);
LAB_1409d9fdf:
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(&local_158,0x10,0xb,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_238;
  return;
}

