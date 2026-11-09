// gml_Script_anon_11716____struct___553_gml_Object_oEnemyWormBrute_Create_0 @ 0x140aa15b0

undefined8 *
gml_Script_anon_11716____struct___553_gml_Object_oEnemyWormBrute_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

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
  
  local_20 = "gml_Script____struct___552@gml_Object_oEnemyWormBrute_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x1d4;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de267c) {
    _Init_thread_header(&DAT_141de267c);
    if (DAT_141de267c == -1) {
      DAT_141de2610 = FUN_140e63aa0(DAT_1419f2558);
      _Init_thread_footer(&DAT_141de267c);
    }
  }
  FUN_140e643a0(param_1,DAT_141de2610);
  local_18 = 0x1d6;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcb58);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,gml_Script_anon_11532____struct___552_gml_Object_oEnemyWormBrute_Create_0,
                param_1);
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
  local_18 = 0x1db;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a968);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,gml_Script____struct___552_gml_Object_oEnemyWormBrute_Create_0,param_1);
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
  local_18 = 0x1f0;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05028);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,gml_Script_anon_11601____struct___553_gml_Object_oEnemyWormBrute_Create_0,
                param_1);
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
  return param_3;
}

