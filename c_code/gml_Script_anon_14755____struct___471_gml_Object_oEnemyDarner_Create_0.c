// gml_Script_anon_14755____struct___471_gml_Object_oEnemyDarner_Create_0 @ 0x1409ac950

undefined8 *
gml_Script_anon_14755____struct___471_gml_Object_oEnemyDarner_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@14687@___struct___469@gml_Object_oEnemyDarner_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_2c = 0;
  local_38 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x2c4;
  uVar1 = (**(code **)(*param_1 + 8))(0,DAT_141a11d08);
  FUN_140e63610(param_1,param_2,&local_38,0,uVar1,0);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

