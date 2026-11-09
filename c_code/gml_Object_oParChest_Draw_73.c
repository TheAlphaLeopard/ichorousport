// gml_Object_oParChest_Draw_73 @ 0x140ba8bf0

void gml_Object_oParChest_Draw_73(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong in_stack_ffffffffffffff88;
  ulonglong uVar4;
  ulonglong in_stack_ffffffffffffff90;
  ulonglong uVar5;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oParChest_Other_5";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_5c = 0xffffff;
  local_68 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_2c = 0xffffff;
  local_38 = 0;
  local_18 = 2;
  local_3c = 0xf;
  local_48 = 0x100000000000147;
  uVar5 = in_stack_ffffffffffffff90 & 0xffffffffffffff00;
  uVar4 = in_stack_ffffffffffffff88 & 0xffffffffffffff00;
  FUN_140e87440(&local_48,DAT_1419f5758,0x80000000,&local_68,uVar4,uVar5);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140e87440(&local_68,DAT_1419f5a48,0x80000000,&local_58,uVar4 & 0xffffffffffffff00,
                uVar5 & 0xffffffffffffff00);
  switch(local_5c) {
  default:
switchD_140ba8cec_caseD_1:
    uVar3 = 0;
    break;
  case 6:
    uVar3 = local_68;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_68 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140ba8cec_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_68);
    uVar3 = FUN_140e87250(uVar2);
  }
  FUN_140e63610(uVar3,param_2,&local_38,0,&local_58,0);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

