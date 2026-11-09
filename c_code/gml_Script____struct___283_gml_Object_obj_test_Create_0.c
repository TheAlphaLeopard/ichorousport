// gml_Script____struct___283_gml_Object_obj_test_Create_0 @ 0x14068b870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___283_gml_Object_obj_test_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script____struct___288@___struct___283@gml_Object_obj_test_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x47;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de1060) {
    _Init_thread_header(&DAT_141de1060);
    if (DAT_141de1060 == -1) {
      DAT_141de1088 = FUN_140e63aa0(DAT_141a02388);
      _Init_thread_footer(&DAT_141de1060);
    }
  }
  FUN_140e643a0(param_1,DAT_141de1088);
  local_18 = 0x48;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a46588);
  if (puVar1 != &DAT_141dd52b8) {
    local_38 = _DAT_141dd52b8;
    uStack_34 = uRam0000000141dd52bc;
    uStack_30 = uRam0000000141dd52c0;
    uStack_2c = DAT_141dd52c4;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x49;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44c08);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x4160101000000000;
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

