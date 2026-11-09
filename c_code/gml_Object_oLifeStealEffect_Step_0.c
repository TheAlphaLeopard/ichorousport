// gml_Object_oLifeStealEffect_Step_0 @ 0x140b42580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oLifeStealEffect_Step_0(longlong *param_1,longlong *param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  double *pdVar7;
  undefined8 uVar8;
  double *pdVar9;
  double *pdVar10;
  undefined8 *puVar11;
  longlong *local_res8;
  longlong *local_res10;
  undefined4 local_res18;
  undefined4 uVar15;
  ulonglong uVar12;
  double **ppdVar13;
  undefined8 uVar14;
  ulonglong uVar16;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  double local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  double local_1b8;
  double dStack_1b0;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  double local_188;
  byte local_17c;
  double local_178;
  byte local_16c;
  double local_168;
  undefined4 local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  double local_148;
  undefined4 local_13c;
  double *local_138;
  double *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  double local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 local_98 [16];
  longlong local_88;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_res18 = 0;
  local_1a0 = "gml_Object_oLifeSteal_Step_0";
  local_198 = 0;
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  uVar15 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_188,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0.0;
  uStack_dc = 0xffffff;
  local_e8 = 0.0;
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_198 = 2;
  plVar6 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f3e18);
  if (((*(int *)((longlong)plVar6 + 0xc) == 2) && (*plVar6 != 0)) && (*(int *)(*plVar6 + 0x24) != 0)
     ) {
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    pdVar7 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
    if (pdVar7 != &local_188) {
      local_1e8 = *pdVar7;
      uStack_1e0 = pdVar7[1];
      if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_1e8);
    }
    local_138 = &local_188;
    ppdVar13 = &local_138;
    uVar12 = CONCAT44(uVar15,DAT_141a02ef8);
    uVar8 = FUN_140e634e0(local_res8,local_res10,&local_1f8,1,uVar12,ppdVar13);
    cVar2 = FUN_140e491e0(uVar8);
    if (cVar2 != '\0') {
      uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
      uVar16 = (ulonglong)ppdVar13 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_140e87440(uVar8,DAT_141a1f090,0x80000000,&local_b8,uVar12,uVar16);
      FUN_140e87440(uVar8,DAT_1419f5a58,0x80000000,&local_c8,uVar12 & 0xffffffffffffff00,
                    uVar16 & 0xffffffffffffff00);
      iVar3 = FUN_140e851f0(&local_b8,&local_c8,DAT_141955260,1);
      if ((iVar3 == -2) || (iVar3 < 0)) {
        local_198 = 9;
        uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
        iVar3 = 0;
        if ((*(int *)((longlong)plVar6 + 0xc) == 2) && (*plVar6 != 0)) {
          iVar3 = *(int *)(*plVar6 + 0x24);
        }
        uStack_1bc = 0;
        local_1c8 = (double)(8 - iVar3);
        uVar4 = FUN_140e851f0(uVar8,&local_1c8,DAT_141955260,1);
        if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        if (uVar4 < 0x80000000) {
          local_198 = 0xb;
          if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          local_1f8 = 0;
          local_1f0 = 0;
          local_1ec = 5;
          plVar6 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f3e18);
          pdVar7 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f3e28);
          pdVar9 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f3e28);
          if (pdVar7 != &local_188) {
            local_1e8 = *pdVar7;
            uStack_1e0 = pdVar7[1];
            if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_188);
            }
            FUN_140041b80(&local_188,&local_1e8);
          }
          local_138 = &local_188;
          local_1e8 = _DAT_141dc7220;
          uStack_1e0 = dRam0000000141dc7228;
          if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          FUN_140041b80(&local_178,&local_1e8);
          local_130 = &local_178;
          iVar3 = 0;
          if ((*(int *)((longlong)plVar6 + 0xc) == 2) && (*plVar6 != 0)) {
            iVar3 = *(int *)(*plVar6 + 0x24);
          }
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          local_15c = 0;
          local_168 = (double)iVar3;
          local_128 = &local_168;
          FUN_140e609c0(local_res8);
          ppdVar13 = &local_138;
          pdVar10 = (double *)
                    gml_RoomCC_rmGravePit01_0_Create(local_res8,local_res10,&local_1f8,3,ppdVar13);
          uVar15 = (undefined4)((ulonglong)ppdVar13 >> 0x20);
          if (pdVar10 != pdVar9) {
            local_1e8 = *pdVar10;
            uStack_1e0 = pdVar10[1];
            if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(pdVar9);
            }
            FUN_140041b80(pdVar9,&local_1e8);
          }
          FUN_140e60910(1);
          local_198 = 0xc;
          pdVar10 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f3e18);
          iVar3 = FUN_140e4a740(pdVar7);
          if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) &&
             (dVar1 = *pdVar10, dVar1 != 0.0)) {
            if ((iVar3 < 0) || (*(int *)((longlong)dVar1 + 0x24) <= iVar3)) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                            *(undefined4 *)((longlong)dVar1 + 0x24));
              pdVar10 = (double *)0x0;
            }
            else {
              pdVar10 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar1 + 8));
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
          }
          if (pdVar10 != &local_148) {
            local_1e8 = *pdVar10;
            uStack_1e0 = pdVar10[1];
            if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_148);
            }
            FUN_140041b80(&local_148,&local_1e8);
          }
          local_198 = 0xd;
          FUN_140046040(pdVar9);
          local_198 = 0xf;
          if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          local_1f8 = 0;
          local_1f0 = 0;
          local_1ec = 5;
          local_138 = &local_148;
          uVar14 = CONCAT44(uVar15,DAT_141a02ef8);
          uVar8 = FUN_140e634e0(local_res8,local_res10,&local_1f8,1,uVar14,&local_138);
          cVar2 = FUN_140e491e0(uVar8);
          uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
          if (cVar2 == '\0') {
            local_198 = 0x11;
            if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_118);
            }
            local_118 = 0;
            local_110 = 0;
            local_10c = 5;
            pdVar7 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f3e28);
            pdVar9 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f3e18);
            (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f3e28);
            if (pdVar9 != &local_178) {
              local_1e8 = *pdVar9;
              uStack_1e0 = pdVar9[1];
              if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_178);
              }
              FUN_140041b80(&local_178,&local_1e8);
            }
            local_130 = &local_178;
            uStack_1cc = *(undefined4 *)((longlong)pdVar7 + 0xc);
            uStack_1d0 = *(undefined4 *)(pdVar7 + 1);
            if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
              local_1d8 = *pdVar7;
            }
            else {
              FUN_1400419b0(&local_1d8,pdVar7);
            }
            local_res18 = 1;
            uStack_1bc = 7;
            local_1c8 = (double)CONCAT44(local_1c8._4_4_,1);
            FUN_1400462a0(&local_1d8,&local_1c8);
            if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c8);
            }
            uStack_1e0 = (double)CONCAT44(uStack_1cc,uStack_1d0);
            local_1e8 = local_1d8;
            if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_168);
            }
            FUN_140041b80(&local_168,&local_1e8);
            if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            local_128 = &local_168;
            local_1e8 = _DAT_1419ec030;
            uStack_1e0 = dRam00000001419ec038;
            if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_158);
            }
            FUN_140041b80(local_158,&local_1e8);
            local_120 = local_158;
            FUN_140e634e0(local_res8,local_res10,&local_118,3,CONCAT44(uVar15,DAT_1419fd808),
                          &local_130);
            local_198 = 0x12;
            goto LAB_140b434bd;
          }
          local_198 = 0x15;
          iVar3 = FUN_140e63cb0(local_78,&local_res8,&local_res10,&local_148);
          uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
          if (0 < iVar3) {
            do {
              uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
              local_198 = 0x17;
              if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1f8);
              }
              local_1f8 = 0;
              local_1f0 = 0;
              local_1ec = 5;
              pdVar7 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5b48);
              pdVar9 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a574b0);
              if (pdVar9 != &local_188) {
                local_1b8 = *pdVar9;
                dStack_1b0 = pdVar9[1];
                if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_188);
                }
                FUN_140041b80(&local_188,&local_1b8);
              }
              local_138 = &local_188;
              uStack_1cc = *(undefined4 *)((longlong)pdVar7 + 0xc);
              uStack_1d0 = *(undefined4 *)(pdVar7 + 1);
              if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
                local_1d8 = *pdVar7;
              }
              else {
                FUN_1400419b0(&local_1d8,pdVar7);
              }
              local_res18 = 2;
              local_9c = 0;
              local_a8 = 0x3fe0000000000000;
              FUN_140042560(&local_1d8,&local_a8);
              if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_a8);
              }
              uVar14 = CONCAT44(uVar15,DAT_141a047c8);
              uVar8 = FUN_140e634e0(local_res8,local_res10,&local_1f8,1,uVar14,&local_138);
              uStack_1bc = uStack_1cc;
              uStack_1c0 = uStack_1d0;
              if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
                local_1c8 = local_1d8;
              }
              else {
                FUN_1400419b0(&local_1c8,&local_1d8);
              }
              local_res18 = 6;
              FUN_140042560(&local_1c8,uVar8);
              dStack_1b0 = (double)CONCAT44(uStack_1bc,uStack_1c0);
              local_1b8 = local_1c8;
              if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_108);
              }
              FUN_140041b80(&local_108,&local_1b8);
              local_res18 = 2;
              if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1c8);
              }
              local_res18 = 0;
              if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1d8);
              }
              FUN_140e86fa0(local_res8,DAT_141a0a7e8,0,&local_108);
              local_198 = 0x18;
              uVar8 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f090);
              uStack_1e0 = (double)((ulonglong)uStack_1e0 & 0xffffffff);
              local_1e8 = 2.0;
              FUN_1400462a0(uVar8,&local_1e8);
              if ((1 << ((byte)((ulonglong)uStack_1e0 >> 0x20) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1e8);
              }
              cVar2 = FUN_140e643f0(local_78,&local_res8,&local_res10);
              uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
            } while (cVar2 != '\0');
          }
          FUN_140e63970(local_78,&local_res8,&local_res10);
          local_198 = 0x1b;
          if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          local_1f8 = 0;
          local_1f0 = 0;
          local_1ec = 5;
          pdVar7 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
          if (pdVar7 != &local_188) {
            local_1b8 = *pdVar7;
            dStack_1b0 = pdVar7[1];
            if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_188);
            }
            FUN_140041b80(&local_188,&local_1b8);
          }
          local_138 = &local_188;
          ppdVar13 = &local_138;
          uVar12 = CONCAT44(uVar15,DAT_141a02ef8);
          uVar8 = FUN_140e634e0(local_res8,local_res10,&local_1f8,1,uVar12,ppdVar13);
          cVar2 = FUN_140e491e0(uVar8);
          if (cVar2 != '\0') {
            local_198 = 0x1c;
            uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
            FUN_140e87440(uVar8,DAT_141a1f090,0x80000000,&local_f8,uVar12 & 0xffffffffffffff00,
                          (ulonglong)ppdVar13 & 0xffffffffffffff00);
            FUN_140162d40(&local_f8,4);
            FUN_140e87930(uVar8,DAT_141a1f090,0x80000000,&local_f8);
          }
          local_198 = 0x1e;
          if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          local_1f8 = 0;
          local_1f0 = 0;
          local_1ec = 5;
          FUN_140e87170(&local_148,DAT_1419fe0e8,0x80000000,&local_d8,local_res8,local_res10);
          plVar6 = local_res8;
          FUN_140e87170(&local_148,DAT_1419fe158,0x80000000,&local_e8,local_res8,local_res10);
          uVar15 = (undefined4)((ulonglong)plVar6 >> 0x20);
          dStack_1b0 = (double)CONCAT44(uStack_cc,uStack_d0);
          local_1b8 = local_d8;
          if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          FUN_140041b80(&local_188,&local_1b8);
          local_138 = &local_188;
          dStack_1b0 = (double)CONCAT44(uStack_dc,uStack_e0);
          local_1b8 = local_e8;
          if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          FUN_140041b80(&local_178,&local_1b8);
          local_130 = &local_178;
          local_1b8 = _DAT_141dd9a58;
          dStack_1b0 = (double)uRam0000000141dd9a60;
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          FUN_140041b80(&local_168,&local_1b8);
          local_128 = &local_168;
          uStack_1e0 = (double)CONCAT44(0xf,(undefined4)uStack_1e0);
          local_1e8 = 7.291122019556718e-304;
          local_1b8 = 7.291122019556718e-304;
          dStack_1b0 = uStack_1e0;
          if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_158);
          }
          FUN_140041b80(local_158,&local_1b8);
          local_120 = local_158;
          uVar8 = FUN_140e634e0(local_res8,local_res10,&local_1f8,4,CONCAT44(uVar15,DAT_141a0a7c8),
                                &local_138);
          iVar3 = FUN_140e63cb0(local_98,&local_res8,&local_res10,uVar8);
          if (0 < iVar3) {
            do {
              local_198 = 0x20;
              pdVar7 = (double *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a1f440);
              pdVar9 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f440);
              FUN_140e609c0(local_res8);
              if (pdVar7 != pdVar9) {
                local_1b8 = *pdVar7;
                dStack_1b0 = pdVar7[1];
                if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pdVar9);
                }
                FUN_140041b80(pdVar9,&local_1b8);
              }
              FUN_140e60910(1);
              cVar2 = FUN_140e643f0(local_98,&local_res8,&local_res10);
            } while (cVar2 != '\0');
          }
          FUN_140e63970(local_98,&local_res8,&local_res10);
          local_198 = 0x23;
          puVar11 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar11);
          }
          *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
          *puVar11 = 0;
          if (local_88 != 0) {
            FUN_140e4cd60();
            local_88 = 0;
          }
          if (local_68 != 0) {
            FUN_140e4cd60();
          }
        }
        local_198 = 0x26;
        uVar8 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
        FUN_140e609c0(local_res8);
        FUN_1400460e0(uVar8,uVar5);
        FUN_140e60910(1);
        goto LAB_140b434bd;
      }
    }
  }
  local_198 = 4;
  FUN_140edd0e0(local_res8,local_res10,0,0);
  local_198 = 5;
LAB_140b434bd:
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_188,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return;
}

