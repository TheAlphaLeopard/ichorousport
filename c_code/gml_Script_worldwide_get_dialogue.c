// gml_Script_worldwide_get_dialogue @ 0x14064c070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong **
gml_Script_worldwide_get_dialogue
          (undefined8 param_1,undefined8 param_2,longlong **param_3,undefined4 param_4,
          undefined8 param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  longlong **pplVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  bool bVar13;
  undefined4 uVar15;
  undefined8 uVar14;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong *local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  longlong *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong local_158;
  undefined4 local_150;
  uint local_14c;
  longlong *local_148;
  undefined4 local_140;
  uint local_13c;
  longlong local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined1 local_108 [32];
  longlong local_e8;
  byte local_dc;
  longlong local_d8;
  byte local_cc;
  longlong local_c8;
  byte local_bc;
  longlong local_b8;
  byte local_ac;
  uint local_a8 [2];
  undefined8 *local_a0;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  
  local_120 = "gml_Script_worldwide_get";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0x3a;
  bVar4 = false;
  bVar3 = true;
  FUN_140041df0(local_a8,param_4,2,param_5);
  uVar15 = 1;
  _eh_vector_constructor_iterator_(local_108,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_198 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f63c8);
  plVar6 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f63e8);
  local_14c = 0xffffff;
  local_158 = 0;
  local_13c = 0xffffff;
  local_148 = (longlong *)0x0;
  local_8c = 0;
  local_98 = 0;
  local_15c = 0;
  local_168 = 0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = (longlong *)0x0;
  local_118 = 0x3a;
  puVar10 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_a8[0];
  if ((int)local_a8[0] < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_a0[1];
  }
  local_188 = plVar6;
  iVar5 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 == 0) {
    local_118 = 0x3a;
    if ((int)local_a8[0] < 2) {
      puVar8 = &DAT_1419df7b0;
LAB_14064c1e5:
      local_1a8 = CONCAT44(uRam0000000141dd502c,_DAT_141dd5028);
      uStack_1a0 = uRam0000000141dd5030;
      uStack_19c = DAT_141dd5034;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_1a8);
    }
    else {
      puVar8 = (undefined8 *)local_a0[1];
      if (puVar8 != (undefined8 *)&DAT_141dd5028) goto LAB_14064c1e5;
    }
    plVar6 = local_188;
  }
  local_118 = 0x3c;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  if (plVar6 != &local_c8) {
    local_1a8 = *plVar6;
    uStack_1a0 = (undefined4)plVar6[1];
    uStack_19c = *(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_1a8);
  }
  local_58 = &local_c8;
  if ((int)local_a8[0] < 1) {
    plVar6 = &DAT_1419df7b0;
LAB_14064c2ac:
    local_1a8 = *plVar6;
    uStack_1a0 = (undefined4)plVar6[1];
    uStack_19c = *(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_1a8);
  }
  else {
    plVar6 = (longlong *)*local_a0;
    if (plVar6 != &local_b8) goto LAB_14064c2ac;
  }
  local_50 = &local_b8;
  uVar14 = CONCAT44(uVar15,DAT_141a01138);
  plVar6 = (longlong *)FUN_140e634e0(param_1,param_2,&local_178,2,uVar14,&local_58);
  uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
  lVar11 = 0;
  uVar12 = 0xffffff;
  if (plVar6 != &local_158) {
    local_1a8 = *plVar6;
    uStack_1a0 = (undefined4)plVar6[1];
    uStack_19c = *(undefined4 *)((longlong)plVar6 + 0xc);
    FUN_140041b80(&local_158,&local_1a8);
    lVar11 = local_158;
    uVar12 = local_14c;
  }
  if ((uVar12 & 0xffffff) == 3) {
    bVar13 = lVar11 == 0;
  }
  else {
    bVar13 = (uVar12 & 0xffffff) == 5;
  }
  if (!bVar13) {
    uStack_12c = uVar12;
    uStack_130 = local_150;
    if ((1 << ((byte)uVar12 & 0x1f) & 0x46U) == 0) {
      local_138 = lVar11;
    }
    else {
      FUN_1400419b0(&local_138,&local_158);
    }
    plVar6 = &local_138;
    goto LAB_14064c4bc;
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if (local_198 != &local_e8) {
    local_1a8 = *local_198;
    uStack_1a0 = (undefined4)local_198[1];
    uStack_19c = *(undefined4 *)((longlong)local_198 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1a8);
  }
  local_68 = &local_e8;
  if ((int)local_a8[0] < 1) {
    plVar6 = &DAT_1419df7b0;
LAB_14064c3e8:
    local_1a8 = *plVar6;
    uStack_1a0 = (undefined4)plVar6[1];
    uStack_19c = *(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_1a8);
  }
  else {
    plVar6 = (longlong *)*local_a0;
    if (plVar6 != &local_d8) goto LAB_14064c3e8;
  }
  local_60 = &local_d8;
  plVar6 = (longlong *)
           FUN_140e634e0(param_1,param_2,&local_168,2,CONCAT44(uVar15,DAT_141a01138),&local_68);
  uStack_19c = *(undefined4 *)((longlong)plVar6 + 0xc);
  uStack_1a0 = (int)plVar6[1];
  if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
    local_1a8 = *plVar6;
  }
  else {
    FUN_1400419b0(&local_1a8,plVar6);
  }
  plVar6 = &local_1a8;
  bVar4 = true;
  bVar3 = false;
LAB_14064c4bc:
  local_198 = (longlong *)*plVar6;
  uStack_190 = (undefined4)plVar6[1];
  uStack_18c = *(uint *)((longlong)plVar6 + 0xc);
  FUN_140041b80(&local_148,&local_198);
  if ((local_13c & 0xffffff) == 3) {
    bVar13 = local_148 == (longlong *)0x0;
  }
  else {
    bVar13 = (local_13c & 0xffffff) == 5;
  }
  bVar1 = (byte)local_13c;
  if (bVar13) {
    if (1 < (int)local_a8[0]) {
      puVar10 = (undefined8 *)local_a0[1];
    }
    local_17c = *(undefined4 *)((longlong)puVar10 + 0xc);
    local_180 = *(undefined4 *)(puVar10 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_188 = (longlong *)*puVar10;
    }
    else {
      FUN_1400419b0(&local_188,puVar10);
    }
    pplVar7 = &local_188;
    bVar2 = true;
    bVar13 = false;
  }
  else {
    uStack_18c = local_13c;
    uStack_190 = local_140;
    if ((1 << (bVar1 & 0x1f) & 0x46U) == 0) {
      local_198 = local_148;
    }
    else {
      FUN_1400419b0(&local_198,&local_148);
    }
    pplVar7 = &local_198;
    bVar2 = false;
    bVar13 = true;
  }
  if (pplVar7 != param_3) {
    local_88 = *(undefined4 *)pplVar7;
    uStack_84 = *(undefined4 *)((longlong)pplVar7 + 4);
    uStack_80 = *(undefined4 *)(pplVar7 + 1);
    uStack_7c = *(undefined4 *)((longlong)pplVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_88);
  }
  if ((bVar13) && ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_198);
  }
  if ((bVar2) && ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_188);
  }
  if ((bVar3) && ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_138);
  }
  if ((bVar4) && ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_108,0x10,6,FUN_140041b30);
  if (0 < (int)local_a8[0]) {
    puVar10 = local_a0;
    do {
      puVar8 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_a0);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

