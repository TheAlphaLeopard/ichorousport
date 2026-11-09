// gml_Script_set_sound_tag_gain_anon_11898___scribble_class_typist___scribble_class_typist @ 0x140169760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_set_sound_tag_gain_anon_11898___scribble_class_typist___scribble_class_typist
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined1 **ppuVar7;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  
  local_e0 = "gml_Script_sync_to_sound@anon@10958@__scribble_class_typist@__scribble_class_typist";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x18e;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_a8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ec = 0;
  local_f8 = 0;
  local_c4 = 0;
  local_d0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 400;
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  uStack_fc = 0;
  local_108 = 0x41186a0000000000;
  iVar2 = FUN_140e851f0(puVar4,&local_108,DAT_141955260,1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (!(iVar2 == -2 || -1 < iVar2)) {
    local_d8 = 0x192;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    local_108 = CONCAT44(uRam0000000141dcb9ac,_DAT_141dcb9a8);
    uStack_100 = uRam0000000141dcb9b0;
    uStack_fc = DAT_141dcb9b4;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_108);
    local_60 = local_98;
    ppuVar7 = &local_60;
    FUN_1401ef7f0(param_1,param_2,&local_f8,1,ppuVar7);
    uVar5 = (undefined4)((ulonglong)ppuVar7 >> 0x20);
  }
  local_d8 = 0x195;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140169961:
    local_108 = *puVar4;
    uStack_100 = *(undefined4 *)(puVar4 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_108);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_a8) goto LAB_140169961;
  }
  local_68 = &local_a8;
  uVar3 = FUN_140e634e0(param_1,param_2,&local_f8,1,CONCAT44(uVar5,DAT_141a07888),&local_68);
  cVar1 = FUN_140e491e0(uVar3);
  uVar5 = 0;
  if (cVar1 != '\0') goto LAB_140169ac5;
  local_d8 = 0x197;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 5;
  local_108 = CONCAT44(uRam0000000141dcba5c,_DAT_141dcba58);
  uStack_100 = uRam0000000141dcba60;
  uStack_fc = DAT_141dcba64;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_108);
  local_60 = local_98;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140169a34:
    local_108 = *puVar4;
    uStack_100 = *(undefined4 *)(puVar4 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_108);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_88) goto LAB_140169a34;
  }
  local_58 = &local_88;
  local_108 = CONCAT44(uRam0000000141dcb9ec,_DAT_141dcb9e8);
  uStack_100 = uRam0000000141dcb9f0;
  uStack_fc = DAT_141dcb9f4;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_108);
  local_50 = local_78;
  FUN_1401ef7f0(param_1,param_2,&local_d0,3,&local_60);
  uVar5 = local_c4;
LAB_140169ac5:
  local_d8 = 0x19a;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03d88);
  uStack_fc = 0xd;
  local_108 = 0;
  if (&local_108 != puVar4) {
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = uStack_100;
    uStack_ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_b8);
  }
  local_d8 = 0x19b;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07768);
  uStack_fc = 0xd;
  local_108 = 0;
  if (&local_108 != puVar4) {
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = uStack_100;
    uStack_ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_b8);
  }
  local_d8 = 0x19d;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07748);
  FUN_140e63610(param_1,param_2,&local_f8,0,uVar3,0);
  local_d8 = 0x19e;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07918);
  uStack_fc = 0xd;
  local_108 = 0x3ff0000000000000;
  if (&local_108 != puVar4) {
    local_b8 = 0;
    uStack_b4 = 0x3ff00000;
    uStack_b0 = uStack_100;
    uStack_ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_b8);
  }
  local_d8 = 0x19f;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07b68);
  FUN_140e609c0(param_1);
  if (0 < param_4) {
    puVar6 = (undefined8 *)*param_5;
  }
  if (puVar6 != puVar4) {
    local_b8 = *(undefined4 *)puVar6;
    uStack_b4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_b0 = *(undefined4 *)(puVar6 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_b8);
  }
  FUN_140e60910(1);
  local_d8 = 0x1a1;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar3 = FUN_140e5c910();
  FUN_140e42c10(uVar3,param_1);
  if ((1 << ((byte)uVar5 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

