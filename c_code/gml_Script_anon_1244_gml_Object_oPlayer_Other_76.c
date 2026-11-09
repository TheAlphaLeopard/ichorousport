// gml_Script_anon_1244_gml_Object_oPlayer_Other_76 @ 0x140c7f610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1244_gml_Object_oPlayer_Other_76
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong in_stack_ffffffffffffff00;
  longlong *local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_50 = "gml_Script_anon@785@gml_Object_oPlayer_Other_76";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x25;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_88,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x27;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8458);
  local_ec = 6;
  in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffffffffffff00;
  uVar3 = (ulonglong)pcVar2 & 0xffffffffffffff00;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_1419fe0e8,0x80000000,&local_c8,uVar3,in_stack_ffffffffffffff00);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 6;
  in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffffffffffff00;
  uVar3 = uVar3 & 0xffffffffffffff00;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_141a0f7f8,0x80000000,&local_b8,uVar3,in_stack_ffffffffffffff00);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 6;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_141a101f8,0x80000000,&local_d8,uVar3 & 0xffffffffffffff00,
                in_stack_ffffffffffffff00 & 0xffffffffffffff00);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = (longlong *)0x4000000000000000;
  FUN_140042560(&local_f8,&local_b8);
  uStack_dc = local_bc;
  uStack_e0 = local_c0;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
    local_e8 = local_c8;
  }
  else {
    FUN_1400419b0(&local_e8,&local_c8);
  }
  FUN_1400462a0(&local_e8,&local_f8);
  local_a8 = (undefined4)local_e8;
  uStack_a4 = local_e8._4_4_;
  uStack_a0 = uStack_e0;
  uStack_9c = uStack_dc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_40 = local_88;
  uStack_dc = local_cc;
  uStack_e0 = local_d0;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
    local_e8 = local_d8;
  }
  else {
    FUN_1400419b0(&local_e8,&local_d8);
  }
  local_ec = 7;
  local_f8 = (longlong *)CONCAT44(local_f8._4_4_,2);
  FUN_1400460e0(&local_e8,&local_f8);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_a8 = (undefined4)local_e8;
  uStack_a4 = local_e8._4_4_;
  uStack_a0 = uStack_e0;
  uStack_9c = uStack_dc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_38 = local_78;
  local_a8 = _DAT_141ddabc8;
  uStack_a4 = uRam0000000141ddabcc;
  uStack_a0 = uRam0000000141ddabd0;
  uStack_9c = DAT_141ddabd4;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_a8);
  local_30 = local_68;
  FUN_140e63610(param_1,param_2,&local_98,3,uVar1,&local_40);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

