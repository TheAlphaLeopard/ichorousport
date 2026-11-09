// gml_Script____struct___747_anon_5171_gml_Object_oRogueLevelManager_Other_11 @ 0x140ce85a0

undefined8 *
gml_Script____struct___747_anon_5171_gml_Object_oRogueLevelManager_Other_11
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  double *pdVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  double dVar14;
  double dVar15;
  double **ppdVar16;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  double local_1e8;
  uint local_1dc;
  double local_1d8;
  uint local_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  double *local_118;
  double *local_110;
  double *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined4 *local_f0;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  double local_c8 [10];
  undefined4 local_78 [16];
  
  local_1b0 = "gml_Script_anon@3551@gml_Object_oRogueLevelManager_Other_11";
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1b8;
  local_1a8 = 0x9a;
  _eh_vector_constructor_iterator_(local_c8,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0.0;
  local_1dc = 0xffffff;
  local_1e8 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  pdVar7 = (double *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fa4e8);
  local_cc = 0;
  local_d8 = 0;
  local_1fc = 0;
  local_208 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1a8 = 0x9b;
  puVar8 = (undefined8 *)FUN_140e8da20(&local_d8,param_1,0);
  if (puVar8 != &local_148) {
    local_1c8._0_4_ = *(undefined4 *)puVar8;
    local_1c8._4_4_ = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_1c0 = *(undefined4 *)(puVar8 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1c8);
  }
  local_1a8 = 0x9c;
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 5) {
    puVar9 = &DAT_1419df7b0;
    if (param_4 < 1) {
      puVar13 = &DAT_1419df7b0;
    }
    else {
      puVar13 = (undefined8 *)*param_5;
    }
  }
  else {
    puVar9 = (undefined8 *)param_5[4];
    puVar13 = (undefined8 *)*param_5;
  }
  uStack_1ec = *(undefined4 *)((longlong)puVar13 + 0xc);
  uStack_1f0 = *(undefined4 *)(puVar13 + 1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
    local_1f8 = *puVar13;
  }
  else {
    FUN_1400419b0(&local_1f8);
  }
  FUN_1400460e0(&local_1f8,puVar9);
  local_1c8._0_4_ = (undefined4)local_1f8;
  local_1c8._4_4_ = local_1f8._4_4_;
  uStack_1c0 = uStack_1f0;
  uStack_1bc = uStack_1ec;
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_1c8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1a8 = 0x9d;
  if (param_4 < 5) {
    puVar9 = &DAT_1419df7b0;
    if (param_4 < 2) {
      puVar13 = &DAT_1419df7b0;
    }
    else {
      puVar13 = (undefined8 *)param_5[1];
    }
  }
  else {
    puVar9 = (undefined8 *)param_5[4];
    puVar13 = (undefined8 *)param_5[1];
  }
  uStack_1ec = *(undefined4 *)((longlong)puVar13 + 0xc);
  uStack_1f0 = *(undefined4 *)(puVar13 + 1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
    local_1f8 = *puVar13;
  }
  else {
    FUN_1400419b0(&local_1f8);
  }
  FUN_1400462a0(&local_1f8,puVar9);
  local_1c8._0_4_ = (undefined4)local_1f8;
  local_1c8._4_4_ = local_1f8._4_4_;
  uStack_1c0 = uStack_1f0;
  uStack_1bc = uStack_1ec;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_1c8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1a8 = 0x9e;
  if (param_4 < 5) {
    puVar9 = &DAT_1419df7b0;
    if (param_4 < 3) {
      puVar13 = &DAT_1419df7b0;
    }
    else {
      puVar13 = (undefined8 *)param_5[2];
    }
  }
  else {
    puVar9 = (undefined8 *)param_5[4];
    puVar13 = (undefined8 *)param_5[2];
  }
  uStack_1ec = *(undefined4 *)((longlong)puVar13 + 0xc);
  uStack_1f0 = *(undefined4 *)(puVar13 + 1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
    local_1f8 = *puVar13;
  }
  else {
    FUN_1400419b0(&local_1f8);
  }
  FUN_1400460e0(&local_1f8,puVar9);
  local_1c8._0_4_ = (undefined4)local_1f8;
  local_1c8._4_4_ = local_1f8._4_4_;
  uStack_1c0 = uStack_1f0;
  uStack_1bc = uStack_1ec;
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_1c8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1a8 = 0x9f;
  if (param_4 < 5) {
    puVar9 = &DAT_1419df7b0;
    if (param_4 < 4) {
      puVar13 = &DAT_1419df7b0;
    }
    else {
      puVar13 = (undefined8 *)param_5[3];
    }
  }
  else {
    puVar9 = (undefined8 *)param_5[4];
    puVar13 = (undefined8 *)param_5[3];
  }
  uStack_1ec = *(undefined4 *)((longlong)puVar13 + 0xc);
  uStack_1f0 = *(undefined4 *)(puVar13 + 1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
    local_1f8 = *puVar13;
  }
  else {
    FUN_1400419b0(&local_1f8);
  }
  FUN_1400462a0(&local_1f8,puVar9);
  local_1c8._0_4_ = (undefined4)local_1f8;
  local_1c8._4_4_ = local_1f8._4_4_;
  uStack_1c0 = uStack_1f0;
  uStack_1bc = uStack_1ec;
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  FUN_140041b80(&local_1a0,&local_1c8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1a8 = 0xa1;
  uVar4 = FUN_140e851f0(&local_168,&local_178,DAT_141955260,1);
  if (uVar4 < 0x80000000) {
    local_1a8 = 0xa1;
    if (param_4 < 1) {
      puVar9 = &DAT_1419df7b0;
LAB_140ce8a7b:
      local_1c8._0_4_ = *(undefined4 *)puVar9;
      local_1c8._4_4_ = *(undefined4 *)((longlong)puVar9 + 4);
      uStack_1c0 = *(undefined4 *)(puVar9 + 1);
      uStack_1bc = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1c8);
    }
    else {
      puVar9 = (undefined8 *)*param_5;
      if (puVar9 != &local_168) goto LAB_140ce8a7b;
    }
    if (param_4 < 2) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)param_5[1];
      if (puVar9 == &local_178) goto LAB_140ce8aed;
    }
    local_1c8._0_4_ = *(undefined4 *)puVar9;
    local_1c8._4_4_ = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_1c0 = *(undefined4 *)(puVar9 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1c8);
  }
LAB_140ce8aed:
  local_1a8 = 0xa2;
  uVar4 = FUN_140e851f0(&local_188,&local_1a0,DAT_141955260,1);
  if (0x7fffffff < uVar4) goto LAB_140ce8bb0;
  local_1a8 = 0xa2;
  if (param_4 < 3) {
    puVar9 = &DAT_1419df7b0;
LAB_140ce8b43:
    local_1c8._0_4_ = *(undefined4 *)puVar9;
    local_1c8._4_4_ = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_1c0 = *(undefined4 *)(puVar9 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1c8);
  }
  else {
    puVar9 = (undefined8 *)param_5[2];
    if (puVar9 != &local_188) goto LAB_140ce8b43;
  }
  if ((param_4 < 4) || (puVar8 = (undefined8 *)param_5[3], puVar8 != &local_1a0)) {
    local_1c8._0_4_ = *(undefined4 *)puVar8;
    local_1c8._4_4_ = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_1c0 = *(undefined4 *)(puVar8 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a0);
    }
    FUN_140041b80(&local_1a0,&local_1c8);
  }
LAB_140ce8bb0:
  local_1a8 = 0xa4;
  local_1c8._0_4_ = (undefined4)local_188;
  local_1c8._4_4_ = local_188._4_4_;
  uStack_1c0 = uStack_180;
  uStack_1bc = uStack_17c;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140041b80(&local_1d8,&local_1c8);
  bVar1 = true;
LAB_140ce8bf5:
  if (bVar1) goto LAB_140ce8c5f;
  local_1a8 = 0xa4;
  uVar4 = local_1cc & 0xffffff;
  if (uVar4 != 0) {
    if (uVar4 == 1) {
      local_1d8 = (double)FUN_140e4b060(&local_1d8);
      local_1d8 = local_1d8 + 1.0;
      local_1cc = 0;
      goto LAB_140ce8c5f;
    }
    if (uVar4 == 7) {
      local_1d8 = (double)CONCAT44(local_1d8._4_4_,local_1d8._0_4_ + 1);
      goto LAB_140ce8c5f;
    }
    if (uVar4 == 10) {
      local_1d8 = (double)((longlong)local_1d8 + 1);
      goto LAB_140ce8c5f;
    }
    if (uVar4 != 0xd) {
      FUN_140042910(&DAT_14172c3d8,&local_1d8,&local_1d8);
      goto LAB_140ce8c5f;
    }
    local_1cc = 0;
  }
  local_1d8 = local_1d8 + 1.0;
LAB_140ce8c5f:
  bVar1 = false;
  iVar5 = FUN_140e851f0(&local_1d8,&local_1a0,DAT_141955260,1);
  if ((iVar5 == -2) || (-1 < iVar5)) {
    local_1a8 = 0xb0;
    if (&local_148 != param_3) {
      local_158 = (undefined4)local_148;
      uStack_154 = local_148._4_4_;
      uStack_150 = uStack_140;
      uStack_14c = uStack_13c;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_158);
    }
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a0);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    _eh_vector_destructor_iterator_(local_c8,0x10,6,FUN_140041b30);
    DAT_141dc7a50 = (undefined8 *)local_1b8;
    return param_3;
  }
  local_1a8 = 0xa5;
  local_158 = (undefined4)local_168;
  uStack_154 = local_168._4_4_;
  uStack_150 = uStack_160;
  uStack_14c = uStack_15c;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_158);
  bVar2 = true;
  do {
    if (!bVar2) {
      local_1a8 = 0xa5;
      uVar4 = local_1dc & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_1e8 = (double)CONCAT44(local_1e8._4_4_,local_1e8._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_1e8 = (double)((longlong)local_1e8 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_1dc = 0;
              goto LAB_140ce8d60;
            }
            FUN_140042910(&DAT_14172c3d8,&local_1e8,&local_1e8);
          }
          goto LAB_140ce8d6b;
        }
        local_1e8 = (double)FUN_140e4b060(&local_1e8);
        local_1dc = 0;
      }
LAB_140ce8d60:
      local_1e8 = local_1e8 + 1.0;
    }
LAB_140ce8d6b:
    bVar2 = false;
    iVar5 = FUN_140e851f0(&local_1e8,&local_178,DAT_141955260,1);
    if ((iVar5 == -2) || (-1 < iVar5)) goto LAB_140ce8bf5;
    local_1a8 = 0xa6;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
    local_118 = &local_1e8;
    local_110 = &local_1d8;
    ppdVar16 = &local_118;
    uVar11 = FUN_140e63610(param_1,param_2,&local_208,2,uVar10,ppdVar16);
    cVar3 = FUN_140e491e0(uVar11);
    if (cVar3 == '\0') {
      local_1a8 = 0xa6;
    }
    else {
      local_1a8 = 0xa7;
      uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      dVar14 = local_1d8;
      if ((local_1cc & 0xffffff) != 0) {
        dVar14 = (double)FUN_140e4b060(&local_1d8);
      }
      dVar15 = local_1e8;
      if ((local_1dc & 0xffffff) != 0) {
        dVar15 = (double)FUN_140e4b060(&local_1e8);
      }
      uVar6 = FUN_140e4a740(uVar11);
      uVar11 = FUN_140ea8b20(&local_208,uVar6,(longlong)dVar15,(longlong)dVar14);
      FUN_140e87440(uVar11,DAT_141a57c50,0x80000000,&local_e8,uVar10 & 0xffffffffffffff00,
                    (ulonglong)ppdVar16 & 0xffffffffffffff00);
      uStack_1ec = DAT_141ddaf24;
      uStack_1f0 = DAT_141ddaf20;
      if ((1 << ((byte)DAT_141ddaf24 & 0x1f) & 0x46U) == 0) {
        local_1f8 = DAT_141ddaf18;
      }
      else {
        FUN_1400419b0(&local_1f8,&DAT_141ddaf18);
      }
      iVar5 = FUN_140e851f0(&local_e8,&local_1f8,DAT_141955260,0);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      if (iVar5 == 0) {
        local_1a8 = 0xa9;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fa4f8);
        local_118 = &local_1e8;
        local_110 = &local_1d8;
        uVar11 = FUN_140e63610(param_1,param_2,&local_208,2,uVar11,&local_118);
        cVar3 = FUN_140e491e0(uVar11);
        if (cVar3 == '\0') {
          local_1a8 = 0xaa;
          if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          local_208 = 0;
          local_200 = 0;
          local_1fc = 5;
          uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fa478);
          local_118 = &local_1e8;
          local_110 = &local_1d8;
          uVar11 = FUN_140e63610(param_1,param_2,&local_208,2,uVar11,&local_118);
          cVar3 = FUN_140e491e0(uVar11);
          if (cVar3 == '\0') {
            local_1a8 = 0xac;
            if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_208);
            }
            local_208 = 0;
            local_200 = 0;
            local_1fc = 5;
            uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fa588);
            local_118 = &local_1e8;
            local_110 = &local_1d8;
            puVar8 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_208,2,uVar11,&local_118);
            uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
            if (puVar8 != &local_128) {
              local_158 = *(undefined4 *)puVar8;
              uStack_154 = *(undefined4 *)((longlong)puVar8 + 4);
              uStack_150 = *(undefined4 *)(puVar8 + 1);
              uStack_14c = *(undefined4 *)((longlong)puVar8 + 0xc);
              if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_128);
              }
              FUN_140041b80(&local_128,&local_158);
            }
            local_1a8 = 0xad;
            if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_208);
            }
            local_208 = 0;
            local_200 = 0;
            local_1fc = 5;
            if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_138);
            }
            local_138 = 0;
            local_130 = 0;
            local_12c = 5;
            FUN_140e609c0(DAT_141a729d8);
            FUN_140e645a0(&local_1c8,gml_Script_anon_4328_gml_Object_oRogueLevelManager_Other_11,0);
            if ((double *)&local_1c8 != pdVar7) {
              local_158 = (undefined4)local_1c8;
              uStack_154 = local_1c8._4_4_;
              uStack_150 = uStack_1c0;
              uStack_14c = uStack_1bc;
              if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pdVar7);
              }
              FUN_140041b80(pdVar7,&local_158);
            }
            FUN_140e60910(1);
            if (pdVar7 != local_c8) {
              local_158 = *(undefined4 *)pdVar7;
              uStack_154 = *(undefined4 *)((longlong)pdVar7 + 4);
              uStack_150 = *(undefined4 *)(pdVar7 + 1);
              uStack_14c = *(undefined4 *)((longlong)pdVar7 + 0xc);
              if ((1 << ((byte)local_c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_c8);
              }
              FUN_140041b80(local_c8,&local_158);
            }
            if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c8);
            }
            local_118 = local_c8;
            local_110 = &local_1e8;
            local_108 = &local_1d8;
            local_100 = &local_128;
            local_f8 = &local_148;
            uVar11 = CONCAT44(uVar6,DAT_1419fd6d8);
            puVar12 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_138,4,uVar11,&local_118);
            uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
            if (puVar12 != local_78) {
              local_158 = *puVar12;
              uStack_154 = puVar12[1];
              uStack_150 = puVar12[2];
              uStack_14c = puVar12[3];
              if ((1 << ((byte)local_78[3] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_78);
              }
              FUN_140041b80(local_78,&local_158);
            }
            local_f0 = local_78;
            FUN_140e634e0(param_1,param_2,&local_208,2,CONCAT44(uVar6,DAT_1419fe568),&local_f8);
          }
          else {
            local_1a8 = 0xaa;
          }
        }
        else {
          local_1a8 = 0xa9;
        }
      }
      else {
        local_1a8 = 0xa7;
      }
    }
  } while( true );
}

