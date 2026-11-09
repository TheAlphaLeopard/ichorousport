// gml_Script_dot_anon_11000_vec3_Vect2 @ 0x140640610

uint * gml_Script_dot_anon_11000_vec3_Vect2(longlong *param_1,undefined8 param_2,uint *param_3)

{
  undefined8 uVar1;
  uint *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong in_stack_fffffffffffffef0;
  undefined8 local_108;
  uint uStack_100;
  uint uStack_fc;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined1 local_b8 [12];
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
  undefined1 *local_50;
  undefined1 *local_48;
  
  local_70 = "gml_Script_inverse@anon@10512@vec3@Vect2";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x165;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_bc = 0;
  local_c8 = 0;
  param_3[3] = 5;
  param_3[0] = 0;
  param_3[1] = 0;
  local_68 = 0x168;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05ca8);
  uStack_fc = 6;
  in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
  uVar4 = (ulonglong)pcVar3 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe0e8,0x80000000,&local_d8,uVar4,in_stack_fffffffffffffef0);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_fc = 6;
  uVar4 = uVar4 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_e8,uVar4,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar4 >> 0x20);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_f8 = DAT_141a00788 & 0xffffff;
  uStack_f4 = (int)(DAT_141a00788 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_f4 == 0xf) {
    uStack_f4 = 0x4000004;
  }
  else {
    uStack_f4 = uStack_f4 | 0x1000000;
  }
  uStack_fc = 0xf;
  local_108 = (longlong *)(CONCAT44(uStack_f4,DAT_141a00788) & 0xffffffff00ffffff);
  uStack_f0 = uStack_100;
  uStack_ec = 0xf;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_f8);
  local_60 = local_b8;
  uStack_fc = 0;
  local_108 = (longlong *)0x3ff0000000000000;
  FUN_140046500(&local_108,&local_d8);
  local_f8 = (uint)local_108;
  uStack_f4 = local_108._4_4_;
  uStack_f0 = uStack_100;
  uStack_ec = uStack_fc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_f8);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_58 = local_a8;
  uStack_fc = 0;
  local_108 = (longlong *)0x3ff0000000000000;
  FUN_140046500(&local_108,&local_e8);
  local_f8 = (uint)local_108;
  uStack_f4 = local_108._4_4_;
  uStack_f0 = uStack_100;
  uStack_ec = uStack_fc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_f8);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_50 = local_98;
  uStack_fc = 0;
  local_108 = (longlong *)0x3ff0000000000000;
  FUN_140046500(&local_108,uVar1);
  local_f8 = (uint)local_108;
  uStack_f4 = local_108._4_4_;
  uStack_f0 = uStack_100;
  uStack_ec = uStack_fc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_f8);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_48 = local_88;
  puVar2 = (uint *)FUN_140e634e0(param_1,param_2,&local_c8,4,CONCAT44(uVar5,DAT_1419fd6d8),&local_60
                                );
  if (puVar2 != param_3) {
    local_f8 = *puVar2;
    uStack_f4 = puVar2[1];
    uStack_f0 = puVar2[2];
    uStack_ec = puVar2[3];
    if ((1 << ((byte)param_3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_f8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

