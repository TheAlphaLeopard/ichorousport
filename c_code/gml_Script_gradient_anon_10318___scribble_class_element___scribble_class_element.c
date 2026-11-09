// gml_Script_gradient_anon_10318___scribble_class_element___scribble_class_element @ 0x140113e20

undefined8 *
gml_Script_gradient_anon_10318___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
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
  
  local_50 = "gml_Script_align@anon@8473@__scribble_class_element@__scribble_class_element";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x109;
  FUN_140041df0(local_78,param_4,2,param_5);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x109;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_70;
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_48 = 0x109;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05b48);
    if ((int)local_78[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_70;
    }
    if (puVar2 != puVar4) {
      local_88 = *puVar2;
      uStack_80 = *(undefined4 *)(puVar2 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_88);
    }
  }
  if ((int)local_78[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_70[1];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05ab8);
    if ((int)local_78[0] < 2) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_70[1];
    }
    if (puVar2 != puVar4) {
      local_88 = *puVar2;
      uStack_80 = *(undefined4 *)(puVar2 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_88);
    }
  }
  local_48 = 0x10b;
  uStack_7c = DAT_141dcb4d4;
  uStack_80 = DAT_141dcb4d0;
  if ((1 << ((byte)DAT_141dcb4d4 & 0x1f) & 0x46U) == 0) {
    local_88 = DAT_141dcb4c8;
  }
  else {
    FUN_1400419b0(&local_88,&DAT_141dcb4c8);
  }
  if ((int)local_78[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_70;
  }
  iVar1 = FUN_140e851f0(puVar2,&local_88,DAT_141955260,0);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (iVar1 == 0) {
    local_48 = 0x10b;
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
    *puVar2 = 0x4008000000000000;
  }
  local_48 = 0x10c;
  uStack_7c = DAT_141dcb664;
  uStack_80 = DAT_141dcb660;
  if ((1 << ((byte)DAT_141dcb664 & 0x1f) & 0x46U) == 0) {
    local_88 = DAT_141dcb658;
  }
  else {
    FUN_1400419b0(&local_88,&DAT_141dcb658);
  }
  if ((int)local_78[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_70;
  }
  iVar1 = FUN_140e851f0(puVar2,&local_88,DAT_141955260,0);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (iVar1 == 0) {
    local_48 = 0x10c;
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
    *puVar2 = 0x4010000000000000;
  }
  local_48 = 0x10d;
  uStack_7c = DAT_141dcb444;
  uStack_80 = DAT_141dcb440;
  if ((1 << ((byte)DAT_141dcb444 & 0x1f) & 0x46U) == 0) {
    local_88 = DAT_141dcb438;
  }
  else {
    FUN_1400419b0(&local_88,&DAT_141dcb438);
  }
  if ((int)local_78[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_70;
  }
  iVar1 = FUN_140e851f0(puVar2,&local_88,DAT_141955260,0);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (iVar1 == 0) {
    local_48 = 0x10d;
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
    *puVar2 = 0x4010000000000000;
  }
  local_48 = 0x10e;
  uStack_7c = DAT_141dcb394;
  uStack_80 = DAT_141dcb390;
  if ((1 << ((byte)DAT_141dcb394 & 0x1f) & 0x46U) == 0) {
    local_88 = DAT_141dcb388;
  }
  else {
    FUN_1400419b0(&local_88,&DAT_141dcb388);
  }
  if ((int)local_78[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_70;
  }
  iVar1 = FUN_140e851f0(puVar2,&local_88,DAT_141955260,0);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (iVar1 == 0) {
    local_48 = 0x10e;
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
    *puVar2 = 0x4014000000000000;
  }
  local_48 = 0x10f;
  uStack_7c = DAT_141dcb7c4;
  uStack_80 = DAT_141dcb7c0;
  if ((1 << ((byte)DAT_141dcb7c4 & 0x1f) & 0x46U) == 0) {
    local_88 = DAT_141dcb7b8;
  }
  else {
    FUN_1400419b0(&local_88,&DAT_141dcb7b8);
  }
  if ((int)local_78[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_70[1];
  }
  iVar1 = FUN_140e851f0(puVar2,&local_88,DAT_141955260,0);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (iVar1 == 0) {
    local_48 = 0x10f;
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
    *puVar2 = 0x4008000000000000;
  }
  local_48 = 0x110;
  uStack_7c = DAT_141dcb674;
  uStack_80 = DAT_141dcb670;
  if ((1 << ((byte)DAT_141dcb674 & 0x1f) & 0x46U) == 0) {
    local_88 = DAT_141dcb668;
  }
  else {
    FUN_1400419b0(&local_88,&DAT_141dcb668);
  }
  if ((int)local_78[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_70[1];
  }
  iVar1 = FUN_140e851f0(puVar2,&local_88,DAT_141955260,0);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (iVar1 == 0) {
    local_48 = 0x110;
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
    *puVar2 = 0x4010000000000000;
  }
  local_48 = 0x111;
  uStack_7c = DAT_141dcb434;
  uStack_80 = DAT_141dcb430;
  if ((1 << ((byte)DAT_141dcb434 & 0x1f) & 0x46U) == 0) {
    local_88 = DAT_141dcb428;
  }
  else {
    FUN_1400419b0(&local_88,&DAT_141dcb428);
  }
  if ((int)local_78[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_70[1];
  }
  iVar1 = FUN_140e851f0(puVar2,&local_88,DAT_141955260,0);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (iVar1 == 0) {
    local_48 = 0x111;
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
    *puVar2 = 0x4014000000000000;
  }
  local_48 = 0x112;
  uStack_7c = DAT_141dcb774;
  uStack_80 = DAT_141dcb770;
  if ((1 << ((byte)DAT_141dcb774 & 0x1f) & 0x46U) == 0) {
    local_88 = DAT_141dcb768;
  }
  else {
    FUN_1400419b0(&local_88,&DAT_141dcb768);
  }
  if ((int)local_78[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_70;
  }
  iVar1 = FUN_140e851f0(puVar2,&local_88,DAT_141955260,0);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (iVar1 == 0) {
    local_48 = 0x112;
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
    *puVar2 = 0x4018000000000000;
  }
  local_48 = 0x114;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05b48);
  if ((int)local_78[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_70;
  }
  iVar1 = FUN_140e851f0(puVar2,uVar3,DAT_141955260,0);
  if (iVar1 != 0) {
    local_48 = 0x116;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05918);
    uStack_7c = 0xd;
    local_88 = 0x3ff0000000000000;
    if (&local_88 != puVar2) {
      local_68 = 0;
      uStack_64 = 0x3ff00000;
      uStack_60 = uStack_80;
      uStack_5c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_68);
    }
    local_48 = 0x117;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04dd8);
    uStack_7c = 0xd;
    local_88 = 0x3ff0000000000000;
    if (&local_88 != puVar2) {
      local_68 = 0;
      uStack_64 = 0x3ff00000;
      uStack_60 = uStack_80;
      uStack_5c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_68);
    }
    local_48 = 0x119;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05b48);
    FUN_140e609c0(param_1);
    if ((int)local_78[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_70;
    }
    if (puVar4 != puVar2) {
      local_68 = *(undefined4 *)puVar4;
      uStack_64 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_60 = *(undefined4 *)(puVar4 + 1);
      uStack_5c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_68);
    }
    FUN_140e60910(1);
  }
  local_48 = 0x11c;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05ab8);
  if ((int)local_78[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_70[1];
  }
  iVar1 = FUN_140e851f0(puVar2,uVar3,DAT_141955260,0);
  if (iVar1 != 0) {
    local_48 = 0x11e;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05918);
    uStack_7c = 0xd;
    local_88 = 0x3ff0000000000000;
    if (&local_88 != puVar2) {
      local_68 = 0;
      uStack_64 = 0x3ff00000;
      uStack_60 = uStack_80;
      uStack_5c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_68);
    }
    local_48 = 0x11f;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04dd8);
    uStack_7c = 0xd;
    local_88 = 0x3ff0000000000000;
    if (&local_88 != puVar2) {
      local_68 = 0;
      uStack_64 = 0x3ff00000;
      uStack_60 = uStack_80;
      uStack_5c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_68);
    }
    local_48 = 0x121;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05ab8);
    FUN_140e609c0(param_1);
    if (1 < (int)local_78[0]) {
      puVar5 = (undefined8 *)local_70[1];
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
  }
  local_48 = 0x124;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar3 = FUN_140e5c910();
  FUN_140e42c10(uVar3,param_1);
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
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

