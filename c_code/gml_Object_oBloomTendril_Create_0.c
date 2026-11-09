// gml_Object_oBloomTendril_Create_0 @ 0x1406ebfe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBloomTendril_Create_0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 uVar5;
  undefined1 **ppuVar4;
  undefined1 **in_stack_fffffffffffffeb0;
  ulonglong uVar6;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  
  local_d0 = "gml_Object_oBloodWriting_Create_0";
  local_c8 = 0;
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  _eh_vector_constructor_iterator_(local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_dc = 0xffffff;
  local_e8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_c8 = 4;
  local_148 = CONCAT44(uRam00000001419e7a74,_DAT_1419e7a70);
  uStack_140 = uRam00000001419e7a78;
  uStack_13c = uRam00000001419e7a7c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_148);
  local_48 = local_a8;
  ppuVar4 = &local_48;
  uVar2 = gml_Script_choose_weighted(param_1,param_2,&local_c0,1,ppuVar4);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    local_c8 = 6;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    uStack_13c = 6;
    uVar6 = (ulonglong)in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
    uVar3 = (ulonglong)ppuVar4 & 0xffffffffffffff00;
    local_148 = param_1;
    FUN_140e87440(&local_148,DAT_1419fe0e8,0x80000000,&local_e8,uVar3,uVar6);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    uStack_13c = 6;
    uVar3 = uVar3 & 0xffffffffffffff00;
    local_148 = param_1;
    FUN_140e87440(&local_148,DAT_1419fe158,0x80000000,&local_f8,uVar3,uVar6 & 0xffffffffffffff00);
    uVar5 = (undefined4)(uVar3 >> 0x20);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = local_e8;
    uStack_140 = uStack_e0;
    uStack_13c = uStack_dc;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_148);
    local_40 = local_98;
    local_148 = local_f8;
    uStack_140 = uStack_f0;
    uStack_13c = uStack_ec;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_148);
    local_38 = local_88;
    local_148 = CONCAT44(uRam00000001419e7a64,_DAT_1419e7a60);
    uStack_140 = uRam00000001419e7a68;
    uStack_13c = uRam00000001419e7a6c;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_148);
    uStack_13c = 0xf;
    local_148 = 0x100000000000013;
    local_58 = 0x13;
    uStack_54 = 0x1000000;
    uStack_50 = uStack_140;
    uStack_4c = 0xf;
    local_30 = local_78;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_58);
    local_28 = local_68;
    in_stack_fffffffffffffeb0 = &local_40;
    ppuVar4 = (undefined1 **)CONCAT44(uVar5,DAT_141a02e88);
    FUN_140e634e0(param_1,param_2,&local_138,4,ppuVar4,in_stack_fffffffffffffeb0);
  }
  local_c8 = 10;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 0;
  local_128 = 0x3fe8000000000000;
  FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_128);
  local_c8 = 0xb;
  uStack_13c = 6;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_141a0f7f8,0x80000000,&local_108,
                (ulonglong)ppuVar4 & 0xffffffffffffff00,
                (ulonglong)in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_58 = (undefined4)local_108;
  uStack_54 = local_108._4_4_;
  uStack_50 = uStack_100;
  uStack_4c = uStack_fc;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_58);
  FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_118);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return;
}

