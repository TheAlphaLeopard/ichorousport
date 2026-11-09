// gml_Script_lerp_to_anon_12037_vec3_Vect2 @ 0x140642020

uint * gml_Script_lerp_to_anon_12037_vec3_Vect2
                 (longlong *param_1,undefined8 param_2,uint *param_3,int param_4,undefined8 *param_5
                 )

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 **ppuVar6;
  ulonglong uVar7;
  uint **ppuVar8;
  ulonglong uVar9;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  longlong *local_118;
  uint uStack_110;
  undefined4 uStack_10c;
  uint local_108 [3];
  undefined4 local_fc;
  uint local_f8 [3];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  uint local_d8 [3];
  byte local_cc;
  uint local_c8 [3];
  byte local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint *local_48;
  undefined1 *local_40;
  uint *local_38;
  uint *local_30;
  
  local_b0 = "gml_Script_distance_to@anon@11478@vec3@Vect2";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x180;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(local_f8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_12c = 0xffffff;
  local_138 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_fc = 0xffffff;
  local_108[0] = 0;
  local_108[1] = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_13c = 0;
  local_148 = 0;
  param_3[3] = 5;
  param_3[0] = 0;
  param_3[1] = 0;
  local_a8 = 0x183;
  local_128 = DAT_141a00788 & 0xffffff;
  uStack_124 = (int)(DAT_141a00788 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_124 == 0xf) {
    uStack_124 = 0x4000004;
  }
  else {
    uStack_124 = uStack_124 | 0x1000000;
  }
  uStack_10c = 0xf;
  local_118 = (longlong *)(CONCAT44(uStack_124,DAT_141a00788) & 0xffffffff00ffffff);
  uStack_120 = uStack_110;
  uStack_11c = 0xf;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_128);
  local_40 = local_e8;
  if (param_4 < 1) {
    puVar3 = (uint *)&DAT_1419df7b0;
LAB_1406421af:
    local_128 = *puVar3;
    uStack_124 = puVar3[1];
    uStack_120 = puVar3[2];
    uStack_11c = puVar3[3];
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_128);
  }
  else {
    puVar3 = (uint *)*param_5;
    if (puVar3 != local_d8) goto LAB_1406421af;
  }
  local_38 = local_d8;
  ppuVar6 = &local_40;
  uVar9 = CONCAT44(uVar2,DAT_1419fd6d8);
  puVar3 = (uint *)FUN_140e634e0(param_1,param_2,&local_148,2,uVar9,ppuVar6);
  if (puVar3 != (uint *)&local_138) {
    local_128 = *puVar3;
    uStack_124 = puVar3[1];
    uStack_120 = puVar3[2];
    uStack_11c = puVar3[3];
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_128);
  }
  local_a8 = 0x184;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar3 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05ca8);
  uStack_10c = 6;
  uVar7 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_58,uVar9,uVar7);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  uStack_10c = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe158,0x80000000,&local_68,uVar9,uVar7 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_128 = DAT_141a00788 & 0xffffff;
  uStack_124 = (int)(DAT_141a00788 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_124 == 0xf) {
    uStack_124 = 0x4000004;
  }
  else {
    uStack_124 = uStack_124 | 0x1000000;
  }
  uStack_10c = 0xf;
  local_118 = (longlong *)(CONCAT44(uStack_124,DAT_141a00788) & 0xffffffff00ffffff);
  uStack_120 = uStack_110;
  uStack_11c = 0xf;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_128);
  local_48 = local_f8;
  local_128 = (uint)local_58;
  uStack_124 = local_58._4_4_;
  uStack_120 = uStack_50;
  uStack_11c = uStack_4c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_128);
  local_40 = local_e8;
  local_128 = (uint)local_68;
  uStack_124 = local_68._4_4_;
  uStack_120 = uStack_60;
  uStack_11c = uStack_5c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_128);
  local_38 = local_d8;
  if (puVar3 != local_c8) {
    local_128 = *puVar3;
    uStack_124 = puVar3[1];
    uStack_120 = puVar3[2];
    uStack_11c = puVar3[3];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_128);
  }
  local_30 = local_c8;
  ppuVar8 = &local_48;
  uVar9 = CONCAT44(uVar2,DAT_1419fd6d8);
  puVar3 = (uint *)FUN_140e634e0(param_1,param_2,&local_148,4,uVar9,ppuVar8);
  if (puVar3 != local_108) {
    local_128 = *puVar3;
    uStack_124 = puVar3[1];
    uStack_120 = puVar3[2];
    uStack_11c = puVar3[3];
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_128);
  }
  local_a8 = 0x186;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  FUN_140e87440(&local_138,DAT_141a00938,0x80000000,&local_80,uVar9 & 0xffffffffffffff00,
                (ulonglong)ppuVar8 & 0xffffffffffffff00);
  local_48 = local_108;
  switch(local_12c) {
  default:
switchD_140642523_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_138;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_138 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140642523_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_138);
    uVar4 = FUN_140e87250(uVar2);
  }
  ppuVar8 = &local_48;
  puVar5 = &local_80;
  FUN_140e63610(uVar4,param_2,&local_148,1,puVar5,ppuVar8);
  local_a8 = 0x187;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  FUN_140e87440(&local_138,DAT_141a008d8,0x80000000,&local_90,(ulonglong)puVar5 & 0xffffffffffffff00
                ,(ulonglong)ppuVar8 & 0xffffffffffffff00);
  switch(local_12c) {
  default:
switchD_1406425e7_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_138;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_138 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_1406425e7_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_138);
    uVar4 = FUN_140e87250(uVar2);
  }
  uVar9 = 0;
  puVar5 = &local_90;
  FUN_140e63610(uVar4,param_2,&local_148,0,puVar5,0);
  local_a8 = 0x188;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  FUN_140e87440(&local_138,DAT_1419f6348,0x80000000,&local_a0,(ulonglong)puVar5 & 0xffffffffffffff00
                ,uVar9 & 0xffffffffffffff00);
  switch(local_12c) {
  default:
switchD_1406426a7_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_138;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_138 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_1406426a7_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_138);
    uVar4 = FUN_140e87250(uVar2);
  }
  puVar3 = (uint *)FUN_140e63610(uVar4,param_2,&local_148,0,&local_a0,0);
  if (puVar3 != param_3) {
    local_128 = *puVar3;
    uStack_124 = puVar3[1];
    uStack_120 = puVar3[2];
    uStack_11c = puVar3[3];
    if ((1 << ((byte)param_3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_128);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

