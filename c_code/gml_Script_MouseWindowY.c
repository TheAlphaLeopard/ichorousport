// gml_Script_MouseWindowY @ 0x1403bae50

undefined8 * gml_Script_MouseWindowY(longlong *param_1,undefined8 param_2,undefined8 *param_3)

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
  
  local_20 = "gml_GlobalScript_MousePos";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 1;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f55a8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,gml_Script_MouseCenterInWindow,param_1);
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
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  local_18 = 7;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5568);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,gml_Script_MouseGuiX,param_1);
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
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  local_18 = 0xd;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5588);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,gml_Script_MouseGuiY,param_1);
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
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  local_18 = 0x17;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5538);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,gml_Script_MouseRoomX,param_1);
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
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  local_18 = 0x1d;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f55b8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,gml_Script_MouseRoomY,param_1);
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
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  local_18 = 0x23;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5558);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,FUN_1403ba2f0,param_1);
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
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  local_18 = 0x2a;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5578);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,FUN_1403ba8a0,param_1);
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
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

