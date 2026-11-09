// gml_Object_oThunderPot_Create_0 @ 0x140db19f0

void gml_Object_oThunderPot_Create_0(longlong *param_1)

{
  double *pdVar1;
  undefined8 *puVar2;
  double *pdVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar8;
  double dVar7;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Object_oThrowingLance_Alarm_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 2;
  pdVar1 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
  pdVar3 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((*(uint *)((longlong)puVar2 + 0xc) & 0xffffff) == 0) {
    uVar5 = (undefined4)*puVar2;
    uVar8 = (undefined4)((ulonglong)*puVar2 >> 0x20);
  }
  else {
    uVar6 = FUN_140e4b060(puVar2);
    uVar5 = (undefined4)uVar6;
    uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
  }
  if ((*(uint *)((longlong)pdVar1 + 0xc) & 0xffffff) == 0) {
    dVar7 = *pdVar1;
  }
  else {
    dVar7 = (double)FUN_140e4b060(pdVar1);
  }
  fVar4 = (float)FUN_140e78f90((float)dVar7,(float)(double)CONCAT44(uVar8,uVar5));
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar3);
  }
  *(undefined4 *)((longlong)pdVar3 + 0xc) = 0;
  *pdVar3 = (double)fVar4;
  local_28 = 3;
  pdVar3 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  if ((*(uint *)((longlong)puVar2 + 0xc) & 0xffffff) == 0) {
    uVar5 = (undefined4)*puVar2;
    uVar8 = (undefined4)((ulonglong)*puVar2 >> 0x20);
  }
  else {
    uVar6 = FUN_140e4b060(puVar2);
    uVar5 = (undefined4)uVar6;
    uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
  }
  if ((*(uint *)((longlong)pdVar1 + 0xc) & 0xffffff) == 0) {
    dVar7 = *pdVar1;
  }
  else {
    dVar7 = (double)FUN_140e4b060(pdVar1);
  }
  fVar4 = (float)FUN_140e79010((float)dVar7,(float)(double)CONCAT44(uVar8,uVar5));
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar3);
  }
  *(undefined4 *)((longlong)pdVar3 + 0xc) = 0;
  *pdVar3 = (double)fVar4;
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}

