// gml_Script_arm_move_to @ 0x140227700

undefined8 *
gml_Script_arm_move_to
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  undefined1 auVar2 [12];
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong **pplVar9;
  undefined8 *puVar10;
  double *pdVar11;
  undefined8 uVar12;
  longlong *plVar13;
  double *pdVar14;
  double dVar15;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar16 [16];
  code *pcVar17;
  ulonglong uVar18;
  ulonglong in_stack_fffffffffffffe30;
  longlong *local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  longlong *local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  double local_178;
  undefined4 local_16c;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
  double local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  longlong *local_108;
  undefined4 local_fc;
  double local_f8;
  undefined4 local_ec;
  longlong *local_e8;
  byte local_dc;
  double local_d8 [2];
  double local_c8 [2];
  longlong **local_b8;
  double *local_b0;
  double *local_a8;
  double local_a0;
  undefined4 local_94;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  local_160 = "gml_Script_arm_move_dir";
  local_168 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_168;
  local_158 = 8;
  pcVar17 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_e8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_fc = 0xffffff;
  local_108 = (longlong *)0x0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0.0;
  uStack_7c = 0xffffff;
  local_88 = (longlong *)0x0;
  uStack_13c = 0xffffff;
  local_148 = 0.0;
  local_1bc = 0xffffff;
  local_1c8 = (longlong *)0x0;
  local_17c = 0;
  local_188 = 0;
  local_94 = 0;
  local_a0 = (double)param_4;
  uVar12 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_158 = 0xd;
  pdVar14 = (double *)&DAT_1419df7b0;
  if (param_4 < 1) {
    pdVar11 = (double *)&DAT_1419df7b0;
LAB_140227837:
    local_198 = (longlong *)*pdVar11;
    uStack_190 = (longlong *)pdVar11[1];
    FUN_140041b80(&local_f8,&local_198);
    uVar12 = extraout_XMM0_Qb;
  }
  else {
    pdVar11 = (double *)*param_5;
    if (pdVar11 != &local_f8) goto LAB_140227837;
  }
  if (param_4 < 2) {
    pplVar9 = (longlong **)&DAT_1419df7b0;
LAB_14022786d:
    local_198 = *pplVar9;
    uStack_190 = pplVar9[1];
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_198);
    uVar12 = extraout_XMM0_Qb_00;
  }
  else {
    pplVar9 = (longlong **)param_5[1];
    if (pplVar9 != &local_108) goto LAB_14022786d;
  }
  auVar2._4_8_ = uVar12;
  auVar2._0_4_ = local_198._4_4_;
  auVar16._0_8_ = auVar2._0_8_ << 0x20;
  auVar16._8_4_ = (undefined4)uStack_190;
  auVar16._12_4_ = 0xd;
  uStack_190 = auVar16._8_8_;
  local_198 = (longlong *)0x0;
  local_128 = 0;
  uStack_120 = uStack_190;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_128);
  uStack_1ac = 6;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
  uVar18 = (ulonglong)pcVar17 & 0xffffffffffffff00;
  local_1b8 = param_1;
  FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_78,uVar18,in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  uStack_190 = (longlong *)CONCAT44(uStack_6c,uStack_70);
  local_198 = (longlong *)local_78;
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_198);
  uStack_1ac = 6;
  uVar18 = uVar18 & 0xffffffffffffff00;
  local_1b8 = param_1;
  FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_88,uVar18,
                in_stack_fffffffffffffe30 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar18 >> 0x20);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  uStack_190 = (longlong *)CONCAT44(uStack_7c,uStack_80);
  local_198 = local_88;
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_198);
  local_158 = 0x13;
  uStack_1ac = 0;
  local_1b8 = (longlong *)0x4000000000000000;
  iVar5 = FUN_140e851f0(&local_a0,&local_1b8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if (iVar5 < 1) {
    local_158 = 0x1b;
    pdVar14 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a10be8);
    if (pdVar14 == &local_178) goto LAB_140227bda;
    local_198 = (longlong *)*pdVar14;
    uStack_190 = (longlong *)pdVar14[1];
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    pdVar14 = &local_178;
LAB_140227bd0:
    FUN_140041b80(pdVar14,&local_198);
  }
  else {
    local_158 = 0x14;
    if (param_4 < 3) {
      pdVar11 = (double *)&DAT_1419df7b0;
LAB_140227a59:
      local_198 = (longlong *)*pdVar11;
      uStack_190 = (longlong *)pdVar11[1];
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_198);
    }
    else {
      pdVar11 = (double *)param_5[2];
      if (pdVar11 != &local_178) goto LAB_140227a59;
    }
    local_158 = 0x15;
    cVar4 = FUN_140e491e0(&local_178);
    if (cVar4 != '\0') {
      local_158 = 0x16;
      uStack_1ac = 0;
      local_1b8 = (longlong *)0x4008000000000000;
      iVar5 = FUN_140e851f0(&local_a0,&local_1b8,DAT_141955260,1);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      if (0 < iVar5) {
        local_158 = 0x17;
        if (param_4 < 4) {
          pdVar11 = (double *)&DAT_1419df7b0;
LAB_140227b27:
          local_198 = (longlong *)*pdVar11;
          uStack_190 = (longlong *)pdVar11[1];
          if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          FUN_140041b80(&local_138,&local_198);
        }
        else {
          pdVar11 = (double *)param_5[3];
          if (pdVar11 != &local_138) goto LAB_140227b27;
        }
        if ((param_4 < 5) || (pdVar14 = (double *)param_5[4], pdVar14 != &local_148)) {
          local_198 = (longlong *)*pdVar14;
          uStack_190 = (longlong *)pdVar14[1];
          if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          pdVar14 = &local_148;
          goto LAB_140227bd0;
        }
      }
    }
  }
LAB_140227bda:
  local_158 = 0x1d;
  uStack_1ac = 0;
  local_1b8 = (longlong *)0x0;
  iVar5 = FUN_140e851f0(&local_f8,&local_1b8,DAT_141955260,0);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if (iVar5 != 0) {
    local_158 = 0x1e;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    pdVar14 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
    local_b8 = &local_108;
    FUN_140e609c0(param_1);
    uVar12 = CONCAT44(uVar7,DAT_141a00e28);
    pdVar11 = (double *)FUN_140e634e0(param_1,param_2,&local_188,1,uVar12,&local_b8);
    uVar7 = (undefined4)((ulonglong)uVar12 >> 0x20);
    uStack_19c = *(undefined4 *)((longlong)pdVar11 + 0xc);
    uStack_1a0 = *(undefined4 *)(pdVar11 + 1);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
      local_1a8 = (longlong *)*pdVar11;
    }
    else {
      FUN_1400419b0(&local_1a8,pdVar11);
    }
    FUN_140042560(&local_1a8,&local_f8);
    uVar6 = FUN_140e4a740(pdVar14);
    uVar12 = FUN_140e48e40(puVar10,uVar6);
    FUN_140e609c0(*(undefined8 *)*puVar10);
    FUN_1400460e0(uVar12,&local_1a8);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140e60910(2);
    local_158 = 0x1f;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
    uStack_1ac = 0;
    local_1b8 = (longlong *)0x4076800000000000;
    FUN_1400462a0(&local_1b8,&local_108);
    uStack_190 = (longlong *)CONCAT44(uStack_1ac,uStack_1b0);
    local_198 = local_1b8;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_198);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_b8 = &local_e8;
    FUN_140e609c0(param_1);
    pdVar11 = (double *)
              FUN_140e634e0(param_1,param_2,&local_188,1,CONCAT44(uVar7,DAT_141a00d78),&local_b8);
    uStack_19c = *(undefined4 *)((longlong)pdVar11 + 0xc);
    uStack_1a0 = *(undefined4 *)(pdVar11 + 1);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
      local_1a8 = (longlong *)*pdVar11;
    }
    else {
      FUN_1400419b0(&local_1a8,pdVar11);
    }
    FUN_140042560(&local_1a8,&local_f8);
    uVar7 = FUN_140e4a740(pdVar14);
    uVar12 = FUN_140e48e40(puVar10,uVar7);
    FUN_140e609c0(*(undefined8 *)*puVar10);
    FUN_1400460e0(uVar12,&local_1a8);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140e60910(2);
    local_158 = 0x21;
    uStack_19c = *(uint *)((longlong)pdVar14 + 0xc);
    uStack_1a0 = *(undefined4 *)(pdVar14 + 1);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
      local_1a8 = (longlong *)*pdVar14;
    }
    else {
      FUN_1400419b0(&local_1a8,pdVar14);
    }
    uStack_1ac = 7;
    local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,1);
    FUN_1400462a0(&local_1a8,&local_1b8);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    uStack_190 = (longlong *)CONCAT44(uStack_19c,uStack_1a0);
    local_198 = local_1a8;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_198);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    bVar3 = true;
    do {
      if (!bVar3) {
        local_158 = 0x21;
        (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
        uVar8 = local_1bc & 0xffffff;
        if (uVar8 == 0) {
LAB_140228044:
          local_1c8 = (longlong *)((double)local_1c8 + -1.0);
        }
        else if (uVar8 == 1) {
          dVar15 = (double)FUN_140e4b060(&local_1c8);
          local_1c8 = (longlong *)(dVar15 - 1.0);
          local_1bc = 0;
        }
        else if (uVar8 == 7) {
          local_1c8 = (longlong *)CONCAT44(local_1c8._4_4_,(int)local_1c8 + -1);
        }
        else if (uVar8 == 10) {
          local_1c8 = (longlong *)((longlong)local_1c8 + -1);
        }
        else {
          if (uVar8 == 0xd) {
            local_1bc = 0;
            goto LAB_140228044;
          }
          FUN_140042910(&DAT_14172c450,&local_1c8,&local_1c8);
        }
      }
      bVar3 = false;
      iVar5 = FUN_140e851f0(&local_1c8,&local_178,DAT_141955260,1);
      if ((iVar5 == -2) || (iVar5 < 0)) break;
      local_158 = 0x22;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_188 = 0;
      local_180 = 0;
      local_17c = 5;
      pdVar11 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
      pdVar14 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
      local_b8 = &local_1c8;
      uStack_19c = local_1bc;
      uStack_1a0 = local_1c0;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
        local_1a8 = local_1c8;
      }
      else {
        FUN_1400419b0(&local_1a8,&local_1c8);
      }
      uStack_120 = CONCAT44(7,(undefined4)uStack_120);
      local_128 = CONCAT44(local_128._4_4_,1);
      FUN_1400460e0(&local_1a8,&local_128);
      if ((1 << ((byte)((ulonglong)uStack_120 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      iVar5 = FUN_140e4a740(&local_1a8);
      if (((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 2) &&
         (dVar15 = *pdVar11, dVar15 != 0.0)) {
        if ((iVar5 < 0) || (*(int *)((longlong)dVar15 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)((longlong)dVar15 + 0x24));
          pdVar11 = (double *)0x0;
        }
        else {
          pdVar11 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar15 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (pdVar11 != local_d8) {
        local_118 = *pdVar11;
        dStack_110 = pdVar11[1];
        if ((1 << ((byte)local_d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_118);
      }
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_b0 = local_d8;
      uStack_1ac = local_1bc;
      uStack_1b0 = local_1c0;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
        local_1b8 = local_1c8;
      }
      else {
        FUN_1400419b0(&local_1b8,&local_1c8);
      }
      uStack_190 = (longlong *)CONCAT44(7,(undefined4)uStack_190);
      local_198 = (longlong *)CONCAT44(local_198._4_4_,1);
      FUN_1400460e0(&local_1b8,&local_198);
      if ((1 << ((byte)((ulonglong)uStack_190 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      iVar5 = FUN_140e4a740(&local_1b8);
      if (((*(uint *)((longlong)pdVar14 + 0xc) & 0xffffff) == 2) &&
         (dVar15 = *pdVar14, dVar15 != 0.0)) {
        if ((iVar5 < 0) || (*(int *)((longlong)dVar15 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)((longlong)dVar15 + 0x24));
          pdVar14 = (double *)0x0;
        }
        else {
          pdVar14 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar15 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (pdVar14 != local_c8) {
        local_118 = *pdVar14;
        dStack_110 = pdVar14[1];
        if ((1 << ((byte)local_c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_118);
      }
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_a8 = local_c8;
      gml_Script_seg_delete(param_1,param_2,&local_188,3,&local_b8);
    } while( true );
  }
  local_158 = 0x26;
  cVar4 = FUN_140e491e0(&local_178);
  if (cVar4 == '\0') {
LAB_1402289a7:
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    _eh_vector_destructor_iterator_(&local_e8,0x10,3,FUN_140041b30);
    DAT_141dc7a50 = (undefined8 *)local_168;
    return param_3;
  }
  plVar13 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
  if (((*(uint *)((longlong)plVar13 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar13, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      plVar13 = (longlong *)0x0;
    }
    else {
      plVar13 = *(longlong **)(lVar1 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  iVar5 = FUN_140e851f0(plVar13,&local_138,DAT_141955260,0);
  if (iVar5 == 0) {
    plVar13 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    if (((*(uint *)((longlong)plVar13 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar13, lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x24) < 1) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
        plVar13 = (longlong *)0x0;
      }
      else {
        plVar13 = *(longlong **)(lVar1 + 8);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    iVar5 = FUN_140e851f0(plVar13,&local_148,DAT_141955260,0);
    if (iVar5 == 0) {
      uStack_190 = (longlong *)((ulonglong)uStack_190 & 0xffffffff);
      local_198 = (longlong *)0x0;
      iVar5 = FUN_140e851f0(&local_f8,&local_198,DAT_141955260,0);
      if ((1 << ((byte)((ulonglong)uStack_190 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if (iVar5 == 0) goto LAB_1402289a7;
    }
  }
  local_158 = 0x27;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
  FUN_140e609c0(param_1);
  pdVar14 = (double *)FUN_140e48e40(puVar10,0);
  FUN_140e609c0(*(undefined8 *)*puVar10);
  if (&local_138 != pdVar14) {
    dStack_110 = (double)CONCAT44(uStack_12c,uStack_130);
    local_118 = local_138;
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar14 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar14);
    }
    FUN_140041b80(pdVar14,&local_118);
  }
  FUN_140e60910(2);
  local_158 = 0x28;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
  FUN_140e609c0(param_1);
  pdVar14 = (double *)FUN_140e48e40(puVar10,0);
  FUN_140e609c0(*(undefined8 *)*puVar10);
  if (&local_148 != pdVar14) {
    dStack_110 = (double)CONCAT44(uStack_13c,uStack_140);
    local_118 = local_148;
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar14 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar14);
    }
    FUN_140041b80(pdVar14,&local_118);
  }
  FUN_140e60910(2);
  local_158 = 0x2a;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1bc = 0;
  local_1c8 = (longlong *)0x3ff0000000000000;
  bVar3 = true;
  do {
    if (!bVar3) {
      local_158 = 0x2a;
      uVar8 = local_1bc & 0xffffff;
      if (uVar8 != 0) {
        if (uVar8 != 1) {
          if (uVar8 == 7) {
            local_1c8 = (longlong *)CONCAT44(local_1c8._4_4_,(int)local_1c8 + 1);
          }
          else if (uVar8 == 10) {
            local_1c8 = (longlong *)((longlong)local_1c8 + 1);
          }
          else {
            if (uVar8 == 0xd) goto LAB_140228666;
            FUN_140042910(&DAT_14172c3d8,&local_1c8,&local_1c8);
          }
          goto LAB_140228676;
        }
        local_1c8 = (longlong *)FUN_140e4b060(&local_1c8);
LAB_140228666:
        local_1bc = 0;
      }
      local_1c8 = (longlong *)((double)local_1c8 + 1.0);
    }
LAB_140228676:
    bVar3 = false;
    uVar12 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    iVar5 = FUN_140e851f0(&local_1c8,uVar12,DAT_141955260,1);
    if ((iVar5 == -2) || (0 < iVar5)) goto LAB_1402289a7;
    local_158 = 0x2b;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    pdVar11 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    pdVar14 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    local_b8 = &local_1c8;
    uStack_1ac = local_1bc;
    uStack_1b0 = local_1c0;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
      local_1b8 = local_1c8;
    }
    else {
      FUN_1400419b0(&local_1b8,&local_1c8);
    }
    uStack_190 = (longlong *)CONCAT44(7,(undefined4)uStack_190);
    local_198 = (longlong *)CONCAT44(local_198._4_4_,1);
    FUN_1400462a0(&local_1b8,&local_198);
    if ((1 << ((byte)((ulonglong)uStack_190 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    iVar5 = FUN_140e4a740(&local_1b8);
    if (((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 2) && (dVar15 = *pdVar11, dVar15 != 0.0)
       ) {
      if ((iVar5 < 0) || (*(int *)((longlong)dVar15 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)((longlong)dVar15 + 0x24));
        pdVar11 = (double *)0x0;
      }
      else {
        pdVar11 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar15 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar11 != local_d8) {
      local_118 = *pdVar11;
      dStack_110 = pdVar11[1];
      if ((1 << ((byte)local_d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_118);
    }
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_b0 = local_d8;
    uStack_19c = local_1bc;
    uStack_1a0 = local_1c0;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
      local_1a8 = local_1c8;
    }
    else {
      FUN_1400419b0(&local_1a8,&local_1c8);
    }
    uStack_120 = CONCAT44(7,(undefined4)uStack_120);
    local_128 = CONCAT44(local_128._4_4_,1);
    FUN_1400462a0(&local_1a8,&local_128);
    if ((1 << ((byte)((ulonglong)uStack_120 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    iVar5 = FUN_140e4a740(&local_1a8);
    if (((*(uint *)((longlong)pdVar14 + 0xc) & 0xffffff) == 2) && (dVar15 = *pdVar14, dVar15 != 0.0)
       ) {
      if ((iVar5 < 0) || (*(int *)((longlong)dVar15 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)((longlong)dVar15 + 0x24));
        pdVar14 = (double *)0x0;
      }
      else {
        pdVar14 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar15 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar14 != local_c8) {
      local_118 = *pdVar14;
      dStack_110 = pdVar14[1];
      if ((1 << ((byte)local_c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_118);
    }
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_a8 = local_c8;
    gml_Script_seg_delete(param_1,param_2,&local_188,3,&local_b8);
  } while( true );
}

