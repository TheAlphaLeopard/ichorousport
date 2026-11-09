// gml_Object_oWallFlesh_PreCreate_0 @ 0x140e2be70

undefined8 *
gml_Object_oWallFlesh_PreCreate_0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@499@gml_Object_oWallDistort_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0xf;
  FUN_140ec9dc0();
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

