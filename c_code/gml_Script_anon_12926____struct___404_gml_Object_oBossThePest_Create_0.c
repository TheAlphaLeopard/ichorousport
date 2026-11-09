// gml_Script_anon_12926____struct___404_gml_Object_oBossThePest_Create_0 @ 0x14081efc0

undefined8 *
gml_Script_anon_12926____struct___404_gml_Object_oBossThePest_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 **ppuVar10;
  longlong *local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_184;
  longlong *local_180;
  undefined4 local_178;
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
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
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
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  local_1c0 = "gml_Script_anon@11542@___struct___404@gml_Object_oBossThePest_Create_0";
  local_1c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c8;
  local_1b8 = 0x2a5;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(&local_a8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_174 = 0xffffff;
  local_180 = (longlong *)0x0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1b8 = 0x2a6;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar3 != &local_a8) {
    local_218 = (longlong *)*puVar3;
    uStack_210 = puVar3[1];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_218);
  }
  local_68 = &local_a8;
  ppuVar10 = &local_68;
  uVar7 = CONCAT44(uVar6,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_1f8,1,uVar7,ppuVar10);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_1b8 = 0x2a6;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
    FUN_140e609c0(param_1);
    uVar7 = 0;
    puVar5 = (undefined8 *)gml_Script_FracPos(param_1,param_2,&local_1e8,0,0);
    if (puVar5 != puVar3) {
      local_218 = (longlong *)*puVar5;
      uStack_210 = puVar5[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_218);
    }
    FUN_140e60910(1);
  }
  local_1b8 = 0x2a7;
  uStack_210 = CONCAT44(0xf,(undefined4)uStack_210);
  local_218 = (longlong *)0x100000100000354;
  local_208 = 0x100000100000354;
  uStack_200 = CONCAT44(0xf,(undefined4)uStack_210);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_208);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_f8);
  local_1b8 = 0x2a8;
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  local_164 = 0;
  local_170 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_170);
  local_1b8 = 0x2a9;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar4,DAT_1419f5fd8,0x80000000,&local_108,uVar7 & 0xffffffffffffff00,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  uStack_210._0_4_ = DAT_141dd6d90;
  uStack_210._4_4_ = DAT_141dd6d94;
  if ((1 << ((byte)DAT_141dd6d94 & 0x1f) & 0x46U) == 0) {
    local_218 = DAT_141dd6d88;
  }
  else {
    FUN_1400419b0(&local_218,&DAT_141dd6d88);
  }
  uVar4 = FUN_140069500(uVar4);
  uVar7 = 0;
  puVar3 = &local_108;
  uVar4 = FUN_140e63610(uVar4,param_2,&local_1f8,0,puVar3,0);
  iVar2 = FUN_140e851f0(uVar4,&local_218,DAT_141955260,0);
  if ((1 << ((byte)uStack_210._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if (iVar2 != 0) {
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar4,DAT_1419f5fd8,0x80000000,&local_108,(ulonglong)puVar3 & 0xffffffffffffff00,
                  uVar7 & 0xffffffffffffff00);
    uStack_210._4_4_ = DAT_141dd6cc4;
    uStack_210._0_4_ = DAT_141dd6cc0;
    if ((1 << ((byte)DAT_141dd6cc4 & 0x1f) & 0x46U) == 0) {
      local_218 = DAT_141dd6cb8;
    }
    else {
      FUN_1400419b0(&local_218,&DAT_141dd6cb8);
    }
    uVar4 = FUN_140069500(uVar4);
    uVar4 = FUN_140e63610(uVar4,param_2,&local_1e8,0,&local_108,0);
    iVar2 = FUN_140e851f0(uVar4,&local_218,DAT_141955260,0);
    if ((1 << ((byte)uStack_210._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    if (iVar2 != 0) {
      local_1b8 = 0x2ac;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      goto LAB_14081f594;
    }
  }
  local_1b8 = 0x2aa;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0x4020000000000000;
LAB_14081f594:
  local_1cc = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_1d8);
  local_1b8 = 0x2ae;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  plVar8 = param_1;
  uVar7 = param_2;
  FUN_140e87170(uVar4,DAT_1419fe0e8,0x80000000,&local_180,param_1,param_2);
  uStack_210._4_4_ = 6;
  uVar7 = uVar7 & 0xffffffffffffff00;
  uVar9 = (ulonglong)plVar8 & 0xffffffffffffff00;
  local_218 = param_1;
  FUN_140e87440(&local_218,DAT_1419fe0e8,0x80000000,&local_118,uVar9,uVar7);
  if ((1 << ((byte)uStack_210._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  uStack_210 = CONCAT44(local_174,local_178);
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) == 0) {
    local_218 = local_180;
  }
  else {
    FUN_1400419b0(&local_218,&local_180);
  }
  FUN_1400462a0(&local_218,&local_118);
  if ((uStack_210 & 0xffffff00000000) == 0) {
    uVar6 = SUB84(local_218,0);
  }
  else {
    uVar6 = FUN_140e4b060(&local_218);
  }
  uVar4 = FUN_140e79500(uVar6);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = uVar4;
  if ((1 << ((byte)(uStack_210 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_1b8 = 0x2b0;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uStack_210._4_4_ = 6;
  uVar7 = uVar7 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_218 = param_1;
  FUN_140e87440(&local_218,DAT_1419fe0e8,0x80000000,&local_118,uVar9,uVar7);
  if ((1 << ((byte)uStack_210._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  uStack_210._4_4_ = 6;
  uVar7 = uVar7 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_218 = param_1;
  FUN_140e87440(&local_218,DAT_1419fe158,0x80000000,&local_b8,uVar9,uVar7);
  if ((1 << ((byte)uStack_210._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  uStack_210._4_4_ = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_218 = param_1;
  FUN_140e87440(&local_218,DAT_141a1b910,0x80000000,&local_c8,uVar9,uVar7 & 0xffffffffffffff00);
  uVar6 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_210._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_208 = local_118;
  uStack_200 = CONCAT44(uStack_10c,uStack_110);
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_208);
  local_68 = &local_a8;
  local_208 = local_b8;
  uStack_200 = CONCAT44(uStack_ac,uStack_b0);
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_208);
  local_60 = local_98;
  local_208 = local_c8;
  uStack_200 = CONCAT44(uStack_bc,uStack_c0);
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_208);
  local_58 = local_88;
  uStack_210 = CONCAT44(0xf,(undefined4)uStack_210);
  local_218 = (longlong *)0x100000000000005;
  local_208 = 0x100000000000005;
  uStack_200 = CONCAT44(0xf,(undefined4)uStack_210);
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_208);
  local_50 = local_78;
  ppuVar10 = &local_68;
  uVar7 = CONCAT44(uVar6,DAT_141a0a7c8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1f8,4,uVar7,ppuVar10);
  if (puVar3 != &local_190) {
    local_208 = *puVar3;
    uStack_200 = puVar3[1];
    if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_190);
    }
    FUN_140041b80(&local_190,&local_208);
  }
  FUN_140e87930(uVar4,DAT_1419f6278,0x80000000,&local_190);
  local_1b8 = 0x2b1;
  uStack_210._4_4_ = 6;
  uVar9 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_218 = param_1;
  FUN_140e87440(&local_218,DAT_141a0a828,0x80000000,&local_d8,uVar7,uVar9);
  if ((1 << ((byte)uStack_210._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_208 = local_d8;
  uStack_200 = CONCAT44(uStack_cc,uStack_d0);
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  FUN_140041b80(&local_130,&local_208);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f6278,0x80000000,&local_1b0,uVar7,uVar9);
  FUN_140e87930(&local_1b0,DAT_141a1f0d0,0x80000000,&local_130);
  local_1b8 = 0x2b2;
  uStack_210 = CONCAT44(0xf,(undefined4)uStack_210);
  local_218 = (longlong *)0x100000100000356;
  local_208 = 0x100000100000356;
  uStack_200 = CONCAT44(0xf,(undefined4)uStack_210);
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  FUN_140041b80(&local_140,&local_208);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f6278,0x80000000,&local_1b0,uVar7,uVar9);
  FUN_140e86c30(&local_1b0,DAT_141a0a728,0x80000000,&local_140);
  local_1b8 = 0x2b3;
  uStack_210._4_4_ = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_218 = param_1;
  FUN_140e87440(&local_218,DAT_141a0cfc8,0x80000000,&local_e8,uVar7,uVar9);
  if ((1 << ((byte)uStack_210._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_208 = local_e8;
  uStack_200 = CONCAT44(uStack_dc,uStack_e0);
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  FUN_140041b80(&local_150,&local_208);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f6278,0x80000000,&local_1b0,uVar7,uVar9);
  FUN_140e86c30(&local_1b0,DAT_141a0cfc8,0x80000000,&local_150);
  local_1b8 = 0x2b4;
  uStack_210 = CONCAT44(0xd,(undefined4)uStack_210);
  local_218 = (longlong *)0x0;
  local_208 = 0;
  uStack_200 = uStack_210;
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  FUN_140041b80(&local_160,&local_208);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar4,DAT_1419f6278,0x80000000,&local_1b0,uVar7 & 0xffffffffffffff00,
                uVar9 & 0xffffffffffffff00);
  FUN_140e87930(&local_1b0,DAT_141a01e48,0x80000000,&local_160);
  local_1b8 = 0x2b6;
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  local_194 = 0;
  local_1a0 = 0;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar4,DAT_141a09c68,0x80000000,&local_1a0);
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1c8;
  return param_3;
}

