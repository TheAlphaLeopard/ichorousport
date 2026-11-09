// gml_Script_BodyPart_gml_Object_oEnemyDarner_Create_0 @ 0x140997b50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_BodyPart_gml_Object_oEnemyDarner_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulonglong uVar6;
  ulonglong in_stack_fffffffffffffe30;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
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
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined4 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  local_130 = "gml_Script_draw@BodyPart@gml_Object_oEnemyDarner_Create_0";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0x59;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_118,0x10,9,FUN_1400424d0,FUN_140041b30);
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_19c = 0;
  local_1a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 0x5b;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09918);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09a78);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0d98);
  uStack_1bc = 6;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
  uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_141a0a728,0x80000000,&local_148,uVar6,in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uStack_1bc = 6;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_141a0cfc8,0x80000000,&local_158,uVar6,in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uStack_1bc = 6;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_178,uVar6,in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uStack_1bc = 6;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_188,uVar6,in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uStack_1bc = 6;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_141a0a778,0x80000000,&local_198,uVar6 & 0xffffffffffffff00,
                in_stack_fffffffffffffe30 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = (longlong *)local_148;
  uStack_1c0 = uStack_140;
  uStack_1bc = uStack_13c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1c8);
  local_88 = local_118;
  local_1c8 = (longlong *)local_158;
  uStack_1c0 = uStack_150;
  uStack_1bc = uStack_14c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1c8);
  local_80 = local_108;
  uStack_1bc = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_1c0 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
    local_1c8 = (longlong *)*puVar1;
  }
  else {
    FUN_1400419b0(&local_1c8,puVar1);
  }
  FUN_140042560(&local_1c8,puVar2);
  uStack_15c = local_16c;
  uStack_160 = local_170;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
    local_168 = local_178;
  }
  else {
    FUN_1400419b0(&local_168,&local_178);
  }
  FUN_1400460e0(&local_168,&local_1c8);
  local_1b8 = (undefined4)local_168;
  uStack_1b4 = local_168._4_4_;
  uStack_1b0 = uStack_160;
  uStack_1ac = uStack_15c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_1b8);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uStack_1bc = local_17c;
  uStack_1c0 = local_180;
  local_78 = local_f8;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
    local_1c8 = (longlong *)local_188;
  }
  else {
    FUN_1400419b0(&local_1c8,&local_188);
  }
  FUN_1400460e0(&local_1c8,uVar3);
  local_1b8 = (undefined4)local_1c8;
  uStack_1b4 = local_1c8._4_4_;
  uStack_1b0 = uStack_1c0;
  uStack_1ac = uStack_1bc;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_1b8);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_70 = local_e8;
  if (puVar2 != local_d8) {
    local_1b8 = *puVar2;
    uStack_1b4 = puVar2[1];
    uStack_1b0 = puVar2[2];
    uStack_1ac = puVar2[3];
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_1b8);
  }
  local_68 = local_d8;
  local_1b8 = _DAT_1419ea790;
  uStack_1b4 = uRam00000001419ea794;
  uStack_1b0 = uRam00000001419ea798;
  uStack_1ac = uRam00000001419ea79c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_1b8);
  local_60 = local_c8;
  uStack_1bc = local_18c;
  uStack_1c0 = local_190;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
    local_1c8 = (longlong *)local_198;
  }
  else {
    FUN_1400419b0(&local_1c8,&local_198);
  }
  FUN_1400460e0(&local_1c8,uVar4);
  local_1b8 = (undefined4)local_1c8;
  uStack_1b4 = local_1c8._4_4_;
  uStack_1b0 = uStack_1c0;
  uStack_1ac = uStack_1bc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_1b8);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_58 = local_b8;
  local_1b8 = _DAT_1419ea850;
  uStack_1b4 = uRam00000001419ea854;
  uStack_1b0 = uRam00000001419ea858;
  uStack_1ac = uRam00000001419ea85c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_1b8);
  local_50 = local_a8;
  local_1b8 = _DAT_1419ea790;
  uStack_1b4 = uRam00000001419ea794;
  uStack_1b0 = uRam00000001419ea798;
  uStack_1ac = uRam00000001419ea79c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_1b8);
  local_48 = local_98;
  FUN_1403ae470(param_1,param_2,&local_1a8,9,&local_88);
  local_128 = 0x66;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a03228);
  FUN_140e63610(param_1,param_2,&local_1a8,0,uVar3,0);
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(local_118,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

