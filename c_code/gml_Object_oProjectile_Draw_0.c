// gml_Object_oProjectile_Draw_0 @ 0x140ca4280

void gml_Object_oProjectile_Draw_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  double *pdVar5;
  ulonglong uVar6;
  float fVar7;
  double dVar8;
  longlong *plVar9;
  code *pcVar10;
  undefined4 uVar11;
  ulonglong in_stack_fffffffffffffed0;
  longlong *local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_100 = "gml_Object_oProjectile_Step_0";
  local_f8 = 0;
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_c4 = 0xffffff;
  local_d0 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_d4 = 0xffffff;
  local_e0 = 0;
  uStack_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  uStack_ac = 0xffffff;
  local_b8 = (longlong *)0x0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_f8 = 3;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
  pdVar5 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
  uStack_11c = 6;
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffffffffffff00;
  uVar6 = (ulonglong)pcVar10 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_d0,uVar6,in_stack_fffffffffffffed0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uStack_11c = *(uint *)((longlong)puVar4 + 0xc);
  uStack_120 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_128 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_128,puVar4);
  }
  FUN_140042560(&local_128,uVar3);
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar8 = *pdVar5;
  }
  else {
    dVar8 = (double)FUN_140e4b060(pdVar5);
  }
  plVar9 = local_128;
  if ((uStack_11c & 0xffffff) != 0) {
    plVar9 = (longlong *)FUN_140e4b060(&local_128);
  }
  fVar7 = (float)FUN_140e78f90((float)(double)plVar9,(float)dVar8);
  FUN_140162c50(&local_d0,(double)fVar7);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_d0);
  local_f8 = 4;
  uStack_11c = 6;
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_e0,uVar6,in_stack_fffffffffffffed0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uStack_11c = *(uint *)((longlong)puVar4 + 0xc);
  uStack_120 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_128 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_128,puVar4);
  }
  FUN_140042560(&local_128,uVar3);
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar8 = *pdVar5;
  }
  else {
    dVar8 = (double)FUN_140e4b060(pdVar5);
  }
  plVar9 = local_128;
  if ((uStack_11c & 0xffffff) != 0) {
    plVar9 = (longlong *)FUN_140e4b060(&local_128);
  }
  fVar7 = (float)FUN_140e79010((float)(double)plVar9,(float)dVar8);
  FUN_140162c50(&local_e0,(double)fVar7);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_e0);
  local_f8 = 6;
  uStack_11c = 0;
  local_128 = (longlong *)0x0;
  iVar2 = FUN_140e851f0(puVar4,&local_128,DAT_141955260,0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (iVar2 != 0) {
    local_f8 = 8;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a01b58);
    in_stack_fffffffffffffed0 = 0;
    FUN_140e63610(param_1,param_2,&local_118,0,uVar6,0);
  }
  local_f8 = 0xb;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uStack_11c = 6;
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_a8,uVar6,in_stack_fffffffffffffed0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uStack_11c = 6;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_b8,uVar6,
                in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar6 >> 0x20);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = local_a8;
  uStack_120 = uStack_a0;
  uStack_11c = uStack_9c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_128);
  local_68 = local_98;
  local_128 = local_b8;
  uStack_120 = uStack_b0;
  uStack_11c = uStack_ac;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_128);
  local_60 = local_88;
  uStack_11c = 0xf;
  local_128 = (longlong *)0x100000000000149;
  local_48 = 0x149;
  uStack_44 = 0x1000000;
  uStack_40 = uStack_120;
  uStack_3c = 0xf;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_48);
  local_58 = local_78;
  uVar3 = FUN_140e634e0(param_1,param_2,&local_118,3,CONCAT44(uVar11,DAT_141a12628),&local_68);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_f8 = 0xd;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0;
    local_f8 = 0xe;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0;
    local_f8 = 0x10;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f290);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0;
    local_f8 = 0x11;
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    local_e4 = 0;
    local_f0 = 0;
    FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_f0);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return;
}

