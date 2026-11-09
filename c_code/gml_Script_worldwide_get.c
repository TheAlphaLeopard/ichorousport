// gml_Script_worldwide_get @ 0x14064d260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_worldwide_get(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_GlobalScript_WORLDWIDE_INIT";
  local_38 = 0;
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  puVar1 = (undefined *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a00eb8);
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f63c8);
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a00e68);
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f63e8);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 1;
  if (puVar1 != &DAT_141dd4ff8) {
    local_68 = _DAT_141dd4ff8;
    uStack_64 = uRam0000000141dd4ffc;
    uStack_60 = uRam0000000141dd5000;
    uStack_5c = DAT_141dd5004;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  local_38 = 2;
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = &DAT_bff0000000000000;
  local_38 = 3;
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = &DAT_bff0000000000000;
  local_38 = 4;
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = &DAT_bff0000000000000;
  local_38 = 0xb;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00ed8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script____struct___269_worldwide_get_dialogue_WORLDWIDE_INIT,param_1);
  if (&local_68 != puVar5) {
    local_58 = local_68;
    uStack_54 = uStack_64;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_58);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_38 = 0x3a;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00ec8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script_worldwide_get_dialogue,param_1);
  if (&local_68 != puVar5) {
    local_58 = local_68;
    uStack_54 = uStack_64;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_58);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_38 = 0x41;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00ea8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script_wrap,param_1);
  if (&local_68 != puVar5) {
    local_58 = local_68;
    uStack_54 = uStack_64;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_58);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

