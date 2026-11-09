// gml_Script_seg_meeting_line @ 0x14049b230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_seg_meeting_line
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  double dVar1;
  longlong lVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  double *pdVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 uVar17;
  double local_1f8;
  undefined4 local_1f0;
  uint local_1ec;
  double local_1e8;
  undefined4 local_1e0;
  uint local_1dc;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  double local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  double local_1a8;
  undefined4 local_1a0;
  uint local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  uint uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
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
  undefined4 local_e8 [3];
  undefined4 local_dc;
  undefined4 local_d8 [3];
  undefined4 local_cc;
  undefined4 local_c8 [3];
  undefined4 local_bc;
  undefined1 local_b8 [16];
  undefined4 local_a8 [3];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 *local_78;
  undefined4 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  
  local_170 = "gml_Script_seg_insert";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 5;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_124 = 0xffffff;
  local_130 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0.0;
  local_134 = 0;
  local_140 = 0;
  local_144 = 0;
  local_150 = 0;
  local_154 = 0;
  local_160 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_168 = 7;
  if (param_4 < 1) {
    puVar11 = &DAT_1419df7b0;
LAB_14049b32d:
    local_198 = *(undefined4 *)puVar11;
    uStack_194 = *(undefined4 *)((longlong)puVar11 + 4);
    uStack_190 = *(undefined4 *)(puVar11 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar11 + 0xc);
    FUN_140041b80(&local_130,&local_198);
  }
  else {
    puVar11 = (undefined8 *)*param_5;
    if (puVar11 != &local_130) goto LAB_14049b32d;
  }
  local_168 = 8;
  local_1dc = 0;
  local_1e8 = 0.0;
  iVar5 = FUN_140e851f0(&local_130,&local_1e8,DAT_141955260,1);
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if (iVar5 == -2 || -1 < iVar5) {
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    iVar5 = FUN_140e851f0(&local_130,uVar8,DAT_141955260,1);
    if ((iVar5 == -2) || (iVar5 < 1)) goto LAB_14049b7ba;
  }
  local_168 = 8;
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
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  local_160 = 0;
  local_158 = 0;
  local_154 = 5;
  puVar9 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
  local_78 = &local_130;
  if (puVar9 != local_a8) {
    local_198 = *puVar9;
    uStack_194 = puVar9[1];
    uStack_190 = puVar9[2];
    uStack_18c = puVar9[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_198);
  }
  local_70 = local_a8;
  local_1dc = DAT_141dd3874;
  local_1e0 = DAT_141dd3870;
  if ((1 << ((byte)DAT_141dd3874 & 0x1f) & 0x46U) == 0) {
    local_1e8 = DAT_141dd3868;
  }
  else {
    FUN_1400419b0(&local_1e8,&DAT_141dd3868);
  }
  local_19c = DAT_141dd3884;
  local_1a0 = DAT_141dd3880;
  if ((1 << ((byte)DAT_141dd3884 & 0x1f) & 0x46U) == 0) {
    local_1a8 = DAT_141dd3878;
  }
  else {
    FUN_1400419b0(&local_1a8,&DAT_141dd3878);
  }
  uVar6 = local_19c;
  uVar4 = local_1a0;
  dVar1 = local_1a8;
  uVar17 = CONCAT44(uVar7,DAT_1419fcb18);
  uVar8 = FUN_140e634e0(param_1,param_2,&local_150,1,uVar17,&local_78);
  uVar7 = (undefined4)((ulonglong)uVar17 >> 0x20);
  uVar16 = 1 << ((byte)uVar6 & 0x1f) & 0x46;
  uStack_1b0 = uVar4;
  uStack_1ac = uVar6;
  if (uVar16 == 0) {
    local_1b8 = dVar1;
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
  FUN_1400460e0(&local_1c8,&local_1e8);
  uVar17 = CONCAT44(uVar7,DAT_1419fcb18);
  uVar8 = FUN_140e634e0(param_1,param_2,&local_160,1,uVar17,&local_70);
  uVar7 = (undefined4)((ulonglong)uVar17 >> 0x20);
  uStack_1cc = local_1bc;
  uStack_1d0 = local_1c0;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
    local_1d8 = local_1c8;
  }
  else {
    FUN_1400419b0(&local_1d8,&local_1c8);
  }
  FUN_1400460e0(&local_1d8,uVar8);
  local_198 = (undefined4)local_1d8;
  uStack_194 = local_1d8._4_4_;
  uStack_190 = uStack_1d0;
  uStack_18c = uStack_1cc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_198);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if (uVar16 != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_68 = local_98;
  local_198 = _DAT_1419df7c0;
  uStack_194 = uRam00000001419df7c4;
  uStack_190 = uRam00000001419df7c8;
  uStack_18c = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_198);
  local_60 = local_88;
  FUN_140e634e0(param_1,param_2,&local_140,2,CONCAT44(uVar7,DAT_141a010a8),&local_68);
LAB_14049b7ba:
  local_168 = 10;
  pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
  uStack_1cc = *(uint *)((longlong)pdVar10 + 0xc);
  uStack_1d0 = *(undefined4 *)(pdVar10 + 1);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
    local_1d8 = *pdVar10;
  }
  else {
    FUN_1400419b0(&local_1d8,pdVar10);
  }
  local_1dc = 7;
  local_1e8 = (double)CONCAT44(local_1e8._4_4_,1);
  FUN_1400460e0(&local_1d8,&local_1e8);
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_198 = (undefined4)local_1d8;
  uStack_194 = local_1d8._4_4_;
  uStack_190 = uStack_1d0;
  uStack_18c = uStack_1cc;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_198);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  bVar3 = true;
  do {
    if (!bVar3) {
      local_168 = 10;
      uVar6 = local_1ec & 0xffffff;
      if (uVar6 == 0) {
LAB_14049b8ff:
        local_1f8 = local_1f8 + -1.0;
      }
      else if (uVar6 == 1) {
        local_1f8 = (double)FUN_140e4b060(&local_1f8);
        local_1f8 = local_1f8 - 1.0;
        local_1ec = 0;
      }
      else if (uVar6 == 7) {
        local_1f8 = (double)CONCAT44(local_1f8._4_4_,local_1f8._0_4_ + -1);
      }
      else if (uVar6 == 10) {
        local_1f8 = (double)((longlong)local_1f8 + -1);
      }
      else {
        if (uVar6 == 0xd) {
          local_1ec = 0;
          goto LAB_14049b8ff;
        }
        FUN_140042910(&DAT_14172c450,&local_1f8,&local_1f8);
      }
    }
    bVar3 = false;
    iVar5 = FUN_140e851f0(&local_1f8,&local_130,DAT_141955260,1);
    if ((iVar5 == -2) || (iVar5 < 1)) {
      local_168 = 0x10;
      uVar8 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a10b88);
      FUN_140e609c0(param_1);
      puVar11 = &DAT_1419df7b0;
      if (param_4 < 2) {
        puVar12 = &DAT_1419df7b0;
      }
      else {
        puVar12 = (undefined8 *)param_5[1];
      }
      FUN_1400460e0(uVar8,puVar12);
      FUN_140e60910(1);
      local_168 = 0x11;
      puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a10a28);
      FUN_140e609c0(param_1);
      if (param_4 < 2) {
        puVar15 = &DAT_1419df7b0;
      }
      else {
        puVar15 = (undefined8 *)param_5[1];
      }
      uVar7 = FUN_140e4a740(&local_1f8);
      puVar14 = (undefined8 *)FUN_140e48e40(puVar12,uVar7);
      FUN_140e609c0(*(undefined8 *)*puVar12);
      if (puVar15 != puVar14) {
        local_188 = *(undefined4 *)puVar15;
        uStack_184 = *(undefined4 *)((longlong)puVar15 + 4);
        uStack_180 = *(undefined4 *)(puVar15 + 1);
        uStack_17c = *(uint *)((longlong)puVar15 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar14 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar14);
        }
        FUN_140041b80(puVar14,&local_188);
      }
      FUN_140e60910(2);
      local_168 = 0x12;
      puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fba8);
      FUN_140e609c0(param_1);
      if (2 < param_4) {
        puVar11 = (undefined8 *)param_5[2];
      }
      uVar7 = FUN_140e4a740(&local_1f8);
      puVar15 = (undefined8 *)FUN_140e48e40(puVar12,uVar7);
      FUN_140e609c0(*(undefined8 *)*puVar12);
      if (puVar11 != puVar15) {
        local_188 = *(undefined4 *)puVar11;
        uStack_184 = *(undefined4 *)((longlong)puVar11 + 4);
        uStack_180 = *(undefined4 *)(puVar11 + 1);
        uStack_17c = *(uint *)((longlong)puVar11 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar15 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar15);
        }
        FUN_140041b80(puVar15,&local_188);
      }
      FUN_140e60910(2);
      local_168 = 0x14;
      uVar8 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0f148);
      FUN_140046040(uVar8);
      if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_160);
      }
      if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_150);
      }
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_140);
      }
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_130);
      }
      _eh_vector_destructor_iterator_(local_b8,0x10,4,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_178;
      return param_3;
    }
    local_168 = 0xb;
    pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
    FUN_140e609c0(param_1);
    local_19c = local_1ec;
    local_1a0 = local_1f0;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
      local_1a8 = local_1f8;
    }
    else {
      FUN_1400419b0(&local_1a8,&local_1f8);
    }
    local_dc = 7;
    local_e8[0] = 1;
    FUN_1400462a0(&local_1a8,local_e8);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    iVar5 = FUN_140e4a740(&local_1a8);
    if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) && (dVar1 = *pdVar10, dVar1 != 0.0))
    {
      if ((iVar5 < 0) || (*(int *)((longlong)dVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)((longlong)dVar1 + 0x24));
        pdVar10 = (double *)0x0;
      }
      else {
        pdVar10 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uStack_1cc = *(uint *)((longlong)pdVar10 + 0xc);
    uStack_1d0 = *(undefined4 *)(pdVar10 + 1);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
      local_1d8 = *pdVar10;
    }
    else {
      FUN_1400419b0(&local_1d8,pdVar10);
    }
    uVar6 = uStack_1cc;
    uVar7 = FUN_140e4a740(&local_1f8);
    puVar12 = (undefined8 *)FUN_140e48e40(puVar11,uVar7);
    FUN_140e609c0(*(undefined8 *)*puVar11);
    if (&local_1d8 != puVar12) {
      local_188 = (undefined4)local_1d8;
      uStack_184 = local_1d8._4_4_;
      uStack_180 = uStack_1d0;
      uStack_17c = uStack_1cc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar12);
      }
      FUN_140041b80(puVar12,&local_188);
    }
    if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140e60910(2);
    local_168 = 0xc;
    pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
    FUN_140e609c0(param_1);
    local_1bc = local_1ec;
    local_1c0 = local_1f0;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
      local_1c8 = local_1f8;
    }
    else {
      FUN_1400419b0(&local_1c8,&local_1f8);
    }
    local_cc = 7;
    local_d8[0] = 1;
    FUN_1400462a0(&local_1c8,local_d8);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    iVar5 = FUN_140e4a740(&local_1c8);
    if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) && (dVar1 = *pdVar10, dVar1 != 0.0))
    {
      if ((iVar5 < 0) || (*(int *)((longlong)dVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)((longlong)dVar1 + 0x24));
        pdVar10 = (double *)0x0;
      }
      else {
        pdVar10 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uStack_1ac = *(uint *)((longlong)pdVar10 + 0xc);
    uStack_1b0 = *(undefined4 *)(pdVar10 + 1);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
      local_1b8 = *pdVar10;
    }
    else {
      FUN_1400419b0(&local_1b8,pdVar10);
    }
    uVar6 = uStack_1ac;
    uVar7 = FUN_140e4a740(&local_1f8);
    puVar12 = (undefined8 *)FUN_140e48e40(puVar11,uVar7);
    FUN_140e609c0(*(undefined8 *)*puVar11);
    if (&local_1b8 != puVar12) {
      local_188 = (undefined4)local_1b8;
      uStack_184 = local_1b8._4_4_;
      uStack_180 = uStack_1b0;
      uStack_17c = uStack_1ac;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar12);
      }
      FUN_140041b80(puVar12,&local_188);
    }
    if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140e60910(2);
    local_168 = 0xd;
    plVar13 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a10a28);
    puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a10a28);
    FUN_140e609c0(param_1);
    local_fc = local_1ec;
    local_100 = local_1f0;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
      local_108 = local_1f8;
    }
    else {
      FUN_1400419b0(&local_108,&local_1f8);
    }
    local_bc = 7;
    local_c8[0] = 1;
    FUN_1400462a0(&local_108,local_c8);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    iVar5 = FUN_140e4a740(&local_108);
    if (((*(uint *)((longlong)plVar13 + 0xc) & 0xffffff) == 2) && (lVar2 = *plVar13, lVar2 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar2 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar2 + 0x24));
        plVar13 = (longlong *)0x0;
      }
      else {
        plVar13 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar2 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uStack_10c = *(uint *)((longlong)plVar13 + 0xc);
    uStack_110 = (undefined4)plVar13[1];
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
      local_118 = *plVar13;
    }
    else {
      FUN_1400419b0(&local_118,plVar13);
    }
    uVar6 = uStack_10c;
    uVar7 = FUN_140e4a740(&local_1f8);
    puVar12 = (undefined8 *)FUN_140e48e40(puVar11,uVar7);
    FUN_140e609c0(*(undefined8 *)*puVar11);
    if (&local_118 != puVar12) {
      local_188 = (undefined4)local_118;
      uStack_184 = local_118._4_4_;
      uStack_180 = uStack_110;
      uStack_17c = uStack_10c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar12);
      }
      FUN_140041b80(puVar12,&local_188);
    }
    if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140e60910(2);
    local_168 = 0xe;
    plVar13 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fba8);
    puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fba8);
    FUN_140e609c0(param_1);
    local_1dc = local_1ec;
    local_1e0 = local_1f0;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
      local_1e8 = local_1f8;
    }
    else {
      FUN_1400419b0(&local_1e8,&local_1f8);
    }
    uStack_18c = 7;
    local_198 = 1;
    FUN_1400462a0(&local_1e8,&local_198);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    iVar5 = FUN_140e4a740(&local_1e8);
    if (((*(uint *)((longlong)plVar13 + 0xc) & 0xffffff) == 2) && (lVar2 = *plVar13, lVar2 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar2 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar2 + 0x24));
        plVar13 = (longlong *)0x0;
      }
      else {
        plVar13 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar2 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uStack_ec = *(uint *)((longlong)plVar13 + 0xc);
    uStack_f0 = (undefined4)plVar13[1];
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
      local_f8 = *plVar13;
    }
    else {
      FUN_1400419b0(&local_f8,plVar13);
    }
    uVar6 = uStack_ec;
    uVar7 = FUN_140e4a740(&local_1f8);
    puVar12 = (undefined8 *)FUN_140e48e40(puVar11,uVar7);
    FUN_140e609c0(*(undefined8 *)*puVar11);
    if (&local_f8 != puVar12) {
      local_188 = (undefined4)local_f8;
      uStack_184 = local_f8._4_4_;
      uStack_180 = uStack_f0;
      uStack_17c = uStack_ec;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar12);
      }
      FUN_140041b80(puVar12,&local_188);
    }
    if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(2);
  } while( true );
}

