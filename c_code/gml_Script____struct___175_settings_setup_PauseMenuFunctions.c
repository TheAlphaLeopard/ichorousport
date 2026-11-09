// gml_Script____struct___175_settings_setup_PauseMenuFunctions @ 0x1404200f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___175_settings_setup_PauseMenuFunctions
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 *local_res18 [2];
  code *pcVar5;
  undefined8 *puVar6;
  ulonglong in_stack_ffffffffffffff30;
  ulonglong uVar7;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_50 = 
  "gml_Script_anon@4292@___struct___176@___struct___175@settings_setup@PauseMenuFunctions";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0xb9;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_a8,0x10,1,FUN_1400424d0,FUN_140041b30);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef418);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0xba;
  in_stack_ffffffffffffff30 = in_stack_ffffffffffffff30 & 0xffffffffffffff00;
  uVar7 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419ef058,0x80000000,&local_b8,uVar7,in_stack_ffffffffffffff30);
  FUN_140e87440(&local_b8,DAT_1419f4a98,0x80000000,&local_68,uVar7 & 0xffffffffffffff00,
                in_stack_ffffffffffffff30 & 0xffffffffffffff00);
  switch(local_ac) {
  default:
switchD_140420223_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_b8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_b8 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140420223_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar1 = FUN_140e4a8b0(&local_b8);
    uVar4 = FUN_140e87250(uVar1);
  }
  uVar7 = 0;
  puVar6 = &local_68;
  FUN_140e63610(uVar4,param_2,&local_c8,0,puVar6,0);
  local_48 = 0xbb;
  FUN_140e85f80(param_1,DAT_1419f6b08,0x80000000,&local_78);
  uStack_8c = 0xf;
  local_98 = 0x100000300000045;
  iVar2 = FUN_140e851f0(&local_78,&local_98,DAT_141955260,0);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  uVar3 = 1 << ((byte)local_bc & 0x1f);
  if (iVar2 == 0) {
    local_48 = 0xbc;
    if ((uVar3 & 0x46) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    uStack_8c = 0xf;
    local_98 = 0x1000000000000ca;
    local_38 = 0xca;
    uStack_34 = 0x1000000;
    uStack_30 = uStack_90;
    uStack_2c = 0xf;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_38);
    local_res18[0] = local_a8;
    gml_Script____struct___162____struct___161_settings_setup_PauseMenuFunctions
              (param_1,param_2,&local_c8,1,local_res18);
  }
  else {
    local_48 = 0xbe;
    if ((uVar3 & 0x46) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a55440);
    FUN_140e87440(uVar4,DAT_141a55540,0x80000000,&local_88,(ulonglong)puVar6 & 0xffffffffffffff00,
                  uVar7 & 0xffffffffffffff00);
    local_38 = _DAT_141dd2c28;
    uStack_34 = uRam0000000141dd2c2c;
    uStack_30 = uRam0000000141dd2c30;
    uStack_2c = DAT_141dd2c34;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_38);
    local_res18[0] = local_a8;
    uVar4 = FUN_140069500(uVar4);
    FUN_140e63610(uVar4,param_2,&local_c8,1,&local_88,local_res18);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

