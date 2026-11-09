// gml_Object_oClotCageSmall_Create_0 @ 0x1408a8190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oClotCageSmall_Create_0(longlong *param_1,undefined8 param_2)

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
  code *pcVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined1 **in_stack_fffffffffffffcf0;
  ulonglong uVar15;
  undefined1 **ppuVar16;
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
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_27c;
  undefined8 local_278;
  char *local_270;
  undefined4 local_268;
  undefined8 local_258;
  undefined4 uStack_250;
  uint uStack_24c;
  undefined8 local_248;
  undefined4 uStack_240;
  uint uStack_23c;
  double local_238;
  uint local_22c;
  double local_228;
  uint local_21c;
  undefined8 local_218;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  longlong *local_1b8;
  undefined4 local_1ac;
  longlong *local_1a8;
  undefined4 local_19c;
  longlong *local_198;
  undefined4 local_18c;
  undefined4 local_188 [3];
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  longlong *local_158;
  undefined4 local_14c;
  longlong *local_148;
  undefined4 local_13c;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [16];
  longlong local_e8;
  
  local_res18 = 0;
  local_270 = "gml_Object_oClotCage_Destroy_0";
  local_268 = 0;
  local_278 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_278;
  pcVar12 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_1f8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_2bc = 0xffffff;
  local_2c8 = 0.0;
  local_2cc = 0xffffff;
  local_2d8 = 0.0;
  local_20c = 0xffffff;
  local_218 = 0;
  uStack_1fc = 0xffffff;
  local_208 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_21c = 0xffffff;
  local_228 = 0.0;
  local_22c = 0xffffff;
  local_238 = 0.0;
  local_2dc = 0xffffff;
  local_2e8 = 0.0;
  local_2ec = 0xffffff;
  local_2f8 = 0.0;
  local_2fc = 0xffffff;
  local_308 = 0;
  iVar5 = 6;
  do {
    iVar5 = iVar5 + -1;
    local_268 = 2;
    if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    local_308 = 0;
    local_300 = 0;
    local_2fc = 5;
    local_1ac = 6;
    local_1b8 = local_res8;
    uVar15 = (ulonglong)in_stack_fffffffffffffcf0 & 0xffffffffffffff00;
    uVar13 = (ulonglong)pcVar12 & 0xffffffffffffff00;
    FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_2c8,uVar13,uVar15);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_19c = 6;
    local_1a8 = local_res8;
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_2d8,uVar13,uVar15 & 0xffffffffffffff00)
    ;
    uVar14 = (undefined4)(uVar13 >> 0x20);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    uVar6 = FUN_140e794b0(0,0);
    uStack_24c = local_2bc;
    uStack_250 = local_2c0;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) == 0) {
      local_258 = local_2c8;
    }
    else {
      FUN_1400419b0(&local_258,&local_2c8);
    }
    local_res18 = 1;
    FUN_140162c50(&local_258,uVar6);
    local_2b8 = (undefined4)local_258;
    uStack_2b4 = local_258._4_4_;
    uStack_2b0 = uStack_250;
    uStack_2ac = uStack_24c;
    if ((1 << (local_1f8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_2b8);
    local_res18 = 0;
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_138 = local_1f8;
    uVar6 = FUN_140e794b0(0,0);
    uStack_23c = local_2cc;
    uStack_240 = local_2d0;
    if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) == 0) {
      local_248 = local_2d8;
    }
    else {
      FUN_1400419b0(&local_248,&local_2d8);
    }
    local_res18 = 2;
    FUN_140162c50(&local_248,uVar6);
    local_2b8 = (undefined4)local_248;
    uStack_2b4 = local_248._4_4_;
    uStack_2b0 = uStack_240;
    uStack_2ac = uStack_23c;
    if ((1 << (local_1e8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_2b8);
    local_res18 = 0;
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_130 = local_1e8;
    local_2b8 = _DAT_141dd7578;
    uStack_2b4 = uRam0000000141dd757c;
    uStack_2b0 = uRam0000000141dd7580;
    uStack_2ac = DAT_141dd7584;
    if ((1 << (local_1d8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_2b8);
    local_128 = local_1d8;
    uStack_10c = 0xf;
    local_118 = 0x100000000000041;
    local_2b8 = 0x41;
    uStack_2b4 = 0x1000000;
    uStack_2b0 = uStack_110;
    uStack_2ac = 0xf;
    if ((1 << (local_1c8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_2b8);
    local_120 = local_1c8;
    in_stack_fffffffffffffcf0 = &local_138;
    pcVar12 = (code *)CONCAT44(uVar14,DAT_141a0a7c8);
    uVar3 = FUN_140e634e0(local_res8,local_res10,&local_308,4,pcVar12,in_stack_fffffffffffffcf0);
    iVar2 = FUN_140e63cb0(local_f8,&local_res8,&local_res10,uVar3);
    if (0 < iVar2) {
      do {
        local_268 = 3;
        uStack_fc = 0xf;
        local_108 = 0x10000010000009c;
        local_2b8 = 0x9c;
        uStack_2b4 = 0x1000001;
        uStack_2b0 = uStack_100;
        uStack_2ac = 0xf;
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        FUN_140041b80(&local_218,&local_2b8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_218);
        local_268 = 5;
        if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_308);
        }
        local_308 = 0;
        local_300 = 0;
        local_2fc = 5;
        local_18c = 6;
        local_198 = local_res8;
        uVar13 = (ulonglong)pcVar12 & 0xffffffffffffff00;
        FUN_140e87440(&local_198,DAT_141a0a728,0x80000000,&local_208,uVar13,
                      (ulonglong)in_stack_fffffffffffffcf0 & 0xffffffffffffff00);
        uVar14 = (undefined4)(uVar13 >> 0x20);
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_2b8 = (undefined4)local_208;
        uStack_2b4 = local_208._4_4_;
        uStack_2b0 = uStack_200;
        uStack_2ac = uStack_1fc;
        if ((1 << (local_1f8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1f8);
        }
        FUN_140041b80(local_1f8,&local_2b8);
        local_138 = local_1f8;
        ppuVar16 = &local_138;
        uVar13 = CONCAT44(uVar14,DAT_141a049b8);
        pdVar4 = (double *)FUN_140e634e0(local_res8,local_res10,&local_308,1,uVar13,ppuVar16);
        local_29c = *(uint *)((longlong)pdVar4 + 0xc);
        local_2a0 = *(undefined4 *)(pdVar4 + 1);
        if ((1 << ((byte)local_29c & 0x1f) & 0x46U) == 0) {
          local_2a8 = *pdVar4;
        }
        else {
          FUN_1400419b0(&local_2a8,pdVar4);
        }
        local_res18 = 4;
        local_17c = 7;
        local_188[0] = 1;
        FUN_1400462a0(&local_2a8,local_188);
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_188);
        }
        dVar10 = local_2a8;
        if ((local_29c & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_2a8);
        }
        uVar3 = FUN_140e78f00((longlong)dVar10);
        if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        local_27c = 0;
        local_res18 = 0;
        local_288 = uVar3;
        if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_288);
        local_268 = 6;
        if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        local_28c = 0;
        local_298 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_298);
        local_268 = 9;
        local_16c = 6;
        local_178 = local_res10;
        uVar15 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_228,uVar13,uVar15);
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_15c = 6;
        local_168 = local_res10;
        uVar15 = uVar15 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_140e87440(&local_168,DAT_1419fe158,0x80000000,&local_238,uVar13,uVar15);
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        local_14c = 6;
        local_158 = local_res8;
        uVar15 = uVar15 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_2c8,uVar13,uVar15);
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_13c = 6;
        local_148 = local_res8;
        in_stack_fffffffffffffcf0 = (undefined1 **)(uVar15 & 0xffffffffffffff00);
        pcVar12 = (code *)(uVar13 & 0xffffffffffffff00);
        FUN_140e87440(&local_148,DAT_1419fe158,0x80000000,&local_2d8,pcVar12,
                      in_stack_fffffffffffffcf0);
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        dVar10 = local_2d8;
        if ((local_2cc & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_2d8);
        }
        dVar11 = local_2c8;
        if ((local_2bc & 0xffffff) != 0) {
          dVar11 = (double)FUN_140e4b060(&local_2c8);
        }
        dVar8 = local_238;
        if ((local_22c & 0xffffff) != 0) {
          dVar8 = (double)FUN_140e4b060(&local_238);
        }
        dVar9 = local_228;
        if ((local_21c & 0xffffff) != 0) {
          dVar9 = (double)FUN_140e4b060(&local_228);
        }
        fVar7 = (float)FUN_140e793d0((float)dVar9,(float)dVar8,(float)dVar11,(float)dVar10);
        dVar10 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
        local_2dc = 0;
        local_268 = 10;
        local_2e8 = dVar10 + (double)fVar7;
        dVar10 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f8);
        }
        local_2ec = 0;
        local_268 = 0xb;
        local_2f8 = dVar10;
        pdVar4 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        dVar10 = local_2e8;
        if ((local_2dc & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_2e8);
        }
        dVar11 = local_2f8;
        if ((local_2ec & 0xffffff) != 0) {
          dVar11 = (double)FUN_140e4b060(&local_2f8);
        }
        fVar7 = (float)FUN_140e78f90((float)dVar11,(float)dVar10);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar4);
        }
        *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
        *pdVar4 = (double)fVar7;
        local_268 = 0xc;
        pdVar4 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        dVar10 = local_2e8;
        if ((local_2dc & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_2e8);
        }
        dVar11 = local_2f8;
        if ((local_2ec & 0xffffff) != 0) {
          dVar11 = (double)FUN_140e4b060(&local_2f8);
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
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  _eh_vector_destructor_iterator_(local_1f8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_278;
  return;
}

