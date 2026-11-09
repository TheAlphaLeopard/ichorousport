// gml_Script_anon_2740_ThrowAnimQueue_ALTWEAPONSINIT @ 0x140214970

undefined8 *
gml_Script_anon_2740_ThrowAnimQueue_ALTWEAPONSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@1629@ThrowAnimQueue@ALTWEAPONSINIT";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x32;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0ab48);
  local_2c = DAT_141dcdd84;
  local_30 = DAT_141dcdd80;
  if ((1 << ((byte)DAT_141dcdd84 & 0x1f) & 0x46U) == 0) {
    local_38 = DAT_141dcdd78;
  }
  else {
    FUN_1400419b0(&local_38,&DAT_141dcdd78);
  }
  iVar1 = FUN_140e851f0(uVar2,&local_38,DAT_141955260,0);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (iVar1 == 0) {
    uVar2 = 0x3ff0000000000000;
  }
  else {
    uVar2 = 0;
  }
  *param_3 = uVar2;
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

