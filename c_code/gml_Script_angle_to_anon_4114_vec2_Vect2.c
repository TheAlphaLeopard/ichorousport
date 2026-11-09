// gml_Script_angle_to_anon_4114_vec2_Vect2 @ 0x140638e60

uint * gml_Script_angle_to_anon_4114_vec2_Vect2
                 (ulonglong param_1,undefined8 param_2,uint *param_3,int param_4,undefined8 *param_5
                 )

{
  uint *puVar1;
  undefined4 uVar3;
  ulonglong uVar2;
  undefined1 **ppuVar4;
  ulonglong uVar5;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  ulonglong local_118;
  uint uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  uint local_f8 [3];
  undefined4 local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  uint local_c8 [3];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  uint *local_40;
  undefined1 *local_38;
  
  local_60 = "gml_Script_dot_normalized@anon@3574@vec2@Vect2";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x80;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_e8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8[0] = 0;
  local_f8[1] = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_fc = 0;
  local_108 = 0;
  param_3[3] = 5;
  param_3[0] = 0;
  param_3[1] = 0;
  local_58 = 0x83;
  local_128 = DAT_141a00978 & 0xffffff;
  uStack_124 = (int)(DAT_141a00978 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_124 == 0xf) {
    uStack_124 = 0x4000004;
  }
  else {
    uStack_124 = uStack_124 | 0x1000000;
  }
  uStack_10c = 0xf;
  local_118 = CONCAT44(uStack_124,DAT_141a00978) & 0xffffffff00ffffff;
  uStack_120 = uStack_110;
  uStack_11c = 0xf;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_128);
  local_48 = local_d8;
  if (param_4 < 1) {
    puVar1 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar1 = (uint *)*param_5;
    if (puVar1 == local_c8) goto LAB_140639005;
  }
  local_128 = *puVar1;
  uStack_124 = puVar1[1];
  uStack_120 = puVar1[2];
  uStack_11c = puVar1[3];
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_128);
LAB_140639005:
  local_40 = local_c8;
  ppuVar4 = &local_48;
  uVar2 = CONCAT44(uVar3,DAT_1419fd6d8);
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_108,2,uVar2,ppuVar4);
  if (puVar1 != local_f8) {
    local_128 = *puVar1;
    uStack_124 = puVar1[1];
    uStack_120 = puVar1[2];
    uStack_11c = puVar1[3];
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_128);
  }
  local_58 = 0x84;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  uStack_10c = 6;
  uVar5 = (ulonglong)ppuVar4 & 0xffffffffffffff00;
  uVar2 = uVar2 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_78,uVar2,uVar5);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  uStack_10c = 6;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe158,0x80000000,&local_88,uVar2 & 0xffffffffffffff00,
                uVar5 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140e87170(local_f8,DAT_1419fe0e8,0x80000000,&local_98,param_1,param_2);
  uVar2 = param_1;
  FUN_140e87170(local_f8,DAT_1419fe158,0x80000000,&local_a8,param_1,param_2);
  uVar3 = (undefined4)(uVar2 >> 0x20);
  local_128 = (uint)local_78;
  uStack_124 = local_78._4_4_;
  uStack_120 = uStack_70;
  uStack_11c = uStack_6c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_128);
  local_50 = local_e8;
  local_128 = (uint)local_88;
  uStack_124 = local_88._4_4_;
  uStack_120 = uStack_80;
  uStack_11c = uStack_7c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_128);
  local_48 = local_d8;
  local_128 = (uint)local_98;
  uStack_124 = local_98._4_4_;
  uStack_120 = uStack_90;
  uStack_11c = uStack_8c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_128);
  local_40 = local_c8;
  local_128 = (uint)local_a8;
  uStack_124 = local_a8._4_4_;
  uStack_120 = uStack_a0;
  uStack_11c = uStack_9c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_128);
  local_38 = local_b8;
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_108,4,CONCAT44(uVar3,DAT_141a00748),
                                 &local_50);
  if (puVar1 != param_3) {
    local_128 = *puVar1;
    uStack_124 = puVar1[1];
    uStack_120 = puVar1[2];
    uStack_11c = puVar1[3];
    if ((1 << ((byte)param_3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_128);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

