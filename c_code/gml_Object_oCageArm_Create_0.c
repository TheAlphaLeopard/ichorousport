// gml_Object_oCageArm_Create_0 @ 0x140876f10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oCageArm_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  double *pdVar8;
  ulonglong uVar9;
  double *pdVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  code *pcVar16;
  undefined4 uVar19;
  undefined1 **ppuVar17;
  undefined8 **ppuVar18;
  ulonglong in_stack_fffffffffffffe50;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  double local_158;
  uint local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_120;
  char *local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90 [2];
  uint local_80 [2];
  undefined8 *local_78;
  
  local_118 = "gml_Script_anon@704@gml_Object_oButtonSetPalette_Create_0";
  local_120 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_120;
  local_110 = 0x15;
  FUN_140041df0(local_80,param_4,5,param_5);
  pcVar16 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_f8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_19c = 0;
  local_1a8 = 0;
  local_15c = 0;
  local_168 = 0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_110 = 0x15;
  pdVar10 = (double *)&DAT_1419df7b0;
  uVar9 = (ulonglong)local_80[0];
  if ((int)local_80[0] < 5) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_78[4];
  }
  iVar5 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 == 0) {
    local_110 = 0x15;
    uStack_18c = 0xd;
    local_198 = 0;
    if ((int)local_80[0] < 5) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)local_78[4];
      if (&local_198 == puVar7) goto LAB_1408770a5;
    }
    local_188 = 0;
    uStack_180 = uStack_190;
    uStack_17c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_188);
  }
LAB_1408770a5:
  local_110 = 0x17;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0d558);
  if ((int)local_80[0] < 3) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_78[2];
  }
  iVar5 = FUN_140e4a740(puVar7);
  if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
    if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  FUN_140e87440(plVar6,DAT_141a0d828,0x80000000,&local_108,(ulonglong)pcVar16 & 0xffffffffffffff00,
                in_stack_fffffffffffffe50 & 0xffffffffffffff00);
  local_198 = local_108;
  uStack_190 = uStack_100;
  uStack_18c = uStack_fc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_198);
  local_a8 = &local_f8;
  uStack_17c = DAT_141dd7294;
  uStack_180 = DAT_141dd7290;
  if ((1 << ((byte)DAT_141dd7294 & 0x1f) & 0x46U) == 0) {
    local_188 = DAT_141dd7288;
  }
  else {
    FUN_1400419b0(&local_188,&DAT_141dd7288);
  }
  uVar19 = uStack_17c;
  local_198 = local_188;
  uStack_190 = uStack_180;
  uStack_18c = uStack_17c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_198);
  if ((1 << ((byte)uVar19 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_a0 = local_e8;
  puVar7 = (undefined8 *)
           gml_Script_anon_147_DefineBossAttributes_BOSSMODSINIT
                     (param_1,param_2,&local_178,1,&local_a8);
  if (puVar7 != &local_d8) {
    local_198 = *puVar7;
    uStack_190 = *(undefined4 *)(puVar7 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_198);
  }
  ppuVar17 = &local_a0;
  local_98 = &local_d8;
  puVar7 = (undefined8 *)FUN_140e64420(param_1,param_2,&local_168,2,ppuVar17);
  uVar19 = (undefined4)((ulonglong)ppuVar17 >> 0x20);
  if (puVar7 != &local_c8) {
    local_198 = *puVar7;
    uStack_190 = *(undefined4 *)(puVar7 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_198);
  }
  local_90[0] = &local_c8;
  puVar7 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_1a8,1,CONCAT44(uVar19,DAT_141a086f8),local_90);
  if (puVar7 != &local_148) {
    local_198 = *puVar7;
    uStack_190 = *(undefined4 *)(puVar7 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_198);
  }
  local_110 = 0x18;
  if ((int)local_80[0] < 5) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_78[4];
  }
  cVar4 = FUN_140e491e0(puVar7);
  bVar11 = cVar4 == '\0';
  if (bVar11) {
    uStack_17c = 0xf;
    local_188 = 0x1000001000000b8;
    puVar7 = &local_188;
  }
  else {
    uStack_18c = 0xf;
    local_198 = 0x1000001000000b9;
    puVar7 = &local_198;
  }
  uVar3 = uStack_17c;
  uVar19 = uStack_18c;
  local_138 = (undefined8 *)*puVar7;
  uStack_130 = (char *)puVar7[1];
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_138);
  if ((bVar11) && ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_188);
  }
  if ((!bVar11) && ((1 << ((byte)uVar19 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_198);
  }
  local_110 = 0x19;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  local_a8 = &local_148;
  local_138 = (undefined8 *)CONCAT44(uRam00000001419e9284,_DAT_1419e9280);
  uStack_130 = (char *)CONCAT44(uRam00000001419e928c,uRam00000001419e9288);
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_138);
  local_a0 = local_e8;
  local_138 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_130 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_138);
  ppuVar18 = &local_a8;
  local_98 = &local_d8;
  gml_Script_pal_swap_layer_init(param_1,param_2,&local_1a8,3,ppuVar18);
  uVar19 = (undefined4)((ulonglong)ppuVar18 >> 0x20);
  local_110 = 0x1b;
  if ((int)local_80[0] < 2) {
    pdVar8 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar8 = (double *)local_78[1];
  }
  if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
    dVar12 = *pdVar8;
  }
  else {
    dVar12 = (double)FUN_140e4b060();
  }
  if ((int)local_80[0] < 1) {
    pdVar8 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar8 = (double *)*local_78;
  }
  if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
    dVar13 = *pdVar8;
  }
  else {
    dVar13 = (double)FUN_140e4b060();
  }
  if (3 < (int)local_80[0]) {
    pdVar10 = (double *)local_78[3];
  }
  if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
    dVar14 = *pdVar10;
  }
  else {
    dVar14 = (double)FUN_140e4b060(pdVar10);
  }
  dVar15 = local_158;
  if ((local_14c & 0xffffff) != 0) {
    dVar15 = (double)FUN_140e4b060(&local_158);
  }
  FUN_140ec5d30(param_1,(longlong)dVar15,(float)dVar14,(float)dVar13,CONCAT44(uVar19,(float)dVar12))
  ;
  local_110 = 0x1d;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a0 = 0;
  uStack_130 = "gml_Script_pal_swap_reset";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_19c = 5;
  local_1a8 = 0;
  local_128 = 0x71;
  iVar5 = FUN_140ec9d80();
  if (iVar5 != -1) {
    local_128 = 0x71;
    FUN_140ec9dc0();
  }
  DAT_141dc7a50 = local_138;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,5,FUN_140041b30);
  if (0 < (int)local_80[0]) {
    puVar7 = local_78;
    do {
      puVar2 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_78);
  DAT_141dc7a50 = (undefined8 *)local_120;
  return param_3;
}

