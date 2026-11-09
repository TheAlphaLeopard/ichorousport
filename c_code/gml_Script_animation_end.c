// gml_Script_animation_end @ 0x14021dab0

/* WARNING: Removing unreachable block (ram,0x00014021e051) */
/* WARNING: Removing unreachable block (ram,0x00014021e068) */

ulonglong *
gml_Script_animation_end
          (undefined8 param_1,undefined8 param_2,ulonglong *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  ulonglong *puVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  double dVar14;
  ulonglong local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  ulonglong local_1b8;
  uint local_1ac;
  ulonglong local_1a8;
  ulonglong uStack_1a0;
  ulonglong local_198;
  undefined4 uStack_18c;
  ulonglong local_188;
  undefined4 local_17c;
  ulonglong local_178;
  uint local_16c;
  ulonglong local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  ulonglong local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  ulonglong local_f8;
  undefined4 local_ec;
  double local_e8;
  undefined4 local_dc;
  ulonglong local_d8;
  ulonglong uStack_d0;
  ulonglong local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  ulonglong *local_a0;
  ulonglong *local_98;
  undefined1 local_90 [88];
  
  local_b0 = "gml_Script_AngleRotateTowardsLerp";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 7;
  uVar12 = 1;
  _eh_vector_constructor_iterator_(local_90,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_13c = 0;
  local_148 = 0;
  local_dc = 0;
  local_e8 = (double)param_4;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 8;
  puVar11 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar9 = &DAT_1419df7b0;
LAB_14021dbd8:
    local_1a8 = *puVar9;
    uStack_1a0 = puVar9[1];
    FUN_140041b80(&local_f8,&local_1a8);
  }
  else {
    puVar9 = (ulonglong *)*param_5;
    if (puVar9 != &local_f8) goto LAB_14021dbd8;
  }
  if (param_4 < 2) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (ulonglong *)param_5[1];
    if (puVar9 == &local_168) goto LAB_14021dc37;
  }
  local_1a8 = *puVar9;
  uStack_1a0 = puVar9[1];
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_1a8);
LAB_14021dc37:
  if (param_4 < 3) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)param_5[2];
  }
  if ((*(uint *)((longlong)puVar10 + 0xc) & 0xffffff) != 0) {
    FUN_140e4b060();
  }
  uVar13 = FUN_140e78d00();
  uVar13 = FUN_140e78ec0(uVar13,0,0x3ff0000000000000);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_12c = 0;
  uStack_1bc = 0;
  local_1c8 = 0x4008000000000000;
  local_138 = uVar13;
  iVar8 = FUN_140e851f0(&local_e8,&local_1c8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if (iVar8 < 1) {
    uStack_18c = 0;
    local_198 = 0x3f1a36e2eb1c432d;
    puVar9 = &local_198;
    bVar2 = true;
    bVar1 = false;
  }
  else {
    if (param_4 < 4) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (ulonglong *)param_5[3];
    }
    uStack_1bc = *(undefined4 *)((longlong)puVar9 + 0xc);
    uStack_1c0 = (int)puVar9[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_1c8 = *puVar9;
    }
    else {
      FUN_1400419b0(&local_1c8);
    }
    puVar9 = &local_1c8;
    bVar2 = false;
    bVar1 = true;
  }
  uVar6 = uStack_18c;
  local_1a8 = *puVar9;
  uStack_1a0 = puVar9[1];
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_1a8);
  if ((bVar2) && ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_198);
  }
  if ((bVar1) && ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  local_98 = &local_168;
  local_a0 = &local_f8;
  puVar9 = (ulonglong *)
           FUN_140e634e0(param_1,param_2,&local_148,2,CONCAT44(uVar12,DAT_141a0bf58),&local_a0);
  if (puVar9 != &local_1b8) {
    local_1a8 = *puVar9;
    uStack_1a0 = puVar9[1];
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_1a8);
  }
  uStack_18c = 0;
  local_198 = 0x4010000000000000;
  iVar8 = FUN_140e851f0(&local_e8,&local_198,DAT_141955260,1);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if (iVar8 < 1) {
    if ((local_1ac & 0xffffff) != 0) {
      FUN_140e4b060(&local_1b8);
    }
    local_198 = FUN_140e79500();
    uStack_18c = 0;
    puVar11 = &local_198;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
  }
  else {
    if (param_4 < 5) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (ulonglong *)param_5[4];
    }
    if ((*(uint *)((longlong)puVar9 + 0xc) & 0xffffff) == 0) {
      local_1a8 = *puVar9;
    }
    else {
      local_1a8 = FUN_140e4b060();
    }
    uStack_1a0 = uStack_1a0 & 0xffffffff;
    local_1a8 = local_1a8 ^ 0x8000000000000000;
    dVar14 = (double)FUN_140e79500();
    if (dVar14 == 0.0) {
      if ((local_1ac & 0xffffff) != 0) {
        FUN_140e4b060(&local_1b8);
      }
      local_188 = FUN_140e79500();
      local_17c = 0;
      puVar11 = &local_188;
      bVar4 = true;
      bVar3 = false;
      bVar2 = false;
    }
    else {
      if (4 < param_4) {
        puVar11 = (ulonglong *)param_5[4];
      }
      if ((*(uint *)((longlong)puVar11 + 0xc) & 0xffffff) == 0) {
        local_128 = *puVar11;
      }
      else {
        local_128 = FUN_140e4b060(puVar11);
      }
      local_11c = 0;
      local_128 = local_128 ^ 0x8000000000000000;
      local_c8 = FUN_140e79500();
      local_bc = 0;
      puVar11 = &local_c8;
      bVar4 = false;
      bVar3 = true;
      bVar2 = true;
    }
    uStack_1bc = *(undefined4 *)((longlong)puVar11 + 0xc);
    uStack_1c0 = (int)puVar11[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_1c8 = *puVar11;
    }
    else {
      FUN_1400419b0(&local_1c8);
    }
    puVar11 = &local_1c8;
    bVar5 = true;
    bVar1 = true;
  }
  local_d8 = *puVar11;
  uStack_d0 = puVar11[1];
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_d8);
  if ((bVar1) && ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1c8);
  }
  if ((bVar2) && ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_c8);
  }
  if ((bVar3) && ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_128);
  }
  if ((bVar4) && ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_188);
  }
  if ((bVar5) && ((1 << ((byte)(uStack_1a0 >> 0x20) & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1a8);
  }
  if ((local_1ac & 0xffffff) != 0) {
    FUN_140e4b060(&local_1b8);
  }
  local_188 = FUN_140e79500();
  local_17c = 0;
  iVar8 = FUN_140e851f0(&local_188,&local_118,DAT_141955260,0);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_14c = 0xd;
  if (iVar8 == 0) {
    local_158 = 0x3ff0000000000000;
  }
  else {
    local_158 = 0;
  }
  cVar7 = FUN_140e491e0(&local_158);
  if (cVar7 == '\0') {
    if ((local_1ac & 0xffffff) != 0) {
      FUN_140e4b060(&local_1b8);
    }
    dVar14 = (double)FUN_140e78d00();
    puVar11 = (ulonglong *)FUN_1400426f0(&local_1a8,SUB84(dVar14 + 180.0,0),&local_138);
    bVar2 = true;
    bVar1 = false;
  }
  else {
    puVar11 = (ulonglong *)FUN_1400467d0(&local_128,&local_1b8,&local_138);
    bVar2 = false;
    bVar1 = true;
  }
  if (puVar11 != &local_178) {
    local_d8 = *puVar11;
    uStack_d0 = puVar11[1];
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_d8);
  }
  if ((bVar2) && ((1 << ((byte)(uStack_1a0 >> 0x20) & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1a8);
  }
  if ((bVar1) && ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_128);
  }
  local_a8 = 0x13;
  if ((local_16c & 0xffffff) != 0) {
    FUN_140e4b060(&local_178);
  }
  local_188 = FUN_140e78d00();
  local_17c = 0;
  iVar8 = FUN_140e851f0(&local_188,&local_108,DAT_141955260,1);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((iVar8 == -2 || -1 < iVar8) || (cVar7 = FUN_140e491e0(&local_158), cVar7 == '\0')) {
    if ((local_16c & 0xffffff) != 0) {
      FUN_140e4b060(&local_178);
    }
    uVar12 = FUN_140e78d00();
    uVar13 = FUN_1400426f0(&local_128,uVar12,&local_118);
    puVar11 = (ulonglong *)FUN_140046450(&local_1a8,&local_f8,uVar13);
    bVar3 = false;
    bVar2 = true;
    bVar1 = true;
  }
  else {
    uStack_1bc = local_15c;
    uStack_1c0 = local_160;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
      local_1c8 = local_168;
    }
    else {
      FUN_1400419b0(&local_1c8,&local_168);
    }
    puVar11 = &local_1c8;
    bVar3 = true;
    bVar2 = false;
    bVar1 = false;
  }
  if (puVar11 != param_3) {
    local_d8 = *puVar11;
    uStack_d0 = puVar11[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_d8);
  }
  if ((bVar1) && ((1 << ((byte)(uStack_1a0 >> 0x20) & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1a8);
  }
  if ((bVar2) && ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_128);
  }
  if ((bVar3) && ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_90,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

