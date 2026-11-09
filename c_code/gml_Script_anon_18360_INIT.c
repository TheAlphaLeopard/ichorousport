// gml_Script_anon_18360_INIT @ 0x1402eb400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_anon_18360_INIT(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined4 uVar8;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined1 **local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 **local_90;
  undefined8 local_88;
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined8 local_38;
  undefined4 local_2c;
  
  local_c0 = "gml_Script_anon@17914@INIT";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x2b6;
  _eh_vector_constructor_iterator_(&local_88,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = (undefined1 *)0x0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_11c = 0;
  local_128 = 0;
  local_2c = 0;
  local_38 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x2b8;
  local_138 = (undefined1 *)CONCAT44(uRam00000001419e3c14,_DAT_1419e3c10);
  uStack_130 = uRam00000001419e3c18;
  uStack_12c = uRam00000001419e3c1c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_138);
  local_b0 = (undefined1 **)&local_88;
  local_138 = (undefined1 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_130 = DAT_1419df7b8;
  uStack_12c = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_138);
  local_a8 = (undefined8 *)local_78;
  local_138 = (undefined1 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_130 = DAT_1419df7b8;
  uStack_12c = DAT_1419df7bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_138);
  ppuVar7 = &local_b0;
  local_a0 = local_68;
  ppuVar4 = (undefined1 **)gml_Script_InputIconGetDirect(param_1,param_2,&local_128,3,ppuVar7);
  uVar8 = (undefined4)((ulonglong)ppuVar7 >> 0x20);
  if (ppuVar4 != &local_118) {
    local_138 = *ppuVar4;
    uStack_130 = *(undefined4 *)(ppuVar4 + 1);
    uStack_12c = *(undefined4 *)((longlong)ppuVar4 + 0xc);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
  }
  local_b8 = 0x2ba;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  local_b0 = &local_118;
  uVar5 = FUN_140e634e0(param_1,param_2,&local_128,1,CONCAT44(uVar8,DAT_141a09158),&local_b0);
  uStack_12c = 0;
  local_138 = &DAT_bff0000000000000;
  iVar3 = FUN_140e851f0(uVar5,&local_138,DAT_141955260,0);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar3 == 0) {
    uStack_12c = local_10c;
    uStack_130 = local_110;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
      local_138 = local_118;
    }
    else {
      FUN_1400419b0(&local_138,&local_118);
    }
    puVar6 = &local_138;
    bVar2 = true;
    bVar1 = false;
  }
  else {
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uStack_fc = DAT_141dcf1e4;
    uStack_100 = DAT_141dcf1e0;
    if ((1 << ((byte)DAT_141dcf1e4 & 0x1f) & 0x46U) == 0) {
      local_108 = DAT_141dcf1d8;
    }
    else {
      FUN_1400419b0(&local_108,&DAT_141dcf1d8);
    }
    uVar8 = uStack_fc;
    local_d8 = (undefined4)local_108;
    uStack_d4 = local_108._4_4_;
    uStack_d0 = uStack_100;
    uStack_cc = uStack_fc;
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    FUN_140041b80(local_58,&local_d8);
    if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_98 = local_58;
    local_90 = &local_118;
    puVar6 = (undefined8 *)FUN_140e64420(param_1,param_2,&local_f8,2,&local_98);
    uStack_fc = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_100 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_108 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_108,puVar6);
    }
    puVar6 = &local_108;
    bVar2 = false;
    bVar1 = true;
  }
  local_d8 = *(undefined4 *)puVar6;
  uStack_d4 = *(undefined4 *)((longlong)puVar6 + 4);
  uStack_d0 = *(undefined4 *)(puVar6 + 1);
  uStack_cc = *(undefined4 *)((longlong)puVar6 + 0xc);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_d8);
  if (bVar1) {
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
  }
  if ((bVar2) && ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_138);
  }
  local_b8 = 700;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uStack_12c = DAT_141dcef84;
  uStack_130 = DAT_141dcef80;
  if ((1 << ((byte)DAT_141dcef84 & 0x1f) & 0x46U) == 0) {
    local_138 = DAT_141dcef78;
  }
  else {
    FUN_1400419b0(&local_138,&DAT_141dcef78);
  }
  uVar8 = uStack_12c;
  local_d8 = (undefined4)local_138;
  uStack_d4 = local_138._4_4_;
  uStack_d0 = uStack_130;
  uStack_cc = uStack_12c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_d8);
  if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_b0 = (undefined1 **)&local_88;
  local_a8 = &local_e8;
  puVar6 = (undefined8 *)FUN_140e64420(param_1,param_2,&local_128,2,&local_b0);
  if (puVar6 != param_3) {
    local_d8 = *(undefined4 *)puVar6;
    uStack_d4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_d0 = *(undefined4 *)(puVar6 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_d8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(&local_88,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

