// gml_Script_savedata_save @ 0x1402e2ab0

undefined8 *
gml_Script_savedata_save
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_savedata_set";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 8;
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c20);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 10;
  if (param_4 < 2) {
    puVar2 = &DAT_1419df7b0;
    if (param_4 < 1) {
      param_5 = &DAT_1419df7b0;
    }
    else {
      param_5 = (undefined8 *)*param_5;
    }
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
    param_5 = (undefined8 *)*param_5;
  }
  FUN_140e98ef0(param_1,param_2,uVar1,param_5,puVar2);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

