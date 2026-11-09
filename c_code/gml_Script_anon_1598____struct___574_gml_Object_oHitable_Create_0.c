// gml_Script_anon_1598____struct___574_gml_Object_oHitable_Create_0 @ 0x140b08750

undefined8 *
gml_Script_anon_1598____struct___574_gml_Object_oHitable_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  double *pdVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar10;
  double dVar9;
  double local_a8;
  undefined4 local_a0;
  uint local_9c;
  double local_98;
  undefined4 local_90;
  uint local_8c;
  double local_88;
  undefined4 local_7c;
  double local_78;
  undefined4 local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  
  local_60 = "gml_Script_anon@1027@___struct___574@gml_Object_oHitable_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_6c = 0xffffff;
  local_78 = 0.0;
  local_7c = 0xffffff;
  local_88 = 0.0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x45;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09708);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff808);
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)*param_5;
  }
  local_9c = *(uint *)((longlong)pdVar5 + 0xc);
  local_a0 = *(undefined4 *)(pdVar5 + 1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
    local_a8 = *pdVar5;
  }
  else {
    FUN_1400419b0(&local_a8);
  }
  FUN_140042560(&local_a8,uVar1);
  local_8c = local_9c;
  local_90 = local_a0;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
    local_98 = local_a8;
  }
  else {
    FUN_1400419b0(&local_98,&local_a8);
  }
  FUN_140042560(&local_98,uVar2);
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
  }
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar8 = (undefined4)*puVar4;
    uVar10 = (undefined4)((ulonglong)*puVar4 >> 0x20);
  }
  else {
    uVar2 = FUN_140e4b060();
    uVar8 = (undefined4)uVar2;
    uVar10 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if ((local_8c & 0xffffff) == 0) {
    dVar9 = local_98;
  }
  else {
    dVar9 = (double)FUN_140e4b060(&local_98);
  }
  fVar7 = (float)FUN_140e78f90((float)dVar9,(float)(double)CONCAT44(uVar10,uVar8));
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 0;
  local_78 = (double)fVar7;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140e86c30(uVar3,DAT_1419fe0e8,0x80000000,&local_78);
  local_58 = 0x46;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
  if (param_4 < 1) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)*param_5;
  }
  local_9c = *(uint *)((longlong)pdVar5 + 0xc);
  local_a0 = *(undefined4 *)(pdVar5 + 1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
    local_a8 = *pdVar5;
  }
  else {
    FUN_1400419b0(&local_a8);
  }
  FUN_140042560(&local_a8,uVar1);
  local_8c = local_9c;
  local_90 = local_a0;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
    local_98 = local_a8;
  }
  else {
    FUN_1400419b0(&local_98,&local_a8);
  }
  FUN_140042560(&local_98,uVar2);
  if (1 < param_4) {
    puVar6 = (undefined8 *)param_5[1];
  }
  if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
    uVar8 = (undefined4)*puVar6;
    uVar10 = (undefined4)((ulonglong)*puVar6 >> 0x20);
  }
  else {
    uVar1 = FUN_140e4b060(puVar6);
    uVar8 = (undefined4)uVar1;
    uVar10 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  if ((local_8c & 0xffffff) == 0) {
    dVar9 = local_98;
  }
  else {
    dVar9 = (double)FUN_140e4b060(&local_98);
  }
  fVar7 = (float)FUN_140e79010((float)dVar9,(float)(double)CONCAT44(uVar10,uVar8));
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_88 = (double)fVar7;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  (**(code **)(*param_1 + 8))(param_1,DAT_141a09708);
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff808);
  FUN_140e86c30(uVar1,DAT_1419fe158,0x80000000,&local_88);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

