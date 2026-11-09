// gml_Script_vec_sign_anon_5573_vec2_Vect2 @ 0x14063b710

uint * gml_Script_vec_sign_anon_5573_vec2_Vect2(ulonglong param_1,undefined8 param_2,uint *param_3)

{
  uint *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined4 uVar5;
  undefined8 uVar4;
  ulonglong in_stack_fffffffffffffee0;
  ulonglong local_118;
  uint uStack_110;
  undefined4 uStack_10c;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  ulonglong local_f8;
  uint uStack_f0;
  undefined4 uStack_ec;
  ulonglong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  uint local_78 [3];
  byte local_6c;
  uint local_68 [3];
  byte local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  uint *local_28;
  uint *local_20;
  
  local_50 = "gml_Script_vec_floor@anon@5322@vec2@Vect2";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0xb4;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_dc = 0xffffff;
  local_e8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_ac = 0;
  local_b8 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  param_3[3] = 5;
  param_3[0] = 0;
  param_3[1] = 0;
  local_48 = 0xb6;
  uStack_10c = 6;
  in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffffffffffff00;
  uVar3 = (ulonglong)pcVar2 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_e8,uVar3,in_stack_fffffffffffffee0);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = local_e8;
  uStack_110 = uStack_e0;
  uStack_10c = uStack_dc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_118);
  local_40 = local_a8;
  uStack_10c = 6;
  uVar3 = uVar3 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe158,0x80000000,&local_f8,uVar3,
                in_stack_fffffffffffffee0 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar3 >> 0x20);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = local_f8;
  uStack_110 = uStack_f0;
  uStack_10c = uStack_ec;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_118);
  local_38 = local_98;
  local_108 = DAT_141a00978 & 0xffffff;
  uStack_104 = (int)(DAT_141a00978 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_104 == 0xf) {
    uStack_104 = 0x4000004;
  }
  else {
    uStack_104 = uStack_104 | 0x1000000;
  }
  uStack_10c = 0xf;
  local_118 = CONCAT44(uStack_104,DAT_141a00978) & 0xffffffff00ffffff;
  uStack_100 = uStack_110;
  uStack_fc = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_108);
  local_30 = local_88;
  uVar4 = CONCAT44(uVar5,DAT_1419fe728);
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_c8,1,uVar4,&local_40);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar1 != local_78) {
    local_108 = *puVar1;
    uStack_104 = puVar1[1];
    uStack_100 = puVar1[2];
    uStack_fc = puVar1[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_108);
  }
  local_28 = local_78;
  uVar4 = CONCAT44(uVar5,DAT_1419fe728);
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_d8,1,uVar4,&local_38);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar1 != local_68) {
    local_108 = *puVar1;
    uStack_104 = puVar1[1];
    uStack_100 = puVar1[2];
    uStack_fc = puVar1[3];
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_108);
  }
  local_20 = local_68;
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_b8,3,CONCAT44(uVar5,DAT_1419fd6d8),&local_30
                                );
  if (puVar1 != param_3) {
    local_108 = *puVar1;
    uStack_104 = puVar1[1];
    uStack_100 = puVar1[2];
    uStack_fc = puVar1[3];
    if ((1 << ((byte)param_3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_108);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

