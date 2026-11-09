// gml_Object_oClotCage_Destroy_0 @ 0x1408a7f60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oClotCage_Destroy_0(longlong *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Object_oClotCage_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_5c = 0xffffff;
  local_68 = 0;
  local_28 = 2;
  FUN_140e98b30();
  local_28 = 4;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab48);
  if (puVar1 != &DAT_141dd7568) {
    local_58 = _DAT_141dd7568;
    uStack_54 = uRam0000000141dd756c;
    uStack_50 = uRam0000000141dd7570;
    uStack_4c = DAT_141dd7574;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  local_28 = 6;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x3ff0000000000000;
  local_28 = 7;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x3ff0000000000000;
  local_28 = 9;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_5c = 0;
  local_68 = 0;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_68);
  local_28 = 0xb;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a56d10);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_58,gml_Object_oClotCage_Step_0,param_1);
  if (&local_58 != puVar3) {
    local_48 = local_58;
    uStack_44 = uStack_54;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_48);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}

