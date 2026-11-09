// gml_Script___outline_gc @ 0x1400f0ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script___outline_gc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  double *pdVar7;
  double dVar8;
  ulonglong uVar9;
  ulonglong in_stack_fffffffffffffde0;
  double **ppdVar10;
  ulonglong uVar11;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  double local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  double local_1f8;
  uint local_1ec;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a4;
  double local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  double *local_188;
  double *local_180;
  double *local_178;
  double local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_158;
  ulonglong uStack_150;
  double local_148;
  undefined4 local_13c;
  double local_138;
  undefined4 uStack_130;
  int iStack_12c;
  double local_128;
  undefined4 local_11c;
  double local_108;
  undefined4 local_fc;
  double local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  double local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  double local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  double local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68 [3];
  undefined4 local_5c;
  
  local_1c0 = "gml_Script___outline_gc";
  local_1c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c8;
  local_1b8 = 0x99;
  _eh_vector_constructor_iterator_(&local_128,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  iStack_12c = 0xffffff;
  local_138 = 0.0;
  local_1ec = 0xffffff;
  local_1f8 = 0.0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_1fc = 0xffffff;
  local_208 = 0.0;
  uStack_8c = 0xffffff;
  local_98 = 0.0;
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0.0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  local_bc = 0xffffff;
  local_c8 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_1cc = 0;
  local_1d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1b8 = 0x9b;
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  uVar9 = 0;
  uVar6 = gml_Script___outline_start(param_1,param_2,&local_218,0,0);
  in_stack_fffffffffffffde0 = in_stack_fffffffffffffde0 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_141a04418,0x80000000,&local_78,uVar9,in_stack_fffffffffffffde0);
  uStack_150 = CONCAT44(uStack_6c,uStack_70);
  local_158 = local_78;
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  FUN_140041b80(&local_1b0,&local_158);
  local_1b8 = 0x9c;
  in_stack_fffffffffffffde0 = in_stack_fffffffffffffde0 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_1b0,DAT_141a044d8,0x80000000,&local_138,uVar9,in_stack_fffffffffffffde0);
  iVar2 = 0;
  if ((iStack_12c == 2) && (local_138 != 0.0)) {
    iVar2 = *(int *)((longlong)local_138 + 0x24);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1ec = 0;
  local_1f8 = (double)iVar2;
  local_1b8 = 0x9e;
  uStack_18c = 0;
  local_198 = 0.0;
  iVar2 = FUN_140e851f0(&local_1f8,&local_198,DAT_141955260,1);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if (0 < iVar2) {
    local_1b8 = 0xa0;
    ppdVar10 = (double **)(in_stack_fffffffffffffde0 & 0xffffffffffffff00);
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_1b0,DAT_141a04aa8,0x80000000,&local_88,uVar9,ppdVar10);
    uStack_150 = CONCAT44(uStack_7c,uStack_80);
    local_158 = local_88;
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_158);
    local_1b8 = 0xa1;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    local_158 = _DAT_1419e1d70;
    uStack_150 = uRam00000001419e1d78;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
    local_188 = &local_128;
    local_180 = &local_1f8;
    pdVar7 = (double *)FUN_140e79230(&local_218,2,&local_188);
    if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
      dVar8 = *pdVar7;
    }
    else {
      dVar8 = (double)FUN_140e4b060(pdVar7);
    }
    iVar2 = (int)dVar8;
    while (0 < iVar2) {
      iVar2 = iVar2 + -1;
      local_1b8 = 0xa2;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      uVar3 = FUN_140e4a740(&local_208);
      uVar9 = uVar9 & 0xffffffffffffff00;
      FUN_140e87440(&local_1b0,DAT_141a044d8,uVar3,&local_98,uVar9,
                    (ulonglong)ppdVar10 & 0xffffffffffffff00);
      uVar3 = (undefined4)(uVar9 >> 0x20);
      uStack_1e0 = CONCAT44(uStack_8c,uStack_90);
      local_1e8 = local_98;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_1e8);
      local_178 = &local_108;
      ppdVar10 = &local_178;
      uVar9 = CONCAT44(uVar3,DAT_141a04538);
      uVar6 = FUN_140e634e0(param_1,param_2,&local_1d8,1,uVar9,ppdVar10);
      cVar1 = FUN_140e491e0(uVar6);
      if (cVar1 == '\0') {
        local_1b8 = 0xa5;
        uVar3 = FUN_140e4a740(&local_208);
        uVar11 = (ulonglong)ppdVar10 & 0xffffffffffffff00;
        uVar9 = uVar9 & 0xffffffffffffff00;
        FUN_140e87440(&local_1b0,DAT_141a04478,uVar3,&local_a8,uVar9,uVar11);
        ppdVar10 = (double **)(uVar11 & 0xffffffffffffff00);
        uVar9 = uVar9 & 0xffffffffffffff00;
        FUN_140e87440(&local_a8,DAT_141a04448,0x80000000,&local_b8,uVar9,ppdVar10);
        uStack_1e0 = CONCAT44(uStack_ac,uStack_b0);
        local_1e8 = local_b8;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_1e8);
        local_1b8 = 0xa7;
        FUN_140e85f80(param_1,DAT_141a04608,0x80000000,&local_c8);
        iVar4 = FUN_140e851f0(&local_148,&local_c8,DAT_141955260,0);
        if (iVar4 != 0) {
          local_1b8 = 0xa8;
          if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_218);
          }
          local_218 = 0;
          local_210 = 0;
          local_20c = 5;
          ppdVar10 = &local_188;
          uVar9 = CONCAT44((int)(uVar9 >> 0x20),DAT_141a04798);
          local_188 = &local_148;
          uVar6 = FUN_140e634e0(param_1,param_2,&local_218,1,uVar9,ppdVar10);
          cVar1 = FUN_140e491e0(uVar6);
          if (cVar1 != '\0') {
            local_1b8 = 0xa9;
            if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            local_1d8 = 0;
            local_1d0 = 0;
            local_1cc = 5;
            ppdVar10 = &local_180;
            uVar9 = CONCAT44((int)(uVar9 >> 0x20),DAT_141a04918);
            local_180 = &local_148;
            FUN_140e634e0(param_1,param_2,&local_1d8,1,uVar9,ppdVar10);
          }
        }
        local_1b8 = 0xad;
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_218 = 0;
        local_210 = 0;
        local_20c = 5;
        uVar9 = uVar9 & 0xffffffffffffff00;
        FUN_140e87440(&local_1b0,DAT_141a044d8,0x80000000,&local_138,uVar9,
                      (ulonglong)ppdVar10 & 0xffffffffffffff00);
        uVar3 = (undefined4)(uVar9 >> 0x20);
        uStack_1e0 = CONCAT44(iStack_12c,uStack_130);
        local_1e8 = local_138;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_1e8);
        local_188 = &local_128;
        local_180 = &local_208;
        local_1e8 = _DAT_1419e1d20;
        uStack_1e0 = uRam00000001419e1d28;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_1e8);
        local_178 = &local_108;
        ppdVar10 = &local_188;
        uVar9 = CONCAT44(uVar3,DAT_1419fd808);
        FUN_140e634e0(param_1,param_2,&local_218,3,uVar9,ppdVar10);
        local_1b8 = 0xae;
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_218 = 0;
        local_210 = 0;
        local_20c = 5;
        uVar9 = uVar9 & 0xffffffffffffff00;
        FUN_140e87440(&local_1b0,DAT_141a04478,0x80000000,&local_d8,uVar9,
                      (ulonglong)ppdVar10 & 0xffffffffffffff00);
        uVar3 = (undefined4)(uVar9 >> 0x20);
        uStack_1e0 = CONCAT44(uStack_cc,uStack_d0);
        local_1e8 = local_d8;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_1e8);
        local_188 = &local_128;
        local_180 = &local_208;
        local_1e8 = _DAT_1419e1d20;
        uStack_1e0 = uRam00000001419e1d28;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_1e8);
        local_178 = &local_108;
        ppdVar10 = &local_188;
        uVar9 = CONCAT44(uVar3,DAT_1419fd808);
        FUN_140e634e0(param_1,param_2,&local_218,3,uVar9,ppdVar10);
        local_1b8 = 0xaf;
        uVar5 = local_1ec & 0xffffff;
        if (uVar5 == 0) {
LAB_1400f169c:
          local_1f8 = local_1f8 + -1.0;
        }
        else if (uVar5 == 1) {
          local_1f8 = (double)FUN_140e4b060(&local_1f8);
          local_1f8 = local_1f8 - 1.0;
          local_1ec = 0;
        }
        else if (uVar5 == 7) {
          local_1f8 = (double)CONCAT44(local_1f8._4_4_,local_1f8._0_4_ + -1);
        }
        else if (uVar5 == 10) {
          local_1f8 = (double)((longlong)local_1f8 + -1);
        }
        else {
          if (uVar5 == 0xd) {
            local_1ec = 0;
            goto LAB_1400f169c;
          }
          FUN_140042910(&DAT_14172c450,&local_1f8,&local_1f8);
        }
        local_1b8 = 0xb1;
        uStack_150 = uStack_150 & 0xffffffff;
        local_158 = 0;
        iVar4 = FUN_140e851f0(&local_1f8,&local_158,DAT_141955260,1);
        if ((1 << ((byte)(uStack_150 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        if (iVar4 < 1) {
          local_1b8 = 0xb4;
          if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          uStack_1fc = 0;
          local_208 = 0.0;
        }
        else {
          local_1b8 = 0xb2;
          uStack_18c = uStack_1fc;
          uStack_190 = uStack_200;
          if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) == 0) {
            local_198 = local_208;
          }
          else {
            FUN_1400419b0(&local_198,&local_208);
          }
          FUN_140046880(&local_198,&local_1f8);
          uStack_1e0 = CONCAT44(uStack_18c,uStack_190);
          local_1e8 = local_198;
          if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          FUN_140041b80(&local_208,&local_1e8);
          if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
        }
      }
      else {
        local_1b8 = 0xa3;
        local_164 = uStack_1fc;
        local_168 = uStack_200;
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) == 0) {
          local_170 = local_208;
        }
        else {
          FUN_1400419b0(&local_170,&local_208);
        }
        local_5c = 7;
        local_68[0] = 1;
        FUN_1400460e0(&local_170,local_68);
        if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_68);
        }
        uStack_ec = local_164;
        uStack_f0 = local_168;
        if ((1 << ((byte)local_164 & 0x1f) & 0x46U) == 0) {
          local_f8 = local_170;
        }
        else {
          FUN_1400419b0(&local_f8,&local_170);
        }
        FUN_140046880(&local_f8,&local_1f8);
        uStack_1e0 = CONCAT44(uStack_ec,uStack_f0);
        local_1e8 = local_f8;
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        FUN_140041b80(&local_208,&local_1e8);
        if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_170);
        }
      }
    }
    local_1b8 = 0xb8;
    uStack_1e0 = CONCAT44(uStack_1fc,uStack_200);
    local_1e8 = local_208;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1e8);
    FUN_140e87930(&local_1b0,DAT_141a04aa8,0x80000000,&local_e8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)iStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1c8;
  return param_3;
}

