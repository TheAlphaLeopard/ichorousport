// gml_Script_ambience_level_set @ 0x14021c750

undefined8 * gml_Script_ambience_level_set(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_GlobalScript_AMBIANCEINIT";
  local_18 = 0;
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  puVar1 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0adf8);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 1;
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = &DAT_bff0000000000000;
  local_18 = 3;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab98);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,gml_GlobalScript_angle_in_range,param_1);
  if (&local_48 != puVar2) {
    local_38 = local_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_38);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  local_18 = 0x12;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ae68);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,gml_Script_angle_in_range,param_1);
  if (&local_48 != puVar2) {
    local_38 = local_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_38);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

