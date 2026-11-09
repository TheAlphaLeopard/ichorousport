// gml_Script_anon_1591_gml_Object_oRogueLevelManager_Other_12 @ 0x140d00090

double * gml_Script_anon_1591_gml_Object_oRogueLevelManager_Other_12
                   (longlong *param_1,undefined8 param_2,double *param_3,int param_4,
                   undefined8 *param_5)

{
  double dVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  double *pdVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  code *pcVar10;
  double **in_stack_fffffffffffffec0;
  double local_138;
  uint local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  double local_100;
  undefined4 local_f4;
  double local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  undefined4 local_ac;
  double *local_a8;
  double *local_a0;
  undefined8 local_90;
  undefined4 local_84;
  undefined1 local_80 [16];
  double local_70 [7];
  
  local_110 = "gml_Script_anon@2216@gml_Object_oRogueLevelManager_Other_12";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x51;
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_80,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_dc = 0xffffff;
  local_e8 = 0.0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_f4 = 0xffffff;
  local_100 = 0.0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_84 = 0;
  local_90 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  local_108 = 0x52;
  pdVar6 = (double *)FUN_140e8da20(&local_90,param_1,0);
  if (pdVar6 != &local_e8) {
    local_c8 = *pdVar6;
    dStack_c0 = pdVar6[1];
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_c8);
  }
  local_108 = 0x53;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_12c = 0;
  local_138 = 0.0;
  bVar2 = true;
LAB_140d001f0:
  do {
    iVar5 = 0;
    if (!bVar2) {
      local_108 = 0x53;
      uVar4 = local_12c & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_138 = (double)CONCAT44(local_138._4_4_,local_138._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_138 = (double)((longlong)local_138 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_12c = 0;
              goto LAB_140d0024a;
            }
            FUN_140042910(&DAT_14172c3d8,&local_138,&local_138);
          }
          goto LAB_140d00254;
        }
        local_138 = (double)FUN_140e4b060(&local_138);
        local_12c = 0;
      }
LAB_140d0024a:
      local_138 = local_138 + 1.0;
    }
LAB_140d00254:
    bVar2 = false;
    plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fa368);
    if ((*(int *)((longlong)plVar7 + 0xc) == 2) && (*plVar7 != 0)) {
      iVar5 = *(int *)(*plVar7 + 0x24);
    }
    dStack_c0 = (double)((ulonglong)dStack_c0 & 0xffffffff);
    local_c8 = (double)iVar5;
    iVar5 = FUN_140e851f0(&local_138,&local_c8,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)dStack_c0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    if (iVar5 == -2 || -1 < iVar5) {
      local_108 = 0x5e;
      if (&local_e8 != param_3) {
        dStack_d0 = (double)CONCAT44(uStack_dc,uStack_e0);
        local_d8 = local_e8;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_d8);
      }
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_90);
      }
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_100);
      }
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      _eh_vector_destructor_iterator_(local_80,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_118;
      return param_3;
    }
    local_108 = 0x54;
    pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fa368);
    iVar5 = FUN_140e4a740(&local_138);
    if (((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 2) && (dVar1 = *pdVar6, dVar1 != 0.0)) {
      if ((iVar5 < 0) || (*(int *)((longlong)dVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)((longlong)dVar1 + 0x24));
        pdVar6 = (double *)0x0;
      }
      else {
        pdVar6 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar6 != &local_100) {
      local_d8 = *pdVar6;
      dStack_d0 = pdVar6[1];
      if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_100);
      }
      FUN_140041b80(&local_100,&local_d8);
    }
    local_108 = 0x56;
    if (param_4 < 1) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)*param_5;
    }
    cVar3 = FUN_140e491e0(puVar9);
    if (cVar3 == '\0') {
LAB_140d00403:
      local_108 = 0x58;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      pcVar10 = (code *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fa868);
      local_a8 = &local_100;
      if (param_4 < 2) {
        pdVar6 = (double *)&DAT_1419df7b0;
LAB_140d0046f:
        local_d8 = *pdVar6;
        dStack_d0 = pdVar6[1];
        if ((1 << ((byte)local_70[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_70);
        }
        FUN_140041b80(local_70,&local_d8);
      }
      else {
        pdVar6 = (double *)param_5[1];
        if (pdVar6 != local_70) goto LAB_140d0046f;
      }
      local_a0 = local_70;
      in_stack_fffffffffffffec0 = &local_a8;
      uVar8 = FUN_140e63610(param_1,param_2,&local_128,2,pcVar10,in_stack_fffffffffffffec0);
      cVar3 = FUN_140e491e0(uVar8);
      if (cVar3 == '\0') {
        local_108 = 0x58;
      }
      else {
        local_108 = 0x5a;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_128 = 0;
        local_120 = 0;
        local_11c = 5;
        pcVar10 = (code *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fa888);
        local_a8 = &local_100;
        if (param_4 < 3) {
          pdVar6 = (double *)&DAT_1419df7b0;
LAB_140d0054f:
          local_d8 = *pdVar6;
          dStack_d0 = pdVar6[1];
          if ((1 << ((byte)local_70[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_70);
          }
          FUN_140041b80(local_70,&local_d8);
        }
        else {
          pdVar6 = (double *)param_5[2];
          if (pdVar6 != local_70) goto LAB_140d0054f;
        }
        local_a0 = local_70;
        in_stack_fffffffffffffec0 = &local_a8;
        uVar8 = FUN_140e63610(param_1,param_2,&local_128,2,pcVar10,in_stack_fffffffffffffec0);
        cVar3 = FUN_140e491e0(uVar8);
        if (cVar3 == '\0') {
          local_108 = 0x5a;
        }
        else {
          local_108 = 0x5c;
          if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          local_128 = 0;
          local_120 = 0;
          local_11c = 5;
          local_a8 = &local_e8;
          local_a0 = &local_138;
          in_stack_fffffffffffffec0 = &local_a8;
          pcVar10 = (code *)CONCAT44((int)((ulonglong)pcVar10 >> 0x20),DAT_1419fe568);
          FUN_140e634e0(param_1,param_2,&local_128,2,pcVar10,in_stack_fffffffffffffec0);
        }
      }
      goto LAB_140d001f0;
    }
    in_stack_fffffffffffffec0 =
         (double **)((ulonglong)in_stack_fffffffffffffec0 & 0xffffffffffffff00);
    pcVar10 = (code *)((ulonglong)pcVar10 & 0xffffffffffffff00);
    FUN_140e87440(&local_100,DAT_1419fa3c8,0x80000000,&local_b8,pcVar10,in_stack_fffffffffffffec0);
    cVar3 = FUN_140e491e0(&local_b8);
    if (cVar3 == '\0') goto LAB_140d00403;
    local_108 = 0x56;
  } while( true );
}

