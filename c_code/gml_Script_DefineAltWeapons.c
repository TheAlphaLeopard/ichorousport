// gml_Script_DefineAltWeapons @ 0x140218750

undefined8 *
gml_Script_DefineAltWeapons
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88 [2];
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  
  local_60 = "gml_Script_AltWeapon";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x81;
  FUN_140041df0(local_88,param_4,7,param_5);
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0aac8);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddbb4) {
    _Init_thread_header(&DAT_141dddbb4);
    if (DAT_141dddbb4 == -1) {
      DAT_141dddb50 = FUN_140e63aa0(DAT_141a0aa78);
      _Init_thread_footer(&DAT_141dddbb4);
    }
  }
  local_58 = 0x81;
  puVar8 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 6) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_80[5];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_58 = 0x81;
    if ((int)local_88[0] < 6) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_80[5];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0;
  }
  if ((int)local_88[0] < 7) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_80[6];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_88[0] < 7) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_80[6];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0;
  }
  FUN_140e643a0(param_1,DAT_141dddb50);
  local_58 = 0x83;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a8a8);
  FUN_140e609c0(param_1);
  if ((int)local_88[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_80;
  }
  if (puVar6 != puVar3) {
    local_98 = (longlong *)*puVar6;
    uStack_90 = *(undefined4 *)(puVar6 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_98);
  }
  FUN_140e60910(1);
  local_58 = 0x84;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a9f8);
  FUN_140e609c0(param_1);
  if ((int)local_88[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[1];
  }
  if (puVar6 != puVar3) {
    local_98 = (longlong *)*puVar6;
    uStack_90 = *(undefined4 *)(puVar6 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_98);
  }
  FUN_140e60910(1);
  local_58 = 0x85;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aa68);
  FUN_140e609c0(param_1);
  if ((int)local_88[0] < 7) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[6];
  }
  if (puVar6 != puVar3) {
    local_98 = (longlong *)*puVar6;
    uStack_90 = *(undefined4 *)(puVar6 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_98);
  }
  FUN_140e60910(1);
  local_58 = 0x87;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aaa8);
  FUN_140e609c0(param_1);
  if ((int)local_88[0] < 3) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[2];
  }
  if (puVar6 != puVar3) {
    local_98 = (longlong *)*puVar6;
    uStack_90 = *(undefined4 *)(puVar6 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_98);
  }
  FUN_140e60910(1);
  local_58 = 0x88;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7d8);
  FUN_140e609c0(param_1);
  if ((int)local_88[0] < 4) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[3];
  }
  if (puVar6 != puVar3) {
    local_98 = (longlong *)*puVar6;
    uStack_90 = *(undefined4 *)(puVar6 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_98);
  }
  FUN_140e60910(1);
  local_58 = 0x8a;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab58);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x3ff0000000000000;
  local_58 = 0x8d;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aad8);
  uStack_8c = 0xd;
  local_98 = (longlong *)0x0;
  if (&local_98 != puVar3) {
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = uStack_90;
    uStack_6c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_78);
  }
  local_58 = 0x8e;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a918);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x3ff0000000000000;
  local_58 = 0x8f;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab68);
  uStack_8c = 0xd;
  local_98 = (longlong *)0x0;
  if (&local_98 != puVar3) {
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = uStack_90;
    uStack_6c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_78);
  }
  local_58 = 0x91;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a908);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_anon_4113_AltWeapon_ALTWEAPONSINIT,param_1);
  if (&local_98 != puVar3) {
    local_78 = (undefined4)local_98;
    uStack_74 = local_98._4_4_;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_78);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_58 = 0x95;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab38);
  FUN_140e609c0(param_1);
  if ((int)local_88[0] < 5) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[4];
  }
  if (puVar6 != puVar3) {
    local_78 = *(undefined4 *)puVar6;
    uStack_74 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_70 = *(undefined4 *)(puVar6 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_78);
  }
  FUN_140e60910(1);
  local_58 = 0x96;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0ab38);
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aaf8);
  FUN_140e609c0(param_1);
  if (puVar4 != puVar5) {
    local_78 = *puVar4;
    uStack_74 = puVar4[1];
    uStack_70 = puVar4[2];
    uStack_6c = puVar4[3];
    if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_78);
  }
  FUN_140e60910(1);
  local_58 = 0x98;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a9d8);
  FUN_140e609c0(param_1);
  if ((int)local_88[0] < 6) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[5];
  }
  if (puVar6 != puVar3) {
    local_78 = *(undefined4 *)puVar6;
    uStack_74 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_70 = *(undefined4 *)(puVar6 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_78);
  }
  FUN_140e60910(1);
  local_58 = 0x9a;
  uStack_8c = 6;
  if (0 < (int)local_88[0]) {
    puVar8 = (undefined8 *)*local_80;
  }
  local_98 = param_1;
  FUN_140e98ef0(param_1,param_2,uVar2,puVar8,&local_98);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_58 = 0x9c;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a928);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_anon_4215_AltWeapon_ALTWEAPONSINIT,param_1);
  if (&local_98 != puVar8) {
    local_78 = (undefined4)local_98;
    uStack_74 = local_98._4_4_;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_78);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_58 = 0xa1;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aa28);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_anon_4316_AltWeapon_ALTWEAPONSINIT,param_1);
  if (&local_98 != puVar8) {
    local_78 = (undefined4)local_98;
    uStack_74 = local_98._4_4_;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_78);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_58 = 0xa7;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aae8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_AltWeapon,param_1);
  if (&local_98 != puVar8) {
    local_78 = (undefined4)local_98;
    uStack_74 = local_98._4_4_;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_78);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_58 = 0xac;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aa08);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_pick_sidearm,param_1);
  if (&local_98 != puVar8) {
    local_78 = (undefined4)local_98;
    uStack_74 = local_98._4_4_;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_78);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  if (0 < (int)local_88[0]) {
    puVar8 = local_80;
    do {
      puVar3 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

