// gml_Script_anon_18250_DefineBuffs_OFFERINGSINIT @ 0x1403d7460

undefined8 *
gml_Script_anon_18250_DefineBuffs_OFFERINGSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script____struct___148@anon@18082@DefineBuffs@OFFERINGSINIT";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x2ee;
  local_3c = 0xffffff;
  local_48 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddeb34) {
    _Init_thread_header(&DAT_141ddeb34);
    if (DAT_141ddeb34 == -1) {
      DAT_141ddeac8 = FUN_140e63aa0(DAT_1419f57a8);
      _Init_thread_footer(&DAT_141ddeb34);
    }
  }
  FUN_140e643a0(param_1,DAT_141ddeac8);
  local_28 = 0x2ee;
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  local_3c = 0;
  local_48 = 0;
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_48);
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

