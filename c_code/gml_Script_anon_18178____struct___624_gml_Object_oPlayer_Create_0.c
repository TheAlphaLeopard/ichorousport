// gml_Script_anon_18178____struct___624_gml_Object_oPlayer_Create_0 @ 0x140bec560

undefined8 *
gml_Script_anon_18178____struct___624_gml_Object_oPlayer_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script____struct___622@gml_Object_oPlayer_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0xaf;
  local_2c = 0xffffff;
  local_38 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de2d28) {
    _Init_thread_header(&DAT_141de2d28);
    if (DAT_141de2d28 == -1) {
      DAT_141de2fb8 = FUN_140e63aa0(DAT_1419f7fd8);
      _Init_thread_footer(&DAT_141de2d28);
    }
  }
  FUN_140e643a0(param_1,DAT_141de2fb8);
  local_18 = 0xaf;
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  local_2c = 0;
  local_38 = 0;
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_38);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  local_3c = 0;
  local_48 = 0x4000000000000000;
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_48);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

