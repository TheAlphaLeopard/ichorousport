// gml_Script_anon_2842____struct___452_gml_Object_oEnemyCageShambler_Create_0 @ 0x1409564d0

undefined8 *
gml_Script_anon_2842____struct___452_gml_Object_oEnemyCageShambler_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *local_res8;
  code *pcVar2;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [12];
  byte local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@2760@___struct___450@gml_Object_oEnemyCageShambler_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x78;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_48,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_4c = 0xffffff;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x79;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar1,DAT_141a06528,0x80000000,&local_58,(ulonglong)pcVar2 & 0xffffffffffffff00,0);
  local_38 = (undefined4)local_58;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  if ((1 << (local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_48);
  }
  FUN_140041b80(local_48,&local_38);
  local_res8 = local_48;
  FUN_140edd0e0(param_1,param_2,1,&local_res8);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(local_48,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

