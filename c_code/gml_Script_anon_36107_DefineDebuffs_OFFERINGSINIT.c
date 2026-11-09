// gml_Script_anon_36107_DefineDebuffs_OFFERINGSINIT @ 0x1403f7040

undefined8 *
gml_Script_anon_36107_DefineDebuffs_OFFERINGSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  ulonglong uVar9;
  ulonglong in_stack_fffffffffffffed0;
  ulonglong uVar10;
  undefined1 **ppuVar11;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
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
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  
  local_90 = "gml_Script_anon@34017@DefineDebuffs@OFFERINGSINIT";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x593;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_b8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_48 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_fc = 0;
  local_108 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x595;
  puVar7 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = *(undefined8 **)(param_5 + 8);
  }
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffffffffffff00;
  uVar10 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  FUN_140e87440(puVar6,DAT_141a1f440,0x80000000,&local_f8,uVar10,in_stack_fffffffffffffed0);
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_f8,DAT_1419f5868,0x80000000,&local_118,uVar10,in_stack_fffffffffffffed0);
  FUN_140e87440(&local_118,DAT_1419f5fd8,0x80000000,&local_c8,uVar10 & 0xffffffffffffff00,
                in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  uStack_11c = DAT_141dd2744;
  uStack_120 = DAT_141dd2740;
  if ((1 << ((byte)DAT_141dd2744 & 0x1f) & 0x46U) == 0) {
    local_128 = DAT_141dd2738;
  }
  else {
    FUN_1400419b0(&local_128,&DAT_141dd2738);
  }
  switch(local_10c) {
  default:
switchD_1403f7227_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_118;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_118 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_1403f7227_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_118);
    uVar4 = FUN_140e87250(uVar2);
  }
  uVar10 = 0;
  puVar6 = &local_c8;
  uVar4 = FUN_140e63610(uVar4,param_2,&local_108,0,puVar6,0);
  iVar3 = FUN_140e851f0(uVar4,&local_128,DAT_141955260,0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (iVar3 == 0) goto LAB_1403f7459;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = *(undefined8 **)(param_5 + 8);
  }
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar9 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a1f440,0x80000000,&local_f8,uVar9,uVar10);
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_f8,DAT_1419f5868,0x80000000,&local_118,uVar9,uVar10);
  FUN_140e87440(&local_118,DAT_1419f5fd8,0x80000000,&local_c8,uVar9 & 0xffffffffffffff00,
                uVar10 & 0xffffffffffffff00);
  uStack_11c = DAT_141dd2734;
  uStack_120 = DAT_141dd2730;
  if ((1 << ((byte)DAT_141dd2734 & 0x1f) & 0x46U) == 0) {
    local_128 = DAT_141dd2728;
  }
  else {
    FUN_1400419b0(&local_128,&DAT_141dd2728);
  }
  switch(local_10c) {
  default:
switchD_1403f73b9_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_118;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_118 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_1403f73b9_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_118);
    uVar4 = FUN_140e87250(uVar2);
  }
  uVar10 = 0;
  puVar6 = &local_c8;
  uVar4 = FUN_140e63610(uVar4,param_2,&local_e8,0,puVar6,0);
  iVar3 = FUN_140e851f0(uVar4,&local_128,DAT_141955260,0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (iVar3 != 0) {
    local_88 = 0x595;
    goto LAB_1403f76e6;
  }
LAB_1403f7459:
  local_88 = 0x596;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = *(undefined8 **)(param_5 + 8);
  }
  uVar9 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a1f4e0,0x80000000,&local_d8,uVar9,uVar10 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar9 >> 0x20);
  local_128 = local_d8;
  uStack_120 = uStack_d0;
  uStack_11c = uStack_cc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_128);
  local_58 = local_b8;
  uVar10 = CONCAT44(uVar2,DAT_141a02ef8);
  ppuVar11 = &local_58;
  uVar4 = FUN_140e634e0(param_1,param_2,&local_108,1,uVar10,&local_58);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_88 = 0x596;
    goto LAB_1403f76e6;
  }
  local_88 = 0x598;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if (param_4 < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = *(undefined8 **)(param_5 + 8);
  }
  uVar9 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(puVar6,DAT_141a1f440,0x80000000,&local_f8,uVar10,uVar9);
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_f8,DAT_141a1edd0,0x80000000,&local_68,uVar10,uVar9);
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(local_48,DAT_1419f6028,0x80000000,&local_78,uVar10,uVar9);
  if (1 < param_4) {
    puVar7 = *(undefined8 **)(param_5 + 8);
  }
  FUN_140e87440(puVar7,DAT_141a1f4e0,0x80000000,&local_d8,uVar10 & 0xffffffffffffff00,
                uVar9 & 0xffffffffffffff00);
  local_128 = local_78;
  uStack_120 = uStack_70;
  uStack_11c = uStack_6c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_128);
  local_58 = local_b8;
  local_128 = local_d8;
  uStack_120 = uStack_d0;
  uStack_11c = uStack_cc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_128);
  local_50 = local_a8;
  uVar4 = 0;
  switch(local_ec) {
  case 0:
  case 7:
  case 10:
  case 0xd:
switchD_1403f7689_caseD_0:
    uVar2 = FUN_140e4a8b0(&local_f8);
    uVar4 = FUN_140e87250(uVar2);
    break;
  case 6:
    uVar4 = local_f8;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_f8 >> 0x20);
    if ((iVar3 == 0x1000000) || (iVar3 == 0x4000001)) goto switchD_1403f7689_caseD_0;
  }
  FUN_140e63610(uVar4,param_2,&local_108,2,&local_68,&local_58);
LAB_1403f76e6:
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

