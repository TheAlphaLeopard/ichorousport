// gml_Object_oDeathBloodEffect_Step_0 @ 0x1408e43d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oDeathBloodEffect_Step_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined8 *puVar5;
  float fVar6;
  double dVar7;
  longlong *plVar8;
  code *pcVar9;
  ulonglong uVar10;
  ulonglong in_stack_ffffffffffffff20;
  undefined8 local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  byte local_94;
  undefined1 local_90 [12];
  byte local_84;
  undefined1 local_80 [12];
  byte local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_b0 = "gml_Object_oDashSlash_Step_0";
  local_a8 = 0;
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_a0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_54 = 0xffffff;
  local_60 = 0;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_64 = 0xffffff;
  local_70 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_a8 = 3;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
  pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
  uStack_cc = 6;
  in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffffffffff00;
  uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_1419fe0e8,0x80000000,&local_60,uVar10,in_stack_ffffffffffffff20);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  uStack_cc = *(uint *)((longlong)puVar3 + 0xc);
  uStack_d0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) == 0) {
    local_d8 = (longlong *)*puVar3;
  }
  else {
    FUN_1400419b0(&local_d8,puVar3);
  }
  FUN_140042560(&local_d8,uVar2);
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar7 = *pdVar4;
  }
  else {
    dVar7 = (double)FUN_140e4b060(pdVar4);
  }
  plVar8 = local_d8;
  if ((uStack_cc & 0xffffff) != 0) {
    plVar8 = (longlong *)FUN_140e4b060(&local_d8);
  }
  fVar6 = (float)FUN_140e78f90((float)(double)plVar8,(float)dVar7);
  FUN_140162c50(&local_60,(double)fVar6);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_60);
  local_a8 = 4;
  uStack_cc = 6;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_1419fe158,0x80000000,&local_70,uVar10 & 0xffffffffffffff00,
                in_stack_ffffffffffffff20 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  uStack_cc = *(uint *)((longlong)puVar3 + 0xc);
  uStack_d0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) == 0) {
    local_d8 = (longlong *)*puVar3;
  }
  else {
    FUN_1400419b0(&local_d8,puVar3);
  }
  FUN_140042560(&local_d8,uVar2);
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar7 = *pdVar4;
  }
  else {
    dVar7 = (double)FUN_140e4b060(pdVar4);
  }
  plVar8 = local_d8;
  if ((uStack_cc & 0xffffff) != 0) {
    plVar8 = (longlong *)FUN_140e4b060(&local_d8);
  }
  fVar6 = (float)FUN_140e79010((float)(double)plVar8,(float)dVar7);
  FUN_140162c50(&local_70,(double)fVar6);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_70);
  local_a8 = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_a8 = 7;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f290);
  if (puVar3 != &local_a0) {
    local_d8 = (longlong *)*puVar3;
    uStack_d0 = *(undefined4 *)(puVar3 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_d8);
  }
  local_50 = &local_a0;
  local_d8 = (longlong *)CONCAT44(uRam0000000141dc6d34,_DAT_141dc6d30);
  uStack_d0 = uRam0000000141dc6d38;
  uStack_cc = uRam0000000141dc6d3c;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_d8);
  local_48 = local_90;
  local_d8 = (longlong *)CONCAT44(uRam00000001419e9c64,_DAT_1419e9c60);
  uStack_d0 = uRam00000001419e9c68;
  uStack_cc = uRam00000001419e9c6c;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_d8);
  local_40 = local_80;
  FUN_140e609c0(param_1);
  puVar3 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_c8,3,&local_50);
  if (puVar3 != puVar5) {
    local_d8 = (longlong *)*puVar3;
    uStack_d0 = *(undefined4 *)(puVar3 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_d8);
  }
  FUN_140e60910(1);
  local_a8 = 10;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_d0 = DAT_1419df7b8;
  uStack_cc = DAT_1419df7bc;
  if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  FUN_140041b80(&local_a0,&local_d8);
  local_50 = &local_a0;
  local_d8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_d0 = DAT_1419df7b8;
  uStack_cc = DAT_1419df7bc;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_d8);
  local_48 = local_90;
  uVar2 = gml_Script_animcurve_lerp(param_1,param_2,&local_c8,2,&local_50);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    local_a8 = 0xc;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
    FUN_140edd0e0(param_1,param_2,0,0);
  }
  local_a8 = 0xe;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a01b58);
  FUN_140e63610(param_1,param_2,&local_c8,0,uVar2,0);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  _eh_vector_destructor_iterator_(&local_a0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return;
}

