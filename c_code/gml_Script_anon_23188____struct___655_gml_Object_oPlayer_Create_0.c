// gml_Script_anon_23188____struct___655_gml_Object_oPlayer_Create_0 @ 0x140c0bc80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_23188____struct___655_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulonglong uVar8;
  undefined1 **ppuVar9;
  ulonglong in_stack_fffffffffffffed0;
  undefined1 **ppuVar10;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_c0 = "gml_Script_anon@22393@___struct___655@gml_Object_oPlayer_Create_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x454;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_f8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_64 = 0xffffff;
  local_70 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57ca0);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x456;
  uStack_d0 = CONCAT44(0xf,(undefined4)uStack_d0);
  local_d8 = 0x1000001000003f2;
  local_118 = 0x1000001000003f2;
  uStack_110 = CONCAT44(0xf,(undefined4)uStack_d0);
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  FUN_140041b80(&local_70,&local_118);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_70);
  local_b8 = 0x457;
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  local_94 = 0;
  local_a0 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_a0);
  local_b8 = 0x459;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffffffffffff00;
  uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419f5868,0x80000000,&local_108,uVar8,in_stack_fffffffffffffed0);
  FUN_140e87440(&local_108,DAT_141a55540,0x80000000,&local_48,uVar8 & 0xffffffffffffff00,
                in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  local_118 = CONCAT44(DAT_141dda848._4_4_,(undefined4)DAT_141dda848);
  uStack_110 = CONCAT44(DAT_141dda854,DAT_141dda850);
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_118);
  local_90 = local_f8;
  switch(local_fc) {
  default:
switchD_140c0bf23_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_108;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_108 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140c0bf23_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_108);
    uVar5 = FUN_140e87250(uVar2);
  }
  ppuVar10 = &local_90;
  FUN_140e63610(uVar5,param_2,&local_128,1,&local_48,ppuVar10);
  local_b8 = 0x45a;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0;
  local_b8 = 0x45c;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  local_a4 = 0;
  local_b0 = 0;
  FUN_140e87930(uVar5,DAT_141a0a848,0x80000000,&local_b0);
  local_b8 = 0x45d;
  uStack_d0 = CONCAT44(0xd,(undefined4)uStack_d0);
  local_d8 = 0;
  local_118 = 0;
  uStack_110 = uStack_d0;
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  FUN_140041b80(&local_80,&local_118);
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar5,DAT_1419f5528,0x80000000,&local_80);
  local_b8 = 0x45f;
  uStack_d0 = CONCAT44(0xd,(undefined4)uStack_d0);
  local_d8 = 0;
  if (&local_d8 != puVar3) {
    local_118 = 0;
    uStack_110 = CONCAT44(0xd,(undefined4)uStack_d0);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_118);
  }
  local_b8 = 0x461;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  local_118 = CONCAT44(uRam00000001419ecdb4,_DAT_1419ecdb0);
  uStack_110 = CONCAT44(uRam00000001419ecdbc,uRam00000001419ecdb8);
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_118);
  local_90 = local_f8;
  local_118 = CONCAT44(uRam00000001419ecdb4,_DAT_1419ecdb0);
  uStack_110 = CONCAT44(uRam00000001419ecdbc,uRam00000001419ecdb8);
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_118);
  local_88 = local_e8;
  ppuVar9 = &local_90;
  gml_Script_IK_documentation(param_1,param_2,&local_128,2,ppuVar9);
  local_b8 = 0x462;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  FUN_140e87440(uVar4,DAT_1419eef68,0x80000000,&local_58,(ulonglong)ppuVar9 & 0xffffffffffffff00,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  local_118 = local_58;
  uStack_110 = CONCAT44(uStack_4c,uStack_50);
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_118);
  local_90 = local_f8;
  local_118 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_110 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_118);
  local_88 = local_e8;
  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
            (param_1,param_2,&local_128,2,&local_90);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

