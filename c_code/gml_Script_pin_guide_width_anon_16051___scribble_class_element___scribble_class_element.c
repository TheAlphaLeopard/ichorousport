// gml_Script_pin_guide_width_anon_16051___scribble_class_element___scribble_class_element @ 0x140117270

undefined8 *
gml_Script_pin_guide_width_anon_16051___scribble_class_element___scribble_class_element
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
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  uint local_b0 [2];
  undefined8 *local_a8;
  undefined8 local_a0;
  byte local_94;
  undefined8 *local_70 [7];
  
  local_d0 = "gml_Script_wrap@anon@13813@__scribble_class_element@__scribble_class_element";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x1c0;
  FUN_140041df0(local_b0,param_4,3,param_5);
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_a0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_b4 = 0;
  local_c0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x1c0;
  puVar9 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_b0[0];
  if ((int)local_b0[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_a8[1];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_c8 = 0x1c0;
    if ((int)local_b0[0] < 2) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_a8[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = &DAT_bff0000000000000;
  }
  if ((int)local_b0[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_a8[2];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    uStack_ec = 0xd;
    local_f8 = 0;
    if ((int)local_b0[0] < 3) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_a8[2];
      if (&local_f8 == puVar5) goto LAB_140117421;
    }
    local_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = uStack_f0;
    uStack_dc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_e8);
  }
LAB_140117421:
  local_c8 = 0x1c2;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a056f8);
  cVar1 = FUN_140e491e0(uVar4);
  uVar11 = 0x3ff00000;
  if (cVar1 != '\0') {
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a053e8);
    if ((int)local_b0[0] < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*local_a8;
    }
    iVar2 = FUN_140e851f0(puVar5,uVar4,DAT_141955260,0);
    if (iVar2 == 0) {
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04f18);
      if ((int)local_b0[0] < 2) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)local_a8[1];
      }
      iVar2 = FUN_140e851f0(puVar5,uVar4,DAT_141955260,0);
      if (iVar2 == 0) {
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05788);
        if ((int)local_b0[0] < 3) {
          puVar5 = &DAT_1419df7b0;
        }
        else {
          puVar5 = (undefined8 *)local_a8[2];
        }
        iVar2 = FUN_140e851f0(puVar5,uVar4,DAT_141955260,0);
        if (iVar2 == 0) {
          uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05578);
          cVar1 = FUN_140e491e0(uVar4);
          if (cVar1 == '\0') {
            uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06018);
            uStack_ec = 0;
            local_f8 = 0x3ff0000000000000;
            iVar2 = FUN_140e851f0(uVar4,&local_f8,DAT_141955260,0);
            if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_f8);
            }
            if (iVar2 == 0) goto LAB_1401179f7;
          }
        }
      }
    }
  }
  local_c8 = 0x1c9;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05918);
  uStack_ec = 0xd;
  local_f8 = 0x3ff0000000000000;
  if (&local_f8 != puVar5) {
    local_e8 = 0;
    uStack_e4 = 0x3ff00000;
    uStack_e0 = uStack_f0;
    uStack_dc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_e8);
  }
  local_c8 = 0x1ca;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04dd8);
  uStack_ec = 0xd;
  local_f8 = 0x3ff0000000000000;
  if (&local_f8 != puVar5) {
    local_e8 = 0;
    uStack_e4 = 0x3ff00000;
    uStack_e0 = uStack_f0;
    uStack_dc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_e8);
  }
  local_c8 = 0x1cb;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a053a8);
  uStack_ec = 0xd;
  local_f8 = 0x3ff0000000000000;
  if (&local_f8 != puVar5) {
    local_e8 = 0;
    uStack_e4 = 0x3ff00000;
    uStack_e0 = uStack_f0;
    uStack_dc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_e8);
  }
  local_c8 = 0x1cd;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a056f8);
  bVar10 = false;
  if ((int)local_b0[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_a8;
  }
  uStack_ec = 0;
  local_f8 = 0;
  uVar3 = FUN_140e851f0(puVar5,&local_f8,DAT_141955260,1);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (uVar3 < 0x80000000) {
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    local_c0 = 0;
    local_b8 = 0;
    local_b4 = 5;
    if ((int)local_b0[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_140117758:
      local_e8 = *(undefined4 *)puVar5;
      uStack_e4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_e0 = *(undefined4 *)(puVar5 + 1);
      uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      FUN_140041b80(&local_a0,&local_e8);
    }
    else {
      puVar5 = (undefined8 *)*local_a8;
      if (puVar5 != &local_a0) goto LAB_140117758;
    }
    local_70[0] = &local_a0;
    uVar4 = FUN_140e634e0(param_1,param_2,&local_c0,1,CONCAT44(uVar12,DAT_141a05f08),local_70);
    cVar1 = FUN_140e491e0(uVar4);
    bVar10 = cVar1 == '\0';
  }
  FUN_140e609c0(param_1);
  if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(plVar6);
  }
  *(undefined4 *)((longlong)plVar6 + 0xc) = 0xd;
  if (!bVar10) {
    uVar11 = 0;
  }
  *plVar6 = (ulonglong)uVar11 << 0x20;
  FUN_140e60910(1);
  local_c8 = 0x1ce;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a053e8);
  FUN_140e609c0(param_1);
  if ((int)local_b0[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_a8;
  }
  if (puVar7 != puVar5) {
    local_e8 = *(undefined4 *)puVar7;
    uStack_e4 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_e0 = *(undefined4 *)(puVar7 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_e8);
  }
  FUN_140e60910(1);
  local_c8 = 0x1cf;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04f18);
  FUN_140e609c0(param_1);
  if ((int)local_b0[0] < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_a8[1];
  }
  if (puVar7 != puVar5) {
    local_e8 = *(undefined4 *)puVar7;
    uStack_e4 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_e0 = *(undefined4 *)(puVar7 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_e8);
  }
  FUN_140e60910(1);
  local_c8 = 0x1d0;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05788);
  FUN_140e609c0(param_1);
  if (2 < (int)local_b0[0]) {
    puVar9 = (undefined8 *)local_a8[2];
  }
  if (puVar9 != puVar5) {
    local_e8 = *(undefined4 *)puVar9;
    uStack_e4 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_e0 = *(undefined4 *)(puVar9 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_e8);
  }
  FUN_140e60910(1);
  local_c8 = 0x1d1;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05578);
  uStack_ec = 0xd;
  local_f8 = 0;
  if (&local_f8 != puVar9) {
    local_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = uStack_f0;
    uStack_dc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_e8);
  }
  local_c8 = 0x1d2;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06018);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar9);
  }
  *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
  *puVar9 = 0x3ff0000000000000;
LAB_1401179f7:
  local_c8 = 0x1d5;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar4 = FUN_140e5c910();
  FUN_140e42c10(uVar4,param_1);
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  _eh_vector_destructor_iterator_(&local_a0,0x10,3,FUN_140041b30);
  if (0 < (int)local_b0[0]) {
    puVar9 = local_a8;
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
  FUN_140e4cd60(local_a8);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

