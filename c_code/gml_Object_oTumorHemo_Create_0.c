// gml_Object_oTumorHemo_Create_0 @ 0x140de6600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Object_oTumorHemo_Create_0(double **param_1,double **param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  float fVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar17;
  double dVar15;
  double dVar16;
  double **local_res8;
  double **local_res10;
  undefined8 *local_res18;
  double **ppdVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  double **ppdVar21;
  undefined8 local_310;
  undefined4 local_308;
  undefined4 local_304;
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  double local_2e8;
  undefined4 local_2e0;
  uint local_2dc;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  uint uStack_2cc;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  double local_2b8;
  undefined4 local_2b0;
  uint local_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  uint uStack_29c;
  double local_298;
  uint local_28c;
  double local_288;
  uint local_27c;
  double local_278;
  undefined4 local_270;
  uint local_26c;
  double local_268;
  undefined4 local_260;
  uint local_25c;
  undefined8 local_258;
  char *local_250;
  undefined4 local_248;
  undefined8 local_240;
  uint local_234;
  double local_230;
  undefined4 local_228;
  uint local_224;
  double local_220;
  undefined4 local_218;
  undefined4 local_214;
  double local_210;
  uint local_204;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  double local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 uStack_18c;
  double **local_188;
  undefined4 local_17c;
  double **local_178;
  undefined4 local_16c;
  double **local_168;
  undefined4 local_15c;
  double local_158 [2];
  undefined1 local_148 [16];
  undefined1 local_138 [48];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  double *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  double *local_d0;
  double *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [16];
  longlong local_a0;
  
  local_250 = "gml_Script_anon@637@gml_Object_oTumorHemangioma_Create_0";
  local_258 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_258;
  local_248 = 0x25;
  uVar12 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_158,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_234 = 0xffffff;
  local_240 = 0;
  local_214 = 0xffffff;
  local_220 = 0.0;
  local_25c = 0xffffff;
  local_268 = 0.0;
  local_26c = 0xffffff;
  local_278 = 0.0;
  local_204 = 0xffffff;
  local_210 = 0.0;
  local_224 = 0xffffff;
  local_230 = 0.0;
  local_2dc = 0xffffff;
  local_2e8 = 0.0;
  local_27c = 0xffffff;
  local_288 = 0.0;
  local_28c = 0xffffff;
  local_298 = 0.0;
  uStack_1bc = 0xffffff;
  local_1c8 = 0;
  uStack_1ec = 0xffffff;
  local_1f8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_304 = 0;
  local_310 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_248 = 0x27;
  uVar5 = (*(code *)(*local_res8)[1])(local_res8,DAT_141a02608);
  uStack_2ec = 0;
  local_2f8 = (double **)0x4076800000000000;
  FUN_140046500(&local_2f8,uVar5);
  local_1e8 = (double)local_2f8;
  uStack_1e0 = uStack_2f0;
  uStack_1dc = uStack_2ec;
  if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_240);
  }
  FUN_140041b80(&local_240,&local_1e8);
  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_248 = 0x28;
  if ((local_234 & 0xffffff) == 0) {
    uVar17 = (undefined4)local_240;
  }
  else {
    uVar17 = FUN_140e4b060(&local_240);
  }
  local_220 = (double)FUN_140e79480(uVar17);
  local_214 = 0;
  local_248 = 0x2a;
  if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_310);
  }
  local_310 = 0;
  local_308 = 0;
  local_304 = 5;
  pdVar6 = (double *)(*(code *)(*local_res8)[1])(local_res8,DAT_141a1f440);
  if (pdVar6 != local_158) {
    local_1e8 = *pdVar6;
    uStack_1e0 = *(undefined4 *)(pdVar6 + 1);
    uStack_1dc = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << ((byte)local_158[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_1e8);
  }
  local_e8 = local_158;
  ppdVar21 = &local_e8;
  ppdVar18 = (double **)CONCAT44(uVar12,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_310,1,ppdVar18,ppdVar21);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 != '\0') {
    local_248 = 0x2b;
    uVar5 = (*(code *)(*local_res8)[1])(local_res8,DAT_141a1f440);
    uVar7 = (*(code *)(*local_res8)[1])(local_res8,DAT_141a09918);
    uVar8 = (*(code *)(*local_res8)[1])(local_res8,DAT_141a09a78);
    uStack_2ec = 6;
    local_2f8 = local_res8;
    uVar20 = (ulonglong)ppdVar21 & 0xffffffffffffff00;
    uVar19 = (ulonglong)ppdVar18 & 0xffffffffffffff00;
    FUN_140e87440(&local_2f8,DAT_1419fe0e8,0x80000000,&local_268,uVar19,uVar20);
    if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    uStack_2ec = 6;
    local_2f8 = local_res8;
    FUN_140e87440(&local_2f8,DAT_1419fe158,0x80000000,&local_278,uVar19 & 0xffffffffffffff00,
                  uVar20 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_210,local_res8,local_res10);
    ppdVar18 = local_res8;
    ppdVar21 = local_res10;
    FUN_140e87170(uVar5,DAT_1419fe158,0x80000000,&local_230,local_res8,local_res10);
    local_2ac = local_224;
    local_2b0 = local_228;
    if ((1 << ((byte)local_224 & 0x1f) & 0x46U) == 0) {
      local_2b8 = local_230;
    }
    else {
      FUN_1400419b0(&local_2b8,&local_230);
    }
    uStack_2ec = 7;
    local_2f8 = (double **)CONCAT44(local_2f8._4_4_,4);
    FUN_1400462a0(&local_2b8,&local_2f8);
    if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    uStack_2bc = local_26c;
    uStack_2c0 = local_270;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) == 0) {
      local_2c8 = local_278;
    }
    else {
      FUN_1400419b0(&local_2c8,&local_278);
    }
    FUN_1400460e0(&local_2c8,uVar8);
    uStack_2cc = local_25c;
    uStack_2d0 = local_260;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) == 0) {
      local_2d8 = local_268;
    }
    else {
      FUN_1400419b0(&local_2d8,&local_268);
    }
    FUN_1400460e0(&local_2d8,uVar7);
    dVar13 = local_2b8;
    if ((local_2ac & 0xffffff) != 0) {
      dVar13 = (double)FUN_140e4b060(&local_2b8);
    }
    dVar15 = local_210;
    if ((local_204 & 0xffffff) != 0) {
      dVar15 = (double)FUN_140e4b060(&local_210);
    }
    dVar16 = local_2c8;
    if ((uStack_2bc & 0xffffff) != 0) {
      dVar16 = (double)FUN_140e4b060(&local_2c8);
    }
    dVar14 = local_2d8;
    if ((uStack_2cc & 0xffffff) != 0) {
      dVar14 = (double)FUN_140e4b060(&local_2d8);
    }
    fVar11 = (float)FUN_140e793d0((float)dVar14,(float)dVar16,(float)dVar15,(float)dVar13);
    local_214 = 0;
    local_220 = (double)fVar11;
    if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
  }
  uVar10 = 0;
  local_248 = 0x2d;
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  dVar13 = local_220;
  local_2dc = 0;
  uVar12 = 0;
  uVar17 = 0;
  local_2e8 = 0.0;
  bVar1 = true;
  do {
    dVar15 = (double)CONCAT44(uVar17,uVar12);
    if (!bVar1) {
      local_248 = 0x2d;
      uVar3 = local_2dc & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_2e8 = (double)CONCAT44(local_2e8._4_4_,local_2e8._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_2e8 = (double)((longlong)local_2e8 + 1);
          }
          else {
            if (uVar3 == 0xd) goto LAB_140de6cd6;
            FUN_140042910(&DAT_14172c3d8,&local_2e8,&local_2e8);
          }
          goto LAB_140de6ce4;
        }
        dVar15 = (double)FUN_140e4b060(&local_2e8);
LAB_140de6cd6:
        local_2dc = 0;
      }
      local_2e8 = dVar15 + 1.0;
    }
LAB_140de6ce4:
    bVar1 = false;
    uVar5 = (*(code *)(*local_res8)[1])(local_res8,DAT_141a02608);
    iVar4 = FUN_140e851f0(&local_2e8,uVar5,DAT_141955260,1);
    if ((iVar4 == -2) || (-1 < iVar4)) {
      local_248 = 0x3c;
      if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_310);
      }
      local_310 = 0;
      local_308 = 0;
      local_304 = 5;
      uVar5 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419f0c08);
      FUN_140e87440(uVar5,DAT_1419f4a98,0x80000000,&local_1d8,
                    (ulonglong)ppdVar18 & 0xffffffffffffff00,
                    (ulonglong)ppdVar21 & 0xffffffffffffff00);
      uVar5 = FUN_140069500(uVar5);
      FUN_140e63610(uVar5,local_res10,&local_310,0,&local_1d8,0);
      if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_310);
      }
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2e8);
      }
      if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_230);
      }
      if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_210);
      }
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_240);
      }
      _eh_vector_destructor_iterator_(local_158,0x10,7,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_258;
      return local_res18;
    }
    local_248 = 0x2f;
    local_2ac = local_2dc;
    local_2b0 = local_2e0;
    if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) == 0) {
      local_2b8 = local_2e8;
    }
    else {
      FUN_1400419b0(&local_2b8,&local_2e8);
    }
    FUN_140042560(&local_2b8,&local_240);
    uStack_2ec = 0;
    uStack_2f0 = local_218;
    local_2f8 = (double **)dVar13;
    FUN_1400460e0(&local_2f8,&local_2b8);
    local_2a8 = (undefined4)local_2f8;
    uStack_2a4 = local_2f8._4_4_;
    uStack_2a0 = uStack_2f0;
    uStack_29c = uStack_2ec;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_2a8);
    if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    uVar3 = uVar10;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_248 = 0x30;
    local_1ac = 0;
    local_1b8 = 0;
    iVar4 = FUN_140e851f0(&local_2e8,&local_1b8,DAT_141955260,0,ppdVar18,ppdVar21,uVar3);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    if (iVar4 == 0) {
      if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_310);
      }
      uVar12 = (undefined4)((ulonglong)ppdVar18 >> 0x20);
      local_310 = 0;
      local_308 = 0;
      local_304 = 5;
      pdVar6 = (double *)(*(code *)(*local_res8)[1])(local_res8,DAT_141a1f440);
      if (pdVar6 != local_158) {
        local_2a8 = *(undefined4 *)pdVar6;
        uStack_2a4 = *(undefined4 *)((longlong)pdVar6 + 4);
        uStack_2a0 = *(undefined4 *)(pdVar6 + 1);
        uStack_29c = *(undefined4 *)((longlong)pdVar6 + 0xc);
        if ((1 << ((byte)local_158[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_158);
        }
        FUN_140041b80(local_158,&local_2a8);
      }
      local_e8 = local_158;
      ppdVar21 = &local_e8;
      ppdVar18 = (double **)CONCAT44(uVar12,DAT_141a02ef8);
      uVar5 = FUN_140e634e0(local_res8,local_res10,&local_310,1,ppdVar18,ppdVar21);
      cVar2 = FUN_140e491e0(uVar5);
      if (cVar2 == '\0') goto LAB_140de6f4d;
      uStack_18c = 0;
      local_198 = 0x401c000000000000;
      puVar9 = &local_198;
      uVar10 = uVar10 | 1;
    }
    else {
LAB_140de6f4d:
      local_1a8 = FUN_140e794b0(0,0);
      local_19c = 0;
      puVar9 = &local_1a8;
      uVar10 = uVar10 | 2;
    }
    local_2a8 = *(undefined4 *)puVar9;
    uStack_2a4 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_2a0 = *(undefined4 *)(puVar9 + 1);
    uStack_29c = *(undefined4 *)((longlong)puVar9 + 0xc);
    uVar3 = uVar10;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    FUN_140041b80(&local_298,&local_2a8);
    if (((uVar10 & 2) != 0) &&
       (uVar10 = uVar10 & 0xfffffffd, uVar3 = uVar10, (1 << ((byte)local_19c & 0x1f) & 0x46U) != 0))
    {
      FUN_140041a50(&local_1a8);
    }
    if (((uVar10 & 1) != 0) &&
       (uVar10 = uVar10 & 0xfffffffe, uVar3 = uVar10, (1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0)
       ) {
      FUN_140041a50(&local_198);
    }
    local_248 = 0x32;
    if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_310);
    }
    local_310 = 0;
    local_308 = 0;
    local_304 = 5;
    uVar5 = (*(code *)(*local_res8)[1])(local_res8,DAT_141a09918);
    uVar7 = (*(code *)(*local_res8)[1])(local_res8,DAT_141a09a78);
    local_17c = 6;
    local_188 = local_res8;
    uVar20 = (ulonglong)ppdVar21 & 0xffffffffffffff00;
    uVar19 = (ulonglong)ppdVar18 & 0xffffffffffffff00;
    FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_268,uVar19,uVar20,uVar3);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_16c = 6;
    local_178 = local_res8;
    uVar20 = uVar20 & 0xffffffffffffff00;
    uVar19 = uVar19 & 0xffffffffffffff00;
    FUN_140e87440(&local_178,DAT_1419fe158,0x80000000,&local_278,uVar19,uVar20);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_15c = 6;
    local_168 = local_res8;
    ppdVar21 = (double **)(uVar20 & 0xffffffffffffff00);
    FUN_140e87440(&local_168,DAT_141a1b910,0x80000000,&local_1c8,uVar19 & 0xffffffffffffff00);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    uStack_2bc = local_25c;
    uStack_2c0 = local_260;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) == 0) {
      local_2c8 = local_268;
    }
    else {
      FUN_1400419b0(&local_2c8,&local_268);
    }
    FUN_1400460e0(&local_2c8,uVar5);
    local_2a8 = (undefined4)local_2c8;
    uStack_2a4 = local_2c8._4_4_;
    uStack_2a0 = uStack_2c0;
    uStack_29c = uStack_2bc;
    if ((1 << ((byte)local_158[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_2a8);
    if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_e8 = local_158;
    uStack_2cc = local_26c;
    uStack_2d0 = local_270;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) == 0) {
      local_2d8 = local_278;
    }
    else {
      FUN_1400419b0(&local_2d8,&local_278);
    }
    FUN_1400460e0(&local_2d8,uVar7);
    local_2a8 = (undefined4)local_2d8;
    uStack_2a4 = local_2d8._4_4_;
    uStack_2a0 = uStack_2d0;
    uStack_29c = uStack_2cc;
    if ((1 << (local_148[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_2a8);
    if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    local_e0 = local_148;
    uStack_1dc = 0xf;
    local_1e8 = 7.291122019556692e-304;
    local_2a8 = 0xb6;
    uStack_2a4 = 0x1000000;
    uStack_2a0 = uStack_1e0;
    uStack_29c = 0xf;
    if ((1 << (local_138[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_2a8);
    local_d8 = local_138;
    local_d0 = &local_288;
    local_c8 = &local_298;
    local_2a8 = _DAT_1419ee5a0;
    uStack_2a4 = uRam00000001419ee5a4;
    uStack_2a0 = uRam00000001419ee5a8;
    uStack_29c = uRam00000001419ee5ac;
    if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_2a8);
    local_c0 = local_108;
    local_2a8 = (undefined4)local_1c8;
    uStack_2a4 = local_1c8._4_4_;
    uStack_2a0 = uStack_1c0;
    uStack_29c = uStack_1bc;
    if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_2a8);
    local_b8 = local_f8;
    ppdVar18 = &local_e8;
    uVar5 = FUN_140265f80(local_res8,local_res10,&local_310,7);
    iVar4 = FUN_140e63cb0(local_b0,&local_res8,&local_res10,uVar5);
    if (0 < iVar4) {
      do {
        local_248 = 0x34;
        uVar5 = (*(code *)(*local_res10)[1])(local_res10,DAT_141a1f0d0);
        puVar9 = (undefined8 *)(*(code *)(*local_res8)[2])(local_res8,DAT_141a1f0d0);
        ppdVar18 = local_res8;
        ppdVar21 = local_res10;
        FUN_140e87170(uVar5,DAT_141a0a828,0x80000000,&local_1f8);
        FUN_140e609c0(local_res8);
        if (&local_1f8 != puVar9) {
          local_2a8 = (undefined4)local_1f8;
          uStack_2a4 = local_1f8._4_4_;
          uStack_2a0 = uStack_1f0;
          uStack_29c = uStack_1ec;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar9);
          }
          FUN_140041b80(puVar9,&local_2a8);
        }
        FUN_140e60910(1);
        local_248 = 0x35;
        pdVar6 = (double *)(*(code *)(*local_res8)[2])(local_res8,DAT_141a1f230);
        dVar15 = local_288;
        if ((local_27c & 0xffffff) != 0) {
          dVar15 = (double)FUN_140e4b060(&local_288);
        }
        dVar16 = local_298;
        if ((local_28c & 0xffffff) != 0) {
          dVar16 = (double)FUN_140e4b060(&local_298);
        }
        fVar11 = (float)FUN_140e78f90((float)dVar16,(float)dVar15);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar6);
        }
        *(undefined4 *)((longlong)pdVar6 + 0xc) = 0;
        *pdVar6 = (double)fVar11;
        local_248 = 0x36;
        pdVar6 = (double *)(*(code *)(*local_res8)[2])(local_res8,DAT_141a1f500);
        dVar15 = local_288;
        if ((local_27c & 0xffffff) != 0) {
          dVar15 = (double)FUN_140e4b060(&local_288);
        }
        dVar16 = local_298;
        if ((local_28c & 0xffffff) != 0) {
          dVar16 = (double)FUN_140e4b060(&local_298);
        }
        fVar11 = (float)FUN_140e79010((float)dVar16,(float)dVar15);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar6);
        }
        *(undefined4 *)((longlong)pdVar6 + 0xc) = 0;
        *pdVar6 = (double)fVar11;
        cVar2 = FUN_140e643f0(local_b0,&local_res8,&local_res10);
      } while (cVar2 != '\0');
    }
    FUN_140e63970(local_b0,&local_res8,&local_res10);
    if (local_a0 != 0) {
      FUN_140e4cd60();
    }
    uVar12 = SUB84(local_2e8,0);
    uVar17 = (undefined4)((ulonglong)local_2e8 >> 0x20);
  } while( true );
}

