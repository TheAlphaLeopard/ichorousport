// gml_Script_anon_6618_DefineBuffs_OFFERINGSINIT @ 0x1403c60c0

undefined8 *
gml_Script_anon_6618_DefineBuffs_OFFERINGSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar15;
  ulonglong uVar13;
  double **ppdVar14;
  double **ppdVar16;
  ulonglong uVar17;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  double local_1c8;
  uint local_1bc;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  double local_198;
  double dStack_190;
  double local_188;
  int local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  double local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  byte local_14c;
  double local_148;
  byte local_13c;
  double local_138 [2];
  double local_128 [2];
  double local_118 [2];
  double local_108 [2];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  double *local_d0;
  double *local_c8;
  double *local_c0;
  double *local_b8;
  double *local_b0;
  double *local_a8;
  undefined1 *local_a0;
  double local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  double local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_e0 = "gml_Script_add_offering";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0xcf;
  uVar15 = 1;
  _eh_vector_constructor_iterator_(&local_158,0x10,7,FUN_1400424d0,FUN_140041b30);
  pdVar4 = (double *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  local_17c = 0xffffff;
  local_188 = 0.0;
  pdVar5 = (double *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57cf0);
  uStack_6c = 0xffffff;
  local_78 = 0.0;
  pdVar6 = (double *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f5f18);
  local_1bc = 0xffffff;
  local_1c8 = 0.0;
  local_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0.0;
  local_1cc = 0;
  uVar11 = 0;
  uVar12 = 0;
  local_1d8 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0xd1;
  if (pdVar4 != &local_148) {
    local_1b8 = *pdVar4;
    uStack_1b0 = pdVar4[1];
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1b8);
  }
  local_c8 = &local_148;
  uVar8 = CONCAT44(uVar15,DAT_141a0aa48);
  pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_1d8,1,uVar8,&local_c8);
  uVar15 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (pdVar7 != &local_188) {
    local_1b8 = *pdVar7;
    uStack_1b0 = pdVar7[1];
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1b8);
  }
  local_d8 = 0xd3;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  if (pdVar5 != &local_158) {
    local_1b8 = *pdVar5;
    uStack_1b0 = pdVar5[1];
    if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1b8);
  }
  local_d0 = &local_158;
  if (param_4 < 1) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_1403c633e:
    local_1b8 = *pdVar5;
    uStack_1b0 = pdVar5[1];
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1b8);
  }
  else {
    pdVar5 = (double *)*param_5;
    if (pdVar5 != &local_148) goto LAB_1403c633e;
  }
  local_c8 = &local_148;
  ppdVar16 = &local_d0;
  uVar13 = CONCAT44(uVar15,DAT_141a57350);
  FUN_140e634e0(param_1,param_2,&local_1d8,2,uVar13,ppdVar16);
  local_d8 = 0xd5;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  uVar13 = uVar13 & 0xffffffffffffff00;
  FUN_140e87440(pdVar4,DAT_1419eeec8,0x80000000,&local_78,uVar13,
                (ulonglong)ppdVar16 & 0xffffffffffffff00);
  uVar15 = (undefined4)(uVar13 >> 0x20);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_168,gml_Script_add_offering,0);
  if (&local_168 != pdVar6) {
    uStack_1b0 = (double)CONCAT44(uStack_15c,uStack_160);
    local_1b8 = local_168;
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar6);
    }
    FUN_140041b80(pdVar6,&local_1b8);
  }
  FUN_140e60910(1);
  if (pdVar6 != &local_158) {
    local_1b8 = *pdVar6;
    uStack_1b0 = pdVar6[1];
    if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1b8);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_d0 = &local_158;
  if (param_4 < 1) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)*param_5;
    if (pdVar5 == &local_148) goto LAB_1403c651b;
  }
  local_1b8 = *pdVar5;
  uStack_1b0 = pdVar5[1];
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_1b8);
LAB_1403c651b:
  local_c8 = &local_148;
  uStack_1b0 = (double)CONCAT44(uStack_6c,uStack_70);
  local_1b8 = local_78;
  if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_1b8);
  local_c0 = local_138;
  ppdVar16 = &local_d0;
  pdVar5 = (double *)
           FUN_140e634e0(param_1,param_2,&local_1a8,2,CONCAT44(uVar15,DAT_1419fd6d8),ppdVar16);
  if (pdVar5 != local_128) {
    local_1b8 = *pdVar5;
    uStack_1b0 = pdVar5[1];
    if ((1 << ((byte)local_128[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_1b8);
  }
  local_b8 = local_128;
  ppdVar14 = &local_c0;
  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
            (param_1,param_2,&local_1d8,2,ppdVar14);
  local_d8 = 0xd7;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1bc = 0;
  local_1c8 = 0.0;
  bVar1 = true;
  do {
    iVar3 = 0;
    if (!bVar1) {
      local_d8 = 0xd7;
      uVar2 = local_1bc & 0xffffff;
      if (uVar2 == 0) {
LAB_1403c6671:
        local_1c8 = (double)CONCAT44(uVar12,uVar11) + 1.0;
      }
      else if (uVar2 == 1) {
        local_1c8 = (double)FUN_140e4b060(&local_1c8);
        local_1c8 = local_1c8 + 1.0;
        local_1bc = 0;
      }
      else if (uVar2 == 7) {
        local_1c8 = (double)CONCAT44(local_1c8._4_4_,local_1c8._0_4_ + 1);
      }
      else if (uVar2 == 10) {
        local_1c8 = (double)((longlong)local_1c8 + 1);
      }
      else {
        if (uVar2 == 0xd) {
          local_1bc = 0;
          goto LAB_1403c6671;
        }
        FUN_140042910(&DAT_14172c3d8,&local_1c8,&local_1c8);
      }
    }
    bVar1 = false;
    if ((local_17c == 2) && (local_188 != 0.0)) {
      iVar3 = *(int *)((longlong)local_188 + 0x24);
    }
    uStack_15c = 0;
    local_168 = (double)iVar3;
    iVar3 = FUN_140e851f0(&local_1c8,&local_168,DAT_141955260,1);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    uVar2 = 1 << ((byte)local_1cc & 0x1f);
    if (iVar3 == -2 || -1 < iVar3) {
      local_d8 = 0xe6;
      puVar10 = &DAT_1419df7b0;
      if ((uVar2 & 0x46) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      if (param_4 < 1) {
        puVar9 = &DAT_1419df7b0;
      }
      else {
        puVar9 = (undefined8 *)*param_5;
      }
      uVar17 = (ulonglong)ppdVar16 & 0xffffffffffffff00;
      uVar13 = (ulonglong)ppdVar14 & 0xffffffffffffff00;
      FUN_140e87440(puVar9,DAT_1419f61f8,0x80000000,&local_88,uVar13,uVar17);
      FUN_140e87440(pdVar4,DAT_141a1f3f0,0x80000000,&local_98,uVar13 & 0xffffffffffffff00,
                    uVar17 & 0xffffffffffffff00);
      dStack_190 = (double)CONCAT44(uStack_8c,uStack_90);
      local_198 = local_98;
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_198);
      local_d0 = &local_158;
      if (0 < param_4) {
        puVar10 = (undefined8 *)*param_5;
      }
      uVar8 = FUN_140069500(puVar10);
      FUN_140e63610(uVar8,param_2,&local_1d8,1,&local_88,&local_d0);
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      _eh_vector_destructor_iterator_(&local_158,0x10,7,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_e8;
      return param_3;
    }
    local_d8 = 0xd9;
    if ((uVar2 & 0x46) != 0) {
      FUN_140041a50(&local_1d8);
    }
    uVar11 = (undefined4)((ulonglong)ppdVar14 >> 0x20);
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    local_d0 = &local_188;
    local_c8 = &local_1c8;
    if (pdVar4 != local_138) {
      local_198 = *pdVar4;
      dStack_190 = pdVar4[1];
      if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_198);
    }
    local_c0 = local_138;
    uVar8 = CONCAT44(uVar11,DAT_141a03ca8);
    pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_178,2,uVar8,&local_d0);
    uVar11 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (pdVar5 != local_128) {
      local_198 = *pdVar5;
      dStack_190 = pdVar5[1];
      if ((1 << ((byte)local_128[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_198);
    }
    local_b8 = local_128;
    uStack_1b0 = (double)CONCAT44(0xf,(undefined4)uStack_1b0);
    local_1b8 = 7.291122019556822e-304;
    local_198 = 7.291122019556822e-304;
    dStack_190 = uStack_1b0;
    if ((1 << ((byte)local_118[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_198);
    local_b0 = local_118;
    ppdVar16 = &local_c0;
    pdVar5 = (double *)
             FUN_140e634e0(param_1,param_2,&local_1a8,2,CONCAT44(uVar11,DAT_141a01138),ppdVar16);
    if (pdVar5 != local_108) {
      local_198 = *pdVar5;
      dStack_190 = pdVar5[1];
      if ((1 << ((byte)local_108[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_198);
    }
    local_a8 = local_108;
    FUN_140e645a0(&local_68,gml_Script_anon_6327_DefineBuffs_OFFERINGSINIT,param_1);
    dStack_190 = (double)CONCAT44(uStack_5c,uStack_60);
    local_198 = local_68;
    if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_198);
    if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    local_a0 = local_f8;
    ppdVar14 = &local_b0;
    gml_Script_SignalRemove(param_1,param_2,&local_1d8,3,ppdVar14);
    uVar11 = SUB84(local_1c8,0);
    uVar12 = (undefined4)((ulonglong)local_1c8 >> 0x20);
  } while( true );
}

