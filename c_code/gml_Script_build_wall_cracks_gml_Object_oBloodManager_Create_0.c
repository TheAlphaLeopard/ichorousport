// gml_Script_build_wall_cracks_gml_Object_oBloodManager_Create_0 @ 0x1406c8760

double * gml_Script_build_wall_cracks_gml_Object_oBloodManager_Create_0
                   (longlong *param_1,undefined8 **param_2,double *param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  double dVar10;
  undefined4 uVar12;
  longlong *plVar11;
  undefined8 **ppuVar13;
  double local_148;
  uint local_13c;
  double local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  double local_128;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  ulonglong local_b8;
  undefined4 uStack_ac;
  undefined8 *local_a8;
  undefined8 *local_a0;
  double local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  double local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  byte local_4c;
  
  local_f0 = "gml_Script_wall_crack_signature@gml_Object_oBloodManager_Create_0";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x14b;
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_58,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0.0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  uStack_8c = 0xffffff;
  local_98 = 0.0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_10c = 0;
  local_118 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  local_e8 = 0x14d;
  uStack_ac = 0xf;
  local_b8 = 0x1000000000000ff;
  uStack_11c = 0xf;
  local_128 = 7.29112201955681e-304;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140041b80(&local_58,&local_128);
  local_a8 = &local_58;
  ppuVar13 = &local_a8;
  uVar7 = CONCAT44(uVar12,DAT_141a02ef8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_118,1,uVar7,ppuVar13);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    local_e8 = 0x14e;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = (double)&DAT_bff0000000000000;
  }
  else {
    local_e8 = 0x150;
    uStack_11c = 0xf;
    local_128 = 7.29112201955681e-304;
    FUN_140e87440(&local_128,DAT_1419f5eb8,0x80000000,&local_d0,uVar7 & 0xffffffffffffff00,
                  (ulonglong)ppuVar13 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    plVar11 = param_1;
    ppuVar13 = param_2;
    FUN_140e87170(&local_d0,DAT_1419fe0e8,0x80000000,&local_78,param_1,param_2);
    uStack_11c = 0xf;
    local_128 = 7.29112201955681e-304;
    FUN_140e87440(&local_128,DAT_1419f5eb8,0x80000000,&local_d0,
                  (ulonglong)plVar11 & 0xffffffffffffff00,(ulonglong)ppuVar13 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    plVar11 = param_1;
    ppuVar13 = param_2;
    FUN_140e87170(&local_d0,DAT_1419fe158,0x80000000,&local_88,param_1,param_2);
    uVar7 = FUN_140e4a8b0(&local_78);
    lVar8 = FUN_140e4a8b0(&local_88);
    dVar10 = (double)((lVar8 << 8 | uVar7) << 4);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    uStack_12c = 10;
    local_e8 = 0x151;
    local_138 = dVar10;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_13c = 0;
    local_148 = 0.0;
    bVar1 = true;
LAB_1406c8a78:
    iVar5 = 0;
    if (!bVar1) {
      local_e8 = 0x151;
      uVar4 = local_13c & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_148 = (double)CONCAT44(local_148._4_4_,local_148._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_148 = (double)((longlong)local_148 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_13c = 0;
              goto LAB_1406c8ad1;
            }
            FUN_140042910(&DAT_14172c3d8,&local_148,&local_148);
          }
          goto LAB_1406c8adb;
        }
        local_148 = (double)FUN_140e4b060(&local_148);
        local_13c = 0;
      }
LAB_1406c8ad1:
      local_148 = local_148 + 1.0;
    }
LAB_1406c8adb:
    bVar1 = false;
    plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a038c8);
    if ((*(int *)((longlong)plVar9 + 0xc) == 2) && (*plVar9 != 0)) {
      iVar5 = *(int *)(*plVar9 + 0x24);
    }
    uStack_11c = 0;
    local_128 = (double)iVar5;
    iVar5 = FUN_140e851f0(&local_148,&local_128,DAT_141955260,1);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if (iVar5 != -2 && iVar5 < 0) {
      local_e8 = 0x153;
      plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a038c8);
      iVar5 = FUN_140e4a740(&local_148);
      if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar8 = *plVar9, lVar8 != 0)) {
        if ((iVar5 < 0) || (*(int *)(lVar8 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar8 + 0x24));
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar8 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      uVar7 = (ulonglong)plVar11 & 0xffffffffffffff00;
      FUN_140e87440(plVar9,DAT_141a05b88,0x80000000,&local_98,uVar7,
                    (ulonglong)ppuVar13 & 0xffffffffffffff00);
      uVar12 = (undefined4)(uVar7 >> 0x20);
      uStack_60 = CONCAT44(uStack_8c,uStack_90);
      local_68 = local_98;
      if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e0);
      }
      FUN_140041b80(&local_e0,&local_68);
      local_e8 = 0x154;
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      local_118 = 0;
      local_110 = 0;
      local_10c = 5;
      local_a8 = &local_e0;
      ppuVar13 = &local_a8;
      plVar11 = (longlong *)CONCAT44(uVar12,DAT_141a1c670);
      uVar6 = FUN_140e634e0(param_1,param_2,&local_118,1,plVar11,ppuVar13);
      cVar2 = FUN_140e491e0(uVar6);
      if (cVar2 != '\0') {
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_108 = 0;
        local_100 = 0;
        local_fc = 5;
        local_a0 = &local_e0;
        ppuVar13 = &local_a0;
        plVar11 = (longlong *)CONCAT44((int)((ulonglong)plVar11 >> 0x20),DAT_141a03a98);
        uVar6 = FUN_140e634e0(param_1,param_2,&local_108,1,plVar11,ppuVar13);
        cVar2 = FUN_140e491e0(uVar6);
        if (cVar2 != '\0') {
          local_e8 = 0x155;
          bVar3 = FUN_140e4a8b0(&local_148);
          uVar7 = 1L << (bVar3 & 0x3f);
          uVar4 = uStack_12c & 0xffffff;
          if (uVar4 != 0) {
            if (uVar4 == 7) {
              local_138 = (double)CONCAT44(local_138._4_4_,local_138._0_4_ | (uint)uVar7);
              goto LAB_1406c8a78;
            }
            if (uVar4 == 10) {
              local_138 = (double)((ulonglong)local_138 | uVar7);
              goto LAB_1406c8a78;
            }
            if (uVar4 != 0xd) {
              uStack_ac = 10;
              local_b8 = uVar7;
              FUN_140042910(&DAT_14172c43c,&local_138,&local_b8);
              if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_b8);
              }
              goto LAB_1406c8a78;
            }
          }
          local_138 = (double)((longlong)local_138 | uVar7);
          uStack_12c = 10;
        }
      }
      goto LAB_1406c8a78;
    }
    local_e8 = 0x157;
    if (&local_138 != param_3) {
      uStack_60 = CONCAT44(uStack_12c,uStack_130);
      local_68 = local_138;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_68);
    }
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  _eh_vector_destructor_iterator_(&local_58,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

