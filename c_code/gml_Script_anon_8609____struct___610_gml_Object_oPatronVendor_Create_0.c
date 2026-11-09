// gml_Script_anon_8609____struct___610_gml_Object_oPatronVendor_Create_0 @ 0x140bd58b0

undefined8 *
gml_Script_anon_8609____struct___610_gml_Object_oPatronVendor_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  ulonglong in_stack_fffffffffffffeb0;
  longlong *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
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
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_b0 = "gml_Script_anon@8145@___struct___610@gml_Object_oPatronVendor_Create_0";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x1c9;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_98,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x1ca;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = 0;
  FUN_140e87930(uVar1,DAT_141a0a968,0x80000000,&local_f8);
  local_a8 = 0x1cb;
  uStack_13c = 0xf;
  local_148 = (longlong *)0x100000100000325;
  local_138 = 0x100000100000325;
  uStack_130 = uStack_140;
  uStack_12c = 0xf;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_138);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_e8);
  local_a8 = 0x1cc;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  uStack_13c = 6;
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
  uVar3 = (ulonglong)pcVar2 & 0xffffffffffffff00;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_1419fe0e8,0x80000000,&local_108,uVar3,in_stack_fffffffffffffeb0);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  uStack_13c = 6;
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
  uVar3 = uVar3 & 0xffffffffffffff00;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_1419fe158,0x80000000,&local_118,uVar3,in_stack_fffffffffffffeb0);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  uStack_13c = 6;
  uVar3 = uVar3 & 0xffffffffffffff00;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_141a1b910,0x80000000,&local_c8,uVar3,
                in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar3 >> 0x20);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  uStack_13c = 0;
  local_148 = (longlong *)0x4030000000000000;
  FUN_140042560(&local_148,uVar1);
  uStack_12c = local_fc;
  uStack_130 = local_100;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_138 = local_108;
  }
  else {
    FUN_1400419b0(&local_138,&local_108);
  }
  FUN_1400460e0(&local_138,&local_148);
  local_d8 = (undefined4)local_138;
  uStack_d4 = local_138._4_4_;
  uStack_d0 = uStack_130;
  uStack_cc = uStack_12c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_58 = local_98;
  uStack_12c = local_10c;
  uStack_130 = local_110;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
    local_138 = local_118;
  }
  else {
    FUN_1400419b0(&local_138,&local_118);
  }
  uStack_13c = 7;
  local_148 = (longlong *)CONCAT44(local_148._4_4_,0x20);
  FUN_1400462a0(&local_138,&local_148);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_d8 = (undefined4)local_138;
  uStack_d4 = local_138._4_4_;
  uStack_d0 = uStack_130;
  uStack_cc = uStack_12c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_d8);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_50 = local_88;
  local_d8 = (undefined4)local_c8;
  uStack_d4 = local_c8._4_4_;
  uStack_d0 = uStack_c0;
  uStack_cc = uStack_bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_d8);
  uStack_13c = 0xf;
  local_148 = (longlong *)0x10000000000010c;
  local_d8 = 0x10c;
  uStack_d4 = 0x1000000;
  uStack_d0 = uStack_140;
  uStack_cc = 0xf;
  local_48 = local_78;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_d8);
  local_40 = local_68;
  FUN_140e634e0(param_1,param_2,&local_128,4,CONCAT44(uVar4,DAT_141a0a7c8),&local_58);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

