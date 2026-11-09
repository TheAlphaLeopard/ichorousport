// gml_Script____struct___478_gml_Object_oEnemyDireMutt_Create_0 @ 0x1409c5ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___478_gml_Object_oEnemyDireMutt_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  undefined1 **ppuVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined1 **ppuVar14;
  bool bVar15;
  undefined4 uVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  ulonglong uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  undefined8 **ppuVar23;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 *local_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  undefined8 local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a4;
  undefined1 *local_1a0;
  undefined4 local_198;
  uint local_194;
  undefined8 local_188;
  byte local_17c;
  double local_178;
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  double local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 *local_d8;
  double *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  
  local_1d0 = "gml_Script_anon@8477@___struct___478@gml_Object_oEnemyDireMutt_Create_0";
  local_1d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1d8;
  local_1c8 = 0x1c7;
  uVar16 = 1;
  _eh_vector_constructor_iterator_(&local_188,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_194 = 0xffffff;
  local_1a0 = (undefined1 *)0x0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_20c = 0;
  local_218 = 0;
  local_1b4 = 0;
  local_1c0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1c8 = 0x1c8;
  local_68 = uVar4;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar5 != &local_188) {
    local_208 = (longlong *)*puVar5;
    uStack_200 = *(undefined4 *)(puVar5 + 1);
    uStack_1fc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_208);
  }
  local_d8 = &local_188;
  ppuVar23 = &local_d8;
  uVar20 = CONCAT44(uVar16,DAT_141a02ef8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_218,1,uVar20,ppuVar23);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 == '\0') {
    local_1c8 = 0x1c8;
    if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c0);
    }
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b4 = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
    FUN_140e609c0(param_1);
    uVar20 = 0;
    puVar7 = (undefined8 *)gml_Script_FracPos(param_1,param_2,&local_1c0,0,0);
    if (puVar7 != puVar5) {
      local_208 = (longlong *)*puVar7;
      uStack_200 = *(undefined4 *)(puVar7 + 1);
      uStack_1fc = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_208);
    }
    FUN_140e60910(1);
  }
  local_1c8 = 0x1ca;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar22 = (ulonglong)ppuVar23 & 0xffffffffffffff00;
  uVar20 = uVar20 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_141a06588,0x80000000,&local_78,uVar20,uVar22);
  cVar1 = FUN_140e491e0(&local_78);
  if (cVar1 == '\0') {
    local_1c8 = 0x1cc;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar22 = uVar22 & 0xffffffffffffff00;
    uVar20 = uVar20 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_141a0a848,0x80000000,&local_88,uVar20,uVar22);
    uStack_1fc = 0;
    local_208 = (longlong *)0x4046800000000000;
    uVar2 = FUN_140e851f0(&local_88,&local_208,DAT_141955260,1);
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if (uVar2 < 0x80000000) {
      local_1c8 = 0x1ce;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0f48);
      cVar1 = FUN_140e491e0(uVar4);
      bVar15 = cVar1 == '\0';
      if (bVar15) {
        uStack_1fc = 0xf;
        local_208 = (longlong *)0x100000100000104;
        ppuVar11 = (undefined1 **)&local_208;
      }
      else {
        uStack_1dc = 0xf;
        local_1e8 = (undefined1 *)0x100000100000103;
        ppuVar11 = &local_1e8;
      }
      uVar2 = uStack_1dc;
      uVar16 = uStack_1fc;
      local_1f8 = *(undefined4 *)ppuVar11;
      uStack_1f4 = *(undefined4 *)((longlong)ppuVar11 + 4);
      uStack_1f0 = *(undefined4 *)(ppuVar11 + 1);
      uStack_1ec = *(undefined4 *)((longlong)ppuVar11 + 0xc);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_1f8);
      if ((bVar15) && ((1 << ((byte)uVar16 & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_208);
      }
      if ((!bVar15) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_e8);
      local_1c8 = 0x1cf;
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      local_10c = 0;
      local_118 = 0;
      FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_118);
      local_1c8 = 0x1d0;
      if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b0);
      }
      local_1a4 = 0;
      local_1b0 = 0x3ff0000000000000;
      FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_1b0);
      local_1c8 = 0x1d1;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      local_208 = (longlong *)0x3ff0000000000000;
      uStack_1fc = 0xd;
      local_1f8 = 0;
      uStack_1f4 = 0x3ff00000;
      uStack_1f0 = uStack_200;
      uStack_1ec = 0xd;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_1f8);
      FUN_140e87930(uVar4,DAT_141a06588,0x80000000,&local_f8);
      local_1c8 = 0x1d3;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
      uStack_1fc = 6;
      local_208 = param_1;
      FUN_140e87440(&local_208,DAT_1419fe0e8,0x80000000,&local_1a0,uVar20 & 0xffffffffffffff00,
                    uVar22 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140e87170(uVar4,DAT_1419fe0e8,0x80000000,&local_108,param_1,param_2);
      FUN_140e609c0(param_1);
      uStack_1dc = local_194;
      uStack_1e0 = local_198;
      if ((1 << ((byte)local_194 & 0x1f) & 0x46U) == 0) {
        local_1e8 = local_1a0;
      }
      else {
        FUN_1400419b0(&local_1e8,&local_1a0);
      }
      FUN_1400462a0(&local_1e8,&local_108);
      if ((uStack_1dc & 0xffffff) == 0) {
        uVar16 = SUB84(local_1e8,0);
      }
      else {
        uVar16 = FUN_140e4b060(&local_1e8);
      }
      dVar18 = (double)FUN_140e78d00(uVar16);
      local_208 = (longlong *)(dVar18 * 0.020833333333333332);
      uStack_1fc = 0;
      FUN_140042560(&local_208,uVar6);
      if (&local_208 != puVar5) {
        local_1f8 = (undefined4)local_208;
        uStack_1f4 = local_208._4_4_;
        uStack_1f0 = uStack_200;
        uStack_1ec = uStack_1fc;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_1f8);
      }
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140e60910(1);
      local_1c8 = 0x1d4;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0xc004000000000000;
      local_1c8 = 0x1d6;
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_218 = 0;
      local_210 = 0;
      local_20c = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0e88);
      local_1f8 = _DAT_1419df7c0;
      uStack_1f4 = uRam00000001419df7c4;
      uStack_1f0 = uRam00000001419df7c8;
      uStack_1ec = uRam00000001419df7cc;
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_1f8);
      local_d8 = &local_188;
      FUN_140e63610(param_1,param_2,&local_218,1,uVar4,&local_d8);
      uVar16 = (undefined4)((ulonglong)uVar4 >> 0x20);
      local_1c8 = 0x1d8;
      pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
      pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
      pdVar10 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar18 = *pdVar9;
      }
      else {
        dVar18 = (double)FUN_140e4b060(pdVar9);
      }
      if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
        dVar19 = *pdVar8;
      }
      else {
        dVar19 = (double)FUN_140e4b060(pdVar8);
      }
      fVar17 = (float)FUN_140e793d0(0,0,(float)dVar19,(float)dVar18);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar10);
      }
      *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
      *pdVar10 = (double)fVar17;
      local_1c8 = 0x1d9;
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_218 = 0;
      local_210 = 0;
      local_20c = 5;
      uStack_1fc = 0xf;
      local_208 = (longlong *)0x1000002000000ab;
      local_1f8 = 0xab;
      uStack_1f4 = 0x1000002;
      uStack_1f0 = uStack_200;
      uStack_1ec = 0xf;
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_1f8);
      local_d8 = &local_188;
      local_1f8 = _DAT_1419ea960;
      uStack_1f4 = uRam00000001419ea964;
      uStack_1f0 = uRam00000001419ea968;
      uStack_1ec = uRam00000001419ea96c;
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1f8);
      local_d0 = &local_178;
      local_1f8 = _DAT_1419df7a0;
      uStack_1f4 = uRam00000001419df7a4;
      uStack_1f0 = uRam00000001419df7a8;
      uStack_1ec = uRam00000001419df7ac;
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_168);
      }
      FUN_140041b80(local_168,&local_1f8);
      local_c8 = local_168;
      local_1f8 = (undefined4)DAT_1419df7b0;
      uStack_1f4 = DAT_1419df7b0._4_4_;
      uStack_1f0 = DAT_1419df7b8;
      uStack_1ec = DAT_1419df7bc;
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_1f8);
      local_c0 = local_158;
      local_1f8 = (undefined4)DAT_1419df7b0;
      uStack_1f4 = DAT_1419df7b0._4_4_;
      uStack_1f0 = DAT_1419df7b8;
      uStack_1ec = DAT_1419df7bc;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_1f8);
      local_b8 = local_148;
      local_138 = FUN_140e794b0(0xcccccccd,0x3ff4000000000000);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_12c = 0;
      local_b0 = &local_138;
      ppuVar23 = &local_d8;
      uVar20 = CONCAT44(uVar16,DAT_141a0a2e8);
      FUN_140e634e0(param_1,param_2,&local_218,6,uVar20,ppuVar23);
    }
    else {
      local_1c8 = 0x1dc;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
      ppuVar11 = (undefined1 **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
      plVar21 = param_1;
      uVar20 = param_2;
      FUN_140e87170(uVar4,DAT_1419fe0e8,0x80000000,&local_108,param_1,param_2);
      uStack_1fc = 6;
      ppuVar23 = (undefined8 **)(uVar20 & 0xffffffffffffff00);
      uVar20 = (ulonglong)plVar21 & 0xffffffffffffff00;
      local_208 = param_1;
      FUN_140e87440(&local_208,DAT_1419fe0e8,0x80000000,&local_1a0,uVar20,ppuVar23);
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      iVar3 = FUN_140e851f0(&local_108,&local_1a0,DAT_141955260,1);
      bVar15 = iVar3 == -2 || -1 < iVar3;
      if (bVar15) {
        uStack_1fc = 0;
        local_208 = (longlong *)0x3ff0000000000000;
        ppuVar14 = (undefined1 **)&local_208;
      }
      else {
        uStack_1dc = 0;
        local_1e8 = &DAT_bff0000000000000;
        ppuVar14 = &local_1e8;
      }
      uVar2 = uStack_1dc;
      uVar16 = uStack_1fc;
      FUN_140e609c0(param_1);
      if (ppuVar14 != ppuVar11) {
        local_1f8 = *(undefined4 *)ppuVar14;
        uStack_1f4 = *(undefined4 *)((longlong)ppuVar14 + 4);
        uStack_1f0 = *(undefined4 *)(ppuVar14 + 1);
        uStack_1ec = *(undefined4 *)((longlong)ppuVar14 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(ppuVar11);
        }
        FUN_140041b80(ppuVar11,&local_1f8);
      }
      if ((bVar15) && ((1 << ((byte)uVar16 & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_208);
      }
      if ((iVar3 != -2 && -1 >= iVar3) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140e60910(1);
    }
    local_1c8 = 0x1de;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    FUN_140e87440(uVar4,DAT_141a0a848,0x80000000,&local_a8,uVar20 & 0xffffffffffffff00,
                  (ulonglong)ppuVar23 & 0xffffffffffffff00);
    FUN_1400460e0(&local_a8,local_68);
    FUN_140e87930(uVar4,DAT_141a0a848,0x80000000,&local_a8);
  }
  else {
    local_1c8 = 0x1e2;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
    uStack_1dc = *(uint *)((longlong)puVar5 + 0xc);
    uStack_1e0 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
      local_1e8 = (undefined1 *)*puVar5;
    }
    else {
      FUN_1400419b0(&local_1e8,puVar5);
    }
    FUN_140042560(&local_1e8,uVar4);
    FUN_1400460e0(uVar6,&local_1e8);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1c8 = 0x1e4;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    local_1f8 = (undefined4)DAT_1419df7b0;
    uStack_1f4 = DAT_1419df7b0._4_4_;
    uStack_1f0 = DAT_1419df7b8;
    uStack_1ec = DAT_1419df7bc;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1f8);
    local_d8 = &local_188;
    local_1f8 = (undefined4)DAT_1419df7b0;
    uStack_1f4 = DAT_1419df7b0._4_4_;
    uStack_1f0 = DAT_1419df7b8;
    uStack_1ec = DAT_1419df7bc;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1f8);
    local_d0 = &local_178;
    uVar4 = gml_Script_animcurve_lerp(param_1,param_2,&local_218,2,&local_d8);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      local_1c8 = 0x1e6;
      if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b0);
      }
      local_1a4 = 0;
      local_1b0 = 0;
      FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_1b0);
    }
    local_1c8 = 0x1e9;
    pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
      dVar18 = *pdVar9;
    }
    else {
      dVar18 = (double)FUN_140e4b060(pdVar9);
    }
    if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
      dVar19 = *pdVar8;
    }
    else {
      dVar19 = (double)FUN_140e4b060(pdVar8);
    }
    fVar17 = (float)FUN_140e793d0(0,0,(float)dVar19,(float)dVar18);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_11c = 0;
    local_128 = (double)fVar17;
    local_1c8 = 0x1eb;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
    puVar12 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
    if (puVar5 != &local_188) {
      local_1f8 = *(undefined4 *)puVar5;
      uStack_1f4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_1f0 = *(undefined4 *)(puVar5 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_1f8);
    }
    local_d8 = &local_188;
    local_d0 = &local_128;
    local_1f8 = _DAT_1419ea940;
    uStack_1f4 = uRam00000001419ea944;
    uStack_1f0 = uRam00000001419ea948;
    uStack_1ec = uRam00000001419ea94c;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1f8);
    local_c8 = local_168;
    FUN_140e609c0(param_1);
    puVar13 = (undefined4 *)
              gml_Script_AngleRotateTowardsLerp(param_1,param_2,&local_218,3,&local_d8);
    if (puVar13 != puVar12) {
      local_1f8 = *puVar13;
      uStack_1f4 = puVar13[1];
      uStack_1f0 = puVar13[2];
      uStack_1ec = puVar13[3];
      if ((1 << ((byte)puVar12[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar12);
      }
      FUN_140041b80(puVar12,&local_1f8);
    }
    FUN_140e60910(1);
    local_1c8 = 0x1ed;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
    uStack_1fc = 0;
    local_208 = (longlong *)&DAT_bff0000000000000;
    iVar3 = FUN_140e851f0(uVar4,&local_208,DAT_141955260,0);
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if (iVar3 == 0) {
      local_1c8 = 0x1ef;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = &DAT_bff0000000000000;
      local_1c8 = 0x1f0;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = &DAT_bff0000000000000;
    }
    local_1c8 = 500;
    uStack_1fc = 0;
    local_208 = (longlong *)0x0;
    uVar2 = FUN_140e851f0(pdVar9,&local_208,DAT_141955260,1);
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if (uVar2 < 0x80000000) {
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_218 = 0;
      local_210 = 0;
      local_20c = 5;
      (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
      uVar20 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff968);
      local_1f8 = _DAT_1419ea8c0;
      uStack_1f4 = uRam00000001419ea8c4;
      uStack_1f0 = uRam00000001419ea8c8;
      uStack_1ec = uRam00000001419ea8cc;
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_1f8);
      local_d8 = &local_188;
      ppuVar23 = &local_d8;
      uVar4 = FUN_140e63610(param_1,param_2,&local_218,1,uVar20,ppuVar23);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 != '\0') {
        local_1c8 = 0x1f6;
        if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c0);
        }
        local_1c0 = 0;
        local_1b8 = 0;
        local_1b4 = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
        FUN_140e87440(uVar4,DAT_141a55540,0x80000000,&local_98,uVar20 & 0xffffffffffffff00,
                      (ulonglong)ppuVar23 & 0xffffffffffffff00);
        local_1f8 = _DAT_141dd89c8;
        uStack_1f4 = uRam0000000141dd89cc;
        uStack_1f0 = uRam0000000141dd89d0;
        uStack_1ec = DAT_141dd89d4;
        if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        FUN_140041b80(&local_178,&local_1f8);
        local_d0 = &local_178;
        uVar4 = FUN_140069500(uVar4);
        FUN_140e63610(uVar4,param_2,&local_1c0,1,&local_98,&local_d0);
        local_1c8 = 0x1f7;
        goto LAB_1409c7146;
      }
    }
    local_1c8 = 0x1f9;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7d8);
    if (puVar5 != &local_188) {
      local_1f8 = *(undefined4 *)puVar5;
      uStack_1f4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_1f0 = *(undefined4 *)(puVar5 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_1f8);
    }
    local_d8 = &local_188;
    FUN_140e63610(param_1,param_2,&local_218,1,uVar4,&local_d8);
  }
  local_1c8 = 0x1fb;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_218,0,uVar4,0);
  local_1c8 = 0x1fc;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0ef8);
  FUN_140e63610(param_1,param_2,&local_218,0,uVar4,0);
LAB_1409c7146:
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_188,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1d8;
  return param_3;
}

