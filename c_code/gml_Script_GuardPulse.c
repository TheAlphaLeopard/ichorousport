// gml_Script_GuardPulse @ 0x140292ad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_GuardPulse(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  double *pdVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  double *pdVar11;
  longlong *plVar12;
  longlong *plVar13;
  code *pcVar14;
  undefined4 uVar16;
  ulonglong uVar15;
  double **in_stack_fffffffffffffe90;
  ulonglong uVar17;
  double local_168;
  uint local_15c;
  double local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  double local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  double local_100 [2];
  double local_f0;
  byte local_e4;
  double local_e0 [2];
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  double local_98;
  double dStack_90;
  double *local_88;
  double *local_80;
  double *local_78;
  
  local_120 = "gml_Script_anon@2703@GuardPulse@GuardPulse";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0x60;
  pcVar14 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_100,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  pdVar7 = (double *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a58070);
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_13c = 0;
  local_148 = 0;
  local_104 = 0;
  local_110 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0x61;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a58110);
  cVar3 = FUN_140e491e0(uVar8);
  if (cVar3 != '\0') {
    local_118 = 0x62;
    uVar8 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a58080);
    FUN_140e609c0(param_1);
    FUN_1400460e0(uVar8,uVar6);
    FUN_140e60910(1);
    local_118 = 99;
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a58080);
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a58050);
    uVar4 = FUN_140e851f0(uVar8,uVar9,DAT_141955260,1);
    if (uVar4 < 0x80000000) {
      local_118 = 100;
      puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58080);
      uVar16 = (undefined4)((ulonglong)pcVar14 >> 0x20);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
      *puVar10 = 0;
      local_118 = 0x65;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = 0;
      local_140 = 0;
      local_13c = 5;
      if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_110);
      }
      local_110 = 0;
      local_108 = 0;
      local_104 = 5;
      pdVar11 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a58100);
      FUN_140e609c0(DAT_141a729d8);
      FUN_140e645a0(&local_158,gml_Script_anon_3129_GuardPulse_GuardPulse,0);
      if (&local_158 != pdVar7) {
        local_138 = local_158;
        uStack_130 = uStack_150;
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar7);
        }
        FUN_140041b80(pdVar7,&local_138);
      }
      FUN_140e60910(1);
      if (pdVar7 != local_100) {
        local_138 = *pdVar7;
        uStack_130 = pdVar7[1];
        if ((1 << ((byte)local_100[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_100);
        }
        FUN_140041b80(local_100,&local_138);
      }
      if ((1 << ((byte)((ulonglong)uStack_150 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_88 = local_100;
      if (pdVar11 != &local_f0) {
        local_158 = *pdVar11;
        uStack_150 = pdVar11[1];
        if ((1 << (local_e4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f0);
        }
        FUN_140041b80(&local_f0,&local_158);
      }
      local_80 = &local_f0;
      uVar8 = CONCAT44(uVar16,DAT_1419fd6d8);
      pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_110,1,uVar8,&local_88);
      uVar16 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if (pdVar7 != local_e0) {
        local_158 = *pdVar7;
        uStack_150 = pdVar7[1];
        if ((1 << ((byte)local_e0[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e0);
        }
        FUN_140041b80(local_e0,&local_158);
      }
      local_78 = local_e0;
      in_stack_fffffffffffffe90 = &local_80;
      pcVar14 = (code *)CONCAT44(uVar16,DAT_1419fe568);
      FUN_140e634e0(param_1,param_2,&local_148,2,pcVar14,in_stack_fffffffffffffe90);
    }
  }
  local_118 = 0x69;
  pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a580c0);
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a58050);
  uStack_130._4_4_ = *(undefined4 *)((longlong)pdVar7 + 0xc);
  uStack_130._0_4_ = *(undefined4 *)(pdVar7 + 1);
  if ((1 << ((byte)uStack_130._4_4_ & 0x1f) & 0x46U) == 0) {
    local_138 = *pdVar7;
  }
  else {
    FUN_1400419b0(&local_138,pdVar7);
  }
  FUN_140046500(&local_138,uVar8);
  uStack_150 = (double)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
  if ((1 << ((byte)uStack_130._4_4_ & 0x1f) & 0x46U) == 0) {
    local_158 = local_138;
  }
  else {
    FUN_1400419b0(&local_158,&local_138);
  }
  FUN_140042560(&local_158,uVar6);
  local_98 = local_158;
  dStack_90 = uStack_150;
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  FUN_140041b80(&local_d0,&local_98);
  if ((1 << ((byte)((ulonglong)uStack_150 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_130._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_118 = 0x6a;
  plVar12 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a58100);
  iVar5 = 0;
  if ((*(int *)((longlong)plVar12 + 0xc) == 2) && (*plVar12 != 0)) {
    iVar5 = *(int *)(*plVar12 + 0x24);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_15c = 0;
  local_168 = (double)(iVar5 + -1);
  bVar2 = true;
  do {
    if (!bVar2) {
      local_118 = 0x6a;
      uVar4 = local_15c & 0xffffff;
      if (uVar4 == 0) {
LAB_14029309d:
        local_168 = local_168 + -1.0;
      }
      else if (uVar4 == 1) {
        local_168 = (double)FUN_140e4b060(&local_168);
        local_168 = local_168 - 1.0;
        local_15c = 0;
      }
      else if (uVar4 == 7) {
        local_168 = (double)CONCAT44(local_168._4_4_,local_168._0_4_ + -1);
      }
      else if (uVar4 == 10) {
        local_168 = (double)((longlong)local_168 + -1);
      }
      else {
        if (uVar4 == 0xd) {
          local_15c = 0;
          goto LAB_14029309d;
        }
        FUN_140042910(&DAT_14172c450,&local_168,&local_168);
      }
    }
    bVar2 = false;
    uStack_150 = (double)((ulonglong)uStack_150 & 0xffffffff);
    local_158 = 0.0;
    uVar4 = FUN_140e851f0(&local_168,&local_158,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)uStack_150 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if (0x7fffffff < uVar4) {
      if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_110);
      }
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d0);
      }
      _eh_vector_destructor_iterator_(local_100,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_128;
      return param_3;
    }
    local_118 = 0x6b;
    plVar12 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a58100);
    iVar5 = FUN_140e4a740(&local_168);
    if (((*(uint *)((longlong)plVar12 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar12, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar13 = (longlong *)0x0;
      }
      else {
        plVar13 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar13 = plVar12;
    }
    uVar17 = (ulonglong)in_stack_fffffffffffffe90 & 0xffffffffffffff00;
    uVar15 = (ulonglong)pcVar14 & 0xffffffffffffff00;
    FUN_140e87440(plVar13,DAT_141a58020,0x80000000,&local_c0,uVar15,uVar17);
    FUN_1400460e0(&local_c0,&local_d0);
    iVar5 = FUN_140e4a740(&local_168);
    if (((*(uint *)((longlong)plVar12 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar12, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar12 = (longlong *)0x0;
      }
      else {
        plVar12 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    FUN_140e87930(plVar12,DAT_141a58020,0x80000000,&local_c0);
    local_118 = 0x6c;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a580c0);
    plVar12 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a58100);
    iVar5 = FUN_140e4a740(&local_168);
    if (((*(uint *)((longlong)plVar12 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar12, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar12 = (longlong *)0x0;
      }
      else {
        plVar12 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    in_stack_fffffffffffffe90 = (double **)(uVar17 & 0xffffffffffffff00);
    pcVar14 = (code *)(uVar15 & 0xffffffffffffff00);
    FUN_140e87440(plVar12,DAT_141a58020,0x80000000,&local_b0,pcVar14,in_stack_fffffffffffffe90);
    uVar4 = FUN_140e851f0(&local_b0,uVar6,DAT_141955260,1);
    if (uVar4 < 0x80000000) {
      local_118 = 0x6d;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      uVar16 = (undefined4)((ulonglong)pcVar14 >> 0x20);
      local_148 = 0;
      local_140 = 0;
      local_13c = 5;
      pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a58100);
      if (pdVar7 != local_100) {
        local_98 = *pdVar7;
        dStack_90 = pdVar7[1];
        if ((1 << ((byte)local_100[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_100);
        }
        FUN_140041b80(local_100,&local_98);
      }
      local_88 = local_100;
      local_80 = &local_168;
      local_98 = _DAT_1419e3a50;
      dStack_90 = (double)uRam00000001419e3a58;
      if ((1 << ((byte)local_e0[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e0);
      }
      FUN_140041b80(local_e0,&local_98);
      local_78 = local_e0;
      in_stack_fffffffffffffe90 = &local_88;
      pcVar14 = (code *)CONCAT44(uVar16,DAT_1419fd808);
      FUN_140e634e0(param_1,param_2,&local_148,3,pcVar14,in_stack_fffffffffffffe90);
    }
  } while( true );
}

