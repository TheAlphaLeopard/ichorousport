// gml_Object_oEnemyRotHive_Other_76 @ 0x140a55a40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oEnemyRotHive_Other_76(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *local_res8;
  code *pcVar2;
  ulonglong in_stack_ffffffffffffff90;
  undefined8 local_68;
  undefined4 local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oEnemyRotHive_Alarm_2";
  local_18 = 0;
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_58,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_5c = 0xffffff;
  local_68 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_18 = 2;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar1,DAT_141a55540,0x80000000,&local_68,(ulonglong)pcVar2 & 0xffffffffffffff00,
                in_stack_ffffffffffffff90 & 0xffffffffffffff00);
  local_38 = _DAT_141dd8e08;
  uStack_34 = uRam0000000141dd8e0c;
  uStack_30 = uRam0000000141dd8e10;
  uStack_2c = DAT_141dd8e14;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_38);
  local_res8 = local_58;
  uVar1 = FUN_140069500(uVar1);
  FUN_140e63610(uVar1,param_2,&local_48,1,&local_68,&local_res8);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_58,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

