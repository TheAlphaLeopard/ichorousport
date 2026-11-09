// gml_Script____struct___72_BM_DEFAULT_BUTTON_SETTINGS_BYTEMAP_config @ 0x14023e360

undefined8 *
gml_Script____struct___72_BM_DEFAULT_BUTTON_SETTINGS_BYTEMAP_config
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script____struct___70@BM_DEFAULT_BUTTON_SETTINGS@BYTEMAP_config";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0xaa;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddc80) {
    _Init_thread_header(&DAT_141dddc80);
    if (DAT_141dddc80 == -1) {
      DAT_141dddc08 = FUN_140e63aa0(DAT_141a44e68);
      _Init_thread_footer(&DAT_141dddc80);
    }
  }
  FUN_140e643a0(param_1,DAT_141dddc08);
  local_18 = 0xac;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44c08);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4160101000000000;
  local_18 = 0xad;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a450f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_18 = 0xae;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a45668);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

