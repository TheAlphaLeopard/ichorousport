// gml_Script_arm_meeting @ 0x1402253c0

undefined8 *
gml_Script_arm_meeting
          (double *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  double **ppdVar7;
  double *pdVar8;
  double *pdVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  double **ppdVar13;
  byte bVar14;
  uint uVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  code *pcVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  ulonglong in_stack_fffffffffffffda0;
  double *local_258;
  undefined4 local_250;
  uint local_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  double *local_238;
  undefined4 uStack_230;
  uint uStack_22c;
  uint local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f4;
  double *local_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  undefined8 local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  double *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  double *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double *local_118 [2];
  double local_108 [4];
  longlong local_e8;
  byte local_dc;
  longlong local_d8;
  byte local_cc;
  double **local_b8;
  double *local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 *local_90;
  
  uVar15 = 0;
  local_228 = 0;
  local_1d0 = "gml_Script_arm_meeting_mask";
  local_1d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1d8;
  local_1c8 = 3;
  pcVar22 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_118,0x10,6,FUN_1400424d0,FUN_140041b30);
  bVar14 = 0xff;
  local_15c = 0xffffff;
  local_168 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_24c = 0xffffff;
  local_258 = (double *)0x0;
  uStack_19c = 0xffffff;
  local_1a8 = (double *)0x0;
  local_17c = 0xffffff;
  local_188 = 0;
  uStack_18c = 0xffffff;
  local_198 = (double *)0x0;
  local_1f4 = 0xffffff;
  local_200 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  local_214 = 0;
  uVar20 = 0;
  uVar21 = 0;
  local_220 = 0;
  local_1b4 = 0;
  local_1c0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1c8 = 5;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_168) goto LAB_140225522;
  }
  local_248 = *(undefined4 *)param_5;
  uStack_244 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_240 = *(undefined4 *)(param_5 + 1);
  uStack_23c = *(undefined4 *)((longlong)param_5 + 0xc);
  FUN_140041b80(&local_168,&local_248);
LAB_140225522:
  uStack_22c = 6;
  in_stack_fffffffffffffda0 = in_stack_fffffffffffffda0 & 0xffffffffffffff00;
  uVar23 = (ulonglong)pcVar22 & 0xffffffffffffff00;
  local_238 = param_1;
  FUN_140e87440(&local_238,DAT_141a0a728,0x80000000,&local_128,uVar23,in_stack_fffffffffffffda0);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_248 = (undefined4)local_128;
  uStack_244 = local_128._4_4_;
  uStack_240 = uStack_120;
  uStack_23c = uStack_11c;
  FUN_140041b80(&local_148,&local_248);
  uStack_22c = 6;
  uVar23 = uVar23 & 0xffffffffffffff00;
  local_238 = param_1;
  FUN_140e87440(&local_238,DAT_141a0a778,0x80000000,&local_138,uVar23,
                in_stack_fffffffffffffda0 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_248 = (undefined4)local_138;
  uStack_244 = local_138._4_4_;
  uStack_240 = uStack_130;
  uStack_23c = uStack_12c;
  FUN_140041b80(&local_158,&local_248);
  local_1c8 = 9;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_24c = 0;
  local_258 = (double *)0x0;
  bVar2 = true;
  do {
    uVar24 = (undefined4)(uVar23 >> 0x20);
    if (!bVar2) {
      local_1c8 = 9;
      uVar4 = local_24c & 0xffffff;
      if (uVar4 == 0) {
LAB_140225672:
        local_258 = (double *)((double)CONCAT44(uVar21,uVar20) + 1.0);
      }
      else if (uVar4 == 1) {
        dVar17 = (double)FUN_140e4b060(&local_258);
        local_258 = (double *)(dVar17 + 1.0);
        local_24c = 0;
      }
      else if (uVar4 == 7) {
        local_258 = (double *)CONCAT44(local_258._4_4_,(int)local_258 + 1);
      }
      else if (uVar4 == 10) {
        local_258 = (double *)((longlong)local_258 + 1);
      }
      else {
        if (uVar4 == 0xd) {
          local_24c = 0;
          goto LAB_140225672;
        }
        FUN_140042910(&DAT_14172c3d8,&local_258,&local_258);
      }
    }
    bVar2 = false;
    uVar6 = (**(code **)((longlong)*param_1 + 8))(param_1,DAT_141a0f148);
    iVar5 = FUN_140e851f0(&local_258,uVar6,DAT_141955260,1);
    if ((iVar5 == -2) || (-1 < iVar5)) {
      local_1c8 = 0x1c;
      local_248 = (undefined4)local_148;
      uStack_244 = local_148._4_4_;
      uStack_240 = uStack_140;
      uStack_23c = uStack_13c;
      if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_200);
      }
      FUN_140041b80(&local_200,&local_248);
      FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_200);
      local_1c8 = 0x1d;
      local_248 = (undefined4)local_158;
      uStack_244 = local_158._4_4_;
      uStack_240 = uStack_150;
      uStack_23c = uStack_14c;
      if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_210);
      }
      FUN_140041b80(&local_210,&local_248);
      FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_210);
      local_1c8 = 0x1e;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      *param_3 = 0xc010000000000000;
      goto LAB_14022617a;
    }
    local_1c8 = 10;
    ppdVar7 = (double **)(**(code **)((longlong)*param_1 + 8))(param_1,DAT_141a0fba8);
    iVar5 = FUN_140e4a740(&local_258);
    if (((*(uint *)((longlong)ppdVar7 + 0xc) & 0xffffff) == 2) &&
       (pdVar8 = *ppdVar7, pdVar8 != (double *)0x0)) {
      if ((iVar5 < 0) || (*(int *)((longlong)pdVar8 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)((longlong)pdVar8 + 0x24));
        ppdVar7 = (double **)0x0;
      }
      else {
        ppdVar7 = (double **)((longlong)iVar5 * 0x10 + (longlong)pdVar8[1]);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (ppdVar7 != &local_1a8) {
      local_1e8 = *ppdVar7;
      uStack_1e0 = *(undefined4 *)(ppdVar7 + 1);
      uStack_1dc = *(undefined4 *)((longlong)ppdVar7 + 0xc);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_1e8);
    }
    local_1c8 = 0xc;
    if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_220);
    }
    local_220 = 0;
    local_218 = 0;
    local_214 = 5;
    local_b8 = &local_1a8;
    uVar23 = CONCAT44(uVar24,DAT_141a04628);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_220,1,uVar23,&local_b8);
    cVar3 = FUN_140e491e0(uVar6);
    uVar20 = (undefined4)(uVar23 >> 0x20);
    if (cVar3 != '\0') {
      local_1c8 = 0xd;
      uStack_22c = local_24c;
      uStack_230 = local_250;
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) == 0) {
        local_238 = local_258;
      }
      else {
        FUN_1400419b0(&local_238,&local_258);
      }
      local_228 = uVar15 | 1;
      uStack_23c = 7;
      local_248 = 1;
      FUN_1400460e0(&local_238,&local_248);
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_1e8 = local_238;
      uStack_1e0 = uStack_230;
      uStack_1dc = uStack_22c;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_1e8);
      local_228 = uVar15 & 0xfffffffe;
      if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      ppdVar7 = (double **)(**(code **)((longlong)*param_1 + 8))(param_1,DAT_141a0fa78);
      local_1e8 = (double *)(**(code **)((longlong)*param_1 + 8))(param_1,DAT_141a0fa28);
      pdVar8 = (double *)(**(code **)((longlong)*param_1 + 8))(param_1,DAT_141a0fa78);
      pdVar9 = (double *)(**(code **)((longlong)*param_1 + 8))(param_1,DAT_141a0fa28);
      iVar5 = FUN_140e4a740(&local_188);
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
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      iVar5 = FUN_140e4a740(&local_188);
      if (((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 2) && (dVar18 = *pdVar8, dVar18 != 0.0)
         ) {
        if ((iVar5 < 0) || (*(int *)((longlong)dVar18 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)((longlong)dVar18 + 0x24));
          pdVar8 = (double *)0x0;
        }
        else {
          pdVar8 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar18 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
        dVar18 = *pdVar8;
      }
      else {
        dVar18 = (double)FUN_140e4b060(pdVar8);
      }
      iVar5 = FUN_140e4a740(&local_258);
      pdVar8 = local_1e8;
      if (((*(uint *)((longlong)local_1e8 + 0xc) & 0xffffff) == 2) &&
         (dVar19 = *local_1e8, dVar19 != 0.0)) {
        if ((iVar5 < 0) || (*(int *)((longlong)dVar19 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)((longlong)dVar19 + 0x24));
          pdVar9 = (double *)0x0;
        }
        else {
          pdVar9 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar19 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar9 = pdVar8;
      }
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar19 = *pdVar9;
      }
      else {
        dVar19 = (double)FUN_140e4b060(pdVar9);
      }
      iVar5 = FUN_140e4a740(&local_258);
      if (((*(uint *)((longlong)ppdVar7 + 0xc) & 0xffffff) == 2) &&
         (pdVar9 = *ppdVar7, pdVar9 != (double *)0x0)) {
        if ((iVar5 < 0) || (*(int *)((longlong)pdVar9 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)((longlong)pdVar9 + 0x24));
          ppdVar13 = (double **)0x0;
        }
        else {
          ppdVar13 = (double **)((longlong)iVar5 * 0x10 + (longlong)pdVar9[1]);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        ppdVar13 = ppdVar7;
      }
      if ((*(uint *)((longlong)ppdVar13 + 0xc) & 0xffffff) == 0) {
        pdVar9 = *ppdVar13;
      }
      else {
        pdVar9 = (double *)FUN_140e4b060(ppdVar13);
      }
      fVar16 = (float)FUN_140e793d0((float)(double)pdVar9,(float)dVar19,(float)dVar18,(float)dVar17)
      ;
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      uStack_18c = 0;
      local_198 = (double *)(double)fVar16;
      local_1c8 = 0x10;
      local_1e8 = local_1a8;
      uStack_1e0 = uStack_1a0;
      uStack_1dc = uStack_19c;
      if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_200);
      }
      FUN_140041b80(&local_200,&local_1e8);
      FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_200);
      local_1c8 = 0x11;
      local_1e8 = local_198;
      uStack_1e0 = uStack_190;
      uStack_1dc = uStack_18c;
      if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_210);
      }
      FUN_140041b80(&local_210,&local_1e8);
      FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_210);
      local_1c8 = 0x13;
      if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_220);
      }
      local_220 = 0;
      local_218 = 0;
      local_214 = 5;
      iVar5 = FUN_140e4a740(&local_258);
      if (((*(uint *)((longlong)ppdVar7 + 0xc) & 0xffffff) == 2) &&
         (pdVar9 = *ppdVar7, pdVar9 != (double *)0x0)) {
        if ((iVar5 < 0) || (*(int *)((longlong)pdVar9 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)((longlong)pdVar9 + 0x24));
          ppdVar7 = (double **)0x0;
        }
        else {
          ppdVar7 = (double **)((longlong)iVar5 * 0x10 + (longlong)pdVar9[1]);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (ppdVar7 != local_118) {
        local_1e8 = *ppdVar7;
        uStack_1e0 = *(undefined4 *)(ppdVar7 + 1);
        uStack_1dc = *(undefined4 *)((longlong)ppdVar7 + 0xc);
        if ((1 << ((byte)local_118[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_1e8);
      }
      local_b8 = local_118;
      iVar5 = FUN_140e4a740(&local_258);
      if (((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 2) && (dVar17 = *pdVar8, dVar17 != 0.0)
         ) {
        if ((iVar5 < 0) || (*(int *)((longlong)dVar17 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)((longlong)dVar17 + 0x24));
          pdVar8 = (double *)0x0;
        }
        else {
          pdVar8 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar17 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (pdVar8 != local_108) {
        local_1e8 = (double *)*pdVar8;
        uStack_1e0 = *(undefined4 *)(pdVar8 + 1);
        uStack_1dc = *(undefined4 *)((longlong)pdVar8 + 0xc);
        if ((1 << ((byte)local_108[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_108);
        }
        FUN_140041b80(local_108,&local_1e8);
      }
      local_b0 = local_108;
      local_a8 = &local_168;
      uVar23 = CONCAT44(uVar20,DAT_141a12628);
      uVar6 = FUN_140e634e0(param_1,param_2,&local_220,3,uVar23,&local_b8);
      cVar3 = FUN_140e491e0(uVar6);
      uVar20 = (undefined4)(uVar23 >> 0x20);
      if (cVar3 != '\0') {
        local_1c8 = 0x14;
        if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c0);
        }
        local_1c0 = 0;
        local_1b8 = 0;
        local_1b4 = 5;
        plVar10 = (longlong *)(**(code **)((longlong)*param_1 + 8))(param_1,DAT_141a0fa78);
        plVar11 = (longlong *)(**(code **)((longlong)*param_1 + 8))(param_1,DAT_141a0fa28);
        iVar5 = FUN_140e4a740(&local_258);
        if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)
           ) {
          if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                          *(undefined4 *)(lVar1 + 0x24));
            plVar10 = (longlong *)0x0;
          }
          else {
            plVar10 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        if (plVar10 != &local_e8) {
          local_248 = (undefined4)*plVar10;
          uStack_244 = *(undefined4 *)((longlong)plVar10 + 4);
          uStack_240 = (undefined4)plVar10[1];
          uStack_23c = *(undefined4 *)((longlong)plVar10 + 0xc);
          if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          FUN_140041b80(&local_e8,&local_248);
        }
        local_a0 = &local_e8;
        iVar5 = FUN_140e4a740(&local_258);
        if (((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar11, lVar1 != 0)
           ) {
          if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                          *(undefined4 *)(lVar1 + 0x24));
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        if (plVar11 != &local_d8) {
          local_248 = (undefined4)*plVar11;
          uStack_244 = *(undefined4 *)((longlong)plVar11 + 4);
          uStack_240 = (undefined4)plVar11[1];
          uStack_23c = *(undefined4 *)((longlong)plVar11 + 0xc);
          if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_d8);
          }
          FUN_140041b80(&local_d8,&local_248);
        }
        local_98 = &local_d8;
        local_90 = &local_168;
        puVar12 = (undefined8 *)
                  FUN_140e634e0(param_1,param_2,&local_1c0,3,CONCAT44(uVar20,DAT_141a124c8),
                                &local_a0);
        uVar20 = 0xffffff;
        if (puVar12 != &local_178) {
          local_248 = *(undefined4 *)puVar12;
          uStack_244 = *(undefined4 *)((longlong)puVar12 + 4);
          uStack_240 = *(undefined4 *)(puVar12 + 1);
          uStack_23c = *(undefined4 *)((longlong)puVar12 + 0xc);
          FUN_140041b80(&local_178,&local_248);
          uVar20 = uStack_16c;
        }
        bVar14 = (byte)uVar20;
        local_1c8 = 0x15;
        local_248 = (undefined4)local_148;
        uStack_244 = local_148._4_4_;
        uStack_240 = uStack_140;
        uStack_23c = uStack_13c;
        if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_200);
        }
        FUN_140041b80(&local_200,&local_248);
        FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_200);
        local_1c8 = 0x16;
        local_248 = (undefined4)local_158;
        uStack_244 = local_158._4_4_;
        uStack_240 = uStack_150;
        uStack_23c = uStack_14c;
        if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_210);
        }
        FUN_140041b80(&local_210,&local_248);
        FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_210);
        local_1c8 = 0x17;
        if (&local_178 != param_3) {
          local_248 = (undefined4)local_178;
          uStack_244 = local_178._4_4_;
          uStack_240 = uStack_170;
          uStack_23c = uStack_16c;
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          FUN_140041b80(param_3,&local_248);
        }
LAB_14022617a:
        if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c0);
        }
        if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_220);
        }
        if ((1 << (bVar14 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_210);
        }
        if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_200);
        }
        if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        _eh_vector_destructor_iterator_(local_118,0x10,6,FUN_140041b30);
        DAT_141dc7a50 = (undefined8 *)local_1d8;
        return param_3;
      }
      uVar15 = local_228;
    }
    uVar20 = SUB84(local_258,0);
    uVar21 = (undefined4)((ulonglong)local_258 >> 0x20);
  } while( true );
}

