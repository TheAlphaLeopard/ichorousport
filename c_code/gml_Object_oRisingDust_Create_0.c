// gml_Object_oRisingDust_Create_0 @ 0x140cae870

void gml_Object_oRisingDust_Create_0(longlong *param_1)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Object_oRichochetProj_Alarm_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 2;
  pdVar2 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
  pdVar3 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
  pdVar4 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((*(uint *)((longlong)pdVar3 + 0xc) & 0xffffff) == 0) {
    dVar10 = *pdVar3;
  }
  else {
    dVar10 = (double)FUN_140e4b060(pdVar3);
  }
  if ((*(uint *)((longlong)pdVar2 + 0xc) & 0xffffff) == 0) {
    dVar11 = *pdVar2;
  }
  else {
    dVar11 = (double)FUN_140e4b060(pdVar2);
  }
  fVar8 = (float)FUN_140e78f90((float)dVar11,(float)dVar10);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar4);
  }
  *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
  *pdVar4 = (double)fVar8;
  local_38 = 3;
  pdVar4 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  if ((*(uint *)((longlong)pdVar3 + 0xc) & 0xffffff) == 0) {
    dVar10 = *pdVar3;
  }
  else {
    dVar10 = (double)FUN_140e4b060(pdVar3);
  }
  if ((*(uint *)((longlong)pdVar2 + 0xc) & 0xffffff) == 0) {
    dVar11 = *pdVar2;
  }
  else {
    dVar11 = (double)FUN_140e4b060(pdVar2);
  }
  fVar8 = (float)FUN_140e79010((float)dVar11,(float)dVar10);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar4);
  }
  *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
  *pdVar4 = (double)fVar8;
  local_38 = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
  uStack_4c = 0;
  local_58 = 0;
  iVar1 = FUN_140e851f0(uVar5,&local_58,DAT_141955260,0);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if (iVar1 == 0) {
    local_38 = 7;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
    if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
      uVar9 = (undefined4)*puVar6;
    }
    else {
      uVar9 = FUN_140e4b060(puVar6);
    }
    local_58 = FUN_140e79500(uVar9);
    uStack_4c = 0;
    FUN_140042560(uVar5,&local_58);
    if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
  }
  else {
    local_38 = 0xc;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
    FUN_140e609c0(param_1);
    if (puVar6 != puVar7) {
      local_58 = *puVar6;
      uStack_50 = *(undefined4 *)(puVar6 + 1);
      uStack_4c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_58);
    }
    FUN_140e60910(1);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return;
}

