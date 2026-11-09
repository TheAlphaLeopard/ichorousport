// gml_Script_anon_418_anon_198_gml_Object_oBossKillText_Create_0 @ 0x14079fca0

void gml_Script_anon_418_anon_198_gml_Object_oBossKillText_Create_0
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oBossHoarder_CleanUp_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_2c = 0xffffff;
  local_38 = 0;
  local_18 = 3;
  FUN_140e98b30();
  local_18 = 5;
  local_38 = 0;
  local_30 = 0;
  local_2c = 5;
  gml_Script_truestate_step(param_1,param_2,&local_38,0,0);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

