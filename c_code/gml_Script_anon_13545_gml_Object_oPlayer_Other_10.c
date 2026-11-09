// gml_Script_anon_13545_gml_Object_oPlayer_Other_10 @ 0x140c73d40

longlong *
gml_Script_anon_13545_gml_Object_oPlayer_Other_10
          (longlong *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@13197@gml_Object_oPlayer_Other_10";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_4c = 0xffffff;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x239;
  bVar4 = false;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ef298);
  FUN_140e87440(uVar3,DAT_1419ef278,0x80000000,&local_58,0,0);
  cVar1 = FUN_140e491e0(&local_58);
  uVar5 = 0;
  if (cVar1 != '\0') {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ef238);
    local_3c = 0;
    local_48 = 0;
    iVar2 = FUN_140e851f0(uVar3,&local_48,DAT_141955260,1);
    bVar4 = iVar2 != -2 && iVar2 < 1;
    if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (bVar4) {
    uVar5 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar5 << 0x20;
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

