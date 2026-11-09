// gml_Script_get_blood_col @ 0x140234590

undefined8 *
gml_Script_get_blood_col
          (undefined1 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 **ppuVar11;
  double *pdVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  byte bVar15;
  undefined4 uVar16;
  longlong *plVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  code *pcVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  ulonglong in_stack_fffffffffffffdd0;
  undefined8 **ppuVar27;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined1 *local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 uStack_14c;
  undefined1 *local_148;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_d8;
  undefined4 local_cc;
  uint local_a8 [2];
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  
  local_1c0 = "gml_Script_SprayBlood";
  local_1c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c8;
  local_1b8 = 2;
  FUN_140041df0(local_a8,param_4,7,param_5);
  pcVar24 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_118,0x10,7,FUN_1400424d0,FUN_140041b30);
  uStack_17c = 0xffffff;
  local_188 = 0;
  puVar8 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1dc60);
  local_15c = 0xffffff;
  local_168 = 0;
  uStack_1dc = 0xffffff;
  local_1e8 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_11c = 0;
  local_128 = 0;
  local_21c = 0;
  local_228 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1b8 = 2;
  puVar13 = &DAT_1419df7b0;
  uVar14 = (ulonglong)local_a8[0];
  if ((int)local_a8[0] < 5) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_a0[4];
  }
  iVar7 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar7 == 0) {
    local_1b8 = 2;
    if (4 < (int)local_a8[0]) {
      puVar13 = (undefined8 *)local_a0[4];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar13);
    }
    *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
    *puVar13 = &DAT_bff0000000000000;
  }
  puVar13 = &DAT_1419df7b0;
  if ((int)local_a8[0] < 6) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_a0[5];
  }
  iVar7 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar7 == 0) {
    if (5 < (int)local_a8[0]) {
      puVar13 = (undefined8 *)local_a0[5];
    }
    pcVar24 = (code *)&DAT_141dc6320;
    puVar9 = (undefined8 *)FUN_140e8da20(&local_128,param_1,2,&DAT_141dc6320,&DAT_141dc6320);
    if (puVar9 != puVar13) {
      local_1d8 = *puVar9;
      uStack_1d0 = *(undefined4 *)(puVar9 + 1);
      uStack_1cc = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar13);
      }
      FUN_140041b80(puVar13,&local_1d8);
    }
  }
  puVar13 = &DAT_1419df7b0;
  if ((int)local_a8[0] < 7) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_a0[6];
  }
  iVar7 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar7 == 0) {
    local_20c = 6;
    in_stack_fffffffffffffdd0 = in_stack_fffffffffffffdd0 & 0xffffffffffffff00;
    pcVar24 = (code *)((ulonglong)pcVar24 & 0xffffffffffffff00);
    local_218 = param_1;
    FUN_140e87440(&local_218,DAT_141a0a828,0x80000000,&local_188,pcVar24,in_stack_fffffffffffffdd0);
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    if (((int)local_a8[0] < 7) || (puVar13 = (undefined8 *)local_a0[6], &local_188 != puVar13)) {
      local_1d8 = local_188;
      uStack_1d0 = uStack_180;
      uStack_1cc = uStack_17c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar13);
      }
      FUN_140041b80(puVar13,&local_1d8);
    }
  }
  local_1b8 = 4;
  if ((int)local_a8[0] < 5) {
    puVar13 = &DAT_1419df7b0;
  }
  else {
    puVar13 = (undefined8 *)local_a0[4];
  }
  local_20c = 0;
  local_218 = &DAT_bff0000000000000;
  iVar7 = FUN_140e851f0(puVar13,&local_218,DAT_141955260,0);
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if (iVar7 != 0) goto LAB_140234a98;
  local_1b8 = 5;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  local_20c = 0xf;
  local_218 = (undefined1 *)0x1000000000000ee;
  FUN_140e87440(&local_218,DAT_141a1da30,0x80000000,&local_168,
                (ulonglong)pcVar24 & 0xffffffffffffff00,
                in_stack_fffffffffffffdd0 & 0xffffffffffffff00);
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_20c = 0xf;
  local_218 = (undefined1 *)0x1000000000000ee;
  uVar10 = FUN_140069500(&local_218);
  pcVar24 = (code *)&local_168;
  uVar10 = FUN_140e63610(uVar10,param_2,&local_228,0,pcVar24,0);
  uStack_1ec = *(undefined4 *)((longlong)puVar8 + 0xc);
  uStack_1f0 = *(undefined4 *)(puVar8 + 1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
    local_1f8 = *puVar8;
  }
  else {
    FUN_1400419b0(&local_1f8,puVar8);
  }
  FUN_1400460e0(&local_1f8,uVar10);
  if ((int)local_a8[0] < 5) {
    puVar13 = &DAT_1419df7b0;
LAB_140234a21:
    local_1d8 = local_1f8;
    uStack_1d0 = uStack_1f0;
    uStack_1cc = uStack_1ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar13);
    }
    FUN_140041b80(puVar13,&local_1d8);
  }
  else {
    puVar13 = (undefined8 *)local_a0[4];
    if (&local_1f8 != puVar13) goto LAB_140234a21;
  }
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
LAB_140234a98:
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  uVar16 = 0;
  bVar15 = 0;
  uStack_1dc = 0;
  local_1e8 = 0xc010000000000000;
  local_1b8 = 9;
  if ((int)local_a8[0] < 5) {
    pdVar12 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar12 = (double *)local_a0[4];
  }
  if ((*(uint *)((longlong)pdVar12 + 0xc) & 0xffffff) == 0) {
    dVar23 = *pdVar12;
  }
  else {
    dVar23 = (double)FUN_140e4b060();
  }
  uVar19 = (ulonglong)dVar23;
  uVar18 = (uint)uVar19;
  do {
    if ((int)uVar18 < 1) {
      local_1b8 = 0x11;
      if (&local_1e8 != param_3) {
        local_1e8._4_4_ = (undefined4)((ulonglong)local_1e8 >> 0x20);
        local_208 = (undefined4)local_1e8;
        uStack_204 = local_1e8._4_4_;
        uStack_200 = uStack_1e0;
        uStack_1fc = uStack_1dc;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_208);
      }
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b0);
      }
      if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a0);
      }
      if ((1 << (bVar15 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      _eh_vector_destructor_iterator_(&local_118,0x10,7,FUN_140041b30);
      if (0 < (int)local_a8[0]) {
        puVar13 = local_a0;
        do {
          puVar8 = (undefined8 *)*puVar13;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar8);
          }
          *puVar8 = 0;
          *(undefined4 *)(puVar8 + 1) = 0;
          *(undefined4 *)((longlong)puVar8 + 0xc) = 5;
          puVar13 = puVar13 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      FUN_140e4cd60(local_a0);
      DAT_141dc7a50 = (undefined8 *)local_1c8;
      return param_3;
    }
    uVar21 = (undefined4)((ulonglong)pcVar24 >> 0x20);
    uVar18 = (int)uVar19 - 1;
    uVar19 = (ulonglong)uVar18;
    local_1b8 = 0xb;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    if ((int)local_a8[0] < 4) {
      puVar13 = &DAT_1419df7b0;
LAB_140234b43:
      local_208 = *(undefined4 *)puVar13;
      uStack_204 = *(undefined4 *)((longlong)puVar13 + 4);
      uStack_200 = *(undefined4 *)(puVar13 + 1);
      uStack_1fc = *(undefined4 *)((longlong)puVar13 + 0xc);
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_208);
    }
    else {
      puVar13 = (undefined8 *)local_a0[3];
      if (puVar13 != &local_118) goto LAB_140234b43;
    }
    local_98 = &local_118;
    uVar25 = CONCAT44(uVar21,DAT_1419fdb88);
    uVar10 = FUN_140e634e0(param_1,param_2,&local_228,1,uVar25,&local_98);
    uVar21 = (undefined4)((ulonglong)uVar25 >> 0x20);
    cVar6 = FUN_140e491e0(uVar10);
    if (cVar6 == '\0') {
      if ((int)local_a8[0] < 4) {
        puVar13 = &DAT_1419df7b0;
      }
      else {
        puVar13 = (undefined8 *)local_a0[3];
      }
      uStack_1ec = *(undefined4 *)((longlong)puVar13 + 0xc);
      uStack_1f0 = *(undefined4 *)(puVar13 + 1);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_1f8 = *puVar13;
      }
      else {
        FUN_1400419b0(&local_1f8);
      }
      puVar13 = &local_1f8;
      bVar2 = true;
    }
    else {
      if ((int)local_a8[0] < 4) {
        plVar17 = &DAT_1419df7b0;
      }
      else {
        plVar17 = (longlong *)local_a0[3];
      }
      if (((*(uint *)((longlong)plVar17 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar17, lVar1 != 0))
      {
        if (*(int *)(lVar1 + 0x24) < 2) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
          plVar17 = (longlong *)0x0;
        }
        else {
          plVar17 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if ((*(uint *)((longlong)plVar17 + 0xc) & 0xffffff) == 0) {
        uVar22 = (undefined4)*plVar17;
      }
      else {
        uVar22 = FUN_140e4b060(plVar17);
      }
      if ((int)local_a8[0] < 4) {
        plVar17 = &DAT_1419df7b0;
      }
      else {
        plVar17 = (longlong *)local_a0[3];
      }
      if (((*(uint *)((longlong)plVar17 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar17, lVar1 != 0))
      {
        if (*(int *)(lVar1 + 0x24) < 1) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
          plVar17 = (longlong *)0x0;
        }
        else {
          plVar17 = *(longlong **)(lVar1 + 8);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if ((*(uint *)((longlong)plVar17 + 0xc) & 0xffffff) == 0) {
        uVar20 = (undefined4)*plVar17;
      }
      else {
        uVar20 = FUN_140e4b060(plVar17);
      }
      local_158 = FUN_140e794b0(uVar20,uVar22);
      uStack_14c = 0;
      bVar3 = true;
      puVar13 = &local_158;
    }
    local_208 = *(undefined4 *)puVar13;
    uStack_204 = *(undefined4 *)((longlong)puVar13 + 4);
    uStack_200 = *(undefined4 *)(puVar13 + 1);
    uStack_1fc = *(undefined4 *)((longlong)puVar13 + 0xc);
    if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a0);
    }
    FUN_140041b80(&local_1a0,&local_208);
    if ((bVar2) && (bVar2 = false, (1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_1f8);
    }
    if ((bVar3) && (bVar3 = false, (1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_158);
    }
    local_1b8 = 0xc;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    if ((int)local_a8[0] < 3) {
      puVar13 = &DAT_1419df7b0;
LAB_140234dff:
      local_208 = *(undefined4 *)puVar13;
      uStack_204 = *(undefined4 *)((longlong)puVar13 + 4);
      uStack_200 = *(undefined4 *)(puVar13 + 1);
      uStack_1fc = *(undefined4 *)((longlong)puVar13 + 0xc);
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_208);
    }
    else {
      puVar13 = (undefined8 *)local_a0[2];
      if (puVar13 != &local_118) goto LAB_140234dff;
    }
    local_98 = &local_118;
    ppuVar27 = &local_98;
    uVar26 = CONCAT44(uVar21,DAT_1419fdb88);
    uVar10 = FUN_140e634e0(param_1,param_2,&local_228,1,uVar26,ppuVar27);
    cVar6 = FUN_140e491e0(uVar10);
    if (cVar6 == '\0') {
      if ((int)local_a8[0] < 3) {
        puVar13 = &DAT_1419df7b0;
      }
      else {
        puVar13 = (undefined8 *)local_a0[2];
      }
      local_20c = *(undefined4 *)((longlong)puVar13 + 0xc);
      local_210 = *(undefined4 *)(puVar13 + 1);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_218 = (undefined1 *)*puVar13;
      }
      else {
        FUN_1400419b0(&local_218);
      }
      ppuVar11 = &local_218;
      bVar4 = true;
    }
    else {
      if ((int)local_a8[0] < 3) {
        plVar17 = &DAT_1419df7b0;
      }
      else {
        plVar17 = (longlong *)local_a0[2];
      }
      if (((*(uint *)((longlong)plVar17 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar17, lVar1 != 0))
      {
        if (*(int *)(lVar1 + 0x24) < 2) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
          plVar17 = (longlong *)0x0;
        }
        else {
          plVar17 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if ((*(uint *)((longlong)plVar17 + 0xc) & 0xffffff) == 0) {
        uVar21 = (undefined4)*plVar17;
      }
      else {
        uVar21 = FUN_140e4b060(plVar17);
      }
      if ((int)local_a8[0] < 3) {
        plVar17 = &DAT_1419df7b0;
      }
      else {
        plVar17 = (longlong *)local_a0[2];
      }
      if (((*(uint *)((longlong)plVar17 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar17, lVar1 != 0))
      {
        if (*(int *)(lVar1 + 0x24) < 1) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
          plVar17 = (longlong *)0x0;
        }
        else {
          plVar17 = *(longlong **)(lVar1 + 8);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if ((*(uint *)((longlong)plVar17 + 0xc) & 0xffffff) == 0) {
        uVar22 = (undefined4)*plVar17;
      }
      else {
        uVar22 = FUN_140e4b060(plVar17);
      }
      local_148 = (undefined1 *)FUN_140e794b0(uVar22,uVar21);
      uStack_13c = 0;
      ppuVar11 = &local_148;
      bVar5 = true;
    }
    local_208 = *(undefined4 *)ppuVar11;
    uStack_204 = *(undefined4 *)((longlong)ppuVar11 + 4);
    uStack_200 = *(undefined4 *)(ppuVar11 + 1);
    uStack_1fc = *(undefined4 *)((longlong)ppuVar11 + 0xc);
    if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b0);
    }
    FUN_140041b80(&local_1b0,&local_208);
    if ((bVar4) && (bVar4 = false, (1 << ((byte)local_20c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_218);
    }
    if ((bVar5) && (bVar5 = false, (1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_148);
    }
    local_1b8 = 0xd;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    local_12c = 0xf;
    local_138 = 0x100000000000011;
    FUN_140e87440(&local_138,DAT_141a1db80,0x80000000,&local_178,uVar26 & 0xffffffffffffff00,
                  (ulonglong)ppuVar27 & 0xffffffffffffff00);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if ((int)local_a8[0] < 1) {
      puVar13 = &DAT_1419df7b0;
LAB_1402350fd:
      local_208 = *(undefined4 *)puVar13;
      uStack_204 = *(undefined4 *)((longlong)puVar13 + 4);
      uStack_200 = *(undefined4 *)(puVar13 + 1);
      uStack_1fc = *(undefined4 *)((longlong)puVar13 + 0xc);
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_208);
    }
    else {
      puVar13 = (undefined8 *)*local_a0;
      if (puVar13 != &local_118) goto LAB_1402350fd;
    }
    local_98 = &local_118;
    if ((int)local_a8[0] < 2) {
      puVar13 = &DAT_1419df7b0;
LAB_140235154:
      local_208 = *(undefined4 *)puVar13;
      uStack_204 = *(undefined4 *)((longlong)puVar13 + 4);
      uStack_200 = *(undefined4 *)(puVar13 + 1);
      uStack_1fc = *(undefined4 *)((longlong)puVar13 + 0xc);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_208);
    }
    else {
      puVar13 = (undefined8 *)local_a0[1];
      if (puVar13 != &local_108) goto LAB_140235154;
    }
    local_90 = &local_108;
    local_88 = &local_1a0;
    local_80 = &local_1b0;
    if ((int)local_a8[0] < 7) {
      puVar13 = &DAT_1419df7b0;
LAB_1402351c4:
      local_208 = *(undefined4 *)puVar13;
      uStack_204 = *(undefined4 *)((longlong)puVar13 + 4);
      uStack_200 = *(undefined4 *)(puVar13 + 1);
      uStack_1fc = *(undefined4 *)((longlong)puVar13 + 0xc);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_208);
    }
    else {
      puVar13 = (undefined8 *)local_a0[6];
      if (puVar13 != &local_d8) goto LAB_1402351c4;
    }
    local_78 = &local_d8;
    uStack_1cc = 0xf;
    local_1d8 = 0x100000000000011;
    uVar10 = FUN_140069500(&local_1d8);
    pcVar24 = (code *)&local_178;
    puVar13 = (undefined8 *)FUN_140e63610(uVar10,param_2,&local_228,5,pcVar24,&local_98);
    if (puVar13 != &local_1e8) {
      local_208 = *(undefined4 *)puVar13;
      uStack_204 = *(undefined4 *)((longlong)puVar13 + 4);
      uStack_200 = *(undefined4 *)(puVar13 + 1);
      uStack_1fc = *(undefined4 *)((longlong)puVar13 + 0xc);
      if ((1 << ((byte)uVar16 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_208);
      uVar16 = uStack_1dc;
    }
    bVar15 = (byte)uVar16;
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
  } while( true );
}

