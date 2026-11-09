// gml_Script_anon_6552_gml_Object_oPlayer_Other_10 @ 0x140c69f40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_anon_6552_gml_Object_oPlayer_Other_10
          (longlong *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 **ppuVar6;
  ulonglong uVar7;
  ulonglong in_stack_fffffffffffffec0;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
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
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48 [4];
  
  local_e0 = "gml_Script_anon@6036@gml_Object_oPlayer_Other_10";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0xf5;
  _eh_vector_constructor_iterator_(local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_11c = 0xffffff;
  local_128 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_c4 = 0;
  uVar5 = 0;
  local_d0 = 0;
  local_fc = 0;
  local_108 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0xf6;
  local_138 = CONCAT44(uRam00000001419ecf84,_DAT_1419ecf80);
  uStack_130 = uRam00000001419ecf88;
  uStack_12c = uRam00000001419ecf8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_138);
  local_68 = local_b8;
  local_138 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_130 = DAT_1419df7b8;
  uStack_12c = DAT_1419df7bc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_138);
  local_60 = local_a8;
  uVar4 = gml_Script_InputCheckMany(param_1,param_2,&local_d0,2,&local_68);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    local_138 = CONCAT44(uRam00000001419ecf84,_DAT_1419ecf80);
    uStack_130 = uRam00000001419ecf88;
    uStack_12c = uRam00000001419ecf8c;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_138);
    local_58 = local_98;
    local_138 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_130 = DAT_1419df7b8;
    uStack_12c = DAT_1419df7bc;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_138);
    local_50 = local_88;
    ppuVar6 = &local_58;
    uVar4 = gml_Script_InputGameHasFocus(param_1,param_2,&local_108,2,ppuVar6);
    uStack_12c = 0;
    local_138 = 0x402e000000000000;
    iVar2 = FUN_140e851f0(uVar4,&local_138,DAT_141955260,1);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (0 < iVar2) {
      local_d8 = 0xf8;
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      local_118 = 0;
      local_110 = 0;
      local_10c = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
      in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
      uVar7 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
      FUN_140e87440(uVar4,DAT_1419f5868,0x80000000,&local_128,uVar7,in_stack_fffffffffffffec0);
      FUN_140e87440(&local_128,DAT_141a55540,0x80000000,&local_f8,uVar7 & 0xffffffffffffff00,
                    in_stack_fffffffffffffec0 & 0xffffffffffffff00);
      local_138 = CONCAT44(uRam0000000141ddaabc,_DAT_141ddaab8);
      uStack_130 = uRam0000000141ddaac0;
      uStack_12c = DAT_141ddaac4;
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_138);
      local_48[0] = local_78;
      uVar4 = 0;
      switch(local_11c) {
      case 0:
      case 7:
      case 10:
      case 0xd:
switchD_140c6a2a3_caseD_0:
        uVar3 = FUN_140e4a8b0(&local_128);
        uVar4 = FUN_140e87250(uVar3);
        break;
      case 6:
        uVar4 = local_128;
        break;
      case 0xf:
        iVar2 = (int)((ulonglong)local_128 >> 0x20);
        if ((iVar2 == 0x1000000) || (iVar2 == 0x4000001)) goto switchD_140c6a2a3_caseD_0;
      }
      FUN_140e63610(uVar4,param_2,&local_118,1,&local_f8,local_48);
      local_d8 = 0xf9;
      uVar5 = 0x3ff00000;
      goto LAB_140c6a315;
    }
  }
  local_d8 = 0xfc;
LAB_140c6a315:
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = (ulonglong)uVar5 << 0x20;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

