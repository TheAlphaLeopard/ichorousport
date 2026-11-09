// gml_Script_anon_46_gml_Object_oCrab_Other_76 @ 0x1408ce2b0

void gml_Script_anon_46_gml_Object_oCrab_Other_76(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oCrab_Step_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_2c = 0xffffff;
  local_38 = 0;
  local_18 = 3;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_38,0,uVar1,0);
  local_18 = 5;
  FUN_140e98b30(param_1,param_2);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

