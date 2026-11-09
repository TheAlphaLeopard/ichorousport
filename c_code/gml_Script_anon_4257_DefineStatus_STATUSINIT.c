// gml_Script_anon_4257_DefineStatus_STATUSINIT @ 0x1405c3060

undefined8 *
gml_Script_anon_4257_DefineStatus_STATUSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@2812@DefineStatus@STATUSINIT";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x91;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5fc8);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5838);
  FUN_140e609c0(param_1);
  if (puVar1 != puVar2) {
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_38);
  }
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

