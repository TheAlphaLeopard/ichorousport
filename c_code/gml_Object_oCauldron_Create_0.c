// gml_Object_oCauldron_Create_0 @ 0x140899420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oCauldron_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  double *pdVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double *pdVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 *local_res18 [2];
  undefined4 uVar13;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined1 **ppuVar14;
  ulonglong uVar15;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  double local_a0;
  uint local_94;
  double local_90;
  uint local_84;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  local_c0 = "gml_Object_oCardBlood_Create_0";
  local_b8 = 0;
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  uVar13 = 1;
  _eh_vector_constructor_iterator_(local_d8,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_a4 = 0xffffff;
  local_b0 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_84 = 0xffffff;
  local_90 = 0.0;
  local_94 = 0xffffff;
  local_a0 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_b8 = 2;
  uVar11 = FUN_140e79480(0);
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  local_a4 = 0;
  local_b0 = uVar11;
  FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_b0);
  local_b8 = 3;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f290);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = &DAT_bff0000000000000;
  local_b8 = 4;
  pdVar2 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04118);
  FUN_140e609c0(param_1);
  dVar7 = (double)FUN_140e794b0(0,0x400c000000000000);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar2);
  }
  *(undefined4 *)((longlong)pdVar2 + 0xc) = 0;
  *pdVar2 = dVar7 + 1.0;
  FUN_140e60910(1);
  local_b8 = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1eed0);
  uVar11 = FUN_140e79480(0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = uVar11;
  local_b8 = 7;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdec8);
  uVar11 = FUN_140e794b0(0x9999999a,0x3fd3333333333333);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = uVar11;
  local_b8 = 9;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f300);
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_78);
  local_108 = (longlong *)local_78;
  uStack_100 = uStack_70;
  uStack_fc = uStack_6c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_108);
  local_res18[0] = local_d8;
  FUN_140e609c0(param_1);
  uVar11 = CONCAT44(uVar13,DAT_141a00e38);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_e8,1,uVar11,local_res18);
  uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
  uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_f0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
    local_f8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_f8,puVar3);
  }
  uStack_fc = 7;
  local_108 = (longlong *)CONCAT44(local_108._4_4_,0x20);
  FUN_1400460e0(&local_f8,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (&local_f8 != puVar1) {
    local_108 = (longlong *)local_f8;
    uStack_100 = uStack_f0;
    uStack_fc = uStack_ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140e60910(1);
  local_b8 = 10;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f410);
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_78);
  local_108 = (longlong *)local_78;
  uStack_100 = uStack_70;
  uStack_fc = uStack_6c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_108);
  local_res18[0] = local_d8;
  FUN_140e609c0(param_1);
  ppuVar14 = local_res18;
  uVar12 = CONCAT44(uVar13,DAT_141a00dd8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_e8,1,uVar12,ppuVar14);
  uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_f0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
    local_f8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_f8,puVar3);
  }
  uStack_fc = 7;
  local_108 = (longlong *)CONCAT44(local_108._4_4_,0x24);
  FUN_1400460e0(&local_f8,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (&local_f8 != puVar1) {
    local_108 = (longlong *)local_f8;
    uStack_100 = uStack_f0;
    uStack_fc = uStack_ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140e60910(1);
  local_b8 = 0xc;
  pdVar2 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f300);
  pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f410);
  pdVar5 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe988);
  uStack_fc = 6;
  uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe0e8,0x80000000,&local_90,uVar12,uVar15);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_fc = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_a0,uVar12,uVar15 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar7 = *pdVar4;
  }
  else {
    dVar7 = (double)FUN_140e4b060(pdVar4);
  }
  if ((*(uint *)((longlong)pdVar2 + 0xc) & 0xffffff) == 0) {
    dVar8 = *pdVar2;
  }
  else {
    dVar8 = (double)FUN_140e4b060(pdVar2);
  }
  dVar9 = local_a0;
  if ((local_94 & 0xffffff) != 0) {
    dVar9 = (double)FUN_140e4b060(&local_a0);
  }
  dVar10 = local_90;
  if ((local_84 & 0xffffff) != 0) {
    dVar10 = (double)FUN_140e4b060(&local_90);
  }
  fVar6 = (float)FUN_140e793d0((float)dVar10,(float)dVar9,(float)dVar8,(float)dVar7);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar5);
  }
  *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
  *pdVar5 = (double)fVar6;
  local_b8 = 0xe;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_b8 = 0xf;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04168);
  local_108 = (longlong *)CONCAT44(uRam0000000141dc6bf4,_DAT_141dc6bf0);
  uStack_100 = uRam0000000141dc6bf8;
  uStack_fc = uRam0000000141dc6bfc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_108);
  local_res18[0] = local_d8;
  FUN_140e609c0(param_1);
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_e8,1,CONCAT44(uVar13,DAT_141a0a0d8),local_res18);
  uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_f0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
    local_f8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_f8,puVar3);
  }
  uStack_fc = 7;
  local_108 = (longlong *)CONCAT44(local_108._4_4_,2);
  FUN_140042560(&local_f8,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (&local_f8 != puVar1) {
    local_108 = (longlong *)local_f8;
    uStack_100 = uStack_f0;
    uStack_fc = uStack_ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return;
}

