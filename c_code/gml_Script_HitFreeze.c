// gml_Script_HitFreeze @ 0x140293ea0

undefined8 *
gml_Script_HitFreeze
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_7c;
  uint local_78 [2];
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_GuardPulse";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x49;
  FUN_140041df0(local_78,param_4,2,param_5);
  iVar8 = 0;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddde14) {
    _Init_thread_header(&DAT_141ddde14);
    if (DAT_141ddde14 == -1) {
      DAT_141ddde38 = FUN_140e63aa0(DAT_141a58010);
      _Init_thread_footer(&DAT_141ddde14);
    }
  }
  local_48 = 0x49;
  puVar7 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_70[1];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_48 = 0x49;
    if ((int)local_78[0] < 2) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_70[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0x403e000000000000;
  }
  FUN_140e643a0(param_1,DAT_141ddde38);
  local_48 = 0x4b;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a580b0);
  FUN_140e609c0(param_1);
  if ((int)local_78[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_70;
  }
  if (puVar3 != puVar2) {
    local_98 = *puVar3;
    uStack_90 = puVar3[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_98);
  }
  FUN_140e60910(1);
  local_48 = 0x4c;
  pdVar4 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a580c0);
  if ((int)local_78[0] < 1) {
    plVar5 = &DAT_1419df7b0;
  }
  else {
    plVar5 = (longlong *)*local_70;
  }
  if ((*(int *)((longlong)plVar5 + 0xc) == 2) && (*plVar5 != 0)) {
    iVar8 = *(int *)(*plVar5 + 0x24);
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar4);
  }
  *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
  *pdVar4 = (double)iVar8;
  local_48 = 0x4d;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58050);
  FUN_140e609c0(param_1);
  if (1 < (int)local_78[0]) {
    puVar7 = (undefined8 *)local_70[1];
  }
  if (puVar7 != puVar2) {
    local_98 = *puVar7;
    uStack_90 = puVar7[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_98);
  }
  FUN_140e60910(1);
  local_48 = 0x4e;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58100);
  FUN_140e609c0(param_1);
  puVar2 = (undefined8 *)FUN_140e8da20(&local_88,param_1,0);
  if (puVar2 != puVar7) {
    local_98 = *puVar2;
    uStack_90 = puVar2[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_98);
  }
  FUN_140e60910(1);
  local_48 = 0x4f;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58080);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0;
  local_48 = 0x50;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58110);
  uStack_90 = CONCAT44(0xd,(undefined4)uStack_90);
  local_98 = 0;
  if (&local_98 != puVar7) {
    local_68 = 0;
    uStack_60 = uStack_90;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_68);
  }
  local_48 = 0x53;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58090);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script____struct___99_anon_2703_GuardPulse_GuardPulse,param_1);
  if (&local_98 != puVar7) {
    local_68 = local_98;
    uStack_60 = uStack_90;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_68);
  }
  if ((1 << ((byte)((ulonglong)uStack_90 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_48 = 0x5b;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a580f0);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_anon_2703_GuardPulse_GuardPulse,param_1);
  if (&local_98 != puVar7) {
    local_68 = local_98;
    uStack_60 = uStack_90;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_68);
  }
  if ((1 << ((byte)((ulonglong)uStack_90 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_48 = 0x60;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a968);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_GuardPulse,param_1);
  if (&local_98 != puVar7) {
    local_68 = local_98;
    uStack_60 = uStack_90;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_68);
  }
  if ((1 << ((byte)((ulonglong)uStack_90 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_48 = 0x72;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05028);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_GlobalScript_HitFreeze,param_1);
  if (&local_98 != puVar7) {
    local_68 = local_98;
    uStack_60 = uStack_90;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_68);
  }
  if ((1 << ((byte)((ulonglong)uStack_90 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (0 < (int)local_78[0]) {
    puVar7 = local_70;
    do {
      puVar2 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

