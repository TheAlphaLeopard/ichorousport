// gml_Script_anon_1704___InputClassPlayer___InputClassPlayer @ 0x140048300

undefined8 *
gml_Script_anon_1704___InputClassPlayer___InputClassPlayer
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 **ppuVar4;
  longlong *plVar5;
  double *pdVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  double dVar17;
  uint local_res8;
  code *pcVar18;
  longlong **in_stack_fffffffffffffe90;
  longlong **pplVar19;
  double local_168;
  uint local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  double local_148;
  uint local_13c;
  longlong local_138 [2];
  longlong *local_128;
  undefined8 local_120;
  char *local_118;
  undefined4 local_110;
  undefined8 *local_108;
  undefined4 local_fc;
  longlong local_f8;
  undefined4 local_ec;
  longlong local_e8;
  uint uStack_dc;
  undefined8 *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  
  local_118 = "gml_Script___UpdateClusterThresholds@anon@5254@__InputClassPlayer@__InputClassPlayer"
  ;
  local_120 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_120;
  local_110 = 0x91;
  pcVar18 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_138,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_res8 = 0xffffff;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_fc = 0xffffff;
  local_108 = (undefined8 *)0x0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc220) &&
     (_Init_thread_header(&DAT_141ddc220), DAT_141ddc220 == -1)) {
    DAT_141ddc200 = (longlong *)FUN_140e63aa0(DAT_1419fd838);
    _Init_thread_footer(&DAT_141ddc220);
  }
  if (DAT_141ddc028 == '\0') {
    FUN_140e64380(DAT_141ddc200,
                  "gml_Script___UpdateClusterThresholds@anon@5254@__InputClassPlayer@__InputClassPlayer"
                 );
    FUN_140e64380(param_1,
                  "gml_Script___UpdateClusterThresholds@anon@5254@__InputClassPlayer@__InputClassPlayer"
                 );
  }
  local_110 = 0x93;
  if (DAT_141ddc028 == '\0') {
    DAT_141ddc028 = '\x01';
    ppuVar4 = (undefined8 **)(**(code **)(*DAT_141ddc200 + 0x10))(DAT_141ddc200,DAT_1419fd4a8);
    FUN_140e609c0(DAT_141ddc200);
    FUN_140e645a0(&local_c8,gml_Script___Update_anon_7371___InputClassPlayer___InputClassPlayer,0);
    if (&local_c8 != ppuVar4) {
      local_d8 = local_c8;
      uStack_d0 = uStack_c0;
      uStack_cc = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar4);
      }
      FUN_140041b80(ppuVar4,&local_d8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
  }
  local_110 = 0xa8;
  plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd4c8);
  lVar13 = 0;
  if (plVar5 != &local_e8) {
    local_d8 = (undefined8 *)*plVar5;
    uStack_d0 = (undefined4)plVar5[1];
    uStack_cc = *(undefined4 *)((longlong)plVar5 + 0xc);
    FUN_140041b80(&local_e8,&local_d8);
    local_res8 = uStack_dc;
    lVar13 = local_e8;
  }
  local_110 = 0xa9;
  ppuVar4 = (undefined8 **)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd5e8);
  if (ppuVar4 != &local_108) {
    local_d8 = *ppuVar4;
    uStack_d0 = *(undefined4 *)(ppuVar4 + 1);
    uStack_cc = *(undefined4 *)((longlong)ppuVar4 + 0xc);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_d8);
  }
  local_110 = 0xab;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_13c = 0;
  local_148 = 0.0;
  local_110 = 0xac;
  pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd788);
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar17 = *pdVar6;
  }
  else {
    dVar17 = (double)FUN_140e4b060(pdVar6);
  }
  uVar16 = (ulonglong)dVar17;
  if (0 < (int)uVar16) {
    uVar14 = local_res8 & 0xffffff;
    do {
      uVar15 = (int)uVar16 - 1;
      uVar16 = (ulonglong)uVar15;
      local_110 = 0xae;
      plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd698);
      iVar2 = FUN_140e4a740(&local_148);
      if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
        if ((iVar2 < 0) || (*(int *)(lVar1 + 0x24) <= iVar2)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar5 != &local_f8) {
        local_b8 = (undefined4)*plVar5;
        uStack_b4 = *(undefined4 *)((longlong)plVar5 + 4);
        uStack_b0 = (undefined4)plVar5[1];
        uStack_ac = *(undefined4 *)((longlong)plVar5 + 0xc);
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_b8);
      }
      local_110 = 0xb0;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      plVar5 = (longlong *)0x0;
      local_15c = 0;
      local_168 = 0.0;
      local_110 = 0xb1;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      uVar7 = (**(code **)(*DAT_141ddc200 + 8))(DAT_141ddc200,DAT_1419fd4a8);
      FUN_140e87440(&local_f8,DAT_1419fd108,0x80000000,&local_78,
                    (ulonglong)pcVar18 & 0xffffffffffffff00,
                    (ulonglong)in_stack_fffffffffffffe90 & 0xffffffffffffff00);
      iVar2 = FUN_140e4a740(&local_78);
      if ((uVar14 == 2) && (lVar13 != 0)) {
        if ((iVar2 < 0) || (*(int *)(lVar13 + 0x24) <= iVar2)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                        *(undefined4 *)(lVar13 + 0x24));
        }
        else {
          plVar5 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar13 + 8));
        }
        if (plVar5 != local_138) goto LAB_1400487e0;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar5 = &local_e8;
LAB_1400487e0:
        local_b8 = (undefined4)*plVar5;
        uStack_b4 = *(undefined4 *)((longlong)plVar5 + 4);
        uStack_b0 = (undefined4)plVar5[1];
        uStack_ac = *(undefined4 *)((longlong)plVar5 + 0xc);
        if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_b8);
      }
      local_128 = local_138;
      pplVar19 = &local_128;
      uVar8 = FUN_140e63610(param_1,param_2,&local_158,1,uVar7,pplVar19);
      uVar11 = local_15c & 0xffffff;
      if (uVar11 == 0) {
LAB_140048881:
        uVar12 = (ulonglong)local_168;
        uVar9 = FUN_140e4a8b0(uVar8);
        local_168 = (double)(uVar9 | uVar12);
        local_15c = 10;
      }
      else if (uVar11 == 7) {
        uVar11 = FUN_140e4a740(uVar8);
        local_168 = (double)CONCAT44(local_168._4_4_,local_168._0_4_ | uVar11);
      }
      else if (uVar11 == 10) {
        uVar9 = FUN_140e4a8b0(uVar8);
        local_168 = (double)((ulonglong)local_168 | uVar9);
      }
      else {
        if (uVar11 == 0xd) {
          local_15c = 0;
          goto LAB_140048881;
        }
        FUN_140042910(&DAT_14172c43c,&local_168,uVar8);
      }
      local_110 = 0xb2;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      plVar5 = (longlong *)0x0;
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      uVar9 = (**(code **)(*DAT_141ddc200 + 8))(DAT_141ddc200,DAT_1419fd4a8);
      FUN_140e87440(&local_f8,DAT_1419fd008,0x80000000,&local_88,uVar7 & 0xffffffffffffff00,
                    (ulonglong)pplVar19 & 0xffffffffffffff00);
      iVar2 = FUN_140e4a740(&local_88);
      if ((uVar14 == 2) && (lVar13 != 0)) {
        if ((iVar2 < 0) || (*(int *)(lVar13 + 0x24) <= iVar2)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                        *(undefined4 *)(lVar13 + 0x24));
        }
        else {
          plVar5 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar13 + 8));
        }
        if (plVar5 != local_138) goto LAB_140048988;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar5 = &local_e8;
LAB_140048988:
        local_b8 = (undefined4)*plVar5;
        uStack_b4 = *(undefined4 *)((longlong)plVar5 + 4);
        uStack_b0 = (undefined4)plVar5[1];
        uStack_ac = *(undefined4 *)((longlong)plVar5 + 0xc);
        if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_b8);
      }
      local_128 = local_138;
      pplVar19 = &local_128;
      uVar8 = FUN_140e63610(param_1,param_2,&local_158,1,uVar9,pplVar19);
      uVar11 = local_15c & 0xffffff;
      if (uVar11 == 0) {
LAB_140048a29:
        uVar12 = (ulonglong)local_168;
        uVar7 = FUN_140e4a8b0(uVar8);
        local_168 = (double)(uVar7 | uVar12);
        local_15c = 10;
      }
      else if (uVar11 == 7) {
        uVar11 = FUN_140e4a740(uVar8);
        local_168 = (double)CONCAT44(local_168._4_4_,local_168._0_4_ | uVar11);
      }
      else if (uVar11 == 10) {
        uVar7 = FUN_140e4a8b0(uVar8);
        local_168 = (double)((ulonglong)local_168 | uVar7);
      }
      else {
        if (uVar11 == 0xd) {
          local_15c = 0;
          goto LAB_140048a29;
        }
        FUN_140042910(&DAT_14172c43c,&local_168,uVar8);
      }
      local_110 = 0xb3;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      plVar5 = (longlong *)0x0;
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      uVar7 = (**(code **)(*DAT_141ddc200 + 8))(DAT_141ddc200,DAT_1419fd4a8);
      FUN_140e87440(&local_f8,DAT_1419fcfd8,0x80000000,&local_98,uVar9 & 0xffffffffffffff00,
                    (ulonglong)pplVar19 & 0xffffffffffffff00);
      iVar2 = FUN_140e4a740(&local_98);
      if ((uVar14 == 2) && (lVar13 != 0)) {
        if ((iVar2 < 0) || (*(int *)(lVar13 + 0x24) <= iVar2)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                        *(undefined4 *)(lVar13 + 0x24));
        }
        else {
          plVar5 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar13 + 8));
        }
        if (plVar5 != local_138) goto LAB_140048b30;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar5 = &local_e8;
LAB_140048b30:
        local_b8 = (undefined4)*plVar5;
        uStack_b4 = *(undefined4 *)((longlong)plVar5 + 4);
        uStack_b0 = (undefined4)plVar5[1];
        uStack_ac = *(undefined4 *)((longlong)plVar5 + 0xc);
        if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_b8);
      }
      local_128 = local_138;
      pplVar19 = &local_128;
      uVar8 = FUN_140e63610(param_1,param_2,&local_158,1,uVar7,pplVar19);
      uVar11 = local_15c & 0xffffff;
      if (uVar11 == 0) {
LAB_140048bd1:
        uVar12 = (ulonglong)local_168;
        uVar9 = FUN_140e4a8b0(uVar8);
        local_168 = (double)(uVar9 | uVar12);
        local_15c = 10;
      }
      else if (uVar11 == 7) {
        uVar11 = FUN_140e4a740(uVar8);
        local_168 = (double)CONCAT44(local_168._4_4_,local_168._0_4_ | uVar11);
      }
      else if (uVar11 == 10) {
        uVar9 = FUN_140e4a8b0(uVar8);
        local_168 = (double)((ulonglong)local_168 | uVar9);
      }
      else {
        if (uVar11 == 0xd) {
          local_15c = 0;
          goto LAB_140048bd1;
        }
        FUN_140042910(&DAT_14172c43c,&local_168,uVar8);
      }
      local_110 = 0xb4;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      plVar5 = (longlong *)0x0;
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      pcVar18 = (code *)(**(code **)(*DAT_141ddc200 + 8))(DAT_141ddc200,DAT_1419fd4a8);
      FUN_140e87440(&local_f8,DAT_1419fd0b8,0x80000000,&local_a8,uVar7 & 0xffffffffffffff00,
                    (ulonglong)pplVar19 & 0xffffffffffffff00);
      iVar2 = FUN_140e4a740(&local_a8);
      if ((uVar14 == 2) && (lVar13 != 0)) {
        if ((iVar2 < 0) || (*(int *)(lVar13 + 0x24) <= iVar2)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                        *(undefined4 *)(lVar13 + 0x24));
        }
        else {
          plVar5 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar13 + 8));
        }
        if (plVar5 != local_138) goto LAB_140048cd8;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar5 = &local_e8;
LAB_140048cd8:
        local_b8 = (undefined4)*plVar5;
        uStack_b4 = *(undefined4 *)((longlong)plVar5 + 4);
        uStack_b0 = (undefined4)plVar5[1];
        uStack_ac = *(undefined4 *)((longlong)plVar5 + 0xc);
        if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_b8);
      }
      local_128 = local_138;
      in_stack_fffffffffffffe90 = &local_128;
      uVar8 = FUN_140e63610(param_1,param_2,&local_158,1,pcVar18,in_stack_fffffffffffffe90);
      uVar11 = local_15c & 0xffffff;
      if (uVar11 == 0) {
LAB_140048d75:
        uVar9 = (ulonglong)local_168;
        uVar7 = FUN_140e4a8b0(uVar8);
        local_168 = (double)(uVar7 | uVar9);
        local_15c = 10;
      }
      else if (uVar11 == 7) {
        uVar11 = FUN_140e4a740(uVar8);
        local_168 = (double)CONCAT44(local_168._4_4_,local_168._0_4_ | uVar11);
      }
      else if (uVar11 == 10) {
        uVar7 = FUN_140e4a8b0(uVar8);
        local_168 = (double)((ulonglong)local_168 | uVar7);
      }
      else {
        if (uVar11 == 0xd) {
          local_15c = 0;
          goto LAB_140048d75;
        }
        FUN_140042910(&DAT_14172c43c,&local_168,uVar8);
      }
      local_110 = 0xb6;
      uStack_bc = 0;
      local_c8 = (undefined8 *)0x3ff0000000000000;
      iVar2 = FUN_140e851f0(&local_168,&local_c8,DAT_141955260,1);
      if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if (iVar2 == -2 || 0 < iVar2) {
        local_110 = 0xba;
        uStack_cc = 0;
        local_d8 = (undefined8 *)0x4000000000000000;
        iVar2 = FUN_140e851f0(&local_168,&local_d8,DAT_141955260,0);
        if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        if (iVar2 == 0) {
          local_110 = 0xbc;
          uVar3 = FUN_140e4a740(&local_148);
          puVar10 = (undefined8 *)FUN_140e48e40(&local_108,uVar3);
          FUN_140e609c0(*local_108);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar10);
          }
          *puVar10 = 1;
        }
        else {
          local_110 = 0xc0;
          uVar3 = FUN_140e4a740(&local_148);
          puVar10 = (undefined8 *)FUN_140e48e40(&local_108,uVar3);
          FUN_140e609c0(*local_108);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar10);
          }
          *puVar10 = 2;
        }
      }
      else {
        local_110 = 0xb8;
        uVar3 = FUN_140e4a740(&local_148);
        puVar10 = (undefined8 *)FUN_140e48e40(&local_108,uVar3);
        FUN_140e609c0(*local_108);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar10);
        }
        *puVar10 = 0;
      }
      *(undefined4 *)((longlong)puVar10 + 0xc) = 10;
      FUN_140e60910(1);
      local_110 = 0xc3;
      uVar11 = local_13c & 0xffffff;
      if (uVar11 == 0) {
LAB_140048f9c:
        local_148 = local_148 + 1.0;
      }
      else {
        if (uVar11 == 1) {
          local_148 = (double)FUN_140e4b060(&local_148);
          local_13c = 0;
          goto LAB_140048f9c;
        }
        if (uVar11 == 7) {
          local_148 = (double)CONCAT44(local_148._4_4_,local_148._0_4_ + 1);
        }
        else if (uVar11 == 10) {
          local_148 = (double)((longlong)local_148 + 1);
        }
        else {
          if (uVar11 == 0xd) {
            local_13c = 0;
            goto LAB_140048f9c;
          }
          FUN_140042910(&DAT_14172c3d8,&local_148,&local_148);
        }
      }
    } while (0 < (int)uVar15);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_res8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_138,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_120;
  return param_3;
}

