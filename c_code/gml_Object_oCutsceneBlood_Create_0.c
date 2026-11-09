// gml_Object_oCutsceneBlood_Create_0 @ 0x1408ddc00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oCutsceneBlood_Create_0(longlong *param_1,undefined1 **param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  double *pdVar5;
  longlong **pplVar6;
  undefined8 uVar7;
  longlong **pplVar8;
  bool bVar9;
  longlong *plVar10;
  undefined4 uVar12;
  ulonglong uVar11;
  undefined1 **ppuVar13;
  ulonglong uVar14;
  longlong *local_158;
  undefined4 local_14c;
  longlong *local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  longlong *local_80;
  undefined4 local_74;
  longlong *local_70;
  undefined4 local_64;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  local_90 = "gml_Object_oCultist_Create_0";
  local_88 = 0;
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  uVar12 = 1;
  _eh_vector_constructor_iterator_(local_c8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_88 = 2;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  local_108 = (longlong *)CONCAT44(uRam0000000141dc6d14,_DAT_141dc6d10);
  uStack_100 = uRam0000000141dc6d18;
  uStack_fc = uRam0000000141dc6d1c;
  if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_108);
  local_60 = local_c8;
  ppuVar13 = &local_60;
  uVar11 = CONCAT44(uVar12,DAT_141a0a0d8);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_138,1,uVar11,ppuVar13);
  uStack_13c = *(uint *)((longlong)pdVar5 + 0xc);
  uStack_140 = *(undefined4 *)(pdVar5 + 1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
    local_148 = (longlong *)*pdVar5;
  }
  else {
    FUN_1400419b0(&local_148,pdVar5);
  }
  local_14c = 7;
  local_158 = (longlong *)CONCAT44(local_158._4_4_,2);
  FUN_140042560(&local_148,&local_158);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  plVar10 = local_148;
  if ((uStack_13c & 0xffffff) != 0) {
    plVar10 = (longlong *)FUN_140e4b060(&local_148);
  }
  uVar7 = FUN_140e78f00((longlong)(double)plVar10);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = uVar7;
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_88 = 3;
  pplVar6 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  local_14c = 6;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_128,uVar11 & 0xffffffffffffff00,
                (ulonglong)ppuVar13 & 0xffffffffffffff00);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_14c = 0xf;
  local_158 = (longlong *)0x10000000000005b;
  plVar10 = param_1;
  ppuVar13 = param_2;
  FUN_140e87170(&local_158,DAT_1419fe0e8,0x80000000,&local_e8,param_1,param_2);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  iVar3 = FUN_140e851f0(&local_128,&local_e8,DAT_141955260,1);
  bVar9 = iVar3 == -2 || -1 < iVar3;
  if (bVar9) {
    local_14c = 0;
    local_158 = (longlong *)&DAT_bff0000000000000;
    pplVar8 = &local_158;
  }
  else {
    uStack_13c = 0;
    local_148 = (longlong *)0x3ff0000000000000;
    pplVar8 = &local_148;
  }
  uVar1 = uStack_13c;
  uVar12 = local_14c;
  FUN_140e609c0(param_1);
  if (pplVar8 != pplVar6) {
    local_108 = *pplVar8;
    uStack_100 = *(undefined4 *)(pplVar8 + 1);
    uStack_fc = *(undefined4 *)((longlong)pplVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar6);
    }
    FUN_140041b80(pplVar6,&local_108);
  }
  if ((bVar9) && ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_158);
  }
  if ((iVar3 != -2 && -1 >= iVar3) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_148);
  }
  FUN_140e60910(1);
  do {
    local_88 = 7;
    local_14c = 6;
    uVar14 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
    uVar11 = (ulonglong)plVar10 & 0xffffffffffffff00;
    local_158 = param_1;
    FUN_140e87440(&local_158,DAT_1419fe158,0x80000000,&local_118,uVar11,uVar14);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    uStack_13c = 0;
    local_148 = (longlong *)0x3ff0000000000000;
    FUN_1400462a0(&local_118,&local_148);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_118);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    local_74 = 6;
    uVar14 = uVar14 & 0xffffffffffffff00;
    uVar11 = uVar11 & 0xffffffffffffff00;
    local_80 = param_1;
    FUN_140e87440(&local_80,DAT_1419fe0e8,0x80000000,&local_128,uVar11,uVar14);
    if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    local_64 = 6;
    uVar11 = uVar11 & 0xffffffffffffff00;
    local_70 = param_1;
    FUN_140e87440(&local_70,DAT_1419fe158,0x80000000,&local_f8,uVar11,uVar14 & 0xffffffffffffff00);
    uVar12 = (undefined4)(uVar11 >> 0x20);
    if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_70);
    }
    local_d8 = (undefined4)local_128;
    uStack_d4 = local_128._4_4_;
    uStack_d0 = uStack_120;
    uStack_cc = uStack_11c;
    if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_d8);
    local_60 = local_c8;
    local_d8 = (undefined4)local_f8;
    uStack_d4 = local_f8._4_4_;
    uStack_d0 = uStack_f0;
    uStack_cc = uStack_ec;
    if ((1 << (local_b8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_d8);
    local_58 = local_b8;
    uStack_fc = 0xf;
    local_108 = (longlong *)0x100000000000149;
    local_d8 = 0x149;
    uStack_d4 = 0x1000000;
    uStack_d0 = uStack_100;
    uStack_cc = 0xf;
    if ((1 << (local_a8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_d8);
    local_50 = local_a8;
    ppuVar13 = &local_60;
    plVar10 = (longlong *)CONCAT44(uVar12,DAT_141a12628);
    uVar7 = FUN_140e634e0(param_1,param_2,&local_138,3,plVar10,ppuVar13);
    cVar2 = FUN_140e491e0(uVar7);
  } while (cVar2 != '\0');
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return;
}

