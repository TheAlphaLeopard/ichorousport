// gml_Script_anon_42140_DefineTrinkets_TRINKETSINIT @ 0x14061a670

undefined8 *
gml_Script_anon_42140_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@42023@DefineTrinkets@TRINKETSINIT";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_3c = 0xffffff;
  local_48 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x5d6;
  local_2c = 0xf;
  local_38 = 0x1000000000000ee;
  FUN_140e87440(&local_38,DAT_141a1f170,0x80000000,&local_48,0,0);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  FUN_140162d40(&local_48,10);
  local_2c = 0xf;
  local_38 = 0x1000000000000ee;
  FUN_140e87930(&local_38,DAT_141a1f170,0x80000000,&local_48);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

