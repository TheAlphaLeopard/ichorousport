// gml_Script____struct___75_anon_2380_BM_NEW_MENU_BYTEMAP_menu_manager @ 0x14024cd50

undefined8 *
gml_Script____struct___75_anon_2380_BM_NEW_MENU_BYTEMAP_menu_manager
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  double *pdVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined8 *puVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint local_res20;
  undefined4 uVar11;
  double **ppdVar12;
  double local_158;
  uint local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  double local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  uint uStack_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  double local_b8 [4];
  double local_98 [2];
  double local_88 [2];
  double *local_78;
  double *local_70;
  double *local_68;
  double *local_60;
  
  local_e0 = "gml_Script_struct_merge@anon@6979@anon@2380@BM_NEW_MENU@BYTEMAP_menu_manager";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0xc3;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_res20 = 0xffffff;
  uStack_ec = 0xffffff;
  local_f8 = 0.0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_13c = 0;
  uVar9 = 0;
  uVar10 = 0;
  local_148 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0xc4;
  if (param_4 < 2) {
    pdVar4 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar4 = (double *)param_5[1];
    if (pdVar4 == local_98) goto LAB_14024ce7a;
  }
  local_108 = *pdVar4;
  dStack_100 = pdVar4[1];
  if ((1 << ((byte)local_98[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_108);
LAB_14024ce7a:
  local_68 = local_98;
  uVar5 = CONCAT44(uVar11,DAT_141a0aa48);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_148,1,uVar5,&local_68);
  dVar8 = 0.0;
  if (pdVar4 != &local_f8) {
    local_108 = *pdVar4;
    dStack_100 = pdVar4[1];
    FUN_140041b80(&local_f8,&local_108);
    local_res20 = uStack_ec;
    dVar8 = local_f8;
  }
  local_d8 = 0xc5;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_14c = 0;
  local_158 = 0.0;
  bVar1 = true;
  do {
    uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (!bVar1) {
      local_d8 = 0xc5;
      uVar2 = local_14c & 0xffffff;
      if ((local_14c & 0xffffff) == 0) {
LAB_14024cf5f:
        local_158 = (double)CONCAT44(uVar10,uVar9) + 1.0;
      }
      else if (uVar2 == 1) {
        local_158 = (double)FUN_140e4b060(&local_158);
        local_158 = local_158 + 1.0;
        local_14c = 0;
      }
      else if (uVar2 == 7) {
        local_158 = (double)CONCAT44(local_158._4_4_,local_158._0_4_ + 1);
      }
      else if (uVar2 == 10) {
        local_158 = (double)((longlong)local_158 + 1);
      }
      else {
        if (uVar2 == 0xd) {
          local_14c = 0;
          goto LAB_14024cf5f;
        }
        FUN_140042910(&DAT_14172c3d8,&local_158,&local_158);
      }
    }
    bVar1 = false;
    iVar3 = 0;
    if ((local_res20 == 2) && (dVar8 != 0.0)) {
      iVar3 = *(int *)((longlong)dVar8 + 0x24);
    }
    dStack_100 = (double)((ulonglong)dStack_100 & 0xffffffff);
    local_108 = (double)iVar3;
    iVar3 = FUN_140e851f0(&local_158,&local_108,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)dStack_100 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if (iVar3 == -2 || -1 < iVar3) {
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if ((1 << ((byte)local_res20 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      _eh_vector_destructor_iterator_(local_b8,0x10,4,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_e8;
      return param_3;
    }
    local_d8 = 0xc6;
    iVar3 = FUN_140e4a740(&local_158);
    pdVar4 = (double *)0x0;
    if (((local_res20 & 0xffffff) == 2) && (dVar8 != 0.0)) {
      if ((iVar3 < 0) || (*(int *)((longlong)dVar8 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)((longlong)dVar8 + 0x24));
      }
      else {
        pdVar4 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar8 + 8));
      }
      if (pdVar4 != &local_138) goto LAB_14024d06e;
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      pdVar4 = &local_f8;
LAB_14024d06e:
      local_118 = *pdVar4;
      dStack_110 = pdVar4[1];
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_118);
    }
    local_d8 = 200;
    local_c4 = DAT_141dce044;
    local_c8 = DAT_141dce040;
    if ((1 << ((byte)DAT_141dce044 & 0x1f) & 0x46U) == 0) {
      local_d0 = DAT_141dce038;
    }
    else {
      FUN_1400419b0(&local_d0,&DAT_141dce038);
    }
    iVar3 = FUN_140e851f0(&local_138,&local_d0,DAT_141955260,0);
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    uVar2 = 1 << ((byte)local_13c & 0x1f);
    if (iVar3 == 0) {
      local_d8 = 0xc9;
      if ((uVar2 & 0x46) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = 0;
      local_140 = 0;
      local_13c = 5;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
      if (param_4 < 2) {
        pdVar6 = (double *)&DAT_1419df7b0;
LAB_14024d1ab:
        local_118 = *pdVar6;
        dStack_110 = pdVar6[1];
        if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_118);
      }
      else {
        pdVar6 = (double *)param_5[1];
        if (pdVar6 != local_b8) goto LAB_14024d1ab;
      }
      local_78 = local_b8;
      local_70 = &local_138;
      if (pdVar4 != local_98) {
        local_118 = *pdVar4;
        dStack_110 = pdVar4[1];
        if ((1 << ((byte)local_98[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_98);
        }
        FUN_140041b80(local_98,&local_118);
      }
      local_68 = local_98;
      uVar5 = CONCAT44(uVar11,DAT_141a01138);
      pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_128,2,uVar5,&local_78);
      uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if (pdVar4 != local_88) {
        local_118 = *pdVar4;
        dStack_110 = pdVar4[1];
        if ((1 << ((byte)local_88[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_88);
        }
        FUN_140041b80(local_88,&local_118);
      }
      if (param_4 < 1) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)*param_5;
      }
      ppdVar12 = &local_68;
      uVar9 = DAT_1419fed78;
      local_60 = local_88;
    }
    else {
      local_d8 = 0xcb;
      if ((uVar2 & 0x46) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = 0;
      local_140 = 0;
      local_13c = 5;
      if (param_4 < 2) {
        pdVar4 = (double *)&DAT_1419df7b0;
LAB_14024d2ff:
        local_118 = *pdVar4;
        dStack_110 = pdVar4[1];
        if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_118);
      }
      else {
        pdVar4 = (double *)param_5[1];
        if (pdVar4 != local_b8) goto LAB_14024d2ff;
      }
      local_78 = local_b8;
      local_70 = &local_138;
      if (param_4 < 1) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)*param_5;
      }
      ppdVar12 = &local_78;
      uVar9 = DAT_141a01138;
    }
    uVar5 = FUN_140e634e0(param_1,param_2,&local_148,2,CONCAT44(uVar11,uVar9),ppdVar12);
    FUN_140e98ef0(param_1,param_2,puVar7,&local_138,uVar5);
    uVar9 = SUB84(local_158,0);
    uVar10 = (undefined4)((ulonglong)local_158 >> 0x20);
  } while( true );
}

