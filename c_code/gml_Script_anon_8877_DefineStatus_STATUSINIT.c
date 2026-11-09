// gml_Script_anon_8877_DefineStatus_STATUSINIT @ 0x1405ca180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_8877_DefineStatus_STATUSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  code *pcVar10;
  ulonglong uVar11;
  ulonglong in_stack_fffffffffffffea0;
  undefined1 **ppuVar12;
  ulonglong uVar13;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 local_60;
  char *local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_58 = "gml_Script_anon@8188@DefineStatus@STATUSINIT";
  local_60 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_60;
  local_50 = 0x179;
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_e8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_14c = 0xffffff;
  local_158 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_11c = 0;
  local_128 = 0;
  local_fc = 0;
  local_108 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_50 = 0x17b;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  in_stack_fffffffffffffea0 = in_stack_fffffffffffffea0 & 0xffffffffffffff00;
  uVar11 = (ulonglong)pcVar10 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419f5868,0x80000000,&local_158,uVar11,in_stack_fffffffffffffea0);
  FUN_140e87440(&local_158,DAT_1419f5818,0x80000000,&local_88,uVar11 & 0xffffffffffffff00,
                in_stack_fffffffffffffea0 & 0xffffffffffffff00);
  local_148 = CONCAT44(uRam0000000141dd455c,_DAT_141dd4558);
  uStack_140 = uRam0000000141dd4560;
  uStack_13c = DAT_141dd4564;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
  local_78 = local_e8;
  switch(local_14c) {
  default:
switchD_1405ca346_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_158;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_158 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_1405ca346_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_158);
    uVar5 = FUN_140e87250(uVar2);
  }
  ppuVar12 = &local_78;
  puVar6 = &local_88;
  uVar5 = FUN_140e63610(uVar5,param_2,&local_128,1,&local_88,ppuVar12);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') goto LAB_1405ca6a1;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  uVar11 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419f5868,0x80000000,&local_158,uVar11,uVar13);
  FUN_140e87440(&local_158,DAT_1419f5848,0x80000000,&local_98,uVar11 & 0xffffffffffffff00,
                uVar13 & 0xffffffffffffff00);
  local_148 = CONCAT44(uRam0000000141dd455c,_DAT_141dd4558);
  uStack_140 = uRam0000000141dd4560;
  uStack_13c = DAT_141dd4564;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_148);
  local_70 = local_d8;
  switch(local_14c) {
  default:
switchD_1405ca479_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_158;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_158 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_1405ca479_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_158);
    uVar5 = FUN_140e87250(uVar2);
  }
  ppuVar12 = &local_70;
  puVar6 = &local_98;
  uVar5 = FUN_140e63610(uVar5,param_2,&local_108,1,puVar6,ppuVar12);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') goto LAB_1405ca6a1;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  uVar11 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_141a1f090,0x80000000,&local_a8,uVar11,uVar13);
  uStack_13c = 0;
  local_148 = 0;
  iVar3 = FUN_140e851f0(&local_a8,&local_148,DAT_141955260,1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (iVar3 < 1) goto LAB_1405ca6a1;
  local_50 = 0x17c;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  uVar13 = uVar13 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419f5868,0x80000000,&local_158,uVar11,uVar13);
  FUN_140e87440(&local_158,DAT_141a55540,0x80000000,&local_b8,uVar11 & 0xffffffffffffff00,
                uVar13 & 0xffffffffffffff00);
  local_148 = CONCAT44(uRam0000000141dd455c,_DAT_141dd4558);
  uStack_140 = uRam0000000141dd4560;
  uStack_13c = DAT_141dd4564;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_148);
  local_68 = local_c8;
  switch(local_14c) {
  default:
switchD_1405ca646_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_158;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_158 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_1405ca646_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_158);
    uVar5 = FUN_140e87250(uVar2);
  }
  FUN_140e63610(uVar5,param_2,&local_118,1,&local_b8,&local_68);
LAB_1405ca6a1:
  local_50 = 0x17e;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff218);
  uStack_12c = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_130 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = *puVar6;
  }
  else {
    FUN_1400419b0(&local_138,puVar6);
  }
  FUN_140042560(&local_138,uVar4);
  local_148 = local_138;
  uStack_140 = uStack_130;
  uStack_13c = uStack_12c;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_148);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_50 = 0x180;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5838);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff0c8);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5838);
  local_148 = CONCAT44(uRam0000000141dc6744,_DAT_141dc6740);
  uStack_140 = uRam0000000141dc6748;
  uStack_13c = uRam0000000141dc674c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
  local_78 = local_e8;
  uStack_13c = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_140 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
    local_148 = *puVar7;
  }
  else {
    FUN_1400419b0(&local_148,puVar7);
  }
  FUN_140042560(&local_148,&local_f8);
  uStack_12c = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_130 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = *puVar6;
  }
  else {
    FUN_1400419b0(&local_138,puVar6);
  }
  FUN_1400462a0(&local_138,&local_148);
  local_48 = (undefined4)local_138;
  uStack_44 = local_138._4_4_;
  uStack_40 = uStack_130;
  uStack_3c = uStack_12c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_48);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_70 = local_d8;
  FUN_140e609c0(param_1);
  puVar9 = (undefined4 *)FUN_140e79090(&local_128,2,&local_78);
  if (puVar9 != puVar8) {
    local_48 = *puVar9;
    uStack_44 = puVar9[1];
    uStack_40 = puVar9[2];
    uStack_3c = puVar9[3];
    if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_48);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_60;
  return param_3;
}

