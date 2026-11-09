// gml_Script_find_target @ 0x140281500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_find_target
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  double *pdVar5;
  ulonglong *puVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar11;
  double dVar10;
  undefined8 uVar12;
  double **ppdVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double local_678;
  undefined4 uStack_670;
  uint uStack_66c;
  undefined8 local_668;
  undefined4 uStack_660;
  uint uStack_65c;
  undefined8 local_658;
  undefined4 uStack_650;
  uint uStack_64c;
  double local_648;
  undefined4 local_640;
  uint local_63c;
  undefined8 local_638;
  undefined4 local_630;
  undefined4 local_62c;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  uint uStack_61c;
  undefined8 local_618;
  char *local_610;
  undefined4 local_608;
  double local_600;
  undefined4 local_5f8;
  uint local_5f4;
  undefined8 local_5f0;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined4 local_5e0;
  undefined8 local_5d8;
  undefined4 local_5d0;
  undefined4 local_5cc;
  double local_5c8;
  undefined4 local_5c0;
  uint local_5bc;
  uint local_5b8;
  double local_5b0;
  undefined4 local_5a4;
  double local_5a0;
  undefined4 local_594;
  double local_590;
  undefined4 local_588;
  uint local_584;
  double local_580;
  undefined4 local_578;
  uint local_574;
  double local_570;
  undefined4 local_568;
  uint local_564;
  double local_560;
  undefined4 local_558;
  uint local_554;
  undefined8 local_550;
  undefined4 local_548;
  undefined4 local_544;
  double local_540;
  undefined4 local_534;
  undefined8 local_530;
  undefined4 local_528;
  uint local_524;
  undefined8 local_520;
  undefined4 local_518;
  uint local_514;
  double local_510;
  undefined4 local_508;
  uint local_504;
  undefined8 local_500;
  undefined4 local_4f8;
  uint local_4f4;
  double local_4f0;
  undefined4 local_4e8;
  uint local_4e4;
  undefined8 local_4e0;
  undefined4 local_4d8;
  uint local_4d4;
  double local_4d0;
  undefined4 local_4c8;
  uint local_4c4;
  undefined8 local_4c0;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined8 local_4b0;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined4 local_494;
  undefined8 local_490;
  undefined4 local_484;
  undefined8 local_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined8 local_468;
  undefined4 local_45c;
  undefined8 local_458;
  undefined4 local_44c;
  undefined8 local_448;
  undefined4 local_440;
  undefined4 local_43c;
  double local_438;
  undefined4 local_42c;
  double local_428;
  undefined4 local_41c;
  undefined8 local_418;
  undefined4 local_410;
  undefined4 local_40c;
  undefined8 local_408;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined4 local_3dc;
  double local_3d8;
  undefined4 local_3d0;
  uint local_3cc;
  double local_3c8;
  undefined4 local_3c0;
  uint local_3bc;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined4 local_3ac;
  double local_3a8;
  undefined4 local_3a0;
  uint local_39c;
  double local_398;
  undefined4 local_390;
  uint local_38c;
  undefined8 local_388;
  undefined4 local_380;
  uint local_37c;
  undefined8 local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined4 local_350;
  undefined4 local_34c;
  undefined8 local_348;
  undefined4 local_340;
  undefined4 local_33c;
  undefined8 local_338;
  undefined4 local_330;
  undefined4 local_32c;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_31c;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 local_30c;
  undefined8 local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined8 local_298;
  undefined4 uStack_290;
  uint uStack_28c;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 local_24c;
  undefined4 local_248 [3];
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_20c;
  undefined4 local_208 [3];
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  double local_1c8;
  byte local_1bc;
  ulonglong local_1b8 [2];
  undefined8 local_1a8;
  byte local_19c;
  undefined8 local_198;
  byte local_18c;
  undefined8 local_188 [2];
  undefined8 local_178;
  byte local_16c;
  double *local_138;
  ulonglong *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  
  local_2a8 = 0;
  local_610 = "gml_Script_draw_wispy_line_connected";
  local_618 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_618;
  local_608 = 0xc;
  uVar14 = 1;
  _eh_vector_constructor_iterator_(&local_1c8,0x10,9,FUN_1400424d0,FUN_140041b30);
  local_39c = 0xffffff;
  local_3a8 = 0.0;
  local_5bc = 0xffffff;
  local_5c8 = 0.0;
  local_484 = 0xffffff;
  local_490 = 0;
  local_3ac = 0xffffff;
  local_3b8 = 0;
  local_3bc = 0xffffff;
  local_3c8 = 0.0;
  local_3cc = 0xffffff;
  local_3d8 = 0.0;
  local_5cc = 0xffffff;
  local_5d8 = 0;
  local_594 = 0xffffff;
  local_5a0 = 0.0;
  local_5a4 = 0xffffff;
  local_5b0 = 0.0;
  local_3dc = 0xffffff;
  local_3e8 = 0;
  local_3ec = 0xffffff;
  local_3f8 = 0;
  local_63c = 0xffffff;
  local_648 = 0.0;
  local_534 = 0xffffff;
  local_540 = 0.0;
  uVar9 = 0xffffff;
  local_3fc = 0xffffff;
  local_408 = 0;
  uVar15 = 0xffffff;
  local_40c = 0xffffff;
  local_418 = 0;
  local_5e4 = 0xffffff;
  local_5f0 = 0;
  local_494 = 0xffffff;
  local_4a0 = 0;
  local_41c = 0xffffff;
  local_428 = 0.0;
  local_42c = 0xffffff;
  local_438 = 0.0;
  local_5e0 = 0xffffff;
  local_43c = 0xffffff;
  local_448 = 0;
  local_44c = 0xffffff;
  local_458 = 0;
  local_45c = 0xffffff;
  local_468 = 0;
  uStack_46c = 0xffffff;
  local_478 = 0;
  uStack_36c = 0xffffff;
  local_378 = 0;
  local_62c = 0;
  local_638 = 0;
  local_4a4 = 0;
  local_4b0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_608 = 0xe;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140281788:
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (param_4 < 3) goto LAB_140281788;
    pdVar5 = (double *)param_5[2];
  }
  uStack_66c = *(undefined4 *)((longlong)pdVar5 + 0xc);
  uStack_670 = *(undefined4 *)(pdVar5 + 1);
  if ((1 << ((byte)uStack_66c & 0x1f) & 0x46U) == 0) {
    local_678 = *pdVar5;
  }
  else {
    FUN_1400419b0(&local_678);
  }
  FUN_1400462a0(&local_678,puVar4);
  local_668 = local_678;
  uStack_660 = uStack_670;
  uStack_65c = uStack_66c;
  FUN_140041b80(&local_3a8,&local_668);
  if ((1 << ((byte)uStack_66c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_678);
  }
  local_608 = 0xf;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
LAB_14028182e:
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
    if (param_4 < 4) goto LAB_14028182e;
    pdVar5 = (double *)param_5[3];
  }
  uStack_66c = *(undefined4 *)((longlong)pdVar5 + 0xc);
  uStack_670 = *(undefined4 *)(pdVar5 + 1);
  if ((1 << ((byte)uStack_66c & 0x1f) & 0x46U) == 0) {
    local_678 = *pdVar5;
  }
  else {
    FUN_1400419b0(&local_678);
  }
  FUN_1400462a0(&local_678,puVar4);
  local_668 = local_678;
  uStack_660 = uStack_670;
  uStack_65c = uStack_66c;
  if ((1 << ((byte)local_5bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_5c8);
  }
  FUN_140041b80(&local_5c8,&local_668);
  if ((1 << ((byte)uStack_66c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_678);
  }
  local_608 = 0x10;
  if ((1 << ((byte)local_62c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_638);
  }
  local_638 = 0;
  local_630 = 0;
  local_62c = 5;
  if ((1 << ((byte)local_4a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_4b0);
  }
  local_4b0 = 0;
  local_4a8 = 0;
  local_4a4 = 5;
  if (param_4 < 1) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_140281940:
    local_668 = *pdVar5;
    uStack_660 = *(undefined4 *)(pdVar5 + 1);
    uStack_65c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_668);
  }
  else {
    pdVar5 = (double *)*param_5;
    if (pdVar5 != &local_1c8) goto LAB_140281940;
  }
  local_138 = &local_1c8;
  if (param_4 < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_1402819a2:
    local_668 = (double)*puVar6;
    uStack_660 = (undefined4)puVar6[1];
    uStack_65c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_668);
  }
  else {
    puVar6 = (ulonglong *)param_5[1];
    if (puVar6 != local_1b8) goto LAB_1402819a2;
  }
  local_130 = local_1b8;
  if (param_4 < 3) {
    puVar4 = &DAT_1419df7b0;
LAB_140281a04:
    local_668 = (double)*puVar4;
    uStack_660 = *(undefined4 *)(puVar4 + 1);
    uStack_65c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_668);
  }
  else {
    puVar4 = (undefined8 *)param_5[2];
    if (puVar4 != &local_1a8) goto LAB_140281a04;
  }
  local_128 = &local_1a8;
  if (param_4 < 4) {
    puVar4 = &DAT_1419df7b0;
LAB_140281a66:
    local_668 = (double)*puVar4;
    uStack_660 = *(undefined4 *)(puVar4 + 1);
    uStack_65c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_668);
  }
  else {
    puVar4 = (undefined8 *)param_5[3];
    if (puVar4 != &local_198) goto LAB_140281a66;
  }
  local_120 = &local_198;
  local_668 = (double)CONCAT44(uRam00000001419e39e4,_DAT_1419e39e0);
  uStack_660 = uRam00000001419e39e8;
  uStack_65c = uRam00000001419e39ec;
  if ((1 << ((byte)local_188[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_668);
  local_118 = local_188;
  ppdVar13 = &local_138;
  uVar12 = CONCAT44(uVar14,DAT_1419fd548);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_4b0,4,uVar12,ppdVar13);
  if (puVar4 != &local_178) {
    local_668 = (double)*puVar4;
    uStack_660 = *(undefined4 *)(puVar4 + 1);
    uStack_65c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_668);
  }
  local_110 = &local_178;
  puVar4 = (undefined8 *)FUN_140e79090(&local_638,2,&local_118);
  if (puVar4 != &local_490) {
    local_668 = (double)*puVar4;
    uStack_660 = *(undefined4 *)(puVar4 + 1);
    uStack_65c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_484 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_490);
    }
    FUN_140041b80(&local_490,&local_668);
  }
  local_608 = 0x12;
  dVar10 = local_5c8;
  if ((local_5bc & 0xffffff) != 0) {
    dVar10 = (double)FUN_140e4b060(&local_5c8);
  }
  uStack_65c = 0;
  local_668 = -dVar10;
  uStack_64c = 0;
  uStack_650 = uStack_660;
  local_658 = local_668;
  FUN_140046500(&local_658,&local_490);
  local_268 = (undefined4)local_658;
  uStack_264 = local_658._4_4_;
  uStack_260 = uStack_650;
  uStack_25c = uStack_64c;
  FUN_140041b80(&local_3b8,&local_268);
  if ((1 << ((byte)uStack_64c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_658);
  }
  uVar2 = local_39c;
  dVar10 = local_3a8;
  local_608 = 0x13;
  uStack_66c = local_39c;
  uStack_670 = local_3a0;
  local_5b8 = local_39c & 0x1f;
  if ((1 << (sbyte)local_5b8 & 0x46U) == 0) {
    local_678 = local_3a8;
  }
  else {
    FUN_1400419b0(&local_678,&local_3a8);
  }
  FUN_140046500(&local_678,&local_490);
  local_668 = local_678;
  uStack_660 = uStack_670;
  uStack_65c = uStack_66c;
  FUN_140041b80(&local_3c8,&local_668);
  uVar14 = 0;
  if ((1 << ((byte)uStack_66c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_678);
  }
  local_608 = 0x16;
  FUN_140e85f80(param_1,DAT_1419fd2a8,0x80000000,&local_3d8,uVar12,ppdVar13,uVar14);
  local_5f4 = local_3cc;
  local_5f8 = local_3d0;
  if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) == 0) {
    local_600 = local_3d8;
  }
  else {
    FUN_1400419b0(&local_600,&local_3d8);
  }
  uStack_64c = 0;
  local_658 = 0.001;
  FUN_140042560(&local_600,&local_658);
  if ((1 << ((byte)uStack_64c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_658);
  }
  if (param_4 < 8) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)param_5[7];
  }
  uStack_66c = local_5f4;
  uStack_670 = local_5f8;
  if ((1 << ((byte)local_5f4 & 0x1f) & 0x46U) == 0) {
    local_678 = local_600;
  }
  else {
    FUN_1400419b0(&local_678,&local_600);
  }
  FUN_140042560(&local_678,puVar4);
  local_668 = local_678;
  uStack_660 = uStack_670;
  uStack_65c = uStack_66c;
  FUN_140041b80(&local_5d8,&local_668);
  if ((1 << ((byte)uStack_66c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_678);
  }
  if ((1 << ((byte)local_5f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_600);
  }
  local_608 = 0x18;
  if (param_4 < 1) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_140281e9a:
    local_668 = *pdVar5;
    uStack_660 = *(undefined4 *)(pdVar5 + 1);
    uStack_65c = *(uint *)((longlong)pdVar5 + 0xc);
    if ((1 << ((byte)local_594 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_5a0);
    }
    FUN_140041b80(&local_5a0,&local_668);
  }
  else {
    pdVar5 = (double *)*param_5;
    if (pdVar5 != &local_5a0) goto LAB_140281e9a;
  }
  local_608 = 0x19;
  if (param_4 < 2) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)param_5[1];
    if (pdVar5 == &local_5b0) goto LAB_140281f1d;
  }
  local_668 = *pdVar5;
  uStack_660 = *(undefined4 *)(pdVar5 + 1);
  uStack_65c = *(uint *)((longlong)pdVar5 + 0xc);
  if ((1 << ((byte)local_5a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_5b0);
  }
  FUN_140041b80(&local_5b0,&local_668);
LAB_140281f1d:
  local_608 = 0x1b;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a579d0);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_658,gml_Script_frac_draw_wispy_line_connected_draw_wispy_line,param_1);
  if (&local_658 != puVar4) {
    local_668 = local_658;
    uStack_660 = uStack_650;
    uStack_65c = uStack_64c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_668);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_64c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_658);
  }
  local_608 = 0x20;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57a30);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_658,gml_Script_draw_wispy_line_connected,param_1);
  if (&local_658 != puVar4) {
    local_668 = local_658;
    uStack_660 = uStack_650;
    uStack_65c = uStack_64c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_668);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_64c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_658);
  }
  local_608 = 0x25;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57a50);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_658,gml_GlobalScript_find_target,param_1);
  if (&local_658 != puVar4) {
    local_668 = local_658;
    uStack_660 = uStack_650;
    uStack_65c = uStack_64c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_668);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_64c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_658);
  }
  local_608 = 0x27;
  if (param_4 < 5) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)param_5[4];
  }
  uStack_66c = uVar2;
  uStack_670 = local_3a0;
  if ((1 << ((byte)local_5b8 & 0x1f) & 0x46U) == 0) {
    local_678 = dVar10;
  }
  else {
    FUN_1400419b0(&local_678,&local_3a8);
  }
  FUN_140046500(&local_678,puVar4);
  local_668 = local_678;
  uStack_660 = uStack_670;
  uStack_65c = uStack_66c;
  FUN_140041b80(&local_3e8,&local_668);
  if ((1 << ((byte)uStack_66c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_678);
  }
  local_608 = 0x28;
  if (param_4 < 5) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)param_5[4];
  }
  uStack_66c = local_5bc;
  uStack_670 = local_5c0;
  if ((1 << ((byte)local_5bc & 0x1f) & 0x46U) == 0) {
    local_678 = local_5c8;
  }
  else {
    FUN_1400419b0(&local_678,&local_5c8);
  }
  FUN_140046500(&local_678,puVar4);
  local_668 = local_678;
  uStack_660 = uStack_670;
  uStack_65c = uStack_66c;
  FUN_140041b80(&local_3f8,&local_668);
  uVar14 = 0;
  if ((1 << ((byte)uStack_66c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_678);
  }
  local_608 = 0x2a;
  if ((1 << ((byte)local_63c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_648);
  }
  local_63c = 0;
  uVar8 = 0;
  uVar11 = 0x3ff00000;
  local_648 = 1.0;
  bVar1 = true;
  do {
    dVar10 = (double)CONCAT44(uVar11,uVar8);
    if (!bVar1) {
      local_608 = 0x2a;
      uVar2 = local_63c & 0xffffff;
      if (uVar2 != 0) {
        if (uVar2 != 1) {
          if (uVar2 == 7) {
            local_648 = (double)CONCAT44(local_648._4_4_,local_648._0_4_ + 1);
          }
          else if (uVar2 == 10) {
            local_648 = (double)((longlong)local_648 + 1);
          }
          else {
            if (uVar2 == 0xd) goto LAB_140282325;
            FUN_140042910(&DAT_14172c3d8,&local_648,&local_648);
          }
          goto LAB_140282334;
        }
        dVar10 = (double)FUN_140e4b060(&local_648);
LAB_140282325:
        local_63c = 0;
      }
      local_648 = dVar10 + 1.0;
    }
LAB_140282334:
    if (param_4 < 5) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)param_5[4];
    }
    iVar3 = FUN_140e851f0(&local_648,puVar4,DAT_141955260,1,uVar12,ppdVar13,uVar14);
    if ((iVar3 == -2) || (0 < iVar3)) {
      if ((1 << ((byte)local_4a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_4b0);
      }
      if ((1 << ((byte)local_62c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_638);
      }
      if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      if ((1 << ((byte)uStack_46c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_478);
      }
      if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_468);
      }
      if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_458);
      }
      if ((1 << ((byte)local_5e0 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_448);
      }
      if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_438);
      }
      if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_428);
      }
      if ((1 << ((byte)local_494 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_4a0);
      }
      if ((1 << ((byte)local_5e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_5f0);
      }
      if ((1 << ((byte)uVar15 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_418);
      }
      if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_408);
      }
      if ((1 << ((byte)local_534 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_540);
      }
      if ((1 << ((byte)local_63c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_648);
      }
      if ((1 << ((byte)local_3ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3f8);
      }
      if ((1 << ((byte)local_3dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3e8);
      }
      if ((1 << ((byte)local_5a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_5b0);
      }
      if ((1 << ((byte)local_594 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_5a0);
      }
      if ((1 << ((byte)local_5cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_5d8);
      }
      if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3d8);
      }
      if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3c8);
      }
      if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3b8);
      }
      if ((1 << ((byte)local_484 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_490);
      }
      if ((1 << ((byte)local_5bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_5c8);
      }
      if ((1 << ((byte)local_5b8 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3a8);
      }
      _eh_vector_destructor_iterator_(&local_1c8,0x10,9,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_618;
      return param_3;
    }
    local_608 = 0x2c;
    if (param_4 < 5) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)param_5[4];
    }
    uStack_28c = local_63c;
    uStack_290 = local_640;
    if ((1 << ((byte)local_63c & 0x1f) & 0x46U) == 0) {
      local_298 = local_648;
    }
    else {
      FUN_1400419b0(&local_298,&local_648);
    }
    FUN_140046500(&local_298,puVar4);
    local_628 = (undefined4)local_298;
    uStack_624 = local_298._4_4_;
    uStack_620 = uStack_290;
    uStack_61c = uStack_28c;
    if ((1 << ((byte)local_534 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_540);
    }
    FUN_140041b80(&local_540,&local_628);
    if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_608 = 0x2d;
    local_26c = local_3dc;
    local_270 = local_3e0;
    if ((1 << ((byte)local_3dc & 0x1f) & 0x46U) == 0) {
      local_278 = local_3e8;
    }
    else {
      FUN_1400419b0(&local_278,&local_3e8);
    }
    FUN_140042560(&local_278,&local_648);
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*param_5;
    }
    uStack_27c = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_280 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) == 0) {
      local_288 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_288);
    }
    FUN_1400460e0(&local_288,&local_278);
    local_628 = (undefined4)local_288;
    uStack_624 = local_288._4_4_;
    uStack_620 = uStack_280;
    uStack_61c = uStack_27c;
    if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_408);
    }
    FUN_140041b80(&local_408,&local_628);
    if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_608 = 0x2e;
    local_34c = local_3ec;
    local_350 = local_3f0;
    if ((1 << ((byte)local_3ec & 0x1f) & 0x46U) == 0) {
      local_358 = local_3f8;
    }
    else {
      FUN_1400419b0(&local_358,&local_3f8);
    }
    FUN_140042560(&local_358,&local_648);
    if (param_4 < 2) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)param_5[1];
    }
    uStack_35c = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_360 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) == 0) {
      local_368 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_368);
    }
    FUN_1400460e0(&local_368,&local_358);
    local_628 = (undefined4)local_368;
    uStack_624 = local_368._4_4_;
    uStack_620 = uStack_360;
    uStack_61c = uStack_35c;
    if ((1 << ((byte)uVar15 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_418);
    }
    FUN_140041b80(&local_418,&local_628);
    if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    uVar15 = 0;
    if ((1 << ((byte)local_34c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_358);
    }
    local_608 = 0x30;
    if ((1 << ((byte)local_62c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_638);
    }
    local_638 = 0;
    local_630 = 0;
    local_62c = 5;
    local_138 = &local_648;
    if (param_4 < 9) {
      puVar6 = &DAT_1419df7b0;
LAB_140282736:
      local_628 = (undefined4)*puVar6;
      uStack_624 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_620 = (undefined4)puVar6[1];
      uStack_61c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b8);
      }
      FUN_140041b80(local_1b8,&local_628);
    }
    else {
      puVar6 = (ulonglong *)param_5[8];
      if (puVar6 != local_1b8) goto LAB_140282736;
    }
    local_130 = local_1b8;
    puVar4 = (undefined8 *)
             gml_Script_draw_wispy_line_connected
                       (param_1,param_2,&local_638,2,&local_138,ppdVar13,uVar15);
    if (puVar4 != &local_5f0) {
      local_628 = *(undefined4 *)puVar4;
      uStack_624 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_620 = *(undefined4 *)(puVar4 + 1);
      uStack_61c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_5e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_5f0);
      }
      FUN_140041b80(&local_5f0,&local_628);
    }
    uVar15 = local_5cc;
    local_608 = 0x31;
    local_33c = local_5cc;
    local_340 = local_5d0;
    bVar7 = (byte)local_5cc & 0x1f;
    if ((1 << bVar7 & 0x46U) == 0) {
      local_348 = local_5d8;
    }
    else {
      FUN_1400419b0(&local_348,&local_5d8);
    }
    local_24c = 0;
    local_258 = 0x3fe6666666666666;
    FUN_140042560(&local_348,&local_258);
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_38c = 0;
    local_398 = 3.0;
    FUN_140042560(&local_398,&local_540);
    local_504 = local_38c;
    local_508 = local_390;
    if ((1 << ((byte)local_38c & 0x1f) & 0x46U) == 0) {
      local_510 = local_398;
    }
    else {
      FUN_1400419b0(&local_510,&local_398);
    }
    FUN_1400460e0(&local_510,&local_348);
    local_584 = local_504;
    local_588 = local_508;
    if ((1 << ((byte)local_504 & 0x1f) & 0x46U) == 0) {
      local_590 = local_510;
    }
    else {
      FUN_1400419b0(&local_590,&local_510);
    }
    local_23c = 7;
    local_248[0] = 2;
    FUN_140042560(&local_590,local_248);
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_248);
    }
    local_5f4 = local_584;
    local_5f8 = local_588;
    if ((1 << ((byte)local_584 & 0x1f) & 0x46U) == 0) {
      local_600 = local_590;
    }
    else {
      FUN_1400419b0(&local_600,&local_590);
    }
    local_22c = 0;
    local_238 = 0x400921fb54442d18;
    FUN_140042560(&local_600,&local_238);
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_4e4 = local_5f4;
    local_4e8 = local_5f8;
    if ((1 << ((byte)local_5f4 & 0x1f) & 0x46U) == 0) {
      local_4f0 = local_600;
    }
    else {
      FUN_1400419b0(&local_4f0,&local_600);
    }
    FUN_1400460e0(&local_4f0,&local_5f0);
    if ((local_4e4 & 0xffffff) == 0) {
      uVar9 = SUB84(local_4f0,0);
    }
    else {
      uVar9 = FUN_140e4b060(&local_4f0);
    }
    uVar12 = thunk_FUN_1412ac390(uVar9);
    if ((1 << ((byte)local_494 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_4a0);
    }
    local_494 = 0;
    local_4a0 = uVar12;
    if ((1 << ((byte)local_4e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_4f0);
    }
    if ((1 << ((byte)local_5f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_600);
    }
    if ((1 << ((byte)local_584 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_590);
    }
    if ((1 << ((byte)local_504 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_510);
    }
    if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_398);
    }
    if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_348);
    }
    local_608 = 0x32;
    local_31c = local_5e4;
    local_320 = local_5e8;
    if ((1 << ((byte)local_5e4 & 0x1f) & 0x46U) == 0) {
      local_328 = local_5f0;
    }
    else {
      FUN_1400419b0(&local_328,&local_5f0);
    }
    local_21c = 0;
    local_228 = 0x3ff4cccccccccccd;
    FUN_140042560(&local_328,&local_228);
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_32c = uVar15;
    local_330 = local_5d0;
    if ((1 << bVar7 & 0x46U) == 0) {
      local_338 = local_5d8;
    }
    else {
      FUN_1400419b0(&local_338,&local_5d8);
    }
    local_20c = 0;
    local_218 = 0x3ff199999999999a;
    FUN_140042560(&local_338,&local_218);
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_37c = 0;
    local_388 = 0x401c000000000000;
    FUN_140042560(&local_388,&local_540);
    local_4f4 = local_37c;
    local_4f8 = local_380;
    if ((1 << ((byte)local_37c & 0x1f) & 0x46U) == 0) {
      local_500 = local_388;
    }
    else {
      FUN_1400419b0(&local_500,&local_388);
    }
    FUN_1400462a0(&local_500,&local_338);
    local_524 = local_4f4;
    local_528 = local_4f8;
    if ((1 << ((byte)local_4f4 & 0x1f) & 0x46U) == 0) {
      local_530 = local_500;
    }
    else {
      FUN_1400419b0(&local_530,&local_500);
    }
    local_1fc = 7;
    local_208[0] = 2;
    FUN_140042560(&local_530,local_208);
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    local_514 = local_524;
    local_518 = local_528;
    if ((1 << ((byte)local_524 & 0x1f) & 0x46U) == 0) {
      local_520 = local_530;
    }
    else {
      FUN_1400419b0(&local_520,&local_530);
    }
    local_1ec = 0;
    local_1f8 = 0x400921fb54442d18;
    FUN_140042560(&local_520,&local_1f8);
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_4d4 = local_514;
    local_4d8 = local_518;
    if ((1 << ((byte)local_514 & 0x1f) & 0x46U) == 0) {
      local_4e0 = local_520;
    }
    else {
      FUN_1400419b0(&local_4e0,&local_520);
    }
    FUN_1400462a0(&local_4e0,&local_328);
    if ((local_4d4 & 0xffffff) == 0) {
      uVar9 = (undefined4)local_4e0;
    }
    else {
      uVar9 = FUN_140e4b060(&local_4e0);
    }
    dVar10 = (double)thunk_FUN_1412ac390(uVar9);
    if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_428);
    }
    local_41c = 0;
    local_428 = dVar10 * 0.5;
    if ((1 << ((byte)local_4d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_4e0);
    }
    if ((1 << ((byte)local_514 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_520);
    }
    if ((1 << ((byte)local_524 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_530);
    }
    if ((1 << ((byte)local_4f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_500);
    }
    if ((1 << ((byte)local_37c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_388);
    }
    if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_338);
    }
    if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    local_608 = 0x33;
    local_2fc = local_5e4;
    local_300 = local_5e8;
    if ((1 << ((byte)local_5e4 & 0x1f) & 0x46U) == 0) {
      local_308 = local_5f0;
    }
    else {
      FUN_1400419b0(&local_308,&local_5f0);
    }
    local_1dc = 0;
    local_1e8 = 0x3fe0000000000000;
    FUN_140042560(&local_308,&local_1e8);
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_30c = uVar15;
    local_310 = local_5d0;
    if ((1 << bVar7 & 0x46U) == 0) {
      local_318 = local_5d8;
    }
    else {
      FUN_1400419b0(&local_318,&local_5d8);
    }
    local_1cc = 0;
    local_1d8 = 0x3fd6666666666666;
    FUN_140042560(&local_318,&local_1d8);
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    uStack_66c = 0;
    local_678 = 11.0;
    FUN_140042560(&local_678,&local_540);
    local_554 = uStack_66c;
    local_558 = uStack_670;
    if ((1 << ((byte)uStack_66c & 0x1f) & 0x46U) == 0) {
      local_560 = local_678;
    }
    else {
      FUN_1400419b0(&local_560,&local_678);
    }
    FUN_1400460e0(&local_560,&local_318);
    local_564 = local_554;
    local_568 = local_558;
    if ((1 << ((byte)local_554 & 0x1f) & 0x46U) == 0) {
      local_570 = local_560;
    }
    else {
      FUN_1400419b0(&local_570,&local_560);
    }
    uStack_25c = 7;
    local_268 = 2;
    FUN_140042560(&local_570,&local_268);
    if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_574 = local_564;
    local_578 = local_568;
    if ((1 << ((byte)local_564 & 0x1f) & 0x46U) == 0) {
      local_580 = local_570;
    }
    else {
      FUN_1400419b0(&local_580,&local_570);
    }
    uStack_65c = 0;
    local_668 = 3.141592653589793;
    FUN_140042560(&local_580,&local_668);
    if ((1 << ((byte)uStack_65c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_668);
    }
    local_4c4 = local_574;
    local_4c8 = local_578;
    if ((1 << ((byte)local_574 & 0x1f) & 0x46U) == 0) {
      local_4d0 = local_580;
    }
    else {
      FUN_1400419b0(&local_4d0,&local_580);
    }
    FUN_1400460e0(&local_4d0,&local_308);
    if ((local_4c4 & 0xffffff) == 0) {
      uVar15 = SUB84(local_4d0,0);
    }
    else {
      uVar15 = FUN_140e4b060(&local_4d0);
    }
    dVar10 = (double)thunk_FUN_1412ac390(uVar15);
    if ((1 << ((byte)local_42c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_438);
    }
    local_42c = 0;
    local_438 = dVar10 * 0.25;
    if ((1 << ((byte)local_4c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_4d0);
    }
    if ((1 << ((byte)local_574 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_580);
    }
    if ((1 << ((byte)local_564 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_570);
    }
    if ((1 << ((byte)local_554 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_560);
    }
    if ((1 << ((byte)uStack_66c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_678);
    }
    if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    uVar14 = 0;
    if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    local_608 = 0x34;
    local_4b4 = 0;
    local_4b8 = local_498;
    local_4c0 = local_4a0;
    FUN_1400460e0(&local_4c0,&local_428);
    uStack_2ec = local_4b4;
    uStack_2f0 = local_4b8;
    if ((1 << ((byte)local_4b4 & 0x1f) & 0x46U) == 0) {
      local_2f8 = local_4c0;
    }
    else {
      FUN_1400419b0(&local_2f8,&local_4c0);
    }
    FUN_1400460e0(&local_2f8,&local_438);
    local_628 = (undefined4)local_2f8;
    uStack_624 = local_2f8._4_4_;
    uStack_620 = uStack_2f0;
    uStack_61c = uStack_2ec;
    if ((1 << ((byte)local_5e0 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_448);
    }
    FUN_140041b80(&local_448,&local_628);
    if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    if ((1 << ((byte)local_4b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_4c0);
    }
    local_608 = 0x35;
    if ((1 << ((byte)local_62c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_638);
    }
    local_638 = 0;
    local_630 = 0;
    local_62c = 5;
    local_138 = &local_540;
    ppdVar13 = &local_138;
    puVar4 = (undefined8 *)
             gml_Script_frac_draw_wispy_line_connected_draw_wispy_line
                       (param_1,param_2,&local_638,1,ppdVar13);
    uVar8 = (undefined4)((ulonglong)ppdVar13 >> 0x20);
    if (puVar4 != &local_458) {
      local_628 = *(undefined4 *)puVar4;
      uStack_624 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_620 = *(undefined4 *)(puVar4 + 1);
      uStack_61c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_44c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_458);
      }
      FUN_140041b80(&local_458,&local_628);
    }
    local_608 = 0x37;
    if (param_4 < 6) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)param_5[5];
    }
    local_5e0 = local_43c;
    local_544 = local_43c;
    local_548 = local_440;
    if ((1 << ((byte)local_43c & 0x1f) & 0x46U) == 0) {
      local_550 = local_448;
    }
    else {
      FUN_1400419b0(&local_550,&local_448);
    }
    FUN_140042560(&local_550,puVar4);
    uStack_2dc = local_544;
    uStack_2e0 = local_548;
    if ((1 << ((byte)local_544 & 0x1f) & 0x46U) == 0) {
      local_2e8 = local_550;
    }
    else {
      FUN_1400419b0(&local_2e8,&local_550);
    }
    FUN_140042560(&local_2e8,&local_458);
    local_628 = (undefined4)local_2e8;
    uStack_624 = local_2e8._4_4_;
    uStack_620 = uStack_2e0;
    uStack_61c = uStack_2dc;
    if ((1 << ((byte)local_45c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_468);
    }
    FUN_140041b80(&local_468,&local_628);
    if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    if ((1 << ((byte)local_544 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_550);
    }
    local_608 = 0x39;
    local_2bc = local_3ac;
    local_2c0 = local_3b0;
    if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) == 0) {
      local_2c8 = local_3b8;
    }
    else {
      FUN_1400419b0(&local_2c8,&local_3b8);
    }
    FUN_140042560(&local_2c8,&local_468);
    uVar9 = local_3fc;
    uStack_2cc = local_3fc;
    uStack_2d0 = local_400;
    if ((1 << ((byte)local_3fc & 0x1f) & 0x46U) == 0) {
      local_2d8 = local_408;
    }
    else {
      FUN_1400419b0(&local_2d8,&local_408);
    }
    FUN_1400460e0(&local_2d8,&local_2c8);
    local_628 = (undefined4)local_2d8;
    uStack_624 = local_2d8._4_4_;
    uStack_620 = uStack_2d0;
    uStack_61c = uStack_2cc;
    if ((1 << ((byte)uStack_46c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_478);
    }
    FUN_140041b80(&local_478,&local_628);
    if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_608 = 0x3a;
    uStack_64c = local_3bc;
    uStack_650 = local_3c0;
    if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) == 0) {
      local_658 = local_3c8;
    }
    else {
      FUN_1400419b0(&local_658,&local_3c8);
    }
    FUN_140042560(&local_658,&local_468);
    uVar15 = local_40c;
    uStack_2ac = local_40c;
    uStack_2b0 = local_410;
    if ((1 << ((byte)local_40c & 0x1f) & 0x46U) == 0) {
      local_2b8 = local_418;
    }
    else {
      FUN_1400419b0(&local_2b8,&local_418);
    }
    FUN_1400460e0(&local_2b8,&local_658);
    local_628 = (undefined4)local_2b8;
    uStack_624 = local_2b8._4_4_;
    uStack_620 = uStack_2b0;
    uStack_61c = uStack_2ac;
    if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_378);
    }
    FUN_140041b80(&local_378,&local_628);
    if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    if ((1 << ((byte)uStack_64c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_658);
    }
    local_608 = 0x3c;
    if ((1 << ((byte)local_62c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_638);
    }
    local_638 = 0;
    local_630 = 0;
    local_62c = 5;
    local_138 = &local_5a0;
    local_130 = (ulonglong *)&local_5b0;
    local_128 = &local_478;
    local_120 = &local_378;
    if (param_4 < 7) {
      puVar4 = &DAT_1419df7b0;
LAB_140283a4f:
      local_628 = *(undefined4 *)puVar4;
      uStack_624 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_620 = *(undefined4 *)(puVar4 + 1);
      uStack_61c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_188[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_628);
    }
    else {
      puVar4 = (undefined8 *)param_5[6];
      if (puVar4 != local_188) goto LAB_140283a4f;
    }
    local_118 = local_188;
    ppdVar13 = &local_138;
    uVar12 = CONCAT44(uVar8,DAT_141a57990);
    FUN_140e634e0(param_1,param_2,&local_638,5);
    local_608 = 0x3e;
    local_628 = (undefined4)local_478;
    uStack_624 = local_478._4_4_;
    uStack_620 = uStack_470;
    uStack_61c = uStack_46c;
    if ((1 << ((byte)local_594 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_5a0);
    }
    FUN_140041b80(&local_5a0,&local_628);
    local_608 = 0x3f;
    local_628 = (undefined4)local_378;
    uStack_624 = local_378._4_4_;
    uStack_620 = uStack_370;
    uStack_61c = uStack_36c;
    if ((1 << ((byte)local_5a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_5b0);
    }
    FUN_140041b80(&local_5b0,&local_628);
    uVar8 = SUB84(local_648,0);
    uVar11 = (undefined4)((ulonglong)local_648 >> 0x20);
    bVar1 = false;
  } while( true );
}

