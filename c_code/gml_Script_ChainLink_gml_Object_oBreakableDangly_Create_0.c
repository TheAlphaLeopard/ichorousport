// gml_Script_ChainLink_gml_Object_oBreakableDangly_Create_0 @ 0x140853980

void gml_Script_ChainLink_gml_Object_oBreakableDangly_Create_0(longlong *param_1,ulonglong param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar18;
  ulonglong in_stack_fffffffffffffcc8;
  undefined8 *puVar26;
  ulonglong uVar27;
  ulonglong in_stack_fffffffffffffcd0;
  ulonglong uVar28;
  undefined4 uVar29;
  double local_308;
  uint local_2fc;
  longlong local_2f8;
  undefined4 local_2ec;
  longlong local_2e8;
  longlong lStack_2e0;
  undefined8 local_2d8;
  char *local_2d0;
  undefined4 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  uint local_2b4;
  undefined8 local_2b0;
  uint local_2a4;
  undefined8 local_2a0;
  undefined4 local_298;
  uint local_294;
  undefined8 local_290;
  undefined4 local_288;
  uint local_284;
  undefined8 local_280;
  undefined4 local_278;
  undefined4 local_274;
  undefined8 local_270;
  uint local_264;
  undefined8 local_260;
  uint local_254;
  undefined8 local_250;
  uint local_244;
  double local_240;
  uint local_234;
  undefined8 local_230;
  undefined4 local_228;
  uint local_224;
  undefined8 local_220;
  undefined4 local_218;
  uint local_214;
  longlong local_210;
  undefined4 local_208;
  undefined4 local_204;
  longlong local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  uint local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  longlong local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  double local_138;
  undefined4 local_12c;
  undefined1 *local_128;
  undefined4 local_11c;
  longlong local_118;
  undefined4 local_10c;
  longlong local_108;
  undefined4 uStack_fc;
  longlong *local_f8;
  undefined4 local_ec;
  longlong *local_e8;
  undefined4 local_dc;
  longlong *local_d8;
  undefined4 local_cc;
  
  bVar3 = false;
  bVar2 = false;
  local_2d0 = "gml_Object_oBreakableCandle_Draw_0";
  local_2d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2d8;
  local_2fc = 0xffffff;
  local_308 = 0.0;
  local_2ec = 0xffffff;
  local_2f8 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_234 = 0xffffff;
  local_240 = 0.0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  local_244 = 0xffffff;
  local_250 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  local_2a4 = 0xffffff;
  local_2b0 = 0;
  uStack_18c = 0xffffff;
  local_198 = 0;
  local_254 = 0xffffff;
  local_260 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  local_264 = 0xffffff;
  local_270 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_214 = 0xffffff;
  local_220 = 0;
  local_224 = 0xffffff;
  local_230 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_274 = 0xffffff;
  local_280 = 0;
  local_2c8 = 2;
  FUN_140e98b30();
  local_2c8 = 4;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a168);
  cVar4 = FUN_140e491e0(uVar8);
  if (cVar4 == '\0') {
    local_2c8 = 4;
  }
  else {
    local_2c8 = 6;
    if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    local_2fc = 0;
    local_308 = 0.0;
    bVar1 = true;
LAB_140853e85:
    iVar6 = 0;
    if (!bVar1) {
      local_2c8 = 6;
      uVar5 = local_2fc & 0xffffff;
      if (uVar5 != 0) {
        if (uVar5 != 1) {
          if (uVar5 == 7) {
            local_308 = (double)CONCAT44(local_308._4_4_,local_308._0_4_ + 1);
          }
          else if (uVar5 == 10) {
            local_308 = (double)((longlong)local_308 + 1);
          }
          else {
            if (uVar5 == 0xd) goto LAB_140853edb;
            FUN_140042910(&DAT_14172c3d8,&local_308,&local_308);
          }
          goto LAB_140853eeb;
        }
        local_308 = (double)FUN_140e4b060(&local_308);
LAB_140853edb:
        local_2fc = 0;
      }
      local_308 = local_308 + 1.0;
    }
LAB_140853eeb:
    bVar1 = false;
    plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a108);
    if ((*(int *)((longlong)plVar9 + 0xc) == 2) && (*plVar9 != 0)) {
      iVar6 = *(int *)(*plVar9 + 0x24);
    }
    local_12c = 0;
    local_138 = (double)iVar6;
    iVar6 = FUN_140e851f0(&local_308,&local_138,DAT_141955260,1);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (iVar6 != -2 && iVar6 < 0) {
      local_2c8 = 8;
      plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a108);
      iVar6 = FUN_140e4a740(&local_308);
      if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar10 = *plVar9, lVar10 != 0))
      {
        if ((iVar6 < 0) || (*(int *)(lVar10 + 0x24) <= iVar6)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar6,
                        *(undefined4 *)(lVar10 + 0x24));
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar10 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar9 != &local_2f8) {
        local_2e8 = *plVar9;
        lStack_2e0 = plVar9[1];
        if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f8);
        }
        FUN_140041b80(&local_2f8,&local_2e8);
      }
      local_2c8 = 9;
      if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_280);
      }
      local_280 = 0;
      local_278 = 0;
      local_274 = 5;
      FUN_140e87440(&local_2f8,DAT_141a03228,0x80000000,&local_148,
                    in_stack_fffffffffffffcc8 & 0xffffffffffffff00,
                    in_stack_fffffffffffffcd0 & 0xffffffffffffff00);
      switch(local_2ec) {
      default:
switchD_14085409b_caseD_1:
        lVar10 = 0;
        break;
      case 6:
        lVar10 = local_2f8;
        break;
      case 0xf:
        iVar6 = (int)((ulonglong)local_2f8 >> 0x20);
        if ((iVar6 != 0x1000000) && (iVar6 != 0x4000001)) goto switchD_14085409b_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar7 = FUN_140e4a8b0(&local_2f8);
        lVar10 = FUN_140e87250(uVar7);
      }
      uVar28 = 0;
      puVar26 = &local_148;
      FUN_140e63610(lVar10,param_2,&local_280,0,puVar26,0);
      local_2c8 = 0xb;
      uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
      uVar28 = uVar28 & 0xffffffffffffff00;
      uVar27 = (ulonglong)puVar26 & 0xffffffffffffff00;
      FUN_140e87440(&local_2f8,DAT_141a09918,0x80000000,&local_210,uVar27,uVar28);
      uStack_1ec = local_204;
      uStack_1f0 = local_208;
      if ((1 << ((byte)local_204 & 0x1f) & 0x46U) == 0) {
        local_1f8 = local_210;
      }
      else {
        FUN_1400419b0(&local_1f8,&local_210);
      }
      FUN_140042560(&local_1f8,uVar8);
      lStack_2e0 = CONCAT44(uStack_1ec,uStack_1f0);
      local_2e8 = local_1f8;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140041b80(&local_1d8,&local_2e8);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_2c8 = 0xc;
      FUN_140e87440(&local_2f8,DAT_141a09a78,0x80000000,&local_158,uVar27 & 0xffffffffffffff00,
                    uVar28 & 0xffffffffffffff00);
      lStack_2e0 = CONCAT44(uStack_14c,uStack_150);
      local_2e8 = local_158;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_2e8);
      local_2c8 = 0xe;
      FUN_140e87170(&local_2f8,DAT_141a0a728,0x80000000,&local_168,param_1,param_2);
      lStack_2e0 = CONCAT44(uStack_15c,uStack_160);
      local_2e8 = local_168;
      if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_240);
      }
      FUN_140041b80(&local_240,&local_2e8);
      local_2c8 = 0xf;
      plVar9 = param_1;
      uVar27 = param_2;
      FUN_140e87170(&local_2f8,DAT_141a0cfc8,0x80000000,&local_178,param_1,param_2);
      lStack_2e0 = CONCAT44(uStack_16c,uStack_170);
      local_2e8 = local_178;
      if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_250);
      }
      FUN_140041b80(&local_250,&local_2e8);
      local_2c8 = 0x11;
      uVar27 = uVar27 & 0xffffffffffffff00;
      uVar28 = (ulonglong)plVar9 & 0xffffffffffffff00;
      FUN_140e87440(&local_2f8,DAT_141a0a748,0x80000000,&local_188,uVar28,uVar27);
      lStack_2e0 = CONCAT44(uStack_17c,uStack_180);
      local_2e8 = local_188;
      if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b0);
      }
      FUN_140041b80(&local_2b0,&local_2e8);
      local_2c8 = 0x12;
      uVar27 = uVar27 & 0xffffffffffffff00;
      uVar28 = uVar28 & 0xffffffffffffff00;
      FUN_140e87440(&local_2f8,DAT_141a0a858,0x80000000,&local_198,uVar28,uVar27);
      lStack_2e0 = CONCAT44(uStack_18c,uStack_190);
      local_2e8 = local_198;
      if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_260);
      }
      FUN_140041b80(&local_260,&local_2e8);
      local_2c8 = 0x14;
      uVar27 = uVar27 & 0xffffffffffffff00;
      uVar28 = uVar28 & 0xffffffffffffff00;
      FUN_140e87440(&local_2f8,DAT_141a0a7f8,0x80000000,&local_1a8,uVar28,uVar27);
      lStack_2e0 = CONCAT44(uStack_19c,uStack_1a0);
      local_2e8 = local_1a8;
      if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_270);
      }
      FUN_140041b80(&local_270,&local_2e8);
      local_2c8 = 0x15;
      local_11c = 0;
      local_128 = &DAT_bff0000000000000;
      iVar6 = FUN_140e851f0(&local_2b0,&local_128,DAT_141955260,0);
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if (iVar6 == 0) {
        lVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
        if ((*(uint *)(lVar10 + 0xc) & 0xffffff) != 0) {
          FUN_140e4b060(lVar10);
        }
        local_108 = FUN_140e79500();
        uStack_fc = 0;
        plVar9 = &local_108;
        bVar3 = true;
      }
      else {
        local_10c = 0;
        local_118 = 0;
        plVar9 = &local_118;
        bVar2 = true;
      }
      local_2e8 = *plVar9;
      lStack_2e0 = plVar9[1];
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_2e8);
      if ((bVar2) && (bVar2 = false, (1 << ((byte)local_10c & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_118);
      }
      if ((bVar3) && (bVar3 = false, (1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_108);
      }
      local_2c8 = 0x19;
      local_ec = 6;
      uVar27 = uVar27 & 0xffffffffffffff00;
      uVar28 = uVar28 & 0xffffffffffffff00;
      local_f8 = param_1;
      FUN_140e87440(&local_f8,DAT_1419fe0e8,0x80000000,&local_220,uVar28,uVar27);
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_dc = 6;
      uVar27 = uVar27 & 0xffffffffffffff00;
      uVar28 = uVar28 & 0xffffffffffffff00;
      local_e8 = param_1;
      FUN_140e87440(&local_e8,DAT_1419fe158,0x80000000,&local_230,uVar28,uVar27);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_cc = 6;
      uVar27 = uVar27 & 0xffffffffffffff00;
      uVar28 = uVar28 & 0xffffffffffffff00;
      local_d8 = param_1;
      FUN_140e87440(&local_d8,DAT_141a0fbc8,0x80000000,&local_1e8,uVar28,uVar27);
      uVar7 = (undefined4)(uVar28 >> 0x20);
      uVar29 = (undefined4)(uVar27 >> 0x20);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_284 = local_224;
      local_288 = local_228;
      if ((1 << ((byte)local_224 & 0x1f) & 0x46U) == 0) {
        local_290 = local_230;
      }
      else {
        FUN_1400419b0(&local_290,&local_230);
      }
      FUN_1400460e0(&local_290,&local_1b8);
      local_2b4 = local_214;
      local_2b8 = local_218;
      if ((1 << ((byte)local_214 & 0x1f) & 0x46U) == 0) {
        local_2c0 = local_220;
      }
      else {
        FUN_1400419b0(&local_2c0,&local_220);
      }
      FUN_1400460e0(&local_2c0,&local_1d8);
      local_294 = local_2b4;
      local_298 = local_2b8;
      if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) == 0) {
        local_2a0 = local_2c0;
      }
      else {
        FUN_1400419b0(&local_2a0,&local_2c0);
      }
      FUN_1400460e0(&local_2a0,&local_1c8);
      if ((local_1dc & 0xffffff) == 0) {
        uVar11 = (undefined4)local_1e8;
        uVar19 = (undefined4)((ulonglong)local_1e8 >> 0x20);
      }
      else {
        uVar8 = FUN_140e4b060(&local_1e8);
        uVar11 = (undefined4)uVar8;
        uVar19 = (undefined4)((ulonglong)uVar8 >> 0x20);
      }
      if ((local_264 & 0xffffff) == 0) {
        uVar12 = (undefined4)local_270;
        uVar20 = (undefined4)((ulonglong)local_270 >> 0x20);
      }
      else {
        uVar8 = FUN_140e4b060(&local_270);
        uVar12 = (undefined4)uVar8;
        uVar20 = (undefined4)((ulonglong)uVar8 >> 0x20);
      }
      if ((local_254 & 0xffffff) == 0) {
        uVar13 = (undefined4)local_260;
        uVar21 = (undefined4)((ulonglong)local_260 >> 0x20);
      }
      else {
        uVar8 = FUN_140e4b060(&local_260);
        uVar13 = (undefined4)uVar8;
        uVar21 = (undefined4)((ulonglong)uVar8 >> 0x20);
      }
      if ((local_2a4 & 0xffffff) == 0) {
        uVar14 = (undefined4)local_2b0;
        uVar22 = (undefined4)((ulonglong)local_2b0 >> 0x20);
      }
      else {
        uVar8 = FUN_140e4b060(&local_2b0);
        uVar14 = (undefined4)uVar8;
        uVar22 = (undefined4)((ulonglong)uVar8 >> 0x20);
      }
      if ((local_284 & 0xffffff) == 0) {
        uVar15 = (undefined4)local_290;
        uVar23 = (undefined4)((ulonglong)local_290 >> 0x20);
      }
      else {
        uVar8 = FUN_140e4b060(&local_290);
        uVar15 = (undefined4)uVar8;
        uVar23 = (undefined4)((ulonglong)uVar8 >> 0x20);
      }
      if ((local_294 & 0xffffff) == 0) {
        uVar16 = (undefined4)local_2a0;
        uVar24 = (undefined4)((ulonglong)local_2a0 >> 0x20);
      }
      else {
        uVar8 = FUN_140e4b060(&local_2a0);
        uVar16 = (undefined4)uVar8;
        uVar24 = (undefined4)((ulonglong)uVar8 >> 0x20);
      }
      if ((local_244 & 0xffffff) == 0) {
        uVar17 = (undefined4)local_250;
        uVar25 = (undefined4)((ulonglong)local_250 >> 0x20);
      }
      else {
        uVar8 = FUN_140e4b060(&local_250);
        uVar17 = (undefined4)uVar8;
        uVar25 = (undefined4)((ulonglong)uVar8 >> 0x20);
      }
      if ((local_234 & 0xffffff) == 0) {
        dVar18 = local_240;
      }
      else {
        dVar18 = (double)FUN_140e4b060(&local_240);
      }
      in_stack_fffffffffffffcd0 = CONCAT44(uVar29,(float)(double)CONCAT44(uVar22,uVar14));
      in_stack_fffffffffffffcc8 = CONCAT44(uVar7,(float)(double)CONCAT44(uVar23,uVar15));
      FUN_140ec5dd0(param_1,(longlong)dVar18,(float)(double)CONCAT44(uVar25,uVar17),
                    (float)(double)CONCAT44(uVar24,uVar16),in_stack_fffffffffffffcc8,
                    in_stack_fffffffffffffcd0,(float)(double)CONCAT44(uVar21,uVar13),
                    (float)(double)CONCAT44(uVar20,uVar12),0xffffff,
                    (float)(double)CONCAT44(uVar19,uVar11));
      if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a0);
      }
      if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c0);
      }
      if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_290);
      }
      goto LAB_140853e85;
    }
  }
  if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_280);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_230);
  }
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_270);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_260);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b0);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_250);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_240);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  DAT_141dc7a50 = (undefined8 *)local_2d8;
  return;
}

