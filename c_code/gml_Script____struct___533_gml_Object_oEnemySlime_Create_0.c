// gml_Script____struct___533_gml_Object_oEnemySlime_Create_0 @ 0x140a794f0

undefined8 *
gml_Script____struct___533_gml_Object_oEnemySlime_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined1 **in_stack_fffffffffffffe50;
  ulonglong uVar7;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  longlong *local_d8;
  undefined4 local_cc;
  longlong *local_c8;
  undefined4 local_bc;
  undefined4 local_b8 [3];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 *local_58;
  undefined1 *local_50;
  
  local_130 = "gml_Script_anon@3616@___struct___533@gml_Object_oEnemySlime_Create_0";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0xca;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_78,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_14c = 0xffffff;
  local_158 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_18c = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 0xcb;
  local_7c = 0;
  local_88 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_88);
  local_128 = 0xcc;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_14c = 0;
  local_158 = 0;
  FUN_140e87930(uVar2,DAT_141a0a848,0x80000000,&local_158);
  local_128 = 0xcd;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_19c = 0;
  local_1a8 = 0;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar2,DAT_141a1f090,0x80000000,&local_1a8);
  local_128 = 0xcf;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57560);
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_15c = 0;
  local_168 = 0;
  FUN_140e87930(uVar2,DAT_141a0a748,0x80000000,&local_168);
  iVar4 = 4;
  do {
    iVar4 = iVar4 + -1;
    local_128 = 0xd3;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_dc = 0xf;
    local_e8 = 0x100000000000014;
    uVar7 = (ulonglong)in_stack_fffffffffffffe50 & 0xffffffffffffff00;
    uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
    FUN_140e87440(&local_e8,DAT_141a03b18,0x80000000,&local_108,uVar6,uVar7);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_cc = 6;
    uVar7 = uVar7 & 0xffffffffffffff00;
    uVar6 = uVar6 & 0xffffffffffffff00;
    local_d8 = param_1;
    FUN_140e87440(&local_d8,DAT_1419fe0e8,0x80000000,&local_118,uVar6,uVar7);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_bc = 6;
    local_c8 = param_1;
    FUN_140e87440(&local_c8,DAT_1419fe158,0x80000000,&local_178,uVar6 & 0xffffffffffffff00,
                  uVar7 & 0xffffffffffffff00);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_f8 = (undefined4)local_118;
    uStack_f4 = local_118._4_4_;
    uStack_f0 = uStack_110;
    uStack_ec = uStack_10c;
    if ((1 << (local_78[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_f8);
    local_58 = local_78;
    uStack_13c = local_16c;
    uStack_140 = local_170;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
      local_148 = local_178;
    }
    else {
      FUN_1400419b0(&local_148,&local_178);
    }
    local_ac = 7;
    local_b8[0] = 2;
    FUN_1400460e0(&local_148,local_b8);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    local_f8 = (undefined4)local_148;
    uStack_f4 = local_148._4_4_;
    uStack_f0 = uStack_140;
    uStack_ec = uStack_13c;
    if ((1 << (local_68[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_f8);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_50 = local_68;
    local_9c = 0xf;
    local_a8 = 0x100000000000014;
    uVar2 = FUN_140069500(&local_a8);
    in_stack_fffffffffffffe50 = &local_58;
    pcVar5 = (code *)&local_108;
    puVar3 = (undefined8 *)
             FUN_140e63610(uVar2,param_2,&local_198,2,pcVar5,in_stack_fffffffffffffe50);
    if (puVar3 != &local_188) {
      local_f8 = *(undefined4 *)puVar3;
      uStack_f4 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_f0 = *(undefined4 *)(puVar3 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_f8);
    }
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_128 = 0xd5;
    local_8c = 0;
    local_98 = &DAT_bff0000000000000;
    iVar1 = FUN_140e851f0(&local_188,&local_98,DAT_141955260,0);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    if (iVar1 != 0) {
      local_128 = 0xd6;
      uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      in_stack_fffffffffffffe50 =
           (undefined1 **)((ulonglong)in_stack_fffffffffffffe50 & 0xffffffffffffff00);
      pcVar5 = (code *)((ulonglong)pcVar5 & 0xffffffffffffff00);
      FUN_140e87440(uVar2,DAT_141a1f090,0x80000000,&local_1a8,pcVar5,in_stack_fffffffffffffe50);
      FUN_140162d40(&local_1a8,3);
      FUN_140e87930(uVar2,DAT_141a1f090,0x80000000,&local_1a8);
    }
  } while (0 < iVar4);
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

