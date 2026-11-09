// gml_Script_ignore_delay_anon_3616___scribble_class_typist___scribble_class_typist @ 0x140163fc0

undefined8 *
gml_Script_ignore_delay_anon_3616___scribble_class_typist___scribble_class_typist
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong local_98;
  uint local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78 [2];
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_skip@anon@3152@__scribble_class_typist@__scribble_class_typist";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x78;
  FUN_140041df0(local_78,param_4,1,param_5);
  local_8c = 0xffffff;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x78;
  puVar5 = &DAT_1419df7b0;
  uVar4 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_70;
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_48 = 0x78;
    uStack_7c = 0xd;
    local_88 = 0x3ff0000000000000;
    if ((int)local_78[0] < 1) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)*local_70;
      if (&local_88 == puVar2) goto LAB_1401640e1;
    }
    local_68 = 0;
    uStack_64 = 0x3ff00000;
    uStack_60 = uStack_80;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
LAB_1401640e1:
  local_48 = 0x7a;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07b48);
  FUN_140e609c0(param_1);
  if (0 < (int)local_78[0]) {
    puVar5 = (undefined8 *)*local_70;
  }
  if (puVar5 != puVar2) {
    local_68 = *(undefined4 *)puVar5;
    uStack_64 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_60 = *(undefined4 *)(puVar5 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x7b;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07708);
  uStack_7c = 0xd;
  local_88 = 0x3ff0000000000000;
  if (&local_88 != puVar5) {
    local_68 = 0;
    uStack_64 = 0x3ff00000;
    uStack_60 = uStack_80;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_68);
  }
  local_48 = 0x7c;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07a98);
  uStack_7c = 0xd;
  local_88 = 0;
  if (&local_88 != puVar5) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_80;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_68);
  }
  local_48 = 0x7d;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07bd8);
  FUN_140e85f80(param_1,DAT_1419fd4e8,0x80000000,&local_98);
  FUN_140e609c0(param_1);
  uVar6 = local_98;
  if ((local_8c & 0xffffff) != 0) {
    uVar6 = FUN_140e4b060(&local_98);
  }
  uStack_7c = 0;
  local_88 = uVar6 ^ 0x8000000000000000;
  if (&local_88 != puVar5) {
    local_88._4_4_ = (undefined4)(local_88 >> 0x20);
    uStack_64 = local_88._4_4_;
    uStack_60 = uStack_80;
    uStack_5c = 0;
    local_68 = (int)uVar6;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x7f;
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
  if (0 < (int)local_78[0]) {
    puVar5 = local_70;
    do {
      puVar2 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

