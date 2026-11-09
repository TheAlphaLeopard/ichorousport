// gml_Script_anon_1713_ThrowAnimQueue_ALTWEAPONSINIT @ 0x140214770

undefined8 *
gml_Script_anon_1713_ThrowAnimQueue_ALTWEAPONSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@1488@ThrowAnimQueue@ALTWEAPONSINIT";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  iVar4 = 0;
  *param_3 = 0;
  local_28 = 0x2d;
  bVar5 = false;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0ab48);
  local_3c = DAT_141dcdc74;
  local_40 = DAT_141dcdc70;
  if ((1 << ((byte)DAT_141dcdc74 & 0x1f) & 0x46U) == 0) {
    local_48 = DAT_141dcdc68;
  }
  else {
    FUN_1400419b0(&local_48,&DAT_141dcdc68);
  }
  iVar1 = FUN_140e851f0(uVar2,&local_48,DAT_141955260,0);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0ab48);
    local_3c = DAT_141dcdd84;
    local_40 = DAT_141dcdd80;
    if ((1 << ((byte)DAT_141dcdd84 & 0x1f) & 0x46U) == 0) {
      local_48 = DAT_141dcdd78;
    }
    else {
      FUN_1400419b0(&local_48,&DAT_141dcdd78);
    }
    iVar1 = FUN_140e851f0(uVar2,&local_48,DAT_141955260,0);
    if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    if (iVar1 != 0) goto LAB_140214912;
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a8e8);
  if ((*(int *)((longlong)plVar3 + 0xc) == 2) && (*plVar3 != 0)) {
    iVar4 = *(int *)(*plVar3 + 0x24);
  }
  bVar5 = iVar4 == 0;
LAB_140214912:
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (bVar5) {
    uVar2 = 0x3ff0000000000000;
  }
  else {
    uVar2 = 0;
  }
  *param_3 = uVar2;
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

