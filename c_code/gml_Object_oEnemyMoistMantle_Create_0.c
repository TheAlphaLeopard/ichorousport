// gml_Object_oEnemyMoistMantle_Create_0 @ 0x1409f3e50

undefined8 *
gml_Object_oEnemyMoistMantle_Create_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong in_stack_fffffffffffffe80;
  undefined1 **ppuVar6;
  ulonglong uVar7;
  longlong *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
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
  
  local_f0 = "gml_Script_anon@557@gml_Object_oEnemyMoistMan_Other_76";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x15;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_88,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = (longlong *)0x0;
  uStack_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  uStack_ac = 0xffffff;
  local_b8 = (longlong *)0x0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x16;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uStack_16c = 6;
  in_stack_fffffffffffffe80 = in_stack_fffffffffffffe80 & 0xffffffffffffff00;
  uVar4 = (ulonglong)pcVar3 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_98,uVar4,in_stack_fffffffffffffe80);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  uStack_16c = 6;
  in_stack_fffffffffffffe80 = in_stack_fffffffffffffe80 & 0xffffffffffffff00;
  uVar4 = uVar4 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_1419fe158,0x80000000,&local_a8,uVar4,in_stack_fffffffffffffe80);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  uStack_16c = 6;
  uVar4 = uVar4 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a1b910,0x80000000,&local_b8,uVar4,
                in_stack_fffffffffffffe80 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar4 >> 0x20);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = local_98;
  uStack_170 = uStack_90;
  uStack_16c = uStack_8c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_178);
  local_48 = local_88;
  local_178 = local_a8;
  uStack_170 = uStack_a0;
  uStack_16c = uStack_9c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_178);
  local_40 = local_78;
  local_178 = local_b8;
  uStack_170 = uStack_b0;
  uStack_16c = uStack_ac;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_178);
  local_38 = local_68;
  uStack_16c = 0xf;
  local_178 = (longlong *)0x100000000000005;
  local_148 = 5;
  uStack_144 = 0x1000000;
  uStack_140 = uStack_170;
  uStack_13c = 0xf;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_148);
  local_30 = local_58;
  ppuVar6 = &local_48;
  uVar4 = CONCAT44(uVar5,DAT_141a0a7c8);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,4,uVar4,ppuVar6);
  if (puVar2 != &local_138) {
    local_148 = *(undefined4 *)puVar2;
    uStack_144 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_140 = *(undefined4 *)(puVar2 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_148);
  }
  FUN_140e87930(uVar1,DAT_1419f12d8,0x80000000,&local_138);
  local_e8 = 0x17;
  uStack_16c = 0xf;
  local_178 = (longlong *)0x1000001000001c6;
  local_148 = 0x1c6;
  uStack_144 = 0x1000001;
  uStack_140 = uStack_170;
  uStack_13c = 0xf;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_148);
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar7 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
  uVar4 = uVar4 & 0xffffffffffffff00;
  FUN_140e87440(uVar1,DAT_1419f12d8,0x80000000,&local_158,uVar4,uVar7);
  FUN_140e86c30(&local_158,DAT_1419f5c58,0x80000000,&local_108);
  local_e8 = 0x18;
  uStack_16c = 6;
  uVar7 = uVar7 & 0xffffffffffffff00;
  uVar4 = uVar4 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0a828,0x80000000,&local_c8,uVar4,uVar7);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_148 = (undefined4)local_c8;
  uStack_144 = local_c8._4_4_;
  uStack_140 = uStack_c0;
  uStack_13c = uStack_bc;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_148);
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar7 = uVar7 & 0xffffffffffffff00;
  uVar4 = uVar4 & 0xffffffffffffff00;
  FUN_140e87440(uVar1,DAT_1419f12d8,0x80000000,&local_158,uVar4,uVar7);
  FUN_140e87930(&local_158,DAT_141a1f0d0,0x80000000,&local_118);
  local_e8 = 0x19;
  local_178 = (longlong *)0x3ff0000000000000;
  uStack_16c = 0xd;
  local_148 = 0;
  uStack_144 = 0x3ff00000;
  uStack_140 = uStack_170;
  uStack_13c = 0xd;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_148);
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar7 = uVar7 & 0xffffffffffffff00;
  uVar4 = uVar4 & 0xffffffffffffff00;
  FUN_140e87440(uVar1,DAT_1419f12d8,0x80000000,&local_158,uVar4,uVar7);
  FUN_140e87930(&local_158,DAT_141a01e48,0x80000000,&local_128);
  local_e8 = 0x1b;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f1348);
  FUN_140e87440(uVar1,DAT_141a58090,0x80000000,&local_e0,uVar4 & 0xffffffffffffff00,
                uVar7 & 0xffffffffffffff00);
  uVar1 = FUN_140069500(uVar1);
  FUN_140e63610(uVar1,param_2,&local_168,0,&local_e0,0);
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

