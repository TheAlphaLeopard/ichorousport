// gml_Script_InputDeviceSetRebinding @ 0x1403250b0

longlong *
gml_Script_InputDeviceSetRebinding
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_InputDeviceIsGamepad";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 10;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_3c = 0;
  uVar2 = 0;
  local_48 = 0;
  uVar1 = FUN_140e851f0(param_5,&local_48,DAT_141955260,1);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (uVar1 < 0x80000000) {
    uVar2 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar2 << 0x20;
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

