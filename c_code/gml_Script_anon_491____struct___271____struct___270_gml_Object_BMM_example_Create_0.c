// gml_Script_anon_491____struct___271____struct___270_gml_Object_BMM_example_Create_0 @ 0x140678ee0

void gml_Script_anon_491____struct___271____struct___270_gml_Object_BMM_example_Create_0
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object___InputUpdateController_Other_3";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_2c = 0xffffff;
  local_38 = 0;
  local_18 = 1;
  FUN_1400cf5e0(param_1,param_2,&local_38,0,0);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

