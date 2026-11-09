// gml_Script_anon_13284____struct___352_gml_Object_oBossEmbraceHalf_Create_0 @ 0x14076ba30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_13284____struct___352_gml_Object_oBossEmbraceHalf_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  double *pdVar7;
  double *pdVar8;
  longlong **pplVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  ulonglong uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  longlong *plVar21;
  undefined8 **ppuVar22;
  ulonglong uVar23;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  undefined8 local_158;
  byte local_14c;
  double local_148;
  undefined4 local_13c;
  double local_138;
  byte local_12c;
  double local_128;
  byte local_11c;
  undefined8 *local_118;
  double *local_110;
  double *local_108;
  double *local_100;
  double local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  longlong *local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  longlong *local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  double local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_84;
  
  local_170 = "gml_Script_anon@11624@___struct___351@gml_Object_oBossEmbraceHalf_Create_0";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 0x178;
  uVar16 = 1;
  _eh_vector_constructor_iterator_(&local_158,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_ac = 0xffffff;
  local_b8 = 0.0;
  uStack_bc = 0xffffff;
  local_c8 = (longlong *)0x0;
  local_dc = 0xffffff;
  local_e8 = (longlong *)0x0;
  uStack_ec = 0xffffff;
  local_f8 = 0.0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_84 = 0xffffff;
  local_90 = 0;
  local_18c = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_168 = 0x179;
  local_98 = uVar4;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  if (puVar5 != &local_158) {
    local_188 = (longlong *)*puVar5;
    uStack_180 = *(undefined4 *)(puVar5 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_188);
  }
  local_118 = &local_158;
  ppuVar22 = &local_118;
  uVar14 = CONCAT44(uVar16,DAT_141a02ef8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_198,1,uVar14,ppuVar22);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 == '\0') {
    local_168 = 0x17a;
    FUN_140edd0e0(param_1,param_2,0,0);
    local_168 = 0x17b;
  }
  else {
    local_168 = 0x17e;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a072b8);
    uStack_19c = DAT_141dd65e4;
    uStack_1a0 = DAT_141dd65e0;
    if ((1 << ((byte)DAT_141dd65e4 & 0x1f) & 0x46U) == 0) {
      local_1a8 = (longlong *)CONCAT44(DAT_141dd65d8._4_4_,(undefined4)DAT_141dd65d8);
    }
    else {
      FUN_1400419b0(&local_1a8,&DAT_141dd65d8);
    }
    iVar2 = FUN_140e851f0(uVar6,&local_1a8,DAT_141955260,0);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    uVar3 = 1 << ((byte)local_18c & 0x1f);
    if (iVar2 == 0) {
      local_168 = 0x17f;
      if ((uVar3 & 0x46) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06fa8);
      pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06c58);
      uStack_19c = 6;
      uVar23 = (ulonglong)ppuVar22 & 0xffffffffffffff00;
      uVar14 = uVar14 & 0xffffffffffffff00;
      local_1a8 = param_1;
      FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_b8,uVar14,uVar23);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      uStack_19c = 6;
      uVar14 = uVar14 & 0xffffffffffffff00;
      local_1a8 = param_1;
      FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_c8,uVar14,uVar23 & 0xffffffffffffff00
                   );
      uVar16 = (undefined4)(uVar14 >> 0x20);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_188 = (longlong *)local_b8;
      uStack_180 = uStack_b0;
      uStack_17c = uStack_ac;
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_188);
      local_118 = &local_158;
      local_188 = local_c8;
      uStack_180 = uStack_c0;
      uStack_17c = uStack_bc;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_188);
      local_110 = &local_148;
      if (pdVar7 != &local_138) {
        local_188 = (longlong *)*pdVar7;
        uStack_180 = *(undefined4 *)(pdVar7 + 1);
        uStack_17c = *(uint *)((longlong)pdVar7 + 0xc);
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_188);
      }
      local_108 = &local_138;
      if (pdVar8 != &local_128) {
        local_188 = (longlong *)*pdVar8;
        uStack_180 = *(undefined4 *)(pdVar8 + 1);
        uStack_17c = *(uint *)((longlong)pdVar8 + 0xc);
        if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_188);
      }
      local_100 = &local_128;
      ppuVar22 = &local_118;
      uVar14 = CONCAT44(uVar16,DAT_1419fd548);
      pplVar9 = (longlong **)FUN_140e634e0(param_1,param_2,&local_198,4,uVar14,ppuVar22);
      if (pplVar9 != &local_e8) {
        local_188 = *pplVar9;
        uStack_180 = *(undefined4 *)(pplVar9 + 1);
        uStack_17c = *(uint *)((longlong)pplVar9 + 0xc);
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        FUN_140041b80(&local_e8,&local_188);
      }
      local_168 = 0x180;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06fa8);
      pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06c58);
      uVar23 = (ulonglong)ppuVar22 & 0xffffffffffffff00;
      uVar14 = uVar14 & 0xffffffffffffff00;
      FUN_140e87440(uVar4,DAT_141a1eed0,0x80000000,&local_f8,uVar14,uVar23);
      uStack_19c = 6;
      uVar23 = uVar23 & 0xffffffffffffff00;
      uVar14 = uVar14 & 0xffffffffffffff00;
      local_1a8 = param_1;
      FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_b8,uVar14,uVar23);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      uStack_19c = 6;
      uVar23 = uVar23 & 0xffffffffffffff00;
      local_1a8 = param_1;
      FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_c8,uVar14 & 0xffffffffffffff00,uVar23
                   );
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_188 = (longlong *)local_f8;
      uStack_180 = uStack_f0;
      uStack_17c = uStack_ec;
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_188);
      local_118 = &local_158;
      if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
        dVar20 = *pdVar8;
      }
      else {
        dVar20 = (double)FUN_140e4b060(pdVar8);
      }
      if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
        dVar18 = *pdVar7;
      }
      else {
        dVar18 = (double)FUN_140e4b060(pdVar7);
      }
      plVar21 = local_c8;
      if ((uStack_bc & 0xffffff) != 0) {
        plVar21 = (longlong *)FUN_140e4b060(&local_c8);
      }
      dVar19 = local_b8;
      if ((uStack_ac & 0xffffff) != 0) {
        dVar19 = (double)FUN_140e4b060(&local_b8);
      }
      fVar15 = (float)FUN_140e793d0((float)dVar19,(float)(double)plVar21,(float)dVar18,(float)dVar20
                                   );
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_13c = 0;
      local_148 = (double)fVar15;
      local_110 = &local_148;
      local_188 = (longlong *)CONCAT44(uRam00000001419e8074,_DAT_1419e8070);
      uStack_180 = uRam00000001419e8078;
      uStack_17c = uRam00000001419e807c;
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_188);
      local_108 = &local_138;
      ppuVar22 = &local_118;
      puVar5 = (undefined8 *)
               gml_Script_AngleRotateTowardsLerp(param_1,param_2,&local_198,3,ppuVar22);
      if (puVar5 != &local_a8) {
        local_188 = (longlong *)*puVar5;
        uStack_180 = *(undefined4 *)(puVar5 + 1);
        uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        FUN_140041b80(&local_a8,&local_188);
      }
      FUN_140e87930(uVar4,DAT_141a1eed0,0x80000000,&local_a8);
      local_168 = 0x181;
      uStack_19c = local_dc;
      uStack_1a0 = local_e0;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
        local_1a8 = local_e8;
      }
      else {
        FUN_1400419b0(&local_1a8,&local_e8);
      }
      uStack_17c = 0;
      local_188 = (longlong *)0x4030000000000000;
      FUN_140046500(&local_1a8,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if ((uStack_19c & 0xffffff) == 0) {
        uVar16 = SUB84(local_1a8,0);
      }
      else {
        uVar16 = FUN_140e4b060(&local_1a8);
      }
      uVar4 = FUN_140e78ec0(uVar16,0,0x3ff0000000000000);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_cc = 0;
      local_d8 = uVar4;
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_168 = 0x183;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
      puVar10 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07d08);
      puVar11 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07db8);
      puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      uVar23 = uVar23 & 0xffffffffffffff00;
      FUN_140e87440(uVar4,DAT_141a1eed0,0x80000000,&local_f8,
                    (ulonglong)ppuVar22 & 0xffffffffffffff00,uVar23);
      if (puVar5 != &local_158) {
        local_188 = (longlong *)*puVar5;
        uStack_180 = *(undefined4 *)(puVar5 + 1);
        uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_188);
      }
      local_118 = &local_158;
      uStack_19c = *(uint *)((longlong)puVar10 + 0xc);
      uStack_1a0 = *(undefined4 *)(puVar10 + 1);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
        local_1a8 = (longlong *)*puVar10;
      }
      else {
        FUN_1400419b0(&local_1a8,puVar10);
      }
      FUN_140042560(&local_1a8,&local_d8);
      dVar20 = local_f8;
      if ((uStack_ec & 0xffffff) != 0) {
        dVar20 = (double)FUN_140e4b060(&local_f8);
      }
      plVar21 = local_1a8;
      if ((uStack_19c & 0xffffff) != 0) {
        plVar21 = (longlong *)FUN_140e4b060(&local_1a8);
      }
      fVar15 = (float)FUN_140e78f90((float)(double)plVar21,(float)dVar20);
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_13c = 0;
      local_148 = (double)fVar15;
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_110 = &local_148;
      uStack_19c = *(undefined4 *)((longlong)puVar11 + 0xc);
      uStack_1a0 = *(undefined4 *)(puVar11 + 1);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
        local_1a8 = (longlong *)*puVar11;
      }
      else {
        FUN_1400419b0(&local_1a8,puVar11);
      }
      FUN_140042560(&local_1a8,local_98);
      local_188 = local_1a8;
      uStack_180 = uStack_1a0;
      uStack_17c = uStack_19c;
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_188);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_108 = &local_138;
      FUN_140e609c0(param_1);
      ppuVar22 = &local_118;
      puVar5 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_198,3,ppuVar22);
      if (puVar5 != puVar12) {
        local_188 = (longlong *)*puVar5;
        uStack_180 = *(undefined4 *)(puVar5 + 1);
        uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar12);
        }
        FUN_140041b80(puVar12,&local_188);
      }
      FUN_140e60910(1);
      local_168 = 0x184;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
      puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      puVar11 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07d08);
      puVar12 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07db8);
      FUN_140e87440(uVar4,DAT_141a1eed0,0x80000000,&local_f8,
                    (ulonglong)ppuVar22 & 0xffffffffffffff00,uVar23 & 0xffffffffffffff00);
      if (puVar5 != &local_158) {
        local_188 = (longlong *)*puVar5;
        uStack_180 = *(undefined4 *)(puVar5 + 1);
        uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_188);
      }
      local_118 = &local_158;
      uStack_19c = *(uint *)((longlong)puVar11 + 0xc);
      uStack_1a0 = *(undefined4 *)(puVar11 + 1);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
        local_1a8 = (longlong *)*puVar11;
      }
      else {
        FUN_1400419b0(&local_1a8,puVar11);
      }
      FUN_140042560(&local_1a8,&local_d8);
      dVar20 = local_f8;
      if ((uStack_ec & 0xffffff) != 0) {
        dVar20 = (double)FUN_140e4b060(&local_f8);
      }
      plVar21 = local_1a8;
      if ((uStack_19c & 0xffffff) != 0) {
        plVar21 = (longlong *)FUN_140e4b060(&local_1a8);
      }
      fVar15 = (float)FUN_140e79010((float)(double)plVar21,(float)dVar20);
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_13c = 0;
      local_148 = (double)fVar15;
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_110 = &local_148;
      uStack_19c = *(undefined4 *)((longlong)puVar12 + 0xc);
      uStack_1a0 = *(undefined4 *)(puVar12 + 1);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
        local_1a8 = (longlong *)*puVar12;
      }
      else {
        FUN_1400419b0(&local_1a8,puVar12);
      }
      uVar4 = local_98;
      FUN_140042560(&local_1a8,local_98);
      local_188 = local_1a8;
      uStack_180 = uStack_1a0;
      uStack_17c = uStack_19c;
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_188);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_108 = &local_138;
      FUN_140e609c0(param_1);
      ppuVar22 = &local_118;
      puVar5 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_198,3,ppuVar22);
      uVar16 = (undefined4)((ulonglong)ppuVar22 >> 0x20);
      if (puVar5 != puVar10) {
        local_188 = (longlong *)*puVar5;
        uStack_180 = *(undefined4 *)(puVar5 + 1);
        uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar10);
        }
        FUN_140041b80(puVar10,&local_188);
      }
      FUN_140e60910(1);
      local_168 = 0x186;
      uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a07f88);
      FUN_140e609c0(param_1);
      FUN_1400460e0(uVar6,uVar4);
      FUN_140e60910(1);
      local_168 = 0x187;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07f88);
      local_188 = (longlong *)CONCAT44(uRam0000000141dc6984,_DAT_141dc6980);
      uStack_180 = uRam0000000141dc6988;
      uStack_17c = uRam0000000141dc698c;
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_188);
      local_118 = &local_158;
      puVar5 = (undefined8 *)
               FUN_140e634e0(param_1,param_2,&local_198,1,CONCAT44(uVar16,DAT_141a0a0d8),&local_118)
      ;
      uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
      uStack_1a0 = *(undefined4 *)(puVar5 + 1);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
        local_1a8 = (longlong *)*puVar5;
      }
      else {
        FUN_1400419b0(&local_1a8,puVar5);
      }
      uStack_17c = 7;
      local_188 = (longlong *)CONCAT44(local_188._4_4_,3);
      FUN_140042560(&local_1a8,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      uVar3 = FUN_140e851f0(uVar6,&local_1a8,DAT_141955260,1);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if (uVar3 < 0x80000000) {
        local_168 = 0x188;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07f88);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0;
        local_168 = 0x189;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_198 = 0;
        local_190 = 0;
        local_18c = 5;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a08188);
        FUN_140e63610(param_1,param_2,&local_198,0,uVar6,0);
      }
      local_168 = 0x18c;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a084f8);
      iVar2 = FUN_140e851f0(&local_e8,uVar6,DAT_141955260,1);
      if (iVar2 != -2 && iVar2 < 1) {
        local_168 = 0x18d;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0;
        local_168 = 0x18e;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0;
        local_168 = 399;
        puVar13 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a072b8);
        if (puVar13 != &DAT_141dd6628) {
          local_188 = (longlong *)CONCAT44(uRam0000000141dd662c,_DAT_141dd6628);
          uStack_180 = uRam0000000141dd6630;
          uStack_17c = DAT_141dd6634;
          if ((1 << ((byte)*(undefined4 *)(puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar13);
          }
          FUN_140041b80(puVar13,&local_188);
        }
        local_168 = 400;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a08088);
        puVar10 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07ca8);
        puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a085b8);
        if ((*(uint *)((longlong)puVar10 + 0xc) & 0xffffff) == 0) {
          uVar16 = (undefined4)*puVar10;
        }
        else {
          uVar16 = FUN_140e4b060(puVar10);
        }
        if ((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 0) {
          uVar17 = (undefined4)*puVar5;
        }
        else {
          uVar17 = FUN_140e4b060(puVar5);
        }
        uVar4 = FUN_140e794b0(uVar17,uVar16);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar11);
        }
        *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
        *puVar11 = uVar4;
        local_168 = 0x191;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07398);
        uStack_17c = 0xd;
        local_188 = (longlong *)0x3ff0000000000000;
        if (&local_188 != puVar5) {
          local_1a8 = (longlong *)0x3ff0000000000000;
          uStack_1a0 = uStack_180;
          uStack_19c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_1a8);
        }
        local_168 = 0x192;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_198 = 0;
        local_190 = 0;
        local_18c = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a070a8);
        FUN_140e63610(param_1,param_2,&local_198,0,uVar4,0);
        uVar4 = local_98;
      }
    }
    else {
      local_168 = 0x196;
      if ((uVar3 & 0x46) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
      puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
      if (puVar5 != &local_158) {
        local_188 = (longlong *)*puVar5;
        uStack_180 = *(undefined4 *)(puVar5 + 1);
        uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_188);
      }
      local_118 = &local_158;
      local_188 = (longlong *)CONCAT44(uRam0000000141dc6984,_DAT_141dc6980);
      uStack_180 = uRam0000000141dc6988;
      uStack_17c = uRam0000000141dc698c;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_188);
      local_110 = &local_148;
      uStack_19c = 0;
      local_1a8 = (longlong *)0x3fc3333333333333;
      FUN_140042560(&local_1a8,uVar4);
      local_188 = local_1a8;
      uStack_180 = uStack_1a0;
      uStack_17c = uStack_19c;
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_188);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_108 = &local_138;
      FUN_140e609c0(param_1);
      puVar5 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_198,3,&local_118);
      if (puVar5 != puVar10) {
        local_188 = (longlong *)*puVar5;
        uStack_180 = *(undefined4 *)(puVar5 + 1);
        uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar10);
        }
        FUN_140041b80(puVar10,&local_188);
      }
      FUN_140e60910(1);
      local_168 = 0x197;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
      puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
      if (puVar5 != &local_158) {
        local_188 = (longlong *)*puVar5;
        uStack_180 = *(undefined4 *)(puVar5 + 1);
        uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_188);
      }
      local_118 = &local_158;
      local_188 = (longlong *)CONCAT44(uRam0000000141dc6984,_DAT_141dc6980);
      uStack_180 = uRam0000000141dc6988;
      uStack_17c = uRam0000000141dc698c;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_188);
      local_110 = &local_148;
      uStack_19c = 0;
      local_1a8 = (longlong *)0x3fc3333333333333;
      FUN_140042560(&local_1a8,uVar4);
      local_188 = local_1a8;
      uStack_180 = uStack_1a0;
      uStack_17c = uStack_19c;
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_188);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_108 = &local_138;
      FUN_140e609c0(param_1);
      puVar5 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_198,3,&local_118);
      if (puVar5 != puVar10) {
        local_188 = (longlong *)*puVar5;
        uStack_180 = *(undefined4 *)(puVar5 + 1);
        uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar10);
        }
        FUN_140041b80(puVar10,&local_188);
      }
      FUN_140e60910(1);
      local_168 = 0x199;
      uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a085b8);
      FUN_140e609c0(param_1);
      FUN_1400462a0(uVar6,uVar4);
      FUN_140e60910(1);
      local_168 = 0x19a;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a085b8);
      uStack_17c = 0;
      local_188 = (longlong *)0x0;
      iVar2 = FUN_140e851f0(uVar6,&local_188,DAT_141955260,1);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if (iVar2 != -2 && iVar2 < 1) {
        local_168 = 0x19b;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_198 = 0;
        local_190 = 0;
        local_18c = 5;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a08188);
        FUN_140e63610(param_1,param_2,&local_198,0,uVar6,0);
        local_168 = 0x19c;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07f88);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0;
        local_168 = 0x19d;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a072b8);
        if (puVar5 != &DAT_141dd65d8) {
          local_188 = (longlong *)CONCAT44(DAT_141dd65d8._4_4_,(undefined4)DAT_141dd65d8);
          uStack_180 = DAT_141dd65e0;
          uStack_17c = DAT_141dd65e4;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_188);
        }
        local_168 = 0x19e;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07398);
        uStack_17c = 0xd;
        local_188 = (longlong *)0x0;
        if (&local_188 != puVar5) {
          local_1a8 = (longlong *)0x0;
          uStack_1a0 = uStack_180;
          uStack_19c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_1a8);
        }
      }
    }
    local_168 = 0x1a2;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a08238);
    FUN_140e63610(param_1,param_2,&local_198,0,uVar6,0);
    local_168 = 0x1a4;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
    FUN_140e63610(param_1,param_2,&local_198,0,uVar6,0);
    local_168 = 0x1a5;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
    FUN_140e63610(param_1,param_2,&local_198,0,uVar6,0);
    local_168 = 0x1a6;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07ef8);
    FUN_140e63610(param_1,param_2,&local_198,0,uVar6,0);
    local_168 = 0x1a7;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    uVar14 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
    uVar23 = 0;
    FUN_140e63610(param_1,param_2,&local_198,0,uVar14,0);
    local_168 = 0x1a9;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    FUN_140e87440(uVar6,DAT_141a0a848,0x80000000,&local_90,uVar14 & 0xffffffffffffff00,
                  uVar23 & 0xffffffffffffff00);
    FUN_1400460e0(&local_90,uVar4);
    FUN_140e87930(uVar6,DAT_141a0a848,0x80000000,&local_90);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_158,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return param_3;
}

