// gml_Object_oRogueLevelManager_Other_13 @ 0x140d1d1f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oRogueLevelManager_Other_13(longlong *param_1,double **param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double *pdVar9;
  longlong *plVar10;
  double dVar11;
  longlong *plVar12;
  longlong **pplVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auVar16 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar17 [16];
  longlong *local_res8;
  double **local_res10;
  uint local_res18;
  ulonglong uVar21;
  ulonglong uVar22;
  double **ppdVar23;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  longlong *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  double local_298;
  uint local_28c;
  longlong *local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  char *local_260;
  undefined4 local_258;
  double local_250;
  undefined4 local_244;
  double local_240;
  undefined4 local_234;
  undefined8 local_230;
  uint local_224;
  ulonglong local_220;
  uint local_214;
  double local_210;
  undefined4 local_204;
  double *local_200;
  double *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  double local_1e0;
  undefined4 local_1d4;
  double local_1d0;
  undefined4 local_1c4;
  double local_1c0;
  undefined4 local_1b4;
  longlong *local_1a8;
  longlong *plStack_1a0;
  longlong *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  longlong *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  uint local_14c;
  undefined8 local_148;
  uint local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  longlong *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  undefined4 local_ec;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  byte local_bc;
  double local_b8 [6];
  undefined1 local_88 [16];
  longlong local_78;
  
  local_res18 = 0;
  local_260 = "gml_Script_anon@22602@gml_Object_oRogueLevelManager_Other_12";
  local_268 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_268;
  local_258 = 0x2ef;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_214 = 0xffffff;
  local_220 = 0;
  local_224 = 0xffffff;
  local_230 = 0;
  local_204 = 0xffffff;
  local_210 = 0.0;
  local_28c = 0xffffff;
  local_298 = 0.0;
  local_234 = 0xffffff;
  local_240 = 0.0;
  uStack_cc = 0xffffff;
  local_d8 = (longlong *)0x0;
  uStack_dc = 0xffffff;
  local_e8 = (longlong *)0x0;
  local_1b4 = 0xffffff;
  local_1c0 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_1c4 = 0xffffff;
  local_1d0 = 0.0;
  local_244 = 0xffffff;
  local_250 = 0.0;
  uStack_fc = 0xffffff;
  local_108 = (longlong *)0x0;
  local_17c = 0xffffff;
  local_188 = (longlong *)0x0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_18c = 0xffffff;
  local_198 = (longlong *)0x0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_1d4 = 0xffffff;
  local_1e0 = 0.0;
  local_2ac = 0;
  local_2b8 = 0;
  local_26c = 0;
  local_278 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_258 = 0x2f0;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b10);
  uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5eb8);
  FUN_140e87170(uVar8,DAT_1419fe0e8,0x80000000,&local_220,local_res8,local_res10);
  plVar12 = local_res8;
  ppdVar23 = local_res10;
  FUN_140e87170(uVar8,DAT_1419fe158,0x80000000,&local_230,local_res8,local_res10);
  if ((local_224 & 0xffffff) == 0) {
    uVar6 = (undefined4)local_230;
    uVar18 = (undefined4)((ulonglong)local_230 >> 0x20);
  }
  else {
    uVar8 = FUN_140e4b060(&local_230);
    uVar6 = (undefined4)uVar8;
    uVar18 = (undefined4)((ulonglong)uVar8 >> 0x20);
  }
  if ((local_214 & 0xffffff) == 0) {
    uVar14 = (undefined4)local_220;
    uVar19 = (undefined4)(local_220 >> 0x20);
  }
  else {
    uVar8 = FUN_140e4b060(&local_220);
    uVar14 = (undefined4)uVar8;
    uVar19 = (undefined4)((ulonglong)uVar8 >> 0x20);
  }
  uVar3 = FUN_140e4a740(uVar7);
  pdVar9 = (double *)
           FUN_140ea8b20(&local_2b8,uVar3,(longlong)(double)CONCAT44(uVar19,uVar14),
                         (longlong)(double)CONCAT44(uVar18,uVar6));
  if (pdVar9 != &local_210) {
    local_288 = (longlong *)*pdVar9;
    uStack_280 = (longlong *)pdVar9[1];
    if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_210);
    }
    FUN_140041b80(&local_210,&local_288);
  }
  local_258 = 0x2f2;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_28c = 0;
  local_298 = 0.0;
  bVar1 = true;
  do {
    do {
      if (!bVar1) {
        local_258 = 0x2f2;
        uVar4 = local_28c & 0xffffff;
        if (uVar4 != 0) {
          if (uVar4 != 1) {
            if (uVar4 == 7) {
              local_298 = (double)CONCAT44(local_298._4_4_,local_298._0_4_ + 1);
            }
            else if (uVar4 == 10) {
              local_298 = (double)((longlong)local_298 + 1);
            }
            else {
              if (uVar4 == 0xd) {
                local_28c = 0;
                goto LAB_140d1d59a;
              }
              FUN_140042910(&DAT_14172c3d8,&local_298,&local_298);
            }
            goto LAB_140d1d5a4;
          }
          local_298 = (double)FUN_140e4b060(&local_298);
          local_28c = 0;
        }
LAB_140d1d59a:
        local_298 = local_298 + 1.0;
      }
LAB_140d1d5a4:
      bVar1 = false;
      plVar10 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fa898);
      iVar5 = 0;
      if ((*(int *)((longlong)plVar10 + 0xc) == 2) && (*plVar10 != 0)) {
        iVar5 = *(int *)(*plVar10 + 0x24);
      }
      uStack_29c = 0;
      local_2a8 = (longlong *)(double)iVar5;
      iVar5 = FUN_140e851f0(&local_298,&local_2a8,DAT_141955260,1);
      if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      if (iVar5 == -2 || -1 < iVar5) {
        local_258 = 0x2f8;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a09328);
        uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5eb8);
        FUN_140e87170(uVar8,DAT_1419fe0e8,0x80000000,&local_220,local_res8,local_res10);
        FUN_140e87170(uVar8,DAT_1419fe158,0x80000000,&local_230,local_res8,local_res10);
        FUN_140e87170(uVar7,DAT_1419fe0e8,0x80000000,&local_148,local_res8,local_res10);
        plVar12 = local_res8;
        ppdVar23 = local_res10;
        FUN_140e87170(uVar7,DAT_1419fe158,0x80000000,&local_158,local_res8,local_res10);
        if ((local_14c & 0xffffff) == 0) {
          uVar6 = (undefined4)local_158;
          uVar18 = (undefined4)((ulonglong)local_158 >> 0x20);
        }
        else {
          uVar7 = FUN_140e4b060(&local_158);
          uVar6 = (undefined4)uVar7;
          uVar18 = (undefined4)((ulonglong)uVar7 >> 0x20);
        }
        if ((local_13c & 0xffffff) == 0) {
          uVar14 = (undefined4)local_148;
          uVar19 = (undefined4)((ulonglong)local_148 >> 0x20);
        }
        else {
          uVar7 = FUN_140e4b060(&local_148);
          uVar14 = (undefined4)uVar7;
          uVar19 = (undefined4)((ulonglong)uVar7 >> 0x20);
        }
        if ((local_224 & 0xffffff) == 0) {
          uVar3 = (undefined4)local_230;
          uVar20 = (undefined4)((ulonglong)local_230 >> 0x20);
        }
        else {
          uVar7 = FUN_140e4b060(&local_230);
          uVar3 = (undefined4)uVar7;
          uVar20 = (undefined4)((ulonglong)uVar7 >> 0x20);
        }
        if ((local_214 & 0xffffff) == 0) {
          auVar16._8_8_ = 0;
          auVar16._0_8_ = local_220;
        }
        else {
          auVar16._0_8_ = FUN_140e4b060(&local_220);
          auVar16._8_8_ = extraout_XMM0_Qb;
        }
        auVar17._4_12_ = auVar16._4_12_;
        auVar17._0_4_ = (float)auVar16._0_8_;
        fVar15 = (float)FUN_140e793d0(auVar17._0_8_,(float)(double)CONCAT44(uVar20,uVar3),
                                      (float)(double)CONCAT44(uVar19,uVar14),
                                      (float)(double)CONCAT44(uVar18,uVar6));
        if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d0);
        }
        local_1c4 = 0;
        local_1d0 = (double)fVar15;
        local_258 = 0x2f9;
        if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_250);
        }
        local_244 = 0;
        local_250 = -4.0;
        local_258 = 0x2fa;
        uStack_29c = 0xf;
        local_2a8 = (longlong *)0x100000000000104;
        iVar5 = FUN_140e63cb0(local_88,&local_res8,&local_res10,&local_2a8);
        if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        if (0 < iVar5) {
          do {
            local_258 = 0x2fb;
            uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a01248);
            iVar5 = FUN_140e851f0(&local_1d0,uVar7,DAT_141955260,0);
            if (iVar5 == 0) {
              local_258 = 0x2fc;
              uStack_29c = 6;
              local_2a8 = local_res8;
              ppdVar23 = (double **)((ulonglong)ppdVar23 & 0xffffffffffffff00);
              plVar12 = (longlong *)((ulonglong)plVar12 & 0xffffffffffffff00);
              FUN_140e87440(&local_2a8,DAT_141a0a828,0x80000000,&local_108,plVar12,ppdVar23);
              if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2a8);
              }
              uStack_280 = (longlong *)CONCAT44(uStack_fc,uStack_100);
              local_288 = local_108;
              if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_250);
              }
              FUN_140041b80(&local_250,&local_288);
            }
            else {
              local_258 = 0x2fb;
            }
            cVar2 = FUN_140e643f0(local_88,&local_res8,&local_res10);
          } while (cVar2 != '\0');
        }
        FUN_140e63970(local_88,&local_res8,&local_res10);
        local_258 = 0x2ff;
        if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        local_2b8 = 0;
        local_2b0 = 0;
        local_2ac = 5;
        plVar12 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fa858);
        local_200 = &local_1d0;
        local_1f8 = &local_250;
        ppdVar23 = &local_200;
        FUN_140e63610(local_res8,local_res10,&local_2b8,2,plVar12,ppdVar23);
        local_258 = 0x301;
        uStack_29c = 0;
        local_2a8 = (longlong *)0xc010000000000000;
        iVar5 = FUN_140e851f0(&local_250,&local_2a8,DAT_141955260,0);
        if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        if (iVar5 == 0) {
          FUN_140e85f80(local_res8,DAT_141a00d18,0x80000000,&local_118);
          FUN_140081e90(&local_288,&local_118,0x4000000000000000);
          pplVar13 = &local_288;
          uVar4 = 0x22;
        }
        else {
          plVar12 = local_res8;
          ppdVar23 = local_res10;
          FUN_140e87170(&local_250,DAT_1419fe0e8,0x80000000,&local_188,local_res8,local_res10);
          uStack_29c = local_17c;
          uStack_2a0 = local_180;
          if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
            local_2a8 = local_188;
          }
          else {
            FUN_1400419b0(&local_2a8,&local_188);
          }
          pplVar13 = &local_2a8;
          uVar4 = 0x11;
        }
        local_1a8 = *pplVar13;
        plStack_1a0 = pplVar13[1];
        local_res18 = uVar4;
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_1a8);
        if ((uVar4 & 2) != 0) {
          uVar4 = uVar4 & 0xfffffffd;
          local_res18 = uVar4;
          if ((1 << ((byte)((ulonglong)uStack_280 >> 0x20) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
        }
        if ((uVar4 & 1) != 0) {
          uVar4 = uVar4 & 0xfffffffe;
          local_res18 = uVar4;
          if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
        }
        local_258 = 0x302;
        uStack_29c = 0;
        local_2a8 = (longlong *)0xc010000000000000;
        iVar5 = FUN_140e851f0(&local_250,&local_2a8,DAT_141955260,0);
        if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        if (iVar5 == 0) {
          FUN_140e85f80(local_res8,DAT_141a00c48,0x80000000,&local_128);
          FUN_140081e90(&local_288,&local_128,0x4000000000000000);
          pplVar13 = &local_288;
          uVar4 = uVar4 | 0x88;
        }
        else {
          plVar12 = local_res8;
          ppdVar23 = local_res10;
          FUN_140e87170(&local_250,DAT_1419fe158,0x80000000,&local_198,local_res8,local_res10);
          uStack_29c = local_18c;
          uStack_2a0 = local_190;
          if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
            local_2a8 = local_198;
          }
          else {
            FUN_1400419b0(&local_2a8,&local_198);
          }
          pplVar13 = &local_2a8;
          uVar4 = uVar4 | 0x44;
        }
        local_1a8 = *pplVar13;
        plStack_1a0 = pplVar13[1];
        local_res18 = uVar4;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        FUN_140041b80(&local_178,&local_1a8);
        if ((uVar4 & 8) != 0) {
          uVar4 = uVar4 & 0xfffffff7;
          local_res18 = uVar4;
          if ((1 << ((byte)((ulonglong)uStack_280 >> 0x20) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
        }
        if (((uVar4 & 4) != 0) && ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_2a8);
        }
        local_258 = 0x304;
        uVar21 = (ulonglong)plVar12 & 0xffffffffffffff00;
        FUN_140e87440(&local_210,DAT_1419f6118,0x80000000,&local_138,uVar21,
                      (ulonglong)ppdVar23 & 0xffffffffffffff00);
        uVar6 = (undefined4)(uVar21 >> 0x20);
        cVar2 = FUN_140e491e0(&local_138);
        if (cVar2 == '\0') {
          if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          local_2b8 = 0;
          local_2b0 = 0;
          local_2ac = 5;
          uStack_280 = (longlong *)CONCAT44(0xf,(undefined4)uStack_280);
          local_288 = (longlong *)0x100000000000063;
          local_1a8 = (longlong *)0x100000000000063;
          plStack_1a0 = uStack_280;
          if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c8);
          }
          FUN_140041b80(&local_c8,&local_1a8);
          local_200 = &local_c8;
          uVar7 = FUN_140e634e0(local_res8,local_res10,&local_2b8,1,CONCAT44(uVar6,DAT_141a02ef8),
                                &local_200);
          cVar2 = FUN_140e491e0(uVar7);
          if (cVar2 != '\0') {
            local_258 = 0x305;
            if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_278);
            }
            local_278 = 0;
            local_270 = 0;
            local_26c = 5;
            uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fa758);
            local_1f8 = &local_210;
            local_1f0 = &local_168;
            local_1e8 = &local_178;
            FUN_140e63610(local_res8,local_res10,&local_278,3,uVar7,&local_1f8);
          }
        }
        local_258 = 0x307;
        if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        local_2b8 = 0;
        local_2b0 = 0;
        local_2ac = 5;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fa6b8);
        FUN_140e63610(local_res8,local_res10,&local_2b8,0,uVar7,0);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_258 = 0x309;
        if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        local_2b8 = 0;
        local_2b0 = 0;
        local_2ac = 5;
        local_1a8 = _DAT_141ddb088;
        plStack_1a0 = (longlong *)dRam0000000141ddb090;
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_1a8);
        local_200 = &local_c8;
        uVar7 = CONCAT44(uVar6,DAT_141a1c640);
        pdVar9 = (double *)FUN_140e634e0(local_res8,local_res10,&local_2b8,1,uVar7,&local_200);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        if (pdVar9 != &local_1e0) {
          local_1a8 = (longlong *)*pdVar9;
          plStack_1a0 = (longlong *)pdVar9[1];
          if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e0);
          }
          FUN_140041b80(&local_1e0,&local_1a8);
        }
        local_258 = 0x30a;
        if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        local_2b8 = 0;
        local_2b0 = 0;
        local_2ac = 5;
        local_200 = &local_1e0;
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_2b8,1,CONCAT44(uVar6,DAT_141a1c670),
                              &local_200);
        cVar2 = FUN_140e491e0(uVar7);
        if (cVar2 != '\0') {
          local_258 = 0x30c;
          if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_278);
          }
          local_278 = 0;
          local_270 = 0;
          local_26c = 5;
          gml_Script_pal_swap_set_layer(local_res8,local_res10,&local_278,0,0);
          local_258 = 0x30d;
          if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          local_2b8 = 0;
          local_2b0 = 0;
          local_2ac = 5;
          local_200 = &local_1e0;
          gml_Script_screenFlash(local_res8,local_res10,&local_2b8,1,&local_200);
        }
        if (local_78 != 0) {
          FUN_140e4cd60();
          local_78 = 0;
        }
        if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e0);
        }
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_250);
        }
        if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d0);
        }
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c0);
        }
        if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_240);
        }
        if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_210);
        }
        if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_230);
        }
        if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_220);
        }
        _eh_vector_destructor_iterator_(&local_c8,0x10,4,FUN_140041b30);
        DAT_141dc7a50 = (undefined8 *)local_268;
        return param_3;
      }
      local_258 = 0x2f3;
      pdVar9 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fa898);
      iVar5 = FUN_140e4a740(&local_298);
      if (((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 2) && (dVar11 = *pdVar9, dVar11 != 0.0)
         ) {
        if ((iVar5 < 0) || (*(int *)((longlong)dVar11 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)((longlong)dVar11 + 0x24));
          pdVar9 = (double *)0x0;
        }
        else {
          pdVar9 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar11 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (pdVar9 != &local_240) {
        local_288 = (longlong *)*pdVar9;
        uStack_280 = (longlong *)pdVar9[1];
        if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_240);
        }
        FUN_140041b80(&local_240,&local_288);
      }
      local_258 = 0x2f4;
      if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      local_2b8 = 0;
      local_2b0 = 0;
      local_2ac = 5;
      uVar22 = (ulonglong)ppdVar23 & 0xffffffffffffff00;
      uVar21 = (ulonglong)plVar12 & 0xffffffffffffff00;
      FUN_140e87440(&local_210,DAT_141a57c20,0x80000000,&local_d8,uVar21,uVar22);
      uVar21 = uVar21 & 0xffffffffffffff00;
      FUN_140e87440(&local_240,DAT_141a0a8a8,0x80000000,&local_e8,uVar21,uVar22 & 0xffffffffffffff00
                   );
      uVar6 = (undefined4)(uVar21 >> 0x20);
      uStack_280 = (longlong *)CONCAT44(uStack_cc,uStack_d0);
      local_288 = local_d8;
      if ((1 << ((byte)_local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_288);
      local_200 = &local_c8;
      uStack_280 = (longlong *)CONCAT44(uStack_dc,uStack_e0);
      local_288 = local_e8;
      if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_288);
      local_1f8 = local_b8;
      uVar7 = CONCAT44(uVar6,DAT_141a01138);
      pdVar9 = (double *)FUN_140e634e0(local_res8,local_res10,&local_2b8,2,uVar7,&local_200);
      uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
      if (pdVar9 != &local_1c0) {
        local_288 = (longlong *)*pdVar9;
        uStack_280 = (longlong *)pdVar9[1];
        if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c0);
        }
        FUN_140041b80(&local_1c0,&local_288);
      }
      local_258 = 0x2f5;
      if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      local_2b8 = 0;
      local_2b0 = 0;
      local_2ac = 5;
      local_200 = &local_1c0;
      ppdVar23 = &local_200;
      plVar12 = (longlong *)CONCAT44(uVar6,DAT_1419fdc08);
      uVar7 = FUN_140e634e0(local_res8,local_res10,&local_2b8,1,plVar12,ppdVar23);
      cVar2 = FUN_140e491e0(uVar7);
    } while (cVar2 != '\0');
    local_258 = 0x2f5;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
    FUN_140e87440(&local_240,DAT_1419fa808,0x80000000,&local_f8,
                  (ulonglong)plVar12 & 0xffffffffffffff00,(ulonglong)ppdVar23 & 0xffffffffffffff00);
    local_1f8 = &local_1c0;
    switch(local_234) {
    default:
switchD_140d1d95e_caseD_1:
      dVar11 = 0.0;
      break;
    case 6:
      dVar11 = local_240;
      break;
    case 0xf:
      iVar5 = (int)((ulonglong)local_240 >> 0x20);
      if ((iVar5 != 0x1000000) && (iVar5 != 0x4000001)) goto switchD_140d1d95e_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar6 = FUN_140e4a8b0(&local_240);
      dVar11 = (double)FUN_140e87250(uVar6);
    }
    ppdVar23 = &local_1f8;
    plVar12 = &local_f8;
    FUN_140e63610(dVar11,local_res10,&local_278,1,plVar12,ppdVar23);
  } while( true );
}

