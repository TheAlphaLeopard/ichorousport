// gml_Script____struct___167_settings_setup_PauseMenuFunctions @ 0x14041e410

undefined8 *
gml_Script____struct___167_settings_setup_PauseMenuFunctions
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong in_stack_ffffffffffffff58;
  ulonglong in_stack_ffffffffffffff60;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = 
  "gml_Script_anon@3529@___struct___168@___struct___167@settings_setup@PauseMenuFunctions";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x8e;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef418);
  local_8c = 0xffffff;
  local_98 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f64e8);
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef358);
  local_6c = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x8f;
  in_stack_ffffffffffffff60 = in_stack_ffffffffffffff60 & 0xffffffffffffff00;
  in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419ef058,0x80000000,&local_98,in_stack_ffffffffffffff58,
                in_stack_ffffffffffffff60);
  FUN_140e87440(&local_98,DAT_1419f4a98,0x80000000,&local_88,
                in_stack_ffffffffffffff58 & 0xffffffffffffff00,
                in_stack_ffffffffffffff60 & 0xffffffffffffff00);
  switch(local_8c) {
  default:
switchD_14041e53e_caseD_1:
    uVar3 = 0;
    break;
  case 6:
    uVar3 = local_98;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_98 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_14041e53e_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_98);
    uVar3 = FUN_140e87250(uVar2);
  }
  FUN_140e63610(uVar3,param_2,&local_78,0,&local_88,0);
  local_38 = 0x90;
  uStack_5c = 0xd;
  local_68 = 0;
  if (&local_68 != puVar4) {
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = uStack_60;
    uStack_4c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_58);
  }
  local_38 = 0x91;
  uStack_5c = 0xd;
  local_68 = 0x3ff0000000000000;
  if (&local_68 != puVar5) {
    local_58 = 0;
    uStack_54 = 0x3ff00000;
    uStack_50 = uStack_60;
    uStack_4c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_58);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

