// gml_Script_anon_975____struct___589_gml_Object_oOfferingManager_Other_10 @ 0x140b88020

double * gml_Script_anon_975____struct___589_gml_Object_oOfferingManager_Other_10
                   (undefined8 param_1,undefined8 param_2,double *param_3,int param_4,
                   undefined8 *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  double *pdVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  double dVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar14;
  undefined8 *puVar12;
  ulonglong uVar13;
  double **ppdVar15;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  double local_138;
  uint local_12c;
  double local_128;
  uint local_11c;
  double local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  undefined4 local_fc;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  double local_c0;
  undefined4 local_b4;
  double local_b0;
  uint uStack_a4;
  double *local_a0;
  double *local_98;
  undefined8 local_90;
  undefined4 local_84;
  double local_80 [9];
  
  local_d0 = "gml_Script_anon@157@___struct___589@gml_Object_oOfferingManager_Other_10";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 9;
  uVar14 = 1;
  _eh_vector_constructor_iterator_(local_80,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = 0.0;
  uStack_a4 = 0xffffff;
  local_b0 = 0.0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_b4 = 0xffffff;
  local_c0 = 0.0;
  uStack_10c = 0xffffff;
  local_118 = 0.0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_13c = 0;
  uVar10 = 0;
  uVar11 = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  local_c8 = 0xb;
  uVar6 = CONCAT44(uVar14,DAT_1419fd6d8);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_148,0,uVar6,0);
  uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (pdVar4 != &local_108) {
    local_f8 = *pdVar4;
    dStack_f0 = pdVar4[1];
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_f8);
  }
  local_c8 = 0xc;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if (param_4 < 1) {
    pdVar4 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar4 = (double *)*param_5;
    if (pdVar4 == local_80) goto LAB_140b881f3;
  }
  local_f8 = *pdVar4;
  dStack_f0 = pdVar4[1];
  if ((1 << ((byte)local_80[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_f8);
LAB_140b881f3:
  local_a0 = local_80;
  ppdVar15 = &local_a0;
  puVar12 = (undefined8 *)CONCAT44(uVar14,DAT_141a0aa48);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_148,1,puVar12,ppdVar15);
  dVar8 = 0.0;
  uVar9 = 0xffffff;
  if (pdVar4 != &local_b0) {
    local_f8 = *pdVar4;
    dStack_f0 = pdVar4[1];
    FUN_140041b80(&local_b0,&local_f8);
    dVar8 = local_b0;
    uVar9 = uStack_a4;
  }
  local_c8 = 0xd;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_12c = 0;
  local_138 = 0.0;
  bVar1 = true;
  do {
    iVar3 = 0;
    if (!bVar1) {
      local_c8 = 0xd;
      uVar2 = local_12c & 0xffffff;
      if (uVar2 == 0) {
LAB_140b882c9:
        local_138 = (double)CONCAT44(uVar11,uVar10) + 1.0;
      }
      else if (uVar2 == 1) {
        local_138 = (double)FUN_140e4b060(&local_138);
        local_138 = local_138 + 1.0;
        local_12c = 0;
      }
      else if (uVar2 == 7) {
        local_138 = (double)CONCAT44(local_138._4_4_,local_138._0_4_ + 1);
      }
      else if (uVar2 == 10) {
        local_138 = (double)((longlong)local_138 + 1);
      }
      else {
        if (uVar2 == 0xd) {
          local_12c = 0;
          goto LAB_140b882c9;
        }
        FUN_140042910(&DAT_14172c3d8,&local_138,&local_138);
      }
    }
    bVar1 = false;
    if ((uVar9 == 2) && (dVar8 != 0.0)) {
      iVar3 = *(int *)((longlong)dVar8 + 0x24);
    }
    dStack_f0 = (double)((ulonglong)dStack_f0 & 0xffffffff);
    local_f8 = (double)iVar3;
    iVar3 = FUN_140e851f0(&local_138,&local_f8,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)dStack_f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if (iVar3 == -2 || -1 < iVar3) goto LAB_140b8862c;
    local_c8 = 0xe;
    iVar3 = FUN_140e4a740(&local_138);
    uVar10 = (undefined4)((ulonglong)puVar12 >> 0x20);
    pdVar4 = (double *)0x0;
    if (((uVar9 & 0xffffff) == 2) && (dVar8 != 0.0)) {
      if ((iVar3 < 0) || (*(int *)((longlong)dVar8 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)((longlong)dVar8 + 0x24));
      }
      else {
        pdVar4 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar8 + 8));
      }
      if (pdVar4 != &local_c0) goto LAB_140b883cd;
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      pdVar4 = &local_b0;
LAB_140b883cd:
      local_e8 = *pdVar4;
      dStack_e0 = pdVar4[1];
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      FUN_140041b80(&local_c0,&local_e8);
    }
    local_c8 = 0xf;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    if (param_4 < 1) {
      pdVar4 = (double *)&DAT_1419df7b0;
LAB_140b88446:
      local_e8 = *pdVar4;
      dStack_e0 = pdVar4[1];
      if ((1 << ((byte)local_80[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_80);
      }
      FUN_140041b80(local_80,&local_e8);
    }
    else {
      pdVar4 = (double *)*param_5;
      if (pdVar4 != local_80) goto LAB_140b88446;
    }
    local_a0 = local_80;
    local_98 = &local_c0;
    ppdVar15 = &local_a0;
    uVar13 = CONCAT44(uVar10,DAT_141a01138);
    pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_148,2,uVar13,ppdVar15);
    if (pdVar4 != &local_118) {
      local_e8 = *pdVar4;
      dStack_e0 = pdVar4[1];
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_e8);
    }
    local_c8 = 0x10;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    FUN_140e87440(&local_118,DAT_141a0aa28,0x80000000,&local_90,uVar13 & 0xffffffffffffff00,
                  (ulonglong)ppdVar15 & 0xffffffffffffff00);
    if (param_4 < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)param_5[1];
    }
    switch(uStack_10c) {
    default:
switchD_140b8856b_caseD_1:
      dVar5 = 0.0;
      break;
    case 6:
      dVar5 = local_118;
      break;
    case 0xf:
      iVar3 = (int)((ulonglong)local_118 >> 0x20);
      if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_140b8856b_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar10 = FUN_140e4a8b0(&local_118);
      dVar5 = (double)FUN_140e87250(uVar10);
    }
    ppdVar15 = (double **)0x0;
    puVar12 = &local_90;
    uVar6 = FUN_140e63610(dVar5,param_2,&local_148,0,puVar12,0);
    iVar3 = FUN_140e851f0(uVar6,puVar7,DAT_141955260,0);
    if (iVar3 == 0) break;
    uVar10 = SUB84(local_138,0);
    uVar11 = (undefined4)((ulonglong)local_138 >> 0x20);
  } while( true );
  local_c8 = 0x11;
  dStack_e0 = (double)CONCAT44(uStack_10c,uStack_110);
  local_e8 = local_118;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_e8);
LAB_140b8862c:
  local_c8 = 0x15;
  uVar13 = (ulonglong)puVar12 & 0xffffffffffffff00;
  FUN_140e87440(&local_108,DAT_141a0ab58,0x80000000,&local_128,uVar13,
                (ulonglong)ppdVar15 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar13 >> 0x20);
  uVar2 = local_11c & 0xffffff;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      local_128 = (double)FUN_140e4b060(&local_128);
      local_128 = local_128 - 1.0;
      local_11c = 0;
      goto LAB_140b886b7;
    }
    if (uVar2 == 7) {
      local_128 = (double)CONCAT44(local_128._4_4_,local_128._0_4_ + -1);
      goto LAB_140b886b7;
    }
    if (uVar2 == 10) {
      local_128 = (double)((longlong)local_128 + -1);
      goto LAB_140b886b7;
    }
    if (uVar2 != 0xd) {
      FUN_140042910(&DAT_14172c450,&local_128,&local_128);
      goto LAB_140b886b7;
    }
    local_11c = 0;
  }
  local_128 = local_128 + -1.0;
LAB_140b886b7:
  FUN_140e87930(&local_108,DAT_141a0ab58,0x80000000,&local_128);
  local_c8 = 0x16;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  local_a0 = &local_108;
  pdVar4 = (double *)
           FUN_140e634e0(param_1,param_2,&local_148,1,CONCAT44(uVar10,DAT_1419fd0c8),&local_a0);
  if (pdVar4 != param_3) {
    local_e8 = *pdVar4;
    dStack_e0 = pdVar4[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_e8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_80,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

