// gml_Script_vec_abs_anon_13063_vec3_Vect2 @ 0x140643720

longlong **
gml_Script_vec_abs_anon_13063_vec3_Vect2
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
  ulonglong **ppuVar12;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  longlong *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  longlong *plStack_160;
  longlong *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  ulonglong local_138;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  double local_108;
  undefined4 local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  ulonglong local_e8;
  byte local_dc;
  ulonglong local_d8;
  byte local_cc;
  ulonglong local_c8;
  byte local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  longlong **local_58;
  undefined1 *local_50;
  ulonglong *local_48;
  ulonglong *local_40;
  ulonglong *local_38 [2];
  
  local_120 = "gml_Script_reflect@anon@12388@vec3@Vect2";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0x19a;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(&local_108,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_16c = 0xffffff;
  local_178 = (longlong *)0x0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = (longlong *)0x0;
  uStack_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_17c = 0;
  local_188 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = (longlong *)0x0;
  local_118 = 0x19d;
  uVar6 = (int)(DAT_141a00788 | 0x5000000) >> 0x18 & 0xff;
  if (uVar6 == 0xf) {
    uVar7 = 0x4000004;
  }
  else {
    uVar7 = (ulonglong)(uVar6 | 0x1000000);
  }
  uStack_14c = 0xf;
  local_168 = (longlong *)(uVar7 << 0x20 | (ulonglong)(DAT_141a00788 & 0xffffff));
  plStack_160 = (longlong *)CONCAT44(0xf,uStack_150);
  local_158 = local_168;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_168);
  local_50 = local_f8;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1406438cc:
    local_168 = (longlong *)*puVar5;
    plStack_160 = (longlong *)puVar5[1];
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_168);
  }
  else {
    puVar5 = (ulonglong *)*param_5;
    if (puVar5 != &local_e8) goto LAB_1406438cc;
  }
  local_48 = &local_e8;
  ppuVar9 = &local_50;
  uVar7 = CONCAT44(uVar2,DAT_1419fd6d8);
  pplVar3 = (longlong **)FUN_140e634e0(param_1,param_2,&local_188,2,uVar7,ppuVar9);
  if (pplVar3 != &local_178) {
    local_168 = *pplVar3;
    plStack_160 = pplVar3[1];
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_168);
  }
  local_118 = 0x19e;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  FUN_140e87440(&local_178,DAT_141a00988,0x80000000,&local_68,uVar7 & 0xffffffffffffff00,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  switch(uStack_16c) {
  default:
switchD_1406439d4_caseD_1:
    plVar4 = (longlong *)0x0;
    break;
  case 6:
    plVar4 = local_178;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_178 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_1406439d4_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_178);
    plVar4 = (longlong *)FUN_140e87250(uVar2);
  }
  FUN_140e63610(plVar4,param_2,&local_188,0,&local_68,0);
  local_118 = 0x1a0;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a00a48);
  local_58 = &local_178;
  ppdVar10 = (double **)&local_58;
  puVar5 = (ulonglong *)FUN_140e63610(param_1,param_2,&local_188,1,uVar7,ppdVar10);
  if (puVar5 != &local_138) {
    local_168 = (longlong *)*puVar5;
    plStack_160 = (longlong *)puVar5[1];
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_168);
  }
  local_118 = 0x1a1;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  FUN_140e87440(&local_178,DAT_141a00838,0x80000000,&local_78,uVar7 & 0xffffffffffffff00,
                (ulonglong)ppdVar10 & 0xffffffffffffff00);
  uStack_14c = 0;
  local_158 = (longlong *)0x4000000000000000;
  FUN_140042560(&local_158,&local_138);
  plStack_160 = (longlong *)CONCAT44(uStack_14c,uStack_150);
  local_168 = local_158;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_168);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_58 = (longlong **)&local_108;
  switch(uStack_16c) {
  default:
switchD_140643bb0_caseD_1:
    plVar4 = (longlong *)0x0;
    break;
  case 6:
    plVar4 = local_178;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_178 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140643bb0_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_178);
    plVar4 = (longlong *)FUN_140e87250(uVar2);
  }
  ppdVar10 = (double **)&local_58;
  puVar8 = &local_78;
  FUN_140e63610(plVar4,param_2,&local_188,1,puVar8,ppdVar10);
  local_118 = 0x1a2;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar5 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05ca8);
  uVar11 = (ulonglong)ppdVar10 & 0xffffffffffffff00;
  uVar7 = (ulonglong)puVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_178,DAT_141a00938,0x80000000,&local_88,uVar7,uVar11);
  uStack_14c = 6;
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_98,uVar7,uVar11);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_14c = 6;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe158,0x80000000,&local_a8,uVar7,uVar11 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar7 >> 0x20);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  iVar1 = DAT_141a007c8;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = (double)iVar1;
  local_58 = (longlong **)&local_108;
  plStack_160 = (longlong *)CONCAT44(uStack_8c,uStack_90);
  local_168 = local_98;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_168);
  local_50 = local_f8;
  plStack_160 = (longlong *)CONCAT44(uStack_9c,uStack_a0);
  local_168 = local_a8;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_168);
  local_48 = &local_e8;
  if (puVar5 != &local_d8) {
    local_168 = (longlong *)*puVar5;
    plStack_160 = (longlong *)puVar5[1];
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_168);
  }
  local_40 = &local_d8;
  puVar5 = (ulonglong *)
           FUN_140e634e0(param_1,param_2,&local_148,4,CONCAT44(uVar2,DAT_1419fd6d8),&local_58);
  if (puVar5 != &local_c8) {
    local_168 = (longlong *)*puVar5;
    plStack_160 = (longlong *)puVar5[1];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_168);
  }
  local_38[0] = &local_c8;
  switch(uStack_16c) {
  default:
switchD_140643e9c_caseD_1:
    plVar4 = (longlong *)0x0;
    break;
  case 6:
    plVar4 = local_178;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_178 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140643e9c_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_178);
    plVar4 = (longlong *)FUN_140e87250(uVar2);
  }
  ppuVar12 = local_38;
  puVar8 = &local_88;
  FUN_140e63610(plVar4,param_2,&local_188,1,puVar8,ppuVar12);
  local_118 = 0x1a3;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  FUN_140e87440(&local_178,DAT_141a008d8,0x80000000,&local_b8,(ulonglong)puVar8 & 0xffffffffffffff00
                ,(ulonglong)ppuVar12 & 0xffffffffffffff00);
  switch(uStack_16c) {
  default:
switchD_140643f63_caseD_1:
    plVar4 = (longlong *)0x0;
    break;
  case 6:
    plVar4 = local_178;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_178 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140643f63_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_178);
    plVar4 = (longlong *)FUN_140e87250(uVar2);
  }
  FUN_140e63610(plVar4,param_2,&local_188,0,&local_b8,0);
  local_118 = 0x1a4;
  if (&local_178 != param_3) {
    plStack_160 = (longlong *)CONCAT44(uStack_16c,uStack_170);
    local_168 = local_178;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_168);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
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
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

