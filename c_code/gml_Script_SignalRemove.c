// gml_Script_SignalRemove @ 0x1404a2020

undefined8 *
gml_Script_SignalRemove
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ulonglong in_stack_fffffffffffffef0;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined1 local_b8 [48];
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined8 local_68;
  byte local_5c;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  local_d0 = "gml_Script_SignalSubscribe";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x12;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_b8,0x10,6,FUN_1400424d0,FUN_140041b30);
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fa1c8);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x13;
  FUN_140e87440(uVar1,DAT_1419fa218,0x80000000,&local_f8,(ulonglong)pcVar4 & 0xffffffffffffff00,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_1404a212a:
    local_108 = *(undefined4 *)puVar2;
    uStack_104 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_100 = *(undefined4 *)(puVar2 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_108);
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 != &local_88) goto LAB_1404a212a;
  }
  local_40 = &local_88;
  if (param_4 < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
    if (puVar2 == &local_78) goto LAB_1404a21a3;
  }
  local_108 = *(undefined4 *)puVar2;
  uStack_104 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_100 = *(undefined4 *)(puVar2 + 1);
  uStack_fc = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_108);
LAB_1404a21a3:
  local_38 = &local_78;
  if ((param_4 < 3) || (puVar3 = (undefined8 *)param_5[2], puVar3 != &local_68)) {
    local_108 = *(undefined4 *)puVar3;
    uStack_104 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_100 = *(undefined4 *)(puVar3 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    FUN_140041b80(&local_68,&local_108);
  }
  local_30 = &local_68;
  uVar1 = FUN_140069500(uVar1);
  puVar3 = (undefined8 *)FUN_140e63610(uVar1,param_2,&local_e8,3,&local_f8,&local_40);
  if (puVar3 != param_3) {
    local_108 = *(undefined4 *)puVar3;
    uStack_104 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_100 = *(undefined4 *)(puVar3 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_108);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

