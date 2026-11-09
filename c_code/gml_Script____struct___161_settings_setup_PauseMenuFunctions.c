// gml_Script____struct___161_settings_setup_PauseMenuFunctions @ 0x14041ccd0

undefined8 *
gml_Script____struct___161_settings_setup_PauseMenuFunctions
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 *local_res18;
  code *pcVar7;
  ulonglong uVar8;
  ulonglong in_stack_ffffffffffffff20;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_res18 = (undefined1 *)((ulonglong)local_res18 & 0xffffffff00000000);
  local_50 = 
  "gml_Script_anon@2927@___struct___162@___struct___161@settings_setup@PauseMenuFunctions";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x70;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_98,0x10,1,FUN_1400424d0,FUN_140041b30);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef418);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x71;
  in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffffffffff00;
  uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419ef058,0x80000000,&local_c8,uVar8,in_stack_ffffffffffffff20);
  FUN_140e87440(&local_c8,DAT_1419f4a98,0x80000000,&local_a8,uVar8 & 0xffffffffffffff00,
                in_stack_ffffffffffffff20 & 0xffffffffffffff00);
  switch(local_bc) {
  default:
switchD_14041cdfc_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_c8;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_c8 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_14041cdfc_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_c8);
    uVar4 = FUN_140e87250(uVar2);
  }
  FUN_140e63610(uVar4,param_2,&local_d8,0,&local_a8,0);
  local_48 = 0x72;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140e85f80(param_1,DAT_1419f6b08,0x80000000,&local_b8);
  local_5c = 0xf;
  local_68 = 0x100000300000045;
  iVar3 = FUN_140e851f0(&local_b8,&local_68,DAT_141955260,0);
  if (iVar3 == 0) {
    local_7c = 0xf;
    local_88 = 0x1000000000000ca;
    puVar5 = &local_88;
    uVar6 = 2;
  }
  else {
    uStack_6c = 0xf;
    local_78 = 0x1000000000000f0;
    puVar5 = &local_78;
    uVar6 = 1;
  }
  uVar1 = uStack_6c;
  uVar2 = local_7c;
  local_40 = *(undefined4 *)puVar5;
  uStack_3c = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_38 = *(undefined4 *)(puVar5 + 1);
  uStack_34 = *(undefined4 *)((longlong)puVar5 + 0xc);
  local_res18._0_4_ = uVar6;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_40);
  if (((uVar6 & 2) != 0) &&
     (uVar6 = uVar6 & 0xfffffffd, local_res18._0_4_ = uVar6,
     (1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_88);
  }
  if (((uVar6 & 1) != 0) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_res18 = local_98;
  gml_Script____struct___162____struct___161_settings_setup_PauseMenuFunctions
            (param_1,param_2,&local_d8,1,&local_res18);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

