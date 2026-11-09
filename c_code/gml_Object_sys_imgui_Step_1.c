// gml_Object_sys_imgui_Step_1 @ 0x140e3a2f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * gml_Object_sys_imgui_Step_1
                   (undefined8 param_1,undefined8 param_2,double *param_3,int param_4,
                   undefined8 *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 *puVar6;
  double dVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar12;
  ulonglong uVar11;
  double **ppdVar13;
  double local_138;
  uint local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  double local_118;
  undefined4 local_10c;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  double dStack_e0;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  double local_c0;
  undefined4 local_b4;
  double local_b0;
  uint uStack_a4;
  double *local_a0;
  double *local_98;
  undefined8 local_90;
  undefined4 local_84;
  double local_80 [9];
  
  local_d0 = "gml_Script_anon@648@gml_Object_sys_imgui_Create_0";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x20;
  uVar12 = 1;
  _eh_vector_constructor_iterator_(local_80,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = 0.0;
  pdVar4 = (double *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef1a8);
  uStack_a4 = 0xffffff;
  local_b0 = 0.0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_b4 = 0xffffff;
  local_c0 = 0.0;
  uStack_ec = 0xffffff;
  local_f8 = 0.0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_11c = 0;
  uVar9 = 0;
  uVar10 = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  local_c8 = 0x22;
  local_108 = _DAT_141ddc018;
  dStack_100 = dRam0000000141ddc020;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_108);
  local_c8 = 0x23;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if (pdVar4 != local_80) {
    local_108 = *pdVar4;
    dStack_100 = pdVar4[1];
    if ((1 << ((byte)local_80[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_80);
    }
    FUN_140041b80(local_80,&local_108);
  }
  local_a0 = local_80;
  uVar11 = CONCAT44(uVar12,DAT_141a0aa48);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_128,1,uVar11,&local_a0);
  dVar7 = 0.0;
  uVar8 = 0xffffff;
  if (pdVar5 != &local_b0) {
    local_108 = *pdVar5;
    dStack_100 = pdVar5[1];
    FUN_140041b80(&local_b0,&local_108);
    dVar7 = local_b0;
    uVar8 = uStack_a4;
  }
  local_c8 = 0x24;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_12c = 0;
  local_138 = 0.0;
  bVar1 = true;
  do {
    uVar12 = (undefined4)(uVar11 >> 0x20);
    iVar3 = 0;
    if (!bVar1) {
      local_c8 = 0x24;
      uVar2 = local_12c & 0xffffff;
      if (uVar2 == 0) {
LAB_140e3a577:
        local_138 = (double)CONCAT44(uVar10,uVar9) + 1.0;
      }
      else if (uVar2 == 1) {
        local_138 = (double)FUN_140e4b060(&local_138);
        local_138 = local_138 + 1.0;
        local_12c = 0;
      }
      else if (uVar2 == 7) {
        local_138 = (double)CONCAT44(local_138._4_4_,local_138._0_4_ + 1);
      }
      else if (uVar2 == 10) {
        local_138 = (double)((longlong)local_138 + 1);
      }
      else {
        if (uVar2 == 0xd) {
          local_12c = 0;
          goto LAB_140e3a577;
        }
        FUN_140042910(&DAT_14172c3d8,&local_138,&local_138);
      }
    }
    bVar1 = false;
    if ((uVar8 == 2) && (dVar7 != 0.0)) {
      iVar3 = *(int *)((longlong)dVar7 + 0x24);
    }
    dStack_100 = (double)((ulonglong)dStack_100 & 0xffffffff);
    local_108 = (double)iVar3;
    iVar3 = FUN_140e851f0(&local_138,&local_108,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)dStack_100 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if (iVar3 == -2 || -1 < iVar3) goto LAB_140e3a838;
    local_c8 = 0x25;
    iVar3 = FUN_140e4a740(&local_138);
    pdVar5 = (double *)0x0;
    if (((uVar8 & 0xffffff) == 2) && (dVar7 != 0.0)) {
      if ((iVar3 < 0) || (*(int *)((longlong)dVar7 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)((longlong)dVar7 + 0x24));
      }
      else {
        pdVar5 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar7 + 8));
      }
      if (pdVar5 != &local_c0) goto LAB_140e3a680;
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      pdVar5 = &local_b0;
LAB_140e3a680:
      local_e8 = *pdVar5;
      dStack_e0 = pdVar5[1];
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      FUN_140041b80(&local_c0,&local_e8);
    }
    local_c8 = 0x26;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    if (pdVar4 != local_80) {
      local_e8 = *pdVar4;
      dStack_e0 = pdVar4[1];
      if ((1 << ((byte)local_80[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_80);
      }
      FUN_140041b80(local_80,&local_e8);
    }
    local_a0 = local_80;
    local_98 = &local_c0;
    ppdVar13 = &local_a0;
    uVar11 = CONCAT44(uVar12,DAT_141a01138);
    pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_128,2,uVar11,ppdVar13);
    if (pdVar5 != &local_f8) {
      local_e8 = *pdVar5;
      dStack_e0 = pdVar5[1];
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_e8);
    }
    local_c8 = 0x27;
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(&local_f8,DAT_141a05b88,0x80000000,&local_90,uVar11,
                  (ulonglong)ppdVar13 & 0xffffffffffffff00);
    if (param_4 < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*param_5;
    }
    iVar3 = FUN_140e851f0(&local_90,puVar6,DAT_141955260,0);
    uVar12 = (undefined4)(uVar11 >> 0x20);
    if (iVar3 == 0) {
      local_c8 = 0x28;
      dStack_e0 = (double)CONCAT44(uStack_ec,uStack_f0);
      local_e8 = local_f8;
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_e8);
LAB_140e3a838:
      local_c8 = 0x2c;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      local_a0 = &local_118;
      pdVar4 = (double *)
               FUN_140e634e0(param_1,param_2,&local_128,1,CONCAT44(uVar12,DAT_1419fd0c8),&local_a0);
      if (pdVar4 != param_3) {
        local_e8 = *pdVar4;
        dStack_e0 = pdVar4[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_e8);
      }
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_90);
      }
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      _eh_vector_destructor_iterator_(local_80,0x10,2,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_d8;
      return param_3;
    }
    uVar9 = SUB84(local_138,0);
    uVar10 = (undefined4)((ulonglong)local_138 >> 0x20);
  } while( true );
}

