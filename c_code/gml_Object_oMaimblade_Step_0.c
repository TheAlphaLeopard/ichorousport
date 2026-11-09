// gml_Object_oMaimblade_Step_0 @ 0x140b474e0

undefined8 * gml_Object_oMaimblade_Step_0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong in_stack_fffffffffffffef0;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined4 local_78 [3];
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined4 *local_38;
  
  local_60 = "gml_Script_anon@890@gml_Object_oMaimblade_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x2e;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_a8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_cc = 0xffffff;
  local_d8 = 0;
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f3ff8);
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_ac = 0;
  local_b8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x30;
  in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
  uVar5 = (ulonglong)pcVar4 & 0xffffffffffffff00;
  FUN_140e87440(uVar1,DAT_1419ef438,0x80000000,&local_d8,uVar5,in_stack_fffffffffffffef0);
  uStack_ec = 6;
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_141a0a828,0x80000000,&local_e8,uVar5,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  uVar6 = (undefined4)(uVar5 >> 0x20);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_108,gml_Script_anon_1028_gml_Object_oMaimblade_Create_0,0);
  if (&local_108 != puVar2) {
    local_f8 = CONCAT44(local_108._4_4_,(undefined4)local_108);
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_f8);
  }
  FUN_140e60910(1);
  if (puVar2 != &local_a8) {
    local_f8 = *puVar2;
    uStack_f0 = *(undefined4 *)(puVar2 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_50 = &local_a8;
  local_108._0_4_ = (undefined4)local_e8;
  local_108._4_4_ = local_e8._4_4_;
  uStack_100 = uStack_e0;
  uStack_fc = uStack_dc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_108);
  local_48 = local_98;
  local_108._0_4_ = (undefined4)local_d8;
  local_108._4_4_ = local_d8._4_4_;
  uStack_100 = uStack_d0;
  uStack_fc = uStack_cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_108);
  local_40 = local_88;
  puVar3 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_c8,2,CONCAT44(uVar6,DAT_1419fd6d8),&local_50);
  if (puVar3 != local_78) {
    local_108._0_4_ = *puVar3;
    local_108._4_4_ = puVar3[1];
    uStack_100 = puVar3[2];
    uStack_fc = puVar3[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_108);
  }
  local_38 = local_78;
  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
            (param_1,param_2,&local_b8,2,&local_40);
  local_58 = 0x31;
  FUN_140edd0e0(param_1,param_2,0,0);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

