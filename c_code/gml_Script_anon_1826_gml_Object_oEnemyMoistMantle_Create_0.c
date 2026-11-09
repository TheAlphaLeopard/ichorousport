// gml_Script_anon_1826_gml_Object_oEnemyMoistMantle_Create_0 @ 0x1409f4cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1826_gml_Object_oEnemyMoistMantle_Create_0
          (longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *local_res8;
  longlong *local_res10;
  code *pcVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined1 **in_stack_fffffffffffffec0;
  ulonglong uVar7;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  longlong *local_128;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 local_48 [16];
  longlong local_38;
  
  local_c0 = "gml_Script_anon@202@gml_Object_oEnemyMoistMantle_Create_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 8;
  pcVar4 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_a8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_dc = 0xffffff;
  local_e8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 9;
  local_11c = 0xf;
  local_128 = (longlong *)0x100000000000014;
  iVar2 = FUN_140e63cb0(local_48,&local_res8,&local_res10,&local_128);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (0 < iVar2) {
    do {
      local_b8 = 10;
      pcVar5 = pcVar4;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
        pcVar5 = pcVar4;
      }
      local_138 = 0;
      local_130 = 0;
      local_12c = 5;
      pcVar4 = (code *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a02db8);
      uVar3 = (**(code **)(*local_res10 + 8))(local_res10,DAT_1419ff338);
      local_11c = 6;
      local_128 = local_res10;
      uVar7 = (ulonglong)in_stack_fffffffffffffec0 & 0xffffffffffffff00;
      uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
      FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_e8,uVar6,uVar7);
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_cc = 6;
      local_d8 = local_res10;
      uVar7 = uVar7 & 0xffffffffffffff00;
      uVar6 = uVar6 & 0xffffffffffffff00;
      FUN_140e87440(&local_d8,DAT_1419fe158,0x80000000,&local_f8,uVar6,uVar7);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140e87440(uVar3,DAT_141a572c0,0x80000000,&local_108,uVar6 & 0xffffffffffffff00,
                    uVar7 & 0xffffffffffffff00);
      local_118 = (undefined4)local_e8;
      uStack_114 = local_e8._4_4_;
      uStack_110 = uStack_e0;
      uStack_10c = uStack_dc;
      if ((1 << (local_a8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_118);
      local_68 = local_a8;
      local_118 = (undefined4)local_f8;
      uStack_114 = local_f8._4_4_;
      uStack_110 = uStack_f0;
      uStack_10c = uStack_ec;
      if ((1 << (local_98[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_118);
      local_60 = local_98;
      local_118 = (undefined4)local_108;
      uStack_114 = local_108._4_4_;
      uStack_110 = uStack_100;
      uStack_10c = uStack_fc;
      if ((1 << (local_88[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
      FUN_140041b80(local_88,&local_118);
      local_58 = local_88;
      local_118 = _DAT_141dc6f10;
      uStack_114 = uRam0000000141dc6f14;
      uStack_110 = uRam0000000141dc6f18;
      uStack_10c = uRam0000000141dc6f1c;
      if ((1 << (local_78[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_118);
      local_50 = local_78;
      in_stack_fffffffffffffec0 = &local_68;
      FUN_140e63610(local_res8,local_res10,&local_138,4,pcVar4,&local_68);
      cVar1 = FUN_140e643f0(local_48,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_48,&local_res8,&local_res10);
  if (local_38 != 0) {
    FUN_140e4cd60();
    local_38 = 0;
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

