// gml_Script_anon_2039_gml_Object_oEnemyMoistMantle_Create_0 @ 0x1409f5110

undefined8 *
gml_Script_anon_2039_gml_Object_oEnemyMoistMantle_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong **pplVar5;
  double *pdVar6;
  undefined8 *puVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  ulonglong in_stack_fffffffffffffd60;
  undefined1 **ppuVar14;
  ulonglong uVar15;
  double local_298;
  uint local_28c;
  double local_288;
  uint local_27c;
  longlong *local_278;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  char *local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined4 local_234;
  undefined8 local_230;
  undefined4 local_224;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_204;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  longlong *local_1a8;
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
  longlong *local_168;
  undefined4 local_15c;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  longlong local_f8;
  undefined1 local_e8 [16];
  longlong local_d8;
  undefined1 local_c8 [16];
  longlong local_b8;
  
  local_250 = "gml_Script_anon@323@gml_Object_oEnemyMoistMantle_Create_0";
  local_258 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_258;
  local_248 = 0xd;
  pcVar11 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_1e8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_16c = 0xffffff;
  local_178 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  uStack_18c = 0xffffff;
  local_198 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  local_224 = 0xffffff;
  local_230 = 0;
  local_234 = 0xffffff;
  local_240 = 0;
  local_27c = 0xffffff;
  local_288 = 0.0;
  local_28c = 0xffffff;
  local_298 = 0.0;
  local_214 = 0;
  local_220 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_248 = 0xe;
  local_26c = 6;
  local_278 = local_res8;
  in_stack_fffffffffffffd60 = in_stack_fffffffffffffd60 & 0xffffffffffffff00;
  uVar12 = (ulonglong)pcVar11 & 0xffffffffffffff00;
  FUN_140e87440(&local_278,DAT_1419fe0e8,0x80000000,&local_178,uVar12,in_stack_fffffffffffffd60);
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_26c = 6;
  local_278 = local_res8;
  in_stack_fffffffffffffd60 = in_stack_fffffffffffffd60 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(&local_278,DAT_1419fe158,0x80000000,&local_188,uVar12,in_stack_fffffffffffffd60);
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_26c = 6;
  local_278 = local_res8;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(&local_278,DAT_141a1b910,0x80000000,&local_198,uVar12,
                in_stack_fffffffffffffd60 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_268 = local_178;
  uStack_260 = uStack_170;
  uStack_25c = uStack_16c;
  if ((1 << (local_1e8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_268);
  local_158 = local_1e8;
  local_268 = local_188;
  uStack_260 = uStack_180;
  uStack_25c = uStack_17c;
  if ((1 << (local_1d8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_268);
  local_150 = local_1d8;
  local_268 = local_198;
  uStack_260 = uStack_190;
  uStack_25c = uStack_18c;
  if ((1 << (local_1c8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_268);
  uStack_1ec = 0xf;
  local_1f8 = 0x100000000000023;
  local_268 = 0x100000000000023;
  uStack_260 = uStack_1f0;
  uStack_25c = 0xf;
  local_148 = local_1c8;
  if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_268);
  local_140 = local_1b8;
  ppuVar14 = &local_158;
  uVar12 = CONCAT44(uVar13,DAT_141a0a7c8);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_220,4,uVar12,ppuVar14);
  iVar2 = FUN_140e63cb0(local_e8,&local_res8,&local_res10,uVar4);
  if (0 < iVar2) {
    do {
      local_248 = 0x10;
      uStack_1ec = 0xf;
      local_1f8 = 0x10000010000011e;
      local_268 = 0x10000010000011e;
      uStack_260 = uStack_1f0;
      uStack_25c = 0xf;
      if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_210);
      }
      FUN_140041b80(&local_210,&local_268);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_210);
      local_248 = 0x11;
      if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_230);
      }
      local_224 = 0;
      local_230 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_230);
      local_248 = 0x12;
      if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_240);
      }
      local_234 = 0;
      local_240 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_240);
      local_248 = 0x13;
      pplVar5 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a04c38);
      uStack_19c = 0xd;
      local_1a8 = (longlong *)0x3ff0000000000000;
      if (&local_1a8 != pplVar5) {
        local_268 = 0x3ff0000000000000;
        uStack_260 = uStack_1a0;
        uStack_25c = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)pplVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pplVar5);
        }
        FUN_140041b80(pplVar5,&local_268);
      }
      local_248 = 0x14;
      dVar9 = (double)FUN_140e794b0(0,0);
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_27c = 0;
      local_248 = 0x15;
      local_288 = dVar9;
      dVar9 = (double)FUN_140e794b0(0,0);
      if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      local_28c = 0;
      local_248 = 0x16;
      local_298 = dVar9;
      pdVar6 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
      dVar9 = local_288;
      if ((local_27c & 0xffffff) != 0) {
        dVar9 = (double)FUN_140e4b060(&local_288);
      }
      dVar10 = local_298;
      if ((local_28c & 0xffffff) != 0) {
        dVar10 = (double)FUN_140e4b060(&local_298);
      }
      fVar8 = (float)FUN_140e78f90((float)dVar10,(float)dVar9);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar6);
      }
      *(undefined4 *)((longlong)pdVar6 + 0xc) = 0;
      *pdVar6 = (double)fVar8;
      local_248 = 0x17;
      pdVar6 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      dVar9 = local_288;
      if ((local_27c & 0xffffff) != 0) {
        dVar9 = (double)FUN_140e4b060(&local_288);
      }
      dVar10 = local_298;
      if ((local_28c & 0xffffff) != 0) {
        dVar10 = (double)FUN_140e4b060(&local_298);
      }
      fVar8 = (float)FUN_140e79010((float)dVar10,(float)dVar9);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar6);
      }
      *(undefined4 *)((longlong)pdVar6 + 0xc) = 0;
      *pdVar6 = (double)fVar8;
      cVar1 = FUN_140e643f0(local_e8,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_e8,&local_res8,&local_res10);
  local_248 = 0x1a;
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  local_220 = 0;
  local_218 = 0;
  local_214 = 5;
  local_26c = 6;
  local_278 = local_res8;
  uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(&local_278,DAT_1419fe0e8,0x80000000,&local_178,uVar12,uVar15);
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_26c = 6;
  local_278 = local_res8;
  uVar15 = uVar15 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(&local_278,DAT_1419fe158,0x80000000,&local_188,uVar12,uVar15);
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_26c = 6;
  local_278 = local_res8;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(&local_278,DAT_141a1b910,0x80000000,&local_198,uVar12,uVar15 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_268 = local_178;
  uStack_260 = uStack_170;
  uStack_25c = uStack_16c;
  if ((1 << (local_1e8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_268);
  local_158 = local_1e8;
  local_268 = local_188;
  uStack_260 = uStack_180;
  uStack_25c = uStack_17c;
  if ((1 << (local_1d8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_268);
  local_150 = local_1d8;
  local_268 = local_198;
  uStack_260 = uStack_190;
  uStack_25c = uStack_18c;
  if ((1 << (local_1c8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_268);
  uStack_1ec = 0xf;
  local_1f8 = 0x100000000000023;
  local_268 = 0x100000000000023;
  uStack_260 = uStack_1f0;
  uStack_25c = 0xf;
  local_148 = local_1c8;
  if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_268);
  local_140 = local_1b8;
  ppuVar14 = &local_158;
  uVar12 = CONCAT44(uVar13,DAT_141a0a7c8);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_220,4,uVar12,ppuVar14);
  iVar2 = FUN_140e63cb0(local_108,&local_res8,&local_res10,uVar4);
  if (0 < iVar2) {
    do {
      local_248 = 0x1c;
      uStack_1ec = 0xf;
      local_1f8 = 0x10000010000011e;
      local_268 = 0x10000010000011e;
      uStack_260 = uStack_1f0;
      uStack_25c = 0xf;
      if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_210);
      }
      FUN_140041b80(&local_210,&local_268);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_210);
      local_248 = 0x1d;
      if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_230);
      }
      local_224 = 0;
      local_230 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_230);
      local_248 = 0x1e;
      if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_240);
      }
      local_234 = 0;
      local_240 = 0x4000000000000000;
      FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_240);
      local_248 = 0x1f;
      dVar9 = (double)FUN_140e794b0(0,0);
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_27c = 0;
      local_248 = 0x20;
      local_288 = dVar9;
      dVar9 = (double)FUN_140e794b0(0,0);
      if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      local_28c = 0;
      local_248 = 0x21;
      local_298 = dVar9;
      pdVar6 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
      dVar9 = local_288;
      if ((local_27c & 0xffffff) != 0) {
        dVar9 = (double)FUN_140e4b060(&local_288);
      }
      dVar10 = local_298;
      if ((local_28c & 0xffffff) != 0) {
        dVar10 = (double)FUN_140e4b060(&local_298);
      }
      fVar8 = (float)FUN_140e78f90((float)dVar10,(float)dVar9);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar6);
      }
      *(undefined4 *)((longlong)pdVar6 + 0xc) = 0;
      *pdVar6 = (double)fVar8;
      local_248 = 0x22;
      pdVar6 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      dVar9 = local_288;
      if ((local_27c & 0xffffff) != 0) {
        dVar9 = (double)FUN_140e4b060(&local_288);
      }
      dVar10 = local_298;
      if ((local_28c & 0xffffff) != 0) {
        dVar10 = (double)FUN_140e4b060(&local_298);
      }
      fVar8 = (float)FUN_140e79010((float)dVar10,(float)dVar9);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar6);
      }
      *(undefined4 *)((longlong)pdVar6 + 0xc) = 0;
      *pdVar6 = (double)fVar8;
      cVar1 = FUN_140e643f0(local_108,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_108,&local_res8,&local_res10);
  iVar2 = 2;
  do {
    iVar2 = iVar2 + -1;
    local_248 = 0x26;
    if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_220);
    }
    local_220 = 0;
    local_218 = 0;
    local_214 = 5;
    local_26c = 6;
    local_278 = local_res8;
    uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(&local_278,DAT_1419fe0e8,0x80000000,&local_178,uVar12,uVar15);
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_15c = 6;
    local_168 = local_res8;
    uVar15 = uVar15 & 0xffffffffffffff00;
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(&local_168,DAT_1419fe158,0x80000000,&local_188,uVar12,uVar15);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    uStack_19c = 6;
    local_1a8 = local_res8;
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(&local_1a8,DAT_141a1b910,0x80000000,&local_198,uVar12,uVar15 & 0xffffffffffffff00)
    ;
    uVar13 = (undefined4)(uVar12 >> 0x20);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_268 = local_178;
    uStack_260 = uStack_170;
    uStack_25c = uStack_16c;
    if ((1 << (local_1e8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_268);
    local_158 = local_1e8;
    local_268 = local_188;
    uStack_260 = uStack_180;
    uStack_25c = uStack_17c;
    if ((1 << (local_1d8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_268);
    local_150 = local_1d8;
    local_268 = local_198;
    uStack_260 = uStack_190;
    uStack_25c = uStack_18c;
    if ((1 << (local_1c8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_268);
    uStack_1ec = 0xf;
    local_1f8 = 0x100000000000023;
    local_268 = 0x100000000000023;
    uStack_260 = uStack_1f0;
    uStack_25c = 0xf;
    local_148 = local_1c8;
    if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_268);
    local_140 = local_1b8;
    ppuVar14 = &local_158;
    uVar12 = CONCAT44(uVar13,DAT_141a0a7c8);
    uVar4 = FUN_140e634e0(local_res8,local_res10,&local_220,4,uVar12,ppuVar14);
    iVar3 = FUN_140e63cb0(&local_138,&local_res8,&local_res10,uVar4);
    if (0 < iVar3) {
      do {
        local_248 = 0x28;
        uStack_10c = 0xf;
        local_118 = 0x10000010000011e;
        local_268 = 0x10000010000011e;
        uStack_260 = uStack_110;
        uStack_25c = 0xf;
        if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_210);
        }
        FUN_140041b80(&local_210,&local_268);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_210);
        local_248 = 0x29;
        if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_230);
        }
        local_224 = 0;
        local_230 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_230);
        local_248 = 0x2a;
        if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_240);
        }
        local_234 = 0;
        local_240 = 0x3ff0000000000000;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_240);
        local_248 = 0x2b;
        dVar9 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        local_27c = 0;
        local_248 = 0x2c;
        local_288 = dVar9;
        dVar9 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        local_28c = 0;
        local_248 = 0x2d;
        local_298 = dVar9;
        pdVar6 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        dVar9 = local_288;
        if ((local_27c & 0xffffff) != 0) {
          dVar9 = (double)FUN_140e4b060(&local_288);
        }
        dVar10 = local_298;
        if ((local_28c & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_298);
        }
        fVar8 = (float)FUN_140e78f90((float)dVar10,(float)dVar9);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar6);
        }
        *(undefined4 *)((longlong)pdVar6 + 0xc) = 0;
        *pdVar6 = (double)fVar8;
        local_248 = 0x2e;
        pdVar6 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        dVar9 = local_288;
        if ((local_27c & 0xffffff) != 0) {
          dVar9 = (double)FUN_140e4b060(&local_288);
        }
        dVar10 = local_298;
        if ((local_28c & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_298);
        }
        fVar8 = (float)FUN_140e79010((float)dVar10,(float)dVar9);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar6);
        }
        *(undefined4 *)((longlong)pdVar6 + 0xc) = 0;
        *pdVar6 = (double)fVar8;
        cVar1 = FUN_140e643f0(&local_138,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(&local_138,&local_res8,&local_res10);
    if (local_128 != 0) {
      FUN_140e4cd60();
    }
  } while (0 < iVar2);
  iVar2 = 8;
  do {
    iVar2 = iVar2 + -1;
    local_248 = 0x33;
    if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_220);
    }
    local_220 = 0;
    local_218 = 0;
    local_214 = 5;
    uStack_19c = 6;
    local_1a8 = local_res8;
    uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_178,uVar12,uVar15);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_15c = 6;
    local_168 = local_res8;
    uVar15 = uVar15 & 0xffffffffffffff00;
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(&local_168,DAT_1419fe158,0x80000000,&local_188,uVar12,uVar15);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_26c = 6;
    local_278 = local_res8;
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(&local_278,DAT_141a1b910,0x80000000,&local_198,uVar12,uVar15 & 0xffffffffffffff00)
    ;
    uVar13 = (undefined4)(uVar12 >> 0x20);
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_138 = (undefined4)local_178;
    uStack_134 = local_178._4_4_;
    uStack_130 = uStack_170;
    uStack_12c = uStack_16c;
    if ((1 << (local_1e8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_138);
    local_158 = local_1e8;
    local_138 = (undefined4)local_188;
    uStack_134 = local_188._4_4_;
    uStack_130 = uStack_180;
    uStack_12c = uStack_17c;
    if ((1 << (local_1d8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_138);
    local_150 = local_1d8;
    local_138 = (undefined4)local_198;
    uStack_134 = local_198._4_4_;
    uStack_130 = uStack_190;
    uStack_12c = uStack_18c;
    if ((1 << (local_1c8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_138);
    uStack_10c = 0xf;
    local_118 = 0x100000000000023;
    local_138 = 0x23;
    uStack_134 = 0x1000000;
    uStack_130 = uStack_110;
    uStack_12c = 0xf;
    local_148 = local_1c8;
    if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_138);
    local_140 = local_1b8;
    ppuVar14 = &local_158;
    uVar12 = CONCAT44(uVar13,DAT_141a0a7c8);
    uVar4 = FUN_140e634e0(local_res8,local_res10,&local_220,4,uVar12,ppuVar14);
    iVar3 = FUN_140e63cb0(local_c8,&local_res8,&local_res10,uVar4);
    if (0 < iVar3) {
      do {
        local_248 = 0x35;
        uStack_25c = 0xf;
        local_268 = 0x10000010000014c;
        local_138 = 0x14c;
        uStack_134 = 0x1000001;
        uStack_130 = uStack_260;
        uStack_12c = 0xf;
        if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_210);
        }
        FUN_140041b80(&local_210,&local_138);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_210);
        local_248 = 0x36;
        if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_230);
        }
        local_224 = 0;
        local_230 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_230);
        local_248 = 0x37;
        uVar4 = FUN_140e78f00(2);
        if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_240);
        }
        local_234 = 0;
        local_240 = uVar4;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_240);
        local_248 = 0x38;
        puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a04c38);
        uStack_1ec = 0xd;
        local_1f8 = 0x3ff0000000000000;
        if (&local_1f8 != puVar7) {
          local_138 = 0;
          uStack_134 = 0x3ff00000;
          uStack_130 = uStack_1f0;
          uStack_12c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar7);
          }
          FUN_140041b80(puVar7,&local_138);
        }
        local_248 = 0x39;
        dVar9 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        local_27c = 0;
        local_248 = 0x3a;
        local_288 = dVar9;
        dVar9 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        local_28c = 0;
        local_248 = 0x3b;
        local_298 = dVar9;
        pdVar6 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        dVar9 = local_288;
        if ((local_27c & 0xffffff) != 0) {
          dVar9 = (double)FUN_140e4b060(&local_288);
        }
        dVar10 = local_298;
        if ((local_28c & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_298);
        }
        fVar8 = (float)FUN_140e78f90((float)dVar10,(float)dVar9);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar6);
        }
        *(undefined4 *)((longlong)pdVar6 + 0xc) = 0;
        *pdVar6 = (double)fVar8;
        local_248 = 0x3c;
        pdVar6 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        dVar9 = local_288;
        if ((local_27c & 0xffffff) != 0) {
          dVar9 = (double)FUN_140e4b060(&local_288);
        }
        dVar10 = local_298;
        if ((local_28c & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_298);
        }
        fVar8 = (float)FUN_140e79010((float)dVar10,(float)dVar9);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar6);
        }
        *(undefined4 *)((longlong)pdVar6 + 0xc) = 0;
        *pdVar6 = (double)fVar8;
        cVar1 = FUN_140e643f0(local_c8,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_c8,&local_res8,&local_res10);
    if (local_b8 != 0) {
      FUN_140e4cd60();
    }
  } while (0 < iVar2);
  if (local_f8 != 0) {
    FUN_140e4cd60();
    local_f8 = 0;
  }
  if (local_d8 != 0) {
    FUN_140e4cd60();
    local_d8 = 0;
  }
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_240);
  }
  if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_230);
  }
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
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
  _eh_vector_destructor_iterator_(local_1e8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_258;
  return param_3;
}

