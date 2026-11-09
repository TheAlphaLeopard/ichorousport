// gml_Script_anon_736_gml_Object_oBossThePestOld_Other_76 @ 0x14083f880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_736_gml_Object_oBossThePestOld_Other_76
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined4 uVar8;
  undefined1 **ppuVar7;
  ulonglong in_stack_fffffffffffffea0;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined4 local_d8 [3];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined4 *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@388@gml_Object_oBossThePestOld_Other_76";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x10;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_118,0x10,6,FUN_1400424d0,FUN_140041b30);
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_12c = 0;
  local_138 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x12;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  uStack_11c = 0;
  local_128 = 0xc008000000000000;
  FUN_140042560(&local_128,uVar2);
  FUN_1400460e0(uVar3,&local_128);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_38 = 0x13;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  in_stack_fffffffffffffea0 = in_stack_fffffffffffffea0 & 0xffffffffffffff00;
  uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar1,DAT_141a1f3d0,0x80000000,&local_58,uVar6,in_stack_fffffffffffffea0);
  uStack_13c = 6;
  in_stack_fffffffffffffea0 = in_stack_fffffffffffffea0 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_1419fe0e8,0x80000000,&local_98,uVar6,in_stack_fffffffffffffea0);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  uStack_13c = 6;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_1419fe158,0x80000000,&local_a8,uVar6,
                in_stack_fffffffffffffea0 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar6 >> 0x20);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  uStack_13c = 0;
  local_148 = (longlong *)0x402c000000000000;
  FUN_140042560(&local_148,uVar2);
  uStack_11c = local_8c;
  uStack_120 = local_90;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
    local_128 = local_98;
  }
  else {
    FUN_1400419b0(&local_128,&local_98);
  }
  FUN_1400460e0(&local_128,&local_148);
  local_158 = (undefined4)local_128;
  uStack_154 = local_128._4_4_;
  uStack_150 = uStack_120;
  uStack_14c = uStack_11c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_158);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_88 = local_118;
  uStack_11c = local_9c;
  uStack_120 = local_a0;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
    local_128 = local_a8;
  }
  else {
    FUN_1400419b0(&local_128,&local_a8);
  }
  uStack_13c = 7;
  local_148 = (longlong *)CONCAT44(local_148._4_4_,10);
  FUN_1400460e0(&local_128,&local_148);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_158 = (undefined4)local_128;
  uStack_154 = local_128._4_4_;
  uStack_150 = uStack_120;
  uStack_14c = uStack_11c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_158);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_80 = local_108;
  local_158 = _DAT_1419e8de0;
  uStack_154 = uRam00000001419e8de4;
  uStack_150 = uRam00000001419e8de8;
  uStack_14c = uRam00000001419e8dec;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_158);
  local_78 = local_f8;
  local_158 = (undefined4)local_58;
  uStack_154 = local_58._4_4_;
  uStack_150 = uStack_50;
  uStack_14c = uStack_4c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_158);
  local_70 = local_e8;
  puVar4 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_b8,3,CONCAT44(uVar8,DAT_1419fdca8),&local_88);
  if (puVar4 != local_d8) {
    local_158 = *puVar4;
    uStack_154 = puVar4[1];
    uStack_150 = puVar4[2];
    uStack_14c = puVar4[3];
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_158);
  }
  local_68 = local_d8;
  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
            (param_1,param_2,&local_138,2,&local_70);
  local_38 = 0x15;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  local_158 = _DAT_1419e8dd0;
  uStack_154 = uRam00000001419e8dd4;
  uStack_150 = uRam00000001419e8dd8;
  uStack_14c = uRam00000001419e8ddc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_158);
  local_88 = local_118;
  local_158 = _DAT_1419e8d70;
  uStack_154 = uRam00000001419e8d74;
  uStack_150 = uRam00000001419e8d78;
  uStack_14c = uRam00000001419e8d7c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_158);
  local_80 = local_108;
  local_158 = _DAT_1419e8de0;
  uStack_154 = uRam00000001419e8de4;
  uStack_150 = uRam00000001419e8de8;
  uStack_14c = uRam00000001419e8dec;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_158);
  local_78 = local_f8;
  local_158 = (undefined4)DAT_1419df7b0;
  uStack_154 = DAT_1419df7b0._4_4_;
  uStack_150 = DAT_1419df7b8;
  uStack_14c = DAT_1419df7bc;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_158);
  local_70 = local_e8;
  ppuVar7 = &local_88;
  FUN_14044e5b0(param_1,param_2,&local_138,4,&local_88);
  uVar8 = (undefined4)((ulonglong)ppuVar7 >> 0x20);
  local_38 = 0x16;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uStack_13c = 0xf;
  local_148 = (longlong *)0x10000020000016a;
  local_158 = 0x16a;
  uStack_154 = 0x1000002;
  uStack_150 = uStack_140;
  uStack_14c = 0xf;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_158);
  local_88 = local_118;
  local_158 = _DAT_1419e8dc0;
  uStack_154 = uRam00000001419e8dc4;
  uStack_150 = uRam00000001419e8dc8;
  uStack_14c = uRam00000001419e8dcc;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_158);
  local_80 = local_108;
  local_158 = _DAT_1419df7a0;
  uStack_154 = uRam00000001419df7a4;
  uStack_150 = uRam00000001419df7a8;
  uStack_14c = uRam00000001419df7ac;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_158);
  local_78 = local_f8;
  local_158 = _DAT_1419e8d60;
  uStack_154 = uRam00000001419e8d64;
  uStack_150 = uRam00000001419e8d68;
  uStack_14c = uRam00000001419e8d6c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_158);
  local_70 = local_e8;
  local_158 = (undefined4)DAT_1419df7b0;
  uStack_154 = DAT_1419df7b0._4_4_;
  uStack_150 = DAT_1419df7b8;
  uStack_14c = DAT_1419df7bc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_158);
  local_68 = local_d8;
  local_158 = _DAT_1419e8da0;
  uStack_154 = uRam00000001419e8da4;
  uStack_150 = uRam00000001419e8da8;
  uStack_14c = uRam00000001419e8dac;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_158);
  local_60 = local_c8;
  FUN_140e634e0(param_1,param_2,&local_138,6,CONCAT44(uVar8,DAT_141a0a2e8),&local_88);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(local_118,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

