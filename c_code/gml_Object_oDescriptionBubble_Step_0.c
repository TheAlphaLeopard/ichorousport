// gml_Object_oDescriptionBubble_Step_0 @ 0x1408f25c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oDescriptionBubble_Step_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulonglong in_stack_fffffffffffffed0;
  undefined1 **ppuVar4;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_70 = "gml_Script_anon@588@gml_Object_oDescriptionBubble_Create_0";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x21;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_e8,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x23;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57930);
  FUN_140e87440(uVar1,DAT_141a07848,0x80000000,&local_f8,(ulonglong)pcVar2 & 0xffffffffffffff00,
                in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  local_128 = _DAT_1419e9e70;
  uStack_124 = uRam00000001419e9e74;
  uStack_120 = uRam00000001419e9e78;
  uStack_11c = uRam00000001419e9e7c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_128);
  local_60 = local_e8;
  local_128 = _DAT_1419e9e60;
  uStack_124 = uRam00000001419e9e64;
  uStack_120 = uRam00000001419e9e68;
  uStack_11c = uRam00000001419e9e6c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_128);
  local_58 = local_d8;
  uVar1 = FUN_140069500(uVar1);
  ppuVar4 = &local_60;
  puVar3 = &local_f8;
  FUN_140e63610(uVar1,param_2,&local_118,2,puVar3,ppuVar4);
  local_68 = 0x24;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57930);
  FUN_140e87440(uVar1,DAT_141a07938,0x80000000,&local_108,(ulonglong)puVar3 & 0xffffffffffffff00,
                (ulonglong)ppuVar4 & 0xffffffffffffff00);
  local_128 = _DAT_1419e9e90;
  uStack_124 = uRam00000001419e9e94;
  uStack_120 = uRam00000001419e9e98;
  uStack_11c = uRam00000001419e9e9c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_128);
  local_60 = local_e8;
  local_128 = _DAT_141dc6d70;
  uStack_124 = uRam0000000141dc6d74;
  uStack_120 = uRam0000000141dc6d78;
  uStack_11c = uRam0000000141dc6d7c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_128);
  local_58 = local_d8;
  local_128 = _DAT_1419e9e80;
  uStack_124 = uRam00000001419e9e84;
  uStack_120 = uRam00000001419e9e88;
  uStack_11c = uRam00000001419e9e8c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_128);
  local_50 = local_c8;
  local_128 = _DAT_1419e9e50;
  uStack_124 = uRam00000001419e9e54;
  uStack_120 = uRam00000001419e9e58;
  uStack_11c = uRam00000001419e9e5c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_128);
  local_48 = local_b8;
  local_128 = _DAT_1419e9e50;
  uStack_124 = uRam00000001419e9e54;
  uStack_120 = uRam00000001419e9e58;
  uStack_11c = uRam00000001419e9e5c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_128);
  local_40 = local_a8;
  local_128 = _DAT_1419e9ea0;
  uStack_124 = uRam00000001419e9ea4;
  uStack_120 = uRam00000001419e9ea8;
  uStack_11c = uRam00000001419e9eac;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_128);
  local_38 = local_98;
  local_128 = _DAT_1419e9e50;
  uStack_124 = uRam00000001419e9e54;
  uStack_120 = uRam00000001419e9e58;
  uStack_11c = uRam00000001419e9e5c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_128);
  local_30 = local_88;
  uVar1 = FUN_140069500(uVar1);
  FUN_140e63610(uVar1,param_2,&local_118,7,&local_108,&local_60);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

