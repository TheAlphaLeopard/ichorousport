// gml_Script____struct___179_settings_setup_PauseMenuFunctions @ 0x140421530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___179_settings_setup_PauseMenuFunctions
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *local_res8;
  code *pcVar4;
  ulonglong in_stack_ffffffffffffff60;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = 
  "gml_Script_anon@5124@___struct___180@___struct___179@settings_setup@PauseMenuFunctions";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0xdb;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_6c = 0xffffff;
  local_78 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0xdc;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a55440);
  FUN_140e87440(uVar2,DAT_141a551b0,0x80000000,&local_78,(ulonglong)pcVar4 & 0xffffffffffffff00,
                in_stack_ffffffffffffff60 & 0xffffffffffffff00);
  local_88 = CONCAT44(uRam0000000141dd2cdc,_DAT_141dd2cd8);
  uStack_80 = uRam0000000141dd2ce0;
  uStack_7c = DAT_141dd2ce4;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_88);
  local_res8 = local_68;
  uVar2 = FUN_140069500(uVar2);
  puVar3 = (undefined8 *)FUN_140e63610(uVar2,param_2,&local_58,1,&local_78,&local_res8);
  uStack_7c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_80 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) == 0) {
    local_88 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_88,puVar3);
  }
  uVar1 = uStack_7c;
  local_48 = (undefined4)local_88;
  uStack_44 = local_88._4_4_;
  uStack_40 = uStack_80;
  uStack_3c = uStack_7c;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_48);
  if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  uStack_7c = 0xf;
  local_88 = 0x100000000000058;
  FUN_140e87930(&local_88,DAT_1419ef4f8,0x80000000,&local_98);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

