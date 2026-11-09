// gml_Script_anon_15960_gml_Object_oRogueLevelManager_Other_12 @ 0x140d13660

undefined8 *
gml_Script_anon_15960_gml_Object_oRogueLevelManager_Other_12
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double *pdVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  double local_128;
  uint local_11c;
  longlong local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  double local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  uint local_dc;
  undefined8 local_d8;
  uint local_cc;
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  longlong local_70;
  longlong lStack_68;
  
  local_80 = "gml_Script_anon@14350@gml_Object_oRogueLevelManager_Other_12";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_fc = 0;
  uVar15 = 0;
  uVar16 = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x1fc;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5eb8);
  FUN_140e87170(uVar6,DAT_1419fe0e8,0x80000000,&local_d8,param_1,param_2);
  plVar10 = param_1;
  uVar18 = param_2;
  FUN_140e87170(uVar6,DAT_1419fe158,0x80000000,&local_e8,param_1,param_2);
  if ((local_dc & 0xffffff) == 0) {
    uVar11 = (undefined4)local_e8;
    uVar13 = (undefined4)((ulonglong)local_e8 >> 0x20);
  }
  else {
    uVar6 = FUN_140e4b060(&local_e8);
    uVar11 = (undefined4)uVar6;
    uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
  }
  if ((local_cc & 0xffffff) == 0) {
    uVar12 = (undefined4)local_d8;
    uVar14 = (undefined4)((ulonglong)local_d8 >> 0x20);
  }
  else {
    uVar6 = FUN_140e4b060(&local_d8);
    uVar12 = (undefined4)uVar6;
    uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
  }
  uVar2 = FUN_140e4a740(uVar5);
  pdVar7 = (double *)
           FUN_140ea8b20(&local_108,uVar2,(longlong)(double)CONCAT44(uVar14,uVar12),
                         (longlong)(double)CONCAT44(uVar13,uVar11));
  if (pdVar7 != &local_f8) {
    local_c8 = *pdVar7;
    dStack_c0 = pdVar7[1];
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_c8);
  }
  local_78 = 0x1fd;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 0;
  local_128 = 0.0;
  bVar1 = true;
  do {
    iVar4 = 0;
    if (!bVar1) {
      local_78 = 0x1fd;
      uVar3 = local_11c & 0xffffff;
      if (uVar3 == 0) {
LAB_140d138c3:
        local_128 = (double)CONCAT44(uVar16,uVar15) + 1.0;
      }
      else if (uVar3 == 1) {
        local_128 = (double)FUN_140e4b060(&local_128);
        local_128 = local_128 + 1.0;
        local_11c = 0;
      }
      else if (uVar3 == 7) {
        local_128 = (double)CONCAT44(local_128._4_4_,local_128._0_4_ + 1);
      }
      else if (uVar3 == 10) {
        local_128 = (double)((longlong)local_128 + 1);
      }
      else {
        if (uVar3 == 0xd) {
          local_11c = 0;
          goto LAB_140d138c3;
        }
        FUN_140042910(&DAT_14172c3d8,&local_128,&local_128);
      }
    }
    bVar1 = false;
    plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fa898);
    if ((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) {
      iVar4 = *(int *)(*plVar8 + 0x24);
    }
    dStack_c0 = (double)((ulonglong)dStack_c0 & 0xffffffff);
    local_c8 = (double)iVar4;
    iVar4 = FUN_140e851f0(&local_128,&local_c8,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)dStack_c0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    if (iVar4 == -2 || -1 < iVar4) {
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      DAT_141dc7a50 = (undefined8 *)local_88;
      return param_3;
    }
    local_78 = 0x1fe;
    plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fa898);
    iVar4 = FUN_140e4a740(&local_128);
    if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar9 = *plVar8, lVar9 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar9 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar9 + 0x24));
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar9 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar8 != &local_118) {
      local_70 = *plVar8;
      lStack_68 = plVar8[1];
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_70);
    }
    local_78 = 0x1ff;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    uVar18 = uVar18 & 0xffffffffffffff00;
    uVar17 = (ulonglong)plVar10 & 0xffffffffffffff00;
    FUN_140e87440(&local_f8,DAT_141a57c20,0x80000000,&local_98,uVar17,uVar18);
    uVar18 = uVar18 & 0xffffffffffffff00;
    uVar17 = uVar17 & 0xffffffffffffff00;
    FUN_140e87440(&local_118,DAT_141a0a8a8,0x80000000,&local_a8,uVar17,uVar18);
    FUN_140e87440(&local_118,DAT_1419fa768,0x80000000,&local_b8,uVar17 & 0xffffffffffffff00,
                  uVar18 & 0xffffffffffffff00);
    switch(local_10c) {
    default:
switchD_140d13ad1_caseD_1:
      lVar9 = 0;
      break;
    case 6:
      lVar9 = local_118;
      break;
    case 0xf:
      iVar4 = (int)((ulonglong)local_118 >> 0x20);
      if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_140d13ad1_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar15 = FUN_140e4a8b0(&local_118);
      lVar9 = FUN_140e87250(uVar15);
    }
    uVar18 = 0;
    plVar10 = (longlong *)FUN_140e63610(lVar9,param_2,&local_108,0,&local_b8,0);
    FUN_140e98ef0(param_1,param_2,&local_98,&local_a8,plVar10);
    uVar15 = SUB84(local_128,0);
    uVar16 = (undefined4)((ulonglong)local_128 >> 0x20);
  } while( true );
}

