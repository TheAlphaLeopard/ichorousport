// gml_Script____struct___498_gml_Object_oEnemyMoistMarauder_Create_0 @ 0x140a10c10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___498_gml_Object_oEnemyMoistMarauder_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong **pplVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  double *pdVar7;
  undefined8 uVar8;
  double *pdVar9;
  undefined8 *puVar10;
  float fVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar20;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined1 **ppuVar19;
  ulonglong **ppuVar21;
  longlong *local_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  longlong *local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  longlong *local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  double local_188;
  uint local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulonglong local_168;
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  double local_100;
  uint local_f4;
  double local_f0;
  uint local_e4;
  ulonglong *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  longlong *local_b0;
  undefined4 local_a8;
  uint local_a4;
  longlong *local_a0;
  undefined4 local_98;
  uint local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  
  local_120 = "gml_Script_anon@11088@___struct___498@gml_Object_oEnemyMoistMarauder_Create_0";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0x18b;
  uVar20 = 1;
  _eh_vector_constructor_iterator_(&local_168,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_64 = 0xffffff;
  local_70 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  uStack_18c = 0xffffff;
  local_198 = (longlong *)0x0;
  uStack_19c = 0xffffff;
  local_1a8 = (longlong *)0x0;
  local_94 = 0xffffff;
  local_a0 = (longlong *)0x0;
  local_e4 = 0xffffff;
  local_f0 = 0.0;
  local_a4 = 0xffffff;
  local_b0 = (longlong *)0x0;
  local_f4 = 0xffffff;
  local_100 = 0.0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  local_104 = 0;
  local_110 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0x18c;
  pplVar4 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f1608);
  local_1d8 = (longlong *)CONCAT44(uRam0000000141dc6f24,_DAT_141dc6f20);
  uStack_1d0 = uRam0000000141dc6f28;
  uStack_1cc = uRam0000000141dc6f2c;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_1d8);
  local_e0 = &local_168;
  FUN_140e609c0(param_1);
  ppuVar21 = &local_e0;
  uVar17 = CONCAT44(uVar20,DAT_141a0a0d8);
  puVar5 = (ulonglong *)FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar17,ppuVar21);
  uStack_1ac = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_1b0 = (undefined4)puVar5[1];
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
    local_1b8 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_1b8,puVar5);
  }
  uStack_1dc = 7;
  local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,2);
  FUN_140042560(&local_1b8,&local_1e8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if (&local_1b8 != pplVar4) {
    local_1d8 = local_1b8;
    uStack_1d0 = uStack_1b0;
    uStack_1cc = uStack_1ac;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar4);
    }
    FUN_140041b80(pplVar4,&local_1d8);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140e60910(1);
  local_118 = 0x18e;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  puVar5 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f16d8);
  uStack_1dc = 6;
  uVar17 = uVar17 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_70,uVar17,
                (ulonglong)ppuVar21 & 0xffffffffffffff00);
  uVar20 = (undefined4)(uVar17 >> 0x20);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if (puVar5 != &local_168) {
    local_1d8 = (longlong *)*puVar5;
    uStack_1d0 = (undefined4)puVar5[1];
    uStack_1cc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1d8);
  }
  local_e0 = &local_168;
  ppuVar21 = &local_e0;
  uVar17 = CONCAT44(uVar20,DAT_141a00d78);
  puVar6 = (ulonglong *)FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar17,ppuVar21);
  if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
    uVar12 = *puVar6;
  }
  else {
    uVar12 = FUN_140e4b060(puVar6);
  }
  uStack_1cc = 0;
  local_1d8 = (longlong *)(uVar12 ^ 0x8000000000000000);
  uStack_1ac = 0;
  uStack_1b0 = uStack_1d0;
  uStack_1dc = 7;
  local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,4);
  local_1b8 = local_1d8;
  FUN_140042560(&local_1b8,&local_1e8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_1400460e0(&local_70,&local_1b8);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_70);
  local_118 = 399;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  uStack_1dc = 6;
  uVar17 = uVar17 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_80,uVar17,
                (ulonglong)ppuVar21 & 0xffffffffffffff00);
  uVar20 = (undefined4)(uVar17 >> 0x20);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if (puVar5 != &local_168) {
    local_1d8 = (longlong *)*puVar5;
    uStack_1d0 = (undefined4)puVar5[1];
    uStack_1cc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1d8);
  }
  local_e0 = &local_168;
  ppuVar21 = &local_e0;
  uVar17 = CONCAT44(uVar20,DAT_141a00e28);
  pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar17,ppuVar21);
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar15 = *pdVar7;
  }
  else {
    dVar15 = (double)FUN_140e4b060(pdVar7);
  }
  uStack_1cc = 0;
  local_1d8 = (longlong *)((ulonglong)dVar15 ^ 0x8000000000000000);
  uStack_1ac = 0;
  uStack_1b0 = uStack_1d0;
  uStack_1dc = 7;
  local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,4);
  local_1b8 = local_1d8;
  FUN_140042560(&local_1b8,&local_1e8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_1400460e0(&local_80,&local_1b8);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_80);
  local_118 = 400;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  uStack_1dc = 6;
  uVar12 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
  uVar17 = uVar17 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_198,uVar17,uVar12);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uStack_1dc = 6;
  uVar17 = uVar17 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_1a8,uVar17,uVar12 & 0xffffffffffffff00);
  uVar20 = (undefined4)(uVar17 >> 0x20);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1d8 = local_198;
  uStack_1d0 = uStack_190;
  uStack_1cc = uStack_18c;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_1d8);
  local_e0 = &local_168;
  local_1d8 = local_1a8;
  uStack_1d0 = uStack_1a0;
  uStack_1cc = uStack_19c;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_1d8);
  local_d8 = local_158;
  uStack_1cc = 0xf;
  local_1d8 = (longlong *)0x100000000000149;
  local_1e8 = (longlong *)0x100000000000149;
  uStack_1e0 = uStack_1d0;
  uStack_1dc = 0xf;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_1e8);
  local_d0 = local_148;
  uVar18 = CONCAT44(uVar20,DAT_141a12628);
  uVar8 = FUN_140e634e0(param_1,param_2,&local_1c8,3,uVar18,&local_e0);
  uVar20 = (undefined4)((ulonglong)uVar18 >> 0x20);
  cVar3 = FUN_140e491e0(uVar8);
  if (cVar3 != '\0') {
    local_118 = 400;
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    local_110 = 0;
    local_108 = 0;
    local_104 = 5;
    (**(code **)(*param_1 + 8))(param_1,DAT_1419f16d8);
    uStack_1cc = 0xf;
    local_1d8 = (longlong *)0x100000000000149;
    local_1e8 = (longlong *)0x100000000000149;
    uStack_1e0 = uStack_1d0;
    uStack_1dc = 0xf;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_1e8);
    local_c8 = local_138;
    ppuVar19 = &local_c8;
    gml_GlobalScript_world_pos_to_gui(param_1,param_2,&local_110,1,ppuVar19);
    uVar20 = (undefined4)((ulonglong)ppuVar19 >> 0x20);
  }
  local_118 = 0x192;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  puVar5 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar5 != &local_168) {
    local_1d8 = (longlong *)*puVar5;
    uStack_1d0 = (undefined4)puVar5[1];
    uStack_1cc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1d8);
  }
  local_e0 = &local_168;
  ppuVar21 = &local_e0;
  uVar17 = CONCAT44(uVar20,DAT_141a02ef8);
  uVar8 = FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar17,ppuVar21);
  cVar3 = FUN_140e491e0(uVar8);
  if (cVar3 == '\0') {
    uStack_1cc = 6;
    uVar17 = uVar17 & 0xffffffffffffff00;
    local_1d8 = param_1;
    FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_198,uVar17,
                  (ulonglong)ppuVar21 & 0xffffffffffffff00);
    uVar20 = (undefined4)(uVar17 >> 0x20);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    uStack_1ac = uStack_18c;
    uStack_1b0 = uStack_190;
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
      local_1b8 = local_198;
    }
    else {
      FUN_1400419b0(&local_1b8,&local_198);
    }
    pplVar4 = &local_1b8;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    plVar13 = param_1;
    FUN_140e87170(uVar8,DAT_1419fe0e8,0x80000000,&local_a0,param_1,param_2);
    uVar20 = (undefined4)((ulonglong)plVar13 >> 0x20);
    uStack_1dc = local_94;
    uStack_1e0 = local_98;
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) == 0) {
      local_1e8 = local_a0;
    }
    else {
      FUN_1400419b0(&local_1e8,&local_a0);
    }
    pplVar4 = &local_1e8;
    bVar2 = true;
    bVar1 = false;
  }
  local_178 = *(undefined4 *)pplVar4;
  uStack_174 = *(undefined4 *)((longlong)pplVar4 + 4);
  uStack_170 = *(undefined4 *)(pplVar4 + 1);
  uStack_16c = *(undefined4 *)((longlong)pplVar4 + 0xc);
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  FUN_140041b80(&local_f0,&local_178);
  if ((bVar1) && ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1b8);
  }
  if ((bVar2) && ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1e8);
  }
  local_118 = 0x193;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  if (puVar5 != &local_168) {
    local_178 = (undefined4)*puVar5;
    uStack_174 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_170 = (undefined4)puVar5[1];
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_178);
  }
  local_e0 = &local_168;
  ppuVar21 = &local_e0;
  uVar17 = CONCAT44(uVar20,DAT_141a02ef8);
  uVar8 = FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar17,ppuVar21);
  cVar3 = FUN_140e491e0(uVar8);
  if (cVar3 == '\0') {
    uStack_1cc = 6;
    uVar12 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
    plVar13 = (longlong *)(uVar17 & 0xffffffffffffff00);
    local_1d8 = param_1;
    FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_1a8,plVar13,uVar12);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    uStack_1dc = uStack_19c;
    uStack_1e0 = uStack_1a0;
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
      local_1e8 = local_1a8;
    }
    else {
      FUN_1400419b0(&local_1e8,&local_1a8);
    }
    pplVar4 = &local_1e8;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    plVar13 = param_1;
    uVar12 = param_2;
    FUN_140e87170(uVar8,DAT_1419fe158,0x80000000,&local_b0,param_1,param_2);
    uStack_1ac = local_a4;
    uStack_1b0 = local_a8;
    if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) == 0) {
      local_1b8 = local_b0;
    }
    else {
      FUN_1400419b0(&local_1b8,&local_b0);
    }
    pplVar4 = &local_1b8;
    bVar2 = true;
    bVar1 = false;
  }
  local_178 = *(undefined4 *)pplVar4;
  uStack_174 = *(undefined4 *)((longlong)pplVar4 + 4);
  uStack_170 = *(undefined4 *)(pplVar4 + 1);
  uStack_16c = *(undefined4 *)((longlong)pplVar4 + 0xc);
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  FUN_140041b80(&local_100,&local_178);
  if ((bVar1) && ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1e8);
  }
  if ((bVar2) && ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1b8);
  }
  local_118 = 0x194;
  uStack_1cc = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar17 = (ulonglong)plVar13 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_198,uVar17,uVar12);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_1cc = 6;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_1a8,uVar17 & 0xffffffffffffff00,
                uVar12 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  dVar15 = local_100;
  if ((local_f4 & 0xffffff) != 0) {
    dVar15 = (double)FUN_140e4b060(&local_100);
  }
  dVar16 = local_f0;
  if ((local_e4 & 0xffffff) != 0) {
    dVar16 = (double)FUN_140e4b060(&local_f0);
  }
  plVar13 = local_1a8;
  if ((uStack_19c & 0xffffff) != 0) {
    plVar13 = (longlong *)FUN_140e4b060(&local_1a8);
  }
  plVar14 = local_198;
  if ((uStack_18c & 0xffffff) != 0) {
    plVar14 = (longlong *)FUN_140e4b060(&local_198);
  }
  fVar11 = (float)FUN_140e793d0((float)(double)plVar14,(float)(double)plVar13,(float)dVar16,
                                (float)dVar15);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_17c = 0;
  local_188 = (double)fVar11;
  local_118 = 0x195;
  pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f1668);
  pdVar9 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  dVar15 = local_188;
  if ((local_17c & 0xffffff) != 0) {
    dVar15 = (double)FUN_140e4b060(&local_188);
  }
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar16 = *pdVar7;
  }
  else {
    dVar16 = (double)FUN_140e4b060(pdVar7);
  }
  fVar11 = (float)FUN_140e78f90((float)dVar16,(float)dVar15);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar9);
  }
  *(undefined4 *)((longlong)pdVar9 + 0xc) = 0;
  *pdVar9 = (double)fVar11;
  local_118 = 0x196;
  pdVar9 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  FUN_140e609c0(param_1);
  dVar15 = local_188;
  if ((local_17c & 0xffffff) != 0) {
    dVar15 = (double)FUN_140e4b060(&local_188);
  }
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar16 = *pdVar7;
  }
  else {
    dVar16 = (double)FUN_140e4b060(pdVar7);
  }
  fVar11 = (float)FUN_140e79010((float)dVar16,(float)dVar15);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar9);
  }
  *(undefined4 *)((longlong)pdVar9 + 0xc) = 0;
  *pdVar9 = (double)fVar11 - 1.5;
  FUN_140e60910(1);
  local_118 = 0x198;
  uStack_1cc = 0xf;
  local_1d8 = (longlong *)0x1000001000001cd;
  local_178 = 0x1cd;
  uStack_174 = 0x1000001;
  uStack_170 = uStack_1d0;
  uStack_16c = 0xf;
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  FUN_140041b80(&local_90,&local_178);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_90);
  local_118 = 0x199;
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  local_b4 = 0;
  local_c0 = 0x4000000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_c0);
  local_118 = 0x19a;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd588);
  local_178 = _DAT_1419eabe0;
  uStack_174 = uRam00000001419eabe4;
  uStack_170 = uRam00000001419eabe8;
  uStack_16c = uRam00000001419eabec;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_178);
  local_e0 = &local_168;
  local_178 = _DAT_1419eac40;
  uStack_174 = uRam00000001419eac44;
  uStack_170 = uRam00000001419eac48;
  uStack_16c = uRam00000001419eac4c;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_178);
  local_d8 = local_158;
  local_178 = _DAT_1419eac00;
  uStack_174 = uRam00000001419eac04;
  uStack_170 = uRam00000001419eac08;
  uStack_16c = uRam00000001419eac0c;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_178);
  local_d0 = local_148;
  FUN_140e63610(param_1,param_2,&local_1c8,3,uVar8,&local_e0);
  local_118 = 0x19b;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar10);
  }
  *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
  *puVar10 = 0x3ff0000000000000;
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  _eh_vector_destructor_iterator_(&local_168,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

