// gml_Script_arm_meeting_line @ 0x140223e30

longlong **
gml_Script_arm_meeting_line
          (longlong *param_1,undefined8 param_2,longlong **param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong **pplVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong **pplVar12;
  longlong **local_res8;
  code *pcVar13;
  ulonglong uVar14;
  ulonglong in_stack_fffffffffffffe50;
  ulonglong uVar15;
  longlong ***ppplVar16;
  longlong *local_1a8;
  undefined8 uStack_1a0;
  longlong *local_198;
  undefined4 local_190;
  uint local_18c;
  longlong *local_188;
  undefined4 local_180;
  uint local_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  longlong *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  undefined8 uStack_120;
  longlong *local_118;
  byte local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong *local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
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
  
  local_170 = "gml_Script_arm_initialize";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 6;
  pcVar13 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_118,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  uStack_13c = 0xffffff;
  local_148 = (longlong *)0x0;
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_12c = 0xffffff;
  local_138 = (longlong *)0x0;
  local_18c = 0xffffff;
  local_198 = (longlong *)0x0;
  local_bc = 0xffffff;
  local_c8 = (longlong *)0x0;
  uStack_ac = 0xffffff;
  local_b8 = (longlong *)0x0;
  local_154 = 0;
  local_160 = 0;
  local_5c = 0;
  local_68 = 0;
  local_6c = 0;
  local_78 = 0;
  local_7c = 0;
  local_88 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_8c = 0;
  local_98 = (double)param_4;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = (longlong *)0x0;
  local_168 = 0xc;
  local_17c = 6;
  uVar14 = (ulonglong)pcVar13 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_141a0a728,0x80000000,&local_a8,uVar14,
                in_stack_fffffffffffffe50 & 0xffffffffffffff00);
  uVar6 = (undefined4)(uVar14 >> 0x20);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_1a0 = (longlong *)CONCAT44(uStack_9c,uStack_a0);
  local_1a8 = local_a8;
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_1a8);
  local_1a8 = (longlong *)0x3ff0000000000000;
  uVar2 = SUB84(uStack_1a0,0);
  uStack_1a0 = (longlong *)CONCAT44(0xd,uVar2);
  local_128 = (longlong *)0x3ff0000000000000;
  uStack_120 = (longlong *)CONCAT44(0xd,uVar2);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_128);
  local_168 = 0xe;
  local_17c = 0;
  local_188 = (longlong *)0x4000000000000000;
  iVar4 = FUN_140e851f0(&local_98,&local_188,DAT_141955260,1);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  pplVar12 = (longlong **)&DAT_1419df7b0;
  if (0 < iVar4) {
    local_168 = 0xf;
    if (param_4 < 3) {
      pplVar9 = (longlong **)&DAT_1419df7b0;
    }
    else {
      pplVar9 = (longlong **)param_5[2];
      if (pplVar9 == &local_148) goto LAB_1402240ed;
    }
    local_1a8 = *pplVar9;
    uStack_1a0 = pplVar9[1];
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1a8);
  }
LAB_1402240ed:
  local_168 = 0x13;
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  local_160 = 0;
  local_158 = 0;
  local_154 = 5;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a10b88);
  if (param_4 < 1) {
    pplVar9 = (longlong **)&DAT_1419df7b0;
  }
  else {
    pplVar9 = (longlong **)*param_5;
    if (pplVar9 == &local_118) goto LAB_140224179;
  }
  local_1a8 = *pplVar9;
  uStack_1a0 = pplVar9[1];
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_1a8);
LAB_140224179:
  local_res8 = &local_118;
  FUN_140e609c0(param_1);
  uVar10 = CONCAT44(uVar6,DAT_1419fe728);
  puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_160,1,uVar10,&local_res8);
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  if (puVar8 != puVar7) {
    local_1a8 = (longlong *)*puVar8;
    uStack_1a0 = (longlong *)puVar8[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_1a8);
  }
  FUN_140e60910(1);
  local_168 = 0x14;
  pplVar9 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a10be8);
  uStack_1a0 = (longlong *)CONCAT44(0xd,(undefined4)uStack_1a0);
  local_1a8 = (longlong *)0x0;
  if (&local_1a8 != pplVar9) {
    local_128 = (longlong *)0x0;
    uStack_120 = uStack_1a0;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar9);
    }
    FUN_140041b80(pplVar9,&local_128);
  }
  local_168 = 0x16;
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  local_160 = 0;
  local_158 = 0;
  local_154 = 5;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0f148);
  if ((param_4 < 2) || (pplVar12 = (longlong **)param_5[1], pplVar12 != &local_118)) {
    local_1a8 = *pplVar12;
    uStack_1a0 = pplVar12[1];
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1a8);
  }
  local_res8 = &local_118;
  FUN_140e609c0(param_1);
  uVar10 = CONCAT44(uVar6,DAT_1419fe728);
  puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_160,1,uVar10,&local_res8);
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  if (puVar8 != puVar7) {
    local_1a8 = (longlong *)*puVar8;
    uStack_1a0 = (longlong *)puVar8[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_1a8);
  }
  FUN_140e60910(1);
  local_168 = 0x17;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
  FUN_140e609c0(param_1);
  puVar8 = (undefined8 *)FUN_140e8da20(&local_160,param_1,0);
  if (puVar8 != puVar7) {
    local_1a8 = (longlong *)*puVar8;
    uStack_1a0 = (longlong *)puVar8[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_1a8);
  }
  FUN_140e60910(1);
  local_168 = 0x18;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
  FUN_140e609c0(param_1);
  puVar8 = (undefined8 *)FUN_140e8da20(&local_68,param_1,0);
  if (puVar8 != puVar7) {
    local_1a8 = (longlong *)*puVar8;
    uStack_1a0 = (longlong *)puVar8[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_1a8);
  }
  FUN_140e60910(1);
  local_168 = 0x19;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a10a28);
  FUN_140e609c0(param_1);
  puVar8 = (undefined8 *)FUN_140e8da20(&local_78,param_1,0);
  if (puVar8 != puVar7) {
    local_1a8 = (longlong *)*puVar8;
    uStack_1a0 = (longlong *)puVar8[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_1a8);
  }
  FUN_140e60910(1);
  local_168 = 0x1a;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fba8);
  FUN_140e609c0(param_1);
  puVar8 = (undefined8 *)FUN_140e8da20(&local_88,param_1,0);
  if (puVar8 != puVar7) {
    local_1a8 = (longlong *)*puVar8;
    uStack_1a0 = (longlong *)puVar8[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_1a8);
  }
  FUN_140e60910(1);
  local_168 = 0x1d;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  local_res8 = &local_148;
  ppplVar16 = &local_res8;
  uVar14 = CONCAT44(uVar6,DAT_1419fdb88);
  uVar10 = FUN_140e634e0(param_1,param_2,&local_f8,1,uVar14,ppplVar16);
  cVar3 = FUN_140e491e0(uVar10);
  if (cVar3 != '\0') {
    local_168 = 0x1e;
    pplVar12 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fba8);
    FUN_140e609c0(param_1);
    if (&local_148 != pplVar12) {
      uStack_1a0 = (longlong *)CONCAT44(uStack_13c,uStack_140);
      local_1a8 = local_148;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar12);
      }
      FUN_140041b80(pplVar12,&local_1a8);
    }
    FUN_140e60910(1);
    local_168 = 0x1f;
    local_1a8 = (longlong *)0x0;
    uVar6 = SUB84(uStack_1a0,0);
    uStack_1a0 = (longlong *)CONCAT44(0xd,uVar6);
    local_128 = (longlong *)0x0;
    uStack_120 = (longlong *)CONCAT44(0xd,uVar6);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_128);
  }
  local_168 = 0x23;
  uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_141a10b88);
  uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
  pplVar12 = (longlong **)FUN_140046e40(&local_1a8,uVar10,uVar11);
  if (pplVar12 != &local_138) {
    local_128 = *pplVar12;
    uStack_120 = pplVar12[1];
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_128);
  }
  if ((1 << ((byte)((ulonglong)uStack_1a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_168 = 0x24;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_18c = 0;
  local_198 = (longlong *)0x0;
  bVar1 = true;
  do {
    if (!bVar1) {
      local_168 = 0x24;
      uVar5 = local_18c & 0xffffff;
      if (uVar5 != 0) {
        if (uVar5 != 1) {
          if (uVar5 == 7) {
            local_198 = (longlong *)CONCAT44(local_198._4_4_,(int)local_198 + 1);
          }
          else if (uVar5 == 10) {
            local_198 = (longlong *)((longlong)local_198 + 1);
          }
          else {
            if (uVar5 == 0xd) {
              local_18c = 0;
              goto LAB_14022475a;
            }
            FUN_140042910(&DAT_14172c3d8,&local_198,&local_198);
          }
          goto LAB_140224764;
        }
        local_198 = (longlong *)FUN_140e4b060(&local_198);
        local_18c = 0;
      }
LAB_14022475a:
      local_198 = (longlong *)((double)local_198 + 1.0);
    }
LAB_140224764:
    bVar1 = false;
    uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    iVar4 = FUN_140e851f0(&local_198,uVar10,DAT_141955260,1);
    if ((iVar4 == -2) || (0 < iVar4)) {
      local_168 = 0x2e;
      if (&local_138 != param_3) {
        uStack_e0 = CONCAT44(uStack_12c,uStack_130);
        local_e8 = local_138;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_e8);
      }
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
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
      if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_160);
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
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      _eh_vector_destructor_iterator_(&local_118,0x10,1,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_178;
      return param_3;
    }
    local_168 = 0x26;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
    uStack_120 = (longlong *)CONCAT44(6,(undefined4)uStack_120);
    uVar15 = (ulonglong)ppplVar16 & 0xffffffffffffff00;
    uVar14 = uVar14 & 0xffffffffffffff00;
    local_128 = param_1;
    FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_c8,uVar14,uVar15);
    if ((1 << ((byte)((ulonglong)uStack_120 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140e609c0(param_1);
    local_17c = local_18c;
    local_180 = local_190;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
      local_188 = local_198;
    }
    else {
      FUN_1400419b0(&local_188,&local_198);
    }
    FUN_140042560(&local_188,&local_138);
    uStack_cc = local_bc;
    uStack_d0 = local_c0;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
      local_d8 = local_c8;
    }
    else {
      FUN_1400419b0(&local_d8,&local_c8);
    }
    FUN_1400460e0(&local_d8,&local_188);
    uVar6 = FUN_140e4a740(&local_198);
    pplVar12 = (longlong **)FUN_140e48e40(puVar7,uVar6);
    FUN_140e609c0(*(undefined8 *)*puVar7);
    if (&local_d8 != pplVar12) {
      uStack_e0 = CONCAT44(uStack_cc,uStack_d0);
      local_e8 = local_d8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar12);
      }
      FUN_140041b80(pplVar12,&local_e8);
    }
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(2);
    local_168 = 0x27;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
    uStack_1a0 = (longlong *)CONCAT44(6,(undefined4)uStack_1a0);
    ppplVar16 = (longlong ***)(uVar15 & 0xffffffffffffff00);
    uVar14 = uVar14 & 0xffffffffffffff00;
    local_1a8 = param_1;
    FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_b8,uVar14,ppplVar16);
    if ((1 << ((byte)((ulonglong)uStack_1a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140e609c0(param_1);
    uVar6 = FUN_140e4a740(&local_198);
    pplVar12 = (longlong **)FUN_140e48e40(puVar7,uVar6);
    FUN_140e609c0(*(undefined8 *)*puVar7);
    if (&local_b8 != pplVar12) {
      uStack_e0 = CONCAT44(uStack_ac,uStack_b0);
      local_e8 = local_b8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar12);
      }
      FUN_140041b80(pplVar12,&local_e8);
    }
    FUN_140e60910(2);
    local_168 = 0x28;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a10a28);
    FUN_140e609c0(param_1);
    uVar6 = FUN_140e4a740(&local_198);
    pplVar12 = (longlong **)FUN_140e48e40(puVar7,uVar6);
    FUN_140e609c0(*(undefined8 *)*puVar7);
    if (&local_138 != pplVar12) {
      uStack_e0 = CONCAT44(uStack_12c,uStack_130);
      local_e8 = local_138;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar12);
      }
      FUN_140041b80(pplVar12,&local_e8);
    }
    FUN_140e60910(2);
    local_168 = 0x2a;
    cVar3 = FUN_140e491e0(&local_108);
    if (cVar3 != '\0') {
      local_168 = 0x2a;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fba8);
      FUN_140e609c0(param_1);
      uVar6 = FUN_140e4a740(&local_198);
      pplVar12 = (longlong **)FUN_140e48e40(puVar7,uVar6);
      FUN_140e609c0(*(undefined8 *)*puVar7);
      if (&local_148 != pplVar12) {
        uStack_e0 = CONCAT44(uStack_13c,uStack_140);
        local_e8 = local_148;
        if ((1 << ((byte)*(undefined4 *)((longlong)pplVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pplVar12);
        }
        FUN_140041b80(pplVar12,&local_e8);
      }
      FUN_140e60910(2);
    }
  } while( true );
}

