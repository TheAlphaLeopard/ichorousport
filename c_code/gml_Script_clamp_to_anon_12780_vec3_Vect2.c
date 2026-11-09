// gml_Script_clamp_to_anon_12780_vec3_Vect2 @ 0x140642dc0

undefined8 *
gml_Script_clamp_to_anon_12780_vec3_Vect2
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint *puVar4;
  undefined4 uVar7;
  longlong *plVar5;
  ulonglong uVar6;
  uint **ppuVar8;
  uint local_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  longlong *local_148;
  uint uStack_140;
  undefined4 uStack_13c;
  uint local_138 [3];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  uint local_118 [3];
  byte local_10c;
  uint local_108 [3];
  byte local_fc;
  uint local_f8 [3];
  undefined4 local_ec;
  uint local_e8 [3];
  undefined4 local_dc;
  uint local_d8 [3];
  undefined4 local_cc;
  uint *local_c8;
  undefined1 *local_c0;
  uint *local_b8;
  uint *local_b0;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_a0 = "gml_Script_lerp_to@anon@12037@vec3@Vect2";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 400;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_138,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8[0] = 0;
  local_f8[1] = 0;
  uStack_3c = 0xffffff;
  local_48 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_cc = 0xffffff;
  local_d8[0] = 0;
  local_d8[1] = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_dc = 0xffffff;
  local_e8[0] = 0;
  local_e8[1] = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x193;
  local_168 = DAT_141a00788 & 0xffffff;
  uStack_164 = (int)(DAT_141a00788 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_164 == 0xf) {
    uStack_164 = 0x4000004;
  }
  else {
    uStack_164 = uStack_164 | 0x1000000;
  }
  uStack_13c = 0xf;
  local_148 = (longlong *)(CONCAT44(uStack_164,DAT_141a00788) & 0xffffffff00ffffff);
  uStack_160 = uStack_140;
  uStack_15c = 0xf;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_168);
  local_b8 = local_118;
  puVar4 = (uint *)&DAT_1419df7b0;
  if (param_4 < 1) {
    puVar1 = (uint *)&DAT_1419df7b0;
LAB_140642f5d:
    local_168 = *puVar1;
    uStack_164 = puVar1[1];
    uStack_160 = puVar1[2];
    uStack_15c = puVar1[3];
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_168);
  }
  else {
    puVar1 = (uint *)*param_5;
    if (puVar1 != local_108) goto LAB_140642f5d;
  }
  local_b0 = local_108;
  ppuVar8 = &local_b8;
  uVar6 = CONCAT44(uVar7,DAT_1419fd6d8);
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_158,2,uVar6,ppuVar8);
  if (puVar1 != local_f8) {
    local_168 = *puVar1;
    uStack_164 = puVar1[1];
    uStack_160 = puVar1[2];
    uStack_15c = puVar1[3];
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_168);
  }
  local_98 = 0x194;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uStack_13c = 6;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_1419fe0e8,0x80000000,&local_48,uVar6 & 0xffffffffffffff00,
                (ulonglong)ppuVar8 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  plVar5 = param_1;
  FUN_140e87170(local_f8,DAT_1419fe0e8,0x80000000,&local_58,param_1,param_2);
  uVar7 = (undefined4)((ulonglong)plVar5 >> 0x20);
  local_168 = (uint)local_48;
  uStack_164 = local_48._4_4_;
  uStack_160 = uStack_40;
  uStack_15c = uStack_3c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_168);
  local_c8 = local_138;
  local_168 = (uint)local_58;
  uStack_164 = local_58._4_4_;
  uStack_160 = uStack_50;
  uStack_15c = uStack_4c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_168);
  local_c0 = local_128;
  if (param_4 < 2) {
    puVar1 = (uint *)&DAT_1419df7b0;
LAB_140643121:
    local_168 = *puVar1;
    uStack_164 = puVar1[1];
    uStack_160 = puVar1[2];
    uStack_15c = puVar1[3];
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_168);
  }
  else {
    puVar1 = (uint *)param_5[1];
    if (puVar1 != local_118) goto LAB_140643121;
  }
  local_b8 = local_118;
  ppuVar8 = &local_c8;
  uVar6 = CONCAT44(uVar7,DAT_141a00c58);
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_158,3,uVar6,ppuVar8);
  if (puVar1 != local_d8) {
    local_168 = *puVar1;
    uStack_164 = puVar1[1];
    uStack_160 = puVar1[2];
    uStack_15c = puVar1[3];
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_168);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,local_d8);
  local_98 = 0x195;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uStack_13c = 6;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_1419fe158,0x80000000,&local_68,uVar6 & 0xffffffffffffff00,
                (ulonglong)ppuVar8 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  plVar5 = param_1;
  FUN_140e87170(local_f8,DAT_1419fe158,0x80000000,&local_78,param_1,param_2);
  uVar7 = (undefined4)((ulonglong)plVar5 >> 0x20);
  local_168 = (uint)local_68;
  uStack_164 = local_68._4_4_;
  uStack_160 = uStack_60;
  uStack_15c = uStack_5c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_168);
  local_c8 = local_138;
  local_168 = (uint)local_78;
  uStack_164 = local_78._4_4_;
  uStack_160 = uStack_70;
  uStack_15c = uStack_6c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_168);
  local_c0 = local_128;
  if (param_4 < 2) {
    puVar1 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar1 = (uint *)param_5[1];
    if (puVar1 == local_118) goto LAB_14064332a;
  }
  local_168 = *puVar1;
  uStack_164 = puVar1[1];
  uStack_160 = puVar1[2];
  uStack_15c = puVar1[3];
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_168);
LAB_14064332a:
  local_b8 = local_118;
  ppuVar8 = &local_c8;
  uVar6 = CONCAT44(uVar7,DAT_141a00c58);
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_158,3,uVar6,ppuVar8);
  if (puVar1 != local_e8) {
    local_168 = *puVar1;
    uStack_164 = puVar1[1];
    uStack_160 = puVar1[2];
    uStack_15c = puVar1[3];
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_168);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,local_e8);
  local_98 = 0x196;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  puVar1 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05ca8);
  puVar2 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05ca8);
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(local_f8,DAT_141a05ca8,0x80000000,&local_88,uVar6,
                (ulonglong)ppuVar8 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar6 >> 0x20);
  if (puVar1 != local_138) {
    local_168 = *puVar1;
    uStack_164 = puVar1[1];
    uStack_160 = puVar1[2];
    uStack_15c = puVar1[3];
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_168);
  }
  local_c8 = local_138;
  local_168 = (uint)local_88;
  uStack_164 = local_88._4_4_;
  uStack_160 = uStack_80;
  uStack_15c = uStack_7c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_168);
  local_c0 = local_128;
  if ((param_4 < 2) || (puVar4 = (uint *)param_5[1], puVar4 != local_118)) {
    local_168 = *puVar4;
    uStack_164 = puVar4[1];
    uStack_160 = puVar4[2];
    uStack_15c = puVar4[3];
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_168);
  }
  local_b8 = local_118;
  FUN_140e609c0(param_1);
  puVar4 = (uint *)FUN_140e634e0(param_1,param_2,&local_158,3,CONCAT44(uVar7,DAT_141a00c58),
                                 &local_c8);
  if (puVar4 != puVar2) {
    local_168 = *puVar4;
    uStack_164 = puVar4[1];
    uStack_160 = puVar4[2];
    uStack_15c = puVar4[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_168);
  }
  FUN_140e60910(1);
  local_98 = 0x197;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a008d8);
  FUN_140e63610(param_1,param_2,&local_158,0,uVar3,0);
  local_98 = 0x198;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar3 = FUN_140e5c910();
  FUN_140e42c10(uVar3,param_1);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  _eh_vector_destructor_iterator_(local_138,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

