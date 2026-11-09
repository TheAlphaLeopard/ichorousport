// gml_Script_anon_1989_DefineStatus_STATUSINIT @ 0x1405c16c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1989_DefineStatus_STATUSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 local_98;
  undefined4 local_8c;
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
  
  local_50 = "gml_Script_Status";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x29;
  FUN_140041df0(local_78,param_4,3,param_5);
  local_8c = 0xffffff;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de0be4) &&
     (_Init_thread_header(&DAT_141de0be4), DAT_141de0be4 == -1)) {
    DAT_141de0c00 = FUN_140e63aa0(DAT_1419ff168);
    _Init_thread_footer(&DAT_141de0be4);
  }
  local_48 = 0x29;
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
    local_48 = 0x29;
    if ((int)local_78[0] < 1) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)*local_70;
      if (puVar2 == (undefined8 *)&DAT_141dd4618) goto LAB_1405c1820;
    }
    local_88 = CONCAT44(uRam0000000141dd461c,_DAT_141dd4618);
    uStack_80 = uRam0000000141dd4620;
    uStack_7c = DAT_141dd4624;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_88);
  }
LAB_1405c1820:
  if ((int)local_78[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_70[1];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    uStack_7c = 0xf;
    local_88 = 0x1000001000002e4;
    if ((int)local_78[0] < 2) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_70[1];
      if (&local_88 == puVar2) goto LAB_1405c18a2;
    }
    local_68 = 0x2e4;
    uStack_64 = 0x1000001;
    uStack_60 = uStack_80;
    uStack_5c = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
LAB_1405c18a2:
  if ((int)local_78[0] < 3) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_70[2];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_78[0] < 3) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_70[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0x403e000000000000;
  }
  FUN_140e643a0(param_1,DAT_141de0c00);
  local_48 = 0x2a;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05b88);
  FUN_140e609c0(param_1);
  if ((int)local_78[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_70;
  }
  if (puVar3 != puVar2) {
    local_68 = *(undefined4 *)puVar3;
    uStack_64 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_60 = *(undefined4 *)(puVar3 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x2b;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a9f8);
  FUN_140e609c0(param_1);
  if ((int)local_78[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_70[1];
  }
  if (puVar3 != puVar2) {
    local_68 = *(undefined4 *)puVar3;
    uStack_64 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_60 = *(undefined4 *)(puVar3 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x2c;
  local_88 = 0x3ff0000000000000;
  uStack_7c = 0xd;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = uStack_80;
  uStack_5c = 0xd;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_68);
  FUN_140e86fa0(param_1,DAT_1419f61d8,0x80000000,&local_98);
  local_48 = 0x2e;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0xc010000000000000;
  local_48 = 0x2f;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f4e0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0xc010000000000000;
  local_48 = 0x30;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03598);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x3ff0000000000000;
  local_48 = 0x32;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5838);
  FUN_140e609c0(param_1);
  if ((int)local_78[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_70[2];
  }
  if (puVar3 != puVar2) {
    local_68 = *(undefined4 *)puVar3;
    uStack_64 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_60 = *(undefined4 *)(puVar3 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x33;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5fc8);
  FUN_140e609c0(param_1);
  if (2 < (int)local_78[0]) {
    puVar5 = (undefined8 *)local_70[2];
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
  local_48 = 0x34;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff2a8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_48 = 0x36;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff218);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0x3ff0000000000000;
  local_48 = 0x38;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff378);
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
  local_48 = 0x3a;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff358);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_88,&LAB_1405c0830,param_1);
  if (&local_88 != puVar5) {
    local_68 = (undefined4)local_88;
    uStack_64 = local_88._4_4_;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_68);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140e60910(1);
  local_48 = 0x3b;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff398);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_88,&LAB_1405c0860,param_1);
  if (&local_88 != puVar5) {
    local_68 = (undefined4)local_88;
    uStack_64 = local_88._4_4_;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_68);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140e60910(1);
  local_48 = 0x3c;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff2c8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_88,&LAB_1405c0890,param_1);
  if (&local_88 != puVar5) {
    local_68 = (undefined4)local_88;
    uStack_64 = local_88._4_4_;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_68);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140e60910(1);
  local_48 = 0x3d;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff238);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_88,gml_Script_anon_1360_anon_1322_Status_STATUSINIT,param_1);
  if (&local_88 != puVar5) {
    local_68 = (undefined4)local_88;
    uStack_64 = local_88._4_4_;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_68);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140e60910(1);
  local_48 = 0x41;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff1a8);
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
  local_48 = 0x42;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff2e8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_48 = 0x44;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff268);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_88,gml_Script_anon_1595_Status_STATUSINIT,param_1);
  if (&local_88 != puVar5) {
    local_68 = (undefined4)local_88;
    uStack_64 = local_88._4_4_;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_68);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140e60910(1);
  local_48 = 0x50;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff278);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_88,gml_Script_anon_1652_Status_STATUSINIT,param_1);
  if (&local_88 != puVar5) {
    local_68 = (undefined4)local_88;
    uStack_64 = local_88._4_4_;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_68);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140e60910(1);
  local_48 = 0x54;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff118);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_88,gml_Script_Status,param_1);
  if (&local_88 != puVar5) {
    local_68 = (undefined4)local_88;
    uStack_64 = local_88._4_4_;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_68);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140e60910(1);
  local_48 = 0x58;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff308);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_88,gml_Script_anon_1910_DefineStatus_STATUSINIT,param_1);
  if (&local_88 != puVar5) {
    local_68 = (undefined4)local_88;
    uStack_64 = local_88._4_4_;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_68);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140e60910(1);
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

