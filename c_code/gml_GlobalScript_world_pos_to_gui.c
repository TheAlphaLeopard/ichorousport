// gml_GlobalScript_world_pos_to_gui @ 0x140647f80

double * gml_GlobalScript_world_pos_to_gui
                   (double param_1,undefined8 param_2,double *param_3,int param_4,
                   undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  uint uVar7;
  double *pdVar8;
  undefined8 uVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  code *pcVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  ulonglong in_stack_fffffffffffffdc0;
  ulonglong uVar16;
  undefined1 **ppuVar17;
  double local_238;
  undefined4 uStack_230;
  uint uStack_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  double local_218;
  uint local_20c;
  double local_208;
  uint local_1fc;
  double local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_194;
  double local_190;
  uint local_184;
  double local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  double local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  double local_138 [2];
  double local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 *local_108;
  undefined1 *local_100;
  double *local_f8;
  double local_f0;
  undefined4 local_e4;
  double local_e0;
  undefined4 local_d4;
  double local_d0;
  undefined4 local_c4;
  double local_c0;
  undefined4 local_b4;
  
  local_1c0 = "gml_Script_wall_escape";
  local_1c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c8;
  local_1b8 = 3;
  pcVar13 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_158,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_15c = 0xffffff;
  local_168 = 0.0;
  local_1e4 = 0xffffff;
  uStack_10c = 0xffffff;
  local_118 = 0.0;
  uStack_16c = 0xffffff;
  local_178 = 0.0;
  local_1e8 = 0xffffff;
  uStack_11c = 0xffffff;
  local_128 = 0.0;
  uStack_22c = 0xffffff;
  local_238 = 0.0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  local_1fc = 0;
  local_208 = 0.0;
  local_1b8 = 5;
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  local_20c = 6;
  uVar14 = (ulonglong)pcVar13 & 0xffffffffffffff00;
  local_218 = param_1;
  FUN_140e87440(&local_218,DAT_1419fe0e8,0x80000000,&local_168,uVar14,
                in_stack_fffffffffffffdc0 & 0xffffffffffffff00);
  uVar15 = (undefined4)(uVar14 >> 0x20);
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_1f8 = local_168;
  uStack_1f0 = uStack_160;
  uStack_1ec = uStack_15c;
  if ((1 << (local_158[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_1f8);
  local_108 = local_158;
  ppuVar17 = &local_108;
  uVar14 = CONCAT44(uVar15,DAT_1419fd658);
  pdVar8 = (double *)FUN_140e634e0(param_1,param_2,&local_228,1,uVar14,ppuVar17);
  if (pdVar8 != &local_118) {
    local_1f8 = *pdVar8;
    uStack_1f0 = *(undefined4 *)(pdVar8 + 1);
    uStack_1ec = *(undefined4 *)((longlong)pdVar8 + 0xc);
    FUN_140041b80(&local_118,&local_1f8);
    local_1e4 = uStack_10c;
  }
  local_1b8 = 6;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  local_20c = 6;
  uVar14 = uVar14 & 0xffffffffffffff00;
  local_218 = param_1;
  FUN_140e87440(&local_218,DAT_1419fe158,0x80000000,&local_178,uVar14,
                (ulonglong)ppuVar17 & 0xffffffffffffff00);
  uVar15 = (undefined4)(uVar14 >> 0x20);
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_1f8 = local_178;
  uStack_1f0 = uStack_170;
  uStack_1ec = uStack_16c;
  if ((1 << (local_158[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_1f8);
  local_108 = local_158;
  ppuVar17 = &local_108;
  uVar14 = CONCAT44(uVar15,DAT_1419fd658);
  pdVar8 = (double *)FUN_140e634e0(param_1,param_2,&local_228,1,uVar14,ppuVar17);
  if (pdVar8 != &local_128) {
    local_1f8 = *pdVar8;
    uStack_1f0 = *(undefined4 *)(pdVar8 + 1);
    uStack_1ec = *(undefined4 *)((longlong)pdVar8 + 0xc);
    FUN_140041b80(&local_128,&local_1f8);
    local_1e8 = uStack_11c;
  }
  local_1b8 = 7;
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  dVar5 = local_118;
  dVar4 = local_128;
  local_238 = 1.0;
  local_1b8 = 8;
  uVar2 = CONCAT44(uStack_10c,uStack_110);
  uVar1 = CONCAT44(uStack_11c,uStack_120);
LAB_1406482e0:
  uStack_22c = 0;
LAB_1406482f0:
  do {
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    local_e4 = 6;
    uVar16 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
    uVar14 = uVar14 & 0xffffffffffffff00;
    local_f0 = param_1;
    FUN_140e87440(&local_f0,DAT_1419fe0e8,0x80000000,&local_168,uVar14,uVar16);
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    local_d4 = 6;
    uVar14 = uVar14 & 0xffffffffffffff00;
    local_e0 = param_1;
    FUN_140e87440(&local_e0,DAT_1419fe158,0x80000000,&local_178,uVar14,uVar16 & 0xffffffffffffff00);
    uVar15 = (undefined4)(uVar14 >> 0x20);
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    local_1d8 = local_168;
    uStack_1d0 = (double)CONCAT44(uStack_15c,uStack_160);
    if ((1 << (local_158[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_1d8);
    local_108 = local_158;
    local_1d8 = local_178;
    uStack_1d0 = (double)CONCAT44(uStack_16c,uStack_170);
    if ((1 << (local_148[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1d8);
    local_100 = local_148;
    if (param_4 < 1) {
      pdVar8 = (double *)&DAT_1419df7b0;
LAB_140648441:
      local_1d8 = *pdVar8;
      uStack_1d0 = pdVar8[1];
      if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_1d8);
    }
    else {
      pdVar8 = (double *)*param_5;
      if (pdVar8 != local_138) goto LAB_140648441;
    }
    local_f8 = local_138;
    ppuVar17 = &local_108;
    uVar14 = CONCAT44(uVar15,DAT_141a12628);
    uVar9 = FUN_140e634e0(param_1,param_2,&local_228,3,uVar14,ppuVar17);
    cVar6 = FUN_140e491e0(uVar9);
    uVar3 = local_1e4;
    uVar15 = local_1e8;
    if (cVar6 == '\0') {
      local_1b8 = 0x18;
      if (&local_238 != param_3) {
        local_1d8 = local_238;
        uStack_1d0 = (double)CONCAT44(uStack_22c,uStack_230);
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_1d8);
      }
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b0);
      }
      if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a0);
      }
      if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      if ((1 << ((byte)uVar15 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      _eh_vector_destructor_iterator_(local_158,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_1c8;
      return param_3;
    }
    local_1b8 = 10;
    local_1d8 = dVar5;
    uStack_1d0 = (double)uVar2;
    if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a0);
    }
    FUN_140041b80(&local_1a0,&local_1d8);
    FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_1a0);
    local_1b8 = 0xb;
    local_1d8 = dVar4;
    uStack_1d0 = (double)uVar1;
    if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b0);
    }
    FUN_140041b80(&local_1b0,&local_1d8);
    FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_1b0);
    local_1b8 = 0xc;
    local_c4 = 6;
    uVar16 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
    uVar14 = uVar14 & 0xffffffffffffff00;
    local_d0 = param_1;
    FUN_140e87440(&local_d0,DAT_1419fe0e8,0x80000000,&local_1a0,uVar14,uVar16);
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    local_184 = 0;
    local_190 = 1.0;
    FUN_140042560(&local_190,&local_238);
    dVar11 = local_208;
    if ((local_1fc & 0xffffff) != 0) {
      dVar11 = (double)FUN_140e4b060(&local_208);
    }
    dVar12 = local_190;
    if ((local_184 & 0xffffff) != 0) {
      dVar12 = (double)FUN_140e4b060(&local_190);
    }
    fVar10 = (float)FUN_140e78f90((float)dVar12,(float)dVar11);
    FUN_140162c50(&local_1a0,(double)fVar10);
    if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_190);
    }
    FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_1a0);
    local_1b8 = 0xd;
    local_b4 = 6;
    ppuVar17 = (undefined1 **)(uVar16 & 0xffffffffffffff00);
    uVar14 = uVar14 & 0xffffffffffffff00;
    local_c0 = param_1;
    FUN_140e87440(&local_c0,DAT_1419fe158,0x80000000,&local_1b0,uVar14,ppuVar17);
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    local_20c = 0;
    local_218 = 1.0;
    FUN_140042560(&local_218,&local_238);
    dVar11 = local_208;
    if ((local_1fc & 0xffffff) != 0) {
      dVar11 = (double)FUN_140e4b060(&local_208);
    }
    dVar12 = local_218;
    if ((local_20c & 0xffffff) != 0) {
      dVar12 = (double)FUN_140e4b060(&local_218);
    }
    fVar10 = (float)FUN_140e79010((float)dVar12,(float)dVar11);
    FUN_140162c50(&local_1b0,(double)fVar10);
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_1b0);
    local_1b8 = 0xf;
    FUN_140162d40(&local_208,0x2d);
    local_1b8 = 0x10;
    uStack_1ec = 0;
    local_1f8 = 360.0;
    uVar7 = FUN_140e851f0(&local_208,&local_1f8,DAT_141955260,1);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
  } while (0x7fffffff < uVar7);
  local_1b8 = 0x12;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_1fc = 0;
  local_208 = 0.0;
  local_1b8 = 0x13;
  uVar7 = uStack_22c & 0xffffff;
  if (uVar7 != 0) {
    if (uVar7 == 1) goto LAB_140648868;
    if (uVar7 == 7) {
      local_238 = (double)CONCAT44(local_238._4_4_,local_238._0_4_ + 1);
      goto LAB_1406482f0;
    }
    if (uVar7 == 10) {
      local_238 = (double)((longlong)local_238 + 1);
      goto LAB_1406482f0;
    }
    if (uVar7 != 0xd) {
      FUN_140042910(&DAT_14172c3d8,&local_238,&local_238);
      goto LAB_1406482f0;
    }
    uStack_22c = 0;
  }
  local_238 = local_238 + 1.0;
  goto LAB_1406482f0;
LAB_140648868:
  local_238 = (double)FUN_140e4b060(&local_238);
  local_238 = local_238 + 1.0;
  goto LAB_1406482e0;
}

