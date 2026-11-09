// gml_Script_anon_3551_gml_Object_oRogueLevelManager_Other_11 @ 0x140ce7d90

longlong *
gml_Script_anon_3551_gml_Object_oRogueLevelManager_Other_11
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint uVar8;
  code *pcVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined8 **in_stack_fffffffffffffea0;
  ulonglong uVar12;
  double local_158;
  uint local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  undefined4 local_bc;
  undefined8 local_b8 [2];
  undefined8 local_a8 [6];
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  
  local_100 = "gml_Script_anon@3257@gml_Object_oRogueLevelManager_Other_11";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x90;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x91;
  local_14c = 0;
  local_158 = 0.0;
  bVar2 = true;
  uVar8 = 0x3ff00000;
  do {
    iVar4 = 0;
    if (!bVar2) {
      local_f8 = 0x91;
      uVar3 = local_14c & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_158 = (double)CONCAT44(local_158._4_4_,local_158._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_158 = (double)((longlong)local_158 + 1);
          }
          else {
            if (uVar3 == 0xd) goto LAB_140ce7ede;
            FUN_140042910(&DAT_14172c3d8,&local_158,&local_158);
          }
          goto LAB_140ce7eec;
        }
        local_158 = (double)FUN_140e4b060(&local_158);
LAB_140ce7ede:
        local_14c = 0;
      }
      local_158 = local_158 + 1.0;
    }
LAB_140ce7eec:
    bVar2 = false;
    if (param_4 < 3) {
      plVar7 = &DAT_1419df7b0;
    }
    else {
      plVar7 = (longlong *)param_5[2];
    }
    if ((*(int *)((longlong)plVar7 + 0xc) == 2) && (*plVar7 != 0)) {
      iVar4 = *(int *)(*plVar7 + 0x24);
    }
    local_bc = 0;
    local_c8 = (double)iVar4;
    iVar4 = FUN_140e851f0(&local_158,&local_c8,DAT_141955260,1);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    if (iVar4 == -2 || -1 < iVar4) {
      local_f8 = 0x97;
      uVar8 = 0;
      goto LAB_140ce8271;
    }
    local_f8 = 0x92;
    iVar4 = FUN_140e4a740(&local_158);
    if (param_4 < 3) {
      plVar7 = &DAT_1419df7b0;
    }
    else {
      plVar7 = (longlong *)param_5[2];
    }
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uVar12 = (ulonglong)in_stack_fffffffffffffea0 & 0xffffffffffffff00;
    uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
    FUN_140e87440(plVar7,DAT_1419fa4b8,0x80000000,&local_d8,uVar10,uVar12);
    uStack_110 = CONCAT44(uStack_cc,uStack_d0);
    local_118 = local_d8;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_118);
    local_f8 = 0x93;
    iVar4 = FUN_140e4a740(&local_158);
    if (param_4 < 3) {
      plVar7 = &DAT_1419df7b0;
    }
    else {
      plVar7 = (longlong *)param_5[2];
    }
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(plVar7,DAT_1419fa4d8,0x80000000,&local_e8,uVar10,uVar12 & 0xffffffffffffff00);
    uVar11 = (undefined4)(uVar10 >> 0x20);
    uStack_110 = CONCAT44(uStack_dc,uStack_e0);
    local_118 = local_e8;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_118);
    local_f8 = 0x94;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    if (param_4 < 1) {
      puVar6 = &DAT_1419df7b0;
LAB_140ce814b:
      local_118 = *puVar6;
      uStack_110 = puVar6[1];
      if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_118);
    }
    else {
      puVar6 = (undefined8 *)*param_5;
      if (puVar6 != local_b8) goto LAB_140ce814b;
    }
    local_78 = local_b8;
    if (param_4 < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_140ce819c:
      local_118 = *puVar6;
      uStack_110 = puVar6[1];
      if ((1 << ((byte)local_a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_118);
    }
    else {
      puVar6 = (undefined8 *)param_5[1];
      if (puVar6 != local_a8) goto LAB_140ce819c;
    }
    local_70 = local_a8;
    local_68 = &local_128;
    local_60 = &local_138;
    if (param_4 < 4) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)param_5[3];
    }
    in_stack_fffffffffffffea0 = &local_78;
    pcVar9 = (code *)CONCAT44(uVar11,DAT_1419fd548);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_148,4,pcVar9,in_stack_fffffffffffffea0);
    iVar4 = FUN_140e851f0(uVar5,puVar6,DAT_141955260,1);
  } while (iVar4 == -2 || -1 < iVar4);
  local_f8 = 0x95;
LAB_140ce8271:
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = (ulonglong)uVar8 << 0x20;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

