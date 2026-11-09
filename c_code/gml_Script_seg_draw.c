// gml_Script_seg_draw @ 0x1404981b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_seg_draw(longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                   undefined8 *param_5)

{
  longlong lVar1;
  double dVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  double *pdVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 uVar15;
  double local_1e8;
  undefined4 local_1e0;
  uint local_1dc;
  double local_1d8;
  undefined4 local_1d0;
  uint local_1cc;
  double local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  double local_1a8;
  undefined4 local_1a0;
  uint local_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  double local_108;
  undefined4 local_100;
  uint local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined4 local_d8 [3];
  undefined4 local_cc;
  undefined4 local_c8 [3];
  undefined4 local_bc;
  undefined4 local_b8 [3];
  undefined4 local_ac;
  undefined1 local_a8 [16];
  undefined4 local_98 [3];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 *local_68;
  undefined4 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  local_160 = "gml_Script_seg_delete";
  local_168 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_168;
  local_158 = 3;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_a8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_16c = 0xffffff;
  local_178 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0.0;
  local_124 = 0;
  local_130 = 0;
  local_134 = 0;
  local_140 = 0;
  local_144 = 0;
  local_150 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_158 = 5;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
LAB_1404982a5:
    local_188 = *(undefined4 *)param_5;
    uStack_184 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_180 = *(undefined4 *)(param_5 + 1);
    uStack_17c = *(undefined4 *)((longlong)param_5 + 0xc);
    FUN_140041b80(&local_178,&local_188);
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 != &local_178) goto LAB_1404982a5;
  }
  local_158 = 6;
  local_1cc = 0;
  local_1d8 = 0.0;
  iVar5 = FUN_140e851f0(&local_178,&local_1d8,DAT_141955260,1);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (iVar5 == -2 || -1 < iVar5) {
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    iVar5 = FUN_140e851f0(&local_178,uVar8,DAT_141955260,1);
    if ((iVar5 == -2) || (iVar5 < 1)) goto LAB_140498731;
  }
  local_158 = 6;
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  local_130 = 0;
  local_128 = 0;
  local_124 = 5;
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  local_140 = 0;
  local_138 = 0;
  local_134 = 5;
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  local_150 = 0;
  local_148 = 0;
  local_144 = 5;
  puVar9 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
  local_68 = &local_178;
  if (puVar9 != local_98) {
    local_188 = *puVar9;
    uStack_184 = puVar9[1];
    uStack_180 = puVar9[2];
    uStack_17c = puVar9[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_188);
  }
  local_60 = local_98;
  local_1cc = DAT_141dd3844;
  local_1d0 = DAT_141dd3840;
  if ((1 << ((byte)DAT_141dd3844 & 0x1f) & 0x46U) == 0) {
    local_1d8 = DAT_141dd3838;
  }
  else {
    FUN_1400419b0(&local_1d8,&DAT_141dd3838);
  }
  local_19c = DAT_141dd3834;
  local_1a0 = DAT_141dd3830;
  if ((1 << ((byte)DAT_141dd3834 & 0x1f) & 0x46U) == 0) {
    local_1a8 = DAT_141dd3828;
  }
  else {
    FUN_1400419b0(&local_1a8,&DAT_141dd3828);
  }
  uVar6 = local_19c;
  uVar4 = local_1a0;
  dVar2 = local_1a8;
  uVar15 = CONCAT44(uVar7,DAT_1419fcb18);
  uVar8 = FUN_140e634e0(param_1,param_2,&local_140,1,uVar15,&local_68);
  uVar7 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uVar14 = 1 << ((byte)uVar6 & 0x1f) & 0x46;
  uStack_1b0 = uVar4;
  uStack_1ac = uVar6;
  if (uVar14 == 0) {
    local_1b8 = dVar2;
  }
  else {
    FUN_1400419b0(&local_1b8,&local_1a8);
  }
  FUN_1400460e0(&local_1b8,uVar8);
  local_1bc = uStack_1ac;
  local_1c0 = uStack_1b0;
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
    local_1c8 = local_1b8;
  }
  else {
    FUN_1400419b0(&local_1c8,&local_1b8);
  }
  FUN_1400460e0(&local_1c8,&local_1d8);
  uVar15 = CONCAT44(uVar7,DAT_1419fcb18);
  uVar8 = FUN_140e634e0(param_1,param_2,&local_150,1,uVar15,&local_60);
  uVar7 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uStack_18c = local_1bc;
  uStack_190 = local_1c0;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
    local_198 = local_1c8;
  }
  else {
    FUN_1400419b0(&local_198,&local_1c8);
  }
  FUN_1400460e0(&local_198,uVar8);
  local_188 = (undefined4)local_198;
  uStack_184 = local_198._4_4_;
  uStack_180 = uStack_190;
  uStack_17c = uStack_18c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_188);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if (uVar14 != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_58 = local_88;
  local_188 = _DAT_1419df7c0;
  uStack_184 = uRam00000001419df7c4;
  uStack_180 = uRam00000001419df7c8;
  uStack_17c = uRam00000001419df7cc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_188);
  local_50 = local_78;
  FUN_140e634e0(param_1,param_2,&local_130,2,CONCAT44(uVar7,DAT_141a010a8),&local_58);
LAB_140498731:
  local_158 = 8;
  plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a10a28);
  uVar8 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a10b88);
  FUN_140e609c0(param_1);
  iVar5 = FUN_140e4a740(&local_178);
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
  FUN_1400462a0(uVar8,plVar10);
  FUN_140e60910(1);
  local_158 = 10;
  local_188 = (undefined4)local_178;
  uStack_184 = local_178._4_4_;
  uStack_180 = uStack_170;
  uStack_17c = uStack_16c;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_188);
  bVar3 = true;
  do {
    if (!bVar3) {
      local_158 = 10;
      uVar6 = local_1dc & 0xffffff;
      if (uVar6 != 0) {
        if (uVar6 != 1) {
          if (uVar6 == 7) {
            local_1e8 = (double)CONCAT44(local_1e8._4_4_,local_1e8._0_4_ + 1);
          }
          else if (uVar6 == 10) {
            local_1e8 = (double)((longlong)local_1e8 + 1);
          }
          else {
            if (uVar6 == 0xd) {
              local_1dc = 0;
              goto LAB_140498873;
            }
            FUN_140042910(&DAT_14172c3d8,&local_1e8,&local_1e8);
          }
          goto LAB_14049887d;
        }
        local_1e8 = (double)FUN_140e4b060(&local_1e8);
        local_1dc = 0;
      }
LAB_140498873:
      local_1e8 = local_1e8 + 1.0;
    }
LAB_14049887d:
    bVar3 = false;
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    iVar5 = FUN_140e851f0(&local_1e8,uVar8,DAT_141955260,1);
    if ((iVar5 == -2) || (-1 < iVar5)) {
      local_158 = 0x11;
      uVar8 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0f148);
      FUN_1400bdd80(uVar8);
      if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_150);
      }
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_140);
      }
      if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_130);
      }
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      _eh_vector_destructor_iterator_(local_a8,0x10,4,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_168;
      return param_3;
    }
    local_158 = 0xb;
    pdVar11 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
    FUN_140e609c0(param_1);
    local_19c = local_1dc;
    local_1a0 = local_1e0;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
      local_1a8 = local_1e8;
    }
    else {
      FUN_1400419b0(&local_1a8,&local_1e8);
    }
    local_cc = 7;
    local_d8[0] = 1;
    FUN_1400460e0(&local_1a8,local_d8);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    iVar5 = FUN_140e4a740(&local_1a8);
    if (((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 2) && (dVar2 = *pdVar11, dVar2 != 0.0))
    {
      if ((iVar5 < 0) || (*(int *)((longlong)dVar2 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)((longlong)dVar2 + 0x24));
        pdVar11 = (double *)0x0;
      }
      else {
        pdVar11 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar2 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uStack_18c = *(uint *)((longlong)pdVar11 + 0xc);
    uStack_190 = *(undefined4 *)(pdVar11 + 1);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
      local_198 = *pdVar11;
    }
    else {
      FUN_1400419b0(&local_198,pdVar11);
    }
    uVar6 = uStack_18c;
    uVar7 = FUN_140e4a740(&local_1e8);
    puVar13 = (undefined8 *)FUN_140e48e40(puVar12,uVar7);
    FUN_140e609c0(*(undefined8 *)*puVar12);
    if (&local_198 != puVar13) {
      local_e8 = (undefined4)local_198;
      uStack_e4 = local_198._4_4_;
      uStack_e0 = uStack_190;
      uStack_dc = uStack_18c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar13);
      }
      FUN_140041b80(puVar13,&local_e8);
    }
    if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140e60910(2);
    local_158 = 0xc;
    pdVar11 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
    FUN_140e609c0(param_1);
    local_1bc = local_1dc;
    local_1c0 = local_1e0;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
      local_1c8 = local_1e8;
    }
    else {
      FUN_1400419b0(&local_1c8,&local_1e8);
    }
    local_bc = 7;
    local_c8[0] = 1;
    FUN_1400460e0(&local_1c8,local_c8);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    iVar5 = FUN_140e4a740(&local_1c8);
    if (((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 2) && (dVar2 = *pdVar11, dVar2 != 0.0))
    {
      if ((iVar5 < 0) || (*(int *)((longlong)dVar2 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)((longlong)dVar2 + 0x24));
        pdVar11 = (double *)0x0;
      }
      else {
        pdVar11 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar2 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uStack_1ac = *(uint *)((longlong)pdVar11 + 0xc);
    uStack_1b0 = *(undefined4 *)(pdVar11 + 1);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
      local_1b8 = *pdVar11;
    }
    else {
      FUN_1400419b0(&local_1b8,pdVar11);
    }
    uVar6 = uStack_1ac;
    uVar7 = FUN_140e4a740(&local_1e8);
    puVar13 = (undefined8 *)FUN_140e48e40(puVar12,uVar7);
    FUN_140e609c0(*(undefined8 *)*puVar12);
    if (&local_1b8 != puVar13) {
      local_e8 = (undefined4)local_1b8;
      uStack_e4 = local_1b8._4_4_;
      uStack_e0 = uStack_1b0;
      uStack_dc = uStack_1ac;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar13);
      }
      FUN_140041b80(puVar13,&local_e8);
    }
    if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140e60910(2);
    local_158 = 0xd;
    plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a10a28);
    puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a10a28);
    FUN_140e609c0(param_1);
    local_fc = local_1dc;
    local_100 = local_1e0;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
      local_108 = local_1e8;
    }
    else {
      FUN_1400419b0(&local_108,&local_1e8);
    }
    local_ac = 7;
    local_b8[0] = 1;
    FUN_1400460e0(&local_108,local_b8);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    iVar5 = FUN_140e4a740(&local_108);
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
    uStack_10c = *(uint *)((longlong)plVar10 + 0xc);
    uStack_110 = (undefined4)plVar10[1];
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
      local_118 = *plVar10;
    }
    else {
      FUN_1400419b0(&local_118,plVar10);
    }
    uVar6 = uStack_10c;
    uVar7 = FUN_140e4a740(&local_1e8);
    puVar13 = (undefined8 *)FUN_140e48e40(puVar12,uVar7);
    FUN_140e609c0(*(undefined8 *)*puVar12);
    if (&local_118 != puVar13) {
      local_e8 = (undefined4)local_118;
      uStack_e4 = local_118._4_4_;
      uStack_e0 = uStack_110;
      uStack_dc = uStack_10c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar13);
      }
      FUN_140041b80(puVar13,&local_e8);
    }
    if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140e60910(2);
    local_158 = 0xe;
    plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fba8);
    puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fba8);
    FUN_140e609c0(param_1);
    local_1cc = local_1dc;
    local_1d0 = local_1e0;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
      local_1d8 = local_1e8;
    }
    else {
      FUN_1400419b0(&local_1d8,&local_1e8);
    }
    uStack_17c = 7;
    local_188 = 1;
    FUN_1400460e0(&local_1d8,&local_188);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    iVar5 = FUN_140e4a740(&local_1d8);
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
    uStack_ec = *(uint *)((longlong)plVar10 + 0xc);
    uStack_f0 = (undefined4)plVar10[1];
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
      local_f8 = *plVar10;
    }
    else {
      FUN_1400419b0(&local_f8,plVar10);
    }
    uVar6 = uStack_ec;
    uVar7 = FUN_140e4a740(&local_1e8);
    puVar13 = (undefined8 *)FUN_140e48e40(puVar12,uVar7);
    FUN_140e609c0(*(undefined8 *)*puVar12);
    if (&local_f8 != puVar13) {
      local_e8 = (undefined4)local_f8;
      uStack_e4 = local_f8._4_4_;
      uStack_e0 = uStack_f0;
      uStack_dc = uStack_ec;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar13);
      }
      FUN_140041b80(puVar13,&local_e8);
    }
    if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140e60910(2);
  } while( true );
}

