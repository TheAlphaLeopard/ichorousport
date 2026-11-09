// gml_Script_bmm_sfx_hover_check @ 0x140419880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_bmm_sfx_hover_check(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  double dVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong **pplVar12;
  double *pdVar13;
  longlong **pplVar14;
  longlong *plVar15;
  double *pdVar16;
  undefined8 *puVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  code *pcVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  ulonglong in_stack_fffffffffffffe00;
  ulonglong uVar24;
  undefined1 **ppuVar25;
  double local_1f8;
  uint local_1ec;
  double local_1e8;
  uint local_1dc;
  longlong *local_1d8;
  longlong *plStack_1d0;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  longlong *local_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_174;
  longlong *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  longlong local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  longlong *local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  
  bVar18 = false;
  bVar4 = false;
  local_1c0 = "gml_Script_bmm_sfx_toggle_check";
  local_1c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c8;
  local_1b8 = 8;
  pcVar21 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_98,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_ac = 0xffffff;
  local_b8 = (longlong *)0x0;
  local_1dc = 0xffffff;
  local_1e8 = 0.0;
  uStack_13c = 0xffffff;
  local_148 = (longlong *)0x0;
  local_1ec = 0xffffff;
  local_1f8 = 0.0;
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_14c = 0xffffff;
  local_158 = (longlong *)0x0;
  uStack_15c = 0xffffff;
  local_168 = (longlong *)0x0;
  local_10c = 0xffffff;
  local_118 = 0;
  uVar8 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef418);
  local_174 = 0xffffff;
  local_180 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0;
  uVar19 = 0;
  uVar20 = 0;
  local_e8 = 0;
  local_9c = 0;
  local_a8 = 0;
  local_1a4 = 0;
  local_1b0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1b8 = 9;
  uStack_194 = 6;
  uVar22 = (ulonglong)pcVar21 & 0xffffffffffffff00;
  local_1a0 = param_1;
  FUN_140e87440(&local_1a0,DAT_141a0a828,0x80000000,&local_b8,uVar22,
                in_stack_fffffffffffffe00 & 0xffffffffffffff00);
  uVar23 = (undefined4)(uVar22 >> 0x20);
  if ((1 << ((byte)uStack_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  plStack_1d0 = (longlong *)CONCAT44(uStack_ac,uStack_b0);
  local_1d8 = local_b8;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_1d8);
  local_78 = local_98;
  local_1d8 = _DAT_141dd2aa8;
  plStack_1d0 = plRam0000000141dd2ab0;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_1d8);
  local_70 = local_88;
  ppuVar25 = &local_78;
  puVar17 = (undefined8 *)CONCAT44(uVar23,DAT_141a56cf0);
  uVar9 = FUN_140e634e0(param_1,param_2,&local_e8,2,puVar17,ppuVar25);
  cVar5 = FUN_140e491e0(uVar9);
  if (cVar5 == '\0') {
    local_1b8 = 10;
    puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6cb8);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
    *puVar10 = 0xc000000000000000;
    local_1b8 = 0xb;
    puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6c78);
    FUN_140e609c0(param_1);
    puVar11 = (undefined8 *)FUN_140e8da20(&local_e8,param_1,0);
    if (puVar11 != puVar10) {
      local_1d8 = (longlong *)*puVar11;
      plStack_1d0 = (longlong *)puVar11[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      FUN_140041b80(puVar10,&local_1d8);
    }
    FUN_140e60910(1);
  }
  local_1b8 = 0xe;
  pplVar12 = (longlong **)(**(code **)(*param_1 + 8))(param_1,DAT_141a46948);
  pdVar13 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a465e8);
  iVar6 = FUN_140e4a740(pplVar12);
  if (((*(uint *)((longlong)pdVar13 + 0xc) & 0xffffff) == 2) && (dVar1 = *pdVar13, dVar1 != 0.0)) {
    if ((iVar6 < 0) || (*(int *)((longlong)dVar1 + 0x24) <= iVar6)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar6,
                    *(undefined4 *)((longlong)dVar1 + 0x24));
      pdVar13 = (double *)0x0;
    }
    else {
      pdVar13 = (double *)((longlong)iVar6 * 0x10 + *(longlong *)((longlong)dVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (((*(uint *)((longlong)pdVar13 + 0xc) & 0xffffff) == 2) && (dVar1 = *pdVar13, dVar1 != 0.0)) {
    if (*(int *)((longlong)dVar1 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      pdVar13 = (double *)0x0;
    }
    else {
      pdVar13 = (double *)(*(longlong *)((longlong)dVar1 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (pdVar13 != &local_1e8) {
    local_1d8 = (longlong *)*pdVar13;
    plStack_1d0 = (longlong *)pdVar13[1];
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_1d8);
  }
  local_1b8 = 0xf;
  if (pplVar12 != &local_148) {
    local_1d8 = *pplVar12;
    plStack_1d0 = pplVar12[1];
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1d8);
  }
  local_1b8 = 0x11;
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f6cb8);
  iVar6 = FUN_140e851f0(&local_148,uVar9,DAT_141955260,0);
  if (iVar6 != 0) {
    local_1b8 = 0x12;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a46948);
    pplVar12 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6cb8);
    FUN_140e609c0(param_1);
    if (&local_148 != pplVar12) {
      plStack_1d0 = (longlong *)CONCAT44(uStack_13c,uStack_140);
      local_1d8 = local_148;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar12);
      }
      FUN_140041b80(pplVar12,&local_1d8);
    }
    FUN_140e60910(1);
    local_1b8 = 0x13;
    puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6c78);
    FUN_140e609c0(param_1);
    puVar11 = (undefined8 *)FUN_140e8da20(&local_a8,param_1,0);
    if (puVar11 != puVar10) {
      local_1d8 = (longlong *)*puVar11;
      plStack_1d0 = (longlong *)puVar11[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      FUN_140041b80(puVar10,&local_1d8);
    }
    FUN_140e60910(1);
    local_1b8 = 0x14;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1ec = 0;
    local_1f8 = 0.0;
    bVar3 = true;
    do {
      pdVar13 = (double *)0x0;
      if (!bVar3) {
        local_1b8 = 0x14;
        uVar7 = local_1ec & 0xffffff;
        if (uVar7 == 0) {
LAB_140419eac:
          local_1f8 = (double)CONCAT44(uVar20,uVar19) + 1.0;
        }
        else if (uVar7 == 1) {
          local_1f8 = (double)FUN_140e4b060(&local_1f8);
          local_1f8 = local_1f8 + 1.0;
          local_1ec = 0;
        }
        else if (uVar7 == 7) {
          local_1f8 = (double)CONCAT44(local_1f8._4_4_,local_1f8._0_4_ + 1);
        }
        else if (uVar7 == 10) {
          local_1f8 = (double)((longlong)local_1f8 + 1);
        }
        else {
          if (uVar7 == 0xd) {
            local_1ec = 0;
            goto LAB_140419eac;
          }
          FUN_140042910(&DAT_14172c3d8,&local_1f8,&local_1f8);
        }
      }
      bVar3 = false;
      pdVar16 = pdVar13;
      if ((local_1dc == 2) && (local_1e8 != 0.0)) {
        pdVar16 = (double *)(ulonglong)*(uint *)((longlong)local_1e8 + 0x24);
      }
      local_12c = 0;
      local_138 = (double)(int)pdVar16;
      iVar6 = FUN_140e851f0(&local_1f8,&local_138,DAT_141955260,1);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if (iVar6 == -2 || -1 < iVar6) goto LAB_14041a1d5;
      local_1b8 = 0x15;
      puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6c78);
      iVar6 = FUN_140e4a740(&local_1f8);
      if (((local_1dc & 0xffffff) == 2) && (local_1e8 != 0.0)) {
        if ((iVar6 < 0) || (*(int *)((longlong)local_1e8 + 0x24) <= iVar6)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar6,
                        *(undefined4 *)((longlong)local_1e8 + 0x24));
          pdVar16 = pdVar13;
        }
        else {
          pdVar16 = (double *)((longlong)iVar6 * 0x10 + *(longlong *)((longlong)local_1e8 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar16 = &local_1e8;
      }
      ppuVar25 = (undefined1 **)((ulonglong)ppuVar25 & 0xffffffffffffff00);
      puVar17 = (undefined8 *)((ulonglong)puVar17 & 0xffffffffffffff00);
      FUN_140e87440(pdVar16,DAT_141a46738,0x80000000,&local_108,puVar17,ppuVar25);
      local_11c = 10;
      local_128 = 5;
      iVar6 = FUN_140e851f0(&local_108,&local_128,DAT_141955260,0);
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if (iVar6 == 0) {
        iVar6 = FUN_140e4a740(&local_1f8);
        if (((local_1dc & 0xffffff) == 2) && (local_1e8 != 0.0)) {
          if ((iVar6 < 0) || (*(int *)((longlong)local_1e8 + 0x24) <= iVar6)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar6,
                          *(undefined4 *)((longlong)local_1e8 + 0x24));
          }
          else {
            pdVar13 = (double *)((longlong)iVar6 * 0x10 + *(longlong *)((longlong)local_1e8 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
          pdVar13 = &local_1e8;
        }
        ppuVar25 = (undefined1 **)((ulonglong)ppuVar25 & 0xffffffffffffff00);
        puVar17 = (undefined8 *)((ulonglong)puVar17 & 0xffffffffffffff00);
        FUN_140e87440(pdVar13,DAT_141a46aa8,0x80000000,&local_158,puVar17,ppuVar25);
        uStack_194 = uStack_14c;
        uStack_198 = uStack_150;
        if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
          local_1a0 = local_158;
        }
        else {
          FUN_1400419b0(&local_1a0,&local_158);
        }
        pplVar12 = &local_1a0;
        bVar18 = true;
      }
      else {
        plStack_1d0 = (longlong *)((ulonglong)plStack_1d0 & 0xffffffff);
        local_1d8 = (longlong *)&DAT_bff0000000000000;
        pplVar12 = &local_1d8;
        bVar4 = true;
      }
      FUN_140e609c0(param_1);
      uVar19 = FUN_140e4a740(&local_1f8);
      pplVar14 = (longlong **)FUN_140e48e40(puVar10,uVar19);
      FUN_140e609c0(*(undefined8 *)*puVar10);
      if (pplVar12 != pplVar14) {
        local_f8 = *pplVar12;
        plStack_f0 = pplVar12[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)pplVar14 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pplVar14);
        }
        FUN_140041b80(pplVar14,&local_f8);
      }
      if ((bVar4) &&
         (bVar4 = false, (1 << ((byte)((ulonglong)plStack_1d0 >> 0x20) & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_1d8);
      }
      if ((bVar18) && (bVar18 = false, (1 << ((byte)uStack_194 & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_1a0);
      }
      FUN_140e60910(2);
      uVar19 = SUB84(local_1f8,0);
      uVar20 = (undefined4)((ulonglong)local_1f8 >> 0x20);
    } while( true );
  }
  local_1b8 = 0x1b;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1ec = 0;
  local_1f8 = 0.0;
  bVar4 = true;
LAB_14041a400:
  pdVar13 = (double *)0x0;
  if (!bVar4) {
    local_1b8 = 0x1b;
    uVar7 = local_1ec & 0xffffff;
    if (uVar7 != 0) {
      if (uVar7 != 1) {
        if (uVar7 == 7) {
          local_1f8 = (double)CONCAT44(local_1f8._4_4_,local_1f8._0_4_ + 1);
        }
        else if (uVar7 == 10) {
          local_1f8 = (double)((longlong)local_1f8 + 1);
        }
        else {
          if (uVar7 == 0xd) {
            local_1ec = 0;
            goto LAB_14041a456;
          }
          FUN_140042910(&DAT_14172c3d8,&local_1f8,&local_1f8);
        }
        goto LAB_14041a460;
      }
      local_1f8 = (double)FUN_140e4b060(&local_1f8);
      local_1ec = 0;
    }
LAB_14041a456:
    local_1f8 = local_1f8 + 1.0;
  }
LAB_14041a460:
  bVar4 = false;
  pdVar16 = pdVar13;
  if ((local_1dc == 2) && (local_1e8 != 0.0)) {
    pdVar16 = (double *)(ulonglong)*(uint *)((longlong)local_1e8 + 0x24);
  }
  plStack_1d0 = (longlong *)((ulonglong)plStack_1d0 & 0xffffffff);
  local_1d8 = (longlong *)(double)(int)pdVar16;
  iVar6 = FUN_140e851f0(&local_1f8,&local_1d8,DAT_141955260,1);
  if ((1 << ((byte)((ulonglong)plStack_1d0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (iVar6 != -2 && iVar6 < 0) {
    local_1b8 = 0x1c;
    iVar6 = FUN_140e4a740(&local_1f8);
    if (((local_1dc & 0xffffff) == 2) && (local_1e8 != 0.0)) {
      if ((iVar6 < 0) || (*(int *)((longlong)local_1e8 + 0x24) <= iVar6)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar6,
                      *(undefined4 *)((longlong)local_1e8 + 0x24));
        pdVar16 = pdVar13;
      }
      else {
        pdVar16 = (double *)((longlong)iVar6 * 0x10 + *(longlong *)((longlong)local_1e8 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      pdVar16 = &local_1e8;
    }
    ppuVar25 = (undefined1 **)((ulonglong)ppuVar25 & 0xffffffffffffff00);
    puVar17 = (undefined8 *)((ulonglong)puVar17 & 0xffffffffffffff00);
    FUN_140e87440(pdVar16,DAT_141a46738,0x80000000,&local_108,puVar17,ppuVar25);
    local_11c = 10;
    local_128 = 5;
    iVar6 = FUN_140e851f0(&local_108,&local_128,DAT_141955260,0);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if (iVar6 == 0) {
      local_1b8 = 0x1d;
      iVar6 = FUN_140e4a740(&local_1f8);
      if (((local_1dc & 0xffffff) == 2) && (local_1e8 != 0.0)) {
        if ((iVar6 < 0) || (*(int *)((longlong)local_1e8 + 0x24) <= iVar6)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar6,
                        *(undefined4 *)((longlong)local_1e8 + 0x24));
        }
        else {
          pdVar13 = (double *)((longlong)iVar6 * 0x10 + *(longlong *)((longlong)local_1e8 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar13 = &local_1e8;
      }
      ppuVar25 = (undefined1 **)((ulonglong)ppuVar25 & 0xffffffffffffff00);
      puVar17 = (undefined8 *)((ulonglong)puVar17 & 0xffffffffffffff00);
      FUN_140e87440(pdVar13,DAT_141a46aa8,0x80000000,&local_158,puVar17,ppuVar25);
      plStack_f0 = (longlong *)CONCAT44(uStack_14c,uStack_150);
      local_f8 = local_158;
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_f8);
      local_1b8 = 0x1e;
      plVar15 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f6c78);
      iVar6 = FUN_140e4a740(&local_1f8);
      if (((*(uint *)((longlong)plVar15 + 0xc) & 0xffffff) == 2) && (lVar2 = *plVar15, lVar2 != 0))
      {
        if ((iVar6 < 0) || (*(int *)(lVar2 + 0x24) <= iVar6)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar6,
                        *(undefined4 *)(lVar2 + 0x24));
          plVar15 = (longlong *)0x0;
        }
        else {
          plVar15 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar2 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar15 != &local_118) {
        local_f8 = (longlong *)*plVar15;
        plStack_f0 = (longlong *)plVar15[1];
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_f8);
      }
      local_1b8 = 0x1f;
      iVar6 = FUN_140e851f0(&local_168,&local_118,DAT_141955260,0);
      if (iVar6 != 0) {
        local_1b8 = 0x20;
        local_12c = 0;
        local_138 = 1.0;
        iVar6 = FUN_140e851f0(&local_168,&local_138,DAT_141955260,0);
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        uVar7 = 1 << ((byte)local_1a4 & 0x1f);
        if (iVar6 == 0) {
          local_1b8 = 0x21;
          if ((uVar7 & 0x46) != 0) {
            FUN_140041a50(&local_1b0);
          }
          local_1b0 = 0;
          local_1a8 = 0;
          local_1a4 = 5;
          uVar24 = (ulonglong)ppuVar25 & 0xffffffffffffff00;
          uVar22 = (ulonglong)puVar17 & 0xffffffffffffff00;
          FUN_140e87440(uVar8,DAT_1419ef0a8,0x80000000,&local_180,uVar22,uVar24);
          FUN_140e87440(&local_180,DAT_1419f4a98,0x80000000,&local_c8,uVar22 & 0xffffffffffffff00,
                        uVar24 & 0xffffffffffffff00);
          switch(local_174) {
          default:
switchD_14041a83f_caseD_1:
            puVar17 = &local_c8;
            uVar9 = 0;
            break;
          case 6:
            puVar17 = &local_c8;
            uVar9 = local_180;
            break;
          case 0xf:
            iVar6 = (int)((ulonglong)local_180 >> 0x20);
            if ((iVar6 != 0x1000000) && (iVar6 != 0x4000001)) goto switchD_14041a83f_caseD_1;
          case 0:
          case 7:
          case 10:
          case 0xd:
            uVar19 = FUN_140e4a8b0(&local_180);
            uVar9 = FUN_140e87250(uVar19);
            puVar17 = &local_c8;
          }
        }
        else {
          local_1b8 = 0x23;
          if ((uVar7 & 0x46) != 0) {
            FUN_140041a50(&local_1b0);
          }
          local_1b0 = 0;
          local_1a8 = 0;
          local_1a4 = 5;
          uVar24 = (ulonglong)ppuVar25 & 0xffffffffffffff00;
          uVar22 = (ulonglong)puVar17 & 0xffffffffffffff00;
          FUN_140e87440(uVar8,DAT_1419ef6e8,0x80000000,&local_190,uVar22,uVar24);
          FUN_140e87440(&local_190,DAT_1419f4a98,0x80000000,&local_d8,uVar22 & 0xffffffffffffff00,
                        uVar24 & 0xffffffffffffff00);
          switch(local_184) {
          default:
switchD_14041a90d_caseD_1:
            uVar9 = 0;
            break;
          case 6:
            uVar9 = local_190;
            break;
          case 0xf:
            iVar6 = (int)((ulonglong)local_190 >> 0x20);
            if ((iVar6 != 0x1000000) && (iVar6 != 0x4000001)) goto switchD_14041a90d_caseD_1;
          case 0:
          case 7:
          case 10:
          case 0xd:
            uVar19 = FUN_140e4a8b0(&local_190);
            uVar9 = FUN_140e87250(uVar19);
          }
          puVar17 = &local_d8;
        }
        ppuVar25 = (undefined1 **)0x0;
        FUN_140e63610(uVar9,param_2,&local_1b0,0,puVar17,0);
      }
      local_1b8 = 0x26;
      puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6c78);
      FUN_140e609c0(param_1);
      uVar19 = FUN_140e4a740(&local_1f8);
      pplVar12 = (longlong **)FUN_140e48e40(puVar10,uVar19);
      FUN_140e609c0(*(undefined8 *)*puVar10);
      if (&local_168 != pplVar12) {
        plStack_f0 = (longlong *)CONCAT44(uStack_15c,uStack_160);
        local_f8 = local_168;
        if ((1 << ((byte)*(undefined4 *)((longlong)pplVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pplVar12);
        }
        FUN_140041b80(pplVar12,&local_f8);
      }
      FUN_140e60910(2);
    }
    else {
      local_1b8 = 0x1c;
    }
    goto LAB_14041a400;
  }
LAB_14041a1dd:
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1c8;
  return param_3;
LAB_14041a1d5:
  local_1b8 = 0x18;
  goto LAB_14041a1dd;
}

