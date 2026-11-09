// gml_Script_anon_2617_gml_Object_oEnemyMoistMarauder_Create_0 @ 0x140a026b0

undefined8 *
gml_Script_anon_2617_gml_Object_oEnemyMoistMarauder_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@641@gml_Object_oEnemyMoistMarauder_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x1f;
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff3b8);
  FUN_140046040(uVar1);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

