// gml_Script_anon_5723_gml_Object_oBossEmbraceHalf_Create_0 @ 0x14075eb10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_5723_gml_Object_oBossEmbraceHalf_Create_0
          (longlong *param_1,longlong **param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  double *pdVar6;
  double *pdVar7;
  longlong ***ppplVar8;
  double *pdVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong *puVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  longlong **pplVar19;
  double dVar20;
  double dVar21;
  longlong **pplVar22;
  longlong **pplVar23;
  longlong **pplVar24;
  longlong **pplVar25;
  longlong *local_res8;
  longlong **local_res10;
  undefined8 *local_res18;
  int local_res20 [2];
  double **ppdVar26;
  ulonglong uVar27;
  double **ppdVar28;
  uint uVar29;
  longlong **local_2b8;
  undefined4 uStack_2b0;
  uint uStack_2ac;
  undefined8 local_2a8;
  undefined4 uStack_2a0;
  uint uStack_29c;
  longlong *local_298;
  uint uStack_28c;
  longlong **local_288;
  undefined4 local_280;
  uint local_27c;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  double local_268;
  uint local_25c;
  longlong **local_258;
  undefined4 uStack_250;
  uint uStack_24c;
  undefined8 local_248;
  char *local_240;
  undefined4 local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  int *local_218;
  longlong **local_208;
  undefined4 local_200;
  uint local_1fc;
  double local_1f8 [2];
  double local_1e8 [2];
  double local_1d8;
  undefined4 local_1cc;
  double local_1c8;
  byte local_1bc;
  longlong **local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  longlong **local_1a8;
  undefined4 local_1a0;
  uint local_19c;
  longlong **local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  double *local_188;
  double *local_180;
  double *local_178;
  double *local_170;
  longlong **local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong **local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong **local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong **local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  longlong **local_128;
  undefined4 local_120;
  uint local_11c;
  longlong *local_118;
  undefined4 local_10c;
  longlong *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint local_f8;
  longlong **local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong **local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [16];
  longlong local_b8;
  
  local_240 = "gml_Script_anon@3209@gml_Object_oBossEmbraceHalf_Create_0";
  local_248 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_248;
  local_238 = 0x7d;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20[0] = param_4;
  _eh_vector_constructor_iterator_(local_1f8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_25c = 0xffffff;
  local_268 = 0.0;
  local_e4 = 0xffffff;
  local_f0 = (longlong **)0x0;
  local_10c = 0xffffff;
  local_118 = (longlong *)0x0;
  uStack_13c = 0xffffff;
  local_148 = (longlong **)0x0;
  local_19c = 0xffffff;
  local_1a8 = (longlong **)0x0;
  uStack_14c = 0xffffff;
  local_158 = (longlong **)0x0;
  local_1ac = 0xffffff;
  local_1b8 = (longlong **)0x0;
  local_11c = 0xffffff;
  local_128 = (longlong **)0x0;
  local_1fc = 0xffffff;
  local_208 = (longlong **)0x0;
  uStack_18c = 0xffffff;
  local_198 = (longlong **)0x0;
  uStack_12c = 0xffffff;
  local_138 = (longlong **)0x0;
  uStack_15c = 0xffffff;
  local_168 = (longlong **)0x0;
  uStack_cc = 0xffffff;
  local_d8 = (longlong **)0x0;
  local_26c = 0;
  local_278 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_238 = 0x7f;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a07398);
  cVar2 = FUN_140e491e0(uVar4);
  if (cVar2 != '\0') {
    local_238 = 0x80;
    uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a06e18);
    if (local_res20[0] < 1) {
      pdVar6 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar6 = (double *)*param_5;
    }
    local_27c = *(undefined4 *)((longlong)pdVar6 + 0xc);
    local_280 = *(undefined4 *)(pdVar6 + 1);
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) == 0) {
      local_288 = (longlong **)*pdVar6;
    }
    else {
      FUN_1400419b0(&local_288);
    }
    FUN_140046500(&local_288,uVar4);
    uStack_24c = local_27c;
    uStack_250 = local_280;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) == 0) {
      local_258 = local_288;
    }
    else {
      FUN_1400419b0(&local_258,&local_288);
    }
    uStack_28c = 7;
    local_298 = (longlong *)CONCAT44(local_298._4_4_,0x168);
    FUN_140042560(&local_258,&local_298);
    if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    uVar4 = FUN_140e794b0(0,0x4043000000000000);
    uStack_2ac = uStack_24c;
    uStack_2b0 = uStack_250;
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
      local_2b8 = local_258;
    }
    else {
      FUN_1400419b0(&local_2b8,&local_258);
    }
    FUN_140162c50(&local_2b8,uVar4);
    local_2a8 = local_2b8;
    uStack_2a0 = uStack_2b0;
    uStack_29c = uStack_2ac;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    FUN_140041b80(&local_268,&local_2a8);
    if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    uVar13 = 0;
    uVar29 = 0;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    goto LAB_14075f0f9;
  }
  local_238 = 0x82;
  pdVar6 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
  pdVar7 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar18 = *pdVar7;
  }
  else {
    dVar18 = (double)FUN_140e4b060(pdVar7);
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar20 = *pdVar6;
  }
  else {
    dVar20 = (double)FUN_140e4b060(pdVar6);
  }
  fVar15 = (float)FUN_140e793d0(0,0,(float)dVar20,(float)dVar18);
  local_e4 = 0;
  local_f0 = (longlong **)(double)fVar15;
  local_238 = 0x83;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a06e18);
  uStack_28c = 0;
  local_298 = (longlong *)0x3ff0000000000000;
  iVar3 = FUN_140e851f0(uVar4,&local_298,DAT_141955260,1);
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if (iVar3 < 1) {
    uStack_28c = 0;
    local_298 = (longlong *)0x0;
    pplVar19 = &local_298;
    uVar13 = 2;
LAB_14075efe9:
    local_108 = *pplVar19;
    uStack_100 = *(undefined4 *)(pplVar19 + 1);
    uStack_fc = *(undefined4 *)((longlong)pplVar19 + 0xc);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_108);
  }
  else {
    local_228 = &local_res8;
    uStack_220 = &param_5;
    local_218 = local_res20;
    pplVar19 = (longlong **)FUN_140760ee0(&local_228,&local_2a8);
    uVar13 = 1;
    if (pplVar19 != &local_118) goto LAB_14075efe9;
  }
  if (((uVar13 & 2) != 0) &&
     (uVar13 = uVar13 & 0xfffffffd, (1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_298);
  }
  if (((uVar13 & 1) != 0) &&
     (uVar13 = uVar13 & 0xfffffffe, (1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_2a8);
  }
  local_238 = 0x84;
  uStack_2ac = 0;
  uStack_2b0 = local_e8;
  local_2b8 = local_f0;
  FUN_1400460e0(&local_2b8,&local_118);
  local_2a8 = local_2b8;
  uStack_2a0 = uStack_2b0;
  uStack_29c = uStack_2ac;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  FUN_140041b80(&local_268,&local_2a8);
  uVar29 = uVar13;
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
LAB_14075f0f9:
  local_238 = 0x86;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a08158);
  local_188 = &local_268;
  ppdVar28 = &local_188;
  pdVar6 = (double *)FUN_140e63610(local_res8,local_res10,&local_278,1,uVar5,ppdVar28,uVar29);
  if (pdVar6 != &local_268) {
    local_2a8 = (longlong **)*pdVar6;
    uStack_2a0 = *(undefined4 *)(pdVar6 + 1);
    uStack_29c = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    FUN_140041b80(&local_268,&local_2a8);
  }
  local_238 = 0x88;
  pdVar6 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a081a8);
  uStack_28c = 6;
  local_298 = local_res8;
  uVar27 = (ulonglong)ppdVar28 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffffffffffff00;
  FUN_140e87440(&local_298,DAT_1419fe0e8,0x80000000,&local_148,uVar5,uVar27);
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  dVar18 = local_268;
  if ((local_25c & 0xffffff) != 0) {
    dVar18 = (double)FUN_140e4b060(&local_268);
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar20 = *pdVar6;
  }
  else {
    dVar20 = (double)FUN_140e4b060(pdVar6);
  }
  fVar15 = (float)FUN_140e78f90((float)dVar20,(float)dVar18);
  uStack_2ac = uStack_13c;
  uStack_2b0 = uStack_140;
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
    local_2b8 = local_148;
  }
  else {
    FUN_1400419b0(&local_2b8,&local_148);
  }
  FUN_140162c50(&local_2b8,(double)fVar15);
  local_2a8 = local_2b8;
  uStack_2a0 = uStack_2b0;
  uStack_29c = uStack_2ac;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_2a8);
  uVar29 = uVar13;
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_238 = 0x89;
  uStack_28c = 6;
  local_298 = local_res8;
  uVar5 = uVar5 & 0xffffffffffffff00;
  FUN_140e87440(&local_298,DAT_1419fe158,0x80000000,&local_158,uVar5,uVar27 & 0xffffffffffffff00,
                uVar29);
  uVar17 = (undefined4)(uVar5 >> 0x20);
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  dVar18 = local_268;
  if ((local_25c & 0xffffff) != 0) {
    dVar18 = (double)FUN_140e4b060(&local_268);
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar20 = *pdVar6;
  }
  else {
    dVar20 = (double)FUN_140e4b060(pdVar6);
  }
  fVar15 = (float)FUN_140e79010((float)dVar20,(float)dVar18);
  uStack_2ac = uStack_14c;
  uStack_2b0 = uStack_150;
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
    local_2b8 = local_158;
  }
  else {
    FUN_1400419b0(&local_2b8,&local_158);
  }
  FUN_140162c50(&local_2b8,(double)fVar15);
  local_2a8 = local_2b8;
  uStack_2a0 = uStack_2b0;
  uStack_29c = uStack_2ac;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_2a8);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_238 = 0x8b;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  pdVar6 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
  pdVar7 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
  local_2a8 = (longlong **)CONCAT44(uRam0000000141dc6984,_DAT_141dc6980);
  uStack_2a0 = uRam0000000141dc6988;
  uStack_29c = uRam0000000141dc698c;
  if ((1 << ((byte)local_1f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_2a8);
  local_2a8 = (longlong **)CONCAT44(uRam0000000141dc6984,_DAT_141dc6980);
  uStack_2a0 = uRam0000000141dc6988;
  uStack_29c = uRam0000000141dc698c;
  local_188 = local_1f8;
  if ((1 << ((byte)local_1e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_2a8);
  local_180 = local_1e8;
  if (pdVar6 != &local_1d8) {
    local_2a8 = (longlong **)*pdVar6;
    uStack_2a0 = *(undefined4 *)(pdVar6 + 1);
    uStack_29c = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_2a8);
  }
  local_178 = &local_1d8;
  if (pdVar7 != &local_1c8) {
    local_2a8 = (longlong **)*pdVar7;
    uStack_2a0 = *(undefined4 *)(pdVar7 + 1);
    uStack_29c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_2a8);
  }
  local_170 = &local_1c8;
  uVar4 = CONCAT44(uVar17,DAT_1419fd548);
  ppplVar8 = (longlong ***)FUN_140e634e0(local_res8,local_res10,&local_278,4,uVar4,&local_188);
  uVar17 = (undefined4)((ulonglong)uVar4 >> 0x20);
  pplVar19 = (longlong **)0x0;
  uVar29 = 0xffffff;
  if (ppplVar8 != &local_128) {
    local_2a8 = *ppplVar8;
    uStack_2a0 = *(undefined4 *)(ppplVar8 + 1);
    uStack_29c = *(undefined4 *)((longlong)ppplVar8 + 0xc);
    FUN_140041b80(&local_128,&local_2a8);
    pplVar19 = local_128;
    uVar29 = local_11c;
  }
  local_238 = 0x8c;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  pdVar6 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a07c98);
  pdVar7 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a07e08);
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a07dc8);
  if (pdVar6 != local_1f8) {
    local_2a8 = (longlong **)*pdVar6;
    uStack_2a0 = *(undefined4 *)(pdVar6 + 1);
    uStack_29c = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << ((byte)local_1f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_2a8);
  }
  local_188 = local_1f8;
  if (pdVar7 != local_1e8) {
    local_2a8 = (longlong **)*pdVar7;
    uStack_2a0 = *(undefined4 *)(pdVar7 + 1);
    uStack_29c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)local_1e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_2a8);
  }
  local_180 = local_1e8;
  local_280 = local_120;
  uVar14 = uVar29 & 0x1f;
  local_27c = uVar29;
  local_f8 = uVar14;
  if ((1 << (sbyte)uVar14 & 0x46U) == 0) {
    local_288 = pplVar19;
  }
  else {
    FUN_1400419b0(&local_288,&local_128);
  }
  FUN_140046500(&local_288,uVar4);
  if ((local_27c & 0xffffff) == 0) {
    uVar16 = SUB84(local_288,0);
  }
  else {
    uVar16 = FUN_140e4b060(&local_288);
  }
  local_1d8 = (double)FUN_140e78ec0(uVar16,0,0x3ff0000000000000);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1cc = 0;
  uVar29 = uVar13;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_178 = &local_1d8;
  ppdVar28 = &local_188;
  uVar5 = CONCAT44(uVar17,DAT_141a00c58);
  ppplVar8 = (longlong ***)FUN_140e634e0(local_res8,local_res10,&local_278,3,uVar5,ppdVar28,uVar29);
  if (ppplVar8 != &local_208) {
    local_2a8 = *ppplVar8;
    uStack_2a0 = *(undefined4 *)(ppplVar8 + 1);
    uStack_29c = *(undefined4 *)((longlong)ppplVar8 + 0xc);
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_2a8);
  }
  local_238 = 0x8d;
  pdVar9 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a08398);
  uStack_24c = *(uint *)((longlong)pdVar9 + 0xc);
  uStack_250 = *(undefined4 *)(pdVar9 + 1);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
    local_258 = (longlong **)*pdVar9;
  }
  else {
    FUN_1400419b0(&local_258,pdVar9);
  }
  uStack_28c = 0;
  local_298 = (longlong *)0x3fb999999999999a;
  FUN_140042560(&local_258,&local_298);
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
    dVar18 = *pdVar9;
  }
  else {
    dVar18 = (double)FUN_140e4b060(pdVar9);
  }
  uStack_29c = 0;
  local_2b8 = (longlong **)((ulonglong)dVar18 ^ 0x8000000000000000);
  uStack_2ac = 0;
  uStack_2b0 = uStack_2a0;
  uStack_28c = 0;
  local_298 = (longlong *)0x3fb999999999999a;
  local_2a8 = local_2b8;
  FUN_140042560(&local_2b8,&local_298);
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  pplVar19 = local_258;
  if ((uStack_24c & 0xffffff) != 0) {
    pplVar19 = (longlong **)FUN_140e4b060(&local_258);
  }
  if ((uStack_2ac & 0xffffff) == 0) {
    uVar17 = SUB84(local_2b8,0);
  }
  else {
    uVar17 = FUN_140e4b060(&local_2b8);
  }
  uVar4 = FUN_140e794b0(uVar17,pplVar19);
  local_27c = local_1fc;
  local_280 = local_200;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) == 0) {
    local_288 = local_208;
  }
  else {
    FUN_1400419b0(&local_288,&local_208);
  }
  FUN_140162c50(&local_288,uVar4);
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar18 = *pdVar7;
  }
  else {
    dVar18 = (double)FUN_140e4b060(pdVar7);
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar20 = *pdVar6;
  }
  else {
    dVar20 = (double)FUN_140e4b060(pdVar6);
  }
  if ((local_27c & 0xffffff) == 0) {
    uVar17 = SUB84(local_288,0);
  }
  else {
    uVar17 = FUN_140e4b060(&local_288);
  }
  pplVar19 = (longlong **)FUN_140e78ec0(uVar17,dVar20,dVar18);
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_1fc = 0;
  local_208 = pplVar19;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_238 = 0x8f;
  dVar18 = local_268;
  if ((local_25c & 0xffffff) != 0) {
    dVar18 = (double)FUN_140e4b060(&local_268);
  }
  pplVar19 = local_208;
  if ((local_1fc & 0xffffff) != 0) {
    pplVar19 = (longlong **)FUN_140e4b060(&local_208);
  }
  fVar15 = (float)FUN_140e78f90((float)(double)pplVar19,(float)dVar18);
  uStack_2ac = local_19c;
  uStack_2b0 = local_1a0;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
    local_2b8 = local_1a8;
  }
  else {
    FUN_1400419b0(&local_2b8,&local_1a8);
  }
  FUN_140162c50(&local_2b8,(double)fVar15);
  local_2a8 = local_2b8;
  uStack_2a0 = uStack_2b0;
  uStack_29c = uStack_2ac;
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_2a8);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_238 = 0x90;
  dVar18 = local_268;
  if ((local_25c & 0xffffff) != 0) {
    dVar18 = (double)FUN_140e4b060(&local_268);
  }
  pplVar19 = local_208;
  if ((local_1fc & 0xffffff) != 0) {
    pplVar19 = (longlong **)FUN_140e4b060(&local_208);
  }
  fVar15 = (float)FUN_140e79010((float)(double)pplVar19,(float)dVar18);
  uStack_2ac = local_1ac;
  uStack_2b0 = local_1b0;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
    local_2b8 = local_1b8;
  }
  else {
    FUN_1400419b0(&local_2b8,&local_1b8);
  }
  FUN_140162c50(&local_2b8,(double)fVar15);
  local_2a8 = local_2b8;
  uStack_2a0 = uStack_2b0;
  uStack_29c = uStack_2ac;
  FUN_140041b80(&local_138,&local_2a8);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_238 = 0x92;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  uStack_28c = 6;
  local_298 = local_res8;
  uVar27 = (ulonglong)ppdVar28 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffffffffffff00;
  FUN_140e87440(&local_298,DAT_1419fe0e8,0x80000000,&local_148,uVar5,uVar27,uVar13);
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  uStack_28c = 6;
  local_298 = local_res8;
  uVar5 = uVar5 & 0xffffffffffffff00;
  FUN_140e87440(&local_298,DAT_1419fe158,0x80000000,&local_158,uVar5,uVar27 & 0xffffffffffffff00,
                uVar13);
  uVar17 = (undefined4)(uVar5 >> 0x20);
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_2a8 = local_148;
  uStack_2a0 = uStack_140;
  uStack_29c = uStack_13c;
  if ((1 << ((byte)local_1f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_2a8);
  local_2a8 = local_158;
  uStack_2a0 = uStack_150;
  uStack_29c = uStack_14c;
  local_188 = local_1f8;
  if ((1 << ((byte)local_1e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_2a8);
  local_180 = local_1e8;
  local_2a8 = (longlong **)CONCAT44(uRam0000000141dd66ec,_DAT_141dd66e8);
  uStack_2a0 = uRam0000000141dd66f0;
  uStack_29c = DAT_141dd66f4;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140041b80(&local_1d8,&local_2a8);
  local_178 = &local_1d8;
  uStack_29c = 0xf;
  local_2a8 = (longlong **)0x1000000000000bb;
  local_108 = (longlong *)0x1000000000000bb;
  uStack_100 = uStack_2a0;
  uStack_fc = 0xf;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_108);
  local_170 = &local_1c8;
  ppdVar28 = &local_188;
  ppplVar8 = (longlong ***)
             FUN_140e634e0(local_res8,local_res10,&local_278,4,CONCAT44(uVar17,DAT_141a0a7c8),
                           ppdVar28);
  if (ppplVar8 != &local_168) {
    local_2a8 = *ppplVar8;
    uStack_2a0 = *(undefined4 *)(ppplVar8 + 1);
    uStack_29c = *(undefined4 *)((longlong)ppplVar8 + 0xc);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_2a8);
  }
  local_238 = 0x93;
  iVar3 = FUN_140e63cb0(local_c8,&local_res8,&local_res10,&local_168);
  uVar29 = uStack_12c;
  pplVar19 = local_138;
  bVar1 = (byte)uStack_12c;
  if (0 < iVar3) {
    dVar18 = (double)CONCAT44(uStack_12c,uStack_130);
    do {
      (**(code **)(*local_res8 + 8))(local_res8,DAT_141a081a8);
      (**(code **)(*local_res8 + 8))(local_res8,DAT_141a07c98);
      (**(code **)(*local_res8 + 8))(local_res8,DAT_141a07e08);
      (**(code **)(*local_res8 + 8))(local_res8,DAT_141a08398);
      local_238 = 0x94;
      (**(code **)(*local_res8 + 8))(local_res8,DAT_141a081a8);
      (**(code **)(*local_res8 + 8))(local_res8,DAT_141a07c98);
      (**(code **)(*local_res8 + 8))(local_res8,DAT_141a07e08);
      pdVar6 = (double *)(*(code *)(*local_res10)[1])(local_res10,DAT_141a08398);
      pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a08398);
      FUN_140e609c0(local_res8);
      if (pdVar6 != pdVar7) {
        local_228 = (longlong **)*pdVar6;
        uStack_220 = (undefined8 *)pdVar6[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar7);
        }
        FUN_140041b80(pdVar7,&local_228);
      }
      FUN_140e60910(1);
      local_238 = 0x95;
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      local_278 = 0;
      local_270 = 0;
      local_26c = 5;
      pdVar6 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a08398);
      if (pdVar6 != local_1f8) {
        local_228 = (longlong **)*pdVar6;
        uStack_220 = (undefined8 *)pdVar6[1];
        if ((1 << ((byte)local_1f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1f8);
        }
        FUN_140041b80(local_1f8,&local_228);
      }
      local_228 = (longlong **)CONCAT44(uRam00000001419e7fd4,_DAT_1419e7fd0);
      uStack_220 = (undefined8 *)CONCAT44(uRam00000001419e7fdc,uRam00000001419e7fd8);
      local_188 = local_1f8;
      if ((1 << ((byte)local_1e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1e8);
      }
      FUN_140041b80(local_1e8,&local_228);
      local_180 = local_1e8;
      local_228 = (longlong **)CONCAT44(uRam00000001419e8044,_DAT_1419e8040);
      uStack_220 = (undefined8 *)CONCAT44(uRam00000001419e804c,uRam00000001419e8048);
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140041b80(&local_1d8,&local_228);
      local_178 = &local_1d8;
      ppdVar26 = &local_188;
      gml_Script_arm_meeting_line(local_res8,local_res10,&local_278,3,ppdVar26);
      local_238 = 0x96;
      pdVar6 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a08398);
      ppplVar8 = (longlong ***)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a07d48);
      FUN_140e609c0(local_res8);
      uStack_2ac = *(uint *)((longlong)pdVar6 + 0xc);
      uStack_2b0 = *(undefined4 *)(pdVar6 + 1);
      if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) == 0) {
        local_2b8 = (longlong **)*pdVar6;
      }
      else {
        FUN_1400419b0(&local_2b8,pdVar6);
      }
      uStack_fc = 0;
      local_108 = (longlong *)0x4000000000000000;
      FUN_140046500(&local_2b8,&local_108);
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if (&local_2b8 != ppplVar8) {
        local_228 = local_2b8;
        uStack_220 = (undefined8 *)CONCAT44(uStack_2ac,uStack_2b0);
        if ((1 << ((byte)*(undefined4 *)((longlong)ppplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(ppplVar8);
        }
        FUN_140041b80(ppplVar8,&local_228);
      }
      if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      FUN_140e60910(1);
      local_238 = 0x97;
      puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a10a28);
      FUN_140e609c0(local_res8);
      puVar11 = (undefined8 *)FUN_140e48e40(puVar10,1);
      FUN_140e609c0(*(undefined8 *)*puVar10);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar11);
      }
      *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
      *puVar11 = 0x3ff0000000000000;
      FUN_140e60910(2);
      local_238 = 0x98;
      puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a10a28);
      FUN_140e609c0(local_res8);
      puVar11 = (undefined8 *)FUN_140e48e40(puVar10,2);
      FUN_140e609c0(*(undefined8 *)*puVar10);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar11);
      }
      *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
      *puVar11 = 0x3ff0000000000000;
      FUN_140e60910(2);
      local_238 = 0x99;
      puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a10b88);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
      *puVar10 = 0x4000000000000000;
      local_238 = 0x9b;
      ppplVar8 = (longlong ***)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
      uStack_29c = 6;
      local_2a8 = local_res10;
      ppdVar28 = (double **)((ulonglong)ppdVar28 & 0xffffffffffffff00);
      FUN_140e87440(&local_2a8,DAT_141a0a828,0x80000000,&local_d8,
                    (ulonglong)ppdVar26 & 0xffffffffffffff00,ppdVar28);
      if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      FUN_140e609c0(local_res8);
      if (&local_d8 != ppplVar8) {
        local_228 = local_d8;
        uStack_220 = (undefined8 *)CONCAT44(uStack_cc,uStack_d0);
        if ((1 << ((byte)*(undefined4 *)((longlong)ppplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(ppplVar8);
        }
        FUN_140041b80(ppplVar8,&local_228);
      }
      FUN_140e60910(1);
      local_238 = 0x9c;
      pdVar6 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0aa38);
      FUN_140e609c0(local_res8);
      if (local_res20[0] < 1) {
        pdVar7 = (double *)&DAT_1419df7b0;
      }
      else {
        pdVar7 = (double *)*param_5;
      }
      if (pdVar7 != pdVar6) {
        local_228 = (longlong **)*pdVar7;
        uStack_220 = (undefined8 *)pdVar7[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar6);
        }
        FUN_140041b80(pdVar6,&local_228);
      }
      FUN_140e60910(1);
      local_238 = 0x9d;
      pdVar6 = (double *)(*(code *)(*local_res10)[1])(local_res10,DAT_141a081a8);
      pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a07cc8);
      dVar20 = local_268;
      if ((local_25c & 0xffffff) != 0) {
        dVar20 = (double)FUN_140e4b060(&local_268);
      }
      if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
        dVar21 = *pdVar6;
      }
      else {
        dVar21 = (double)FUN_140e4b060(pdVar6);
      }
      fVar15 = (float)FUN_140e78f90((float)dVar21,(float)dVar20);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar7);
      }
      *(undefined4 *)((longlong)pdVar7 + 0xc) = 0;
      *pdVar7 = (double)fVar15;
      local_238 = 0x9e;
      pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a08368);
      dVar20 = local_268;
      if ((local_25c & 0xffffff) != 0) {
        dVar20 = (double)FUN_140e4b060(&local_268);
      }
      if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
        dVar21 = *pdVar6;
      }
      else {
        dVar21 = (double)FUN_140e4b060(pdVar6);
      }
      fVar15 = (float)FUN_140e79010((float)dVar21,(float)dVar20);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar7);
      }
      *(undefined4 *)((longlong)pdVar7 + 0xc) = 0;
      *pdVar7 = (double)fVar15;
      local_238 = 0x9f;
      ppplVar8 = (longlong ***)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a08578);
      FUN_140e609c0(local_res8);
      if (&local_198 != ppplVar8) {
        local_228 = local_198;
        uStack_220 = (undefined8 *)CONCAT44(uStack_18c,uStack_190);
        if ((1 << ((byte)*(undefined4 *)((longlong)ppplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(ppplVar8);
        }
        FUN_140041b80(ppplVar8,&local_228);
      }
      FUN_140e60910(1);
      local_238 = 0xa0;
      ppplVar8 = (longlong ***)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a084b8);
      FUN_140e609c0(local_res8);
      if (&local_138 != ppplVar8) {
        local_228 = pplVar19;
        uStack_220 = (undefined8 *)dVar18;
        if ((1 << ((byte)*(undefined4 *)((longlong)ppplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(ppplVar8);
        }
        FUN_140041b80(ppplVar8,&local_228);
      }
      FUN_140e60910(1);
      local_238 = 0xa1;
      pdVar6 = (double *)(*(code *)(*local_res10)[1])(local_res10,DAT_141a08378);
      pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a082f8);
      FUN_140e609c0(local_res8);
      if (pdVar6 != pdVar7) {
        local_228 = (longlong **)*pdVar6;
        uStack_220 = (undefined8 *)pdVar6[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar7);
        }
        FUN_140041b80(pdVar7,&local_228);
      }
      FUN_140e60910(1);
      local_238 = 0xa2;
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      local_278 = 0;
      local_270 = 0;
      local_26c = 5;
      pdVar6 = (double *)(*(code *)(*local_res10)[1])(local_res10,DAT_141a07e18);
      puVar12 = (ulonglong *)(*(code *)(*local_res10)[1])(local_res10,DAT_141a083d8);
      pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a07468);
      uVar13 = *(uint *)((longlong)puVar12 + 0xc);
      if ((uVar13 & 0xffffff) == 0) {
        uVar5 = *puVar12;
      }
      else {
        uVar5 = FUN_140e4b060(puVar12);
        uVar13 = *(uint *)((longlong)puVar12 + 0xc);
      }
      uVar17 = (undefined4)uVar5;
      uStack_28c = 0;
      local_298 = (longlong *)(uVar5 ^ 0x8000000000000000);
      if ((uVar13 & 0xffffff) == 0) {
        uVar5 = *puVar12;
      }
      else {
        uVar5 = FUN_140e4b060(puVar12);
        uVar17 = SUB84(local_298,0);
      }
      if ((uStack_28c & 0xffffff) != 0) {
        uVar17 = FUN_140e4b060(&local_298);
      }
      uVar4 = FUN_140e794b0(uVar17,uVar5);
      uStack_24c = *(uint *)((longlong)pdVar6 + 0xc);
      uStack_250 = *(undefined4 *)(pdVar6 + 1);
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
        local_258 = (longlong **)*pdVar6;
      }
      else {
        FUN_1400419b0(&local_258,pdVar6);
      }
      FUN_140162c50(&local_258,uVar4);
      local_228 = local_258;
      uStack_220 = (undefined8 *)CONCAT44(uStack_24c,uStack_250);
      if ((1 << ((byte)local_1f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1f8);
      }
      FUN_140041b80(local_1f8,&local_228);
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      local_188 = local_1f8;
      if (pdVar6 != local_1e8) {
        local_228 = (longlong **)*pdVar6;
        uStack_220 = (undefined8 *)pdVar6[1];
        if ((1 << ((byte)local_1e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_228);
      }
      local_180 = local_1e8;
      FUN_140e609c0(local_res8);
      pdVar6 = (double *)FUN_140e79230(&local_278,2,&local_188);
      if (pdVar6 != pdVar7) {
        local_228 = (longlong **)*pdVar6;
        uStack_220 = (undefined8 *)pdVar6[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar7);
        }
        FUN_140041b80(pdVar7,&local_228);
      }
      FUN_140e60910(1);
      local_238 = 0xa3;
      pdVar6 = (double *)(*(code *)(*local_res10)[1])(local_res10,DAT_141a08488);
      pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a08198);
      FUN_140e609c0(local_res8);
      if (pdVar6 != pdVar7) {
        local_228 = (longlong **)*pdVar6;
        uStack_220 = (undefined8 *)pdVar6[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar7);
        }
        FUN_140041b80(pdVar7,&local_228);
      }
      FUN_140e60910(1);
      local_238 = 0xa4;
      pdVar6 = (double *)(*(code *)(*local_res10)[1])(local_res10,DAT_141a07d28);
      pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a07dd8);
      FUN_140e609c0(local_res8);
      if (pdVar6 != pdVar7) {
        local_228 = (longlong **)*pdVar6;
        uStack_220 = (undefined8 *)pdVar6[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar7);
        }
        FUN_140041b80(pdVar7,&local_228);
      }
      FUN_140e60910(1);
      local_238 = 0xa5;
      uVar4 = (*(code *)(*local_res10)[1])(local_res10,DAT_141a07fe8);
      pdVar6 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a08588);
      local_27c = uVar29;
      local_280 = uStack_130;
      if ((1 << (bVar1 & 0x1f) & 0x46U) == 0) {
        local_288 = local_138;
      }
      else {
        FUN_1400419b0(&local_288,&local_138);
      }
      FUN_1400462a0(&local_288,uVar4);
      pplVar22 = local_288;
      if ((local_27c & 0xffffff) != 0) {
        pplVar22 = (longlong **)FUN_140e4b060(&local_288);
      }
      pplVar23 = local_198;
      if ((uStack_18c & 0xffffff) != 0) {
        pplVar23 = (longlong **)FUN_140e4b060(&local_198);
      }
      pplVar24 = local_1b8;
      if ((local_1ac & 0xffffff) != 0) {
        pplVar24 = (longlong **)FUN_140e4b060(&local_1b8);
      }
      pplVar25 = local_1a8;
      if ((local_19c & 0xffffff) != 0) {
        pplVar25 = (longlong **)FUN_140e4b060(&local_1a8);
      }
      fVar15 = (float)FUN_140e793d0((float)(double)pplVar25,(float)(double)pplVar24,
                                    (float)(double)pplVar23,(float)(double)pplVar22);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar6);
      }
      *(undefined4 *)((longlong)pdVar6 + 0xc) = 0;
      *pdVar6 = (double)fVar15;
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_238 = 0xa6;
      pdVar6 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a08588);
      pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a07d78);
      FUN_140e609c0(local_res8);
      if (pdVar6 != pdVar7) {
        local_228 = (longlong **)*pdVar6;
        uStack_220 = (undefined8 *)pdVar6[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar7);
        }
        FUN_140041b80(pdVar7,&local_228);
      }
      FUN_140e60910(1);
      cVar2 = FUN_140e643f0(local_c8,&local_res8,&local_res10);
    } while (cVar2 != '\0');
    uVar14 = local_f8;
  }
  FUN_140e63970(local_c8,&local_res8,&local_res10);
  local_238 = 0xa8;
  puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a06e38);
  FUN_140e609c0(local_res8);
  if (local_res20[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*param_5;
  }
  uVar17 = FUN_140e4a740(puVar11);
  ppplVar8 = (longlong ***)FUN_140e48e40(puVar10,uVar17);
  FUN_140e609c0(*(undefined8 *)*puVar10);
  if (&local_168 != ppplVar8) {
    local_228 = local_168;
    uStack_220 = (undefined8 *)CONCAT44(uStack_15c,uStack_160);
    if ((1 << ((byte)*(undefined4 *)((longlong)ppplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppplVar8);
    }
    FUN_140041b80(ppplVar8,&local_228);
  }
  FUN_140e60910(2);
  if (local_b8 != 0) {
    FUN_140e4cd60();
    local_b8 = 0;
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)uVar14 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  _eh_vector_destructor_iterator_(local_1f8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_248;
  return local_res18;
}

