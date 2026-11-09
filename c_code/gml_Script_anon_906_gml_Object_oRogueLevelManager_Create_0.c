// gml_Script_anon_906_gml_Object_oRogueLevelManager_Create_0 @ 0x140cb6850

undefined8 *
gml_Script_anon_906_gml_Object_oRogueLevelManager_Create_0
          (longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  double *pdVar5;
  undefined8 *puVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined8 *local_res10;
  longlong *plVar10;
  undefined4 uVar13;
  undefined8 uVar11;
  uint7 uVar12;
  undefined8 **ppuVar14;
  uint7 uVar15;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  double local_f0;
  uint local_e4;
  double local_e0;
  uint local_d4;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 local_78 [64];
  
  local_100 = "gml_Script_anon@1167@anon@906@gml_Object_oRogueLevelManager_Create_0";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x41;
  _eh_vector_constructor_iterator_(local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0.0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0.0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x43;
  uVar4 = (**(code **)(*param_2 + 8))(param_2,DAT_1419f5eb8);
  pdVar5 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
  FUN_140e87170(uVar4,DAT_1419fe0e8,0x80000000,&local_98,param_1,param_2);
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar8 = *pdVar5;
  }
  else {
    dVar8 = (double)FUN_140e4b060(pdVar5);
  }
  fVar7 = (float)FUN_140e78f90(0x3f800000,(float)dVar8);
  uStack_14c = local_8c;
  uStack_150 = local_90;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
    local_158 = (longlong *)local_98;
  }
  else {
    FUN_1400419b0(&local_158,&local_98);
  }
  FUN_140162c50(&local_158,(double)fVar7);
  local_c8 = (undefined4)local_158;
  uStack_c4 = local_158._4_4_;
  uStack_c0 = uStack_150;
  uStack_bc = uStack_14c;
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  FUN_140041b80(&local_e0,&local_c8);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_f8 = 0x44;
  uVar4 = (**(code **)(*param_2 + 8))(param_2,DAT_1419f5eb8);
  pdVar5 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
  plVar10 = param_1;
  FUN_140e87170(uVar4,DAT_1419fe158,0x80000000,&local_a8,param_1,param_2);
  uVar13 = (undefined4)((ulonglong)plVar10 >> 0x20);
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar8 = *pdVar5;
  }
  else {
    dVar8 = (double)FUN_140e4b060(pdVar5);
  }
  fVar7 = (float)FUN_140e79010(0x3f800000,(float)dVar8);
  uStack_14c = local_9c;
  uStack_150 = local_a0;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
    local_158 = (longlong *)local_a8;
  }
  else {
    FUN_1400419b0(&local_158,&local_a8);
  }
  FUN_140162c50(&local_158,(double)fVar7);
  local_c8 = (undefined4)local_158;
  uStack_c4 = local_158._4_4_;
  uStack_c0 = uStack_150;
  uStack_bc = uStack_14c;
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  FUN_140041b80(&local_f0,&local_c8);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_f8 = 0x45;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar4 = (**(code **)(*param_2 + 8))(param_2,DAT_141a57b10);
  dVar8 = local_f0;
  if ((local_e4 & 0xffffff) != 0) {
    dVar8 = (double)FUN_140e4b060(&local_f0);
  }
  dVar9 = local_e0;
  if ((local_d4 & 0xffffff) != 0) {
    dVar9 = (double)FUN_140e4b060(&local_e0);
  }
  uVar2 = FUN_140e4a740(uVar4);
  puVar6 = (undefined8 *)FUN_140ea8b20(&local_148,uVar2,(longlong)dVar9,(longlong)dVar8);
  if (puVar6 != &local_b8) {
    local_c8 = *(undefined4 *)puVar6;
    uStack_c4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_c0 = *(undefined4 *)(puVar6 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_c8);
  }
  local_f8 = 0x47;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  local_res10 = &local_b8;
  ppuVar14 = &local_res10;
  uVar11 = CONCAT44(uVar13,DAT_1419fcb88);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_148,1,uVar11,ppuVar14);
  cVar1 = FUN_140e491e0(uVar4);
  uStack_14c = 6;
  uVar15 = (uint7)((ulonglong)ppuVar14 >> 8);
  uVar12 = (uint7)((ulonglong)uVar11 >> 8);
  local_158 = param_1;
  if (cVar1 == '\0') {
    local_f8 = 0x54;
    FUN_140e87440(&local_158,DAT_141a0a728,0x80000000,&local_88,(ulonglong)uVar12 << 8,
                  (ulonglong)uVar15 << 8);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    uStack_14c = 0xf;
    local_158 = (longlong *)0x10000010000010c;
    iVar3 = FUN_140e851f0(&local_88,&local_158,DAT_141955260,0);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if (iVar3 == 0) goto LAB_140cb6ff5;
    local_f8 = 0x56;
    uStack_14c = 0xf;
    local_158 = (longlong *)0x10000010000010c;
    local_c8 = 0x10c;
    uStack_c4 = 0x1000001;
    uStack_c0 = uStack_150;
    uStack_bc = 0xf;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_c8);
    FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_118);
    local_f8 = 0x57;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_11c = 0;
    local_128 = 0x3ff0000000000000;
    FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_128);
    local_f8 = 0x58;
  }
  else {
    local_f8 = 0x49;
    FUN_140e87440(&local_158,DAT_141a0a728,0x80000000,&local_88,(ulonglong)uVar12 << 8,
                  (ulonglong)uVar15 << 8);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    uStack_14c = 0xf;
    local_158 = (longlong *)0x10000010000010d;
    iVar3 = FUN_140e851f0(&local_88,&local_158,DAT_141955260,0);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if (iVar3 == 0) goto LAB_140cb6ff5;
    local_f8 = 0x4b;
    uStack_14c = 0xf;
    local_158 = (longlong *)0x10000010000010d;
    local_c8 = 0x10d;
    uStack_c4 = 0x1000001;
    uStack_c0 = uStack_150;
    uStack_bc = 0xf;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_c8);
    FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_118);
    local_f8 = 0x4c;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_11c = 0;
    local_128 = 0x3ff0000000000000;
    FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_128);
    local_f8 = 0x4d;
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_12c = 0;
  local_138 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_138);
LAB_140cb6ff5:
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

