// gml_Script_imgui_is_any_mouse_down @ 0x1404c4730

undefined8 *
gml_Script_imgui_is_any_mouse_down
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
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
  undefined8 *local_40;
  undefined8 *local_38;
  
  local_90 = "gml_Script_imgui_is_mouse_hovering_rect";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x633;
  FUN_140041df0(local_68,param_4,5,param_5);
  _eh_vector_constructor_iterator_(&local_e8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x633;
  puVar4 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 5) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_60[4];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_88 = 0x633;
    uStack_6c = 0xd;
    local_78 = 0x3ff0000000000000;
    if ((int)local_68[0] < 5) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_60[4];
      if (&local_78 == puVar3) goto LAB_1404c487f;
    }
    local_108 = 0;
    uStack_104 = 0x3ff00000;
    uStack_100 = uStack_70;
    uStack_fc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_108);
  }
LAB_1404c487f:
  local_88 = 0x634;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fc198);
  if ((int)local_68[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_1404c48dc:
    local_108 = *(undefined4 *)puVar3;
    uStack_104 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_100 = *(undefined4 *)(puVar3 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_108);
  }
  else {
    puVar3 = (undefined8 *)*local_60;
    if (puVar3 != &local_e8) goto LAB_1404c48dc;
  }
  local_58 = &local_e8;
  if ((int)local_68[0] < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_1404c4930:
    local_108 = *(undefined4 *)puVar3;
    uStack_104 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_100 = *(undefined4 *)(puVar3 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_108);
  }
  else {
    puVar3 = (undefined8 *)local_60[1];
    if (puVar3 != &local_d8) goto LAB_1404c4930;
  }
  local_50 = &local_d8;
  if ((int)local_68[0] < 3) {
    puVar3 = &DAT_1419df7b0;
LAB_1404c4984:
    local_108 = *(undefined4 *)puVar3;
    uStack_104 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_100 = *(undefined4 *)(puVar3 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_108);
  }
  else {
    puVar3 = (undefined8 *)local_60[2];
    if (puVar3 != &local_c8) goto LAB_1404c4984;
  }
  local_48 = &local_c8;
  if ((int)local_68[0] < 4) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_60[3];
    if (puVar3 == &local_b8) goto LAB_1404c4a07;
  }
  local_108 = *(undefined4 *)puVar3;
  uStack_104 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_100 = *(undefined4 *)(puVar3 + 1);
  uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_108);
LAB_1404c4a07:
  local_40 = &local_b8;
  if (((int)local_68[0] < 5) || (puVar4 = (undefined8 *)local_60[4], puVar4 != &local_a8)) {
    local_108 = *(undefined4 *)puVar4;
    uStack_104 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_100 = *(undefined4 *)(puVar4 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_108);
  }
  local_38 = &local_a8;
  puVar4 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_f8,5,uVar2,&local_58);
  if (puVar4 != param_3) {
    local_108 = *(undefined4 *)puVar4;
    uStack_104 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_100 = *(undefined4 *)(puVar4 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,5,FUN_140041b30);
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

