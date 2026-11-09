// gml_Script_anon_447_gml_Object_oEnemyFoulFowl_Create_0 @ 0x1409cb7e0

undefined8 *
gml_Script_anon_447_gml_Object_oEnemyFoulFowl_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  double *pdVar2;
  float fVar3;
  double dVar4;
  double local_b8;
  uint local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_anon@137@gml_Object_oEnemyFoulFowl_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_ac = 0xffffff;
  local_b8 = 0.0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 7;
  local_7c = 0;
  local_88 = 0;
  FUN_140e86fa0(0,DAT_141a0cfc8,0x80000000,&local_88);
  local_48 = 8;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff338);
  pdVar2 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  FUN_140e87440(uVar1,DAT_141a572c0,0x80000000,&local_b8,0,0);
  dVar4 = local_b8;
  if ((local_ac & 0xffffff) != 0) {
    dVar4 = (double)FUN_140e4b060(&local_b8);
  }
  fVar3 = (float)FUN_140e78f90(0x41200000,(float)dVar4);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar2);
  }
  *(undefined4 *)((longlong)pdVar2 + 0xc) = 0;
  *pdVar2 = (double)fVar3;
  local_48 = 9;
  pdVar2 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff338);
  FUN_140e87440(uVar1,DAT_141a572c0,0x80000000,&local_b8,0,0);
  dVar4 = local_b8;
  if ((local_ac & 0xffffff) != 0) {
    dVar4 = (double)FUN_140e4b060(&local_b8);
  }
  fVar3 = (float)FUN_140e79010(0x41200000,(float)dVar4);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar2);
  }
  *(undefined4 *)((longlong)pdVar2 + 0xc) = 0;
  *pdVar2 = (double)fVar3;
  local_48 = 0xb;
  uStack_6c = 0xf;
  local_78 = 0x100000100000142;
  local_68 = 0x142;
  uStack_64 = 0x1000001;
  uStack_60 = uStack_70;
  uStack_5c = 0xf;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_68);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_98);
  local_48 = 0xc;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = 0x4000000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_a8);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

