// gml_Script_Touchpad_anon_8604___InputClassVirtualButton___InputClassVirtualButton @ 0x140059930

undefined8 *
gml_Script_Touchpad_anon_8604___InputClassVirtualButton___InputClassVirtualButton
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
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
  
  local_50 = "gml_Script_DPad@anon@7804@__InputClassVirtualButton@__InputClassVirtualButton";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x106;
  FUN_140041df0(local_78,param_4,6,param_5);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x106;
  puVar9 = &DAT_1419df7b0;
  if ((int)local_78[0] < 6) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_70[5];
  }
  iVar4 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_48 = 0x106;
    uStack_7c = 0xd;
    local_88 = 0;
    if ((int)local_78[0] < 6) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_70[5];
      if (&local_88 == puVar6) goto LAB_140059a45;
    }
    local_98 = 0;
    uStack_90 = uStack_80;
    uStack_8c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_98);
  }
LAB_140059a45:
  local_48 = 0x108;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe108);
  cVar3 = FUN_140e491e0(uVar5);
  if (cVar3 == '\0') {
    local_48 = 0x10a;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd248);
    if ((int)local_78[0] < 6) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)local_70[5];
    }
    cVar3 = FUN_140e491e0(puVar7);
    bVar10 = cVar3 == '\0';
    if (bVar10) {
      uStack_8c = 10;
      local_98 = 2;
      puVar7 = &local_98;
    }
    else {
      uStack_7c = 10;
      local_88 = 1;
      puVar7 = &local_88;
    }
    uVar2 = uStack_7c;
    uVar1 = uStack_8c;
    FUN_140e609c0(param_1);
    if (puVar7 != puVar6) {
      local_68 = *(undefined4 *)puVar7;
      uStack_64 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_60 = *(undefined4 *)(puVar7 + 1);
      uStack_5c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_68);
    }
    if ((bVar10) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_98);
    }
    if ((!bVar10) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_88);
    }
    FUN_140e60910(1);
    local_48 = 0x10b;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe0c8);
    FUN_140e609c0(param_1);
    if ((int)local_78[0] < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_70;
    }
    if (puVar7 != puVar6) {
      local_68 = *(undefined4 *)puVar7;
      uStack_64 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_60 = *(undefined4 *)(puVar7 + 1);
      uStack_5c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_68);
    }
    FUN_140e60910(1);
    local_48 = 0x10c;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd0b8);
    FUN_140e609c0(param_1);
    if ((int)local_78[0] < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)local_70[1];
    }
    if (puVar7 != puVar6) {
      local_68 = *(undefined4 *)puVar7;
      uStack_64 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_60 = *(undefined4 *)(puVar7 + 1);
      uStack_5c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_68);
    }
    FUN_140e60910(1);
    local_48 = 0x10d;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd008);
    FUN_140e609c0(param_1);
    if ((int)local_78[0] < 3) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)local_70[2];
    }
    if (puVar7 != puVar6) {
      local_68 = *(undefined4 *)puVar7;
      uStack_64 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_60 = *(undefined4 *)(puVar7 + 1);
      uStack_5c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_68);
    }
    FUN_140e60910(1);
    local_48 = 0x10e;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd108);
    FUN_140e609c0(param_1);
    if ((int)local_78[0] < 4) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)local_70[3];
    }
    if (puVar7 != puVar6) {
      local_68 = *(undefined4 *)puVar7;
      uStack_64 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_60 = *(undefined4 *)(puVar7 + 1);
      uStack_5c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_68);
    }
    FUN_140e60910(1);
    local_48 = 0x10f;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcfd8);
    FUN_140e609c0(param_1);
    if (4 < (int)local_78[0]) {
      puVar9 = (undefined8 *)local_70[4];
    }
    if (puVar9 != puVar6) {
      local_68 = *(undefined4 *)puVar9;
      uStack_64 = *(undefined4 *)((longlong)puVar9 + 4);
      uStack_60 = *(undefined4 *)(puVar9 + 1);
      uStack_5c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_68);
    }
    FUN_140e60910(1);
    local_48 = 0x111;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
  }
  else {
    local_48 = 0x108;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
  }
  uVar8 = (ulonglong)local_78[0];
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar5 = FUN_140e5c910();
  FUN_140e42c10(uVar5,param_1);
  if (0 < (int)local_78[0]) {
    puVar9 = local_70;
    do {
      puVar6 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

