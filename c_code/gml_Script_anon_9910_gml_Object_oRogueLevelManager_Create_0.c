// gml_Script_anon_9910_gml_Object_oRogueLevelManager_Create_0 @ 0x140cc5a50

undefined8 *
gml_Script_anon_9910_gml_Object_oRogueLevelManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script____struct___737@anon@9910@gml_Object_oRogueLevelManager_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x19a;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de3330) {
    _Init_thread_header(&DAT_141de3330);
    if (DAT_141de3330 == -1) {
      DAT_141de3240 = FUN_140e63aa0(DAT_1419fa048);
      _Init_thread_footer(&DAT_141de3330);
    }
  }
  FUN_140e643a0(param_1,DAT_141de3240);
  local_28 = 0x19b;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe318);
  uStack_4c = 0xd;
  local_58 = 0;
  if (&local_58 != puVar1) {
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = uStack_50;
    uStack_3c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  local_28 = 0x19c;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe1f8);
  uStack_4c = 0xd;
  local_58 = 0;
  if (&local_58 != puVar1) {
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = uStack_50;
    uStack_3c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  local_28 = 0x19d;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe218);
  uStack_4c = 0xd;
  local_58 = 0;
  if (&local_58 != puVar1) {
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = uStack_50;
    uStack_3c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  local_28 = 0x19e;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe808);
  uStack_4c = 0xd;
  local_58 = 0;
  if (&local_58 != puVar1) {
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = uStack_50;
    uStack_3c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

