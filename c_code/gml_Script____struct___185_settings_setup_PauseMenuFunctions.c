// gml_Script____struct___185_settings_setup_PauseMenuFunctions @ 0x1404229f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___185_settings_setup_PauseMenuFunctions
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *local_res8;
  code *pcVar5;
  ulonglong in_stack_ffffffffffffff50;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = 
  "gml_Script_anon@5751@___struct___186@___struct___185@settings_setup@PauseMenuFunctions";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0xf6;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57e60);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0xf7;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a55440);
  FUN_140e87440(uVar3,DAT_141a551b0,0x80000000,&local_88,(ulonglong)pcVar5 & 0xffffffffffffff00,
                in_stack_ffffffffffffff50 & 0xffffffffffffff00);
  local_98 = CONCAT44(uRam0000000141dd2bcc,_DAT_141dd2bc8);
  uStack_90 = uRam0000000141dd2bd0;
  uStack_8c = DAT_141dd2bd4;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_98);
  local_res8 = local_78;
  uVar3 = FUN_140069500(uVar3);
  puVar4 = (undefined8 *)FUN_140e63610(uVar3,param_2,&local_68,1,&local_88,&local_res8);
  uStack_8c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_90 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) == 0) {
    local_98 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_98,puVar4);
  }
  uVar1 = uStack_8c;
  local_58 = (undefined4)local_98;
  uStack_54 = local_98._4_4_;
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_58);
  if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e87930(uVar2,DAT_1419ef5e8,0x80000000,&local_a8);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

