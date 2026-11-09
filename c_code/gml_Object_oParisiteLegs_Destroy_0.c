// gml_Object_oParisiteLegs_Destroy_0 @ 0x140bb2a50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oParisiteLegs_Destroy_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double *pdVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar13;
  undefined1 **ppuVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  ulonglong in_stack_fffffffffffffd30;
  undefined1 **ppuVar17;
  ulonglong uVar18;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  longlong *local_2b8;
  undefined4 local_2ac;
  undefined8 local_2a8;
  char *local_2a0;
  undefined4 local_298;
  double local_290;
  uint local_284;
  double local_280;
  uint local_274;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  longlong *local_248;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  double local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double local_1a8;
  uint local_19c;
  undefined1 local_198 [12];
  undefined4 local_18c;
  undefined1 local_188 [12];
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined1 local_158 [12];
  undefined4 local_14c;
  undefined1 local_148 [12];
  undefined4 local_13c;
  undefined1 local_138 [12];
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [16];
  longlong local_b8;
  
  local_2a0 = "gml_Script_anon@2469@___struct___599@gml_Object_oParisiteLegs_Create_0";
  local_2a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2a8;
  local_298 = 0xa2;
  pcVar13 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_198,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_1dc = 0xffffff;
  local_1e8 = 0.0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  uStack_1ac = 0xffffff;
  local_1b8 = 0;
  uStack_1bc = 0xffffff;
  local_1c8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_274 = 0xffffff;
  local_280 = 0.0;
  local_284 = 0xffffff;
  local_290 = 0.0;
  local_2bc = 0;
  local_2c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_298 = 0xa3;
  uVar3 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd428);
  local_2ac = 0;
  local_2b8 = (longlong *)&DAT_bff0000000000000;
  FUN_140042560(uVar3,&local_2b8);
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_298 = 0xa5;
  uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff338);
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
  ppuVar17 = (undefined1 **)(in_stack_fffffffffffffd30 & 0xffffffffffffff00);
  ppuVar14 = (undefined1 **)((ulonglong)pcVar13 & 0xffffffffffffff00);
  FUN_140e87440(uVar3,DAT_141a572c0,0x80000000,&local_1a8,ppuVar14,ppuVar17);
  dVar11 = local_1a8;
  if ((local_19c & 0xffffff) != 0) {
    dVar11 = (double)FUN_140e4b060(&local_1a8);
  }
  fVar10 = (float)FUN_140e78f90(0x40400000,(float)dVar11);
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1dc = 0;
  local_1e8 = (double)fVar10;
  FUN_140e87930(uVar4,DAT_141a1f230,0x80000000,&local_1e8);
  local_298 = 0xa6;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1ec = 0;
  local_1f8 = 0xc000000000000000;
  uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
  FUN_140e87930(uVar3,DAT_141a1f500,0x80000000,&local_1f8);
  local_298 = 0xa8;
  pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a06628);
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar11 = *pdVar5;
  }
  else {
    dVar11 = (double)FUN_140e4b060(pdVar5);
  }
  uVar8 = (ulonglong)dVar11;
  uVar7 = (uint)uVar8;
  while (0 < (int)uVar7) {
    uVar7 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar7;
    local_298 = 0xaa;
    uVar3 = FUN_140e794b0(0,0);
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_1fc = 0;
    local_298 = 0xab;
    local_208 = uVar3;
    uVar3 = FUN_140e794b0(0,0);
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_20c = 0;
    local_298 = 0xac;
    local_218 = uVar3;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    local_2ac = 6;
    local_2b8 = local_res8;
    uVar18 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
    uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_2b8,DAT_1419fe0e8,0x80000000,&local_1b8,uVar15,uVar18);
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_23c = 6;
    local_248 = local_res8;
    ppuVar17 = (undefined1 **)(uVar18 & 0xffffffffffffff00);
    FUN_140e87440(&local_248,DAT_1419fe158,0x80000000,&local_1c8,uVar15 & 0xffffffffffffff00,
                  ppuVar17);
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_268 = local_1b8;
    uStack_260 = uStack_1b0;
    uStack_25c = uStack_1ac;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_268);
    local_118 = local_198;
    local_268 = local_1c8;
    uStack_260 = uStack_1c0;
    uStack_25c = uStack_1bc;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_268);
    local_110 = local_188;
    local_108 = &local_208;
    local_100 = &local_218;
    local_268 = CONCAT44(uRam00000001419ec834,_DAT_1419ec830);
    uStack_260 = uRam00000001419ec838;
    uStack_25c = uRam00000001419ec83c;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_268);
    local_f8 = local_158;
    local_268 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_260 = DAT_1419df7b8;
    uStack_25c = DAT_1419df7bc;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_268);
    local_f0 = local_148;
    local_268 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_260 = DAT_1419df7b8;
    uStack_25c = DAT_1419df7bc;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_268);
    local_e8 = local_138;
    ppuVar14 = &local_118;
    gml_Script_get_blood_col(local_res8,local_res10,&local_2c8,7,ppuVar14);
  }
  iVar9 = 8;
  do {
    iVar9 = iVar9 + -1;
    local_298 = 0xb1;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    local_23c = 6;
    local_248 = local_res8;
    uVar15 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
    uVar8 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_248,DAT_1419fe0e8,0x80000000,&local_1b8,uVar8,uVar15);
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_2ac = 6;
    local_2b8 = local_res8;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_2b8,DAT_1419fe158,0x80000000,&local_1c8,uVar8,uVar15 & 0xffffffffffffff00);
    uVar16 = (undefined4)(uVar8 >> 0x20);
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_258 = (undefined4)local_1b8;
    uStack_254 = local_1b8._4_4_;
    uStack_250 = uStack_1b0;
    uStack_24c = uStack_1ac;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_258);
    local_118 = local_198;
    local_258 = (undefined4)local_1c8;
    uStack_254 = local_1c8._4_4_;
    uStack_250 = uStack_1c0;
    uStack_24c = uStack_1bc;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_258);
    local_110 = local_188;
    local_258 = _DAT_141dda1b8;
    uStack_254 = uRam0000000141dda1bc;
    uStack_250 = uRam0000000141dda1c0;
    uStack_24c = DAT_141dda1c4;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_258);
    local_108 = &local_178;
    uStack_cc = 0xf;
    local_d8 = 0x100000000000023;
    local_258 = 0x23;
    uStack_254 = 0x1000000;
    uStack_250 = uStack_d0;
    uStack_24c = 0xf;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_258);
    local_100 = &local_168;
    ppuVar17 = &local_118;
    ppuVar14 = (undefined1 **)CONCAT44(uVar16,DAT_141a0a7c8);
    uVar3 = FUN_140e634e0(local_res8,local_res10,&local_2c8,4,ppuVar14,ppuVar17);
    iVar2 = FUN_140e63cb0(local_c8,&local_res8,&local_res10,uVar3);
    if (0 < iVar2) {
      do {
        local_298 = 0xb3;
        uStack_25c = 0xf;
        local_268 = 0x10000010000021a;
        local_258 = 0x21a;
        uStack_254 = 0x1000001;
        uStack_250 = uStack_260;
        uStack_24c = 0xf;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_258);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1d8);
        local_298 = 0xb4;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_21c = 0;
        local_228 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_228);
        local_298 = 0xb6;
        uVar3 = FUN_140e78f00(2);
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_22c = 0;
        local_238 = uVar3;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_238);
        local_298 = 0xb7;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a04c38);
        uStack_11c = 0xd;
        local_128 = 0x3ff0000000000000;
        if (&local_128 != puVar6) {
          local_258 = 0;
          uStack_254 = 0x3ff00000;
          uStack_250 = uStack_120;
          uStack_24c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_258);
        }
        local_298 = 0xb9;
        dVar11 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_280);
        }
        local_274 = 0;
        local_298 = 0xba;
        local_280 = dVar11;
        dVar11 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_290);
        }
        local_284 = 0;
        local_298 = 0xbb;
        local_290 = dVar11;
        pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        dVar11 = local_280;
        if ((local_274 & 0xffffff) != 0) {
          dVar11 = (double)FUN_140e4b060(&local_280);
        }
        dVar12 = local_290;
        if ((local_284 & 0xffffff) != 0) {
          dVar12 = (double)FUN_140e4b060(&local_290);
        }
        fVar10 = (float)FUN_140e78f90((float)dVar12,(float)dVar11);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar5);
        }
        *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
        *pdVar5 = (double)fVar10;
        local_298 = 0xbc;
        pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        dVar11 = local_280;
        if ((local_274 & 0xffffff) != 0) {
          dVar11 = (double)FUN_140e4b060(&local_280);
        }
        dVar12 = local_290;
        if ((local_284 & 0xffffff) != 0) {
          dVar12 = (double)FUN_140e4b060(&local_290);
        }
        fVar10 = (float)FUN_140e79010((float)dVar12,(float)dVar11);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar5);
        }
        *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
        *pdVar5 = (double)fVar10;
        cVar1 = FUN_140e643f0(local_c8,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_c8,&local_res8,&local_res10);
    if (local_b8 != 0) {
      FUN_140e4cd60();
    }
  } while (0 < iVar9);
  local_298 = 0xc1;
  FUN_140edd0e0(local_res8,local_res10,0,0);
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_290);
  }
  if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_280);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
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
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  _eh_vector_destructor_iterator_(local_198,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_2a8;
  return param_3;
}

