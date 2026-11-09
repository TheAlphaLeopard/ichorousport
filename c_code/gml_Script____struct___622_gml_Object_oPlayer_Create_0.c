// gml_Script____struct___622_gml_Object_oPlayer_Create_0 @ 0x140bec1d0

undefined8 *
gml_Script____struct___622_gml_Object_oPlayer_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script____struct___620@gml_Object_oPlayer_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0xaa;
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de2bd4) &&
     (_Init_thread_header(&DAT_141de2bd4), DAT_141de2bd4 == -1)) {
    DAT_141de2da0 = FUN_140e63aa0(DAT_1419f8908);
    _Init_thread_footer(&DAT_141de2bd4);
  }
  FUN_140e643a0(param_1,DAT_141de2da0);
  local_28 = 0xaa;
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  local_4c = 0;
  local_58 = 0x4008000000000000;
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_58);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_68) goto LAB_140bec333;
  }
  local_48 = *(undefined4 *)param_5;
  uStack_44 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_40 = *(undefined4 *)(param_5 + 1);
  uStack_3c = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_48);
LAB_140bec333:
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_68);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

