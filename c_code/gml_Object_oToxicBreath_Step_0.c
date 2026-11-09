// gml_Object_oToxicBreath_Step_0 @ 0x140dc8150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oToxicBreath_Step_0(undefined1 **param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 ***pppuVar3;
  undefined8 *puVar4;
  double *pdVar5;
  double *pdVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 **ppuVar9;
  double dVar10;
  double dVar11;
  undefined1 **ppuVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  ulonglong uVar16;
  undefined4 uVar18;
  ulonglong uVar17;
  undefined4 uVar19;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined1 **local_238;
  undefined4 uStack_230;
  uint uStack_22c;
  undefined1 **local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined1 **local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  undefined1 **local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b4;
  undefined1 **local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined1 local_198 [12];
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined8 local_168;
  byte local_15c;
  undefined1 **local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  double local_138;
  uint local_12c;
  double local_128;
  uint local_11c;
  double local_118;
  uint local_10c;
  double local_108;
  uint local_fc;
  undefined1 **local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  
  local_1f0 = "gml_Object_oTongue_Draw_0";
  local_1e8 = 0;
  local_1f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1f8;
  _eh_vector_constructor_iterator_(local_198,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = (undefined1 **)0x0;
  local_20c = 0xffffff;
  local_218 = (undefined1 **)0x0;
  local_1a4 = 0xffffff;
  local_1b0 = (undefined1 **)0x0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uVar7 = 0xffffff;
  local_1c4 = 0xffffff;
  local_1d0 = 0;
  uVar8 = 0xffffff;
  local_1d4 = 0xffffff;
  local_1e0 = (undefined1 **)0x0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_1e8 = 3;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  ppuVar12 = param_1;
  uVar17 = param_2;
  FUN_140e87170(uVar2,DAT_141a0a7e8,0,&local_a8,param_1,param_2);
  uStack_21c = 0;
  local_228 = (undefined1 **)&DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(&local_a8,&local_228,DAT_141955260,0);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if (iVar1 != 0) {
    local_1e8 = 5;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
    uVar16 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
    FUN_140e87440(uVar2,DAT_141a574b0,0x80000000,&local_f8,uVar16,uVar17 & 0xffffffffffffff00);
    uVar18 = (undefined4)(uVar16 >> 0x20);
    local_268 = local_f8;
    uStack_260 = (char *)CONCAT44(uStack_ec,uStack_f0);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_268);
    local_e8 = local_198;
    ppuVar12 = &local_e8;
    uVar17 = CONCAT44(uVar18,DAT_141a047c8);
    pppuVar3 = (undefined1 ***)FUN_140e634e0(param_1,param_2,&local_248,1,uVar17,ppuVar12);
    if (pppuVar3 != &local_218) {
      local_268 = *pppuVar3;
      uStack_260 = (char *)pppuVar3[1];
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_268);
    }
    local_1e8 = 6;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
    uVar16 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
    uVar17 = uVar17 & 0xffffffffffffff00;
    FUN_140e87440(uVar2,DAT_1419f5b48,0x80000000,&local_1b0,uVar17,uVar16);
    uStack_22c = local_1a4;
    uStack_230 = local_1a8;
    if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) == 0) {
      local_238 = local_1b0;
    }
    else {
      FUN_1400419b0(&local_238,&local_1b0);
    }
    FUN_140042560(&local_238,&local_218);
    local_268 = local_238;
    uStack_260 = (char *)CONCAT44(uStack_22c,uStack_230);
    if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c0);
    }
    FUN_140041b80(&local_1c0);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_1e8 = 8;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    uStack_21c = 6;
    uVar17 = uVar17 & 0xffffffffffffff00;
    local_228 = param_1;
    FUN_140e87440(&local_228,DAT_141a0a7e8,0,&local_b8,uVar17,uVar16 & 0xffffffffffffff00);
    uVar18 = (undefined4)(uVar17 >> 0x20);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_268 = (undefined1 **)local_b8;
    uStack_260 = (char *)CONCAT44(uStack_ac,uStack_b0);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_268);
    local_e8 = local_198;
    local_e0 = &local_1c0;
    local_268 = (undefined1 **)CONCAT44(uRam0000000141dc7884,_DAT_141dc7880);
    uStack_260 = (char *)CONCAT44(uRam0000000141dc788c,uRam0000000141dc7888);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_268);
    local_d8 = local_178;
    puVar4 = (undefined8 *)FUN_140e79230(&local_208,2,&local_e8);
    if (puVar4 != &local_168) {
      local_268 = (undefined1 **)*puVar4;
      uStack_260 = (char *)puVar4[1];
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_268);
    }
    local_d0 = &local_168;
    puVar4 = (undefined8 *)FUN_140e79090(&local_248,2,&local_d8);
    uVar2 = 0;
    if (puVar4 != &local_1d0) {
      local_268 = (undefined1 **)*puVar4;
      uStack_260 = (char *)puVar4[1];
      FUN_140041b80(&local_1d0,&local_268);
      uVar2 = local_1d0;
      uVar7 = local_1c4;
    }
    local_1e8 = 10;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    uStack_21c = local_20c;
    uStack_220 = local_210;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) == 0) {
      local_228 = local_218;
    }
    else {
      FUN_1400419b0(&local_228,&local_218);
    }
    uStack_260._4_4_ = 7;
    local_268 = (undefined1 **)CONCAT44(local_268._4_4_,1);
    FUN_1400462a0(&local_228,&local_268);
    if ((1 << ((byte)uStack_260._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_140 = local_1c8;
    local_13c = uVar7;
    if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) == 0) {
      local_148 = uVar2;
    }
    else {
      FUN_1400419b0(&local_148,&local_1d0);
    }
    FUN_140046500(&local_148,&local_1c0);
    uStack_22c = 0;
    local_238 = (undefined1 **)0x3ff0000000000000;
    FUN_1400462a0(&local_238,&local_148);
    uStack_14c = uStack_22c;
    uStack_150 = uStack_230;
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
      local_158 = local_238;
    }
    else {
      FUN_1400419b0(&local_158,&local_238);
    }
    FUN_140042560(&local_158,&local_228);
    local_268 = local_158;
    uStack_260 = (char *)CONCAT44(uStack_14c,uStack_150);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_268);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_e8 = local_198;
    ppuVar12 = &local_e8;
    uVar16 = CONCAT44(uVar18,DAT_1419fe728);
    pppuVar3 = (undefined1 ***)FUN_140e634e0(param_1,param_2,&local_248,1,uVar16,ppuVar12);
    ppuVar9 = (undefined1 **)0x0;
    if (pppuVar3 != &local_1e0) {
      local_268 = *pppuVar3;
      uStack_260 = (char *)pppuVar3[1];
      FUN_140041b80(&local_1e0,&local_268);
      ppuVar9 = local_1e0;
      uVar8 = local_1d4;
    }
    local_1e8 = 0xc;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
    uVar17 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
    FUN_140e87440(uVar2,DAT_141a574b0,0x80000000,&local_f8,uVar16 & 0xffffffffffffff00,uVar17);
    local_268 = local_f8;
    uStack_260 = (char *)CONCAT44(uStack_ec,uStack_f0);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_268);
    local_e8 = local_198;
    uStack_220 = local_1d8;
    uStack_21c = uVar8;
    if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) == 0) {
      local_228 = ppuVar9;
    }
    else {
      FUN_1400419b0(&local_228,&local_1e0);
    }
    uStack_260._4_4_ = 7;
    local_268 = (undefined1 **)CONCAT44(local_268._4_4_,1);
    FUN_1400460e0(&local_228,&local_268);
    if ((1 << ((byte)uStack_260._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = local_228;
    uStack_260 = (char *)CONCAT44(uStack_21c,uStack_220);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_268);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_e0 = (undefined8 *)local_188;
    local_268 = (undefined1 **)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_260 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_268);
    local_d8 = local_178;
    ppuVar12 = &local_e8;
    gml_Script_pal_swap_layer_init(param_1,param_2,&local_248,3,ppuVar12);
  }
  local_1e8 = 0x10;
  pdVar5 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fddd8);
  pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
  uStack_260._4_4_ = 6;
  uVar17 = uVar17 & 0xffffffffffffff00;
  uVar16 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_141a0a728,0x80000000,&local_108,uVar16,uVar17);
  if ((1 << ((byte)uStack_260._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_260._4_4_ = 6;
  uVar17 = uVar17 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_1419fe0e8,0x80000000,&local_118,uVar16,uVar17);
  if ((1 << ((byte)uStack_260._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_260._4_4_ = 6;
  uVar17 = uVar17 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_1419fe158,0x80000000,&local_128,uVar16,uVar17);
  if ((1 << ((byte)uStack_260._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_260._4_4_ = 6;
  uVar17 = uVar17 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_141a0f938,0x80000000,&local_138,uVar16,uVar17);
  uVar18 = (undefined4)(uVar16 >> 0x20);
  uVar19 = (undefined4)(uVar17 >> 0x20);
  if ((1 << ((byte)uStack_260._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_22c = *(uint *)((longlong)pdVar5 + 0xc);
  uStack_230 = *(undefined4 *)(pdVar5 + 1);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
    local_238 = (undefined1 **)*pdVar5;
  }
  else {
    FUN_1400419b0(&local_238,pdVar5);
  }
  FUN_140042560(&local_238,uVar2);
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar10 = *pdVar6;
  }
  else {
    dVar10 = (double)FUN_140e4b060(pdVar6);
  }
  dVar11 = local_138;
  if ((local_12c & 0xffffff) != 0) {
    dVar11 = (double)FUN_140e4b060(&local_138);
  }
  ppuVar12 = local_238;
  if ((uStack_22c & 0xffffff) != 0) {
    ppuVar12 = (undefined1 **)FUN_140e4b060(&local_238);
  }
  dVar13 = local_128;
  if ((local_11c & 0xffffff) != 0) {
    dVar13 = (double)FUN_140e4b060(&local_128);
  }
  dVar14 = local_118;
  if ((local_10c & 0xffffff) != 0) {
    dVar14 = (double)FUN_140e4b060(&local_118);
  }
  dVar15 = local_108;
  if ((local_fc & 0xffffff) != 0) {
    dVar15 = (double)FUN_140e4b060(&local_108);
  }
  FUN_140ec5dd0(param_1,(longlong)dVar15,0,(float)dVar14,CONCAT44(uVar18,(float)dVar13),
                CONCAT44(uVar19,(float)(double)ppuVar12),(float)dVar11,(float)dVar10,0xffffff,
                0x3f800000);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_1e8 = 0x12;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  FUN_140e87170(uVar2,DAT_141a0a7e8,0,&local_c8,param_1,param_2);
  uStack_260 = (char *)(ulonglong)(uint)uStack_260;
  local_268 = (undefined1 **)&DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(&local_c8,&local_268,DAT_141955260,0);
  if ((1 << ((byte)((ulonglong)uStack_260 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if (iVar1 != 0) {
    local_1e8 = 0x13;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_240 = 0;
    uStack_260 = "gml_Script_pal_swap_reset";
    local_268 = (undefined1 **)DAT_141dc7a50;
    DAT_141dc7a50 = &local_268;
    local_23c = 5;
    local_248 = 0;
    local_258 = 0x71;
    iVar1 = FUN_140ec9d80();
    if (iVar1 != -1) {
      local_258 = 0x71;
      FUN_140ec9dc0();
    }
    DAT_141dc7a50 = local_268;
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_198,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1f8;
  return;
}

