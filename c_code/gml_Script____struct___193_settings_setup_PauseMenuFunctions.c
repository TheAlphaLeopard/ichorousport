// gml_Script____struct___193_settings_setup_PauseMenuFunctions @ 0x140424d50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___193_settings_setup_PauseMenuFunctions
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *local_res8;
  code *pcVar5;
  ulonglong in_stack_ffffffffffffff50;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  byte local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = 
  "gml_Script_anon@7070@___struct___194@___struct___193@settings_setup@PauseMenuFunctions";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x127;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_6c = 0xffffff;
  local_78 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0;
  local_a8 = 0;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x128;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a55440);
  FUN_140e87440(uVar2,DAT_141a551b0,0x80000000,&local_78,(ulonglong)pcVar5 & 0xffffffffffffff00,
                in_stack_ffffffffffffff50 & 0xffffffffffffff00);
  local_58 = _DAT_141dd2b78;
  uStack_54 = uRam0000000141dd2b7c;
  uStack_50 = uRam0000000141dd2b80;
  uStack_4c = DAT_141dd2b84;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_58);
  local_res8 = &local_68;
  uVar2 = FUN_140069500(uVar2);
  puVar3 = (undefined8 *)FUN_140e63610(uVar2,param_2,&local_a8,1,&local_78,&local_res8);
  if (puVar3 != &local_98) {
    local_58 = *(undefined4 *)puVar3;
    uStack_54 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_50 = *(undefined4 *)(puVar3 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_58);
  }
  local_38 = 0x129;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar2 = gml_Script_WindowSetMode(param_1,param_2,&local_a8,0,0);
  iVar1 = FUN_140e851f0(&local_98,uVar2,DAT_141955260,0);
  uVar4 = 0;
  if (iVar1 != 0) {
    local_38 = 0x12a;
    local_88 = 0;
    local_80 = 0;
    local_7c = 5;
    local_res8 = &local_98;
    gml_Script_WindowModeTick(param_1,param_2,&local_88,1,&local_res8);
    uVar4 = local_7c;
  }
  if ((1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

