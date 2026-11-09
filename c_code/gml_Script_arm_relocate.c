// gml_Script_arm_relocate @ 0x14022c3b0

undefined8 *
gml_Script_arm_relocate
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  double *pdVar6;
  double *pdVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  double dVar11;
  code *pcVar12;
  ulonglong uVar13;
  longlong *local_198;
  undefined4 local_190;
  uint local_18c;
  longlong *local_188;
  undefined4 local_180;
  uint local_17c;
  longlong *local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  longlong *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  double local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  double local_f8;
  double dStack_f0;
  undefined4 local_e8 [3];
  undefined4 local_dc;
  undefined1 local_d8 [16];
  double local_c8 [2];
  double local_b8 [2];
  double local_a8;
  undefined4 local_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong **local_78;
  double *local_70;
  double *local_68;
  
  local_110 = "gml_Script_arm_reconnect";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 6;
  pcVar12 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_d8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_11c = 0xffffff;
  local_128 = 0.0;
  uStack_7c = 0xffffff;
  local_88 = (longlong *)0x0;
  uStack_12c = 0xffffff;
  local_138 = 0.0;
  uStack_8c = 0xffffff;
  local_98 = (longlong *)0x0;
  uStack_13c = 0xffffff;
  local_148 = 0.0;
  local_18c = 0xffffff;
  local_198 = (longlong *)0x0;
  local_14c = 0;
  local_158 = 0;
  local_9c = 0;
  local_a8 = (double)param_4;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 8;
  pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a10be8);
  if (pdVar6 != &local_128) {
    local_168 = (longlong *)*pdVar6;
    uStack_160 = pdVar6[1];
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_168);
  }
  local_17c = 6;
  uVar13 = (ulonglong)pcVar12 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_88,uVar13,0);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_160 = (double)CONCAT44(uStack_7c,uStack_80);
  local_168 = local_88;
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_168);
  local_17c = 6;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_98,uVar13 & 0xffffffffffffff00,0);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_160 = (double)CONCAT44(uStack_8c,uStack_90);
  local_168 = local_98;
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_168);
  local_108 = 0xc;
  local_17c = 0;
  local_188 = (longlong *)0x0;
  iVar4 = FUN_140e851f0(&local_a8,&local_188,DAT_141955260,1);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if (iVar4 < 1) goto LAB_14022c7a6;
  local_108 = 0xd;
  pdVar6 = (double *)&DAT_1419df7b0;
  if (param_4 < 1) {
    pdVar7 = (double *)&DAT_1419df7b0;
LAB_14022c680:
    local_168 = (longlong *)*pdVar7;
    uStack_160 = pdVar7[1];
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_168);
  }
  else {
    pdVar7 = (double *)*param_5;
    if (pdVar7 != &local_128) goto LAB_14022c680;
  }
  local_108 = 0xe;
  local_17c = 0;
  local_188 = (longlong *)0x3ff0000000000000;
  iVar4 = FUN_140e851f0(&local_a8,&local_188,DAT_141955260,1);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if (iVar4 < 1) goto LAB_14022c7a6;
  local_108 = 0xf;
  if (param_4 < 2) {
    pdVar7 = (double *)&DAT_1419df7b0;
LAB_14022c729:
    local_168 = (longlong *)*pdVar7;
    uStack_160 = pdVar7[1];
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_168);
  }
  else {
    pdVar7 = (double *)param_5[1];
    if (pdVar7 != &local_138) goto LAB_14022c729;
  }
  local_108 = 0x10;
  if ((param_4 < 3) || (pdVar6 = (double *)param_5[2], pdVar6 != &local_148)) {
    local_168 = (longlong *)*pdVar6;
    uStack_160 = pdVar6[1];
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_168);
  }
LAB_14022c7a6:
  local_108 = 0x14;
  cVar3 = FUN_140e491e0(&local_128);
  if (cVar3 == '\0') {
    local_108 = 0x15;
    pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    uStack_16c = *(uint *)((longlong)pdVar6 + 0xc);
    uStack_170 = *(undefined4 *)(pdVar6 + 1);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
      local_178 = (longlong *)*pdVar6;
    }
    else {
      FUN_1400419b0(&local_178,pdVar6);
    }
    local_17c = 7;
    local_188 = (longlong *)CONCAT44(local_188._4_4_,1);
    FUN_1400462a0(&local_178,&local_188);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    uStack_160 = (double)CONCAT44(uStack_16c,uStack_170);
    local_168 = local_178;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_168);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    bVar2 = true;
    do {
      if (!bVar2) {
        local_108 = 0x15;
        uVar5 = local_18c & 0xffffff;
        if (uVar5 == 0) {
LAB_14022c8f8:
          local_198 = (longlong *)((double)local_198 + -1.0);
        }
        else if (uVar5 == 1) {
          dVar11 = (double)FUN_140e4b060(&local_198);
          local_198 = (longlong *)(dVar11 - 1.0);
          local_18c = 0;
        }
        else if (uVar5 == 7) {
          local_198 = (longlong *)CONCAT44(local_198._4_4_,(int)local_198 + -1);
        }
        else if (uVar5 == 10) {
          local_198 = (longlong *)((longlong)local_198 + -1);
        }
        else {
          if (uVar5 == 0xd) {
            local_18c = 0;
            goto LAB_14022c8f8;
          }
          FUN_140042910(&DAT_14172c450,&local_198,&local_198);
        }
      }
      bVar2 = false;
      iVar4 = FUN_140e851f0(&local_198,&local_128,DAT_141955260,1);
      if ((iVar4 == -2) || (iVar4 < 0)) goto LAB_14022d1f1;
      local_108 = 0x16;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
      pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
      local_78 = &local_198;
      uStack_16c = local_18c;
      uStack_170 = local_190;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
        local_178 = local_198;
      }
      else {
        FUN_1400419b0(&local_178,&local_198);
      }
      local_dc = 7;
      local_e8[0] = 1;
      FUN_1400460e0(&local_178,local_e8);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      iVar4 = FUN_140e4a740(&local_178);
      if (((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 2) && (dVar11 = *pdVar7, dVar11 != 0.0)
         ) {
        if ((iVar4 < 0) || (*(int *)((longlong)dVar11 + 0x24) <= iVar4)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                        *(undefined4 *)((longlong)dVar11 + 0x24));
          pdVar7 = (double *)0x0;
        }
        else {
          pdVar7 = (double *)((longlong)iVar4 * 0x10 + *(longlong *)((longlong)dVar11 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (pdVar7 != local_c8) {
        local_f8 = *pdVar7;
        dStack_f0 = pdVar7[1];
        if ((1 << ((byte)local_c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_f8);
      }
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_17c = local_18c;
      local_180 = local_190;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
        local_188 = local_198;
        local_70 = local_c8;
      }
      else {
        local_70 = local_c8;
        FUN_1400419b0(&local_188,&local_198);
      }
      uStack_160 = (double)CONCAT44(7,(undefined4)uStack_160);
      local_168 = (longlong *)CONCAT44(local_168._4_4_,1);
      FUN_1400460e0(&local_188,&local_168);
      if ((1 << ((byte)((ulonglong)uStack_160 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      iVar4 = FUN_140e4a740(&local_188);
      if (((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 2) && (dVar11 = *pdVar6, dVar11 != 0.0)
         ) {
        if ((iVar4 < 0) || (*(int *)((longlong)dVar11 + 0x24) <= iVar4)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                        *(undefined4 *)((longlong)dVar11 + 0x24));
          pdVar6 = (double *)0x0;
        }
        else {
          pdVar6 = (double *)((longlong)iVar4 * 0x10 + *(longlong *)((longlong)dVar11 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (pdVar6 != local_b8) {
        local_f8 = *pdVar6;
        dStack_f0 = pdVar6[1];
        if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_f8);
      }
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_68 = local_b8;
      gml_Script_seg_delete(param_1,param_2,&local_158,3,&local_78);
    } while( true );
  }
  local_108 = 0x19;
  plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
  if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = *(longlong **)(lVar1 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  iVar4 = FUN_140e851f0(plVar8,&local_138,DAT_141955260,0);
  if (iVar4 == 0) {
    plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x24) < 1) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = *(longlong **)(lVar1 + 8);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    iVar4 = FUN_140e851f0(plVar8,&local_148,DAT_141955260,0);
    if (iVar4 == 0) {
LAB_14022d1f1:
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      _eh_vector_destructor_iterator_(local_d8,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_118;
      return param_3;
    }
  }
  local_108 = 0x1a;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
  FUN_140e609c0(param_1);
  pdVar6 = (double *)FUN_140e48e40(puVar9,0);
  FUN_140e609c0(*(undefined8 *)*puVar9);
  if (&local_138 != pdVar6) {
    dStack_f0 = (double)CONCAT44(uStack_12c,uStack_130);
    local_f8 = local_138;
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar6);
    }
    FUN_140041b80(pdVar6,&local_f8);
  }
  FUN_140e60910(2);
  local_108 = 0x1b;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
  FUN_140e609c0(param_1);
  pdVar6 = (double *)FUN_140e48e40(puVar9,0);
  FUN_140e609c0(*(undefined8 *)*puVar9);
  if (&local_148 != pdVar6) {
    dStack_f0 = (double)CONCAT44(uStack_13c,uStack_140);
    local_f8 = local_148;
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar6);
    }
    FUN_140041b80(pdVar6,&local_f8);
  }
  FUN_140e60910(2);
  local_108 = 0x1d;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_18c = 0;
  local_198 = (longlong *)0x3ff0000000000000;
  bVar2 = true;
  do {
    if (!bVar2) {
      local_108 = 0x1d;
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
            if (uVar5 == 0xd) goto LAB_14022ceaa;
            FUN_140042910(&DAT_14172c3d8,&local_198,&local_198);
          }
          goto LAB_14022ceb8;
        }
        local_198 = (longlong *)FUN_140e4b060(&local_198);
LAB_14022ceaa:
        local_18c = 0;
      }
      local_198 = (longlong *)((double)local_198 + 1.0);
    }
LAB_14022ceb8:
    bVar2 = false;
    uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    iVar4 = FUN_140e851f0(&local_198,uVar10,DAT_141955260,1);
    if ((iVar4 == -2) || (0 < iVar4)) goto LAB_14022d1f1;
    local_108 = 0x1e;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    local_78 = &local_198;
    local_17c = local_18c;
    local_180 = local_190;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
      local_188 = local_198;
    }
    else {
      FUN_1400419b0(&local_188,&local_198);
    }
    uStack_160 = (double)CONCAT44(7,(undefined4)uStack_160);
    local_168 = (longlong *)CONCAT44(local_168._4_4_,1);
    FUN_1400462a0(&local_188,&local_168);
    if ((1 << ((byte)((ulonglong)uStack_160 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    iVar4 = FUN_140e4a740(&local_188);
    if (((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 2) && (dVar11 = *pdVar7, dVar11 != 0.0))
    {
      if ((iVar4 < 0) || (*(int *)((longlong)dVar11 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)((longlong)dVar11 + 0x24));
        pdVar7 = (double *)0x0;
      }
      else {
        pdVar7 = (double *)((longlong)iVar4 * 0x10 + *(longlong *)((longlong)dVar11 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar7 != local_c8) {
      local_f8 = *pdVar7;
      dStack_f0 = pdVar7[1];
      if ((1 << ((byte)local_c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_f8);
    }
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    uStack_16c = local_18c;
    uStack_170 = local_190;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
      local_178 = local_198;
      local_70 = local_c8;
    }
    else {
      local_70 = local_c8;
      FUN_1400419b0(&local_178,&local_198);
    }
    local_dc = 7;
    local_e8[0] = 1;
    FUN_1400462a0(&local_178,local_e8);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    iVar4 = FUN_140e4a740(&local_178);
    if (((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 2) && (dVar11 = *pdVar6, dVar11 != 0.0))
    {
      if ((iVar4 < 0) || (*(int *)((longlong)dVar11 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)((longlong)dVar11 + 0x24));
        pdVar6 = (double *)0x0;
      }
      else {
        pdVar6 = (double *)((longlong)iVar4 * 0x10 + *(longlong *)((longlong)dVar11 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar6 != local_b8) {
      local_f8 = *pdVar6;
      dStack_f0 = pdVar6[1];
      if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_f8);
    }
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_68 = local_b8;
    gml_Script_seg_delete(param_1,param_2,&local_158,3,&local_78);
  } while( true );
}

