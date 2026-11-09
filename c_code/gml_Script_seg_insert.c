// gml_Script_seg_insert @ 0x14049a790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * gml_Script_seg_insert
                   (longlong *param_1,undefined8 param_2,double *param_3,int param_4,
                   undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  uint uVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar18;
  undefined8 uVar17;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  
  local_f0 = "gml_Script_seg_get_angle";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 3;
  uVar18 = 1;
  _eh_vector_constructor_iterator_(local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_16c = 0xffffff;
  local_178 = 0;
  local_fc = 0;
  local_108 = 0;
  local_10c = 0;
  local_118 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  local_e8 = 5;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
LAB_14049a879:
    local_188 = *param_5;
    uStack_180 = *(undefined4 *)(param_5 + 1);
    uStack_17c = *(undefined4 *)((longlong)param_5 + 0xc);
    FUN_140041b80(&local_178,&local_188);
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 != &local_178) goto LAB_14049a879;
  }
  local_e8 = 6;
  uStack_17c = 0;
  local_188 = 0;
  iVar3 = FUN_140e851f0(&local_178,&local_188,DAT_141955260,1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if (iVar3 == -2 || -1 < iVar3) {
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    iVar3 = FUN_140e851f0(&local_178,uVar4,DAT_141955260,1);
    if ((iVar3 == -2) || (iVar3 < 0)) goto LAB_14049acca;
  }
  local_e8 = 6;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
  local_88 = &local_178;
  if (puVar5 != &local_b8) {
    local_188 = *puVar5;
    uStack_180 = *(undefined4 *)(puVar5 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_188);
  }
  uStack_17c = DAT_141dd3864;
  uStack_180 = DAT_141dd3860;
  local_80 = &local_b8;
  if ((1 << ((byte)DAT_141dd3864 & 0x1f) & 0x46U) == 0) {
    local_188 = DAT_141dd3858;
  }
  else {
    FUN_1400419b0(&local_188,&DAT_141dd3858);
  }
  local_15c = DAT_141dd3854;
  local_160 = DAT_141dd3850;
  if ((1 << ((byte)DAT_141dd3854 & 0x1f) & 0x46U) == 0) {
    local_168 = DAT_141dd3848;
  }
  else {
    FUN_1400419b0(&local_168,&DAT_141dd3848);
  }
  uVar2 = local_15c;
  uVar1 = local_160;
  uVar4 = local_168;
  uVar17 = CONCAT44(uVar18,DAT_1419fcb18);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_118,1,uVar17,&local_88);
  uVar18 = (undefined4)((ulonglong)uVar17 >> 0x20);
  uVar11 = 1 << ((byte)uVar2 & 0x1f) & 0x46;
  local_130 = uVar1;
  local_12c = uVar2;
  if (uVar11 == 0) {
    local_138 = uVar4;
  }
  else {
    FUN_1400419b0(&local_138,&local_168);
  }
  FUN_1400460e0(&local_138,uVar6);
  local_13c = local_12c;
  local_140 = local_130;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
    local_148 = local_138;
  }
  else {
    FUN_1400419b0(&local_148,&local_138);
  }
  FUN_1400460e0(&local_148,&local_188);
  uVar6 = CONCAT44(uVar18,DAT_1419fcb18);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar6,&local_80);
  uVar18 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_14c = local_13c;
  uStack_150 = local_140;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
    local_158 = local_148;
  }
  else {
    FUN_1400419b0(&local_158,&local_148);
  }
  FUN_1400460e0(&local_158,uVar4);
  local_d8 = (undefined4)local_158;
  uStack_d4 = local_158._4_4_;
  uStack_d0 = uStack_150;
  uStack_cc = uStack_14c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (uVar11 != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_78 = local_a8;
  local_d8 = _DAT_1419df7c0;
  uStack_d4 = uRam00000001419df7c4;
  uStack_d0 = uRam00000001419df7c8;
  uStack_cc = uRam00000001419df7cc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_70 = local_98;
  FUN_140e634e0(param_1,param_2,&local_108,2,CONCAT44(uVar18,DAT_141a010a8),&local_78);
LAB_14049acca:
  local_e8 = 7;
  pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
  pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
  pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
  pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
  local_15c = local_16c;
  local_160 = local_170;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
    local_168 = local_178;
  }
  else {
    FUN_1400419b0(&local_168,&local_178);
  }
  uStack_17c = 7;
  local_188 = CONCAT44(local_188._4_4_,1);
  FUN_1400460e0(&local_168,&local_188);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_14c = local_16c;
  uStack_150 = local_170;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
    local_158 = local_178;
  }
  else {
    FUN_1400419b0(&local_158,&local_178);
  }
  uStack_17c = 7;
  local_188 = CONCAT44(local_188._4_4_,1);
  FUN_1400460e0(&local_158,&local_188);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  iVar3 = FUN_140e4a740(&local_168);
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
  iVar3 = FUN_140e4a740(&local_158);
  if (((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 2) && (dVar14 = *pdVar9, dVar14 != 0.0)) {
    if ((iVar3 < 0) || (*(int *)((longlong)dVar14 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)((longlong)dVar14 + 0x24));
      pdVar9 = (double *)0x0;
    }
    else {
      pdVar9 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar14 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
    dVar14 = *pdVar9;
  }
  else {
    dVar14 = (double)FUN_140e4b060(pdVar9);
  }
  iVar3 = FUN_140e4a740(&local_178);
  if (((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 2) && (dVar15 = *pdVar8, dVar15 != 0.0)) {
    if ((iVar3 < 0) || (*(int *)((longlong)dVar15 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)((longlong)dVar15 + 0x24));
      pdVar8 = (double *)0x0;
    }
    else {
      pdVar8 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar15 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
    dVar15 = *pdVar8;
  }
  else {
    dVar15 = (double)FUN_140e4b060(pdVar8);
  }
  iVar3 = FUN_140e4a740(&local_178);
  if (((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 2) && (dVar16 = *pdVar7, dVar16 != 0.0)) {
    if ((iVar3 < 0) || (*(int *)((longlong)dVar16 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)((longlong)dVar16 + 0x24));
      pdVar7 = (double *)0x0;
    }
    else {
      pdVar7 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar16 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar16 = *pdVar7;
  }
  else {
    dVar16 = (double)FUN_140e4b060(pdVar7);
  }
  fVar12 = (float)FUN_140e793d0((float)dVar16,(float)dVar15,(float)dVar14,(float)dVar13);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = (double)fVar12;
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

