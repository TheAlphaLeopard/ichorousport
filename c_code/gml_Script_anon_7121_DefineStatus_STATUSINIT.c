// gml_Script_anon_7121_DefineStatus_STATUSINIT @ 0x1405c7db0

undefined8 *
gml_Script_anon_7121_DefineStatus_STATUSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@6891@DefineStatus@STATUSINIT";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x13d;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff0f8);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_38 = (undefined4)DAT_1419df7b0;
    uStack_34 = DAT_1419df7b0._4_4_;
    uStack_30 = DAT_1419df7b8;
    uStack_2c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

