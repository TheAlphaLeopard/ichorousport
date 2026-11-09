// gml_Script_anon_14056_anon_12473_gml_Object_oRogueLevelManager_Create_0 @ 0x140cc87b0

undefined8 *
gml_Script_anon_14056_anon_12473_gml_Object_oRogueLevelManager_Create_0
          (longlong *param_1,longlong *param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  double *pdVar10;
  double *pdVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  longlong *plVar15;
  undefined4 uVar17;
  ulonglong uVar16;
  undefined4 **ppuVar18;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  double local_138;
  uint local_12c;
  double local_128;
  uint local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined4 *local_68 [6];
  
  local_d0 = "gml_Script_anon@12996@anon@12473@gml_Object_oRogueLevelManager_Create_0";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x22a;
  _eh_vector_constructor_iterator_(local_88,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_13c = 0;
  local_148 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x22b;
  uVar6 = (**(code **)(*param_2 + 8))(param_2,DAT_141a09328);
  FUN_140e87170(uVar6,DAT_1419fe0e8,0x80000000,&local_98,param_1,param_2);
  local_178 = local_98;
  uStack_170 = uStack_90;
  uStack_16c = uStack_8c;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_178);
  uVar6 = (**(code **)(*param_2 + 8))(param_2,DAT_141a09328);
  plVar15 = param_1;
  FUN_140e87170(uVar6,DAT_1419fe158,0x80000000,&local_a8,param_1,param_2);
  uVar17 = (undefined4)((ulonglong)plVar15 >> 0x20);
  local_178 = local_a8;
  uStack_170 = uStack_a0;
  uStack_16c = uStack_9c;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_178);
  local_c8 = 0x22d;
  bVar12 = false;
  pdVar11 = (double *)&DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  uStack_16c = 0;
  local_178 = 0;
  uVar3 = FUN_140e851f0(puVar7,&local_178,DAT_141955260,1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (uVar3 < 0x80000000) {
    uVar6 = (**(code **)(*param_2 + 8))(param_2,DAT_141a57b70);
    if (param_4 < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*param_5;
    }
    iVar4 = FUN_140e851f0(puVar7,uVar6,DAT_141955260,1);
    if (iVar4 != -2 && iVar4 < 0) {
      if (param_4 < 2) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)param_5[1];
      }
      uStack_16c = 0;
      local_178 = 0;
      uVar3 = FUN_140e851f0(puVar7,&local_178,DAT_141955260,1);
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if (uVar3 < 0x80000000) {
        uVar6 = (**(code **)(*param_2 + 8))(param_2,DAT_141a57b70);
        if (param_4 < 2) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = (undefined8 *)param_5[1];
        }
        iVar4 = FUN_140e851f0(puVar7,uVar6,DAT_141955260,1);
        if (iVar4 == -2) {
          bVar12 = false;
        }
        else {
          bVar12 = iVar4 < 0;
        }
      }
    }
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0xd;
  if (bVar12) {
    local_108 = 0x3ff0000000000000;
  }
  else {
    local_108 = 0;
  }
  local_c8 = 0x22e;
  bVar12 = false;
  uStack_16c = 0;
  local_178 = 0;
  uVar3 = FUN_140e851f0(&local_128,&local_178,DAT_141955260,1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (uVar3 < 0x80000000) {
    uVar6 = (**(code **)(*param_2 + 8))(param_2,DAT_141a57b70);
    iVar4 = FUN_140e851f0(&local_128,uVar6,DAT_141955260,1);
    if (iVar4 != -2 && iVar4 < 0) {
      uStack_16c = 0;
      local_178 = 0;
      uVar3 = FUN_140e851f0(&local_138,&local_178,DAT_141955260,1);
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if (uVar3 < 0x80000000) {
        uVar6 = (**(code **)(*param_2 + 8))(param_2,DAT_141a57b70);
        iVar4 = FUN_140e851f0(&local_138,uVar6,DAT_141955260,1);
        if (iVar4 == -2) {
          bVar12 = false;
        }
        else {
          bVar12 = iVar4 < 0;
        }
      }
    }
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0xd;
  if (bVar12) {
    local_118 = 0x3ff0000000000000;
  }
  else {
    local_118 = 0;
  }
  local_c8 = 0x230;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9918);
  cVar2 = FUN_140e491e0(&local_118);
  if (cVar2 == '\0') {
    uStack_15c = DAT_1419df7bc;
    uStack_160 = DAT_1419df7b8;
    if ((1 << ((byte)DAT_1419df7bc & 0x1f) & 0x46U) == 0) {
      local_168 = DAT_1419df7b0;
    }
    else {
      FUN_1400419b0(&local_168,&DAT_1419df7b0);
    }
    puVar8 = &local_168;
    bVar1 = false;
    bVar12 = true;
  }
  else {
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    uVar6 = (**(code **)(*param_2 + 8))(param_2,DAT_141a57b10);
    dVar13 = local_138;
    if ((local_12c & 0xffffff) != 0) {
      dVar13 = (double)FUN_140e4b060(&local_138);
    }
    dVar14 = local_128;
    if ((local_11c & 0xffffff) != 0) {
      dVar14 = (double)FUN_140e4b060(&local_128);
    }
    uVar5 = FUN_140e4a740(uVar6);
    puVar8 = (undefined8 *)FUN_140ea8b20(&local_158,uVar5,(longlong)dVar14,(longlong)dVar13);
    uStack_16c = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_170 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
      local_178 = *puVar8;
    }
    else {
      FUN_1400419b0(&local_178,puVar8);
    }
    puVar8 = &local_178;
    bVar1 = true;
    bVar12 = false;
  }
  FUN_140e609c0(param_1);
  if (puVar8 != puVar7) {
    local_e8 = *(undefined4 *)puVar8;
    uStack_e4 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_e0 = *(undefined4 *)(puVar8 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_e8);
  }
  if ((bVar12) && ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_168);
  }
  if ((bVar1) && ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_178);
  }
  FUN_140e60910(1);
  local_c8 = 0x231;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9d98);
  cVar2 = FUN_140e491e0(&local_108);
  if (cVar2 == '\0') {
    uStack_16c = DAT_1419df7bc;
    uStack_170 = DAT_1419df7b8;
    if ((1 << ((byte)DAT_1419df7bc & 0x1f) & 0x46U) == 0) {
      local_178 = DAT_1419df7b0;
    }
    else {
      FUN_1400419b0(&local_178,&DAT_1419df7b0);
    }
    puVar8 = &local_178;
    bVar1 = false;
    bVar12 = true;
  }
  else {
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    uVar6 = (**(code **)(*param_2 + 8))(param_2,DAT_141a57b10);
    if (param_4 < 2) {
      pdVar10 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar10 = (double *)param_5[1];
    }
    if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
      dVar13 = *pdVar10;
    }
    else {
      dVar13 = (double)FUN_140e4b060();
    }
    if (0 < param_4) {
      pdVar11 = (double *)*param_5;
    }
    if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
      dVar14 = *pdVar11;
    }
    else {
      dVar14 = (double)FUN_140e4b060(pdVar11);
    }
    uVar5 = FUN_140e4a740(uVar6);
    puVar8 = (undefined8 *)FUN_140ea8b20(&local_158,uVar5,(longlong)dVar14,(longlong)dVar13);
    uStack_15c = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_160 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
      local_168 = *puVar8;
    }
    else {
      FUN_1400419b0(&local_168,puVar8);
    }
    puVar8 = &local_168;
    bVar1 = true;
    bVar12 = false;
  }
  FUN_140e609c0(param_1);
  if (puVar8 != puVar7) {
    local_e8 = *(undefined4 *)puVar8;
    uStack_e4 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_e0 = *(undefined4 *)(puVar8 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_e8);
  }
  if ((bVar12) && ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_178);
  }
  if ((bVar1) && ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_168);
  }
  FUN_140e60910(1);
  local_c8 = 0x233;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9c88);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar9 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9d98);
  if (puVar9 != local_88) {
    local_e8 = *puVar9;
    uStack_e4 = puVar9[1];
    uStack_e0 = puVar9[2];
    uStack_dc = puVar9[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_e8);
  }
  local_68[0] = local_88;
  ppuVar18 = local_68;
  uVar16 = CONCAT44(uVar17,DAT_1419fcb88);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_148,1,uVar16,ppuVar18);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 != '\0') {
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9d98);
    FUN_140e87440(uVar6,DAT_1419ffb98,0x80000000,&local_c0,uVar16 & 0xffffffffffffff00,
                  (ulonglong)ppuVar18 & 0xffffffffffffff00);
    cVar2 = FUN_140e491e0(&local_c0);
    if (cVar2 != '\0') {
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9d98);
      FUN_140e87170(uVar6,DAT_141a0a728,0x80000000,&local_f8,param_1,param_2);
      uStack_16c = local_ec;
      uStack_170 = local_f0;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
        local_178 = local_f8;
      }
      else {
        FUN_1400419b0(&local_178,&local_f8);
      }
      puVar8 = &local_178;
      bVar1 = false;
      bVar12 = true;
      goto LAB_140cc91f0;
    }
  }
  uStack_15c = 0xf;
  local_168 = 0x10000010000011b;
  puVar8 = &local_168;
  bVar1 = true;
  bVar12 = false;
LAB_140cc91f0:
  uVar17 = uStack_15c;
  FUN_140e609c0(param_1);
  if (puVar8 != puVar7) {
    local_e8 = *(undefined4 *)puVar8;
    uStack_e4 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_e0 = *(undefined4 *)(puVar8 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_e8);
  }
  if ((bVar1) && ((1 << ((byte)uVar17 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_168);
  }
  if ((bVar12) && ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_178);
  }
  FUN_140e60910(1);
  local_c8 = 0x235;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9b68);
  FUN_140e63610(param_1,param_2,&local_148,0,uVar6,0);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

