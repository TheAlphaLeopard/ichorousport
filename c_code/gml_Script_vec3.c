// gml_Script_vec3 @ 0x140645450

uint * gml_Script_vec3(longlong *param_1,undefined8 param_2,uint *param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong in_stack_fffffffffffffef0;
  longlong *local_108;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  uint local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  
  local_70 = "gml_Script_vec_sign@anon@13460@vec3@Vect2";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x1bb;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_d8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_8c = 0;
  local_98 = 0;
  param_3[3] = 5;
  param_3[0] = 0;
  param_3[1] = 0;
  local_68 = 0x1bd;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05ca8);
  uStack_fc = 6;
  in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
  uVar5 = (ulonglong)pcVar4 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe0e8,0x80000000,&local_e8,uVar5,in_stack_fffffffffffffef0);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_fc = 6;
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_f8,uVar5,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  uVar6 = (undefined4)(uVar5 >> 0x20);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_88 = DAT_141a00788 & 0xffffff;
  uStack_84 = (int)(DAT_141a00788 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_84 == 0xf) {
    uStack_84 = 0x4000004;
  }
  else {
    uStack_84 = uStack_84 | 0x1000000;
  }
  uStack_fc = 0xf;
  local_108 = (longlong *)(CONCAT44(uStack_84,DAT_141a00788) & 0xffffffff00ffffff);
  uStack_80 = uStack_100;
  uStack_7c = 0xf;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_88);
  local_60 = local_d8;
  if ((local_dc & 0xffffff) == 0) {
    uVar3 = (undefined4)local_e8;
  }
  else {
    uVar3 = FUN_140e4b060(&local_e8);
  }
  local_c8 = FUN_140e79500(uVar3);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_58 = &local_c8;
  if ((local_ec & 0xffffff) == 0) {
    uVar3 = (undefined4)local_f8;
  }
  else {
    uVar3 = FUN_140e4b060(&local_f8);
  }
  local_b8 = FUN_140e79500(uVar3);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_50 = &local_b8;
  if ((*(uint *)((longlong)puVar1 + 0xc) & 0xffffff) == 0) {
    uVar3 = (undefined4)*puVar1;
  }
  else {
    uVar3 = FUN_140e4b060(puVar1);
  }
  local_a8 = FUN_140e79500(uVar3);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_48 = &local_a8;
  puVar2 = (uint *)FUN_140e634e0(param_1,param_2,&local_98,4,CONCAT44(uVar6,DAT_1419fd6d8),&local_60
                                );
  if (puVar2 != param_3) {
    local_88 = *puVar2;
    uStack_84 = puVar2[1];
    uStack_80 = puVar2[2];
    uStack_7c = puVar2[3];
    if ((1 << ((byte)param_3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_88);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

