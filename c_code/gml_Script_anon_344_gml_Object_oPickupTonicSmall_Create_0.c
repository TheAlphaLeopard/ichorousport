// gml_Script_anon_344_gml_Object_oPickupTonicSmall_Create_0 @ 0x140be8b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_344_gml_Object_oPickupTonicSmall_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  ulonglong in_stack_fffffffffffffec0;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
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
  undefined4 local_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 *local_40;
  
  local_e0 = "gml_Script_anon@343@gml_Object_oPickupTonicMedium_Create_0";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x15;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_c8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x16;
  uStack_12c = 0xf;
  local_138 = 0x100000000000106;
  in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
  puVar4 = (undefined8 *)((ulonglong)pcVar3 & 0xffffffffffffff00);
  FUN_140e87440(&local_138,DAT_141a57b40,0x80000000,&local_f8,puVar4,in_stack_fffffffffffffec0);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  cVar1 = FUN_140e491e0(&local_f8);
  if (cVar1 == '\0') {
    local_d8 = 0x17;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    uStack_12c = 0xf;
    local_138 = 0x100000000000106;
    FUN_140e87440(&local_138,DAT_1419ffbc8,0x80000000,&local_108,
                  (ulonglong)puVar4 & 0xffffffffffffff00,
                  in_stack_fffffffffffffec0 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = CONCAT44(uRam00000001419ecb54,_DAT_1419ecb50);
    uStack_130 = uRam00000001419ecb58;
    uStack_12c = uRam00000001419ecb5c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_138);
    local_68 = local_c8;
    uStack_12c = 0xf;
    local_138 = 0x100000000000106;
    uVar2 = FUN_140069500(&local_138);
    puVar4 = &local_108;
    FUN_140e63610(uVar2,param_2,&local_128,1,puVar4,&local_68);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
  }
  uVar5 = (undefined4)((ulonglong)puVar4 >> 0x20);
  local_d8 = 0x18;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uStack_12c = 0xf;
  local_138 = 0x100000200000057;
  local_118 = 0x57;
  uStack_114 = 0x1000002;
  uStack_110 = uStack_130;
  uStack_10c = 0xf;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_118);
  local_68 = local_c8;
  local_118 = _DAT_1419ecb40;
  uStack_114 = uRam00000001419ecb44;
  uStack_110 = uRam00000001419ecb48;
  uStack_10c = uRam00000001419ecb4c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_118);
  local_60 = local_b8;
  local_118 = _DAT_1419df7a0;
  uStack_114 = uRam00000001419df7a4;
  uStack_110 = uRam00000001419df7a8;
  uStack_10c = uRam00000001419df7ac;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_118);
  local_58 = local_a8;
  local_118 = (undefined4)DAT_1419df7b0;
  uStack_114 = DAT_1419df7b0._4_4_;
  uStack_110 = DAT_1419df7b8;
  uStack_10c = DAT_1419df7bc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_118);
  local_50 = local_98;
  local_118 = (undefined4)DAT_1419df7b0;
  uStack_114 = DAT_1419df7b0._4_4_;
  uStack_110 = DAT_1419df7b8;
  uStack_10c = DAT_1419df7bc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_118);
  local_48 = local_88;
  local_78 = FUN_140e794b0(0xcccccccd,0x3ff199999999999a);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 0;
  local_40 = &local_78;
  FUN_140e634e0(param_1,param_2,&local_128,6,CONCAT44(uVar5,DAT_141a0a2e8),&local_68);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

