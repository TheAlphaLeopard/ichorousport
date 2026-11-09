// gml_Object_oProjectile_Step_1 @ 0x140ca4070

void gml_Object_oProjectile_Step_1(longlong *param_1)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Object_oProjectile_Alarm_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 3;
  pdVar1 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
  pdVar2 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
  pdVar3 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((*(uint *)((longlong)pdVar2 + 0xc) & 0xffffff) == 0) {
    dVar5 = *pdVar2;
  }
  else {
    dVar5 = (double)FUN_140e4b060(pdVar2);
  }
  if ((*(uint *)((longlong)pdVar1 + 0xc) & 0xffffff) == 0) {
    dVar6 = *pdVar1;
  }
  else {
    dVar6 = (double)FUN_140e4b060(pdVar1);
  }
  fVar4 = (float)FUN_140e78f90((float)dVar6,(float)dVar5);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar3);
  }
  *(undefined4 *)((longlong)pdVar3 + 0xc) = 0;
  *pdVar3 = (double)fVar4;
  local_28 = 4;
  pdVar3 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  if ((*(uint *)((longlong)pdVar2 + 0xc) & 0xffffff) == 0) {
    dVar5 = *pdVar2;
  }
  else {
    dVar5 = (double)FUN_140e4b060(pdVar2);
  }
  if ((*(uint *)((longlong)pdVar1 + 0xc) & 0xffffff) == 0) {
    dVar6 = *pdVar1;
  }
  else {
    dVar6 = (double)FUN_140e4b060(pdVar1);
  }
  fVar4 = (float)FUN_140e79010((float)dVar6,(float)dVar5);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar3);
  }
  *(undefined4 *)((longlong)pdVar3 + 0xc) = 0;
  *pdVar3 = (double)fVar4;
  local_28 = 6;
  pdVar1 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  FUN_140e609c0(param_1);
  if (pdVar2 != pdVar1) {
    local_48 = *(undefined4 *)pdVar2;
    uStack_44 = *(undefined4 *)((longlong)pdVar2 + 4);
    uStack_40 = *(undefined4 *)(pdVar2 + 1);
    uStack_3c = *(undefined4 *)((longlong)pdVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar1);
    }
    FUN_140041b80(pdVar1,&local_48);
  }
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}

