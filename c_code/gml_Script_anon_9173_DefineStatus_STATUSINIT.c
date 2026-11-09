// gml_Script_anon_9173_DefineStatus_STATUSINIT @ 0x1405cab40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_9173_DefineStatus_STATUSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong in_stack_ffffffffffffff00;
  undefined1 **ppuVar8;
  ulonglong uVar9;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined1 *local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_60 = "gml_Script_anon@8468@DefineStatus@STATUSINIT";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x184;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_88,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_8c = 0;
  local_98 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x185;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffffffffffff00;
  uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f5868,0x80000000,&local_f8,uVar6,in_stack_ffffffffffffff00);
  FUN_140e87440(&local_f8,DAT_1419f5848,0x80000000,&local_a8,uVar6 & 0xffffffffffffff00,
                in_stack_ffffffffffffff00 & 0xffffffffffffff00);
  local_38 = _DAT_141dd4628;
  uStack_34 = uRam0000000141dd462c;
  uStack_30 = uRam0000000141dd4630;
  uStack_2c = DAT_141dd4634;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_38);
  local_50 = local_88;
  switch(local_ec) {
  default:
switchD_1405caccb_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_f8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_f8 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1405caccb_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_f8);
    uVar4 = FUN_140e87250(uVar3);
  }
  ppuVar8 = &local_50;
  puVar7 = &local_a8;
  uVar4 = FUN_140e63610(uVar4,param_2,&local_98,1,puVar7,ppuVar8);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') goto LAB_1405caea9;
  local_58 = 0x186;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
  uVar6 = (ulonglong)puVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f5868,0x80000000,&local_f8,uVar6,uVar9);
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(&local_f8,DAT_141a55540,0x80000000,&local_b8,uVar6,uVar9);
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_141a572d0,0x80000000,&local_c8,uVar6,uVar9);
  FUN_140e87440(&local_c8,DAT_1419f5a38,0x80000000,&local_d8,uVar6 & 0xffffffffffffff00,
                uVar9 & 0xffffffffffffff00);
  local_38 = (undefined4)local_d8;
  uStack_34 = local_d8._4_4_;
  uStack_30 = uStack_d0;
  uStack_2c = uStack_cc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_38);
  local_48[0] = local_78;
  uVar4 = 0;
  switch(local_ec) {
  case 0:
  case 7:
  case 10:
  case 0xd:
switchD_1405cae4f_caseD_0:
    uVar3 = FUN_140e4a8b0(&local_f8);
    uVar4 = FUN_140e87250(uVar3);
    break;
  case 6:
    uVar4 = local_f8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_f8 >> 0x20);
    if ((iVar2 == 0x1000000) || (iVar2 == 0x4000001)) goto switchD_1405cae4f_caseD_0;
  }
  FUN_140e63610(uVar4,param_2,&local_e8,1,&local_b8,local_48);
LAB_1405caea9:
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

