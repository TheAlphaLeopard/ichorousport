// gml_Script_anon_116_gml_Object_oChunkProperties_Create_0 @ 0x1408a6ed0

void gml_Script_anon_116_gml_Object_oChunkProperties_Create_0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
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
  
  local_20 = "gml_Object_oChunkProperties_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_3c = 0xffffff;
  local_48 = 0;
  local_18 = 1;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a56cb0);
  FUN_140e609c0(param_1);
  puVar2 = (undefined4 *)FUN_140e8da20(&local_48,param_1,0);
  if (puVar2 != puVar1) {
    local_58 = *puVar2;
    uStack_54 = puVar2[1];
    uStack_50 = puVar2[2];
    uStack_4c = puVar2[3];
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  local_18 = 3;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00f58);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_58,gml_Object_oClotBones_Create_0,param_1);
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
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140e60910(1);
  local_18 = 8;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a012f8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_58,gml_Object_oClotBones_Step_0,param_1);
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
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

