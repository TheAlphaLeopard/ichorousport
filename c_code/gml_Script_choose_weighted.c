// gml_Script_choose_weighted @ 0x14025da00

longlong *
gml_Script_choose_weighted
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
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
  
  local_30 = "gml_Script_Chance";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 2;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_58) goto LAB_14025da9f;
  }
  local_48 = *(undefined4 *)param_5;
  uStack_44 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_40 = *(undefined4 *)(param_5 + 1);
  uStack_3c = *(undefined4 *)((longlong)param_5 + 0xc);
  FUN_140041b80(&local_58,&local_48);
LAB_14025da9f:
  local_28 = 3;
  uVar1 = FUN_140e78f40(0,100);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_5c = 0;
  local_28 = 5;
  local_68 = uVar1;
  iVar2 = FUN_140e851f0(&local_68,&local_58,DAT_141955260,1);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (iVar2 == -2 || -1 < iVar2) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar3 << 0x20;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

