// gml_Object_oCageRemains_Create_0 @ 0x140882220

undefined8 *
gml_Object_oCageRemains_Create_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong in_stack_ffffffffffffff98;
  ulonglong in_stack_ffffffffffffffa0;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@286@gml_Object_oCageArm_Other_76";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_4c = 0xffffff;
  local_58 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_2c = 0;
  local_38 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x10;
  uVar3 = (**(code **)(*param_1 + 8))(0,DAT_141a1f0d0);
  in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa0 & 0xffffffffffffff00;
  in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_141a13c38,0x80000000,&local_58,in_stack_ffffffffffffff98,
                in_stack_ffffffffffffffa0);
  FUN_140e87440(&local_58,DAT_1419f4a98,0x80000000,&local_48,
                in_stack_ffffffffffffff98 & 0xffffffffffffff00,
                in_stack_ffffffffffffffa0 & 0xffffffffffffff00);
  switch(local_4c) {
  default:
switchD_140882300_caseD_1:
    uVar3 = 0;
    break;
  case 6:
    uVar3 = local_58;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_58 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140882300_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_58);
    uVar3 = FUN_140e87250(uVar2);
  }
  FUN_140e63610(uVar3,param_2,&local_38,0,&local_48,0);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

