// gml_Script_anon_342_gml_Object_oPickupIronLarge_Create_0 @ 0x140be24b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_342_gml_Object_oPickupIronLarge_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  double dVar6;
  undefined4 uVar8;
  ulonglong uVar7;
  ulonglong uVar9;
  undefined8 **ppuVar10;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  uint local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  char *local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_108;
  byte local_fc;
  double local_f8;
  undefined4 local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 *local_88;
  double *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  local_190 = "gml_Script_anon@289@gml_Object_oPickupBrain_Create_0";
  local_198 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_198;
  local_188 = 0x12;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_108,0x10,8,FUN_1400424d0,FUN_140041b30);
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57320);
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0.0;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_1fc = 0;
  local_208 = 0;
  local_174 = 0;
  local_180 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_188 = 0x13;
  if (puVar4 != &local_108) {
    local_218 = *puVar4;
    uStack_210 = puVar4[1];
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_218);
  }
  iVar1 = DAT_1419f34a8;
  local_88 = &local_108;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = (double)iVar1;
  local_80 = &local_f8;
  uVar5 = CONCAT44(uVar8,DAT_141a035d8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_208,2,uVar5,&local_88);
  uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar4 != &local_1c8) {
    local_218 = *puVar4;
    uStack_210 = puVar4[1];
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_218);
  }
  local_188 = 0x14;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  local_88 = &local_1c8;
  ppuVar10 = &local_88;
  uVar7 = CONCAT44(uVar8,DAT_1419fcb88);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_208,1,uVar7,ppuVar10);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 == '\0') {
    local_188 = 0x14;
    goto LAB_140be31a2;
  }
  local_188 = 0x16;
  uVar9 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(&local_1c8,DAT_1419f5948,0x80000000,&local_1f8,uVar7,uVar9);
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(&local_1f8,DAT_1419ffeb8,0x80000000,&local_1d8,uVar7,uVar9);
  uVar3 = local_1cc & 0xffffff;
  if (uVar3 == 0) {
LAB_140be27f5:
    local_1d8 = local_1d8 + 1.0;
  }
  else {
    if (uVar3 == 1) {
      local_1d8 = (double)FUN_140e4b060(&local_1d8);
      local_1cc = 0;
      goto LAB_140be27f5;
    }
    if (uVar3 == 7) {
      local_1d8 = (double)CONCAT44(local_1d8._4_4_,local_1d8._0_4_ + 1);
    }
    else if (uVar3 == 10) {
      local_1d8 = (double)((longlong)local_1d8 + 1);
    }
    else {
      if (uVar3 == 0xd) {
        local_1cc = 0;
        goto LAB_140be27f5;
      }
      FUN_140042910(&DAT_14172c3d8,&local_1d8,&local_1d8);
    }
  }
  FUN_140e87930(&local_1f8,DAT_1419ffeb8,0x80000000,&local_1d8);
  local_188 = 0x18;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(&local_1c8,DAT_1419f5948,0x80000000,&local_1f8,uVar7,uVar9);
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(&local_1f8,DAT_1419ffe18,0x80000000,&local_1a8,uVar7,uVar9 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  uStack_210 = CONCAT44(uStack_19c,uStack_1a0);
  local_218 = local_1a8;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_218);
  local_88 = &local_108;
  ppuVar10 = &local_88;
  uVar7 = CONCAT44(uVar8,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_208,1,uVar7,ppuVar10);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 != '\0') {
    local_188 = 0x19;
    uVar9 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_1c8,DAT_1419f5948,0x80000000,&local_1f8,uVar7,uVar9);
    uVar9 = uVar9 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_1f8,DAT_1419ffeb8,0x80000000,&local_1b8,uVar7,uVar9);
    uStack_210 = CONCAT44(local_1ac,local_1b0);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
      local_218 = local_1b8;
      uVar3 = local_1ac;
    }
    else {
      FUN_1400419b0(&local_218,&local_1b8);
      uVar3 = uStack_210._4_4_;
    }
    local_1e8 = local_218;
    uStack_1e0 = uStack_210;
    if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_140);
    }
    FUN_140041b80(&local_140,&local_1e8);
    if ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    uVar9 = uVar9 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_1c8,DAT_1419f5948,0x80000000,&local_1f8,uVar7,uVar9);
    ppuVar10 = (undefined8 **)(uVar9 & 0xffffffffffffff00);
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_1f8,DAT_1419ffe18,0x80000000,&local_1a8,uVar7,ppuVar10);
    FUN_140e87930(&local_1a8,DAT_1419ffc48,0x80000000,&local_140);
  }
  local_188 = 0x1b;
  uVar9 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(&local_1c8,DAT_1419f5948,0x80000000,&local_1f8,uVar7,uVar9);
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(&local_1f8,DAT_1419ffeb8,0x80000000,&local_1b8,uVar7,uVar9);
  if ((local_1ac & 0xffffff) == 0) {
    uVar5 = local_1b8;
  }
  else {
    uVar5 = FUN_140e4b060(&local_1b8);
  }
  dVar6 = (double)FUN_1412a79b0(uVar5,0x4008000000000000);
  if (dVar6 == 0.0) {
    local_188 = 0x1c;
    uVar9 = uVar9 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_1c8,DAT_1419f5948,0x80000000,&local_1f8,uVar7,uVar9);
    uVar9 = uVar9 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_1f8,DAT_1419ffc88,0x80000000,&local_120,uVar7,uVar9);
    FUN_140162d40(&local_120,2);
    FUN_140e87930(&local_1f8,DAT_1419ffc88,0x80000000,&local_120);
    local_188 = 0x1d;
    uStack_210._4_4_ = 0xf;
    local_218 = 0x1000000000000ee;
    uVar9 = uVar9 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_218,DAT_1419f59c8,0x80000000,&local_130,uVar7,uVar9);
    if ((1 << ((byte)uStack_210._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140162d40(&local_130,2);
    uStack_210._4_4_ = 0xf;
    local_218 = 0x1000000000000ee;
    FUN_140e87930(&local_218,DAT_1419f59c8,0x80000000,&local_130);
    if ((1 << ((byte)uStack_210._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_188 = 0x1e;
    uStack_210._4_4_ = 0xf;
    local_218 = 0x1000000000000ee;
    uVar9 = uVar9 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_218,DAT_1419f59c8,0x80000000,&local_160,uVar7,uVar9);
    if ((1 << ((byte)uStack_210._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    uStack_210._0_4_ = local_158;
    uStack_210._4_4_ = local_154;
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) == 0) {
      local_218 = local_160;
    }
    else {
      FUN_1400419b0(&local_218,&local_160);
    }
    uVar8 = uStack_210._4_4_;
    local_1e8 = local_218;
    uStack_1e0._4_4_ = uStack_210._4_4_;
    if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_150);
    }
    FUN_140041b80(&local_150,&local_1e8);
    if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    uStack_210 = CONCAT44(0xf,(undefined4)uStack_210);
    local_218 = 0x1000000000000ee;
    FUN_140e87930(&local_218,DAT_141a0a7d8,0x80000000,&local_150);
    if ((1 << ((byte)((ulonglong)uStack_210 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_188 = 0x20;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    uVar9 = uVar9 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_1c8,DAT_1419f5948,0x80000000,&local_1f8,uVar7,uVar9);
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_1f8,DAT_1419ffe18,0x80000000,&local_1a8,uVar7,uVar9 & 0xffffffffffffff00);
    uVar8 = (undefined4)(uVar7 >> 0x20);
    uStack_1e0 = CONCAT44(uStack_19c,uStack_1a0);
    local_1e8 = local_1a8;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1e8);
    local_88 = &local_108;
    ppuVar10 = &local_88;
    uVar7 = CONCAT44(uVar8,DAT_141a02ef8);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_208,1,uVar7,ppuVar10);
    cVar2 = FUN_140e491e0(uVar5);
    if (cVar2 != '\0') {
      local_188 = 0x21;
      if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_170);
      }
      local_164 = 0;
      local_170 = 0x3ff0000000000000;
      uVar9 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
      uVar7 = uVar7 & 0xffffffffffffff00;
      FUN_140e87440(&local_1c8,DAT_1419f5948,0x80000000,&local_1f8,uVar7,uVar9);
      uVar7 = uVar7 & 0xffffffffffffff00;
      FUN_140e87440(&local_1f8,DAT_1419ffe18,0x80000000,&local_1a8,uVar7,uVar9 & 0xffffffffffffff00)
      ;
      FUN_140e87930(&local_1a8,DAT_1419f3488,0x80000000,&local_170);
    }
  }
  uVar8 = (undefined4)(uVar7 >> 0x20);
  local_188 = 0x24;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  local_180 = 0;
  local_178 = 0;
  local_174 = 5;
  uStack_210 = CONCAT44(0xf,(undefined4)uStack_210);
  local_218 = 0x1000002000000f9;
  local_1e8 = 0x1000002000000f9;
  uStack_1e0 = uStack_210;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_1e8);
  local_88 = &local_108;
  uStack_210 = CONCAT44(0xf,(undefined4)uStack_210);
  local_218 = 0x1000002000000fa;
  local_1e8 = 0x1000002000000fa;
  uStack_1e0 = uStack_210;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_1e8);
  local_80 = &local_f8;
  uStack_210 = CONCAT44(0xf,(undefined4)uStack_210);
  local_218 = 0x1000002000000fb;
  local_1e8 = 0x1000002000000fb;
  uStack_1e0 = uStack_210;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_1e8);
  local_78 = local_e8;
  uStack_210 = CONCAT44(0xf,(undefined4)uStack_210);
  local_218 = 0x1000002000000fc;
  local_1e8 = 0x1000002000000fc;
  uStack_1e0 = uStack_210;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_1e8);
  local_70 = local_d8;
  puVar4 = (undefined8 *)FUN_140e78db0(&local_180,4,&local_88);
  if (puVar4 != &local_c8) {
    local_1e8 = *puVar4;
    uStack_1e0 = puVar4[1];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_1e8);
  }
  local_68 = &local_c8;
  local_1e8 = _DAT_1419eca10;
  uStack_1e0 = uRam00000001419eca18;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_1e8);
  local_60 = local_b8;
  local_1e8 = _DAT_1419df7a0;
  uStack_1e0 = uRam00000001419df7a8;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_1e8);
  local_58 = local_a8;
  local_1e8 = _DAT_1419ec9e0;
  uStack_1e0 = uRam00000001419ec9e8;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_1e8);
  local_50 = local_98;
  FUN_140e634e0(param_1,param_2,&local_208,4,CONCAT44(uVar8,DAT_141a0a2e8),&local_68);
LAB_140be31a2:
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_198;
  return param_3;
}

