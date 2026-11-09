// gml_Script_clamp_to_anon_4956_vec2_Vect2 @ 0x140639fc0

ulonglong *
gml_Script_clamp_to_anon_4956_vec2_Vect2
          (ulonglong param_1,undefined8 param_2,ulonglong *param_3,int param_4,undefined8 *param_5)

{
  uint *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined4 uVar5;
  ulonglong uVar4;
  uint **ppuVar6;
  undefined1 **ppuVar7;
  uint local_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  ulonglong local_128;
  uint uStack_120;
  undefined4 uStack_11c;
  uint local_118 [3];
  undefined4 local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  uint local_e8 [3];
  byte local_dc;
  uint local_d8 [3];
  byte local_cc;
  uint local_c8 [3];
  undefined4 local_bc;
  uint local_b8 [3];
  undefined4 local_ac;
  undefined8 local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  uint *local_40;
  uint *local_38;
  
  local_60 = "gml_Script_lerp_to@anon@4331@vec2@Vect2";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x95;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_108,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118[0] = 0;
  local_118[1] = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_ac = 0xffffff;
  local_b8[0] = 0;
  local_b8[1] = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_bc = 0xffffff;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x98;
  local_148 = DAT_141a00978 & 0xffffff;
  uStack_144 = (int)(DAT_141a00978 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_144 == 0xf) {
    uStack_144 = 0x4000004;
  }
  else {
    uStack_144 = uStack_144 | 0x1000000;
  }
  uStack_11c = 0xf;
  local_128 = CONCAT44(uStack_144,DAT_141a00978) & 0xffffffff00ffffff;
  uStack_140 = uStack_120;
  uStack_13c = 0xf;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
  local_40 = local_e8;
  puVar3 = (uint *)&DAT_1419df7b0;
  if (param_4 < 1) {
    puVar1 = (uint *)&DAT_1419df7b0;
LAB_14063a150:
    local_148 = *puVar1;
    uStack_144 = puVar1[1];
    uStack_140 = puVar1[2];
    uStack_13c = puVar1[3];
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_148);
  }
  else {
    puVar1 = (uint *)*param_5;
    if (puVar1 != local_d8) goto LAB_14063a150;
  }
  local_38 = local_d8;
  ppuVar6 = &local_40;
  uVar4 = CONCAT44(uVar5,DAT_1419fd6d8);
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_138,2,uVar4,ppuVar6);
  if (puVar1 != local_118) {
    local_148 = *puVar1;
    uStack_144 = puVar1[1];
    uStack_140 = puVar1[2];
    uStack_13c = puVar1[3];
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_148);
  }
  local_58 = 0x99;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uStack_11c = 6;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_78,uVar4 & 0xffffffffffffff00,
                (ulonglong)ppuVar6 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uVar4 = param_1;
  FUN_140e87170(local_118,DAT_1419fe0e8,0x80000000,&local_88,param_1,param_2);
  uVar5 = (undefined4)(uVar4 >> 0x20);
  local_148 = (uint)local_78;
  uStack_144 = local_78._4_4_;
  uStack_140 = uStack_70;
  uStack_13c = uStack_6c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_148);
  local_50 = local_108;
  local_148 = (uint)local_88;
  uStack_144 = local_88._4_4_;
  uStack_140 = uStack_80;
  uStack_13c = uStack_7c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_148);
  local_48 = local_f8;
  if (param_4 < 2) {
    puVar1 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar1 = (uint *)param_5[1];
    if (puVar1 == local_e8) goto LAB_14063a340;
  }
  local_148 = *puVar1;
  uStack_144 = puVar1[1];
  uStack_140 = puVar1[2];
  uStack_13c = puVar1[3];
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
LAB_14063a340:
  local_40 = local_e8;
  ppuVar7 = &local_50;
  uVar4 = CONCAT44(uVar5,DAT_141a00c58);
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_138,3,uVar4,ppuVar7);
  if (puVar1 != local_b8) {
    local_148 = *puVar1;
    uStack_144 = puVar1[1];
    uStack_140 = puVar1[2];
    uStack_13c = puVar1[3];
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_148);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,local_b8);
  local_58 = 0x9a;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uStack_11c = 6;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_98,uVar4 & 0xffffffffffffff00,
                (ulonglong)ppuVar7 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uVar4 = param_1;
  FUN_140e87170(local_118,DAT_1419fe158,0x80000000,&local_a8,param_1,param_2);
  uVar5 = (undefined4)(uVar4 >> 0x20);
  local_148 = (uint)local_98;
  uStack_144 = local_98._4_4_;
  uStack_140 = uStack_90;
  uStack_13c = uStack_8c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_148);
  local_50 = local_108;
  local_148 = (uint)local_a8;
  uStack_144 = local_a8._4_4_;
  uStack_140 = uStack_a0;
  uStack_13c = uStack_9c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_148);
  local_48 = local_f8;
  if ((param_4 < 2) || (puVar3 = (uint *)param_5[1], puVar3 != local_e8)) {
    local_148 = *puVar3;
    uStack_144 = puVar3[1];
    uStack_140 = puVar3[2];
    uStack_13c = puVar3[3];
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
  }
  local_40 = local_e8;
  puVar3 = (uint *)FUN_140e634e0(param_1,param_2,&local_138,3,CONCAT44(uVar5,DAT_141a00c58),
                                 &local_50);
  if (puVar3 != local_c8) {
    local_148 = *puVar3;
    uStack_144 = puVar3[1];
    uStack_140 = puVar3[2];
    uStack_13c = puVar3[3];
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_148);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,local_c8);
  local_58 = 0x9b;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar2 = FUN_140e5c910();
  FUN_140e42c10(uVar2,param_1);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  _eh_vector_destructor_iterator_(local_108,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

