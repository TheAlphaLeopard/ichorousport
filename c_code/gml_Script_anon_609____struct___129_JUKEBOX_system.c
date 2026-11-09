// gml_Script_anon_609____struct___129_JUKEBOX_system @ 0x140391aa0

undefined8 *
gml_Script_anon_609____struct___129_JUKEBOX_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 **ppuVar7;
  undefined4 uVar8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  byte local_74;
  undefined8 local_70;
  byte local_64;
  undefined8 local_60;
  byte local_54;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  uint local_38 [2];
  undefined8 *local_30;
  
  local_90 = "gml_Script_anon@295@___struct___129@JUKEBOX_system";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x10;
  FUN_140041df0(local_38,param_4,2,param_5);
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_80,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x10;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_38[0];
  if ((int)local_38[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_30[1];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar1 == 0) && (local_88 = 0x10, 1 < (int)local_38[0])) &&
     (puVar3 = (undefined8 *)local_30[1], puVar3 != &DAT_1419df7b0)) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_b8);
  }
  local_88 = 0x11;
  if ((int)local_38[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_30[1];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_88 = 0x11;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    if ((int)local_38[0] < 1) {
      puVar3 = &DAT_1419df7b0;
LAB_140391c4f:
      local_b8 = *(undefined4 *)puVar3;
      uStack_b4 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_b0 = *(undefined4 *)(puVar3 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_80);
      }
      FUN_140041b80(&local_80,&local_b8);
    }
    else {
      puVar3 = (undefined8 *)*local_30;
      if (puVar3 != &local_80) goto LAB_140391c4f;
    }
    local_50 = &local_80;
    if ((int)local_38[0] < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_30[1];
    }
    ppuVar7 = &local_50;
    puVar2 = (undefined8 *)gml_Script_jump_predictor(param_1,param_2,&local_c8,1,ppuVar7);
    uVar8 = (undefined4)((ulonglong)ppuVar7 >> 0x20);
    if (puVar2 != puVar3) {
      local_b8 = *(undefined4 *)puVar2;
      uStack_b4 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_b0 = *(undefined4 *)(puVar2 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_b8);
    }
  }
  local_88 = 0x12;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4c98);
  if (puVar3 != &local_80) {
    local_b8 = *(undefined4 *)puVar3;
    uStack_b4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_b0 = *(undefined4 *)(puVar3 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_b8);
  }
  local_50 = &local_80;
  if ((int)local_38[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_140391d76:
    local_b8 = *(undefined4 *)puVar3;
    uStack_b4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_b0 = *(undefined4 *)(puVar3 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_70);
    }
    FUN_140041b80(&local_70,&local_b8);
  }
  else {
    puVar3 = (undefined8 *)*local_30;
    if (puVar3 != &local_70) goto LAB_140391d76;
  }
  local_48 = &local_70;
  if ((int)local_38[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_30[1];
    if (puVar3 == &local_60) goto LAB_140391df1;
  }
  local_b8 = *(undefined4 *)puVar3;
  uStack_b4 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_b0 = *(undefined4 *)(puVar3 + 1);
  uStack_ac = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  FUN_140041b80(&local_60,&local_b8);
LAB_140391df1:
  local_40 = &local_60;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_c8,3,CONCAT44(uVar8,DAT_1419fd6d8),&local_50);
  if (puVar3 != &local_a8) {
    local_b8 = *(undefined4 *)puVar3;
    uStack_b4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_b0 = *(undefined4 *)(puVar3 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_b8);
  }
  local_88 = 0x13;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f49e8);
  if (1 < (int)local_38[0]) {
    puVar5 = (undefined8 *)local_30[1];
  }
  FUN_140e98ef0(param_1,param_2,uVar4,puVar5,&local_a8);
  local_88 = 0x14;
  if (&local_a8 != param_3) {
    local_b8 = (undefined4)local_a8;
    uStack_b4 = local_a8._4_4_;
    uStack_b0 = uStack_a0;
    uStack_ac = uStack_9c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_b8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_80,0x10,3,FUN_140041b30);
  if (0 < (int)local_38[0]) {
    puVar5 = local_30;
    do {
      puVar3 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

