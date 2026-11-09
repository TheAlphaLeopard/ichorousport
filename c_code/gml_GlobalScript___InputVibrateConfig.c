// gml_GlobalScript___InputVibrateConfig @ 0x1400e9660

longlong *
gml_GlobalScript___InputVibrateConfig(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *local_res18 [2];
  undefined4 uVar7;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined1 local_80 [12];
  byte local_74;
  undefined8 local_70;
  undefined8 *local_68;
  
  local_90 = "gml_Script___Update@anon@433@__InputVibrateClassPulse@__InputVibrateClassPulse";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x11;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_80,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_bc = 0;
  uVar6 = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x13;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a02708);
  FUN_140e85f80(param_1,DAT_141a02be8,0x80000000,&local_b8);
  uStack_10c = local_ac;
  uStack_110 = local_b0;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
    local_118 = local_b8;
  }
  else {
    FUN_1400419b0(&local_118,&local_b8);
  }
  uStack_fc = 0;
  local_108 = 0x408f400000000000;
  FUN_140046500(&local_118,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_1400460e0(uVar2,&local_118);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_88 = 0x15;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02708);
  local_68 = puVar3;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a041d8);
  uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_110 = *(undefined4 *)(puVar3 + 1);
  local_70 = uVar2;
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
    local_118 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_118,puVar3);
  }
  FUN_140046500(&local_118,uVar2);
  local_f8 = (undefined4)local_118;
  uStack_f4 = local_118._4_4_;
  uStack_f0 = uStack_110;
  uStack_ec = uStack_10c;
  FUN_140041b80(&local_a8,&local_f8);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_88 = 0x16;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a043a8);
  local_dc = 0;
  local_e8 = 0x4076800000000000;
  FUN_140042560(&local_e8,uVar2);
  uStack_fc = local_dc;
  uStack_100 = local_e0;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
    local_108 = local_e8;
  }
  else {
    FUN_1400419b0(&local_108,&local_e8);
  }
  uStack_ec = 7;
  local_f8 = 0xb4;
  FUN_1400462a0(&local_108,&local_f8);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  uStack_10c = local_9c;
  uStack_110 = local_a0;
  bVar4 = (byte)local_9c & 0x1f;
  if ((1 << bVar4 & 0x46U) == 0) {
    local_118 = local_a8;
  }
  else {
    FUN_1400419b0(&local_118,&local_a8);
  }
  FUN_140042560(&local_118,&local_108);
  local_f8 = (undefined4)local_118;
  uStack_f4 = local_118._4_4_;
  uStack_f0 = uStack_110;
  uStack_ec = uStack_10c;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_f8);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_res18[0] = local_80;
  uVar2 = FUN_140e634e0(param_1,param_2,&local_c8,1,CONCAT44(uVar7,DAT_141a00d78),local_res18);
  uStack_10c = 0;
  local_118 = 0x3fe0000000000000;
  FUN_140042560(&local_118,uVar2);
  uStack_fc = 0;
  local_108 = 0x3fe0000000000000;
  FUN_1400460e0(&local_108,&local_118);
  local_f8 = (undefined4)local_108;
  uStack_f4 = local_108._4_4_;
  uStack_f0 = uStack_100;
  uStack_ec = uStack_fc;
  FUN_140041b80(&local_d8,&local_f8);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_88 = 0x17;
  local_e8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04178);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a041a8);
  FUN_140e609c0(param_1);
  uVar2 = local_d8;
  uStack_10c = local_cc;
  uStack_110 = local_d0;
  uVar5 = 1 << ((byte)local_cc & 0x1f) & 0x46;
  if (uVar5 == 0) {
    local_118 = local_d8;
  }
  else {
    FUN_1400419b0(&local_118,&local_d8);
  }
  FUN_140042560(&local_118,local_e8);
  if (&local_118 != puVar3) {
    local_f8 = (undefined4)local_118;
    uStack_f4 = local_118._4_4_;
    uStack_f0 = uStack_110;
    uStack_ec = uStack_10c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_f8);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140e60910(1);
  local_88 = 0x18;
  local_e8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04138);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a041c8);
  FUN_140e609c0(param_1);
  uStack_10c = local_cc;
  uStack_110 = local_d0;
  if (uVar5 == 0) {
    local_118 = uVar2;
  }
  else {
    FUN_1400419b0(&local_118,&local_d8);
  }
  FUN_140042560(&local_118,local_e8);
  if (&local_118 != puVar3) {
    local_f8 = (undefined4)local_118;
    uStack_f4 = local_118._4_4_;
    uStack_f0 = uStack_110;
    uStack_ec = uStack_10c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_f8);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140e60910(1);
  local_88 = 0x1a;
  iVar1 = FUN_140e851f0(local_68,local_70,DAT_141955260,1);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (iVar1 != -2 && iVar1 < 0) {
    uVar6 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar6 << 0x20;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (uVar5 != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << bVar4 & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_80,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

