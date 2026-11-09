// gml_Script_anon_1523____struct___592_gml_Object_oParChest_Create_0 @ 0x140ba1980

undefined8 *
gml_Script_anon_1523____struct___592_gml_Object_oParChest_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong in_stack_ffffffffffffff48;
  ulonglong in_stack_ffffffffffffff50;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@488@___struct___592@gml_Object_oParChest_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x19;
  local_4c = 0;
  local_58 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_58);
  local_38 = 0x1a;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56b60);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') goto LAB_140ba1b64;
  local_38 = 0x1b;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  local_5c = 0xf;
  local_68 = 0x100000000000147;
  in_stack_ffffffffffffff50 = in_stack_ffffffffffffff50 & 0xffffffffffffff00;
  in_stack_ffffffffffffff48 = in_stack_ffffffffffffff48 & 0xffffffffffffff00;
  FUN_140e87440(&local_68,DAT_1419f5758,0x80000000,&local_a8,in_stack_ffffffffffffff48,
                in_stack_ffffffffffffff50);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e87440(&local_a8,DAT_1419f5768,0x80000000,&local_78,
                in_stack_ffffffffffffff48 & 0xffffffffffffff00,
                in_stack_ffffffffffffff50 & 0xffffffffffffff00);
  switch(local_9c) {
  default:
switchD_140ba1b11_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_a8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_a8 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140ba1b11_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_a8);
    uVar4 = FUN_140e87250(uVar3);
  }
  FUN_140e63610(uVar4,param_2,&local_98,0,&local_78,0);
LAB_140ba1b64:
  local_38 = 0x1e;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_88 = 0;
  FUN_140e87930(uVar4,DAT_1419f5a08,0x80000000,&local_88);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

