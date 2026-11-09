// gml_Object_oFlyingPart_Create_0 @ 0x140adf760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oFlyingPart_Create_0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  double *pdVar8;
  undefined4 uVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 **ppuVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  uint local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  uint local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  byte local_84;
  undefined8 local_80;
  byte local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  
  local_100 = "gml_Object_oFly_Step_0";
  local_f8 = 0;
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_90,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_11c = 0xffffff;
  local_128 = 0.0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_10c = 0xffffff;
  local_118 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_f8 = 2;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
  if (puVar4 != &local_90) {
    local_148 = (longlong *)*puVar4;
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    FUN_140041b80(&local_90,&local_148);
  }
  local_60 = &local_90;
  ppuVar14 = &local_60;
  uVar15 = CONCAT44(uVar9,DAT_1419fe728);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_e0,1,uVar15,ppuVar14);
  if ((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 0) {
    uVar9 = (undefined4)*puVar5;
  }
  else {
    uVar9 = FUN_140e4b060(puVar5);
  }
  dVar11 = (double)FUN_1412a79b0(uVar9);
  if (dVar11 == 0.0) {
    local_f8 = 4;
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1eed0);
    uVar13 = FUN_140e79480(0);
    FUN_140162c50(uVar6,uVar13);
  }
  local_f8 = 8;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2d88);
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f2b28);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f290);
  FUN_140e609c0(param_1);
  local_e4 = *(uint *)((longlong)puVar4 + 0xc);
  local_e8 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) == 0) {
    local_f0 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_f0,puVar4);
  }
  FUN_1400460e0(&local_f0,uVar6);
  local_c4 = local_e4;
  local_c8 = local_e8;
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) == 0) {
    local_d0 = local_f0;
  }
  else {
    FUN_1400419b0(&local_d0,&local_f0);
  }
  uStack_13c = 0;
  local_148 = (longlong *)0x3fa999999999999a;
  FUN_140042560(&local_d0,&local_148);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((local_c4 & 0xffffff) == 0) {
    uVar9 = (undefined4)local_d0;
  }
  else {
    uVar9 = FUN_140e4b060(&local_d0);
  }
  dVar11 = (double)thunk_FUN_1412ac390(uVar9);
  uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_130 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_138,puVar5);
  }
  FUN_140162c50(&local_138,dVar11 * 0.075);
  if (&local_138 != puVar7) {
    local_148 = (longlong *)local_138;
    uStack_140 = uStack_130;
    uStack_13c = uStack_12c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_148);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  FUN_140e60910(1);
  local_f8 = 9;
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  local_e0 = 0;
  local_d8 = 0;
  local_d4 = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
  uStack_13c = 6;
  uVar16 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_141a0a778,0x80000000,&local_128,uVar15 & 0xffffffffffffff00,uVar16);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = (longlong *)local_128;
  uStack_140 = uStack_120;
  uStack_13c = uStack_11c;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  FUN_140041b80(&local_90,&local_148);
  local_60 = &local_90;
  if (puVar5 != &local_80) {
    local_148 = (longlong *)*puVar5;
    uStack_140 = *(undefined4 *)(puVar5 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_148);
  }
  local_58 = &local_80;
  local_148 = (longlong *)CONCAT44(uRam00000001419eb674,_DAT_1419eb670);
  uStack_140 = uRam00000001419eb678;
  uStack_13c = uRam00000001419eb67c;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_148);
  local_50 = local_70;
  ppuVar14 = &local_60;
  puVar5 = (undefined8 *)gml_Script_AngleRotateTowardsLerp(param_1,param_2,&local_e0,3,ppuVar14);
  if (puVar5 != &local_c0) {
    local_148 = (longlong *)*puVar5;
    uStack_140 = *(undefined4 *)(puVar5 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    FUN_140041b80(&local_c0,&local_148);
  }
  FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_c0);
  local_f8 = 0xb;
  pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
  uStack_13c = 6;
  uVar16 = uVar16 & 0xffffffffffffff00;
  uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_1419fe0e8,0x80000000,&local_a0,uVar15,uVar16);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  uStack_13c = 6;
  uVar16 = uVar16 & 0xffffffffffffff00;
  uVar15 = uVar15 & 0xffffffffffffff00;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_141a0a778,0x80000000,&local_128,uVar15,uVar16);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  dVar11 = local_128;
  if ((uStack_11c & 0xffffff) != 0) {
    dVar11 = (double)FUN_140e4b060(&local_128);
  }
  if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
    dVar12 = *pdVar8;
  }
  else {
    dVar12 = (double)FUN_140e4b060(pdVar8);
  }
  fVar10 = (float)FUN_140e78f90((float)dVar12,(float)dVar11);
  FUN_140162c50(&local_a0,(double)fVar10);
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_a0);
  local_f8 = 0xc;
  uStack_13c = 6;
  uVar16 = uVar16 & 0xffffffffffffff00;
  uVar15 = uVar15 & 0xffffffffffffff00;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_1419fe158,0x80000000,&local_b0,uVar15,uVar16);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  uStack_13c = 6;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_141a0a778,0x80000000,&local_128,uVar15 & 0xffffffffffffff00,
                uVar16 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  dVar11 = local_128;
  if ((uStack_11c & 0xffffff) != 0) {
    dVar11 = (double)FUN_140e4b060(&local_128);
  }
  if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
    dVar12 = *pdVar8;
  }
  else {
    dVar12 = (double)FUN_140e4b060(pdVar8);
  }
  fVar10 = (float)FUN_140e79010((float)dVar12,(float)dVar11);
  FUN_140162c50(&local_b0,(double)fVar10);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_b0);
  local_f8 = 0xe;
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  FUN_140e609c0(param_1);
  FUN_1400460e0(uVar6,uVar3);
  FUN_140e60910(1);
  local_f8 = 0x10;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f2d78);
  iVar1 = FUN_140e851f0(puVar4,uVar3,DAT_141955260,1);
  if (iVar1 == -2 || -1 < iVar1) {
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f2d78);
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5838);
    uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_130 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
      local_138 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_138,puVar5);
    }
    FUN_1400462a0(&local_138,uVar3);
    uVar2 = FUN_140e851f0(puVar4,&local_138,DAT_141955260,1);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (0x7fffffff < uVar2) {
      local_f8 = 0x13;
      uStack_13c = 0xf;
      local_148 = (longlong *)0x100000100000138;
      local_138 = 0x100000100000138;
      uStack_130 = uStack_140;
      uStack_12c = 0xf;
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_138);
      goto LAB_140ae0103;
    }
  }
  local_f8 = 0x11;
  uStack_13c = 0xf;
  local_148 = (longlong *)0x10000010000013a;
  local_138 = 0x10000010000013a;
  uStack_130 = uStack_140;
  uStack_12c = 0xf;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_138);
LAB_140ae0103:
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_118);
  local_f8 = 0x15;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5838);
  uVar2 = FUN_140e851f0(puVar4,uVar3,DAT_141955260,1);
  if (uVar2 < 0x80000000) {
    local_f8 = 0x17;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
    FUN_140edd0e0(param_1,param_2,0,0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(&local_90,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return;
}

