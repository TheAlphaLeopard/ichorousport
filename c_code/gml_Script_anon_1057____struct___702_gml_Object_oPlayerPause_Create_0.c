// gml_Script_anon_1057____struct___702_gml_Object_oPlayerPause_Create_0 @ 0x140c87400

undefined8 *
gml_Script_anon_1057____struct___702_gml_Object_oPlayerPause_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@626@___struct___702@gml_Object_oPlayerPause_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x1e;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f8f18);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 10;
  *puVar1 = 1;
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

