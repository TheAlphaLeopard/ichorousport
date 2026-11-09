// gml_Object_oBossSplit_Destroy_0 @ 0x1408084d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oBossSplit_Destroy_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong in_stack_fffffffffffffeb0;
  undefined1 **ppuVar8;
  ulonglong uVar9;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 *local_50;
  undefined1 *local_48 [4];
  
  local_a0 = "gml_Script_anon@29556@___struct___393@gml_Object_oBossSplit_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x5a2;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_70,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_11c = 0;
  local_128 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x5a3;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57560);
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
  uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_141a097f8,0x80000000,&local_e8,uVar6,in_stack_fffffffffffffeb0);
  uStack_110._0_4_ = local_e0;
  uStack_110._4_4_ = local_dc;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
    local_118 = local_e8;
  }
  else {
    FUN_1400419b0(&local_118,&local_e8);
  }
  uVar3 = uStack_110._4_4_;
  local_b8 = local_118;
  uStack_b0 = CONCAT44(uStack_110._4_4_,(undefined4)uStack_110);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_b8);
  if ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140e87930(uVar4,DAT_141a09708,0x80000000,&local_c8);
  local_98 = 0x5a4;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09968);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = 0;
  FUN_140e87930(uVar4,DAT_141a1f230,0x80000000,&local_f8);
  local_98 = 0x5a5;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = 0;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09968);
  FUN_140e87930(uVar4,DAT_141a1f500,0x80000000,&local_108);
  local_98 = 0x5a6;
  uStack_110 = CONCAT44(0xd,(undefined4)uStack_110);
  local_118 = 0;
  local_b8 = 0;
  uStack_b0 = uStack_110;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_b8);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09968);
  FUN_140e87930(uVar4,DAT_141a09a68,0x80000000,&local_d8);
  local_98 = 0x5a7;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09968);
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f5868,0x80000000,&local_148,uVar6,in_stack_fffffffffffffeb0);
  FUN_140e87440(&local_148,DAT_1419f5848,0x80000000,&local_80,uVar6 & 0xffffffffffffff00,
                in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
  local_b8 = CONCAT44(uRam0000000141dd6b7c,_DAT_141dd6b78);
  uStack_b0 = CONCAT44(DAT_141dd6b84,uRam0000000141dd6b80);
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_b8);
  local_50 = local_70;
  switch(local_13c) {
  default:
switchD_140808896_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_148;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_148 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140808896_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_148);
    uVar4 = FUN_140e87250(uVar3);
  }
  ppuVar8 = &local_50;
  puVar7 = &local_80;
  uVar4 = FUN_140e63610(uVar4,param_2,&local_128,1,puVar7,ppuVar8);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') goto LAB_140808a2d;
  local_98 = 0x5a8;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09968);
  uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
  uVar6 = (ulonglong)puVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f5868,0x80000000,&local_148,uVar6,uVar9);
  FUN_140e87440(&local_148,DAT_141a55540,0x80000000,&local_90,uVar6 & 0xffffffffffffff00,
                uVar9 & 0xffffffffffffff00);
  local_b8 = CONCAT44(uRam0000000141dd6b7c,_DAT_141dd6b78);
  uStack_b0 = CONCAT44(DAT_141dd6b84,uRam0000000141dd6b80);
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_b8);
  local_48[0] = local_60;
  uVar4 = 0;
  switch(local_13c) {
  case 0:
  case 7:
  case 10:
  case 0xd:
switchD_1408089d3_caseD_0:
    uVar3 = FUN_140e4a8b0(&local_148);
    uVar4 = FUN_140e87250(uVar3);
    break;
  case 6:
    uVar4 = local_148;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_148 >> 0x20);
    if ((iVar2 == 0x1000000) || (iVar2 == 0x4000001)) goto switchD_1408089d3_caseD_0;
  }
  FUN_140e63610(uVar4,param_2,&local_138,1,&local_90,local_48);
LAB_140808a2d:
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

