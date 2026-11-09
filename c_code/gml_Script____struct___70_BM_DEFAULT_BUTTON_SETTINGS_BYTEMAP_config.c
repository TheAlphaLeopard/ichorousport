// gml_Script____struct___70_BM_DEFAULT_BUTTON_SETTINGS_BYTEMAP_config @ 0x14023df70

undefined8 *
gml_Script____struct___70_BM_DEFAULT_BUTTON_SETTINGS_BYTEMAP_config
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script____struct___68@BM_DEFAULT_BUTTON_SETTINGS@BYTEMAP_config";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x99;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddc68) {
    _Init_thread_header(&DAT_141dddc68);
    if (DAT_141dddc68 == -1) {
      DAT_141dddc58 = FUN_140e63aa0(DAT_141a45418);
      _Init_thread_footer(&DAT_141dddc68);
    }
  }
  FUN_140e643a0(param_1,DAT_141dddc58);
  local_28 = 0x9b;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44c08);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x416fffffe0000000;
  local_28 = 0x9c;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a45158);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  if (param_5 != puVar1) {
    local_48 = *(undefined4 *)param_5;
    uStack_44 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_40 = *(undefined4 *)(param_5 + 1);
    uStack_3c = *(undefined4 *)((longlong)param_5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  FUN_140e60910(1);
  local_28 = 0x9e;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a45718);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_28 = 0x9f;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44898);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_28 = 0xa0;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44f78);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

