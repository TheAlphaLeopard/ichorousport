// gml_Object_oWall_PreCreate_0 @ 0x140e1ff80

void gml_Object_oWall_PreCreate_0(longlong *param_1)

{
  double dVar1;
  double *pdVar2;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Object_oUnlockHurter_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 1;
  pdVar2 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01aa8);
  FUN_140e609c0(param_1);
  dVar1 = (double)FUN_140e78f00(3);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar2);
  }
  *(undefined4 *)((longlong)pdVar2 + 0xc) = 0;
  *pdVar2 = dVar1 + 2.0;
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}

