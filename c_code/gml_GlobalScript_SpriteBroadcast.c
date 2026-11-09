// gml_GlobalScript_SpriteBroadcast @ 0x140515a60

undefined8 *
gml_GlobalScript_SpriteBroadcast
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@440@speaker_get_profile";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x14;
  FUN_140041df0(local_68,param_4,6,param_5);
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fd158);
  local_7c = 0xffffff;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf418) &&
     (_Init_thread_header(&DAT_141ddf418), DAT_141ddf418 == -1)) {
    DAT_141ddf410 = FUN_140e63aa0(DAT_1419fd1d8);
    _Init_thread_footer(&DAT_141ddf418);
  }
  local_38 = 0x14;
  puVar6 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 6) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_60[5];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_38 = 0x14;
    if ((int)local_68[0] < 6) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_60[5];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0x402c000000000000;
  }
  FUN_140e643a0(param_1,DAT_141ddf410);
  local_38 = 0x16;
  uStack_6c = 6;
  if ((int)local_68[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_60;
  }
  local_78 = param_1;
  FUN_140e98ef0(param_1,param_2,uVar2,puVar3,&local_78);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_38 = 0x18;
  if ((int)local_68[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_60;
    if (puVar3 == &local_88) goto LAB_140515c78;
  }
  local_78 = (longlong *)*puVar3;
  uStack_70 = *(undefined4 *)(puVar3 + 1);
  uStack_6c = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_78);
LAB_140515c78:
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_88);
  local_38 = 0x1a;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd1b8);
  FUN_140e609c0(param_1);
  if ((int)local_68[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_60[1];
  }
  if (puVar4 != puVar3) {
    local_78 = (longlong *)*puVar4;
    uStack_70 = *(undefined4 *)(puVar4 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_78);
  }
  FUN_140e60910(1);
  local_38 = 0x1b;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd178);
  FUN_140e609c0(param_1);
  if ((int)local_68[0] < 3) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_60[2];
  }
  if (puVar4 != puVar3) {
    local_78 = (longlong *)*puVar4;
    uStack_70 = *(undefined4 *)(puVar4 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_78);
  }
  FUN_140e60910(1);
  local_38 = 0x1d;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe5d8);
  FUN_140e609c0(param_1);
  if ((int)local_68[0] < 4) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_60[3];
  }
  if (puVar4 != puVar3) {
    local_78 = (longlong *)*puVar4;
    uStack_70 = *(undefined4 *)(puVar4 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_78);
  }
  FUN_140e60910(1);
  local_38 = 0x1e;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe5c8);
  FUN_140e609c0(param_1);
  if ((int)local_68[0] < 5) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_60[4];
  }
  if (puVar4 != puVar3) {
    local_78 = (longlong *)*puVar4;
    uStack_70 = *(undefined4 *)(puVar4 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_78);
  }
  FUN_140e60910(1);
  local_38 = 0x20;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd198);
  FUN_140e609c0(param_1);
  if (5 < (int)local_68[0]) {
    puVar6 = (undefined8 *)local_60[5];
  }
  if (puVar6 != puVar3) {
    local_78 = (longlong *)*puVar6;
    uStack_70 = *(undefined4 *)(puVar6 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_78);
  }
  FUN_140e60910(1);
  local_38 = 0x22;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a928);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,gml_Script_speaker_get_profile,param_1);
  if (&local_78 != puVar6) {
    local_58 = (undefined4)local_78;
    uStack_54 = local_78._4_4_;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_58);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (0 < (int)local_68[0]) {
    puVar6 = local_60;
    do {
      puVar3 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

