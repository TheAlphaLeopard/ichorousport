// gml_Script_anon_980____struct___411_anon_763_gml_Object_oButtonSet_Create_0 @ 0x14086c0c0

undefined8 *
gml_Script_anon_980____struct___411_anon_763_gml_Object_oButtonSet_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  double *pdVar12;
  double *pdVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  code *pcVar18;
  ulonglong in_stack_fffffffffffffec0;
  double **ppdVar19;
  double local_138;
  uint local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  double local_118;
  byte local_10c;
  double local_108;
  undefined4 local_fc;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  double *local_d0;
  undefined8 local_c8;
  undefined4 local_bc;
  double local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  double local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  
  local_e0 = "gml_Script_anon@344@gml_Object_oButtonSet_Create_0";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x15;
  pcVar18 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_118,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0.0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x17;
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0d5d8);
  cVar6 = FUN_140e491e0(uVar9);
  if (cVar6 == '\0') {
LAB_14086c3e3:
    local_d8 = 0x20;
    plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0d558);
    cVar6 = FUN_140e491e0(uVar9);
    puVar16 = &DAT_1419df7b0;
    if (cVar6 == '\0') {
      plVar11 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0d558);
      if (param_4 < 1) {
        puVar15 = &DAT_1419df7b0;
      }
      else {
        puVar15 = (undefined8 *)*param_5;
      }
      iVar8 = FUN_140e4a740(puVar15);
      if (((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar11, lVar1 != 0))
      {
        if ((iVar8 < 0) || (*(int *)(lVar1 + 0x24) <= iVar8)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar8,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = (longlong *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
      pcVar18 = (code *)((ulonglong)pcVar18 & 0xffffffffffffff00);
      FUN_140e87440(plVar11,DAT_141a0d3e8,0x80000000,&local_b8,pcVar18,in_stack_fffffffffffffec0);
      uVar17 = 0xd;
      local_fc = 0xd;
      cVar6 = FUN_140e491e0(&local_b8);
      local_108 = (double)(cVar6 == '\0');
      pdVar12 = &local_108;
      bVar4 = false;
      bVar3 = true;
    }
    else {
      uStack_8c = 0xd;
      local_98 = 1.0;
      pdVar12 = &local_98;
      bVar4 = true;
      bVar3 = false;
      uVar17 = local_fc;
    }
    uVar5 = uStack_8c;
    local_f8 = *pdVar12;
    uStack_f0 = pdVar12[1];
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_f8);
    if ((bVar3) && ((1 << ((byte)uVar17 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_108);
    }
    if ((bVar4) && ((1 << ((byte)uVar5 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_98);
    }
    (**(code **)(*param_1 + 8))(param_1,DAT_141a0d5d8);
    if (param_4 < 1) {
      puVar15 = &DAT_1419df7b0;
    }
    else {
      puVar15 = (undefined8 *)*param_5;
    }
    iVar8 = FUN_140e4a740(puVar15);
    if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
      if ((iVar8 < 0) || (*(int *)(lVar1 + 0x24) <= iVar8)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar8,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    FUN_140e87930(plVar10,DAT_141a0d3e8,0x80000000,&local_c8);
    local_d8 = 0x21;
    pdVar12 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0d8e8);
    FUN_140e609c0(param_1);
    if (param_4 < 1) {
      pdVar13 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar13 = (double *)*param_5;
    }
    if (pdVar13 != pdVar12) {
      local_f8 = *pdVar13;
      uStack_f0 = pdVar13[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar12);
      }
      FUN_140041b80(pdVar12,&local_f8);
    }
    FUN_140e60910(1);
    local_d8 = 0x23;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0d558);
    if (param_4 < 1) {
      puVar15 = &DAT_1419df7b0;
    }
    else {
      puVar15 = (undefined8 *)*param_5;
    }
    iVar8 = FUN_140e4a740(puVar15);
    if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
      if ((iVar8 < 0) || (*(int *)(lVar1 + 0x24) <= iVar8)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar8,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = (longlong *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar11 = plVar10;
    }
    in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
    uVar14 = (ulonglong)pcVar18 & 0xffffffffffffff00;
    FUN_140e87440(plVar11,DAT_141a0d4a8,0x80000000,&local_78,uVar14,in_stack_fffffffffffffec0);
    if (param_4 < 1) {
      puVar15 = &DAT_1419df7b0;
    }
    else {
      puVar15 = (undefined8 *)*param_5;
    }
    iVar8 = FUN_140e4a740(puVar15);
    if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
      if ((iVar8 < 0) || (*(int *)(lVar1 + 0x24) <= iVar8)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar8,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = (longlong *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar11 = plVar10;
    }
    FUN_140e87440(plVar11,DAT_141a0d3e8,0x80000000,&local_b8,uVar14 & 0xffffffffffffff00,
                  in_stack_fffffffffffffec0 & 0xffffffffffffff00);
    uStack_f0 = (double)CONCAT44(uStack_ac,uStack_b0);
    local_f8 = local_b8;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_f8);
    local_d0 = &local_118;
    if (param_4 < 1) {
      puVar15 = &DAT_1419df7b0;
    }
    else {
      puVar15 = (undefined8 *)*param_5;
    }
    iVar8 = FUN_140e4a740(puVar15);
    if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
      if ((iVar8 < 0) || (*(int *)(lVar1 + 0x24) <= iVar8)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar8,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uVar9 = FUN_140069500(plVar10);
    FUN_140e63610(uVar9,param_2,&local_128,1,&local_78,&local_d0);
    local_d8 = 0x24;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    uVar14 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0d938);
    pdVar12 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0d558);
    if (0 < param_4) {
      puVar16 = (undefined8 *)*param_5;
    }
    iVar8 = FUN_140e4a740(puVar16);
    if (((*(uint *)((longlong)pdVar12 + 0xc) & 0xffffff) == 2) && (dVar2 = *pdVar12, dVar2 != 0.0))
    {
      if ((iVar8 < 0) || (*(int *)((longlong)dVar2 + 0x24) <= iVar8)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar8,
                      *(undefined4 *)((longlong)dVar2 + 0x24));
        pdVar12 = (double *)0x0;
      }
      else {
        pdVar12 = (double *)((longlong)iVar8 * 0x10 + *(longlong *)((longlong)dVar2 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar12 != &local_118) {
      local_f8 = *pdVar12;
      uStack_f0 = pdVar12[1];
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_f8);
    }
    local_d0 = &local_118;
    ppdVar19 = &local_d0;
    FUN_140e63610(param_1,param_2,&local_128,1,uVar14,ppdVar19);
    local_d8 = 0x26;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0d3b8);
    FUN_140e87440(uVar9,DAT_1419f4a98,0x80000000,&local_88,uVar14 & 0xffffffffffffff00,
                  (ulonglong)ppdVar19 & 0xffffffffffffff00);
    uVar9 = FUN_140069500(uVar9);
    FUN_140e63610(uVar9,param_2,&local_128,0,&local_88,0);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    _eh_vector_destructor_iterator_(&local_118,0x10,1,FUN_140041b30);
    DAT_141dc7a50 = (undefined8 *)local_e8;
    return param_3;
  }
  local_d8 = 0x19;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_12c = 0;
  local_138 = 0.0;
  bVar3 = true;
  do {
    if (!bVar3) {
      local_d8 = 0x19;
      uVar7 = local_12c & 0xffffff;
      if (uVar7 != 0) {
        if (uVar7 != 1) {
          if (uVar7 == 7) {
            local_138 = (double)CONCAT44(local_138._4_4_,local_138._0_4_ + 1);
          }
          else if (uVar7 == 10) {
            local_138 = (double)((longlong)local_138 + 1);
          }
          else {
            if (uVar7 == 0xd) goto LAB_14086c26a;
            FUN_140042910(&DAT_14172c3d8,&local_138,&local_138);
          }
          goto LAB_14086c279;
        }
        local_138 = (double)FUN_140e4b060(&local_138);
LAB_14086c26a:
        local_12c = 0;
      }
      local_138 = local_138 + 1.0;
    }
LAB_14086c279:
    bVar3 = false;
    plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0d558);
    iVar8 = 0;
    if ((*(int *)((longlong)plVar10 + 0xc) == 2) && (*plVar10 != 0)) {
      iVar8 = *(int *)(*plVar10 + 0x24);
    }
    local_fc = 0;
    local_108 = (double)iVar8;
    iVar8 = FUN_140e851f0(&local_138,&local_108,DAT_141955260,1);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if (iVar8 == -2 || -1 < iVar8) goto LAB_14086c3e3;
    local_d8 = 0x1b;
    plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0d558);
    local_98 = 0.0;
    uStack_8c = 0xd;
    local_f8 = 0.0;
    uStack_f0 = (double)CONCAT44(0xd,uStack_90);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_f8);
    iVar8 = FUN_140e4a740(&local_138);
    if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
      if ((iVar8 < 0) || (*(int *)(lVar1 + 0x24) <= iVar8)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar8,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    FUN_140e87930(plVar10,DAT_141a0d3e8,0x80000000,&local_a8);
  } while( true );
}

