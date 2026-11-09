// gml_Script___InputGetKeyboardOutput @ 0x14009b390

undefined8 *
gml_Script___InputGetKeyboardOutput(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script___InputGetKeyboardActive";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 7;
  local_38 = 0;
  local_30 = 0;
  local_2c = 5;
  uVar2 = gml_Script___InputGetMouseActive(param_1,param_2,&local_38,0,0);
  iVar1 = FUN_140e851f0(uVar2,&DAT_1419df7b0,DAT_141955260,0);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3ff0000000000000;
  }
  *param_3 = uVar2;
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

