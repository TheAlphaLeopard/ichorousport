// gml_Script_anon_1377_gml_Object_oPlayer_Other_76 @ 0x140c80620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1377_gml_Object_oPlayer_Other_76
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  undefined4 uVar4;
  ulonglong in_stack_ffffffffffffff40;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
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
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined8 local_30;
  char *local_28;
  undefined4 local_20;
  
  local_28 = "gml_Script_anon@1244@gml_Object_oPlayer_Other_76";
  local_30 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_30;
  local_20 = 0x39;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_a8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_20 = 0x3b;
  FUN_140e87440(uVar1,DAT_1419ef4b8,0x80000000,&local_68,(ulonglong)pcVar2 & 0xffffffffffffff00,
                in_stack_ffffffffffffff40 & 0xffffffffffffff00);
  local_78 = local_68;
  uStack_70 = uStack_60;
  uStack_6c = uStack_5c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_78);
  local_48 = local_a8;
  local_78 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_70 = DAT_1419df7b8;
  uStack_6c = DAT_1419df7bc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_78);
  local_40 = local_98;
  ppuVar3 = &local_48;
  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
            (param_1,param_2,&local_b8,2,ppuVar3);
  uVar4 = (undefined4)((ulonglong)ppuVar3 >> 0x20);
  local_20 = 0x3c;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  uStack_6c = 0xf;
  local_78 = 0x1000002000000d4;
  local_58 = 0xd4;
  uStack_54 = 0x1000002;
  uStack_50 = uStack_70;
  uStack_4c = 0xf;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_58);
  local_48 = local_a8;
  local_58 = _DAT_1419ed150;
  uStack_54 = uRam00000001419ed154;
  uStack_50 = uRam00000001419ed158;
  uStack_4c = uRam00000001419ed15c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_58);
  local_40 = local_98;
  local_58 = _DAT_1419df7a0;
  uStack_54 = uRam00000001419df7a4;
  uStack_50 = uRam00000001419df7a8;
  uStack_4c = uRam00000001419df7ac;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_58);
  local_38 = local_88;
  FUN_140e634e0(param_1,param_2,&local_b8,3,CONCAT44(uVar4,DAT_141a0a2e8),&local_48);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_30;
  return param_3;
}

