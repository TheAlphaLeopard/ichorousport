// gml_Script_scribble_glyph_set @ 0x140472880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_scribble_glyph_set
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  double *pdVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  undefined8 **ppuVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong in_stack_fffffffffffffe30;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  double local_198;
  uint local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined8 local_70;
  undefined4 local_64;
  
  local_160 = "gml_Script_scribble_glyph_get";
  local_168 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_168;
  local_158 = 0xd;
  _eh_vector_constructor_iterator_(&local_108,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_16c = 0xffffff;
  local_178 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_1bc = 0;
  local_1c8 = 0;
  local_64 = 0;
  local_70 = 0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_158 = 0xf;
  pdVar9 = (double *)&DAT_1419df7b0;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
LAB_1404729bb:
    local_1a8 = *puVar6;
    uStack_1a0 = *(undefined4 *)(puVar6 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_1a8);
  }
  else {
    puVar6 = (undefined8 *)*param_5;
    if (puVar6 != &local_d8) goto LAB_1404729bb;
  }
  local_80 = &local_d8;
  ppuVar12 = &local_80;
  puVar6 = (undefined8 *)FUN_1401effd0(param_1,param_2,&local_1c8,1,ppuVar12);
  if (puVar6 != &local_178) {
    local_1a8 = *puVar6;
    uStack_1a0 = *(undefined4 *)(puVar6 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1a8);
  }
  local_158 = 0x11;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
  uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  FUN_140e87440(&local_178,DAT_141a06328,0x80000000,&local_a8,uVar13,in_stack_fffffffffffffe30);
  local_1a8 = local_a8;
  uStack_1a0 = uStack_a0;
  uStack_19c = uStack_9c;
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  FUN_140041b80(&local_120,&local_1a8);
  local_158 = 0x12;
  uVar13 = uVar13 & 0xffffffffffffff00;
  FUN_140e87440(&local_178,DAT_141a06148,0x80000000,&local_b8,uVar13,
                in_stack_fffffffffffffe30 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar13 >> 0x20);
  local_1a8 = local_b8;
  uStack_1a0 = uStack_b0;
  uStack_19c = uStack_ac;
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  FUN_140041b80(&local_130,&local_1a8);
  local_158 = 0x13;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  if (param_4 < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_140472b3e:
    local_1a8 = *puVar6;
    uStack_1a0 = *(undefined4 *)(puVar6 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1a8);
  }
  else {
    puVar6 = (undefined8 *)param_5[1];
    if (puVar6 != &local_108) goto LAB_140472b3e;
  }
  local_98 = &local_108;
  uVar14 = CONCAT44(uVar5,DAT_141a0a0b8);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar14,&local_98);
  uVar5 = (undefined4)((ulonglong)uVar14 >> 0x20);
  cVar3 = FUN_140e491e0(uVar7);
  if (cVar3 == '\0') {
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    if (param_4 < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_140472c35:
      local_150 = *puVar6;
      uStack_148 = *(undefined4 *)(puVar6 + 1);
      uStack_144 = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_150);
    }
    else {
      puVar6 = (undefined8 *)param_5[1];
      if (puVar6 != &local_e8) goto LAB_140472c35;
    }
    local_88 = &local_e8;
    uVar7 = CONCAT44(uVar5,DAT_1419fdc48);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_188,1,uVar7,&local_88);
    uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uStack_144 = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_148 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_150 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_150,puVar6);
    }
    puVar6 = &local_150;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    if (param_4 < 2) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)param_5[1];
    }
    uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_1a0 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_1a8 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_1a8);
    }
    puVar6 = &local_1a8;
    bVar2 = true;
    bVar1 = false;
  }
  local_1b8 = *(undefined4 *)puVar6;
  uStack_1b4 = *(undefined4 *)((longlong)puVar6 + 4);
  uStack_1b0 = *(undefined4 *)(puVar6 + 1);
  uStack_1ac = *(undefined4 *)((longlong)puVar6 + 0xc);
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  FUN_140041b80(&local_140,&local_1b8);
  if ((bVar1) && ((1 << ((byte)uStack_144 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_150);
  }
  if ((bVar2) && ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0x14;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  local_98 = &local_130;
  local_90 = &local_140;
  pdVar8 = (double *)
           FUN_140e634e0(param_1,param_2,&local_1c8,2,CONCAT44(uVar5,DAT_1419ff4f8),&local_98);
  if (pdVar8 != &local_198) {
    local_1b8 = *(undefined4 *)pdVar8;
    uStack_1b4 = *(undefined4 *)((longlong)pdVar8 + 4);
    uStack_1b0 = *(undefined4 *)(pdVar8 + 1);
    uStack_1ac = *(undefined4 *)((longlong)pdVar8 + 0xc);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1b8);
  }
  local_158 = 0x16;
  iVar4 = FUN_140e851f0(&local_198,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_158 = 0x18;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    local_1b8 = _DAT_141dd3188;
    uStack_1b4 = uRam0000000141dd318c;
    uStack_1b0 = uRam0000000141dd3190;
    uStack_1ac = DAT_141dd3194;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1b8);
    local_98 = &local_108;
    if (param_4 < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_140472e97:
      local_1b8 = *(undefined4 *)puVar6;
      uStack_1b4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_1b0 = *(undefined4 *)(puVar6 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_1b8);
    }
    else {
      puVar6 = (undefined8 *)param_5[1];
      if (puVar6 != &local_f8) goto LAB_140472e97;
    }
    local_1b8 = _DAT_141dd3178;
    uStack_1b4 = uRam0000000141dd317c;
    uStack_1b0 = uRam0000000141dd3180;
    uStack_1ac = DAT_141dd3184;
    local_90 = &local_f8;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1b8);
    local_88 = &local_e8;
    if (param_4 < 1) {
      param_5 = &DAT_1419df7b0;
LAB_140472f1b:
      local_1b8 = *(undefined4 *)param_5;
      uStack_1b4 = *(undefined4 *)((longlong)param_5 + 4);
      uStack_1b0 = *(undefined4 *)(param_5 + 1);
      uStack_1ac = *(undefined4 *)((longlong)param_5 + 0xc);
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_1b8);
    }
    else {
      param_5 = (undefined8 *)*param_5;
      if (param_5 != &local_d8) goto LAB_140472f1b;
    }
    local_80 = &local_d8;
    local_1b8 = _DAT_141dd3198;
    uStack_1b4 = uRam0000000141dd319c;
    uStack_1b0 = uRam0000000141dd31a0;
    uStack_1ac = DAT_141dd31a4;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_1b8);
    local_78 = local_c8;
    FUN_1401ef7f0(param_1,param_2,&local_1c8,5,&local_98);
    local_158 = 0x19;
    if (param_3 == &DAT_1419df7b0) goto LAB_140473085;
    local_1b8 = (undefined4)DAT_1419df7b0;
    uStack_1b4 = DAT_1419df7b0._4_4_;
    uStack_1b0 = DAT_1419df7b8;
    uStack_1ac = DAT_1419df7bc;
  }
  else {
    local_158 = 0x1c;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    if (2 < param_4) {
      pdVar9 = (double *)param_5[2];
    }
    if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
      dVar10 = *pdVar9;
    }
    else {
      dVar10 = (double)FUN_140e4b060(pdVar9);
    }
    dVar11 = local_198;
    if ((local_18c & 0xffffff) != 0) {
      dVar11 = (double)FUN_140e4b060(&local_198);
    }
    uVar5 = FUN_140e4a740(&local_120);
    puVar6 = (undefined8 *)FUN_140ea8b20(&local_1c8,uVar5,(longlong)dVar11,(longlong)dVar10);
    if (puVar6 == param_3) goto LAB_140473085;
    local_1b8 = *(undefined4 *)puVar6;
    uStack_1b4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_1b0 = *(undefined4 *)(puVar6 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar6 + 0xc);
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  FUN_140041b80(param_3,&local_1b8);
LAB_140473085:
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_168;
  return param_3;
}

