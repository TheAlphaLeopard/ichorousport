// gml_Script_anon_19471_gml_Object_oEntity_Create_0 @ 0x140ac1b60

undefined8 *
gml_Script_anon_19471_gml_Object_oEntity_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@19471@gml_Object_oEntity_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x359;
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x359;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  local_2c = 0;
  local_38 = 0x3fb999999999999a;
  FUN_140042560(&local_38,uVar1);
  FUN_1400460e0(uVar2,&local_38);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

