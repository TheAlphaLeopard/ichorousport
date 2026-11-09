// gml_Script____struct___737_anon_9910_gml_Object_oRogueLevelManager_Create_0 @ 0x140cc30c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___737_anon_9910_gml_Object_oRogueLevelManager_Create_0
          (longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  double *pdVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  double *pdVar10;
  double *pdVar11;
  float fVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  longlong *plVar16;
  double dVar17;
  code *pcVar18;
  ulonglong uVar19;
  ulonglong in_stack_fffffffffffffe30;
  double **ppdVar20;
  ulonglong uVar21;
  undefined8 **ppuVar22;
  longlong *local_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  longlong *local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  double local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  double local_148;
  undefined4 local_13c;
  double local_138;
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  double *local_f8;
  double *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  double local_c0;
  undefined4 local_b4;
  double local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  
  local_170 = "gml_Script_anon@8743@anon@8364@gml_Object_oRogueLevelManager_Create_0";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 0x158;
  pcVar18 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_148,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_17c = 0xffffff;
  local_188 = 0.0;
  uStack_18c = 0xffffff;
  local_198 = (longlong *)0x0;
  local_a4 = 0xffffff;
  local_b0 = 0.0;
  local_b4 = 0xffffff;
  local_c0 = 0.0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  pdVar6 = (double *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f99c8);
  local_19c = 0;
  local_1a8 = 0;
  local_154 = 0;
  local_160 = 0;
  local_c4 = 0;
  local_d0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_168 = 0x15b;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd1b8);
  uStack_1bc = 6;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
  uVar19 = (ulonglong)pcVar18 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_188,uVar19,in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  iVar3 = FUN_140e851f0(&local_188,uVar7,DAT_141955260,0);
  if (iVar3 == 0) {
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd178);
    uStack_1bc = 6;
    in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
    uVar19 = uVar19 & 0xffffffffffffff00;
    local_1c8 = param_1;
    FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_198,uVar19,in_stack_fffffffffffffe30);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    iVar3 = FUN_140e851f0(&local_198,uVar7,DAT_141955260,0);
    if (iVar3 != 0) goto LAB_140cc32f2;
  }
  else {
LAB_140cc32f2:
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd1b8);
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd178);
    uStack_1bc = 6;
    in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
    uVar19 = uVar19 & 0xffffffffffffff00;
    local_1c8 = param_1;
    FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_188,uVar19,in_stack_fffffffffffffe30);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    uStack_1bc = 6;
    uVar19 = uVar19 & 0xffffffffffffff00;
    local_1c8 = param_1;
    FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_198,uVar19,
                  in_stack_fffffffffffffe30 & 0xffffffffffffff00);
    uVar13 = (undefined4)(uVar19 >> 0x20);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1b8 = (longlong *)local_188;
    uStack_1b0 = uStack_180;
    uStack_1ac = uStack_17c;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1b8);
    local_f8 = &local_148;
    local_1b8 = local_198;
    uStack_1b0 = uStack_190;
    uStack_1ac = uStack_18c;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1b8);
    local_f0 = &local_138;
    if (puVar8 != &local_128) {
      local_1b8 = (longlong *)*puVar8;
      uStack_1b0 = *(undefined4 *)(puVar8 + 1);
      uStack_1ac = *(uint *)((longlong)puVar8 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_1b8);
    }
    local_e8 = &local_128;
    if (puVar9 != &local_118) {
      local_1b8 = (longlong *)*puVar9;
      uStack_1b0 = *(undefined4 *)(puVar9 + 1);
      uStack_1ac = *(uint *)((longlong)puVar9 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_1b8);
    }
    local_e0 = &local_118;
    uVar19 = CONCAT44(uVar13,DAT_1419fd548);
    ppdVar20 = &local_f8;
    uVar7 = FUN_140e634e0(param_1,param_2,&local_1a8,4,uVar19,&local_f8);
    uStack_1bc = 0;
    local_1c8 = (longlong *)0x3ff0000000000000;
    iVar3 = FUN_140e851f0(uVar7,&local_1c8,DAT_141955260,1);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    if (iVar3 == -2 || -1 < iVar3) {
      local_168 = 0x162;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
      if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
        dVar14 = *pdVar10;
      }
      else {
        dVar14 = (double)FUN_140e4b060(pdVar10);
      }
      fVar12 = (float)FUN_140e78f90(0x3f800000,(float)dVar14);
      if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      local_a4 = 0;
      local_b0 = (double)fVar12;
      local_168 = 0x163;
      if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
        dVar14 = *pdVar10;
      }
      else {
        dVar14 = (double)FUN_140e4b060(pdVar10);
      }
      fVar12 = (float)FUN_140e79010(0x3f800000,(float)dVar14);
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      local_b4 = 0;
      local_c0 = (double)fVar12;
      local_168 = 0x165;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      uStack_1bc = 6;
      uVar19 = uVar19 & 0xffffffffffffff00;
      local_1c8 = param_1;
      FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_90,uVar19,
                    (ulonglong)ppdVar20 & 0xffffffffffffff00);
      uVar13 = (undefined4)(uVar19 >> 0x20);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_f8 = &local_b0;
      uVar19 = CONCAT44(uVar13,DAT_1419fe728);
      ppdVar20 = &local_f8;
      uVar7 = FUN_140e634e0(param_1,param_2,&local_1a8,1,uVar19,&local_f8);
      FUN_1400460e0(&local_90,uVar7);
      FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_90);
      local_168 = 0x166;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      uStack_1bc = 6;
      uVar19 = uVar19 & 0xffffffffffffff00;
      local_1c8 = param_1;
      FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_a0,uVar19,
                    (ulonglong)ppdVar20 & 0xffffffffffffff00);
      uVar13 = (undefined4)(uVar19 >> 0x20);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_f8 = &local_c0;
      uVar19 = CONCAT44(uVar13,DAT_1419fe728);
      ppdVar20 = &local_f8;
      uVar7 = FUN_140e634e0(param_1,param_2,&local_1a8,1,uVar19,&local_f8);
      FUN_1400460e0(&local_a0,uVar7);
      FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_a0);
      local_168 = 0x168;
      uStack_1bc = 6;
      uVar21 = (ulonglong)ppdVar20 & 0xffffffffffffff00;
      uVar19 = uVar19 & 0xffffffffffffff00;
      local_1c8 = param_1;
      FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_188,uVar19,uVar21);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      uStack_1bc = 0;
      local_1c8 = (longlong *)0x0;
      iVar3 = FUN_140e851f0(&local_188,&local_1c8,DAT_141955260,1);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if (iVar3 == -2 || -1 < iVar3) {
        (**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
        uVar7 = (**(code **)(*param_2 + 8))(param_2,DAT_141a57b70);
        uStack_1bc = 6;
        uVar21 = uVar21 & 0xffffffffffffff00;
        uVar19 = uVar19 & 0xffffffffffffff00;
        local_1c8 = param_1;
        FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_188,uVar19,uVar21);
        if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        uVar4 = FUN_140e851f0(&local_188,uVar7,DAT_141955260,1);
        bVar1 = uVar4 < 0x80000000;
        if (!bVar1) {
          uStack_1bc = 6;
          uVar21 = CONCAT71((int7)(uVar21 >> 8),bVar1);
          uVar19 = CONCAT71((int7)(uVar19 >> 8),bVar1);
          local_1c8 = param_1;
          FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_198,uVar19,uVar21);
          if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          uStack_1bc = 0;
          local_1c8 = (longlong *)0x0;
          iVar3 = FUN_140e851f0(&local_198,&local_1c8,DAT_141955260,1);
          if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          if (iVar3 == -2 || -1 < iVar3) {
            uVar7 = (**(code **)(*param_2 + 8))(param_2,DAT_141a57b70);
            uStack_1bc = 6;
            uVar21 = uVar21 & 0xffffffffffffff00;
            uVar19 = uVar19 & 0xffffffffffffff00;
            local_1c8 = param_1;
            FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_198,uVar19,uVar21);
            if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c8);
            }
            iVar3 = FUN_140e851f0(&local_198,uVar7,DAT_141955260,1);
            if ((iVar3 == -2) || (iVar3 < 0)) {
              local_168 = 0x16f;
              if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1a8);
              }
              local_1a8 = 0;
              local_1a0 = 0;
              local_19c = 5;
              if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_160);
              }
              local_160 = 0;
              local_158 = 0;
              local_154 = 5;
              puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9d18);
              uStack_1bc = 6;
              uVar21 = uVar21 & 0xffffffffffffff00;
              uVar19 = uVar19 & 0xffffffffffffff00;
              local_1c8 = param_1;
              FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_188,uVar19,uVar21);
              if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1c8);
              }
              uStack_1bc = 6;
              uVar19 = uVar19 & 0xffffffffffffff00;
              local_1c8 = param_1;
              FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_198,uVar19,
                            uVar21 & 0xffffffffffffff00);
              uVar13 = (undefined4)(uVar19 >> 0x20);
              if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1c8);
              }
              FUN_140e609c0(DAT_141a729d8);
              FUN_140e645a0(&local_1b8,gml_Script_anon_8364_gml_Object_oRogueLevelManager_Create_0,0
                           );
              if ((double *)&local_1b8 != pdVar6) {
                local_1c8 = local_1b8;
                uStack_1c0 = uStack_1b0;
                uStack_1bc = uStack_1ac;
                if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pdVar6);
                }
                FUN_140041b80(pdVar6,&local_1c8);
              }
              FUN_140e60910(1);
              if (pdVar6 != &local_148) {
                local_1c8 = (longlong *)*pdVar6;
                uStack_1c0 = *(undefined4 *)(pdVar6 + 1);
                uStack_1bc = *(uint *)((longlong)pdVar6 + 0xc);
                if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_148);
                }
                FUN_140041b80(&local_148,&local_1c8);
              }
              if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1b8);
              }
              local_f8 = &local_148;
              local_1b8 = (longlong *)local_188;
              uStack_1b0 = uStack_180;
              uStack_1ac = uStack_17c;
              if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_138);
              }
              FUN_140041b80(&local_138,&local_1b8);
              local_f0 = &local_138;
              local_1b8 = local_198;
              uStack_1b0 = uStack_190;
              uStack_1ac = uStack_18c;
              if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_128);
              }
              FUN_140041b80(&local_128,&local_1b8);
              local_e8 = &local_128;
              if (puVar8 != &local_118) {
                local_1b8 = (longlong *)*puVar8;
                uStack_1b0 = *(undefined4 *)(puVar8 + 1);
                uStack_1ac = *(uint *)((longlong)puVar8 + 0xc);
                if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_118);
                }
                FUN_140041b80(&local_118,&local_1b8);
              }
              local_e0 = &local_118;
              uVar7 = CONCAT44(uVar13,DAT_1419fd6d8);
              puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_160,3,uVar7,&local_f8);
              uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
              if (puVar8 != &local_108) {
                local_1b8 = (longlong *)*puVar8;
                uStack_1b0 = *(undefined4 *)(puVar8 + 1);
                uStack_1ac = *(uint *)((longlong)puVar8 + 0xc);
                if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_108);
                }
                FUN_140041b80(&local_108,&local_1b8);
              }
              local_d8 = &local_108;
              ppuVar22 = &local_e0;
              uVar19 = CONCAT44(uVar13,DAT_1419fe568);
              FUN_140e634e0(param_1,param_2,&local_1a8,2,uVar19,ppuVar22);
              local_168 = 0x171;
              if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1a8);
              }
              local_1a8 = 0;
              local_1a0 = 0;
              local_19c = 5;
              if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_160);
              }
              local_160 = 0;
              local_158 = 0;
              local_154 = 5;
              uVar7 = (**(code **)(*param_2 + 8))(param_2,DAT_141a57b10);
              uStack_1ac = 6;
              uVar21 = (ulonglong)ppuVar22 & 0xffffffffffffff00;
              uVar19 = uVar19 & 0xffffffffffffff00;
              local_1b8 = param_1;
              FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_188,uVar19,uVar21);
              if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1b8);
              }
              uStack_1ac = 6;
              uVar19 = uVar19 & 0xffffffffffffff00;
              local_1b8 = param_1;
              FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_198,uVar19,
                            uVar21 & 0xffffffffffffff00);
              uVar13 = (undefined4)(uVar19 >> 0x20);
              if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1b8);
              }
              plVar16 = local_198;
              if ((uStack_18c & 0xffffff) != 0) {
                plVar16 = (longlong *)FUN_140e4b060(&local_198);
              }
              dVar14 = local_188;
              if ((uStack_17c & 0xffffff) != 0) {
                dVar14 = (double)FUN_140e4b060(&local_188);
              }
              uVar5 = FUN_140e4a740(uVar7);
              pdVar6 = (double *)
                       FUN_140ea8b20(&local_160,uVar5,(longlong)dVar14,(longlong)(double)plVar16);
              if (pdVar6 != &local_148) {
                local_1b8 = (longlong *)*pdVar6;
                uStack_1b0 = *(undefined4 *)(pdVar6 + 1);
                uStack_1ac = *(undefined4 *)((longlong)pdVar6 + 0xc);
                if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_148);
                }
                FUN_140041b80(&local_148,&local_1b8);
              }
              local_f8 = &local_148;
              uVar19 = CONCAT44(uVar13,DAT_1419fcb88);
              ppdVar20 = &local_f8;
              uVar7 = FUN_140e634e0(param_1,param_2,&local_1a8,1,uVar19,&local_f8);
              cVar2 = FUN_140e491e0(uVar7);
              if (cVar2 == '\0') {
                local_168 = 0x173;
                if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_d0);
                }
                local_d0 = 0;
                local_c8 = 0;
                local_c4 = 5;
                pdVar6 = (double *)(**(code **)(*param_2 + 8))(param_2,DAT_141a57b10);
                pdVar10 = (double *)(**(code **)(*param_2 + 8))(param_2,DAT_1419f9fb8);
                uStack_1ac = 6;
                uVar21 = (ulonglong)ppdVar20 & 0xffffffffffffff00;
                uVar19 = uVar19 & 0xffffffffffffff00;
                local_1b8 = param_1;
                FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_188,uVar19,uVar21);
                if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1b8);
                }
                uStack_1ac = 6;
                uVar19 = uVar19 & 0xffffffffffffff00;
                local_1b8 = param_1;
                FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_198,uVar19,
                              uVar21 & 0xffffffffffffff00);
                uVar13 = (undefined4)(uVar19 >> 0x20);
                if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1b8);
                }
                if (pdVar10 != &local_138) {
                  local_1b8 = (longlong *)*pdVar10;
                  uStack_1b0 = *(undefined4 *)(pdVar10 + 1);
                  uStack_1ac = *(undefined4 *)((longlong)pdVar10 + 0xc);
                  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_138);
                  }
                  FUN_140041b80(&local_138,&local_1b8);
                }
                local_f0 = &local_138;
                local_1b8 = (longlong *)local_188;
                uStack_1b0 = uStack_180;
                uStack_1ac = uStack_17c;
                if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_128);
                }
                FUN_140041b80(&local_128,&local_1b8);
                local_e8 = &local_128;
                local_1b8 = local_198;
                uStack_1b0 = uStack_190;
                uStack_1ac = uStack_18c;
                if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_118);
                }
                FUN_140041b80(&local_118,&local_1b8);
                local_e0 = &local_118;
                local_1b8 = (longlong *)CONCAT44(DAT_141ddad18._4_4_,(undefined4)DAT_141ddad18);
                uStack_1b0 = DAT_141ddad20;
                uStack_1ac = DAT_141ddad24;
                if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_108);
                }
                FUN_140041b80(&local_108,&local_1b8);
                local_d8 = &local_108;
                plVar16 = local_198;
                if ((uStack_18c & 0xffffff) != 0) {
                  plVar16 = (longlong *)FUN_140e4b060(&local_198);
                }
                dVar14 = local_188;
                if ((uStack_17c & 0xffffff) != 0) {
                  dVar14 = (double)FUN_140e4b060(&local_188);
                }
                if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
                  dVar15 = *pdVar6;
                }
                else {
                  dVar15 = (double)FUN_140e4b060(pdVar6);
                }
                ppdVar20 = &local_f0;
                uVar19 = CONCAT44(uVar13,DAT_1419fd6d8);
                uVar7 = FUN_140e634e0(param_1,param_2,&local_d0,4,uVar19,ppdVar20);
                FUN_140ea8d00((longlong)dVar15,(longlong)dVar14,(longlong)(double)plVar16,uVar7);
                local_168 = 0x174;
                uVar7 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9ae8);
                FUN_1400bdd80(uVar7);
              }
              local_168 = 0x17f;
              uVar7 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6348);
              FUN_1400bdd80(uVar7);
              local_168 = 0x181;
              uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f6348);
              uStack_1ac = 0;
              local_1b8 = (longlong *)0x0;
              iVar3 = FUN_140e851f0(uVar7,&local_1b8,DAT_141955260,1);
              if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1b8);
              }
              if (iVar3 != -2 && iVar3 < 1) {
                local_168 = 0x18b;
                if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1a8);
                }
                local_1a8 = 0;
                local_1a0 = 0;
                local_19c = 5;
                pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd1b8);
                pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd178);
                pdVar11 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1eed0);
                uStack_1ac = 6;
                uVar21 = (ulonglong)ppdVar20 & 0xffffffffffffff00;
                uVar19 = uVar19 & 0xffffffffffffff00;
                local_1b8 = param_1;
                FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_188,uVar19,uVar21);
                if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1b8);
                }
                uStack_1ac = 6;
                local_1b8 = param_1;
                FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_198,
                              uVar19 & 0xffffffffffffff00,uVar21 & 0xffffffffffffff00);
                if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1b8);
                }
                if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
                  dVar14 = *pdVar10;
                }
                else {
                  dVar14 = (double)FUN_140e4b060(pdVar10);
                }
                if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
                  dVar15 = *pdVar6;
                }
                else {
                  dVar15 = (double)FUN_140e4b060(pdVar6);
                }
                plVar16 = local_198;
                if ((uStack_18c & 0xffffff) != 0) {
                  plVar16 = (longlong *)FUN_140e4b060(&local_198);
                }
                dVar17 = local_188;
                if ((uStack_17c & 0xffffff) != 0) {
                  dVar17 = (double)FUN_140e4b060(&local_188);
                }
                fVar12 = (float)FUN_140e793d0((float)dVar17,(float)(double)plVar16,(float)dVar15,
                                              (float)dVar14);
                if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_148);
                }
                local_13c = 0;
                local_148 = (double)fVar12;
                local_f8 = &local_148;
                local_1b8 = (longlong *)CONCAT44(uRam00000001419ed594,_DAT_1419ed590);
                uStack_1b0 = uRam00000001419ed598;
                uStack_1ac = uRam00000001419ed59c;
                if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_138);
                }
                FUN_140041b80(&local_138,&local_1b8);
                local_f0 = &local_138;
                FUN_140e609c0(param_1);
                pdVar6 = (double *)
                         gml_Script_bm_string_width(param_1,param_2,&local_1a8,2,&local_f8);
                if (pdVar6 != pdVar11) {
                  local_1b8 = (longlong *)*pdVar6;
                  uStack_1b0 = *(undefined4 *)(pdVar6 + 1);
                  uStack_1ac = *(undefined4 *)((longlong)pdVar6 + 0xc);
                  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(pdVar11);
                  }
                  FUN_140041b80(pdVar11,&local_1b8);
                }
                FUN_140e60910(1);
                local_168 = 0x18e;
                puVar8 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,DAT_1419f9be8);
                puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6348);
                if ((*(uint *)((longlong)puVar8 + 0xc) & 0xffffff) == 0) {
                  uVar13 = (undefined4)*puVar8;
                }
                else {
                  uVar13 = FUN_140e4b060(puVar8);
                }
                uVar7 = FUN_140e794b0(0,uVar13);
                if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar9);
                }
                *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
                *puVar9 = uVar7;
              }
              goto LAB_140cc4690;
            }
          }
        }
      }
      local_168 = 0x16a;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9e48);
      uStack_1ac = 0xd;
      local_1b8 = (longlong *)0x3ff0000000000000;
      if (&local_1b8 != puVar8) {
        local_1c8 = (longlong *)0x3ff0000000000000;
        uStack_1c0 = uStack_1b0;
        uStack_1bc = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        FUN_140041b80(puVar8,&local_1c8);
      }
      local_168 = 0x16b;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09408);
      uStack_1ac = 0xd;
      local_1b8 = (longlong *)0x3ff0000000000000;
      if (&local_1b8 != puVar8) {
        local_1c8 = (longlong *)0x3ff0000000000000;
        uStack_1c0 = uStack_1b0;
        uStack_1bc = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        FUN_140041b80(puVar8,&local_1c8);
      }
      local_168 = 0x16c;
      goto LAB_140cc4690;
    }
  }
  local_168 = 0x15d;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09408);
  uStack_1ac = 0xd;
  local_1b8 = (longlong *)0x3ff0000000000000;
  if (&local_1b8 != puVar8) {
    local_1c8 = (longlong *)0x3ff0000000000000;
    uStack_1c0 = uStack_1b0;
    uStack_1bc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_1c8);
  }
  local_168 = 0x15e;
  pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
  pdVar10 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9ff8);
  FUN_140e609c0(param_1);
  if (pdVar6 != pdVar10) {
    local_1b8 = (longlong *)*pdVar6;
    uStack_1b0 = *(undefined4 *)(pdVar6 + 1);
    uStack_1ac = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar10);
    }
    FUN_140041b80(pdVar10,&local_1b8);
  }
  FUN_140e60910(1);
  local_168 = 0x15f;
LAB_140cc4690:
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return param_3;
}

