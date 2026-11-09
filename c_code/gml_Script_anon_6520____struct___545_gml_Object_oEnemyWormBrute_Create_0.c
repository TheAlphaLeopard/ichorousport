// gml_Script_anon_6520____struct___545_gml_Object_oEnemyWormBrute_Create_0 @ 0x140a96ba0

undefined8 *
gml_Script_anon_6520____struct___545_gml_Object_oEnemyWormBrute_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_68;
  undefined4 local_5c;
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
  
  local_30 = "gml_Script____struct___544@gml_Object_oEnemyWormBrute_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0xf6;
  local_5c = 0xffffff;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de2650) {
    _Init_thread_header(&DAT_141de2650);
    if (DAT_141de2650 == -1) {
      DAT_141de2618 = FUN_140e63aa0(DAT_1419f23a8);
      _Init_thread_footer(&DAT_141de2650);
    }
  }
  FUN_140e643a0(param_1,DAT_141de2618);
  local_28 = 0xf7;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58110);
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
  local_28 = 0xf8;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f21d8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3fbeb851eb851eb8;
  local_28 = 0xf9;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_5c = 0;
  local_68 = 0x3fbeb851eb851eb8;
  FUN_140e86fa0(param_1,DAT_1419f57f8,0x80000000,&local_68);
  local_28 = 0xfa;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f0888);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff6666666666666;
  local_28 = 0xfb;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

