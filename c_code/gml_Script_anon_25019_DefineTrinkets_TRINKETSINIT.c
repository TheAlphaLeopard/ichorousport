// gml_Script_anon_25019_DefineTrinkets_TRINKETSINIT @ 0x140601170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_25019_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar5;
  ulonglong uVar4;
  undefined4 **ppuVar6;
  undefined1 **ppuVar7;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 *local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined4 local_98 [3];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined4 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28 [2];
  
  ppuVar6 = &local_48;
  local_c0 = "gml_Script_anon@24688@DefineTrinkets@TRINKETSINIT";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x3b9;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_98,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = (undefined1 *)0x0;
  local_a4 = 0;
  local_b0 = 0;
  local_fc = 0;
  local_108 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x3ba;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  if (puVar2 != local_98) {
    local_f8 = *puVar2;
    uStack_f4 = puVar2[1];
    uStack_f0 = puVar2[2];
    uStack_ec = puVar2[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_f8);
  }
  local_48 = local_98;
  local_f8 = _DAT_141dd4c88;
  uStack_f4 = uRam0000000141dd4c8c;
  uStack_f0 = uRam0000000141dd4c90;
  uStack_ec = DAT_141dd4c94;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_f8);
  local_40 = local_88;
  uVar4 = CONCAT44(uVar5,DAT_1419fcba8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_b0,2,uVar4,ppuVar6);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    uVar4 = uVar4 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_1419ff7d8,0x80000000,&local_d8,uVar4,
                  (ulonglong)ppuVar6 & 0xffffffffffffff00);
    uVar5 = (undefined4)(uVar4 >> 0x20);
    local_f8 = (undefined4)local_d8;
    uStack_f4 = local_d8._4_4_;
    uStack_f0 = uStack_d0;
    uStack_ec = uStack_cc;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_f8);
    local_38 = local_78;
    local_f8 = _DAT_1419e6a60;
    uStack_f4 = uRam00000001419e6a64;
    uStack_f0 = uRam00000001419e6a68;
    uStack_ec = uRam00000001419e6a6c;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_f8);
    local_30 = local_68;
    ppuVar7 = &local_38;
    uVar4 = CONCAT44(uVar5,DAT_141a01af8);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_108,2,uVar4,ppuVar7);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') {
      local_b8 = 0x3bb;
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      local_118 = 0;
      local_110 = 0;
      local_10c = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
      uVar4 = uVar4 & 0xffffffffffffff00;
      FUN_140e87440(uVar3,DAT_1419ff7d8,0x80000000,&local_d8,uVar4,
                    (ulonglong)ppuVar7 & 0xffffffffffffff00);
      uVar5 = (undefined4)(uVar4 >> 0x20);
      local_f8 = (undefined4)local_d8;
      uStack_f4 = local_d8._4_4_;
      uStack_f0 = uStack_d0;
      uStack_ec = uStack_cc;
      if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_58);
      }
      FUN_140041b80(local_58,&local_f8);
      local_28[0] = local_58;
      FUN_140e634e0(param_1,param_2,&local_118,1,CONCAT44(uVar5,DAT_1419f6038),local_28);
    }
  }
  local_b8 = 0x3bd;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = &DAT_bff0000000000000;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87930(uVar3,DAT_1419ff7d8,0x80000000,&local_e8);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

