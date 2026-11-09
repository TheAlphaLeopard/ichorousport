// gml_Script_lerp_to_anon_4331_vec2_Vect2 @ 0x1406393a0

uint * gml_Script_lerp_to_anon_4331_vec2_Vect2
                 (ulonglong param_1,undefined8 param_2,uint *param_3,int param_4,undefined8 *param_5
                 )

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined1 **ppuVar7;
  ulonglong uVar8;
  uint **ppuVar9;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  ulonglong local_f8;
  uint uStack_f0;
  undefined4 uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint local_d8 [3];
  undefined4 local_cc;
  uint local_c8 [3];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  uint local_a8 [3];
  byte local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint *local_58;
  undefined1 *local_50;
  uint *local_48;
  undefined8 local_40;
  char *local_38;
  undefined4 local_30;
  
  local_38 = "gml_Script_distance_to@anon@3819@vec2@Vect2";
  local_40 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_40;
  local_30 = 0x86;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(local_c8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_cc = 0xffffff;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_10c = 0;
  local_118 = 0;
  param_3[3] = 5;
  param_3[0] = 0;
  param_3[1] = 0;
  local_30 = 0x89;
  local_e8 = DAT_141a00978 & 0xffffff;
  uStack_e4 = (int)(DAT_141a00978 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_e4 == 0xf) {
    uStack_e4 = 0x4000004;
  }
  else {
    uStack_e4 = uStack_e4 | 0x1000000;
  }
  uStack_ec = 0xf;
  local_f8 = CONCAT44(uStack_e4,DAT_141a00978) & 0xffffffff00ffffff;
  uStack_e0 = uStack_f0;
  uStack_dc = 0xf;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_e8);
  local_50 = local_b8;
  if (param_4 < 1) {
    puVar3 = (uint *)&DAT_1419df7b0;
LAB_140639520:
    local_e8 = *puVar3;
    uStack_e4 = puVar3[1];
    uStack_e0 = puVar3[2];
    uStack_dc = puVar3[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_e8);
  }
  else {
    puVar3 = (uint *)*param_5;
    if (puVar3 != local_a8) goto LAB_140639520;
  }
  local_48 = local_a8;
  ppuVar7 = &local_50;
  uVar5 = CONCAT44(uVar2,DAT_1419fd6d8);
  puVar3 = (uint *)FUN_140e634e0(param_1,param_2,&local_118,2,uVar5,ppuVar7);
  if (puVar3 != (uint *)&local_108) {
    local_e8 = *puVar3;
    uStack_e4 = puVar3[1];
    uStack_e0 = puVar3[2];
    uStack_dc = puVar3[3];
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_e8);
  }
  local_30 = 0x8a;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uStack_ec = 6;
  uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_1419fe0e8,0x80000000,&local_68,uVar5,uVar8);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  uStack_ec = 6;
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_1419fe158,0x80000000,&local_78,uVar5,uVar8 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar5 >> 0x20);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_e8 = DAT_141a00978 & 0xffffff;
  uStack_e4 = (int)(DAT_141a00978 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_e4 == 0xf) {
    uStack_e4 = 0x4000004;
  }
  else {
    uStack_e4 = uStack_e4 | 0x1000000;
  }
  uStack_ec = 0xf;
  local_f8 = CONCAT44(uStack_e4,DAT_141a00978) & 0xffffffff00ffffff;
  uStack_e0 = uStack_f0;
  uStack_dc = 0xf;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_e8);
  local_58 = local_c8;
  local_e8 = (uint)local_68;
  uStack_e4 = local_68._4_4_;
  uStack_e0 = uStack_60;
  uStack_dc = uStack_5c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_e8);
  local_50 = local_b8;
  local_e8 = (uint)local_78;
  uStack_e4 = local_78._4_4_;
  uStack_e0 = uStack_70;
  uStack_dc = uStack_6c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_e8);
  local_48 = local_a8;
  ppuVar9 = &local_58;
  uVar5 = CONCAT44(uVar2,DAT_1419fd6d8);
  puVar3 = (uint *)FUN_140e634e0(param_1,param_2,&local_118,3,uVar5,ppuVar9);
  if (puVar3 != local_d8) {
    local_e8 = *puVar3;
    uStack_e4 = puVar3[1];
    uStack_e0 = puVar3[2];
    uStack_dc = puVar3[3];
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_e8);
  }
  local_30 = 0x8c;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  FUN_140e87440(&local_108,DAT_141a00938,0x80000000,&local_88,uVar5 & 0xffffffffffffff00,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  local_58 = local_d8;
  switch(local_fc) {
  default:
switchD_140639844_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_108;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_108 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140639844_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_108);
    uVar4 = FUN_140e87250(uVar2);
  }
  ppuVar9 = &local_58;
  puVar6 = &local_88;
  FUN_140e63610(uVar4,param_2,&local_118,1,puVar6,ppuVar9);
  local_30 = 0x8d;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  FUN_140e87440(&local_108,DAT_1419f6348,0x80000000,&local_98,(ulonglong)puVar6 & 0xffffffffffffff00
                ,(ulonglong)ppuVar9 & 0xffffffffffffff00);
  switch(local_fc) {
  default:
switchD_140639908_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_108;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_108 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140639908_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_108);
    uVar4 = FUN_140e87250(uVar2);
  }
  puVar3 = (uint *)FUN_140e63610(uVar4,param_2,&local_118,0,&local_98,0);
  if (puVar3 != param_3) {
    local_e8 = *puVar3;
    uStack_e4 = puVar3[1];
    uStack_e0 = puVar3[2];
    uStack_dc = puVar3[3];
    if ((1 << ((byte)param_3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_e8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_40;
  return param_3;
}

