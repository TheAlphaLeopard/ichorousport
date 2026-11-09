// gml_Script____struct___300____struct___298_gml_Object_obj_test_Create_0 @ 0x14068e190

undefined8 *
gml_Script____struct___300____struct___298_gml_Object_obj_test_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script____struct___299@___struct___298@gml_Object_obj_test_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x6f;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de110c) {
    _Init_thread_header(&DAT_141de110c);
    if (DAT_141de110c == -1) {
      DAT_141de10b8 = FUN_140e63aa0(DAT_141a02178);
      _Init_thread_footer(&DAT_141de110c);
    }
  }
  FUN_140e643a0(param_1,DAT_141de10b8);
  local_18 = 0x70;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44c08);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x416fe00000000000;
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

