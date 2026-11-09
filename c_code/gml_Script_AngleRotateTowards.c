// gml_Script_AngleRotateTowards @ 0x14021c940

double * gml_Script_AngleRotateTowards
                   (undefined8 param_1,undefined8 param_2,double *param_3,undefined4 param_4,
                   undefined8 param_5)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  double *pdVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  byte bVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined8 uStack_a0;
  double local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  uint local_50 [2];
  undefined8 *local_48;
  
  local_60 = "gml_Script_angle_in_range";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 3;
  FUN_140041df0(local_50,param_4,4,param_5);
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  local_58 = 3;
  puVar9 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_50[0];
  if ((int)local_50[0] < 4) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_48[3];
  }
  iVar4 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_58 = 3;
    uStack_bc = 0xd;
    local_c8 = 0x3ff0000000000000;
    if ((int)local_50[0] < 4) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_48[3];
      if (&local_c8 == puVar6) goto LAB_14021ca6f;
    }
    uStack_a0 = CONCAT44(0xd,uStack_c0);
    local_a8 = 1.0;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_a8);
  }
LAB_14021ca6f:
  local_58 = 5;
  if ((int)local_50[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_48[1];
  }
  if ((int)local_50[0] < 3) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)local_48[2];
  }
  uStack_ac = *(undefined4 *)((longlong)pdVar5 + 0xc);
  uStack_b0 = *(undefined4 *)(pdVar5 + 1);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) == 0) {
    local_b8 = *pdVar5;
  }
  else {
    FUN_1400419b0(&local_b8);
  }
  FUN_1400462a0(&local_b8,puVar6);
  uStack_90 = (double)CONCAT44(uStack_ac,uStack_b0);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) == 0) {
    local_98 = local_b8;
  }
  else {
    FUN_1400419b0(&local_98,&local_b8);
  }
  uStack_bc = 7;
  local_c8 = CONCAT44(local_c8._4_4_,0x168);
  FUN_140046880(&local_98,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  uStack_a0 = (ulonglong)uStack_90;
  if ((1 << ((byte)((ulonglong)uStack_90 >> 0x20) & 0x1f) & 0x46U) == 0) {
    local_a8 = local_98;
  }
  else {
    FUN_1400419b0(&local_a8,&local_98);
  }
  uStack_bc = 7;
  local_c8 = CONCAT44(local_c8._4_4_,0x168);
  FUN_1400460e0(&local_a8,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((uStack_a0 & 0xffffff00000000) == 0) {
    dVar12 = local_a8;
  }
  else {
    dVar12 = (double)FUN_140e4b060(&local_a8);
  }
  uVar11 = FUN_1412a79b0(dVar12,0x4076800000000000);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 0;
  local_78 = uVar11;
  if ((1 << ((byte)(uStack_a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)((ulonglong)uStack_90 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_58 = 6;
  if ((int)local_50[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_48[1];
  }
  if ((int)local_50[0] < 1) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)*local_48;
  }
  uStack_90 = pdVar5[1];
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
    local_98 = *pdVar5;
  }
  else {
    FUN_1400419b0(&local_98);
  }
  FUN_1400462a0(&local_98,puVar6);
  uStack_ac = uStack_90._4_4_;
  uStack_b0 = (undefined4)uStack_90;
  if ((1 << ((byte)((ulonglong)uStack_90 >> 0x20) & 0x1f) & 0x46U) == 0) {
    local_b8 = local_98;
  }
  else {
    FUN_1400419b0(&local_b8,&local_98);
  }
  uStack_bc = 7;
  local_c8 = CONCAT44(local_c8._4_4_,0x168);
  FUN_140046880(&local_b8,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  uStack_a0 = CONCAT44(uStack_ac,uStack_b0);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) == 0) {
    local_a8 = local_b8;
  }
  else {
    FUN_1400419b0(&local_a8,&local_b8);
  }
  uStack_bc = 7;
  local_c8 = CONCAT44(local_c8._4_4_,0x168);
  FUN_1400460e0(&local_a8,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((uStack_a0 & 0xffffff00000000) == 0) {
    dVar12 = local_a8;
  }
  else {
    dVar12 = (double)FUN_140e4b060(&local_a8);
  }
  uVar11 = FUN_1412a79b0(dVar12,0x4076800000000000);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_88 = uVar11;
  if ((1 << ((byte)(uStack_a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)((ulonglong)uStack_90 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_58 = 8;
  if (3 < (int)local_50[0]) {
    puVar9 = (undefined8 *)local_48[3];
  }
  cVar3 = FUN_140e491e0(puVar9);
  if (cVar3 == '\0') {
    uStack_bc = 0;
    local_c8 = 0;
    iVar4 = FUN_140e851f0(&local_88,&local_c8,DAT_141955260,1);
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    bVar10 = false;
    if (0 < iVar4) {
      iVar4 = FUN_140e851f0(&local_88,&local_78,DAT_141955260,1);
      bVar10 = false;
      if (iVar4 != -2) {
        bVar10 = iVar4 < 0;
      }
    }
    bVar8 = 0xd;
    uStack_a0 = CONCAT44(0xd,(undefined4)uStack_a0);
    local_a8 = (double)bVar10;
    pdVar5 = &local_a8;
    bVar1 = false;
    bVar10 = true;
  }
  else {
    iVar4 = FUN_140e851f0(&local_88,&local_78,DAT_141955260,1);
    uStack_ac = 0xd;
    local_b8 = (double)(iVar4 != -2 && iVar4 < 1);
    pdVar5 = &local_b8;
    bVar1 = true;
    bVar10 = false;
    bVar8 = uStack_a0._4_1_;
  }
  uVar2 = uStack_ac;
  if (pdVar5 != param_3) {
    local_98 = *pdVar5;
    uStack_90 = pdVar5[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_98);
  }
  if ((bVar10) && ((1 << (bVar8 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_a8);
  }
  if ((bVar1) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (0 < (int)local_50[0]) {
    puVar9 = local_48;
    do {
      puVar6 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_48);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

