// gml_Script_anon_7630____struct___129_JUKEBOX_system @ 0x140398e20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * gml_Script_anon_7630____struct___129_JUKEBOX_system
                   (longlong *param_1,undefined8 param_2,double *param_3,undefined4 param_4,
                   undefined8 param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  double *pdVar8;
  ulonglong uVar9;
  double *pdVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  double *pdVar16;
  uint local_res20;
  double **ppdVar17;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  double local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  double local_1d8;
  undefined4 local_1cc;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  uint local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  double local_198;
  double dStack_190;
  double local_188;
  byte local_17c;
  double local_178 [2];
  double local_168 [2];
  double *local_158;
  double *local_150;
  double *local_148;
  undefined8 local_140;
  char *local_138;
  undefined4 local_130;
  double local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  double local_f8;
  undefined4 local_ec;
  double local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_bc;
  double local_b8;
  uint uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  uint local_58 [2];
  undefined8 *local_50;
  
  local_138 = "gml_Script_anon@6296@___struct___129@JUKEBOX_system";
  local_140 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_140;
  local_130 = 0xea;
  FUN_140041df0(local_58,param_4,3,param_5);
  _eh_vector_constructor_iterator_(&local_188,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar6 = local_58[0];
  local_1cc = 0xffffff;
  local_1d8 = 0.0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_res20 = 0xffffff;
  uStack_ac = 0xffffff;
  dVar13 = 0.0;
  local_b8 = 0.0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_1ac = 0xffffff;
  local_1b8 = 0.0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_1ec = 0xffffff;
  local_1f8 = 0.0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_1fc = 0;
  local_208 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  local_130 = 0xea;
  pdVar16 = &DAT_1419df7b0;
  uVar15 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 3) {
    puVar14 = &DAT_1419df7b0;
  }
  else {
    puVar14 = (undefined8 *)local_50[2];
  }
  iVar4 = FUN_140e851f0(puVar14,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_130 = 0xea;
    uStack_1c0 = (double)CONCAT44(0xd,(undefined4)uStack_1c0);
    local_1c8 = 0.0;
    if ((int)uVar6 < 3) {
      pdVar10 = &DAT_1419df7b0;
    }
    else {
      pdVar10 = (double *)local_50[2];
      if (&local_1c8 == pdVar10) goto LAB_140399033;
    }
    local_d8 = 0;
    uStack_d0 = uStack_1c0;
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar10);
    }
    FUN_140041b80(pdVar10,&local_d8);
  }
LAB_140399033:
  local_130 = 0xeb;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  if ((int)uVar6 < 2) {
    pdVar10 = &DAT_1419df7b0;
LAB_140399080:
    local_1c8 = *pdVar10;
    uStack_1c0 = pdVar10[1];
    if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1c8);
  }
  else {
    pdVar10 = (double *)local_50[1];
    if (pdVar10 != &local_188) goto LAB_140399080;
  }
  local_158 = &local_188;
  if ((int)uVar6 < 2) {
    pdVar10 = &DAT_1419df7b0;
  }
  else {
    pdVar10 = (double *)local_50[1];
  }
  pdVar8 = (double *)gml_Script_jump_predictor(param_1,param_2,&local_208,1,&local_158);
  if (pdVar8 != pdVar10) {
    local_1c8 = *pdVar8;
    uStack_1c0 = pdVar8[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar10);
    }
    FUN_140041b80(pdVar10,&local_1c8);
  }
  local_130 = 0xec;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4c48);
  if ((int)uVar6 < 1) {
    pdVar10 = &DAT_1419df7b0;
LAB_140399177:
    local_1c8 = *pdVar10;
    uStack_1c0 = pdVar10[1];
    if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1c8);
  }
  else {
    pdVar10 = (double *)*local_50;
    if (pdVar10 != &local_188) goto LAB_140399177;
  }
  local_158 = &local_188;
  ppdVar17 = &local_158;
  pdVar10 = (double *)FUN_140e63610(param_1,param_2,&local_208,1,uVar9,ppdVar17);
  if (pdVar10 != &local_1d8) {
    local_1c8 = *pdVar10;
    uStack_1c0 = pdVar10[1];
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_1c8);
  }
  local_130 = 0xed;
  iVar4 = FUN_140e851f0(&local_1d8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_130 = 0xed;
    if (param_3 != &DAT_1419df7b0) {
      local_1c8 = DAT_1419df7b0;
      uStack_1c0 = _DAT_1419df7b8;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_1c8);
    }
    goto LAB_140399280;
  }
  local_130 = 0xef;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  FUN_140e87440(&local_1d8,DAT_1419f4d88,0x80000000,&local_68,uVar9 & 0xffffffffffffff00,
                (ulonglong)ppdVar17 & 0xffffffffffffff00);
  switch(local_1cc) {
  default:
switchD_1403995a5_caseD_1:
    dVar11 = 0.0;
    break;
  case 6:
    dVar11 = local_1d8;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_1d8 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_1403995a5_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar5 = FUN_140e4a8b0(&local_1d8);
    dVar11 = (double)FUN_140e87250(uVar5);
  }
  puVar14 = &local_68;
  pdVar10 = (double *)FUN_140e63610(dVar11,param_2,&local_208,0,puVar14,0);
  uVar5 = (undefined4)((ulonglong)puVar14 >> 0x20);
  if (pdVar10 != &local_f8) {
    local_1c8 = *pdVar10;
    uStack_1c0 = pdVar10[1];
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1c8);
  }
  local_130 = 0xf0;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  local_158 = &local_f8;
  ppdVar17 = &local_158;
  uVar15 = CONCAT44(uVar5,DAT_141a0aa48);
  pdVar10 = (double *)FUN_140e634e0(param_1,param_2,&local_208,1,uVar15,ppdVar17);
  if (pdVar10 != &local_b8) {
    local_1c8 = *pdVar10;
    uStack_1c0 = pdVar10[1];
    FUN_140041b80(&local_b8,&local_1c8);
    local_res20 = uStack_ac;
    dVar13 = local_b8;
  }
  local_130 = 0xf1;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  FUN_140e87440(&local_1d8,DAT_1419f4ab8,0x80000000,&local_78,uVar15 & 0xffffffffffffff00,
                (ulonglong)ppdVar17 & 0xffffffffffffff00);
  switch(local_1cc) {
  default:
switchD_1403997a7_caseD_1:
    dVar11 = 0.0;
    break;
  case 6:
    dVar11 = local_1d8;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_1d8 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_1403997a7_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar5 = FUN_140e4a8b0(&local_1d8);
    dVar11 = (double)FUN_140e87250(uVar5);
  }
  uVar15 = 0;
  puVar14 = &local_78;
  uVar12 = FUN_140e63610(dVar11,param_2,&local_1e8,0,puVar14,0);
  FUN_140e87440(uVar12,DAT_1419f49a8,0x80000000,&local_88,(ulonglong)puVar14 & 0xffffffffffffff00,
                uVar15 & 0xffffffffffffff00);
  switch(local_1dc) {
  default:
switchD_140399840_caseD_1:
    uVar12 = 0;
    break;
  case 6:
    uVar12 = local_1e8;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_1e8 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_140399840_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar5 = FUN_140e4a8b0(&local_1e8);
    uVar12 = FUN_140e87250(uVar5);
  }
  puVar14 = &local_88;
  pdVar10 = (double *)FUN_140e63610(uVar12,param_2,&local_1a8,0,puVar14,0);
  uVar5 = (undefined4)((ulonglong)puVar14 >> 0x20);
  if (pdVar10 != &local_188) {
    local_1c8 = *pdVar10;
    uStack_1c0 = pdVar10[1];
    if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1c8);
  }
  local_158 = &local_188;
  ppdVar17 = &local_158;
  uVar15 = CONCAT44(uVar5,DAT_141a076c8);
  pdVar10 = (double *)FUN_140e634e0(param_1,param_2,&local_208,1,uVar15,ppdVar17);
  if (pdVar10 != &local_e8) {
    local_1c8 = *pdVar10;
    uStack_1c0 = pdVar10[1];
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1c8);
  }
  local_130 = 0xf3;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1ac = 0;
  local_1b8 = 0.0;
  bVar2 = true;
LAB_140399970:
  if (!bVar2) {
    local_130 = 0xf3;
    uVar6 = local_1ac & 0xffffff;
    if (uVar6 != 0) {
      if (uVar6 != 1) {
        if (uVar6 == 7) {
          local_1b8 = (double)CONCAT44(local_1b8._4_4_,local_1b8._0_4_ + 1);
        }
        else if (uVar6 == 10) {
          local_1b8 = (double)((longlong)local_1b8 + 1);
        }
        else {
          if (uVar6 == 0xd) {
            local_1ac = 0;
            goto LAB_1403999c4;
          }
          FUN_140042910(&DAT_14172c3d8,&local_1b8,&local_1b8);
        }
        goto LAB_1403999cd;
      }
      local_1b8 = (double)FUN_140e4b060(&local_1b8);
      local_1ac = 0;
    }
LAB_1403999c4:
    local_1b8 = local_1b8 + 1.0;
  }
LAB_1403999cd:
  bVar2 = false;
  iVar4 = 0;
  if ((local_res20 == 2) && (dVar13 != 0.0)) {
    iVar4 = *(int *)((longlong)dVar13 + 0x24);
  }
  uStack_1c0 = (double)((ulonglong)uStack_1c0 & 0xffffffff);
  local_1c8 = (double)iVar4;
  iVar4 = FUN_140e851f0(&local_1b8,&local_1c8,DAT_141955260,1);
  if ((1 << ((byte)((ulonglong)uStack_1c0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if (iVar4 != -2 && iVar4 < 0) {
    local_130 = 0xf4;
    iVar4 = FUN_140e4a740(&local_1b8);
    uVar5 = (undefined4)(uVar15 >> 0x20);
    pdVar10 = (double *)0x0;
    if (((local_res20 & 0xffffff) == 2) && (dVar13 != 0.0)) {
      if ((iVar4 < 0) || (*(int *)((longlong)dVar13 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)((longlong)dVar13 + 0x24));
      }
      else {
        pdVar10 = (double *)((longlong)iVar4 * 0x10 + *(longlong *)((longlong)dVar13 + 8));
      }
      if (pdVar10 != &local_128) goto LAB_140399ace;
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      pdVar10 = &local_b8;
LAB_140399ace:
      local_198 = *pdVar10;
      dStack_190 = pdVar10[1];
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_198);
    }
    local_130 = 0xf5;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    local_158 = &local_f8;
    local_150 = &local_128;
    ppdVar17 = &local_158;
    uVar15 = CONCAT44(uVar5,DAT_141a01138);
    pdVar10 = (double *)FUN_140e634e0(param_1,param_2,&local_208,2,uVar15,ppdVar17);
    if (pdVar10 != &local_1f8) {
      local_198 = *pdVar10;
      dStack_190 = pdVar10[1];
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140041b80(&local_1f8,&local_198);
    }
    uVar6 = local_58[0];
    local_130 = 0xf7;
    if ((int)local_58[0] < 2) {
      puVar14 = &DAT_1419df7b0;
    }
    else {
      puVar14 = (undefined8 *)local_50[1];
    }
    iVar4 = FUN_140e851f0(&local_128,puVar14,DAT_141955260,0);
    if (iVar4 != 0) goto LAB_14039a092;
    local_130 = 0xf8;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    uVar9 = (ulonglong)ppdVar17 & 0xffffffffffffff00;
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_140e87440(&local_1f8,DAT_1419f49a8,0x80000000,&local_108,uVar15,uVar9);
    uVar9 = uVar9 & 0xffffffffffffff00;
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_140e87440(&local_1f8,DAT_1419f4a88,0x80000000,&local_98,uVar15,uVar9);
    FUN_140e87440(&local_1f8,DAT_1419f4ce8,0x80000000,&local_c8,uVar15 & 0xffffffffffffff00,
                  uVar9 & 0xffffffffffffff00);
    switch(local_1ec) {
    default:
switchD_140399d17_caseD_1:
      dVar11 = 0.0;
      break;
    case 6:
      dVar11 = local_1f8;
      break;
    case 0xf:
      iVar4 = (int)((ulonglong)local_1f8 >> 0x20);
      if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_140399d17_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar5 = FUN_140e4a8b0(&local_1f8);
      dVar11 = (double)FUN_140e87250(uVar5);
    }
    pdVar10 = (double *)FUN_140e63610(dVar11,param_2,&local_1e8,0,&local_108,0);
    if (pdVar10 != &local_188) {
      local_198 = *pdVar10;
      dStack_190 = pdVar10[1];
      if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_198);
    }
    local_158 = &local_188;
    switch(local_1ec) {
    default:
switchD_140399dc8_caseD_1:
      dVar11 = 0.0;
      break;
    case 6:
      dVar11 = local_1f8;
      break;
    case 0xf:
      iVar4 = (int)((ulonglong)local_1f8 >> 0x20);
      if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_140399dc8_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar5 = FUN_140e4a8b0(&local_1f8);
      dVar11 = (double)FUN_140e87250(uVar5);
    }
    pdVar10 = (double *)FUN_140e63610(dVar11,param_2,&local_1a8,0,&local_98,0);
    if (pdVar10 != local_178) {
      local_198 = *pdVar10;
      dStack_190 = pdVar10[1];
      if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_198);
    }
    local_150 = local_178;
    switch(local_1ec) {
    default:
switchD_140399e7b_caseD_1:
      dVar11 = 0.0;
      break;
    case 6:
      dVar11 = local_1f8;
      break;
    case 0xf:
      iVar4 = (int)((ulonglong)local_1f8 >> 0x20);
      if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_140399e7b_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar5 = FUN_140e4a8b0(&local_1f8);
      dVar11 = (double)FUN_140e87250(uVar5);
    }
    puVar14 = &local_c8;
    pdVar10 = (double *)FUN_140e63610(dVar11,param_2,&local_118,0,puVar14,0);
    uVar5 = (undefined4)((ulonglong)puVar14 >> 0x20);
    if (pdVar10 != local_168) {
      local_198 = *pdVar10;
      dStack_190 = pdVar10[1];
      if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_168);
      }
      FUN_140041b80(local_168,&local_198);
    }
    local_148 = local_168;
    ppdVar17 = &local_158;
    uVar15 = CONCAT44(uVar5,DAT_1419f4a48);
    FUN_140e634e0(param_1,param_2,&local_208,3,uVar15,ppdVar17);
    local_130 = 0xf9;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    FUN_140e87440(&local_1f8,DAT_1419f49a8,0x80000000,&local_108,uVar15 & 0xffffffffffffff00,
                  (ulonglong)ppdVar17 & 0xffffffffffffff00);
    switch(local_1ec) {
    default:
switchD_140399fd9_caseD_1:
      dVar11 = 0.0;
      break;
    case 6:
      dVar11 = local_1f8;
      break;
    case 0xf:
      iVar4 = (int)((ulonglong)local_1f8 >> 0x20);
      if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_140399fd9_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar5 = FUN_140e4a8b0(&local_1f8);
      dVar11 = (double)FUN_140e87250(uVar5);
    }
    puVar14 = &local_108;
    pdVar10 = (double *)FUN_140e63610(dVar11,param_2,&local_1e8,0,puVar14,0);
    uVar5 = (undefined4)((ulonglong)puVar14 >> 0x20);
    if (pdVar10 != &local_188) {
      local_198 = *pdVar10;
      dStack_190 = pdVar10[1];
      if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_198);
    }
    local_158 = &local_188;
    local_150 = &local_e8;
    uVar12 = 2;
    uVar7 = DAT_1419f4d28;
    goto LAB_14039a3b4;
  }
  local_130 = 0xff;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  FUN_140e87440(&local_1d8,DAT_1419f49b8,0x80000000,&local_a8,uVar15 & 0xffffffffffffff00,
                (ulonglong)ppdVar17 & 0xffffffffffffff00);
  uVar15 = (ulonglong)local_58[0];
  if (((int)local_58[0] < 2) || (pdVar16 = (double *)local_50[1], pdVar16 != &local_188)) {
    local_198 = *pdVar16;
    dStack_190 = pdVar16[1];
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_198);
  }
  local_158 = &local_188;
  switch(local_1cc) {
  default:
switchD_14039a4a3_caseD_1:
    dVar13 = 0.0;
    break;
  case 6:
    dVar13 = local_1d8;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_1d8 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_14039a4a3_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar5 = FUN_140e4a8b0(&local_1d8);
    dVar13 = (double)FUN_140e87250(uVar5);
  }
  pdVar16 = (double *)FUN_140e63610(dVar13,param_2,&local_208,1,&local_a8,&local_158);
  if (pdVar16 != param_3) {
    local_198 = *pdVar16;
    dStack_190 = pdVar16[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_198);
  }
LAB_140399280:
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_res20 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  _eh_vector_destructor_iterator_(&local_188,0x10,3,FUN_140041b30);
  if (0 < (int)uVar15) {
    puVar14 = local_50;
    do {
      puVar1 = (undefined8 *)*puVar14;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar14 = puVar14 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_140;
  return param_3;
LAB_14039a092:
  local_130 = 0xfa;
  if ((int)uVar6 < 3) {
    puVar14 = &DAT_1419df7b0;
  }
  else {
    puVar14 = (undefined8 *)local_50[2];
  }
  cVar3 = FUN_140e491e0(puVar14);
  if (cVar3 != '\0') goto LAB_140399970;
  uStack_d0 = (double)CONCAT44(DAT_141dd2374,DAT_141dd2370);
  if ((1 << ((byte)DAT_141dd2374 & 0x1f) & 0x46U) == 0) {
    local_d8 = DAT_141dd2368;
  }
  else {
    FUN_1400419b0(&local_d8,&DAT_141dd2368);
  }
  iVar4 = FUN_140e851f0(&local_128,&local_d8,DAT_141955260,0);
  if ((1 << ((byte)((ulonglong)uStack_d0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (iVar4 == 0) goto LAB_140399970;
  local_130 = 0xfb;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  uVar9 = (ulonglong)ppdVar17 & 0xffffffffffffff00;
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_140e87440(&local_1f8,DAT_1419f49a8,0x80000000,&local_108,uVar15,uVar9);
  FUN_140e87440(&local_1f8,DAT_1419f4ce8,0x80000000,&local_c8,uVar15 & 0xffffffffffffff00,
                uVar9 & 0xffffffffffffff00);
  switch(local_1ec) {
  default:
switchD_14039a21d_caseD_1:
    dVar11 = 0.0;
    break;
  case 6:
    dVar11 = local_1f8;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_1f8 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_14039a21d_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar5 = FUN_140e4a8b0(&local_1f8);
    dVar11 = (double)FUN_140e87250(uVar5);
  }
  pdVar10 = (double *)FUN_140e63610(dVar11,param_2,&local_1e8,0,&local_108,0);
  if (pdVar10 != &local_188) {
    local_198 = *pdVar10;
    dStack_190 = pdVar10[1];
    if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_198);
  }
  local_158 = &local_188;
  local_198 = _DAT_141dc6510;
  dStack_190 = dRam0000000141dc6518;
  if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_198);
  local_150 = local_178;
  switch(local_1ec) {
  default:
switchD_14039a309_caseD_1:
    dVar11 = 0.0;
    break;
  case 6:
    dVar11 = local_1f8;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_1f8 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_14039a309_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar5 = FUN_140e4a8b0(&local_1f8);
    dVar11 = (double)FUN_140e87250(uVar5);
  }
  puVar14 = &local_c8;
  pdVar10 = (double *)FUN_140e63610(dVar11,param_2,&local_1a8,0,puVar14,0);
  uVar5 = (undefined4)((ulonglong)puVar14 >> 0x20);
  if (pdVar10 != local_168) {
    local_198 = *pdVar10;
    dStack_190 = pdVar10[1];
    if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_198);
  }
  local_148 = local_168;
  uVar12 = 3;
  uVar7 = DAT_1419f4a48;
LAB_14039a3b4:
  ppdVar17 = &local_158;
  uVar15 = CONCAT44(uVar5,uVar7);
  FUN_140e634e0(param_1,param_2,&local_208,uVar12,uVar15,ppdVar17);
  goto LAB_140399970;
}

