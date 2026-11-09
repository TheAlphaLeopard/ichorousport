// gml_Script_anon_3021____struct___484_gml_Object_oEnemyMoistMan_Create_0 @ 0x1409de1e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_3021____struct___484_gml_Object_oEnemyMoistMan_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong **pplVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  longlong **pplVar12;
  bool bVar13;
  undefined4 uVar18;
  longlong *plVar14;
  undefined8 **ppuVar15;
  undefined8 **ppuVar16;
  undefined8 uVar17;
  undefined4 **ppuVar19;
  ulonglong uVar20;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  byte local_13c;
  undefined4 local_138 [3];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  longlong *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 *local_e0;
  undefined4 *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong *local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  
  local_100 = "gml_Script_anon@2523@___struct___483@gml_Object_oEnemyMoistMan_Create_0";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x76;
  uVar18 = 1;
  _eh_vector_constructor_iterator_(&local_148,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_17c = 0;
  local_188 = 0;
  local_14c = 0;
  local_158 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x77;
  local_168 = uVar4;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar5 != &local_148) {
    local_118 = (longlong *)*puVar5;
    uStack_110 = *(undefined4 *)(puVar5 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_118);
  }
  local_e0 = &local_148;
  ppuVar16 = &local_e0;
  uVar6 = FUN_140e634e0(param_1,param_2,&local_188,1,CONCAT44(uVar18,DAT_141a02ef8),ppuVar16);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    local_f8 = 0x78;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
    FUN_140e609c0(param_1);
    puVar7 = (undefined8 *)gml_Script_FracPos(param_1,param_2,&local_158,0,0);
    if (puVar7 != puVar5) {
      local_118 = (longlong *)*puVar7;
      uStack_110 = *(undefined4 *)(puVar7 + 1);
      uStack_10c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_118);
    }
  }
  else {
    local_f8 = 0x7a;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    pplVar8 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
    plVar14 = param_1;
    uVar11 = param_2;
    FUN_140e87170(uVar4,DAT_1419fe0e8,0x80000000,&local_58,param_1,param_2);
    local_ac = 6;
    ppuVar16 = (undefined8 **)(uVar11 & 0xffffffffffffff00);
    local_b8 = param_1;
    FUN_140e87440(&local_b8,DAT_1419fe0e8,0x80000000,&local_68,
                  (ulonglong)plVar14 & 0xffffffffffffff00,ppuVar16);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    iVar3 = FUN_140e851f0(&local_58,&local_68,DAT_141955260,1);
    bVar13 = iVar3 == -2 || -1 < iVar3;
    if (bVar13) {
      local_ac = 0;
      local_b8 = (longlong *)0x3ff0000000000000;
      pplVar12 = &local_b8;
    }
    else {
      uStack_10c = 0;
      local_118 = (longlong *)&DAT_bff0000000000000;
      pplVar12 = &local_118;
    }
    uVar1 = local_ac;
    uVar18 = uStack_10c;
    FUN_140e609c0(param_1);
    if (pplVar12 != pplVar8) {
      local_178 = *(undefined4 *)pplVar12;
      uStack_174 = *(undefined4 *)((longlong)pplVar12 + 4);
      uStack_170 = *(undefined4 *)(pplVar12 + 1);
      uStack_16c = *(undefined4 *)((longlong)pplVar12 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar8);
      }
      FUN_140041b80(pplVar8,&local_178);
    }
    if ((bVar13) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_b8);
    }
    if ((iVar3 != -2 && -1 >= iVar3) && ((1 << ((byte)uVar18 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_118);
    }
    uVar4 = local_168;
  }
  FUN_140e60910(1);
  local_f8 = 0x7c;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_160 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
    local_168 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_168,puVar5);
  }
  FUN_140042560(&local_168,uVar4);
  FUN_1400460e0(uVar6,&local_168);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_f8 = 0x7e;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  puVar9 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if (puVar5 != &local_148) {
    local_178 = *(undefined4 *)puVar5;
    uStack_174 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_170 = *(undefined4 *)(puVar5 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  local_e0 = &local_148;
  local_178 = _DAT_141dc6ef0;
  uStack_174 = uRam0000000141dc6ef4;
  uStack_170 = uRam0000000141dc6ef8;
  uStack_16c = uRam0000000141dc6efc;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_178);
  local_d8 = local_138;
  local_178 = _DAT_1419eaab0;
  uStack_174 = uRam00000001419eaab4;
  uStack_170 = uRam00000001419eaab8;
  uStack_16c = uRam00000001419eaabc;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_178);
  local_d0 = local_128;
  FUN_140e609c0(param_1);
  ppuVar15 = &local_e0;
  puVar10 = (undefined4 *)gml_Script_arc(param_1,param_2,&local_188,3,ppuVar15);
  if (puVar10 != puVar9) {
    local_178 = *puVar10;
    uStack_174 = puVar10[1];
    uStack_170 = puVar10[2];
    uStack_16c = puVar10[3];
    if ((1 << ((byte)puVar9[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_178);
  }
  FUN_140e60910(1);
  local_f8 = 0x7f;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uStack_10c = 6;
  uVar11 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_141a0a818,0x80000000,&local_78,
                (ulonglong)ppuVar15 & 0xffffffffffffff00,uVar11);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_178 = (undefined4)local_78;
  uStack_174 = local_78._4_4_;
  uStack_170 = uStack_70;
  uStack_16c = uStack_6c;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_178);
  local_e0 = &local_148;
  local_178 = _DAT_1419eaa80;
  uStack_174 = uRam00000001419eaa84;
  uStack_170 = uRam00000001419eaa88;
  uStack_16c = uRam00000001419eaa8c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_178);
  local_d8 = local_138;
  local_178 = _DAT_1419eaa90;
  uStack_174 = uRam00000001419eaa94;
  uStack_170 = uRam00000001419eaa98;
  uStack_16c = uRam00000001419eaa9c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_178);
  local_d0 = local_128;
  ppuVar16 = &local_e0;
  puVar5 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_188,3,ppuVar16);
  uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_160 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
    local_168 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_168,puVar5);
  }
  FUN_140042560(&local_168,uVar4);
  local_178 = (undefined4)local_168;
  uStack_174 = local_168._4_4_;
  uStack_170 = uStack_160;
  uStack_16c = uStack_15c;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_178);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_a8);
  local_f8 = 0x81;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar20 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_141a0a848,0x80000000,&local_88,uVar20,uVar11 & 0xffffffffffffff00);
  uVar18 = (undefined4)(uVar20 >> 0x20);
  local_178 = _DAT_141dc6ef0;
  uStack_174 = uRam0000000141dc6ef4;
  uStack_170 = uRam0000000141dc6ef8;
  uStack_16c = uRam0000000141dc6efc;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_178);
  local_e0 = &local_148;
  uVar17 = CONCAT44(uVar18,DAT_141a0a0d8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_188,1,uVar17,&local_e0);
  uVar18 = (undefined4)((ulonglong)uVar17 >> 0x20);
  iVar3 = FUN_140e851f0(&local_88,uVar6,DAT_141955260,1);
  if (0 < iVar3) {
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    puVar9 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    if (puVar9 != local_138) {
      local_178 = *puVar9;
      uStack_174 = puVar9[1];
      uStack_170 = puVar9[2];
      uStack_16c = puVar9[3];
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_178);
    }
    local_d8 = local_138;
    ppuVar19 = &local_d8;
    uVar11 = CONCAT44(uVar18,DAT_141a02ef8);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_158,1,uVar11,ppuVar19);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 != '\0') {
      local_f8 = 0x83;
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0;
      local_bc = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar4,DAT_141a55540,0x80000000,&local_98,uVar11 & 0xffffffffffffff00,
                    (ulonglong)ppuVar19 & 0xffffffffffffff00);
      local_178 = _DAT_141dd8ad8;
      uStack_174 = uRam0000000141dd8adc;
      uStack_170 = uRam0000000141dd8ae0;
      uStack_16c = DAT_141dd8ae4;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_178);
      local_d0 = local_128;
      uVar4 = FUN_140069500(uVar4);
      FUN_140e63610(uVar4,param_2,&local_c8,1,&local_98,&local_d0);
      local_f8 = 0x84;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f0);
      }
      local_e4 = 0;
      local_f0 = 0;
      FUN_140e87930(uVar4,DAT_141a0a848,0x80000000,&local_f0);
      local_f8 = 0x85;
      goto LAB_1409dee16;
    }
  }
  local_f8 = 0x89;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_188,0,uVar6,0);
  local_f8 = 0x8a;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
  FUN_140e63610(param_1,param_2,&local_188,0,uVar6,0);
  local_f8 = 0x8b;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  uVar20 = 0;
  FUN_140e63610(param_1,param_2,&local_188,0,uVar11,0);
  local_f8 = 0x8c;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar6,DAT_141a0a848,0x80000000,&local_f0,uVar11 & 0xffffffffffffff00,
                uVar20 & 0xffffffffffffff00);
  FUN_1400460e0(&local_f0,uVar4);
  FUN_140e87930(uVar6,DAT_141a0a848,0x80000000,&local_f0);
LAB_1409dee16:
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

