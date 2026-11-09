// gml_Script_anon_238_gml_Object_oFilthyGlare_Create_0 @ 0x140ad0fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_238_gml_Object_oFilthyGlare_Create_0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined4 uVar7;
  double dVar8;
  longlong *plVar9;
  code *pcVar10;
  ulonglong uVar11;
  ulonglong in_stack_ffffffffffffff00;
  undefined8 local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  byte local_a4;
  undefined1 local_a0 [12];
  byte local_94;
  undefined1 local_90 [12];
  byte local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_d0 = "gml_Object_oFaultLine_Step_0";
  local_c8 = 0;
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_b0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_64 = 0xffffff;
  local_70 = 0;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_74 = 0xffffff;
  local_80 = 0;
  local_b4 = 0xffffff;
  local_c0 = (longlong *)0x0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_c8 = 3;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
  pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
  uStack_ec = 6;
  in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffffffffffff00;
  uVar11 = (ulonglong)pcVar10 & 0xffffffffffffff00;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_1419fe0e8,0x80000000,&local_70,uVar11,in_stack_ffffffffffffff00);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  uStack_ec = *(uint *)((longlong)puVar3 + 0xc);
  uStack_f0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
    local_f8 = (longlong *)*puVar3;
  }
  else {
    FUN_1400419b0(&local_f8,puVar3);
  }
  FUN_140042560(&local_f8,uVar2);
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar8 = *pdVar4;
  }
  else {
    dVar8 = (double)FUN_140e4b060(pdVar4);
  }
  plVar9 = local_f8;
  if ((uStack_ec & 0xffffff) != 0) {
    plVar9 = (longlong *)FUN_140e4b060(&local_f8);
  }
  fVar6 = (float)FUN_140e78f90((float)(double)plVar9,(float)dVar8);
  FUN_140162c50(&local_70,(double)fVar6);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_70);
  local_c8 = 4;
  uStack_ec = 6;
  in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_1419fe158,0x80000000,&local_80,uVar11,in_stack_ffffffffffffff00);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  uStack_ec = *(uint *)((longlong)puVar3 + 0xc);
  uStack_f0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
    local_f8 = (longlong *)*puVar3;
  }
  else {
    FUN_1400419b0(&local_f8,puVar3);
  }
  FUN_140042560(&local_f8,uVar2);
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar8 = *pdVar4;
  }
  else {
    dVar8 = (double)FUN_140e4b060(pdVar4);
  }
  plVar9 = local_f8;
  if ((uStack_ec & 0xffffff) != 0) {
    plVar9 = (longlong *)FUN_140e4b060(&local_f8);
  }
  fVar6 = (float)FUN_140e79010((float)(double)plVar9,(float)dVar8);
  FUN_140162c50(&local_80,(double)fVar6);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_80);
  local_c8 = 7;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a58020);
  uStack_ec = 6;
  in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_1419fe0e8,0x80000000,&local_c0,uVar11,in_stack_ffffffffffffff00);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  uStack_ec = 6;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_1419fde18,0x80000000,&local_60,uVar11 & 0xffffffffffffff00,
                in_stack_ffffffffffffff00 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  uStack_ec = local_b4;
  uStack_f0 = local_b8;
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) == 0) {
    local_f8 = local_c0;
  }
  else {
    FUN_1400419b0(&local_f8,&local_c0);
  }
  FUN_1400462a0(&local_f8,&local_60);
  iVar1 = FUN_140e851f0(&local_f8,uVar2,DAT_141955260,1);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (0 < iVar1) {
    local_c8 = 9;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
    if (puVar3 != &local_b0) {
      local_f8 = (longlong *)*puVar3;
      uStack_f0 = *(undefined4 *)(puVar3 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      FUN_140041b80(&local_b0,&local_f8);
    }
    local_50 = &local_b0;
    local_f8 = (longlong *)CONCAT44(uRam0000000141dc7044,_DAT_141dc7040);
    uStack_f0 = uRam0000000141dc7048;
    uStack_ec = uRam0000000141dc704c;
    if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a0);
    }
    FUN_140041b80(local_a0,&local_f8);
    local_48 = local_a0;
    local_f8 = (longlong *)CONCAT44(uRam00000001419eb4f4,_DAT_1419eb4f0);
    uStack_f0 = uRam00000001419eb4f8;
    uStack_ec = uRam00000001419eb4fc;
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_90);
    }
    FUN_140041b80(local_90,&local_f8);
    local_40 = local_90;
    FUN_140e609c0(param_1);
    puVar3 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_e8,3,&local_50);
    if (puVar3 != puVar5) {
      local_f8 = (longlong *)*puVar3;
      uStack_f0 = *(undefined4 *)(puVar3 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_f8);
    }
    FUN_140e60910(1);
    local_c8 = 10;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f290);
    if (puVar3 != &local_b0) {
      local_f8 = (longlong *)*puVar3;
      uStack_f0 = *(undefined4 *)(puVar3 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      FUN_140041b80(&local_b0,&local_f8);
    }
    local_f8 = (longlong *)CONCAT44(uRam0000000141dc7044,_DAT_141dc7040);
    uStack_f0 = uRam0000000141dc7048;
    uStack_ec = uRam0000000141dc704c;
    if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a0);
    }
    FUN_140041b80(local_a0,&local_f8);
    local_f8 = (longlong *)CONCAT44(uRam00000001419eb504,_DAT_1419eb500);
    uStack_f0 = uRam00000001419eb508;
    uStack_ec = uRam00000001419eb50c;
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_90);
    }
    FUN_140041b80(local_90,&local_f8);
    FUN_140e609c0(param_1);
    puVar3 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_e8,3,&local_50);
    if (puVar3 != puVar5) {
      local_f8 = (longlong *)*puVar3;
      uStack_f0 = *(undefined4 *)(puVar3 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_f8);
    }
    FUN_140e60910(1);
  }
  local_c8 = 0xd;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  if ((*(uint *)((longlong)puVar3 + 0xc) & 0xffffff) == 0) {
    uVar7 = (undefined4)*puVar3;
  }
  else {
    uVar7 = FUN_140e4b060(puVar3);
  }
  dVar8 = (double)FUN_140e78d00(uVar7);
  if (DAT_141955260 < dVar8 - 0.1) {
    local_c8 = 0x12;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a01b58);
    FUN_140e63610(param_1,param_2,&local_e8,0,uVar2,0);
  }
  else {
    local_c8 = 0xf;
    FUN_140edd0e0(param_1,param_2,0,0);
    local_c8 = 0x10;
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  _eh_vector_destructor_iterator_(&local_b0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return;
}

