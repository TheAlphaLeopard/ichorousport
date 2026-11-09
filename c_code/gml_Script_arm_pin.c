// gml_Script_arm_pin @ 0x14022a4d0

longlong *
gml_Script_arm_pin(longlong *param_1,undefined8 param_2,longlong *param_3,int param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  undefined1 auVar2 [12];
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  double *pdVar8;
  ulonglong *puVar9;
  double *pdVar10;
  longlong **pplVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  double *pdVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  double dVar21;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auVar22 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar23 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar24 [16];
  uint uVar28;
  ulonglong uVar29;
  undefined8 uVar30;
  longlong ***ppplVar31;
  ulonglong uVar32;
  longlong ***ppplVar33;
  longlong *local_270;
  undefined4 local_268;
  uint local_264;
  longlong *local_258;
  undefined4 uStack_250;
  uint uStack_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  double *local_228;
  undefined4 local_220;
  undefined4 local_21c;
  longlong *local_218;
  undefined4 uStack_210;
  uint uStack_20c;
  double local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  double local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  double local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  double local_1b8;
  uint local_1ac;
  double local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  uint local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong *local_158;
  undefined4 local_14c;
  longlong *local_148;
  byte local_13c;
  double local_138 [2];
  double local_128 [4];
  double local_108;
  byte local_fc;
  double local_f8;
  byte local_ec;
  longlong **local_e8;
  double *local_e0;
  double *local_d8;
  double *local_d0;
  double *local_c8;
  double *local_c0;
  double local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  local_1f0 = "gml_Script_arm_move_towards";
  local_1f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1f8;
  local_1e8 = 9;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(&local_148,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_1ac = 0xffffff;
  local_1b8 = 0.0;
  local_14c = 0xffffff;
  local_158 = (longlong *)0x0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_1fc = 0xffffff;
  local_208 = 0.0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_1bc = 0xffffff;
  local_1c8 = 0.0;
  uStack_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  uStack_1cc = 0xffffff;
  local_1d8 = 0.0;
  local_264 = 0xffffff;
  local_270 = (longlong *)0x0;
  local_22c = 0;
  local_238 = 0;
  local_15c = 0;
  local_168 = 0;
  local_ac = 0;
  local_b8 = (double)param_4;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1e8 = 0xe;
  pdVar16 = (double *)&DAT_1419df7b0;
  if (param_4 < 1) {
    pdVar10 = (double *)&DAT_1419df7b0;
LAB_14022a635:
    local_248 = (longlong *)*pdVar10;
    uStack_240 = (longlong *)pdVar10[1];
    FUN_140041b80(&local_178,&local_248);
  }
  else {
    pdVar10 = (double *)*param_5;
    if (pdVar10 != &local_178) goto LAB_14022a635;
  }
  if (param_4 < 2) {
    pdVar10 = (double *)&DAT_1419df7b0;
LAB_14022a669:
    local_248 = (longlong *)*pdVar10;
    uStack_240 = (longlong *)pdVar10[1];
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_248);
  }
  else {
    pdVar10 = (double *)param_5[1];
    if (pdVar10 != &local_1b8) goto LAB_14022a669;
  }
  pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
  local_228 = pdVar8;
  puVar9 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
  pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
  if ((local_1ac & 0xffffff) == 0) {
    uVar5 = SUB84(local_1b8,0);
    uVar25 = (undefined4)((ulonglong)local_1b8 >> 0x20);
  }
  else {
    uVar12 = FUN_140e4b060(&local_1b8);
    uVar5 = (undefined4)uVar12;
    uVar25 = (undefined4)((ulonglong)uVar12 >> 0x20);
  }
  if ((local_16c & 0xffffff) == 0) {
    uVar18 = SUB84(local_178,0);
    uVar26 = (undefined4)((ulonglong)local_178 >> 0x20);
  }
  else {
    uVar12 = FUN_140e4b060(&local_178);
    uVar18 = (undefined4)uVar12;
    uVar26 = (undefined4)((ulonglong)uVar12 >> 0x20);
  }
  iVar4 = FUN_140e4a740(pdVar8);
  if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) && (dVar21 = *pdVar10, dVar21 != 0.0))
  {
    if ((iVar4 < 0) || (*(int *)((longlong)dVar21 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)((longlong)dVar21 + 0x24));
      pdVar8 = (double *)0x0;
    }
    else {
      pdVar8 = (double *)((longlong)iVar4 * 0x10 + *(longlong *)((longlong)dVar21 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    pdVar8 = pdVar10;
  }
  if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
    uVar19 = SUB84(*pdVar8,0);
    uVar27 = (undefined4)((ulonglong)*pdVar8 >> 0x20);
  }
  else {
    uVar12 = FUN_140e4b060(pdVar8);
    uVar19 = (undefined4)uVar12;
    uVar27 = (undefined4)((ulonglong)uVar12 >> 0x20);
  }
  iVar4 = FUN_140e4a740(local_228);
  if (((*(uint *)((longlong)puVar9 + 0xc) & 0xffffff) == 2) && (uVar29 = *puVar9, uVar29 != 0)) {
    if ((iVar4 < 0) || (*(int *)(uVar29 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)(uVar29 + 0x24));
      puVar9 = (ulonglong *)0x0;
    }
    else {
      puVar9 = (ulonglong *)((longlong)iVar4 * 0x10 + *(longlong *)(uVar29 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if ((*(uint *)((longlong)puVar9 + 0xc) & 0xffffff) == 0) {
    auVar22._8_8_ = 0;
    auVar22._0_8_ = *puVar9;
  }
  else {
    auVar22._0_8_ = FUN_140e4b060(puVar9);
    auVar22._8_8_ = extraout_XMM0_Qb;
  }
  auVar23._4_12_ = auVar22._4_12_;
  auVar23._0_4_ = (float)auVar22._0_8_;
  fVar20 = (float)FUN_140e793d0(auVar23._0_8_,(float)(double)CONCAT44(uVar27,uVar19),
                                (float)(double)CONCAT44(uVar26,uVar18),
                                (float)(double)CONCAT44(uVar25,uVar5));
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_14c = 0;
  local_158 = (longlong *)(double)fVar20;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  pplVar11 = (longlong **)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
  iVar4 = FUN_140e4a740(local_228);
  if (((*(uint *)((longlong)pplVar11 + 0xc) & 0xffffff) == 2) &&
     (plVar15 = *pplVar11, plVar15 != (longlong *)0x0)) {
    if ((iVar4 < 0) || (*(int *)((longlong)plVar15 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)((longlong)plVar15 + 0x24));
      pplVar11 = (longlong **)0x0;
    }
    else {
      pplVar11 = (longlong **)((longlong)iVar4 * 0x10 + plVar15[1]);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (pplVar11 != &local_148) {
    local_248 = *pplVar11;
    uStack_240 = pplVar11[1];
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_248);
  }
  local_e8 = &local_148;
  iVar4 = FUN_140e4a740(local_228);
  if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) && (dVar21 = *pdVar10, dVar21 != 0.0))
  {
    if ((iVar4 < 0) || (*(int *)((longlong)dVar21 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)((longlong)dVar21 + 0x24));
      pdVar10 = (double *)0x0;
    }
    else {
      pdVar10 = (double *)((longlong)iVar4 * 0x10 + *(longlong *)((longlong)dVar21 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (pdVar10 != local_138) {
    local_248 = (longlong *)*pdVar10;
    uStack_240 = (longlong *)pdVar10[1];
    if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_248);
  }
  local_e0 = local_138;
  local_d8 = &local_178;
  local_d0 = &local_1b8;
  if (param_4 < 3) {
    pdVar10 = (double *)&DAT_1419df7b0;
LAB_14022aa1e:
    local_248 = (longlong *)*pdVar10;
    uStack_240 = (longlong *)pdVar10[1];
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_248);
  }
  else {
    pdVar10 = (double *)param_5[2];
    if (pdVar10 != &local_108) goto LAB_14022aa1e;
  }
  local_c8 = &local_108;
  ppplVar33 = &local_e8;
  uVar29 = CONCAT44(uVar6,DAT_1419fd548);
  pdVar10 = (double *)FUN_140e634e0(param_1,param_2,&local_168,4,uVar29,ppplVar33);
  if (pdVar10 != &local_f8) {
    local_248 = (longlong *)*pdVar10;
    uStack_240 = (longlong *)pdVar10[1];
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_248);
  }
  local_c0 = &local_f8;
  pdVar10 = (double *)FUN_140e79230(&local_238,2,&local_c8);
  uVar12 = extraout_XMM0_Qb_00;
  if (pdVar10 != &local_1a8) {
    local_248 = (longlong *)*pdVar10;
    uStack_240 = (longlong *)pdVar10[1];
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_248);
    uVar12 = extraout_XMM0_Qb_01;
  }
  auVar2._4_8_ = uVar12;
  auVar2._0_4_ = local_248._4_4_;
  auVar24._0_8_ = auVar2._0_8_ << 0x20;
  auVar24._8_4_ = (undefined4)uStack_240;
  auVar24._12_4_ = 0xd;
  uStack_240 = auVar24._8_8_;
  local_248 = (longlong *)0x0;
  local_198 = 0;
  uStack_190 = uStack_240;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  FUN_140041b80(&local_208,&local_198);
  uStack_24c = 6;
  uVar32 = (ulonglong)ppplVar33 & 0xffffffffffffff00;
  uVar29 = uVar29 & 0xffffffffffffff00;
  local_258 = param_1;
  FUN_140e87440(&local_258,DAT_1419fe0e8,0x80000000,&local_98,uVar29,uVar32);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  uStack_240 = (longlong *)CONCAT44(uStack_8c,uStack_90);
  local_248 = (longlong *)local_98;
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_248);
  uStack_24c = 6;
  ppplVar33 = (longlong ***)(uVar32 & 0xffffffffffffff00);
  uVar29 = uVar29 & 0xffffffffffffff00;
  local_258 = param_1;
  FUN_140e87440(&local_258,DAT_1419fe158,0x80000000,&local_a8,uVar29,ppplVar33);
  uVar6 = (undefined4)(uVar29 >> 0x20);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  uStack_240 = (longlong *)CONCAT44(uStack_9c,uStack_a0);
  local_248 = local_a8;
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140041b80(&local_1d8,&local_248);
  local_1e8 = 0x16;
  uStack_24c = 0;
  local_258 = (longlong *)0x4008000000000000;
  iVar4 = FUN_140e851f0(&local_b8,&local_258,DAT_141955260,1);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if (iVar4 < 1) {
    local_1e8 = 0x1e;
    pdVar16 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a10be8);
    if (pdVar16 != &local_208) {
      local_248 = (longlong *)*pdVar16;
      uStack_240 = (longlong *)pdVar16[1];
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_248);
    }
  }
  else {
    local_1e8 = 0x17;
    local_228 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    (**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    if (param_4 < 4) {
      pdVar10 = (double *)&DAT_1419df7b0;
LAB_14022ad25:
      local_248 = (longlong *)*pdVar10;
      uStack_240 = (longlong *)pdVar10[1];
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_248);
    }
    else {
      pdVar10 = (double *)param_5[3];
      if (pdVar10 != &local_208) goto LAB_14022ad25;
    }
    local_1e8 = 0x18;
    cVar3 = FUN_140e491e0(&local_208);
    if (cVar3 != '\0') {
      local_1e8 = 0x19;
      uStack_24c = 0;
      local_258 = (longlong *)0x4010000000000000;
      iVar4 = FUN_140e851f0(&local_b8,&local_258,DAT_141955260,1);
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      if (0 < iVar4) {
        local_1e8 = 0x1a;
        if (param_4 < 5) {
          pdVar10 = (double *)&DAT_1419df7b0;
LAB_14022adef:
          local_248 = (longlong *)*pdVar10;
          uStack_240 = (longlong *)pdVar10[1];
          if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          FUN_140041b80(&local_1c8,&local_248);
        }
        else {
          pdVar10 = (double *)param_5[4];
          if (pdVar10 != &local_1c8) goto LAB_14022adef;
        }
        if ((param_4 < 6) || (pdVar16 = (double *)param_5[5], pdVar16 != &local_1d8)) {
          local_248 = (longlong *)*pdVar16;
          uStack_240 = (longlong *)pdVar16[1];
          if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          FUN_140041b80(&local_1d8,&local_248);
        }
      }
    }
  }
  local_1e8 = 0x20;
  uStack_24c = 0;
  local_258 = (longlong *)0x0;
  iVar4 = FUN_140e851f0(&local_1a8,&local_258,DAT_141955260,0);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  uVar28 = 0x3ff00000;
  if (iVar4 != 0) {
    local_1e8 = 0x21;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    uVar12 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    puVar13 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
    local_e8 = &local_158;
    FUN_140e609c0(param_1);
    uVar30 = CONCAT44(uVar6,DAT_141a00e28);
    puVar14 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_238,1,uVar30,&local_e8);
    uVar6 = (undefined4)((ulonglong)uVar30 >> 0x20);
    local_21c = *(undefined4 *)((longlong)puVar14 + 0xc);
    local_220 = *(undefined4 *)(puVar14 + 1);
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) == 0) {
      local_228 = (double *)*puVar14;
    }
    else {
      FUN_1400419b0(&local_228,puVar14);
    }
    FUN_140042560(&local_228,&local_1a8);
    uVar5 = FUN_140e4a740(uVar12);
    uVar12 = FUN_140e48e40(puVar13,uVar5);
    FUN_140e609c0(*(undefined8 *)*puVar13);
    FUN_1400460e0(uVar12,&local_228);
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140e60910(2);
    local_1e8 = 0x22;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    uVar12 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    puVar13 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
    uStack_24c = 0;
    local_258 = (longlong *)0x4076800000000000;
    FUN_1400462a0(&local_258,&local_158);
    uStack_240 = (longlong *)CONCAT44(uStack_24c,uStack_250);
    local_248 = local_258;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_248);
    uVar5 = 0;
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_e8 = &local_148;
    FUN_140e609c0(param_1);
    ppplVar33 = &local_e8;
    ppplVar31 = (longlong ***)CONCAT44(uVar6,DAT_141a00d78);
    puVar14 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_238,1,ppplVar31,ppplVar33,uVar5);
    local_21c = *(undefined4 *)((longlong)puVar14 + 0xc);
    local_220 = *(undefined4 *)(puVar14 + 1);
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) == 0) {
      local_228 = (double *)*puVar14;
    }
    else {
      FUN_1400419b0(&local_228,puVar14);
    }
    FUN_140042560(&local_228,&local_1a8);
    uVar6 = FUN_140e4a740(uVar12);
    uVar12 = FUN_140e48e40(puVar13,uVar6);
    FUN_140e609c0(*(undefined8 *)*puVar13);
    FUN_1400460e0(uVar12,&local_228);
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140e60910(2);
    local_1e8 = 0x24;
    local_228 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    uStack_20c = *(uint *)((longlong)local_228 + 0xc);
    uStack_210 = *(undefined4 *)(local_228 + 1);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
      local_218 = (longlong *)*local_228;
    }
    else {
      FUN_1400419b0(&local_218);
    }
    uStack_24c = 7;
    local_258 = (longlong *)CONCAT44(local_258._4_4_,1);
    FUN_1400462a0(&local_218,&local_258);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    uStack_240 = (longlong *)CONCAT44(uStack_20c,uStack_210);
    local_248 = local_218;
    if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_270);
    }
    FUN_140041b80(&local_270,&local_248);
    uVar6 = 0;
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    bVar17 = true;
    do {
      if (!bVar17) {
        local_1e8 = 0x24;
        uVar7 = local_264 & 0xffffff;
        if (uVar7 == 0) {
LAB_14022b324:
          local_270 = (longlong *)((double)local_270 + -1.0);
        }
        else if (uVar7 == 1) {
          dVar21 = (double)FUN_140e4b060(&local_270);
          local_270 = (longlong *)(dVar21 - 1.0);
          local_264 = 0;
        }
        else if (uVar7 == 7) {
          local_270 = (longlong *)CONCAT44(local_270._4_4_,(int)local_270 + -1);
        }
        else if (uVar7 == 10) {
          local_270 = (longlong *)((longlong)local_270 + -1);
        }
        else {
          if (uVar7 == 0xd) {
            local_264 = 0;
            goto LAB_14022b324;
          }
          FUN_140042910(&DAT_14172c450,&local_270,&local_270);
        }
      }
      bVar17 = false;
      iVar4 = FUN_140e851f0(&local_270,&local_208,DAT_141955260,1,ppplVar31,ppplVar33,uVar6);
      if ((iVar4 == -2) || (iVar4 < 0)) break;
      local_1e8 = 0x25;
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      local_238 = 0;
      local_230 = 0;
      local_22c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
      pdVar16 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
      local_e8 = &local_270;
      uStack_20c = local_264;
      uStack_210 = local_268;
      if ((1 << ((byte)local_264 & 0x1f) & 0x46U) == 0) {
        local_218 = local_270;
      }
      else {
        FUN_1400419b0(&local_218,&local_270);
      }
      uStack_190 = CONCAT44(7,(undefined4)uStack_190);
      local_198 = CONCAT44(local_198._4_4_,1);
      FUN_1400460e0(&local_218,&local_198);
      if ((1 << ((byte)((ulonglong)uStack_190 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      iVar4 = FUN_140e4a740(&local_218);
      if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) &&
         (dVar21 = *pdVar10, dVar21 != 0.0)) {
        if ((iVar4 < 0) || (*(int *)((longlong)dVar21 + 0x24) <= iVar4)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                        *(undefined4 *)((longlong)dVar21 + 0x24));
          pdVar10 = (double *)0x0;
        }
        else {
          pdVar10 = (double *)((longlong)iVar4 * 0x10 + *(longlong *)((longlong)dVar21 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (pdVar10 != local_138) {
        local_188 = *pdVar10;
        dStack_180 = pdVar10[1];
        if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_188);
      }
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_e0 = local_138;
      uStack_24c = local_264;
      uStack_250 = local_268;
      if ((1 << ((byte)local_264 & 0x1f) & 0x46U) == 0) {
        local_258 = local_270;
      }
      else {
        FUN_1400419b0(&local_258,&local_270);
      }
      uStack_240 = (longlong *)CONCAT44(7,(undefined4)uStack_240);
      local_248 = (longlong *)CONCAT44(local_248._4_4_,1);
      FUN_1400460e0(&local_258,&local_248);
      if ((1 << ((byte)((ulonglong)uStack_240 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      iVar4 = FUN_140e4a740(&local_258);
      if (((*(uint *)((longlong)pdVar16 + 0xc) & 0xffffff) == 2) &&
         (dVar21 = *pdVar16, dVar21 != 0.0)) {
        if ((iVar4 < 0) || (*(int *)((longlong)dVar21 + 0x24) <= iVar4)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                        *(undefined4 *)((longlong)dVar21 + 0x24));
          pdVar16 = (double *)0x0;
        }
        else {
          pdVar16 = (double *)((longlong)iVar4 * 0x10 + *(longlong *)((longlong)dVar21 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (pdVar16 != local_128) {
        local_188 = *pdVar16;
        dStack_180 = pdVar16[1];
        if ((1 << ((byte)local_128[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_188);
      }
      uVar6 = 0;
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_d8 = local_128;
      ppplVar31 = &local_e8;
      gml_Script_seg_delete(param_1,param_2,&local_238,3);
    } while( true );
  }
  local_1e8 = 0x29;
  cVar3 = FUN_140e491e0(&local_208);
  if (cVar3 == '\0') {
LAB_14022bcba:
    local_1e8 = 0x32;
    bVar17 = false;
    plVar15 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    iVar4 = FUN_140e4a740(local_228);
    if (((*(uint *)((longlong)plVar15 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar15, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar15 = (longlong *)0x0;
      }
      else {
        plVar15 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    iVar4 = FUN_140e851f0(plVar15,&local_178,DAT_141955260,0);
    if (iVar4 == 0) {
      uVar12 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
      plVar15 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
      iVar4 = FUN_140e4a740(uVar12);
      if (((*(uint *)((longlong)plVar15 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar15, lVar1 != 0))
      {
        if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar15 = (longlong *)0x0;
        }
        else {
          plVar15 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      iVar4 = FUN_140e851f0(plVar15,&local_1b8,DAT_141955260,0);
      bVar17 = iVar4 == 0;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    if (!bVar17) {
      uVar28 = 0;
    }
    *param_3 = (ulonglong)uVar28 << 0x20;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_270);
    }
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    _eh_vector_destructor_iterator_(&local_148,0x10,6,FUN_140041b30);
    DAT_141dc7a50 = (undefined8 *)local_1f8;
    return param_3;
  }
  plVar15 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
  if (((*(uint *)((longlong)plVar15 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar15, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      plVar15 = (longlong *)0x0;
    }
    else {
      plVar15 = *(longlong **)(lVar1 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  iVar4 = FUN_140e851f0(plVar15,&local_1c8,DAT_141955260,0);
  if (iVar4 == 0) {
    plVar15 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    if (((*(uint *)((longlong)plVar15 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar15, lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x24) < 1) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
        plVar15 = (longlong *)0x0;
      }
      else {
        plVar15 = *(longlong **)(lVar1 + 8);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    iVar4 = FUN_140e851f0(plVar15,&local_1d8,DAT_141955260,0);
    if (iVar4 == 0) {
      uStack_240 = (longlong *)((ulonglong)uStack_240 & 0xffffffff);
      local_248 = (longlong *)0x0;
      iVar4 = FUN_140e851f0(&local_1a8,&local_248,DAT_141955260,0);
      if ((1 << ((byte)((ulonglong)uStack_240 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      if (iVar4 == 0) goto LAB_14022bcba;
    }
  }
  local_1e8 = 0x2a;
  puVar13 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
  FUN_140e609c0(param_1);
  pdVar16 = (double *)FUN_140e48e40(puVar13,0);
  FUN_140e609c0(*(undefined8 *)*puVar13);
  if (&local_1c8 != pdVar16) {
    dStack_180 = (double)CONCAT44(uStack_1bc,uStack_1c0);
    local_188 = local_1c8;
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar16 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar16);
    }
    FUN_140041b80(pdVar16,&local_188);
  }
  FUN_140e60910(2);
  local_1e8 = 0x2b;
  puVar13 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
  FUN_140e609c0(param_1);
  pdVar16 = (double *)FUN_140e48e40(puVar13,0);
  FUN_140e609c0(*(undefined8 *)*puVar13);
  if (&local_1d8 != pdVar16) {
    dStack_180 = (double)CONCAT44(uStack_1cc,uStack_1d0);
    local_188 = local_1d8;
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar16 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar16);
    }
    FUN_140041b80(pdVar16,&local_188);
  }
  FUN_140e60910(2);
  local_1e8 = 0x2d;
  if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_270);
  }
  local_264 = 0;
  local_270 = (longlong *)0x3ff0000000000000;
  bVar17 = true;
  do {
    if (!bVar17) {
      local_1e8 = 0x2d;
      uVar7 = local_264 & 0xffffff;
      if (uVar7 != 0) {
        if (uVar7 != 1) {
          if (uVar7 == 7) {
            local_270 = (longlong *)CONCAT44(local_270._4_4_,(int)local_270 + 1);
          }
          else if (uVar7 == 10) {
            local_270 = (longlong *)((longlong)local_270 + 1);
          }
          else {
            if (uVar7 == 0xd) goto LAB_14022b95c;
            FUN_140042910(&DAT_14172c3d8,&local_270,&local_270);
          }
          goto LAB_14022b96b;
        }
        local_270 = (longlong *)FUN_140e4b060(&local_270);
LAB_14022b95c:
        local_264 = 0;
      }
      local_270 = (longlong *)((double)local_270 + 1.0);
    }
LAB_14022b96b:
    bVar17 = false;
    local_228 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    iVar4 = FUN_140e851f0(&local_270,local_228,DAT_141955260,1);
    if ((iVar4 == -2) || (0 < iVar4)) goto LAB_14022bcba;
    local_1e8 = 0x2e;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    pdVar16 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    local_e8 = &local_270;
    uStack_24c = local_264;
    uStack_250 = local_268;
    if ((1 << ((byte)local_264 & 0x1f) & 0x46U) == 0) {
      local_258 = local_270;
    }
    else {
      FUN_1400419b0(&local_258,&local_270);
    }
    uStack_240 = (longlong *)CONCAT44(7,(undefined4)uStack_240);
    local_248 = (longlong *)CONCAT44(local_248._4_4_,1);
    FUN_1400462a0(&local_258,&local_248);
    if ((1 << ((byte)((ulonglong)uStack_240 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    iVar4 = FUN_140e4a740(&local_258);
    if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) && (dVar21 = *pdVar10, dVar21 != 0.0)
       ) {
      if ((iVar4 < 0) || (*(int *)((longlong)dVar21 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)((longlong)dVar21 + 0x24));
        pdVar10 = (double *)0x0;
      }
      else {
        pdVar10 = (double *)((longlong)iVar4 * 0x10 + *(longlong *)((longlong)dVar21 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar10 != local_138) {
      local_188 = *pdVar10;
      dStack_180 = pdVar10[1];
      if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_188);
    }
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_e0 = local_138;
    uStack_20c = local_264;
    uStack_210 = local_268;
    if ((1 << ((byte)local_264 & 0x1f) & 0x46U) == 0) {
      local_218 = local_270;
    }
    else {
      FUN_1400419b0(&local_218,&local_270);
    }
    uStack_190 = CONCAT44(7,(undefined4)uStack_190);
    local_198 = CONCAT44(local_198._4_4_,1);
    FUN_1400462a0(&local_218,&local_198);
    if ((1 << ((byte)((ulonglong)uStack_190 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    iVar4 = FUN_140e4a740(&local_218);
    if (((*(uint *)((longlong)pdVar16 + 0xc) & 0xffffff) == 2) && (dVar21 = *pdVar16, dVar21 != 0.0)
       ) {
      if ((iVar4 < 0) || (*(int *)((longlong)dVar21 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)((longlong)dVar21 + 0x24));
        pdVar16 = (double *)0x0;
      }
      else {
        pdVar16 = (double *)((longlong)iVar4 * 0x10 + *(longlong *)((longlong)dVar21 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar16 != local_128) {
      local_188 = *pdVar16;
      dStack_180 = pdVar16[1];
      if ((1 << ((byte)local_128[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_188);
    }
    uVar6 = 0;
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_d8 = local_128;
    gml_Script_seg_delete(param_1,param_2,&local_238,3,&local_e8,ppplVar33,uVar6);
  } while( true );
}

