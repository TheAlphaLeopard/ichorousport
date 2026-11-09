// gml_Script_arm_fix @ 0x140220860

undefined8 * gml_Script_arm_fix(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  code *pcVar25;
  undefined4 uVar27;
  ulonglong uVar26;
  longlong **pplVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  double local_300;
  undefined4 local_2f8;
  uint local_2f4;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  double local_2e0;
  undefined4 local_2d8;
  uint local_2d4;
  double local_2d0;
  undefined4 local_2c8;
  uint local_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  double local_2b0;
  undefined4 local_2a8;
  uint local_2a4;
  double local_2a0;
  undefined4 local_294;
  double local_290;
  undefined4 local_288;
  uint local_284;
  double local_280;
  undefined4 local_278;
  uint local_274;
  double local_270;
  undefined4 local_268;
  uint local_264;
  double local_260;
  undefined4 local_258;
  uint local_254;
  double local_250;
  uint local_244;
  double local_240;
  uint local_234;
  double local_230;
  uint local_224;
  double local_220;
  uint local_214;
  undefined8 local_210;
  char *local_208;
  undefined4 local_200;
  longlong local_1f8 [2];
  longlong local_1e8 [2];
  longlong local_1d8 [2];
  longlong local_1c8 [2];
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined4 local_1a8 [3];
  undefined4 local_19c;
  longlong *local_198;
  undefined4 local_18c;
  longlong *local_188;
  undefined4 local_17c;
  longlong *local_178;
  undefined4 local_16c;
  longlong *local_168;
  undefined4 local_15c;
  longlong *local_158;
  undefined4 local_14c;
  longlong *local_148;
  undefined4 local_13c;
  undefined4 local_138 [3];
  undefined4 local_12c;
  undefined4 local_128 [3];
  undefined4 local_11c;
  undefined4 local_118 [3];
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined4 local_f8 [3];
  undefined4 local_ec;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  
  local_208 = "gml_Script_arm_draw";
  local_210 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_210;
  local_200 = 3;
  pcVar25 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_1f8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_294 = 0xffffff;
  local_2a0 = 0.0;
  local_214 = 0xffffff;
  local_220 = 0.0;
  local_224 = 0xffffff;
  local_230 = 0.0;
  local_234 = 0xffffff;
  local_240 = 0.0;
  local_2a4 = 0xffffff;
  local_2b0 = 0.0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_244 = 0xffffff;
  local_250 = 0.0;
  local_2e4 = 0;
  local_2f0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_200 = 5;
  local_2f4 = 0;
  local_300 = 0.0;
  bVar2 = true;
LAB_1402209b6:
  do {
    if (!bVar2) {
      local_200 = 5;
      uVar4 = local_2f4 & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_300 = (double)CONCAT44(local_300._4_4_,local_300._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_300 = (double)((longlong)local_300 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_2f4 = 0;
              goto LAB_140220a0f;
            }
            FUN_140042910(&DAT_14172c3d8,&local_300,&local_300);
          }
          goto LAB_140220a1a;
        }
        local_300 = (double)FUN_140e4b060(&local_300);
        local_2f4 = 0;
      }
LAB_140220a0f:
      local_300 = local_300 + 1.0;
    }
LAB_140220a1a:
    bVar2 = false;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    iVar5 = FUN_140e851f0(&local_300,uVar7,DAT_141955260,1);
    if ((iVar5 == -2) || (-1 < iVar5)) {
      if ((1 << ((byte)local_2e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f0);
      }
      if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_250);
      }
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b0);
      }
      if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_240);
      }
      if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_230);
      }
      if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_220);
      }
      if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a0);
      }
      if ((1 << ((byte)local_2f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_300);
      }
      _eh_vector_destructor_iterator_(local_1f8,0x10,4,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_210;
      return param_3;
    }
    local_200 = 7;
    plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fba8);
    iVar5 = FUN_140e4a740(&local_300);
    if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    local_fc = 0;
    local_108 = 0;
    uVar4 = FUN_140e851f0(plVar8,&local_108,DAT_141955260,1);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    uVar27 = (undefined4)((ulonglong)pcVar25 >> 0x20);
    if (0x7fffffff < uVar4) {
LAB_1402215c8:
      uVar27 = (undefined4)((ulonglong)pcVar25 >> 0x20);
      local_200 = 0x10;
      if ((1 << ((byte)local_2e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f0);
      }
      local_2f0 = 0;
      local_2e8 = 0;
      local_2e4 = 5;
      plVar13 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
      plVar14 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
      plVar15 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
      plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
      iVar5 = FUN_140e4a740(&local_300);
      if (((*(uint *)((longlong)plVar13 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar13, lVar1 != 0))
      {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar13 = (longlong *)0x0;
        }
        else {
          plVar13 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar13 != local_1f8) {
        local_2c0 = (undefined4)*plVar13;
        uStack_2bc = *(undefined4 *)((longlong)plVar13 + 4);
        uStack_2b8 = (undefined4)plVar13[1];
        uStack_2b4 = *(undefined4 *)((longlong)plVar13 + 0xc);
        if ((1 << ((byte)local_1f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1f8);
        }
        FUN_140041b80(local_1f8,&local_2c0);
      }
      local_e8 = local_1f8;
      iVar5 = FUN_140e4a740(&local_300);
      if (((*(uint *)((longlong)plVar14 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar14, lVar1 != 0))
      {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar14 = (longlong *)0x0;
        }
        else {
          plVar14 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar14 != local_1e8) {
        local_2c0 = (undefined4)*plVar14;
        uStack_2bc = *(undefined4 *)((longlong)plVar14 + 4);
        uStack_2b8 = (undefined4)plVar14[1];
        uStack_2b4 = *(undefined4 *)((longlong)plVar14 + 0xc);
        if ((1 << ((byte)local_1e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_2c0);
      }
      local_e0 = local_1e8;
      local_264 = local_2f4;
      local_268 = local_2f8;
      if ((1 << ((byte)local_2f4 & 0x1f) & 0x46U) == 0) {
        local_270 = local_300;
      }
      else {
        FUN_1400419b0(&local_270,&local_300);
      }
      local_11c = 7;
      local_128[0] = 1;
      FUN_1400460e0(&local_270,local_128);
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      iVar5 = FUN_140e4a740(&local_270);
      if (((*(uint *)((longlong)plVar15 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar15, lVar1 != 0))
      {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar15 = (longlong *)0x0;
        }
        else {
          plVar15 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar15 != local_1d8) {
        local_2c0 = (undefined4)*plVar15;
        uStack_2bc = *(undefined4 *)((longlong)plVar15 + 4);
        uStack_2b8 = (undefined4)plVar15[1];
        uStack_2b4 = *(undefined4 *)((longlong)plVar15 + 0xc);
        if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1d8);
        }
        FUN_140041b80(local_1d8,&local_2c0);
      }
      if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_270);
      }
      local_d8 = local_1d8;
      local_254 = local_2f4;
      local_258 = local_2f8;
      if ((1 << ((byte)local_2f4 & 0x1f) & 0x46U) == 0) {
        local_260 = local_300;
      }
      else {
        FUN_1400419b0(&local_260,&local_300);
      }
      local_10c = 7;
      local_118[0] = 1;
      FUN_1400460e0(&local_260,local_118);
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      iVar5 = FUN_140e4a740(&local_260);
      if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar8 != local_1c8) {
        local_2c0 = (undefined4)*plVar8;
        uStack_2bc = *(undefined4 *)((longlong)plVar8 + 4);
        uStack_2b8 = (undefined4)plVar8[1];
        uStack_2b4 = *(undefined4 *)((longlong)plVar8 + 0xc);
        if ((1 << ((byte)local_1c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1c8);
        }
        FUN_140041b80(local_1c8,&local_2c0);
      }
      if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_260);
      }
      local_d0 = local_1c8;
      pcVar25 = (code *)CONCAT44(uVar27,DAT_141a0faa8);
      FUN_140e634e0(param_1,param_2,&local_2f0,4,pcVar25,&local_e8);
      goto LAB_1402209b6;
    }
    if ((1 << ((byte)local_2e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f0);
    }
    local_2f0 = 0;
    local_2e8 = 0;
    local_2e4 = 5;
    plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fba8);
    iVar5 = FUN_140e4a740(&local_300);
    if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar8 != local_1f8) {
      local_2c0 = (undefined4)*plVar8;
      uStack_2bc = *(undefined4 *)((longlong)plVar8 + 4);
      uStack_2b8 = (undefined4)plVar8[1];
      uStack_2b4 = *(undefined4 *)((longlong)plVar8 + 0xc);
      if ((1 << ((byte)local_1f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1f8);
      }
      FUN_140041b80(local_1f8,&local_2c0);
    }
    local_e8 = local_1f8;
    pplVar28 = &local_e8;
    pcVar25 = (code *)CONCAT44(uVar27,DAT_141a04628);
    uVar7 = FUN_140e634e0(param_1,param_2,&local_2f0,1,pcVar25,pplVar28);
    cVar3 = FUN_140e491e0(uVar7);
    if (cVar3 == '\0') goto LAB_1402215c8;
    local_200 = 9;
    pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    pdVar11 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    pdVar12 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    local_274 = local_2f4;
    local_278 = local_2f8;
    if ((1 << ((byte)local_2f4 & 0x1f) & 0x46U) == 0) {
      local_280 = local_300;
    }
    else {
      FUN_1400419b0(&local_280,&local_300);
    }
    local_ec = 7;
    local_f8[0] = 1;
    FUN_1400460e0(&local_280,local_f8);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    local_284 = local_2f4;
    local_288 = local_2f8;
    if ((1 << ((byte)local_2f4 & 0x1f) & 0x46U) == 0) {
      local_290 = local_300;
    }
    else {
      FUN_1400419b0(&local_290,&local_300);
    }
    local_19c = 7;
    local_1a8[0] = 1;
    FUN_1400460e0(&local_290,local_1a8);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    iVar5 = FUN_140e4a740(&local_280);
    if (((*(uint *)((longlong)pdVar12 + 0xc) & 0xffffff) == 2) && (dVar17 = *pdVar12, dVar17 != 0.0)
       ) {
      if ((iVar5 < 0) || (*(int *)((longlong)dVar17 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)((longlong)dVar17 + 0x24));
        pdVar12 = (double *)0x0;
      }
      else {
        pdVar12 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar17 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if ((*(uint *)((longlong)pdVar12 + 0xc) & 0xffffff) == 0) {
      dVar17 = *pdVar12;
    }
    else {
      dVar17 = (double)FUN_140e4b060(pdVar12);
    }
    iVar5 = FUN_140e4a740(&local_290);
    if (((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 2) && (dVar18 = *pdVar11, dVar18 != 0.0)
       ) {
      if ((iVar5 < 0) || (*(int *)((longlong)dVar18 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)((longlong)dVar18 + 0x24));
        pdVar11 = (double *)0x0;
      }
      else {
        pdVar11 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar18 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
      dVar18 = *pdVar11;
    }
    else {
      dVar18 = (double)FUN_140e4b060(pdVar11);
    }
    iVar5 = FUN_140e4a740(&local_300);
    if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) && (dVar19 = *pdVar10, dVar19 != 0.0)
       ) {
      if ((iVar5 < 0) || (*(int *)((longlong)dVar19 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)((longlong)dVar19 + 0x24));
        pdVar11 = (double *)0x0;
      }
      else {
        pdVar11 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar19 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      pdVar11 = pdVar10;
    }
    if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
      dVar19 = *pdVar11;
    }
    else {
      dVar19 = (double)FUN_140e4b060(pdVar11);
    }
    iVar5 = FUN_140e4a740(&local_300);
    if (((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 2) && (dVar20 = *pdVar9, dVar20 != 0.0))
    {
      if ((iVar5 < 0) || (*(int *)((longlong)dVar20 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)((longlong)dVar20 + 0x24));
        pdVar11 = (double *)0x0;
      }
      else {
        pdVar11 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar20 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      pdVar11 = pdVar9;
    }
    if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
      dVar20 = *pdVar11;
    }
    else {
      dVar20 = (double)FUN_140e4b060(pdVar11);
    }
    fVar16 = (float)FUN_140e793d0((float)dVar20,(float)dVar19,(float)dVar18,(float)dVar17);
    if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a0);
    }
    local_294 = 0;
    local_2a0 = (double)fVar16;
    if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_290);
    }
    if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_280);
    }
    local_200 = 10;
    pdVar11 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fba8);
    local_18c = 6;
    uVar29 = (ulonglong)pplVar28 & 0xffffffffffffff00;
    uVar26 = (ulonglong)pcVar25 & 0xffffffffffffff00;
    local_198 = param_1;
    FUN_140e87440(&local_198,DAT_141a0cfc8,0x80000000,&local_220,uVar26,uVar29);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_17c = 6;
    uVar29 = uVar29 & 0xffffffffffffff00;
    uVar26 = uVar26 & 0xffffffffffffff00;
    local_188 = param_1;
    FUN_140e87440(&local_188,DAT_141a0f7f8,0x80000000,&local_230,uVar26,uVar29);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_16c = 6;
    uVar29 = uVar29 & 0xffffffffffffff00;
    uVar26 = uVar26 & 0xffffffffffffff00;
    local_178 = param_1;
    FUN_140e87440(&local_178,DAT_141a0f938,0x80000000,&local_240,uVar26,uVar29);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_15c = 6;
    uVar29 = uVar29 & 0xffffffffffffff00;
    uVar26 = uVar26 & 0xffffffffffffff00;
    local_168 = param_1;
    FUN_140e87440(&local_168,DAT_141a0a778,0x80000000,&local_2b0,uVar26,uVar29);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_14c = 6;
    uVar29 = uVar29 & 0xffffffffffffff00;
    uVar26 = uVar26 & 0xffffffffffffff00;
    local_158 = param_1;
    FUN_140e87440(&local_158,DAT_141a0f9d8,0x80000000,&local_1b8,uVar26,uVar29);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_13c = 6;
    uVar29 = uVar29 & 0xffffffffffffff00;
    uVar26 = uVar26 & 0xffffffffffffff00;
    local_148 = param_1;
    FUN_140e87440(&local_148,DAT_141a0fbc8,0x80000000,&local_250,uVar26,uVar29);
    uVar27 = (undefined4)(uVar26 >> 0x20);
    uVar30 = (undefined4)(uVar29 >> 0x20);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_2d4 = local_2a4;
    local_2d8 = local_2a8;
    if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) == 0) {
      local_2e0 = local_2b0;
    }
    else {
      FUN_1400419b0(&local_2e0,&local_2b0);
    }
    FUN_1400460e0(&local_2e0,&local_2a0);
    local_2c4 = local_2d4;
    local_2c8 = local_2d8;
    if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) == 0) {
      local_2d0 = local_2e0;
    }
    else {
      FUN_1400419b0(&local_2d0,&local_2e0);
    }
    local_12c = 7;
    local_138[0] = 0x168;
    FUN_140046880(&local_2d0,local_138);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    dVar17 = local_250;
    if ((local_244 & 0xffffff) != 0) {
      dVar17 = (double)FUN_140e4b060(&local_250);
    }
    uVar6 = FUN_140e4a8b0(&local_1b8);
    dVar18 = local_2d0;
    if ((local_2c4 & 0xffffff) != 0) {
      dVar18 = (double)FUN_140e4b060(&local_2d0);
    }
    dVar19 = local_240;
    if ((local_234 & 0xffffff) != 0) {
      dVar19 = (double)FUN_140e4b060(&local_240);
    }
    dVar20 = local_230;
    if ((local_224 & 0xffffff) != 0) {
      dVar20 = (double)FUN_140e4b060(&local_230);
    }
    iVar5 = FUN_140e4a740(&local_300);
    if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) && (dVar21 = *pdVar10, dVar21 != 0.0)
       ) {
      if ((iVar5 < 0) || (*(int *)((longlong)dVar21 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)((longlong)dVar21 + 0x24));
        pdVar10 = (double *)0x0;
      }
      else {
        pdVar10 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar21 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
      dVar21 = *pdVar10;
    }
    else {
      dVar21 = (double)FUN_140e4b060(pdVar10);
    }
    iVar5 = FUN_140e4a740(&local_300);
    if (((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 2) && (dVar22 = *pdVar9, dVar22 != 0.0))
    {
      if ((iVar5 < 0) || (*(int *)((longlong)dVar22 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)((longlong)dVar22 + 0x24));
        pdVar9 = (double *)0x0;
      }
      else {
        pdVar9 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar22 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
      dVar22 = *pdVar9;
    }
    else {
      dVar22 = (double)FUN_140e4b060(pdVar9);
    }
    dVar23 = local_220;
    if ((local_214 & 0xffffff) != 0) {
      dVar23 = (double)FUN_140e4b060(&local_220);
    }
    iVar5 = FUN_140e4a740(&local_300);
    if (((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 2) && (dVar24 = *pdVar11, dVar24 != 0.0)
       ) {
      if ((iVar5 < 0) || (*(int *)((longlong)dVar24 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)((longlong)dVar24 + 0x24));
        pdVar11 = (double *)0x0;
      }
      else {
        pdVar11 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar24 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
      dVar24 = *pdVar11;
    }
    else {
      dVar24 = (double)FUN_140e4b060(pdVar11);
    }
    pcVar25 = (code *)CONCAT44(uVar27,(float)dVar21);
    FUN_140ec5dd0(param_1,(longlong)dVar24,(float)dVar23,(float)dVar22,pcVar25,
                  CONCAT44(uVar30,(float)dVar20),(float)dVar19,(float)dVar18,uVar6,(float)dVar17);
    if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d0);
    }
    if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e0);
    }
  } while( true );
}

