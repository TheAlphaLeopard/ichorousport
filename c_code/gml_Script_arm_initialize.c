// gml_Script_arm_initialize @ 0x140222db0

undefined8 *
gml_Script_arm_initialize
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong **pplVar9;
  longlong **pplVar10;
  longlong **local_res8;
  code *pcVar11;
  ulonglong uVar12;
  ulonglong in_stack_fffffffffffffe50;
  ulonglong uVar13;
  longlong ***ppplVar14;
  longlong *local_1a8;
  undefined8 uStack_1a0;
  longlong *local_198;
  undefined4 local_190;
  uint local_18c;
  longlong *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong *local_178;
  undefined4 local_170;
  uint local_16c;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  longlong *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  byte local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  longlong *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong *local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  
  local_160 = "gml_Script_arm_initialize_seg";
  local_168 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_168;
  local_158 = 5;
  pcVar11 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_118,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  uStack_12c = 0xffffff;
  local_138 = (longlong *)0x0;
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_11c = 0xffffff;
  local_128 = (longlong *)0x0;
  local_18c = 0xffffff;
  local_198 = (longlong *)0x0;
  local_bc = 0xffffff;
  local_c8 = (longlong *)0x0;
  uStack_ac = 0xffffff;
  local_b8 = (longlong *)0x0;
  local_144 = 0;
  local_150 = 0;
  local_5c = 0;
  local_68 = 0;
  local_6c = 0;
  local_78 = 0;
  local_7c = 0;
  local_88 = 0;
  local_dc = 0;
  local_e8 = 0;
  local_8c = 0;
  local_98 = (double)param_4;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_158 = 0xb;
  local_16c = 6;
  uVar12 = (ulonglong)pcVar11 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0a728,0x80000000,&local_a8,uVar12,
                in_stack_fffffffffffffe50 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  uStack_1a0 = (longlong *)CONCAT44(uStack_9c,uStack_a0);
  local_1a8 = local_a8;
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_1a8);
  local_1a8 = (longlong *)0x3ff0000000000000;
  uStack_f0 = SUB84(uStack_1a0,0);
  uStack_1a0 = (longlong *)CONCAT44(0xd,uStack_f0);
  local_f8 = (longlong *)0x3ff0000000000000;
  uStack_ec = 0xd;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_f8);
  local_158 = 0xc;
  local_16c = 0;
  local_178 = (longlong *)0x4000000000000000;
  iVar3 = FUN_140e851f0(&local_98,&local_178,DAT_141955260,1);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  pplVar10 = (longlong **)&DAT_1419df7b0;
  if (0 < iVar3) {
    local_158 = 0xd;
    if (param_4 < 3) {
      pplVar9 = (longlong **)&DAT_1419df7b0;
    }
    else {
      pplVar9 = (longlong **)param_5[2];
      if (pplVar9 == &local_138) goto LAB_140223064;
    }
    local_1a8 = *pplVar9;
    uStack_1a0 = pplVar9[1];
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1a8);
  }
LAB_140223064:
  local_158 = 0x11;
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  local_150 = 0;
  local_148 = 0;
  local_144 = 5;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0f148);
  if (param_4 < 1) {
    pplVar9 = (longlong **)&DAT_1419df7b0;
  }
  else {
    pplVar9 = (longlong **)*param_5;
    if (pplVar9 == &local_118) goto LAB_1402230ed;
  }
  local_1a8 = *pplVar9;
  uStack_1a0 = pplVar9[1];
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_1a8);
LAB_1402230ed:
  local_res8 = &local_118;
  FUN_140e609c0(param_1);
  uVar8 = CONCAT44(uVar5,DAT_1419fe728);
  puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_150,1,uVar8,&local_res8);
  uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (puVar7 != puVar6) {
    local_1a8 = (longlong *)*puVar7;
    uStack_1a0 = (longlong *)puVar7[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_1a8);
  }
  FUN_140e60910(1);
  local_158 = 0x12;
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  local_150 = 0;
  local_148 = 0;
  local_144 = 5;
  if ((param_4 < 2) || (pplVar10 = (longlong **)param_5[1], pplVar10 != &local_118)) {
    local_1a8 = *pplVar10;
    uStack_1a0 = pplVar10[1];
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1a8);
  }
  local_res8 = &local_118;
  uVar8 = CONCAT44(uVar5,DAT_1419fe728);
  pplVar10 = (longlong **)FUN_140e634e0(param_1,param_2,&local_150,1,uVar8,&local_res8);
  uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (pplVar10 != &local_128) {
    local_1a8 = *pplVar10;
    uStack_1a0 = pplVar10[1];
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1a8);
  }
  local_158 = 0x14;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
  FUN_140e609c0(param_1);
  puVar7 = (undefined8 *)FUN_140e8da20(&local_150,param_1,0);
  if (puVar7 != puVar6) {
    local_1a8 = (longlong *)*puVar7;
    uStack_1a0 = (longlong *)puVar7[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_1a8);
  }
  FUN_140e60910(1);
  local_158 = 0x15;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
  FUN_140e609c0(param_1);
  puVar7 = (undefined8 *)FUN_140e8da20(&local_68,param_1,0);
  if (puVar7 != puVar6) {
    local_1a8 = (longlong *)*puVar7;
    uStack_1a0 = (longlong *)puVar7[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_1a8);
  }
  FUN_140e60910(1);
  local_158 = 0x16;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a10a28);
  FUN_140e609c0(param_1);
  puVar7 = (undefined8 *)FUN_140e8da20(&local_78,param_1,0);
  if (puVar7 != puVar6) {
    local_1a8 = (longlong *)*puVar7;
    uStack_1a0 = (longlong *)puVar7[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_1a8);
  }
  FUN_140e60910(1);
  local_158 = 0x17;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fba8);
  FUN_140e609c0(param_1);
  puVar7 = (undefined8 *)FUN_140e8da20(&local_88,param_1,0);
  if (puVar7 != puVar6) {
    local_1a8 = (longlong *)*puVar7;
    uStack_1a0 = (longlong *)puVar7[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_1a8);
  }
  FUN_140e60910(1);
  local_158 = 0x19;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
  pplVar10 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a10b88);
  FUN_140e609c0(param_1);
  uStack_17c = uStack_11c;
  uStack_180 = uStack_120;
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_188 = local_128;
  }
  else {
    FUN_1400419b0(&local_188,&local_128);
  }
  FUN_140042560(&local_188,uVar8);
  if (&local_188 != pplVar10) {
    uStack_1a0 = (longlong *)CONCAT44(uStack_17c,uStack_180);
    local_1a8 = local_188;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar10);
    }
    FUN_140041b80(pplVar10,&local_1a8);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140e60910(1);
  local_158 = 0x1a;
  pplVar10 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a10be8);
  uStack_1a0._4_4_ = 0xd;
  local_1a8 = (longlong *)0x0;
  if (&local_1a8 != pplVar10) {
    local_f8 = (longlong *)0x0;
    uStack_f0 = (undefined4)uStack_1a0;
    uStack_ec = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar10);
    }
    FUN_140041b80(pplVar10,&local_f8);
  }
  local_158 = 0x1d;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  local_res8 = &local_138;
  ppplVar14 = &local_res8;
  uVar12 = CONCAT44(uVar5,DAT_1419fdb88);
  uVar8 = FUN_140e634e0(param_1,param_2,&local_e8,1,uVar12,ppplVar14);
  cVar2 = FUN_140e491e0(uVar8);
  if (cVar2 != '\0') {
    local_158 = 0x1e;
    pplVar10 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fba8);
    FUN_140e609c0(param_1);
    if (&local_138 != pplVar10) {
      uStack_1a0._0_4_ = uStack_130;
      uStack_1a0._4_4_ = uStack_12c;
      local_1a8 = local_138;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar10);
      }
      FUN_140041b80(pplVar10,&local_1a8);
    }
    FUN_140e60910(1);
    local_158 = 0x1f;
    local_1a8 = (longlong *)0x0;
    uStack_1a0._4_4_ = 0xd;
    local_f8 = (longlong *)0x0;
    uStack_f0 = (undefined4)uStack_1a0;
    uStack_ec = 0xd;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_f8);
  }
  local_158 = 0x23;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_18c = 0;
  local_198 = (longlong *)0x0;
  bVar1 = true;
  do {
    if (!bVar1) {
      local_158 = 0x23;
      uVar4 = local_18c & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_198 = (longlong *)CONCAT44(local_198._4_4_,(int)local_198 + 1);
          }
          else if (uVar4 == 10) {
            local_198 = (longlong *)((longlong)local_198 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_18c = 0;
              goto LAB_1402236fc;
            }
            FUN_140042910(&DAT_14172c3d8,&local_198,&local_198);
          }
          goto LAB_140223706;
        }
        local_198 = (longlong *)FUN_140e4b060(&local_198);
        local_18c = 0;
      }
LAB_1402236fc:
      local_198 = (longlong *)((double)local_198 + 1.0);
    }
LAB_140223706:
    bVar1 = false;
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    iVar3 = FUN_140e851f0(&local_198,uVar8,DAT_141955260,1);
    if ((iVar3 == -2) || (0 < iVar3)) {
      local_158 = 0x2d;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a10b88);
      if (puVar6 != param_3) {
        local_d8 = (longlong *)*puVar6;
        uStack_d0 = puVar6[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_d8);
      }
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
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
      if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_150);
      }
      if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      _eh_vector_destructor_iterator_(&local_118,0x10,1,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_168;
      return param_3;
    }
    local_158 = 0x25;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
    uStack_ec = 6;
    uVar13 = (ulonglong)ppplVar14 & 0xffffffffffffff00;
    uVar12 = uVar12 & 0xffffffffffffff00;
    local_f8 = param_1;
    FUN_140e87440(&local_f8,DAT_1419fe0e8,0x80000000,&local_c8,uVar12,uVar13);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140e609c0(param_1);
    local_16c = local_18c;
    local_170 = local_190;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
      local_178 = local_198;
    }
    else {
      FUN_1400419b0(&local_178,&local_198);
    }
    FUN_140042560(&local_178,&local_128);
    uStack_17c = local_bc;
    uStack_180 = local_c0;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
      local_188 = local_c8;
    }
    else {
      FUN_1400419b0(&local_188,&local_c8);
    }
    FUN_1400460e0(&local_188,&local_178);
    uVar5 = FUN_140e4a740(&local_198);
    pplVar10 = (longlong **)FUN_140e48e40(puVar6,uVar5);
    FUN_140e609c0(*(undefined8 *)*puVar6);
    if (&local_188 != pplVar10) {
      uStack_d0 = CONCAT44(uStack_17c,uStack_180);
      local_d8 = local_188;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar10);
      }
      FUN_140041b80(pplVar10,&local_d8);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140e60910(2);
    local_158 = 0x26;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
    uStack_1a0._4_4_ = 6;
    ppplVar14 = (longlong ***)(uVar13 & 0xffffffffffffff00);
    uVar12 = uVar12 & 0xffffffffffffff00;
    local_1a8 = param_1;
    FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_b8,uVar12,ppplVar14);
    if ((1 << ((byte)uStack_1a0._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140e609c0(param_1);
    uVar5 = FUN_140e4a740(&local_198);
    pplVar10 = (longlong **)FUN_140e48e40(puVar6,uVar5);
    FUN_140e609c0(*(undefined8 *)*puVar6);
    if (&local_b8 != pplVar10) {
      uStack_d0 = CONCAT44(uStack_ac,uStack_b0);
      local_d8 = local_b8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar10);
      }
      FUN_140041b80(pplVar10,&local_d8);
    }
    FUN_140e60910(2);
    local_158 = 0x27;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a10a28);
    FUN_140e609c0(param_1);
    uVar5 = FUN_140e4a740(&local_198);
    pplVar10 = (longlong **)FUN_140e48e40(puVar6,uVar5);
    FUN_140e609c0(*(undefined8 *)*puVar6);
    if (&local_128 != pplVar10) {
      uStack_d0 = CONCAT44(uStack_11c,uStack_120);
      local_d8 = local_128;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar10);
      }
      FUN_140041b80(pplVar10,&local_d8);
    }
    FUN_140e60910(2);
    local_158 = 0x29;
    cVar2 = FUN_140e491e0(&local_108);
    if (cVar2 != '\0') {
      local_158 = 0x29;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fba8);
      FUN_140e609c0(param_1);
      uVar5 = FUN_140e4a740(&local_198);
      pplVar10 = (longlong **)FUN_140e48e40(puVar6,uVar5);
      FUN_140e609c0(*(undefined8 *)*puVar6);
      if (&local_138 != pplVar10) {
        uStack_d0 = CONCAT44(uStack_12c,uStack_130);
        local_d8 = local_138;
        if ((1 << ((byte)*(undefined4 *)((longlong)pplVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pplVar10);
        }
        FUN_140041b80(pplVar10,&local_d8);
      }
      FUN_140e60910(2);
    }
  } while( true );
}

