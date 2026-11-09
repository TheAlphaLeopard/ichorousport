// gml_Script_anon_6375____struct___545_gml_Object_oEnemyWormBrute_Create_0 @ 0x140a95c50

undefined8 *
gml_Script_anon_6375____struct___545_gml_Object_oEnemyWormBrute_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar17;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double local_1d0;
  undefined4 local_1c8;
  uint local_1c4;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double local_1a8;
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
  double local_130;
  undefined4 local_128;
  uint local_124;
  double local_120;
  undefined4 local_118;
  uint local_114;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  uint local_dc;
  undefined4 local_d8 [3];
  undefined4 local_cc;
  undefined4 local_c8 [3];
  undefined4 local_bc;
  double local_b8;
  undefined4 local_ac;
  
  local_140 = "gml_Script_anon@4955@gml_Object_oEnemyWormBrute_Create_0";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_138 = 200;
  local_1c4 = 0;
  uVar9 = 0;
  uVar17 = 0;
  local_1d0 = 0.0;
  bVar1 = true;
  do {
    dVar11 = (double)CONCAT44(uVar17,uVar9);
    if (!bVar1) {
      local_138 = 200;
      uVar2 = local_1c4 & 0xffffff;
      if (uVar2 != 0) {
        if (uVar2 != 1) {
          if (uVar2 == 7) {
            local_1d0 = (double)CONCAT44(local_1d0._4_4_,local_1d0._0_4_ + 1);
          }
          else if (uVar2 == 10) {
            local_1d0 = (double)((longlong)local_1d0 + 1);
          }
          else {
            if (uVar2 == 0xd) goto LAB_140a95d98;
            FUN_140042910(&DAT_14172c3d8,&local_1d0,&local_1d0);
          }
          goto LAB_140a95da8;
        }
        dVar11 = (double)FUN_140e4b060(&local_1d0);
LAB_140a95d98:
        local_1c4 = 0;
      }
      local_1d0 = dVar11 + 1.0;
    }
LAB_140a95da8:
    bVar1 = false;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f22c8);
    iVar3 = FUN_140e851f0(&local_1d0,uVar4,DAT_141955260,1);
    if ((iVar3 == -2) || (-1 < iVar3)) {
      local_138 = 0xd0;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f22c8);
      pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
      pdVar5 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f25a8);
      pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f24c8);
      if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
        dVar11 = *pdVar7;
      }
      else {
        dVar11 = (double)FUN_140e4b060(pdVar7);
      }
      if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
        dVar12 = *pdVar5;
      }
      else {
        dVar12 = (double)FUN_140e4b060(pdVar5);
      }
      iVar3 = FUN_140e4a740(uVar4);
      if (((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 2) && (dVar13 = *pdVar6, dVar13 != 0.0)
         ) {
        if ((iVar3 < 0) || (*(int *)((longlong)dVar13 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)((longlong)dVar13 + 0x24));
          pdVar6 = (double *)0x0;
        }
        else {
          pdVar6 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar13 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      fVar10 = (float)FUN_140e78f90((float)dVar12,(float)dVar11);
      uStack_1ac = *(undefined4 *)((longlong)pdVar6 + 0xc);
      uStack_1b0 = *(undefined4 *)(pdVar6 + 1);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
        local_1b8 = *pdVar6;
      }
      else {
        FUN_1400419b0(&local_1b8,pdVar6);
      }
      local_18c = 0;
      local_198 = (double)fVar10;
      FUN_1400462a0(&local_1b8,&local_198);
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_f8 = (undefined4)local_1b8;
      uStack_f4 = local_1b8._4_4_;
      uStack_f0 = uStack_1b0;
      uStack_ec = uStack_1ac;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_f8);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_138 = 0xd1;
      pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
      if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
        dVar11 = *pdVar7;
      }
      else {
        dVar11 = (double)FUN_140e4b060(pdVar7);
      }
      if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
        dVar12 = *pdVar5;
      }
      else {
        dVar12 = (double)FUN_140e4b060(pdVar5);
      }
      iVar3 = FUN_140e4a740(uVar4);
      if (((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 2) && (dVar13 = *pdVar6, dVar13 != 0.0)
         ) {
        if ((iVar3 < 0) || (*(int *)((longlong)dVar13 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)((longlong)dVar13 + 0x24));
          pdVar6 = (double *)0x0;
        }
        else {
          pdVar6 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar13 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      fVar10 = (float)FUN_140e79010((float)dVar12,(float)dVar11);
      uStack_1ac = *(undefined4 *)((longlong)pdVar6 + 0xc);
      uStack_1b0 = *(undefined4 *)(pdVar6 + 1);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
        local_1b8 = *pdVar6;
      }
      else {
        FUN_1400419b0(&local_1b8,pdVar6);
      }
      local_18c = 0;
      local_198 = (double)fVar10;
      FUN_1400462a0(&local_1b8,&local_198);
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_f8 = (undefined4)local_1b8;
      uStack_f4 = local_1b8._4_4_;
      uStack_f0 = uStack_1b0;
      uStack_ec = uStack_1ac;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_f8);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_138 = 0xd2;
      pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2508);
      if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
        dVar11 = *pdVar7;
      }
      else {
        dVar11 = (double)FUN_140e4b060(pdVar7);
      }
      dVar12 = local_188;
      if ((local_17c & 0xffffff) != 0) {
        dVar12 = (double)FUN_140e4b060(&local_188);
      }
      dVar13 = local_178;
      if ((local_16c & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_178);
      }
      if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
        dVar14 = *pdVar6;
      }
      else {
        dVar14 = (double)FUN_140e4b060(pdVar6);
      }
      FUN_140ec5dd0(param_1,(longlong)dVar14,0,(float)dVar13,(float)dVar12,0x3f800000,0x3f800000,
                    (float)dVar11,0xffffff,0x3f800000);
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
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
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d0);
      }
      DAT_141dc7a50 = (undefined8 *)local_148;
      return param_3;
    }
    local_138 = 0xca;
    pdVar5 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    local_114 = local_1c4;
    local_118 = local_1c8;
    if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) == 0) {
      local_120 = local_1d0;
    }
    else {
      FUN_1400419b0(&local_120,&local_1d0);
    }
    local_cc = 7;
    local_d8[0] = 1;
    FUN_1400460e0(&local_120,local_d8);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    local_124 = local_1c4;
    local_128 = local_1c8;
    if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) == 0) {
      local_130 = local_1d0;
    }
    else {
      FUN_1400419b0(&local_130,&local_1d0);
    }
    local_bc = 7;
    local_c8[0] = 1;
    FUN_1400460e0(&local_130,local_c8);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    iVar3 = FUN_140e4a740(&local_120);
    if (((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 2) && (dVar11 = *pdVar8, dVar11 != 0.0))
    {
      if ((iVar3 < 0) || (*(int *)((longlong)dVar11 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)((longlong)dVar11 + 0x24));
        pdVar8 = (double *)0x0;
      }
      else {
        pdVar8 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar11 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
      dVar11 = *pdVar8;
    }
    else {
      dVar11 = (double)FUN_140e4b060(pdVar8);
    }
    iVar3 = FUN_140e4a740(&local_130);
    if (((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 2) && (dVar12 = *pdVar7, dVar12 != 0.0))
    {
      if ((iVar3 < 0) || (*(int *)((longlong)dVar12 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)((longlong)dVar12 + 0x24));
        pdVar7 = (double *)0x0;
      }
      else {
        pdVar7 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar12 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
      dVar12 = *pdVar7;
    }
    else {
      dVar12 = (double)FUN_140e4b060(pdVar7);
    }
    iVar3 = FUN_140e4a740(&local_1d0);
    if (((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 2) && (dVar13 = *pdVar6, dVar13 != 0.0))
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
      pdVar7 = pdVar6;
    }
    if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
      dVar13 = *pdVar7;
    }
    else {
      dVar13 = (double)FUN_140e4b060(pdVar7);
    }
    iVar3 = FUN_140e4a740(&local_1d0);
    if (((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 2) && (dVar14 = *pdVar5, dVar14 != 0.0))
    {
      if ((iVar3 < 0) || (*(int *)((longlong)dVar14 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)((longlong)dVar14 + 0x24));
        pdVar7 = (double *)0x0;
      }
      else {
        pdVar7 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar14 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      pdVar7 = pdVar5;
    }
    if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
      dVar14 = *pdVar7;
    }
    else {
      dVar14 = (double)FUN_140e4b060(pdVar7);
    }
    fVar10 = (float)FUN_140e793d0((float)dVar14,(float)dVar13,(float)dVar12,(float)dVar11);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_19c = 0;
    local_1a8 = (double)fVar10;
    if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_130);
    }
    if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_120);
    }
    local_138 = 0xcb;
    pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2248);
    dVar11 = local_1a8;
    if ((local_19c & 0xffffff) != 0) {
      dVar11 = (double)FUN_140e4b060(&local_1a8);
    }
    if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
      dVar12 = *pdVar7;
    }
    else {
      dVar12 = (double)FUN_140e4b060(pdVar7);
    }
    iVar3 = FUN_140e4a740(&local_1d0);
    if (((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 2) && (dVar13 = *pdVar5, dVar13 != 0.0))
    {
      if ((iVar3 < 0) || (*(int *)((longlong)dVar13 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)((longlong)dVar13 + 0x24));
        pdVar5 = (double *)0x0;
      }
      else {
        pdVar5 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar13 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    fVar10 = (float)FUN_140e78f90((float)dVar12,(float)dVar11);
    uStack_fc = *(undefined4 *)((longlong)pdVar5 + 0xc);
    uStack_100 = *(undefined4 *)(pdVar5 + 1);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
      local_108 = *pdVar5;
    }
    else {
      FUN_1400419b0(&local_108,pdVar5);
    }
    local_ac = 0;
    local_b8 = (double)fVar10;
    FUN_1400462a0(&local_108,&local_b8);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_f8);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_138 = 0xcc;
    dVar11 = local_1a8;
    if ((local_19c & 0xffffff) != 0) {
      dVar11 = (double)FUN_140e4b060(&local_1a8);
    }
    if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
      dVar12 = *pdVar7;
    }
    else {
      dVar12 = (double)FUN_140e4b060(pdVar7);
    }
    iVar3 = FUN_140e4a740(&local_1d0);
    if (((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 2) && (dVar13 = *pdVar6, dVar13 != 0.0))
    {
      if ((iVar3 < 0) || (*(int *)((longlong)dVar13 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)((longlong)dVar13 + 0x24));
        pdVar6 = (double *)0x0;
      }
      else {
        pdVar6 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar13 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    fVar10 = (float)FUN_140e79010((float)dVar12,(float)dVar11);
    uStack_1ac = *(undefined4 *)((longlong)pdVar6 + 0xc);
    uStack_1b0 = *(undefined4 *)(pdVar6 + 1);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
      local_1b8 = *pdVar6;
    }
    else {
      FUN_1400419b0(&local_1b8,pdVar6);
    }
    local_18c = 0;
    local_198 = (double)fVar10;
    FUN_1400462a0(&local_1b8,&local_198);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_f8 = (undefined4)local_1b8;
    uStack_f4 = local_1b8._4_4_;
    uStack_f0 = uStack_1b0;
    uStack_ec = uStack_1ac;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_f8);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_138 = 0xcd;
    pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f23b8);
    local_dc = 0xf;
    local_e8 = 7.291128972913917e-304;
    dVar11 = local_1a8;
    if ((local_19c & 0xffffff) != 0) {
      dVar11 = (double)FUN_140e4b060(&local_1a8);
    }
    iVar3 = FUN_140e4a740(&local_1d0);
    if (((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 2) && (dVar12 = *pdVar6, dVar12 != 0.0))
    {
      if ((iVar3 < 0) || (*(int *)((longlong)dVar12 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)((longlong)dVar12 + 0x24));
        pdVar5 = (double *)0x0;
      }
      else {
        pdVar5 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar12 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      pdVar5 = pdVar6;
    }
    if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
      dVar12 = *pdVar5;
    }
    else {
      dVar12 = (double)FUN_140e4b060(pdVar5);
    }
    iVar3 = FUN_140e4a740(&local_1d0);
    if (((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 2) && (dVar13 = *pdVar6, dVar13 != 0.0))
    {
      if ((iVar3 < 0) || (*(int *)((longlong)dVar13 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)((longlong)dVar13 + 0x24));
        pdVar6 = (double *)0x0;
      }
      else {
        pdVar6 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar13 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar13 = *pdVar6;
    }
    else {
      dVar13 = (double)FUN_140e4b060(pdVar6);
    }
    dVar14 = local_168;
    if ((local_15c & 0xffffff) != 0) {
      dVar14 = (double)FUN_140e4b060(&local_168);
    }
    dVar15 = local_158;
    if ((local_14c & 0xffffff) != 0) {
      dVar15 = (double)FUN_140e4b060(&local_158);
    }
    dVar16 = local_e8;
    if ((local_dc & 0xffffff) != 0) {
      dVar16 = (double)FUN_140e4b060(&local_e8);
    }
    FUN_140ec5dd0(param_1,(int)dVar16,0,(float)dVar15,(float)dVar14,(float)dVar13,(float)dVar12,
                  (float)dVar11,0xffffff,0x3f800000);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    uVar9 = SUB84(local_1d0,0);
    uVar17 = (undefined4)((ulonglong)local_1d0 >> 0x20);
  } while( true );
}

