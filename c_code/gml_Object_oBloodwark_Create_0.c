// gml_Object_oBloodwark_Create_0 @ 0x1406eab00

void gml_Object_oBloodwark_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong in_stack_fffffffffffffe90;
  undefined1 **ppuVar7;
  longlong *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_130 = "gml_Object_oBloodTendril_Create_0";
  local_128 = 0;
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_88,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_114 = 0xffffff;
  local_120 = 0;
  uStack_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  uStack_ac = 0xffffff;
  local_b8 = (longlong *)0x0;
  uStack_bc = 0xffffff;
  local_c8 = (longlong *)0x0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_128 = 2;
  local_8c = 0;
  local_98 = 0x3fe0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_98);
  local_128 = 3;
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  local_114 = 0;
  local_120 = 0x3fe0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_120);
  local_128 = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7d8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4024000000000000;
  local_128 = 6;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a56cd0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 10;
  *puVar1 = 0;
  local_128 = 8;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6278);
  uStack_160._4_4_ = 6;
  in_stack_fffffffffffffe90 = in_stack_fffffffffffffe90 & 0xffffffffffffff00;
  uVar5 = (ulonglong)pcVar4 & 0xffffffffffffff00;
  local_168 = param_1;
  FUN_140e87440(&local_168,DAT_1419fe0e8,0x80000000,&local_a8,uVar5,in_stack_fffffffffffffe90);
  if ((1 << ((byte)uStack_160._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  uStack_160._4_4_ = 6;
  in_stack_fffffffffffffe90 = in_stack_fffffffffffffe90 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_168 = param_1;
  FUN_140e87440(&local_168,DAT_1419fe158,0x80000000,&local_b8,uVar5,in_stack_fffffffffffffe90);
  if ((1 << ((byte)uStack_160._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  uStack_160._4_4_ = 6;
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_168 = param_1;
  FUN_140e87440(&local_168,DAT_141a1b910,0x80000000,&local_c8,uVar5,
                in_stack_fffffffffffffe90 & 0xffffffffffffff00);
  uVar6 = (undefined4)(uVar5 >> 0x20);
  if ((1 << ((byte)uStack_160._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = local_a8;
  uStack_160 = CONCAT44(uStack_9c,uStack_a0);
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_168);
  local_48 = local_88;
  local_168 = local_b8;
  uStack_160 = CONCAT44(uStack_ac,uStack_b0);
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_168);
  local_40 = local_78;
  local_168 = local_c8;
  uStack_160 = CONCAT44(uStack_bc,uStack_c0);
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_168);
  local_38 = local_68;
  uStack_160 = CONCAT44(0xf,(undefined4)uStack_160);
  local_168 = (longlong *)0x100000000000005;
  local_148 = 0x100000000000005;
  uStack_140 = CONCAT44(0xf,(undefined4)uStack_160);
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_148);
  local_30 = local_58;
  FUN_140e609c0(param_1);
  ppuVar7 = &local_48;
  uVar5 = CONCAT44(uVar6,DAT_141a0a7c8);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,4,uVar5,ppuVar7);
  if (puVar2 != puVar1) {
    local_148 = *puVar2;
    uStack_140 = puVar2[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_148);
  }
  FUN_140e60910(1);
  local_128 = 9;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f6278);
  uStack_160._4_4_ = 6;
  local_168 = param_1;
  FUN_140e87440(&local_168,DAT_141a0a828,0x80000000,&local_d8,uVar5 & 0xffffffffffffff00,
                (ulonglong)ppuVar7 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_160._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_148 = local_d8;
  uStack_140 = CONCAT44(uStack_cc,uStack_d0);
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  FUN_140041b80(&local_f0,&local_148);
  FUN_140e87930(uVar3,DAT_141a1f0d0,0x80000000,&local_f0);
  local_128 = 10;
  uStack_160 = CONCAT44(0xf,(undefined4)uStack_160);
  local_168 = (longlong *)0x1000001000002fc;
  local_148 = 0x1000001000002fc;
  uStack_140 = CONCAT44(0xf,(undefined4)uStack_160);
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  FUN_140041b80(&local_100,&local_148);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f6278);
  FUN_140e86c30(uVar3,DAT_141a0a728,0x80000000,&local_100);
  local_128 = 0xb;
  uStack_160 = CONCAT44(0xd,(undefined4)uStack_160);
  local_168 = (longlong *)0x0;
  local_148 = 0;
  uStack_140 = uStack_160;
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  FUN_140041b80(&local_110,&local_148);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f6278);
  FUN_140e87930(uVar3,DAT_141a01e48,0x80000000,&local_110);
  local_128 = 0xd;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f0d0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0xc010000000000000;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return;
}

