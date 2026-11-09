// gml_Script_anon_10041_gml_Object_oUIManager_Other_10 @ 0x140e1e3b0

void gml_Script_anon_10041_gml_Object_oUIManager_Other_10(longlong *param_1)

{
  undefined4 *puVar1;
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
  
  local_20 = "gml_Object_oUIManager_Other_10";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 4;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03498);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,gml_Script_anon_12642_gml_Object_oUIManager_Other_10,param_1);
  if (&local_48 != puVar1) {
    local_38 = local_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140e60910(1);
  local_18 = 0x146;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03448);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,gml_Object_oUIManager_Draw_64,param_1);
  if (&local_48 != puVar1) {
    local_38 = local_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140e60910(1);
  local_18 = 0x19c;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff648);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,gml_Object_oUnlockHurter_Create_0,param_1);
  if (&local_48 != puVar1) {
    local_38 = local_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

