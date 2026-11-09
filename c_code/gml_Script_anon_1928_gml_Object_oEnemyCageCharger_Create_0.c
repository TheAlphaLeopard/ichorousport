// gml_Script_anon_1928_gml_Object_oEnemyCageCharger_Create_0 @ 0x140948dd0

undefined8 *
gml_Script_anon_1928_gml_Object_oEnemyCageCharger_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  double *pdVar5;
  undefined8 *puVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  ulonglong in_stack_fffffffffffffd50;
  ulonglong uVar14;
  undefined1 **ppuVar15;
  double local_2a8;
  uint local_29c;
  double local_298;
  uint local_28c;
  longlong *local_288;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  char *local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined4 local_234;
  undefined8 local_230;
  undefined4 local_224;
  undefined8 local_220;
  undefined4 local_214;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong *local_188;
  undefined4 local_17c;
  longlong *local_178;
  undefined4 local_16c;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  longlong local_f8;
  undefined1 local_e8 [16];
  longlong local_d8;
  undefined1 local_c8 [16];
  longlong local_b8;
  
  local_250 = "gml_Script_anon@128@gml_Object_oEnemyCageCharger_Create_0";
  local_258 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_258;
  local_248 = 7;
  pcVar11 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_1f8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_11c = 0xffffff;
  local_128 = 0;
  uStack_18c = 0xffffff;
  local_198 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  uStack_1ac = 0xffffff;
  local_1b8 = 0;
  local_214 = 0xffffff;
  local_220 = 0;
  local_224 = 0xffffff;
  local_230 = 0;
  local_234 = 0xffffff;
  local_240 = 0;
  local_28c = 0xffffff;
  local_298 = 0.0;
  local_29c = 0xffffff;
  local_2a8 = 0.0;
  local_25c = 0;
  local_268 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  iVar7 = 8;
  local_248 = 8;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419eff48);
  FUN_140e87440(uVar4,DAT_1419f4a98,0x80000000,&local_128,(ulonglong)pcVar11 & 0xffffffffffffff00,
                in_stack_fffffffffffffd50 & 0xffffffffffffff00);
  uVar4 = FUN_140069500(uVar4);
  uVar14 = 0;
  puVar6 = &local_128;
  FUN_140e63610(uVar4,local_res10,&local_268,0,puVar6,0);
  local_248 = 10;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  local_27c = 6;
  local_288 = local_res8;
  uVar14 = uVar14 & 0xffffffffffffff00;
  uVar12 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(&local_288,DAT_1419fe0e8,0x80000000,&local_198,uVar12,uVar14);
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_27c = 6;
  local_288 = local_res8;
  uVar14 = uVar14 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(&local_288,DAT_1419fe158,0x80000000,&local_1a8,uVar12,uVar14);
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_27c = 6;
  local_288 = local_res8;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(&local_288,DAT_141a1b910,0x80000000,&local_1b8,uVar12,uVar14 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_278 = local_198;
  uStack_270 = uStack_190;
  uStack_26c = uStack_18c;
  if ((1 << (local_1f8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_278);
  local_168 = local_1f8;
  local_278 = local_1a8;
  uStack_270 = uStack_1a0;
  uStack_26c = uStack_19c;
  if ((1 << (local_1e8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_278);
  local_160 = local_1e8;
  local_278 = local_1b8;
  uStack_270 = uStack_1b0;
  uStack_26c = uStack_1ac;
  if ((1 << (local_1d8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_278);
  uStack_1fc = 0xf;
  local_208 = 0x100000000000023;
  local_278 = 0x100000000000023;
  uStack_270 = uStack_200;
  uStack_26c = 0xf;
  local_158 = local_1d8;
  if ((1 << (local_1c8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_278);
  local_150 = local_1c8;
  ppuVar15 = &local_168;
  uVar14 = CONCAT44(uVar13,DAT_141a0a7c8);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_268,4,uVar14,ppuVar15);
  iVar2 = FUN_140e63cb0(local_e8,&local_res8,&local_res10,uVar4);
  if (0 < iVar2) {
    do {
      local_248 = 0xc;
      uStack_1fc = 0xf;
      local_208 = 0x100000100000096;
      local_278 = 0x100000100000096;
      uStack_270 = uStack_200;
      uStack_26c = 0xf;
      if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_220);
      }
      FUN_140041b80(&local_220,&local_278);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_220);
      local_248 = 0xd;
      if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_230);
      }
      local_224 = 0;
      local_230 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_230);
      local_248 = 0xe;
      if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_240);
      }
      local_234 = 0;
      local_240 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_240);
      local_248 = 0xf;
      dVar9 = (double)FUN_140e794b0(0,0);
      if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      local_28c = 0;
      local_248 = 0x10;
      local_298 = dVar9;
      dVar9 = (double)FUN_140e794b0(0,0);
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      local_29c = 0;
      local_248 = 0x11;
      local_2a8 = dVar9;
      pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
      dVar9 = local_298;
      if ((local_28c & 0xffffff) != 0) {
        dVar9 = (double)FUN_140e4b060(&local_298);
      }
      dVar10 = local_2a8;
      if ((local_29c & 0xffffff) != 0) {
        dVar10 = (double)FUN_140e4b060(&local_2a8);
      }
      fVar8 = (float)FUN_140e78f90((float)dVar10,(float)dVar9);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar5);
      }
      *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
      *pdVar5 = (double)fVar8;
      local_248 = 0x12;
      pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      dVar9 = local_298;
      if ((local_28c & 0xffffff) != 0) {
        dVar9 = (double)FUN_140e4b060(&local_298);
      }
      dVar10 = local_2a8;
      if ((local_29c & 0xffffff) != 0) {
        dVar10 = (double)FUN_140e4b060(&local_2a8);
      }
      fVar8 = (float)FUN_140e79010((float)dVar10,(float)dVar9);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar5);
      }
      *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
      *pdVar5 = (double)fVar8;
      cVar1 = FUN_140e643f0(local_e8,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_e8,&local_res8,&local_res10);
  local_248 = 0x15;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  local_27c = 6;
  local_288 = local_res8;
  uVar12 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
  uVar14 = uVar14 & 0xffffffffffffff00;
  FUN_140e87440(&local_288,DAT_1419fe0e8,0x80000000,&local_198,uVar14,uVar12);
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_27c = 6;
  local_288 = local_res8;
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar14 = uVar14 & 0xffffffffffffff00;
  FUN_140e87440(&local_288,DAT_1419fe158,0x80000000,&local_1a8,uVar14,uVar12);
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_27c = 6;
  local_288 = local_res8;
  uVar14 = uVar14 & 0xffffffffffffff00;
  FUN_140e87440(&local_288,DAT_141a1b910,0x80000000,&local_1b8,uVar14,uVar12 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar14 >> 0x20);
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_278 = local_198;
  uStack_270 = uStack_190;
  uStack_26c = uStack_18c;
  if ((1 << (local_1f8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_278);
  local_168 = local_1f8;
  local_278 = local_1a8;
  uStack_270 = uStack_1a0;
  uStack_26c = uStack_19c;
  if ((1 << (local_1e8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_278);
  local_160 = local_1e8;
  local_278 = local_1b8;
  uStack_270 = uStack_1b0;
  uStack_26c = uStack_1ac;
  if ((1 << (local_1d8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_278);
  uStack_1fc = 0xf;
  local_208 = 0x100000000000023;
  local_278 = 0x100000000000023;
  uStack_270 = uStack_200;
  uStack_26c = 0xf;
  local_158 = local_1d8;
  if ((1 << (local_1c8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_278);
  local_150 = local_1c8;
  ppuVar15 = &local_168;
  uVar14 = CONCAT44(uVar13,DAT_141a0a7c8);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_268,4,uVar14,ppuVar15);
  iVar2 = FUN_140e63cb0(local_108,&local_res8,&local_res10,uVar4);
  if (0 < iVar2) {
    do {
      local_248 = 0x17;
      uStack_1fc = 0xf;
      local_208 = 0x100000100000096;
      local_278 = 0x100000100000096;
      uStack_270 = uStack_200;
      uStack_26c = 0xf;
      if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_220);
      }
      FUN_140041b80(&local_220,&local_278);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_220);
      local_248 = 0x18;
      if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_230);
      }
      local_224 = 0;
      local_230 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_230);
      local_248 = 0x19;
      if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_240);
      }
      local_234 = 0;
      local_240 = 0x3ff0000000000000;
      FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_240);
      local_248 = 0x1a;
      dVar9 = (double)FUN_140e794b0(0,0);
      if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      local_28c = 0;
      local_248 = 0x1b;
      local_298 = dVar9;
      dVar9 = (double)FUN_140e794b0(0,0);
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      local_29c = 0;
      local_248 = 0x1c;
      local_2a8 = dVar9;
      pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
      dVar9 = local_298;
      if ((local_28c & 0xffffff) != 0) {
        dVar9 = (double)FUN_140e4b060(&local_298);
      }
      dVar10 = local_2a8;
      if ((local_29c & 0xffffff) != 0) {
        dVar10 = (double)FUN_140e4b060(&local_2a8);
      }
      fVar8 = (float)FUN_140e78f90((float)dVar10,(float)dVar9);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar5);
      }
      *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
      *pdVar5 = (double)fVar8;
      local_248 = 0x1d;
      pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      dVar9 = local_298;
      if ((local_28c & 0xffffff) != 0) {
        dVar9 = (double)FUN_140e4b060(&local_298);
      }
      dVar10 = local_2a8;
      if ((local_29c & 0xffffff) != 0) {
        dVar10 = (double)FUN_140e4b060(&local_2a8);
      }
      fVar8 = (float)FUN_140e79010((float)dVar10,(float)dVar9);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar5);
      }
      *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
      *pdVar5 = (double)fVar8;
      cVar1 = FUN_140e643f0(local_108,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_108,&local_res8,&local_res10);
  iVar2 = 2;
  do {
    iVar2 = iVar2 + -1;
    local_248 = 0x21;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    local_27c = 6;
    local_288 = local_res8;
    uVar12 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_288,DAT_1419fe0e8,0x80000000,&local_198,uVar14,uVar12);
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_17c = 6;
    local_188 = local_res8;
    uVar12 = uVar12 & 0xffffffffffffff00;
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_1a8,uVar14,uVar12);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_16c = 6;
    local_178 = local_res8;
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_178,DAT_141a1b910,0x80000000,&local_1b8,uVar14,uVar12 & 0xffffffffffffff00)
    ;
    uVar13 = (undefined4)(uVar14 >> 0x20);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_278 = local_198;
    uStack_270 = uStack_190;
    uStack_26c = uStack_18c;
    if ((1 << (local_1f8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_278);
    local_168 = local_1f8;
    local_278 = local_1a8;
    uStack_270 = uStack_1a0;
    uStack_26c = uStack_19c;
    if ((1 << (local_1e8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_278);
    local_160 = local_1e8;
    local_278 = local_1b8;
    uStack_270 = uStack_1b0;
    uStack_26c = uStack_1ac;
    if ((1 << (local_1d8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_278);
    uStack_1fc = 0xf;
    local_208 = 0x100000000000023;
    local_278 = 0x100000000000023;
    uStack_270 = uStack_200;
    uStack_26c = 0xf;
    local_158 = local_1d8;
    if ((1 << (local_1c8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_278);
    local_150 = local_1c8;
    ppuVar15 = &local_168;
    uVar14 = CONCAT44(uVar13,DAT_141a0a7c8);
    uVar4 = FUN_140e634e0(local_res8,local_res10,&local_268,4,uVar14,ppuVar15);
    iVar3 = FUN_140e63cb0(&local_148,&local_res8,&local_res10,uVar4);
    if (0 < iVar3) {
      do {
        local_248 = 0x23;
        uStack_10c = 0xf;
        local_118 = 0x1000001000001c7;
        local_278 = 0x1000001000001c7;
        uStack_270 = uStack_110;
        uStack_26c = 0xf;
        if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_220);
        }
        FUN_140041b80(&local_220,&local_278);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_220);
        local_248 = 0x24;
        if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_230);
        }
        local_224 = 0;
        local_230 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_230);
        local_248 = 0x25;
        if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_240);
        }
        local_234 = 0;
        local_240 = 0x4000000000000000;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_240);
        local_248 = 0x26;
        dVar9 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        local_28c = 0;
        local_248 = 0x27;
        local_298 = dVar9;
        dVar9 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        local_29c = 0;
        local_248 = 0x28;
        local_2a8 = dVar9;
        pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        dVar9 = local_298;
        if ((local_28c & 0xffffff) != 0) {
          dVar9 = (double)FUN_140e4b060(&local_298);
        }
        dVar10 = local_2a8;
        if ((local_29c & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_2a8);
        }
        fVar8 = (float)FUN_140e78f90((float)dVar10,(float)dVar9);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar5);
        }
        *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
        *pdVar5 = (double)fVar8;
        local_248 = 0x29;
        pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        dVar9 = local_298;
        if ((local_28c & 0xffffff) != 0) {
          dVar9 = (double)FUN_140e4b060(&local_298);
        }
        dVar10 = local_2a8;
        if ((local_29c & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_2a8);
        }
        fVar8 = (float)FUN_140e79010((float)dVar10,(float)dVar9);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar5);
        }
        *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
        *pdVar5 = (double)fVar8;
        cVar1 = FUN_140e643f0(&local_148,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(&local_148,&local_res8,&local_res10);
    if (local_138 != 0) {
      FUN_140e4cd60();
    }
  } while (0 < iVar2);
  do {
    iVar7 = iVar7 + -1;
    local_248 = 0x2e;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    local_16c = 6;
    local_178 = local_res8;
    uVar12 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_198,uVar14,uVar12);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_17c = 6;
    local_188 = local_res8;
    uVar12 = uVar12 & 0xffffffffffffff00;
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_1a8,uVar14,uVar12);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_27c = 6;
    local_288 = local_res8;
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_288,DAT_141a1b910,0x80000000,&local_1b8,uVar14,uVar12 & 0xffffffffffffff00)
    ;
    uVar13 = (undefined4)(uVar14 >> 0x20);
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_148 = (undefined4)local_198;
    uStack_144 = local_198._4_4_;
    uStack_140 = uStack_190;
    uStack_13c = uStack_18c;
    if ((1 << (local_1f8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_148);
    local_168 = local_1f8;
    local_148 = (undefined4)local_1a8;
    uStack_144 = local_1a8._4_4_;
    uStack_140 = uStack_1a0;
    uStack_13c = uStack_19c;
    if ((1 << (local_1e8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_148);
    local_160 = local_1e8;
    local_148 = (undefined4)local_1b8;
    uStack_144 = local_1b8._4_4_;
    uStack_140 = uStack_1b0;
    uStack_13c = uStack_1ac;
    if ((1 << (local_1d8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_148);
    uStack_10c = 0xf;
    local_118 = 0x100000000000023;
    local_148 = 0x23;
    uStack_144 = 0x1000000;
    uStack_140 = uStack_110;
    uStack_13c = 0xf;
    local_158 = local_1d8;
    if ((1 << (local_1c8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_148);
    local_150 = local_1c8;
    ppuVar15 = &local_168;
    uVar14 = CONCAT44(uVar13,DAT_141a0a7c8);
    uVar4 = FUN_140e634e0(local_res8,local_res10,&local_268,4,uVar14,ppuVar15);
    iVar2 = FUN_140e63cb0(local_c8,&local_res8,&local_res10,uVar4);
    if (0 < iVar2) {
      do {
        local_248 = 0x30;
        uStack_26c = 0xf;
        local_278 = 0x10000010000014c;
        local_148 = 0x14c;
        uStack_144 = 0x1000001;
        uStack_140 = uStack_270;
        uStack_13c = 0xf;
        if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_220);
        }
        FUN_140041b80(&local_220,&local_148);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_220);
        local_248 = 0x31;
        if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_230);
        }
        local_224 = 0;
        local_230 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_230);
        local_248 = 0x32;
        uVar4 = FUN_140e78f00(2);
        if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_240);
        }
        local_234 = 0;
        local_240 = uVar4;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_240);
        local_248 = 0x33;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a04c38);
        uStack_1fc = 0xd;
        local_208 = 0x3ff0000000000000;
        if (&local_208 != puVar6) {
          local_148 = 0;
          uStack_144 = 0x3ff00000;
          uStack_140 = uStack_200;
          uStack_13c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_148);
        }
        local_248 = 0x34;
        dVar9 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        local_28c = 0;
        local_248 = 0x35;
        local_298 = dVar9;
        dVar9 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        local_29c = 0;
        local_248 = 0x36;
        local_2a8 = dVar9;
        pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        dVar9 = local_298;
        if ((local_28c & 0xffffff) != 0) {
          dVar9 = (double)FUN_140e4b060(&local_298);
        }
        dVar10 = local_2a8;
        if ((local_29c & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_2a8);
        }
        fVar8 = (float)FUN_140e78f90((float)dVar10,(float)dVar9);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar5);
        }
        *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
        *pdVar5 = (double)fVar8;
        local_248 = 0x37;
        pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        dVar9 = local_298;
        if ((local_28c & 0xffffff) != 0) {
          dVar9 = (double)FUN_140e4b060(&local_298);
        }
        dVar10 = local_2a8;
        if ((local_29c & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_2a8);
        }
        fVar8 = (float)FUN_140e79010((float)dVar10,(float)dVar9);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar5);
        }
        *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
        *pdVar5 = (double)fVar8;
        cVar1 = FUN_140e643f0(local_c8,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_c8,&local_res8,&local_res10);
    if (local_b8 != 0) {
      FUN_140e4cd60();
    }
  } while (0 < iVar7);
  if (local_f8 != 0) {
    FUN_140e4cd60();
    local_f8 = 0;
  }
  if (local_d8 != 0) {
    FUN_140e4cd60();
    local_d8 = 0;
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_240);
  }
  if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_230);
  }
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(local_1f8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_258;
  return param_3;
}

