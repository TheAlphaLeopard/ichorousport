// gml_Script_StructPickRandomVariable @ 0x1405db440

undefined8 *
gml_Script_StructPickRandomVariable
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  double *pdVar8;
  undefined8 ***pppuVar9;
  undefined8 ****ppppuVar10;
  double ***pppdVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  double dVar15;
  undefined4 uVar17;
  undefined8 uVar16;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  uint local_198;
  double local_190;
  uint local_184;
  double **local_180;
  double **ppdStack_178;
  double ***local_170;
  double *local_168;
  double ***local_160;
  double *local_158;
  double local_150;
  uint local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 ***local_130;
  uint uStack_124;
  undefined8 local_120;
  char *local_118;
  undefined4 local_110;
  double local_108;
  undefined4 local_fc;
  double **local_f8 [4];
  double **local_d8;
  undefined4 local_cc;
  double local_c8;
  byte local_bc;
  double local_b8;
  int local_ac;
  undefined8 **local_a8;
  undefined8 **ppuStack_a0;
  double **local_98;
  undefined4 local_8c;
  double local_88;
  undefined4 local_7c;
  double local_78;
  uint uStack_6c;
  double local_68;
  undefined4 local_5c;
  
  local_118 = "gml_Script_struct_sync";
  local_120 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_120;
  local_110 = 0x10;
  uVar17 = 1;
  _eh_vector_constructor_iterator_(local_f8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar6 = 0xffffff;
  local_198 = 0xffffff;
  uStack_6c = 0xffffff;
  local_78 = 0.0;
  local_144 = 0xffffff;
  local_150 = 0.0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  uStack_124 = 0xffffff;
  local_130 = (undefined8 ***)0x0;
  local_ac = 0xffffff;
  local_b8 = 0.0;
  local_184 = 0xffffff;
  local_190 = 0.0;
  local_8c = 0xffffff;
  local_98 = (double **)0x0;
  local_7c = 0xffffff;
  local_88 = 0.0;
  local_1ac = 0;
  local_1b8 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_134 = 0;
  local_140 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_110 = 0x12;
  if (param_4 < 1) {
    pppuVar9 = (undefined8 ***)&DAT_1419df7b0;
LAB_1405db562:
    local_a8 = *pppuVar9;
    ppuStack_a0 = pppuVar9[1];
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_a8);
  }
  else {
    pppuVar9 = (undefined8 ***)*param_5;
    if ((double ***)pppuVar9 != &local_d8) goto LAB_1405db562;
  }
  local_160 = &local_d8;
  uVar16 = CONCAT44(uVar17,DAT_1419fcb88);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_1b8,1,uVar16,&local_160);
  uVar17 = (undefined4)((ulonglong)uVar16 >> 0x20);
  cVar3 = FUN_140e491e0(uVar7);
  if (cVar3 != '\0') {
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    if (param_4 < 2) {
      pdVar8 = (double *)&DAT_1419df7b0;
LAB_1405db612:
      local_a8 = (undefined8 **)*pdVar8;
      ppuStack_a0 = (undefined8 **)pdVar8[1];
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_a8);
    }
    else {
      pdVar8 = (double *)param_5[1];
      if (pdVar8 != &local_c8) goto LAB_1405db612;
    }
    local_158 = &local_c8;
    uVar16 = CONCAT44(uVar17,DAT_1419fcb88);
    uVar7 = FUN_140e634e0(param_1,param_2,&local_1a8,1,uVar16,&local_158);
    uVar17 = (undefined4)((ulonglong)uVar16 >> 0x20);
    cVar3 = FUN_140e491e0(uVar7);
    if (cVar3 != '\0') {
      local_110 = 0x14;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_1b8 = 0;
      local_1b0 = 0;
      local_1ac = 5;
      if (param_4 < 1) {
        pppuVar9 = (undefined8 ***)&DAT_1419df7b0;
LAB_1405db6c9:
        local_a8 = *pppuVar9;
        ppuStack_a0 = pppuVar9[1];
        if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_a8);
      }
      else {
        pppuVar9 = (undefined8 ***)*param_5;
        if ((double ***)pppuVar9 != local_f8) goto LAB_1405db6c9;
      }
      local_170 = local_f8;
      ppppuVar10 = (undefined8 ****)CONCAT44(uVar17,DAT_141a063c8);
      pdVar8 = (double *)FUN_140e634e0(param_1,param_2,&local_1b8,1,ppppuVar10,&local_170);
      dVar15 = 0.0;
      uVar6 = 0xffffff;
      if (pdVar8 != &local_78) {
        local_a8 = (undefined8 **)*pdVar8;
        ppuStack_a0 = (undefined8 **)pdVar8[1];
        FUN_140041b80(&local_78,&local_a8);
        local_198 = uStack_6c;
        dVar15 = local_78;
        uVar6 = uStack_6c;
      }
      local_110 = 0x16;
      if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_150);
      }
      local_144 = 0;
      local_150 = 0.0;
      bVar2 = true;
LAB_1405db782:
      uVar17 = (undefined4)((ulonglong)ppppuVar10 >> 0x20);
      if (!bVar2) {
        local_110 = 0x16;
        uVar4 = local_144 & 0xffffff;
        if (uVar4 != 0) {
          if (uVar4 != 1) {
            if (uVar4 == 7) {
              local_150 = (double)CONCAT44(local_150._4_4_,local_150._0_4_ + 1);
            }
            else if (uVar4 == 10) {
              local_150 = (double)((longlong)local_150 + 1);
            }
            else {
              if (uVar4 == 0xd) {
                local_144 = 0;
                goto LAB_1405db7d9;
              }
              FUN_140042910(&DAT_14172c3d8,&local_150,&local_150);
            }
            goto LAB_1405db7e2;
          }
          local_150 = (double)FUN_140e4b060(&local_150);
          local_144 = 0;
        }
LAB_1405db7d9:
        local_150 = local_150 + 1.0;
      }
LAB_1405db7e2:
      bVar2 = false;
      iVar5 = 0;
      if ((uVar6 == 2) && (dVar15 != 0.0)) {
        iVar5 = *(int *)((longlong)dVar15 + 0x24);
      }
      local_5c = 0;
      local_68 = (double)iVar5;
      iVar5 = FUN_140e851f0(&local_150,&local_68,DAT_141955260,1);
      if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      if (!(iVar5 == -2 || -1 < iVar5)) {
        local_110 = 0x17;
        iVar5 = FUN_140e4a740(&local_150);
        pdVar8 = (double *)0x0;
        if (((local_198 & 0xffffff) == 2) && (dVar15 != 0.0)) {
          if ((iVar5 < 0) || (*(int *)((longlong)dVar15 + 0x24) <= iVar5)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                          *(undefined4 *)((longlong)dVar15 + 0x24));
          }
          else {
            pdVar8 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar15 + 8));
          }
          if (pdVar8 != &local_108) goto LAB_1405db8e7;
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
          pdVar8 = &local_78;
LAB_1405db8e7:
          local_180 = (double **)*pdVar8;
          ppdStack_178 = (double **)pdVar8[1];
          if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          FUN_140041b80(&local_108,&local_180);
        }
        local_110 = 0x19;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        iVar5 = 0;
        local_1b8 = 0;
        local_1b0 = 0;
        local_1ac = 5;
        if (param_4 < 2) {
          pppuVar9 = (undefined8 ***)&DAT_1419df7b0;
LAB_1405db963:
          local_180 = (double **)*pppuVar9;
          ppdStack_178 = (double **)pppuVar9[1];
          if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_f8);
          }
          FUN_140041b80(local_f8,&local_180);
        }
        else {
          pppuVar9 = (undefined8 ***)param_5[1];
          if ((double ***)pppuVar9 != local_f8) goto LAB_1405db963;
        }
        local_170 = local_f8;
        local_168 = &local_108;
        uVar16 = CONCAT44(uVar17,DAT_1419fcba8);
        uVar7 = FUN_140e634e0(param_1,param_2,&local_1b8,2,uVar16,&local_170);
        uVar17 = (undefined4)((ulonglong)uVar16 >> 0x20);
        cVar3 = FUN_140e491e0(uVar7);
        if (cVar3 == '\0') {
          local_110 = 0x1a;
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          local_1a8 = 0;
          local_1a0 = 0;
          local_19c = 5;
          if (param_4 < 1) {
            pppuVar9 = (undefined8 ***)&DAT_1419df7b0;
LAB_1405dba28:
            local_180 = (double **)*pppuVar9;
            ppdStack_178 = (double **)pppuVar9[1];
            if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_d8);
            }
            FUN_140041b80(&local_d8,&local_180);
          }
          else {
            pppuVar9 = (undefined8 ***)*param_5;
            if ((double ***)pppuVar9 != &local_d8) goto LAB_1405dba28;
          }
          local_160 = &local_d8;
          local_158 = &local_108;
          if (param_4 < 2) {
            puVar14 = &DAT_1419df7b0;
          }
          else {
            puVar14 = (undefined8 *)param_5[1];
          }
          ppppuVar10 = (undefined8 ****)
                       FUN_140e634e0(param_1,param_2,&local_1a8,2,CONCAT44(uVar17,DAT_141a01138),
                                     &local_160);
          FUN_140e98ef0(param_1,param_2,puVar14,&local_108,ppppuVar10);
          local_110 = 0x1b;
          uVar6 = local_198;
        }
        else {
          local_110 = 0x1e;
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          local_1b8 = 0;
          local_1b0 = 0;
          local_1ac = 5;
          if (param_4 < 1) {
            pppuVar9 = (undefined8 ***)&DAT_1419df7b0;
LAB_1405dbb1c:
            local_180 = (double **)*pppuVar9;
            ppdStack_178 = (double **)pppuVar9[1];
            if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_f8);
            }
            FUN_140041b80(local_f8,&local_180);
          }
          else {
            pppuVar9 = (undefined8 ***)*param_5;
            if ((double ***)pppuVar9 != local_f8) goto LAB_1405dbb1c;
          }
          local_170 = local_f8;
          local_168 = &local_108;
          uVar7 = CONCAT44(uVar17,DAT_141a01138);
          pppdVar11 = (double ***)FUN_140e634e0(param_1,param_2,&local_1b8,2,uVar7,&local_170);
          uVar17 = (undefined4)((ulonglong)uVar7 >> 0x20);
          if ((undefined8 ****)pppdVar11 != &local_130) {
            local_180 = *pppdVar11;
            ppdStack_178 = pppdVar11[1];
            if ((1 << ((byte)uStack_124 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_130);
            }
            FUN_140041b80(&local_130,&local_180);
          }
          local_110 = 0x1f;
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          local_1b8 = 0;
          local_1b0 = 0;
          local_1ac = 5;
          if (param_4 < 2) {
            pppuVar9 = (undefined8 ***)&DAT_1419df7b0;
LAB_1405dbc07:
            local_180 = (double **)*pppuVar9;
            ppdStack_178 = (double **)pppuVar9[1];
            if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_f8);
            }
            FUN_140041b80(local_f8,&local_180);
          }
          else {
            pppuVar9 = (undefined8 ***)param_5[1];
            if ((double ***)pppuVar9 != local_f8) goto LAB_1405dbc07;
          }
          local_170 = local_f8;
          local_168 = &local_108;
          uVar7 = CONCAT44(uVar17,DAT_141a01138);
          pdVar8 = (double *)FUN_140e634e0(param_1,param_2,&local_1b8,2,uVar7,&local_170);
          uVar17 = (undefined4)((ulonglong)uVar7 >> 0x20);
          if (pdVar8 != &local_b8) {
            local_180 = (double **)*pdVar8;
            ppdStack_178 = (double **)pdVar8[1];
            if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_b8);
            }
            FUN_140041b80(&local_b8,&local_180);
          }
          local_110 = 0x21;
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          local_1b8 = 0;
          local_1b0 = 0;
          local_1ac = 5;
          local_170 = (double ***)&local_130;
          uVar16 = CONCAT44(uVar17,DAT_1419fcb88);
          uVar7 = FUN_140e634e0(param_1,param_2,&local_1b8,1,uVar16,&local_170);
          uVar17 = (undefined4)((ulonglong)uVar16 >> 0x20);
          cVar3 = FUN_140e491e0(uVar7);
          if (cVar3 != '\0') {
            if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a8);
            }
            local_1a8 = 0;
            local_1a0 = 0;
            local_19c = 5;
            local_168 = &local_b8;
            uVar16 = CONCAT44(uVar17,DAT_1419fcb88);
            uVar7 = FUN_140e634e0(param_1,param_2,&local_1a8,1,uVar16,&local_168);
            uVar17 = (undefined4)((ulonglong)uVar16 >> 0x20);
            cVar3 = FUN_140e491e0(uVar7);
            if (cVar3 != '\0') {
              local_110 = 0x22;
              if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_140);
              }
              local_140 = 0;
              local_138 = 0;
              local_134 = 5;
              local_160 = (double ***)&local_130;
              local_158 = &local_b8;
              ppppuVar10 = &local_160;
              gml_Script_StructPickRandomVariable(param_1,param_2,&local_140,2,ppppuVar10);
              bVar2 = false;
              uVar6 = local_198;
              goto LAB_1405db782;
            }
          }
          local_110 = 0x24;
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          local_1b8 = 0;
          local_1b0 = 0;
          local_1ac = 5;
          local_170 = (double ***)&local_130;
          ppppuVar10 = (undefined8 ****)CONCAT44(uVar17,DAT_1419fdb88);
          uVar7 = FUN_140e634e0(param_1,param_2,&local_1b8,1,ppppuVar10,&local_170);
          cVar3 = FUN_140e491e0(uVar7);
          uVar17 = (undefined4)((ulonglong)ppppuVar10 >> 0x20);
          if (cVar3 != '\0') {
            if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a8);
            }
            local_1a8 = 0;
            local_1a0 = 0;
            local_19c = 5;
            local_168 = &local_b8;
            ppppuVar10 = (undefined8 ****)CONCAT44(uVar17,DAT_1419fdb88);
            uVar7 = FUN_140e634e0(param_1,param_2,&local_1a8,1,ppppuVar10,&local_168);
            cVar3 = FUN_140e491e0(uVar7);
            uVar17 = (undefined4)((ulonglong)ppppuVar10 >> 0x20);
            if (cVar3 != '\0') {
              iVar13 = 0;
              if ((uStack_124 == 2) && (local_130 != (undefined8 ***)0x0)) {
                iVar13 = *(int *)((longlong)local_130 + 0x24);
              }
              iVar12 = 0;
              if ((local_ac == 2) && (local_b8 != 0.0)) {
                iVar12 = *(int *)((longlong)local_b8 + 0x24);
              }
              if (iVar13 != iVar12) {
                local_110 = 0x26;
                if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_140);
                }
                local_140 = 0;
                local_138 = 0;
                local_134 = 5;
                if ((uStack_124 == 2) && (local_130 != (undefined8 ***)0x0)) {
                  iVar5 = *(int *)((longlong)local_130 + 0x24);
                }
                if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_d8);
                }
                local_cc = 0;
                local_d8 = (double **)(double)iVar5;
                local_160 = &local_d8;
                if (param_4 < 2) {
                  puVar14 = &DAT_1419df7b0;
                }
                else {
                  puVar14 = (undefined8 *)param_5[1];
                }
                ppppuVar10 = (undefined8 ****)
                             FUN_140e634e0(param_1,param_2,&local_140,1,
                                           CONCAT44(uVar17,DAT_1419fd218),&local_160);
                FUN_140e98ef0(param_1,param_2,puVar14,&local_108,ppppuVar10);
              }
              local_110 = 0x28;
              if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_190);
              }
              local_184 = 0;
              local_190 = 0.0;
              bVar1 = true;
LAB_1405dbfe0:
              do {
                iVar5 = 0;
                if (!bVar1) {
                  local_110 = 0x28;
                  uVar6 = local_184 & 0xffffff;
                  if (uVar6 != 0) {
                    if (uVar6 != 1) {
                      if (uVar6 == 7) {
                        local_190 = (double)CONCAT44(local_190._4_4_,local_190._0_4_ + 1);
                      }
                      else if (uVar6 == 10) {
                        local_190 = (double)((longlong)local_190 + 1);
                      }
                      else {
                        if (uVar6 == 0xd) {
                          local_184 = 0;
                          goto LAB_1405dc039;
                        }
                        FUN_140042910(&DAT_14172c3d8,&local_190,&local_190);
                      }
                      goto LAB_1405dc043;
                    }
                    local_190 = (double)FUN_140e4b060(&local_190);
                    local_184 = 0;
                  }
LAB_1405dc039:
                  local_190 = local_190 + 1.0;
                }
LAB_1405dc043:
                bVar1 = false;
                if ((uStack_124 == 2) && (local_130 != (undefined8 ***)0x0)) {
                  iVar5 = *(int *)((longlong)local_130 + 0x24);
                }
                ppuStack_a0 = (undefined8 **)((ulonglong)ppuStack_a0 & 0xffffffff);
                local_a8 = (undefined8 **)(double)iVar5;
                iVar5 = FUN_140e851f0(&local_190,&local_a8,DAT_141955260,1);
                if ((1 << ((byte)((ulonglong)ppuStack_a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_a8);
                }
                uVar17 = (undefined4)((ulonglong)ppppuVar10 >> 0x20);
                if (!(iVar5 != -2 && iVar5 < 0)) goto LAB_1405dc540;
                local_110 = 0x29;
                iVar5 = FUN_140e4a740(&local_190);
                pppdVar11 = (double ***)0x0;
                if (((uStack_124 & 0xffffff) == 2) && (local_130 != (undefined8 ***)0x0)) {
                  if ((iVar5 < 0) || (*(int *)((longlong)local_130 + 0x24) <= iVar5)) {
                    FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                                  *(undefined4 *)((longlong)local_130 + 0x24));
                  }
                  else {
                    pppdVar11 = (double ***)(local_130[1] + (longlong)iVar5 * 2);
                  }
                  if (pppdVar11 != &local_98) goto LAB_1405dc13b;
                }
                else {
                  FUN_140e632c0("trying to index variable that is not an array");
                  pppdVar11 = (double ***)&local_130;
LAB_1405dc13b:
                  local_180 = *pppdVar11;
                  ppdStack_178 = pppdVar11[1];
                  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_98);
                  }
                  FUN_140041b80(&local_98,&local_180);
                }
                local_110 = 0x2a;
                if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1b8);
                }
                local_1b8 = 0;
                local_1b0 = 0;
                local_1ac = 5;
                if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1a8);
                }
                local_1a8 = 0;
                local_1a0 = 0;
                local_19c = 5;
                if (param_4 < 2) {
                  pppuVar9 = (undefined8 ***)&DAT_1419df7b0;
LAB_1405dc1e4:
                  local_180 = (double **)*pppuVar9;
                  ppdStack_178 = (double **)pppuVar9[1];
                  if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(local_f8);
                  }
                  FUN_140041b80(local_f8,&local_180);
                }
                else {
                  pppuVar9 = (undefined8 ***)param_5[1];
                  if ((double ***)pppuVar9 != local_f8) goto LAB_1405dc1e4;
                }
                local_170 = local_f8;
                local_168 = &local_108;
                uVar7 = CONCAT44(uVar17,DAT_141a01138);
                pppuVar9 = (undefined8 ***)
                           FUN_140e634e0(param_1,param_2,&local_1a8,2,uVar7,&local_170);
                uVar17 = (undefined4)((ulonglong)uVar7 >> 0x20);
                if ((double ***)pppuVar9 != &local_d8) {
                  local_180 = (double **)*pppuVar9;
                  ppdStack_178 = (double **)pppuVar9[1];
                  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_d8);
                  }
                  FUN_140041b80(&local_d8,&local_180);
                }
                local_160 = &local_d8;
                local_158 = &local_190;
                uVar7 = CONCAT44(uVar17,DAT_141a03ca8);
                pdVar8 = (double *)FUN_140e634e0(param_1,param_2,&local_1b8,2,uVar7,&local_160);
                uVar17 = (undefined4)((ulonglong)uVar7 >> 0x20);
                if (pdVar8 != &local_88) {
                  local_180 = (double **)*pdVar8;
                  ppdStack_178 = (double **)pdVar8[1];
                  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_88);
                  }
                  FUN_140041b80(&local_88,&local_180);
                }
                local_110 = 0x2b;
                if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1b8);
                }
                local_1b8 = 0;
                local_1b0 = 0;
                local_1ac = 5;
                local_170 = &local_98;
                uVar16 = CONCAT44(uVar17,DAT_1419fcb88);
                uVar7 = FUN_140e634e0(param_1,param_2,&local_1b8,1,uVar16,&local_170);
                uVar17 = (undefined4)((ulonglong)uVar16 >> 0x20);
                cVar3 = FUN_140e491e0(uVar7);
                if (cVar3 != '\0') {
                  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_1a8);
                  }
                  local_1a8 = 0;
                  local_1a0 = 0;
                  local_19c = 5;
                  local_168 = &local_88;
                  uVar16 = CONCAT44(uVar17,DAT_1419fcb88);
                  uVar7 = FUN_140e634e0(param_1,param_2,&local_1a8,1,uVar16,&local_168);
                  uVar17 = (undefined4)((ulonglong)uVar16 >> 0x20);
                  cVar3 = FUN_140e491e0(uVar7);
                  if (cVar3 != '\0') {
                    local_110 = 0x2c;
                    if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_140);
                    }
                    local_140 = 0;
                    local_138 = 0;
                    local_134 = 5;
                    local_160 = &local_98;
                    local_158 = &local_88;
                    ppppuVar10 = &local_160;
                    gml_Script_StructPickRandomVariable(param_1,param_2,&local_140,2,ppppuVar10);
                    goto LAB_1405dbfe0;
                  }
                }
                local_110 = 0x2e;
                if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1b8);
                }
                local_1b8 = 0;
                local_1b0 = 0;
                local_1ac = 5;
                if (param_4 < 2) {
                  pppuVar9 = (undefined8 ***)&DAT_1419df7b0;
LAB_1405dc47a:
                  local_180 = (double **)*pppuVar9;
                  ppdStack_178 = (double **)pppuVar9[1];
                  if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(local_f8);
                  }
                  FUN_140041b80(local_f8,&local_180);
                }
                else {
                  pppuVar9 = (undefined8 ***)param_5[1];
                  if ((double ***)pppuVar9 != local_f8) goto LAB_1405dc47a;
                }
                local_170 = local_f8;
                local_168 = &local_108;
                if ((local_184 & 0xffffff) == 0) {
                  dVar15 = local_190;
                }
                else {
                  dVar15 = (double)FUN_140e4b060(&local_190);
                }
                ppppuVar10 = (undefined8 ****)CONCAT44(uVar17,DAT_141a01138);
                uVar7 = FUN_140e634e0(param_1,param_2,&local_1b8,2,ppppuVar10,&local_170);
                FUN_140e78d10(uVar7,(longlong)dVar15 & 0xffffffff,&local_98);
              } while( true );
            }
          }
          local_110 = 0x32;
          iVar5 = FUN_140e851f0(&local_130,&local_b8,DAT_141955260,0);
          if (iVar5 == 0) {
LAB_1405dc540:
            dVar15 = local_78;
            uVar6 = local_198;
          }
          else {
            local_110 = 0x33;
            if (param_4 < 2) {
              puVar14 = &DAT_1419df7b0;
            }
            else {
              puVar14 = (undefined8 *)param_5[1];
            }
            ppppuVar10 = &local_130;
            FUN_140e98ef0(param_1,param_2,puVar14,&local_108,ppppuVar10);
            bVar2 = false;
            uVar6 = local_198;
          }
        }
        goto LAB_1405db782;
      }
      uVar6 = local_198;
      goto LAB_1405dc59f;
    }
  }
  local_110 = 0x12;
LAB_1405dc59f:
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_120;
  return param_3;
}

