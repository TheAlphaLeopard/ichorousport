// gml_Script_anon_881_gml_Object_oEnemyWormBrute_Create_0 @ 0x140a8cb00

undefined8 *
gml_Script_anon_881_gml_Object_oEnemyWormBrute_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar15;
  double dVar14;
  undefined4 uVar16;
  undefined4 uVar17;
  code *pcVar18;
  ulonglong uVar19;
  ulonglong in_stack_fffffffffffffe50;
  double local_1a8;
  undefined4 local_1a0;
  uint local_19c;
  undefined8 local_198;
  undefined4 local_190;
  uint local_18c;
  undefined8 local_188;
  undefined4 local_180;
  uint local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  uint local_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  double local_130;
  undefined4 local_128;
  uint local_124;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  longlong local_a8 [2];
  longlong local_98 [2];
  undefined4 local_88 [4];
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68;
  undefined4 *local_60;
  
  local_140 = "gml_Script_anon@387@gml_Object_oEnemyWormBrute_Create_0";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0x1a;
  pcVar18 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_a8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_78 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_16c = 0;
  uVar16 = 0;
  uVar17 = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_138 = 0x1c;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f2498);
  in_stack_fffffffffffffe50 = in_stack_fffffffffffffe50 & 0xffffffffffffff00;
  uVar19 = (ulonglong)pcVar18 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_141a58110,0x80000000,&local_b8,uVar19,in_stack_fffffffffffffe50);
  cVar3 = FUN_140e491e0(&local_b8);
  if (cVar3 != '\0') {
    local_138 = 0x1e;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_19c = 0;
    uVar13 = 0;
    uVar15 = 0;
    local_1a8 = 0.0;
    bVar2 = true;
    do {
      dVar14 = (double)CONCAT44(uVar15,uVar13);
      if (!bVar2) {
        local_138 = 0x1e;
        uVar4 = local_19c & 0xffffff;
        if (uVar4 != 0) {
          if (uVar4 != 1) {
            if (uVar4 == 7) {
              local_1a8 = (double)CONCAT44(local_1a8._4_4_,local_1a8._0_4_ + 1);
            }
            else if (uVar4 == 10) {
              local_1a8 = (double)((longlong)local_1a8 + 1);
            }
            else {
              if (uVar4 == 0xd) goto LAB_140a8ccf6;
              FUN_140042910(&DAT_14172c3d8,&local_1a8,&local_1a8);
            }
            goto LAB_140a8cd05;
          }
          dVar14 = (double)FUN_140e4b060(&local_1a8);
LAB_140a8ccf6:
          local_19c = 0;
        }
        local_1a8 = dVar14 + 1.0;
      }
LAB_140a8cd05:
      bVar2 = false;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f22c8);
      iVar5 = FUN_140e851f0(&local_1a8,uVar6,DAT_141955260,1);
      if ((iVar5 == -2) || (-1 < iVar5)) goto LAB_140a8d05c;
      local_138 = 0x1f;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f2498);
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2538);
      FUN_140e87440(uVar6,DAT_141a0a848,0x80000000,&local_158,uVar19 & 0xffffffffffffff00,
                    in_stack_fffffffffffffe50 & 0xffffffffffffff00);
      plVar10 = param_1;
      in_stack_fffffffffffffe50 = param_2;
      FUN_140e87170(uVar6,DAT_1419f57f8,0x80000000,&local_c8,param_1,param_2);
      in_stack_fffffffffffffe50 = in_stack_fffffffffffffe50 & 0xffffffffffffff00;
      uVar19 = (ulonglong)plVar10 & 0xffffffffffffff00;
      FUN_140e87440(uVar6,DAT_1419f0888,0x80000000,&local_d8,uVar19,in_stack_fffffffffffffe50);
      in_stack_fffffffffffffe50 = in_stack_fffffffffffffe50 & 0xffffffffffffff00;
      uVar19 = uVar19 & 0xffffffffffffff00;
      FUN_140e87440(uVar6,DAT_1419f21d8,0x80000000,&local_e8,uVar19,in_stack_fffffffffffffe50);
      FUN_140e609c0(param_1);
      local_124 = local_19c;
      local_128 = local_1a0;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
        local_130 = local_1a8;
      }
      else {
        FUN_1400419b0(&local_130,&local_1a8);
      }
      FUN_140042560(&local_130,&local_d8);
      local_18c = local_14c;
      local_190 = local_150;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
        local_198 = local_158;
      }
      else {
        FUN_1400419b0(&local_198,&local_158);
      }
      FUN_140042560(&local_198,&local_c8);
      local_17c = local_18c;
      local_180 = local_190;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
        local_188 = local_198;
      }
      else {
        FUN_1400419b0(&local_188,&local_198);
      }
      FUN_1400462a0(&local_188,&local_130);
      if ((local_17c & 0xffffff) == 0) {
        uVar13 = (undefined4)local_188;
      }
      else {
        uVar13 = FUN_140e4b060(&local_188);
      }
      local_f8 = thunk_FUN_1412ac390(uVar13);
      local_ec = 0;
      FUN_140042560(&local_f8,&local_e8);
      uStack_10c = 0;
      local_118 = 0x3ff0000000000000;
      FUN_1400460e0(&local_118,&local_f8);
      uVar13 = FUN_140e4a740(&local_1a8);
      puVar8 = (undefined8 *)FUN_140e48e40(puVar7,uVar13);
      FUN_140e609c0(*(undefined8 *)*puVar7);
      if (&local_118 != puVar8) {
        local_168 = (undefined4)local_118;
        uStack_164 = local_118._4_4_;
        uStack_160 = uStack_110;
        uStack_15c = uStack_10c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        FUN_140041b80(puVar8,&local_168);
      }
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_130);
      }
      FUN_140e60910(2);
      uVar13 = SUB84(local_1a8,0);
      uVar15 = (undefined4)((ulonglong)local_1a8 >> 0x20);
    } while( true );
  }
LAB_140a8d0bc:
  local_138 = 0x24;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_19c = 0;
  local_1a8 = 0.0;
  bVar2 = true;
  do {
    uVar13 = (undefined4)(uVar19 >> 0x20);
    if (!bVar2) {
      local_138 = 0x24;
      uVar4 = local_19c & 0xffffff;
      if (uVar4 == 0) {
LAB_140a8d13f:
        local_1a8 = (double)CONCAT44(uVar17,uVar16) + 1.0;
      }
      else if (uVar4 == 1) {
        local_1a8 = (double)FUN_140e4b060(&local_1a8);
        local_1a8 = local_1a8 + 1.0;
        local_19c = 0;
      }
      else if (uVar4 == 7) {
        local_1a8 = (double)CONCAT44(local_1a8._4_4_,local_1a8._0_4_ + 1);
      }
      else if (uVar4 == 10) {
        local_1a8 = (double)((longlong)local_1a8 + 1);
      }
      else {
        if (uVar4 == 0xd) {
          local_19c = 0;
          goto LAB_140a8d13f;
        }
        FUN_140042910(&DAT_14172c3d8,&local_1a8,&local_1a8);
      }
    }
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f22c8);
    iVar5 = FUN_140e851f0(&local_1a8,uVar6,DAT_141955260,1);
    if ((iVar5 == -2) || (-1 < iVar5)) {
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      _eh_vector_destructor_iterator_(local_a8,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_148;
      return param_3;
    }
    local_138 = 0x25;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f23b8);
    plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2538);
    puVar11 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f23e8);
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f23b8);
    iVar5 = FUN_140e4a740(&local_1a8);
    if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar9 != local_a8) {
      local_168 = (undefined4)*plVar9;
      uStack_164 = *(undefined4 *)((longlong)plVar9 + 4);
      uStack_160 = (undefined4)plVar9[1];
      uStack_15c = *(undefined4 *)((longlong)plVar9 + 0xc);
      if ((1 << ((byte)local_a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_168);
    }
    local_70 = local_a8;
    iVar5 = FUN_140e4a740(&local_1a8);
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
    if (plVar10 != local_98) {
      local_168 = (undefined4)*plVar10;
      uStack_164 = *(undefined4 *)((longlong)plVar10 + 4);
      uStack_160 = (undefined4)plVar10[1];
      uStack_15c = *(undefined4 *)((longlong)plVar10 + 0xc);
      if ((1 << ((byte)local_98[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_168);
    }
    local_68 = local_98;
    if (puVar11 != local_88) {
      local_168 = *puVar11;
      uStack_164 = puVar11[1];
      uStack_160 = puVar11[2];
      uStack_15c = puVar11[3];
      if ((1 << ((byte)local_88[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
      FUN_140041b80(local_88,&local_168);
    }
    local_60 = local_88;
    FUN_140e609c0(param_1);
    uVar16 = FUN_140e4a740(&local_1a8);
    puVar11 = (undefined4 *)FUN_140e48e40(puVar7,uVar16);
    FUN_140e609c0(*(undefined8 *)*puVar7);
    uVar19 = CONCAT44(uVar13,DAT_141a00c58);
    puVar12 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_178,3,uVar19,&local_70);
    if (puVar12 != puVar11) {
      local_168 = *puVar12;
      uStack_164 = puVar12[1];
      uStack_160 = puVar12[2];
      uStack_15c = puVar12[3];
      if ((1 << ((byte)puVar11[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar11);
      }
      FUN_140041b80(puVar11,&local_168);
    }
    FUN_140e60910(2);
    uVar16 = SUB84(local_1a8,0);
    uVar17 = (undefined4)((ulonglong)local_1a8 >> 0x20);
    bVar2 = false;
  } while( true );
LAB_140a8d05c:
  local_138 = 0x21;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f2498);
  uVar19 = uVar19 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_141a0a848,0x80000000,&local_108,uVar19,
                in_stack_fffffffffffffe50 & 0xffffffffffffff00);
  FUN_1400460e0(&local_108,local_78);
  FUN_140e87930(uVar6,DAT_141a0a848,0x80000000,&local_108);
  goto LAB_140a8d0bc;
}

