// gml_Script_anon_9622____struct___384_gml_Object_oBossSplit_Create_0 @ 0x1407e1e50

undefined8 *
gml_Script_anon_9622____struct___384_gml_Object_oBossSplit_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  code *pcVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  ulonglong in_stack_fffffffffffffe20;
  ulonglong uVar8;
  uint local_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
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
  uint local_d8 [3];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  uint local_a8 [3];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  ulonglong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  uint *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  uint *local_40;
  undefined1 *local_38;
  
  local_130 = "gml_Script_anon@7406@gml_Object_oBossSplit_Create_0";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0x13f;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_118,0x10,9,FUN_1400424d0,FUN_140041b30);
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  uStack_18c = 0xffffff;
  local_198 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 0x140;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  FUN_140e87440(uVar2,DAT_141a09a88,0x80000000,&local_148,(ulonglong)pcVar4 & 0xffffffffffffff00,
                in_stack_fffffffffffffe20 & 0xffffffffffffff00);
  FUN_140e85f80(param_1,DAT_1419fd2a8,0x80000000,&local_158);
  iVar1 = FUN_140e851f0(&local_148,&local_158,DAT_141955260,0);
  if (iVar1 == 0) {
    local_128 = 0x140;
  }
  else {
    local_128 = 0x141;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    puVar3 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
    if (param_4 < 1) {
      param_5 = &DAT_1419df7b0;
      FUN_140e87170(&DAT_1419df7b0,DAT_1419fe0e8,0x80000000,&local_178,param_1,param_2);
      plVar6 = param_1;
      uVar8 = param_2;
      FUN_140e87170(&DAT_1419df7b0,DAT_1419fe158,0x80000000,&local_188,param_1,param_2);
      uVar8 = uVar8 & 0xffffffffffffff00;
      uVar5 = (ulonglong)plVar6 & 0xffffffffffffff00;
      FUN_140e87440(&DAT_1419df7b0,DAT_141a1f4e0,0x80000000,&local_198,uVar5,uVar8);
      uVar8 = uVar8 & 0xffffffffffffff00;
      uVar5 = uVar5 & 0xffffffffffffff00;
      FUN_140e87440(&DAT_1419df7b0,DAT_141a0a7d8,0x80000000,&local_1a8,uVar5,uVar8);
    }
    else {
      FUN_140e87170(*param_5,DAT_1419fe0e8,0x80000000,&local_178,param_1,param_2);
      plVar6 = param_1;
      uVar8 = param_2;
      FUN_140e87170(*param_5,DAT_1419fe158,0x80000000,&local_188,param_1,param_2);
      uVar8 = uVar8 & 0xffffffffffffff00;
      uVar5 = (ulonglong)plVar6 & 0xffffffffffffff00;
      FUN_140e87440(*param_5,DAT_141a1f4e0,0x80000000,&local_198,uVar5,uVar8);
      uVar8 = uVar8 & 0xffffffffffffff00;
      uVar5 = uVar5 & 0xffffffffffffff00;
      FUN_140e87440(*param_5,DAT_141a0a7d8,0x80000000,&local_1a8,uVar5,uVar8);
      param_5 = (undefined8 *)*param_5;
    }
    uVar5 = uVar5 & 0xffffffffffffff00;
    FUN_140e87440(param_5,DAT_141a57370,0x80000000,&local_168,uVar5,uVar8 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar5 >> 0x20);
    local_1d8 = DAT_141a575a0 & 0xffffff;
    uStack_1d4 = (int)(DAT_141a575a0 | 0x5000000) >> 0x18 & 0xff;
    if (uStack_1d4 == 0xf) {
      uStack_1d4 = 0x4000004;
    }
    else {
      uStack_1d4 = uStack_1d4 | 0x1000000;
    }
    uStack_7c = 0xf;
    local_88 = CONCAT44(uStack_1d4,DAT_141a575a0) & 0xffffffff00ffffff;
    uStack_1d0 = uStack_80;
    uStack_1cc = 0xf;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_1d8);
    local_78 = local_118;
    local_1d8 = (uint)local_178;
    uStack_1d4 = local_178._4_4_;
    uStack_1d0 = uStack_170;
    uStack_1cc = uStack_16c;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_1d8);
    local_1d8 = (uint)local_188;
    uStack_1d4 = local_188._4_4_;
    uStack_1d0 = uStack_180;
    uStack_1cc = uStack_17c;
    local_70 = local_108;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1d8);
    local_68 = local_f8;
    local_1d8 = (uint)local_198;
    uStack_1d4 = local_198._4_4_;
    uStack_1d0 = uStack_190;
    uStack_1cc = uStack_18c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_1d8);
    local_60 = local_e8;
    if (puVar3 != local_d8) {
      local_1d8 = *puVar3;
      uStack_1d4 = puVar3[1];
      uStack_1d0 = puVar3[2];
      uStack_1cc = puVar3[3];
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_1d8);
    }
    local_58 = local_d8;
    local_1d8 = (uint)local_1a8;
    uStack_1d4 = local_1a8._4_4_;
    uStack_1d0 = uStack_1a0;
    uStack_1cc = uStack_19c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_1d8);
    local_50 = local_c8;
    local_1d8 = (uint)local_168;
    uStack_1d4 = local_168._4_4_;
    uStack_1d0 = uStack_160;
    uStack_1cc = uStack_15c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_1d8);
    local_48 = local_b8;
    puVar3 = (uint *)FUN_140e634e0(param_1,param_2,&local_1c8,7,CONCAT44(uVar7,DAT_1419fd6d8),
                                   &local_78);
    if (puVar3 != local_a8) {
      local_1d8 = *puVar3;
      uStack_1d4 = puVar3[1];
      uStack_1d0 = puVar3[2];
      uStack_1cc = puVar3[3];
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_1d8);
    }
    local_40 = local_a8;
    local_1d8 = (uint)DAT_1419df7b0;
    uStack_1d4 = DAT_1419df7b0._4_4_;
    uStack_1d0 = DAT_1419df7b8;
    uStack_1cc = DAT_1419df7bc;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_1d8);
    local_38 = local_98;
    gml_Script_draw_line_sprite(param_1,param_2,&local_1b8,2,&local_40);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(local_118,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

