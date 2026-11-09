// gml_Script_anon_279_gml_Object_oPickupKey_Create_0 @ 0x140be5b80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_279_gml_Object_oPickupKey_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  ulonglong in_stack_fffffffffffffed0;
  double local_128;
  uint local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
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
  
  local_e0 = "gml_Script_anon@341@gml_Object_oPickupIronSmall_Create_0";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x15;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_c8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x17;
  uStack_10c = 0xf;
  local_118 = 0x1000000000000ee;
  uVar3 = (ulonglong)pcVar2 & 0xffffffffffffff00;
  FUN_140e87440(&local_118,DAT_1419ff9c8,0x80000000,&local_128,uVar3,
                in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar3 >> 0x20);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  uVar1 = local_11c & 0xffffff;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      local_128 = (double)FUN_140e4b060(&local_128);
      local_11c = 0;
    }
    else {
      if (uVar1 == 7) {
        local_128 = (double)CONCAT44(local_128._4_4_,local_128._0_4_ + 1);
        goto LAB_140be5ce8;
      }
      if (uVar1 == 10) {
        local_128 = (double)((longlong)local_128 + 1);
        goto LAB_140be5ce8;
      }
      if (uVar1 != 0xd) {
        FUN_140042910(&DAT_14172c3d8,&local_128,&local_128);
        goto LAB_140be5ce8;
      }
      local_11c = 0;
    }
  }
  local_128 = local_128 + 1.0;
LAB_140be5ce8:
  uStack_10c = 0xf;
  local_118 = 0x1000000000000ee;
  FUN_140e87930(&local_118,DAT_1419ff9c8,0x80000000,&local_128);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_d8 = 0x18;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  uStack_10c = 0xf;
  local_118 = 0x10000020000001c;
  local_f8 = 0x1c;
  uStack_f4 = 0x1000002;
  uStack_f0 = uStack_110;
  uStack_ec = 0xf;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_f8);
  local_68 = local_c8;
  local_f8 = _DAT_1419ecaa0;
  uStack_f4 = uRam00000001419ecaa4;
  uStack_f0 = uRam00000001419ecaa8;
  uStack_ec = uRam00000001419ecaac;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_f8);
  local_60 = local_b8;
  local_f8 = _DAT_1419df7a0;
  uStack_f4 = uRam00000001419df7a4;
  uStack_f0 = uRam00000001419df7a8;
  uStack_ec = uRam00000001419df7ac;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_f8);
  local_58 = local_a8;
  local_f8 = (undefined4)DAT_1419df7b0;
  uStack_f4 = DAT_1419df7b0._4_4_;
  uStack_f0 = DAT_1419df7b8;
  uStack_ec = DAT_1419df7bc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_f8);
  local_50 = local_98;
  local_f8 = (undefined4)DAT_1419df7b0;
  uStack_f4 = DAT_1419df7b0._4_4_;
  uStack_f0 = DAT_1419df7b8;
  uStack_ec = DAT_1419df7bc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_f8);
  local_48 = local_88;
  local_78 = FUN_140e794b0(0xcccccccd,0x3ff199999999999a);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 0;
  local_40 = &local_78;
  FUN_140e634e0(param_1,param_2,&local_108,6,CONCAT44(uVar4,DAT_141a0a2e8),&local_68);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

