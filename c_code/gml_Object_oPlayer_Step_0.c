// gml_Object_oPlayer_Step_0 @ 0x140c54760

undefined8 * gml_Object_oPlayer_Step_0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_50 [12];
  byte local_44;
  undefined1 local_40 [12];
  byte local_34;
  
  local_60 = "gml_Script_anon@62267@___struct___692@gml_Object_oPlayer_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0xcff;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_8c = 0xffffff;
  local_98 = (undefined1 *)0x0;
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f4e98);
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57b60);
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0xd01;
  FUN_140e87440(uVar1,DAT_1419ef798,0x80000000,&local_98,(ulonglong)pcVar4 & 0xffffffffffffff00,0);
  local_88 = local_98;
  uStack_80 = (undefined1 *)CONCAT44(uStack_8c,uStack_90);
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_88);
  local_88 = local_50;
  local_78 = (undefined4)DAT_1419df7b0;
  uStack_74 = DAT_1419df7b0._4_4_;
  uStack_70 = DAT_1419df7b8;
  uStack_6c = DAT_1419df7bc;
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_78);
  uStack_80 = local_40;
  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
            (param_1,param_2,&local_a8,2,&local_88);
  local_58 = 0xd02;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  gml_Script_Chance(param_1,param_2,&local_a8,0,0);
  local_58 = 0xd04;
  FUN_140e609c0(DAT_141a729d8);
  if (puVar2 != &DAT_1419df7b0) {
    local_78 = (undefined4)DAT_1419df7b0;
    uStack_74 = DAT_1419df7b0._4_4_;
    uStack_70 = DAT_1419df7b8;
    uStack_6c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_78);
  }
  FUN_140e60910(1);
  local_58 = 0xd05;
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x3ff0000000000000;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

