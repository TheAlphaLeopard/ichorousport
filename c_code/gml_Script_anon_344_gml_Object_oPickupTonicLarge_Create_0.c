// gml_Script_anon_344_gml_Object_oPickupTonicLarge_Create_0 @ 0x140be6b20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_344_gml_Object_oPickupTonicLarge_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong in_stack_fffffffffffffed0;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined8 *local_30;
  
  local_d0 = "gml_Script_anon@279@gml_Object_oPickupKey_Create_0";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x11;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_b8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x13;
  uStack_ec = 0xf;
  local_f8 = 0x100000000000147;
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffffffffffff00;
  uVar5 = (ulonglong)pcVar4 & 0xffffffffffffff00;
  FUN_140e87440(&local_f8,DAT_1419f5758,0x80000000,&local_118,uVar5,in_stack_fffffffffffffed0);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140e87440(&local_118,DAT_1419f4aa8,0x80000000,&local_e8,uVar5 & 0xffffffffffffff00,
                in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  switch(local_10c) {
  default:
switchD_140be6c75_caseD_1:
    uVar3 = 0;
    break;
  case 6:
    uVar3 = local_118;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_118 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140be6c75_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_118);
    uVar3 = FUN_140e87250(uVar2);
  }
  puVar6 = &local_e8;
  FUN_140e63610(uVar3,param_2,&local_128,0,puVar6,0);
  uVar2 = (undefined4)((ulonglong)puVar6 >> 0x20);
  local_c8 = 0x14;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uStack_ec = 0xf;
  local_f8 = 0x10000020000001c;
  local_108 = 0x1c;
  uStack_104 = 0x1000002;
  uStack_100 = uStack_f0;
  uStack_fc = 0xf;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_108);
  local_58 = local_b8;
  local_108 = _DAT_1419ecad0;
  uStack_104 = uRam00000001419ecad4;
  uStack_100 = uRam00000001419ecad8;
  uStack_fc = uRam00000001419ecadc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_108);
  local_50 = local_a8;
  local_108 = _DAT_1419df7a0;
  uStack_104 = uRam00000001419df7a4;
  uStack_100 = uRam00000001419df7a8;
  uStack_fc = uRam00000001419df7ac;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_108);
  local_48 = local_98;
  local_108 = (undefined4)DAT_1419df7b0;
  uStack_104 = DAT_1419df7b0._4_4_;
  uStack_100 = DAT_1419df7b8;
  uStack_fc = DAT_1419df7bc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_108);
  local_40 = local_88;
  local_108 = (undefined4)DAT_1419df7b0;
  uStack_104 = DAT_1419df7b0._4_4_;
  uStack_100 = DAT_1419df7b8;
  uStack_fc = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_108);
  local_38 = local_78;
  local_68 = FUN_140e794b0(0xcccccccd,0x3ff199999999999a);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_5c = 0;
  local_30 = &local_68;
  FUN_140e634e0(param_1,param_2,&local_128,6,CONCAT44(uVar2,DAT_141a0a2e8),&local_58);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

