// gml_Script_anon_15478____struct___457_gml_Object_oEnemyCageShambler_Create_0 @ 0x14096c3f0

undefined8 *
gml_Script_anon_15478____struct___457_gml_Object_oEnemyCageShambler_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@15384@___struct___456@gml_Object_oEnemyCageShambler_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_3c = 0xffffff;
  local_48 = 0;
  local_2c = 0;
  local_38 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x2b5;
  uVar1 = (**(code **)(*param_1 + 8))(0,DAT_141a11d08);
  FUN_140e63610(param_1,param_2,&local_38,0,uVar1,0);
  local_18 = 0x2b6;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57480);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  local_3c = 0;
  local_48 = 0x4056800000000000;
  FUN_140e87930(uVar1,DAT_141a1eed0,0x80000000,&local_48);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

