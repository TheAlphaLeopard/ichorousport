// gml_Script_anon_29869_DefineTrinkets_TRINKETSINIT @ 0x1406080f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_29869_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  bool bVar12;
  code *pcVar13;
  ulonglong uVar14;
  ulonglong in_stack_fffffffffffffe80;
  double **ppdVar15;
  undefined1 **ppuVar16;
  ulonglong uVar17;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  uint local_158;
  undefined1 local_150 [12];
  byte local_144;
  double local_140;
  undefined4 local_134;
  undefined1 *local_130;
  undefined4 local_128;
  uint local_124;
  undefined1 *local_120;
  double *local_118;
  undefined1 *local_110;
  undefined4 local_108;
  uint local_104;
  undefined1 *local_f8;
  undefined8 uStack_f0;
  undefined1 *local_e8;
  undefined1 *puStack_e0;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  
  local_158 = 0;
  local_d0 = "gml_Script_anon@29349@DefineTrinkets@TRINKETSINIT";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x438;
  pcVar13 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_150,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_15c = 0xffffff;
  local_168 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_c0 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_6c = 0xffffff;
  local_78 = (undefined1 *)0x0;
  uStack_7c = 0xffffff;
  local_88 = (undefined1 *)0x0;
  uVar10 = 0xffffff;
  local_104 = 0xffffff;
  local_110 = (undefined1 *)0x0;
  local_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = (undefined1 *)0x0;
  uStack_ac = 0xffffff;
  local_b8 = (undefined1 *)0x0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x439;
  puVar9 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  in_stack_fffffffffffffe80 = in_stack_fffffffffffffe80 & 0xffffffffffffff00;
  uVar14 = (ulonglong)pcVar13 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_168,uVar14,in_stack_fffffffffffffe80);
  in_stack_fffffffffffffe80 = in_stack_fffffffffffffe80 & 0xffffffffffffff00;
  uVar14 = uVar14 & 0xffffffffffffff00;
  FUN_140e87440(&local_168,DAT_1419f59d8,0x80000000,&local_68,uVar14,in_stack_fffffffffffffe80);
  FUN_140e87440(local_c0,DAT_141a1f540,0x80000000,&local_78,uVar14 & 0xffffffffffffff00,
                in_stack_fffffffffffffe80 & 0xffffffffffffff00);
  uStack_f0 = CONCAT44(uStack_6c,uStack_70);
  local_f8 = local_78;
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  FUN_140041b80(&local_140,&local_f8);
  local_118 = &local_140;
  switch(local_15c) {
  default:
switchD_1406082e4_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_168;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_168 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_1406082e4_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_168);
    uVar4 = FUN_140e87250(uVar2);
  }
  ppdVar15 = &local_118;
  puVar7 = &local_68;
  uVar4 = FUN_140e63610(uVar4,param_2,&local_178,1,puVar7,ppdVar15);
  local_124 = 0;
  local_130 = &DAT_bff0000000000000;
  iVar3 = FUN_140e851f0(uVar4,&local_130,DAT_141955260,0);
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if (iVar3 == 0) {
    local_c8 = 0x439;
    goto LAB_1406087f5;
  }
  local_c8 = 0x43a;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*param_5;
  }
  uVar14 = (ulonglong)puVar7 & 0xffffffffffffff00;
  FUN_140e87440(puVar6,DAT_1419f5a88,0x80000000,&local_88,uVar14,
                (ulonglong)ppdVar15 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar14 >> 0x20);
  uStack_f0 = CONCAT44(uStack_7c,uStack_80);
  local_f8 = local_88;
  if ((1 << (local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_150);
  }
  FUN_140041b80(local_150,&local_f8);
  iVar3 = DAT_1419ff958;
  local_120 = local_150;
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  local_134 = 0;
  local_140 = (double)iVar3;
  local_118 = &local_140;
  ppuVar16 = &local_120;
  ppuVar5 = (undefined1 **)
            FUN_140e634e0(param_1,param_2,&local_178,2,CONCAT44(uVar2,DAT_141a035d8),ppuVar16);
  puVar11 = (undefined1 *)0x0;
  if (ppuVar5 != &local_110) {
    local_e8 = *ppuVar5;
    puStack_e0 = ppuVar5[1];
    FUN_140041b80(&local_110,&local_e8);
    puVar11 = local_110;
    uVar10 = local_104;
  }
  if ((uVar10 & 0xffffff) == 3) {
    bVar12 = puVar11 == (undefined1 *)0x0;
  }
  else {
    bVar12 = (uVar10 & 0xffffff) == 5;
  }
  if (bVar12) {
    uStack_f0 = CONCAT44(0xd,(undefined4)uStack_f0);
    local_f8 = (undefined1 *)0x0;
    ppuVar5 = &local_f8;
    uVar8 = 1;
    local_158 = 1;
  }
  else {
    local_128 = local_108;
    local_124 = uVar10;
    if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) == 0) {
      local_130 = puVar11;
    }
    else {
      FUN_1400419b0(&local_130,&local_110);
    }
    ppuVar5 = &local_130;
    uVar8 = 2;
    local_158 = 2;
  }
  cVar1 = FUN_140e491e0(ppuVar5);
  if (((uVar8 & 2) != 0) &&
     (uVar8 = uVar8 & 0xfffffffd, local_158 = uVar8, (1 << ((byte)local_124 & 0x1f) & 0x46U) != 0))
  {
    FUN_140041a50(&local_130);
  }
  if (((uVar8 & 1) != 0) && ((1 << ((byte)((ulonglong)uStack_f0 >> 0x20) & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_f8);
  }
  if (cVar1 != '\0') {
    local_c8 = 0x43a;
    goto LAB_1406087f5;
  }
  local_c8 = 0x43b;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  local_e8 = _DAT_1419e6a90;
  puStack_e0 = puRam00000001419e6a98;
  if ((1 << (local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_150);
  }
  FUN_140041b80(local_150,&local_e8);
  local_120 = local_150;
  ppuVar5 = &local_120;
  uVar4 = gml_Script_choose_weighted(param_1,param_2,&local_178,1,ppuVar5);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_c8 = 0x43b;
    goto LAB_1406087f5;
  }
  local_c8 = 0x43c;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
  uVar14 = (ulonglong)ppuVar5 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_168,uVar14,uVar17);
  uVar17 = uVar17 & 0xffffffffffffff00;
  uVar14 = uVar14 & 0xffffffffffffff00;
  FUN_140e87440(&local_168,DAT_141a1edd0,0x80000000,&local_98,uVar14,uVar17);
  uVar17 = uVar17 & 0xffffffffffffff00;
  uVar14 = uVar14 & 0xffffffffffffff00;
  FUN_140e87440(local_c0,DAT_1419f6028,0x80000000,&local_a8,uVar14,uVar17);
  if (0 < param_4) {
    puVar9 = (undefined8 *)*param_5;
  }
  FUN_140e87440(puVar9,DAT_141a1f4e0,0x80000000,&local_b8,uVar14 & 0xffffffffffffff00,
                uVar17 & 0xffffffffffffff00);
  puStack_e0 = (undefined1 *)CONCAT44(uStack_9c,uStack_a0);
  local_e8 = local_a8;
  if ((1 << (local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_150);
  }
  FUN_140041b80(local_150,&local_e8);
  local_120 = local_150;
  puStack_e0 = (undefined1 *)CONCAT44(uStack_ac,uStack_b0);
  local_e8 = local_b8;
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  FUN_140041b80(&local_140,&local_e8);
  local_118 = &local_140;
  uVar4 = 0;
  switch(local_15c) {
  case 0:
  case 7:
  case 10:
  case 0xd:
switchD_140608798_caseD_0:
    uVar2 = FUN_140e4a8b0(&local_168);
    uVar4 = FUN_140e87250(uVar2);
    break;
  case 6:
    uVar4 = local_168;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_168 >> 0x20);
    if ((iVar3 == 0x1000000) || (iVar3 == 0x4000001)) goto switchD_140608798_caseD_0;
  }
  FUN_140e63610(uVar4,param_2,&local_178,2,&local_98,&local_120);
LAB_1406087f5:
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(local_150,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

