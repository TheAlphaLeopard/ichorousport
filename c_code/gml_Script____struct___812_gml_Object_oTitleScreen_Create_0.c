// gml_Script____struct___812_gml_Object_oTitleScreen_Create_0 @ 0x140dbc960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___812_gml_Object_oTitleScreen_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 **ppuVar7;
  ulonglong uVar8;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
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
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_a0 = "gml_Script_anon@1226@___struct___813@___struct___812@gml_Object_oTitleScreen_Create_0"
  ;
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x3a;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_88,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef418);
  local_dc = 0xffffff;
  local_e8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x3b;
  uStack_ac = 0xf;
  local_b8 = 0x10000000000013a;
  local_d8 = 0x13a;
  uStack_d4 = 0x1000000;
  uStack_d0 = uStack_b0;
  uStack_cc = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_d8);
  local_48 = local_88;
  ppuVar7 = &local_48;
  uVar6 = CONCAT44(uVar3,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_f8,1,uVar6,ppuVar7);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_98 = 0x3b;
    goto LAB_140dbccf0;
  }
  local_98 = 0x3d;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419ef058,0x80000000,&local_e8,uVar6,uVar8);
  FUN_140e87440(&local_e8,DAT_1419f4a98,0x80000000,&local_c8,uVar6 & 0xffffffffffffff00,
                uVar8 & 0xffffffffffffff00);
  switch(local_dc) {
  default:
switchD_140dbcb4f_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_e8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_e8 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140dbcb4f_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_e8);
    uVar4 = FUN_140e87250(uVar3);
  }
  FUN_140e63610(uVar4,param_2,&local_f8,0,&local_c8,0);
  local_98 = 0x3e;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uStack_ac = 0xf;
  local_b8 = 0x100000300000008;
  local_d8 = 8;
  uStack_d4 = 0x1000003;
  uStack_d0 = uStack_b0;
  uStack_cc = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_d8);
  local_48 = local_88;
  local_d8 = _DAT_1419ee150;
  uStack_d4 = uRam00000001419ee154;
  uStack_d0 = uRam00000001419ee158;
  uStack_cc = uRam00000001419ee15c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_d8);
  local_40 = local_78;
  local_d8 = _DAT_1419ee130;
  uStack_d4 = uRam00000001419ee134;
  uStack_d0 = uRam00000001419ee138;
  uStack_cc = uRam00000001419ee13c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_d8);
  local_38 = local_68;
  local_d8 = (undefined4)DAT_1419df7b0;
  uStack_d4 = DAT_1419df7b0._4_4_;
  uStack_d0 = DAT_1419df7b8;
  uStack_cc = DAT_1419df7bc;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_d8);
  local_30 = local_58;
  gml_Script____struct___210_chunk_transition_RoomTransition(param_1,param_2,&local_f8,4,&local_48);
LAB_140dbccf0:
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

