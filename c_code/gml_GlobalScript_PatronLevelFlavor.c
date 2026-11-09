// gml_GlobalScript_PatronLevelFlavor @ 0x140417b70

undefined8 *
gml_GlobalScript_PatronLevelFlavor(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double *pdVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar9;
  longlong *plVar14;
  undefined8 local_b8;
  uint local_ac;
  double local_a8;
  uint local_9c;
  double local_98;
  uint local_8c;
  undefined8 local_88;
  uint local_7c;
  undefined8 local_78;
  uint local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  
  local_60 = "gml_Script_anon@4440@PatronChain@PatronChainPoints";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_9c = 0xffffff;
  local_a8 = 0.0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0.0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x84;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1dbd0);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f6378);
  FUN_140e87170(uVar1,DAT_1419fe0e8,0x80000000,&local_a8,param_1,param_2);
  FUN_140e87170(uVar1,DAT_1419fe158,0x80000000,&local_b8,param_1,param_2);
  FUN_140e87170(uVar2,DAT_1419fe0e8,0x80000000,&local_78,param_1,param_2);
  FUN_140e87170(uVar2,DAT_1419fe158,0x80000000,&local_88,param_1,param_2);
  if ((local_7c & 0xffffff) == 0) {
    uVar4 = (undefined4)local_88;
    uVar10 = (undefined4)((ulonglong)local_88 >> 0x20);
  }
  else {
    uVar1 = FUN_140e4b060(&local_88);
    uVar4 = (undefined4)uVar1;
    uVar10 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  if ((local_6c & 0xffffff) == 0) {
    uVar6 = (undefined4)local_78;
    uVar11 = (undefined4)((ulonglong)local_78 >> 0x20);
  }
  else {
    uVar1 = FUN_140e4b060(&local_78);
    uVar6 = (undefined4)uVar1;
    uVar11 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  if ((local_ac & 0xffffff) == 0) {
    uVar7 = (undefined4)local_b8;
    uVar12 = (undefined4)((ulonglong)local_b8 >> 0x20);
  }
  else {
    uVar1 = FUN_140e4b060(&local_b8);
    uVar7 = (undefined4)uVar1;
    uVar12 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  if ((local_9c & 0xffffff) == 0) {
    dVar9 = local_a8;
  }
  else {
    dVar9 = (double)FUN_140e4b060(&local_a8);
  }
  fVar5 = (float)FUN_140e793d0((float)dVar9,(float)(double)CONCAT44(uVar12,uVar7),
                               (float)(double)CONCAT44(uVar11,uVar6),
                               (float)(double)CONCAT44(uVar10,uVar4));
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = (double)fVar5;
  local_58 = 0x86;
  pdVar3 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a9f8);
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1dbd0);
  FUN_140e87170(uVar1,DAT_1419fe0e8,0x80000000,&local_a8,param_1,param_2);
  plVar14 = param_1;
  FUN_140e87170(uVar1,DAT_1419fe158,0x80000000,&local_b8,param_1,param_2);
  uVar4 = (undefined4)((ulonglong)plVar14 >> 0x20);
  uVar10 = (undefined4)((ulonglong)param_2 >> 0x20);
  if ((local_8c & 0xffffff) == 0) {
    uVar6 = SUB84(local_98,0);
    uVar11 = (undefined4)((ulonglong)local_98 >> 0x20);
  }
  else {
    uVar1 = FUN_140e4b060(&local_98);
    uVar6 = (undefined4)uVar1;
    uVar11 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  if ((local_ac & 0xffffff) == 0) {
    uVar7 = (undefined4)local_b8;
    uVar12 = (undefined4)((ulonglong)local_b8 >> 0x20);
  }
  else {
    uVar1 = FUN_140e4b060(&local_b8);
    uVar7 = (undefined4)uVar1;
    uVar12 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  if ((local_9c & 0xffffff) == 0) {
    uVar8 = SUB84(local_a8,0);
    uVar13 = (undefined4)((ulonglong)local_a8 >> 0x20);
  }
  else {
    uVar1 = FUN_140e4b060(&local_a8);
    uVar8 = (undefined4)uVar1;
    uVar13 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  if ((*(uint *)((longlong)pdVar3 + 0xc) & 0xffffff) == 0) {
    dVar9 = *pdVar3;
  }
  else {
    dVar9 = (double)FUN_140e4b060(pdVar3);
  }
  FUN_140ec5dd0(param_1,(longlong)dVar9,0,(float)(double)CONCAT44(uVar13,uVar8),
                CONCAT44(uVar4,(float)(double)CONCAT44(uVar12,uVar7)),CONCAT44(uVar10,0x3f800000),
                0x3f800000,(float)(double)CONCAT44(uVar11,uVar6),0xffffff,0x3f800000);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

