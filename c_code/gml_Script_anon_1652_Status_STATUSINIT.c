// gml_Script_anon_1652_Status_STATUSINIT @ 0x1405c1360

longlong *
gml_Script_anon_1652_Status_STATUSINIT(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@1534@Status@STATUSINIT";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x51;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5838);
  local_3c = 0;
  uVar3 = 0;
  local_48 = 0;
  iVar1 = FUN_140e851f0(uVar2,&local_48,DAT_141955260,1);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (iVar1 != -2 && iVar1 < 1) {
    uVar3 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar3 << 0x20;
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

