// gml_Object_oCageArm_Other_76 @ 0x14087eab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oCageArm_Other_76(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double *pdVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  longlong *local_res8;
  longlong *local_res10;
  uint local_res18;
  code *pcVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  ulonglong in_stack_fffffffffffffce0;
  undefined1 **ppuVar14;
  ulonglong uVar15;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  longlong *local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  double local_2d8;
  uint local_2cc;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  double local_2b8;
  uint local_2ac;
  undefined8 local_2a8;
  char *local_2a0;
  undefined4 local_298;
  undefined8 local_290;
  undefined4 local_284;
  undefined8 local_280;
  undefined4 local_274;
  longlong *local_270;
  undefined4 local_264;
  undefined8 local_260;
  undefined4 local_254;
  undefined8 local_250;
  undefined4 local_244;
  undefined8 local_240;
  undefined4 local_234;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined1 local_218 [12];
  byte local_20c;
  undefined1 local_208 [12];
  byte local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined1 local_1e8 [12];
  byte local_1dc;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  longlong *local_110;
  undefined4 local_104;
  undefined1 local_100 [16];
  longlong local_f0;
  undefined1 local_e0 [16];
  longlong local_d0;
  
  uVar5 = 0;
  local_res18 = 0;
  local_2a0 = "gml_Object_oCageArm_Destroy_0";
  local_298 = 0;
  local_2a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2a8;
  pcVar11 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_218,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_14c = 0xffffff;
  local_158 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  uStack_18c = 0xffffff;
  local_198 = 0;
  local_234 = 0xffffff;
  local_240 = 0;
  local_244 = 0xffffff;
  local_250 = 0;
  local_254 = 0xffffff;
  local_260 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0.0;
  local_2cc = 0xffffff;
  local_2d8 = 0.0;
  local_2ec = 0xffffff;
  local_2f8 = 0;
  iVar7 = 0x14;
  do {
    iVar7 = iVar7 + -1;
    local_298 = 7;
    local_104 = 6;
    local_110 = local_res8;
    in_stack_fffffffffffffce0 = in_stack_fffffffffffffce0 & 0xffffffffffffff00;
    uVar12 = (ulonglong)pcVar11 & 0xffffffffffffff00;
    FUN_140e87440(&local_110,DAT_141a0f7f8,0x80000000,&local_158,uVar12,in_stack_fffffffffffffce0);
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    uStack_21c = 0;
    local_228 = 0x3ff0000000000000;
    iVar2 = FUN_140e851f0(&local_158,&local_228,DAT_141955260,0);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    if (iVar2 == 0) {
      local_274 = 0;
      local_280 = 0;
      puVar6 = &local_280;
      uVar5 = uVar5 | 1;
    }
    else {
      local_284 = 0;
      local_290 = 0x4066800000000000;
      puVar6 = &local_290;
      uVar5 = uVar5 | 2;
    }
    local_res18 = uVar5;
    local_2e8 = FUN_140e794b0(0,0);
    local_2dc = 0;
    local_res18 = uVar5 | 0x40;
    FUN_140042560(&local_2e8,&local_158);
    uStack_2bc = local_2dc;
    uStack_2c0 = local_2e0;
    if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) == 0) {
      local_2c8 = local_2e8;
    }
    else {
      FUN_1400419b0(&local_2c8,&local_2e8);
    }
    local_res18 = uVar5 | 0xc0;
    FUN_1400460e0(&local_2c8,puVar6);
    local_318 = (undefined4)local_2c8;
    uStack_314 = local_2c8._4_4_;
    uStack_310 = uStack_2c0;
    uStack_30c = uStack_2bc;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_318);
    local_res18 = uVar5 | 0x40;
    if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_res18 = uVar5;
    if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    if (((uVar5 & 2) != 0) &&
       (uVar5 = uVar5 & 0xffffff3d, local_res18 = uVar5,
       (1 << ((byte)local_284 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_290);
    }
    if (((uVar5 & 1) != 0) &&
       (uVar5 = uVar5 & 0xfffffffe, (1 << ((byte)local_274 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_280);
    }
    local_298 = 8;
    uVar3 = FUN_140e794b0(0,0);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_16c = 0;
    local_298 = 9;
    local_178 = uVar3;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    local_264 = 6;
    local_270 = local_res8;
    in_stack_fffffffffffffce0 = in_stack_fffffffffffffce0 & 0xffffffffffffff00;
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(&local_270,DAT_1419fe0e8,0x80000000,&local_188,uVar12,in_stack_fffffffffffffce0);
    if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_270);
    }
    uStack_2fc = 6;
    local_308 = local_res8;
    in_stack_fffffffffffffce0 = in_stack_fffffffffffffce0 & 0xffffffffffffff00;
    FUN_140e87440(&local_308,DAT_1419fe158,0x80000000,&local_198,uVar12 & 0xffffffffffffff00,
                  in_stack_fffffffffffffce0);
    if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    local_318 = (undefined4)local_188;
    uStack_314 = local_188._4_4_;
    uStack_310 = uStack_180;
    uStack_30c = uStack_17c;
    if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_318);
    local_148 = local_218;
    local_318 = (undefined4)local_198;
    uStack_314 = local_198._4_4_;
    uStack_310 = uStack_190;
    uStack_30c = uStack_18c;
    if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_318);
    local_140 = local_208;
    local_138 = &local_168;
    local_130 = &local_178;
    local_318 = _DAT_1419e92c0;
    uStack_314 = uRam00000001419e92c4;
    uStack_310 = uRam00000001419e92c8;
    uStack_30c = uRam00000001419e92cc;
    if ((1 << (local_1d8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_318);
    local_128 = local_1d8;
    local_318 = (undefined4)DAT_1419df7b0;
    uStack_314 = DAT_1419df7b0._4_4_;
    uStack_310 = DAT_1419df7b8;
    uStack_30c = DAT_1419df7bc;
    if ((1 << (local_1c8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_318);
    local_120 = local_1c8;
    local_318 = (undefined4)DAT_1419df7b0;
    uStack_314 = DAT_1419df7b0._4_4_;
    uStack_310 = DAT_1419df7b8;
    uStack_30c = DAT_1419df7bc;
    if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_318);
    local_118 = local_1b8;
    pcVar11 = (code *)&local_148;
    gml_Script_get_blood_col(local_res8,local_res10,&local_2f8,7,pcVar11);
  } while (0 < iVar7);
  local_298 = 0xe;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  uStack_2fc = 6;
  local_308 = local_res8;
  in_stack_fffffffffffffce0 = in_stack_fffffffffffffce0 & 0xffffffffffffff00;
  uVar12 = (ulonglong)pcVar11 & 0xffffffffffffff00;
  FUN_140e87440(&local_308,DAT_1419fe0e8,0x80000000,&local_188,uVar12,in_stack_fffffffffffffce0);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  uStack_2fc = 6;
  local_308 = local_res8;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(&local_308,DAT_1419fe158,0x80000000,&local_198,uVar12,
                in_stack_fffffffffffffce0 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_318 = (undefined4)local_188;
  uStack_314 = local_188._4_4_;
  uStack_310 = uStack_180;
  uStack_30c = uStack_17c;
  if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_318);
  local_148 = local_218;
  local_318 = (undefined4)local_198;
  uStack_314 = local_198._4_4_;
  uStack_310 = uStack_190;
  uStack_30c = uStack_18c;
  if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_318);
  local_140 = local_208;
  local_318 = _DAT_141dd7318;
  uStack_314 = uRam0000000141dd731c;
  uStack_310 = uRam0000000141dd7320;
  uStack_30c = DAT_141dd7324;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_318);
  local_138 = &local_1f8;
  uStack_2fc = 0xf;
  local_308 = (longlong *)0x100000000000023;
  local_318 = 0x23;
  uStack_314 = 0x1000000;
  uStack_310 = uStack_300;
  uStack_30c = 0xf;
  if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_318);
  local_130 = (undefined8 *)local_1e8;
  ppuVar14 = &local_148;
  uVar12 = CONCAT44(uVar13,DAT_141a0a7c8);
  uVar3 = FUN_140e634e0(local_res8,local_res10,&local_2f8,4,uVar12,ppuVar14);
  iVar7 = FUN_140e63cb0(local_e0,&local_res8,&local_res10,uVar3);
  if (0 < iVar7) {
    do {
      local_298 = 0x10;
      uStack_21c = 0xf;
      local_228 = 0x10000010000009a;
      local_318 = 0x9a;
      uStack_314 = 0x1000001;
      uStack_310 = uStack_220;
      uStack_30c = 0xf;
      if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_240);
      }
      FUN_140041b80(&local_240,&local_318);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_240);
      local_298 = 0x11;
      if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_250);
      }
      local_244 = 0;
      local_250 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_250);
      local_298 = 0x12;
      if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_260);
      }
      local_254 = 0;
      local_260 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_260);
      local_298 = 0x14;
      uStack_2fc = 6;
      local_308 = local_res10;
      ppuVar14 = (undefined1 **)((ulonglong)ppuVar14 & 0xffffffffffffff00);
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_140e87440(&local_308,DAT_141a0f7f8,0x80000000,&local_1a8,uVar12,ppuVar14);
      if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_308);
      }
      local_264 = 0;
      local_270 = (longlong *)0x3ff0000000000000;
      iVar7 = FUN_140e851f0(&local_1a8,&local_270,DAT_141955260,0);
      if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_270);
      }
      if (iVar7 == 0) {
        local_284 = 0;
        local_290 = 0;
        puVar6 = &local_290;
        uVar5 = uVar5 | 4;
      }
      else {
        local_274 = 0;
        local_280 = 0x4066800000000000;
        puVar6 = &local_280;
        uVar5 = uVar5 | 8;
      }
      local_res18 = uVar5;
      local_2e8 = FUN_140e794b0(0,0);
      local_2dc = 0;
      local_res18 = uVar5 | 0x2000;
      FUN_140042560(&local_2e8,&local_1a8);
      uStack_2bc = local_2dc;
      uStack_2c0 = local_2e0;
      if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) == 0) {
        local_2c8 = local_2e8;
      }
      else {
        FUN_1400419b0(&local_2c8,&local_2e8);
      }
      local_res18 = uVar5 | 0x6000;
      FUN_1400460e0(&local_2c8,puVar6);
      local_318 = (undefined4)local_2c8;
      uStack_314 = local_2c8._4_4_;
      uStack_310 = uStack_2c0;
      uStack_30c = uStack_2bc;
      if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      FUN_140041b80(&local_2b8,&local_318);
      local_res18 = uVar5 | 0x2000;
      if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_res18 = uVar5;
      if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2e8);
      }
      if (((uVar5 & 8) != 0) &&
         (uVar5 = uVar5 & 0xffff9ff7, local_res18 = uVar5,
         (1 << ((byte)local_274 & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_280);
      }
      if (((uVar5 & 4) != 0) &&
         (uVar5 = uVar5 & 0xfffffffb, (1 << ((byte)local_284 & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_290);
      }
      local_298 = 0x15;
      dVar9 = (double)FUN_140e794b0(0,0);
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      local_2cc = 0;
      local_298 = 0x17;
      local_2d8 = dVar9;
      pdVar4 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
      dVar9 = local_2b8;
      if ((local_2ac & 0xffffff) != 0) {
        dVar9 = (double)FUN_140e4b060(&local_2b8);
      }
      dVar10 = local_2d8;
      if ((local_2cc & 0xffffff) != 0) {
        dVar10 = (double)FUN_140e4b060(&local_2d8);
      }
      fVar8 = (float)FUN_140e78f90((float)dVar10,(float)dVar9);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
      *pdVar4 = (double)fVar8;
      local_298 = 0x18;
      pdVar4 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      dVar9 = local_2b8;
      if ((local_2ac & 0xffffff) != 0) {
        dVar9 = (double)FUN_140e4b060(&local_2b8);
      }
      dVar10 = local_2d8;
      if ((local_2cc & 0xffffff) != 0) {
        dVar10 = (double)FUN_140e4b060(&local_2d8);
      }
      fVar8 = (float)FUN_140e79010((float)dVar10,(float)dVar9);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
      *pdVar4 = (double)fVar8;
      cVar1 = FUN_140e643f0(local_e0,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_e0,&local_res8,&local_res10);
  local_298 = 0x1c;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  uStack_2fc = 6;
  local_308 = local_res8;
  uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(&local_308,DAT_1419fe0e8,0x80000000,&local_188,uVar12,uVar15);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  uStack_2fc = 6;
  local_308 = local_res8;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(&local_308,DAT_1419fe158,0x80000000,&local_198,uVar12,uVar15 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_318 = (undefined4)local_188;
  uStack_314 = local_188._4_4_;
  uStack_310 = uStack_180;
  uStack_30c = uStack_17c;
  if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_318);
  local_148 = local_218;
  local_318 = (undefined4)local_198;
  uStack_314 = local_198._4_4_;
  uStack_310 = uStack_190;
  uStack_30c = uStack_18c;
  if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_318);
  local_140 = local_208;
  local_318 = _DAT_141dd7318;
  uStack_314 = uRam0000000141dd731c;
  uStack_310 = uRam0000000141dd7320;
  uStack_30c = DAT_141dd7324;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_318);
  local_138 = &local_1f8;
  uStack_2fc = 0xf;
  local_308 = (longlong *)0x100000000000023;
  local_318 = 0x23;
  uStack_314 = 0x1000000;
  uStack_310 = uStack_300;
  uStack_30c = 0xf;
  if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_318);
  local_130 = (undefined8 *)local_1e8;
  ppuVar14 = &local_148;
  uVar12 = CONCAT44(uVar13,DAT_141a0a7c8);
  uVar3 = FUN_140e634e0(local_res8,local_res10,&local_2f8,4,uVar12,ppuVar14);
  iVar7 = FUN_140e63cb0(local_100,&local_res8,&local_res10,uVar3);
  if (0 < iVar7) {
    do {
      local_298 = 0x1e;
      uStack_21c = 0xf;
      local_228 = 0x10000010000009b;
      local_318 = 0x9b;
      uStack_314 = 0x1000001;
      uStack_310 = uStack_220;
      uStack_30c = 0xf;
      if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_240);
      }
      FUN_140041b80(&local_240,&local_318);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_240);
      local_298 = 0x1f;
      if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_250);
      }
      local_244 = 0;
      local_250 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_250);
      local_298 = 0x20;
      if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_260);
      }
      local_254 = 0;
      local_260 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_260);
      local_298 = 0x22;
      uStack_2fc = 6;
      local_308 = local_res10;
      ppuVar14 = (undefined1 **)((ulonglong)ppuVar14 & 0xffffffffffffff00);
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_140e87440(&local_308,DAT_141a0f7f8,0x80000000,&local_1a8,uVar12,ppuVar14);
      if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_308);
      }
      local_264 = 0;
      local_270 = (longlong *)0x3ff0000000000000;
      iVar7 = FUN_140e851f0(&local_1a8,&local_270,DAT_141955260,0);
      if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_270);
      }
      if (iVar7 == 0) {
        local_284 = 0;
        local_290 = 0;
        puVar6 = &local_290;
        uVar5 = uVar5 | 0x10;
      }
      else {
        local_274 = 0;
        local_280 = 0x4066800000000000;
        puVar6 = &local_280;
        uVar5 = uVar5 | 0x20;
      }
      local_res18 = uVar5;
      local_2e8 = FUN_140e794b0(0,0);
      local_2dc = 0;
      local_res18 = uVar5 | 0x8000;
      FUN_140042560(&local_2e8,&local_1a8);
      uStack_2bc = local_2dc;
      uStack_2c0 = local_2e0;
      if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) == 0) {
        local_2c8 = local_2e8;
      }
      else {
        FUN_1400419b0(&local_2c8,&local_2e8);
      }
      local_res18 = uVar5 | 0x18000;
      FUN_1400460e0(&local_2c8,puVar6);
      local_318 = (undefined4)local_2c8;
      uStack_314 = local_2c8._4_4_;
      uStack_310 = uStack_2c0;
      uStack_30c = uStack_2bc;
      if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      FUN_140041b80(&local_2b8,&local_318);
      local_res18 = uVar5 | 0x8000;
      if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_res18 = uVar5;
      if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2e8);
      }
      if (((uVar5 & 0x20) != 0) &&
         (uVar5 = uVar5 & 0xfffe7fdf, local_res18 = uVar5,
         (1 << ((byte)local_274 & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_280);
      }
      if (((uVar5 & 0x10) != 0) &&
         (uVar5 = uVar5 & 0xffffffef, (1 << ((byte)local_284 & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_290);
      }
      local_298 = 0x23;
      dVar9 = (double)FUN_140e794b0(0,0);
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      local_2cc = 0;
      local_298 = 0x25;
      local_2d8 = dVar9;
      pdVar4 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
      dVar9 = local_2b8;
      if ((local_2ac & 0xffffff) != 0) {
        dVar9 = (double)FUN_140e4b060(&local_2b8);
      }
      dVar10 = local_2d8;
      if ((local_2cc & 0xffffff) != 0) {
        dVar10 = (double)FUN_140e4b060(&local_2d8);
      }
      fVar8 = (float)FUN_140e78f90((float)dVar10,(float)dVar9);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
      *pdVar4 = (double)fVar8;
      local_298 = 0x26;
      pdVar4 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      dVar9 = local_2b8;
      if ((local_2ac & 0xffffff) != 0) {
        dVar9 = (double)FUN_140e4b060(&local_2b8);
      }
      dVar10 = local_2d8;
      if ((local_2cc & 0xffffff) != 0) {
        dVar10 = (double)FUN_140e4b060(&local_2d8);
      }
      fVar8 = (float)FUN_140e79010((float)dVar10,(float)dVar9);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
      *pdVar4 = (double)fVar8;
      cVar1 = FUN_140e643f0(local_100,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_100,&local_res8,&local_res10);
  local_298 = 0x2b;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  local_318 = _DAT_1419e92e0;
  uStack_314 = uRam00000001419e92e4;
  uStack_310 = uRam00000001419e92e8;
  uStack_30c = uRam00000001419e92ec;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_318);
  local_148 = local_218;
  local_318 = _DAT_1419e92d0;
  uStack_314 = uRam00000001419e92d4;
  uStack_310 = uRam00000001419e92d8;
  uStack_30c = uRam00000001419e92dc;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_318);
  local_140 = local_208;
  local_1f8 = FUN_140e79480(0);
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1ec = 0;
  local_138 = &local_1f8;
  local_318 = (undefined4)DAT_1419df7b0;
  uStack_314 = DAT_1419df7b0._4_4_;
  uStack_310 = DAT_1419df7b8;
  uStack_30c = DAT_1419df7bc;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_318);
  local_130 = (undefined8 *)local_1e8;
  FUN_14044e5b0(local_res8,local_res10,&local_2f8,4,&local_148);
  if (local_f0 != 0) {
    FUN_140e4cd60();
    local_f0 = 0;
  }
  if (local_d0 != 0) {
    FUN_140e4cd60();
    local_d0 = 0;
  }
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_260);
  }
  if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_250);
  }
  if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_240);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_218,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_2a8;
  return;
}

