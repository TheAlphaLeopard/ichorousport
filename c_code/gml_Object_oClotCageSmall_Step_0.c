// gml_Object_oClotCageSmall_Step_0 @ 0x1408a8e90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oClotCageSmall_Step_0(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_res18;
  undefined8 *local_res20;
  code *pcVar14;
  ulonglong uVar15;
  undefined8 **ppuVar16;
  undefined8 **ppuVar17;
  ulonglong in_stack_fffffffffffffa90;
  ulonglong uVar18;
  undefined1 **ppuVar19;
  undefined8 local_568;
  undefined4 uStack_560;
  uint uStack_55c;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  longlong *local_548;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined8 local_538;
  undefined4 local_530;
  undefined4 local_52c;
  longlong *local_528;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined8 local_518;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  longlong *local_508;
  undefined4 local_500;
  uint local_4fc;
  undefined8 local_4f8;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  longlong *local_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined8 local_4b8;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined8 local_4a8;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined8 local_498;
  char *local_490;
  undefined4 local_488;
  undefined8 local_478;
  byte local_46c;
  undefined1 local_468 [12];
  byte local_45c;
  undefined1 local_458 [12];
  byte local_44c;
  undefined1 local_448 [12];
  byte local_43c;
  undefined8 local_438;
  undefined4 local_42c;
  undefined1 local_428 [12];
  byte local_41c;
  undefined8 local_418;
  undefined4 local_40c;
  undefined1 local_408 [12];
  byte local_3fc;
  undefined1 local_3f8 [12];
  byte local_3ec;
  undefined8 local_3e8;
  undefined4 local_3dc;
  undefined8 local_3d8;
  undefined4 local_3cc;
  undefined1 local_3c8 [12];
  byte local_3bc;
  undefined1 local_3b8 [12];
  byte local_3ac;
  double local_3a8;
  undefined4 local_39c;
  undefined8 local_398;
  undefined4 local_38c;
  undefined8 local_388;
  undefined4 local_37c;
  undefined8 local_378;
  undefined4 local_36c;
  undefined8 local_368;
  undefined4 local_35c;
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
  undefined4 local_2ec;
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
  undefined8 *local_298;
  undefined1 *local_290;
  undefined1 *local_288;
  undefined1 *local_280;
  undefined8 *local_278;
  undefined1 *local_270;
  undefined8 *local_268;
  undefined1 *local_260;
  undefined1 *local_258;
  undefined8 *local_250;
  undefined8 *local_248;
  undefined1 *local_240;
  undefined1 *local_238;
  double *local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined8 *local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 *local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_174;
  undefined8 *local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  
  local_490 = "gml_Object_oClotCage_Step_0";
  local_488 = 0;
  local_498 = DAT_141dc7a50;
  pcVar14 = FUN_140041b30;
  DAT_141dc7a50 = &local_498;
  _eh_vector_constructor_iterator_(&local_478,0x10,0xe,FUN_1400424d0,FUN_140041b30);
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_1ec = 0xffffff;
  local_1f8 = 0;
  uStack_50c = 0xffffff;
  local_518 = (longlong *)0x0;
  uStack_4ec = 0xffffff;
  local_4f8 = (longlong *)0x0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_2bc = 0xffffff;
  local_2c8 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_2cc = 0xffffff;
  local_2d8 = 0;
  local_164 = 0xffffff;
  local_170 = (undefined8 *)0x0;
  local_2dc = 0xffffff;
  local_2e8 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_2ec = 0xffffff;
  local_2f8 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_2fc = 0xffffff;
  local_308 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_30c = 0xffffff;
  local_318 = 0;
  local_19c = 0xffffff;
  local_1a8 = (undefined8 *)0x0;
  local_31c = 0xffffff;
  local_328 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_32c = 0xffffff;
  local_338 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_33c = 0xffffff;
  local_348 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_38c = 0xffffff;
  local_398 = 0;
  local_1dc = 0xffffff;
  local_1e8 = (undefined8 *)0x0;
  local_34c = 0xffffff;
  local_358 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_35c = 0xffffff;
  local_368 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_36c = 0xffffff;
  local_378 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_37c = 0xffffff;
  local_388 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_52c = 0xffffff;
  local_538 = 0;
  local_49c = 0xffffff;
  local_4a8 = 0;
  local_4cc = 0xffffff;
  local_4d8 = 0;
  local_4ac = 0xffffff;
  local_4b8 = 0;
  local_4bc = 0xffffff;
  local_4c8 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_488 = 2;
  local_198 = uVar6;
  uVar7 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_55c = 0;
  local_568 = (longlong *)0x3fc999999999999a;
  FUN_140042560(&local_568,uVar6);
  FUN_1400460e0(uVar7,&local_568);
  if ((1 << ((byte)uStack_55c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_568);
  }
  local_res18 = 4;
  local_488 = 4;
  local_res20 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  uStack_55c = 6;
  in_stack_fffffffffffffa90 = in_stack_fffffffffffffa90 & 0xffffffffffffff00;
  uVar15 = (ulonglong)pcVar14 & 0xffffffffffffff00;
  local_568 = param_1;
  FUN_140e87440(&local_568,DAT_1419fe0e8,0x80000000,&local_1f8,uVar15,in_stack_fffffffffffffa90);
  if ((1 << ((byte)uStack_55c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_568);
  }
  local_4fc = *(undefined4 *)((longlong)local_res20 + 0xc);
  local_500 = *(undefined4 *)(local_res20 + 1);
  if ((1 << ((byte)local_4fc & 0x1f) & 0x46U) == 0) {
    local_508 = (longlong *)*local_res20;
  }
  else {
    FUN_1400419b0(&local_508,local_res20);
  }
  FUN_140042560(&local_508,uVar6);
  FUN_1400460e0(&local_1f8,&local_508);
  if ((1 << ((byte)local_4fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_508);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_1f8);
  local_488 = 6;
  if ((1 << ((byte)local_52c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_538);
  }
  local_538 = 0;
  local_530 = 0;
  local_52c = 5;
  uStack_55c = 6;
  in_stack_fffffffffffffa90 = in_stack_fffffffffffffa90 & 0xffffffffffffff00;
  uVar15 = uVar15 & 0xffffffffffffff00;
  local_568 = param_1;
  FUN_140e87440(&local_568,DAT_1419fe0e8,0x80000000,&local_518,uVar15,in_stack_fffffffffffffa90);
  if ((1 << ((byte)uStack_55c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_568);
  }
  uStack_55c = 6;
  uVar15 = uVar15 & 0xffffffffffffff00;
  local_568 = param_1;
  FUN_140e87440(&local_568,DAT_1419fe158,0x80000000,&local_4f8,uVar15,
                in_stack_fffffffffffffa90 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar15 >> 0x20);
  if ((1 << ((byte)uStack_55c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_568);
  }
  local_4fc = *(uint *)((longlong)local_res20 + 0xc);
  local_500 = *(undefined4 *)(local_res20 + 1);
  if ((1 << ((byte)local_4fc & 0x1f) & 0x46U) == 0) {
    local_508 = (longlong *)*local_res20;
  }
  else {
    FUN_1400419b0(&local_508,local_res20);
  }
  uStack_53c = 0;
  local_548 = (longlong *)0x3ff3333333333333;
  FUN_140042560(&local_508,&local_548);
  if ((1 << ((byte)uStack_53c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_548);
  }
  uStack_55c = local_4fc;
  uStack_560 = local_500;
  if ((1 << ((byte)local_4fc & 0x1f) & 0x46U) == 0) {
    local_568 = local_508;
  }
  else {
    FUN_1400419b0(&local_568,&local_508);
  }
  FUN_140042560(&local_568,uVar6);
  uStack_51c = uStack_50c;
  uStack_520 = uStack_510;
  if ((1 << ((byte)uStack_50c & 0x1f) & 0x46U) == 0) {
    local_528 = local_518;
  }
  else {
    FUN_1400419b0(&local_528,&local_518);
  }
  FUN_1400460e0(&local_528,&local_568);
  local_4e8 = local_528;
  uStack_4e0 = uStack_520;
  uStack_4dc = uStack_51c;
  if ((1 << ((byte)_local_46c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_478);
  }
  FUN_140041b80(&local_478,&local_4e8);
  if ((1 << ((byte)uStack_51c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_528);
  }
  if ((1 << ((byte)uStack_55c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_568);
  }
  if ((1 << ((byte)local_4fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_508);
  }
  local_298 = &local_478;
  uStack_55c = uStack_4ec;
  uStack_560 = uStack_4f0;
  if ((1 << ((byte)uStack_4ec & 0x1f) & 0x46U) == 0) {
    local_568 = local_4f8;
  }
  else {
    FUN_1400419b0(&local_568,&local_4f8);
  }
  uStack_53c = 7;
  local_548 = (longlong *)CONCAT44(local_548._4_4_,2);
  FUN_1400462a0(&local_568,&local_548);
  if ((1 << ((byte)uStack_53c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_548);
  }
  local_4e8 = local_568;
  uStack_4e0 = uStack_560;
  uStack_4dc = uStack_55c;
  if ((1 << ((byte)_local_45c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_468);
  }
  FUN_140041b80(local_468,&local_4e8);
  if ((1 << ((byte)uStack_55c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_568);
  }
  local_290 = local_468;
  uStack_53c = 0xf;
  local_548 = (longlong *)0x100000000000149;
  local_4e8 = (longlong *)0x100000000000149;
  uStack_4e0 = uStack_540;
  uStack_4dc = 0xf;
  if ((1 << ((byte)_local_44c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_458);
  }
  FUN_140041b80(local_458,&local_4e8);
  local_288 = local_458;
  ppuVar17 = &local_298;
  uVar15 = CONCAT44(uVar13,DAT_141a12628);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_538,3,uVar15,ppuVar17);
  cVar3 = FUN_140e491e0(uVar7);
  if (cVar3 != '\0') {
    local_res20 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0ab48);
    uStack_55c = DAT_141dd7594;
    uStack_560 = DAT_141dd7590;
    if ((1 << ((byte)DAT_141dd7594 & 0x1f) & 0x46U) == 0) {
      local_568 = (longlong *)CONCAT44(DAT_141dd7588._4_4_,(undefined4)DAT_141dd7588);
    }
    else {
      FUN_1400419b0(&local_568,&DAT_141dd7588);
    }
    iVar4 = FUN_140e851f0(uVar7,&local_568,DAT_141955260,0);
    if ((1 << ((byte)uStack_55c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_568);
    }
    if (iVar4 == 0) {
      local_488 = 8;
      FUN_140edd0e0(param_1,param_2,0,0);
      local_488 = 9;
      goto LAB_1408acb0d;
    }
  }
  local_488 = 0xc;
  if ((1 << ((byte)local_52c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_538);
  }
  local_538 = 0;
  local_530 = 0;
  local_52c = 5;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  uStack_53c = 6;
  uVar18 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
  uVar15 = uVar15 & 0xffffffffffffff00;
  local_548 = param_1;
  FUN_140e87440(&local_548,DAT_1419fe0e8,0x80000000,&local_518,uVar15,uVar18);
  if ((1 << ((byte)uStack_53c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_548);
  }
  uStack_53c = 6;
  uVar15 = uVar15 & 0xffffffffffffff00;
  local_548 = param_1;
  FUN_140e87440(&local_548,DAT_1419fe158,0x80000000,&local_4f8,uVar15,uVar18 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar15 >> 0x20);
  if ((1 << ((byte)uStack_53c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_548);
  }
  local_4e8 = local_518;
  uStack_4e0 = uStack_510;
  uStack_4dc = uStack_50c;
  if ((1 << ((byte)_local_46c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_478);
  }
  FUN_140041b80(&local_478,&local_4e8);
  local_298 = &local_478;
  uStack_51c = *(undefined4 *)((longlong)puVar8 + 0xc);
  uStack_520 = *(undefined4 *)(puVar8 + 1);
  if ((1 << ((byte)uStack_51c & 0x1f) & 0x46U) == 0) {
    local_528 = (longlong *)*puVar8;
  }
  else {
    FUN_1400419b0(&local_528,puVar8);
  }
  FUN_140042560(&local_528,uVar6);
  uStack_55c = uStack_4ec;
  uStack_560 = uStack_4f0;
  if ((1 << ((byte)uStack_4ec & 0x1f) & 0x46U) == 0) {
    local_568 = local_4f8;
  }
  else {
    FUN_1400419b0(&local_568,&local_4f8);
  }
  FUN_1400460e0(&local_568,&local_528);
  local_4e8 = local_568;
  uStack_4e0 = uStack_560;
  uStack_4dc = uStack_55c;
  if ((1 << ((byte)_local_45c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_468);
  }
  FUN_140041b80(local_468,&local_4e8);
  if ((1 << ((byte)uStack_55c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_568);
  }
  if ((1 << ((byte)uStack_51c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_528);
  }
  local_290 = local_468;
  uStack_53c = 0xf;
  local_548 = (longlong *)0x100000000000149;
  local_4e8 = (longlong *)0x100000000000149;
  uStack_4e0 = uStack_540;
  uStack_4dc = 0xf;
  if ((1 << ((byte)_local_44c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_458);
  }
  FUN_140041b80(local_458,&local_4e8);
  local_288 = local_458;
  ppuVar17 = &local_298;
  uVar15 = CONCAT44(uVar13,DAT_141a12628);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_538,3,uVar15,ppuVar17);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 == '\0') {
    local_488 = 0xd;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    uStack_53c = 6;
    uVar15 = uVar15 & 0xffffffffffffff00;
    local_548 = param_1;
    FUN_140e87440(&local_548,DAT_1419fe158,0x80000000,&local_218,uVar15,
                  (ulonglong)ppuVar17 & 0xffffffffffffff00);
    uVar13 = (undefined4)(uVar15 >> 0x20);
    if ((1 << ((byte)uStack_53c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_548);
    }
    uStack_55c = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_560 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_55c & 0x1f) & 0x46U) == 0) {
      local_568 = (longlong *)*puVar8;
    }
    else {
      FUN_1400419b0(&local_568,puVar8);
    }
    uVar6 = local_198;
    FUN_140042560(&local_568,local_198);
    FUN_1400460e0(&local_218,&local_568);
    if ((1 << ((byte)uStack_55c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_568);
    }
    FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_218);
  }
  else {
    local_488 = 0x10;
    while( true ) {
      if ((1 << ((byte)local_52c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_538);
      }
      local_538 = 0;
      local_530 = 0;
      local_52c = 5;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
      uStack_53c = 6;
      uVar18 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      local_548 = param_1;
      FUN_140e87440(&local_548,DAT_1419fe0e8,0x80000000,&local_518,uVar15,uVar18);
      if ((1 << ((byte)uStack_53c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_548);
      }
      uStack_51c = 6;
      uVar15 = uVar15 & 0xffffffffffffff00;
      local_528 = param_1;
      FUN_140e87440(&local_528,DAT_1419fe158,0x80000000,&local_4f8,uVar15,
                    uVar18 & 0xffffffffffffff00);
      uVar13 = (undefined4)(uVar15 >> 0x20);
      if ((1 << ((byte)uStack_51c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_528);
      }
      local_558 = (undefined4)local_518;
      uStack_554 = local_518._4_4_;
      uStack_550 = uStack_510;
      uStack_54c = uStack_50c;
      if ((1 << ((byte)_local_46c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_478);
      }
      FUN_140041b80(&local_478,&local_558);
      local_298 = &local_478;
      if ((*(uint *)((longlong)puVar8 + 0xc) & 0xffffff) == 0) {
        uVar12 = (undefined4)*puVar8;
      }
      else {
        uVar12 = FUN_140e4b060(puVar8);
      }
      uVar6 = FUN_140e79500(uVar12);
      uStack_55c = uStack_4ec;
      uStack_560 = uStack_4f0;
      if ((1 << ((byte)uStack_4ec & 0x1f) & 0x46U) == 0) {
        local_568 = local_4f8;
      }
      else {
        FUN_1400419b0(&local_568,&local_4f8);
      }
      FUN_140162c50(&local_568,uVar6);
      local_558 = (undefined4)local_568;
      uStack_554 = local_568._4_4_;
      uStack_550 = uStack_560;
      uStack_54c = uStack_55c;
      if ((1 << ((byte)_local_45c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_468);
      }
      FUN_140041b80(local_468,&local_558);
      if ((1 << ((byte)uStack_55c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_568);
      }
      local_290 = local_468;
      uStack_4dc = 0xf;
      local_4e8 = (longlong *)0x100000000000149;
      local_558 = 0x149;
      uStack_554 = 0x1000000;
      uStack_550 = uStack_4e0;
      uStack_54c = 0xf;
      if ((1 << ((byte)_local_44c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_458);
      }
      FUN_140041b80(local_458,&local_558);
      local_288 = local_458;
      ppuVar17 = &local_298;
      ppuVar16 = (undefined8 **)CONCAT44(uVar13,DAT_141a12628);
      uVar6 = FUN_140e634e0(param_1,param_2,&local_538,3,ppuVar16,ppuVar17);
      cVar3 = FUN_140e491e0(uVar6);
      if (cVar3 != '\0') break;
      local_488 = 0x11;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
      local_4fc = 6;
      ppuVar17 = (undefined8 **)((ulonglong)ppuVar17 & 0xffffffffffffff00);
      uVar15 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
      local_508 = param_1;
      FUN_140e87440(&local_508,DAT_1419fe158,0x80000000,&local_218,uVar15,ppuVar17);
      if ((1 << ((byte)local_4fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_508);
      }
      if ((*(uint *)((longlong)puVar8 + 0xc) & 0xffffff) == 0) {
        uVar13 = (undefined4)*puVar8;
      }
      else {
        uVar13 = FUN_140e4b060(puVar8);
      }
      uVar6 = FUN_140e79500(uVar13);
      FUN_140162c50(&local_218,uVar6);
      FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_218);
    }
    local_488 = 0x13;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0ab48);
    uStack_55c = DAT_141dd75a4;
    uStack_560 = DAT_141dd75a0;
    if ((1 << ((byte)DAT_141dd75a4 & 0x1f) & 0x46U) == 0) {
      local_568 = DAT_141dd7598;
    }
    else {
      FUN_1400419b0(&local_568,&DAT_141dd7598);
    }
    iVar4 = FUN_140e851f0(uVar6,&local_568,DAT_141955260,0);
    if ((1 << ((byte)uStack_55c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_568);
    }
    if (iVar4 == 0) {
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
      uStack_53c = 0;
      local_548 = (longlong *)0x0;
      iVar4 = FUN_140e851f0(uVar6,&local_548,DAT_141955260,1);
      if ((1 << ((byte)uStack_53c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_548);
      }
      if (iVar4 < 1) goto LAB_1408aaacd;
      local_488 = 0x15;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab48);
      if (puVar8 != &DAT_141dd7588) {
        local_558 = (undefined4)DAT_141dd7588;
        uStack_554 = DAT_141dd7588._4_4_;
        uStack_550 = DAT_141dd7590;
        uStack_54c = DAT_141dd7594;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        FUN_140041b80(puVar8,&local_558);
      }
      local_488 = 0x16;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
      *puVar8 = 0xc004000000000000;
      local_488 = 0x17;
      local_res20 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
      uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
      if ((*(uint *)((longlong)local_res20 + 0xc) & 0xffffff) == 0) {
        uVar13 = (undefined4)*local_res20;
      }
      else {
        uVar13 = FUN_140e4b060(local_res20);
      }
      uVar7 = FUN_140e79500(uVar13);
      FUN_140162c50(uVar6,uVar7);
      iVar4 = 6;
      do {
        iVar4 = iVar4 + -1;
        local_488 = 0x1f;
        if ((1 << ((byte)local_52c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_538);
        }
        local_538 = 0;
        local_530 = 0;
        local_52c = 5;
        if ((1 << ((byte)local_49c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_4a8);
        }
        local_4a8 = 0;
        local_4a0 = 0;
        local_49c = 5;
        if ((1 << ((byte)local_4cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_4d8);
        }
        local_4d8 = 0;
        local_4d0 = 0;
        local_4cc = 5;
        if ((1 << ((byte)local_4ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_4b8);
        }
        local_4b8 = 0;
        local_4b0 = 0;
        local_4ac = 5;
        if ((1 << ((byte)local_4bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_4c8);
        }
        local_4c8 = 0;
        local_4c0 = 0;
        local_4bc = 5;
        uStack_53c = 6;
        uVar18 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
        uVar15 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
        local_548 = param_1;
        FUN_140e87440(&local_548,DAT_1419fe0e8,0x80000000,&local_518,uVar15,uVar18);
        if ((1 << ((byte)uStack_53c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_548);
        }
        uStack_51c = 6;
        uVar18 = uVar18 & 0xffffffffffffff00;
        local_528 = param_1;
        FUN_140e87440(&local_528,DAT_1419fe158,0x80000000,&local_4f8,uVar15 & 0xffffffffffffff00,
                      uVar18);
        if ((1 << ((byte)uStack_51c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_528);
        }
        uVar6 = FUN_140e794b0(0,0x4030000000000000);
        uStack_55c = uStack_50c;
        uStack_560 = uStack_510;
        if ((1 << ((byte)uStack_50c & 0x1f) & 0x46U) == 0) {
          local_568 = local_518;
        }
        else {
          FUN_1400419b0(&local_568,&local_518);
        }
        FUN_140162c50(&local_568,uVar6);
        local_558 = (undefined4)local_568;
        uStack_554 = local_568._4_4_;
        uStack_550 = uStack_560;
        uStack_54c = uStack_55c;
        if ((1 << ((byte)_local_46c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_478);
        }
        FUN_140041b80(&local_478,&local_558);
        if ((1 << ((byte)uStack_55c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_568);
        }
        local_298 = &local_478;
        local_558 = (undefined4)local_4f8;
        uStack_554 = local_4f8._4_4_;
        uStack_550 = uStack_4f0;
        uStack_54c = uStack_4ec;
        if ((1 << ((byte)_local_45c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_468);
        }
        FUN_140041b80(local_468,&local_558);
        local_290 = local_468;
        local_558 = _DAT_1419df7a0;
        uStack_554 = uRam00000001419df7a4;
        uStack_550 = uRam00000001419df7a8;
        uStack_54c = uRam00000001419df7ac;
        if ((1 << ((byte)_local_44c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_458);
        }
        FUN_140041b80(local_458,&local_558);
        local_288 = local_458;
        ppuVar17 = &local_298;
        puVar8 = (undefined8 *)FUN_14040f420(param_1,param_2,&local_538,3,ppuVar17);
        if (puVar8 != &local_2a8) {
          local_558 = *(undefined4 *)puVar8;
          uStack_554 = *(undefined4 *)((longlong)puVar8 + 4);
          uStack_550 = *(undefined4 *)(puVar8 + 1);
          uStack_54c = *(undefined4 *)((longlong)puVar8 + 0xc);
          if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          FUN_140041b80(&local_2a8,&local_558);
        }
        FUN_140e87440(&local_2a8,DAT_141a0a9f8,0x80000000,&local_f0,
                      (ulonglong)ppuVar17 & 0xffffffffffffff00,uVar18 & 0xffffffffffffff00);
        uStack_4dc = 0xf;
        local_4e8 = (longlong *)0x1000001000001d0;
        local_558 = 0x1d0;
        uStack_554 = 0x1000001;
        uStack_550 = uStack_4e0;
        uStack_54c = 0xf;
        if ((1 << ((byte)_local_43c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_448);
        }
        FUN_140041b80(local_448,&local_558);
        local_280 = local_448;
        uVar6 = FUN_140e794b0(0x9999999a,0x3ff3333333333333);
        if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_438);
        }
        local_42c = 0;
        local_278 = &local_438;
        local_438 = uVar6;
        switch(local_29c) {
        default:
switchD_1408aa4e9_caseD_1:
          uVar6 = 0;
          break;
        case 6:
          uVar6 = local_2a8;
          break;
        case 0xf:
          iVar5 = (int)((ulonglong)local_2a8 >> 0x20);
          if ((iVar5 != 0x1000000) && (iVar5 != 0x4000001)) goto switchD_1408aa4e9_caseD_1;
        case 0:
        case 7:
        case 10:
        case 0xd:
          uVar13 = FUN_140e4a8b0(&local_2a8);
          uVar6 = FUN_140e87250(uVar13);
        }
        ppuVar19 = &local_280;
        puVar8 = &local_f0;
        puVar11 = (undefined8 *)FUN_140e63610(uVar6,param_2,&local_4a8,2,puVar8,ppuVar19);
        if (puVar11 != &local_2b8) {
          local_558 = *(undefined4 *)puVar11;
          uStack_554 = *(undefined4 *)((longlong)puVar11 + 4);
          uStack_550 = *(undefined4 *)(puVar11 + 1);
          uStack_54c = *(undefined4 *)((longlong)puVar11 + 0xc);
          if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          FUN_140041b80(&local_2b8,&local_558);
        }
        FUN_140e87440(&local_2b8,DAT_1419f5d48,0x80000000,&local_150,
                      (ulonglong)puVar8 & 0xffffffffffffff00,
                      (ulonglong)ppuVar19 & 0xffffffffffffff00);
        local_558 = _DAT_1419df7a0;
        uStack_554 = uRam00000001419df7a4;
        uStack_550 = uRam00000001419df7a8;
        uStack_54c = uRam00000001419df7ac;
        if ((1 << ((byte)_local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_428);
        }
        FUN_140041b80(local_428,&local_558);
        local_270 = local_428;
        switch(local_2ac) {
        default:
switchD_1408aa615_caseD_1:
          uVar6 = 0;
          break;
        case 6:
          uVar6 = local_2b8;
          break;
        case 0xf:
          iVar5 = (int)((ulonglong)local_2b8 >> 0x20);
          if ((iVar5 != 0x1000000) && (iVar5 != 0x4000001)) goto switchD_1408aa615_caseD_1;
        case 0:
        case 7:
        case 10:
        case 0xd:
          uVar13 = FUN_140e4a8b0(&local_2b8);
          uVar6 = FUN_140e87250(uVar13);
        }
        puVar8 = (undefined8 *)FUN_140e63610(uVar6,param_2,&local_4d8,1,&local_150,&local_270);
        if (puVar8 != &local_2c8) {
          local_558 = *(undefined4 *)puVar8;
          uStack_554 = *(undefined4 *)((longlong)puVar8 + 4);
          uStack_550 = *(undefined4 *)(puVar8 + 1);
          uStack_54c = *(undefined4 *)((longlong)puVar8 + 0xc);
          if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2c8);
          }
          FUN_140041b80(&local_2c8,&local_558);
        }
        FUN_140e87170(&local_2c8,DAT_1419f57f8,0x80000000,&local_160,param_1,param_2);
        uVar6 = FUN_140e794b0(0,0x4018000000000000);
        if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_418);
        }
        local_40c = 0;
        local_268 = &local_418;
        local_558 = _DAT_141dc6c40;
        uStack_554 = uRam0000000141dc6c44;
        uStack_550 = uRam0000000141dc6c48;
        uStack_54c = uRam0000000141dc6c4c;
        local_418 = uVar6;
        if ((1 << ((byte)_local_3fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_408);
        }
        FUN_140041b80(local_408,&local_558);
        local_260 = local_408;
        local_558 = _DAT_1419e9650;
        uStack_554 = uRam00000001419e9654;
        uStack_550 = uRam00000001419e9658;
        uStack_54c = uRam00000001419e965c;
        if ((1 << ((byte)_local_3ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_3f8);
        }
        FUN_140041b80(local_3f8,&local_558);
        local_258 = local_3f8;
        switch(local_2bc) {
        default:
switchD_1408aa7db_caseD_1:
          uVar6 = 0;
          break;
        case 6:
          uVar6 = local_2c8;
          break;
        case 0xf:
          iVar5 = (int)((ulonglong)local_2c8 >> 0x20);
          if ((iVar5 != 0x1000000) && (iVar5 != 0x4000001)) goto switchD_1408aa7db_caseD_1;
        case 0:
        case 7:
        case 10:
        case 0xd:
          uVar13 = FUN_140e4a8b0(&local_2c8);
          uVar6 = FUN_140e87250(uVar13);
        }
        puVar8 = (undefined8 *)FUN_140e63610(uVar6,param_2,&local_4b8,3,&local_160,&local_268);
        if (puVar8 != &local_2d8) {
          local_558 = *(undefined4 *)puVar8;
          uStack_554 = *(undefined4 *)((longlong)puVar8 + 4);
          uStack_550 = *(undefined4 *)(puVar8 + 1);
          uStack_54c = *(undefined4 *)((longlong)puVar8 + 0xc);
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          FUN_140041b80(&local_2d8,&local_558);
        }
        FUN_140e87170(&local_2d8,DAT_1419f5dc8,0x80000000,&local_170,param_1,param_2);
        uVar6 = FUN_140e794b0(0,0x4061800000000000);
        if ((1 << ((byte)local_3dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3e8);
        }
        local_3dc = 0;
        local_250 = &local_3e8;
        local_3e8 = uVar6;
        switch(local_2cc) {
        default:
switchD_1408aa914_caseD_1:
          uVar6 = 0;
          break;
        case 6:
          uVar6 = local_2d8;
          break;
        case 0xf:
          iVar5 = (int)((ulonglong)local_2d8 >> 0x20);
          if ((iVar5 != 0x1000000) && (iVar5 != 0x4000001)) goto switchD_1408aa914_caseD_1;
        case 0:
        case 7:
        case 10:
        case 0xd:
          uVar13 = FUN_140e4a8b0(&local_2d8);
          uVar6 = FUN_140e87250(uVar13);
        }
        ppuVar17 = &local_250;
        ppuVar16 = &local_170;
        FUN_140e63610(uVar6,param_2,&local_4c8,1,ppuVar16,ppuVar17);
      } while (0 < iVar4);
      local_488 = 0x21;
      if ((1 << ((byte)local_52c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_538);
      }
      local_538 = 0;
      local_530 = 0;
      local_52c = 5;
      local_558 = _DAT_1419e9660;
      uStack_554 = uRam00000001419e9664;
      uStack_550 = uRam00000001419e9668;
      uStack_54c = uRam00000001419e966c;
      if ((1 << ((byte)_local_46c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_478);
      }
      FUN_140041b80(&local_478,&local_558);
      local_298 = &local_478;
      local_558 = _DAT_1419e9630;
      uStack_554 = uRam00000001419e9634;
      uStack_550 = uRam00000001419e9638;
      uStack_54c = uRam00000001419e963c;
      if ((1 << ((byte)_local_45c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_468);
      }
      FUN_140041b80(local_468,&local_558);
      local_290 = local_468;
      local_558 = _DAT_1419e9670;
      uStack_554 = uRam00000001419e9674;
      uStack_550 = uRam00000001419e9678;
      uStack_54c = uRam00000001419e967c;
      if ((1 << ((byte)_local_44c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_458);
      }
      FUN_140041b80(local_458,&local_558);
      local_288 = local_458;
      local_558 = (undefined4)DAT_1419df7b0;
      uStack_554 = DAT_1419df7b0._4_4_;
      uStack_550 = DAT_1419df7b8;
      uStack_54c = DAT_1419df7bc;
      if ((1 << ((byte)_local_43c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_448);
      }
      FUN_140041b80(local_448,&local_558);
      local_280 = local_448;
      ppuVar16 = &local_298;
      FUN_14044e5b0(param_1,param_2,&local_538,4,ppuVar16);
    }
    else {
LAB_1408aaacd:
      local_488 = 0x24;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
      puVar9 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
      local_4fc = *(uint *)((longlong)puVar8 + 0xc);
      local_500 = *(undefined4 *)(puVar8 + 1);
      if ((1 << ((byte)local_4fc & 0x1f) & 0x46U) == 0) {
        local_508 = (longlong *)*puVar8;
      }
      else {
        FUN_1400419b0(&local_508,puVar8);
      }
      uStack_53c = 0;
      local_548 = (longlong *)0x3feccccccccccccd;
      FUN_140042560(&local_508,&local_548);
      if ((1 << ((byte)uStack_53c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_548);
      }
      if ((local_4fc & 0xffffff) == 0) {
        uVar13 = SUB84(local_508,0);
      }
      else {
        uVar13 = FUN_140e4b060(&local_508);
      }
      uVar15 = FUN_140e78d00(uVar13);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
      *puVar9 = uVar15 ^ 0x8000000000000000;
      if ((1 << ((byte)local_4fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_508);
      }
    }
    iVar4 = 2;
    do {
      iVar4 = iVar4 + -1;
      local_488 = 0x2c;
      if ((1 << ((byte)local_52c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_538);
      }
      local_538 = 0;
      local_530 = 0;
      local_52c = 5;
      if ((1 << ((byte)local_49c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_4a8);
      }
      local_4a8 = 0;
      local_4a0 = 0;
      local_49c = 5;
      if ((1 << ((byte)local_4cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_4d8);
      }
      local_4d8 = 0;
      local_4d0 = 0;
      local_4cc = 5;
      if ((1 << ((byte)local_4ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_4b8);
      }
      local_4b8 = 0;
      local_4b0 = 0;
      local_4ac = 5;
      if ((1 << ((byte)local_4bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_4c8);
      }
      local_4c8 = 0;
      local_4c0 = 0;
      local_4bc = 5;
      uStack_53c = 6;
      uVar18 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
      uVar15 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
      local_548 = param_1;
      FUN_140e87440(&local_548,DAT_1419fe0e8,0x80000000,&local_518,uVar15,uVar18);
      if ((1 << ((byte)uStack_53c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_548);
      }
      uStack_51c = 6;
      uVar18 = uVar18 & 0xffffffffffffff00;
      local_528 = param_1;
      FUN_140e87440(&local_528,DAT_1419fe158,0x80000000,&local_4f8,uVar15 & 0xffffffffffffff00,
                    uVar18);
      if ((1 << ((byte)uStack_51c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_528);
      }
      uVar6 = FUN_140e794b0(0,0x4030000000000000);
      uStack_55c = uStack_50c;
      uStack_560 = uStack_510;
      if ((1 << ((byte)uStack_50c & 0x1f) & 0x46U) == 0) {
        local_568 = local_518;
      }
      else {
        FUN_1400419b0(&local_568,&local_518);
      }
      FUN_140162c50(&local_568,uVar6);
      local_558 = (undefined4)local_568;
      uStack_554 = local_568._4_4_;
      uStack_550 = uStack_560;
      uStack_54c = uStack_55c;
      if ((1 << ((byte)_local_46c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_478);
      }
      FUN_140041b80(&local_478,&local_558);
      if ((1 << ((byte)uStack_55c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_568);
      }
      local_298 = &local_478;
      local_558 = (undefined4)local_4f8;
      uStack_554 = local_4f8._4_4_;
      uStack_550 = uStack_4f0;
      uStack_54c = uStack_4ec;
      if ((1 << ((byte)_local_45c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_468);
      }
      FUN_140041b80(local_468,&local_558);
      local_290 = local_468;
      local_558 = _DAT_1419df7a0;
      uStack_554 = uRam00000001419df7a4;
      uStack_550 = uRam00000001419df7a8;
      uStack_54c = uRam00000001419df7ac;
      if ((1 << ((byte)_local_44c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_458);
      }
      FUN_140041b80(local_458,&local_558);
      local_288 = local_458;
      ppuVar17 = &local_298;
      puVar8 = (undefined8 *)FUN_14040f420(param_1,param_2,&local_538,3,ppuVar17);
      if (puVar8 != &local_2e8) {
        local_558 = *(undefined4 *)puVar8;
        uStack_554 = *(undefined4 *)((longlong)puVar8 + 4);
        uStack_550 = *(undefined4 *)(puVar8 + 1);
        uStack_54c = *(undefined4 *)((longlong)puVar8 + 0xc);
        if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
        FUN_140041b80(&local_2e8,&local_558);
      }
      FUN_140e87440(&local_2e8,DAT_141a0a9f8,0x80000000,&local_180,
                    (ulonglong)ppuVar17 & 0xffffffffffffff00,uVar18 & 0xffffffffffffff00);
      uStack_4dc = 0xf;
      local_4e8 = (longlong *)0x1000001000001d0;
      local_558 = 0x1d0;
      uStack_554 = 0x1000001;
      uStack_550 = uStack_4e0;
      uStack_54c = 0xf;
      if ((1 << ((byte)_local_43c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_448);
      }
      FUN_140041b80(local_448,&local_558);
      local_280 = local_448;
      uVar6 = FUN_140e794b0(0x9999999a,0x3ff3333333333333);
      if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_438);
      }
      local_42c = 0;
      local_278 = &local_438;
      local_438 = uVar6;
      switch(local_2dc) {
      default:
switchD_1408aafa9_caseD_1:
        uVar6 = 0;
        break;
      case 6:
        uVar6 = local_2e8;
        break;
      case 0xf:
        iVar5 = (int)((ulonglong)local_2e8 >> 0x20);
        if ((iVar5 != 0x1000000) && (iVar5 != 0x4000001)) goto switchD_1408aafa9_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar13 = FUN_140e4a8b0(&local_2e8);
        uVar6 = FUN_140e87250(uVar13);
      }
      ppuVar19 = &local_280;
      puVar8 = &local_180;
      puVar11 = (undefined8 *)FUN_140e63610(uVar6,param_2,&local_4a8,2,puVar8,ppuVar19);
      if (puVar11 != &local_2f8) {
        local_558 = *(undefined4 *)puVar11;
        uStack_554 = *(undefined4 *)((longlong)puVar11 + 4);
        uStack_550 = *(undefined4 *)(puVar11 + 1);
        uStack_54c = *(undefined4 *)((longlong)puVar11 + 0xc);
        if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f8);
        }
        FUN_140041b80(&local_2f8,&local_558);
      }
      FUN_140e87440(&local_2f8,DAT_1419f5d48,0x80000000,&local_190,
                    (ulonglong)puVar8 & 0xffffffffffffff00,(ulonglong)ppuVar19 & 0xffffffffffffff00)
      ;
      local_558 = _DAT_1419df7a0;
      uStack_554 = uRam00000001419df7a4;
      uStack_550 = uRam00000001419df7a8;
      uStack_54c = uRam00000001419df7ac;
      if ((1 << ((byte)_local_41c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_428);
      }
      FUN_140041b80(local_428,&local_558);
      local_270 = local_428;
      switch(local_2ec) {
      default:
switchD_1408ab0d5_caseD_1:
        uVar6 = 0;
        break;
      case 6:
        uVar6 = local_2f8;
        break;
      case 0xf:
        iVar5 = (int)((ulonglong)local_2f8 >> 0x20);
        if ((iVar5 != 0x1000000) && (iVar5 != 0x4000001)) goto switchD_1408ab0d5_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar13 = FUN_140e4a8b0(&local_2f8);
        uVar6 = FUN_140e87250(uVar13);
      }
      puVar8 = (undefined8 *)FUN_140e63610(uVar6,param_2,&local_4d8,1,&local_190,&local_270);
      if (puVar8 != &local_308) {
        local_558 = *(undefined4 *)puVar8;
        uStack_554 = *(undefined4 *)((longlong)puVar8 + 4);
        uStack_550 = *(undefined4 *)(puVar8 + 1);
        uStack_54c = *(undefined4 *)((longlong)puVar8 + 0xc);
        if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_308);
        }
        FUN_140041b80(&local_308,&local_558);
      }
      FUN_140e87170(&local_308,DAT_1419f57f8,0x80000000,&local_140,param_1,param_2);
      uVar6 = FUN_140e794b0(0,0x4018000000000000);
      if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_418);
      }
      local_40c = 0;
      local_268 = &local_418;
      local_558 = _DAT_141dc6c40;
      uStack_554 = uRam0000000141dc6c44;
      uStack_550 = uRam0000000141dc6c48;
      uStack_54c = uRam0000000141dc6c4c;
      local_418 = uVar6;
      if ((1 << ((byte)_local_3fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_408);
      }
      FUN_140041b80(local_408,&local_558);
      local_260 = local_408;
      local_558 = _DAT_1419e9650;
      uStack_554 = uRam00000001419e9654;
      uStack_550 = uRam00000001419e9658;
      uStack_54c = uRam00000001419e965c;
      if ((1 << ((byte)_local_3ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_3f8);
      }
      FUN_140041b80(local_3f8,&local_558);
      local_258 = local_3f8;
      switch(local_2fc) {
      default:
switchD_1408ab29b_caseD_1:
        uVar6 = 0;
        break;
      case 6:
        uVar6 = local_308;
        break;
      case 0xf:
        iVar5 = (int)((ulonglong)local_308 >> 0x20);
        if ((iVar5 != 0x1000000) && (iVar5 != 0x4000001)) goto switchD_1408ab29b_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar13 = FUN_140e4a8b0(&local_308);
        uVar6 = FUN_140e87250(uVar13);
      }
      puVar8 = (undefined8 *)FUN_140e63610(uVar6,param_2,&local_4b8,3,&local_140,&local_268);
      if (puVar8 != &local_318) {
        local_558 = *(undefined4 *)puVar8;
        uStack_554 = *(undefined4 *)((longlong)puVar8 + 4);
        uStack_550 = *(undefined4 *)(puVar8 + 1);
        uStack_54c = *(undefined4 *)((longlong)puVar8 + 0xc);
        if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        FUN_140041b80(&local_318,&local_558);
      }
      FUN_140e87170(&local_318,DAT_1419f5dc8,0x80000000,&local_1a8,param_1,param_2);
      uVar6 = FUN_140e794b0(0,0x4061800000000000);
      if ((1 << ((byte)local_3dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3e8);
      }
      local_3dc = 0;
      local_250 = &local_3e8;
      local_3e8 = uVar6;
      switch(local_30c) {
      default:
switchD_1408ab3d4_caseD_1:
        uVar6 = 0;
        break;
      case 6:
        uVar6 = local_318;
        break;
      case 0xf:
        iVar5 = (int)((ulonglong)local_318 >> 0x20);
        if ((iVar5 != 0x1000000) && (iVar5 != 0x4000001)) goto switchD_1408ab3d4_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar13 = FUN_140e4a8b0(&local_318);
        uVar6 = FUN_140e87250(uVar13);
      }
      ppuVar17 = &local_250;
      ppuVar16 = &local_1a8;
      FUN_140e63610(uVar6,param_2,&local_4c8,1,ppuVar16,ppuVar17);
    } while (0 < iVar4);
    do {
      local_res18 = local_res18 + -1;
      local_488 = 0x34;
      if ((1 << ((byte)local_52c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_538);
      }
      local_538 = 0;
      local_530 = 0;
      local_52c = 5;
      if ((1 << ((byte)local_49c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_4a8);
      }
      local_4a8 = 0;
      local_4a0 = 0;
      local_49c = 5;
      if ((1 << ((byte)local_4cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_4d8);
      }
      local_4d8 = 0;
      local_4d0 = 0;
      local_4cc = 5;
      if ((1 << ((byte)local_4ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_4b8);
      }
      local_4b8 = 0;
      local_4b0 = 0;
      local_4ac = 5;
      if ((1 << ((byte)local_4bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_4c8);
      }
      local_4c8 = 0;
      local_4c0 = 0;
      local_4bc = 5;
      uStack_53c = 6;
      uVar18 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
      uVar15 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
      local_548 = param_1;
      FUN_140e87440(&local_548,DAT_1419fe0e8,0x80000000,&local_518,uVar15,uVar18);
      if ((1 << ((byte)uStack_53c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_548);
      }
      uStack_51c = 6;
      uVar18 = uVar18 & 0xffffffffffffff00;
      local_528 = param_1;
      FUN_140e87440(&local_528,DAT_1419fe158,0x80000000,&local_4f8,uVar15 & 0xffffffffffffff00,
                    uVar18);
      if ((1 << ((byte)uStack_51c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_528);
      }
      uVar6 = FUN_140e794b0(0,0x4028000000000000);
      uStack_55c = uStack_50c;
      uStack_560 = uStack_510;
      if ((1 << ((byte)uStack_50c & 0x1f) & 0x46U) == 0) {
        local_568 = local_518;
      }
      else {
        FUN_1400419b0(&local_568,&local_518);
      }
      FUN_140162c50(&local_568,uVar6);
      local_558 = (undefined4)local_568;
      uStack_554 = local_568._4_4_;
      uStack_550 = uStack_560;
      uStack_54c = uStack_55c;
      if ((1 << ((byte)_local_46c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_478);
      }
      FUN_140041b80(&local_478,&local_558);
      if ((1 << ((byte)uStack_55c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_568);
      }
      local_298 = &local_478;
      local_558 = (undefined4)local_4f8;
      uStack_554 = local_4f8._4_4_;
      uStack_550 = uStack_4f0;
      uStack_54c = uStack_4ec;
      if ((1 << ((byte)_local_45c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_468);
      }
      FUN_140041b80(local_468,&local_558);
      local_290 = local_468;
      local_558 = _DAT_1419df7a0;
      uStack_554 = uRam00000001419df7a4;
      uStack_550 = uRam00000001419df7a8;
      uStack_54c = uRam00000001419df7ac;
      if ((1 << ((byte)_local_44c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_458);
      }
      FUN_140041b80(local_458,&local_558);
      local_288 = local_458;
      ppuVar17 = &local_298;
      puVar8 = (undefined8 *)FUN_14040f420(param_1,param_2,&local_538,3,ppuVar17);
      if (puVar8 != &local_328) {
        local_558 = *(undefined4 *)puVar8;
        uStack_554 = *(undefined4 *)((longlong)puVar8 + 4);
        uStack_550 = *(undefined4 *)(puVar8 + 1);
        uStack_54c = *(undefined4 *)((longlong)puVar8 + 0xc);
        if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_328);
        }
        FUN_140041b80(&local_328,&local_558);
      }
      FUN_140e87440(&local_328,DAT_141a0a9f8,0x80000000,&local_1b8,
                    (ulonglong)ppuVar17 & 0xffffffffffffff00,uVar18 & 0xffffffffffffff00);
      uStack_4dc = 0xf;
      local_4e8 = (longlong *)0x100000100000135;
      local_558 = 0x135;
      uStack_554 = 0x1000001;
      uStack_550 = uStack_4e0;
      uStack_54c = 0xf;
      if ((1 << ((byte)_local_43c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_448);
      }
      FUN_140041b80(local_448,&local_558);
      local_280 = local_448;
      uVar6 = FUN_140e794b0(0x9999999a,0x3ff3333333333333);
      if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_438);
      }
      local_42c = 0;
      local_278 = &local_438;
      local_438 = uVar6;
      switch(local_31c) {
      default:
switchD_1408ab844_caseD_1:
        uVar6 = 0;
        break;
      case 6:
        uVar6 = local_328;
        break;
      case 0xf:
        iVar4 = (int)((ulonglong)local_328 >> 0x20);
        if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_1408ab844_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar13 = FUN_140e4a8b0(&local_328);
        uVar6 = FUN_140e87250(uVar13);
      }
      ppuVar19 = &local_280;
      puVar8 = &local_1b8;
      puVar11 = (undefined8 *)FUN_140e63610(uVar6,param_2,&local_4a8,2,puVar8,ppuVar19);
      if (puVar11 != &local_338) {
        local_558 = *(undefined4 *)puVar11;
        uStack_554 = *(undefined4 *)((longlong)puVar11 + 4);
        uStack_550 = *(undefined4 *)(puVar11 + 1);
        uStack_54c = *(undefined4 *)((longlong)puVar11 + 0xc);
        if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_338);
        }
        FUN_140041b80(&local_338,&local_558);
      }
      FUN_140e87440(&local_338,DAT_1419f5d48,0x80000000,&local_1c8,
                    (ulonglong)puVar8 & 0xffffffffffffff00,(ulonglong)ppuVar19 & 0xffffffffffffff00)
      ;
      local_558 = _DAT_1419df7a0;
      uStack_554 = uRam00000001419df7a4;
      uStack_550 = uRam00000001419df7a8;
      uStack_54c = uRam00000001419df7ac;
      if ((1 << ((byte)_local_41c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_428);
      }
      FUN_140041b80(local_428,&local_558);
      local_270 = local_428;
      switch(local_32c) {
      default:
switchD_1408ab969_caseD_1:
        uVar6 = 0;
        break;
      case 6:
        uVar6 = local_338;
        break;
      case 0xf:
        iVar4 = (int)((ulonglong)local_338 >> 0x20);
        if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_1408ab969_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar13 = FUN_140e4a8b0(&local_338);
        uVar6 = FUN_140e87250(uVar13);
      }
      puVar8 = (undefined8 *)FUN_140e63610(uVar6,param_2,&local_4d8,1,&local_1c8,&local_270);
      if (puVar8 != &local_348) {
        local_558 = *(undefined4 *)puVar8;
        uStack_554 = *(undefined4 *)((longlong)puVar8 + 4);
        uStack_550 = *(undefined4 *)(puVar8 + 1);
        uStack_54c = *(undefined4 *)((longlong)puVar8 + 0xc);
        if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_348);
        }
        FUN_140041b80(&local_348,&local_558);
      }
      FUN_140e87170(&local_348,DAT_1419f57f8,0x80000000,&local_1d8,param_1,param_2);
      uVar6 = FUN_140e794b0(0,0x4000000000000000);
      if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_418);
      }
      local_40c = 0;
      local_268 = &local_418;
      local_558 = _DAT_141dc6c40;
      uStack_554 = uRam0000000141dc6c44;
      uStack_550 = uRam0000000141dc6c48;
      uStack_54c = uRam0000000141dc6c4c;
      local_418 = uVar6;
      if ((1 << ((byte)_local_3fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_408);
      }
      FUN_140041b80(local_408,&local_558);
      local_260 = local_408;
      local_558 = _DAT_1419e9650;
      uStack_554 = uRam00000001419e9654;
      uStack_550 = uRam00000001419e9658;
      uStack_54c = uRam00000001419e965c;
      if ((1 << ((byte)_local_3ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_3f8);
      }
      FUN_140041b80(local_3f8,&local_558);
      local_258 = local_3f8;
      switch(local_33c) {
      default:
switchD_1408abb28_caseD_1:
        uVar6 = 0;
        break;
      case 6:
        uVar6 = local_348;
        break;
      case 0xf:
        iVar4 = (int)((ulonglong)local_348 >> 0x20);
        if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_1408abb28_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar13 = FUN_140e4a8b0(&local_348);
        uVar6 = FUN_140e87250(uVar13);
      }
      puVar8 = (undefined8 *)FUN_140e63610(uVar6,param_2,&local_4b8,3,&local_1d8,&local_268);
      if (puVar8 != &local_398) {
        local_558 = *(undefined4 *)puVar8;
        uStack_554 = *(undefined4 *)((longlong)puVar8 + 4);
        uStack_550 = *(undefined4 *)(puVar8 + 1);
        uStack_54c = *(undefined4 *)((longlong)puVar8 + 0xc);
        if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_398);
        }
        FUN_140041b80(&local_398,&local_558);
      }
      FUN_140e87170(&local_398,DAT_1419f5dc8,0x80000000,&local_1e8,param_1,param_2);
      uVar6 = FUN_140e794b0(0,0x405e000000000000);
      if ((1 << ((byte)local_3dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3e8);
      }
      local_3dc = 0;
      local_250 = &local_3e8;
      local_3e8 = uVar6;
      switch(local_38c) {
      default:
switchD_1408abc5a_caseD_1:
        uVar6 = 0;
        break;
      case 6:
        uVar6 = local_398;
        break;
      case 0xf:
        iVar4 = (int)((ulonglong)local_398 >> 0x20);
        if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_1408abc5a_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar13 = FUN_140e4a8b0(&local_398);
        uVar6 = FUN_140e87250(uVar13);
      }
      ppuVar17 = &local_250;
      ppuVar16 = &local_1e8;
      FUN_140e63610(uVar6,param_2,&local_4c8,1,ppuVar16,ppuVar17);
    } while (0 < local_res18);
    local_488 = 0x37;
    if ((1 << ((byte)local_52c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_538);
    }
    local_538 = 0;
    local_530 = 0;
    local_52c = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56d10);
    FUN_140e63610(param_1,param_2,&local_538,0,uVar6,0);
    uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uVar6 = local_198;
  }
  uVar7 = 0;
  local_488 = 0x3a;
  uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0ab48);
  uStack_55c = DAT_141dd7594;
  uStack_560 = DAT_141dd7590;
  if ((1 << ((byte)DAT_141dd7594 & 0x1f) & 0x46U) == 0) {
    local_568 = (longlong *)CONCAT44(DAT_141dd7588._4_4_,(undefined4)DAT_141dd7588);
  }
  else {
    FUN_1400419b0(&local_568,&DAT_141dd7588);
  }
  iVar4 = FUN_140e851f0(uVar10,&local_568,DAT_141955260,0);
  if ((1 << ((byte)uStack_55c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_568);
  }
  if (iVar4 != 0) goto LAB_1408ac9eb;
  if ((1 << ((byte)local_52c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_538);
  }
  local_538 = 0;
  local_530 = 0;
  local_52c = 5;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
  if (puVar8 != &local_478) {
    local_558 = *(undefined4 *)puVar8;
    uStack_554 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_550 = *(undefined4 *)(puVar8 + 1);
    uStack_54c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_46c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_478);
    }
    FUN_140041b80(&local_478,&local_558);
  }
  local_298 = &local_478;
  ppuVar17 = &local_298;
  uVar15 = CONCAT44(uVar13,DAT_1419fe728);
  puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_538,1,uVar15,ppuVar17);
  if ((*(uint *)((longlong)puVar8 + 0xc) & 0xffffff) == 0) {
    uVar13 = (undefined4)*puVar8;
  }
  else {
    uVar13 = FUN_140e4b060(puVar8);
  }
  dVar1 = (double)FUN_1412a79b0(uVar13,0x4020000000000000);
  if (dVar1 != 0.0) goto LAB_1408ac9eb;
  if ((1 << ((byte)local_49c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_4a8);
  }
  local_4a8 = 0;
  local_4a0 = 0;
  local_49c = 5;
  uStack_53c = 6;
  uVar18 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
  uVar15 = uVar15 & 0xffffffffffffff00;
  local_548 = param_1;
  FUN_140e87440(&local_548,DAT_1419fe0e8,0x80000000,&local_518,uVar15,uVar18);
  if ((1 << ((byte)uStack_53c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_548);
  }
  uStack_53c = 6;
  uVar15 = uVar15 & 0xffffffffffffff00;
  local_548 = param_1;
  FUN_140e87440(&local_548,DAT_1419fe158,0x80000000,&local_4f8,uVar15,uVar18 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar15 >> 0x20);
  if ((1 << ((byte)uStack_53c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_548);
  }
  local_558 = (undefined4)local_518;
  uStack_554 = local_518._4_4_;
  uStack_550 = uStack_510;
  uStack_54c = uStack_50c;
  if ((1 << (local_45c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_468);
  }
  FUN_140041b80(local_468,&local_558);
  local_290 = local_468;
  uStack_55c = uStack_4ec;
  uStack_560 = uStack_4f0;
  if ((1 << ((byte)uStack_4ec & 0x1f) & 0x46U) == 0) {
    local_568 = local_4f8;
  }
  else {
    FUN_1400419b0(&local_568,&local_4f8);
  }
  uStack_53c = 7;
  local_548 = (longlong *)CONCAT44(local_548._4_4_,1);
  FUN_1400460e0(&local_568,&local_548);
  if ((1 << ((byte)uStack_53c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_548);
  }
  local_558 = (undefined4)local_568;
  uStack_554 = local_568._4_4_;
  uStack_550 = uStack_560;
  uStack_54c = uStack_55c;
  if ((1 << (local_44c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_458);
  }
  FUN_140041b80(local_458,&local_558);
  if ((1 << ((byte)uStack_55c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_568);
  }
  local_288 = local_458;
  uStack_4dc = 0xf;
  local_4e8 = (longlong *)0x100000000000149;
  local_558 = 0x149;
  uStack_554 = 0x1000000;
  uStack_550 = uStack_4e0;
  uStack_54c = 0xf;
  if ((1 << (local_43c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_448);
  }
  FUN_140041b80(local_448,&local_558);
  local_280 = local_448;
  ppuVar19 = &local_290;
  uVar15 = CONCAT44(uVar13,DAT_141a12628);
  uVar10 = FUN_140e634e0(param_1,param_2,&local_4a8,3,uVar15,ppuVar19);
  cVar3 = FUN_140e491e0(uVar10);
  if (cVar3 == '\0') goto LAB_1408ac9eb;
  local_488 = 0x40;
  if ((1 << ((byte)local_4cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_4d8);
  }
  local_4d8 = 0;
  local_4d0 = 0;
  local_4cc = 5;
  if ((1 << ((byte)local_4ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_4b8);
  }
  local_4b8 = 0;
  local_4b0 = 0;
  local_4ac = 5;
  if ((1 << ((byte)local_4bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_4c8);
  }
  local_4c8 = 0;
  local_4c0 = 0;
  local_4bc = 5;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  local_res20 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  uStack_53c = 6;
  uVar18 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
  uVar15 = uVar15 & 0xffffffffffffff00;
  local_548 = param_1;
  FUN_140e87440(&local_548,DAT_1419fe0e8,0x80000000,&local_518,uVar15,uVar18);
  if ((1 << ((byte)uStack_53c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_548);
  }
  uStack_53c = 6;
  uVar18 = uVar18 & 0xffffffffffffff00;
  local_548 = param_1;
  FUN_140e87440(&local_548,DAT_1419fe158,0x80000000,&local_4f8,uVar15 & 0xffffffffffffff00,uVar18);
  if ((1 << ((byte)uStack_53c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_548);
  }
  uVar10 = FUN_140e794b0(0,0x4010000000000000);
  uStack_55c = uStack_50c;
  uStack_560 = uStack_510;
  if ((1 << ((byte)uStack_50c & 0x1f) & 0x46U) == 0) {
    local_568 = local_518;
  }
  else {
    FUN_1400419b0(&local_568,&local_518);
  }
  FUN_140162c50(&local_568,uVar10);
  local_558 = (undefined4)local_568;
  uStack_554 = local_568._4_4_;
  uStack_550 = uStack_560;
  uStack_54c = uStack_55c;
  if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_438);
  }
  FUN_140041b80(&local_438,&local_558);
  if ((1 << ((byte)uStack_55c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_568);
  }
  local_278 = &local_438;
  local_558 = (undefined4)local_4f8;
  uStack_554 = local_4f8._4_4_;
  uStack_550 = uStack_4f0;
  uStack_54c = uStack_4ec;
  if ((1 << (local_41c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_428);
  }
  FUN_140041b80(local_428,&local_558);
  local_270 = local_428;
  local_558 = _DAT_1419df7a0;
  uStack_554 = uRam00000001419df7a4;
  uStack_550 = uRam00000001419df7a8;
  uStack_54c = uRam00000001419df7ac;
  if ((1 << ((byte)local_40c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_418);
  }
  FUN_140041b80(&local_418,&local_558);
  local_268 = &local_418;
  ppuVar17 = &local_278;
  puVar8 = (undefined8 *)FUN_14040f420(param_1,param_2,&local_4d8,3,ppuVar17);
  if (puVar8 != &local_358) {
    local_558 = *(undefined4 *)puVar8;
    uStack_554 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_550 = *(undefined4 *)(puVar8 + 1);
    uStack_54c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    FUN_140041b80(&local_358,&local_558);
  }
  FUN_140e87440(&local_358,DAT_141a0a9f8,0x80000000,&local_100,
                (ulonglong)ppuVar17 & 0xffffffffffffff00,uVar18 & 0xffffffffffffff00);
  uStack_4dc = 0xf;
  local_4e8 = (longlong *)0x100000100000135;
  local_558 = 0x135;
  uStack_554 = 0x1000001;
  uStack_550 = uStack_4e0;
  uStack_54c = 0xf;
  if ((1 << (local_3fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_408);
  }
  FUN_140041b80(local_408,&local_558);
  local_260 = local_408;
  local_558 = _DAT_1419e9640;
  uStack_554 = uRam00000001419e9644;
  uStack_550 = uRam00000001419e9648;
  uStack_54c = uRam00000001419e964c;
  if ((1 << (local_3ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_3f8);
  }
  FUN_140041b80(local_3f8,&local_558);
  local_258 = local_3f8;
  switch(local_34c) {
  default:
switchD_1408ac516_caseD_1:
    uVar10 = uVar7;
    break;
  case 6:
    uVar10 = local_358;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_358 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_1408ac516_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar13 = FUN_140e4a8b0(&local_358);
    uVar10 = FUN_140e87250(uVar13);
  }
  ppuVar19 = &local_260;
  puVar8 = &local_100;
  puVar11 = (undefined8 *)FUN_140e63610(uVar10,param_2,&local_4b8,2,puVar8,ppuVar19);
  if (puVar11 != &local_368) {
    local_558 = *(undefined4 *)puVar11;
    uStack_554 = *(undefined4 *)((longlong)puVar11 + 4);
    uStack_550 = *(undefined4 *)(puVar11 + 1);
    uStack_54c = *(undefined4 *)((longlong)puVar11 + 0xc);
    if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    FUN_140041b80(&local_368,&local_558);
  }
  FUN_140e87440(&local_368,DAT_1419f5d48,0x80000000,&local_110,
                (ulonglong)puVar8 & 0xffffffffffffff00,(ulonglong)ppuVar19 & 0xffffffffffffff00);
  local_558 = _DAT_1419df7a0;
  uStack_554 = uRam00000001419df7a4;
  uStack_550 = uRam00000001419df7a8;
  uStack_54c = uRam00000001419df7ac;
  if ((1 << ((byte)local_3dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3e8);
  }
  FUN_140041b80(&local_3e8,&local_558);
  local_250 = &local_3e8;
  switch(local_35c) {
  default:
switchD_1408ac64e_caseD_1:
    uVar10 = uVar7;
    break;
  case 6:
    uVar10 = local_368;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_368 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_1408ac64e_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar13 = FUN_140e4a8b0(&local_368);
    uVar10 = FUN_140e87250(uVar13);
  }
  puVar8 = (undefined8 *)FUN_140e63610(uVar10,param_2,&local_4c8,1,&local_110,&local_250);
  if (puVar8 != &local_378) {
    local_558 = *(undefined4 *)puVar8;
    uStack_554 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_550 = *(undefined4 *)(puVar8 + 1);
    uStack_54c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_378);
    }
    FUN_140041b80(&local_378,&local_558);
  }
  FUN_140e87170(&local_378,DAT_1419f57f8,0x80000000,&local_120,param_1,param_2);
  local_3d8 = FUN_140e794b0(0,0x3ff8000000000000);
  if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3d8);
  }
  local_3cc = 0;
  local_248 = &local_3d8;
  local_558 = _DAT_141dc6c40;
  uStack_554 = uRam0000000141dc6c44;
  uStack_550 = uRam0000000141dc6c48;
  uStack_54c = uRam0000000141dc6c4c;
  if ((1 << (local_3bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_3c8);
  }
  FUN_140041b80(local_3c8,&local_558);
  local_240 = local_3c8;
  local_558 = _DAT_1419e9680;
  uStack_554 = uRam00000001419e9684;
  uStack_550 = uRam00000001419e9688;
  uStack_54c = uRam00000001419e968c;
  if ((1 << (local_3ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_3b8);
  }
  FUN_140041b80(local_3b8,&local_558);
  local_238 = local_3b8;
  switch(local_36c) {
  default:
switchD_1408ac81d_caseD_1:
    uVar10 = uVar7;
    break;
  case 6:
    uVar10 = local_378;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_378 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_1408ac81d_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar13 = FUN_140e4a8b0(&local_378);
    uVar10 = FUN_140e87250(uVar13);
  }
  puVar8 = (undefined8 *)FUN_140e63610(uVar10,param_2,&local_228,3,&local_120,&local_248);
  if (puVar8 != &local_388) {
    local_558 = *(undefined4 *)puVar8;
    uStack_554 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_550 = *(undefined4 *)(puVar8 + 1);
    uStack_54c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)local_37c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_388);
    }
    FUN_140041b80(&local_388,&local_558);
  }
  FUN_140e87170(&local_388,DAT_1419f5dc8,0x80000000,&local_130,param_1,param_2);
  if ((*(uint *)((longlong)local_res20 + 0xc) & 0xffffff) == 0) {
    uVar13 = (undefined4)*local_res20;
  }
  else {
    uVar13 = FUN_140e4b060(local_res20);
  }
  dVar2 = (double)FUN_140e79500(uVar13);
  dVar1 = (double)FUN_140e78f40(0x14);
  local_3a8 = dVar2 * dVar1 + 90.0;
  if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3a8);
  }
  local_39c = 0;
  local_230 = &local_3a8;
  switch(local_37c) {
  default:
switchD_1408ac982_caseD_1:
    break;
  case 6:
    uVar7 = local_388;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_388 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_1408ac982_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar13 = FUN_140e4a8b0(&local_388);
    uVar7 = FUN_140e87250(uVar13);
  }
  FUN_140e63610(uVar7,param_2,&local_208,1,&local_130,&local_230);
LAB_1408ac9eb:
  local_488 = 0x45;
  uVar7 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  if ((*(uint *)((longlong)local_res20 + 0xc) & 0xffffff) == 0) {
    uVar13 = (undefined4)*local_res20;
  }
  else {
    uVar13 = FUN_140e4b060(local_res20);
  }
  dVar1 = (double)FUN_140e79500(uVar13);
  local_568 = (longlong *)(dVar1 * 9.0);
  uStack_55c = 0;
  FUN_140042560(&local_568,uVar6);
  FUN_1400462a0(uVar7,&local_568);
  if ((1 << ((byte)uStack_55c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_568);
  }
  local_488 = 0x47;
  if ((1 << ((byte)local_52c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_538);
  }
  local_538 = 0;
  local_530 = 0;
  local_52c = 5;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a01b58);
  FUN_140e63610(param_1,param_2,&local_538,0,uVar7,0);
  local_488 = 0x49;
  uVar7 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  FUN_140e609c0(param_1);
  FUN_1400460e0(uVar7,uVar6);
  FUN_140e60910(1);
LAB_1408acb0d:
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_4bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_4c8);
  }
  if ((1 << ((byte)local_4ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_4b8);
  }
  if ((1 << ((byte)local_4cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_4d8);
  }
  if ((1 << ((byte)local_49c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_4a8);
  }
  if ((1 << ((byte)local_52c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_538);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_37c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_358);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_348);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_338);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)uStack_4ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_4f8);
  }
  if ((1 << ((byte)uStack_50c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_518);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  _eh_vector_destructor_iterator_(&local_478,0x10,0xe,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_498;
  return;
}

