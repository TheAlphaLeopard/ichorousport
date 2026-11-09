// gml_Script_vec_ceil_anon_5447_vec2_Vect2 @ 0x14063b3d0

uint * gml_Script_vec_ceil_anon_5447_vec2_Vect2(ulonglong param_1,undefined8 param_2,uint *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong in_stack_ffffffffffffff20;
  ulonglong local_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  uint local_bc;
  undefined8 local_b8;
  uint local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  local_50 = "gml_Script_vec_abs@anon@5200@vec2@Vect2";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0xb0;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_a8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_6c = 0;
  local_78 = 0;
  param_3[3] = 5;
  param_3[0] = 0;
  param_3[1] = 0;
  local_48 = 0xb2;
  uStack_cc = 6;
  in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffffffffff00;
  uVar4 = (ulonglong)pcVar3 & 0xffffffffffffff00;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_1419fe0e8,0x80000000,&local_b8,uVar4,in_stack_ffffffffffffff20);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  uStack_cc = 6;
  uVar4 = uVar4 & 0xffffffffffffff00;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_1419fe158,0x80000000,&local_c8,uVar4,
                in_stack_ffffffffffffff20 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar4 >> 0x20);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_68 = DAT_141a00978 & 0xffffff;
  uStack_64 = (int)(DAT_141a00978 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_64 == 0xf) {
    uStack_64 = 0x4000004;
  }
  else {
    uStack_64 = uStack_64 | 0x1000000;
  }
  uStack_cc = 0xf;
  local_d8 = CONCAT44(uStack_64,DAT_141a00978) & 0xffffffff00ffffff;
  uStack_60 = uStack_d0;
  uStack_5c = 0xf;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_68);
  local_40 = local_a8;
  if ((local_ac & 0xffffff) == 0) {
    uVar2 = (undefined4)local_b8;
  }
  else {
    uVar2 = FUN_140e4b060(&local_b8);
  }
  local_98 = FUN_140e78d00(uVar2);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_38 = &local_98;
  if ((local_bc & 0xffffff) == 0) {
    uVar2 = (undefined4)local_c8;
  }
  else {
    uVar2 = FUN_140e4b060(&local_c8);
  }
  local_88 = FUN_140e78d00(uVar2);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_30 = &local_88;
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_78,3,CONCAT44(uVar5,DAT_1419fd6d8),&local_40
                                );
  if (puVar1 != param_3) {
    local_68 = *puVar1;
    uStack_64 = puVar1[1];
    uStack_60 = puVar1[2];
    uStack_5c = puVar1[3];
    if ((1 << ((byte)param_3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_68);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

