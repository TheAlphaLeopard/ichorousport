// gml_Script_angle_to_anon_11816_vec3_Vect2 @ 0x140641a10

uint * gml_Script_angle_to_anon_11816_vec3_Vect2
                 (longlong *param_1,ulonglong param_2,uint *param_3,int param_4,undefined8 *param_5)

{
  uint *puVar1;
  undefined4 uVar5;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 **ppuVar6;
  uint local_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  longlong *local_158;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  uint local_138 [3];
  undefined4 local_12c;
  undefined8 local_128;
  uint uStack_120;
  uint uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  uint local_b8 [3];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  uint *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_70 = "gml_Script_dot_normalized@anon@11224@vec3@Vect2";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x17a;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_d8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_12c = 0xffffff;
  local_138[0] = 0;
  local_138[1] = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_13c = 0;
  local_148 = 0;
  param_3[3] = 5;
  param_3[0] = 0;
  param_3[1] = 0;
  local_68 = 0x17d;
  local_168 = DAT_141a00788 & 0xffffff;
  uStack_164 = (int)(DAT_141a00788 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_164 == 0xf) {
    uStack_164 = 0x4000004;
  }
  else {
    uStack_164 = uStack_164 | 0x1000000;
  }
  uStack_14c = 0xf;
  local_158 = (longlong *)(CONCAT44(uStack_164,DAT_141a00788) & 0xffffffff00ffffff);
  uStack_160 = uStack_150;
  uStack_15c = 0xf;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_168);
  local_58 = local_c8;
  if (param_4 < 1) {
    puVar1 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar1 = (uint *)*param_5;
    if (puVar1 == local_b8) goto LAB_140641bc1;
  }
  local_168 = *puVar1;
  uStack_164 = puVar1[1];
  uStack_160 = puVar1[2];
  uStack_15c = puVar1[3];
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_168);
LAB_140641bc1:
  local_50 = local_b8;
  ppuVar6 = &local_58;
  uVar2 = CONCAT44(uVar5,DAT_1419fd6d8);
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_148,2,uVar2,ppuVar6);
  if (puVar1 != local_138) {
    local_168 = *puVar1;
    uStack_164 = puVar1[1];
    uStack_160 = puVar1[2];
    uStack_15c = puVar1[3];
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_168);
  }
  local_68 = 0x17e;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar1 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05ca8);
  uStack_14c = 6;
  uVar4 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
  uVar2 = uVar2 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_e8,uVar2,uVar4);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_14c = 6;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe158,0x80000000,&local_f8,uVar2 & 0xffffffffffffff00,
                uVar4 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140e87170(local_138,DAT_1419fe0e8,0x80000000,&local_108,param_1,param_2);
  plVar3 = param_1;
  uVar2 = param_2;
  FUN_140e87170(local_138,DAT_1419fe158,0x80000000,&local_118,param_1,param_2);
  uVar4 = (ulonglong)plVar3 & 0xffffffffffffff00;
  FUN_140e87440(local_138,DAT_141a05ca8,0x80000000,&local_128,uVar4,uVar2 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar4 >> 0x20);
  local_168 = (uint)local_e8;
  uStack_164 = local_e8._4_4_;
  uStack_160 = uStack_e0;
  uStack_15c = uStack_dc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_168);
  local_60 = local_d8;
  local_168 = (uint)local_f8;
  uStack_164 = local_f8._4_4_;
  uStack_160 = uStack_f0;
  uStack_15c = uStack_ec;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_168);
  local_58 = local_c8;
  if (puVar1 != local_b8) {
    local_168 = *puVar1;
    uStack_164 = puVar1[1];
    uStack_160 = puVar1[2];
    uStack_15c = puVar1[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_168);
  }
  local_50 = local_b8;
  local_168 = (uint)local_108;
  uStack_164 = local_108._4_4_;
  uStack_160 = uStack_100;
  uStack_15c = uStack_fc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_168);
  local_48 = local_a8;
  local_168 = (uint)local_118;
  uStack_164 = local_118._4_4_;
  uStack_160 = uStack_110;
  uStack_15c = uStack_10c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_168);
  local_168 = (uint)local_128;
  uStack_164 = local_128._4_4_;
  uStack_160 = uStack_120;
  uStack_15c = uStack_11c;
  local_40 = local_98;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_168);
  local_38 = local_88;
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_148,6,CONCAT44(uVar5,DAT_141a008b8),
                                 &local_60);
  if (puVar1 != param_3) {
    local_168 = *puVar1;
    uStack_164 = puVar1[1];
    uStack_160 = puVar1[2];
    uStack_15c = puVar1[3];
    if ((1 << ((byte)param_3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_168);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

