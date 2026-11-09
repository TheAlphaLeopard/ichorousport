// gml_Script_anon_1442_gml_Object_oUIManager_Create_0 @ 0x140dfd570

undefined8 *
gml_Script_anon_1442_gml_Object_oUIManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_set_angle@anon@1128@anon@958@gml_Object_oUIManager_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x43;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  if (param_5 != puVar1) {
    local_58 = *(undefined4 *)param_5;
    uStack_54 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_50 = *(undefined4 *)(param_5 + 1);
    uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x44;
  pdVar2 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02f98);
  pdVar3 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
  pdVar4 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09918);
  if ((*(uint *)((longlong)pdVar3 + 0xc) & 0xffffff) == 0) {
    dVar6 = *pdVar3;
  }
  else {
    dVar6 = (double)FUN_140e4b060(pdVar3);
  }
  if ((*(uint *)((longlong)pdVar2 + 0xc) & 0xffffff) == 0) {
    dVar7 = *pdVar2;
  }
  else {
    dVar7 = (double)FUN_140e4b060(pdVar2);
  }
  fVar5 = (float)FUN_140e78f90((float)dVar7,(float)dVar6);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar4);
  }
  *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
  *pdVar4 = (double)fVar5;
  local_38 = 0x45;
  pdVar4 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09a78);
  if ((*(uint *)((longlong)pdVar3 + 0xc) & 0xffffff) == 0) {
    dVar6 = *pdVar3;
  }
  else {
    dVar6 = (double)FUN_140e4b060(pdVar3);
  }
  if ((*(uint *)((longlong)pdVar2 + 0xc) & 0xffffff) == 0) {
    dVar7 = *pdVar2;
  }
  else {
    dVar7 = (double)FUN_140e4b060(pdVar2);
  }
  fVar5 = (float)FUN_140e79010((float)dVar7,(float)dVar6);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar4);
  }
  *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
  *pdVar4 = (double)fVar5;
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

