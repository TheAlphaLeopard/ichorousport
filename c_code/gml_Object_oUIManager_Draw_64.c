// gml_Object_oUIManager_Draw_64 @ 0x140e19810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oUIManager_Draw_64
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  byte bVar10;
  undefined4 uVar11;
  double dVar12;
  double *pdVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar21;
  undefined8 uVar20;
  ulonglong uVar22;
  undefined4 uVar23;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  double *local_258;
  undefined4 uStack_250;
  uint uStack_24c;
  double *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  double *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  double *local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  byte local_20c;
  undefined8 local_208;
  byte local_1fc;
  undefined1 local_1f8 [12];
  byte local_1ec;
  undefined1 local_1e8 [12];
  byte local_1dc;
  undefined1 local_1d8 [12];
  byte local_1cc;
  undefined1 local_1c8 [12];
  byte local_1bc;
  double *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  double *local_190;
  undefined8 *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined4 local_160;
  double *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  double *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  double local_138;
  uint local_12c;
  double *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  double *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  double local_108;
  uint local_fc;
  double *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  uint local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  double *local_c8;
  
  local_160 = 0;
  local_1a0 = "gml_Script_anon@10041@gml_Object_oUIManager_Other_10";
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  local_198 = 0x146;
  _eh_vector_constructor_iterator_(&local_218,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_ec = 0xffffff;
  local_f8 = (double *)0x0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_14c = 0xffffff;
  local_158 = (double *)0x0;
  local_11c = 0xffffff;
  local_128 = (double *)0x0;
  local_13c = 0xffffff;
  local_148 = (double *)0x0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_26c = 0;
  local_278 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_198 = 0x147;
  uStack_25c = 0xf;
  local_268 = (double *)0x100000100000051;
  local_258 = (double *)0x100000100000051;
  uStack_250 = uStack_260;
  uStack_24c = 0xf;
  FUN_140041b80(&local_108,&local_258);
  local_198 = 0x149;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02fb8);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  if (puVar4 != puVar1) {
    local_268 = (double *)*puVar4;
    uStack_260 = *(undefined4 *)(puVar4 + 1);
    uStack_25c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_268);
  }
  FUN_140e60910(1);
  local_198 = 0x14a;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a031c8);
  FUN_140e609c0(param_1);
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
  }
  if (puVar4 != puVar1) {
    local_268 = (double *)*puVar4;
    uStack_260 = *(undefined4 *)(puVar4 + 1);
    uStack_25c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_268);
  }
  FUN_140e60910(1);
  local_198 = 0x14c;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02f68);
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
LAB_140e19ad6:
    local_268 = (double *)*puVar1;
    uStack_260 = *(undefined4 *)(puVar1 + 1);
    uStack_25c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_268);
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 != &local_218) goto LAB_140e19ad6;
  }
  local_190 = (double *)&local_218;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
    if (puVar1 == &local_208) goto LAB_140e19b4f;
  }
  local_268 = (double *)*puVar1;
  uStack_260 = *(undefined4 *)(puVar1 + 1);
  uStack_25c = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  FUN_140041b80(&local_208,&local_268);
LAB_140e19b4f:
  local_188 = &local_208;
  ppuVar6 = &local_190;
  FUN_140e63610(param_1,param_2,&local_278,2,uVar2,ppuVar6);
  local_198 = 0x14e;
  ppuVar3 = (undefined8 **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02ff8);
  uStack_24c = 0xf;
  local_258 = (double *)0x100000000000106;
  uVar22 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
  uVar2 = uVar2 & 0xffffffffffffff00;
  FUN_140e87440(&local_258,DAT_141a57b90,0x80000000,&local_f8,uVar2,uVar22);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  uStack_24c = 0xf;
  local_258 = (double *)0x100000000000106;
  uVar2 = uVar2 & 0xffffffffffffff00;
  FUN_140e87440(&local_258,DAT_141a1d7d0,0x80000000,&local_d8,uVar2,uVar22 & 0xffffffffffffff00);
  uVar21 = (undefined4)(uVar2 >> 0x20);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  FUN_140e609c0(param_1);
  local_10c = local_ec;
  local_110 = local_f0;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
    local_118 = local_f8;
  }
  else {
    FUN_1400419b0(&local_118,&local_f8);
  }
  FUN_140046880(&local_118,&local_d8);
  uStack_23c = local_10c;
  uStack_240 = local_110;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
    local_248 = local_118;
  }
  else {
    FUN_1400419b0(&local_248,&local_118);
  }
  FUN_140046500(&local_248,&local_d8);
  if (&local_248 != (double **)ppuVar3) {
    local_268 = local_248;
    uStack_260 = uStack_240;
    uStack_25c = uStack_23c;
    if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppuVar3);
    }
    FUN_140041b80(ppuVar3,&local_268);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140e60910(1);
  local_198 = 0x14f;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03148);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02ff8);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03148);
  if (puVar1 != &local_218) {
    local_268 = (double *)*puVar1;
    uStack_260 = *(undefined4 *)(puVar1 + 1);
    uStack_25c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_268);
  }
  local_190 = (double *)&local_218;
  if (puVar4 != &local_208) {
    local_268 = (double *)*puVar4;
    uStack_260 = *(undefined4 *)(puVar4 + 1);
    uStack_25c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_268);
  }
  local_188 = &local_208;
  local_268 = (double *)CONCAT44(uRam00000001419ee914,_DAT_1419ee910);
  uStack_260 = uRam00000001419ee918;
  uStack_25c = uRam00000001419ee91c;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_268);
  local_180 = local_1f8;
  FUN_140e609c0(param_1);
  uVar20 = CONCAT44(uVar21,DAT_141a00c58);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_278,3,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  if (puVar4 != puVar5) {
    local_268 = (double *)*puVar4;
    uStack_260 = *(undefined4 *)(puVar4 + 1);
    uStack_25c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_268);
  }
  FUN_140e60910(1);
  local_198 = 0x151;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_190 = &local_108;
  uVar20 = CONCAT44(uVar21,DAT_141a047c8);
  ppuVar6 = (undefined8 **)FUN_140e634e0(param_1,param_2,&local_278,1,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  if ((double **)ppuVar6 != &local_158) {
    local_268 = (double *)*ppuVar6;
    uStack_260 = *(undefined4 *)(ppuVar6 + 1);
    uStack_25c = *(undefined4 *)((longlong)ppuVar6 + 0xc);
    FUN_140041b80(&local_158,&local_268);
  }
  local_198 = 0x152;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_190 = &local_108;
  ppuVar6 = &local_190;
  uVar2 = CONCAT44(uVar21,DAT_141a04808);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_278,1,uVar2,ppuVar6);
  uStack_23c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_240 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
    local_248 = (double *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_248,puVar4);
  }
  uStack_24c = 7;
  local_258 = (double *)CONCAT44(local_258._4_4_,4);
  FUN_1400462a0(&local_248,&local_258);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_268 = local_248;
  uStack_260 = uStack_240;
  uStack_25c = uStack_23c;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_268);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_198 = 0x153;
  uStack_23c = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_240 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
    local_248 = (double *)*puVar1;
  }
  else {
    FUN_1400419b0(&local_248,puVar1);
  }
  FUN_140042560(&local_248,&local_128);
  local_268 = local_248;
  uStack_260 = uStack_240;
  uStack_25c = uStack_23c;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_268);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_198 = 0x155;
  (**(code **)(*param_1 + 8))(param_1,DAT_141a03148);
  uStack_24c = 0xf;
  local_258 = (double *)0x100000000000106;
  uVar22 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
  uVar2 = uVar2 & 0xffffffffffffff00;
  FUN_140e87440(&local_258,DAT_1419f5998,0x80000000,&local_e8,uVar2,uVar22);
  uVar21 = (undefined4)(uVar2 >> 0x20);
  uVar23 = (undefined4)(uVar22 >> 0x20);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((local_dc & 0xffffff) == 0) {
    uVar11 = (undefined4)local_e8;
  }
  else {
    uVar11 = FUN_140e4b060(&local_e8);
  }
  dVar14 = (double)FUN_140e78ec0(uVar11,0,0x402c000000000000);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_12c = 0;
  local_198 = 0x157;
  local_138 = dVar14;
  pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd988);
  local_118 = pdVar7;
  pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd908);
  pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd9a8);
  local_c8 = pdVar9;
  if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
    dVar14 = *pdVar9;
  }
  else {
    dVar14 = (double)FUN_140e4b060(pdVar9);
  }
  if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
    dVar15 = *pdVar8;
  }
  else {
    dVar15 = (double)FUN_140e4b060(pdVar8);
  }
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar16 = *pdVar7;
  }
  else {
    dVar16 = (double)FUN_140e4b060(pdVar7);
  }
  if (param_4 < 2) {
    pdVar13 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar13 = (double *)param_5[1];
  }
  if ((*(uint *)((longlong)pdVar13 + 0xc) & 0xffffff) == 0) {
    dVar17 = *pdVar13;
  }
  else {
    dVar17 = (double)FUN_140e4b060();
  }
  if (param_4 < 1) {
    pdVar13 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar13 = (double *)*param_5;
  }
  if ((*(uint *)((longlong)pdVar13 + 0xc) & 0xffffff) == 0) {
    dVar18 = *pdVar13;
  }
  else {
    dVar18 = (double)FUN_140e4b060();
  }
  dVar19 = local_138;
  if ((local_12c & 0xffffff) != 0) {
    dVar19 = (double)FUN_140e4b060(&local_138);
  }
  dVar12 = local_108;
  if ((local_fc & 0xffffff) != 0) {
    dVar12 = (double)FUN_140e4b060(&local_108);
  }
  uVar20 = CONCAT44(uVar21,(float)dVar17);
  FUN_140ec5dd0(param_1,(longlong)dVar12,(float)dVar19,(float)dVar18,uVar20,
                CONCAT44(uVar23,(float)dVar16),(float)dVar15,(float)dVar14,0xffffff,0x3f800000);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x159;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam0000000141dc79a4,_DAT_141dc79a0);
  uStack_260 = uRam0000000141dc79a8;
  uStack_25c = uRam0000000141dc79ac;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  uVar20 = CONCAT44(uVar21,DAT_141a034c8);
  FUN_140e634e0(param_1,param_2,&local_278,1,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x15b;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_260 = uRam00000001419df7c8;
  uStack_25c = uRam00000001419df7cc;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  uVar20 = CONCAT44(uVar21,DAT_141a03418);
  FUN_140e634e0(param_1,param_2,&local_278,1,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x15c;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419ee8b4,_DAT_1419ee8b0);
  uStack_260 = uRam00000001419ee8b8;
  uStack_25c = uRam00000001419ee8bc;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  uVar20 = CONCAT44(uVar21,DAT_141a034f8);
  FUN_140e634e0(param_1,param_2,&local_278,1,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x15d;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419ee8c4,_DAT_1419ee8c0);
  uStack_260 = uRam00000001419ee8c8;
  uStack_25c = uRam00000001419ee8cc;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  uVar20 = CONCAT44(uVar21,DAT_141a03458);
  FUN_140e634e0(param_1,param_2,&local_278,1,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x15e;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419ee8e4,_DAT_1419ee8e0);
  uStack_260 = uRam00000001419ee8e8;
  uStack_25c = uRam00000001419ee8ec;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  uVar20 = CONCAT44(uVar21,DAT_141a034b8);
  FUN_140e634e0(param_1,param_2,&local_278,1,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x15f;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419ee8b4,_DAT_1419ee8b0);
  uStack_260 = uRam00000001419ee8b8;
  uStack_25c = uRam00000001419ee8bc;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  uVar20 = CONCAT44(uVar21,DAT_141a03488);
  FUN_140e634e0(param_1,param_2,&local_278,1,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x161;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_260 = uRam00000001419df7c8;
  uStack_25c = uRam00000001419df7cc;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  uVar20 = CONCAT44(uVar21,DAT_141a03408);
  FUN_140e634e0(param_1,param_2,&local_278,1,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x162;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419ee8b4,_DAT_1419ee8b0);
  uStack_260 = uRam00000001419ee8b8;
  uStack_25c = uRam00000001419ee8bc;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  uVar20 = CONCAT44(uVar21,DAT_141a034e8);
  FUN_140e634e0(param_1,param_2,&local_278,1,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x164;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_260 = uRam00000001419df7a8;
  uStack_25c = uRam00000001419df7ac;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  local_268 = (double *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_260 = uRam00000001419df7a8;
  uStack_25c = uRam00000001419df7ac;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  FUN_140041b80(&local_208,&local_268);
  local_188 = &local_208;
  local_268 = (double *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_260 = uRam00000001419df7c8;
  uStack_25c = uRam00000001419df7cc;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_268);
  local_180 = local_1f8;
  local_268 = (double *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_260 = uRam00000001419df7a8;
  uStack_25c = uRam00000001419df7ac;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_268);
  local_178 = local_1e8;
  ppuVar6 = &local_190;
  uVar20 = CONCAT44(uVar21,DAT_141a580a0);
  FUN_140e634e0(param_1,param_2,&local_278,4,uVar20,ppuVar6);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  uVar23 = (undefined4)((ulonglong)ppuVar6 >> 0x20);
  local_198 = 0x167;
  if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
    dVar14 = *pdVar9;
  }
  else {
    dVar14 = (double)FUN_140e4b060(pdVar9);
  }
  if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
    dVar15 = *pdVar8;
  }
  else {
    dVar15 = (double)FUN_140e4b060(pdVar8);
  }
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar16 = *pdVar7;
  }
  else {
    dVar16 = (double)FUN_140e4b060(pdVar7);
  }
  if (param_4 < 2) {
    pdVar7 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar7 = (double *)param_5[1];
  }
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar17 = *pdVar7;
  }
  else {
    dVar17 = (double)FUN_140e4b060();
  }
  if (param_4 < 1) {
    pdVar7 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar7 = (double *)*param_5;
  }
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar18 = *pdVar7;
  }
  else {
    dVar18 = (double)FUN_140e4b060();
  }
  dVar19 = local_138;
  if ((local_12c & 0xffffff) != 0) {
    dVar19 = (double)FUN_140e4b060(&local_138);
  }
  dVar12 = local_108;
  if ((local_fc & 0xffffff) != 0) {
    dVar12 = (double)FUN_140e4b060(&local_108);
  }
  uVar20 = CONCAT44(uVar21,(float)dVar17);
  FUN_140ec5dd0(param_1,(longlong)dVar12,(float)dVar19,(float)dVar18,uVar20,
                CONCAT44(uVar23,(float)dVar16),(float)dVar15,(float)dVar14,0xffffff,0x3f800000);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x169;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_260 = uRam00000001419df7c8;
  uStack_25c = uRam00000001419df7cc;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  local_268 = (double *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_260 = uRam00000001419df7c8;
  uStack_25c = uRam00000001419df7cc;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  FUN_140041b80(&local_208,&local_268);
  local_188 = &local_208;
  local_268 = (double *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_260 = uRam00000001419df7c8;
  uStack_25c = uRam00000001419df7cc;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_268);
  local_180 = local_1f8;
  local_268 = (double *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_260 = uRam00000001419df7c8;
  uStack_25c = uRam00000001419df7cc;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_268);
  local_178 = local_1e8;
  uVar20 = CONCAT44(uVar21,DAT_141a580a0);
  FUN_140e634e0(param_1,param_2,&local_278,4,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x16a;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_260 = uRam00000001419df7a8;
  uStack_25c = uRam00000001419df7ac;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  uVar20 = CONCAT44(uVar21,DAT_141a03408);
  FUN_140e634e0(param_1,param_2,&local_278,1,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x16c;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419ee8d4,_DAT_1419ee8d0);
  uStack_260 = uRam00000001419ee8d8;
  uStack_25c = uRam00000001419ee8dc;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  uVar20 = CONCAT44(uVar21,DAT_141a034f8);
  FUN_140e634e0(param_1,param_2,&local_278,1,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x16d;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419ee8c4,_DAT_1419ee8c0);
  uStack_260 = uRam00000001419ee8c8;
  uStack_25c = uRam00000001419ee8cc;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  uVar20 = CONCAT44(uVar21,DAT_141a03458);
  FUN_140e634e0(param_1,param_2,&local_278,1,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x16e;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419ee8e4,_DAT_1419ee8e0);
  uStack_260 = uRam00000001419ee8e8;
  uStack_25c = uRam00000001419ee8ec;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  uVar20 = CONCAT44(uVar21,DAT_141a034b8);
  FUN_140e634e0(param_1,param_2,&local_278,1,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x16f;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419ee8d4,_DAT_1419ee8d0);
  uStack_260 = uRam00000001419ee8d8;
  uStack_25c = uRam00000001419ee8dc;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  uVar20 = CONCAT44(uVar21,DAT_141a03488);
  FUN_140e634e0(param_1,param_2,&local_278,1,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x171;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_260 = uRam00000001419df7c8;
  uStack_25c = uRam00000001419df7cc;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  uVar20 = CONCAT44(uVar21,DAT_141a03408);
  FUN_140e634e0(param_1,param_2,&local_278,1,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x172;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419ee8b4,_DAT_1419ee8b0);
  uStack_260 = uRam00000001419ee8b8;
  uStack_25c = uRam00000001419ee8bc;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  uVar20 = CONCAT44(uVar21,DAT_141a034e8);
  FUN_140e634e0(param_1,param_2,&local_278,1,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x174;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_260 = uRam00000001419df7a8;
  uStack_25c = uRam00000001419df7ac;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  local_268 = (double *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_260 = uRam00000001419df7a8;
  uStack_25c = uRam00000001419df7ac;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  FUN_140041b80(&local_208,&local_268);
  local_188 = &local_208;
  local_268 = (double *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_260 = uRam00000001419df7a8;
  uStack_25c = uRam00000001419df7ac;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_268);
  local_180 = local_1f8;
  local_268 = (double *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_260 = uRam00000001419df7a8;
  uStack_25c = uRam00000001419df7ac;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_268);
  local_178 = local_1e8;
  uVar20 = CONCAT44(uVar21,DAT_141a580a0);
  FUN_140e634e0(param_1,param_2,&local_278,4,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x177;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03218);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a032f8);
  uStack_25c = 0xf;
  local_268 = (double *)0x10000010000004e;
  local_258 = (double *)0x10000010000004e;
  uStack_250 = uStack_260;
  uStack_24c = 0xf;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_258);
  local_190 = (double *)&local_218;
  if (puVar1 != &local_208) {
    local_268 = (double *)*puVar1;
    uStack_260 = *(undefined4 *)(puVar1 + 1);
    uStack_25c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_268);
  }
  local_188 = &local_208;
  local_21c = local_14c;
  local_220 = local_150;
  bVar10 = (byte)local_14c & 0x1f;
  if ((1 << bVar10 & 0x46U) == 0) {
    local_228 = local_158;
  }
  else {
    FUN_1400419b0(&local_228,&local_158);
  }
  uStack_24c = 0;
  local_258 = (double *)0x3ff8000000000000;
  FUN_140042560(&local_228,&local_258);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  local_1ac = *(undefined4 *)((longlong)puVar5 + 0xc);
  local_1b0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
    local_1b8 = (double *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_1b8);
  }
  FUN_1400460e0(&local_1b8,puVar4);
  uStack_23c = local_1ac;
  uStack_240 = local_1b0;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
    local_248 = local_1b8;
  }
  else {
    FUN_1400419b0(&local_248,&local_1b8);
  }
  FUN_1400462a0(&local_248,&local_228);
  local_268 = local_248;
  uStack_260 = uStack_240;
  uStack_25c = uStack_23c;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_268);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_180 = local_1f8;
  uStack_22c = local_11c;
  uStack_230 = local_120;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
    local_238 = local_128;
  }
  else {
    FUN_1400419b0(&local_238,&local_128);
  }
  uStack_24c = 0;
  local_258 = (double *)0x3fc999999999999a;
  FUN_140042560(&local_238,&local_258);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
  }
  local_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
  local_220 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) == 0) {
    local_228 = (double *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_228);
  }
  FUN_1400460e0(&local_228,&local_238);
  local_1ac = local_21c;
  local_1b0 = local_220;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) == 0) {
    local_1b8 = local_228;
  }
  else {
    FUN_1400419b0(&local_1b8,&local_228);
  }
  FUN_1400462a0(&local_1b8,&local_148);
  uStack_23c = local_1ac;
  uStack_240 = local_1b0;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
    local_248 = local_1b8;
  }
  else {
    FUN_1400419b0(&local_248,&local_1b8);
  }
  uStack_24c = 7;
  local_258 = (double *)CONCAT44(local_258._4_4_,4);
  FUN_1400460e0(&local_248,&local_258);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_268 = local_248;
  uStack_260 = uStack_240;
  uStack_25c = uStack_23c;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_268);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_178 = local_1e8;
  uStack_23c = local_14c;
  uStack_240 = local_150;
  if ((1 << bVar10 & 0x46U) == 0) {
    local_248 = local_158;
  }
  else {
    FUN_1400419b0(&local_248,&local_158);
  }
  uStack_24c = 7;
  local_258 = (double *)CONCAT44(local_258._4_4_,3);
  FUN_140042560(&local_248,&local_258);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  uStack_22c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_230 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
    local_238 = (double *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_238,puVar4);
  }
  FUN_1400460e0(&local_238,&local_248);
  local_268 = local_238;
  uStack_260 = uStack_230;
  uStack_25c = uStack_22c;
  if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_268);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_170 = local_1d8;
  uStack_22c = local_13c;
  uStack_230 = local_140;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
    local_238 = local_148;
  }
  else {
    FUN_1400419b0(&local_238,&local_148);
  }
  uStack_24c = 7;
  local_258 = (double *)CONCAT44(local_258._4_4_,0x14);
  FUN_1400460e0(&local_238,&local_258);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_268 = local_238;
  uStack_260 = uStack_230;
  uStack_25c = uStack_22c;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_268);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  uVar20 = CONCAT44(uVar21,DAT_141a01f08);
  local_168 = local_1c8;
  FUN_140e634e0(param_1,param_2,&local_278,6,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x17c;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_260 = uRam00000001419df7c8;
  uStack_25c = uRam00000001419df7cc;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  local_268 = (double *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_260 = uRam00000001419df7c8;
  uStack_25c = uRam00000001419df7cc;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  FUN_140041b80(&local_208,&local_268);
  local_188 = &local_208;
  local_268 = (double *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_260 = uRam00000001419df7c8;
  uStack_25c = uRam00000001419df7cc;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_268);
  local_180 = local_1f8;
  local_268 = (double *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_260 = uRam00000001419df7c8;
  uStack_25c = uRam00000001419df7cc;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_268);
  local_178 = local_1e8;
  uVar20 = CONCAT44(uVar21,DAT_141a580a0);
  FUN_140e634e0(param_1,param_2,&local_278,4,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x17d;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_260 = uRam00000001419df7a8;
  uStack_25c = uRam00000001419df7ac;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  uVar20 = CONCAT44(uVar21,DAT_141a03408);
  FUN_140e634e0(param_1,param_2,&local_278,1,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x17f;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419ee8a4,_DAT_1419ee8a0);
  uStack_260 = uRam00000001419ee8a8;
  uStack_25c = uRam00000001419ee8ac;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  uVar20 = CONCAT44(uVar21,DAT_141a034b8);
  FUN_140e634e0(param_1,param_2,&local_278,1,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x180;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419ee8b4,_DAT_1419ee8b0);
  uStack_260 = uRam00000001419ee8b8;
  uStack_25c = uRam00000001419ee8bc;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  uVar20 = CONCAT44(uVar21,DAT_141a03458);
  FUN_140e634e0(param_1,param_2,&local_278,1,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x181;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419ee8b4,_DAT_1419ee8b0);
  uStack_260 = uRam00000001419ee8b8;
  uStack_25c = uRam00000001419ee8bc;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  uVar20 = CONCAT44(uVar21,DAT_141a03468);
  FUN_140e634e0(param_1,param_2,&local_278,1,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x183;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  uStack_25c = 0xf;
  local_268 = (double *)0x10000010000004f;
  local_258 = (double *)0x10000010000004f;
  uStack_250 = uStack_260;
  uStack_24c = 0xf;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_258);
  local_190 = (double *)&local_218;
  if (puVar1 != &local_208) {
    local_268 = (double *)*puVar1;
    uStack_260 = *(undefined4 *)(puVar1 + 1);
    uStack_25c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_268);
  }
  local_188 = &local_208;
  uStack_23c = local_14c;
  uStack_240 = local_150;
  if ((1 << bVar10 & 0x46U) == 0) {
    local_248 = local_158;
  }
  else {
    FUN_1400419b0(&local_248,&local_158);
  }
  uStack_24c = 0;
  local_258 = (double *)0x3ff8000000000000;
  FUN_140042560(&local_248,&local_258);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  local_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
  local_220 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) == 0) {
    local_228 = (double *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_228);
  }
  FUN_1400460e0(&local_228,puVar4);
  uStack_22c = local_21c;
  uStack_230 = local_220;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) == 0) {
    local_238 = local_228;
  }
  else {
    FUN_1400419b0(&local_238,&local_228);
  }
  FUN_1400462a0(&local_238,&local_248);
  local_268 = local_238;
  uStack_260 = uStack_230;
  uStack_25c = uStack_22c;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_268);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_180 = local_1f8;
  uStack_24c = local_11c;
  uStack_250 = local_120;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
    local_258 = local_128;
  }
  else {
    FUN_1400419b0(&local_258,&local_128);
  }
  uStack_25c = 0;
  local_268 = (double *)0x3fc999999999999a;
  FUN_140042560(&local_258,&local_268);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
  }
  uStack_23c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_240 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
    local_248 = (double *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_248);
  }
  FUN_1400460e0(&local_248,&local_258);
  local_1ac = uStack_23c;
  local_1b0 = uStack_240;
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
    local_1b8 = local_248;
  }
  else {
    FUN_1400419b0(&local_1b8,&local_248);
  }
  FUN_1400462a0(&local_1b8,&local_148);
  local_21c = local_1ac;
  local_220 = local_1b0;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
    local_228 = local_1b8;
  }
  else {
    FUN_1400419b0(&local_228,&local_1b8);
  }
  uStack_25c = 7;
  local_268 = (double *)CONCAT44(local_268._4_4_,4);
  FUN_1400460e0(&local_228,&local_268);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_22c = local_21c;
  uStack_230 = local_220;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) == 0) {
    local_238 = local_228;
  }
  else {
    FUN_1400419b0(&local_238,&local_228);
  }
  uStack_25c = 7;
  local_268 = (double *)CONCAT44(local_268._4_4_,1);
  FUN_1400462a0(&local_238,&local_268);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = local_238;
  uStack_260 = uStack_230;
  uStack_25c = uStack_22c;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_268);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_178 = local_1e8;
  uStack_22c = local_14c;
  uStack_230 = local_150;
  if ((1 << bVar10 & 0x46U) == 0) {
    local_238 = local_158;
  }
  else {
    FUN_1400419b0(&local_238,&local_158);
  }
  uStack_25c = 7;
  local_268 = (double *)CONCAT44(local_268._4_4_,3);
  FUN_140042560(&local_238,&local_268);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_24c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_250 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
    local_258 = (double *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_258,puVar4);
  }
  FUN_1400460e0(&local_258,&local_238);
  local_268 = local_258;
  uStack_260 = uStack_250;
  uStack_25c = uStack_24c;
  if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_268);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_170 = local_1d8;
  uStack_24c = local_13c;
  uStack_250 = local_140;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
    local_258 = local_148;
  }
  else {
    FUN_1400419b0(&local_258,&local_148);
  }
  uStack_25c = 7;
  local_268 = (double *)CONCAT44(local_268._4_4_,0x14);
  FUN_1400460e0(&local_258,&local_268);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = local_258;
  uStack_260 = uStack_250;
  uStack_25c = uStack_24c;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_268);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  uVar20 = CONCAT44(uVar21,DAT_141a01f08);
  local_168 = local_1c8;
  FUN_140e634e0(param_1,param_2,&local_278,6,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x187;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  uStack_25c = 0xf;
  local_268 = (double *)0x10000010000004e;
  local_258 = (double *)0x10000010000004e;
  uStack_250 = uStack_260;
  uStack_24c = 0xf;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_258);
  local_190 = (double *)&local_218;
  if (puVar1 != &local_208) {
    local_268 = (double *)*puVar1;
    uStack_260 = *(undefined4 *)(puVar1 + 1);
    uStack_25c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_268);
  }
  local_188 = &local_208;
  uStack_22c = local_14c;
  uStack_230 = local_150;
  if ((1 << bVar10 & 0x46U) == 0) {
    local_238 = local_158;
  }
  else {
    FUN_1400419b0(&local_238,&local_158);
  }
  uStack_25c = 0;
  local_268 = (double *)0x3ff8000000000000;
  FUN_140042560(&local_238,&local_268);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)*param_5;
  }
  uStack_23c = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_240 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
    local_248 = (double *)*puVar1;
  }
  else {
    FUN_1400419b0(&local_248);
  }
  FUN_1400460e0(&local_248,puVar4);
  uStack_24c = uStack_23c;
  uStack_250 = uStack_240;
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
    local_258 = local_248;
  }
  else {
    FUN_1400419b0(&local_258,&local_248);
  }
  FUN_1400462a0(&local_258,&local_238);
  local_268 = local_258;
  uStack_260 = uStack_250;
  uStack_25c = uStack_24c;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_268);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_180 = local_1f8;
  uStack_22c = local_11c;
  uStack_230 = local_120;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
    local_238 = local_128;
  }
  else {
    FUN_1400419b0(&local_238,&local_128);
  }
  uStack_25c = 0;
  local_268 = (double *)0x3fc999999999999a;
  FUN_140042560(&local_238,&local_268);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
  }
  local_21c = *(undefined4 *)((longlong)puVar1 + 0xc);
  local_220 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) == 0) {
    local_228 = (double *)*puVar1;
  }
  else {
    FUN_1400419b0(&local_228);
  }
  FUN_1400460e0(&local_228,&local_238);
  uStack_23c = local_21c;
  uStack_240 = local_220;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) == 0) {
    local_248 = local_228;
  }
  else {
    FUN_1400419b0(&local_248,&local_228);
  }
  uStack_25c = 7;
  local_268 = (double *)CONCAT44(local_268._4_4_,4);
  FUN_1400460e0(&local_248,&local_268);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_24c = uStack_23c;
  uStack_250 = uStack_240;
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
    local_258 = local_248;
  }
  else {
    FUN_1400419b0(&local_258,&local_248);
  }
  FUN_1400462a0(&local_258,&local_148);
  local_268 = local_258;
  uStack_260 = uStack_250;
  uStack_25c = uStack_24c;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_268);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_178 = local_1e8;
  uStack_22c = local_14c;
  uStack_230 = local_150;
  if ((1 << bVar10 & 0x46U) == 0) {
    local_238 = local_158;
  }
  else {
    FUN_1400419b0(&local_238,&local_158);
  }
  local_160 = 1;
  uStack_25c = 7;
  local_268 = (double *)CONCAT44(local_268._4_4_,3);
  FUN_140042560(&local_238,&local_268);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_24c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_250 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
    local_258 = (double *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_258,puVar4);
  }
  local_160 = 3;
  FUN_1400460e0(&local_258,&local_238);
  local_268 = local_258;
  uStack_260 = uStack_250;
  uStack_25c = uStack_24c;
  if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_268);
  local_160 = 1;
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_160 = 0;
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_170 = local_1d8;
  uStack_24c = local_13c;
  uStack_250 = local_140;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
    local_258 = local_148;
  }
  else {
    FUN_1400419b0(&local_258,&local_148);
  }
  local_160 = 4;
  uStack_25c = 7;
  local_268 = (double *)CONCAT44(local_268._4_4_,0x14);
  FUN_1400460e0(&local_258,&local_268);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = local_258;
  uStack_260 = uStack_250;
  uStack_25c = uStack_24c;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_268);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  uVar20 = CONCAT44(uVar21,DAT_141a01f08);
  local_168 = local_1c8;
  FUN_140e634e0(param_1,param_2,&local_278,6,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x18c;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419ee8c4,_DAT_1419ee8c0);
  uStack_260 = uRam00000001419ee8c8;
  uStack_25c = uRam00000001419ee8cc;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  uVar20 = CONCAT44(uVar21,DAT_141a034b8);
  FUN_140e634e0(param_1,param_2,&local_278,1,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x18d;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419ee8b4,_DAT_1419ee8b0);
  uStack_260 = uRam00000001419ee8b8;
  uStack_25c = uRam00000001419ee8bc;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  uVar20 = CONCAT44(uVar21,DAT_141a03458);
  FUN_140e634e0(param_1,param_2,&local_278,1,uVar20,&local_190);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_198 = 0x18e;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419ee8d4,_DAT_1419ee8d0);
  uStack_260 = uRam00000001419ee8d8;
  uStack_25c = uRam00000001419ee8dc;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  ppuVar6 = &local_190;
  uVar20 = CONCAT44(uVar21,DAT_141a03468);
  FUN_140e634e0(param_1,param_2,&local_278,1,uVar20,ppuVar6);
  pdVar7 = local_c8;
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  uVar23 = (undefined4)((ulonglong)ppuVar6 >> 0x20);
  local_198 = 400;
  uStack_24c = 0xf;
  local_258 = (double *)0x10000010000004d;
  if ((*(uint *)((longlong)local_c8 + 0xc) & 0xffffff) == 0) {
    dVar14 = *local_c8;
  }
  else {
    dVar14 = (double)FUN_140e4b060(local_c8);
  }
  if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
    dVar15 = *pdVar8;
  }
  else {
    dVar15 = (double)FUN_140e4b060(pdVar8);
  }
  pdVar9 = local_118;
  if ((*(uint *)((longlong)local_118 + 0xc) & 0xffffff) == 0) {
    dVar16 = *local_118;
  }
  else {
    dVar16 = (double)FUN_140e4b060(local_118);
  }
  if (param_4 < 2) {
    pdVar13 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar13 = (double *)param_5[1];
  }
  if ((*(uint *)((longlong)pdVar13 + 0xc) & 0xffffff) == 0) {
    dVar17 = *pdVar13;
  }
  else {
    dVar17 = (double)FUN_140e4b060();
  }
  if (param_4 < 1) {
    pdVar13 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar13 = (double *)*param_5;
  }
  if ((*(uint *)((longlong)pdVar13 + 0xc) & 0xffffff) == 0) {
    dVar18 = *pdVar13;
  }
  else {
    dVar18 = (double)FUN_140e4b060();
  }
  dVar19 = local_138;
  if ((local_12c & 0xffffff) != 0) {
    dVar19 = (double)FUN_140e4b060(&local_138);
  }
  pdVar13 = local_258;
  if ((uStack_24c & 0xffffff) != 0) {
    pdVar13 = (double *)FUN_140e4b060(&local_258);
  }
  uVar20 = CONCAT44(uVar21,(float)dVar17);
  FUN_140ec5dd0(param_1,(int)(double)pdVar13,(float)dVar19,(float)dVar18,uVar20,
                CONCAT44(uVar23,(float)dVar16),(float)dVar15,(float)dVar14,0xffffff,0x3f800000);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_198 = 0x195;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_268 = (double *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_260 = uRam00000001419df7a8;
  uStack_25c = uRam00000001419df7ac;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_268);
  local_190 = (double *)&local_218;
  ppuVar6 = &local_190;
  uVar20 = CONCAT44(uVar21,DAT_141a03418);
  FUN_140e634e0(param_1,param_2,&local_278,1,uVar20,ppuVar6);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  uVar23 = (undefined4)((ulonglong)ppuVar6 >> 0x20);
  local_198 = 0x197;
  uStack_24c = 0xf;
  local_258 = (double *)0x10000010000004c;
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar14 = *pdVar7;
  }
  else {
    dVar14 = (double)FUN_140e4b060(pdVar7);
  }
  if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
    dVar15 = *pdVar8;
  }
  else {
    dVar15 = (double)FUN_140e4b060(pdVar8);
  }
  if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
    dVar16 = *pdVar9;
  }
  else {
    dVar16 = (double)FUN_140e4b060(pdVar9);
  }
  pdVar7 = (double *)&DAT_1419df7b0;
  if (param_4 < 2) {
    pdVar8 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar8 = (double *)param_5[1];
  }
  if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
    dVar17 = *pdVar8;
  }
  else {
    dVar17 = (double)FUN_140e4b060();
  }
  if (0 < param_4) {
    pdVar7 = (double *)*param_5;
  }
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar18 = *pdVar7;
  }
  else {
    dVar18 = (double)FUN_140e4b060(pdVar7);
  }
  dVar19 = local_138;
  if ((local_12c & 0xffffff) != 0) {
    dVar19 = (double)FUN_140e4b060(&local_138);
  }
  pdVar7 = local_258;
  if ((uStack_24c & 0xffffff) != 0) {
    pdVar7 = (double *)FUN_140e4b060(&local_258);
  }
  FUN_140ec5dd0(param_1,(int)(double)pdVar7,(float)dVar19,(float)dVar18,
                CONCAT44(uVar21,(float)dVar17),CONCAT44(uVar23,(float)dVar16),(float)dVar15,
                (float)dVar14,0xffffff,0x3f800000);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << bVar10 & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_218,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return param_3;
}

