// gml_Script____struct___574_gml_Object_oHitable_Create_0 @ 0x140b08b60

undefined8 *
gml_Script____struct___574_gml_Object_oHitable_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  undefined8 uVar5;
  byte bVar6;
  double *pdVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  double local_b8;
  undefined4 local_b0;
  uint local_ac;
  double local_a8;
  undefined4 local_9c;
  double local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  double local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58 [2];
  undefined8 *local_50;
  
  local_80 = "gml_Script_anon@1400@___struct___574@gml_Object_oHitable_Create_0";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x4b;
  FUN_140041df0(local_58,param_4,3,param_5);
  local_ac = 0xffffff;
  local_b8 = 0.0;
  local_8c = 0xffffff;
  local_98 = 0.0;
  local_9c = 0xffffff;
  local_a8 = 0.0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x4b;
  pdVar7 = (double *)&DAT_1419df7b0;
  uVar8 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 3) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_50[2];
  }
  iVar2 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_78 = 0x4b;
    if ((int)local_58[0] < 3) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)local_50[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    *puVar9 = 0x3fd3333333333333;
  }
  local_78 = 0x4c;
  if ((int)local_58[0] < 3) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_50[2];
  }
  if ((int)local_58[0] < 1) {
    pdVar3 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar3 = (double *)*local_50;
  }
  uStack_bc = *(undefined4 *)((longlong)pdVar3 + 0xc);
  uStack_c0 = *(undefined4 *)(pdVar3 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *pdVar3;
  }
  else {
    FUN_1400419b0(&local_c8);
  }
  FUN_140042560(&local_c8,puVar9);
  local_68 = local_c8;
  uStack_60 = uStack_c0;
  uStack_5c = uStack_bc;
  FUN_140041b80(&local_b8,&local_68);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_78 = 0x4d;
  pdVar3 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2848);
  FUN_140e609c0(param_1);
  if ((int)local_58[0] < 3) {
    pdVar4 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar4 = (double *)local_50[2];
  }
  if (pdVar4 != pdVar3) {
    local_c8 = *pdVar4;
    uStack_c0 = *(undefined4 *)(pdVar4 + 1);
    uStack_bc = *(undefined4 *)((longlong)pdVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar3);
    }
    FUN_140041b80(pdVar3,&local_c8);
  }
  FUN_140e60910(1);
  local_78 = 0x4e;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  local_68 = (double)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff808);
  dVar13 = local_b8;
  uStack_bc = local_ac;
  uStack_c0 = local_b0;
  bVar6 = (byte)local_ac & 0x1f;
  uVar10 = 1 << bVar6 & 0x46;
  if (uVar10 == 0) {
    local_c8 = local_b8;
  }
  else {
    FUN_1400419b0(&local_c8,&local_b8);
  }
  FUN_140042560(&local_c8,uVar5);
  if ((int)local_58[0] < 2) {
    pdVar3 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar3 = (double *)local_50[1];
  }
  if ((*(uint *)((longlong)pdVar3 + 0xc) & 0xffffff) == 0) {
    dVar14 = *pdVar3;
  }
  else {
    dVar14 = (double)FUN_140e4b060();
  }
  dVar12 = local_c8;
  if ((uStack_bc & 0xffffff) != 0) {
    dVar12 = (double)FUN_140e4b060(&local_c8);
  }
  fVar11 = (float)FUN_140e78f90((float)dVar12,(float)dVar14);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = (double)fVar11;
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140e86c30(local_68,DAT_1419fe0e8,0x80000000,&local_98);
  local_78 = 0x4f;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
  uStack_bc = local_ac;
  uStack_c0 = local_b0;
  if (uVar10 == 0) {
    local_c8 = dVar13;
  }
  else {
    FUN_1400419b0(&local_c8,&local_b8);
  }
  FUN_140042560(&local_c8,uVar5);
  if (1 < (int)local_58[0]) {
    pdVar7 = (double *)local_50[1];
  }
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar13 = *pdVar7;
  }
  else {
    dVar13 = (double)FUN_140e4b060(pdVar7);
  }
  dVar14 = local_c8;
  if ((uStack_bc & 0xffffff) != 0) {
    dVar14 = (double)FUN_140e4b060(&local_c8);
  }
  fVar11 = (float)FUN_140e79010((float)dVar14,(float)dVar13);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = (double)fVar11;
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff808);
  FUN_140e86c30(uVar5,DAT_1419fe158,0x80000000,&local_a8);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << bVar6 & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if (0 < (int)local_58[0]) {
    puVar9 = local_50;
    do {
      puVar1 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

