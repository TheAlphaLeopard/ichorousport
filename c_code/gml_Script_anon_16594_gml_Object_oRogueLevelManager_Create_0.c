// gml_Script_anon_16594_gml_Object_oRogueLevelManager_Create_0 @ 0x140ccb440

double * gml_Script_anon_16594_gml_Object_oRogueLevelManager_Create_0
                   (longlong *param_1,undefined8 param_2,double *param_3,int param_4,
                   undefined8 *param_5)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  double *pdVar9;
  double dVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *local_res8;
  undefined8 local_res10;
  ulonglong uVar14;
  double **ppdVar15;
  ulonglong uVar16;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  double local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  double local_1a8;
  uint local_19c;
  longlong *local_198;
  undefined4 local_18c;
  double local_188;
  undefined4 local_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  double local_160;
  uint local_154;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  undefined8 local_128;
  undefined4 local_11c;
  double local_118 [2];
  double local_108;
  undefined4 local_fc;
  double *local_f8;
  double *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  double local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  double local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_170 = "gml_Script_anon@15117@gml_Object_oRogueLevelManager_Create_0";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 0x277;
  uVar5 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_118,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0.0;
  local_11c = 0xffffff;
  local_128 = 0;
  uStack_1ac = 0xffffff;
  local_1b8 = 0.0;
  local_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0.0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  uStack_ac = 0xffffff;
  local_b8 = 0.0;
  local_154 = 0xffffff;
  local_160 = 0.0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  uStack_bc = 0xffffff;
  local_c8 = 0.0;
  local_1bc = 0;
  local_1c8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  local_168 = 0x279;
  puVar12 = &DAT_1419df7b0;
  if (param_4 < 1) {
    pdVar9 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar9 = (double *)*param_5;
    if (pdVar9 == &local_108) goto LAB_140ccb5b9;
  }
  local_148 = *pdVar9;
  uStack_140 = pdVar9[1];
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_148);
LAB_140ccb5b9:
  local_f0 = &local_108;
  ppdVar15 = &local_f0;
  uVar14 = CONCAT44(uVar5,DAT_1419fcb88);
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_1c8,1,uVar14,ppdVar15);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
    local_168 = 0x279;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = 0.0;
  }
  else {
    local_168 = 0x27b;
    local_18c = 6;
    local_198 = local_res8;
    FUN_140e87440(&local_198,DAT_141a0a828,0x80000000,&local_88,uVar14 & 0xffffffffffffff00,
                  (ulonglong)ppdVar15 & 0xffffffffffffff00);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    uStack_140 = (double)CONCAT44(uStack_7c,uStack_80);
    local_148 = local_88;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
    local_168 = 0x27c;
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    uStack_1ac = 0;
    local_1b8 = 0.0;
    local_168 = 0x27e;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    puVar8 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a56b50);
    if (param_4 < 1) {
      puVar13 = &DAT_1419df7b0;
    }
    else {
      puVar13 = (undefined8 *)*param_5;
    }
    ppdVar15 = (double **)0x0;
    uVar7 = FUN_140e63610(local_res8,local_res10,&local_1c8,0,puVar8,0);
    iVar4 = FUN_140e851f0(puVar13,uVar7,DAT_141955260,0);
    if (iVar4 == 0) {
      local_168 = 0x280;
      local_18c = 0xf;
      local_198 = (longlong *)0x1000000000000d8;
      iVar4 = FUN_140e63cb0(local_78,&local_res8,&local_res10,&local_198);
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if (0 < iVar4) {
        do {
          local_168 = 0x282;
          if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          local_e8 = 0;
          local_e0 = 0;
          local_dc = 5;
          uVar16 = (ulonglong)ppdVar15 & 0xffffffffffffff00;
          uVar14 = (ulonglong)puVar8 & 0xffffffffffffff00;
          FUN_140e87440(&local_128,DAT_1419f9af8,0x80000000,&local_98,uVar14,uVar16);
          local_18c = 6;
          local_198 = local_res8;
          FUN_140e87440(&local_198,DAT_141a1f580,0x80000000,&local_a8,uVar14 & 0xffffffffffffff00,
                        uVar16 & 0xffffffffffffff00);
          if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          dStack_130 = (double)CONCAT44(uStack_9c,uStack_a0);
          local_138 = local_a8;
          if ((1 << ((byte)local_118[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_118);
          }
          FUN_140041b80(local_118,&local_138);
          local_f8 = local_118;
          switch(local_11c) {
          default:
switchD_140ccb8ca_caseD_1:
            uVar7 = 0;
            break;
          case 6:
            uVar7 = local_128;
            break;
          case 0xf:
            iVar4 = (int)((ulonglong)local_128 >> 0x20);
            if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_140ccb8ca_caseD_1;
          case 0:
          case 7:
          case 10:
          case 0xd:
            uVar5 = FUN_140e4a8b0(&local_128);
            uVar7 = FUN_140e87250(uVar5);
          }
          puVar8 = &local_98;
          ppdVar15 = &local_f8;
          pdVar9 = (double *)FUN_140e63610(uVar7,local_res10,&local_e8,1,puVar8,&local_f8);
          if (pdVar9 != &local_188) {
            local_138 = *pdVar9;
            dStack_130 = pdVar9[1];
            if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_188);
            }
            FUN_140041b80(&local_188,&local_138);
          }
          local_168 = 0x283;
          local_cc = 0;
          local_d8 = 0;
          uVar6 = FUN_140e851f0(&local_188,&local_d8,DAT_141955260,1);
          if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_d8);
          }
          if (uVar6 < 0x80000000) {
            local_168 = 0x283;
            bVar3 = FUN_140e4a8b0(&local_188);
            dVar10 = (double)(1L << (bVar3 & 0x3f));
            uVar6 = uStack_1ac & 0xffffff;
            if (uVar6 == 0) {
LAB_140ccba33:
              local_1b8 = (double)((longlong)local_1b8 | (ulonglong)dVar10);
              uStack_1ac = 10;
            }
            else if (uVar6 == 7) {
              local_1b8 = (double)CONCAT44(local_1b8._4_4_,local_1b8._0_4_ | SUB84(dVar10,0));
            }
            else if (uVar6 == 10) {
              local_1b8 = (double)((ulonglong)local_1b8 | (ulonglong)dVar10);
            }
            else {
              if (uVar6 == 0xd) goto LAB_140ccba33;
              uStack_140 = (double)CONCAT44(10,(undefined4)uStack_140);
              local_148 = dVar10;
              FUN_140042910(&DAT_14172c43c,&local_1b8,&local_148);
              if ((1 << ((byte)((ulonglong)uStack_140 >> 0x20) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_148);
              }
            }
          }
          cVar2 = FUN_140e643f0(local_78,&local_res8,&local_res10);
        } while (cVar2 != '\0');
      }
      FUN_140e63970(local_78,&local_res8,&local_res10);
      if (local_68 != 0) {
        FUN_140e4cd60();
      }
    }
    else {
      local_168 = 0x288;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_1c8 = 0;
      local_1c0 = 0;
      local_1bc = 5;
      if (0 < param_4) {
        puVar12 = (undefined8 *)*param_5;
      }
      uVar14 = (ulonglong)puVar8 & 0xffffffffffffff00;
      FUN_140e87440(puVar12,DAT_141a57c20,0x80000000,&local_b8,uVar14,
                    (ulonglong)ppdVar15 & 0xffffffffffffff00);
      uVar5 = (undefined4)(uVar14 >> 0x20);
      dStack_130 = (double)CONCAT44(uStack_ac,uStack_b0);
      local_138 = local_b8;
      if ((1 << ((byte)local_118[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_138);
      iVar4 = DAT_141a57cb0;
      local_f8 = local_118;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_fc = 0;
      local_108 = (double)iVar4;
      local_f0 = &local_108;
      uVar7 = CONCAT44(uVar5,DAT_141a035d8);
      pdVar9 = (double *)FUN_140e634e0(local_res8,local_res10,&local_1c8,2,uVar7,&local_f8);
      uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
      if (pdVar9 != &local_160) {
        local_138 = *pdVar9;
        dStack_130 = pdVar9[1];
        if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_160);
        }
        FUN_140041b80(&local_160,&local_138);
      }
      local_168 = 0x289;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_1c8 = 0;
      local_1c0 = 0;
      local_1bc = 5;
      local_f8 = &local_160;
      uVar7 = FUN_140e634e0(local_res8,local_res10,&local_1c8,1,CONCAT44(uVar5,DAT_1419fdb88),
                            &local_f8);
      cVar2 = FUN_140e491e0(uVar7);
      if (cVar2 != '\0') {
        local_168 = 0x28b;
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_19c = 0;
        local_1a8 = 0.0;
        bVar1 = true;
LAB_140ccbe30:
        do {
          if (!bVar1) {
            local_168 = 0x28b;
            uVar6 = local_19c & 0xffffff;
            if (uVar6 != 0) {
              if (uVar6 != 1) {
                if (uVar6 == 7) {
                  local_1a8 = (double)CONCAT44(local_1a8._4_4_,local_1a8._0_4_ + 1);
                }
                else if (uVar6 == 10) {
                  local_1a8 = (double)((longlong)local_1a8 + 1);
                }
                else {
                  if (uVar6 == 0xd) {
                    local_19c = 0;
                    goto LAB_140ccbe86;
                  }
                  FUN_140042910(&DAT_14172c3d8,&local_1a8,&local_1a8);
                }
                goto LAB_140ccbe90;
              }
              local_1a8 = (double)FUN_140e4b060(&local_1a8);
              local_19c = 0;
            }
LAB_140ccbe86:
            local_1a8 = local_1a8 + 1.0;
          }
LAB_140ccbe90:
          bVar1 = false;
          iVar4 = 0;
          if ((local_154 == 2) && (local_160 != 0.0)) {
            iVar4 = *(int *)((longlong)local_160 + 0x24);
          }
          uStack_140 = (double)((ulonglong)uStack_140 & 0xffffffff);
          local_148 = (double)iVar4;
          iVar4 = FUN_140e851f0(&local_1a8,&local_148,DAT_141955260,1);
          if ((1 << ((byte)((ulonglong)uStack_140 >> 0x20) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          if (iVar4 == -2 || -1 < iVar4) break;
          local_168 = 0x28d;
          if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          local_1c8 = 0;
          local_1c0 = 0;
          local_1bc = 5;
          uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f9af8);
          iVar4 = FUN_140e4a740(&local_1a8);
          pdVar9 = (double *)0x0;
          if (((local_154 & 0xffffff) == 2) && (local_160 != 0.0)) {
            if ((iVar4 < 0) || (*(int *)((longlong)local_160 + 0x24) <= iVar4)) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                            *(undefined4 *)((longlong)local_160 + 0x24));
            }
            else {
              pdVar9 = (double *)((longlong)iVar4 * 0x10 + *(longlong *)((longlong)local_160 + 8));
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
            pdVar9 = &local_160;
          }
          FUN_140e87170(pdVar9,DAT_141a1f580,0x80000000,&local_c8,local_res8,local_res10);
          dStack_130 = (double)CONCAT44(uStack_bc,uStack_c0);
          local_138 = local_c8;
          if ((1 << ((byte)local_118[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_118);
          }
          FUN_140041b80(local_118,&local_138);
          local_f8 = local_118;
          pdVar9 = (double *)FUN_140e63610(local_res8,local_res10,&local_1c8,1,uVar7,&local_f8);
          if (pdVar9 != &local_188) {
            local_138 = *pdVar9;
            dStack_130 = pdVar9[1];
            if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_188);
            }
            FUN_140041b80(&local_188,&local_138);
          }
          local_168 = 0x28e;
          local_cc = 0;
          local_d8 = 0;
          uVar6 = FUN_140e851f0(&local_188,&local_d8,DAT_141955260,1);
          if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_d8);
          }
          if (uVar6 < 0x80000000) {
            local_168 = 0x28e;
            bVar3 = FUN_140e4a8b0(&local_188);
            plVar11 = (longlong *)(1L << (bVar3 & 0x3f));
            uVar6 = uStack_1ac & 0xffffff;
            if (uVar6 != 0) {
              if (uVar6 == 7) {
                local_1b8 = (double)CONCAT44(local_1b8._4_4_,local_1b8._0_4_ | (uint)plVar11);
                goto LAB_140ccbe30;
              }
              if (uVar6 == 10) {
                local_1b8 = (double)((ulonglong)local_1b8 | (ulonglong)plVar11);
                goto LAB_140ccbe30;
              }
              if (uVar6 != 0xd) {
                local_18c = 10;
                local_198 = plVar11;
                FUN_140042910(&DAT_14172c43c,&local_1b8,&local_198);
                if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_198);
                }
                goto LAB_140ccbe30;
              }
            }
            local_1b8 = (double)((longlong)local_1b8 | (ulonglong)plVar11);
            uStack_1ac = 10;
          }
        } while( true );
      }
    }
    local_168 = 0x293;
    if (&local_1b8 != param_3) {
      dStack_130 = (double)CONCAT44(uStack_1ac,uStack_1b0);
      local_138 = local_1b8;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_138);
    }
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_118,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return param_3;
}

