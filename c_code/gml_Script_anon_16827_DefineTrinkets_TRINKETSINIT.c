// gml_Script_anon_16827_DefineTrinkets_TRINKETSINIT @ 0x1405f3ae0

undefined8 *
gml_Script_anon_16827_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulonglong uVar8;
  undefined1 **ppuVar9;
  ulonglong uVar10;
  ulonglong in_stack_fffffffffffffe80;
  undefined8 **ppuVar11;
  undefined1 *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined1 *local_c0;
  undefined8 *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_58;
  
  local_d0 = "gml_Script_anon@16399@DefineTrinkets@TRINKETSINIT";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x296;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_98,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_15c = 0xffffff;
  local_168 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_10c = 0xffffff;
  local_118 = (undefined1 *)0x0;
  local_13c = 0xffffff;
  local_148 = 0;
  uStack_11c = 0xffffff;
  local_128 = (undefined1 *)0x0;
  local_ec = 0xffffff;
  local_f8 = 0;
  uStack_fc = 0xffffff;
  local_108 = (undefined1 *)0x0;
  local_14c = 0;
  local_158 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x297;
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  in_stack_fffffffffffffe80 = in_stack_fffffffffffffe80 & 0xffffffffffffff00;
  uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  local_58 = uVar3;
  FUN_140e87440(puVar5,DAT_141a1f440,0x80000000,&local_168,uVar8,in_stack_fffffffffffffe80);
  in_stack_fffffffffffffe80 = in_stack_fffffffffffffe80 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_168,DAT_1419f59d8,0x80000000,&local_e8,uVar8,in_stack_fffffffffffffe80);
  FUN_140e87440(uVar3,DAT_1419f5f58,0x80000000,&local_118,uVar8 & 0xffffffffffffff00,
                in_stack_fffffffffffffe80 & 0xffffffffffffff00);
  local_178 = local_118;
  uStack_170 = uStack_110;
  uStack_16c = uStack_10c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_178);
  local_b8 = &local_88;
  switch(local_15c) {
  default:
switchD_1405f3cd1_caseD_1:
    uVar3 = 0;
    break;
  case 6:
    uVar3 = local_168;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_168 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1405f3cd1_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar1 = FUN_140e4a8b0(&local_168);
    uVar3 = FUN_140e87250(uVar1);
  }
  ppuVar11 = &local_b8;
  puVar5 = &local_e8;
  puVar4 = (undefined8 *)FUN_140e63610(uVar3,param_2,&local_158,1,puVar5,ppuVar11);
  if (puVar4 != &local_148) {
    local_178 = (undefined1 *)*puVar4;
    uStack_170 = *(undefined4 *)(puVar4 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  local_c8 = 0x299;
  uStack_16c = 0;
  local_178 = &DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(&local_148,&local_178,DAT_141955260,0);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (iVar2 == 0) goto LAB_1405f4153;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uVar8 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419ffb58,0x80000000,&local_128,(ulonglong)puVar5 & 0xffffffffffffff00,
                uVar8);
  local_178 = local_128;
  uStack_170 = uStack_120;
  uStack_16c = uStack_11c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_178);
  local_c0 = local_98;
  local_b8 = &local_148;
  ppuVar9 = &local_c0;
  uVar3 = FUN_14022ffd0(param_1,param_2,&local_158,2,ppuVar9);
  uStack_16c = 0;
  local_178 = &DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(uVar3,&local_178,DAT_141955260,0);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (iVar2 != 0) goto LAB_1405f4153;
  local_c8 = 0x29b;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419ffb58,0x80000000,&local_128,uVar10,uVar8 & 0xffffffffffffff00);
  uVar1 = (undefined4)(uVar10 >> 0x20);
  local_178 = local_128;
  uStack_170 = uStack_120;
  uStack_16c = uStack_11c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_178);
  local_b0 = local_78;
  local_a8 = &local_148;
  ppuVar9 = &local_b0;
  uVar8 = CONCAT44(uVar1,DAT_1419fe568);
  FUN_140e634e0(param_1,param_2,&local_138,2,uVar8,ppuVar9);
  local_c8 = 0x29c;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a1f440,0x80000000,&local_168,uVar8,uVar10);
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_168,DAT_141a1edd0,0x80000000,&local_f8,uVar8,uVar10);
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(local_58,DAT_1419f5f58,0x80000000,&local_118,uVar8,uVar10);
  if (0 < param_4) {
    puVar6 = (undefined8 *)*param_5;
  }
  FUN_140e87440(puVar6,DAT_141a1f4e0,0x80000000,&local_108,uVar8 & 0xffffffffffffff00,
                uVar10 & 0xffffffffffffff00);
  local_178 = local_118;
  uStack_170 = uStack_110;
  uStack_16c = uStack_10c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_178);
  local_c0 = local_98;
  local_178 = local_108;
  uStack_170 = uStack_100;
  uStack_16c = uStack_fc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_178);
  local_b8 = &local_88;
  uVar3 = 0;
  switch(local_15c) {
  case 0:
  case 7:
  case 10:
  case 0xd:
switchD_1405f40f6_caseD_0:
    uVar1 = FUN_140e4a8b0(&local_168);
    uVar3 = FUN_140e87250(uVar1);
    break;
  case 6:
    uVar3 = local_168;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_168 >> 0x20);
    if ((iVar2 == 0x1000000) || (iVar2 == 0x4000001)) goto switchD_1405f40f6_caseD_0;
  }
  FUN_140e63610(uVar3,param_2,&local_158,2,&local_f8,&local_c0);
LAB_1405f4153:
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

