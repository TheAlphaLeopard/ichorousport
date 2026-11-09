// gml_Script_anon_21239_gml_Object_oRogueLevelManager_Other_12 @ 0x140d16940

double * gml_Script_anon_21239_gml_Object_oRogueLevelManager_Other_12
                   (undefined8 param_1,undefined8 param_2,double *param_3,int param_4,
                   undefined8 *param_5)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  double *pdVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar13;
  ulonglong uVar12;
  double **ppdVar14;
  double local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  double local_188;
  uint local_17c;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  uint uStack_15c;
  double local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined1 local_c8 [48];
  double local_98;
  byte local_8c;
  double local_88;
  byte local_7c;
  double *local_78 [3];
  double *local_60;
  double *local_58;
  
  local_140 = "gml_Script_anon@16905@anon@16276@gml_Object_oRogueLevelManager_Other_12";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0x246;
  uVar13 = 1;
  _eh_vector_constructor_iterator_(local_c8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_15c = 0xffffff;
  local_168 = 0.0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  uStack_14c = 0xffffff;
  local_158 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  uStack_18c = 0xffffff;
  local_198 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_124 = 0;
  uVar10 = 0;
  uVar11 = 0;
  local_130 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  local_138 = 0x247;
  plVar9 = &DAT_1419df7b0;
  if (param_4 < 2) {
    pdVar6 = (double *)&DAT_1419df7b0;
LAB_140d16a77:
    local_178 = *pdVar6;
    uStack_170 = pdVar6[1];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_178);
  }
  else {
    pdVar6 = (double *)param_5[1];
    if (pdVar6 != &local_98) goto LAB_140d16a77;
  }
  local_60 = &local_98;
  if (param_4 < 1) {
    pdVar6 = (double *)&DAT_1419df7b0;
LAB_140d16aca:
    local_178 = *pdVar6;
    uStack_170 = pdVar6[1];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_178);
  }
  else {
    pdVar6 = (double *)*param_5;
    if (pdVar6 != &local_88) goto LAB_140d16aca;
  }
  local_58 = &local_88;
  uVar7 = CONCAT44(uVar13,DAT_1419ff4f8);
  pdVar6 = (double *)FUN_140e634e0(param_1,param_2,&local_130,2,uVar7,&local_60);
  uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (pdVar6 != &local_168) {
    local_178 = *pdVar6;
    uStack_170 = pdVar6[1];
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_178);
  }
  local_138 = 0x248;
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  local_130 = 0;
  local_128 = 0;
  local_124 = 5;
  local_78[0] = &local_168;
  ppdVar14 = local_78;
  uVar12 = CONCAT44(uVar13,DAT_1419fdc08);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_130,1,uVar12,ppdVar14);
  cVar3 = FUN_140e491e0(uVar7);
  if (cVar3 != '\0') {
LAB_140d16f56:
    local_138 = 0x24e;
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    uStack_18c = 0;
    local_198 = 0.0;
    bVar2 = true;
    do {
      if (!bVar2) {
        local_138 = 0x24e;
        uVar4 = uStack_18c & 0xffffff;
        if (uVar4 == 0) {
LAB_140d16fc9:
          local_198 = (double)CONCAT44(uVar11,uVar10) + 1.0;
        }
        else if (uVar4 == 1) {
          local_198 = (double)FUN_140e4b060(&local_198);
          local_198 = local_198 + 1.0;
          uStack_18c = 0;
        }
        else if (uVar4 == 7) {
          local_198 = (double)CONCAT44(local_198._4_4_,local_198._0_4_ + 1);
        }
        else if (uVar4 == 10) {
          local_198 = (double)((longlong)local_198 + 1);
        }
        else {
          if (uVar4 == 0xd) {
            uStack_18c = 0;
            goto LAB_140d16fc9;
          }
          FUN_140042910(&DAT_14172c3d8,&local_198,&local_198);
        }
      }
      bVar2 = false;
      if (param_4 < 3) {
        plVar8 = &DAT_1419df7b0;
      }
      else {
        plVar8 = (longlong *)param_5[2];
      }
      iVar5 = 0;
      if ((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) {
        iVar5 = *(int *)(*plVar8 + 0x24);
      }
      uStack_170 = (double)((ulonglong)uStack_170 & 0xffffffff);
      local_178 = (double)iVar5;
      iVar5 = FUN_140e851f0(&local_198,&local_178,DAT_141955260,1);
      if ((1 << ((byte)((ulonglong)uStack_170 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if (iVar5 == -2 || -1 < iVar5) {
        local_138 = 0x251;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        *(undefined4 *)((longlong)param_3 + 0xc) = 0;
        *param_3 = (double)&DAT_bff0000000000000;
        goto LAB_140d17274;
      }
      local_138 = 0x24f;
      iVar5 = FUN_140e4a740(&local_198);
      if (param_4 < 3) {
        plVar8 = &DAT_1419df7b0;
      }
      else {
        plVar8 = (longlong *)param_5[2];
      }
      if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      ppdVar14 = (double **)((ulonglong)ppdVar14 & 0xffffffffffffff00);
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_140e87440(plVar8,DAT_1419fa828,0x80000000,&local_e8,uVar12,ppdVar14);
      cVar3 = FUN_140e491e0(&local_e8);
      if (cVar3 == '\0') goto LAB_140d17139;
      uVar10 = SUB84(local_198,0);
      uVar11 = (undefined4)((ulonglong)local_198 >> 0x20);
    } while( true );
  }
  local_138 = 0x249;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_17c = 0;
  local_188 = 0.0;
  bVar2 = true;
  do {
    if (!bVar2) {
      local_138 = 0x249;
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
            if (uVar4 == 0xd) goto LAB_140d16c66;
            FUN_140042910(&DAT_14172c3d8,&local_188,&local_188);
          }
          goto LAB_140d16c74;
        }
        local_188 = (double)FUN_140e4b060(&local_188);
LAB_140d16c66:
        local_17c = 0;
      }
      local_188 = local_188 + 1.0;
    }
LAB_140d16c74:
    bVar2 = false;
    iVar5 = 0;
    if ((uStack_15c == 2) && (local_168 != 0.0)) {
      iVar5 = *(int *)((longlong)local_168 + 0x24);
    }
    uStack_170 = (double)((ulonglong)uStack_170 & 0xffffffff);
    local_178 = (double)iVar5;
    iVar5 = FUN_140e851f0(&local_188,&local_178,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)uStack_170 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if (iVar5 == -2 || -1 < iVar5) goto LAB_140d16f56;
    local_138 = 0x24a;
    iVar5 = FUN_140e4a740(&local_188);
    pdVar6 = (double *)0x0;
    if (((uStack_15c & 0xffffff) == 2) && (local_168 != 0.0)) {
      if ((iVar5 < 0) || (*(int *)((longlong)local_168 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)((longlong)local_168 + 0x24));
      }
      else {
        pdVar6 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)local_168 + 8));
      }
      if (pdVar6 != &local_158) goto LAB_140d16d5c;
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      pdVar6 = &local_168;
LAB_140d16d5c:
      local_118 = *pdVar6;
      uStack_110 = pdVar6[1];
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_118);
    }
    local_138 = 0x24b;
    iVar5 = FUN_140e4a740(&local_158);
    if (param_4 < 3) {
      plVar8 = &DAT_1419df7b0;
    }
    else {
      plVar8 = (longlong *)param_5[2];
    }
    if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    ppdVar14 = (double **)((ulonglong)ppdVar14 & 0xffffffffffffff00);
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(plVar8,DAT_1419fa828,0x80000000,&local_d8,uVar12,ppdVar14);
    cVar3 = FUN_140e491e0(&local_d8);
  } while (cVar3 != '\0');
  local_138 = 0x24b;
  local_178 = 1.0;
  uVar10 = SUB84(uStack_170,0);
  uStack_170 = (double)CONCAT44(0xd,uVar10);
  local_118 = 1.0;
  uStack_110 = (double)CONCAT44(0xd,uVar10);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_118);
  iVar5 = FUN_140e4a740(&local_158);
  if (2 < param_4) {
    plVar9 = (longlong *)param_5[2];
  }
  if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
    if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar5,
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
  FUN_140e87930(plVar9,DAT_1419fa828,0x80000000,&local_f8);
  if (&local_158 != param_3) {
    uStack_110 = (double)CONCAT44(uStack_14c,uStack_150);
    local_118 = local_158;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_118);
  }
LAB_140d17274:
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return param_3;
LAB_140d17139:
  local_138 = 0x24f;
  local_178 = 1.0;
  uVar10 = SUB84(uStack_170,0);
  uStack_170 = (double)CONCAT44(0xd,uVar10);
  local_118 = 1.0;
  uStack_110 = (double)CONCAT44(0xd,uVar10);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_118);
  iVar5 = FUN_140e4a740(&local_198);
  if (2 < param_4) {
    plVar9 = (longlong *)param_5[2];
  }
  if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
    if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar5,
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
  FUN_140e87930(plVar9,DAT_1419fa828,0x80000000,&local_108);
  if (&local_198 != param_3) {
    uStack_110 = (double)CONCAT44(uStack_18c,uStack_190);
    local_118 = local_198;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_118);
  }
  goto LAB_140d17274;
}

