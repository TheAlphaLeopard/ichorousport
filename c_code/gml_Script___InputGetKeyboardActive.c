// gml_Script___InputGetKeyboardActive @ 0x14009aac0

double * gml_Script___InputGetKeyboardActive
                   (undefined8 param_1,undefined8 param_2,double *param_3,int param_4,
                   undefined8 *param_5)

{
  double dVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  int **ppiVar12;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  double local_f8;
  int iStack_f0;
  uint uStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  uint uStack_dc;
  double local_d8;
  int local_d0;
  uint local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  longlong local_b0;
  uint local_a4;
  int local_a0 [8];
  int *local_80;
  double *local_78;
  undefined8 local_68;
  int iStack_60;
  uint uStack_5c;
  
  local_c0 = "gml_Script___InputGetGamepadOutput";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 3;
  _eh_vector_constructor_iterator_(local_a0,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_a4 = 0xffffff;
  local_b0 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0.0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  local_b8 = 7;
  if (param_4 < 1) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)*param_5;
  }
  local_cc = 0;
  local_d8 = 0.0;
  iVar4 = FUN_140e851f0(puVar10,&local_d8,DAT_141955260,1);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (iVar4 == -2 || -1 < iVar4) {
    local_b8 = 8;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    uVar7 = gml_Script_InputGetBindingName(param_1,param_2,&local_108,0,0);
    cVar3 = FUN_140e491e0(uVar7);
    if (cVar3 == '\0') {
      local_b8 = 8;
      goto LAB_14009abee;
    }
    local_b8 = 9;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    if (param_4 < 1) {
      piVar9 = (int *)&DAT_1419df7b0;
LAB_14009acdf:
      local_e8 = *piVar9;
      iStack_e4 = piVar9[1];
      iStack_e0 = piVar9[2];
      uStack_dc = piVar9[3];
      if ((1 << ((byte)local_a0[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a0);
      }
      FUN_140041b80(local_a0,&local_e8);
    }
    else {
      piVar9 = (int *)*param_5;
      if (piVar9 != local_a0) goto LAB_14009acdf;
    }
    local_80 = local_a0;
    ppiVar12 = &local_80;
    uVar7 = gml_Script_InputDeviceIsGamepad(param_1,param_2,&local_108,1,ppiVar12);
    uVar11 = (undefined4)((ulonglong)ppiVar12 >> 0x20);
    cVar3 = FUN_140e491e0(uVar7);
    if (cVar3 == '\0') {
      local_b8 = 9;
      goto LAB_14009abee;
    }
    local_b8 = 10;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    if (param_4 < 1) {
      piVar9 = (int *)&DAT_1419df7b0;
LAB_14009ad96:
      local_e8 = *piVar9;
      iStack_e4 = piVar9[1];
      iStack_e0 = piVar9[2];
      uStack_dc = piVar9[3];
      if ((1 << ((byte)local_a0[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a0);
      }
      FUN_140041b80(local_a0,&local_e8);
    }
    else {
      piVar9 = (int *)*param_5;
      if (piVar9 != local_a0) goto LAB_14009ad96;
    }
    local_80 = local_a0;
    uVar7 = FUN_140e634e0(param_1,param_2,&local_108,1,CONCAT44(uVar11,DAT_1419fd258),&local_80);
    cVar3 = FUN_140e491e0(uVar7);
    if (cVar3 == '\0') {
      local_b8 = 10;
      goto LAB_14009abee;
    }
    local_b8 = 0xc;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    if (param_4 < 1) {
      piVar9 = (int *)&DAT_1419df7b0;
LAB_14009ae57:
      local_e8 = *piVar9;
      iStack_e4 = piVar9[1];
      iStack_e0 = piVar9[2];
      uStack_dc = piVar9[3];
      if ((1 << ((byte)local_a0[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a0);
      }
      FUN_140041b80(local_a0,&local_e8);
    }
    else {
      piVar9 = (int *)*param_5;
      if (piVar9 != local_a0) goto LAB_14009ae57;
    }
    local_80 = local_a0;
    plVar8 = (longlong *)gml_Script___InputGamepadGUIDParse(param_1,param_2,&local_108,1,&local_80);
    if (plVar8 != &local_b0) {
      local_e8 = (int)*plVar8;
      iStack_e4 = *(int *)((longlong)plVar8 + 4);
      iStack_e0 = (int)plVar8[1];
      uStack_dc = *(uint *)((longlong)plVar8 + 0xc);
      if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      FUN_140041b80(&local_b0,&local_e8);
    }
    local_b8 = 0xe;
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    uStack_ec = 0;
    local_f8 = 32769.0;
    iVar4 = 0x2a;
    do {
      iVar4 = iVar4 + -1;
      local_b8 = 0x11;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_108 = 0;
      local_100 = 0;
      local_fc = 5;
      if (param_4 < 1) {
        piVar9 = (int *)&DAT_1419df7b0;
LAB_14009af87:
        local_68._0_4_ = *piVar9;
        local_68._4_4_ = piVar9[1];
        iStack_60 = piVar9[2];
        uStack_5c = piVar9[3];
        if ((1 << ((byte)local_a0[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a0);
        }
        FUN_140041b80(local_a0,&local_68);
      }
      else {
        piVar9 = (int *)*param_5;
        if (piVar9 != local_a0) goto LAB_14009af87;
      }
      local_80 = local_a0;
      local_78 = &local_f8;
      local_cc = uStack_ec;
      local_d0 = iStack_f0;
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
        local_d8 = local_f8;
      }
      else {
        FUN_1400419b0(&local_d8,&local_f8);
      }
      uStack_dc = 7;
      local_e8 = 0x8001;
      FUN_1400462a0(&local_d8,&local_e8);
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      iVar5 = FUN_140e4a740(&local_d8);
      plVar8 = (longlong *)0x0;
      if (((local_a4 & 0xffffff) == 2) && (local_b0 != 0)) {
        if ((iVar5 < 0) || (*(int *)(local_b0 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(local_b0 + 0x24));
        }
        else {
          plVar8 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(local_b0 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar8 = &local_b0;
      }
      puVar10 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_108,2,plVar8,&local_80);
      if ((*(uint *)((longlong)puVar10 + 0xc) & 0xffffff) == 0) {
        uVar11 = (undefined4)*puVar10;
      }
      else {
        uVar11 = FUN_140e4b060(puVar10);
      }
      dVar1 = (double)FUN_140e78d00(uVar11);
      bVar2 = DAT_141955260 < dVar1 - 0.55;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if (bVar2) {
        local_b8 = 0x13;
        if (&local_f8 == param_3) goto LAB_14009b1ec;
        iStack_60 = iStack_f0;
        uStack_5c = uStack_ec;
        local_68 = local_f8;
        goto LAB_14009b1c9;
      }
      local_b8 = 0x16;
      uVar6 = uStack_ec & 0xffffff;
      if (uVar6 == 0) {
LAB_14009b15a:
        local_f8 = local_f8 + 1.0;
      }
      else {
        if (uVar6 == 1) {
          local_f8 = (double)FUN_140e4b060(&local_f8);
          uStack_ec = 0;
          goto LAB_14009b15a;
        }
        if (uVar6 == 7) {
          local_f8 = (double)CONCAT44(local_f8._4_4_,local_f8._0_4_ + 1);
        }
        else if (uVar6 == 10) {
          local_f8 = (double)((longlong)local_f8 + 1);
        }
        else {
          if (uVar6 == 0xd) {
            uStack_ec = 0;
            goto LAB_14009b15a;
          }
          FUN_140042910(&DAT_14172c3d8,&local_f8,&local_f8);
        }
      }
    } while (0 < iVar4);
    local_b8 = 0x19;
    if (param_3 == (double *)&DAT_1419df7b0) goto LAB_14009b1ec;
    iStack_60 = DAT_1419df7b8;
    uStack_5c = DAT_1419df7bc;
    local_68 = (double)CONCAT44(DAT_1419df7b0._4_4_,(int)DAT_1419df7b0);
LAB_14009b1c9:
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    piVar9 = (int *)&local_68;
  }
  else {
    local_b8 = 7;
LAB_14009abee:
    if (param_3 == (double *)&DAT_1419df7b0) goto LAB_14009b1ec;
    local_e8 = (int)DAT_1419df7b0;
    iStack_e4 = DAT_1419df7b0._4_4_;
    iStack_e0 = DAT_1419df7b8;
    uStack_dc = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    piVar9 = &local_e8;
  }
  FUN_140041b80(param_3,piVar9);
LAB_14009b1ec:
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  _eh_vector_destructor_iterator_(local_a0,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

