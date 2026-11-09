// gml_Script_anon_18723_DefineTrinkets_TRINKETSINIT @ 0x1405f78e0

undefined8 *
gml_Script_anon_18723_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  bool bVar10;
  code *pcVar11;
  ulonglong uVar12;
  ulonglong in_stack_fffffffffffffe70;
  double **ppdVar13;
  undefined1 **ppuVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  uint local_170;
  longlong local_16c;
  undefined4 local_164;
  uint local_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_13c;
  longlong local_138;
  longlong lStack_130;
  undefined1 local_128 [12];
  byte local_11c;
  double local_118;
  undefined4 local_10c;
  double local_108;
  undefined4 local_fc;
  longlong local_f8;
  undefined4 local_f0;
  uint local_ec;
  longlong local_e8;
  undefined4 local_e0;
  uint local_dc;
  longlong local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 *local_78;
  double *local_70;
  double *local_68;
  undefined8 local_60;
  
  uVar16 = 0;
  local_c0 = "gml_Script_anon@18291@DefineTrinkets@TRINKETSINIT";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x2e0;
  pcVar11 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_128,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_170 = 0xffffff;
  local_dc = 0xffffff;
  lVar7 = 0;
  local_e8 = 0;
  uVar9 = 0xffffff;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_60 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_174 = 0;
  local_180 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x2e1;
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uVar12 = (ulonglong)pcVar11 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_1419f5a88,0x80000000,&local_d8,uVar12,
                in_stack_fffffffffffffe70 & 0xffffffffffffff00,uVar16);
  uVar16 = (undefined4)(uVar12 >> 0x20);
  uStack_150 = CONCAT44(uStack_cc,uStack_d0);
  local_158 = local_d8;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_158);
  iVar2 = DAT_141a574c0;
  local_70 = &local_118;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = (double)iVar2;
  local_68 = &local_108;
  ppdVar13 = &local_70;
  uVar12 = CONCAT44(uVar16,DAT_141a035d8);
  plVar3 = (longlong *)FUN_140e634e0(param_1,param_2,&local_180,2,uVar12,ppdVar13);
  if (plVar3 != &local_e8) {
    local_138 = *plVar3;
    lStack_130 = plVar3[1];
    FUN_140041b80(&local_e8,&local_138);
    local_170 = local_dc;
    lVar7 = local_e8;
  }
  if ((local_170 & 0xffffff) == 3) {
    bVar10 = lVar7 == 0;
  }
  else {
    bVar10 = (local_170 & 0xffffff) == 5;
  }
  if (bVar10) {
    uStack_150 = CONCAT44(0xd,(undefined4)uStack_150);
    local_158 = 0;
    plVar3 = &local_158;
    uVar6 = 1;
    uVar17 = 1;
  }
  else {
    local_164 = local_e0;
    local_160 = local_170;
    if ((1 << ((byte)local_170 & 0x1f) & 0x46U) == 0) {
      local_16c = lVar7;
    }
    else {
      FUN_1400419b0(&local_16c,&local_e8);
    }
    plVar3 = &local_16c;
    uVar6 = 2;
    uVar17 = 2;
  }
  cVar1 = FUN_140e491e0(plVar3);
  if ((uVar6 & 2) != 0) {
    uVar6 = uVar6 & 0xfffffffd;
    uVar17 = uVar6;
    if ((1 << ((byte)local_160 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_16c);
    }
  }
  if ((uVar6 & 1) != 0) {
    uVar6 = uVar6 & 0xfffffffe;
    uVar17 = uVar6;
    if ((1 << ((byte)((ulonglong)uStack_150 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
  }
  if (cVar1 == '\0') {
    local_b8 = 0x2e1;
    goto LAB_1405f7f84;
  }
  local_b8 = 0x2e2;
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  local_180 = 0;
  local_178 = 0;
  local_174 = 5;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_1419f5a88,0x80000000,&local_d8,uVar12,
                (ulonglong)ppdVar13 & 0xffffffffffffff00,uVar17);
  uVar16 = (undefined4)(uVar12 >> 0x20);
  lStack_130 = CONCAT44(uStack_cc,uStack_d0);
  local_138 = local_d8;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_138);
  iVar2 = DAT_1419ff958;
  local_78 = local_128;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0;
  local_118 = (double)iVar2;
  local_70 = &local_118;
  ppuVar14 = &local_78;
  uVar12 = CONCAT44(uVar16,DAT_141a035d8);
  plVar3 = (longlong *)FUN_140e634e0(param_1,param_2,&local_180,2,uVar12,ppuVar14);
  lVar7 = 0;
  if (plVar3 != &local_f8) {
    local_138 = *plVar3;
    lStack_130 = plVar3[1];
    FUN_140041b80(&local_f8,&local_138);
    lVar7 = local_f8;
    uVar9 = local_ec;
  }
  if ((uVar9 & 0xffffff) == 3) {
    bVar10 = lVar7 == 0;
  }
  else {
    bVar10 = (uVar9 & 0xffffff) == 5;
  }
  if (bVar10) {
    uStack_150 = CONCAT44(0xd,(undefined4)uStack_150);
    local_158 = 0;
    plVar3 = &local_158;
    uVar6 = uVar6 | 4;
  }
  else {
    local_164 = local_f0;
    local_160 = uVar9;
    if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) == 0) {
      local_16c = lVar7;
    }
    else {
      FUN_1400419b0(&local_16c,&local_f8);
    }
    plVar3 = &local_16c;
    uVar6 = uVar6 | 8;
  }
  uVar17 = uVar6;
  cVar1 = FUN_140e491e0(plVar3);
  if ((uVar6 & 8) != 0) {
    uVar6 = uVar6 & 0xfffffff7;
    uVar17 = uVar6;
    if ((1 << ((byte)local_160 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_16c);
    }
  }
  if (((uVar6 & 4) != 0) && ((1 << ((byte)((ulonglong)uStack_150 >> 0x20) & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_158);
  }
  if (cVar1 != '\0') {
    local_b8 = 0x2e2;
    goto LAB_1405f7f84;
  }
  local_b8 = 0x2e3;
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  local_180 = 0;
  local_178 = 0;
  local_174 = 5;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a1f440,0x80000000,&local_148,uVar12,uVar15,uVar17);
  uVar15 = uVar15 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(&local_148,DAT_141a1edd0,0x80000000,&local_88,uVar12,uVar15);
  uVar15 = uVar15 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(local_60,DAT_1419f6028,0x80000000,&local_98,uVar12,uVar15);
  if (0 < param_4) {
    puVar8 = (undefined8 *)*param_5;
  }
  FUN_140e87440(puVar8,DAT_141a1f4e0,0x80000000,&local_a8,uVar12 & 0xffffffffffffff00,
                uVar15 & 0xffffffffffffff00);
  lStack_130 = CONCAT44(uStack_8c,uStack_90);
  local_138 = local_98;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_138);
  local_78 = local_128;
  lStack_130 = CONCAT44(uStack_9c,uStack_a0);
  local_138 = local_a8;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_138);
  local_70 = &local_118;
  uVar4 = 0;
  switch(local_13c) {
  case 0:
  case 7:
  case 10:
  case 0xd:
switchD_1405f7f23_caseD_0:
    uVar16 = FUN_140e4a8b0(&local_148);
    uVar4 = FUN_140e87250(uVar16);
    break;
  case 6:
    uVar4 = local_148;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_148 >> 0x20);
    if ((iVar2 == 0x1000000) || (iVar2 == 0x4000001)) goto switchD_1405f7f23_caseD_0;
  }
  FUN_140e63610(uVar4,param_2,&local_180,2,&local_88,&local_78);
LAB_1405f7f84:
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_170 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_128,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

