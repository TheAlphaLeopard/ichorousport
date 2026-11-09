// gml_Script_anon_5770_gml_Object_oRogueLevelManager_Create_0 @ 0x140cbe820

undefined8 *
gml_Script_anon_5770_gml_Object_oRogueLevelManager_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script____struct___732@gml_Object_oRogueLevelManager_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0xe4;
  local_3c = 0xffffff;
  local_48 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de3250) {
    _Init_thread_header(&DAT_141de3250);
    if (DAT_141de3250 == -1) {
      DAT_141de3230 = FUN_140e63aa0(DAT_1419fa098);
      _Init_thread_footer(&DAT_141de3250);
    }
  }
  FUN_140e643a0(param_1,DAT_141de3230);
  local_28 = 0xe5;
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  local_3c = 0;
  local_48 = 0;
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_48);
  local_28 = 0xe6;
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  local_4c = 0;
  local_58 = 0;
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_58);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

