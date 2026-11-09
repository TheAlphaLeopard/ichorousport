// gml_GlobalScript_bias @ 0x140232e20

undefined8 *
gml_GlobalScript_bias
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_bg_low_hp_flash";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x36;
  FUN_140041df0(local_68,param_4,1,param_5);
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1c570);
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1c610);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x36;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_60;
  }
  iVar1 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_48 = 0x36;
    if ((int)local_68[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_60;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0x4034000000000000;
  }
  local_48 = 0x38;
  FUN_140e609c0(DAT_141a729d8);
  if ((int)local_68[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_60;
  }
  uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_80 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) == 0) {
    local_88 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_88);
  }
  uStack_6c = 0;
  local_78 = 0x3fe0000000000000;
  FUN_140042560(&local_88,&local_78);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (&local_88 != puVar2) {
    local_78 = local_88;
    uStack_70 = uStack_80;
    uStack_6c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_78);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140e60910(1);
  local_48 = 0x39;
  FUN_140e609c0(DAT_141a729d8);
  if (0 < (int)local_68[0]) {
    puVar5 = (undefined8 *)*local_60;
  }
  uStack_7c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_80 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) == 0) {
    local_88 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_88,puVar5);
  }
  uStack_6c = 0;
  local_78 = 0x3fe0000000000000;
  FUN_140042560(&local_88,&local_78);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (&local_88 != puVar3) {
    local_78 = local_88;
    uStack_70 = uStack_80;
    uStack_6c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_78);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140e60910(1);
  if (0 < (int)local_68[0]) {
    puVar5 = local_60;
    do {
      puVar2 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

