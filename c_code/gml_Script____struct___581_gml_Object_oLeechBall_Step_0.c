// gml_Script____struct___581_gml_Object_oLeechBall_Step_0 @ 0x140b40780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script____struct___581_gml_Object_oLeechBall_Step_0(longlong *param_1,undefined8 param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double *pdVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined8 **ppuVar9;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_84;
  double local_80;
  byte local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  double *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_a0 = "gml_Object_oLeechBall_Alarm_0";
  local_98 = 0;
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  _eh_vector_constructor_iterator_(&local_80,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_98 = 2;
  pdVar1 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1eed0);
  if (pdVar1 != &local_80) {
    local_c8 = (longlong *)*pdVar1;
    uStack_c0 = *(undefined4 *)(pdVar1 + 1);
    uStack_bc = *(undefined4 *)((longlong)pdVar1 + 0xc);
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_c8);
  }
  local_50 = &local_80;
  local_c8 = (longlong *)CONCAT44(uRam00000001419ebff4,_DAT_1419ebff0);
  uStack_c0 = uRam00000001419ebff8;
  uStack_bc = uRam00000001419ebffc;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_c8);
  local_48 = local_70;
  local_c8 = (longlong *)CONCAT44(uRam00000001419ebfe4,_DAT_1419ebfe0);
  uStack_c0 = uRam00000001419ebfe8;
  uStack_bc = uRam00000001419ebfec;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_c8);
  local_40 = local_60;
  FUN_140e609c0(param_1);
  ppuVar9 = &local_50;
  puVar3 = (undefined8 *)gml_Script_AngleRotateTowardsLerp(param_1,param_2,&local_90,3,ppuVar9);
  if (puVar3 != puVar2) {
    local_c8 = (longlong *)*puVar3;
    uStack_c0 = *(undefined4 *)(puVar3 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_c8);
  }
  FUN_140e60910(1);
  local_98 = 4;
  pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
  pdVar5 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((*(uint *)((longlong)pdVar1 + 0xc) & 0xffffff) == 0) {
    dVar7 = *pdVar1;
  }
  else {
    dVar7 = (double)FUN_140e4b060(pdVar1);
  }
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar8 = *pdVar4;
  }
  else {
    dVar8 = (double)FUN_140e4b060(pdVar4);
  }
  fVar6 = (float)FUN_140e78f90((float)dVar8,(float)dVar7);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar5);
  }
  *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
  *pdVar5 = (double)fVar6;
  local_98 = 5;
  pdVar5 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  if ((*(uint *)((longlong)pdVar1 + 0xc) & 0xffffff) == 0) {
    dVar7 = *pdVar1;
  }
  else {
    dVar7 = (double)FUN_140e4b060(pdVar1);
  }
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar8 = *pdVar4;
  }
  else {
    dVar8 = (double)FUN_140e4b060(pdVar4);
  }
  fVar6 = (float)FUN_140e79010((float)dVar8,(float)dVar7);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar5);
  }
  *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
  *pdVar5 = (double)fVar6;
  local_98 = 7;
  uStack_bc = 6;
  local_c8 = param_1;
  FUN_140e87440(&local_c8,DAT_1419fe158,0x80000000,&local_b8,(ulonglong)ppuVar9 & 0xffffffffffffff00
                ,0);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  uStack_bc = 0;
  local_c8 = (longlong *)0x4008000000000000;
  FUN_1400462a0(&local_b8,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_b8);
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_80,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return;
}

