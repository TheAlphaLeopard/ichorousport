// gml_Script___jb_track_get_name @ 0x14039f570

undefined8 *
gml_Script___jb_track_get_name
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulonglong in_stack_ffffffffffffff20;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58 [2];
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  
  local_80 = "gml_Script_jb_stack_layer_play_active";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x19a;
  FUN_140041df0(local_58,param_4,2,param_5);
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_a8,0x10,2,FUN_1400424d0,FUN_140041b30);
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f4a68);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x19a;
  puVar5 = &DAT_1419df7b0;
  uVar4 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_50[1];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_78 = 0x19a;
    uStack_5c = 0xd;
    local_68 = 0;
    if ((int)local_58[0] < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_50[1];
      if (&local_68 == puVar3) goto LAB_14039f6d4;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = uStack_60;
    uStack_bc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_c8);
  }
LAB_14039f6d4:
  local_78 = 0x19b;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  FUN_140e87440(uVar2,DAT_1419f4be8,0x80000000,&local_b8,(ulonglong)pcVar6 & 0xffffffffffffff00,
                in_stack_ffffffffffffff20 & 0xffffffffffffff00);
  if ((int)local_58[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_50;
    if (puVar3 == &local_a8) goto LAB_14039f76a;
  }
  local_c8 = *(undefined4 *)puVar3;
  uStack_c4 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_c0 = *(undefined4 *)(puVar3 + 1);
  uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_c8);
LAB_14039f76a:
  local_48 = &local_a8;
  if (((int)local_58[0] < 2) || (puVar5 = (undefined8 *)local_50[1], puVar5 != &local_98)) {
    local_c8 = *(undefined4 *)puVar5;
    uStack_c4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_c0 = *(undefined4 *)(puVar5 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_c8);
  }
  local_40 = &local_98;
  uVar2 = FUN_140069500(uVar2);
  puVar5 = (undefined8 *)FUN_140e63610(uVar2,param_2,&local_d8,2,&local_b8,&local_48);
  if (puVar5 != param_3) {
    local_c8 = *(undefined4 *)puVar5;
    uStack_c4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_c0 = *(undefined4 *)(puVar5 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_c8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,2,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar5 = local_50;
    do {
      puVar3 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

