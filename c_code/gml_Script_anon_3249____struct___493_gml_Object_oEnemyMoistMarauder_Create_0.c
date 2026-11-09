// gml_Script_anon_3249____struct___493_gml_Object_oEnemyMoistMarauder_Create_0 @ 0x140a06250

undefined8 *
gml_Script_anon_3249____struct___493_gml_Object_oEnemyMoistMarauder_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_68;
  undefined4 local_60;
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
  
  local_30 = "gml_Script_anon@2987@gml_Object_oEnemyMoistMarauder_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x84;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(0,DAT_141a57420);
  uVar3 = 0xffffff;
  if (puVar1 != &local_58) {
    local_48 = *(undefined4 *)puVar1;
    uStack_44 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_40 = *(undefined4 *)(puVar1 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar1 + 0xc);
    FUN_140041b80(&local_58,&local_48);
    uVar3 = uStack_4c;
  }
  local_28 = 0x85;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a11d08);
  FUN_140e63610(param_1,param_2,&local_68,0,uVar2,0);
  local_28 = 0x86;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57420);
  FUN_140e609c0(param_1);
  if (&local_58 != puVar1) {
    local_48 = (undefined4)local_58;
    uStack_44 = local_58._4_4_;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

