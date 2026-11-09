// gml_Script_bmm_sfx_toggle_check @ 0x1404192d0

longlong *
gml_Script_bmm_sfx_toggle_check
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar8;
  undefined8 uVar7;
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
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined4 *local_b0;
  undefined8 *local_a8;
  undefined4 *local_a0;
  undefined8 *local_98;
  undefined4 local_88 [3];
  byte local_7c;
  undefined4 local_68 [3];
  byte local_5c;
  
  local_c0 = "gml_Script_level_flavor_exists";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 8;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(local_88,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8 = 0;
  puVar2 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f63e8);
  puVar3 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f63c8);
  local_10c = 0;
  uVar6 = 0;
  local_118 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 10;
  local_fc = DAT_141dd2a84;
  local_100 = DAT_141dd2a80;
  if ((1 << ((byte)DAT_141dd2a84 & 0x1f) & 0x46U) == 0) {
    local_108 = DAT_141dd2a78;
  }
  else {
    FUN_1400419b0(&local_108,&DAT_141dd2a78);
  }
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  uVar5 = 1 << ((byte)local_fc & 0x1f) & 0x46;
  uStack_e0 = local_100;
  uStack_dc = local_fc;
  if (uVar5 == 0) {
    local_e8 = local_108;
  }
  else {
    FUN_1400419b0(&local_e8,&local_108);
  }
  FUN_1400460e0(&local_e8,param_5);
  local_d8 = (undefined4)local_e8;
  uStack_d4 = local_e8._4_4_;
  uStack_d0 = uStack_e0;
  uStack_cc = uStack_dc;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_d8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if (uVar5 != 0) {
    FUN_140041a50(&local_108);
  }
  local_b8 = 0xc;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  if (puVar2 != local_88) {
    local_d8 = *puVar2;
    uStack_d4 = puVar2[1];
    uStack_d0 = puVar2[2];
    uStack_cc = puVar2[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_d8);
  }
  local_b0 = local_88;
  local_a8 = &local_f8;
  uVar7 = CONCAT44(uVar8,DAT_1419fcba8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_118,2,uVar7,&local_b0);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    if (puVar3 != local_68) {
      local_d8 = *puVar3;
      uStack_d4 = puVar3[1];
      uStack_d0 = puVar3[2];
      uStack_cc = puVar3[3];
      if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_68);
      }
      FUN_140041b80(local_68,&local_d8);
    }
    local_a0 = local_68;
    local_98 = &local_f8;
    uVar4 = FUN_140e634e0(param_1,param_2,&local_128,2,CONCAT44(uVar8,DAT_1419fcba8),&local_a0);
    cVar1 = FUN_140e491e0(uVar4);
  }
  else {
    cVar1 = '\x01';
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (cVar1 != '\0') {
    uVar6 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar6 << 0x20;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

