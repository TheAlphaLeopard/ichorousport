// gml_Script_arm_move_towards @ 0x140228c00

undefined8 *
gml_Script_arm_move_towards
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  undefined1 auVar2 [12];
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong **pplVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  double *pdVar12;
  double *pdVar13;
  longlong **pplVar14;
  double dVar15;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar16 [16];
  code *pcVar17;
  ulonglong uVar18;
  longlong *local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong *local_188;
  undefined4 local_180;
  uint local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  longlong *local_168;
  double dStack_160;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  longlong *local_140;
  undefined4 local_134;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  double local_d8 [2];
  double local_c8 [2];
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong **local_a8;
  double *local_a0;
  double *local_98;
  double local_90;
  undefined4 local_84;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_150 = "gml_Script_arm_move_to";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 8;
  pcVar17 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_e8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_ac = 0xffffff;
  local_b8 = (longlong *)0x0;
  uStack_ec = 0xffffff;
  local_f8 = (longlong *)0x0;
  local_134 = 0xffffff;
  local_140 = (longlong *)0x0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_fc = 0xffffff;
  local_108 = (longlong *)0x0;
  uStack_6c = 0xffffff;
  local_78 = (longlong *)0x0;
  uStack_10c = 0xffffff;
  local_118 = (longlong *)0x0;
  local_1ac = 0xffffff;
  local_1b8 = (longlong *)0x0;
  local_16c = 0;
  local_178 = 0;
  local_84 = 0;
  local_90 = (double)param_4;
  uVar9 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_148 = 0xd;
  pplVar14 = (longlong **)&DAT_1419df7b0;
  if (param_4 < 1) {
    pplVar8 = (longlong **)&DAT_1419df7b0;
LAB_140228d2d:
    local_198 = *pplVar8;
    uStack_190 = pplVar8[1];
    FUN_140041b80(&local_b8,&local_198);
    uVar9 = extraout_XMM0_Qb;
  }
  else {
    pplVar8 = (longlong **)*param_5;
    if (pplVar8 != &local_b8) goto LAB_140228d2d;
  }
  if (param_4 < 2) {
    pplVar8 = (longlong **)&DAT_1419df7b0;
LAB_140228d63:
    local_198 = *pplVar8;
    uStack_190 = pplVar8[1];
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_198);
    uVar9 = extraout_XMM0_Qb_00;
  }
  else {
    pplVar8 = (longlong **)param_5[1];
    if (pplVar8 != &local_f8) goto LAB_140228d63;
  }
  auVar2._4_8_ = uVar9;
  auVar2._0_4_ = local_198._4_4_;
  auVar16._0_8_ = auVar2._0_8_ << 0x20;
  auVar16._8_4_ = (undefined4)uStack_190;
  auVar16._12_4_ = 0xd;
  uStack_190 = auVar16._8_8_;
  local_198 = (longlong *)0x0;
  local_128 = 0;
  uStack_120 = uStack_190;
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  FUN_140041b80(&local_140,&local_128);
  uStack_19c = 6;
  uVar18 = (ulonglong)pcVar17 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_68,uVar18,0);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_190 = (longlong *)CONCAT44(uStack_5c,uStack_60);
  local_198 = (longlong *)local_68;
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_198);
  uStack_19c = 6;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_78,uVar18 & 0xffffffffffffff00,0);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_190 = (longlong *)CONCAT44(uStack_6c,uStack_70);
  local_198 = local_78;
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_198);
  local_148 = 0x13;
  uStack_19c = 0;
  local_1a8 = (longlong *)0x4000000000000000;
  iVar5 = FUN_140e851f0(&local_90,&local_1a8,DAT_141955260,1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if (iVar5 < 1) {
    local_148 = 0x1b;
    pplVar14 = (longlong **)(**(code **)(*param_1 + 8))(param_1,DAT_141a10be8);
    if (pplVar14 == &local_140) goto LAB_1402290cf;
    local_198 = *pplVar14;
    uStack_190 = pplVar14[1];
    if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_140);
    }
    pplVar14 = &local_140;
LAB_1402290c5:
    FUN_140041b80(pplVar14,&local_198);
  }
  else {
    local_148 = 0x14;
    if (param_4 < 3) {
      pplVar8 = (longlong **)&DAT_1419df7b0;
LAB_140228f4e:
      local_198 = *pplVar8;
      uStack_190 = pplVar8[1];
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_140);
      }
      FUN_140041b80(&local_140,&local_198);
    }
    else {
      pplVar8 = (longlong **)param_5[2];
      if (pplVar8 != &local_140) goto LAB_140228f4e;
    }
    local_148 = 0x15;
    cVar4 = FUN_140e491e0(&local_140);
    if (cVar4 != '\0') {
      local_148 = 0x16;
      uStack_19c = 0;
      local_1a8 = (longlong *)0x4008000000000000;
      iVar5 = FUN_140e851f0(&local_90,&local_1a8,DAT_141955260,1);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if (0 < iVar5) {
        local_148 = 0x17;
        if (param_4 < 4) {
          pplVar8 = (longlong **)&DAT_1419df7b0;
LAB_14022901c:
          local_198 = *pplVar8;
          uStack_190 = pplVar8[1];
          if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          FUN_140041b80(&local_108,&local_198);
        }
        else {
          pplVar8 = (longlong **)param_5[3];
          if (pplVar8 != &local_108) goto LAB_14022901c;
        }
        if ((param_4 < 5) || (pplVar14 = (longlong **)param_5[4], pplVar14 != &local_118)) {
          local_198 = *pplVar14;
          uStack_190 = pplVar14[1];
          if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          pplVar14 = &local_118;
          goto LAB_1402290c5;
        }
      }
    }
  }
LAB_1402290cf:
  local_148 = 0x1d;
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
  plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
  iVar5 = FUN_140e4a740(uVar9);
  if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
    if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  iVar5 = FUN_140e851f0(plVar10,&local_b8,DAT_141955260,0);
  if (iVar5 == 0) {
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    iVar5 = FUN_140e4a740(uVar9);
    if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    iVar5 = FUN_140e851f0(plVar10,&local_f8,DAT_141955260,0);
    if (iVar5 == 0) {
      local_148 = 0x2d;
      cVar4 = FUN_140e491e0(&local_140);
      if (cVar4 == '\0') {
LAB_14022a27a:
        if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_90);
        }
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_78);
        }
        if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_68);
        }
        if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_140);
        }
        if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        _eh_vector_destructor_iterator_(local_e8,0x10,3,FUN_140041b30);
        DAT_141dc7a50 = (undefined8 *)local_158;
        return param_3;
      }
      plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
      if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0))
      {
        if (*(int *)(lVar1 + 0x24) < 1) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = *(longlong **)(lVar1 + 8);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      iVar5 = FUN_140e851f0(plVar10,&local_108,DAT_141955260,0);
      if (iVar5 == 0) {
        plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
        if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)
           ) {
          if (*(int *)(lVar1 + 0x24) < 1) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
            plVar10 = (longlong *)0x0;
          }
          else {
            plVar10 = *(longlong **)(lVar1 + 8);
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        iVar5 = FUN_140e851f0(plVar10,&local_118,DAT_141955260,0);
        if (iVar5 == 0) goto LAB_14022a27a;
      }
      local_148 = 0x2e;
      puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
      FUN_140e609c0(param_1);
      pplVar14 = (longlong **)FUN_140e48e40(puVar11,0);
      FUN_140e609c0(*(undefined8 *)*puVar11);
      if (&local_108 != pplVar14) {
        uStack_190 = (longlong *)CONCAT44(uStack_fc,uStack_100);
        local_198 = local_108;
        if ((1 << ((byte)*(undefined4 *)((longlong)pplVar14 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pplVar14);
        }
        FUN_140041b80(pplVar14,&local_198);
      }
      FUN_140e60910(2);
      local_148 = 0x2f;
      puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
      FUN_140e609c0(param_1);
      pplVar14 = (longlong **)FUN_140e48e40(puVar11,0);
      FUN_140e609c0(*(undefined8 *)*puVar11);
      if (&local_118 != pplVar14) {
        uStack_190 = (longlong *)CONCAT44(uStack_10c,uStack_110);
        local_198 = local_118;
        if ((1 << ((byte)*(undefined4 *)((longlong)pplVar14 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pplVar14);
        }
        FUN_140041b80(pplVar14,&local_198);
      }
      FUN_140e60910(2);
      local_148 = 0x31;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_1ac = 0;
      local_1b8 = (longlong *)0x3ff0000000000000;
      bVar3 = true;
      do {
        if (!bVar3) {
          local_148 = 0x31;
          uVar6 = local_1ac & 0xffffff;
          if (uVar6 != 0) {
            if (uVar6 != 1) {
              if (uVar6 == 7) {
                local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,(int)local_1b8 + 1);
              }
              else if (uVar6 == 10) {
                local_1b8 = (longlong *)((longlong)local_1b8 + 1);
              }
              else {
                if (uVar6 == 0xd) goto LAB_1402294a6;
                FUN_140042910(&DAT_14172c3d8,&local_1b8,&local_1b8);
              }
              goto LAB_1402294b5;
            }
            local_1b8 = (longlong *)FUN_140e4b060(&local_1b8);
LAB_1402294a6:
            local_1ac = 0;
          }
          local_1b8 = (longlong *)((double)local_1b8 + 1.0);
        }
LAB_1402294b5:
        bVar3 = false;
        uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
        iVar5 = FUN_140e851f0(&local_1b8,uVar9,DAT_141955260,1);
        if ((iVar5 == -2) || (0 < iVar5)) goto LAB_14022a27a;
        local_148 = 0x32;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        pdVar12 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
        pdVar13 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
        local_a8 = &local_1b8;
        local_17c = local_1ac;
        local_180 = local_1b0;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
          local_188 = local_1b8;
        }
        else {
          FUN_1400419b0(&local_188,&local_1b8);
        }
        uStack_120 = CONCAT44(7,(undefined4)uStack_120);
        local_128 = CONCAT44(local_128._4_4_,1);
        FUN_1400462a0(&local_188,&local_128);
        if ((1 << ((byte)((ulonglong)uStack_120 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        iVar5 = FUN_140e4a740(&local_188);
        if (((*(uint *)((longlong)pdVar12 + 0xc) & 0xffffff) == 2) &&
           (dVar15 = *pdVar12, dVar15 != 0.0)) {
          if ((iVar5 < 0) || (*(int *)((longlong)dVar15 + 0x24) <= iVar5)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                          *(undefined4 *)((longlong)dVar15 + 0x24));
            pdVar12 = (double *)0x0;
          }
          else {
            pdVar12 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar15 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        if (pdVar12 != local_d8) {
          local_168 = (longlong *)*pdVar12;
          dStack_160 = pdVar12[1];
          if ((1 << ((byte)local_d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_d8);
          }
          FUN_140041b80(local_d8,&local_168);
        }
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_a0 = local_d8;
        uStack_19c = local_1ac;
        uStack_1a0 = local_1b0;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
          local_1a8 = local_1b8;
        }
        else {
          FUN_1400419b0(&local_1a8,&local_1b8);
        }
        uStack_190 = (longlong *)CONCAT44(7,(undefined4)uStack_190);
        local_198 = (longlong *)CONCAT44(local_198._4_4_,1);
        FUN_1400462a0(&local_1a8,&local_198);
        if ((1 << ((byte)((ulonglong)uStack_190 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        iVar5 = FUN_140e4a740(&local_1a8);
        if (((*(uint *)((longlong)pdVar13 + 0xc) & 0xffffff) == 2) &&
           (dVar15 = *pdVar13, dVar15 != 0.0)) {
          if ((iVar5 < 0) || (*(int *)((longlong)dVar15 + 0x24) <= iVar5)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                          *(undefined4 *)((longlong)dVar15 + 0x24));
            pdVar13 = (double *)0x0;
          }
          else {
            pdVar13 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar15 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        if (pdVar13 != local_c8) {
          local_168 = (longlong *)*pdVar13;
          dStack_160 = pdVar13[1];
          if ((1 << ((byte)local_c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_c8);
          }
          FUN_140041b80(local_c8,&local_168);
        }
        if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_98 = local_c8;
        gml_Script_seg_delete(param_1,param_2,&local_178,3,&local_a8);
      } while( true );
    }
  }
  local_148 = 0x1e;
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
  FUN_140e609c0(param_1);
  uVar7 = FUN_140e4a740(uVar9);
  pplVar14 = (longlong **)FUN_140e48e40(puVar11,uVar7);
  FUN_140e609c0(*(undefined8 *)*puVar11);
  if (&local_b8 != pplVar14) {
    dStack_160 = (double)CONCAT44(uStack_ac,uStack_b0);
    local_168 = local_b8;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar14 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar14);
    }
    FUN_140041b80(pplVar14,&local_168);
  }
  FUN_140e60910(2);
  local_148 = 0x1f;
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
  FUN_140e609c0(param_1);
  uVar7 = FUN_140e4a740(uVar9);
  pplVar14 = (longlong **)FUN_140e48e40(puVar11,uVar7);
  FUN_140e609c0(*(undefined8 *)*puVar11);
  if (&local_f8 != pplVar14) {
    dStack_160 = (double)CONCAT44(uStack_ec,uStack_f0);
    local_168 = local_f8;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar14 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar14);
    }
    FUN_140041b80(pplVar14,&local_168);
  }
  FUN_140e60910(2);
  local_148 = 0x21;
  plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
  uStack_19c = *(uint *)((longlong)plVar10 + 0xc);
  uStack_1a0 = (undefined4)plVar10[1];
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
    local_1a8 = (longlong *)*plVar10;
  }
  else {
    FUN_1400419b0(&local_1a8,plVar10);
  }
  uStack_190 = (longlong *)CONCAT44(7,(undefined4)uStack_190);
  local_198 = (longlong *)CONCAT44(local_198._4_4_,1);
  FUN_1400462a0(&local_1a8,&local_198);
  if ((1 << ((byte)((ulonglong)uStack_190 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  dStack_160 = (double)CONCAT44(uStack_19c,uStack_1a0);
  local_168 = local_1a8;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_168);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  bVar3 = true;
  do {
    if (!bVar3) {
      local_148 = 0x21;
      uVar6 = local_1ac & 0xffffff;
      if (uVar6 == 0) {
LAB_140229a56:
        local_1b8 = (longlong *)((double)local_1b8 + -1.0);
      }
      else if (uVar6 == 1) {
        dVar15 = (double)FUN_140e4b060(&local_1b8);
        local_1b8 = (longlong *)(dVar15 - 1.0);
        local_1ac = 0;
      }
      else if (uVar6 == 7) {
        local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,(int)local_1b8 + -1);
      }
      else if (uVar6 == 10) {
        local_1b8 = (longlong *)((longlong)local_1b8 + -1);
      }
      else {
        if (uVar6 == 0xd) {
          local_1ac = 0;
          goto LAB_140229a56;
        }
        FUN_140042910(&DAT_14172c450,&local_1b8,&local_1b8);
      }
    }
    bVar3 = false;
    iVar5 = FUN_140e851f0(&local_1b8,&local_140,DAT_141955260,1);
    if ((iVar5 == -2) || (iVar5 < 0)) break;
    local_148 = 0x22;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    pdVar12 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    pdVar13 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    local_a8 = &local_1b8;
    uStack_19c = local_1ac;
    uStack_1a0 = local_1b0;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
      local_1a8 = local_1b8;
    }
    else {
      FUN_1400419b0(&local_1a8,&local_1b8);
    }
    uStack_190 = (longlong *)CONCAT44(7,(undefined4)uStack_190);
    local_198 = (longlong *)CONCAT44(local_198._4_4_,1);
    FUN_1400460e0(&local_1a8,&local_198);
    if ((1 << ((byte)((ulonglong)uStack_190 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    iVar5 = FUN_140e4a740(&local_1a8);
    if (((*(uint *)((longlong)pdVar12 + 0xc) & 0xffffff) == 2) && (dVar15 = *pdVar12, dVar15 != 0.0)
       ) {
      if ((iVar5 < 0) || (*(int *)((longlong)dVar15 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)((longlong)dVar15 + 0x24));
        pdVar12 = (double *)0x0;
      }
      else {
        pdVar12 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar15 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar12 != local_d8) {
      local_168 = (longlong *)*pdVar12;
      dStack_160 = pdVar12[1];
      if ((1 << ((byte)local_d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_168);
    }
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_a0 = local_d8;
    local_17c = local_1ac;
    local_180 = local_1b0;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
      local_188 = local_1b8;
    }
    else {
      FUN_1400419b0(&local_188,&local_1b8);
    }
    uStack_120 = CONCAT44(7,(undefined4)uStack_120);
    local_128 = CONCAT44(local_128._4_4_,1);
    FUN_1400460e0(&local_188,&local_128);
    if ((1 << ((byte)((ulonglong)uStack_120 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    iVar5 = FUN_140e4a740(&local_188);
    if (((*(uint *)((longlong)pdVar13 + 0xc) & 0xffffff) == 2) && (dVar15 = *pdVar13, dVar15 != 0.0)
       ) {
      if ((iVar5 < 0) || (*(int *)((longlong)dVar15 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)((longlong)dVar15 + 0x24));
        pdVar13 = (double *)0x0;
      }
      else {
        pdVar13 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar15 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar13 != local_c8) {
      local_168 = (longlong *)*pdVar13;
      dStack_160 = pdVar13[1];
      if ((1 << ((byte)local_c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_168);
    }
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_98 = local_c8;
    gml_Script_seg_delete(param_1,param_2,&local_178,3,&local_a8);
  } while( true );
  local_148 = 0x25;
  cVar4 = FUN_140e491e0(&local_140);
  if (cVar4 != '\0') {
    local_148 = 0x26;
    puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
    FUN_140e609c0(param_1);
    pplVar14 = (longlong **)FUN_140e48e40(puVar11,0);
    FUN_140e609c0(*(undefined8 *)*puVar11);
    if (&local_108 != pplVar14) {
      dStack_160 = (double)CONCAT44(uStack_fc,uStack_100);
      local_168 = local_108;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar14 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar14);
      }
      FUN_140041b80(pplVar14,&local_168);
    }
    FUN_140e60910(2);
    local_148 = 0x27;
    puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
    FUN_140e609c0(param_1);
    pplVar14 = (longlong **)FUN_140e48e40(puVar11,0);
    FUN_140e609c0(*(undefined8 *)*puVar11);
    if (&local_118 != pplVar14) {
      dStack_160 = (double)CONCAT44(uStack_10c,uStack_110);
      local_168 = local_118;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar14 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar14);
      }
      FUN_140041b80(pplVar14,&local_168);
    }
    FUN_140e60910(2);
    local_148 = 0x29;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1ac = 0;
    local_1b8 = (longlong *)0x3ff0000000000000;
    bVar3 = true;
    do {
      if (!bVar3) {
        local_148 = 0x29;
        uVar6 = local_1ac & 0xffffff;
        if ((local_1ac & 0xffffff) != 0) {
          if (uVar6 != 1) {
            if (uVar6 == 7) {
              local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,(int)local_1b8 + 1);
            }
            else if (uVar6 == 10) {
              local_1b8 = (longlong *)((longlong)local_1b8 + 1);
            }
            else {
              if (uVar6 == 0xd) goto LAB_140229f3c;
              FUN_140042910(&DAT_14172c3d8,&local_1b8,&local_1b8);
            }
            goto LAB_140229f4b;
          }
          local_1b8 = (longlong *)FUN_140e4b060(&local_1b8);
LAB_140229f3c:
          local_1ac = 0;
        }
        local_1b8 = (longlong *)((double)local_1b8 + 1.0);
      }
LAB_140229f4b:
      bVar3 = false;
      uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
      iVar5 = FUN_140e851f0(&local_1b8,uVar9,DAT_141955260,1);
      if ((iVar5 == -2) || (0 < iVar5)) break;
      local_148 = 0x2a;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar12 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
      pdVar13 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
      local_a8 = &local_1b8;
      uStack_19c = local_1ac;
      uStack_1a0 = local_1b0;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
        local_1a8 = local_1b8;
      }
      else {
        FUN_1400419b0(&local_1a8,&local_1b8);
      }
      uStack_190 = (longlong *)CONCAT44(7,(undefined4)uStack_190);
      local_198 = (longlong *)CONCAT44(local_198._4_4_,1);
      FUN_1400462a0(&local_1a8,&local_198);
      if ((1 << ((byte)((ulonglong)uStack_190 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      iVar5 = FUN_140e4a740(&local_1a8);
      if (((*(uint *)((longlong)pdVar12 + 0xc) & 0xffffff) == 2) &&
         (dVar15 = *pdVar12, dVar15 != 0.0)) {
        if ((iVar5 < 0) || (*(int *)((longlong)dVar15 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)((longlong)dVar15 + 0x24));
          pdVar12 = (double *)0x0;
        }
        else {
          pdVar12 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar15 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (pdVar12 != local_d8) {
        local_168 = (longlong *)*pdVar12;
        dStack_160 = pdVar12[1];
        if ((1 << ((byte)local_d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_168);
      }
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_a0 = local_d8;
      local_17c = local_1ac;
      local_180 = local_1b0;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
        local_188 = local_1b8;
      }
      else {
        FUN_1400419b0(&local_188,&local_1b8);
      }
      uStack_120 = CONCAT44(7,(undefined4)uStack_120);
      local_128 = CONCAT44(local_128._4_4_,1);
      FUN_1400462a0(&local_188,&local_128);
      if ((1 << ((byte)((ulonglong)uStack_120 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      iVar5 = FUN_140e4a740(&local_188);
      if (((*(uint *)((longlong)pdVar13 + 0xc) & 0xffffff) == 2) &&
         (dVar15 = *pdVar13, dVar15 != 0.0)) {
        if ((iVar5 < 0) || (*(int *)((longlong)dVar15 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)((longlong)dVar15 + 0x24));
          pdVar13 = (double *)0x0;
        }
        else {
          pdVar13 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar15 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (pdVar13 != local_c8) {
        local_168 = (longlong *)*pdVar13;
        dStack_160 = pdVar13[1];
        if ((1 << ((byte)local_c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_168);
      }
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_98 = local_c8;
      gml_Script_seg_delete(param_1,param_2,&local_178,3,&local_a8);
    } while( true );
  }
  goto LAB_14022a27a;
}

