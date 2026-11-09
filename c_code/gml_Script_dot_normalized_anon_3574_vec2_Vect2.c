// gml_Script_dot_normalized_anon_3574_vec2_Vect2 @ 0x140638580

uint * gml_Script_dot_normalized_anon_3574_vec2_Vect2
                 (undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  ulonglong in_stack_ffffffffffffff10;
  undefined8 local_e8;
  uint uStack_e0;
  uint uStack_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_60 = "gml_Script_inverse@anon@3205@vec2@Vect2";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x75;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_9c = 0;
  local_a8 = 0;
  param_3[3] = 5;
  param_3[0] = 0;
  param_3[1] = 0;
  local_58 = 0x78;
  uStack_dc = 6;
  in_stack_ffffffffffffff10 = in_stack_ffffffffffffff10 & 0xffffffffffffff00;
  uVar3 = (ulonglong)pcVar2 & 0xffffffffffffff00;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_1419fe0e8,0x80000000,&local_b8,uVar3,in_stack_ffffffffffffff10);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  uStack_dc = 6;
  uVar3 = uVar3 & 0xffffffffffffff00;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_1419fe158,0x80000000,&local_c8,uVar3,
                in_stack_ffffffffffffff10 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar3 >> 0x20);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_d8 = DAT_141a00978 & 0xffffff;
  uStack_d4 = (int)(DAT_141a00978 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_d4 == 0xf) {
    uStack_d4 = 0x4000004;
  }
  else {
    uStack_d4 = uStack_d4 | 0x1000000;
  }
  uStack_dc = 0xf;
  local_e8 = CONCAT44(uStack_d4,DAT_141a00978) & 0xffffffff00ffffff;
  uStack_d0 = uStack_e0;
  uStack_cc = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_50 = local_98;
  uStack_dc = 0;
  local_e8 = 0x3ff0000000000000;
  FUN_140046500(&local_e8,&local_b8);
  local_d8 = (uint)local_e8;
  uStack_d4 = local_e8._4_4_;
  uStack_d0 = uStack_e0;
  uStack_cc = uStack_dc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_d8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_48 = local_88;
  uStack_dc = 0;
  local_e8 = 0x3ff0000000000000;
  FUN_140046500(&local_e8,&local_c8);
  local_d8 = (uint)local_e8;
  uStack_d4 = local_e8._4_4_;
  uStack_d0 = uStack_e0;
  uStack_cc = uStack_dc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_d8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_40 = local_78;
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_a8,3,CONCAT44(uVar4,DAT_1419fd6d8),&local_50
                                );
  if (puVar1 != param_3) {
    local_d8 = *puVar1;
    uStack_d4 = puVar1[1];
    uStack_d0 = puVar1[2];
    uStack_cc = puVar1[3];
    if ((1 << ((byte)param_3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_d8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

