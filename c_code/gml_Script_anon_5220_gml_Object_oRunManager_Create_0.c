// gml_Script_anon_5220_gml_Object_oRunManager_Create_0 @ 0x140d47a50

undefined8 *
gml_Script_anon_5220_gml_Object_oRunManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@4965@gml_Object_oRunManager_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0xcf;
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419ffbe8);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  FUN_1400460e0(uVar1,param_5);
  FUN_140e60910(1);
  local_18 = 0xd0;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd948);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

