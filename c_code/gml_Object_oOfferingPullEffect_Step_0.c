// gml_Object_oOfferingPullEffect_Step_0 @ 0x140b98090

void gml_Object_oOfferingPullEffect_Step_0(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong **pplVar4;
  double *pdVar5;
  double *pdVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  double local_b0;
  uint local_a4;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_c0 = "gml_Object_oOfferingPullEffect_Create_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  uStack_7c = 0xffffff;
  local_88 = (longlong *)0x0;
  uStack_8c = 0xffffff;
  local_98 = (longlong *)0x0;
  local_a4 = 0xffffff;
  local_b0 = 0.0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0.0;
  local_b8 = 1;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5608);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x4048000000000000;
  local_b8 = 2;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f55c8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x4038000000000000;
  local_b8 = 3;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5648);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x3fc999999999999a;
  local_b8 = 4;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f55d8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x4010000000000000;
  local_b8 = 6;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f55f8);
  uVar1 = FUN_140e794b0(0,0x3ff2666666666666);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = uVar1;
  local_b8 = 8;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f55f8);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  FUN_140e609c0(param_1);
  if (puVar2 != puVar3) {
    local_d8 = (longlong *)*puVar2;
    uStack_d0 = *(undefined4 *)(puVar2 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_d8);
  }
  FUN_140e60910(1);
  local_b8 = 9;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  FUN_140e609c0(param_1);
  if (puVar2 != puVar3) {
    local_d8 = (longlong *)*puVar2;
    uStack_d0 = *(undefined4 *)(puVar2 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_d8);
  }
  FUN_140e60910(1);
  local_b8 = 0xb;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5628);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x3fdccccccccccccd;
  local_b8 = 0xc;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5638);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x3fd0000000000000;
  local_b8 = 0xe;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff228);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_b8 = 0xf;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a978);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_b8 = 0x11;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1eed0);
  uVar1 = FUN_140e78f00(0x167);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = uVar1;
  local_b8 = 0x13;
  pplVar4 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f55e8);
  uStack_cc = 6;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_1419fe0e8,0x80000000,&local_88,0,0);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140e609c0(param_1);
  if (&local_88 != pplVar4) {
    local_d8 = local_88;
    uStack_d0 = uStack_80;
    uStack_cc = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar4);
    }
    FUN_140041b80(pplVar4,&local_d8);
  }
  FUN_140e60910(1);
  local_b8 = 0x14;
  pplVar4 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5618);
  uStack_cc = 6;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_1419fe158,0x80000000,&local_98,0,0);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140e609c0(param_1);
  if (&local_98 != pplVar4) {
    local_d8 = local_98;
    uStack_d0 = uStack_90;
    uStack_cc = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar4);
    }
    FUN_140041b80(pplVar4,&local_d8);
  }
  FUN_140e60910(1);
  local_b8 = 0x16;
  dVar8 = (double)FUN_140e794b0(0,0x4024000000000000);
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  local_a4 = 0;
  local_b8 = 0x17;
  local_b0 = dVar8;
  pdVar5 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
  uStack_cc = 6;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_1419fe0e8,0x80000000,&local_58,0,0);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar8 = *pdVar5;
  }
  else {
    dVar8 = (double)FUN_140e4b060(pdVar5);
  }
  dVar9 = local_b0;
  if ((local_a4 & 0xffffff) != 0) {
    dVar9 = (double)FUN_140e4b060(&local_b0);
  }
  fVar7 = (float)FUN_140e78f90((float)dVar9,(float)dVar8);
  FUN_140162c50(&local_58,(double)fVar7);
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_58);
  local_b8 = 0x18;
  uStack_cc = 6;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_1419fe158,0x80000000,&local_68,0,0);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar8 = *pdVar5;
  }
  else {
    dVar8 = (double)FUN_140e4b060(pdVar5);
  }
  dVar9 = local_b0;
  if ((local_a4 & 0xffffff) != 0) {
    dVar9 = (double)FUN_140e4b060(&local_b0);
  }
  fVar7 = (float)FUN_140e79010((float)dVar9,(float)dVar8);
  FUN_140162c50(&local_68,(double)fVar7);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_68);
  local_b8 = 0x1a;
  pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5608);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd1b8);
  uStack_cc = 6;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_1419fe0e8,0x80000000,&local_88,0,0);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140e609c0(param_1);
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar8 = *pdVar5;
  }
  else {
    dVar8 = (double)FUN_140e4b060(pdVar5);
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar9 = *pdVar6;
  }
  else {
    dVar9 = (double)FUN_140e4b060(pdVar6);
  }
  fVar7 = (float)FUN_140e78f90((float)dVar9,(float)dVar8);
  uStack_cc = uStack_7c;
  uStack_d0 = uStack_80;
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) == 0) {
    local_d8 = local_88;
  }
  else {
    FUN_1400419b0(&local_d8,&local_88);
  }
  FUN_140162c50(&local_d8,(double)fVar7);
  if (&local_d8 != puVar2) {
    local_48 = (undefined4)local_d8;
    uStack_44 = local_d8._4_4_;
    uStack_40 = uStack_d0;
    uStack_3c = uStack_cc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_48);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140e60910(1);
  local_b8 = 0x1b;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd178);
  uStack_cc = 6;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_1419fe158,0x80000000,&local_98,0,0);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140e609c0(param_1);
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar8 = *pdVar5;
  }
  else {
    dVar8 = (double)FUN_140e4b060(pdVar5);
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar9 = *pdVar6;
  }
  else {
    dVar9 = (double)FUN_140e4b060(pdVar6);
  }
  fVar7 = (float)FUN_140e79010((float)dVar9,(float)dVar8);
  uStack_cc = uStack_8c;
  uStack_d0 = uStack_90;
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) == 0) {
    local_d8 = local_98;
  }
  else {
    FUN_1400419b0(&local_d8,&local_98);
  }
  FUN_140162c50(&local_d8,(double)fVar7);
  if (&local_d8 != puVar2) {
    local_48 = (undefined4)local_d8;
    uStack_44 = local_d8._4_4_;
    uStack_40 = uStack_d0;
    uStack_3c = uStack_cc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_48);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140e60910(1);
  local_b8 = 0x1d;
  if (pdVar5 != &local_78) {
    local_48 = *(undefined4 *)pdVar5;
    uStack_44 = *(undefined4 *)((longlong)pdVar5 + 4);
    uStack_40 = *(undefined4 *)(pdVar5 + 1);
    uStack_3c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_48);
  }
  FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_78);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return;
}

