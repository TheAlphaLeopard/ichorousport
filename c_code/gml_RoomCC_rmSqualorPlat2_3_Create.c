// gml_RoomCC_rmSqualorPlat2_3_Create @ 0x140677ed0

void gml_RoomCC_rmSqualorPlat2_3_Create(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_RoomCC_rmSqualorPlat2_1_Create";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 1;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01248);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

