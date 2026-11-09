// gml_GlobalScript___InputVibrateClassCurve @ 0x1400e5610

undefined8 *
gml_GlobalScript___InputVibrateClassCurve(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script___Update@anon@414@__InputVibrateClassConstant@__InputVibrateClassConstant";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_5c = 0xffffff;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x14;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a02708);
  FUN_140e85f80(param_1,DAT_141a02be8,0x80000000,&local_68);
  local_4c = local_5c;
  local_50 = local_60;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) == 0) {
    local_58 = local_68;
  }
  else {
    FUN_1400419b0(&local_58,&local_68);
  }
  local_3c = 0;
  local_48 = 0x408f400000000000;
  FUN_140046500(&local_58,&local_48);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_1400460e0(uVar2,&local_58);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  local_28 = 0x15;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02708);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a041d8);
  iVar1 = FUN_140e851f0(uVar2,uVar3,DAT_141955260,1);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (iVar1 == -2 || -1 < iVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3ff0000000000000;
  }
  *param_3 = uVar2;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

