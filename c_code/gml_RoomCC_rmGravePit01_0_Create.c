// gml_RoomCC_rmGravePit01_0_Create @ 0x14064d5a0

undefined8 *
gml_RoomCC_rmGravePit01_0_Create
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
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
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_70 = "gml_Script_wrap";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 5;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_b8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 7;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
LAB_14064d689:
    local_138 = *puVar1;
    uStack_130 = *(undefined4 *)(puVar1 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar1 + 0xc);
    FUN_140041b80(&local_c8,&local_138);
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 != &local_c8) goto LAB_14064d689;
  }
  local_68 = 8;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
LAB_14064d6ed:
    local_138 = *puVar1;
    uStack_130 = *(undefined4 *)(puVar1 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_138);
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
    if (puVar1 != &local_b8) goto LAB_14064d6ed;
  }
  local_60 = &local_b8;
  if (param_4 < 3) {
    puVar1 = &DAT_1419df7b0;
LAB_14064d73a:
    local_138 = *puVar1;
    uStack_130 = *(undefined4 *)(puVar1 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_138);
  }
  else {
    puVar1 = (undefined8 *)param_5[2];
    if (puVar1 != &local_a8) goto LAB_14064d73a;
  }
  local_58 = &local_a8;
  puVar1 = (undefined8 *)FUN_140e79230(&local_128,2,&local_60);
  if (puVar1 != &local_e8) {
    local_138 = *puVar1;
    uStack_130 = *(undefined4 *)(puVar1 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_138);
  }
  local_68 = 9;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
    if (puVar1 == &local_b8) goto LAB_14064d82e;
  }
  local_138 = *puVar1;
  uStack_130 = *(undefined4 *)(puVar1 + 1);
  uStack_12c = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_138);
LAB_14064d82e:
  local_60 = &local_b8;
  if ((param_4 < 3) || (puVar5 = (undefined8 *)param_5[2], puVar5 != &local_a8)) {
    local_138 = *puVar5;
    uStack_130 = *(undefined4 *)(puVar5 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_138);
  }
  local_58 = &local_a8;
  puVar5 = (undefined8 *)FUN_140e79090(&local_128,2,&local_60);
  uVar6 = 0xffffff;
  if (puVar5 != &local_d8) {
    local_138 = *puVar5;
    uStack_130 = *(undefined4 *)(puVar5 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
    FUN_140041b80(&local_d8,&local_138);
    uVar6 = local_cc;
  }
  local_68 = 0xb;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  local_100 = local_d0;
  bVar2 = (byte)uVar6 & 0x1f;
  uVar4 = 1 << bVar2 & 0x46;
  local_fc = uVar6;
  if (uVar4 == 0) {
    local_108 = local_d8;
  }
  else {
    FUN_1400419b0(&local_108,&local_d8);
  }
  FUN_1400462a0(&local_108,&local_e8);
  local_10c = local_bc;
  local_110 = local_c0;
  bVar3 = (byte)local_bc & 0x1f;
  if ((1 << bVar3 & 0x46U) == 0) {
    local_118 = local_c8;
  }
  else {
    FUN_1400419b0(&local_118,&local_c8);
  }
  FUN_1400462a0(&local_118,&local_e8);
  uStack_ec = local_10c;
  uStack_f0 = local_110;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
    local_f8 = local_118;
  }
  else {
    FUN_1400419b0(&local_f8,&local_118);
  }
  FUN_140046500(&local_f8,&local_108);
  local_138 = local_f8;
  uStack_130 = uStack_f0;
  uStack_12c = uStack_ec;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_138);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_60 = &local_b8;
  uStack_12c = local_cc;
  uStack_130 = local_d0;
  if (uVar4 == 0) {
    local_138 = local_d8;
  }
  else {
    FUN_1400419b0(&local_138,&local_d8);
  }
  FUN_1400462a0(&local_138,&local_e8);
  puVar5 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_128,1,CONCAT44(uVar7,DAT_1419fe728),&local_60);
  local_7c = *(undefined4 *)((longlong)puVar5 + 0xc);
  local_80 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) == 0) {
    local_88 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_88,puVar5);
  }
  FUN_140042560(&local_88,&local_138);
  local_fc = local_bc;
  local_100 = local_c0;
  if ((1 << bVar3 & 0x46U) == 0) {
    local_108 = local_c8;
  }
  else {
    FUN_1400419b0(&local_108,&local_c8);
  }
  FUN_1400462a0(&local_108,&local_e8);
  local_10c = local_fc;
  local_110 = local_100;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_118 = local_108;
  }
  else {
    FUN_1400419b0(&local_118,&local_108);
  }
  FUN_1400462a0(&local_118,&local_88);
  uStack_ec = local_10c;
  uStack_f0 = local_110;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
    local_f8 = local_118;
  }
  else {
    FUN_1400419b0(&local_f8,&local_118);
  }
  FUN_1400460e0(&local_f8,&local_e8);
  if (&local_f8 != param_3) {
    local_48 = (undefined4)local_f8;
    uStack_44 = local_f8._4_4_;
    uStack_40 = uStack_f0;
    uStack_3c = uStack_ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_48);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << bVar2 & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << bVar3 & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

