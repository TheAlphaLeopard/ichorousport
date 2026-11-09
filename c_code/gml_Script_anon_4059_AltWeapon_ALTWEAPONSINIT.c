// gml_Script_anon_4059_AltWeapon_ALTWEAPONSINIT @ 0x140217240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_4059_AltWeapon_ALTWEAPONSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  ulonglong uVar7;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  uint local_78 [2];
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_ThrowAnimQueue";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 9;
  FUN_140041df0(local_78,param_4,1,param_5);
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddbb8) {
    _Init_thread_header(&DAT_141dddbb8);
    if (DAT_141dddbb8 == -1) {
      DAT_141dddba8 = FUN_140e63aa0(DAT_141a0a8d8);
      _Init_thread_footer(&DAT_141dddbb8);
    }
  }
  local_48 = 9;
  uVar7 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_70;
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_48 = 9;
    if ((int)local_78[0] < 1) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)*local_70;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0x4000000000000000;
  }
  FUN_140e643a0(param_1,DAT_141dddba8);
  local_48 = 0xb;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab08);
  FUN_140e609c0(param_1);
  if ((int)local_78[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_70;
  }
  if (puVar3 != puVar2) {
    local_98 = *puVar3;
    uStack_90 = *(undefined4 *)(puVar3 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_98);
  }
  FUN_140e60910(1);
  local_48 = 0xc;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a9b8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x4028000000000000;
  local_48 = 0xe;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a9f8);
  FUN_140e609c0(param_1);
  uStack_8c = 0xf;
  local_98 = 0x10000010000041a;
  if (&local_98 != puVar2) {
    local_68 = 0x41a;
    uStack_64 = 0x1000001;
    uStack_60 = uStack_90;
    uStack_5c = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0xf;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aa98);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_48 = 0x11;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a8e8);
  FUN_140e609c0(param_1);
  puVar5 = (undefined4 *)FUN_140e8da20(&local_88,param_1,0);
  if (puVar5 != puVar4) {
    local_68 = *puVar5;
    uStack_64 = puVar5[1];
    uStack_60 = puVar5[2];
    uStack_5c = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x12;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab18);
  FUN_140e609c0(param_1);
  if (puVar2 != &DAT_1419df7b0) {
    local_68 = (undefined4)DAT_1419df7b0;
    uStack_64 = DAT_1419df7b0._4_4_;
    uStack_60 = DAT_1419df7b8;
    uStack_5c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x13;
  puVar6 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab48);
  if (puVar6 != &DAT_141dcdcc8) {
    local_68 = _DAT_141dcdcc8;
    uStack_64 = uRam0000000141dcdccc;
    uStack_60 = uRam0000000141dcdcd0;
    uStack_5c = DAT_141dcdcd4;
    if ((1 << ((byte)*(undefined4 *)(puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_68);
  }
  local_48 = 0x14;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab78);
  uStack_8c = 0xd;
  local_98 = 0;
  if (&local_98 != puVar2) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_90;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  local_48 = 0x15;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a888);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_48 = 0x18;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07778);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_anon_1271_ThrowAnimQueue_ALTWEAPONSINIT,param_1);
  if (&local_98 != puVar2) {
    local_68 = (undefined4)local_98;
    uStack_64 = local_98._4_4_;
    uStack_60 = uStack_90;
    uStack_5c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_48 = 0x23;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a9a8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_anon_1629_ThrowAnimQueue_ALTWEAPONSINIT,param_1);
  if (&local_98 != puVar2) {
    local_68 = (undefined4)local_98;
    uStack_64 = local_98._4_4_;
    uStack_60 = uStack_90;
    uStack_5c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_48 = 0x2c;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aa58);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_anon_1713_ThrowAnimQueue_ALTWEAPONSINIT,param_1);
  if (&local_98 != puVar2) {
    local_68 = (undefined4)local_98;
    uStack_64 = local_98._4_4_;
    uStack_60 = uStack_90;
    uStack_5c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_48 = 0x31;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aab8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_anon_2740_ThrowAnimQueue_ALTWEAPONSINIT,param_1);
  if (&local_98 != puVar2) {
    local_68 = (undefined4)local_98;
    uStack_64 = local_98._4_4_;
    uStack_60 = uStack_90;
    uStack_5c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_48 = 0x36;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a968);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_anon_2974_ThrowAnimQueue_ALTWEAPONSINIT,param_1);
  if (&local_98 != puVar2) {
    local_68 = (undefined4)local_98;
    uStack_64 = local_98._4_4_;
    uStack_60 = uStack_90;
    uStack_5c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_48 = 0x68;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a8b8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_ThrowAnimQueue,param_1);
  if (&local_98 != puVar2) {
    local_68 = (undefined4)local_98;
    uStack_64 = local_98._4_4_;
    uStack_60 = uStack_90;
    uStack_5c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_48 = 0x70;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aa88);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_anon_3869_AltWeapon_ALTWEAPONSINIT,param_1);
  if (&local_98 != puVar2) {
    local_68 = (undefined4)local_98;
    uStack_64 = local_98._4_4_;
    uStack_60 = uStack_90;
    uStack_5c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (0 < (int)local_78[0]) {
    puVar2 = local_70;
    do {
      puVar3 = (undefined8 *)*puVar2;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar2 = puVar2 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

