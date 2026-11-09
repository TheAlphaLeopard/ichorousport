// gml_Script_ignore_time_anon_2020_anon_123_gml_Object_oParticleManager_Create_0 @ 0x140bc0090

undefined8 *
gml_Script_ignore_time_anon_2020_anon_123_gml_Object_oParticleManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double *pdVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double local_b8;
  uint local_ac;
  double local_a8;
  uint local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78 [2];
  undefined8 *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  
  local_60 = "gml_Script_grav@anon@1629@anon@123@gml_Object_oParticleManager_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x7b;
  FUN_140041df0(local_78,param_4,2,param_5);
  local_9c = 0xffffff;
  local_a8 = 0.0;
  local_ac = 0xffffff;
  local_b8 = 0.0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x7b;
  puVar9 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_70[1];
  }
  iVar2 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_58 = 0x7b;
    uStack_7c = 0xd;
    local_88 = 0x3ff0000000000000;
    if ((int)local_78[0] < 2) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_70[1];
      if (&local_88 == puVar6) goto LAB_140bc01bc;
    }
    local_98 = 0x3ff0000000000000;
    uStack_90 = uStack_80;
    uStack_8c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_98);
  }
LAB_140bc01bc:
  local_58 = 0x7d;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
  pdVar5 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  FUN_140e87440(uVar3,DAT_1419f3418,0x80000000,&local_a8,0,0);
  FUN_140e87440(uVar4,DAT_1419f3418,0x80000000,&local_b8,0,0);
  dVar11 = local_b8;
  if ((local_ac & 0xffffff) != 0) {
    dVar11 = (double)FUN_140e4b060(&local_b8);
  }
  dVar12 = local_a8;
  if ((local_9c & 0xffffff) != 0) {
    dVar12 = (double)FUN_140e4b060(&local_a8);
  }
  fVar10 = (float)FUN_140e78f90((float)dVar12,(float)dVar11);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar5);
  }
  *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
  *pdVar5 = (double)fVar10;
  local_58 = 0x7e;
  pdVar5 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
  FUN_140e87440(uVar3,DAT_1419f3418,0x80000000,&local_a8,0,0);
  FUN_140e87440(uVar4,DAT_1419f3418,0x80000000,&local_b8,0,0);
  dVar11 = local_b8;
  if ((local_ac & 0xffffff) != 0) {
    dVar11 = (double)FUN_140e4b060(&local_b8);
  }
  dVar12 = local_a8;
  if ((local_9c & 0xffffff) != 0) {
    dVar12 = (double)FUN_140e4b060(&local_a8);
  }
  fVar10 = (float)FUN_140e79010((float)dVar12,(float)dVar11);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar5);
  }
  *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
  *pdVar5 = (double)fVar10;
  local_58 = 0x80;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6f38);
  FUN_140e609c0(param_1);
  if ((int)local_78[0] < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_70[1];
  }
  cVar1 = FUN_140e491e0(puVar7);
  if ((int)local_78[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_70;
  }
  uStack_8c = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_90 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) == 0) {
    local_98 = *puVar7;
  }
  else {
    FUN_1400419b0(&local_98);
  }
  uStack_7c = 7;
  local_88 = CONCAT44(local_88._4_4_,(uint)(cVar1 == '\0'));
  FUN_140042560(&local_98,&local_88);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (&local_98 != puVar6) {
    local_88 = local_98;
    uStack_80 = uStack_90;
    uStack_7c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_88);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_58 = 0x81;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f310);
  FUN_140e609c0(param_1);
  if (0 < (int)local_78[0]) {
    puVar9 = (undefined8 *)*local_70;
  }
  if (puVar9 != puVar6) {
    local_88 = *puVar9;
    uStack_80 = *(undefined4 *)(puVar9 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_88);
  }
  FUN_140e60910(1);
  local_58 = 0x83;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar3 = FUN_140e5c910();
  FUN_140e42c10(uVar3,param_1);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if (0 < (int)local_78[0]) {
    puVar9 = local_70;
    do {
      puVar6 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

