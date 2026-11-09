// gml_Script____struct___165_settings_setup_PauseMenuFunctions @ 0x14041dc20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___165_settings_setup_PauseMenuFunctions
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  ulonglong in_stack_ffffffffffffff10;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_a0 = 
  "gml_Script_anon@3325@___struct___166@___struct___165@settings_setup@PauseMenuFunctions";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x83;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_88,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef418);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x84;
  in_stack_ffffffffffffff10 = in_stack_ffffffffffffff10 & 0xffffffffffffff00;
  uVar5 = (ulonglong)pcVar4 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419ef058,0x80000000,&local_d8,uVar5,in_stack_ffffffffffffff10);
  FUN_140e87440(&local_d8,DAT_1419f4a98,0x80000000,&local_b8,uVar5 & 0xffffffffffffff00,
                in_stack_ffffffffffffff10 & 0xffffffffffffff00);
  switch(local_cc) {
  default:
switchD_14041dd49_caseD_1:
    uVar3 = 0;
    break;
  case 6:
    uVar3 = local_d8;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_d8 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_14041dd49_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_d8);
    uVar3 = FUN_140e87250(uVar2);
  }
  FUN_140e63610(uVar3,param_2,&local_e8,0,&local_b8,0);
  local_98 = 0x85;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  gml_Script_level_end(param_1,param_2,&local_e8,0,0);
  local_98 = 0x86;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uStack_3c = 0xf;
  local_48 = 0x100000300000045;
  local_c8 = 0x45;
  uStack_c4 = 0x1000003;
  uStack_c0 = uStack_40;
  uStack_bc = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_c8);
  local_38 = local_88;
  local_c8 = _DAT_1419e4c00;
  uStack_c4 = uRam00000001419e4c04;
  uStack_c0 = uRam00000001419e4c08;
  uStack_bc = uRam00000001419e4c0c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_c8);
  local_30 = local_78;
  local_c8 = (undefined4)DAT_1419df7b0;
  uStack_c4 = DAT_1419df7b0._4_4_;
  uStack_c0 = DAT_1419df7b8;
  uStack_bc = DAT_1419df7bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_c8);
  local_28 = local_68;
  local_c8 = (undefined4)DAT_1419df7b0;
  uStack_c4 = DAT_1419df7b0._4_4_;
  uStack_c0 = DAT_1419df7b8;
  uStack_bc = DAT_1419df7bc;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_c8);
  local_20 = local_58;
  gml_Script____struct___210_chunk_transition_RoomTransition(param_1,param_2,&local_e8,4,&local_38);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

