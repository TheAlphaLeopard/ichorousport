// gml_Script_anon_28984_DefineBuffs_OFFERINGSINIT @ 0x1403e9cd0

undefined8 *
gml_Script_anon_28984_DefineBuffs_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  code *pcVar7;
  ulonglong uVar8;
  ulonglong in_stack_fffffffffffffef0;
  undefined8 **ppuVar9;
  ulonglong uVar10;
  double local_f8;
  uint local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  byte local_44;
  undefined8 *local_30;
  undefined8 *local_28;
  
  local_a0 = "gml_Script_anon@28530@DefineBuffs@OFFERINGSINIT";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x49a;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_64 = 0xffffff;
  local_70 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_dc = 0;
  local_e8 = 0;
  local_54 = 0;
  local_60 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x49c;
  uStack_ac = 0xf;
  local_b8 = 0x1000000000000ee;
  in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
  uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  FUN_140e87440(&local_b8,DAT_1419f5e38,0x80000000,&local_70,uVar8,in_stack_fffffffffffffef0);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_70,DAT_1419f5868,0x80000000,&local_d8,uVar8,in_stack_fffffffffffffef0);
  FUN_140e87440(&local_d8,DAT_1419f5df8,0x80000000,&local_80,uVar8 & 0xffffffffffffff00,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  switch(local_cc) {
  default:
switchD_1403e9e78_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_d8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_d8 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1403e9e78_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_d8);
    uVar5 = FUN_140e87250(uVar3);
  }
  puVar4 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_e8,0,&local_80,0);
  if (puVar4 != &local_c8) {
    local_b8 = *puVar4;
    uStack_b0 = *(undefined4 *)(puVar4 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_b8);
  }
  local_98 = 0x49d;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uVar3 = 1;
  puVar4 = (undefined8 *)
           FUN_140e8da20(&local_60,param_1,4,&DAT_141dd2648,&DAT_141dd2958,&DAT_141dd2a08,
                         &DAT_141dd2798);
  if (puVar4 != &local_50) {
    local_b8 = *puVar4;
    uStack_b0 = *(undefined4 *)(puVar4 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_50);
    }
    FUN_140041b80(&local_50,&local_b8);
  }
  local_30 = &local_50;
  local_28 = &local_c8;
  ppuVar9 = &local_30;
  uVar8 = CONCAT44(uVar3,DAT_1419f5d88);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_e8,2,uVar8,ppuVar9);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_98 = 0x49d;
    goto LAB_1403ea100;
  }
  local_98 = 0x49f;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_141a58110,0x80000000,&local_90,uVar8,uVar10);
  cVar1 = FUN_140e491e0(&local_90);
  if (cVar1 == '\0') {
    local_98 = 0x49f;
    goto LAB_1403ea100;
  }
  local_98 = 0x4a1;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87440(uVar5,DAT_1419f5808,0x80000000,&local_f8,uVar8 & 0xffffffffffffff00,
                uVar10 & 0xffffffffffffff00);
  uVar6 = local_ec & 0xffffff;
  if (uVar6 == 0) {
LAB_1403ea0d2:
    local_f8 = local_f8 + -1.0;
  }
  else if (uVar6 == 1) {
    local_f8 = (double)FUN_140e4b060(&local_f8);
    local_f8 = local_f8 - 1.0;
    local_ec = 0;
  }
  else if (uVar6 == 7) {
    local_f8 = (double)CONCAT44(local_f8._4_4_,local_f8._0_4_ + -1);
  }
  else if (uVar6 == 10) {
    local_f8 = (double)((longlong)local_f8 + -1);
  }
  else {
    if (uVar6 == 0xd) {
      local_ec = 0;
      goto LAB_1403ea0d2;
    }
    FUN_140042910(&DAT_14172c450,&local_f8,&local_f8);
  }
  FUN_140e87930(uVar5,DAT_1419f5808,0x80000000,&local_f8);
LAB_1403ea100:
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  _eh_vector_destructor_iterator_(&local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

