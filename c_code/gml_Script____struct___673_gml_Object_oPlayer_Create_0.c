// gml_Script____struct___673_gml_Object_oPlayer_Create_0 @ 0x140c23800

undefined8 *
gml_Script____struct___673_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong in_stack_fffffffffffffee0;
  undefined1 **ppuVar8;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_90 = "gml_Script_anon@36868@___struct___673@gml_Object_oPlayer_Create_0";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x782;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_b8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x783;
  uStack_3c = 0xf;
  local_48 = 0x1000001000003ff;
  local_c8 = 0x3ff;
  uStack_c4 = 0x1000001;
  uStack_c0 = uStack_40;
  uStack_bc = 0xf;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_c8);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_d8);
  local_88 = 0x784;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffffffffffff00;
  uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f5868,0x80000000,&local_108,uVar6,in_stack_fffffffffffffee0);
  FUN_140e87440(&local_108,DAT_141a55540,0x80000000,&local_68,uVar6 & 0xffffffffffffff00,
                in_stack_fffffffffffffee0 & 0xffffffffffffff00);
  local_c8 = (undefined4)DAT_141dda848;
  uStack_c4 = DAT_141dda848._4_4_;
  uStack_c0 = DAT_141dda850;
  uStack_bc = DAT_141dda854;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_c8);
  local_58 = local_b8;
  switch(local_fc) {
  default:
switchD_140c23a3e_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_108;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_108 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140c23a3e_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_108);
    uVar4 = FUN_140e87250(uVar2);
  }
  ppuVar8 = &local_58;
  puVar7 = &local_68;
  FUN_140e63610(uVar4,param_2,&local_118,1,puVar7,ppuVar8);
  local_88 = 0x785;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_e8);
  local_88 = 0x787;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  FUN_140e87440(uVar3,DAT_1419ef248,0x80000000,&local_78,(ulonglong)puVar7 & 0xffffffffffffff00,
                (ulonglong)ppuVar8 & 0xffffffffffffff00);
  local_c8 = (undefined4)local_78;
  uStack_c4 = local_78._4_4_;
  uStack_c0 = uStack_70;
  uStack_bc = uStack_6c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_c8);
  local_58 = local_b8;
  local_c8 = (undefined4)DAT_1419df7b0;
  uStack_c4 = DAT_1419df7b0._4_4_;
  uStack_c0 = DAT_1419df7b8;
  uStack_bc = DAT_1419df7bc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_c8);
  local_50 = local_a8;
  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
            (param_1,param_2,&local_118,2,&local_58);
  local_88 = 0x789;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = 0;
  FUN_140e87930(uVar3,DAT_1419ef328,0x80000000,&local_f8);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

