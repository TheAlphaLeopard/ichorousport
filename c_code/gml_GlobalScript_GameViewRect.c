// gml_GlobalScript_GameViewRect @ 0x140287350

undefined8 * gml_GlobalScript_GameViewRect(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double *pdVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong *local_res8;
  ulonglong local_res10;
  undefined8 *local_res18;
  undefined4 uVar19;
  ulonglong uVar17;
  longlong *plVar18;
  double **ppdVar20;
  ulonglong uVar21;
  undefined8 local_260;
  undefined4 local_258;
  undefined4 local_254;
  double local_250;
  uint local_244;
  char local_240;
  double local_238;
  uint local_22c;
  double local_228;
  uint local_21c;
  undefined8 local_218;
  char *local_210;
  undefined4 local_208;
  double *local_200;
  double *local_1f8;
  double local_1f0;
  uint uStack_1e4;
  double local_1e0;
  uint local_1d4;
  double local_1d0;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined4 local_18c;
  double local_188 [2];
  double local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  double local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  double local_118;
  undefined4 local_10c;
  double local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined1 *local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [16];
  longlong local_a0;
  
  local_210 = "gml_Script_level_tally_treasure";
  local_218 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_218;
  local_208 = 0x3d;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_188,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_21c = 0xffffff;
  local_228 = 0.0;
  local_22c = 0xffffff;
  local_238 = 0.0;
  local_1c4 = 0xffffff;
  local_1d0 = 0.0;
  uStack_14c = 0xffffff;
  local_158 = 0.0;
  local_1d4 = 0xffffff;
  local_1e0 = 0.0;
  local_244 = 0xffffff;
  local_250 = 0.0;
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c80);
  local_11c = 0xffffff;
  local_128 = 0;
  local_b8 = uVar6;
  uVar7 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57d30);
  local_12c = 0xffffff;
  local_138 = 0;
  uStack_1e4 = 0xffffff;
  local_1f0 = 0.0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_c0 = uVar7;
  local_c8 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c90);
  local_13c = 0xffffff;
  local_148 = 0;
  uVar8 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c00);
  local_254 = 0;
  local_260 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_208 = 0x3f;
  local_1b4 = 0xf;
  local_1c0 = 0x1000000000000ff;
  iVar3 = FUN_140e63cb0(local_b0,&local_res8,&local_res10,&local_1c0);
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if (iVar3 < 1) {
LAB_140288386:
    FUN_140e63970(local_b0,&local_res8,&local_res10);
    if (local_a0 != 0) {
      FUN_140e4cd60();
      local_a0 = 0;
    }
    if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_260);
    }
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    if ((1 << ((byte)uStack_1e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f0);
    }
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_250);
    }
    if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e0);
    }
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d0);
    }
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    _eh_vector_destructor_iterator_(local_188,0x10,2,FUN_140041b30);
    DAT_141dc7a50 = (undefined8 *)local_218;
    return param_3;
  }
  do {
    local_208 = 0x41;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_21c = 0;
    local_228 = 0.0;
    bVar12 = true;
LAB_1402875e1:
    if (!bVar12) {
      local_208 = 0x41;
      uVar4 = local_21c & 0xffffff;
      if (uVar4 == 0) {
LAB_140287637:
        local_228 = local_228 + 1.0;
      }
      else if (uVar4 == 1) {
        local_228 = (double)FUN_140e4b060(&local_228);
        local_228 = local_228 + 1.0;
        local_21c = 0;
      }
      else if (uVar4 == 7) {
        local_228 = (double)CONCAT44(local_228._4_4_,local_228._0_4_ + 1);
      }
      else if (uVar4 == 10) {
        local_228 = (double)((longlong)local_228 + 1);
      }
      else {
        if (uVar4 == 0xd) {
          local_21c = 0;
          goto LAB_140287637;
        }
        FUN_140042910(&DAT_14172c3d8,&local_228,&local_228);
      }
    }
    uVar9 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b70);
    iVar3 = FUN_140e851f0(&local_228,uVar9,DAT_141955260,1);
    if ((iVar3 != -2) && (iVar3 < 0)) {
      local_208 = 0x42;
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      local_22c = 0;
      local_238 = 0.0;
      cVar2 = '\x01';
      do {
        if (cVar2 == '\0') {
          local_208 = 0x42;
          uVar4 = local_22c & 0xffffff;
          if (uVar4 != 0) {
            if (uVar4 != 1) {
              if (uVar4 == 7) {
                local_238 = (double)CONCAT44(local_238._4_4_,local_238._0_4_ + 1);
              }
              else if (uVar4 == 10) {
                local_238 = (double)((longlong)local_238 + 1);
              }
              else {
                if (uVar4 == 0xd) {
                  local_22c = 0;
                  goto LAB_140287744;
                }
                FUN_140042910(&DAT_14172c3d8,&local_238,&local_238);
              }
              goto LAB_14028774f;
            }
            local_238 = (double)FUN_140e4b060(&local_238);
            local_22c = 0;
          }
LAB_140287744:
          local_238 = local_238 + 1.0;
        }
LAB_14028774f:
        cVar2 = '\0';
        local_240 = '\0';
        uVar9 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b70);
        iVar3 = FUN_140e851f0(&local_238,uVar9,DAT_141955260,1);
        if ((iVar3 == -2) || (-1 < iVar3)) goto LAB_14028834d;
        local_208 = 0x44;
        if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_260);
        }
        local_260 = 0;
        local_258 = 0;
        local_254 = 5;
        uVar9 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b80);
        local_200 = &local_228;
        local_1f8 = &local_238;
        uVar10 = FUN_140e63610(local_res8,local_res10,&local_260,2,uVar9,&local_200);
        uVar19 = (undefined4)((ulonglong)uVar9 >> 0x20);
        cVar1 = FUN_140e491e0(uVar10);
        if (cVar1 == '\0') {
          local_208 = 0x44;
        }
        else {
          local_208 = 0x45;
          if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_260);
          }
          local_260 = 0;
          local_258 = 0;
          local_254 = 5;
          uVar9 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b10);
          if ((local_22c & 0xffffff) == 0) {
            uVar13 = SUB84(local_238,0);
            uVar15 = (undefined4)((ulonglong)local_238 >> 0x20);
          }
          else {
            uVar10 = FUN_140e4b060(&local_238);
            uVar13 = (undefined4)uVar10;
            uVar15 = (undefined4)((ulonglong)uVar10 >> 0x20);
          }
          if ((local_21c & 0xffffff) == 0) {
            uVar14 = SUB84(local_228,0);
            uVar16 = (undefined4)((ulonglong)local_228 >> 0x20);
          }
          else {
            uVar10 = FUN_140e4b060(&local_228);
            uVar14 = (undefined4)uVar10;
            uVar16 = (undefined4)((ulonglong)uVar10 >> 0x20);
          }
          uVar5 = FUN_140e4a740(uVar9);
          pdVar11 = (double *)
                    FUN_140ea8b20(&local_260,uVar5,(longlong)(double)CONCAT44(uVar16,uVar14),
                                  (longlong)(double)CONCAT44(uVar15,uVar13));
          if (pdVar11 != &local_1d0) {
            local_1a8 = *pdVar11;
            dStack_1a0 = pdVar11[1];
            if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d0);
            }
            FUN_140041b80(&local_1d0,&local_1a8);
          }
          local_208 = 0x46;
          if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_260);
          }
          local_260 = 0;
          local_258 = 0;
          local_254 = 5;
          local_200 = &local_1d0;
          ppdVar20 = &local_200;
          uVar17 = CONCAT44(uVar19,DAT_1419fcb88);
          uVar9 = FUN_140e634e0(local_res8,local_res10,&local_260,1,uVar17,ppdVar20);
          cVar1 = FUN_140e491e0(uVar9);
          if (cVar1 == '\0') {
            local_208 = 0x46;
          }
          else {
            local_208 = 0x48;
            if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_260);
            }
            local_260 = 0;
            local_258 = 0;
            local_254 = 5;
            uVar17 = uVar17 & 0xffffffffffffff00;
            FUN_140e87440(&local_1d0,DAT_141a57c20,0x80000000,&local_158,uVar17,
                          (ulonglong)ppdVar20 & 0xffffffffffffff00);
            uVar19 = (undefined4)(uVar17 >> 0x20);
            dStack_1a0 = (double)CONCAT44(uStack_14c,uStack_150);
            local_1a8 = local_158;
            if ((1 << ((byte)local_188[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_188);
            }
            FUN_140041b80(local_188,&local_1a8);
            iVar3 = DAT_141a57ad0;
            local_200 = local_188;
            if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_178);
            }
            local_16c = 0;
            local_178 = (double)iVar3;
            local_1f8 = &local_178;
            uVar9 = CONCAT44(uVar19,DAT_141a035d8);
            pdVar11 = (double *)FUN_140e634e0(local_res8,local_res10,&local_260,2,uVar9,&local_200);
            uVar19 = (undefined4)((ulonglong)uVar9 >> 0x20);
            if (pdVar11 != &local_1e0) {
              local_1a8 = *pdVar11;
              dStack_1a0 = pdVar11[1];
              if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1e0);
              }
              FUN_140041b80(&local_1e0,&local_1a8);
            }
            local_208 = 0x49;
            if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_260);
            }
            local_260 = 0;
            local_258 = 0;
            local_254 = 5;
            local_200 = &local_1e0;
            ppdVar20 = &local_200;
            uVar17 = CONCAT44(uVar19,DAT_1419fdc08);
            uVar9 = FUN_140e634e0(local_res8,local_res10,&local_260,1,uVar17,ppdVar20);
            cVar1 = FUN_140e491e0(uVar9);
            if (cVar1 == '\0') {
              local_208 = 0x4b;
              if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_250);
              }
              local_244 = 0;
              local_250 = 0.0;
              bVar12 = true;
LAB_140287b77:
              iVar3 = 0;
              if (!bVar12) {
                local_208 = 0x4b;
                uVar4 = local_244 & 0xffffff;
                if (uVar4 != 0) {
                  if (uVar4 != 1) {
                    if (uVar4 == 7) {
                      local_250 = (double)CONCAT44(local_250._4_4_,local_250._0_4_ + 1);
                    }
                    else if (uVar4 == 10) {
                      local_250 = (double)((longlong)local_250 + 1);
                    }
                    else {
                      if (uVar4 == 0xd) {
                        local_244 = 0;
                        goto LAB_140287bd0;
                      }
                      FUN_140042910(&DAT_14172c3d8,&local_250,&local_250);
                    }
                    goto LAB_140287bdb;
                  }
                  local_250 = (double)FUN_140e4b060(&local_250);
                  local_244 = 0;
                }
LAB_140287bd0:
                local_250 = local_250 + 1.0;
              }
LAB_140287bdb:
              bVar12 = false;
              if ((local_1d4 == 2) && (local_1e0 != 0.0)) {
                iVar3 = *(int *)((longlong)local_1e0 + 0x24);
              }
              local_10c = 0;
              local_118 = (double)iVar3;
              iVar3 = FUN_140e851f0(&local_250,&local_118,DAT_141955260,1);
              if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_118);
              }
              if (iVar3 != -2 && iVar3 < 0) {
                local_208 = 0x4d;
                FUN_140046040(uVar6);
                local_208 = 0x4e;
                iVar3 = FUN_140e4a740(&local_250);
                pdVar11 = (double *)0x0;
                if (((local_1d4 & 0xffffff) == 2) && (local_1e0 != 0.0)) {
                  if ((iVar3 < 0) || (*(int *)((longlong)local_1e0 + 0x24) <= iVar3)) {
                    FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                                  *(undefined4 *)((longlong)local_1e0 + 0x24));
                  }
                  else {
                    pdVar11 = (double *)
                              ((longlong)iVar3 * 0x10 + *(longlong *)((longlong)local_1e0 + 8));
                  }
                }
                else {
                  FUN_140e632c0("trying to index variable that is not an array");
                  pdVar11 = &local_1e0;
                }
                ppdVar20 = (double **)((ulonglong)ppdVar20 & 0xffffffffffffff00);
                uVar17 = uVar17 & 0xffffffffffffff00;
                FUN_140e87440(pdVar11,DAT_141a57c10,0x80000000,&local_128,uVar17,ppdVar20);
                cVar1 = FUN_140e491e0(&local_128);
                if (cVar1 == '\0') {
                  local_208 = 0x4e;
                  FUN_140046040(uVar7);
                }
                goto LAB_140287b77;
              }
            }
            local_208 = 0x52;
            uVar21 = (ulonglong)ppdVar20 & 0xffffffffffffff00;
            uVar17 = uVar17 & 0xffffffffffffff00;
            FUN_140e87440(&local_1d0,DAT_141a57c50,0x80000000,&local_138,uVar17,uVar21);
            local_1b4 = DAT_141dce5c4;
            local_1b8 = DAT_141dce5c0;
            if ((1 << ((byte)DAT_141dce5c4 & 0x1f) & 0x46U) == 0) {
              local_1c0 = DAT_141dce5b8;
            }
            else {
              FUN_1400419b0(&local_1c0,&DAT_141dce5b8);
            }
            iVar3 = FUN_140e851f0(&local_138,&local_1c0,DAT_141955260,0);
            if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c0);
            }
            if (iVar3 == 0) {
              local_208 = 0x54;
              if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_260);
              }
              local_260 = 0;
              local_258 = 0;
              local_254 = 5;
              uVar17 = uVar17 & 0xffffffffffffff00;
              FUN_140e87440(&local_1d0,DAT_141a57c20,0x80000000,&local_158,uVar17,
                            uVar21 & 0xffffffffffffff00);
              uVar19 = (undefined4)(uVar17 >> 0x20);
              dStack_1a0 = (double)CONCAT44(uStack_14c,uStack_150);
              local_1a8 = local_158;
              if ((1 << ((byte)local_188[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_188);
              }
              FUN_140041b80(local_188,&local_1a8);
              iVar3 = DAT_141a57cb0;
              local_200 = local_188;
              if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_178);
              }
              local_16c = 0;
              local_178 = (double)iVar3;
              local_1f8 = &local_178;
              uVar9 = CONCAT44(uVar19,DAT_141a035d8);
              pdVar11 = (double *)
                        FUN_140e634e0(local_res8,local_res10,&local_260,2,uVar9,&local_200);
              uVar19 = (undefined4)((ulonglong)uVar9 >> 0x20);
              if (pdVar11 != &local_1f0) {
                local_1a8 = *pdVar11;
                dStack_1a0 = pdVar11[1];
                if ((1 << ((byte)uStack_1e4 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1f0);
                }
                FUN_140041b80(&local_1f0,&local_1a8);
              }
              local_208 = 0x55;
              if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_260);
              }
              local_260 = 0;
              local_258 = 0;
              local_254 = 5;
              local_200 = &local_1f0;
              uVar9 = FUN_140e634e0(local_res8,local_res10,&local_260,1,
                                    CONCAT44(uVar19,DAT_1419fdc08),&local_200);
              cVar1 = FUN_140e491e0(uVar9);
              if (cVar1 == '\0') {
                local_208 = 0x57;
                if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_250);
                }
                uVar6 = local_c8;
                local_244 = 0;
                local_250 = 0.0;
                bVar12 = true;
LAB_140287fd0:
                iVar3 = 0;
                if (!bVar12) {
                  local_208 = 0x57;
                  uVar4 = local_244 & 0xffffff;
                  if (uVar4 != 0) {
                    if (uVar4 != 1) {
                      if (uVar4 == 7) {
                        local_250 = (double)CONCAT44(local_250._4_4_,local_250._0_4_ + 1);
                      }
                      else if (uVar4 == 10) {
                        local_250 = (double)((longlong)local_250 + 1);
                      }
                      else {
                        if (uVar4 == 0xd) {
                          local_244 = 0;
                          goto LAB_140288029;
                        }
                        FUN_140042910(&DAT_14172c3d8,&local_250,&local_250);
                      }
                      goto LAB_140288034;
                    }
                    local_250 = (double)FUN_140e4b060(&local_250);
                    local_244 = 0;
                  }
LAB_140288029:
                  local_250 = local_250 + 1.0;
                }
LAB_140288034:
                bVar12 = false;
                if ((uStack_1e4 == 2) && (local_1f0 != 0.0)) {
                  iVar3 = *(int *)((longlong)local_1f0 + 0x24);
                }
                local_fc = 0;
                local_108 = (double)iVar3;
                iVar3 = FUN_140e851f0(&local_250,&local_108,DAT_141955260,1);
                if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_108);
                }
                if (iVar3 != -2 && iVar3 < 0) {
                  local_208 = 0x59;
                  iVar3 = FUN_140e4a740(&local_250);
                  pdVar11 = (double *)0x0;
                  if (((uStack_1e4 & 0xffffff) == 2) && (local_1f0 != 0.0)) {
                    if ((iVar3 < 0) || (*(int *)((longlong)local_1f0 + 0x24) <= iVar3)) {
                      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                                    *(undefined4 *)((longlong)local_1f0 + 0x24));
                    }
                    else {
                      pdVar11 = (double *)
                                ((longlong)iVar3 * 0x10 + *(longlong *)((longlong)local_1f0 + 8));
                    }
                    if (pdVar11 != &local_198) goto LAB_14028813b;
                  }
                  else {
                    FUN_140e632c0("trying to index variable that is not an array");
                    pdVar11 = &local_1f0;
LAB_14028813b:
                    local_1a8 = *pdVar11;
                    dStack_1a0 = pdVar11[1];
                    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_198);
                    }
                    FUN_140041b80(&local_198,&local_1a8);
                  }
                  local_208 = 0x5a;
                  plVar18 = local_res8;
                  uVar17 = local_res10;
                  FUN_140e87170(&local_198,DAT_141a1f580,0x80000000,&local_168,local_res8,
                                local_res10);
                  local_ec = 0xf;
                  local_f8 = 0x100000000000114;
                  iVar3 = FUN_140e851f0(&local_168,&local_f8,DAT_141955260,0);
                  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_f8);
                  }
                  if (iVar3 != 0) {
                    plVar18 = local_res8;
                    uVar17 = local_res10;
                    FUN_140e87170(&local_198,DAT_141a1f580,0x80000000,&local_168,local_res8,
                                  local_res10);
                    local_dc = 0xf;
                    local_e8 = 0x100000000000118;
                    iVar3 = FUN_140e851f0(&local_168,&local_e8,DAT_141955260,0);
                    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_e8);
                    }
                    if (iVar3 != 0) {
                      local_208 = 0x5a;
                      goto LAB_140287fd0;
                    }
                  }
                  local_208 = 0x5b;
                  FUN_140046040(uVar6);
                  local_208 = 0x5c;
                  FUN_140e87440(&local_198,DAT_141a57b30,0x80000000,&local_148,
                                (ulonglong)plVar18 & 0xffffffffffffff00,uVar17 & 0xffffffffffffff00)
                  ;
                  local_cc = 0;
                  local_d8 = &DAT_bff0000000000000;
                  iVar3 = FUN_140e851f0(&local_148,&local_d8,DAT_141955260,0);
                  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_d8);
                  }
                  if (iVar3 == 0) {
                    local_208 = 0x5c;
                    FUN_140046040(uVar8);
                  }
                  goto LAB_140287fd0;
                }
                uVar6 = local_b8;
                uVar7 = local_c0;
                cVar2 = local_240;
              }
              else {
                local_208 = 0x55;
              }
            }
            else {
              local_208 = 0x52;
            }
          }
        }
      } while( true );
    }
    cVar2 = FUN_140e643f0(local_b0,&local_res8,&local_res10);
    if (cVar2 == '\0') {
      param_3 = local_res18;
      goto LAB_140288386;
    }
  } while( true );
LAB_14028834d:
  bVar12 = false;
  goto LAB_1402875e1;
}

