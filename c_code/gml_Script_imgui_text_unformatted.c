// gml_Script_imgui_text_unformatted @ 0x1404dd9b0

undefined8 *
gml_Script_imgui_text_unformatted
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
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
  
  local_60 = "gml_Script_imgui_tab_item_button";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0xb48;
  FUN_140041df0(local_98,param_4,2,param_5);
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0xb48;
  puVar4 = &DAT_1419df7b0;
  uVar3 = (ulonglong)local_98[0];
  if ((int)local_98[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_90[1];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_58 = 0xb48;
    if ((int)local_98[0] < 2) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_90[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 10;
    *puVar2 = 0;
  }
  local_58 = 0xb49;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  if ((int)local_98[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_90;
    if (puVar2 == &local_50) goto LAB_1404ddb47;
  }
  local_78 = *(undefined4 *)puVar2;
  uStack_74 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_70 = *(undefined4 *)(puVar2 + 1);
  uStack_6c = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  FUN_140041b80(&local_50,&local_78);
LAB_1404ddb47:
  local_88 = &local_50;
  if (((int)local_98[0] < 2) || (puVar4 = (undefined8 *)local_90[1], puVar4 != &local_40)) {
    local_78 = *(undefined4 *)puVar4;
    uStack_74 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_70 = *(undefined4 *)(puVar4 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_40);
    }
    FUN_140041b80(&local_40,&local_78);
  }
  local_80 = &local_40;
  puVar4 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_a8,2,CONCAT44(uVar5,DAT_141a59730),&local_88);
  if (puVar4 != param_3) {
    local_78 = *(undefined4 *)puVar4;
    uStack_74 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_70 = *(undefined4 *)(puVar4 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar4 + 0xc);
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
    puVar4 = local_90;
    do {
      puVar2 = (undefined8 *)*puVar4;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar4 = puVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  FUN_140e4cd60(local_90);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

