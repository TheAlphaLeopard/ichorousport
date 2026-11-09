// gml_Object_oCheckBox_Step_0 @ 0x1408a0730

undefined8 * gml_Object_oCheckBox_Step_0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  undefined4 uVar4;
  ulonglong in_stack_fffffffffffffed0;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined1 *local_20;
  
  local_60 = "gml_Script_anon@129@gml_Object_oCheckBox_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x12;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_d8,0x10,7,FUN_1400424d0,FUN_140041b30);
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_dc = 0;
  local_e8 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x14;
  local_128 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_120 = DAT_1419df7b8;
  uStack_11c = DAT_1419df7bc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_128);
  local_50 = local_d8;
  local_128 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_120 = DAT_1419df7b8;
  uStack_11c = DAT_1419df7bc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_128);
  local_48 = local_c8;
  local_128 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_120 = DAT_1419df7b8;
  uStack_11c = DAT_1419df7bc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_128);
  local_40 = local_b8;
  local_128 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_120 = DAT_1419df7b8;
  uStack_11c = DAT_1419df7bc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_128);
  local_38 = local_a8;
  uStack_11c = 6;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_141a0a828,0x80000000,&local_118,
                (ulonglong)pcVar2 & 0xffffffffffffff00,
                in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  puVar1 = (undefined8 *)gml_Script_InputCursorY(param_1,param_2,&local_f8,2,&local_50);
  if (puVar1 != &local_98) {
    local_128 = *puVar1;
    uStack_120 = *(undefined4 *)(puVar1 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_128);
  }
  local_30 = &local_98;
  ppuVar3 = &local_40;
  puVar1 = (undefined8 *)gml_Script_InputDefineCluster(param_1,param_2,&local_108,2,ppuVar3);
  uVar4 = (undefined4)((ulonglong)ppuVar3 >> 0x20);
  if (puVar1 != &local_88) {
    local_128 = *puVar1;
    uStack_120 = *(undefined4 *)(puVar1 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_128);
  }
  local_28 = &local_88;
  local_128 = local_118;
  uStack_120 = uStack_110;
  uStack_11c = uStack_10c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_128);
  local_20 = local_78;
  puVar1 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_e8,3,CONCAT44(uVar4,DAT_141a10408),&local_30);
  if (puVar1 != param_3) {
    local_128 = *puVar1;
    uStack_120 = *(undefined4 *)(puVar1 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_128);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

