// gml_Script_vec_abs_anon_5200_vec2_Vect2 @ 0x14063a6e0

longlong **
gml_Script_vec_abs_anon_5200_vec2_Vect2
          (longlong *param_1,undefined8 param_2,longlong **param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong **pplVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 **ppuVar9;
  double **ppdVar10;
  ulonglong uVar11;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  longlong *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  longlong *plStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  ulonglong local_108;
  undefined4 local_fc;
  double local_f8;
  undefined4 local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  ulonglong local_d8;
  byte local_cc;
  ulonglong local_c8;
  byte local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  longlong **local_a0;
  undefined1 *local_98;
  ulonglong *local_90;
  ulonglong *local_88 [2];
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  
  local_b0 = "gml_Script_reflect@anon@4607@vec2@Vect2";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x9d;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(&local_f8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_13c = 0xffffff;
  local_148 = (longlong *)0x0;
  local_2c = 0xffffff;
  local_38 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  uStack_5c = 0xffffff;
  local_68 = (longlong *)0x0;
  uStack_6c = 0xffffff;
  local_78 = (longlong *)0x0;
  local_14c = 0;
  local_158 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = (longlong *)0x0;
  local_a8 = 0xa0;
  uVar6 = (int)(DAT_141a00978 | 0x5000000) >> 0x18 & 0xff;
  if (uVar6 == 0xf) {
    uVar7 = 0x4000004;
  }
  else {
    uVar7 = (ulonglong)(uVar6 | 0x1000000);
  }
  uStack_12c = 0xf;
  local_138 = (longlong *)(uVar7 << 0x20 | (ulonglong)(DAT_141a00978 & 0xffffff));
  plStack_120 = (longlong *)CONCAT44(0xf,uStack_130);
  local_128 = local_138;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_128);
  local_98 = local_e8;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14063a879:
    local_128 = (longlong *)*puVar5;
    plStack_120 = (longlong *)puVar5[1];
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_128);
  }
  else {
    puVar5 = (ulonglong *)*param_5;
    if (puVar5 != &local_d8) goto LAB_14063a879;
  }
  local_90 = &local_d8;
  ppuVar9 = &local_98;
  uVar7 = CONCAT44(uVar2,DAT_1419fd6d8);
  pplVar3 = (longlong **)FUN_140e634e0(param_1,param_2,&local_158,2,uVar7,ppuVar9);
  if (pplVar3 != &local_148) {
    local_128 = *pplVar3;
    plStack_120 = pplVar3[1];
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_128);
  }
  local_a8 = 0xa1;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  FUN_140e87440(&local_148,DAT_141a00988,0x80000000,&local_38,uVar7 & 0xffffffffffffff00,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  switch(uStack_13c) {
  default:
switchD_14063a981_caseD_1:
    plVar4 = (longlong *)0x0;
    break;
  case 6:
    plVar4 = local_148;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_148 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_14063a981_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_148);
    plVar4 = (longlong *)FUN_140e87250(uVar2);
  }
  FUN_140e63610(plVar4,param_2,&local_158,0,&local_38,0);
  local_a8 = 0xa3;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a00a48);
  local_a0 = &local_148;
  ppdVar10 = (double **)&local_a0;
  puVar5 = (ulonglong *)FUN_140e63610(param_1,param_2,&local_158,1,uVar7,ppdVar10);
  if (puVar5 != &local_108) {
    local_128 = (longlong *)*puVar5;
    plStack_120 = (longlong *)puVar5[1];
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_128);
  }
  local_a8 = 0xa4;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  FUN_140e87440(&local_148,DAT_141a00838,0x80000000,&local_48,uVar7 & 0xffffffffffffff00,
                (ulonglong)ppdVar10 & 0xffffffffffffff00);
  uStack_12c = 0;
  local_138 = (longlong *)0x4000000000000000;
  FUN_140042560(&local_138,&local_108);
  plStack_120 = (longlong *)CONCAT44(uStack_12c,uStack_130);
  local_128 = local_138;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_128);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_a0 = (longlong **)&local_f8;
  switch(uStack_13c) {
  default:
switchD_14063ab5b_caseD_1:
    plVar4 = (longlong *)0x0;
    break;
  case 6:
    plVar4 = local_148;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_148 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_14063ab5b_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_148);
    plVar4 = (longlong *)FUN_140e87250(uVar2);
  }
  ppdVar10 = (double **)&local_a0;
  puVar8 = &local_48;
  FUN_140e63610(plVar4,param_2,&local_158,1,puVar8,ppdVar10);
  local_a8 = 0xa5;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uVar11 = (ulonglong)ppdVar10 & 0xffffffffffffff00;
  uVar7 = (ulonglong)puVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_148,DAT_141a00938,0x80000000,&local_58,uVar7,uVar11);
  uStack_12c = 6;
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_138 = param_1;
  FUN_140e87440(&local_138,DAT_1419fe0e8,0x80000000,&local_68,uVar7,uVar11);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  uStack_12c = 6;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_138 = param_1;
  FUN_140e87440(&local_138,DAT_1419fe158,0x80000000,&local_78,uVar7,uVar11 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar7 >> 0x20);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  iVar1 = DAT_141a00768;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = (double)iVar1;
  local_a0 = (longlong **)&local_f8;
  plStack_120 = (longlong *)CONCAT44(uStack_5c,uStack_60);
  local_128 = local_68;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_128);
  local_98 = local_e8;
  plStack_120 = (longlong *)CONCAT44(uStack_6c,uStack_70);
  local_128 = local_78;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_128);
  local_90 = &local_d8;
  puVar5 = (ulonglong *)
           FUN_140e634e0(param_1,param_2,&local_118,3,CONCAT44(uVar2,DAT_1419fd6d8),&local_a0);
  if (puVar5 != &local_c8) {
    local_128 = (longlong *)*puVar5;
    plStack_120 = (longlong *)puVar5[1];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_128);
  }
  local_88[0] = &local_c8;
  plVar4 = (longlong *)0x0;
  switch(uStack_13c) {
  case 6:
    plVar4 = local_148;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_148 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) break;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_148);
    plVar4 = (longlong *)FUN_140e87250(uVar2);
  }
  FUN_140e63610(plVar4,param_2,&local_158,1,&local_58,local_88);
  local_a8 = 0xa6;
  if (&local_148 != param_3) {
    plStack_120 = (longlong *)CONCAT44(uStack_13c,uStack_140);
    local_128 = local_148;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

