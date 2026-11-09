// gml_Script_size_anon_1026_anon_123_gml_Object_oParticleManager_Create_0 @ 0x140bbf020

undefined8 *
gml_Script_size_anon_1026_anon_123_gml_Object_oParticleManager_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_sprite@anon@712@anon@123@gml_Object_oParticleManager_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x42;
  FUN_140041df0(local_68,param_4,3,param_5);
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x42;
  puVar4 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_60[1];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_38 = 0x42;
    if ((int)local_68[0] < 2) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_60[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0x3ff0000000000000;
  }
  if ((int)local_68[0] < 3) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_60[2];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_68[0] < 3) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_60[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0;
  }
  local_38 = 0x44;
  if ((int)local_68[0] < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_140bbf1a2:
    local_58 = *(undefined4 *)puVar2;
    uStack_54 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_50 = *(undefined4 *)(puVar2 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_58);
  }
  else {
    puVar2 = (undefined8 *)*local_60;
    if (puVar2 != &local_78) goto LAB_140bbf1a2;
  }
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_78);
  local_38 = 0x45;
  if ((int)local_68[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_60[1];
    if (puVar2 == &local_88) goto LAB_140bbf234;
  }
  local_58 = *(undefined4 *)puVar2;
  uStack_54 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_50 = *(undefined4 *)(puVar2 + 1);
  uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_58);
LAB_140bbf234:
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_88);
  local_38 = 0x46;
  if (((int)local_68[0] < 3) || (puVar4 = (undefined8 *)local_60[2], puVar4 != &local_98)) {
    local_58 = *(undefined4 *)puVar4;
    uStack_54 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_50 = *(undefined4 *)(puVar4 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_58);
  }
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_98);
  local_38 = 0x48;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar3 = FUN_140e5c910();
  FUN_140e42c10(uVar3,param_1);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (0 < (int)local_68[0]) {
    puVar4 = local_60;
    do {
      puVar2 = (undefined8 *)*puVar4;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

