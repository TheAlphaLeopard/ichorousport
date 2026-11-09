// gml_Object_oIKTest_Draw_0 @ 0x140b1d4b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oIKTest_Draw_0(longlong *param_1,undefined8 param_2)

{
  longlong **pplVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined *puVar7;
  float fVar8;
  longlong *plVar9;
  double dVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong ***ppplVar13;
  ulonglong uVar14;
  undefined8 local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  longlong *local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  longlong *local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  longlong *local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [16];
  undefined1 local_90 [12];
  byte local_84;
  undefined1 local_80 [12];
  byte local_74;
  longlong **local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  
  local_d0 = "gml_Object_oIKTest_Create_0";
  local_c8 = 0;
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  _eh_vector_constructor_iterator_(local_a0,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_dc = 0xffffff;
  local_e8 = (longlong *)0x0;
  uStack_ec = 0xffffff;
  local_f8 = (longlong *)0x0;
  local_b4 = 0;
  local_c0 = (longlong *)0x405e000000000000;
  local_c8 = 4;
  local_b0 = 0;
  local_a8 = 0;
  local_a4 = 5;
  local_70 = &local_c0;
  local_118 = (longlong *)CONCAT44(uRam00000001419ebbc4,_DAT_1419ebbc0);
  uStack_110 = uRam00000001419ebbc8;
  uStack_10c = uRam00000001419ebbcc;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_118);
  local_68 = local_90;
  local_118 = (longlong *)CONCAT44(uRam00000001419ebbd4,_DAT_1419ebbd0);
  uStack_110 = uRam00000001419ebbd8;
  uStack_10c = uRam00000001419ebbdc;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_118);
  local_60 = local_80;
  ppplVar13 = &local_70;
  gml_Script_arm_meeting_line(param_1,param_2,&local_b0,3,ppplVar13);
  local_c8 = 0xb;
  pplVar1 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3838);
  FUN_140e609c0(param_1);
  uStack_fc = local_b4;
  uStack_100 = local_b8;
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) == 0) {
    local_108 = local_c0;
  }
  else {
    FUN_1400419b0(&local_108,&local_c0);
  }
  uStack_10c = 0;
  local_118 = (longlong *)0x4000000000000000;
  FUN_140046500(&local_108,&local_118);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (&local_108 != pplVar1) {
    local_118 = local_108;
    uStack_110 = uStack_100;
    uStack_10c = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar1);
    }
    FUN_140041b80(pplVar1,&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_c8 = 0xd;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a10a28);
  FUN_140e609c0(param_1);
  puVar3 = (undefined8 *)FUN_140e48e40(puVar2,1);
  FUN_140e609c0(*(undefined8 *)*puVar2);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x3ff0000000000000;
  FUN_140e60910(2);
  local_c8 = 0xe;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a10a28);
  FUN_140e609c0(param_1);
  puVar3 = (undefined8 *)FUN_140e48e40(puVar2,2);
  FUN_140e609c0(*(undefined8 *)*puVar2);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x3ff0000000000000;
  FUN_140e60910(2);
  local_c8 = 0xf;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a10b88);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x4000000000000000;
  local_c8 = 0x11;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
  uStack_10c = 6;
  uVar14 = (ulonglong)ppplVar13 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_e8,uVar14,0);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140e609c0(param_1);
  pplVar1 = (longlong **)FUN_140e48e40(puVar2,0);
  FUN_140e609c0(*(undefined8 *)*puVar2);
  if (&local_e8 != pplVar1) {
    local_118 = local_e8;
    uStack_110 = uStack_e0;
    uStack_10c = uStack_dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar1);
    }
    FUN_140041b80(pplVar1,&local_118);
  }
  FUN_140e60910(2);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
  uStack_10c = 6;
  uVar14 = uVar14 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe158,0x80000000,&local_f8,uVar14,0);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140e609c0(param_1);
  pplVar1 = (longlong **)FUN_140e48e40(puVar2,0);
  FUN_140e609c0(*(undefined8 *)*puVar2);
  if (&local_f8 != pplVar1) {
    local_118 = local_f8;
    uStack_110 = uStack_f0;
    uStack_10c = uStack_ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar1);
    }
    FUN_140041b80(pplVar1,&local_118);
  }
  FUN_140e60910(2);
  local_c8 = 0x12;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
  uStack_10c = 6;
  uVar14 = uVar14 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_e8,uVar14,0);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140e609c0(param_1);
  pplVar1 = (longlong **)FUN_140e48e40(puVar2,1);
  FUN_140e609c0(*(undefined8 *)*puVar2);
  if (&local_e8 != pplVar1) {
    local_118 = local_e8;
    uStack_110 = uStack_e0;
    uStack_10c = uStack_dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar1);
    }
    FUN_140041b80(pplVar1,&local_118);
  }
  FUN_140e60910(2);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
  uStack_10c = 6;
  uVar14 = uVar14 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe158,0x80000000,&local_f8,uVar14,0);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140e609c0(param_1);
  pplVar1 = (longlong **)FUN_140e48e40(puVar2,1);
  FUN_140e609c0(*(undefined8 *)*puVar2);
  if (&local_f8 != pplVar1) {
    local_118 = local_f8;
    uStack_110 = uStack_f0;
    uStack_10c = uStack_ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar1);
    }
    FUN_140041b80(pplVar1,&local_118);
  }
  FUN_140e60910(2);
  local_c8 = 0x13;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
  uStack_10c = 6;
  uVar14 = uVar14 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_e8,uVar14,0);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140e609c0(param_1);
  pplVar1 = (longlong **)FUN_140e48e40(puVar2,2);
  FUN_140e609c0(*(undefined8 *)*puVar2);
  if (&local_e8 != pplVar1) {
    local_118 = local_e8;
    uStack_110 = uStack_e0;
    uStack_10c = uStack_dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar1);
    }
    FUN_140041b80(pplVar1,&local_118);
  }
  FUN_140e60910(2);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
  uStack_10c = 6;
  uVar14 = uVar14 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe158,0x80000000,&local_f8,uVar14,0);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140e609c0(param_1);
  pplVar1 = (longlong **)FUN_140e48e40(puVar2,2);
  FUN_140e609c0(*(undefined8 *)*puVar2);
  if (&local_f8 != pplVar1) {
    local_118 = local_f8;
    uStack_110 = uStack_f0;
    uStack_10c = uStack_ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar1);
    }
    FUN_140041b80(pplVar1,&local_118);
  }
  FUN_140e60910(2);
  local_c8 = 0x15;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a10be8);
  uStack_10c = 0xd;
  local_118 = (longlong *)0x3ff0000000000000;
  if (&local_118 != puVar2) {
    local_108 = (longlong *)0x3ff0000000000000;
    uStack_100 = uStack_110;
    uStack_fc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_108);
  }
  local_c8 = 0x17;
  pplVar1 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3828);
  uStack_10c = 6;
  uVar14 = uVar14 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_e8,uVar14,0);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140e609c0(param_1);
  if (&local_e8 != pplVar1) {
    local_118 = local_e8;
    uStack_110 = uStack_e0;
    uStack_10c = uStack_dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar1);
    }
    FUN_140041b80(pplVar1,&local_118);
  }
  FUN_140e60910(1);
  local_c8 = 0x18;
  pplVar1 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f38c8);
  uStack_10c = 6;
  uVar14 = uVar14 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe158,0x80000000,&local_f8,uVar14,0);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140e609c0(param_1);
  uStack_fc = uStack_ec;
  uStack_100 = uStack_f0;
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
    local_108 = local_f8;
  }
  else {
    FUN_1400419b0(&local_108,&local_f8);
  }
  FUN_1400462a0(&local_108,&local_c0);
  if (&local_108 != pplVar1) {
    local_118 = local_108;
    uStack_110 = uStack_100;
    uStack_10c = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar1);
    }
    FUN_140041b80(pplVar1,&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_c8 = 0x1a;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3898);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x403e000000000000;
  local_c8 = 0x1b;
  pplVar1 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f38b8);
  FUN_140e609c0(param_1);
  uStack_fc = local_b4;
  uStack_100 = local_b8;
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) == 0) {
    local_108 = local_c0;
  }
  else {
    FUN_1400419b0(&local_108,&local_c0);
  }
  uStack_10c = 0;
  local_118 = (longlong *)0x3fee666666666666;
  FUN_140042560(&local_108,&local_118);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (&local_108 != pplVar1) {
    local_118 = local_108;
    uStack_110 = uStack_100;
    uStack_10c = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar1);
    }
    FUN_140041b80(pplVar1,&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_c8 = 0x1d;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3868);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x3fa0e5604189374c;
  local_c8 = 0x1e;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3888);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x4049000000000000;
  local_c8 = 0x1f;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x4010000000000000;
  local_c8 = 0x20;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f38a8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x4014000000000000;
  local_c8 = 0x22;
  pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f3828);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f38c8);
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3888);
  pdVar6 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3858);
  uStack_10c = 6;
  uVar14 = uVar14 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_e8,uVar14,0);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  uStack_10c = 6;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe158,0x80000000,&local_f8,uVar14 & 0xffffffffffffff00,0);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  uStack_fc = *(uint *)((longlong)puVar2 + 0xc);
  uStack_100 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_108 = (longlong *)*puVar2;
  }
  else {
    FUN_1400419b0(&local_108,puVar2);
  }
  FUN_1400462a0(&local_108,uVar5);
  plVar9 = local_108;
  if ((uStack_fc & 0xffffff) != 0) {
    plVar9 = (longlong *)FUN_140e4b060(&local_108);
  }
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar10 = *pdVar4;
  }
  else {
    dVar10 = (double)FUN_140e4b060(pdVar4);
  }
  plVar11 = local_f8;
  if ((uStack_ec & 0xffffff) != 0) {
    plVar11 = (longlong *)FUN_140e4b060(&local_f8);
  }
  plVar12 = local_e8;
  if ((uStack_dc & 0xffffff) != 0) {
    plVar12 = (longlong *)FUN_140e4b060(&local_e8);
  }
  fVar8 = (float)FUN_140e793d0((float)(double)plVar12,(float)(double)plVar11,(float)dVar10,
                               (float)(double)plVar9);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar6);
  }
  *(undefined4 *)((longlong)pdVar6 + 0xc) = 0;
  *pdVar6 = (double)fVar8;
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_c8 = 0x23;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f3858);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3878);
  FUN_140e609c0(param_1);
  if (puVar2 != puVar3) {
    local_118 = (longlong *)*puVar2;
    uStack_110 = *(undefined4 *)(puVar2 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_118);
  }
  FUN_140e60910(1);
  local_c8 = 0x24;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f38d8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_c8 = 0x26;
  puVar7 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff228);
  if (puVar7 != &DAT_141dd9548) {
    local_118 = (longlong *)CONCAT44(uRam0000000141dd954c,_DAT_141dd9548);
    uStack_110 = uRam0000000141dd9550;
    uStack_10c = DAT_141dd9554;
    if ((1 << ((byte)*(undefined4 *)(puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_118);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  _eh_vector_destructor_iterator_(local_a0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return;
}

