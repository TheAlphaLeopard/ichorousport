// gml_Script_line_height_anon_16826___scribble_class_element___scribble_class_element @ 0x140117b00

undefined8 *
gml_Script_line_height_anon_16826___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  bool bVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  uint local_d0 [2];
  undefined8 *local_c8;
  undefined8 local_b8;
  byte local_ac;
  undefined8 *local_78 [8];
  
  local_f0 = "gml_Script_fit_to_box@anon@14877@__scribble_class_element@__scribble_class_element";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x1dc;
  FUN_140041df0(local_d0,param_4,4,param_5);
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_d4 = 0;
  uVar11 = 0;
  local_e0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x1dc;
  puVar9 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_d0[0];
  if ((int)local_d0[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_c8[2];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_e8 = 0x1dc;
    uStack_10c = 0xd;
    local_118 = 0;
    if ((int)local_d0[0] < 3) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_c8[2];
      if (&local_118 == puVar5) goto LAB_140117c58;
    }
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = uStack_110;
    uStack_fc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_108);
  }
LAB_140117c58:
  if ((int)local_d0[0] < 4) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_c8[3];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_d0[0] < 4) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_c8[3];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0x3ff0000000000000;
  }
  local_e8 = 0x1de;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a056f8);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a053e8);
    if ((int)local_d0[0] < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*local_c8;
    }
    iVar2 = FUN_140e851f0(puVar5,uVar4,DAT_141955260,0);
    if (iVar2 == 0) {
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04f18);
      if ((int)local_d0[0] < 2) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)local_c8[1];
      }
      iVar2 = FUN_140e851f0(puVar5,uVar4,DAT_141955260,0);
      if (iVar2 == 0) {
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05788);
        if ((int)local_d0[0] < 3) {
          puVar5 = &DAT_1419df7b0;
        }
        else {
          puVar5 = (undefined8 *)local_c8[2];
        }
        iVar2 = FUN_140e851f0(puVar5,uVar4,DAT_141955260,0);
        if (iVar2 == 0) {
          uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05578);
          cVar1 = FUN_140e491e0(uVar4);
          if (cVar1 != '\0') {
            uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06018);
            if ((int)local_d0[0] < 4) {
              puVar5 = &DAT_1419df7b0;
            }
            else {
              puVar5 = (undefined8 *)local_c8[3];
            }
            iVar2 = FUN_140e851f0(puVar5,uVar4,DAT_141955260,0);
            if (iVar2 == 0) goto LAB_140118304;
          }
        }
      }
    }
  }
  local_e8 = 0x1e5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05918);
  uStack_10c = 0xd;
  local_118 = 0x3ff0000000000000;
  if (&local_118 != puVar5) {
    local_108 = 0;
    uStack_104 = 0x3ff00000;
    uStack_100 = uStack_110;
    uStack_fc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_108);
  }
  local_e8 = 0x1e6;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04d88);
  uStack_10c = 0xd;
  local_118 = 0x3ff0000000000000;
  if (&local_118 != puVar5) {
    local_108 = 0;
    uStack_104 = 0x3ff00000;
    uStack_100 = uStack_110;
    uStack_fc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_108);
  }
  local_e8 = 0x1e7;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04dd8);
  uStack_10c = 0xd;
  local_118 = 0x3ff0000000000000;
  if (&local_118 != puVar5) {
    local_108 = 0;
    uStack_104 = 0x3ff00000;
    uStack_100 = uStack_110;
    uStack_fc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_108);
  }
  local_e8 = 0x1e8;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a053a8);
  uStack_10c = 0xd;
  local_118 = 0x3ff0000000000000;
  if (&local_118 != puVar5) {
    local_108 = 0;
    uStack_104 = 0x3ff00000;
    uStack_100 = uStack_110;
    uStack_fc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_108);
  }
  local_e8 = 0x1ea;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a056f8);
  bVar10 = false;
  if ((int)local_d0[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_c8;
  }
  uStack_10c = 0;
  local_118 = 0;
  uVar3 = FUN_140e851f0(puVar5,&local_118,DAT_141955260,1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (uVar3 < 0x80000000) {
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    local_e0 = 0;
    local_d8 = 0;
    local_d4 = 5;
    if ((int)local_d0[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_140118037:
      local_108 = *(undefined4 *)puVar5;
      uStack_104 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_100 = *(undefined4 *)(puVar5 + 1);
      uStack_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_108);
    }
    else {
      puVar5 = (undefined8 *)*local_c8;
      if (puVar5 != &local_b8) goto LAB_140118037;
    }
    local_78[0] = &local_b8;
    uVar4 = FUN_140e634e0(param_1,param_2,&local_e0,1,CONCAT44(uVar12,DAT_141a05f08),local_78);
    cVar1 = FUN_140e491e0(uVar4);
    bVar10 = cVar1 == '\0';
  }
  FUN_140e609c0(param_1);
  if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(plVar6);
  }
  *(undefined4 *)((longlong)plVar6 + 0xc) = 0xd;
  if (bVar10) {
    uVar11 = 0x3ff00000;
  }
  *plVar6 = (ulonglong)uVar11 << 0x20;
  FUN_140e60910(1);
  local_e8 = 0x1eb;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a053e8);
  FUN_140e609c0(param_1);
  if ((int)local_d0[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_c8;
  }
  if (puVar7 != puVar5) {
    local_108 = *(undefined4 *)puVar7;
    uStack_104 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_100 = *(undefined4 *)(puVar7 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_108);
  }
  FUN_140e60910(1);
  local_e8 = 0x1ec;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04f18);
  FUN_140e609c0(param_1);
  if ((int)local_d0[0] < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_c8[1];
  }
  if (puVar7 != puVar5) {
    local_108 = *(undefined4 *)puVar7;
    uStack_104 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_100 = *(undefined4 *)(puVar7 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_108);
  }
  FUN_140e60910(1);
  local_e8 = 0x1ed;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05788);
  FUN_140e609c0(param_1);
  if ((int)local_d0[0] < 3) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_c8[2];
  }
  if (puVar7 != puVar5) {
    local_108 = *(undefined4 *)puVar7;
    uStack_104 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_100 = *(undefined4 *)(puVar7 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_108);
  }
  FUN_140e60910(1);
  local_e8 = 0x1ee;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05578);
  uStack_10c = 0xd;
  local_118 = 0x3ff0000000000000;
  if (&local_118 != puVar5) {
    local_108 = 0;
    uStack_104 = 0x3ff00000;
    uStack_100 = uStack_110;
    uStack_fc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_108);
  }
  local_e8 = 0x1ef;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06018);
  FUN_140e609c0(param_1);
  if (3 < (int)local_d0[0]) {
    puVar9 = (undefined8 *)local_c8[3];
  }
  if (puVar9 != puVar5) {
    local_108 = *(undefined4 *)puVar9;
    uStack_104 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_100 = *(undefined4 *)(puVar9 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_108);
  }
  FUN_140e60910(1);
LAB_140118304:
  local_e8 = 0x1f2;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar4 = FUN_140e5c910();
  FUN_140e42c10(uVar4,param_1);
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,4,FUN_140041b30);
  if (0 < (int)local_d0[0]) {
    puVar9 = local_c8;
    do {
      puVar5 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_c8);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

