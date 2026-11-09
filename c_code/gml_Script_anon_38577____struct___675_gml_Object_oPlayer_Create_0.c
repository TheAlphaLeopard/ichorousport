// gml_Script_anon_38577____struct___675_gml_Object_oPlayer_Create_0 @ 0x140c26280

undefined8 *
gml_Script_anon_38577____struct___675_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  ulonglong in_stack_ffffffffffffff60;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_40 [12];
  byte local_34;
  undefined1 local_30 [12];
  byte local_24;
  
  local_50 = "gml_Script_anon@38456@___struct___674@gml_Object_oPlayer_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x7e8;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_40,0x10,2,FUN_1400424d0,FUN_140041b30);
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_7c = 0xffffff;
  local_88 = (undefined1 *)0x0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x7ea;
  FUN_140e87440(uVar1,DAT_1419ef798,0x80000000,&local_88,(ulonglong)pcVar2 & 0xffffffffffffff00,
                in_stack_ffffffffffffff60 & 0xffffffffffffff00);
  local_78 = local_88;
  uStack_70 = (undefined1 *)CONCAT44(uStack_7c,uStack_80);
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_78);
  local_78 = local_40;
  local_68 = (undefined4)DAT_1419df7b0;
  uStack_64 = DAT_1419df7b0._4_4_;
  uStack_60 = DAT_1419df7b8;
  uStack_5c = DAT_1419df7bc;
  if ((1 << (local_24 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_30);
  }
  FUN_140041b80(local_30,&local_68);
  uStack_70 = local_30;
  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
            (param_1,param_2,&local_98,2,&local_78);
  local_48 = 0x7eb;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  gml_Script_Chance(param_1,param_2,&local_98,0,0);
  local_48 = 0x7ec;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8008);
  FUN_140e63610(param_1,param_2,&local_98,0,uVar1,0);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_40,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

