// gml_Script____struct___171_settings_setup_PauseMenuFunctions @ 0x14041f250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___171_settings_setup_PauseMenuFunctions
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 *local_res8;
  code *pcVar4;
  undefined8 *puVar5;
  ulonglong in_stack_ffffffffffffff60;
  ulonglong uVar6;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = 
  "gml_Script_anon@3986@___struct___172@___struct___171@settings_setup@PauseMenuFunctions";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0xa7;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_58,0x10,1,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef418);
  local_7c = 0xffffff;
  local_88 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0xa8;
  in_stack_ffffffffffffff60 = in_stack_ffffffffffffff60 & 0xffffffffffffff00;
  uVar6 = (ulonglong)pcVar4 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419ef058,0x80000000,&local_88,uVar6,in_stack_ffffffffffffff60);
  FUN_140e87440(&local_88,DAT_1419f4a98,0x80000000,&local_68,uVar6 & 0xffffffffffffff00,
                in_stack_ffffffffffffff60 & 0xffffffffffffff00);
  switch(local_7c) {
  default:
switchD_14041f379_caseD_1:
    uVar3 = 0;
    break;
  case 6:
    uVar3 = local_88;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_88 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_14041f379_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_88);
    uVar3 = FUN_140e87250(uVar2);
  }
  uVar6 = 0;
  puVar5 = &local_68;
  FUN_140e63610(uVar3,param_2,&local_98,0,puVar5,0);
  local_28 = 0xa9;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a55440);
  FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_78,(ulonglong)puVar5 & 0xffffffffffffff00,
                uVar6 & 0xffffffffffffff00);
  local_48 = _DAT_141dd2a98;
  uStack_44 = uRam0000000141dd2a9c;
  uStack_40 = uRam0000000141dd2aa0;
  uStack_3c = DAT_141dd2aa4;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_48);
  local_res8 = local_58;
  uVar3 = FUN_140069500(uVar3);
  FUN_140e63610(uVar3,param_2,&local_98,1,&local_78,&local_res8);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_58,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

