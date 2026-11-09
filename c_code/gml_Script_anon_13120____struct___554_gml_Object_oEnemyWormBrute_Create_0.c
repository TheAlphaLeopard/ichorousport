// gml_Script_anon_13120____struct___554_gml_Object_oEnemyWormBrute_Create_0 @ 0x140aa2d60

undefined8 *
gml_Script_anon_13120____struct___554_gml_Object_oEnemyWormBrute_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined1 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  local_60 = "gml_Script_anon@12355@___struct___554@gml_Object_oEnemyWormBrute_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x221;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_98,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_9c = 0xffffff;
  local_a8 = (undefined1 *)0x0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x222;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_c8 = 0;
  FUN_140e87930(uVar2,DAT_141a0a848,0x80000000,&local_c8);
  local_58 = 0x223;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff338);
  FUN_140e87440(uVar1,DAT_1419ef008,0x80000000,&local_a8,(ulonglong)pcVar4 & 0xffffffffffffff00,0);
  local_78 = local_a8;
  uStack_70 = (undefined4 *)CONCAT44(uStack_9c,uStack_a0);
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_78);
  local_78 = local_98;
  if (puVar3 != local_88) {
    local_50 = *puVar3;
    uStack_4c = puVar3[1];
    uStack_48 = puVar3[2];
    uStack_44 = puVar3[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_50);
  }
  uStack_70 = local_88;
  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
            (param_1,param_2,&local_b8,2,&local_78);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

