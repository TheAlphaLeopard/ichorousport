// gml_Script_reflect_anon_12388_vec3_Vect2 @ 0x140642900

uint * gml_Script_reflect_anon_12388_vec3_Vect2
                 (longlong *param_1,undefined8 param_2,uint *param_3,int param_4,undefined8 *param_5
                 )

{
  uint *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint **ppuVar6;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  uint local_d8 [3];
  undefined4 local_cc;
  undefined8 local_c8;
  uint uStack_c0;
  uint uStack_bc;
  uint *local_b8;
  uint *local_b0;
  uint *local_a8;
  uint *local_a0;
  undefined1 local_98 [16];
  uint local_88 [3];
  byte local_7c;
  uint local_78 [3];
  byte local_6c;
  uint local_68 [3];
  byte local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  ulonglong local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  
  local_50 = "gml_Script_angle_to@anon@11816@vec3@Vect2";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x18a;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_98,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8[0] = 0;
  local_d8[1] = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_fc = 0;
  local_108 = 0;
  local_dc = 0;
  local_e8 = 0;
  local_ec = 0;
  local_f8 = 0;
  param_3[3] = 5;
  param_3[0] = 0;
  param_3[1] = 0;
  local_48 = 0x18d;
  local_118 = DAT_141a00788 & 0xffffff;
  uStack_114 = (int)(DAT_141a00788 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_114 == 0xf) {
    uStack_114 = 0x4000004;
  }
  else {
    uStack_114 = uStack_114 | 0x1000000;
  }
  uStack_2c = 0xf;
  local_38 = CONCAT44(uStack_114,DAT_141a00788) & 0xffffffff00ffffff;
  uStack_110 = uStack_30;
  uStack_10c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_118);
  local_b0 = local_88;
  if (param_4 < 1) {
    puVar1 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar1 = (uint *)*param_5;
    if (puVar1 == local_78) goto LAB_140642a93;
  }
  local_118 = *puVar1;
  uStack_114 = puVar1[1];
  uStack_110 = puVar1[2];
  uStack_10c = puVar1[3];
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_118);
LAB_140642a93:
  local_a8 = local_78;
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_108,2,CONCAT44(uVar5,DAT_1419fd6d8),
                                 &local_b0);
  if (puVar1 != local_d8) {
    local_118 = *puVar1;
    uStack_114 = puVar1[1];
    uStack_110 = puVar1[2];
    uStack_10c = puVar1[3];
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_118);
  }
  local_48 = 0x18e;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a007a8);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a00a48);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  local_b8 = local_d8;
  ppuVar6 = &local_b8;
  uVar4 = FUN_140e63610(param_1,param_2,&local_e8,1,uVar2,ppuVar6);
  FUN_140e87440(uVar4,DAT_1419f6348,0x80000000,&local_c8,uVar2 & 0xffffffffffffff00,
                (ulonglong)ppuVar6 & 0xffffffffffffff00);
  local_b0 = local_d8;
  local_118 = (uint)local_c8;
  uStack_114 = local_c8._4_4_;
  uStack_110 = uStack_c0;
  uStack_10c = uStack_bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_118);
  local_a8 = local_78;
  puVar1 = (uint *)FUN_140e63610(param_1,param_2,&local_f8,1,uVar3,&local_b0);
  uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar1 != local_68) {
    local_118 = *puVar1;
    uStack_114 = puVar1[1];
    uStack_110 = puVar1[2];
    uStack_10c = puVar1[3];
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_118);
  }
  local_a0 = local_68;
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_108,2,CONCAT44(uVar5,DAT_141a007b8),
                                 &local_a8);
  if (puVar1 != param_3) {
    local_118 = *puVar1;
    uStack_114 = puVar1[1];
    uStack_110 = puVar1[2];
    uStack_10c = puVar1[3];
    if ((1 << ((byte)param_3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_118);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

