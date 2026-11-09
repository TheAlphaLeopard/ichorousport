// gml_RoomCC_rmGravePit04_0_Create @ 0x1406510c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_RoomCC_rmGravePit04_0_Create(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined4 local_d8 [3];
  byte local_cc;
  undefined4 local_c8 [3];
  byte local_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined4 *local_20;
  
  local_90 = "gml_RoomCC_rmGravePit03_1_Create";
  local_88 = 0;
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_158,0x10,0xc,FUN_1400424d0,FUN_140041b30);
  local_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_88 = 1;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a00f58);
  uStack_18c = 0xf;
  local_198 = 0x100000000000095;
  local_1a8 = 0x95;
  uStack_1a4 = 0x1000000;
  uStack_1a0 = uStack_190;
  uStack_19c = 0xf;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_1a8);
  local_78 = local_158;
  local_1a8 = _DAT_1419e6e50;
  uStack_1a4 = uRam00000001419e6e54;
  uStack_1a0 = uRam00000001419e6e58;
  uStack_19c = uRam00000001419e6e5c;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_1a8);
  local_70 = local_148;
  uStack_18c = 0xf;
  local_198 = 0x100000000000095;
  local_1a8 = 0x95;
  uStack_1a4 = 0x1000000;
  uStack_1a0 = uStack_190;
  uStack_19c = 0xf;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_1a8);
  local_68 = local_138;
  local_1a8 = _DAT_1419e6e60;
  uStack_1a4 = uRam00000001419e6e64;
  uStack_1a0 = uRam00000001419e6e68;
  uStack_19c = uRam00000001419e6e6c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_1a8);
  local_60 = local_128;
  uStack_18c = 0xf;
  local_198 = 0x100000000000096;
  local_1a8 = 0x96;
  uStack_1a4 = 0x1000000;
  uStack_1a0 = uStack_190;
  uStack_19c = 0xf;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1a8);
  local_58 = local_118;
  local_1a8 = _DAT_1419e6e80;
  uStack_1a4 = uRam00000001419e6e84;
  uStack_1a0 = uRam00000001419e6e88;
  uStack_19c = uRam00000001419e6e8c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1a8);
  local_50 = local_108;
  uStack_18c = 0xf;
  local_198 = 0x100000000000096;
  local_1a8 = 0x96;
  uStack_1a4 = 0x1000000;
  uStack_1a0 = uStack_190;
  uStack_19c = 0xf;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_1a8);
  local_48 = local_f8;
  local_1a8 = _DAT_1419e6e70;
  uStack_1a4 = uRam00000001419e6e74;
  uStack_1a0 = uRam00000001419e6e78;
  uStack_19c = uRam00000001419e6e7c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_1a8);
  local_40 = local_e8;
  uVar3 = CONCAT44(uVar4,DAT_1419fdca8);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_188,2,uVar3,&local_78);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar2 != local_d8) {
    local_1a8 = *puVar2;
    uStack_1a4 = puVar2[1];
    uStack_1a0 = puVar2[2];
    uStack_19c = puVar2[3];
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_1a8);
  }
  uVar3 = CONCAT44(uVar4,DAT_1419fdca8);
  local_38 = local_d8;
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_188,4,uVar3,&local_68);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar2 != local_c8) {
    local_1a8 = *puVar2;
    uStack_1a4 = puVar2[1];
    uStack_1a0 = puVar2[2];
    uStack_19c = puVar2[3];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_1a8);
  }
  local_30 = local_c8;
  uVar3 = CONCAT44(uVar4,DAT_1419fdca8);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_188,2,uVar3,&local_48);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar2 != local_b8) {
    local_1a8 = *puVar2;
    uStack_1a4 = puVar2[1];
    uStack_1a0 = puVar2[2];
    uStack_19c = puVar2[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_1a8);
  }
  local_28 = local_b8;
  puVar2 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_178,3,CONCAT44(uVar4,DAT_1419fdca8),&local_38);
  if (puVar2 != local_a8) {
    local_1a8 = *puVar2;
    uStack_1a4 = puVar2[1];
    uStack_1a0 = puVar2[2];
    uStack_19c = puVar2[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_1a8);
  }
  local_20 = local_a8;
  FUN_140e63610(param_1,param_2,&local_168,1,uVar1,&local_20);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(local_158,0x10,0xc,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return;
}

