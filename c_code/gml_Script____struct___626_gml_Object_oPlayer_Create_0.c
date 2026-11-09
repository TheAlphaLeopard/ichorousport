// gml_Script____struct___626_gml_Object_oPlayer_Create_0 @ 0x140bee970

undefined8 *
gml_Script____struct___626_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong in_stack_ffffffffffffff08;
  ulonglong in_stack_ffffffffffffff10;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_70 = "gml_Script_anon@3946@___struct___626@gml_Object_oPlayer_Create_0";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_44 = 0;
  local_50 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0xd6;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  in_stack_ffffffffffffff10 = in_stack_ffffffffffffff10 & 0xffffffffffffff00;
  in_stack_ffffffffffffff08 = in_stack_ffffffffffffff08 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419f5868,0x80000000,&local_c8,in_stack_ffffffffffffff08,
                in_stack_ffffffffffffff10);
  FUN_140e87440(&local_c8,DAT_1419f5fd8,0x80000000,&local_60,
                in_stack_ffffffffffffff08 & 0xffffffffffffff00,
                in_stack_ffffffffffffff10 & 0xffffffffffffff00);
  uStack_dc = DAT_141dda554;
  uStack_e0 = DAT_141dda550;
  if ((1 << ((byte)DAT_141dda554 & 0x1f) & 0x46U) == 0) {
    local_e8 = DAT_141dda548;
  }
  else {
    FUN_1400419b0(&local_e8,&DAT_141dda548);
  }
  switch(local_bc) {
  default:
switchD_140beead9_caseD_1:
    uVar3 = 0;
    break;
  case 6:
    uVar3 = local_c8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_c8 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140beead9_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar1 = FUN_140e4a8b0(&local_c8);
    uVar3 = FUN_140e87250(uVar1);
  }
  uVar3 = FUN_140e63610(uVar3,param_2,&local_50,0,&local_60,0);
  iVar2 = FUN_140e851f0(uVar3,&local_e8,DAT_141955260,0);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if (iVar2 == 0) {
    local_68 = 0xd8;
    uVar3 = (**(code **)(*param_1 + 8))();
    uStack_dc = 0xf;
    local_e8 = 0x100000100000418;
    local_38 = 0x418;
    uStack_34 = 0x1000001;
    uStack_30 = uStack_e0;
    uStack_2c = 0xf;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_38);
  }
  else {
    local_68 = 0xdc;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
    uStack_dc = 0xf;
    local_e8 = 0x100000100000410;
    local_38 = 0x410;
    uStack_34 = 0x1000001;
    uStack_30 = uStack_e0;
    uStack_2c = 0xf;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_38);
  }
  FUN_140e86c30(uVar3,DAT_141a0a728,0x80000000,&local_d8);
  local_68 = 0xdf;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_88 = 0;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  FUN_140e86c30(uVar3,DAT_141a0cfc8,0x80000000,&local_88);
  local_68 = 0xe0;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = 0x3ff0000000000000;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  FUN_140e86c30(uVar3,DAT_141a0a818,0x80000000,&local_98);
  local_68 = 0xe2;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = 0;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  FUN_140e86c30(uVar3,DAT_1419fe0e8,0x80000000,&local_a8);
  local_68 = 0xe3;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = 0;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  FUN_140e86c30(uVar3,DAT_1419fe158,0x80000000,&local_b8);
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

