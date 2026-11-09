// gml_Object_oBloodFly_Step_0 @ 0x1406b7700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBloodFly_Step_0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 **ppuVar7;
  double *pdVar8;
  longlong *plVar9;
  double dVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  undefined8 ***pppuVar16;
  ulonglong uVar17;
  undefined8 ***pppuVar18;
  double local_188;
  uint local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  double local_168;
  undefined4 local_15c;
  undefined8 *local_158;
  undefined8 *puStack_150;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined8 *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 *local_118;
  char *pcStack_110;
  undefined4 local_108;
  double local_f8;
  undefined4 local_ec;
  undefined8 *local_e8;
  undefined4 local_dc;
  undefined8 **local_d8;
  double *local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  byte local_b4;
  double local_b0;
  byte local_a4;
  undefined1 local_a0 [12];
  byte local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 **local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  
  local_140 = "gml_Object_oBloodDropManager_Draw_0";
  local_138 = 0;
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = (undefined8 **)&local_148;
  uVar13 = 1;
  _eh_vector_constructor_iterator_(&local_c0,0x10,3,FUN_1400424d0,FUN_140041b30);
  ppuVar7 = (undefined8 **)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef648);
  pdVar8 = (double *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1d980);
  local_dc = 0xffffff;
  local_e8 = (undefined8 *)0x0;
  uStack_11c = 0xffffff;
  local_128 = (undefined8 *)0x0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_74 = 0xffffff;
  local_80 = (undefined8 **)0x0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_138 = 1;
  if (ppuVar7 != &local_c0) {
    local_158 = *ppuVar7;
    puStack_150 = ppuVar7[1];
    if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    FUN_140041b80(&local_c0,&local_158);
  }
  local_d8 = &local_c0;
  if (pdVar8 != &local_b0) {
    local_158 = (undefined8 *)*pdVar8;
    puStack_150 = (undefined8 *)pdVar8[1];
    if ((1 << ((byte)_local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    FUN_140041b80(&local_b0,&local_158);
  }
  local_d0 = &local_b0;
  pppuVar18 = &local_d8;
  uVar17 = CONCAT44(uVar13,DAT_141a01138);
  ppuVar7 = (undefined8 **)FUN_140e634e0(param_1,param_2,&local_90,2,uVar17,pppuVar18);
  if (ppuVar7 != &local_e8) {
    local_158 = *ppuVar7;
    puStack_150 = ppuVar7[1];
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_158);
  }
  local_138 = 3;
  ppuVar7 = (undefined8 **)FUN_140e8da20(&local_90,param_1,0);
  if (ppuVar7 != &local_128) {
    local_158 = *ppuVar7;
    puStack_150 = ppuVar7[1];
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
  }
  local_138 = 4;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_17c = 0;
  uVar13 = 0;
  uVar14 = 0;
  local_188 = 0.0;
  bVar2 = true;
LAB_1406b7990:
  if (!bVar2) {
    local_138 = 4;
    uVar4 = local_17c & 0xffffff;
    if (uVar4 != 0) {
      if (uVar4 != 1) {
        if (uVar4 == 7) {
          local_188 = (double)CONCAT44(local_188._4_4_,local_188._0_4_ + 1);
        }
        else if (uVar4 == 10) {
          local_188 = (double)((longlong)local_188 + 1);
        }
        else {
          if (uVar4 == 0xd) {
            local_17c = 0;
            goto LAB_1406b79ea;
          }
          FUN_140042910(&DAT_14172c3d8,&local_188,&local_188);
        }
        goto LAB_1406b79f4;
      }
      local_188 = (double)FUN_140e4b060(&local_188);
      local_17c = 0;
    }
LAB_1406b79ea:
    local_188 = local_188 + 1.0;
  }
LAB_1406b79f4:
  bVar2 = false;
  plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5c48);
  iVar5 = 0;
  if ((*(int *)((longlong)plVar9 + 0xc) == 2) && (*plVar9 != 0)) {
    iVar5 = *(int *)(*plVar9 + 0x24);
  }
  puStack_150 = (undefined8 *)((ulonglong)puStack_150 & 0xffffffff);
  local_158 = (undefined8 *)(double)iVar5;
  iVar5 = FUN_140e851f0(&local_188,&local_158,DAT_141955260,1);
  if ((1 << ((byte)((ulonglong)puStack_150 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (iVar5 != -2 && iVar5 < 0) {
    local_138 = 6;
    pdVar8 = (double *)(**(code **)(*param_1 + 8))();
    iVar5 = FUN_140e4a740(&local_188);
    if (((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 2) && (dVar10 = *pdVar8, dVar10 != 0.0))
    {
      if ((iVar5 < 0) || (*(int *)((longlong)dVar10 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)((longlong)dVar10 + 0x24));
        pdVar8 = (double *)0x0;
      }
      else {
        pdVar8 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar10 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar8 != &local_168) {
      local_118 = (undefined8 *)*pdVar8;
      pcStack_110 = (char *)pdVar8[1];
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_118);
    }
    local_138 = 7;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    FUN_140e87440(&local_168,DAT_141a0a968,0x80000000,&local_60,uVar17 & 0xffffffffffffff00,
                  (ulonglong)pppuVar18 & 0xffffffffffffff00);
    switch(local_15c) {
    default:
switchD_1406b7bb7_caseD_1:
      dVar10 = 0.0;
      break;
    case 6:
      dVar10 = local_168;
      break;
    case 0xf:
      iVar5 = (int)((ulonglong)local_168 >> 0x20);
      if ((iVar5 != 0x1000000) && (iVar5 != 0x4000001)) goto switchD_1406b7bb7_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar6 = FUN_140e4a8b0(&local_168);
      dVar10 = (double)FUN_140e87250(uVar6);
    }
    uVar17 = 0;
    puVar15 = &local_60;
    FUN_140e63610(dVar10,param_2,&local_178,0,puVar15,0);
    local_138 = 9;
    pppuVar18 = (undefined8 ***)(uVar17 & 0xffffffffffffff00);
    uVar17 = (ulonglong)puVar15 & 0xffffffffffffff00;
    FUN_140e87440(&local_168,DAT_1419f5cd8,0x80000000,&local_70,uVar17,pppuVar18);
    cVar3 = FUN_140e491e0(&local_70);
    if (cVar3 == '\0') {
      local_138 = 0xc;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      local_d8 = &local_128;
      local_d0 = &local_168;
      pppuVar18 = &local_d8;
      uVar17 = CONCAT44((int)(uVar17 >> 0x20),DAT_1419fe568);
      FUN_140e634e0(param_1,param_2,&local_178,2,uVar17,pppuVar18);
    }
    else {
      local_138 = 10;
      local_118 = DAT_1419df7b0;
      pcStack_110 = _DAT_1419df7b8;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_118);
    }
    goto LAB_1406b7990;
  }
  local_138 = 0xe;
  ppuVar7 = (undefined8 **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5c48);
  FUN_140e609c0(param_1);
  if (&local_128 != ppuVar7) {
    pcStack_110 = (char *)CONCAT44(uStack_11c,uStack_120);
    local_118 = local_128;
    if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppuVar7);
    }
    FUN_140041b80(ppuVar7,&local_118);
  }
  FUN_140e60910(1);
  local_138 = 0x10;
  plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5c48);
  iVar5 = 0;
  if ((*(int *)((longlong)plVar9 + 0xc) == 2) && (*plVar9 != 0)) {
    iVar5 = *(int *)(*plVar9 + 0x24);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = (double)iVar5;
  local_138 = 0x11;
  puStack_150 = (undefined8 *)((ulonglong)puStack_150 & 0xffffffff);
  local_158 = (undefined8 *)0x0;
  iVar5 = FUN_140e851f0(&local_f8,&local_158,DAT_141955260,0);
  if ((1 << ((byte)((ulonglong)puStack_150 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (iVar5 != 0) {
    local_138 = 0x13;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    local_d8 = &local_e8;
    local_118 = _DAT_1419e7700;
    pcStack_110 = (char *)uRam00000001419e7708;
    if ((1 << (local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    FUN_140041b80(&local_b0,&local_118);
    local_d0 = &local_b0;
    local_118 = _DAT_1419df7a0;
    pcStack_110 = (char *)uRam00000001419df7a8;
    if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a0);
    }
    FUN_140041b80(local_a0,&local_118);
    local_c8 = local_a0;
    pppuVar16 = &local_d8;
    gml_Script_pal_swap_layer_init(param_1,param_2,&local_178,3,pppuVar16);
    local_138 = 0x14;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_17c = 0;
    local_188 = 0.0;
    bVar2 = true;
    do {
      if (!bVar2) {
        local_138 = 0x14;
        uVar4 = local_17c & 0xffffff;
        if (uVar4 == 0) {
LAB_1406b7f40:
          local_188 = (double)CONCAT44(uVar14,uVar13) + 1.0;
        }
        else if (uVar4 == 1) {
          local_188 = (double)FUN_140e4b060(&local_188);
          local_188 = local_188 + 1.0;
          local_17c = 0;
        }
        else if (uVar4 == 7) {
          local_188 = (double)CONCAT44(local_188._4_4_,local_188._0_4_ + 1);
        }
        else if (uVar4 == 10) {
          local_188 = (double)((longlong)local_188 + 1);
        }
        else {
          if (uVar4 == 0xd) {
            local_17c = 0;
            goto LAB_1406b7f40;
          }
          FUN_140042910(&DAT_14172c3d8,&local_188,&local_188);
        }
      }
      bVar2 = false;
      iVar5 = FUN_140e851f0(&local_188,&local_f8,DAT_141955260,1);
      if ((iVar5 == -2) || (-1 < iVar5)) goto LAB_1406b80ff;
      local_138 = 0x15;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5c48);
      iVar5 = FUN_140e4a740(&local_188);
      if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar12 = (longlong *)0x0;
        }
        else {
          plVar12 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar12 = plVar9;
      }
      FUN_140e87440(plVar12,DAT_141a05028,0x80000000,&local_80,
                    (ulonglong)pppuVar16 & 0xffffffffffffff00,
                    (ulonglong)pppuVar18 & 0xffffffffffffff00);
      iVar5 = FUN_140e4a740(&local_188);
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
      uVar11 = FUN_140069500(plVar9);
      pppuVar18 = (undefined8 ***)0x0;
      pppuVar16 = &local_80;
      FUN_140e63610(uVar11,param_2,&local_178,0,pppuVar16,0);
      uVar13 = SUB84(local_188,0);
      uVar14 = (undefined4)((ulonglong)local_188 >> 0x20);
    } while( true );
  }
  local_138 = 0x11;
LAB_1406b817b:
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(&local_c0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 **)local_148;
  return;
LAB_1406b80ff:
  local_138 = 0x16;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_170 = 0;
  pcStack_110 = "gml_Script_pal_swap_reset";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_16c = 5;
  local_178 = 0;
  local_108 = 0x71;
  iVar5 = FUN_140ec9d80();
  if (iVar5 != -1) {
    local_108 = 0x71;
    FUN_140ec9dc0();
  }
  DAT_141dc7a50 = (undefined8 **)local_118;
  goto LAB_1406b817b;
}

