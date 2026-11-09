// gml_Script_seg_delete @ 0x140497410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_seg_delete
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  double *pdVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  double local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  double local_1c8;
  uint local_1bc;
  double local_1b8;
  uint local_1ac;
  double local_1a8;
  undefined4 local_1a0;
  uint local_19c;
  double local_198;
  undefined4 local_190;
  uint local_18c;
  double local_188;
  undefined4 local_17c;
  double local_178;
  undefined4 local_170;
  uint local_16c;
  double local_168;
  undefined4 local_160;
  uint local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  uint uStack_11c;
  double local_118;
  undefined4 local_10c;
  double local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined1 local_c8 [16];
  double local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  
  local_f0 = "gml_Script_seg_calculate";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 6;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_17c = 0xffffff;
  local_188 = 0.0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_1ac = 0xffffff;
  local_1b8 = 0.0;
  local_1bc = 0xffffff;
  local_1c8 = 0.0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_12c = 0;
  local_138 = 0;
  local_13c = 0;
  local_148 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 8;
  pdVar10 = (double *)&DAT_1419df7b0;
  if (param_4 < 1) {
    pdVar6 = (double *)&DAT_1419df7b0;
LAB_140497532:
    local_1d8 = *pdVar6;
    uStack_1d0 = *(undefined4 *)(pdVar6 + 1);
    uStack_1cc = *(undefined4 *)((longlong)pdVar6 + 0xc);
    FUN_140041b80(&local_188,&local_1d8);
  }
  else {
    pdVar6 = (double *)*param_5;
    if (pdVar6 != &local_188) goto LAB_140497532;
  }
  if (param_4 < 2) {
    pdVar6 = (double *)&DAT_1419df7b0;
LAB_140497567:
    local_1d8 = *pdVar6;
    uStack_1d0 = *(undefined4 *)(pdVar6 + 1);
    uStack_1cc = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1d8);
  }
  else {
    pdVar6 = (double *)param_5[1];
    if (pdVar6 != &local_198) goto LAB_140497567;
  }
  if ((param_4 < 3) || (pdVar10 = (double *)param_5[2], pdVar10 != &local_1a8)) {
    local_1d8 = *pdVar10;
    uStack_1d0 = *(undefined4 *)(pdVar10 + 1);
    uStack_1cc = *(undefined4 *)((longlong)pdVar10 + 0xc);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1d8);
  }
  local_e8 = 0xc;
  uStack_1cc = 0;
  local_1d8 = 0.0;
  iVar3 = FUN_140e851f0(&local_188,&local_1d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (iVar3 == -2 || -1 < iVar3) {
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    iVar3 = FUN_140e851f0(&local_188,uVar5,DAT_141955260,1);
    if ((iVar3 == -2) || (iVar3 < 1)) goto LAB_140497a20;
  }
  local_e8 = 0xc;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
  local_88 = &local_188;
  if (pdVar10 != &local_b8) {
    local_1d8 = *pdVar10;
    uStack_1d0 = *(undefined4 *)(pdVar10 + 1);
    uStack_1cc = *(undefined4 *)((longlong)pdVar10 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_1d8);
  }
  local_80 = &local_b8;
  uStack_1cc = DAT_141dd3824;
  uStack_1d0 = DAT_141dd3820;
  if ((1 << ((byte)DAT_141dd3824 & 0x1f) & 0x46U) == 0) {
    local_1d8 = DAT_141dd3818;
  }
  else {
    FUN_1400419b0(&local_1d8,&DAT_141dd3818);
  }
  uStack_1dc = DAT_141dd3814;
  uStack_1e0 = DAT_141dd3810;
  if ((1 << ((byte)DAT_141dd3814 & 0x1f) & 0x46U) == 0) {
    local_1e8 = DAT_141dd3808;
  }
  else {
    FUN_1400419b0(&local_1e8,&DAT_141dd3808);
  }
  uVar2 = uStack_1dc;
  uVar1 = uStack_1e0;
  dVar14 = local_1e8;
  uVar16 = CONCAT44(uVar4,DAT_1419fcb18);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_148,1,uVar16,&local_88);
  uVar4 = (undefined4)((ulonglong)uVar16 >> 0x20);
  uVar9 = 1 << ((byte)uVar2 & 0x1f) & 0x46;
  local_160 = uVar1;
  local_15c = uVar2;
  if (uVar9 == 0) {
    local_168 = dVar14;
  }
  else {
    FUN_1400419b0(&local_168,&local_1e8);
  }
  FUN_1400460e0(&local_168,uVar5);
  local_16c = local_15c;
  local_170 = local_160;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
    local_178 = local_168;
  }
  else {
    FUN_1400419b0(&local_178,&local_168);
  }
  FUN_1400460e0(&local_178,&local_1d8);
  uVar16 = CONCAT44(uVar4,DAT_1419fcb18);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_158,1,uVar16,&local_80);
  uVar4 = (undefined4)((ulonglong)uVar16 >> 0x20);
  uStack_cc = local_16c;
  uStack_d0 = local_170;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
    local_d8 = local_178;
  }
  else {
    FUN_1400419b0(&local_d8,&local_178);
  }
  FUN_1400460e0(&local_d8,uVar5);
  local_128 = (undefined4)local_d8;
  uStack_124 = local_d8._4_4_;
  uStack_120 = uStack_d0;
  uStack_11c = uStack_cc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_128);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (uVar9 != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_78 = local_a8;
  local_128 = _DAT_1419df7c0;
  uStack_124 = uRam00000001419df7c4;
  uStack_120 = uRam00000001419df7c8;
  uStack_11c = uRam00000001419df7cc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_128);
  local_70 = local_98;
  FUN_140e634e0(param_1,param_2,&local_138,2,CONCAT44(uVar4,DAT_141a010a8),&local_78);
LAB_140497a20:
  local_e8 = 0xe;
  pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
  pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
  dVar14 = local_1a8;
  if ((local_19c & 0xffffff) != 0) {
    dVar14 = (double)FUN_140e4b060(&local_1a8);
  }
  dVar15 = local_198;
  if ((local_18c & 0xffffff) != 0) {
    dVar15 = (double)FUN_140e4b060(&local_198);
  }
  iVar3 = FUN_140e4a740(&local_188);
  if (((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 2) && (dVar12 = *pdVar6, dVar12 != 0.0)) {
    if ((iVar3 < 0) || (*(int *)((longlong)dVar12 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)((longlong)dVar12 + 0x24));
      pdVar6 = (double *)0x0;
    }
    else {
      pdVar6 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar12 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar12 = *pdVar6;
  }
  else {
    dVar12 = (double)FUN_140e4b060(pdVar6);
  }
  iVar3 = FUN_140e4a740(&local_188);
  if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) && (dVar13 = *pdVar10, dVar13 != 0.0))
  {
    if ((iVar3 < 0) || (*(int *)((longlong)dVar13 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)((longlong)dVar13 + 0x24));
      pdVar10 = (double *)0x0;
    }
    else {
      pdVar10 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar13 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
    dVar13 = *pdVar10;
  }
  else {
    dVar13 = (double)FUN_140e4b060(pdVar10);
  }
  fVar11 = (float)FUN_140e793d0((float)dVar13,(float)dVar12,(float)dVar15,(float)dVar14);
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1ac = 0;
  local_1b8 = (double)fVar11;
  pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a10a28);
  iVar3 = FUN_140e4a740(&local_188);
  if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) && (dVar14 = *pdVar10, dVar14 != 0.0))
  {
    if ((iVar3 < 0) || (*(int *)((longlong)dVar14 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)((longlong)dVar14 + 0x24));
      pdVar10 = (double *)0x0;
    }
    else {
      pdVar10 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar14 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (pdVar10 != &local_1c8) {
    local_128 = *(undefined4 *)pdVar10;
    uStack_124 = *(undefined4 *)((longlong)pdVar10 + 4);
    uStack_120 = *(undefined4 *)(pdVar10 + 1);
    uStack_11c = *(uint *)((longlong)pdVar10 + 0xc);
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_128);
  }
  local_e8 = 0x11;
  iVar3 = FUN_140e851f0(&local_1b8,&local_1c8,DAT_141955260,0);
  if (iVar3 != 0) {
    local_e8 = 0x12;
    dVar14 = local_1b8;
    if ((local_1ac & 0xffffff) != 0) {
      dVar14 = (double)FUN_140e4b060(&local_1b8);
    }
    dVar15 = local_1c8;
    if ((local_1bc & 0xffffff) != 0) {
      dVar15 = (double)FUN_140e4b060(&local_1c8);
    }
    fVar11 = (float)FUN_140e78f90((float)dVar15,(float)dVar14);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_fc = 0;
    local_108 = (double)fVar11;
    dVar14 = local_1b8;
    if ((local_1ac & 0xffffff) != 0) {
      dVar14 = (double)FUN_140e4b060(&local_1b8);
    }
    dVar15 = local_1c8;
    if ((local_1bc & 0xffffff) != 0) {
      dVar15 = (double)FUN_140e4b060(&local_1c8);
    }
    fVar11 = (float)FUN_140e79010((float)dVar15,(float)dVar14);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_10c = 0;
    local_118 = (double)fVar11;
    local_e8 = 0x15;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
    FUN_140e609c0(param_1);
    uStack_1dc = local_18c;
    uStack_1e0 = local_190;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
      local_1e8 = local_198;
    }
    else {
      FUN_1400419b0(&local_1e8,&local_198);
    }
    FUN_1400462a0(&local_1e8,&local_108);
    uVar4 = FUN_140e4a740(&local_188);
    puVar8 = (undefined8 *)FUN_140e48e40(puVar7,uVar4);
    FUN_140e609c0(*(undefined8 *)*puVar7);
    if (&local_1e8 != puVar8) {
      local_128 = (undefined4)local_1e8;
      uStack_124 = local_1e8._4_4_;
      uStack_120 = uStack_1e0;
      uStack_11c = uStack_1dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_128);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(2);
    local_e8 = 0x16;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
    FUN_140e609c0(param_1);
    uStack_1dc = local_19c;
    uStack_1e0 = local_1a0;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
      local_1e8 = local_1a8;
    }
    else {
      FUN_1400419b0(&local_1e8,&local_1a8);
    }
    FUN_1400462a0(&local_1e8,&local_118);
    uVar4 = FUN_140e4a740(&local_188);
    puVar8 = (undefined8 *)FUN_140e48e40(puVar7,uVar4);
    FUN_140e609c0(*(undefined8 *)*puVar7);
    if (&local_1e8 != puVar8) {
      local_128 = (undefined4)local_1e8;
      uStack_124 = local_1e8._4_4_;
      uStack_120 = uStack_1e0;
      uStack_11c = uStack_1dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_128);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(2);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

