// gml_Script_anon_1458____struct___413_gml_Object_oCageArm_Create_0 @ 0x140879ae0

undefined8 *
gml_Script_anon_1458____struct___413_gml_Object_oCageArm_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint *puVar4;
  code *pcVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  ulonglong in_stack_fffffffffffffe10;
  ulonglong uVar9;
  uint local_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  undefined8 local_1d8;
  uint uStack_1d0;
  uint uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
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
  uint uStack_160;
  uint uStack_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined1 local_128 [16];
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
  uint local_b8 [3];
  byte local_ac;
  uint local_a8 [3];
  byte local_9c;
  uint local_98 [3];
  byte local_8c;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  uint *local_60;
  undefined1 *local_58;
  uint *local_50;
  uint *local_48;
  uint *local_40;
  
  local_140 = "gml_Script_anon@1042@gml_Object_oCageArm_Create_0";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0x3f;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_128,0x10,10,FUN_1400424d0,FUN_140041b30);
  local_14c = 0xffffff;
  local_158 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  uStack_18c = 0xffffff;
  local_198 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  puVar2 = (uint *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a11f28);
  local_19c = 0;
  local_1a8 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_138 = 0x41;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  FUN_140e87440(uVar3,DAT_141a1f090,0x80000000,&local_158,(ulonglong)pcVar5 & 0xffffffffffffff00,
                in_stack_fffffffffffffe10 & 0xffffffffffffff00);
  uStack_1cc = 0;
  local_1d8 = 0;
  iVar1 = FUN_140e851f0(&local_158,&local_1d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (0 < iVar1) {
    local_138 = 0x42;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
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
    puVar4 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
    if (param_4 < 1) {
      param_5 = &DAT_1419df7b0;
      FUN_140e87170(&DAT_1419df7b0,DAT_1419fe0e8,0x80000000,&local_178,param_1,param_2);
      plVar7 = param_1;
      uVar9 = param_2;
      FUN_140e87170(&DAT_1419df7b0,DAT_1419fe158,0x80000000,&local_188,param_1,param_2);
      uVar9 = uVar9 & 0xffffffffffffff00;
      uVar6 = (ulonglong)plVar7 & 0xffffffffffffff00;
      FUN_140e87440(&DAT_1419df7b0,DAT_141a1f4e0,0x80000000,&local_198,uVar6,uVar9);
    }
    else {
      FUN_140e87170(*param_5,DAT_1419fe0e8,0x80000000,&local_178,param_1,param_2);
      plVar7 = param_1;
      uVar9 = param_2;
      FUN_140e87170(*param_5,DAT_1419fe158,0x80000000,&local_188,param_1,param_2);
      uVar9 = uVar9 & 0xffffffffffffff00;
      uVar6 = (ulonglong)plVar7 & 0xffffffffffffff00;
      FUN_140e87440(*param_5,DAT_141a1f4e0,0x80000000,&local_198,uVar6,uVar9);
      param_5 = (undefined8 *)*param_5;
    }
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(param_5,DAT_141a0a7d8,0x80000000,&local_168,uVar6,uVar9 & 0xffffffffffffff00);
    uVar8 = (undefined4)(uVar6 >> 0x20);
    local_1e8 = DAT_141a575a0 & 0xffffff;
    uStack_1e4 = (int)(DAT_141a575a0 | 0x5000000) >> 0x18 & 0xff;
    if (uStack_1e4 == 0xf) {
      uStack_1e4 = 0x4000004;
    }
    else {
      uStack_1e4 = uStack_1e4 | 0x1000000;
    }
    uStack_1cc = 0xf;
    local_1d8 = CONCAT44(uStack_1e4,DAT_141a575a0) & 0xffffffff00ffffff;
    uStack_1e0 = uStack_1d0;
    uStack_1dc = 0xf;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_1e8);
    local_1e8 = (uint)local_178;
    uStack_1e4 = local_178._4_4_;
    uStack_1e0 = uStack_170;
    uStack_1dc = uStack_16c;
    local_80 = local_118;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_1e8);
    local_78 = local_108;
    local_1e8 = (uint)local_188;
    uStack_1e4 = local_188._4_4_;
    uStack_1e0 = uStack_180;
    uStack_1dc = uStack_17c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1e8);
    local_70 = local_f8;
    local_1e8 = (uint)local_198;
    uStack_1e4 = local_198._4_4_;
    uStack_1e0 = uStack_190;
    uStack_1dc = uStack_18c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_1e8);
    local_68 = local_e8;
    if (puVar4 != local_d8) {
      local_1e8 = *puVar4;
      uStack_1e4 = puVar4[1];
      uStack_1e0 = puVar4[2];
      uStack_1dc = puVar4[3];
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_1e8);
    }
    local_60 = local_d8;
    local_1e8 = (uint)local_168;
    uStack_1e4 = local_168._4_4_;
    uStack_1e0 = uStack_160;
    uStack_1dc = uStack_15c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_1e8);
    local_58 = local_c8;
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_1d8,gml_Script_anon_1219____struct___413_gml_Object_oCageArm_Create_0,0);
    if ((uint *)&local_1d8 != puVar2) {
      local_1e8 = (uint)local_1d8;
      uStack_1e4 = local_1d8._4_4_;
      uStack_1e0 = uStack_1d0;
      uStack_1dc = uStack_1cc;
      if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_1e8);
    }
    FUN_140e60910(1);
    if (puVar2 != local_b8) {
      local_1e8 = *puVar2;
      uStack_1e4 = puVar2[1];
      uStack_1e0 = puVar2[2];
      uStack_1dc = puVar2[3];
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_1e8);
    }
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_50 = local_b8;
    uVar3 = CONCAT44(uVar8,DAT_1419fd6d8);
    puVar2 = (uint *)FUN_140e634e0(param_1,param_2,&local_1b8,6,uVar3,&local_80);
    uVar8 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (puVar2 != local_a8) {
      local_1e8 = *puVar2;
      uStack_1e4 = puVar2[1];
      uStack_1e0 = puVar2[2];
      uStack_1dc = puVar2[3];
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_1e8);
    }
    local_48 = local_a8;
    puVar2 = (uint *)FUN_140e634e0(param_1,param_2,&local_1c8,1,CONCAT44(uVar8,DAT_1419fd6d8),
                                   &local_50);
    if (puVar2 != local_98) {
      local_1e8 = *puVar2;
      uStack_1e4 = puVar2[1];
      uStack_1e0 = puVar2[2];
      uStack_1dc = puVar2[3];
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_1e8);
    }
    local_40 = local_98;
    gml_Script_draw_line_sprite(param_1,param_2,&local_1a8,2,&local_48);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
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
  _eh_vector_destructor_iterator_(local_128,0x10,10,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return param_3;
}

