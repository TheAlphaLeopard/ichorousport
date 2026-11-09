// gml_Script_anon_15694_DefineTrinkets_TRINKETSINIT @ 0x1405f2c40

undefined8 *
gml_Script_anon_15694_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@15467@DefineTrinkets@TRINKETSINIT";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_2c = 0xffffff;
  local_38 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x26f;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  local_2c = 0;
  local_38 = 0;
  FUN_140e87930(uVar1,DAT_1419ffba8,0x80000000,&local_38);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

