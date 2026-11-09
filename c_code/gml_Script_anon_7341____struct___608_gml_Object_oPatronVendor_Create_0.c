// gml_Script_anon_7341____struct___608_gml_Object_oPatronVendor_Create_0 @ 0x140bd2100

undefined8 *
gml_Script_anon_7341____struct___608_gml_Object_oPatronVendor_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@7272@anon@6170@___struct___608@gml_Object_oPatronVendor_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_2c = 0;
  local_38 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x192;
  gml_Script_jb_stack_get(0,param_2,&local_38,0,0);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

