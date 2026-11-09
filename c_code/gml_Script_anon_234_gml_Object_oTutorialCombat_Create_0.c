// gml_Script_anon_234_gml_Object_oTutorialCombat_Create_0 @ 0x140df6970

void gml_Script_anon_234_gml_Object_oTutorialCombat_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined1 **ppuVar5;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_50 = "gml_Object_oTutorialCombat_Create_0";
  local_48 = 0;
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_a8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_bc = 0xffffff;
  local_c8 = 0;
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_48 = 2;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff228);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_48 = 3;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_48 = 5;
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uStack_dc = 6;
  uVar4 = (ulonglong)pcVar3 & 0xffffffffffffff00;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_141a0a828,0x80000000,&local_c8,uVar4,0);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140e87440(uVar1,DAT_1419ef538,0x80000000,&local_68,uVar4 & 0xffffffffffffff00,0);
  local_e8 = (longlong *)local_c8;
  uStack_e0 = uStack_c0;
  uStack_dc = uStack_bc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_e8);
  local_40 = local_a8;
  local_e8._0_4_ = (undefined4)local_68;
  local_e8._4_4_ = local_68._4_4_;
  uStack_e0 = uStack_60;
  uStack_dc = uStack_5c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_e8);
  local_38 = local_98;
  FUN_140e645a0(&local_e8,gml_Object_oTutorialCombat_Step_0,param_1);
  local_b8 = (undefined4)local_e8;
  uStack_b4 = local_e8._4_4_;
  uStack_b0 = uStack_e0;
  uStack_ac = uStack_dc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_30 = local_88;
  ppuVar5 = &local_40;
  gml_Script_SignalRemove(param_1,param_2,&local_d8,3,ppuVar5);
  local_48 = 0x11;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uStack_dc = 6;
  uVar4 = (ulonglong)ppuVar5 & 0xffffffffffffff00;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_141a0a828,0x80000000,&local_c8,uVar4,0);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140e87440(uVar1,DAT_1419ef3a8,0x80000000,&local_78,uVar4 & 0xffffffffffffff00,0);
  local_b8 = (undefined4)local_c8;
  uStack_b4 = local_c8._4_4_;
  uStack_b0 = uStack_c0;
  uStack_ac = uStack_bc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_b8);
  local_b8 = (undefined4)local_78;
  uStack_b4 = local_78._4_4_;
  uStack_b0 = uStack_70;
  uStack_ac = uStack_6c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  FUN_140e645a0(&local_e8,gml_Object_oTutorialDash_Create_0,param_1);
  local_b8 = (undefined4)local_e8;
  uStack_b4 = local_e8._4_4_;
  uStack_b0 = uStack_e0;
  uStack_ac = uStack_dc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  gml_Script_SignalRemove(param_1,param_2,&local_d8,3,&local_40);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return;
}

