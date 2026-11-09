// gml_Object_oFlungObject_Create_0 @ 0x140ada120

undefined8 *
gml_Object_oFlungObject_Create_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script____struct___572@gml_Object_oFlameExplosion_Step_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x29;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de2778) {
    _Init_thread_header(&DAT_141de2778);
    if (DAT_141de2778 == -1) {
      DAT_141de2780 = FUN_140e63aa0(DAT_1419f2cb8);
      _Init_thread_footer(&DAT_141de2778);
    }
  }
  FUN_140e643a0(param_1,DAT_141de2780);
  local_18 = 0x2b;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5da8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x402e000000000000;
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

