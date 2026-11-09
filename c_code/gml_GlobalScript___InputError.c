// gml_GlobalScript___InputError @ 0x140087ad0

undefined8 *
gml_GlobalScript___InputError(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = 
  "gml_Script____struct___12@__InputCursorTransformCoordinate@__InputCursorTransformCoordinate";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0xe;
  local_3c = 0xffffff;
  local_48 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc5a4) {
    _Init_thread_header(&DAT_141ddc5a4);
    if (DAT_141ddc5a4 == -1) {
      DAT_141ddc5b0 = FUN_140e63aa0(DAT_141a01088);
      _Init_thread_footer(&DAT_141ddc5a4);
    }
  }
  FUN_140e643a0(param_1,DAT_141ddc5b0);
  local_28 = 0xf;
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  local_3c = 0;
  local_48 = 0;
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_48);
  local_28 = 0x10;
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

