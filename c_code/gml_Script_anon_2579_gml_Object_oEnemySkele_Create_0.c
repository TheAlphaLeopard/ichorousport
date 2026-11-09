// gml_Script_anon_2579_gml_Object_oEnemySkele_Create_0 @ 0x140a63a30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_2579_gml_Object_oEnemySkele_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  double *pdVar5;
  undefined8 *puVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  code *pcVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  ulonglong in_stack_fffffffffffffd50;
  ulonglong uVar13;
  undefined1 **ppuVar14;
  undefined8 local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  longlong *local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  double local_278;
  uint local_26c;
  double local_268;
  uint local_25c;
  longlong *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  char *local_230;
  undefined4 local_228;
  undefined1 local_218 [16];
  undefined1 local_208 [12];
  byte local_1fc;
  undefined1 local_1f8 [12];
  byte local_1ec;
  undefined1 local_1e8 [12];
  byte local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_14c;
  longlong *local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  longlong local_118;
  undefined1 local_108 [16];
  longlong local_f8;
  undefined1 local_e8 [16];
  longlong local_d8;
  undefined1 local_c8 [16];
  longlong local_b8;
  
  local_res18 = 0;
  local_230 = "gml_Script_anon@128@gml_Object_oEnemySkele_Create_0";
  local_238 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_238;
  local_228 = 7;
  pcVar10 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_218,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_14c = 0xffffff;
  local_158 = 0;
  uStack_15c = 0xffffff;
  local_168 = (longlong *)0x0;
  uStack_19c = 0xffffff;
  local_1a8 = (longlong *)0x0;
  uStack_16c = 0xffffff;
  local_178 = (longlong *)0x0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_25c = 0xffffff;
  local_268 = 0.0;
  local_26c = 0xffffff;
  local_278 = 0.0;
  local_28c = 0;
  local_298 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_228 = 8;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f1d58);
  FUN_140e87440(uVar4,DAT_1419f4a98,0x80000000,&local_158,(ulonglong)pcVar10 & 0xffffffffffffff00,
                in_stack_fffffffffffffd50 & 0xffffffffffffff00);
  uVar4 = FUN_140069500(uVar4);
  uVar13 = 0;
  puVar6 = &local_158;
  FUN_140e63610(uVar4,local_res10,&local_298,0,puVar6,0);
  local_228 = 10;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  uStack_29c = 6;
  local_2a8 = local_res8;
  uVar13 = uVar13 & 0xffffffffffffff00;
  uVar11 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(&local_2a8,DAT_1419fe0e8,0x80000000,&local_168,uVar11,uVar13);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  uStack_29c = 6;
  local_2a8 = local_res8;
  uVar13 = uVar13 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(&local_2a8,DAT_1419fe158,0x80000000,&local_1a8,uVar11,uVar13);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  uStack_29c = 6;
  local_2a8 = local_res8;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(&local_2a8,DAT_141a1b910,0x80000000,&local_178,uVar11,uVar13 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar11 >> 0x20);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_258 = local_168;
  uStack_250 = uStack_160;
  uStack_24c = uStack_15c;
  if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_258);
  local_198 = local_218;
  local_258 = local_1a8;
  uStack_250 = uStack_1a0;
  uStack_24c = uStack_19c;
  if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_258);
  local_190 = local_208;
  local_258 = local_178;
  uStack_250 = uStack_170;
  uStack_24c = uStack_16c;
  if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_258);
  local_188 = local_1f8;
  uStack_27c = 0xf;
  local_288 = (longlong *)0x100000000000023;
  local_258 = (longlong *)0x100000000000023;
  uStack_250 = uStack_280;
  uStack_24c = 0xf;
  if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_258);
  local_180 = local_1e8;
  ppuVar14 = &local_198;
  uVar13 = CONCAT44(uVar12,DAT_141a0a7c8);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_298,4,uVar13,ppuVar14);
  iVar2 = FUN_140e63cb0(local_e8,&local_res8,&local_res10,uVar4);
  if (0 < iVar2) {
    do {
      local_228 = 0xc;
      uStack_27c = 0xf;
      local_288 = (longlong *)0x1000001000002c5;
      local_258 = (longlong *)0x1000001000002c5;
      uStack_250 = uStack_280;
      uStack_24c = 0xf;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_258);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1b8);
      local_228 = 0xd;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_1bc = 0;
      local_1c8 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_1c8);
      local_228 = 0xe;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1cc = 0;
      local_1d8 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_1d8);
      local_228 = 0xf;
      dVar8 = (double)FUN_140e794b0(0,0);
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_25c = 0;
      local_228 = 0x10;
      local_268 = dVar8;
      dVar8 = (double)FUN_140e794b0(0,0);
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      local_26c = 0;
      local_228 = 0x11;
      local_278 = dVar8;
      pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
      dVar8 = local_268;
      if ((local_25c & 0xffffff) != 0) {
        dVar8 = (double)FUN_140e4b060(&local_268);
      }
      dVar9 = local_278;
      if ((local_26c & 0xffffff) != 0) {
        dVar9 = (double)FUN_140e4b060(&local_278);
      }
      fVar7 = (float)FUN_140e78f90((float)dVar9,(float)dVar8);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar5);
      }
      *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
      *pdVar5 = (double)fVar7;
      local_228 = 0x12;
      pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      dVar8 = local_268;
      if ((local_25c & 0xffffff) != 0) {
        dVar8 = (double)FUN_140e4b060(&local_268);
      }
      dVar9 = local_278;
      if ((local_26c & 0xffffff) != 0) {
        dVar9 = (double)FUN_140e4b060(&local_278);
      }
      fVar7 = (float)FUN_140e79010((float)dVar9,(float)dVar8);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar5);
      }
      *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
      *pdVar5 = (double)fVar7;
      cVar1 = FUN_140e643f0(local_e8,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_e8,&local_res8,&local_res10);
  local_228 = 0x15;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  uStack_29c = 6;
  local_2a8 = local_res8;
  uVar11 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
  uVar13 = uVar13 & 0xffffffffffffff00;
  FUN_140e87440(&local_2a8,DAT_1419fe0e8,0x80000000,&local_168,uVar13,uVar11);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  uStack_29c = 6;
  local_2a8 = local_res8;
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar13 = uVar13 & 0xffffffffffffff00;
  FUN_140e87440(&local_2a8,DAT_1419fe158,0x80000000,&local_1a8,uVar13,uVar11);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  uStack_29c = 6;
  local_2a8 = local_res8;
  uVar13 = uVar13 & 0xffffffffffffff00;
  FUN_140e87440(&local_2a8,DAT_141a1b910,0x80000000,&local_178,uVar13,uVar11 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar13 >> 0x20);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_258 = local_168;
  uStack_250 = uStack_160;
  uStack_24c = uStack_15c;
  if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_258);
  local_198 = local_218;
  local_258 = local_1a8;
  uStack_250 = uStack_1a0;
  uStack_24c = uStack_19c;
  if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_258);
  local_190 = local_208;
  local_258 = local_178;
  uStack_250 = uStack_170;
  uStack_24c = uStack_16c;
  if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_258);
  local_188 = local_1f8;
  uStack_27c = 0xf;
  local_288 = (longlong *)0x100000000000023;
  local_258 = (longlong *)0x100000000000023;
  uStack_250 = uStack_280;
  uStack_24c = 0xf;
  if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_258);
  local_180 = local_1e8;
  ppuVar14 = &local_198;
  uVar13 = CONCAT44(uVar12,DAT_141a0a7c8);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_298,4,uVar13,ppuVar14);
  iVar2 = FUN_140e63cb0(local_108,&local_res8,&local_res10,uVar4);
  if (0 < iVar2) {
    do {
      local_228 = 0x17;
      uStack_27c = 0xf;
      local_288 = (longlong *)0x1000001000002c5;
      local_258 = (longlong *)0x1000001000002c5;
      uStack_250 = uStack_280;
      uStack_24c = 0xf;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_258);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1b8);
      local_228 = 0x18;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_1bc = 0;
      local_1c8 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_1c8);
      local_228 = 0x19;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1cc = 0;
      local_1d8 = 0x3ff0000000000000;
      FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_1d8);
      local_228 = 0x1a;
      dVar8 = (double)FUN_140e794b0(0,0);
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_25c = 0;
      local_228 = 0x1b;
      local_268 = dVar8;
      dVar8 = (double)FUN_140e794b0(0,0);
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      local_26c = 0;
      local_228 = 0x1c;
      local_278 = dVar8;
      pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
      dVar8 = local_268;
      if ((local_25c & 0xffffff) != 0) {
        dVar8 = (double)FUN_140e4b060(&local_268);
      }
      dVar9 = local_278;
      if ((local_26c & 0xffffff) != 0) {
        dVar9 = (double)FUN_140e4b060(&local_278);
      }
      fVar7 = (float)FUN_140e78f90((float)dVar9,(float)dVar8);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar5);
      }
      *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
      *pdVar5 = (double)fVar7;
      local_228 = 0x1d;
      pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      dVar8 = local_268;
      if ((local_25c & 0xffffff) != 0) {
        dVar8 = (double)FUN_140e4b060(&local_268);
      }
      dVar9 = local_278;
      if ((local_26c & 0xffffff) != 0) {
        dVar9 = (double)FUN_140e4b060(&local_278);
      }
      fVar7 = (float)FUN_140e79010((float)dVar9,(float)dVar8);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar5);
      }
      *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
      *pdVar5 = (double)fVar7;
      cVar1 = FUN_140e643f0(local_108,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_108,&local_res8,&local_res10);
  iVar2 = 5;
  do {
    iVar2 = iVar2 + -1;
    local_228 = 0x21;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    uStack_29c = 6;
    local_2a8 = local_res8;
    uVar11 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(&local_2a8,DAT_1419fe0e8,0x80000000,&local_168,uVar13,uVar11);
    if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_13c = 6;
    local_148 = local_res8;
    uVar11 = uVar11 & 0xffffffffffffff00;
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(&local_148,DAT_1419fe158,0x80000000,&local_1a8,uVar13,uVar11);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    uStack_27c = 6;
    local_288 = local_res8;
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(&local_288,DAT_141a1b910,0x80000000,&local_178,uVar13,uVar11 & 0xffffffffffffff00)
    ;
    uVar12 = (undefined4)(uVar13 >> 0x20);
    if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_248 = (undefined4)local_168;
    uStack_244 = local_168._4_4_;
    uStack_240 = uStack_160;
    uStack_23c = uStack_15c;
    if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_248);
    local_198 = local_218;
    local_248 = (undefined4)local_1a8;
    uStack_244 = local_1a8._4_4_;
    uStack_240 = uStack_1a0;
    uStack_23c = uStack_19c;
    if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_248);
    local_190 = local_208;
    local_248 = (undefined4)local_178;
    uStack_244 = local_178._4_4_;
    uStack_240 = uStack_170;
    uStack_23c = uStack_16c;
    if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_248);
    local_188 = local_1f8;
    uStack_12c = 0xf;
    local_138 = 0x100000000000023;
    local_248 = 0x23;
    uStack_244 = 0x1000000;
    uStack_240 = uStack_130;
    uStack_23c = 0xf;
    if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_248);
    local_180 = local_1e8;
    ppuVar14 = &local_198;
    uVar13 = CONCAT44(uVar12,DAT_141a0a7c8);
    uVar4 = FUN_140e634e0(local_res8,local_res10,&local_298,4,uVar13,ppuVar14);
    iVar3 = FUN_140e63cb0(local_c8,&local_res8,&local_res10,uVar4);
    if (0 < iVar3) {
      do {
        local_228 = 0x23;
        uStack_24c = 0xf;
        local_258 = (longlong *)0x1000001000002c5;
        local_248 = 0x2c5;
        uStack_244 = 0x1000001;
        uStack_240 = uStack_250;
        uStack_23c = 0xf;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_248);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1b8);
        local_228 = 0x24;
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_1bc = 0;
        local_1c8 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_1c8);
        local_228 = 0x25;
        if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        local_298 = 0;
        local_290 = 0;
        local_28c = 5;
        local_248 = _DAT_1419eafb0;
        uStack_244 = uRam00000001419eafb4;
        uStack_240 = uRam00000001419eafb8;
        uStack_23c = uRam00000001419eafbc;
        if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_218);
        }
        FUN_140041b80(local_218,&local_248);
        local_198 = local_218;
        local_248 = _DAT_1419eafc0;
        uStack_244 = uRam00000001419eafc4;
        uStack_240 = uRam00000001419eafc8;
        uStack_23c = uRam00000001419eafcc;
        if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_208);
        }
        FUN_140041b80(local_208,&local_248);
        local_190 = local_208;
        puVar6 = (undefined8 *)FUN_140e78db0(&local_298,2,&local_198);
        if (puVar6 != &local_1d8) {
          local_248 = *(undefined4 *)puVar6;
          uStack_244 = *(undefined4 *)((longlong)puVar6 + 4);
          uStack_240 = *(undefined4 *)(puVar6 + 1);
          uStack_23c = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          FUN_140041b80(&local_1d8,&local_248);
        }
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_1d8);
        local_228 = 0x26;
        dVar8 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        local_25c = 0;
        local_228 = 0x27;
        local_268 = dVar8;
        dVar8 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        local_26c = 0;
        local_228 = 0x28;
        local_278 = dVar8;
        pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        dVar8 = local_268;
        if ((local_25c & 0xffffff) != 0) {
          dVar8 = (double)FUN_140e4b060(&local_268);
        }
        dVar9 = local_278;
        if ((local_26c & 0xffffff) != 0) {
          dVar9 = (double)FUN_140e4b060(&local_278);
        }
        fVar7 = (float)FUN_140e78f90((float)dVar9,(float)dVar8);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar5);
        }
        *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
        *pdVar5 = (double)fVar7;
        local_228 = 0x29;
        pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        dVar8 = local_268;
        if ((local_25c & 0xffffff) != 0) {
          dVar8 = (double)FUN_140e4b060(&local_268);
        }
        dVar9 = local_278;
        if ((local_26c & 0xffffff) != 0) {
          dVar9 = (double)FUN_140e4b060(&local_278);
        }
        fVar7 = (float)FUN_140e79010((float)dVar9,(float)dVar8);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar5);
        }
        *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
        *pdVar5 = (double)fVar7;
        cVar1 = FUN_140e643f0(local_c8,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_c8,&local_res8,&local_res10);
    if (local_b8 != 0) {
      FUN_140e4cd60();
    }
  } while (0 < iVar2);
  local_228 = 0x2d;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  uStack_27c = 6;
  local_288 = local_res8;
  uVar11 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
  uVar13 = uVar13 & 0xffffffffffffff00;
  FUN_140e87440(&local_288,DAT_1419fe0e8,0x80000000,&local_168,uVar13,uVar11);
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  uStack_27c = 6;
  local_288 = local_res8;
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar13 = uVar13 & 0xffffffffffffff00;
  FUN_140e87440(&local_288,DAT_1419fe158,0x80000000,&local_1a8,uVar13,uVar11);
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  uStack_27c = 6;
  local_288 = local_res8;
  uVar13 = uVar13 & 0xffffffffffffff00;
  FUN_140e87440(&local_288,DAT_141a1b910,0x80000000,&local_178,uVar13,uVar11 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar13 >> 0x20);
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_248 = (undefined4)local_168;
  uStack_244 = local_168._4_4_;
  uStack_240 = uStack_160;
  uStack_23c = uStack_15c;
  if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_248);
  local_198 = local_218;
  uStack_29c = uStack_19c;
  uStack_2a0 = uStack_1a0;
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
    local_2a8 = local_1a8;
  }
  else {
    FUN_1400419b0(&local_2a8,&local_1a8);
  }
  local_res18 = 1;
  uStack_27c = 7;
  local_288 = (longlong *)CONCAT44(local_288._4_4_,0xc);
  FUN_1400462a0(&local_2a8,&local_288);
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_248 = (undefined4)local_2a8;
  uStack_244 = local_2a8._4_4_;
  uStack_240 = uStack_2a0;
  uStack_23c = uStack_29c;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_248);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_190 = local_208;
  local_248 = (undefined4)local_178;
  uStack_244 = local_178._4_4_;
  uStack_240 = uStack_170;
  uStack_23c = uStack_16c;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_248);
  local_188 = local_1f8;
  uStack_24c = 0xf;
  local_258 = (longlong *)0x10000000000009a;
  local_248 = 0x9a;
  uStack_244 = 0x1000000;
  uStack_240 = uStack_250;
  uStack_23c = 0xf;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_248);
  local_180 = local_1e8;
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_298,4,CONCAT44(uVar12,DAT_141a0a7c8),
                        &local_198);
  iVar2 = FUN_140e63cb0(local_128,&local_res8,&local_res10,uVar4);
  if (0 < iVar2) {
    do {
      local_228 = 0x2f;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f090);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = 0x4039000000000000;
      local_228 = 0x30;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = 0xc000000000000000;
      local_228 = 0x31;
      if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      local_298 = 0;
      local_290 = 0;
      local_28c = 5;
      uStack_24c = 0xf;
      local_258 = (longlong *)0x100000000000149;
      local_248 = 0x149;
      uStack_244 = 0x1000000;
      uStack_240 = uStack_250;
      uStack_23c = 0xf;
      if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_218);
      }
      FUN_140041b80(local_218,&local_248);
      local_198 = local_218;
      gml_GlobalScript_world_pos_to_gui(local_res8,local_res10,&local_298,1,&local_198);
      cVar1 = FUN_140e643f0(local_128,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_128,&local_res8,&local_res10);
  if (local_118 != 0) {
    FUN_140e4cd60();
    local_118 = 0;
  }
  if (local_f8 != 0) {
    FUN_140e4cd60();
    local_f8 = 0;
  }
  if (local_d8 != 0) {
    FUN_140e4cd60();
    local_d8 = 0;
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_218,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_238;
  return param_3;
}

