// gml_Script_anon_41316_DefineTrinkets_TRINKETSINIT @ 0x140618d80

undefined8 *
gml_Script_anon_41316_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  double *pdVar7;
  undefined8 *local_res18;
  code *pcVar8;
  undefined8 *puVar9;
  ulonglong in_stack_fffffffffffffec0;
  undefined8 **ppuVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  uint local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  double local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined1 *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  byte local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_f0 = "gml_Script_anon@40693@DefineTrinkets@TRINKETSINIT";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x5a9;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_48,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_4c = 0xffffff;
  local_58 = (undefined1 *)0x0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_8c = 0xffffff;
  local_98 = (undefined1 *)0x0;
  local_b4 = 0xffffff;
  local_c0 = 0.0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x5aa;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  uVar12 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  FUN_140e87440(param_5,DAT_141a1f440,0x80000000,&local_58,uVar12,
                in_stack_fffffffffffffec0 & 0xffffffffffffff00);
  uVar3 = (undefined4)(uVar12 >> 0x20);
  local_128 = local_58;
  uStack_120 = uStack_50;
  uStack_11c = uStack_4c;
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_128);
  local_e8 = 0x5ab;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  local_res18 = &local_108;
  ppuVar10 = &local_res18;
  uVar12 = CONCAT44(uVar3,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_138,1,uVar12,ppuVar10);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_e8 = 0x5ab;
    goto LAB_1406194c0;
  }
  local_e8 = 0x5ac;
  uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(&local_108,DAT_141a56cd0,0x80000000,&local_68,uVar12,uVar11);
  uStack_11c = 10;
  local_128 = (undefined1 *)0x2;
  iVar2 = FUN_140e851f0(&local_68,&local_128,DAT_141955260,0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (iVar2 == 0) {
    local_e8 = 0x5ac;
    goto LAB_1406194c0;
  }
  local_e8 = 0x5ad;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419ffd98,0x80000000,&local_78,uVar12,uVar11);
  uStack_11c = 0;
  local_128 = (undefined1 *)0xc010000000000000;
  iVar2 = FUN_140e851f0(&local_78,&local_128,DAT_141955260,0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (iVar2 == 0) {
    local_e8 = 0x5ad;
    goto LAB_1406194c0;
  }
  local_e8 = 0x5af;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(&local_108,DAT_1419f59d8,0x80000000,&local_88,uVar12,uVar11);
  FUN_140e87440(uVar4,DAT_1419f5f58,0x80000000,&local_98,uVar12 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  local_128 = local_98;
  uStack_120 = uStack_90;
  uStack_11c = uStack_8c;
  if ((1 << (local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140041b80(&local_48,&local_128);
  local_res18 = &local_48;
  switch(uStack_fc) {
  default:
switchD_140619196_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_108;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_108 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140619196_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_108);
    uVar4 = FUN_140e87250(uVar3);
  }
  ppuVar10 = &local_res18;
  puVar9 = &local_88;
  uVar4 = FUN_140e63610(uVar4,param_2,&local_138,1,puVar9,ppuVar10);
  uStack_11c = 0;
  local_128 = &DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(uVar4,&local_128,DAT_141955260,0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (iVar2 != 0) {
    local_e8 = 0x5b0;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    local_128 = (undefined1 *)0x3ff0000000000000;
    uStack_11c = 0xd;
    local_38 = 0;
    uStack_34 = 0x3ff00000;
    uStack_30 = uStack_120;
    uStack_2c = 0xd;
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    FUN_140041b80(&local_c0,&local_38);
    pdVar7 = &local_c0;
    uVar3 = DAT_1419ff7e8;
    goto LAB_140619452;
  }
  local_e8 = 0x5b1;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
  uVar12 = (ulonglong)puVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_108,DAT_141a572d0,0x80000000,&local_e0,uVar12,uVar11);
  FUN_140e87440(&local_e0,DAT_1419f5878,0x80000000,&local_b0,uVar12 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  switch(local_d4) {
  default:
switchD_14061934a_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_e0;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_e0 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_14061934a_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_e0);
    uVar4 = FUN_140e87250(uVar3);
  }
  uVar12 = 0;
  puVar9 = &local_b0;
  uVar4 = FUN_140e63610(uVar4,param_2,&local_138,0,puVar9,0);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_e8 = 0x5b2;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    FUN_140e87440(uVar4,DAT_1419ff838,0x80000000,&local_118,(ulonglong)puVar9 & 0xffffffffffffff00,
                  uVar12 & 0xffffffffffffff00);
    uVar6 = local_10c & 0xffffff;
    if (uVar6 == 0) {
LAB_140619439:
      local_118 = local_118 + 1.0;
    }
    else {
      if (uVar6 == 1) {
        local_118 = (double)FUN_140e4b060(&local_118);
        local_10c = 0;
        goto LAB_140619439;
      }
      if (uVar6 == 7) {
        local_118 = (double)CONCAT44(local_118._4_4_,local_118._0_4_ + 1);
      }
      else if (uVar6 == 10) {
        local_118 = (double)((longlong)local_118 + 1);
      }
      else {
        if (uVar6 == 0xd) {
          local_10c = 0;
          goto LAB_140619439;
        }
        FUN_140042910(&DAT_14172c3d8,&local_118,&local_118);
      }
    }
    pdVar7 = &local_118;
    uVar3 = DAT_1419ff838;
LAB_140619452:
    FUN_140e87930(uVar4,uVar3,0x80000000,pdVar7);
  }
  local_e8 = 0x5b4;
  local_38 = (undefined4)local_108;
  uStack_34 = local_108._4_4_;
  uStack_30 = uStack_100;
  uStack_2c = uStack_fc;
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  FUN_140041b80(&local_d0,&local_38);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87930(uVar4,DAT_1419ffc78,0x80000000,&local_d0);
LAB_1406194c0:
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
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
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_48,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

