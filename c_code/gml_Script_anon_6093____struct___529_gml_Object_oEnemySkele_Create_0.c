// gml_Script_anon_6093____struct___529_gml_Object_oEnemySkele_Create_0 @ 0x140a696f0

undefined8 *
gml_Script_anon_6093____struct___529_gml_Object_oEnemySkele_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined4 uVar6;
  ulonglong in_stack_fffffffffffffe30;
  undefined1 **ppuVar7;
  ulonglong uVar8;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  char *local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_190 = "gml_Script_anon@5063@___struct___529@gml_Object_oEnemySkele_Create_0";
  local_198 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_198;
  local_188 = 0xd2;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_98,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_188 = 0xd3;
  uStack_1bc = 0xf;
  local_1c8 = (longlong *)0x1000001000002c0;
  local_1a8 = 0x2c0;
  uStack_1a4 = 0x1000001;
  uStack_1a0 = uStack_1c0;
  uStack_19c = 0xf;
  FUN_140041b80(&local_a8,&local_1a8);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_a8);
  local_188 = 0xd4;
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  local_134 = 0;
  local_140 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_140);
  local_188 = 0xd5;
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  local_144 = 0;
  local_150 = 0;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_150);
  local_188 = 0xd7;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  FUN_140e609c0(param_1);
  uStack_1bc = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_1c0 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
    local_1c8 = (longlong *)*puVar1;
  }
  else {
    FUN_1400419b0(&local_1c8,puVar1);
  }
  FUN_140042560(&local_1c8,uVar2);
  if (&local_1c8 != puVar3) {
    local_1a8 = (undefined4)local_1c8;
    uStack_1a4 = local_1c8._4_4_;
    uStack_1a0 = uStack_1c0;
    uStack_19c = uStack_1bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_1a8);
  }
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140e60910(1);
  local_188 = 0xd8;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0xbff8000000000000;
  local_188 = 0xd9;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  local_154 = 0;
  local_160 = 0;
  FUN_140e87930(uVar2,DAT_141a0a848,0x80000000,&local_160);
  local_188 = 0xdb;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff3333333333333;
  local_188 = 0xdc;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3fe999999999999a;
  local_188 = 0xde;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  uStack_1bc = 6;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
  uVar4 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_b8,uVar4,in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uStack_1bc = 6;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
  uVar4 = uVar4 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_c8,uVar4,in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uStack_1bc = 6;
  uVar4 = uVar4 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_141a1b910,0x80000000,&local_d8,uVar4,
                in_stack_fffffffffffffe30 & 0xffffffffffffff00);
  uVar6 = (undefined4)(uVar4 >> 0x20);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1a8 = (undefined4)local_b8;
  uStack_1a4 = local_b8._4_4_;
  uStack_1a0 = uStack_b0;
  uStack_19c = uStack_ac;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_1a8);
  local_58 = local_98;
  local_1a8 = (undefined4)local_c8;
  uStack_1a4 = local_c8._4_4_;
  uStack_1a0 = uStack_c0;
  uStack_19c = uStack_bc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_1a8);
  local_50 = local_88;
  local_1a8 = (undefined4)local_d8;
  uStack_1a4 = local_d8._4_4_;
  uStack_1a0 = uStack_d0;
  uStack_19c = uStack_cc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_1a8);
  local_48 = local_78;
  uStack_1bc = 0xf;
  local_1c8 = (longlong *)0x100000000000005;
  local_1a8 = 5;
  uStack_1a4 = 0x1000000;
  uStack_1a0 = uStack_1c0;
  uStack_19c = 0xf;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_1a8);
  local_40 = local_68;
  ppuVar7 = &local_58;
  uVar4 = CONCAT44(uVar6,DAT_141a0a7c8);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1b8,4,uVar4,ppuVar7);
  if (puVar1 != &local_170) {
    local_1a8 = *(undefined4 *)puVar1;
    uStack_1a4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_1a0 = *(undefined4 *)(puVar1 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_170);
    }
    FUN_140041b80(&local_170,&local_1a8);
  }
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar2,DAT_1419f6278,0x80000000,&local_170);
  local_188 = 0xdf;
  uStack_1bc = 0xf;
  local_1c8 = (longlong *)0x1000001000002c1;
  local_1a8 = 0x2c1;
  uStack_1a4 = 0x1000001;
  uStack_1a0 = uStack_1c0;
  uStack_19c = 0xf;
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  FUN_140041b80(&local_110,&local_1a8);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
  uVar4 = uVar4 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_1419f6278,0x80000000,&local_180,uVar4,uVar8);
  FUN_140e86c30(&local_180,DAT_141a0a728,0x80000000,&local_110);
  local_188 = 0xe0;
  uStack_1bc = 0xf;
  local_1c8 = (longlong *)0x1000001000002c1;
  local_1a8 = 0x2c1;
  uStack_1a4 = 0x1000001;
  uStack_1a0 = uStack_1c0;
  uStack_19c = 0xf;
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  FUN_140041b80(&local_120,&local_1a8);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar8 = uVar8 & 0xffffffffffffff00;
  uVar4 = uVar4 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_1419f6278,0x80000000,&local_180,uVar4,uVar8);
  FUN_140e86c30(&local_180,DAT_1419f5c58,0x80000000,&local_120);
  local_188 = 0xe1;
  uStack_1bc = 6;
  uVar8 = uVar8 & 0xffffffffffffff00;
  uVar4 = uVar4 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_141a0a828,0x80000000,&local_e8,uVar4,uVar8);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1a8 = (undefined4)local_e8;
  uStack_1a4 = local_e8._4_4_;
  uStack_1a0 = uStack_e0;
  uStack_19c = uStack_dc;
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  FUN_140041b80(&local_130,&local_1a8);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar2,DAT_1419f6278,0x80000000,&local_180,uVar4 & 0xffffffffffffff00,
                uVar8 & 0xffffffffffffff00);
  FUN_140e87930(&local_180,DAT_141a1f0d0,0x80000000,&local_130);
  local_188 = 0xe3;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a11dd8);
  uVar8 = 0;
  FUN_140e63610(param_1,param_2,&local_1b8,0,uVar4,0);
  local_188 = 0xe4;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f02b8);
  FUN_140e87440(uVar2,DAT_1419f4a98,0x80000000,&local_100,uVar4 & 0xffffffffffffff00,
                uVar8 & 0xffffffffffffff00);
  uVar2 = FUN_140069500(uVar2);
  FUN_140e63610(uVar2,param_2,&local_1b8,0,&local_100,0);
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
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
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_198;
  return param_3;
}

