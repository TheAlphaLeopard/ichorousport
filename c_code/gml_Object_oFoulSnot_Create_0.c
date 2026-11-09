// gml_Object_oFoulSnot_Create_0 @ 0x140aeb5d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oFoulSnot_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar11;
  double dVar10;
  undefined4 uVar13;
  undefined8 uVar12;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double *local_158;
  double *local_150;
  double *local_148;
  double local_140;
  byte local_134;
  double local_130;
  byte local_124;
  double local_120;
  byte local_114;
  undefined8 local_110;
  char *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  double local_88;
  undefined4 local_7c;
  double local_78;
  undefined4 local_6c;
  double local_68;
  undefined4 local_60;
  undefined4 local_5c;
  double local_58;
  undefined4 local_50;
  undefined4 local_4c;
  double local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_108 = "gml_Object_oFogWispSpawner_Draw_0";
  local_100 = 0;
  local_110 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_110;
  uVar13 = 1;
  _eh_vector_constructor_iterator_(&local_140,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_bc = 0xffffff;
  local_c8 = 0.0;
  uStack_cc = 0xffffff;
  local_d8 = 0.0;
  uStack_dc = 0xffffff;
  local_e8 = 0.0;
  local_6c = 0xffffff;
  local_78 = 0.0;
  local_7c = 0xffffff;
  local_88 = 0.0;
  pdVar3 = (double *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f3058);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_3c = 0xffffff;
  local_48 = 0.0;
  uVar8 = 0xffffff;
  local_4c = 0xffffff;
  local_58 = 0.0;
  uVar7 = 0xffffff;
  local_5c = 0xffffff;
  local_68 = 0.0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_100 = 2;
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_c8);
  local_168 = local_c8;
  uStack_160 = uStack_c0;
  uStack_15c = uStack_bc;
  if ((1 << (local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  FUN_140041b80(&local_140,&local_168);
  local_158 = &local_140;
  uVar5 = CONCAT44(uVar13,DAT_141a00e38);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_178,1,uVar5,&local_158);
  uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (pdVar4 != (double *)&local_d8) {
    local_168 = *pdVar4;
    uStack_160 = *(undefined4 *)(pdVar4 + 1);
    uStack_15c = *(undefined4 *)((longlong)pdVar4 + 0xc);
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_168);
  }
  local_100 = 3;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_c8);
  local_168 = local_c8;
  uStack_160 = uStack_c0;
  uStack_15c = uStack_bc;
  if ((1 << (local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  FUN_140041b80(&local_140,&local_168);
  local_158 = &local_140;
  uVar5 = CONCAT44(uVar13,DAT_141a00dd8);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_178,1,uVar5,&local_158);
  uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (pdVar4 != (double *)&local_e8) {
    local_168 = *pdVar4;
    uStack_160 = *(undefined4 *)(pdVar4 + 1);
    uStack_15c = *(undefined4 *)((longlong)pdVar4 + 0xc);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_168);
  }
  local_100 = 4;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_c8);
  local_168 = local_c8;
  uStack_160 = uStack_c0;
  uStack_15c = uStack_bc;
  if ((1 << (local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  FUN_140041b80(&local_140,&local_168);
  local_158 = &local_140;
  uVar5 = CONCAT44(uVar13,DAT_141a00c98);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_178,1,uVar5,&local_158);
  uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (pdVar4 != &local_78) {
    local_168 = *pdVar4;
    uStack_160 = *(undefined4 *)(pdVar4 + 1);
    uStack_15c = *(undefined4 *)((longlong)pdVar4 + 0xc);
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_168);
  }
  local_100 = 5;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_c8);
  local_168 = local_c8;
  uStack_160 = uStack_c0;
  uStack_15c = uStack_bc;
  if ((1 << (local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  FUN_140041b80(&local_140,&local_168);
  local_158 = &local_140;
  uVar5 = CONCAT44(uVar13,DAT_141a00d58);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_178,1,uVar5,&local_158);
  uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (pdVar4 != &local_88) {
    local_168 = *pdVar4;
    uStack_160 = *(undefined4 *)(pdVar4 + 1);
    uStack_15c = *(undefined4 *)((longlong)pdVar4 + 0xc);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_168);
  }
  local_100 = 7;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  if (pdVar3 != &local_140) {
    local_168 = *pdVar3;
    uStack_160 = *(undefined4 *)(pdVar3 + 1);
    uStack_15c = *(undefined4 *)((longlong)pdVar3 + 0xc);
    if ((1 << (local_134 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_140);
    }
    FUN_140041b80(&local_140,&local_168);
  }
  local_158 = &local_140;
  uVar12 = CONCAT44(uVar13,DAT_141a04798);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar12,&local_158);
  uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    bVar9 = true;
  }
  else {
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    if (pdVar3 != &local_130) {
      local_168 = *pdVar3;
      uStack_160 = *(undefined4 *)(pdVar3 + 1);
      uStack_15c = *(undefined4 *)((longlong)pdVar3 + 0xc);
      if ((1 << (local_124 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_130);
      }
      FUN_140041b80(&local_130,&local_168);
    }
    local_150 = &local_130;
    uVar12 = CONCAT44(uVar13,DAT_141a047b8);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_f8,1,uVar12,&local_150);
    uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
    iVar2 = FUN_140e851f0(uVar5,&local_78,DAT_141955260,0);
    if (iVar2 == 0) {
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      local_a8 = 0;
      local_a0 = 0;
      local_9c = 5;
      if (pdVar3 != &local_120) {
        local_168 = *pdVar3;
        uStack_160 = *(undefined4 *)(pdVar3 + 1);
        uStack_15c = *(undefined4 *)((longlong)pdVar3 + 0xc);
        if ((1 << (local_114 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_120);
        }
        FUN_140041b80(&local_120,&local_168);
      }
      local_148 = &local_120;
      uVar12 = CONCAT44(uVar13,DAT_141a04548);
      uVar5 = FUN_140e634e0(param_1,param_2,&local_a8,1,uVar12,&local_148);
      uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
      iVar2 = FUN_140e851f0(uVar5,&local_88,DAT_141955260,0);
      bVar9 = iVar2 != 0;
    }
    else {
      bVar9 = true;
    }
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0xd;
  if (bVar9) {
    uVar11 = 0x3ff00000;
  }
  else {
    uVar11 = 0;
  }
  local_b8 = (ulonglong)uVar11 << 0x20;
  local_100 = 9;
  cVar1 = FUN_140e491e0(&local_b8);
  if (cVar1 != '\0') {
    local_100 = 10;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    if (pdVar3 != &local_140) {
      local_168 = *pdVar3;
      uStack_160 = *(undefined4 *)(pdVar3 + 1);
      uStack_15c = *(undefined4 *)((longlong)pdVar3 + 0xc);
      if ((1 << (local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_140);
      }
      FUN_140041b80(&local_140,&local_168);
    }
    local_158 = &local_140;
    uVar12 = CONCAT44(uVar13,DAT_141a04798);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar12,&local_158);
    uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 != '\0') {
      local_100 = 10;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_f8 = 0;
      local_f0 = 0;
      local_ec = 5;
      if (pdVar3 != &local_130) {
        local_168 = *pdVar3;
        uStack_160 = *(undefined4 *)(pdVar3 + 1);
        uStack_15c = *(undefined4 *)((longlong)pdVar3 + 0xc);
        if ((1 << (local_124 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_130);
        }
        FUN_140041b80(&local_130,&local_168);
      }
      local_150 = &local_130;
      uVar5 = CONCAT44(uVar13,DAT_141a04918);
      FUN_140e634e0(param_1,param_2,&local_f8,1,uVar5,&local_150);
      uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
    }
    local_100 = 0xb;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    local_158 = &local_78;
    local_150 = &local_88;
    FUN_140e609c0(DAT_141a729d8);
    uVar5 = CONCAT44(uVar13,DAT_141a04a78);
    pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_178,2,uVar5,&local_158);
    uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (pdVar4 != pdVar3) {
      local_168 = *pdVar4;
      uStack_160 = *(undefined4 *)(pdVar4 + 1);
      uStack_15c = *(undefined4 *)((longlong)pdVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar3);
      }
      FUN_140041b80(pdVar3,&local_168);
    }
    FUN_140e60910(1);
  }
  local_100 = 0xf;
  cVar1 = FUN_140e491e0(&local_b8);
  if (cVar1 == '\0') {
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3148);
    iVar2 = FUN_140e851f0(&local_d8,uVar5,DAT_141955260,0);
    if (iVar2 == 0) {
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f30e8);
      iVar2 = FUN_140e851f0(&local_e8,uVar5,DAT_141955260,0);
      if (iVar2 == 0) goto LAB_140aec415;
    }
  }
  local_100 = 0x10;
  local_168 = (double)CONCAT44(uRam0000000141dd932c,_DAT_141dd9328);
  uStack_160 = uRam0000000141dd9330;
  uStack_15c = DAT_141dd9334;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_168);
  local_100 = 0x11;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  local_158 = (double *)&local_98;
  uVar5 = CONCAT44(uVar13,DAT_1419f70c8);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_178,1,uVar5,&local_158);
  uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (pdVar4 != &local_48) {
    local_168 = *pdVar4;
    uStack_160 = *(undefined4 *)(pdVar4 + 1);
    uStack_15c = *(undefined4 *)((longlong)pdVar4 + 0xc);
    if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140041b80(&local_48,&local_168);
  }
  local_100 = 0x13;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  local_158 = (double *)&local_98;
  uVar5 = CONCAT44(uVar13,DAT_141a03d38);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_178,1,uVar5,&local_158);
  uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (pdVar4 != &local_58) {
    local_168 = *pdVar4;
    uStack_160 = *(undefined4 *)(pdVar4 + 1);
    uStack_15c = *(undefined4 *)((longlong)pdVar4 + 0xc);
    FUN_140041b80(&local_58,&local_168);
    uVar8 = local_4c;
  }
  local_100 = 0x14;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  local_158 = (double *)&local_98;
  uVar5 = CONCAT44(uVar13,DAT_141a03d58);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_178,1,uVar5,&local_158);
  uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (pdVar4 != &local_68) {
    local_168 = *pdVar4;
    uStack_160 = *(undefined4 *)(pdVar4 + 1);
    uStack_15c = *(undefined4 *)((longlong)pdVar4 + 0xc);
    FUN_140041b80(&local_68,&local_168);
    uVar7 = local_5c;
  }
  local_100 = 0x16;
  if ((*(uint *)((longlong)pdVar3 + 0xc) & 0xffffff) == 0) {
    dVar10 = *pdVar3;
  }
  else {
    dVar10 = (double)FUN_140e4b060(pdVar3);
  }
  FUN_140ec60c0((longlong)dVar10,0xffffffff);
  local_100 = 0x17;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  local_168 = (double)CONCAT44(uRam0000000141dc70e4,_DAT_141dc70e0);
  uStack_160 = uRam0000000141dc70e8;
  uStack_15c = uRam0000000141dc70ec;
  if ((1 << (local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  FUN_140041b80(&local_140,&local_168);
  local_158 = &local_140;
  uVar5 = CONCAT44(uVar13,DAT_1419f52e8);
  FUN_140e634e0(param_1,param_2,&local_178,1,uVar5,&local_158);
  uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_100 = 0x18;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  local_158 = &local_48;
  uStack_160 = local_50;
  uStack_15c = uVar8;
  if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) == 0) {
    local_168 = local_58;
  }
  else {
    FUN_1400419b0(&local_168,&local_58);
  }
  FUN_1400462a0(&local_168,&local_d8);
  local_38 = (undefined4)local_168;
  uStack_34 = local_168._4_4_;
  uStack_30 = uStack_160;
  uStack_2c = uStack_15c;
  if ((1 << (local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  FUN_140041b80(&local_130,&local_38);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_150 = &local_130;
  uStack_160 = local_60;
  uStack_15c = uVar7;
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) == 0) {
    local_168 = local_68;
  }
  else {
    FUN_1400419b0(&local_168,&local_68);
  }
  FUN_1400462a0(&local_168,&local_e8);
  local_38 = (undefined4)local_168;
  uStack_34 = local_168._4_4_;
  uStack_30 = uStack_160;
  uStack_2c = uStack_15c;
  if ((1 << (local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  FUN_140041b80(&local_120,&local_38);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_148 = &local_120;
  FUN_140e634e0(param_1,param_2,&local_178,3,CONCAT44(uVar13,DAT_1419f54b8),&local_158);
  local_100 = 0x19;
  FUN_140ec7870();
  local_100 = 0x1b;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3148);
  FUN_140e609c0(param_1);
  if (&local_d8 != puVar6) {
    local_38 = (undefined4)local_d8;
    uStack_34 = local_d8._4_4_;
    uStack_30 = uStack_d0;
    uStack_2c = uStack_cc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_38);
  }
  FUN_140e60910(1);
  local_100 = 0x1c;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f30e8);
  FUN_140e609c0(param_1);
  if (&local_e8 != puVar6) {
    local_38 = (undefined4)local_e8;
    uStack_34 = local_e8._4_4_;
    uStack_30 = uStack_e0;
    uStack_2c = uStack_dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_38);
  }
  FUN_140e60910(1);
LAB_140aec415:
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_140,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_110;
  return;
}

