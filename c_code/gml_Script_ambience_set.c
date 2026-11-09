// gml_Script_ambience_set @ 0x14021a7e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_ambience_set(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  ulonglong local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  ulonglong local_118;
  byte local_10c;
  double local_108;
  undefined4 local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  ulonglong *local_98;
  double *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_34;
  
  local_50 = "gml_Script_DefineAltWeapons";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0xec;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_118,0x10,8,FUN_1400424d0,FUN_140041b30);
  puVar2 = (ulonglong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0aac8);
  local_34 = 0xffffff;
  local_40 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0xee;
  uVar4 = (int)(DAT_141a0aa78 | 0x5000000) >> 0x18 & 0xff;
  if (uVar4 == 0xf) {
    uVar5 = 0x4000004;
  }
  else {
    uVar5 = (ulonglong)(uVar4 | 0x1000000);
  }
  uStack_12c = 0xf;
  local_148 = uVar5 << 0x20 | (ulonglong)(DAT_141a0aa78 & 0xffffff);
  uStack_140 = CONCAT44(0xf,uStack_130);
  local_138 = local_148;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_148);
  local_98 = &local_118;
  local_148 = _DAT_141dcdcb8;
  uStack_140 = uRam0000000141dcdcc0;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_148);
  local_90 = &local_108;
  uStack_12c = 0xf;
  local_138 = 0x1000001000002bb;
  uStack_140 = CONCAT44(0xf,uStack_130);
  local_148 = 0x1000001000002bb;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_148);
  local_88 = local_f8;
  uStack_12c = 0xf;
  local_138 = 0x100000000000109;
  uStack_140 = CONCAT44(0xf,uStack_130);
  local_148 = 0x100000000000109;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
  local_80 = local_e8;
  local_148 = _DAT_1419e36b0;
  uStack_140 = uRam00000001419e36b8;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_148);
  local_78 = local_d8;
  local_148 = _DAT_1419e36f0;
  uStack_140 = uRam00000001419e36f8;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_148);
  local_70 = local_c8;
  uVar3 = CONCAT44(uVar7,DAT_1419fd6d8);
  FUN_140e634e0(param_1,param_2,&local_128,6,uVar3,&local_98);
  uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_48 = 0xf0;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar4 = (int)(DAT_141a0aa78 | 0x5000000) >> 0x18 & 0xff;
  if (uVar4 == 0xf) {
    uVar5 = 0x4000004;
  }
  else {
    uVar5 = (ulonglong)(uVar4 | 0x1000000);
  }
  uStack_12c = 0xf;
  local_148 = uVar5 << 0x20 | (ulonglong)(DAT_141a0aa78 & 0xffffff);
  uStack_140 = CONCAT44(0xf,uStack_130);
  local_138 = local_148;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_148);
  local_98 = &local_118;
  local_148 = _DAT_141dcdd28;
  uStack_140 = uRam0000000141dcdd30;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_148);
  local_90 = &local_108;
  uStack_12c = 0xf;
  local_138 = 0x1000001000002b7;
  uStack_140 = CONCAT44(0xf,uStack_130);
  local_148 = 0x1000001000002b7;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_148);
  local_88 = local_f8;
  uStack_12c = 0xf;
  local_138 = 0x10000000000011e;
  uStack_140 = CONCAT44(0xf,uStack_130);
  local_148 = 0x10000000000011e;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
  local_80 = local_e8;
  local_148 = _DAT_1419e36b0;
  uStack_140 = uRam00000001419e36b8;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_148);
  local_78 = local_d8;
  local_148 = _DAT_1419e36d0;
  uStack_140 = uRam00000001419e36d8;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_148);
  local_70 = local_c8;
  uVar3 = CONCAT44(uVar7,DAT_1419fd6d8);
  FUN_140e634e0(param_1,param_2,&local_128,6,uVar3,&local_98);
  uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_48 = 0xf2;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar4 = (int)(DAT_141a0aa78 | 0x5000000) >> 0x18 & 0xff;
  if (uVar4 == 0xf) {
    uVar5 = 0x4000004;
  }
  else {
    uVar5 = (ulonglong)(uVar4 | 0x1000000);
  }
  uStack_12c = 0xf;
  local_148 = uVar5 << 0x20 | (ulonglong)(DAT_141a0aa78 & 0xffffff);
  uStack_140 = CONCAT44(0xf,uStack_130);
  local_138 = local_148;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_148);
  local_98 = &local_118;
  local_148 = _DAT_141dcdd08;
  uStack_140 = uRam0000000141dcdd10;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_148);
  local_90 = &local_108;
  uStack_12c = 0xf;
  local_138 = 0x1000001000002bd;
  uStack_140 = CONCAT44(0xf,uStack_130);
  local_148 = 0x1000001000002bd;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_148);
  local_88 = local_f8;
  uStack_12c = 0xf;
  local_138 = 0x10000000000011b;
  uStack_140 = CONCAT44(0xf,uStack_130);
  local_148 = 0x10000000000011b;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
  local_80 = local_e8;
  local_148 = _DAT_1419e36b0;
  uStack_140 = uRam00000001419e36b8;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_148);
  local_78 = local_d8;
  local_148 = _DAT_1419e36e0;
  uStack_140 = uRam00000001419e36e8;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_148);
  local_70 = local_c8;
  local_148 = _DAT_1419e36b0;
  uStack_140 = uRam00000001419e36b8;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_148);
  local_68 = local_b8;
  uVar3 = CONCAT44(uVar7,DAT_1419fd6d8);
  FUN_140e634e0(param_1,param_2,&local_128,7,uVar3,&local_98);
  uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_48 = 0xf4;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar4 = (int)(DAT_141a0aa78 | 0x5000000) >> 0x18 & 0xff;
  if (uVar4 == 0xf) {
    uVar5 = 0x4000004;
  }
  else {
    uVar5 = (ulonglong)(uVar4 | 0x1000000);
  }
  uStack_12c = 0xf;
  local_148 = uVar5 << 0x20 | (ulonglong)(DAT_141a0aa78 & 0xffffff);
  uStack_140 = CONCAT44(0xf,uStack_130);
  local_138 = local_148;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_148);
  local_98 = &local_118;
  local_148 = _DAT_141dcdca8;
  uStack_140 = uRam0000000141dcdcb0;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_148);
  local_90 = &local_108;
  uStack_12c = 0xf;
  local_138 = 0x1000001000002b8;
  uStack_140 = CONCAT44(0xf,uStack_130);
  local_148 = 0x1000001000002b8;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_148);
  local_88 = local_f8;
  uStack_12c = 0xf;
  local_138 = 0x1000000000000c4;
  uStack_140 = CONCAT44(0xf,uStack_130);
  local_148 = 0x1000000000000c4;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
  local_80 = local_e8;
  local_148 = _DAT_1419e36b0;
  uStack_140 = uRam00000001419e36b8;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_148);
  local_78 = local_d8;
  local_148 = _DAT_1419e36f0;
  uStack_140 = uRam00000001419e36f8;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_148);
  local_70 = local_c8;
  uVar3 = CONCAT44(uVar7,DAT_1419fd6d8);
  FUN_140e634e0(param_1,param_2,&local_128,6,uVar3,&local_98);
  uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_48 = 0xf6;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar4 = (int)(DAT_141a0aa78 | 0x5000000) >> 0x18 & 0xff;
  if (uVar4 == 0xf) {
    uVar5 = 0x4000004;
  }
  else {
    uVar5 = (ulonglong)(uVar4 | 0x1000000);
  }
  uStack_12c = 0xf;
  local_148 = uVar5 << 0x20 | (ulonglong)(DAT_141a0aa78 & 0xffffff);
  uStack_140 = CONCAT44(0xf,uStack_130);
  local_138 = local_148;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_148);
  local_98 = &local_118;
  local_148 = _DAT_141dcdd38;
  uStack_140 = uRam0000000141dcdd40;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_148);
  local_90 = &local_108;
  uStack_12c = 0xf;
  local_138 = 0x1000001000002be;
  uStack_140 = CONCAT44(0xf,uStack_130);
  local_148 = 0x1000001000002be;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_148);
  local_88 = local_f8;
  uStack_12c = 0xf;
  local_138 = 0x1000000000000c2;
  uStack_140 = CONCAT44(0xf,uStack_130);
  local_148 = 0x1000000000000c2;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
  local_80 = local_e8;
  local_148 = _DAT_1419e36b0;
  uStack_140 = uRam00000001419e36b8;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_148);
  local_78 = local_d8;
  local_148 = _DAT_1419e36e0;
  uStack_140 = uRam00000001419e36e8;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_148);
  local_70 = local_c8;
  uVar3 = CONCAT44(uVar7,DAT_1419fd6d8);
  FUN_140e634e0(param_1,param_2,&local_128,6,uVar3,&local_98);
  uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_48 = 0xf7;
  local_138 = 0x3ff0000000000000;
  uStack_12c = 0xd;
  local_148 = 0x3ff0000000000000;
  uStack_140 = CONCAT44(0xd,uStack_130);
  if ((1 << ((byte)local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_40);
  }
  FUN_140041b80(&local_40,&local_148);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if (puVar2 != &local_118) {
    local_148 = *puVar2;
    uStack_140 = puVar2[1];
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_148);
  }
  iVar1 = DAT_141a0a988;
  local_98 = &local_118;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = (double)iVar1;
  local_90 = &local_108;
  uVar6 = CONCAT44(uVar7,DAT_141a035d8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_128,2,uVar6,&local_98);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  FUN_140e87930(uVar3,DAT_141a0aad8,0x80000000,&local_40);
  local_48 = 0xf9;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar4 = (int)(DAT_141a0aa78 | 0x5000000) >> 0x18 & 0xff;
  if (uVar4 == 0xf) {
    uVar5 = 0x4000004;
  }
  else {
    uVar5 = (ulonglong)(uVar4 | 0x1000000);
  }
  uStack_12c = 0xf;
  local_148 = uVar5 << 0x20 | (ulonglong)(DAT_141a0aa78 & 0xffffff);
  uStack_140 = CONCAT44(0xf,uStack_130);
  local_138 = local_148;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_148);
  local_98 = &local_118;
  local_148 = _DAT_141dcdce8;
  uStack_140 = uRam0000000141dcdcf0;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_148);
  local_90 = &local_108;
  uStack_12c = 0xf;
  local_138 = 0x1000001000002b9;
  uStack_140 = CONCAT44(0xf,uStack_130);
  local_148 = 0x1000001000002b9;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_148);
  local_88 = local_f8;
  uStack_12c = 0xf;
  local_138 = 0x1000000000000c8;
  uStack_140 = CONCAT44(0xf,uStack_130);
  local_148 = 0x1000000000000c8;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
  local_80 = local_e8;
  local_148 = _DAT_1419e36b0;
  uStack_140 = uRam00000001419e36b8;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_148);
  local_78 = local_d8;
  local_148 = _DAT_1419e36f0;
  uStack_140 = uRam00000001419e36f8;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_148);
  local_70 = local_c8;
  uVar3 = CONCAT44(uVar7,DAT_1419fd6d8);
  FUN_140e634e0(param_1,param_2,&local_128,6,uVar3,&local_98);
  uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_48 = 0xfb;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar4 = (int)(DAT_141a0aa78 | 0x5000000) >> 0x18 & 0xff;
  if (uVar4 == 0xf) {
    uVar5 = 0x4000004;
  }
  else {
    uVar5 = (ulonglong)(uVar4 | 0x1000000);
  }
  uStack_12c = 0xf;
  local_148 = uVar5 << 0x20 | (ulonglong)(DAT_141a0aa78 & 0xffffff);
  uStack_140 = CONCAT44(0xf,uStack_130);
  local_138 = local_148;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_148);
  local_98 = &local_118;
  local_148 = _DAT_141dcdc78;
  uStack_140 = uRam0000000141dcdc80;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_148);
  local_90 = &local_108;
  uStack_12c = 0xf;
  local_138 = 0x1000001000002bc;
  uStack_140 = CONCAT44(0xf,uStack_130);
  local_148 = 0x1000001000002bc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_148);
  local_88 = local_f8;
  uStack_12c = 0xf;
  local_138 = 0x100000000000130;
  uStack_140 = CONCAT44(0xf,uStack_130);
  local_148 = 0x100000000000130;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
  local_80 = local_e8;
  local_148 = _DAT_1419e36b0;
  uStack_140 = uRam00000001419e36b8;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_148);
  local_78 = local_d8;
  local_148 = _DAT_1419e36d0;
  uStack_140 = uRam00000001419e36d8;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_148);
  local_70 = local_c8;
  uVar3 = CONCAT44(uVar7,DAT_1419fd6d8);
  FUN_140e634e0(param_1,param_2,&local_128,6,uVar3,&local_98);
  uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_48 = 0xfd;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar4 = (int)(DAT_141a0aa78 | 0x5000000) >> 0x18 & 0xff;
  if (uVar4 == 0xf) {
    uVar5 = 0x4000004;
  }
  else {
    uVar5 = (ulonglong)(uVar4 | 0x1000000);
  }
  uStack_12c = 0xf;
  local_148 = uVar5 << 0x20 | (ulonglong)(DAT_141a0aa78 & 0xffffff);
  uStack_140 = CONCAT44(0xf,uStack_130);
  local_138 = local_148;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_148);
  local_98 = &local_118;
  local_148 = _DAT_141dcdd98;
  uStack_140 = uRam0000000141dcdda0;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_148);
  local_90 = &local_108;
  uStack_12c = 0xf;
  local_138 = 0x1000001000002ba;
  uStack_140 = CONCAT44(0xf,uStack_130);
  local_148 = 0x1000001000002ba;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_148);
  local_88 = local_f8;
  uStack_12c = 0xf;
  local_138 = 0x1000000000000f7;
  uStack_140 = CONCAT44(0xf,uStack_130);
  local_148 = 0x1000000000000f7;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
  local_80 = local_e8;
  local_148 = _DAT_141dc62e0;
  uStack_140 = uRam0000000141dc62e8;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_148);
  local_78 = local_d8;
  local_148 = _DAT_1419e36f0;
  uStack_140 = uRam00000001419e36f8;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_148);
  local_70 = local_c8;
  local_148 = _DAT_141dc62e0;
  uStack_140 = uRam0000000141dc62e8;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_148);
  local_68 = local_b8;
  local_148 = _DAT_1419e36b0;
  uStack_140 = uRam00000001419e36b8;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_148);
  local_60 = local_a8;
  FUN_140e634e0(param_1,param_2,&local_128,8,CONCAT44(uVar7,DAT_1419fd6d8),&local_98);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_40);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

