// gml_Script____struct___531_gml_Object_oEnemySlime_Create_0 @ 0x140a758b0

undefined8 *
gml_Script____struct___531_gml_Object_oEnemySlime_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@1666@___struct___531@gml_Object_oEnemySlime_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x4a;
  local_2c = 0;
  local_38 = 0x3ff0000000000000;
  FUN_140e86fa0(0x3ff0000000000000,DAT_141a0a818,0x80000000,&local_38);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

