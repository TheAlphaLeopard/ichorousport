// gml_Script_anon_11542____struct___404_gml_Object_oBossThePest_Create_0 @ 0x14081ec30

undefined8 *
gml_Script_anon_11542____struct___404_gml_Object_oBossThePest_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@11455@___struct___403@gml_Object_oBossThePest_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_2c = 0xffffff;
  local_38 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x29e;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57560);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  local_2c = 0;
  local_38 = 0x3ff0000000000000;
  FUN_140e87930(uVar1,DAT_141a0a748,0x80000000,&local_38);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

