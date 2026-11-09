// gml_Script_imgui_begin_popup_context_void @ 0x1404d1600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_imgui_begin_popup_context_void
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
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
  
  local_60 = "gml_Script_imgui_begin_popup_context_item";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x8ff;
  FUN_140041df0(local_98,param_4,2,param_5);
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x8ff;
  puVar3 = &DAT_1419df7b0;
  uVar4 = (ulonglong)local_98[0];
  if ((int)local_98[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_90;
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_58 = 0x8ff;
    if ((int)local_98[0] < 1) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)*local_90;
      if (puVar2 == (undefined8 *)&DAT_141dd3968) goto LAB_1404d1734;
    }
    local_78 = _DAT_141dd3968;
    uStack_74 = uRam0000000141dd396c;
    uStack_70 = uRam0000000141dd3970;
    uStack_6c = DAT_141dd3974;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_78);
  }
LAB_1404d1734:
  if ((int)local_98[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_90[1];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
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
    *puVar2 = 1;
  }
  local_58 = 0x900;
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
    if (puVar2 == &local_50) goto LAB_1404d1802;
  }
  local_78 = *(undefined4 *)puVar2;
  uStack_74 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_70 = *(undefined4 *)(puVar2 + 1);
  uStack_6c = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  FUN_140041b80(&local_50,&local_78);
LAB_1404d1802:
  local_88 = &local_50;
  if (((int)local_98[0] < 2) || (puVar3 = (undefined8 *)local_90[1], puVar3 != &local_40)) {
    local_78 = *(undefined4 *)puVar3;
    uStack_74 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_70 = *(undefined4 *)(puVar3 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_40);
    }
    FUN_140041b80(&local_40,&local_78);
  }
  local_80 = &local_40;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_a8,2,CONCAT44(uVar5,DAT_141a59730),&local_88);
  if (puVar3 != param_3) {
    local_78 = *(undefined4 *)puVar3;
    uStack_74 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_70 = *(undefined4 *)(puVar3 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar3 + 0xc);
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
    puVar3 = local_90;
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
  FUN_140e4cd60(local_90);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

