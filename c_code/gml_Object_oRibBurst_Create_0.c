// gml_Object_oRibBurst_Create_0 @ 0x140caadf0

void gml_Object_oRibBurst_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  ulonglong in_stack_fffffffffffffeb0;
  undefined1 **ppuVar5;
  longlong *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
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
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined1 local_48 [12];
  byte local_3c;
  undefined1 local_38 [12];
  byte local_2c;
  undefined1 *local_28;
  undefined1 *local_20;
  undefined1 *local_18;
  undefined1 *local_10;
  
  local_d0 = "gml_Object_oRecreantBead_Destroy_0";
  local_c8 = 0;
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_68,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = (longlong *)0x0;
  uStack_8c = 0xffffff;
  local_98 = (longlong *)0x0;
  uStack_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_c8 = 1;
  uStack_13c = 6;
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
  uVar3 = (ulonglong)pcVar2 & 0xffffffffffffff00;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_1419fe0e8,0x80000000,&local_88,uVar3,in_stack_fffffffffffffeb0);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  uStack_13c = 6;
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
  uVar3 = uVar3 & 0xffffffffffffff00;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_1419fe158,0x80000000,&local_98,uVar3,in_stack_fffffffffffffeb0);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  uStack_13c = 6;
  uVar3 = uVar3 & 0xffffffffffffff00;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_141a1b910,0x80000000,&local_a8,uVar3,
                in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar3 >> 0x20);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = local_88;
  uStack_140 = uStack_80;
  uStack_13c = uStack_7c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_148);
  local_28 = local_68;
  local_148 = local_98;
  uStack_140 = uStack_90;
  uStack_13c = uStack_8c;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_148);
  local_20 = local_58;
  local_148 = local_a8;
  uStack_140 = uStack_a0;
  uStack_13c = uStack_9c;
  if ((1 << (local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_48);
  }
  FUN_140041b80(local_48,&local_148);
  local_18 = local_48;
  uStack_13c = 0xf;
  local_148 = (longlong *)0x100000000000041;
  local_128 = 0x41;
  uStack_124 = 0x1000000;
  uStack_120 = uStack_140;
  uStack_11c = 0xf;
  if ((1 << (local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_38);
  }
  FUN_140041b80(local_38,&local_128);
  local_10 = local_38;
  ppuVar5 = &local_28;
  uVar3 = CONCAT44(uVar4,DAT_141a0a7c8);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_78,4,uVar3,ppuVar5);
  if (puVar1 != &local_138) {
    local_128 = *(undefined4 *)puVar1;
    uStack_124 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_120 = *(undefined4 *)(puVar1 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_128);
  }
  local_c8 = 2;
  uStack_13c = 0xf;
  local_148 = (longlong *)0x100000100000288;
  local_128 = 0x288;
  uStack_124 = 0x1000001;
  uStack_120 = uStack_140;
  uStack_11c = 0xf;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_128);
  FUN_140e86c30(&local_138,DAT_141a0a728,0x80000000,&local_e8);
  local_c8 = 3;
  uStack_13c = 6;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_141a0cfc8,0x80000000,&local_b8,uVar3 & 0xffffffffffffff00,
                (ulonglong)ppuVar5 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_128 = (undefined4)local_b8;
  uStack_124 = local_b8._4_4_;
  uStack_120 = uStack_b0;
  uStack_11c = uStack_ac;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_128);
  FUN_140e86c30(&local_138,DAT_141a0cfc8,0x80000000,&local_f8);
  local_c8 = 4;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04c98);
  if (puVar1 != &local_108) {
    local_128 = *(undefined4 *)puVar1;
    uStack_124 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_120 = *(undefined4 *)(puVar1 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_128);
  }
  FUN_140e87930(&local_138,DAT_141a0a7f8,0x80000000,&local_108);
  local_c8 = 5;
  if (puVar1 != &local_118) {
    local_128 = *(undefined4 *)puVar1;
    uStack_124 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_120 = *(undefined4 *)(puVar1 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_128);
  }
  (**(code **)(*param_1 + 8))(param_1,DAT_141a04c98);
  FUN_140e87930(&local_138,DAT_141a04c98,0x80000000,&local_118);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
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
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
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
  _eh_vector_destructor_iterator_(local_68,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return;
}

