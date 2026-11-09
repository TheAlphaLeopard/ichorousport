// gml_Script_title_split_lines @ 0x140261ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_title_split_lines
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  uint local_58 [2];
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_b0 = "gml_Script_create_description_bubble";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 1;
  FUN_140041df0(local_58,param_4,4,param_5);
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_98,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 1;
  puVar3 = &DAT_1419df7b0;
  uVar4 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 4) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_50[3];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_a8 = 1;
    if ((int)local_58[0] < 4) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_50[3];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0xc010000000000000;
  }
  local_a8 = 3;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if ((int)local_58[0] < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_140261e3d:
    local_c8 = *puVar2;
    uStack_c0 = *(undefined4 *)(puVar2 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_c8);
  }
  else {
    puVar2 = (undefined8 *)*local_50;
    if (puVar2 != &local_98) goto LAB_140261e3d;
  }
  local_48 = &local_98;
  if ((int)local_58[0] < 2) {
    puVar2 = &DAT_1419df7b0;
LAB_140261e8a:
    local_c8 = *puVar2;
    uStack_c0 = *(undefined4 *)(puVar2 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_c8);
  }
  else {
    puVar2 = (undefined8 *)local_50[1];
    if (puVar2 != &local_88) goto LAB_140261e8a;
  }
  local_40 = &local_88;
  local_c8 = CONCAT44(uRam0000000141dce0ac,_DAT_141dce0a8);
  uStack_c0 = uRam0000000141dce0b0;
  uStack_bc = DAT_141dce0b4;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_c8);
  local_38 = local_78;
  uStack_bc = 0xf;
  local_c8 = 0x10000000000007c;
  local_f8 = 0x7c;
  uStack_f4 = 0x1000000;
  uStack_f0 = uStack_c0;
  uStack_ec = 0xf;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_f8);
  local_30 = local_68;
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_108,4,CONCAT44(uVar5,DAT_141a0a7c8),&local_48);
  if (puVar2 != &local_118) {
    local_f8 = *(undefined4 *)puVar2;
    uStack_f4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_f0 = *(undefined4 *)(puVar2 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_f8);
  }
  local_a8 = 5;
  if ((int)local_58[0] < 4) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_50[3];
    if (puVar2 == &local_d8) goto LAB_140262002;
  }
  local_f8 = *(undefined4 *)puVar2;
  uStack_f4 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_f0 = *(undefined4 *)(puVar2 + 1);
  uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_f8);
LAB_140262002:
  FUN_140e87930(&local_118,DAT_141a1f440,0x80000000,&local_d8);
  local_a8 = 6;
  if (((int)local_58[0] < 3) || (puVar3 = (undefined8 *)local_50[2], puVar3 != &local_e8)) {
    local_f8 = *(undefined4 *)puVar3;
    uStack_f4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_f0 = *(undefined4 *)(puVar3 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_f8);
  }
  FUN_140e87930(&local_118,DAT_141a56c70,0x80000000,&local_e8);
  local_a8 = 8;
  if (&local_118 != param_3) {
    local_f8 = (undefined4)local_118;
    uStack_f4 = local_118._4_4_;
    uStack_f0 = uStack_110;
    uStack_ec = uStack_10c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_f8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,4,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar3 = local_50;
    do {
      puVar2 = (undefined8 *)*puVar3;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar3 = puVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

