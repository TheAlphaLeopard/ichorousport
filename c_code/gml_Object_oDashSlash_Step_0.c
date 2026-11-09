// gml_Object_oDashSlash_Step_0 @ 0x1408e2b30

void gml_Object_oDashSlash_Step_0(longlong *param_1,undefined8 param_2)

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
  float fVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  double *local_res20;
  code *pcVar15;
  ulonglong in_stack_fffffffffffffe10;
  undefined1 **ppuVar16;
  ulonglong uVar17;
  longlong *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  double local_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  double local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  undefined8 local_198;
  char *local_190;
  undefined4 local_188;
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
  local_190 = "gml_Object_oDarnerSpit_Step_0";
  local_188 = 0;
  local_198 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_198;
  pcVar15 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_128,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = 0.0;
  uStack_12c = 0xffffff;
  local_138 = 0.0;
  uStack_ac = 0xffffff;
  local_b8 = 0.0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_bc = 0xffffff;
  local_c8 = 0.0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_188 = 3;
  pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f310);
  uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
  uStack_1cc = *(undefined4 *)((longlong)pdVar5 + 0xc);
  uStack_1d0 = *(undefined4 *)(pdVar5 + 1);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
    local_1d8 = *pdVar5;
  }
  else {
    FUN_1400419b0(&local_1d8,pdVar5);
  }
  local_res18 = 1;
  FUN_140042560(&local_1d8,uVar4);
  FUN_1400460e0(uVar6,&local_1d8);
  local_res18 = 0;
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_188 = 5;
  pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
  uStack_1dc = 6;
  local_1e8 = local_res8;
  in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 & 0xffffffffffffff00;
  uVar8 = (ulonglong)pcVar15 & 0xffffffffffffff00;
  local_res20 = pdVar5;
  FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_d8,uVar8,in_stack_fffffffffffffe10);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uStack_1cc = *(undefined4 *)((longlong)pdVar5 + 0xc);
  uStack_1d0 = *(undefined4 *)(pdVar5 + 1);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
    local_1d8 = *pdVar5;
  }
  else {
    FUN_1400419b0(&local_1d8,pdVar5);
  }
  local_res18 = 2;
  FUN_140042560(&local_1d8,uVar4);
  FUN_1400460e0(&local_d8,&local_1d8);
  local_res18 = 0;
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_d8);
  local_188 = 6;
  pdVar7 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
  uStack_1dc = 6;
  local_1e8 = local_res8;
  in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_e8,uVar8,in_stack_fffffffffffffe10);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uStack_1cc = *(undefined4 *)((longlong)pdVar7 + 0xc);
  uStack_1d0 = *(undefined4 *)(pdVar7 + 1);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
    local_1d8 = *pdVar7;
  }
  else {
    FUN_1400419b0(&local_1d8,pdVar7);
  }
  local_res18 = 4;
  FUN_140042560(&local_1d8,uVar4);
  FUN_1400460e0(&local_e8,&local_1d8);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_e8);
  local_188 = 8;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  uStack_1dc = 6;
  local_1e8 = local_res8;
  in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_1a8,uVar8,in_stack_fffffffffffffe10);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uStack_1dc = 6;
  local_1e8 = local_res8;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_138,uVar8,
                in_stack_fffffffffffffe10 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar8 >> 0x20);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1c8 = local_1a8;
  uStack_1c0 = uStack_1a0;
  uStack_1bc = uStack_19c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_1c8);
  local_a8 = local_128;
  local_1c8 = local_138;
  uStack_1c0 = uStack_130;
  uStack_1bc = uStack_12c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1c8);
  uStack_1bc = 0xf;
  local_1c8 = 7.29112201955693e-304;
  local_1e8 = (longlong *)0x100000000000149;
  uStack_1e0 = uStack_1c0;
  uStack_1dc = 0xf;
  local_a0 = local_118;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1e8);
  local_98 = local_108;
  uVar6 = FUN_140e634e0(local_res8,local_res10,&local_1b8,3,CONCAT44(uVar12,DAT_141a12628),&local_a8
                       );
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 != '\0') {
    local_188 = 10;
    FUN_140edd0e0(local_res8,local_res10,0,0);
  }
  local_188 = 0xe;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a01b58);
  ppuVar16 = (undefined1 **)0x0;
  uVar6 = FUN_140e63610(local_res8,local_res10,&local_1b8,0,uVar8,0);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 != '\0') {
    local_188 = 0x10;
    FUN_140edd0e0(local_res8,local_res10,0,0);
  }
  local_188 = 0x15;
  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a01b48);
  uStack_1dc = 0;
  local_1e8 = (longlong *)0x3ff0000000000000;
  uVar2 = FUN_140e851f0(uVar6,&local_1e8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if (uVar2 < 0x80000000) {
    local_188 = 0x17;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    uStack_1dc = 6;
    local_1e8 = local_res8;
    uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_1a8,uVar8,uVar17);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uStack_1dc = 6;
    local_1e8 = local_res8;
    uVar17 = uVar17 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_138,uVar8,uVar17);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uStack_1dc = 6;
    local_1e8 = local_res8;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_141a1b910,0x80000000,&local_b8,uVar8,uVar17 & 0xffffffffffffff00);
    uVar12 = (undefined4)(uVar8 >> 0x20);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1c8 = local_1a8;
    uStack_1c0 = uStack_1a0;
    uStack_1bc = uStack_19c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_1c8);
    local_a8 = local_128;
    local_1c8 = local_138;
    uStack_1c0 = uStack_130;
    uStack_1bc = uStack_12c;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_1c8);
    local_1c8 = local_b8;
    uStack_1c0 = uStack_b0;
    uStack_1bc = uStack_ac;
    local_a0 = local_118;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_1c8);
    local_98 = local_108;
    uStack_1bc = 0xf;
    local_1c8 = 7.291122019556435e-304;
    local_1e8 = (longlong *)0x100000000000017;
    uStack_1e0 = uStack_1c0;
    uStack_1dc = 0xf;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1e8);
    local_90 = local_f8;
    ppuVar16 = &local_a8;
    uVar8 = CONCAT44(uVar12,DAT_141a0a7c8);
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_1b8,4,uVar8,ppuVar16);
    iVar3 = FUN_140e63cb0(&local_178,&local_res8,&local_res10,uVar6);
    if (0 < iVar3) {
      do {
        local_188 = 0x19;
        uStack_1bc = 0xf;
        local_1c8 = 7.29112897291259e-304;
        local_1e8 = (longlong *)0x1000001000000ee;
        uStack_1e0 = uStack_1c0;
        uStack_1dc = 0xf;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_1e8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_148);
        local_188 = 0x1a;
        puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f5a0);
        uVar6 = FUN_140e794b0(0x47ae147b,0x9999999a);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar9);
        }
        *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
        *puVar9 = uVar6;
        local_188 = 0x1b;
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
    local_188 = 0x1e;
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
  local_188 = 0x21;
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
  local_188 = 0x22;
  pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar13 = *pdVar7;
  }
  else {
    dVar13 = (double)FUN_140e4b060(pdVar7);
  }
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar14 = *pdVar5;
  }
  else {
    dVar14 = (double)FUN_140e4b060(pdVar5);
  }
  fVar11 = (float)FUN_140e793d0(0,0,(float)dVar14,(float)dVar13);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar10);
  }
  *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
  *pdVar10 = (double)fVar11;
  local_188 = 0x24;
  pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
  pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
  FUN_140e609c0(local_res8);
  if (pdVar5 != pdVar7) {
    local_1c8 = *pdVar5;
    uStack_1c0 = *(undefined4 *)(pdVar5 + 1);
    uStack_1bc = *(undefined4 *)((longlong)pdVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar7);
    }
    FUN_140041b80(pdVar7,&local_1c8);
  }
  FUN_140e60910(1);
  local_188 = 0x27;
  pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a858);
  uStack_1dc = 6;
  local_1e8 = local_res8;
  uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_1a8,uVar8,uVar17);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uStack_1dc = 6;
  local_1e8 = local_res8;
  uVar17 = uVar17 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_1e8,DAT_1419fded8,0x80000000,&local_158,uVar8,uVar17);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uStack_1cc = uStack_19c;
  uStack_1d0 = uStack_1a0;
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
    local_1d8 = local_1a8;
  }
  else {
    FUN_1400419b0(&local_1d8,&local_1a8);
  }
  local_res18 = 0x10;
  FUN_1400462a0(&local_1d8,&local_158);
  if ((uStack_1cc & 0xffffff) == 0) {
    uVar12 = SUB84(local_1d8,0);
  }
  else {
    uVar12 = FUN_140e4b060(&local_1d8);
  }
  dVar13 = (double)FUN_140e79500(uVar12);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar5);
  }
  *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
  *pdVar5 = dVar13;
  local_res18 = 0;
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_188 = 0x29;
  uStack_1dc = 6;
  local_1e8 = local_res8;
  uVar17 = uVar17 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_1a8,uVar8,uVar17);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uStack_1dc = 6;
  local_1e8 = local_res8;
  FUN_140e87440(&local_1e8,DAT_1419fded8,0x80000000,&local_158,uVar8 & 0xffffffffffffff00,
                uVar17 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uStack_1cc = uStack_19c;
  uStack_1d0 = uStack_1a0;
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
    local_1d8 = local_1a8;
  }
  else {
    FUN_1400419b0(&local_1d8,&local_1a8);
  }
  local_res18 = 0x20;
  FUN_1400462a0(&local_1d8,&local_158);
  if ((uStack_1cc & 0xffffff) == 0) {
    uVar12 = SUB84(local_1d8,0);
  }
  else {
    uVar12 = FUN_140e4b060(&local_1d8);
  }
  local_c8 = (double)FUN_140e78d00(uVar12);
  local_bc = 0;
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_188 = 0x2b;
  pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a748);
  FUN_140e609c0(local_res8);
  dVar13 = local_c8;
  uStack_16c = 0;
  uStack_170 = local_c0;
  local_178 = local_c8;
  local_res18 = 0x40;
  uStack_1bc = 0;
  local_1c8 = 5.0;
  FUN_140046500(&local_178,&local_1c8);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uStack_1dc = 0;
  local_1e8 = (longlong *)0x3fe8000000000000;
  local_res18 = 0xc0;
  FUN_140042560(&local_1e8,&local_178);
  uStack_1cc = 0;
  local_1d8 = 1.25;
  local_res18 = 0x1c0;
  FUN_1400460e0(&local_1d8,&local_1e8);
  if (&local_1d8 != pdVar7) {
    local_1c8 = local_1d8;
    uStack_1c0 = uStack_1d0;
    uStack_1bc = uStack_1cc;
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar7);
    }
    FUN_140041b80(pdVar7,&local_1c8);
  }
  local_res18 = 0xc0;
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_res18 = 0x40;
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140e60910(1);
  local_188 = 0x2c;
  FUN_140e609c0(local_res8);
  uStack_1cc = 0;
  uStack_1d0 = local_c0;
  local_1d8 = dVar13;
  local_res18 = 0x200;
  uStack_1bc = 0;
  local_1c8 = 5.0;
  FUN_140046500(&local_1d8,&local_1c8);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uStack_1dc = 0;
  local_1e8 = (longlong *)0x3fd0000000000000;
  local_res18 = 0x600;
  FUN_140042560(&local_1e8,&local_1d8);
  uStack_16c = 0;
  local_178 = 1.25;
  local_res18 = 0xe00;
  FUN_1400462a0(&local_178,&local_1e8);
  if (&local_178 != pdVar5) {
    local_1c8 = local_178;
    uStack_1c0 = uStack_170;
    uStack_1bc = uStack_16c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar5);
    }
    FUN_140041b80(pdVar5,&local_1c8);
  }
  local_res18 = 0x600;
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_res18 = 0x200;
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
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
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_128,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_198;
  return;
}

