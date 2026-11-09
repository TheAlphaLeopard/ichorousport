// gml_Script_vec_round_anon_13595_vec3_Vect2 @ 0x140644f40

uint * gml_Script_vec_round_anon_13595_vec3_Vect2
                 (longlong *param_1,undefined8 param_2,uint *param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined4 uVar6;
  undefined8 uVar5;
  ulonglong in_stack_fffffffffffffea0;
  longlong *local_158;
  uint uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  longlong *local_138;
  uint uStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  uint local_98 [3];
  byte local_8c;
  uint local_88 [3];
  byte local_7c;
  uint local_78 [3];
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  uint *local_30;
  uint *local_28;
  uint *local_20;
  
  local_60 = "gml_Script_vec_ceil@anon@13326@vec3@Vect2";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x1b7;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_d8,0x10,7,FUN_1400424d0,FUN_140041b30);
  uStack_11c = 0xffffff;
  local_128 = (longlong *)0x0;
  uStack_12c = 0xffffff;
  local_138 = (longlong *)0x0;
  local_dc = 0;
  local_e8 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_fc = 0;
  local_108 = 0;
  local_10c = 0;
  local_118 = 0;
  param_3[3] = 5;
  param_3[0] = 0;
  param_3[1] = 0;
  local_58 = 0x1b9;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05ca8);
  uStack_14c = 6;
  in_stack_fffffffffffffea0 = in_stack_fffffffffffffea0 & 0xffffffffffffff00;
  uVar4 = (ulonglong)pcVar3 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_128,uVar4,in_stack_fffffffffffffea0);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = local_128;
  uStack_150 = uStack_120;
  uStack_14c = uStack_11c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_158);
  local_50 = local_d8;
  uStack_14c = 6;
  uVar4 = uVar4 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe158,0x80000000,&local_138,uVar4,
                in_stack_fffffffffffffea0 & 0xffffffffffffff00);
  uVar6 = (undefined4)(uVar4 >> 0x20);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = local_138;
  uStack_150 = uStack_130;
  uStack_14c = uStack_12c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_158);
  local_48 = local_c8;
  if (puVar1 != &local_b8) {
    local_158 = (longlong *)*puVar1;
    uStack_150 = *(uint *)(puVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_158);
  }
  local_40 = &local_b8;
  local_148 = DAT_141a00788 & 0xffffff;
  uStack_144 = (int)(DAT_141a00788 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_144 == 0xf) {
    uStack_144 = 0x4000004;
  }
  else {
    uStack_144 = uStack_144 | 0x1000000;
  }
  uStack_14c = 0xf;
  local_158 = (longlong *)(CONCAT44(uStack_144,DAT_141a00788) & 0xffffffff00ffffff);
  uStack_140 = uStack_150;
  uStack_13c = 0xf;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_148);
  local_38 = local_a8;
  uVar5 = CONCAT44(uVar6,DAT_141a08838);
  puVar2 = (uint *)FUN_140e634e0(param_1,param_2,&local_f8,1,uVar5,&local_50);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar2 != local_98) {
    local_148 = *puVar2;
    uStack_144 = puVar2[1];
    uStack_140 = puVar2[2];
    uStack_13c = puVar2[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_148);
  }
  local_30 = local_98;
  uVar5 = CONCAT44(uVar6,DAT_141a08838);
  puVar2 = (uint *)FUN_140e634e0(param_1,param_2,&local_108,1,uVar5,&local_48);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar2 != local_88) {
    local_148 = *puVar2;
    uStack_144 = puVar2[1];
    uStack_140 = puVar2[2];
    uStack_13c = puVar2[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_148);
  }
  uVar5 = CONCAT44(uVar6,DAT_141a08838);
  local_28 = local_88;
  puVar2 = (uint *)FUN_140e634e0(param_1,param_2,&local_118,1,uVar5,&local_40);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar2 != local_78) {
    local_148 = *puVar2;
    uStack_144 = puVar2[1];
    uStack_140 = puVar2[2];
    uStack_13c = puVar2[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_148);
  }
  local_20 = local_78;
  puVar2 = (uint *)FUN_140e634e0(param_1,param_2,&local_e8,4,CONCAT44(uVar6,DAT_1419fd6d8),&local_38
                                );
  if (puVar2 != param_3) {
    local_148 = *puVar2;
    uStack_144 = puVar2[1];
    uStack_140 = puVar2[2];
    uStack_13c = puVar2[3];
    if ((1 << ((byte)param_3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_148);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

