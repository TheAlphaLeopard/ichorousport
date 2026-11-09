// gml_Object_oBreakablePitCandle2_Create_0 @ 0x14085e2f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oBreakablePitCandle2_Create_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  double *pdVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined4 uVar12;
  ulonglong uVar11;
  ulonglong uVar13;
  undefined1 **ppuVar14;
  undefined8 local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  double local_2f8;
  uint local_2ec;
  double local_2e8;
  uint local_2dc;
  double local_2d8;
  undefined4 local_2d0;
  uint local_2cc;
  double local_2c8;
  undefined4 local_2c0;
  uint local_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  uint uStack_2ac;
  double local_2a8;
  undefined4 local_2a0;
  uint local_29c;
  undefined8 local_298;
  char *local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined4 local_274;
  undefined8 local_270;
  undefined4 local_264;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined8 local_208;
  undefined4 uStack_200;
  uint uStack_1fc;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  double local_1e8;
  uint local_1dc;
  double local_1d8;
  uint local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
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
  local_290 = "gml_Script_anon@76@gml_Object_oBreakablePitBonePile_Create_0";
  local_298 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_298;
  local_288 = 7;
  uVar12 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_248,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_2bc = 0xffffff;
  local_2c8 = 0.0;
  local_2cc = 0xffffff;
  local_2d8 = 0.0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  local_264 = 0xffffff;
  local_270 = 0;
  local_274 = 0xffffff;
  local_280 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0.0;
  local_1dc = 0xffffff;
  local_1e8 = 0.0;
  local_2dc = 0xffffff;
  local_2e8 = 0.0;
  local_2ec = 0xffffff;
  local_2f8 = 0.0;
  local_2fc = 0;
  local_308 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_288 = 9;
  uStack_1ac = 0xf;
  local_1b8 = (longlong *)0x10000020000014b;
  local_258 = 0x10000020000014b;
  uStack_250 = uStack_1b0;
  uStack_24c = 0xf;
  if ((1 << (local_248[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_248);
  }
  FUN_140041b80(local_248,&local_258);
  local_198 = local_248;
  local_258 = CONCAT44(uRam00000001419e9024,_DAT_1419e9020);
  uStack_250 = uRam00000001419e9028;
  uStack_24c = uRam00000001419e902c;
  if ((1 << (local_238[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_258);
  local_258 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_250 = uRam00000001419df7a8;
  uStack_24c = uRam00000001419df7ac;
  local_190 = local_238;
  if ((1 << (local_228[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_258);
  local_188 = local_228;
  ppuVar14 = &local_198;
  uVar11 = CONCAT44(uVar12,DAT_141a0a2e8);
  FUN_140e634e0(local_res8,local_res10,&local_308,3,uVar11,ppuVar14);
  iVar4 = 5;
  do {
    iVar4 = iVar4 + -1;
    local_288 = 0xc;
    if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    local_308 = 0;
    local_300 = 0;
    local_2fc = 5;
    local_16c = 6;
    local_178 = local_res8;
    uVar13 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_2c8,uVar11,uVar13);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_15c = 6;
    local_168 = local_res8;
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(&local_168,DAT_1419fe158,0x80000000,&local_2d8,uVar11,uVar13 & 0xffffffffffffff00)
    ;
    uVar12 = (undefined4)(uVar11 >> 0x20);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    uVar10 = FUN_140e794b0(0,0x4014000000000000);
    uStack_1fc = local_2bc;
    uStack_200 = local_2c0;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) == 0) {
      local_208 = local_2c8;
    }
    else {
      FUN_1400419b0(&local_208,&local_2c8);
    }
    local_res18 = 1;
    FUN_140162c50(&local_208,uVar10);
    local_2b8 = (undefined4)local_208;
    uStack_2b4 = local_208._4_4_;
    uStack_2b0 = uStack_200;
    uStack_2ac = uStack_1fc;
    if ((1 << (local_248[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_248);
    }
    FUN_140041b80(local_248,&local_2b8);
    local_res18 = 0;
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_198 = local_248;
    uVar10 = FUN_140e794b0(0,0xc01c000000000000);
    uStack_1ec = local_2cc;
    uStack_1f0 = local_2d0;
    if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) == 0) {
      local_1f8 = local_2d8;
    }
    else {
      FUN_1400419b0(&local_1f8,&local_2d8);
    }
    local_res18 = 2;
    FUN_140162c50(&local_1f8,uVar10);
    local_2b8 = (undefined4)local_1f8;
    uStack_2b4 = local_1f8._4_4_;
    uStack_2b0 = uStack_1f0;
    uStack_2ac = uStack_1ec;
    if ((1 << (local_238[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_2b8);
    local_res18 = 0;
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_2b8 = _DAT_141dd7078;
    uStack_2b4 = uRam0000000141dd707c;
    uStack_2b0 = uRam0000000141dd7080;
    uStack_2ac = DAT_141dd7084;
    local_190 = local_238;
    if ((1 << (local_228[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_2b8);
    local_188 = local_228;
    uStack_fc = 0xf;
    local_108 = 0x100000000000041;
    local_2b8 = 0x41;
    uStack_2b4 = 0x1000000;
    uStack_2b0 = uStack_100;
    uStack_2ac = 0xf;
    if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_2b8);
    local_180 = local_218;
    ppuVar14 = &local_198;
    uVar11 = CONCAT44(uVar12,DAT_141a0a7c8);
    uVar10 = FUN_140e634e0(local_res8,local_res10,&local_308,4,uVar11,ppuVar14);
    iVar2 = FUN_140e63cb0(local_f8,&local_res8,&local_res10,uVar10);
    if (0 < iVar2) {
      do {
        local_288 = 0xd;
        uStack_24c = 0xf;
        local_258 = 0x10000010000023b;
        local_2b8 = 0x23b;
        uStack_2b4 = 0x1000001;
        uStack_2b0 = uStack_250;
        uStack_2ac = 0xf;
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_2b8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1c8);
        local_288 = 0xf;
        if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_308);
        }
        local_308 = 0;
        local_300 = 0;
        local_2fc = 5;
        local_14c = 6;
        local_158 = local_res8;
        uVar11 = uVar11 & 0xffffffffffffff00;
        FUN_140e87440(&local_158,DAT_141a0a728,0x80000000,&local_1a8,uVar11,
                      (ulonglong)ppuVar14 & 0xffffffffffffff00);
        uVar12 = (undefined4)(uVar11 >> 0x20);
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_2b8 = (undefined4)local_1a8;
        uStack_2b4 = local_1a8._4_4_;
        uStack_2b0 = uStack_1a0;
        uStack_2ac = uStack_19c;
        if ((1 << (local_248[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_248);
        }
        FUN_140041b80(local_248,&local_2b8);
        local_198 = local_248;
        ppuVar14 = &local_198;
        uVar11 = CONCAT44(uVar12,DAT_141a049b8);
        pdVar3 = (double *)FUN_140e634e0(local_res8,local_res10,&local_308,1,uVar11,ppuVar14);
        local_29c = *(uint *)((longlong)pdVar3 + 0xc);
        local_2a0 = *(undefined4 *)(pdVar3 + 1);
        if ((1 << ((byte)local_29c & 0x1f) & 0x46U) == 0) {
          local_2a8 = *pdVar3;
        }
        else {
          FUN_1400419b0(&local_2a8,pdVar3);
        }
        local_res18 = 4;
        local_13c = 7;
        local_148[0] = 1;
        FUN_1400462a0(&local_2a8,local_148);
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        dVar8 = local_2a8;
        if ((local_29c & 0xffffff) != 0) {
          dVar8 = (double)FUN_140e4b060(&local_2a8);
        }
        uVar10 = FUN_140e78f00((longlong)dVar8);
        if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_270);
        }
        local_264 = 0;
        local_res18 = 0;
        local_270 = uVar10;
        if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_270);
        local_288 = 0x10;
        if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_280);
        }
        local_274 = 0;
        local_280 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_280);
        local_288 = 0x12;
        local_12c = 6;
        local_138 = local_res10;
        uVar13 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
        uVar11 = uVar11 & 0xffffffffffffff00;
        FUN_140e87440(&local_138,DAT_1419fe0e8,0x80000000,&local_1d8,uVar11,uVar13);
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        local_11c = 6;
        local_128 = local_res10;
        uVar13 = uVar13 & 0xffffffffffffff00;
        uVar11 = uVar11 & 0xffffffffffffff00;
        FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_1e8,uVar11,uVar13);
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_10c = 6;
        local_118 = local_res8;
        uVar13 = uVar13 & 0xffffffffffffff00;
        uVar11 = uVar11 & 0xffffffffffffff00;
        FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_2c8,uVar11,uVar13);
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        uStack_1ac = 6;
        local_1b8 = local_res8;
        ppuVar14 = (undefined1 **)(uVar13 & 0xffffffffffffff00);
        uVar11 = uVar11 & 0xffffffffffffff00;
        FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_2d8,uVar11,ppuVar14);
        if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        dVar8 = local_2d8;
        if ((local_2cc & 0xffffff) != 0) {
          dVar8 = (double)FUN_140e4b060(&local_2d8);
        }
        dVar9 = local_2c8;
        if ((local_2bc & 0xffffff) != 0) {
          dVar9 = (double)FUN_140e4b060(&local_2c8);
        }
        dVar6 = local_1e8;
        if ((local_1dc & 0xffffff) != 0) {
          dVar6 = (double)FUN_140e4b060(&local_1e8);
        }
        dVar7 = local_1d8;
        if ((local_1cc & 0xffffff) != 0) {
          dVar7 = (double)FUN_140e4b060(&local_1d8);
        }
        fVar5 = (float)FUN_140e793d0((float)dVar7,(float)dVar6,(float)dVar9,(float)dVar8);
        dVar8 = (double)FUN_140e794b0(0,0x402e000000000000);
        if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
        local_2dc = 0;
        local_288 = 0x13;
        local_2e8 = dVar8 + (double)fVar5;
        dVar8 = (double)FUN_140e794b0(0,0x4010000000000000);
        if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f8);
        }
        local_2ec = 0;
        local_288 = 0x14;
        local_2f8 = dVar8;
        pdVar3 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        dVar8 = local_2e8;
        if ((local_2dc & 0xffffff) != 0) {
          dVar8 = (double)FUN_140e4b060(&local_2e8);
        }
        dVar9 = local_2f8;
        if ((local_2ec & 0xffffff) != 0) {
          dVar9 = (double)FUN_140e4b060(&local_2f8);
        }
        fVar5 = (float)FUN_140e78f90((float)dVar9,(float)dVar8);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar3);
        }
        *(undefined4 *)((longlong)pdVar3 + 0xc) = 0;
        *pdVar3 = (double)fVar5;
        local_288 = 0x15;
        pdVar3 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        dVar8 = local_2e8;
        if ((local_2dc & 0xffffff) != 0) {
          dVar8 = (double)FUN_140e4b060(&local_2e8);
        }
        dVar9 = local_2f8;
        if ((local_2ec & 0xffffff) != 0) {
          dVar9 = (double)FUN_140e4b060(&local_2f8);
        }
        fVar5 = (float)FUN_140e79010((float)dVar9,(float)dVar8);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar3);
        }
        *(undefined4 *)((longlong)pdVar3 + 0xc) = 0;
        *pdVar3 = (double)fVar5;
        cVar1 = FUN_140e643f0(local_f8,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_f8,&local_res8,&local_res10);
    if (local_e8 != 0) {
      FUN_140e4cd60();
    }
  } while (0 < iVar4);
  if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_280);
  }
  if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_270);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  _eh_vector_destructor_iterator_(local_248,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_298;
  return param_3;
}

