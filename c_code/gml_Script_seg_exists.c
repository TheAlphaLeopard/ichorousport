// gml_Script_seg_exists @ 0x140499230

longlong *
gml_Script_seg_exists
          (longlong *param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  double *pdVar7;
  undefined8 uVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  uint uVar21;
  code *pcVar22;
  undefined4 uVar24;
  ulonglong uVar23;
  longlong **pplVar25;
  ulonglong uVar26;
  undefined4 uVar27;
  longlong *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  double local_1e8;
  undefined4 local_1e0;
  uint local_1dc;
  double local_1d8;
  undefined4 local_1d0;
  uint local_1cc;
  double local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  double local_1a8;
  undefined4 local_1a0;
  uint local_19c;
  double local_198;
  undefined4 local_18c;
  double local_188;
  uint local_17c;
  double local_178;
  uint local_16c;
  double local_168;
  uint local_15c;
  double local_158;
  uint local_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  double local_128;
  byte local_11c;
  double local_118;
  byte local_10c;
  longlong local_108;
  byte local_fc;
  double local_f8;
  byte local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  double *local_d8;
  double *local_d0;
  longlong *local_c8;
  double *local_c0;
  
  local_140 = "gml_Script_seg_draw";
  local_148 = DAT_141dc7a50;
  local_138 = 3;
  pcVar22 = FUN_140041b30;
  DAT_141dc7a50 = &local_148;
  _eh_vector_constructor_iterator_(&local_128,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_1cc = 0xffffff;
  local_1d8 = 0.0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  local_1ac = 0;
  uVar21 = 0;
  local_1b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_138 = 5;
  if (param_4 < 1) {
    pdVar7 = (double *)&DAT_1419df7b0;
LAB_14049937d:
    local_1f8 = (longlong *)*pdVar7;
    uStack_1f0 = *(undefined4 *)(pdVar7 + 1);
    uStack_1ec = *(undefined4 *)((longlong)pdVar7 + 0xc);
    FUN_140041b80(&local_1d8,&local_1f8);
  }
  else {
    pdVar7 = (double *)*param_5;
    if (pdVar7 != &local_1d8) goto LAB_14049937d;
  }
  local_138 = 7;
  plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fba8);
  iVar3 = FUN_140e4a740(&local_1d8);
  if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  local_1dc = 0;
  local_1e8 = 0.0;
  uVar4 = FUN_140e851f0(plVar6,&local_1e8,DAT_141955260,1);
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uVar24 = (undefined4)((ulonglong)pcVar22 >> 0x20);
  if (uVar4 < 0x80000000) {
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fba8);
    iVar3 = FUN_140e4a740(&local_1d8);
    if (((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 2) && (dVar13 = *pdVar7, dVar13 != 0.0))
    {
      if ((iVar3 < 0) || (*(int *)((longlong)dVar13 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)((longlong)dVar13 + 0x24));
        pdVar7 = (double *)0x0;
      }
      else {
        pdVar7 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar13 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar7 != &local_128) {
      local_1f8 = (longlong *)*pdVar7;
      uStack_1f0 = *(undefined4 *)(pdVar7 + 1);
      uStack_1ec = *(undefined4 *)((longlong)pdVar7 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_1f8);
    }
    local_d8 = &local_128;
    pplVar25 = (longlong **)&local_d8;
    pcVar22 = (code *)CONCAT44(uVar24,DAT_141a04628);
    uVar8 = FUN_140e634e0(param_1,param_2,&local_1b8,1,pcVar22,pplVar25);
    cVar2 = FUN_140e491e0(uVar8);
    if (cVar2 != '\0') {
      local_138 = 8;
      pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
      pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
      pdVar11 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
      local_1bc = local_1cc;
      local_1c0 = local_1d0;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
        local_1c8 = local_1d8;
      }
      else {
        FUN_1400419b0(&local_1c8,&local_1d8);
      }
      uStack_1ec = 7;
      local_1f8 = (longlong *)CONCAT44(local_1f8._4_4_,1);
      FUN_1400460e0(&local_1c8,&local_1f8);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1dc = local_1cc;
      local_1e0 = local_1d0;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
        local_1e8 = local_1d8;
      }
      else {
        FUN_1400419b0(&local_1e8,&local_1d8);
      }
      uStack_1ec = 7;
      local_1f8 = (longlong *)CONCAT44(local_1f8._4_4_,1);
      FUN_1400460e0(&local_1e8,&local_1f8);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      iVar3 = FUN_140e4a740(&local_1c8);
      if (((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 2) &&
         (dVar13 = *pdVar11, dVar13 != 0.0)) {
        if ((iVar3 < 0) || (*(int *)((longlong)dVar13 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)((longlong)dVar13 + 0x24));
          pdVar11 = (double *)0x0;
        }
        else {
          pdVar11 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar13 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
        dVar13 = *pdVar11;
      }
      else {
        dVar13 = (double)FUN_140e4b060(pdVar11);
      }
      iVar3 = FUN_140e4a740(&local_1e8);
      if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) &&
         (dVar14 = *pdVar10, dVar14 != 0.0)) {
        if ((iVar3 < 0) || (*(int *)((longlong)dVar14 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)((longlong)dVar14 + 0x24));
          pdVar10 = (double *)0x0;
        }
        else {
          pdVar10 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar14 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
        dVar14 = *pdVar10;
      }
      else {
        dVar14 = (double)FUN_140e4b060(pdVar10);
      }
      iVar3 = FUN_140e4a740(&local_1d8);
      if (((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 2) && (dVar15 = *pdVar9, dVar15 != 0.0)
         ) {
        if ((iVar3 < 0) || (*(int *)((longlong)dVar15 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)((longlong)dVar15 + 0x24));
          pdVar10 = (double *)0x0;
        }
        else {
          pdVar10 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar15 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar10 = pdVar9;
      }
      if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
        dVar15 = *pdVar10;
      }
      else {
        dVar15 = (double)FUN_140e4b060(pdVar10);
      }
      iVar3 = FUN_140e4a740(&local_1d8);
      if (((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 2) && (dVar16 = *pdVar7, dVar16 != 0.0)
         ) {
        if ((iVar3 < 0) || (*(int *)((longlong)dVar16 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)((longlong)dVar16 + 0x24));
          pdVar10 = (double *)0x0;
        }
        else {
          pdVar10 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar16 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar10 = pdVar7;
      }
      if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
        dVar16 = *pdVar10;
      }
      else {
        dVar16 = (double)FUN_140e4b060(pdVar10);
      }
      fVar12 = (float)FUN_140e793d0((float)dVar16,(float)dVar15,(float)dVar14,(float)dVar13);
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_18c = 0;
      local_198 = (double)fVar12;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_138 = 9;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fba8);
      uStack_1ec = 6;
      uVar26 = (ulonglong)pplVar25 & 0xffffffffffffff00;
      uVar23 = (ulonglong)pcVar22 & 0xffffffffffffff00;
      local_1f8 = param_1;
      FUN_140e87440(&local_1f8,DAT_141a0cfc8,0x80000000,&local_158,uVar23,uVar26);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      uStack_1ec = 6;
      uVar26 = uVar26 & 0xffffffffffffff00;
      uVar23 = uVar23 & 0xffffffffffffff00;
      local_1f8 = param_1;
      FUN_140e87440(&local_1f8,DAT_141a0f7f8,0x80000000,&local_168,uVar23,uVar26);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      uStack_1ec = 6;
      uVar26 = uVar26 & 0xffffffffffffff00;
      uVar23 = uVar23 & 0xffffffffffffff00;
      local_1f8 = param_1;
      FUN_140e87440(&local_1f8,DAT_141a0f938,0x80000000,&local_178,uVar23,uVar26);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      uStack_1ec = 6;
      uVar26 = uVar26 & 0xffffffffffffff00;
      uVar23 = uVar23 & 0xffffffffffffff00;
      local_1f8 = param_1;
      FUN_140e87440(&local_1f8,DAT_141a0a778,0x80000000,&local_1a8,uVar23,uVar26);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      uStack_1ec = 6;
      uVar26 = uVar26 & 0xffffffffffffff00;
      uVar23 = uVar23 & 0xffffffffffffff00;
      local_1f8 = param_1;
      FUN_140e87440(&local_1f8,DAT_141a0f9d8,0x80000000,&local_e8,uVar23,uVar26);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      uStack_1ec = 6;
      uVar26 = uVar26 & 0xffffffffffffff00;
      uVar23 = uVar23 & 0xffffffffffffff00;
      local_1f8 = param_1;
      FUN_140e87440(&local_1f8,DAT_141a0fbc8,0x80000000,&local_188,uVar23,uVar26);
      uVar24 = (undefined4)(uVar23 >> 0x20);
      uVar27 = (undefined4)(uVar26 >> 0x20);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1bc = local_19c;
      local_1c0 = local_1a0;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
        local_1c8 = local_1a8;
      }
      else {
        FUN_1400419b0(&local_1c8,&local_1a8);
      }
      FUN_1400460e0(&local_1c8,&local_198);
      local_1dc = local_1bc;
      local_1e0 = local_1c0;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
        local_1e8 = local_1c8;
      }
      else {
        FUN_1400419b0(&local_1e8,&local_1c8);
      }
      uStack_1ec = 7;
      local_1f8 = (longlong *)CONCAT44(local_1f8._4_4_,0x168);
      FUN_140046880(&local_1e8,&local_1f8);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      dVar13 = local_188;
      if ((local_17c & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_188);
      }
      uVar5 = FUN_140e4a8b0(&local_e8);
      dVar14 = local_1e8;
      if ((local_1dc & 0xffffff) != 0) {
        dVar14 = (double)FUN_140e4b060(&local_1e8);
      }
      dVar15 = local_178;
      if ((local_16c & 0xffffff) != 0) {
        dVar15 = (double)FUN_140e4b060(&local_178);
      }
      dVar16 = local_168;
      if ((local_15c & 0xffffff) != 0) {
        dVar16 = (double)FUN_140e4b060(&local_168);
      }
      iVar3 = FUN_140e4a740(&local_1d8);
      if (((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 2) && (dVar17 = *pdVar9, dVar17 != 0.0)
         ) {
        if ((iVar3 < 0) || (*(int *)((longlong)dVar17 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)((longlong)dVar17 + 0x24));
          pdVar9 = (double *)0x0;
        }
        else {
          pdVar9 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar17 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      iVar3 = FUN_140e4a740(&local_1d8);
      if (((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 2) && (dVar18 = *pdVar7, dVar18 != 0.0)
         ) {
        if ((iVar3 < 0) || (*(int *)((longlong)dVar18 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)((longlong)dVar18 + 0x24));
          pdVar7 = (double *)0x0;
        }
        else {
          pdVar7 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar18 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
        dVar18 = *pdVar7;
      }
      else {
        dVar18 = (double)FUN_140e4b060(pdVar7);
      }
      dVar19 = local_158;
      if ((local_14c & 0xffffff) != 0) {
        dVar19 = (double)FUN_140e4b060(&local_158);
      }
      iVar3 = FUN_140e4a740(&local_1d8);
      if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) &&
         (dVar20 = *pdVar10, dVar20 != 0.0)) {
        if ((iVar3 < 0) || (*(int *)((longlong)dVar20 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)((longlong)dVar20 + 0x24));
          pdVar10 = (double *)0x0;
        }
        else {
          pdVar10 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar20 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
        dVar20 = *pdVar10;
      }
      else {
        dVar20 = (double)FUN_140e4b060(pdVar10);
      }
      FUN_140ec5dd0(param_1,(longlong)dVar20,(float)dVar19,(float)dVar18,
                    CONCAT44(uVar24,(float)dVar17),CONCAT44(uVar27,(float)dVar16),(float)dVar15,
                    (float)dVar14,uVar5,(float)dVar13);
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_138 = 0xe;
      uVar21 = 0x3ff00000;
      goto LAB_14049a2b7;
    }
  }
  uVar24 = (undefined4)((ulonglong)pcVar22 >> 0x20);
  local_138 = 0xf;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
  pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
  plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
  pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
  iVar3 = FUN_140e4a740(&local_1d8);
  if (((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 2) && (dVar13 = *pdVar9, dVar13 != 0.0)) {
    if ((iVar3 < 0) || (*(int *)((longlong)dVar13 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)((longlong)dVar13 + 0x24));
      pdVar9 = (double *)0x0;
    }
    else {
      pdVar9 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar13 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (pdVar9 != &local_128) {
    local_1f8 = (longlong *)*pdVar9;
    uStack_1f0 = *(undefined4 *)(pdVar9 + 1);
    uStack_1ec = *(undefined4 *)((longlong)pdVar9 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1f8);
  }
  local_d8 = &local_128;
  iVar3 = FUN_140e4a740(&local_1d8);
  if (((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 2) && (dVar13 = *pdVar7, dVar13 != 0.0)) {
    if ((iVar3 < 0) || (*(int *)((longlong)dVar13 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)((longlong)dVar13 + 0x24));
      pdVar7 = (double *)0x0;
    }
    else {
      pdVar7 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar13 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (pdVar7 != &local_118) {
    local_1f8 = (longlong *)*pdVar7;
    uStack_1f0 = *(undefined4 *)(pdVar7 + 1);
    uStack_1ec = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1f8);
  }
  local_d0 = &local_118;
  local_1dc = local_1cc;
  local_1e0 = local_1d0;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
    local_1e8 = local_1d8;
  }
  else {
    FUN_1400419b0(&local_1e8,&local_1d8);
  }
  uStack_1ec = 7;
  local_1f8 = (longlong *)CONCAT44(local_1f8._4_4_,1);
  FUN_1400460e0(&local_1e8,&local_1f8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  iVar3 = FUN_140e4a740(&local_1e8);
  if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar6 != &local_108) {
    local_1f8 = (longlong *)*plVar6;
    uStack_1f0 = (undefined4)plVar6[1];
    uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1f8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_c8 = &local_108;
  local_1dc = local_1cc;
  local_1e0 = local_1d0;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
    local_1e8 = local_1d8;
  }
  else {
    FUN_1400419b0(&local_1e8,&local_1d8);
  }
  uStack_1ec = 7;
  local_1f8 = (longlong *)CONCAT44(local_1f8._4_4_,1);
  FUN_1400460e0(&local_1e8,&local_1f8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  iVar3 = FUN_140e4a740(&local_1e8);
  if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) && (dVar13 = *pdVar10, dVar13 != 0.0))
  {
    if ((iVar3 < 0) || (*(int *)((longlong)dVar13 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)((longlong)dVar13 + 0x24));
      pdVar10 = (double *)0x0;
    }
    else {
      pdVar10 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar13 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (pdVar10 != &local_f8) {
    local_1f8 = (longlong *)*pdVar10;
    uStack_1f0 = *(undefined4 *)(pdVar10 + 1);
    uStack_1ec = *(undefined4 *)((longlong)pdVar10 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1f8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_c0 = &local_f8;
  FUN_140e634e0(param_1,param_2,&local_1b8,4,CONCAT44(uVar24,DAT_141a0faa8),&local_d8);
  local_138 = 0x10;
LAB_14049a2b7:
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = (ulonglong)uVar21 << 0x20;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return param_3;
}

