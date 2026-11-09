// gml_Object_oBreakablePitCorpse_Create_0 @ 0x14085f700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBreakablePitCorpse_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8 [3];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined4 local_c8 [3];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined4 local_98 [3];
  byte local_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined4 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined4 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  undefined4 *local_20;
  
  local_70 = "gml_Object_oBreakablePitCandle2_Create_0";
  local_68 = 0;
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_f8,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_68 = 2;
  FUN_140e98b30(param_1,param_2);
  local_68 = 4;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a248);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a108);
  if (puVar1 != local_f8) {
    local_138 = *puVar1;
    uStack_134 = puVar1[1];
    uStack_130 = puVar1[2];
    uStack_12c = puVar1[3];
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_138);
  }
  local_58 = local_f8;
  local_138 = _DAT_1419e9080;
  uStack_134 = uRam00000001419e9084;
  uStack_130 = uRam00000001419e9088;
  uStack_12c = uRam00000001419e908c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_138);
  local_50 = local_e8;
  local_138 = _DAT_1419e9070;
  uStack_134 = uRam00000001419e9074;
  uStack_130 = uRam00000001419e9078;
  uStack_12c = uRam00000001419e907c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_138);
  local_48 = local_d8;
  if (puVar1 != local_c8) {
    local_138 = *puVar1;
    uStack_134 = puVar1[1];
    uStack_130 = puVar1[2];
    uStack_12c = puVar1[3];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_138);
  }
  local_40 = local_c8;
  local_138 = _DAT_1419e9090;
  uStack_134 = uRam00000001419e9094;
  uStack_130 = uRam00000001419e9098;
  uStack_12c = uRam00000001419e909c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_138);
  local_38 = local_b8;
  local_138 = _DAT_1419e90a0;
  uStack_134 = uRam00000001419e90a4;
  uStack_130 = uRam00000001419e90a8;
  uStack_12c = uRam00000001419e90ac;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_138);
  local_30 = local_a8;
  uVar3 = CONCAT44(uVar4,DAT_1419fd6d8);
  puVar1 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_118,3,uVar3,&local_58);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar1 != local_98) {
    local_138 = *puVar1;
    uStack_134 = puVar1[1];
    uStack_130 = puVar1[2];
    uStack_12c = puVar1[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_138);
  }
  local_28 = local_98;
  uVar3 = CONCAT44(uVar4,DAT_1419fd6d8);
  puVar1 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_128,3,uVar3,&local_40);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar1 != local_88) {
    local_138 = *puVar1;
    uStack_134 = puVar1[1];
    uStack_130 = puVar1[2];
    uStack_12c = puVar1[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_138);
  }
  local_20 = local_88;
  FUN_140e609c0(param_1);
  puVar1 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_108,2,CONCAT44(uVar4,DAT_1419fdca8),&local_28);
  if (puVar1 != puVar2) {
    local_138 = *puVar1;
    uStack_134 = puVar1[1];
    uStack_130 = puVar1[2];
    uStack_12c = puVar1[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_138);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return;
}

