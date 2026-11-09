// gml_Script___InputClassVerbState @ 0x140052340

undefined8 *
gml_Script___InputClassVerbState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  undefined4 uVar19;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  double local_138;
  uint local_12c;
  longlong local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  longlong local_e8;
  undefined4 local_dc;
  longlong local_d8;
  undefined4 local_cc;
  longlong local_c8;
  undefined4 local_bc;
  longlong local_98;
  byte local_8c;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78 [3];
  longlong *local_60;
  uint local_58 [2];
  undefined8 *local_50;
  
  iVar15 = 0;
  local_100 = "gml_Script___InputClassVerbDefinition";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 9;
  FUN_140041df0(local_58,param_4,5,param_5);
  uVar19 = 1;
  _eh_vector_constructor_iterator_(&local_e8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_15c = 0;
  local_168 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc250) &&
     (_Init_thread_header(&DAT_141ddc250), DAT_141ddc250 == -1)) {
    DAT_141ddc258 = FUN_140e63aa0(DAT_1419fdc88);
    _Init_thread_footer(&DAT_141ddc250);
  }
  FUN_140e643a0(param_1,DAT_141ddc258);
  local_f8 = 0xc;
  plVar18 = &DAT_1419df7b0;
  uVar16 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 3) {
    plVar10 = &DAT_1419df7b0;
LAB_14005249c:
    local_158 = *plVar10;
    uStack_150 = (undefined4)plVar10[1];
    uStack_14c = *(undefined4 *)((longlong)plVar10 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_158);
  }
  else {
    plVar10 = (longlong *)local_50[2];
    if (plVar10 != &local_98) goto LAB_14005249c;
  }
  uVar12 = CONCAT44(uVar19,DAT_1419fdb88);
  local_60 = &local_98;
  uVar9 = FUN_140e634e0(param_1,param_2,&local_168,1,uVar12,&local_60);
  cVar5 = FUN_140e491e0(uVar9);
  uVar19 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (cVar5 == '\0') {
    local_f8 = 0x19;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    if ((int)local_58[0] < 3) {
      plVar10 = &DAT_1419df7b0;
LAB_140052919:
      local_158 = *plVar10;
      uStack_150 = (undefined4)plVar10[1];
      uStack_14c = *(undefined4 *)((longlong)plVar10 + 0xc);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_158);
    }
    else {
      plVar10 = (longlong *)local_50[2];
      if (plVar10 != &local_e8) goto LAB_140052919;
    }
    local_88 = &local_e8;
    uVar9 = CONCAT44(uVar19,DAT_1419fdbf8);
    uVar12 = FUN_140e634e0(param_1,param_2,&local_168,1,uVar9,&local_88);
    uVar19 = (undefined4)((ulonglong)uVar9 >> 0x20);
    cVar5 = FUN_140e491e0(uVar12);
    if (cVar5 != '\0') {
      local_f8 = 0x1b;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = 0;
      local_140 = 0;
      local_13c = 5;
      if ((int)local_58[0] < 3) {
        plVar10 = &DAT_1419df7b0;
LAB_1400529d6:
        local_158 = *plVar10;
        uStack_150 = (undefined4)plVar10[1];
        uStack_14c = *(undefined4 *)((longlong)plVar10 + 0xc);
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        FUN_140041b80(&local_d8,&local_158);
      }
      else {
        plVar10 = (longlong *)local_50[2];
        if (plVar10 != &local_d8) goto LAB_1400529d6;
      }
      local_80 = &local_d8;
      if ((int)local_58[0] < 3) {
        plVar10 = &DAT_1419df7b0;
      }
      else {
        plVar10 = (longlong *)local_50[2];
      }
      uVar12 = CONCAT44(uVar19,DAT_1419fdc48);
      plVar11 = (longlong *)FUN_140e634e0(param_1,param_2,&local_148,1,uVar12,&local_80);
      uVar19 = (undefined4)((ulonglong)uVar12 >> 0x20);
      if (plVar11 != plVar10) {
        local_158 = *plVar11;
        uStack_150 = (undefined4)plVar11[1];
        uStack_14c = *(undefined4 *)((longlong)plVar11 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)plVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(plVar10);
        }
        FUN_140041b80(plVar10,&local_158);
      }
    }
  }
  else {
    local_f8 = 0xe;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    uVar19 = (undefined4)((ulonglong)uVar12 >> 0x20);
    local_12c = 0;
    local_138 = 0.0;
    if ((int)local_58[0] < 3) {
      plVar10 = &DAT_1419df7b0;
    }
    else {
      plVar10 = (longlong *)local_50[2];
    }
    if ((*(int *)((longlong)plVar10 + 0xc) == 2) && (*plVar10 != 0)) {
      iVar15 = *(int *)(*plVar10 + 0x24);
    }
    while (0 < iVar15) {
      uVar19 = (undefined4)((ulonglong)uVar12 >> 0x20);
      iVar15 = iVar15 + -1;
      local_f8 = 0x11;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      iVar6 = FUN_140e4a740(&local_138);
      if ((int)local_58[0] < 3) {
        plVar10 = &DAT_1419df7b0;
      }
      else {
        plVar10 = (longlong *)local_50[2];
      }
      if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0))
      {
        if ((iVar6 < 0) || (*(int *)(lVar1 + 0x24) <= iVar6)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar6,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar10 != &local_e8) {
        local_158 = *plVar10;
        uStack_150 = (undefined4)plVar10[1];
        uStack_14c = *(undefined4 *)((longlong)plVar10 + 0xc);
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        FUN_140041b80(&local_e8,&local_158);
      }
      local_88 = &local_e8;
      uVar12 = CONCAT44(uVar19,DAT_1419fdbf8);
      uVar9 = FUN_140e634e0(param_1,param_2,&local_168,1,uVar12,&local_88);
      cVar5 = FUN_140e491e0(uVar9);
      uVar19 = (undefined4)((ulonglong)uVar12 >> 0x20);
      if (cVar5 != '\0') {
        local_f8 = 0x13;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        iVar6 = FUN_140e4a740(&local_138);
        if ((int)local_58[0] < 3) {
          plVar10 = &DAT_1419df7b0;
        }
        else {
          plVar10 = (longlong *)local_50[2];
        }
        if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)
           ) {
          if ((iVar6 < 0) || (*(int *)(lVar1 + 0x24) <= iVar6)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar6,
                          *(undefined4 *)(lVar1 + 0x24));
            plVar10 = (longlong *)0x0;
          }
          else {
            plVar10 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar1 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        if (plVar10 != &local_d8) {
          local_158 = *plVar10;
          uStack_150 = (undefined4)plVar10[1];
          uStack_14c = *(undefined4 *)((longlong)plVar10 + 0xc);
          if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_d8);
          }
          FUN_140041b80(&local_d8,&local_158);
        }
        local_80 = &local_d8;
        uVar7 = FUN_140e4a740(&local_138);
        if ((int)local_58[0] < 3) {
          puVar17 = &DAT_1419df7b0;
        }
        else {
          puVar17 = (undefined8 *)local_50[2];
        }
        plVar10 = (longlong *)FUN_140e48e40(puVar17,uVar7);
        FUN_140e609c0(*(undefined8 *)*puVar17);
        uVar12 = CONCAT44(uVar19,DAT_1419fdc48);
        plVar11 = (longlong *)FUN_140e634e0(param_1,param_2,&local_148,1,uVar12,&local_80);
        if (plVar11 != plVar10) {
          local_158 = *plVar11;
          uStack_150 = (undefined4)plVar11[1];
          uStack_14c = *(undefined4 *)((longlong)plVar11 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)plVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(plVar10);
          }
          FUN_140041b80(plVar10,&local_158);
        }
        FUN_140e60910(1);
      }
      local_f8 = 0x16;
      uVar8 = local_12c & 0xffffff;
      if (uVar8 == 0) {
LAB_14005286c:
        local_138 = local_138 + 1.0;
      }
      else {
        if (uVar8 == 1) {
          local_138 = (double)FUN_140e4b060(&local_138);
          local_12c = 0;
          goto LAB_14005286c;
        }
        if (uVar8 == 7) {
          local_138 = (double)CONCAT44(local_138._4_4_,local_138._0_4_ + 1);
        }
        else if (uVar8 == 10) {
          local_138 = (double)((longlong)local_138 + 1);
        }
        else {
          if (uVar8 == 0xd) {
            local_12c = 0;
            goto LAB_14005286c;
          }
          FUN_140042910(&DAT_14172c3d8,&local_138,&local_138);
        }
      }
      uVar19 = (undefined4)((ulonglong)uVar12 >> 0x20);
    }
  }
  local_f8 = 0x1e;
  plVar10 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdc78);
  FUN_140e609c0(param_1);
  if ((int)local_58[0] < 1) {
    plVar11 = &DAT_1419df7b0;
  }
  else {
    plVar11 = (longlong *)*local_50;
  }
  if (plVar11 != plVar10) {
    local_158 = *plVar11;
    uStack_150 = (undefined4)plVar11[1];
    uStack_14c = *(undefined4 *)((longlong)plVar11 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar10);
    }
    FUN_140041b80(plVar10,&local_158);
  }
  FUN_140e60910(1);
  local_f8 = 0x1f;
  plVar10 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdcd8);
  FUN_140e609c0(param_1);
  if ((int)local_58[0] < 2) {
    plVar11 = &DAT_1419df7b0;
  }
  else {
    plVar11 = (longlong *)local_50[1];
  }
  if (plVar11 != plVar10) {
    local_158 = *plVar11;
    uStack_150 = (undefined4)plVar11[1];
    uStack_14c = *(undefined4 *)((longlong)plVar11 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar10);
    }
    FUN_140041b80(plVar10,&local_158);
  }
  FUN_140e60910(1);
  local_f8 = 0x20;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  plVar10 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd538);
  if ((int)local_58[0] < 3) {
    plVar11 = &DAT_1419df7b0;
LAB_140052b8f:
    local_158 = *plVar11;
    uStack_150 = (undefined4)plVar11[1];
    uStack_14c = *(undefined4 *)((longlong)plVar11 + 0xc);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_158);
  }
  else {
    plVar11 = (longlong *)local_50[2];
    if (plVar11 != &local_e8) goto LAB_140052b8f;
  }
  local_88 = &local_e8;
  uVar9 = CONCAT44(uVar19,DAT_1419fdb88);
  uVar12 = FUN_140e634e0(param_1,param_2,&local_168,1,uVar9,&local_88);
  uVar19 = (undefined4)((ulonglong)uVar9 >> 0x20);
  cVar5 = FUN_140e491e0(uVar12);
  if (cVar5 == '\0') {
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    if ((int)local_58[0] < 3) {
      plVar11 = &DAT_1419df7b0;
LAB_140052c91:
      local_128 = *plVar11;
      uStack_120 = (undefined4)plVar11[1];
      uStack_11c = *(undefined4 *)((longlong)plVar11 + 0xc);
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_128);
    }
    else {
      plVar11 = (longlong *)local_50[2];
      if (plVar11 != &local_c8) goto LAB_140052c91;
    }
    local_78[0] = &local_c8;
    uVar12 = CONCAT44(uVar19,DAT_1419fdca8);
    plVar11 = (longlong *)FUN_140e634e0(param_1,param_2,&local_148,1,uVar12,local_78);
    uVar19 = (undefined4)((ulonglong)uVar12 >> 0x20);
    uStack_11c = *(undefined4 *)((longlong)plVar11 + 0xc);
    uStack_120 = (undefined4)plVar11[1];
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
      local_128 = *plVar11;
    }
    else {
      FUN_1400419b0(&local_128,plVar11);
    }
    plVar11 = &local_128;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    if ((int)local_58[0] < 3) {
      plVar11 = &DAT_1419df7b0;
    }
    else {
      plVar11 = (longlong *)local_50[2];
    }
    uStack_14c = *(undefined4 *)((longlong)plVar11 + 0xc);
    uStack_150 = (undefined4)plVar11[1];
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
      local_158 = *plVar11;
    }
    else {
      FUN_1400419b0(&local_158);
    }
    plVar11 = &local_158;
    bVar4 = true;
    bVar3 = false;
  }
  FUN_140e609c0(param_1);
  if (plVar11 != plVar10) {
    local_118 = (undefined4)*plVar11;
    uStack_114 = *(undefined4 *)((longlong)plVar11 + 4);
    uStack_110 = (undefined4)plVar11[1];
    uStack_10c = *(undefined4 *)((longlong)plVar11 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar10);
    }
    FUN_140041b80(plVar10,&local_118);
  }
  if ((bVar3) && ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_128);
  }
  if ((bVar4) && ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_158);
  }
  FUN_140e60910(1);
  local_f8 = 0x21;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  plVar10 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd868);
  if ((int)local_58[0] < 4) {
    plVar11 = &DAT_1419df7b0;
LAB_140052e31:
    local_118 = (undefined4)*plVar11;
    uStack_114 = *(undefined4 *)((longlong)plVar11 + 4);
    uStack_110 = (undefined4)plVar11[1];
    uStack_10c = *(undefined4 *)((longlong)plVar11 + 0xc);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_118);
  }
  else {
    plVar11 = (longlong *)local_50[3];
    if (plVar11 != &local_e8) goto LAB_140052e31;
  }
  local_88 = &local_e8;
  uVar9 = CONCAT44(uVar19,DAT_1419fdb88);
  uVar12 = FUN_140e634e0(param_1,param_2,&local_168,1,uVar9,&local_88);
  uVar19 = (undefined4)((ulonglong)uVar9 >> 0x20);
  cVar5 = FUN_140e491e0(uVar12);
  if (cVar5 != '\0') {
    if ((int)local_58[0] < 4) {
      plVar11 = &DAT_1419df7b0;
    }
    else {
      plVar11 = (longlong *)local_50[3];
    }
    uStack_11c = *(undefined4 *)((longlong)plVar11 + 0xc);
    uStack_120 = (undefined4)plVar11[1];
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
      local_128 = *plVar11;
    }
    else {
      FUN_1400419b0(&local_128);
    }
    plVar11 = &local_128;
    bVar4 = true;
    bVar3 = false;
    goto LAB_140052fd4;
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((int)local_58[0] < 4) {
    plVar11 = &DAT_1419df7b0;
LAB_140052f36:
    local_118 = (undefined4)*plVar11;
    uStack_114 = *(undefined4 *)((longlong)plVar11 + 4);
    uStack_110 = (undefined4)plVar11[1];
    uStack_10c = *(undefined4 *)((longlong)plVar11 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_118);
  }
  else {
    plVar11 = (longlong *)local_50[3];
    if (plVar11 != &local_c8) goto LAB_140052f36;
  }
  local_78[0] = &local_c8;
  uVar12 = CONCAT44(uVar19,DAT_1419fdca8);
  plVar11 = (longlong *)FUN_140e634e0(param_1,param_2,&local_148,1,uVar12,local_78);
  uVar19 = (undefined4)((ulonglong)uVar12 >> 0x20);
  uStack_14c = *(undefined4 *)((longlong)plVar11 + 0xc);
  uStack_150 = (undefined4)plVar11[1];
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
    local_158 = *plVar11;
  }
  else {
    FUN_1400419b0(&local_158,plVar11);
  }
  plVar11 = &local_158;
  bVar4 = false;
  bVar3 = true;
LAB_140052fd4:
  FUN_140e609c0(param_1);
  if (plVar11 != plVar10) {
    local_118 = (undefined4)*plVar11;
    uStack_114 = *(undefined4 *)((longlong)plVar11 + 4);
    uStack_110 = (undefined4)plVar11[1];
    uStack_10c = *(undefined4 *)((longlong)plVar11 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar10);
    }
    FUN_140041b80(plVar10,&local_118);
  }
  if ((bVar3) && ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_158);
  }
  if ((bVar4) && ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_128);
  }
  FUN_140e60910(1);
  local_f8 = 0x22;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  puVar13 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd098);
  if (((int)local_58[0] < 5) || (plVar18 = (longlong *)local_50[4], plVar18 != &local_e8)) {
    local_118 = (undefined4)*plVar18;
    uStack_114 = *(undefined4 *)((longlong)plVar18 + 4);
    uStack_110 = (undefined4)plVar18[1];
    uStack_10c = *(undefined4 *)((longlong)plVar18 + 0xc);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_118);
  }
  local_88 = &local_e8;
  FUN_140e609c0(param_1);
  puVar14 = (undefined4 *)
            FUN_140e634e0(param_1,param_2,&local_168,1,CONCAT44(uVar19,DAT_1419fd0c8),&local_88);
  if (puVar14 != puVar13) {
    local_118 = *puVar14;
    uStack_114 = puVar14[1];
    uStack_110 = puVar14[2];
    uStack_10c = puVar14[3];
    if ((1 << ((byte)puVar13[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar13);
    }
    FUN_140041b80(puVar13,&local_118);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,6,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar17 = local_50;
    do {
      puVar2 = (undefined8 *)*puVar17;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar17 = puVar17 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

