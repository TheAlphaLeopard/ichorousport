// gml_Script____struct___292____struct___290_gml_Object_obj_test_Create_0 @ 0x14068c5b0

undefined8 *
gml_Script____struct___292____struct___290_gml_Object_obj_test_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script____struct___291@___struct___290@gml_Object_obj_test_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x53;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de10c0) {
    _Init_thread_header(&DAT_141de10c0);
    if (DAT_141de10c0 == -1) {
      DAT_141de1158 = FUN_140e63aa0(DAT_141a02368);
      _Init_thread_footer(&DAT_141de10c0);
    }
  }
  FUN_140e643a0(param_1,DAT_141de1158);
  local_18 = 0x54;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44c08);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x416fe00000000000;
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

