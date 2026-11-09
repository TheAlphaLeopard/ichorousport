// gml_Script_anon_7145____struct___459_gml_Object_oEnemyDamsel_Create_0 @ 0x14097ed10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * gml_Script_anon_7145____struct___459_gml_Object_oEnemyDamsel_Create_0
                   (undefined8 param_1,undefined8 param_2,double *param_3,int param_4,
                   undefined8 *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  double *pdVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  code *pcVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined1 **in_stack_fffffffffffffe10;
  ulonglong uVar13;
  undefined4 uVar14;
  double local_1e0;
  uint local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  double local_178;
  uint local_16c;
  double local_168;
  uint local_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  double local_a8;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined1 *local_90;
  double *local_88;
  double *local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  local_150 = "gml_Script_anon@6419@gml_Object_oEnemyDamsel_Create_0";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0x103;
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_118,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_17c = 0xffffff;
  local_188 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_1c4 = 0;
  local_1d0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  local_15c = 0;
  local_168 = 0.0;
  local_16c = 0;
  local_178 = 0.0;
  local_148 = 0x106;
  local_1d4 = 0;
  local_1e0 = 0.0;
  bVar1 = true;
  while( true ) {
    if (!bVar1) {
      local_148 = 0x106;
      FUN_140162d40(&local_1e0,0x2d);
    }
    bVar1 = false;
    local_cc = 0;
    local_d8 = 0x4076800000000000;
    iVar3 = FUN_140e851f0(&local_1e0,&local_d8,DAT_141955260,1);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    uVar4 = 1 << ((byte)local_1c4 & 0x1f);
    if (iVar3 == -2 || -1 < iVar3) break;
    local_148 = 0x108;
    if ((uVar4 & 0x46) != 0) {
      FUN_140041a50(&local_1d0);
    }
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c4 = 5;
    local_bc = 6;
    uVar13 = (ulonglong)in_stack_fffffffffffffe10 & 0xffffffffffffff00;
    uVar11 = (ulonglong)pcVar10 & 0xffffffffffffff00;
    local_c8 = param_1;
    FUN_140e87440(&local_c8,DAT_1419fe0e8,0x80000000,&local_188,uVar11,uVar13);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_ac = 6;
    uVar11 = uVar11 & 0xffffffffffffff00;
    local_b8 = param_1;
    FUN_140e87440(&local_b8,DAT_1419fe158,0x80000000,&local_198,uVar11,uVar13 & 0xffffffffffffff00);
    uVar12 = (undefined4)(uVar11 >> 0x20);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    dVar9 = local_1e0;
    if ((local_1d4 & 0xffffff) != 0) {
      dVar9 = (double)FUN_140e4b060(&local_1e0);
    }
    if (param_4 < 1) {
      pdVar6 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar6 = (double *)*param_5;
    }
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar8 = *pdVar6;
    }
    else {
      dVar8 = (double)FUN_140e4b060();
    }
    fVar7 = (float)FUN_140e78f90((float)dVar8,(float)dVar9);
    uStack_12c = local_17c;
    uStack_130 = local_180;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
      local_138 = local_188;
    }
    else {
      FUN_1400419b0(&local_138,&local_188);
    }
    FUN_140162c50(&local_138,(double)fVar7);
    local_1b8 = (undefined4)local_138;
    uStack_1b4 = local_138._4_4_;
    uStack_1b0 = uStack_130;
    uStack_1ac = uStack_12c;
    if ((1 << ((byte)_local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_1b8);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_98 = local_118;
    dVar9 = local_1e0;
    if ((local_1d4 & 0xffffff) != 0) {
      dVar9 = (double)FUN_140e4b060(&local_1e0);
    }
    if (param_4 < 1) {
      pdVar6 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar6 = (double *)*param_5;
    }
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar8 = *pdVar6;
    }
    else {
      dVar8 = (double)FUN_140e4b060();
    }
    FUN_140e79010((float)dVar8,(float)dVar9);
    uStack_11c = local_18c;
    uStack_120 = local_190;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
      local_128 = local_198;
    }
    else {
      FUN_1400419b0(&local_128,&local_198);
    }
    FUN_140162c50(&local_128);
    local_1b8 = (undefined4)local_128;
    uStack_1b4 = local_128._4_4_;
    uStack_1b0 = uStack_120;
    uStack_1ac = uStack_11c;
    if ((1 << ((byte)_local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_1b8);
    uVar14 = 0;
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_90 = local_108;
    uStack_6c = 0xf;
    local_78 = 0x100000000000149;
    local_1b8 = 0x149;
    uStack_1b4 = 0x1000000;
    uStack_1b0 = uStack_70;
    uStack_1ac = 0xf;
    if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1b8);
    local_88 = (double *)local_f8;
    in_stack_fffffffffffffe10 = &local_98;
    pcVar10 = (code *)CONCAT44(uVar12,DAT_141a12628);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_1d0,3,pcVar10,in_stack_fffffffffffffe10,uVar14);
    cVar2 = FUN_140e491e0(uVar5);
    if (cVar2 != '\0') {
      local_148 = 0x10a;
      dVar9 = local_1e0;
      if ((local_1d4 & 0xffffff) != 0) {
        dVar9 = (double)FUN_140e4b060(&local_1e0);
      }
      fVar7 = (float)FUN_140e78f90(0x3f800000,(float)dVar9);
      local_9c = 0;
      local_a8 = (double)fVar7;
      FUN_1400462a0(&local_168,&local_a8);
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      local_148 = 0x10b;
      if ((local_1d4 & 0xffffff) != 0) {
        FUN_140e4b060(&local_1e0);
      }
      fVar7 = (float)FUN_140e79010(0x3f800000);
      local_19c = 0;
      local_1a8 = (double)fVar7;
      FUN_1400462a0(&local_178,&local_1a8);
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
    }
  }
  local_148 = 0x10e;
  if ((uVar4 & 0x46) != 0) {
    FUN_140041a50(&local_1d0);
  }
  uVar12 = (undefined4)((ulonglong)pcVar10 >> 0x20);
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c4 = 5;
  local_1b8 = _DAT_141dc6e70;
  uStack_1b4 = uRam0000000141dc6e74;
  uStack_1b0 = uRam0000000141dc6e78;
  uStack_1ac = uRam0000000141dc6e7c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1b8);
  local_1b8 = _DAT_141dc6e70;
  uStack_1b4 = uRam0000000141dc6e74;
  uStack_1b0 = uRam0000000141dc6e78;
  uStack_1ac = uRam0000000141dc6e7c;
  local_98 = local_118;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1b8);
  local_90 = local_108;
  local_88 = &local_168;
  local_80 = &local_178;
  uVar5 = FUN_140e634e0(param_1,param_2,&local_1d0,4,CONCAT44(uVar12,DAT_1419fd548),&local_98);
  local_19c = 0;
  local_1a8 = 0.1;
  iVar3 = FUN_140e851f0(uVar5,&local_1a8,DAT_141955260,1);
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if (iVar3 == -2 || -1 < iVar3) {
    local_148 = 0x10f;
    dVar9 = local_178;
    if ((local_16c & 0xffffff) != 0) {
      dVar9 = (double)FUN_140e4b060(&local_178);
    }
    dVar8 = local_168;
    if ((local_15c & 0xffffff) != 0) {
      dVar8 = (double)FUN_140e4b060(&local_168);
    }
    fVar7 = (float)FUN_140e793d0(0,0,(float)dVar8,(float)dVar9);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = (double)fVar7;
  }
  else {
    local_148 = 0x10e;
    if (param_3 != (double *)&DAT_1419df7b0) {
      local_1b8 = (undefined4)DAT_1419df7b0;
      uStack_1b4 = DAT_1419df7b0._4_4_;
      uStack_1b0 = DAT_1419df7b8;
      uStack_1ac = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_1b8);
    }
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(local_118,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

