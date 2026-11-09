// gml_Object_oBossUi_Draw_64 @ 0x140846ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oBossUi_Draw_64
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double *pdVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  double *pdVar7;
  byte bVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar14;
  ulonglong uVar13;
  double **ppdVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  double local_278;
  undefined4 uStack_270;
  uint uStack_26c;
  double local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  double local_248;
  uint local_23c;
  double local_238;
  uint local_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  char *local_210;
  undefined4 local_208;
  double local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  double local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c4;
  double local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double local_1a8;
  undefined4 local_19c;
  double local_198;
  undefined4 local_18c;
  double local_188;
  byte local_17c;
  double local_178;
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  double local_158;
  byte local_14c;
  undefined8 local_138;
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  double *local_f8;
  double *local_f0;
  undefined1 *local_e8;
  double *local_e0;
  double *local_d8;
  undefined8 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined8 *local_b8;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  local_288 = 0;
  local_210 = "gml_Script_anon@1786@gml_Object_oBossUi_Create_0";
  local_218 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_218;
  local_208 = 0x4d;
  uVar14 = 1;
  _eh_vector_constructor_iterator_(&local_188,0x10,9,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_1e4 = 0xffffff;
  local_1f0 = 0.0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_1c4 = 0xffffff;
  local_1d0 = 0;
  local_1f4 = 0xffffff;
  local_200 = 0.0;
  local_22c = 0xffffff;
  local_238 = 0.0;
  local_23c = 0xffffff;
  local_248 = 0.0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  bVar8 = 0xff;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_24c = 0;
  local_258 = 0;
  local_21c = 0;
  local_228 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_208 = 0x4f;
  uStack_28c = 0xf;
  local_298 = 7.291122019556457e-304;
  local_278 = 7.291122019556457e-304;
  uStack_270 = uStack_290;
  uStack_26c = 0xf;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_278);
  local_e0 = &local_158;
  ppdVar15 = &local_e0;
  uVar13 = CONCAT44(uVar14,DAT_141a02ef8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_258,1,uVar13,ppdVar15);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_208 = 0x4f;
    goto LAB_140847e27;
  }
  local_208 = 0x51;
  uStack_26c = 0xf;
  local_278 = 7.291122019556457e-304;
  uVar16 = (ulonglong)ppdVar15 & 0xffffffffffffff00;
  uVar13 = uVar13 & 0xffffffffffffff00;
  FUN_140e87440(&local_278,DAT_141a1f090,0x80000000,&local_88,uVar13,uVar16);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_298 = (double)local_88;
  uStack_290 = uStack_80;
  uStack_28c = uStack_7c;
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  FUN_140041b80(&local_1f0,&local_298);
  local_208 = 0x52;
  uStack_26c = 0xf;
  local_278 = 7.291122019556457e-304;
  uVar13 = uVar13 & 0xffffffffffffff00;
  FUN_140e87440(&local_278,DAT_1419f5a58,0x80000000,&local_98,uVar13,uVar16 & 0xffffffffffffff00);
  uVar14 = (undefined4)(uVar13 >> 0x20);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_298 = (double)local_98;
  uStack_290 = uStack_90;
  uStack_28c = uStack_8c;
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  FUN_140041b80(&local_1d0,&local_298);
  local_208 = 0x54;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a08c38);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08c38);
  if (pdVar4 != &local_188) {
    local_298 = *pdVar4;
    uStack_290 = *(undefined4 *)(pdVar4 + 1);
    uStack_28c = *(undefined4 *)((longlong)pdVar4 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_298);
  }
  local_f8 = &local_188;
  local_f0 = &local_1f0;
  local_298 = (double)CONCAT44(uRam00000001419e8ea4,_DAT_1419e8ea0);
  uStack_290 = uRam00000001419e8ea8;
  uStack_28c = uRam00000001419e8eac;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_298);
  local_e8 = local_168;
  FUN_140e609c0(param_1);
  uVar3 = CONCAT44(uVar14,DAT_141a00c58);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_258,3,uVar3,&local_f8);
  uVar14 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar6 != puVar5) {
    local_298 = (double)*puVar6;
    uStack_290 = *(undefined4 *)(puVar6 + 1);
    uStack_28c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_298);
  }
  FUN_140e60910(1);
  local_208 = 0x56;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  uStack_28c = 0xf;
  local_298 = 7.29112897291238e-304;
  local_278 = 7.29112897291238e-304;
  uStack_270 = uStack_290;
  uStack_26c = 0xf;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_278);
  local_f8 = &local_188;
  uVar3 = CONCAT44(uVar14,DAT_141a047c8);
  pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_258,1,uVar3,&local_f8);
  uVar14 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (pdVar7 != &local_200) {
    local_298 = *pdVar7;
    uStack_290 = *(undefined4 *)(pdVar7 + 1);
    uStack_28c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_200);
    }
    FUN_140041b80(&local_200,&local_298);
  }
  local_208 = 0x57;
  uStack_26c = local_1f4;
  uStack_270 = local_1f8;
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) == 0) {
    local_278 = local_200;
  }
  else {
    FUN_1400419b0(&local_278,&local_200);
  }
  local_288 = 1;
  uStack_28c = 0;
  local_298 = 2.0;
  FUN_140046500(&local_278,&local_298);
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    pdVar7 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar7 = (double *)*param_5;
  }
  local_25c = *(undefined4 *)((longlong)pdVar7 + 0xc);
  local_260 = *(undefined4 *)(pdVar7 + 1);
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) == 0) {
    local_268 = *pdVar7;
  }
  else {
    FUN_1400419b0(&local_268);
  }
  local_288 = 3;
  uStack_28c = 7;
  local_298 = (double)CONCAT44(local_298._4_4_,0x40);
  FUN_1400460e0(&local_268,&local_298);
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_1d4 = local_25c;
  local_1d8 = local_260;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) == 0) {
    local_1e0 = local_268;
  }
  else {
    FUN_1400419b0(&local_1e0,&local_268);
  }
  local_288 = 7;
  uStack_28c = 7;
  local_298 = (double)CONCAT44(local_298._4_4_,0xb0);
  FUN_1400460e0(&local_1e0,&local_298);
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  uStack_1ac = local_1d4;
  uStack_1b0 = local_1d8;
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) == 0) {
    local_1b8 = local_1e0;
  }
  else {
    FUN_1400419b0(&local_1b8,&local_1e0);
  }
  local_288 = 0xf;
  FUN_1400462a0(&local_1b8,&local_278);
  local_298 = local_1b8;
  uStack_290 = uStack_1b0;
  uStack_28c = uStack_1ac;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  FUN_140041b80(&local_238,&local_298);
  local_288 = 7;
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_288 = 3;
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  local_288 = 1;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_288 = 0;
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_208 = 0x58;
  if (param_4 < 2) {
    pdVar7 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar7 = (double *)param_5[1];
  }
  local_25c = *(undefined4 *)((longlong)pdVar7 + 0xc);
  local_260 = *(undefined4 *)(pdVar7 + 1);
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) == 0) {
    local_268 = *pdVar7;
  }
  else {
    FUN_1400419b0(&local_268);
  }
  local_288 = 0x10;
  uStack_28c = 7;
  local_298 = (double)((ulonglong)local_298 & 0xffffffff00000000);
  FUN_1400460e0(&local_268,&local_298);
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  uStack_26c = local_25c;
  uStack_270 = local_260;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) == 0) {
    local_278 = local_268;
  }
  else {
    FUN_1400419b0(&local_278,&local_268);
  }
  local_288 = 0x30;
  uStack_28c = 7;
  local_298 = (double)CONCAT44(local_298._4_4_,0xf3);
  FUN_1400460e0(&local_278,&local_298);
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = local_278;
  uStack_290 = uStack_270;
  uStack_28c = uStack_26c;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140041b80(&local_248,&local_298);
  local_288 = 0x10;
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_288 = 0;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_208 = 0x5a;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  local_f8 = &local_238;
  uVar3 = CONCAT44(uVar14,DAT_1419fd658);
  pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_258,1,uVar3,&local_f8);
  uVar14 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (pdVar7 != &local_238) {
    local_298 = *pdVar7;
    uStack_290 = *(undefined4 *)(pdVar7 + 1);
    uStack_28c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_298);
  }
  local_208 = 0x5b;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  local_f8 = &local_248;
  ppdVar15 = &local_f8;
  uVar3 = CONCAT44(uVar14,DAT_1419fd658);
  pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_258,1,uVar3,ppdVar15);
  uVar14 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uVar17 = (undefined4)((ulonglong)ppdVar15 >> 0x20);
  if (pdVar7 != &local_248) {
    local_298 = *pdVar7;
    uStack_290 = *(undefined4 *)(pdVar7 + 1);
    uStack_28c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_298);
  }
  local_208 = 0x5d;
  local_25c = local_1e4;
  local_260 = local_1e8;
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) == 0) {
    local_268 = local_1f0;
  }
  else {
    FUN_1400419b0(&local_268,&local_1f0);
  }
  local_288 = 0x40;
  FUN_140046500(&local_268,&local_1d0);
  uStack_26c = local_25c;
  uStack_270 = local_260;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) == 0) {
    local_278 = local_268;
  }
  else {
    FUN_1400419b0(&local_278,&local_268);
  }
  local_288 = 0xc0;
  FUN_140042560(&local_278,&local_200);
  local_298 = local_278;
  uStack_290 = uStack_270;
  uStack_28c = uStack_26c;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_298);
  local_288 = 0x40;
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_288 = 0;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_208 = 0x5e;
  local_25c = *(undefined4 *)((longlong)pdVar4 + 0xc);
  local_260 = *(undefined4 *)(pdVar4 + 1);
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) == 0) {
    local_268 = *pdVar4;
  }
  else {
    FUN_1400419b0(&local_268,pdVar4);
  }
  local_288 = 0x100;
  FUN_140046500(&local_268,&local_1d0);
  uStack_26c = local_25c;
  uStack_270 = local_260;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) == 0) {
    local_278 = local_268;
  }
  else {
    FUN_1400419b0(&local_278,&local_268);
  }
  local_288 = 0x300;
  FUN_140042560(&local_278,&local_200);
  local_298 = local_278;
  uStack_290 = uStack_270;
  uStack_28c = uStack_26c;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_298);
  local_288 = 0x100;
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_208 = 0x60;
  iVar2 = FUN_140e851f0(&local_1f0,pdVar4,DAT_141955260,1);
  bVar8 = 0xd;
  local_9c = 0xd;
  if (iVar2 < 1) {
    local_a8 = 0;
  }
  else {
    local_a8 = 0x3ff0000000000000;
  }
  local_208 = 0x62;
  uStack_26c = 0xf;
  local_278 = 7.29112897291238e-304;
  if (param_4 < 3) {
    pdVar4 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar4 = (double *)param_5[2];
  }
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar9 = *pdVar4;
  }
  else {
    dVar9 = (double)FUN_140e4b060();
  }
  dVar10 = local_248;
  if ((local_23c & 0xffffff) != 0) {
    dVar10 = (double)FUN_140e4b060(&local_248);
  }
  dVar11 = local_238;
  if ((local_22c & 0xffffff) != 0) {
    dVar11 = (double)FUN_140e4b060(&local_238);
  }
  dVar12 = local_278;
  if ((uStack_26c & 0xffffff) != 0) {
    dVar12 = (double)FUN_140e4b060(&local_278);
  }
  uVar3 = CONCAT44(uVar14,(float)dVar10);
  FUN_140ec5dd0(param_1,(int)dVar12,0,(float)dVar11,uVar3,CONCAT44(uVar17,0x3f800000),0x3f800000,0,
                0xffffff,(float)dVar9);
  uVar14 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_208 = 99;
  if (param_4 < 3) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)param_5[2];
  }
  uStack_28c = 0;
  local_298 = 1.0;
  iVar2 = FUN_140e851f0(puVar6,&local_298,DAT_141955260,0);
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if (iVar2 == 0) {
    local_208 = 99;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_258 = 0;
    local_250 = 0;
    local_24c = 5;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a08c38);
    local_f8 = &local_1a8;
    uStack_28c = 0xf;
    local_298 = 7.29112897291238e-304;
    local_278 = 7.29112897291238e-304;
    uStack_270 = uStack_290;
    uStack_26c = 0xf;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_278);
    local_f0 = &local_178;
    local_298 = (double)CONCAT44(uRam00000001419e8e84,_DAT_1419e8e80);
    uStack_290 = uRam00000001419e8e88;
    uStack_28c = uRam00000001419e8e8c;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_298);
    local_e8 = local_168;
    local_e0 = &local_238;
    local_d8 = &local_248;
    uVar3 = CONCAT44(uVar14,DAT_1419fe728);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_228,1,uVar3,&local_f8);
    uVar14 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (puVar6 != &local_138) {
      local_298 = (double)*puVar6;
      uStack_290 = *(undefined4 *)(puVar6 + 1);
      uStack_28c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_298);
    }
    local_d0 = &local_138;
    local_298 = (double)CONCAT44(uRam00000001419e8e94,_DAT_1419e8e90);
    uStack_290 = uRam00000001419e8e98;
    uStack_28c = uRam00000001419e8e9c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_298);
    local_c8 = local_128;
    local_298 = (double)CONCAT44(uRam00000001419e8ec4,_DAT_1419e8ec0);
    uStack_290 = uRam00000001419e8ec8;
    uStack_28c = uRam00000001419e8ecc;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_298);
    local_c0 = local_118;
    if (param_4 < 3) {
      puVar6 = &DAT_1419df7b0;
LAB_140847b08:
      local_298 = (double)*puVar6;
      uStack_290 = *(undefined4 *)(puVar6 + 1);
      uStack_28c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_298);
    }
    else {
      puVar6 = (undefined8 *)param_5[2];
      if (puVar6 != &local_108) goto LAB_140847b08;
    }
    local_b8 = &local_108;
    uVar3 = CONCAT44(uVar14,DAT_141a03648);
    FUN_140e634e0(param_1,param_2,&local_258,8,uVar3,&local_f0);
    uVar14 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  local_208 = 100;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  local_f8 = &local_198;
  uStack_28c = 0xf;
  local_298 = 7.29112897291238e-304;
  local_278 = 7.29112897291238e-304;
  uStack_270 = uStack_290;
  uStack_26c = 0xf;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_278);
  local_f0 = &local_178;
  local_298 = (double)CONCAT44(uRam00000001419e8eb4,_DAT_1419e8eb0);
  uStack_290 = uRam00000001419e8eb8;
  uStack_28c = uRam00000001419e8ebc;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_298);
  local_e8 = local_168;
  local_e0 = &local_238;
  local_d8 = &local_248;
  uVar3 = CONCAT44(uVar14,DAT_1419fe728);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_228,1,uVar3,&local_f8);
  uVar14 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar6 != &local_138) {
    local_298 = (double)*puVar6;
    uStack_290 = *(undefined4 *)(puVar6 + 1);
    uStack_28c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_298);
  }
  local_d0 = &local_138;
  local_298 = (double)CONCAT44(uRam00000001419e8e94,_DAT_1419e8e90);
  uStack_290 = uRam00000001419e8e98;
  uStack_28c = uRam00000001419e8e9c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_298);
  local_c8 = local_128;
  local_298 = (double)CONCAT44(uRam00000001419e8ec4,_DAT_1419e8ec0);
  uStack_290 = uRam00000001419e8ec8;
  uStack_28c = uRam00000001419e8ecc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_298);
  local_c0 = local_118;
  if ((param_4 < 3) || (puVar5 = (undefined8 *)param_5[2], puVar5 != &local_108)) {
    local_298 = (double)*puVar5;
    uStack_290 = *(undefined4 *)(puVar5 + 1);
    uStack_28c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_298);
  }
  local_b8 = &local_108;
  FUN_140e634e0(param_1,param_2,&local_258,8,CONCAT44(uVar14,DAT_141a03648),&local_f0);
LAB_140847e27:
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << (bVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_188,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_218;
  return param_3;
}

