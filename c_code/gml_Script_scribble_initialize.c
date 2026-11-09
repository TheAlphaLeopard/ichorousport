// gml_Script_scribble_initialize @ 0x1404732b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_scribble_initialize
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double *pdVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  double *pdVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double **ppdVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  ulonglong in_stack_fffffffffffffdc0;
  double local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  double local_208;
  uint local_1fc;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  double local_1e8;
  uint local_1dc;
  undefined8 local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  double local_1a8;
  byte local_19c;
  double local_198;
  byte local_18c;
  double local_188;
  byte local_17c;
  double local_178;
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined8 local_148;
  byte local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double *local_128;
  double *local_120;
  double *local_118;
  double *local_110;
  undefined1 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  double local_d0;
  undefined4 local_c4;
  double local_c0;
  undefined4 local_b4;
  double local_b0;
  undefined4 local_a4;
  double local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78 [2];
  undefined8 *local_70;
  
  local_1d0 = "gml_Script_scribble_glyph_set";
  local_1d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1d8;
  local_1c8 = 0x14;
  FUN_140041df0(local_78,param_4,5,param_5);
  _eh_vector_constructor_iterator_(&local_1a8,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_c4 = 0xffffff;
  local_d0 = 0.0;
  uStack_7c = 0xffffff;
  local_88 = 0.0;
  local_1dc = 0xffffff;
  local_1e8 = 0.0;
  uStack_8c = 0xffffff;
  local_98 = 0.0;
  local_a4 = 0xffffff;
  local_b0 = 0.0;
  local_1fc = 0xffffff;
  local_208 = 0.0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0.0;
  uStack_12c = 0xffffff;
  local_138 = 0.0;
  local_21c = 0;
  local_228 = 0;
  local_1b4 = 0;
  local_1c0 = 0;
  local_e4 = 0;
  local_f0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1c8 = 0x14;
  pdVar12 = (double *)&DAT_1419df7b0;
  uVar11 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 5) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_70[4];
  }
  iVar5 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 == 0) {
    local_1c8 = 0x14;
    uStack_22c = 0xd;
    local_238 = 0.0;
    if ((int)local_78[0] < 5) {
      pdVar8 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar8 = (double *)local_70[4];
      if (&local_238 == pdVar8) goto LAB_1404734b1;
    }
    local_1f8 = 0.0;
    uStack_1f0 = uStack_230;
    uStack_1ec = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar8);
    }
    FUN_140041b80(pdVar8,&local_1f8);
  }
LAB_1404734b1:
  local_1c8 = 0x16;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  if ((int)local_78[0] < 1) {
    pdVar8 = (double *)&DAT_1419df7b0;
LAB_1404734fd:
    local_238 = *pdVar8;
    uStack_230 = *(undefined4 *)(pdVar8 + 1);
    uStack_22c = *(undefined4 *)((longlong)pdVar8 + 0xc);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_238);
  }
  else {
    pdVar8 = (double *)*local_70;
    if (pdVar8 != &local_1a8) goto LAB_1404734fd;
  }
  local_128 = &local_1a8;
  ppdVar16 = &local_128;
  pdVar8 = (double *)FUN_1401effd0(param_1,param_2,&local_228,1,ppdVar16);
  if (pdVar8 != &local_d0) {
    local_238 = *pdVar8;
    uStack_230 = *(undefined4 *)(pdVar8 + 1);
    uStack_22c = *(undefined4 *)((longlong)pdVar8 + 0xc);
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    FUN_140041b80(&local_d0,&local_238);
  }
  local_1c8 = 0x18;
  in_stack_fffffffffffffdc0 = in_stack_fffffffffffffdc0 & 0xffffffffffffff00;
  uVar17 = (ulonglong)ppdVar16 & 0xffffffffffffff00;
  FUN_140e87440(&local_d0,DAT_141a06328,0x80000000,&local_88,uVar17,in_stack_fffffffffffffdc0);
  local_238 = local_88;
  uStack_230 = uStack_80;
  uStack_22c = uStack_7c;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_238);
  local_1c8 = 0x19;
  uVar17 = uVar17 & 0xffffffffffffff00;
  FUN_140e87440(&local_d0,DAT_141a06148,0x80000000,&local_98,uVar17,
                in_stack_fffffffffffffdc0 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar17 >> 0x20);
  local_238 = local_98;
  uStack_230 = uStack_90;
  uStack_22c = uStack_8c;
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  FUN_140041b80(&local_b0,&local_238);
  local_1c8 = 0x1b;
  if ((int)local_78[0] < 2) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_70[1];
  }
  uStack_22c = 0;
  local_238 = -3.0;
  iVar5 = FUN_140e851f0(puVar10,&local_238,DAT_141955260,0);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if (iVar5 != 0) {
    uStack_1ec = DAT_141dd31d4;
    uStack_1f0 = DAT_141dd31d0;
    if ((1 << ((byte)DAT_141dd31d4 & 0x1f) & 0x46U) == 0) {
      local_1f8 = DAT_141dd31c8;
    }
    else {
      FUN_1400419b0(&local_1f8,&DAT_141dd31c8);
    }
    if ((int)local_78[0] < 2) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)local_70[1];
    }
    iVar5 = FUN_140e851f0(puVar10,&local_1f8,DAT_141955260,0);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if (iVar5 != 0) {
      local_1c8 = 0x3f;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_228 = 0;
      local_220 = 0;
      local_21c = 5;
      if ((int)local_78[0] < 2) {
        pdVar8 = (double *)&DAT_1419df7b0;
LAB_1404737ae:
        local_238 = *pdVar8;
        uStack_230 = *(undefined4 *)(pdVar8 + 1);
        uStack_22c = *(undefined4 *)((longlong)pdVar8 + 0xc);
        if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        FUN_140041b80(&local_1a8,&local_238);
      }
      else {
        pdVar8 = (double *)local_70[1];
        if (pdVar8 != &local_1a8) goto LAB_1404737ae;
      }
      local_128 = &local_1a8;
      uVar18 = CONCAT44(uVar7,DAT_141a0a0b8);
      uVar9 = FUN_140e634e0(param_1,param_2,&local_228,1,uVar18,&local_128);
      uVar7 = (undefined4)((ulonglong)uVar18 >> 0x20);
      cVar4 = FUN_140e491e0(uVar9);
      if (cVar4 == '\0') {
        if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f0);
        }
        local_f0 = 0;
        local_e8 = 0;
        local_e4 = 5;
        if ((int)local_78[0] < 2) {
          pdVar8 = (double *)&DAT_1419df7b0;
LAB_1404738b2:
          local_1f8 = *pdVar8;
          uStack_1f0 = *(undefined4 *)(pdVar8 + 1);
          uStack_1ec = *(undefined4 *)((longlong)pdVar8 + 0xc);
          if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          FUN_140041b80(&local_188,&local_1f8);
        }
        else {
          pdVar8 = (double *)local_70[1];
          if (pdVar8 != &local_188) goto LAB_1404738b2;
        }
        local_118 = &local_188;
        uVar9 = CONCAT44(uVar7,DAT_1419fdc48);
        pdVar8 = (double *)FUN_140e634e0(param_1,param_2,&local_f0,1,uVar9,&local_118);
        uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
        uStack_1ec = *(undefined4 *)((longlong)pdVar8 + 0xc);
        uStack_1f0 = *(undefined4 *)(pdVar8 + 1);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) == 0) {
          local_1f8 = *pdVar8;
        }
        else {
          FUN_1400419b0(&local_1f8,pdVar8);
        }
        pdVar8 = (double *)&local_1f8;
        bVar3 = false;
        bVar2 = true;
      }
      else {
        if ((int)local_78[0] < 2) {
          pdVar8 = (double *)&DAT_1419df7b0;
        }
        else {
          pdVar8 = (double *)local_70[1];
        }
        uStack_22c = *(undefined4 *)((longlong)pdVar8 + 0xc);
        uStack_230 = *(undefined4 *)(pdVar8 + 1);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) == 0) {
          local_238 = *pdVar8;
        }
        else {
          FUN_1400419b0(&local_238);
        }
        pdVar8 = &local_238;
        bVar3 = true;
        bVar2 = false;
      }
      local_218 = *(undefined4 *)pdVar8;
      uStack_214 = *(undefined4 *)((longlong)pdVar8 + 4);
      uStack_210 = *(undefined4 *)(pdVar8 + 1);
      uStack_20c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      FUN_140041b80(&local_c0,&local_218);
      if ((bVar2) && ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_1f8);
      }
      if ((bVar3) && ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_238);
      }
      local_1c8 = 0x40;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_228 = 0;
      local_220 = 0;
      local_21c = 5;
      local_128 = &local_b0;
      local_120 = &local_c0;
      uVar9 = CONCAT44(uVar7,DAT_1419ff4f8);
      pdVar8 = (double *)FUN_140e634e0(param_1,param_2,&local_228,2,uVar9,&local_128);
      uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
      if (pdVar8 != &local_208) {
        local_218 = *(undefined4 *)pdVar8;
        uStack_214 = *(undefined4 *)((longlong)pdVar8 + 4);
        uStack_210 = *(undefined4 *)(pdVar8 + 1);
        uStack_20c = *(undefined4 *)((longlong)pdVar8 + 0xc);
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        FUN_140041b80(&local_208,&local_218);
      }
      local_1c8 = 0x42;
      iVar5 = FUN_140e851f0(&local_208,&DAT_1419df7b0,DAT_141955260,0);
      if (iVar5 != 0) {
        local_1c8 = 0x48;
        if ((int)local_78[0] < 5) {
          puVar10 = &DAT_1419df7b0;
        }
        else {
          puVar10 = (undefined8 *)local_70[4];
        }
        cVar4 = FUN_140e491e0(puVar10);
        if (cVar4 == '\0') {
          if ((int)local_78[0] < 4) {
            pdVar8 = (double *)&DAT_1419df7b0;
          }
          else {
            pdVar8 = (double *)local_70[3];
          }
          uStack_22c = *(undefined4 *)((longlong)pdVar8 + 0xc);
          uStack_230 = *(undefined4 *)(pdVar8 + 1);
          if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) == 0) {
            local_238 = *pdVar8;
          }
          else {
            FUN_1400419b0(&local_238);
          }
          pdVar8 = &local_238;
          bVar3 = false;
          bVar2 = true;
LAB_140473d71:
          local_218 = *(undefined4 *)pdVar8;
          uStack_214 = *(undefined4 *)((longlong)pdVar8 + 4);
          uStack_210 = *(undefined4 *)(pdVar8 + 1);
          uStack_20c = *(undefined4 *)((longlong)pdVar8 + 0xc);
          if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          FUN_140041b80(&local_138,&local_218);
        }
        else {
          if ((int)local_78[0] < 4) {
            puVar10 = &DAT_1419df7b0;
          }
          else {
            puVar10 = (undefined8 *)local_70[3];
          }
          if ((int)local_78[0] < 3) {
            pdVar8 = (double *)&DAT_1419df7b0;
          }
          else {
            pdVar8 = (double *)local_70[2];
          }
          if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
            dVar14 = *pdVar8;
          }
          else {
            dVar14 = (double)FUN_140e4b060();
          }
          dVar15 = local_208;
          if ((local_1fc & 0xffffff) != 0) {
            dVar15 = (double)FUN_140e4b060(&local_208);
          }
          uVar6 = FUN_140e4a740(&local_1e8);
          uVar9 = FUN_140ea8b20(&local_228,uVar6,(longlong)dVar15,(longlong)dVar14);
          pdVar8 = (double *)FUN_140046230(&local_1f8,uVar9,puVar10);
          bVar3 = true;
          bVar2 = false;
          if (pdVar8 != (double *)&local_138) goto LAB_140473d71;
        }
        if ((bVar2) && ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_238);
        }
        if ((bVar3) && ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_1f8);
        }
        local_1c8 = 0x49;
        if ((int)local_78[0] < 3) {
          pdVar8 = (double *)&DAT_1419df7b0;
        }
        else {
          pdVar8 = (double *)local_70[2];
        }
        if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
          dVar14 = *pdVar8;
        }
        else {
          dVar14 = (double)FUN_140e4b060();
        }
        dVar15 = local_208;
        if ((local_1fc & 0xffffff) != 0) {
          dVar15 = (double)FUN_140e4b060(&local_208);
        }
        dVar13 = local_1e8;
        if ((local_1dc & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_1e8);
        }
        FUN_140ea8d00((longlong)dVar13,(longlong)dVar15,(longlong)dVar14,&local_138);
        local_1c8 = 0x4b;
        uStack_22c = 7;
        local_238 = (double)CONCAT44(local_238._4_4_,0x20);
        iVar5 = FUN_140e851f0(&local_c0,&local_238,DAT_141955260,0);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        if (iVar5 == 0) {
          local_1c8 = 0x4e;
          if ((int)local_78[0] < 3) {
            puVar10 = &DAT_1419df7b0;
          }
          else {
            puVar10 = (undefined8 *)local_70[2];
          }
          uStack_22c = 10;
          local_238 = 3.95252516672997e-323;
          iVar5 = FUN_140e851f0(puVar10,&local_238,DAT_141955260,0);
          if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          if (iVar5 == 0) {
            local_1c8 = 0x4e;
            dVar14 = local_208;
            if ((local_1fc & 0xffffff) != 0) {
              dVar14 = (double)FUN_140e4b060(&local_208);
            }
            dVar15 = local_1e8;
            if ((local_1dc & 0xffffff) != 0) {
              dVar15 = (double)FUN_140e4b060(&local_1e8);
            }
            FUN_140ea8d00((longlong)dVar15,(longlong)dVar14,5,&local_138);
          }
          local_1c8 = 0x4f;
          if ((int)local_78[0] < 3) {
            puVar10 = &DAT_1419df7b0;
          }
          else {
            puVar10 = (undefined8 *)local_70[2];
          }
          uStack_22c = 10;
          local_238 = 2.47032822920623e-323;
          iVar5 = FUN_140e851f0(puVar10,&local_238,DAT_141955260,0);
          if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          if (iVar5 == 0) {
            local_1c8 = 0x4f;
            dVar14 = local_208;
            if ((local_1fc & 0xffffff) != 0) {
              dVar14 = (double)FUN_140e4b060(&local_208);
            }
            dVar15 = local_1e8;
            if ((local_1dc & 0xffffff) != 0) {
              dVar15 = (double)FUN_140e4b060(&local_1e8);
            }
            FUN_140ea8d00((longlong)dVar15,(longlong)dVar14,8,&local_138);
          }
          local_1c8 = 0x52;
          if ((int)local_78[0] < 3) {
            puVar10 = &DAT_1419df7b0;
          }
          else {
            puVar10 = (undefined8 *)local_70[2];
          }
          uStack_22c = 10;
          local_238 = 2.96439387504748e-323;
          iVar5 = FUN_140e851f0(puVar10,&local_238,DAT_141955260,0);
          if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          if (iVar5 == 0) {
            local_1c8 = 0x52;
            dVar14 = local_208;
            if ((local_1fc & 0xffffff) != 0) {
              dVar14 = (double)FUN_140e4b060(&local_208);
            }
            dVar15 = local_1e8;
            if ((local_1dc & 0xffffff) != 0) {
              dVar15 = (double)FUN_140e4b060(&local_1e8);
            }
            FUN_140ea8d00((longlong)dVar15,(longlong)dVar14,7,&local_138);
          }
          local_1c8 = 0x53;
          if ((int)local_78[0] < 3) {
            puVar10 = &DAT_1419df7b0;
          }
          else {
            puVar10 = (undefined8 *)local_70[2];
          }
          uStack_22c = 10;
          local_238 = 3.45845952088873e-323;
          iVar5 = FUN_140e851f0(puVar10,&local_238,DAT_141955260,0);
          if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          if (iVar5 == 0) {
            local_1c8 = 0x53;
            dVar14 = local_208;
            if ((local_1fc & 0xffffff) != 0) {
              dVar14 = (double)FUN_140e4b060(&local_208);
            }
            dVar15 = local_1e8;
            if ((local_1dc & 0xffffff) != 0) {
              dVar15 = (double)FUN_140e4b060(&local_1e8);
            }
            FUN_140ea8d00((longlong)dVar15,(longlong)dVar14,6,&local_138);
          }
          local_1c8 = 0x56;
          if ((int)local_78[0] < 3) {
            puVar10 = &DAT_1419df7b0;
          }
          else {
            puVar10 = (undefined8 *)local_70[2];
          }
          uStack_22c = 10;
          local_238 = 2.96439387504748e-323;
          iVar5 = FUN_140e851f0(puVar10,&local_238,DAT_141955260,0);
          if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          if (iVar5 != 0) {
            if (2 < (int)local_78[0]) {
              pdVar12 = (double *)local_70[2];
            }
            uStack_22c = 10;
            local_238 = 3.45845952088873e-323;
            iVar5 = FUN_140e851f0(pdVar12,&local_238,DAT_141955260,0);
            if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_238);
            }
            if (iVar5 != 0) goto LAB_140474538;
          }
          local_1c8 = 0x58;
          if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          local_228 = 0;
          local_220 = 0;
          local_21c = 5;
          if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c0);
          }
          local_1c0 = 0;
          local_1b8 = 0;
          local_1b4 = 5;
          local_128 = &local_1e8;
          local_120 = &local_1e8;
          local_218 = _DAT_141dc6640;
          uStack_214 = uRam0000000141dc6644;
          uStack_210 = uRam0000000141dc6648;
          uStack_20c = uRam0000000141dc664c;
          if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          FUN_140041b80(&local_188,&local_218);
          local_118 = &local_188;
          local_218 = _DAT_1419e5eb0;
          uStack_214 = uRam00000001419e5eb4;
          uStack_210 = uRam00000001419e5eb8;
          uStack_20c = uRam00000001419e5ebc;
          if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          FUN_140041b80(&local_178,&local_218);
          local_110 = &local_178;
          uVar9 = CONCAT44(uVar7,DAT_141a064d8);
          pdVar12 = (double *)FUN_140e634e0(param_1,param_2,&local_1c0,1,uVar9,&local_128);
          uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
          uStack_1ec = *(undefined4 *)((longlong)pdVar12 + 0xc);
          uStack_1f0 = *(undefined4 *)(pdVar12 + 1);
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
            local_1f8 = *pdVar12;
          }
          else {
            FUN_1400419b0(&local_1f8,pdVar12);
          }
          uStack_22c = 7;
          local_238 = (double)CONCAT44(local_238._4_4_,1);
          FUN_1400462a0(&local_1f8,&local_238);
          if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          local_218 = (undefined4)local_1f8;
          uStack_214 = local_1f8._4_4_;
          uStack_210 = uStack_1f0;
          uStack_20c = uStack_1ec;
          if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_218);
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          local_218 = _DAT_1419e5eb0;
          uStack_214 = uRam00000001419e5eb4;
          uStack_210 = uRam00000001419e5eb8;
          uStack_20c = uRam00000001419e5ebc;
          local_108 = local_168;
          if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          FUN_140041b80(&local_158,&local_218);
          local_100 = &local_158;
          local_f8 = &local_138;
          FUN_140e634e0(param_1,param_2,&local_228,6,CONCAT44(uVar7,DAT_141a08858),&local_120);
          local_1c8 = 0x59;
          local_218 = (undefined4)local_138;
          uStack_214 = local_138._4_4_;
          uStack_210 = uStack_130;
          uStack_20c = uStack_12c;
          if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e0);
          }
          FUN_140041b80(&local_e0,&local_218);
          FUN_140e87930(&local_d0,DAT_1419fe3f8,0x80000000,&local_e0);
        }
LAB_140474538:
        local_1c8 = 0x5d;
        if (&local_138 != param_3) {
          local_218 = (undefined4)local_138;
          uStack_214 = local_138._4_4_;
          uStack_210 = uStack_130;
          uStack_20c = uStack_12c;
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          FUN_140041b80(param_3,&local_218);
        }
        goto LAB_140475685;
      }
      local_1c8 = 0x44;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_228 = 0;
      local_220 = 0;
      local_21c = 5;
      local_218 = _DAT_141dd31d8;
      uStack_214 = uRam0000000141dd31dc;
      uStack_210 = uRam0000000141dd31e0;
      uStack_20c = DAT_141dd31e4;
      if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_218);
      local_128 = &local_1a8;
      if ((int)local_78[0] < 2) {
        pdVar8 = (double *)&DAT_1419df7b0;
LAB_140473b45:
        local_218 = *(undefined4 *)pdVar8;
        uStack_214 = *(undefined4 *)((longlong)pdVar8 + 4);
        uStack_210 = *(undefined4 *)(pdVar8 + 1);
        uStack_20c = *(undefined4 *)((longlong)pdVar8 + 0xc);
        if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        FUN_140041b80(&local_198,&local_218);
      }
      else {
        pdVar8 = (double *)local_70[1];
        if (pdVar8 != &local_198) goto LAB_140473b45;
      }
      local_120 = &local_198;
      local_218 = _DAT_141dd31a8;
      uStack_214 = uRam0000000141dd31ac;
      uStack_210 = uRam0000000141dd31b0;
      uStack_20c = DAT_141dd31b4;
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_218);
      local_118 = &local_188;
      if (((int)local_78[0] < 1) || (pdVar12 = (double *)*local_70, pdVar12 != &local_178)) {
        local_218 = *(undefined4 *)pdVar12;
        uStack_214 = *(undefined4 *)((longlong)pdVar12 + 4);
        uStack_210 = *(undefined4 *)(pdVar12 + 1);
        uStack_20c = *(undefined4 *)((longlong)pdVar12 + 0xc);
        if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        FUN_140041b80(&local_178,&local_218);
      }
      local_110 = &local_178;
      local_218 = _DAT_141dd31e8;
      uStack_214 = uRam0000000141dd31ec;
      uStack_210 = uRam0000000141dd31f0;
      uStack_20c = DAT_141dd31f4;
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_168);
      }
      FUN_140041b80(local_168,&local_218);
      local_108 = local_168;
      FUN_1401ef7f0(param_1,param_2,&local_228,5,&local_128);
      local_1c8 = 0x45;
      goto LAB_140475685;
    }
  }
  local_1c8 = 0x1d;
  if ((int)local_78[0] < 5) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_70[4];
  }
  cVar4 = FUN_140e491e0(puVar10);
  if (cVar4 == '\0') {
    local_1c8 = 0x23;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c0);
    }
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b4 = 5;
    local_128 = &local_1e8;
    local_120 = &local_1e8;
    local_218 = _DAT_141dc6640;
    uStack_214 = uRam0000000141dc6644;
    uStack_210 = uRam0000000141dc6648;
    uStack_20c = uRam0000000141dc664c;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_218);
    local_118 = &local_188;
    if ((int)local_78[0] < 3) {
      pdVar8 = (double *)&DAT_1419df7b0;
LAB_14047490d:
      local_218 = *(undefined4 *)pdVar8;
      uStack_214 = *(undefined4 *)((longlong)pdVar8 + 4);
      uStack_210 = *(undefined4 *)(pdVar8 + 1);
      uStack_20c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_218);
    }
    else {
      pdVar8 = (double *)local_70[2];
      if (pdVar8 != &local_178) goto LAB_14047490d;
    }
    local_110 = &local_178;
    uVar9 = CONCAT44(uVar7,DAT_141a064d8);
    pdVar8 = (double *)FUN_140e634e0(param_1,param_2,&local_1c0,1,uVar9,&local_128);
    uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uStack_1ec = *(undefined4 *)((longlong)pdVar8 + 0xc);
    uStack_1f0 = *(undefined4 *)(pdVar8 + 1);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
      local_1f8 = *pdVar8;
    }
    else {
      FUN_1400419b0(&local_1f8,pdVar8);
    }
    uStack_22c = 7;
    local_238 = (double)CONCAT44(local_238._4_4_,1);
    FUN_1400462a0(&local_1f8,&local_238);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_218 = (undefined4)local_1f8;
    uStack_214 = local_1f8._4_4_;
    uStack_210 = uStack_1f0;
    uStack_20c = uStack_1ec;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_218);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if ((int)local_78[0] < 3) {
      puVar10 = &DAT_1419df7b0;
LAB_140474a5f:
      local_218 = *(undefined4 *)puVar10;
      uStack_214 = *(undefined4 *)((longlong)puVar10 + 4);
      uStack_210 = *(undefined4 *)(puVar10 + 1);
      uStack_20c = *(undefined4 *)((longlong)puVar10 + 0xc);
      local_108 = local_168;
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_218);
    }
    else {
      puVar10 = (undefined8 *)local_70[2];
      local_108 = local_168;
      if (puVar10 != &local_158) goto LAB_140474a5f;
    }
    local_100 = &local_158;
    if ((int)local_78[0] < 4) {
      puVar10 = &DAT_1419df7b0;
LAB_140474aaf:
      local_218 = *(undefined4 *)puVar10;
      uStack_214 = *(undefined4 *)((longlong)puVar10 + 4);
      uStack_210 = *(undefined4 *)(puVar10 + 1);
      uStack_20c = *(undefined4 *)((longlong)puVar10 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_218);
    }
    else {
      puVar10 = (undefined8 *)local_70[3];
      if (puVar10 != &local_148) goto LAB_140474aaf;
    }
    uVar6 = DAT_141a08858;
  }
  else {
    local_1c8 = 0x1f;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c0);
    }
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b4 = 5;
    local_128 = &local_1e8;
    local_120 = &local_1e8;
    local_218 = _DAT_141dc6640;
    uStack_214 = uRam0000000141dc6644;
    uStack_210 = uRam0000000141dc6648;
    uStack_20c = uRam0000000141dc664c;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_218);
    local_118 = &local_188;
    if ((int)local_78[0] < 3) {
      pdVar8 = (double *)&DAT_1419df7b0;
LAB_14047466b:
      local_218 = *(undefined4 *)pdVar8;
      uStack_214 = *(undefined4 *)((longlong)pdVar8 + 4);
      uStack_210 = *(undefined4 *)(pdVar8 + 1);
      uStack_20c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_218);
    }
    else {
      pdVar8 = (double *)local_70[2];
      if (pdVar8 != &local_178) goto LAB_14047466b;
    }
    local_110 = &local_178;
    uVar9 = CONCAT44(uVar7,DAT_141a064d8);
    pdVar8 = (double *)FUN_140e634e0(param_1,param_2,&local_1c0,1,uVar9,&local_128);
    uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uStack_1ec = *(undefined4 *)((longlong)pdVar8 + 0xc);
    uStack_1f0 = *(undefined4 *)(pdVar8 + 1);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
      local_1f8 = *pdVar8;
    }
    else {
      FUN_1400419b0(&local_1f8,pdVar8);
    }
    uStack_22c = 7;
    local_238 = (double)CONCAT44(local_238._4_4_,1);
    FUN_1400462a0(&local_1f8,&local_238);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_218 = (undefined4)local_1f8;
    uStack_214 = local_1f8._4_4_;
    uStack_210 = uStack_1f0;
    uStack_20c = uStack_1ec;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_218);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if ((int)local_78[0] < 3) {
      puVar10 = &DAT_1419df7b0;
LAB_1404747bd:
      local_218 = *(undefined4 *)puVar10;
      uStack_214 = *(undefined4 *)((longlong)puVar10 + 4);
      uStack_210 = *(undefined4 *)(puVar10 + 1);
      uStack_20c = *(undefined4 *)((longlong)puVar10 + 0xc);
      local_108 = local_168;
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_218);
    }
    else {
      puVar10 = (undefined8 *)local_70[2];
      local_108 = local_168;
      if (puVar10 != &local_158) goto LAB_1404747bd;
    }
    local_100 = &local_158;
    if ((int)local_78[0] < 4) {
      puVar10 = &DAT_1419df7b0;
LAB_14047480d:
      local_218 = *(undefined4 *)puVar10;
      uStack_214 = *(undefined4 *)((longlong)puVar10 + 4);
      uStack_210 = *(undefined4 *)(puVar10 + 1);
      uStack_20c = *(undefined4 *)((longlong)puVar10 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_218);
    }
    else {
      puVar10 = (undefined8 *)local_70[3];
      if (puVar10 != &local_148) goto LAB_14047480d;
    }
    uVar6 = DAT_141a08eb8;
  }
  local_f8 = &local_148;
  uVar9 = CONCAT44(uVar7,uVar6);
  FUN_140e634e0(param_1,param_2,&local_228,6,uVar9,&local_120);
  uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
  local_1c8 = 0x27;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  local_128 = &local_b0;
  local_218 = _DAT_1419e5ea0;
  uStack_214 = uRam00000001419e5ea4;
  uStack_210 = uRam00000001419e5ea8;
  uStack_20c = uRam00000001419e5eac;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_218);
  local_120 = &local_198;
  uVar9 = CONCAT44(uVar7,DAT_1419ff4f8);
  pdVar8 = (double *)FUN_140e634e0(param_1,param_2,&local_228,2,uVar9,&local_128);
  uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (pdVar8 != &local_208) {
    local_218 = *(undefined4 *)pdVar8;
    uStack_214 = *(undefined4 *)((longlong)pdVar8 + 4);
    uStack_210 = *(undefined4 *)(pdVar8 + 1);
    uStack_20c = *(undefined4 *)((longlong)pdVar8 + 0xc);
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_218);
  }
  local_1c8 = 0x28;
  iVar5 = FUN_140e851f0(&local_208,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 == 0) {
    local_1c8 = 0x2a;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    local_218 = _DAT_141dd31b8;
    uStack_214 = uRam0000000141dd31bc;
    uStack_210 = uRam0000000141dd31c0;
    uStack_20c = DAT_141dd31c4;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_218);
    local_128 = &local_1a8;
    if (((int)local_78[0] < 1) || (pdVar12 = (double *)*local_70, pdVar12 != &local_198)) {
      local_218 = *(undefined4 *)pdVar12;
      uStack_214 = *(undefined4 *)((longlong)pdVar12 + 4);
      uStack_210 = *(undefined4 *)(pdVar12 + 1);
      uStack_20c = *(undefined4 *)((longlong)pdVar12 + 0xc);
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_218);
    }
    local_120 = &local_198;
    local_218 = _DAT_141dd31e8;
    uStack_214 = uRam0000000141dd31ec;
    uStack_210 = uRam0000000141dd31f0;
    uStack_20c = DAT_141dd31f4;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_218);
    local_118 = &local_188;
    FUN_1401ef7f0(param_1,param_2,&local_228,3,&local_128);
    local_1c8 = 0x2b;
  }
  else {
    local_1c8 = 0x2f;
    if ((int)local_78[0] < 3) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)local_70[2];
    }
    uStack_22c = 10;
    local_238 = 3.95252516672997e-323;
    iVar5 = FUN_140e851f0(puVar10,&local_238,DAT_141955260,0);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    if (iVar5 == 0) {
      local_1c8 = 0x2f;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_228 = 0;
      local_220 = 0;
      local_21c = 5;
      dVar14 = local_208;
      if ((local_1fc & 0xffffff) != 0) {
        dVar14 = (double)FUN_140e4b060(&local_208);
      }
      uVar6 = FUN_140e4a740(&local_1e8);
      dVar15 = local_208;
      if ((local_1fc & 0xffffff) != 0) {
        dVar15 = (double)FUN_140e4b060(&local_208);
      }
      dVar13 = local_1e8;
      if ((local_1dc & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_1e8);
      }
      uVar9 = FUN_140ea8b20(&local_228,uVar6,(longlong)dVar14,8);
      FUN_140ea8d00((longlong)dVar13,(longlong)dVar15,5,uVar9);
    }
    local_1c8 = 0x30;
    if ((int)local_78[0] < 3) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)local_70[2];
    }
    uStack_22c = 10;
    local_238 = 2.47032822920623e-323;
    iVar5 = FUN_140e851f0(puVar10,&local_238,DAT_141955260,0);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    if (iVar5 == 0) {
      local_1c8 = 0x30;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_228 = 0;
      local_220 = 0;
      local_21c = 5;
      dVar14 = local_208;
      if ((local_1fc & 0xffffff) != 0) {
        dVar14 = (double)FUN_140e4b060(&local_208);
      }
      uVar6 = FUN_140e4a740(&local_1e8);
      dVar15 = local_208;
      if ((local_1fc & 0xffffff) != 0) {
        dVar15 = (double)FUN_140e4b060(&local_208);
      }
      dVar13 = local_1e8;
      if ((local_1dc & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_1e8);
      }
      uVar9 = FUN_140ea8b20(&local_228,uVar6,(longlong)dVar14,5);
      FUN_140ea8d00((longlong)dVar13,(longlong)dVar15,8,uVar9);
    }
    local_1c8 = 0x33;
    if ((int)local_78[0] < 3) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)local_70[2];
    }
    uStack_22c = 10;
    local_238 = 2.96439387504748e-323;
    iVar5 = FUN_140e851f0(puVar10,&local_238,DAT_141955260,0);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    if (iVar5 == 0) {
      local_1c8 = 0x33;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_228 = 0;
      local_220 = 0;
      local_21c = 5;
      dVar14 = local_208;
      if ((local_1fc & 0xffffff) != 0) {
        dVar14 = (double)FUN_140e4b060(&local_208);
      }
      uVar6 = FUN_140e4a740(&local_1e8);
      dVar15 = local_208;
      if ((local_1fc & 0xffffff) != 0) {
        dVar15 = (double)FUN_140e4b060(&local_208);
      }
      dVar13 = local_1e8;
      if ((local_1dc & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_1e8);
      }
      uVar9 = FUN_140ea8b20(&local_228,uVar6,(longlong)dVar14,6);
      FUN_140ea8d00((longlong)dVar13,(longlong)dVar15,7,uVar9);
    }
    local_1c8 = 0x34;
    if ((int)local_78[0] < 3) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)local_70[2];
    }
    uStack_22c = 10;
    local_238 = 3.45845952088873e-323;
    iVar5 = FUN_140e851f0(puVar10,&local_238,DAT_141955260,0);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    if (iVar5 == 0) {
      local_1c8 = 0x34;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_228 = 0;
      local_220 = 0;
      local_21c = 5;
      dVar14 = local_208;
      if ((local_1fc & 0xffffff) != 0) {
        dVar14 = (double)FUN_140e4b060(&local_208);
      }
      uVar6 = FUN_140e4a740(&local_1e8);
      dVar15 = local_208;
      if ((local_1fc & 0xffffff) != 0) {
        dVar15 = (double)FUN_140e4b060(&local_208);
      }
      dVar13 = local_1e8;
      if ((local_1dc & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_1e8);
      }
      uVar9 = FUN_140ea8b20(&local_228,uVar6,(longlong)dVar14,7);
      FUN_140ea8d00((longlong)dVar13,(longlong)dVar15,6,uVar9);
    }
    local_1c8 = 0x37;
    if ((int)local_78[0] < 3) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)local_70[2];
    }
    uStack_22c = 10;
    local_238 = 2.96439387504748e-323;
    iVar5 = FUN_140e851f0(puVar10,&local_238,DAT_141955260,0);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    if (iVar5 != 0) {
      if (2 < (int)local_78[0]) {
        pdVar12 = (double *)local_70[2];
      }
      uStack_22c = 10;
      local_238 = 3.45845952088873e-323;
      iVar5 = FUN_140e851f0(pdVar12,&local_238,DAT_141955260,0);
      if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      if (iVar5 != 0) goto LAB_140475685;
    }
    local_1c8 = 0x39;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c0);
    }
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b4 = 5;
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    local_f0 = 0;
    local_e8 = 0;
    local_e4 = 5;
    local_128 = &local_1e8;
    local_120 = &local_1e8;
    local_218 = _DAT_141dc6640;
    uStack_214 = uRam0000000141dc6644;
    uStack_210 = uRam0000000141dc6648;
    uStack_20c = uRam0000000141dc664c;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_218);
    local_118 = &local_188;
    local_218 = _DAT_1419e5eb0;
    uStack_214 = uRam00000001419e5eb4;
    uStack_210 = uRam00000001419e5eb8;
    uStack_20c = uRam00000001419e5ebc;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_218);
    local_110 = &local_178;
    uVar9 = CONCAT44(uVar7,DAT_141a064d8);
    pdVar12 = (double *)FUN_140e634e0(param_1,param_2,&local_1c0,1,uVar9,&local_128);
    uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uStack_1ec = *(undefined4 *)((longlong)pdVar12 + 0xc);
    uStack_1f0 = *(undefined4 *)(pdVar12 + 1);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
      local_1f8 = *pdVar12;
    }
    else {
      FUN_1400419b0(&local_1f8,pdVar12);
    }
    uStack_22c = 7;
    local_238 = (double)CONCAT44(local_238._4_4_,1);
    FUN_1400462a0(&local_1f8,&local_238);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_218 = (undefined4)local_1f8;
    uStack_214 = local_1f8._4_4_;
    uStack_210 = uStack_1f0;
    uStack_20c = uStack_1ec;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_218);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_218 = _DAT_1419e5eb0;
    uStack_214 = uRam00000001419e5eb4;
    uStack_210 = uRam00000001419e5eb8;
    uStack_20c = uRam00000001419e5ebc;
    local_108 = local_168;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_218);
    local_100 = &local_158;
    dVar14 = local_208;
    if ((local_1fc & 0xffffff) != 0) {
      dVar14 = (double)FUN_140e4b060(&local_208);
    }
    uVar6 = FUN_140e4a740(&local_1e8);
    puVar10 = (undefined8 *)FUN_140ea8b20(&local_f0,uVar6,(longlong)dVar14,7);
    if (puVar10 != &local_148) {
      local_218 = *(undefined4 *)puVar10;
      uStack_214 = *(undefined4 *)((longlong)puVar10 + 4);
      uStack_210 = *(undefined4 *)(puVar10 + 1);
      uStack_20c = *(undefined4 *)((longlong)puVar10 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_218);
    }
    local_f8 = &local_148;
    FUN_140e634e0(param_1,param_2,&local_228,6,CONCAT44(uVar7,DAT_141a08858),&local_120);
    local_1c8 = 0x3a;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    dVar14 = local_208;
    if ((local_1fc & 0xffffff) != 0) {
      dVar14 = (double)FUN_140e4b060(&local_208);
    }
    uVar7 = FUN_140e4a740(&local_1e8);
    puVar10 = (undefined8 *)FUN_140ea8b20(&local_228,uVar7,(longlong)dVar14,7);
    if (puVar10 != &local_e0) {
      local_218 = *(undefined4 *)puVar10;
      uStack_214 = *(undefined4 *)((longlong)puVar10 + 4);
      uStack_210 = *(undefined4 *)(puVar10 + 1);
      uStack_20c = *(undefined4 *)((longlong)puVar10 + 0xc);
      if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e0);
      }
      FUN_140041b80(&local_e0,&local_218);
    }
    FUN_140e87930(&local_d0,DAT_1419fe3f8,0x80000000,&local_e0);
  }
LAB_140475685:
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  _eh_vector_destructor_iterator_(&local_1a8,0x10,7,FUN_140041b30);
  if (0 < (int)local_78[0]) {
    puVar10 = local_70;
    do {
      puVar1 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_1d8;
  return param_3;
}

