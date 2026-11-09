// gml_Script_anon_829_Offering_OFFERINGSINIT @ 0x1403be950

undefined8 *
gml_Script_anon_829_Offering_OFFERINGSINIT(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@414@Offering@OFFERINGSINIT";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0xc;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ea8);
  local_2c = 0;
  local_38 = &DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(uVar2,&local_38,DAT_141955260,0);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
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
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

