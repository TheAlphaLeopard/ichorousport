// gml_Object_oFreeDrawing_Create_0 @ 0x140aec7c0

void gml_Object_oFreeDrawing_Create_0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Object_oFoulSnot_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_3c = 0xffffff;
  local_48 = 0;
  local_28 = 3;
  FUN_140e98b30();
  local_28 = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2b28);
  uVar2 = FUN_140e79480(0x408f400000000000);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = uVar2;
  local_28 = 7;
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  local_3c = 0;
  local_48 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_48);
  local_28 = 8;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff228);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_28 = 10;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_28 = 0xb;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}

