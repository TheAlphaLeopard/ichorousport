// gml_Object_oEnemyFreezeOverlay_Draw_0 @ 0x1409d8650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oEnemyFreezeOverlay_Draw_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined8 **in_stack_fffffffffffffd60;
  ulonglong uVar17;
  double local_298;
  uint local_28c;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_26c;
  double local_268;
  uint local_25c;
  double local_258;
  uint local_24c;
  double local_248;
  uint local_23c;
  double local_238;
  uint local_22c;
  undefined8 local_228;
  uint local_21c;
  undefined8 local_218;
  uint local_20c;
  undefined8 local_208;
  uint local_1fc;
  undefined8 local_1f8;
  uint local_1ec;
  undefined8 local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong *local_1b8;
  undefined4 local_1ac;
  longlong *local_1a8;
  undefined4 local_19c;
  longlong *local_198;
  undefined4 local_18c;
  longlong *local_188;
  undefined4 local_17c;
  longlong *local_178;
  undefined4 local_16c;
  longlong *local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  
  local_1e0 = "gml_Object_oEnemyFreezeOverlay_Destroy_0";
  local_1d8 = 0;
  local_1e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1e8;
  pcVar14 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_138,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_28c = 0xffffff;
  local_298 = 0.0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_22c = 0xffffff;
  local_238 = 0.0;
  local_23c = 0xffffff;
  local_248 = 0.0;
  local_24c = 0xffffff;
  local_258 = 0.0;
  local_25c = 0xffffff;
  local_268 = 0.0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  iVar6 = 6;
  do {
    iVar6 = iVar6 + -1;
    local_1d8 = 4;
    dVar12 = (double)FUN_140e794b0(0,0);
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_28c = 0;
    local_1d8 = 5;
    local_298 = dVar12;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    local_1ac = 6;
    local_1b8 = local_res8;
    uVar17 = (ulonglong)in_stack_fffffffffffffd60 & 0xffffffffffffff00;
    uVar15 = (ulonglong)pcVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_1b8,DAT_141a0a808,0x80000000,&local_1f8,uVar15,uVar17);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_19c = 6;
    local_1a8 = local_res8;
    uVar17 = uVar17 & 0xffffffffffffff00;
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_140e87440(&local_1a8,DAT_141a0a798,0x80000000,&local_208,uVar15,uVar17);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_18c = 6;
    local_198 = local_res8;
    uVar17 = uVar17 & 0xffffffffffffff00;
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_140e87440(&local_198,DAT_141a0a788,0x80000000,&local_218,uVar15,uVar17);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_17c = 6;
    local_188 = local_res8;
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_140e87440(&local_188,DAT_141a101f8,0x80000000,&local_228,uVar15,uVar17 & 0xffffffffffffff00)
    ;
    uVar16 = (undefined4)(uVar15 >> 0x20);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    if ((local_1fc & 0xffffff) == 0) {
      uVar7 = (undefined4)local_208;
    }
    else {
      uVar7 = FUN_140e4b060(&local_208);
    }
    if ((local_1ec & 0xffffff) == 0) {
      uVar8 = (undefined4)local_1f8;
    }
    else {
      uVar8 = FUN_140e4b060(&local_1f8);
    }
    uVar3 = FUN_140e794b0(uVar8,uVar7);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_12c = 0;
    local_d8 = &local_138;
    local_138 = uVar3;
    if ((local_21c & 0xffffff) == 0) {
      uVar7 = (undefined4)local_228;
    }
    else {
      uVar7 = FUN_140e4b060(&local_228);
    }
    if ((local_20c & 0xffffff) == 0) {
      uVar8 = (undefined4)local_218;
    }
    else {
      uVar8 = FUN_140e4b060(&local_218);
    }
    uVar3 = FUN_140e794b0(uVar8,uVar7);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_11c = 0;
    local_d0 = &local_128;
    local_1c8 = _DAT_141dd8a88;
    uStack_1c4 = uRam0000000141dd8a8c;
    uStack_1c0 = uRam0000000141dd8a90;
    uStack_1bc = DAT_141dd8a94;
    local_128 = uVar3;
    if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_1c8);
    local_c8 = local_118;
    uStack_ec = 0xf;
    local_f8 = 0x10000000000011a;
    local_1c8 = 0x11a;
    uStack_1c4 = 0x1000000;
    uStack_1c0 = uStack_f0;
    uStack_1bc = 0xf;
    if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_1c8);
    local_c0 = local_108;
    in_stack_fffffffffffffd60 = &local_d8;
    pcVar14 = (code *)CONCAT44(uVar16,DAT_141a0a7c8);
    uVar3 = FUN_140e634e0(local_res8,local_res10,&local_288,4,pcVar14,in_stack_fffffffffffffd60);
    iVar2 = FUN_140e63cb0(local_b8,&local_res8,&local_res10,uVar3);
    if (0 < iVar2) {
      do {
        local_1d8 = 10;
        pdVar4 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
        local_16c = 6;
        local_178 = local_res8;
        uVar17 = (ulonglong)in_stack_fffffffffffffd60 & 0xffffffffffffff00;
        uVar15 = (ulonglong)pcVar14 & 0xffffffffffffff00;
        FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_238,uVar15,uVar17);
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_15c = 6;
        local_168 = local_res8;
        uVar17 = uVar17 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_140e87440(&local_168,DAT_1419fe158,0x80000000,&local_248,uVar15,uVar17);
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        local_14c = 6;
        local_158 = local_res10;
        uVar17 = uVar17 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_258,uVar15,uVar17);
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_13c = 6;
        local_148 = local_res10;
        in_stack_fffffffffffffd60 = (undefined8 **)(uVar17 & 0xffffffffffffff00);
        pcVar14 = (code *)(uVar15 & 0xffffffffffffff00);
        FUN_140e87440(&local_148,DAT_1419fe158,0x80000000,&local_268,pcVar14,
                      in_stack_fffffffffffffd60);
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140e609c0(local_res8);
        dVar12 = local_268;
        if ((local_25c & 0xffffff) != 0) {
          dVar12 = (double)FUN_140e4b060(&local_268);
        }
        dVar13 = local_258;
        if ((local_24c & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_258);
        }
        dVar10 = local_248;
        if ((local_23c & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_248);
        }
        dVar11 = local_238;
        if ((local_22c & 0xffffff) != 0) {
          dVar11 = (double)FUN_140e4b060(&local_238);
        }
        fVar9 = (float)FUN_140e793d0((float)dVar11,(float)dVar10,(float)dVar13,(float)dVar12);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar4);
        }
        *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
        *pdVar4 = (double)(fVar9 + 180.0);
        FUN_140e60910(1);
        local_1d8 = 0xc;
        pdVar4 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
        pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
          dVar12 = *pdVar4;
        }
        else {
          dVar12 = (double)FUN_140e4b060(pdVar4);
        }
        dVar13 = local_298;
        if ((local_28c & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_298);
        }
        fVar9 = (float)FUN_140e78f90((float)dVar13,(float)dVar12);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar5);
        }
        *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
        *pdVar5 = (double)fVar9;
        local_1d8 = 0xd;
        pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
          dVar12 = *pdVar4;
        }
        else {
          dVar12 = (double)FUN_140e4b060(pdVar4);
        }
        dVar13 = local_298;
        if ((local_28c & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_298);
        }
        fVar9 = (float)FUN_140e79010((float)dVar13,(float)dVar12);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar5);
        }
        *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
        *pdVar5 = (double)fVar9;
        local_1d8 = 0xf;
        uStack_dc = 0xf;
        local_e8 = 0x10000010000014a;
        local_1c8 = 0x14a;
        uStack_1c4 = 0x1000001;
        uStack_1c0 = uStack_e0;
        uStack_1bc = 0xf;
        if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        FUN_140041b80(&local_278,&local_1c8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_278);
        cVar1 = FUN_140e643f0(local_b8,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_b8,&local_res8,&local_res10);
    if (local_a8 != 0) {
      FUN_140e4cd60();
    }
  } while (0 < iVar6);
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  _eh_vector_destructor_iterator_(&local_138,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1e8;
  return;
}

