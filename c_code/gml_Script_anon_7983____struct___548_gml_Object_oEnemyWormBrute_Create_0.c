// gml_Script_anon_7983____struct___548_gml_Object_oEnemyWormBrute_Create_0 @ 0x140a99c40

undefined8 *
gml_Script_anon_7983____struct___548_gml_Object_oEnemyWormBrute_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_58;
  undefined4 local_4c;
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
  
  local_20 = "gml_Script_anon@7649@___struct___548@gml_Object_oEnemyWormBrute_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_4c = 0xffffff;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x14b;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f2498);
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_3c = 0xd;
  local_38 = 0;
  uStack_34 = 0x3ff00000;
  uStack_30 = uStack_40;
  uStack_2c = 0xd;
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140041b80(&local_58,&local_38);
  FUN_140e87930(uVar1,DAT_141a58110,0x80000000,&local_58);
  local_18 = 0x14c;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57420);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

