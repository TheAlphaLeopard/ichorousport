// gml_Script_seg_calculate @ 0x140496a70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_seg_calculate
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  double *pdVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  double *pdVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  double local_198;
  uint local_18c;
  double local_188;
  uint local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  double local_158;
  undefined4 local_14c;
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
  double local_108;
  undefined4 local_fc;
  double local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [16];
  double local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  local_d0 = "gml_Script_seg_apply_force";
  local_d8 = DAT_141dc7a50;
  local_c8 = 6;
  uVar4 = 1;
  DAT_141dc7a50 = &local_d8;
  _eh_vector_constructor_iterator_(local_a8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_11c = 0;
  local_128 = 0;
  local_12c = 0;
  local_138 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 8;
  pdVar10 = (double *)&DAT_1419df7b0;
  if (param_4 < 1) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_140496b7b:
    local_1a8 = *pdVar5;
    uStack_1a0 = *(undefined4 *)(pdVar5 + 1);
    uStack_19c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    FUN_140041b80(&local_158,&local_1a8);
  }
  else {
    pdVar5 = (double *)*param_5;
    if (pdVar5 != &local_158) goto LAB_140496b7b;
  }
  if (param_4 < 2) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_140496bb2:
    local_1a8 = *pdVar5;
    uStack_1a0 = *(undefined4 *)(pdVar5 + 1);
    uStack_19c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1a8);
  }
  else {
    pdVar5 = (double *)param_5[1];
    if (pdVar5 != &local_188) goto LAB_140496bb2;
  }
  if ((param_4 < 3) || (pdVar10 = (double *)param_5[2], pdVar10 != &local_198)) {
    local_1a8 = *pdVar10;
    uStack_1a0 = *(undefined4 *)(pdVar10 + 1);
    uStack_19c = *(undefined4 *)((longlong)pdVar10 + 0xc);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1a8);
  }
  local_c8 = 0xc;
  uStack_19c = 0;
  local_1a8 = 0.0;
  iVar3 = FUN_140e851f0(&local_158,&local_1a8,DAT_141955260,1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if (iVar3 == -2 || -1 < iVar3) {
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    iVar3 = FUN_140e851f0(&local_158,uVar6,DAT_141955260,1);
    if ((iVar3 == -2) || (iVar3 < 1)) goto LAB_140497055;
  }
  local_c8 = 0xc;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
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
  pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
  local_68 = &local_158;
  if (pdVar10 != &local_98) {
    local_1a8 = *pdVar10;
    uStack_1a0 = *(undefined4 *)(pdVar10 + 1);
    uStack_19c = *(undefined4 *)((longlong)pdVar10 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_1a8);
  }
  local_60 = &local_98;
  uStack_19c = DAT_141dd37f4;
  uStack_1a0 = DAT_141dd37f0;
  if ((1 << ((byte)DAT_141dd37f4 & 0x1f) & 0x46U) == 0) {
    local_1a8 = DAT_141dd37e8;
  }
  else {
    FUN_1400419b0(&local_1a8,&DAT_141dd37e8);
  }
  local_10c = DAT_141dd3804;
  local_110 = DAT_141dd3800;
  if ((1 << ((byte)DAT_141dd3804 & 0x1f) & 0x46U) == 0) {
    local_118 = DAT_141dd37f8;
  }
  else {
    FUN_1400419b0(&local_118,&DAT_141dd37f8);
  }
  uVar2 = local_10c;
  uVar1 = local_110;
  uVar6 = local_118;
  uVar14 = CONCAT44(uVar4,DAT_1419fcb18);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_138,1,uVar14,&local_68);
  uVar4 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uVar9 = 1 << ((byte)uVar2 & 0x1f) & 0x46;
  local_160 = uVar1;
  local_15c = uVar2;
  if (uVar9 == 0) {
    local_168 = uVar6;
  }
  else {
    FUN_1400419b0(&local_168,&local_118);
  }
  FUN_1400460e0(&local_168,uVar7);
  local_16c = local_15c;
  local_170 = local_160;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
    local_178 = local_168;
  }
  else {
    FUN_1400419b0(&local_178,&local_168);
  }
  FUN_1400460e0(&local_178,&local_1a8);
  uVar7 = CONCAT44(uVar4,DAT_1419fcb18);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_148,1,uVar7,&local_60);
  uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_dc = local_16c;
  uStack_e0 = local_170;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
    local_e8 = local_178;
  }
  else {
    FUN_1400419b0(&local_e8,&local_178);
  }
  FUN_1400460e0(&local_e8,uVar6);
  local_b8 = (undefined4)local_e8;
  uStack_b4 = local_e8._4_4_;
  uStack_b0 = uStack_e0;
  uStack_ac = uStack_dc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (uVar9 != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_58 = local_88;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_50 = local_78;
  FUN_140e634e0(param_1,param_2,&local_128,2,CONCAT44(uVar4,DAT_141a010a8),&local_58);
LAB_140497055:
  local_c8 = 0xe;
  dVar12 = local_198;
  if ((local_18c & 0xffffff) != 0) {
    dVar12 = (double)FUN_140e4b060(&local_198);
  }
  dVar13 = local_188;
  if ((local_17c & 0xffffff) != 0) {
    dVar13 = (double)FUN_140e4b060(&local_188);
  }
  fVar11 = (float)FUN_140e78f90((float)dVar13,(float)dVar12);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = (double)fVar11;
  dVar12 = local_198;
  if ((local_18c & 0xffffff) != 0) {
    dVar12 = (double)FUN_140e4b060(&local_198);
  }
  dVar13 = local_188;
  if ((local_17c & 0xffffff) != 0) {
    dVar13 = (double)FUN_140e4b060(&local_188);
  }
  fVar11 = (float)FUN_140e79010((float)dVar13,(float)dVar12);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = (double)fVar11;
  local_c8 = 0x11;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
  FUN_140e609c0(param_1);
  uVar4 = FUN_140e4a740(&local_158);
  uVar6 = FUN_140e48e40(puVar8,uVar4);
  FUN_140e609c0(*(undefined8 *)*puVar8);
  FUN_1400460e0(uVar6,&local_f8);
  FUN_140e60910(2);
  local_c8 = 0x12;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
  FUN_140e609c0(param_1);
  uVar4 = FUN_140e4a740(&local_158);
  uVar6 = FUN_140e48e40(puVar8,uVar4);
  FUN_140e609c0(*(undefined8 *)*puVar8);
  FUN_1400460e0(uVar6,&local_108);
  FUN_140e60910(2);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

