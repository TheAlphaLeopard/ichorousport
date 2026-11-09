// gml_Script_imgui_shortcut @ 0x1404c58f0

undefined8 *
gml_Script_imgui_shortcut
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  uint local_98 [2];
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined8 local_50;
  byte local_44;
  undefined8 local_40;
  byte local_34;
  
  local_60 = "gml_Script_imgui_get_mouse_drag_delta_y";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x671;
  FUN_140041df0(local_98,param_4,2,param_5);
  _eh_vector_constructor_iterator_(&local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x671;
  puVar5 = &DAT_1419df7b0;
  uVar4 = (ulonglong)local_98[0];
  if ((int)local_98[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_90[1];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_58 = 0x671;
    if ((int)local_98[0] < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_90[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = &DAT_bff0000000000000;
  }
  local_58 = 0x672;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fafe8);
  if ((int)local_98[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_90;
    if (puVar3 == &local_50) goto LAB_1404c5aa0;
  }
  local_78 = *(undefined4 *)puVar3;
  uStack_74 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_70 = *(undefined4 *)(puVar3 + 1);
  uStack_6c = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  FUN_140041b80(&local_50,&local_78);
LAB_1404c5aa0:
  local_88 = &local_50;
  if (((int)local_98[0] < 2) || (puVar5 = (undefined8 *)local_90[1], puVar5 != &local_40)) {
    local_78 = *(undefined4 *)puVar5;
    uStack_74 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_70 = *(undefined4 *)(puVar5 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_40);
    }
    FUN_140041b80(&local_40,&local_78);
  }
  local_80 = &local_40;
  puVar5 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_a8,2,uVar2,&local_88);
  if (puVar5 != param_3) {
    local_78 = *(undefined4 *)puVar5;
    uStack_74 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_70 = *(undefined4 *)(puVar5 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_78);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_50,0x10,2,FUN_140041b30);
  if (0 < (int)local_98[0]) {
    puVar5 = local_90;
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
  FUN_140e4cd60(local_90);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

