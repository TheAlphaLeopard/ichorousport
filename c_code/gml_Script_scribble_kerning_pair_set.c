// gml_Script_scribble_kerning_pair_set @ 0x140475f20

longlong *
gml_Script_scribble_kerning_pair_set
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong **pplVar10;
  undefined4 uVar12;
  undefined8 uVar11;
  longlong local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  longlong local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_148;
  undefined4 local_140;
  uint local_13c;
  longlong local_138;
  undefined4 local_12c;
  longlong local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  longlong local_f8;
  byte local_ec;
  ulonglong local_e8;
  undefined4 local_dc;
  longlong local_d8;
  byte local_cc;
  longlong local_c8;
  byte local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  longlong *local_a0;
  ulonglong *local_98;
  longlong *local_90;
  longlong *local_88 [2];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  
  local_b0 = "gml_Script_scribble_kerning_pair_get";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 9;
  _eh_vector_constructor_iterator_(&local_f8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_12c = 0xffffff;
  local_138 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_17c = 0;
  local_188 = 0;
  local_5c = 0;
  local_68 = 0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0xb;
  plVar8 = &DAT_1419df7b0;
  if (param_4 < 1) {
    plVar5 = &DAT_1419df7b0;
LAB_14047604d:
    local_198 = *plVar5;
    uStack_190 = (undefined4)plVar5[1];
    uStack_18c = *(uint *)((longlong)plVar5 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_198);
  }
  else {
    plVar5 = (longlong *)*param_5;
    if (plVar5 != &local_c8) goto LAB_14047604d;
  }
  pplVar10 = local_88;
  local_88[0] = &local_c8;
  plVar5 = (longlong *)FUN_1401effd0(param_1,param_2,&local_188,1,pplVar10);
  uVar12 = (undefined4)((ulonglong)pplVar10 >> 0x20);
  if (plVar5 != &local_138) {
    local_198 = *plVar5;
    uStack_190 = (undefined4)plVar5[1];
    uStack_18c = *(uint *)((longlong)plVar5 + 0xc);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_198);
  }
  local_a8 = 0xd;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  if (param_4 < 2) {
    plVar5 = &DAT_1419df7b0;
LAB_140476121:
    local_198 = *plVar5;
    uStack_190 = (undefined4)plVar5[1];
    uStack_18c = *(uint *)((longlong)plVar5 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_198);
  }
  else {
    plVar5 = (longlong *)param_5[1];
    if (plVar5 != &local_f8) goto LAB_140476121;
  }
  local_a0 = &local_f8;
  uVar11 = CONCAT44(uVar12,DAT_141a0a0b8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_188,1,uVar11,&local_a0);
  uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 == '\0') {
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    if (param_4 < 2) {
      plVar5 = &DAT_1419df7b0;
LAB_14047621b:
      local_178 = *plVar5;
      uStack_170 = (undefined4)plVar5[1];
      uStack_16c = *(undefined4 *)((longlong)plVar5 + 0xc);
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_178);
    }
    else {
      plVar5 = (longlong *)param_5[1];
      if (plVar5 != &local_d8) goto LAB_14047621b;
    }
    local_90 = &local_d8;
    uVar6 = CONCAT44(uVar12,DAT_1419fdc48);
    plVar5 = (longlong *)FUN_140e634e0(param_1,param_2,&local_168,1,uVar6,&local_90);
    uVar12 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uStack_16c = *(undefined4 *)((longlong)plVar5 + 0xc);
    uStack_170 = (int)plVar5[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_178 = *plVar5;
    }
    else {
      FUN_1400419b0(&local_178,plVar5);
    }
    plVar5 = &local_178;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    if (param_4 < 2) {
      plVar5 = &DAT_1419df7b0;
    }
    else {
      plVar5 = (longlong *)param_5[1];
    }
    uStack_18c = *(uint *)((longlong)plVar5 + 0xc);
    uStack_190 = (int)plVar5[1];
    if ((1 << ((byte)*(uint *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_198 = *plVar5;
    }
    else {
      FUN_1400419b0(&local_198);
    }
    plVar5 = &local_198;
    bVar2 = true;
    bVar1 = false;
  }
  local_158 = (undefined4)*plVar5;
  uStack_154 = *(undefined4 *)((longlong)plVar5 + 4);
  uStack_150 = (undefined4)plVar5[1];
  uStack_14c = *(undefined4 *)((longlong)plVar5 + 0xc);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_158);
  if ((bVar1) && ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_178);
  }
  if ((bVar2) && ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_198);
  }
  local_a8 = 0xe;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  if (param_4 < 3) {
    plVar5 = &DAT_1419df7b0;
LAB_140476385:
    local_158 = (undefined4)*plVar5;
    uStack_154 = *(undefined4 *)((longlong)plVar5 + 4);
    uStack_150 = (undefined4)plVar5[1];
    uStack_14c = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_158);
  }
  else {
    plVar5 = (longlong *)param_5[2];
    if (plVar5 != &local_f8) goto LAB_140476385;
  }
  local_a0 = &local_f8;
  pplVar10 = &local_a0;
  uVar7 = CONCAT44(uVar12,DAT_141a0a0b8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_188,1,uVar7,pplVar10);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 == '\0') {
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    uVar12 = (undefined4)(uVar7 >> 0x20);
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    if ((param_4 < 3) || (plVar8 = (longlong *)param_5[2], plVar8 != &local_d8)) {
      local_158 = (undefined4)*plVar8;
      uStack_154 = *(undefined4 *)((longlong)plVar8 + 4);
      uStack_150 = (undefined4)plVar8[1];
      uStack_14c = *(undefined4 *)((longlong)plVar8 + 0xc);
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_158);
    }
    local_90 = &local_d8;
    pplVar10 = &local_90;
    uVar7 = CONCAT44(uVar12,DAT_1419fdc48);
    plVar8 = (longlong *)FUN_140e634e0(param_1,param_2,&local_168,1,uVar7,pplVar10);
    uStack_18c = *(uint *)((longlong)plVar8 + 0xc);
    uStack_190 = (int)plVar8[1];
    if ((1 << ((byte)*(uint *)((longlong)plVar8 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_198 = *plVar8;
    }
    else {
      FUN_1400419b0(&local_198,plVar8);
    }
    plVar8 = &local_198;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    if (2 < param_4) {
      plVar8 = (longlong *)param_5[2];
    }
    uStack_16c = *(undefined4 *)((longlong)plVar8 + 0xc);
    uStack_170 = (int)plVar8[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar8 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_178 = *plVar8;
    }
    else {
      FUN_1400419b0(&local_178,plVar8);
    }
    plVar8 = &local_178;
    bVar2 = true;
    bVar1 = false;
  }
  local_158 = (undefined4)*plVar8;
  uStack_154 = *(undefined4 *)((longlong)plVar8 + 4);
  uStack_150 = (undefined4)plVar8[1];
  uStack_14c = *(undefined4 *)((longlong)plVar8 + 0xc);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_158);
  if ((bVar1) && ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_198);
  }
  if ((bVar2) && ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_178);
  }
  local_a8 = 0x10;
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(&local_138,DAT_141a063f8,0x80000000,&local_78,uVar7,
                (ulonglong)pplVar10 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar7 >> 0x20);
  local_158 = (undefined4)local_78;
  uStack_154 = local_78._4_4_;
  uStack_150 = uStack_70;
  uStack_14c = uStack_6c;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_158);
  local_a8 = 0x12;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  local_a0 = &local_128;
  uVar7 = FUN_140e4a8b0(&local_118);
  uVar4 = FUN_140e4a8b0(&local_108);
  local_e8 = (ulonglong)uVar4 | (uVar7 & 0xffff) << 0x10;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 10;
  local_98 = &local_e8;
  plVar8 = (longlong *)
           FUN_140e634e0(param_1,param_2,&local_188,2,CONCAT44(uVar12,DAT_1419ff4f8),&local_a0);
  uVar9 = 0xffffff;
  if (plVar8 != &local_148) {
    local_158 = (undefined4)*plVar8;
    uStack_154 = *(undefined4 *)((longlong)plVar8 + 4);
    uStack_150 = (undefined4)plVar8[1];
    uStack_14c = *(undefined4 *)((longlong)plVar8 + 0xc);
    FUN_140041b80(&local_148,&local_158);
    uVar9 = local_13c;
  }
  if ((uVar9 & 0xffffff) == 3) {
    if (local_148 == 0) goto LAB_140476722;
  }
  else if ((uVar9 & 0xffffff) == 5) {
LAB_140476722:
    uStack_16c = 0;
    local_178 = 0;
    plVar8 = &local_178;
    bVar2 = false;
    bVar1 = true;
    goto LAB_140476749;
  }
  uStack_18c = uVar9;
  uStack_190 = local_140;
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) == 0) {
    local_198 = local_148;
  }
  else {
    FUN_1400419b0(&local_198,&local_148);
  }
  plVar8 = &local_198;
  bVar2 = true;
  bVar1 = false;
LAB_140476749:
  uVar12 = uStack_16c;
  if (plVar8 != param_3) {
    local_158 = (undefined4)*plVar8;
    uStack_154 = *(undefined4 *)((longlong)plVar8 + 4);
    uStack_150 = (undefined4)plVar8[1];
    uStack_14c = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_158);
  }
  if ((bVar2) && ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_198);
  }
  if ((bVar1) && ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
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
  _eh_vector_destructor_iterator_(&local_f8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

