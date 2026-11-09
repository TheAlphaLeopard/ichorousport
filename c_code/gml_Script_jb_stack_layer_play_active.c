// gml_Script_jb_stack_layer_play_active @ 0x14039ef20

undefined8 *
gml_Script_jb_stack_layer_play_active
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  code *pcVar6;
  ulonglong in_stack_ffffffffffffff00;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  
  local_90 = "gml_Script_jb_stack_layer_play";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x18c;
  FUN_140041df0(local_68,param_4,3,param_5);
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_c8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f4a68);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x18c;
  puVar4 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_60[2];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_88 = 0x18c;
    uStack_6c = 0xd;
    local_78 = 0;
    if ((int)local_68[0] < 3) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_60[2];
      if (&local_78 == puVar3) goto LAB_14039f088;
    }
    local_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = uStack_70;
    uStack_dc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_e8);
  }
LAB_14039f088:
  local_88 = 0x18d;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  FUN_140e87440(uVar2,DAT_1419f4908,0x80000000,&local_d8,(ulonglong)pcVar6 & 0xffffffffffffff00,
                in_stack_ffffffffffffff00 & 0xffffffffffffff00);
  if ((int)local_68[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_14039f0f4:
    local_e8 = *(undefined4 *)puVar3;
    uStack_e4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_e0 = *(undefined4 *)(puVar3 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_e8);
  }
  else {
    puVar3 = (undefined8 *)*local_60;
    if (puVar3 != &local_c8) goto LAB_14039f0f4;
  }
  local_58 = &local_c8;
  if ((int)local_68[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_60[1];
    if (puVar3 == &local_b8) goto LAB_14039f173;
  }
  local_e8 = *(undefined4 *)puVar3;
  uStack_e4 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_e0 = *(undefined4 *)(puVar3 + 1);
  uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_e8);
LAB_14039f173:
  local_50 = &local_b8;
  if (((int)local_68[0] < 3) || (puVar4 = (undefined8 *)local_60[2], puVar4 != &local_a8)) {
    local_e8 = *(undefined4 *)puVar4;
    uStack_e4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_e0 = *(undefined4 *)(puVar4 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_e8);
  }
  local_48 = &local_a8;
  uVar2 = FUN_140069500(uVar2);
  puVar4 = (undefined8 *)FUN_140e63610(uVar2,param_2,&local_f8,3,&local_d8,&local_58);
  if (puVar4 != param_3) {
    local_e8 = *(undefined4 *)puVar4;
    uStack_e4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_e0 = *(undefined4 *)(puVar4 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_e8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,3,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    puVar4 = local_60;
    do {
      puVar3 = (undefined8 *)*puVar4;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

