// gml_Object_oBreakableCage_Alarm_3 @ 0x140849d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oBreakableCage_Alarm_3(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double *pdVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined4 uVar13;
  ulonglong uVar12;
  ulonglong uVar14;
  undefined1 **ppuVar15;
  undefined8 local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  double local_2e8;
  uint local_2dc;
  double local_2d8;
  uint local_2cc;
  double local_2c8;
  undefined4 local_2c0;
  uint local_2bc;
  double local_2b8;
  undefined4 local_2b0;
  uint local_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  uint uStack_29c;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  longlong *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  double local_248;
  undefined4 local_240;
  uint local_23c;
  undefined8 local_238;
  char *local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_204;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  double local_1d8;
  uint local_1cc;
  double local_1c8;
  uint local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined1 *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong *local_178;
  undefined4 local_16c;
  longlong *local_168;
  undefined4 local_15c;
  longlong *local_158;
  undefined4 local_14c;
  undefined4 local_148 [3];
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  longlong *local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [16];
  longlong local_e8;
  
  local_res18 = 0;
  local_230 = "gml_Script_anon@171@gml_Object_oBreakableCage_Create_0";
  local_238 = DAT_141dc7a50;
  local_228 = 0xf;
  uVar13 = 1;
  DAT_141dc7a50 = &local_238;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_298,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_2ac = 0xffffff;
  local_2b8 = 0.0;
  local_2bc = 0xffffff;
  local_2c8 = 0.0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  local_214 = 0xffffff;
  local_220 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0.0;
  local_1cc = 0xffffff;
  local_1d8 = 0.0;
  local_2cc = 0xffffff;
  local_2d8 = 0.0;
  local_2dc = 0xffffff;
  local_2e8 = 0.0;
  local_2fc = 0;
  local_308 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_228 = 0x10;
  uStack_24c = 0xf;
  local_258 = (longlong *)0x100000200000102;
  local_2f8 = 0x100000200000102;
  uStack_2f0 = uStack_250;
  uStack_2ec = 0xf;
  if ((1 << (local_298[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_298);
  }
  FUN_140041b80(local_298,&local_2f8);
  local_1a8 = local_298;
  local_2f8 = CONCAT44(uRam00000001419e8ee4,_DAT_1419e8ee0);
  uStack_2f0 = uRam00000001419e8ee8;
  uStack_2ec = uRam00000001419e8eec;
  if ((1 << (local_288[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_288);
  }
  FUN_140041b80(local_288,&local_2f8);
  local_1a0 = local_288;
  local_2f8 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_2f0 = uRam00000001419df7a8;
  uStack_2ec = uRam00000001419df7ac;
  if ((1 << (local_278[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_2f8);
  local_198 = local_278;
  uVar3 = CONCAT44(uVar13,DAT_141a0a2e8);
  FUN_140e634e0(local_res8,local_res10,&local_308,3,uVar3,&local_1a8);
  uVar13 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_228 = 0x11;
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_308 = 0;
  local_300 = 0;
  local_2fc = 5;
  uStack_24c = 0xf;
  local_258 = (longlong *)0x10000020000012c;
  local_2f8 = 0x10000020000012c;
  uStack_2f0 = uStack_250;
  uStack_2ec = 0xf;
  if ((1 << (local_298[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_298);
  }
  FUN_140041b80(local_298,&local_2f8);
  local_1a8 = local_298;
  local_2f8 = CONCAT44(uRam00000001419e8ee4,_DAT_1419e8ee0);
  uStack_2f0 = uRam00000001419e8ee8;
  uStack_2ec = uRam00000001419e8eec;
  if ((1 << (local_288[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_288);
  }
  FUN_140041b80(local_288,&local_2f8);
  local_1a0 = local_288;
  local_2f8 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_2f0 = uRam00000001419df7a8;
  uStack_2ec = uRam00000001419df7ac;
  if ((1 << (local_278[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_2f8);
  local_198 = local_278;
  ppuVar15 = &local_1a8;
  uVar12 = CONCAT44(uVar13,DAT_141a0a2e8);
  FUN_140e634e0(local_res8,local_res10,&local_308,3,uVar12,ppuVar15);
  iVar5 = 6;
  do {
    iVar5 = iVar5 + -1;
    local_228 = 0x13;
    if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    local_308 = 0;
    local_300 = 0;
    local_2fc = 5;
    local_16c = 6;
    local_178 = local_res8;
    uVar14 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_2b8,uVar12,uVar14);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_15c = 6;
    local_168 = local_res8;
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(&local_168,DAT_1419fe158,0x80000000,&local_2c8,uVar12,uVar14 & 0xffffffffffffff00)
    ;
    uVar13 = (undefined4)(uVar12 >> 0x20);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    uVar6 = FUN_140e794b0(0,0);
    uStack_1ec = local_2ac;
    uStack_1f0 = local_2b0;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) == 0) {
      local_1f8 = local_2b8;
    }
    else {
      FUN_1400419b0(&local_1f8,&local_2b8);
    }
    local_res18 = 1;
    FUN_140162c50(&local_1f8,uVar6);
    local_2a8 = (undefined4)local_1f8;
    uStack_2a4 = local_1f8._4_4_;
    uStack_2a0 = uStack_1f0;
    uStack_29c = uStack_1ec;
    if ((1 << (local_298[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_298);
    }
    FUN_140041b80(local_298,&local_2a8);
    local_res18 = 0;
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1a8 = local_298;
    uVar6 = FUN_140e794b0(0,0);
    uStack_1dc = local_2bc;
    uStack_1e0 = local_2c0;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) == 0) {
      local_1e8 = local_2c8;
    }
    else {
      FUN_1400419b0(&local_1e8,&local_2c8);
    }
    local_res18 = 2;
    FUN_140162c50(&local_1e8,uVar6);
    local_2a8 = (undefined4)local_1e8;
    uStack_2a4 = local_1e8._4_4_;
    uStack_2a0 = uStack_1e0;
    uStack_29c = uStack_1dc;
    if ((1 << (local_288[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_288);
    }
    FUN_140041b80(local_288,&local_2a8);
    local_res18 = 0;
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1a0 = local_288;
    local_2a8 = _DAT_141dd7008;
    uStack_2a4 = uRam0000000141dd700c;
    uStack_2a0 = uRam0000000141dd7010;
    uStack_29c = DAT_141dd7014;
    if ((1 << (local_278[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_278);
    }
    FUN_140041b80(local_278,&local_2a8);
    local_198 = local_278;
    uStack_fc = 0xf;
    local_108 = 0x100000000000041;
    local_2a8 = 0x41;
    uStack_2a4 = 0x1000000;
    uStack_2a0 = uStack_100;
    uStack_29c = 0xf;
    if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_268);
    }
    FUN_140041b80(local_268,&local_2a8);
    local_190 = local_268;
    ppuVar15 = &local_1a8;
    uVar12 = CONCAT44(uVar13,DAT_141a0a7c8);
    uVar3 = FUN_140e634e0(local_res8,local_res10,&local_308,4,uVar12,ppuVar15);
    iVar2 = FUN_140e63cb0(local_f8,&local_res8,&local_res10,uVar3);
    if (0 < iVar2) {
      do {
        local_228 = 0x14;
        uStack_2ec = 0xf;
        local_2f8 = 0x100000100000199;
        local_2a8 = 0x199;
        uStack_2a4 = 0x1000001;
        uStack_2a0 = uStack_2f0;
        uStack_29c = 0xf;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_2a8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1b8);
        local_228 = 0x16;
        if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_308);
        }
        local_308 = 0;
        local_300 = 0;
        local_2fc = 5;
        local_14c = 6;
        local_158 = local_res8;
        uVar12 = uVar12 & 0xffffffffffffff00;
        FUN_140e87440(&local_158,DAT_141a0a728,0x80000000,&local_188,uVar12,
                      (ulonglong)ppuVar15 & 0xffffffffffffff00);
        uVar13 = (undefined4)(uVar12 >> 0x20);
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_2a8 = (undefined4)local_188;
        uStack_2a4 = local_188._4_4_;
        uStack_2a0 = uStack_180;
        uStack_29c = uStack_17c;
        if ((1 << (local_298[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_298);
        }
        FUN_140041b80(local_298,&local_2a8);
        local_1a8 = local_298;
        ppuVar15 = &local_1a8;
        uVar12 = CONCAT44(uVar13,DAT_141a049b8);
        pdVar4 = (double *)FUN_140e634e0(local_res8,local_res10,&local_308,1,uVar12,ppuVar15);
        local_23c = *(uint *)((longlong)pdVar4 + 0xc);
        local_240 = *(undefined4 *)(pdVar4 + 1);
        if ((1 << ((byte)local_23c & 0x1f) & 0x46U) == 0) {
          local_248 = *pdVar4;
        }
        else {
          FUN_1400419b0(&local_248,pdVar4);
        }
        local_res18 = 4;
        local_13c = 7;
        local_148[0] = 1;
        FUN_1400462a0(&local_248,local_148);
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        dVar10 = local_248;
        if ((local_23c & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_248);
        }
        uVar3 = FUN_140e78f00((longlong)dVar10);
        if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_210);
        }
        local_204 = 0;
        local_res18 = 0;
        local_210 = uVar3;
        if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_210);
        local_228 = 0x17;
        if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_220);
        }
        local_214 = 0;
        local_220 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_220);
        local_228 = 0x19;
        local_12c = 6;
        local_138 = local_res10;
        uVar14 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
        uVar12 = uVar12 & 0xffffffffffffff00;
        FUN_140e87440(&local_138,DAT_1419fe0e8,0x80000000,&local_1c8,uVar12,uVar14);
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        local_11c = 6;
        local_128 = local_res10;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar12 = uVar12 & 0xffffffffffffff00;
        FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_1d8,uVar12,uVar14);
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_10c = 6;
        local_118 = local_res8;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar12 = uVar12 & 0xffffffffffffff00;
        FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_2b8,uVar12,uVar14);
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        uStack_24c = 6;
        local_258 = local_res8;
        ppuVar15 = (undefined1 **)(uVar14 & 0xffffffffffffff00);
        uVar12 = uVar12 & 0xffffffffffffff00;
        FUN_140e87440(&local_258,DAT_1419fe158,0x80000000,&local_2c8,uVar12,ppuVar15);
        if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        dVar10 = local_2c8;
        if ((local_2bc & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_2c8);
        }
        dVar11 = local_2b8;
        if ((local_2ac & 0xffffff) != 0) {
          dVar11 = (double)FUN_140e4b060(&local_2b8);
        }
        dVar8 = local_1d8;
        if ((local_1cc & 0xffffff) != 0) {
          dVar8 = (double)FUN_140e4b060(&local_1d8);
        }
        dVar9 = local_1c8;
        if ((local_1bc & 0xffffff) != 0) {
          dVar9 = (double)FUN_140e4b060(&local_1c8);
        }
        fVar7 = (float)FUN_140e793d0((float)dVar9,(float)dVar8,(float)dVar11,(float)dVar10);
        dVar10 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2cc = 0;
        local_228 = 0x1a;
        local_2d8 = dVar10 + (double)fVar7;
        dVar10 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
        local_2dc = 0;
        local_228 = 0x1b;
        local_2e8 = dVar10;
        pdVar4 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        dVar10 = local_2d8;
        if ((local_2cc & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_2d8);
        }
        dVar11 = local_2e8;
        if ((local_2dc & 0xffffff) != 0) {
          dVar11 = (double)FUN_140e4b060(&local_2e8);
        }
        fVar7 = (float)FUN_140e78f90((float)dVar11,(float)dVar10);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar4);
        }
        *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
        *pdVar4 = (double)fVar7;
        local_228 = 0x1c;
        pdVar4 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        dVar10 = local_2d8;
        if ((local_2cc & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_2d8);
        }
        dVar11 = local_2e8;
        if ((local_2dc & 0xffffff) != 0) {
          dVar11 = (double)FUN_140e4b060(&local_2e8);
        }
        fVar7 = (float)FUN_140e79010((float)dVar11,(float)dVar10);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar4);
        }
        *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
        *pdVar4 = (double)fVar7;
        cVar1 = FUN_140e643f0(local_f8,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_f8,&local_res8,&local_res10);
    if (local_e8 != 0) {
      FUN_140e4cd60();
    }
  } while (0 < iVar5);
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  _eh_vector_destructor_iterator_(local_298,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_238;
  return param_3;
}

