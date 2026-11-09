// gml_Script_anon_12996_anon_12473_gml_Object_oRogueLevelManager_Create_0 @ 0x140cc76c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_12996_anon_12473_gml_Object_oRogueLevelManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  byte bVar11;
  longlong **pplVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  code *pcVar16;
  undefined4 uVar17;
  ulonglong in_stack_fffffffffffffe60;
  undefined1 **ppuVar18;
  ulonglong uVar19;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  longlong *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  longlong *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  longlong *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f4;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  uint local_68 [2];
  undefined8 *local_60;
  
  local_110 = "gml_Script_anon@11944@anon@11810@gml_Object_oRogueLevelManager_Create_0";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x203;
  FUN_140041df0(local_68,param_4,1,param_5);
  pcVar16 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_e8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = (longlong *)0x0;
  uStack_12c = 0xffffff;
  local_138 = (longlong *)0x0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_14c = 0xffffff;
  local_158 = (longlong *)0x0;
  local_13c = 0xffffff;
  local_148 = 0;
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef678);
  puVar7 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  uVar15 = local_68[0];
  uStack_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  local_17c = 0;
  local_188 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x203;
  puVar13 = &DAT_1419df7b0;
  if ((int)local_68[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_60;
  }
  iVar4 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 != 0) goto LAB_140cc78ce;
  local_108 = 0x203;
  local_16c = 6;
  in_stack_fffffffffffffe60 = in_stack_fffffffffffffe60 & 0xffffffffffffff00;
  pcVar16 = (code *)((ulonglong)pcVar16 & 0xffffffffffffff00);
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0a818,0x80000000,&local_98,pcVar16,in_stack_fffffffffffffe60);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((int)uVar15 < 1) {
    pplVar12 = (longlong **)&DAT_1419df7b0;
LAB_140cc789b:
    local_198 = local_98;
    uStack_190 = uStack_90;
    uStack_18c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar12);
    }
    FUN_140041b80(pplVar12,&local_198);
  }
  else {
    pplVar12 = (longlong **)*local_60;
    if (&local_98 != pplVar12) goto LAB_140cc789b;
  }
  uVar15 = local_68[0];
LAB_140cc78ce:
  local_108 = 0x204;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  local_16c = 6;
  uVar14 = (ulonglong)pcVar16 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0a728,0x80000000,&local_138,uVar14,
                in_stack_fffffffffffffe60 & 0xffffffffffffff00);
  uVar17 = (undefined4)(uVar14 >> 0x20);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_198 = local_138;
  uStack_190 = uStack_130;
  uStack_18c = uStack_12c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_198);
  local_88 = local_e8;
  ppuVar18 = &local_88;
  uVar14 = CONCAT44(uVar17,DAT_141a09fe8);
  puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_188,1,uVar14,ppuVar18);
  if (puVar8 != &local_100) {
    local_198 = (longlong *)*puVar8;
    uStack_190 = *(undefined4 *)(puVar8 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    FUN_140041b80(&local_100,&local_198);
  }
  local_108 = 0x205;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  local_16c = 6;
  uVar14 = uVar14 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0a728,0x80000000,&local_138,uVar14,
                (ulonglong)ppuVar18 & 0xffffffffffffff00);
  uVar17 = (undefined4)(uVar14 >> 0x20);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_198 = local_138;
  uStack_190 = uStack_130;
  uStack_18c = uStack_12c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_198);
  local_88 = local_e8;
  if (0 < (int)uVar15) {
    puVar13 = (undefined8 *)*local_60;
  }
  ppuVar18 = &local_88;
  uVar14 = CONCAT44(uVar17,DAT_141a0a068);
  puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_188,1,uVar14,ppuVar18);
  uStack_15c = *(undefined4 *)((longlong)puVar8 + 0xc);
  uStack_160 = *(undefined4 *)(puVar8 + 1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
    local_168 = (longlong *)*puVar8;
  }
  else {
    FUN_1400419b0(&local_168,puVar8);
  }
  FUN_140042560(&local_168,puVar13);
  local_198 = local_168;
  uStack_190 = uStack_160;
  uStack_18c = uStack_15c;
  FUN_140041b80(&local_158,&local_198);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_108 = 0x207;
  local_16c = 0;
  local_178 = (longlong *)0x0;
  iVar4 = FUN_140e851f0(&local_100,&local_178,DAT_141955260,0);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (iVar4 == 0) {
    local_108 = 0x208;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    uVar17 = (undefined4)(uVar14 >> 0x20);
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    local_198 = (longlong *)CONCAT44(uRam0000000141dc7594,_DAT_141dc7590);
    uStack_190 = uRam0000000141dc7598;
    uStack_18c = uRam0000000141dc759c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_198);
    local_88 = local_e8;
    ppuVar18 = &local_88;
    uVar14 = CONCAT44(uVar17,DAT_141a0a0d8);
    uVar9 = FUN_140e634e0(param_1,param_2,&local_188,1,uVar14,ppuVar18);
    uStack_15c = local_14c;
    uStack_160 = local_150;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
      local_168 = local_158;
      FUN_140046500(&local_168,uVar9);
      local_198 = local_168;
      uStack_190 = uStack_160;
      uStack_18c = uStack_15c;
    }
    else {
      FUN_1400419b0(&local_168,&local_158);
      FUN_140046500(&local_168,uVar9);
      local_198 = local_168;
      uStack_190 = uStack_160;
      uStack_18c = uStack_15c;
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_198);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
  }
  local_108 = 0x20a;
  local_16c = 6;
  uVar19 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
  uVar14 = uVar14 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0cfc8,0x80000000,&local_148,uVar14,uVar19);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  cVar3 = FUN_140e491e0(uVar6);
  uVar15 = 0x3ff00000;
  if (cVar3 == '\0') {
    local_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
    local_170 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
      local_178 = (longlong *)*puVar7;
    }
    else {
      FUN_1400419b0(&local_178,puVar7);
    }
    pplVar12 = &local_178;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    uStack_18c = 0;
    local_198 = (longlong *)0x3ff0000000000000;
    pplVar12 = (longlong **)&local_198;
    bVar2 = true;
    bVar1 = false;
  }
  uStack_15c = local_14c;
  uStack_160 = local_150;
  bVar11 = (byte)local_14c & 0x1f;
  if ((1 << bVar11 & 0x46U) == 0) {
    local_168 = local_158;
  }
  else {
    FUN_1400419b0(&local_168,&local_158);
  }
  FUN_140042560(&local_168,pplVar12);
  FUN_1400460e0(&local_148,&local_168);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((bVar1) && ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_178);
  }
  if ((bVar2) && ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_198);
  }
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_148);
  local_108 = 0x20c;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  plVar10 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9bc8);
  uStack_18c = 6;
  uVar19 = uVar19 & 0xffffffffffffff00;
  uVar14 = uVar14 & 0xffffffffffffff00;
  local_198 = param_1;
  FUN_140e87440(&local_198,DAT_141a0cfc8,0x80000000,&local_a8,uVar14,uVar19);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_18c = 6;
  uVar14 = uVar14 & 0xffffffffffffff00;
  local_198 = param_1;
  FUN_140e87440(&local_198,DAT_141a0a728,0x80000000,&local_138,uVar14,uVar19 & 0xffffffffffffff00);
  uVar17 = (undefined4)(uVar14 >> 0x20);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = local_138;
  uStack_190 = uStack_130;
  uStack_18c = uStack_12c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_198);
  local_88 = local_e8;
  FUN_140e609c0(param_1);
  ppuVar18 = &local_88;
  uVar14 = CONCAT44(uVar17,DAT_141a049b8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_188,1,uVar14,ppuVar18);
  uVar5 = FUN_140e851f0(&local_a8,uVar6,DAT_141955260,1);
  if ((1 << ((byte)*(undefined4 *)((longlong)plVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(plVar10);
  }
  *(undefined4 *)((longlong)plVar10 + 0xc) = 0xd;
  if (0x7fffffff < uVar5) {
    uVar15 = 0;
  }
  *plVar10 = (ulonglong)uVar15 << 0x20;
  FUN_140e60910(1);
  local_108 = 0x20d;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uStack_18c = 6;
  uVar19 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
  uVar14 = uVar14 & 0xffffffffffffff00;
  local_198 = param_1;
  FUN_140e87440(&local_198,DAT_141a0cfc8,0x80000000,&local_a8,uVar14,uVar19);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_18c = 6;
  uVar14 = uVar14 & 0xffffffffffffff00;
  local_198 = param_1;
  FUN_140e87440(&local_198,DAT_141a0a728,0x80000000,&local_138,uVar14,uVar19 & 0xffffffffffffff00);
  uVar17 = (undefined4)(uVar14 >> 0x20);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = local_138;
  uStack_190 = uStack_130;
  uStack_18c = uStack_12c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_198);
  local_88 = local_e8;
  local_198 = local_a8;
  uStack_190 = uStack_a0;
  uStack_18c = uStack_9c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_198);
  local_80 = local_d8;
  local_198 = (longlong *)CONCAT44(uRam0000000141dc7594,_DAT_141dc7590);
  uStack_190 = uRam0000000141dc7598;
  uStack_18c = uRam0000000141dc759c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_198);
  local_78 = local_c8;
  puVar13 = (undefined8 *)
            FUN_140e634e0(param_1,param_2,&local_128,1,CONCAT44(uVar17,DAT_141a049b8),&local_88);
  if (puVar13 != &local_b8) {
    local_198 = (longlong *)*puVar13;
    uStack_190 = *(undefined4 *)(puVar13 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar13 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_198);
  }
  local_70 = &local_b8;
  puVar13 = (undefined8 *)gml_RoomCC_rmGravePit01_0_Create(param_1,param_2,&local_188,3,&local_80);
  if (puVar13 != &local_148) {
    local_198 = (longlong *)*puVar13;
    uStack_190 = *(undefined4 *)(puVar13 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar13 + 0xc);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_198);
  }
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_148);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << bVar11 & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,4,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    uVar14 = (ulonglong)local_68[0];
    puVar13 = local_60;
    do {
      puVar7 = (undefined8 *)*puVar13;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 5;
      puVar13 = puVar13 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

