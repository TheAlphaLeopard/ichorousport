// gml_Script____struct___589_gml_Object_oOfferingManager_Other_10 @ 0x140b88900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * gml_Script____struct___589_gml_Object_oOfferingManager_Other_10
                   (undefined8 param_1,undefined8 param_2,double *param_3,int param_4,
                   undefined8 *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  double dVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar15;
  undefined8 *puVar13;
  ulonglong uVar14;
  double **ppdVar16;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
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
  
  local_d0 = "gml_Script_anon@550@___struct___589@gml_Object_oOfferingManager_Other_10";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x19;
  uVar15 = 1;
  _eh_vector_constructor_iterator_(local_80,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = 0.0;
  pdVar4 = (double *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef1a8);
  uStack_a4 = 0xffffff;
  local_b0 = 0.0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_b4 = 0xffffff;
  local_c0 = 0.0;
  uStack_10c = 0xffffff;
  local_118 = 0.0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_12c = 0;
  uVar11 = 0;
  uVar12 = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  local_c8 = 0x1b;
  local_f8 = DAT_141dd9f58;
  dStack_f0 = _DAT_141dd9f60;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_f8);
  local_c8 = 0x1c;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if (pdVar4 != local_80) {
    local_f8 = *pdVar4;
    dStack_f0 = pdVar4[1];
    if ((1 << ((byte)local_80[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_80);
    }
    FUN_140041b80(local_80,&local_f8);
  }
  local_a0 = local_80;
  puVar13 = (undefined8 *)CONCAT44(uVar15,DAT_141a0aa48);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_138,1,puVar13,&local_a0);
  dVar9 = 0.0;
  uVar10 = 0xffffff;
  if (pdVar5 != &local_b0) {
    local_f8 = *pdVar5;
    dStack_f0 = pdVar5[1];
    FUN_140041b80(&local_b0,&local_f8);
    dVar9 = local_b0;
    uVar10 = uStack_a4;
  }
  local_c8 = 0x1d;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 0;
  local_128 = 0.0;
  bVar1 = true;
  do {
    uVar15 = (undefined4)((ulonglong)puVar13 >> 0x20);
    iVar3 = 0;
    if (!bVar1) {
      local_c8 = 0x1d;
      uVar2 = local_11c & 0xffffff;
      if (uVar2 == 0) {
LAB_140b88b87:
        local_128 = (double)CONCAT44(uVar12,uVar11) + 1.0;
      }
      else if (uVar2 == 1) {
        local_128 = (double)FUN_140e4b060(&local_128);
        local_128 = local_128 + 1.0;
        local_11c = 0;
      }
      else if (uVar2 == 7) {
        local_128 = (double)CONCAT44(local_128._4_4_,local_128._0_4_ + 1);
      }
      else if (uVar2 == 10) {
        local_128 = (double)((longlong)local_128 + 1);
      }
      else {
        if (uVar2 == 0xd) {
          local_11c = 0;
          goto LAB_140b88b87;
        }
        FUN_140042910(&DAT_14172c3d8,&local_128,&local_128);
      }
    }
    bVar1 = false;
    if ((uVar10 == 2) && (dVar9 != 0.0)) {
      iVar3 = *(int *)((longlong)dVar9 + 0x24);
    }
    dStack_f0 = (double)((ulonglong)dStack_f0 & 0xffffffff);
    local_f8 = (double)iVar3;
    iVar3 = FUN_140e851f0(&local_128,&local_f8,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)dStack_f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if (iVar3 == -2 || -1 < iVar3) goto LAB_140b88edd;
    local_c8 = 0x1e;
    iVar3 = FUN_140e4a740(&local_128);
    pdVar5 = (double *)0x0;
    if (((uVar10 & 0xffffff) == 2) && (dVar9 != 0.0)) {
      if ((iVar3 < 0) || (*(int *)((longlong)dVar9 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)((longlong)dVar9 + 0x24));
      }
      else {
        pdVar5 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar9 + 8));
      }
      if (pdVar5 != &local_c0) goto LAB_140b88c90;
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      pdVar5 = &local_b0;
LAB_140b88c90:
      local_e8 = *pdVar5;
      dStack_e0 = pdVar5[1];
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      FUN_140041b80(&local_c0,&local_e8);
    }
    local_c8 = 0x1f;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    if (pdVar4 != local_80) {
      local_e8 = *pdVar4;
      dStack_e0 = pdVar4[1];
      if ((1 << ((byte)local_80[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_80);
      }
      FUN_140041b80(local_80,&local_e8);
    }
    local_a0 = local_80;
    local_98 = &local_c0;
    ppdVar16 = &local_a0;
    uVar14 = CONCAT44(uVar15,DAT_141a01138);
    pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_138,2,uVar14,ppdVar16);
    if (pdVar5 != &local_118) {
      local_e8 = *pdVar5;
      dStack_e0 = pdVar5[1];
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_e8);
    }
    local_c8 = 0x20;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    FUN_140e87440(&local_118,DAT_141a0aa28,0x80000000,&local_90,uVar14 & 0xffffffffffffff00,
                  (ulonglong)ppdVar16 & 0xffffffffffffff00);
    if (param_4 < 1) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)*param_5;
    }
    switch(uStack_10c) {
    default:
switchD_140b88e1f_caseD_1:
      dVar6 = 0.0;
      break;
    case 6:
      dVar6 = local_118;
      break;
    case 0xf:
      iVar3 = (int)((ulonglong)local_118 >> 0x20);
      if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_140b88e1f_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar11 = FUN_140e4a8b0(&local_118);
      dVar6 = (double)FUN_140e87250(uVar11);
    }
    puVar13 = &local_90;
    uVar7 = FUN_140e63610(dVar6,param_2,&local_138,0,puVar13,0);
    iVar3 = FUN_140e851f0(uVar7,puVar8,DAT_141955260,0);
    uVar15 = (undefined4)((ulonglong)puVar13 >> 0x20);
    if (iVar3 == 0) {
      local_c8 = 0x21;
      dStack_e0 = (double)CONCAT44(uStack_10c,uStack_110);
      local_e8 = local_118;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_e8);
LAB_140b88edd:
      local_c8 = 0x25;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_138 = 0;
      local_130 = 0;
      local_12c = 5;
      local_a0 = &local_108;
      pdVar4 = (double *)
               FUN_140e634e0(param_1,param_2,&local_138,1,CONCAT44(uVar15,DAT_1419fd0c8),&local_a0);
      if (pdVar4 != param_3) {
        local_e8 = *pdVar4;
        dStack_e0 = pdVar4[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_e8);
      }
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
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
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      _eh_vector_destructor_iterator_(local_80,0x10,2,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_d8;
      return param_3;
    }
    uVar11 = SUB84(local_128,0);
    uVar12 = (undefined4)((ulonglong)local_128 >> 0x20);
  } while( true );
}

