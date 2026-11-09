// gml_Script_dot_normalized_anon_11224_vec3_Vect2 @ 0x140640a50

undefined8 *
gml_Script_dot_normalized_anon_11224_vec3_Vect2
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar7;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 **ppuVar8;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  ulonglong local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  ulonglong local_128;
  undefined4 local_120;
  undefined4 local_11c;
  ulonglong local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  ulonglong local_f8;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  ulonglong local_88;
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  ulonglong *local_40;
  undefined1 *local_38;
  
  local_60 = "gml_Script_cross@anon@10666@vec3@Vect2";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x16a;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_a8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x16d;
  uVar3 = (int)(DAT_141a00788 | 0x5000000) >> 0x18 & 0xff;
  if (uVar3 == 0xf) {
    uVar3 = 0x4000004;
  }
  else {
    uVar3 = uVar3 | 0x1000000;
  }
  uStack_14c = 0xf;
  local_158 = (longlong *)(CONCAT44(uVar3,DAT_141a00788) & 0xffffffff00ffffff);
  local_138 = CONCAT44(uVar3,DAT_141a00788) & 0xffffffff00ffffff;
  uStack_130 = uStack_150;
  uStack_12c = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_138);
  local_48 = local_98;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (ulonglong *)*param_5;
    if (puVar1 == &local_88) goto LAB_140640c06;
  }
  local_158 = (longlong *)*puVar1;
  uStack_150 = (undefined4)puVar1[1];
  uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_158);
LAB_140640c06:
  ppuVar8 = &local_48;
  uVar4 = CONCAT44(uVar7,DAT_1419fd6d8);
  local_40 = &local_88;
  puVar1 = (ulonglong *)FUN_140e634e0(param_1,param_2,&local_108,2,uVar4,ppuVar8);
  if (puVar1 != &local_f8) {
    local_158 = (longlong *)*puVar1;
    uStack_150 = (undefined4)puVar1[1];
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_158);
  }
  local_58 = 0x16e;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  puVar1 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05ca8);
  uStack_14c = 6;
  uVar6 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
  uVar4 = uVar4 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe158,0x80000000,&local_118,uVar4,uVar6);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140e87440(&local_f8,DAT_141a05ca8,0x80000000,&local_b8,uVar4 & 0xffffffffffffff00,
                uVar6 & 0xffffffffffffff00);
  FUN_140e87170(&local_f8,DAT_1419fe158,0x80000000,&local_c8,param_1,param_2);
  plVar5 = param_1;
  uVar4 = param_2;
  FUN_140e87170(&local_f8,DAT_1419fe0e8,0x80000000,&local_d8,param_1,param_2);
  uStack_14c = 6;
  uVar6 = (ulonglong)plVar5 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_128,uVar6,uVar4 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar6 >> 0x20);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uVar3 = (int)(DAT_141a00788 | 0x5000000) >> 0x18 & 0xff;
  if (uVar3 == 0xf) {
    uVar3 = 0x4000004;
  }
  else {
    uVar3 = uVar3 | 0x1000000;
  }
  uStack_14c = 0xf;
  local_158 = (longlong *)(CONCAT44(uVar3,DAT_141a00788) & 0xffffffff00ffffff);
  local_138 = CONCAT44(uVar3,DAT_141a00788) & 0xffffffff00ffffff;
  uStack_130 = uStack_150;
  uStack_12c = 0xf;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_138);
  local_50 = local_a8;
  uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_150 = (undefined4)puVar1[1];
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
    local_158 = (longlong *)*puVar1;
  }
  else {
    FUN_1400419b0(&local_158,puVar1);
  }
  FUN_140042560(&local_158,&local_c8);
  local_13c = local_10c;
  local_140 = local_110;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
    local_148 = local_118;
  }
  else {
    FUN_1400419b0(&local_148,&local_118);
  }
  FUN_140042560(&local_148,&local_b8);
  uStack_12c = local_13c;
  uStack_130 = local_140;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
    local_138 = local_148;
  }
  else {
    FUN_1400419b0(&local_138,&local_148);
  }
  FUN_1400462a0(&local_138,&local_158);
  local_e8 = (undefined4)local_138;
  uStack_e4 = local_138._4_4_;
  uStack_e0 = uStack_130;
  uStack_dc = uStack_12c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_e8);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_48 = local_98;
  uStack_12c = local_11c;
  uStack_130 = local_120;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
    local_138 = local_128;
  }
  else {
    FUN_1400419b0(&local_138,&local_128);
  }
  FUN_140042560(&local_138,&local_b8);
  local_13c = *(undefined4 *)((longlong)puVar1 + 0xc);
  local_140 = (undefined4)puVar1[1];
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
    local_148 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_148,puVar1);
  }
  FUN_140042560(&local_148,&local_d8);
  uStack_14c = local_13c;
  uStack_150 = local_140;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
    local_158 = (longlong *)local_148;
  }
  else {
    FUN_1400419b0(&local_158,&local_148);
  }
  FUN_1400462a0(&local_158,&local_138);
  local_e8 = (undefined4)local_158;
  uStack_e4 = local_158._4_4_;
  uStack_e0 = uStack_150;
  uStack_dc = uStack_14c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_e8);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  uStack_12c = local_10c;
  uStack_130 = local_110;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
    local_138 = local_118;
    local_40 = &local_88;
  }
  else {
    local_40 = &local_88;
    FUN_1400419b0(&local_138,&local_118);
  }
  FUN_140042560(&local_138,&local_d8);
  local_13c = local_11c;
  local_140 = local_120;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
    local_148 = local_128;
  }
  else {
    FUN_1400419b0(&local_148,&local_128);
  }
  FUN_140042560(&local_148,&local_c8);
  uStack_14c = local_13c;
  uStack_150 = local_140;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
    local_158 = (longlong *)local_148;
  }
  else {
    FUN_1400419b0(&local_158,&local_148);
  }
  FUN_1400462a0(&local_158,&local_138);
  local_e8 = (undefined4)local_158;
  uStack_e4 = local_158._4_4_;
  uStack_e0 = uStack_150;
  uStack_dc = uStack_14c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_e8);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_38 = local_78;
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_108,4,CONCAT44(uVar7,DAT_1419fd6d8),&local_50);
  if (puVar2 != param_3) {
    local_e8 = *(undefined4 *)puVar2;
    uStack_e4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_e0 = *(undefined4 *)(puVar2 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_e8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

