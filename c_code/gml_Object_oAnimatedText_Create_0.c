// gml_Object_oAnimatedText_Create_0 @ 0x14067ed10

void gml_Object_oAnimatedText_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  double *pdVar5;
  undefined8 uVar6;
  double *pdVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  double *pdVar10;
  bool bVar11;
  float fVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  double *local_res20;
  code *pcVar16;
  ulonglong in_stack_fffffffffffffe00;
  undefined1 **ppuVar17;
  ulonglong uVar18;
  longlong *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  double local_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  double local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  double local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  undefined8 local_188;
  undefined4 local_17c;
  double local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong local_168;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  double local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  double local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  double local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  
  local_res18 = 0;
  local_1b0 = "gml_Object_oAcidGlob_Step_0";
  local_1a8 = 0;
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1b8;
  pcVar16 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_128,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_18c = 0xffffff;
  local_198 = 0.0;
  uStack_12c = 0xffffff;
  local_138 = 0.0;
  local_17c = 0xffffff;
  local_188 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0.0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_bc = 0xffffff;
  local_c8 = 0.0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1a8 = 3;
  pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f310);
  uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
  uStack_1dc = *(undefined4 *)((longlong)pdVar5 + 0xc);
  uStack_1e0 = *(undefined4 *)(pdVar5 + 1);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
    local_1e8 = *pdVar5;
  }
  else {
    FUN_1400419b0(&local_1e8,pdVar5);
  }
  local_res18 = 1;
  FUN_140042560(&local_1e8,uVar4);
  FUN_1400460e0(uVar6,&local_1e8);
  local_res18 = 0;
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1a8 = 5;
  pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
  uStack_1ec = 6;
  local_1f8 = local_res8;
  in_stack_fffffffffffffe00 = in_stack_fffffffffffffe00 & 0xffffffffffffff00;
  uVar8 = (ulonglong)pcVar16 & 0xffffffffffffff00;
  local_res20 = pdVar5;
  FUN_140e87440(&local_1f8,DAT_1419fe0e8,0x80000000,&local_d8,uVar8,in_stack_fffffffffffffe00);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  uStack_1dc = *(undefined4 *)((longlong)pdVar5 + 0xc);
  uStack_1e0 = *(undefined4 *)(pdVar5 + 1);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
    local_1e8 = *pdVar5;
  }
  else {
    FUN_1400419b0(&local_1e8,pdVar5);
  }
  local_res18 = 2;
  FUN_140042560(&local_1e8,uVar4);
  FUN_1400460e0(&local_d8,&local_1e8);
  local_res18 = 0;
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_d8);
  local_1a8 = 6;
  pdVar7 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
  uStack_1ec = 6;
  local_1f8 = local_res8;
  in_stack_fffffffffffffe00 = in_stack_fffffffffffffe00 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_1f8,DAT_1419fe158,0x80000000,&local_e8,uVar8,in_stack_fffffffffffffe00);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  uStack_1dc = *(undefined4 *)((longlong)pdVar7 + 0xc);
  uStack_1e0 = *(undefined4 *)(pdVar7 + 1);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
    local_1e8 = *pdVar7;
  }
  else {
    FUN_1400419b0(&local_1e8,pdVar7);
  }
  local_res18 = 4;
  FUN_140042560(&local_1e8,uVar4);
  FUN_1400460e0(&local_e8,&local_1e8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_e8);
  local_1a8 = 8;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  uStack_1ec = 6;
  local_1f8 = local_res8;
  in_stack_fffffffffffffe00 = in_stack_fffffffffffffe00 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_1f8,DAT_1419fe0e8,0x80000000,&local_198,uVar8,in_stack_fffffffffffffe00);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  uStack_1ec = 6;
  local_1f8 = local_res8;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_1f8,DAT_1419fe158,0x80000000,&local_138,uVar8,
                in_stack_fffffffffffffe00 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar8 >> 0x20);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1d8 = local_198;
  uStack_1d0 = uStack_190;
  uStack_1cc = uStack_18c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_1d8);
  local_1d8 = local_138;
  uStack_1d0 = uStack_130;
  uStack_1cc = uStack_12c;
  local_a8 = local_128;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1d8);
  local_a0 = local_118;
  uStack_1cc = 0xf;
  local_1d8 = 7.29112201955693e-304;
  local_1f8 = (longlong *)0x100000000000149;
  uStack_1f0 = uStack_1d0;
  uStack_1ec = 0xf;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1f8);
  local_98 = local_108;
  uVar6 = FUN_140e634e0(local_res8,local_res10,&local_1c8,3,CONCAT44(uVar13,DAT_141a12628),&local_a8
                       );
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 != '\0') {
    local_1a8 = 10;
    FUN_140edd0e0(local_res8,local_res10,0,0);
  }
  local_1a8 = 0xe;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a01b58);
  ppuVar17 = (undefined1 **)0x0;
  uVar6 = FUN_140e63610(local_res8,local_res10,&local_1c8,0,uVar8,0);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 != '\0') {
    local_1a8 = 0x10;
    FUN_140edd0e0(local_res8,local_res10,0,0);
  }
  local_1a8 = 0x14;
  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a01b48);
  uStack_1ec = 0;
  local_1f8 = (longlong *)0x3ff0000000000000;
  uVar2 = FUN_140e851f0(uVar6,&local_1f8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if (uVar2 < 0x80000000) {
    uStack_1ec = 6;
    local_1f8 = local_res8;
    ppuVar17 = (undefined1 **)((ulonglong)ppuVar17 & 0xffffffffffffff00);
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_1f8,DAT_141a0a728,0x80000000,&local_188,uVar8,ppuVar17);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    uStack_1ec = 0xf;
    local_1f8 = (longlong *)0x100000100000036;
    iVar3 = FUN_140e851f0(&local_188,&local_1f8,DAT_141955260,0);
    bVar11 = iVar3 == 0;
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if (!bVar11) {
      uStack_1ec = 6;
      local_1f8 = local_res8;
      ppuVar17 = (undefined1 **)CONCAT71((int7)((ulonglong)ppuVar17 >> 8),bVar11);
      uVar8 = CONCAT71((int7)(uVar8 >> 8),bVar11);
      FUN_140e87440(&local_1f8,DAT_141a0a728,0x80000000,&local_188,uVar8,ppuVar17);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      uStack_1ec = 0xf;
      local_1f8 = (longlong *)0x100000100000037;
      iVar3 = FUN_140e851f0(&local_188,&local_1f8,DAT_141955260,0);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      if (iVar3 != 0) goto LAB_14067f958;
    }
    local_1a8 = 0x16;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    uStack_1ec = 6;
    local_1f8 = local_res8;
    uVar18 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_1f8,DAT_1419fe0e8,0x80000000,&local_198,uVar8,uVar18);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    uStack_1ec = 6;
    local_1f8 = local_res8;
    uVar18 = uVar18 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_1f8,DAT_1419fe158,0x80000000,&local_138,uVar8,uVar18);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    uStack_1ec = 6;
    local_1f8 = local_res8;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_1f8,DAT_141a1b910,0x80000000,&local_b8,uVar8,uVar18 & 0xffffffffffffff00);
    uVar13 = (undefined4)(uVar8 >> 0x20);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1d8 = local_198;
    uStack_1d0 = uStack_190;
    uStack_1cc = uStack_18c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_1d8);
    local_1d8 = local_138;
    uStack_1d0 = uStack_130;
    uStack_1cc = uStack_12c;
    local_a8 = local_128;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_1d8);
    local_a0 = local_118;
    local_1d8 = local_b8;
    uStack_1d0 = uStack_b0;
    uStack_1cc = uStack_ac;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_1d8);
    local_98 = local_108;
    uStack_1cc = 0xf;
    local_1d8 = 7.291122019556435e-304;
    local_1f8 = (longlong *)0x100000000000017;
    uStack_1f0 = uStack_1d0;
    uStack_1ec = 0xf;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1f8);
    local_90 = local_f8;
    ppuVar17 = &local_a8;
    uVar8 = CONCAT44(uVar13,DAT_141a0a7c8);
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_1c8,4,uVar8,ppuVar17);
    iVar3 = FUN_140e63cb0(&local_178,&local_res8,&local_res10,uVar6);
    if (0 < iVar3) {
      do {
        local_1a8 = 0x18;
        uStack_1cc = 0xf;
        local_1d8 = 7.291128972912296e-304;
        local_1f8 = (longlong *)0x100000100000038;
        uStack_1f0 = uStack_1d0;
        uStack_1ec = 0xf;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_1f8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_148);
        local_1a8 = 0x19;
        puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f5a0);
        uVar6 = FUN_140e794b0(0x47ae147b,0x9999999a);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar9);
        }
        *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
        *puVar9 = uVar6;
        local_1a8 = 0x1a;
        puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f310);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar9);
        }
        *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
        *puVar9 = 0x3fa999999999999a;
        cVar1 = FUN_140e643f0(&local_178,&local_res8,&local_res10);
      } while (cVar1 != '\0');
      pdVar5 = local_res20;
    }
    FUN_140e63970(&local_178,&local_res8,&local_res10);
    local_1a8 = 0x1d;
    puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a01b48);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    *puVar9 = 0;
    if (local_168 != 0) {
      FUN_140e4cd60();
    }
  }
LAB_14067f958:
  local_1a8 = 0x20;
  uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a01b48);
  uStack_16c = 0;
  local_178 = 1.0;
  local_res18 = 8;
  FUN_140042560(&local_178,uVar4);
  FUN_1400460e0(uVar6,&local_178);
  local_res18 = 0;
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_1a8 = 0x21;
  pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar14 = *pdVar7;
  }
  else {
    dVar14 = (double)FUN_140e4b060(pdVar7);
  }
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar15 = *pdVar5;
  }
  else {
    dVar15 = (double)FUN_140e4b060(pdVar5);
  }
  fVar12 = (float)FUN_140e793d0(0,0,(float)dVar15,(float)dVar14);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar10);
  }
  *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
  *pdVar10 = (double)fVar12;
  local_1a8 = 0x23;
  uStack_1ec = 6;
  local_1f8 = local_res8;
  uVar18 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_1f8,DAT_141a0a728,0x80000000,&local_188,uVar8,uVar18);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  uStack_1ec = 0xf;
  local_1f8 = (longlong *)0x100000100000036;
  iVar3 = FUN_140e851f0(&local_188,&local_1f8,DAT_141955260,0);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if (iVar3 == 0) {
    local_1a8 = 0x24;
    (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
    (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
    pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
    pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
    FUN_140e609c0(local_res8);
    if (pdVar5 != pdVar7) {
      local_1d8 = *pdVar5;
      uStack_1d0 = *(undefined4 *)(pdVar5 + 1);
      uStack_1cc = *(undefined4 *)((longlong)pdVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar7);
      }
      FUN_140041b80(pdVar7,&local_1d8);
    }
    FUN_140e60910(1);
  }
  else {
    local_1a8 = 0x25;
    uStack_1ec = 6;
    local_1f8 = local_res8;
    uVar18 = uVar18 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_1f8,DAT_141a0a728,0x80000000,&local_188,uVar8,uVar18);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    uStack_1ec = 0xf;
    local_1f8 = (longlong *)0x100000100000037;
    iVar3 = FUN_140e851f0(&local_188,&local_1f8,DAT_141955260,0);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if (iVar3 == 0) {
      local_1a8 = 0x26;
      pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
      uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
      uStack_1dc = *(undefined4 *)((longlong)pdVar5 + 0xc);
      uStack_1e0 = *(undefined4 *)(pdVar5 + 1);
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
        local_1e8 = *pdVar5;
      }
      else {
        FUN_1400419b0(&local_1e8,pdVar5);
      }
      local_res18 = 0x10;
      uStack_1ec = 7;
      local_1f8 = (longlong *)CONCAT44(local_1f8._4_4_,5);
      FUN_140042560(&local_1e8,&local_1f8);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_1400460e0(uVar4,&local_1e8);
      local_res18 = 0;
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
    }
  }
  local_1a8 = 0x28;
  pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a858);
  uStack_1ec = 6;
  local_1f8 = local_res8;
  uVar18 = uVar18 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_1f8,DAT_1419fe0e8,0x80000000,&local_198,uVar8,uVar18);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  uStack_1ec = 6;
  local_1f8 = local_res8;
  uVar18 = uVar18 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_1f8,DAT_1419fded8,0x80000000,&local_158,uVar8,uVar18);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  uStack_1dc = uStack_18c;
  uStack_1e0 = uStack_190;
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
    local_1e8 = local_198;
  }
  else {
    FUN_1400419b0(&local_1e8,&local_198);
  }
  local_res18 = 0x20;
  FUN_1400462a0(&local_1e8,&local_158);
  if ((uStack_1dc & 0xffffff) == 0) {
    uVar13 = SUB84(local_1e8,0);
  }
  else {
    uVar13 = FUN_140e4b060(&local_1e8);
  }
  dVar14 = (double)FUN_140e79500(uVar13);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar5);
  }
  *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
  *pdVar5 = dVar14;
  local_res18 = 0;
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1a8 = 0x2a;
  uStack_1ec = 6;
  local_1f8 = local_res8;
  uVar18 = uVar18 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_1f8,DAT_1419fe0e8,0x80000000,&local_198,uVar8,uVar18);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  uStack_1ec = 6;
  local_1f8 = local_res8;
  FUN_140e87440(&local_1f8,DAT_1419fded8,0x80000000,&local_158,uVar8 & 0xffffffffffffff00,
                uVar18 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  uStack_1dc = uStack_18c;
  uStack_1e0 = uStack_190;
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
    local_1e8 = local_198;
  }
  else {
    FUN_1400419b0(&local_1e8,&local_198);
  }
  local_res18 = 0x40;
  FUN_1400462a0(&local_1e8,&local_158);
  if ((uStack_1dc & 0xffffff) == 0) {
    uVar13 = SUB84(local_1e8,0);
  }
  else {
    uVar13 = FUN_140e4b060(&local_1e8);
  }
  local_c8 = (double)FUN_140e78d00(uVar13);
  local_bc = 0;
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1a8 = 0x2c;
  pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a748);
  FUN_140e609c0(local_res8);
  dVar14 = local_c8;
  uStack_16c = 0;
  uStack_170 = local_c0;
  local_178 = local_c8;
  local_res18 = 0x80;
  uStack_1cc = 0;
  local_1d8 = 5.0;
  FUN_140046500(&local_178,&local_1d8);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_1ec = 0;
  local_1f8 = (longlong *)0x3fe8000000000000;
  local_res18 = 0x180;
  FUN_140042560(&local_1f8,&local_178);
  uStack_1dc = 0;
  local_1e8 = 1.25;
  local_res18 = 0x380;
  FUN_1400460e0(&local_1e8,&local_1f8);
  if (&local_1e8 != pdVar7) {
    local_1d8 = local_1e8;
    uStack_1d0 = uStack_1e0;
    uStack_1cc = uStack_1dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar7);
    }
    FUN_140041b80(pdVar7,&local_1d8);
  }
  local_res18 = 0x180;
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_res18 = 0x80;
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140e60910(1);
  local_1a8 = 0x2d;
  FUN_140e609c0(local_res8);
  uStack_1dc = 0;
  uStack_1e0 = local_c0;
  local_1e8 = dVar14;
  local_res18 = 0x400;
  uStack_1cc = 0;
  local_1d8 = 5.0;
  FUN_140046500(&local_1e8,&local_1d8);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_1ec = 0;
  local_1f8 = (longlong *)0x3fd0000000000000;
  local_res18 = 0xc00;
  FUN_140042560(&local_1f8,&local_1e8);
  uStack_16c = 0;
  local_178 = 1.25;
  local_res18 = 0x1c00;
  FUN_1400462a0(&local_178,&local_1f8);
  if (&local_178 != pdVar5) {
    local_1d8 = local_178;
    uStack_1d0 = uStack_170;
    uStack_1cc = uStack_16c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar5);
    }
    FUN_140041b80(pdVar5,&local_1d8);
  }
  local_res18 = 0xc00;
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_res18 = 0x400;
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_128,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1b8;
  return;
}

