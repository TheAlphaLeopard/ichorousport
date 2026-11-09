// gml_Script_anon_499_gml_Object_oWallDistort_Create_0 @ 0x140e2bed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_499_gml_Object_oWallDistort_Create_0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  double *pdVar7;
  double *pdVar8;
  double dVar9;
  uint local_res8;
  undefined8 uVar10;
  ulonglong uVar11;
  double **ppdVar12;
  longlong *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  double local_128;
  undefined4 local_11c;
  double local_118;
  byte local_10c;
  double *local_108;
  double *local_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  double local_e8;
  uint local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  double local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined4 local_9c;
  double local_98;
  undefined4 local_8c;
  double local_88;
  uint uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  double dStack_60;
  
  local_d0 = "gml_Object_oWallDistort_Create_0";
  local_c8 = 0;
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = (longlong *)0x0;
  local_8c = 0xffffff;
  local_98 = 0.0;
  local_9c = 0xffffff;
  local_a8 = 0.0;
  local_res8 = 0xffffff;
  uStack_7c = 0xffffff;
  local_88 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  uStack_ac = 0xffffff;
  local_b8 = 0.0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_c8 = 1;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5498);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0x4014000000000000;
  local_c8 = 2;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4f98);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0x4040000000000000;
  local_c8 = 4;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5338);
  uStack_150 = (double)CONCAT44(0xf,(undefined4)uStack_150);
  local_158 = (longlong *)0x10000080000001a;
  local_f8 = (longlong *)0x10000080000001a;
  uStack_f0 = uStack_150;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_f8);
  local_108 = &local_128;
  local_158 = _DAT_141ddbf58;
  uStack_150 = (double)uRam0000000141ddbf60;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_158);
  local_100 = &local_118;
  FUN_140e609c0(param_1);
  uVar10 = CONCAT44(uVar4,DAT_141a04778);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,2,uVar10,&local_108);
  uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
  if (puVar6 != puVar5) {
    local_158 = (longlong *)*puVar6;
    uStack_150 = (double)puVar6[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_158);
  }
  FUN_140e60910(1);
  local_c8 = 5;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4f58);
  uStack_150 = (double)CONCAT44(0xf,(undefined4)uStack_150);
  local_158 = (longlong *)0x10000080000001a;
  local_f8 = (longlong *)0x10000080000001a;
  uStack_f0 = uStack_150;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_f8);
  local_108 = &local_128;
  local_158 = _DAT_141ddbef8;
  uStack_150 = (double)uRam0000000141ddbf00;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_158);
  local_100 = &local_118;
  FUN_140e609c0(param_1);
  uVar10 = CONCAT44(uVar4,DAT_141a04778);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,2,uVar10,&local_108);
  uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
  if (puVar6 != puVar5) {
    local_158 = (longlong *)*puVar6;
    uStack_150 = (double)puVar6[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_158);
  }
  FUN_140e60910(1);
  local_c8 = 6;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5328);
  uStack_150 = (double)CONCAT44(0xf,(undefined4)uStack_150);
  local_158 = (longlong *)0x10000080000001a;
  local_f8 = (longlong *)0x10000080000001a;
  uStack_f0 = uStack_150;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_f8);
  local_108 = &local_128;
  local_158 = _DAT_141ddbf38;
  uStack_150 = (double)uRam0000000141ddbf40;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_158);
  local_100 = &local_118;
  FUN_140e609c0(param_1);
  ppdVar12 = &local_108;
  uVar11 = CONCAT44(uVar4,DAT_141a04778);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,2,uVar11,ppdVar12);
  if (puVar6 != puVar5) {
    local_158 = (longlong *)*puVar6;
    uStack_150 = (double)puVar6[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_158);
  }
  FUN_140e60910(1);
  local_c8 = 8;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uStack_f0._4_4_ = 6;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_141a0a828,0x80000000,&local_78,uVar11,
                (ulonglong)ppdVar12 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar11 >> 0x20);
  if ((1 << ((byte)uStack_f0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  uStack_150 = (double)CONCAT44(uStack_6c,uStack_70);
  local_158 = local_78;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_158);
  local_108 = &local_128;
  FUN_140e645a0(&local_158,gml_Object_oWallDistort_Draw_0,param_1);
  local_f8 = local_158;
  uStack_f0 = uStack_150;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_f8);
  if ((1 << ((byte)((ulonglong)uStack_150 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_100 = &local_118;
  ppdVar12 = &local_108;
  uVar11 = CONCAT44(uVar4,DAT_1419fed78);
  pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_148,2,uVar11,ppdVar12);
  if (pdVar7 != &local_98) {
    local_158 = (longlong *)*pdVar7;
    uStack_150 = pdVar7[1];
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_158);
  }
  local_c8 = 0xe;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uStack_f0._4_4_ = 6;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_141a0a828,0x80000000,&local_78,uVar11,
                (ulonglong)ppdVar12 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar11 >> 0x20);
  if ((1 << ((byte)uStack_f0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  uStack_150 = (double)CONCAT44(uStack_6c,uStack_70);
  local_158 = local_78;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_158);
  local_108 = &local_128;
  FUN_140e645a0(&local_158,gml_Object_oWallFlesh_PreCreate_0,param_1);
  local_f8 = local_158;
  uStack_f0 = uStack_150;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_f8);
  if ((1 << ((byte)((ulonglong)uStack_150 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_100 = &local_118;
  pdVar7 = (double *)
           FUN_140e634e0(param_1,param_2,&local_148,2,CONCAT44(uVar4,DAT_1419fed78),&local_108);
  if (pdVar7 != &local_a8) {
    local_158 = (longlong *)*pdVar7;
    uStack_150 = pdVar7[1];
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_158);
  }
  local_c8 = 0x12;
  uVar4 = 1;
  pdVar7 = (double *)
           FUN_140e8da20(&local_148,param_1,5,&DAT_141ddbf08,&DAT_141ddbf48,&DAT_141ddbf18,
                         &DAT_141ddbf28,&DAT_141ddbee8);
  dVar9 = 0.0;
  if (pdVar7 != &local_88) {
    local_158 = (longlong *)*pdVar7;
    uStack_150 = pdVar7[1];
    FUN_140041b80(&local_88,&local_158);
    local_res8 = uStack_7c;
    dVar9 = local_88;
  }
  local_c8 = 0x13;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03d48);
  iVar3 = 0;
  if ((local_res8 == 2) && (dVar9 != 0.0)) {
    iVar3 = *(int *)((longlong)dVar9 + 0x24);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 0;
  local_128 = (double)iVar3;
  local_108 = &local_128;
  local_158 = _DAT_1419ee9d0;
  uStack_150 = (double)uRam00000001419ee9d8;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_158);
  local_100 = &local_118;
  FUN_140e609c0(param_1);
  uVar10 = CONCAT44(uVar4,DAT_1419fd218);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_138,2,uVar10,&local_108);
  if (puVar6 != puVar5) {
    local_158 = (longlong *)*puVar6;
    uStack_150 = (double)puVar6[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_158);
  }
  FUN_140e60910(1);
  local_c8 = 0x14;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0.0;
  bVar1 = true;
  do {
    uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if (!bVar1) {
      local_c8 = 0x14;
      uVar2 = local_dc & 0xffffff;
      if (uVar2 != 0) {
        if (uVar2 != 1) {
          if (uVar2 == 7) {
            local_e8 = (double)CONCAT44(local_e8._4_4_,local_e8._0_4_ + 1);
          }
          else if (uVar2 == 10) {
            local_e8 = (double)((longlong)local_e8 + 1);
          }
          else {
            if (uVar2 == 0xd) {
              local_dc = 0;
              goto LAB_140e2c8f8;
            }
            FUN_140042910(&DAT_14172c3d8,&local_e8,&local_e8);
          }
          goto LAB_140e2c901;
        }
        local_e8 = (double)FUN_140e4b060(&local_e8);
        local_dc = 0;
      }
LAB_140e2c8f8:
      local_e8 = local_e8 + 1.0;
    }
LAB_140e2c901:
    bVar1 = false;
    iVar3 = 0;
    if ((local_res8 == 2) && (dVar9 != 0.0)) {
      iVar3 = *(int *)((longlong)dVar9 + 0x24);
    }
    uStack_f0 = (double)((ulonglong)uStack_f0 & 0xffffffff);
    local_f8 = (longlong *)(double)iVar3;
    iVar3 = FUN_140e851f0(&local_e8,&local_f8,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)uStack_f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if (iVar3 == -2 || -1 < iVar3) {
      local_c8 = 0x1b;
      pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03d48);
      pdVar8 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03d68);
      FUN_140e609c0(param_1);
      if (((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 2) && (dVar9 = *pdVar7, dVar9 != 0.0))
      {
        if (*(int *)((longlong)dVar9 + 0x24) < 1) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
          pdVar7 = (double *)0x0;
        }
        else {
          pdVar7 = *(double **)((longlong)dVar9 + 8);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (pdVar7 != pdVar8) {
        local_68 = *pdVar7;
        dStack_60 = pdVar7[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar8);
        }
        FUN_140041b80(pdVar8,&local_68);
      }
      FUN_140e60910(1);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_res8 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      _eh_vector_destructor_iterator_(&local_128,0x10,2,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_d8;
      return;
    }
    local_c8 = 0x15;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    iVar3 = FUN_140e4a740(&local_e8);
    pdVar7 = (double *)0x0;
    if (((local_res8 & 0xffffff) == 2) && (dVar9 != 0.0)) {
      if ((iVar3 < 0) || (*(int *)((longlong)dVar9 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)((longlong)dVar9 + 0x24));
      }
      else {
        pdVar7 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar9 + 8));
      }
      if (pdVar7 != &local_128) goto LAB_140e2ca20;
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      pdVar7 = &local_88;
LAB_140e2ca20:
      local_68 = *pdVar7;
      dStack_60 = pdVar7[1];
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_68);
    }
    local_108 = &local_128;
    uVar10 = CONCAT44(uVar4,DAT_141a1c640);
    pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_138,1,uVar10,&local_108);
    if (pdVar7 != &local_b8) {
      local_68 = *pdVar7;
      dStack_60 = pdVar7[1];
      if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_68);
    }
    local_c8 = 0x16;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03d48);
    FUN_140e609c0(param_1);
    uVar4 = FUN_140e4a740(&local_e8);
    pdVar7 = (double *)FUN_140e48e40(puVar5,uVar4);
    FUN_140e609c0(*(undefined8 *)*puVar5);
    if (&local_b8 != pdVar7) {
      dStack_60 = (double)CONCAT44(uStack_ac,uStack_b0);
      local_68 = local_b8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar7);
      }
      FUN_140041b80(pdVar7,&local_68);
    }
    FUN_140e60910(2);
    local_c8 = 0x17;
    uStack_150 = (double)((ulonglong)uStack_150 & 0xffffffff);
    local_158 = (longlong *)&DAT_bff0000000000000;
    iVar3 = FUN_140e851f0(&local_b8,&local_158,DAT_141955260,0);
    if ((1 << ((byte)((ulonglong)uStack_150 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if (iVar3 == 0) {
      local_c8 = 0x17;
    }
    else {
      local_c8 = 0x18;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_138 = 0;
      local_130 = 0;
      local_12c = 5;
      local_108 = &local_b8;
      uVar10 = CONCAT44(uVar4,DAT_1419f7518);
      local_100 = &local_98;
      FUN_140e634e0(param_1,param_2,&local_138,2,uVar10,&local_108);
      uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
      local_c8 = 0x19;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_138 = 0;
      local_130 = 0;
      local_12c = 5;
      local_108 = &local_b8;
      local_100 = &local_a8;
      uVar10 = CONCAT44(uVar4,DAT_1419f74b8);
      FUN_140e634e0(param_1,param_2,&local_138,2,uVar10,&local_108);
    }
  } while( true );
}

