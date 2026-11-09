// gml_Script_anon_1732_anon_1619___InputVerbGroupSystem___InputVerbGroupSystem @ 0x1400e3f80

undefined8 *
gml_Script_anon_1732_anon_1619___InputVerbGroupSystem___InputVerbGroupSystem
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_GlobalScript___InputVerbGroupSystem";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_3c = 0xffffff;
  local_48 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 7;
  gml_Script___Update_anon_619___InputVibrateClassADSR___InputVibrateClassADSR
            (param_1,param_2,&local_48,0,0);
  local_18 = 8;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04018);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_58,
                gml_Script___Update_anon_619___InputVibrateClassADSR___InputVibrateClassADSR,param_1
               );
  if (&local_58 != puVar1) {
    local_38 = local_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

