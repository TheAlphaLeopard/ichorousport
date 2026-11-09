// gml_Script_anon_341_gml_Object_oBossUi_Create_0 @ 0x140847fb0

void gml_Script_anon_341_gml_Object_oBossUi_Create_0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oBossUi_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_3c = 0xffffff;
  local_48 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_18 = 4;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09ef8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script_anon_1786_gml_Object_oBossUi_Create_0,0);
  if (&local_68 != puVar1) {
    local_38 = local_68;
    uStack_34 = uStack_64;
    uStack_30 = uStack_60;
    uStack_2c = uStack_5c;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_18 = 0xd;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09f18);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_18 = 0xe;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09f28);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_18 = 0xf;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09f48);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_18 = 0x10;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08c38);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_18 = 0x12;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09ee8);
  FUN_140e609c0(param_1);
  puVar3 = (undefined4 *)FUN_140e8da20(&local_48,param_1,0);
  if (puVar3 != puVar1) {
    local_38 = *puVar3;
    uStack_34 = puVar3[1];
    uStack_30 = puVar3[2];
    uStack_2c = puVar3[3];
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  FUN_140e60910(1);
  local_18 = 0x13;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09eb8);
  FUN_140e609c0(param_1);
  puVar3 = (undefined4 *)FUN_140e8da20(&local_58,param_1,0);
  if (puVar3 != puVar1) {
    local_38 = *puVar3;
    uStack_34 = puVar3[1];
    uStack_30 = puVar3[2];
    uStack_2c = puVar3[3];
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  FUN_140e60910(1);
  local_18 = 0x16;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09f38);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Object_oBossUi_Step_0,param_1);
  if (&local_68 != puVar1) {
    local_38 = local_68;
    uStack_34 = uStack_64;
    uStack_30 = uStack_60;
    uStack_2c = uStack_5c;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_18 = 0x4d;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08c58);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Object_oBossUi_Draw_64,param_1);
  if (&local_68 != puVar1) {
    local_38 = local_68;
    uStack_34 = uStack_64;
    uStack_30 = uStack_60;
    uStack_2c = uStack_5c;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

