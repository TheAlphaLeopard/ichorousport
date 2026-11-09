// gml_Script_anon_9640_gml_Object_oBossEmbraceHalf_Create_0 @ 0x140767830

longlong *
gml_Script_anon_9640_gml_Object_oBossEmbraceHalf_Create_0
          (longlong *param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 *puVar6;
  float fVar7;
  double dVar8;
  longlong *plVar9;
  longlong *plVar10;
  double dVar11;
  uint uVar12;
  undefined4 uVar14;
  ulonglong uVar13;
  undefined8 **ppuVar15;
  ulonglong uVar16;
  double **ppdVar17;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  longlong *local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  double local_1c8;
  uint local_1bc;
  longlong *local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  byte local_dc;
  double local_d8;
  byte local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  double *local_88;
  longlong *local_80;
  undefined4 local_74;
  
  local_170 = "gml_Script_anon@8894@gml_Object_oBossEmbraceHalf_Create_0";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 0x119;
  uVar14 = 1;
  _eh_vector_constructor_iterator_(&local_118,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_17c = 0xffffff;
  local_188 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = (longlong *)0x0;
  uStack_1ac = 0xffffff;
  local_1b8 = (longlong *)0x0;
  local_1bc = 0xffffff;
  local_1c8 = 0.0;
  uStack_11c = 0xffffff;
  local_128 = 0.0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_1dc = 0;
  uVar12 = 0;
  local_1e8 = 0;
  local_154 = 0;
  local_160 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_168 = 0x11a;
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_140767964:
    local_1d8 = (longlong *)*puVar3;
    uStack_1d0 = *(undefined4 *)(puVar3 + 1);
    uStack_1cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1d8);
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 != &local_f8) goto LAB_140767964;
  }
  local_98 = &local_f8;
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_1407679b3:
    local_1d8 = (longlong *)*puVar3;
    uStack_1d0 = *(undefined4 *)(puVar3 + 1);
    uStack_1cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1d8);
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
    if (puVar3 != &local_e8) goto LAB_1407679b3;
  }
  local_90 = &local_e8;
  uStack_ac = 0xf;
  local_b8 = (longlong *)0x100000000000149;
  local_1d8 = (longlong *)0x100000000000149;
  uStack_1d0 = uStack_b0;
  uStack_1cc = 0xf;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_1d8);
  local_88 = &local_d8;
  ppuVar15 = &local_98;
  uVar13 = CONCAT44(uVar14,DAT_141a12628);
  uVar2 = FUN_140e634e0(param_1,param_2,&local_1e8,3,uVar13,ppuVar15);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    local_168 = 0x120;
    uStack_1ec = 6;
    uVar16 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
    uVar13 = uVar13 & 0xffffffffffffff00;
    local_1f8 = param_1;
    FUN_140e87440(&local_1f8,DAT_1419fe0e8,0x80000000,&local_1a8,uVar13,uVar16);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    uStack_1ec = 6;
    uVar16 = uVar16 & 0xffffffffffffff00;
    uVar13 = uVar13 & 0xffffffffffffff00;
    local_1f8 = param_1;
    FUN_140e87440(&local_1f8,DAT_1419fe158,0x80000000,&local_1b8,uVar13,uVar16);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if (param_4 < 2) {
      pdVar4 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar4 = (double *)param_5[1];
    }
    if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
      dVar11 = *pdVar4;
    }
    else {
      dVar11 = (double)FUN_140e4b060();
    }
    if (param_4 < 1) {
      pdVar4 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar4 = (double *)*param_5;
    }
    if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
      dVar8 = *pdVar4;
    }
    else {
      dVar8 = (double)FUN_140e4b060();
    }
    plVar9 = local_1b8;
    if ((uStack_1ac & 0xffffff) != 0) {
      plVar9 = (longlong *)FUN_140e4b060(&local_1b8);
    }
    plVar10 = local_1a8;
    if ((uStack_19c & 0xffffff) != 0) {
      plVar10 = (longlong *)FUN_140e4b060(&local_1a8);
    }
    fVar7 = (float)FUN_140e793d0((float)(double)plVar10,(float)(double)plVar9,(float)dVar8,
                                 (float)dVar11);
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1bc = 0;
    local_1c8 = (double)fVar7;
    local_168 = 0x121;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_160);
    }
    local_160 = 0;
    local_158 = 0;
    local_154 = 5;
    uStack_1ec = 6;
    uVar16 = uVar16 & 0xffffffffffffff00;
    uVar13 = uVar13 & 0xffffffffffffff00;
    local_1f8 = param_1;
    FUN_140e87440(&local_1f8,DAT_1419fe0e8,0x80000000,&local_1a8,uVar13,uVar16);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    uStack_1ec = 6;
    uVar13 = uVar13 & 0xffffffffffffff00;
    local_1f8 = param_1;
    FUN_140e87440(&local_1f8,DAT_1419fe158,0x80000000,&local_1b8,uVar13,uVar16 & 0xffffffffffffff00)
    ;
    uVar14 = (undefined4)(uVar13 >> 0x20);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1d8 = local_1a8;
    uStack_1d0 = uStack_1a0;
    uStack_1cc = uStack_19c;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1d8);
    local_a8 = &local_118;
    local_1d8 = local_1b8;
    uStack_1d0 = uStack_1b0;
    uStack_1cc = uStack_1ac;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1d8);
    local_a0 = &local_108;
    if (param_4 < 1) {
      puVar3 = &DAT_1419df7b0;
LAB_140767e34:
      local_1d8 = (longlong *)*puVar3;
      uStack_1d0 = *(undefined4 *)(puVar3 + 1);
      uStack_1cc = *(uint *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_1d8);
    }
    else {
      puVar3 = (undefined8 *)*param_5;
      if (puVar3 != &local_f8) goto LAB_140767e34;
    }
    local_98 = &local_f8;
    if ((param_4 < 2) || (puVar6 = (undefined8 *)param_5[1], puVar6 != &local_e8)) {
      local_1d8 = (longlong *)*puVar6;
      uStack_1d0 = *(undefined4 *)(puVar6 + 1);
      uStack_1cc = *(uint *)((longlong)puVar6 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_1d8);
    }
    local_90 = &local_e8;
    uVar2 = CONCAT44(uVar14,DAT_1419fd548);
    pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_160,4,uVar2,&local_a8);
    uVar14 = (undefined4)((ulonglong)uVar2 >> 0x20);
    if (pdVar4 != &local_d8) {
      local_1d8 = (longlong *)*pdVar4;
      uStack_1d0 = *(undefined4 *)(pdVar4 + 1);
      uStack_1cc = *(uint *)((longlong)pdVar4 + 0xc);
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_1d8);
    }
    local_88 = &local_d8;
    ppdVar17 = &local_88;
    uVar13 = CONCAT44(uVar14,DAT_141a08838);
    pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_1e8,1,uVar13,ppdVar17);
    if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
      dVar11 = *pdVar4;
    }
    else {
      dVar11 = (double)FUN_140e4b060(pdVar4);
    }
    iVar5 = (int)dVar11;
    while (0 < iVar5) {
      iVar5 = iVar5 + -1;
      local_168 = 0x122;
      local_74 = 6;
      uVar16 = (ulonglong)ppdVar17 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      local_80 = param_1;
      FUN_140e87440(&local_80,DAT_1419fe0e8,0x80000000,&local_1a8,uVar13,uVar16);
      if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_80);
      }
      dVar11 = local_1c8;
      if ((local_1bc & 0xffffff) != 0) {
        dVar11 = (double)FUN_140e4b060(&local_1c8);
      }
      fVar7 = (float)FUN_140e78f90(0x3f800000,(float)dVar11);
      uStack_bc = uStack_19c;
      uStack_c0 = uStack_1a0;
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
        local_c8 = local_1a8;
      }
      else {
        FUN_1400419b0(&local_c8,&local_1a8);
      }
      FUN_140162c50(&local_c8,(double)fVar7);
      local_148 = (undefined4)local_c8;
      uStack_144 = local_c8._4_4_;
      uStack_140 = uStack_c0;
      uStack_13c = uStack_bc;
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_148);
      if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      local_168 = 0x123;
      uStack_ac = 6;
      uVar13 = uVar13 & 0xffffffffffffff00;
      local_b8 = param_1;
      FUN_140e87440(&local_b8,DAT_1419fe158,0x80000000,&local_1b8,uVar13,uVar16 & 0xffffffffffffff00
                   );
      uVar14 = (undefined4)(uVar13 >> 0x20);
      if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      dVar11 = local_1c8;
      if ((local_1bc & 0xffffff) != 0) {
        dVar11 = (double)FUN_140e4b060(&local_1c8);
      }
      fVar7 = (float)FUN_140e79010(0x3f800000,(float)dVar11);
      uStack_1ec = uStack_1ac;
      uStack_1f0 = uStack_1b0;
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
        local_1f8 = local_1b8;
      }
      else {
        FUN_1400419b0(&local_1f8,&local_1b8);
      }
      FUN_140162c50(&local_1f8,(double)fVar7);
      local_148 = (undefined4)local_1f8;
      uStack_144 = local_1f8._4_4_;
      uStack_140 = uStack_1f0;
      uStack_13c = uStack_1ec;
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_148);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_168 = 0x124;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1e8 = 0;
      local_1e0 = 0;
      local_1dc = 5;
      local_a0 = &local_138;
      uStack_1cc = 0xf;
      local_1d8 = (longlong *)0x100000000000149;
      local_148 = 0x149;
      uStack_144 = 0x1000000;
      uStack_140 = uStack_1d0;
      uStack_13c = 0xf;
      local_a8 = (double *)&local_128;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_148);
      local_98 = &local_f8;
      ppdVar17 = &local_a8;
      uVar13 = CONCAT44(uVar14,DAT_141a12628);
      uVar2 = FUN_140e634e0(param_1,param_2,&local_1e8,3,uVar13,ppdVar17);
      cVar1 = FUN_140e491e0(uVar2);
      if (cVar1 != '\0') break;
      local_168 = 0x125;
      local_148 = (undefined4)local_128;
      uStack_144 = local_128._4_4_;
      uStack_140 = uStack_120;
      uStack_13c = uStack_11c;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_148);
      FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_188);
      local_168 = 0x126;
      local_148 = (undefined4)local_138;
      uStack_144 = local_138._4_4_;
      uStack_140 = uStack_130;
      uStack_13c = uStack_12c;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_148);
      FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_198);
    }
    local_168 = 0x128;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07e58);
    local_a8 = &local_1c8;
    FUN_140e63610(param_1,param_2,&local_1e8,1,uVar2,&local_a8);
    local_168 = 0x129;
    uVar12 = 0x3ff00000;
    goto LAB_1407683b5;
  }
  local_168 = 0x11b;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_140767a94:
    local_1d8 = (longlong *)*puVar3;
    uStack_1d0 = *(undefined4 *)(puVar3 + 1);
    uStack_1cc = *(uint *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1d8);
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 != &local_188) goto LAB_140767a94;
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_188);
  local_168 = 0x11c;
  if ((param_4 < 2) || (puVar6 = (undefined8 *)param_5[1], puVar6 != &local_198)) {
    local_1d8 = (longlong *)*puVar6;
    uStack_1d0 = *(undefined4 *)(puVar6 + 1);
    uStack_1cc = *(uint *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1d8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_198);
  local_168 = 0x11d;
LAB_1407683b5:
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = (ulonglong)uVar12 << 0x20;
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return param_3;
}

