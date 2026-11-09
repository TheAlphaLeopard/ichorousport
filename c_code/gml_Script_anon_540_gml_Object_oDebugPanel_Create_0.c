// gml_Script_anon_540_gml_Object_oDebugPanel_Create_0 @ 0x1408eeb50

undefined8 *
gml_Script_anon_540_gml_Object_oDebugPanel_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ulonglong in_stack_ffffffffffffff20;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_50 = "gml_Script_anon@430@gml_Object_oDebugPanel_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x10;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_78,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_7c = 0;
  local_88 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x11;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419eec88);
  FUN_140e87440(uVar2,DAT_141a0aa28,0x80000000,&local_b8,(ulonglong)pcVar5 & 0xffffffffffffff00,
                in_stack_ffffffffffffff20 & 0xffffffffffffff00);
  FUN_140e85f80(param_1,DAT_141a02d38,0x80000000,&local_c8);
  uStack_cc = DAT_141dd7a94;
  uStack_d0 = DAT_141dd7a90;
  if ((1 << ((byte)DAT_141dd7a94 & 0x1f) & 0x46U) == 0) {
    local_d8 = DAT_141dd7a88;
  }
  else {
    FUN_1400419b0(&local_d8,&DAT_141dd7a88);
  }
  uVar1 = uStack_cc;
  local_a8 = (undefined4)local_d8;
  uStack_a4 = local_d8._4_4_;
  uStack_a0 = uStack_d0;
  uStack_9c = uStack_cc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_40 = local_78;
  local_a8 = (undefined4)local_c8;
  uStack_a4 = local_c8._4_4_;
  uStack_a0 = uStack_c0;
  uStack_9c = uStack_bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_a8);
  local_38 = local_68;
  uVar3 = FUN_140e64420(param_1,param_2,&local_98,2,&local_40);
  uVar2 = FUN_140069500(uVar2);
  puVar4 = (undefined8 *)FUN_140e63610(uVar2,param_2,&local_88,0,&local_b8,0);
  uStack_cc = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_d0 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) == 0) {
    local_d8 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_d8,puVar4);
  }
  FUN_1400460e0(&local_d8,uVar3);
  if (&local_d8 != param_3) {
    local_a8 = (undefined4)local_d8;
    uStack_a4 = local_d8._4_4_;
    uStack_a0 = uStack_d0;
    uStack_9c = uStack_cc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_a8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

