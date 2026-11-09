// gml_Script_arm_move_dir @ 0x140226430

undefined8 *
gml_Script_arm_move_dir
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong **pplVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong **pplVar14;
  uint uVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  code *pcVar20;
  ulonglong uVar21;
  longlong ***ppplVar22;
  undefined4 uVar24;
  undefined8 uVar23;
  ulonglong in_stack_fffffffffffffd80;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  uint uStack_26c;
  longlong *local_268;
  undefined4 local_260;
  uint local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  undefined8 local_218;
  char *local_210;
  undefined4 local_208;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  uint local_1e8;
  double local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_18c;
  double local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138 [3];
  undefined4 local_12c;
  longlong **local_128;
  double *local_120;
  double *local_118;
  longlong *local_110;
  longlong *local_108;
  double *local_100;
  longlong *local_f8 [2];
  double local_e8 [4];
  longlong local_c8;
  byte local_bc;
  longlong local_b8;
  byte local_ac;
  
  local_1e8 = 0;
  local_210 = "gml_Script_arm_meeting";
  local_218 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_218;
  local_208 = 3;
  pcVar20 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_f8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_17c = 0xffffff;
  local_188 = 0.0;
  uStack_13c = 0xffffff;
  local_148 = 0.0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0.0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  local_25c = 0xffffff;
  local_268 = (longlong *)0x0;
  uStack_1ac = 0xffffff;
  local_1b8 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = 0.0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  uStack_1ec = 0xffffff;
  local_1f8 = 0;
  local_24c = 0;
  local_258 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_208 = 5;
  if (param_4 < 1) {
    pdVar9 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar9 = (double *)*param_5;
    if (pdVar9 == &local_188) goto LAB_1402265b8;
  }
  local_1d8 = *pdVar9;
  uStack_1d0 = *(undefined4 *)(pdVar9 + 1);
  uStack_1cc = *(undefined4 *)((longlong)pdVar9 + 0xc);
  FUN_140041b80(&local_188,&local_1d8);
LAB_1402265b8:
  uStack_21c = 6;
  in_stack_fffffffffffffd80 = in_stack_fffffffffffffd80 & 0xffffffffffffff00;
  uVar21 = (ulonglong)pcVar20 & 0xffffffffffffff00;
  local_228 = param_1;
  FUN_140e87440(&local_228,DAT_141a0a728,0x80000000,&local_148,uVar21,in_stack_fffffffffffffd80);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_1d8 = local_148;
  uStack_1d0 = uStack_140;
  uStack_1cc = uStack_13c;
  FUN_140041b80(&local_168,&local_1d8);
  uStack_21c = 6;
  ppplVar22 = (longlong ***)(uVar21 & 0xffffffffffffff00);
  local_228 = param_1;
  FUN_140e87440(&local_228,DAT_141a0a778,0x80000000,&local_158,ppplVar22,
                in_stack_fffffffffffffd80 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_1d8 = local_158;
  uStack_1d0 = uStack_150;
  uStack_1cc = uStack_14c;
  FUN_140041b80(&local_178,&local_1d8);
  local_208 = 9;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_25c = 0;
  local_268 = (longlong *)0x0;
  uVar15 = 0;
  bVar2 = true;
LAB_1402266b0:
  do {
    uVar24 = (undefined4)((ulonglong)ppplVar22 >> 0x20);
    if (!bVar2) {
      local_208 = 9;
      uVar4 = local_25c & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_268 = (longlong *)CONCAT44(local_268._4_4_,(int)local_268 + 1);
          }
          else if (uVar4 == 10) {
            local_268 = (longlong *)((longlong)local_268 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_25c = 0;
              goto LAB_140226709;
            }
            FUN_140042910(&DAT_14172c3d8,&local_268,&local_268);
          }
          goto LAB_140226714;
        }
        local_268 = (longlong *)FUN_140e4b060(&local_268);
        local_25c = 0;
      }
LAB_140226709:
      local_268 = (longlong *)((double)local_268 + 1.0);
    }
LAB_140226714:
    bVar2 = false;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    iVar5 = FUN_140e851f0(&local_268,uVar6,DAT_141955260,1);
    if ((iVar5 == -2) || (-1 < iVar5)) {
      local_208 = 0x23;
      local_278 = (undefined4)local_168;
      uStack_274 = local_168._4_4_;
      uStack_270 = uStack_160;
      uStack_26c = uStack_15c;
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_278);
      FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_238);
      local_208 = 0x24;
      local_278 = (undefined4)local_178;
      uStack_274 = local_178._4_4_;
      uStack_270 = uStack_170;
      uStack_26c = uStack_16c;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      FUN_140041b80(&local_248,&local_278);
      FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_248);
      local_208 = 0x25;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      *param_3 = 0xc010000000000000;
      goto LAB_140227443;
    }
    local_208 = 10;
    plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fba8);
    iVar5 = FUN_140e4a740(&local_268);
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar7 != &local_1b8) {
      local_278 = (undefined4)*plVar7;
      uStack_274 = *(undefined4 *)((longlong)plVar7 + 4);
      uStack_270 = (undefined4)plVar7[1];
      uStack_26c = *(undefined4 *)((longlong)plVar7 + 0xc);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_278);
    }
    local_208 = 0xc;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_258 = 0;
    local_250 = 0;
    local_24c = 5;
    local_128 = (longlong **)&local_1b8;
    uVar23 = CONCAT44(uVar24,DAT_141a04628);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_258,1,uVar23,&local_128);
    uVar24 = (undefined4)((ulonglong)uVar23 >> 0x20);
    cVar3 = FUN_140e491e0(uVar6);
    if (cVar3 != '\0') {
      local_208 = 0xd;
      uStack_21c = local_25c;
      uStack_220 = local_260;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) == 0) {
        local_228 = local_268;
      }
      else {
        FUN_1400419b0(&local_228,&local_268);
      }
      local_1e8 = uVar15 | 1;
      local_12c = 7;
      local_138[0] = 1;
      FUN_1400460e0(&local_228,local_138);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      local_278 = (undefined4)local_228;
      uStack_274 = local_228._4_4_;
      uStack_270 = uStack_220;
      uStack_26c = uStack_21c;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_278);
      local_1e8 = uVar15 & 0xfffffffe;
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      pplVar8 = (longlong **)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
      pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
      pdVar11 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
      iVar5 = FUN_140e4a740(&local_198);
      if (((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 2) &&
         (dVar17 = *pdVar11, dVar17 != 0.0)) {
        if ((iVar5 < 0) || (*(int *)((longlong)dVar17 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)((longlong)dVar17 + 0x24));
          pdVar11 = (double *)0x0;
        }
        else {
          pdVar11 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar17 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar11;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar11);
      }
      iVar5 = FUN_140e4a740(&local_198);
      if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) &&
         (dVar18 = *pdVar10, dVar18 != 0.0)) {
        if ((iVar5 < 0) || (*(int *)((longlong)dVar18 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)((longlong)dVar18 + 0x24));
          pdVar10 = (double *)0x0;
        }
        else {
          pdVar10 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar18 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
        dVar18 = *pdVar10;
      }
      else {
        dVar18 = (double)FUN_140e4b060(pdVar10);
      }
      iVar5 = FUN_140e4a740(&local_268);
      if (((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 2) && (dVar19 = *pdVar9, dVar19 != 0.0)
         ) {
        if ((iVar5 < 0) || (*(int *)((longlong)dVar19 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)((longlong)dVar19 + 0x24));
          pdVar10 = (double *)0x0;
        }
        else {
          pdVar10 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar19 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar10 = pdVar9;
      }
      if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
        dVar19 = *pdVar10;
      }
      else {
        dVar19 = (double)FUN_140e4b060(pdVar10);
      }
      iVar5 = FUN_140e4a740(&local_268);
      if (((*(uint *)((longlong)pplVar8 + 0xc) & 0xffffff) == 2) &&
         (plVar7 = *pplVar8, plVar7 != (longlong *)0x0)) {
        if ((iVar5 < 0) || (*(int *)((longlong)plVar7 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)((longlong)plVar7 + 0x24));
          pplVar14 = (longlong **)0x0;
        }
        else {
          pplVar14 = (longlong **)((longlong)iVar5 * 0x10 + plVar7[1]);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pplVar14 = pplVar8;
      }
      if ((*(uint *)((longlong)pplVar14 + 0xc) & 0xffffff) == 0) {
        plVar7 = *pplVar14;
      }
      else {
        plVar7 = (longlong *)FUN_140e4b060(pplVar14);
      }
      fVar16 = (float)FUN_140e793d0((float)(double)plVar7,(float)dVar19,(float)dVar18,(float)dVar17)
      ;
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      uStack_19c = 0;
      local_1a8 = (double)fVar16;
      local_208 = 0x10;
      local_278 = (undefined4)local_1b8;
      uStack_274 = local_1b8._4_4_;
      uStack_270 = uStack_1b0;
      uStack_26c = uStack_1ac;
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_278);
      FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_238);
      local_208 = 0x11;
      local_278 = (undefined4)local_1a8;
      uStack_274 = local_1a8._4_4_;
      uStack_270 = uStack_1a0;
      uStack_26c = uStack_19c;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      FUN_140041b80(&local_248,&local_278);
      FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_248);
      local_208 = 0x13;
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_258 = 0;
      local_250 = 0;
      local_24c = 5;
      iVar5 = FUN_140e4a740(&local_268);
      if (((*(uint *)((longlong)pplVar8 + 0xc) & 0xffffff) == 2) &&
         (plVar7 = *pplVar8, plVar7 != (longlong *)0x0)) {
        if ((iVar5 < 0) || (*(int *)((longlong)plVar7 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)((longlong)plVar7 + 0x24));
          pplVar8 = (longlong **)0x0;
        }
        else {
          pplVar8 = (longlong **)((longlong)iVar5 * 0x10 + plVar7[1]);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (pplVar8 != local_f8) {
        local_278 = *(undefined4 *)pplVar8;
        uStack_274 = *(undefined4 *)((longlong)pplVar8 + 4);
        uStack_270 = *(undefined4 *)(pplVar8 + 1);
        uStack_26c = *(undefined4 *)((longlong)pplVar8 + 0xc);
        if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_278);
      }
      local_128 = local_f8;
      iVar5 = FUN_140e4a740(&local_268);
      if (((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 2) && (dVar17 = *pdVar9, dVar17 != 0.0)
         ) {
        if ((iVar5 < 0) || (*(int *)((longlong)dVar17 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)((longlong)dVar17 + 0x24));
          pdVar9 = (double *)0x0;
        }
        else {
          pdVar9 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar17 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (pdVar9 != local_e8) {
        local_278 = *(undefined4 *)pdVar9;
        uStack_274 = *(undefined4 *)((longlong)pdVar9 + 4);
        uStack_270 = *(undefined4 *)(pdVar9 + 1);
        uStack_26c = *(undefined4 *)((longlong)pdVar9 + 0xc);
        if ((1 << ((byte)local_e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_278);
      }
      local_120 = local_e8;
      local_118 = &local_188;
      ppplVar22 = (longlong ***)CONCAT44(uVar24,DAT_141a12628);
      uVar6 = FUN_140e634e0(param_1,param_2,&local_258,3,ppplVar22,&local_128);
      cVar3 = FUN_140e491e0(uVar6);
      uVar24 = (undefined4)((ulonglong)ppplVar22 >> 0x20);
      if (cVar3 != '\0') {
        local_208 = 0x14;
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = 5;
        plVar12 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
        plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
        iVar5 = FUN_140e4a740(&local_268);
        if (((*(uint *)((longlong)plVar12 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar12, lVar1 != 0)
           ) {
          if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                          *(undefined4 *)(lVar1 + 0x24));
            plVar12 = (longlong *)0x0;
          }
          else {
            plVar12 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        if (plVar12 != &local_c8) {
          local_278 = (undefined4)*plVar12;
          uStack_274 = *(undefined4 *)((longlong)plVar12 + 4);
          uStack_270 = (undefined4)plVar12[1];
          uStack_26c = *(undefined4 *)((longlong)plVar12 + 0xc);
          if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c8);
          }
          FUN_140041b80(&local_c8,&local_278);
        }
        local_110 = &local_c8;
        iVar5 = FUN_140e4a740(&local_268);
        if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0))
        {
          if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                          *(undefined4 *)(lVar1 + 0x24));
            plVar7 = (longlong *)0x0;
          }
          else {
            plVar7 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        if (plVar7 != &local_b8) {
          local_278 = (undefined4)*plVar7;
          uStack_274 = *(undefined4 *)((longlong)plVar7 + 4);
          uStack_270 = (undefined4)plVar7[1];
          uStack_26c = *(undefined4 *)((longlong)plVar7 + 0xc);
          if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_b8);
          }
          FUN_140041b80(&local_b8,&local_278);
        }
        local_108 = &local_b8;
        local_100 = &local_188;
        puVar13 = (undefined8 *)
                  FUN_140e634e0(param_1,param_2,&local_1c8,3,CONCAT44(uVar24,DAT_141a124c8),
                                &local_110);
        if (puVar13 != &local_1f8) {
          local_278 = *(undefined4 *)puVar13;
          uStack_274 = *(undefined4 *)((longlong)puVar13 + 4);
          uStack_270 = *(undefined4 *)(puVar13 + 1);
          uStack_26c = *(undefined4 *)((longlong)puVar13 + 0xc);
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          FUN_140041b80(&local_1f8,&local_278);
        }
        local_208 = 0x15;
        local_278 = (undefined4)local_168;
        uStack_274 = local_168._4_4_;
        uStack_270 = uStack_160;
        uStack_26c = uStack_15c;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        FUN_140041b80(&local_238,&local_278);
        FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_238);
        local_208 = 0x16;
        local_278 = (undefined4)local_178;
        uStack_274 = local_178._4_4_;
        uStack_270 = uStack_170;
        uStack_26c = uStack_16c;
        if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        FUN_140041b80(&local_248,&local_278);
        FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_248);
        local_208 = 0x17;
        if (&local_1f8 != param_3) {
          local_278 = (undefined4)local_1f8;
          uStack_274 = local_1f8._4_4_;
          uStack_270 = uStack_1f0;
          uStack_26c = uStack_1ec;
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          FUN_140041b80(param_3,&local_278);
        }
        goto LAB_140227443;
      }
      uVar15 = local_1e8;
      bVar2 = false;
      goto LAB_1402266b0;
    }
    local_208 = 0x1a;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_258 = 0;
    local_250 = 0;
    local_24c = 5;
    local_128 = &local_268;
    local_120 = &local_188;
    ppplVar22 = &local_128;
    puVar13 = (undefined8 *)gml_Script_seg_meeting_mask(param_1,param_2,&local_258,2,ppplVar22);
    if (puVar13 != &local_1f8) {
      local_278 = *(undefined4 *)puVar13;
      uStack_274 = *(undefined4 *)((longlong)puVar13 + 4);
      uStack_270 = *(undefined4 *)(puVar13 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar13 + 0xc);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140041b80(&local_1f8,&local_278);
    }
    local_208 = 0x1b;
    uStack_1cc = 0;
    local_1d8 = 0.0;
    uVar4 = FUN_140e851f0(&local_1f8,&local_1d8,DAT_141955260,1);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if (uVar4 < 0x80000000) {
      local_208 = 0x1c;
      local_278 = (undefined4)local_168;
      uStack_274 = local_168._4_4_;
      uStack_270 = uStack_160;
      uStack_26c = uStack_15c;
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_278);
      FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_238);
      local_208 = 0x1d;
      local_278 = (undefined4)local_178;
      uStack_274 = local_178._4_4_;
      uStack_270 = uStack_170;
      uStack_26c = uStack_16c;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      FUN_140041b80(&local_248,&local_278);
      FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_248);
      local_208 = 0x1e;
      if (&local_1f8 != param_3) {
        local_278 = (undefined4)local_1f8;
        uStack_274 = local_1f8._4_4_;
        uStack_270 = uStack_1f0;
        uStack_26c = uStack_1ec;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_278);
      }
LAB_140227443:
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      _eh_vector_destructor_iterator_(local_f8,0x10,6,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_218;
      return param_3;
    }
  } while( true );
}

