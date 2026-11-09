// gml_Script_anon_2347____struct___447_gml_Object_oEnemyCageCharger_Create_0 @ 0x14094a700

undefined8 *
gml_Script_anon_2347____struct___447_gml_Object_oEnemyCageCharger_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@1865@gml_Object_oEnemyCageCharger_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x5b;
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff3b8);
  FUN_140046040(uVar1);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

