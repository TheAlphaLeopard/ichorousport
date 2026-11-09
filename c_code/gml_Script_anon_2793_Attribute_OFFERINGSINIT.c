// gml_Script_anon_2793_Attribute_OFFERINGSINIT @ 0x1403c0690

undefined8 *
gml_Script_anon_2793_Attribute_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 uVar9;
  ulonglong uVar8;
  undefined8 **ppuVar10;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined4 local_c8 [3];
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 *local_a8;
  undefined4 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  char *local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  uint local_38 [2];
  undefined8 *local_30;
  
  local_88 = "gml_Script_anon@1923@Offering@OFFERINGSINIT";
  local_90 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_90;
  local_80 = 0x3b;
  FUN_140041df0(local_38,param_4,2,param_5);
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_d8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_3c = 0xffffff;
  local_48 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_80 = 0x3b;
  puVar6 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_38[0];
  if ((int)local_38[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_30[1];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_80 = 0x3b;
    if ((int)local_38[0] < 2) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_30[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = &DAT_bff0000000000000;
  }
  local_80 = 0x3d;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uStack_6c = 0xf;
  local_78 = (undefined1 *)0x1000000000000ee;
  local_e8 = 0xee;
  uStack_e4 = 0x1000000;
  uStack_e0 = uStack_70;
  uStack_dc = 0xf;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_e8);
  local_a8 = &local_d8;
  ppuVar10 = &local_a8;
  uVar8 = CONCAT44(uVar9,DAT_141a02ef8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_f8,1,uVar8,ppuVar10);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_80 = 0x3e;
    goto LAB_1403c0dc6;
  }
  local_80 = 0x40;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ca8);
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f6238);
  FUN_140e87440(uVar3,DAT_1419f5858,0x80000000,&local_48,uVar8 & 0xffffffffffffff00,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  if ((int)local_38[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1403c0941:
    local_e8 = *(undefined4 *)puVar5;
    uStack_e4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_e0 = *(undefined4 *)(puVar5 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_e8);
  }
  else {
    puVar5 = (undefined8 *)*local_30;
    if (puVar5 != &local_d8) goto LAB_1403c0941;
  }
  local_a8 = &local_d8;
  if (puVar4 != local_c8) {
    local_e8 = *puVar4;
    uStack_e4 = puVar4[1];
    uStack_e0 = puVar4[2];
    uStack_dc = puVar4[3];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_e8);
  }
  local_a0 = local_c8;
  if ((int)local_38[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_1403c09d5:
    local_e8 = *(undefined4 *)puVar5;
    uStack_e4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_e0 = *(undefined4 *)(puVar5 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_e8);
  }
  else {
    puVar5 = (undefined8 *)local_30[1];
    if (puVar5 != &local_b8) goto LAB_1403c09d5;
  }
  local_98 = &local_b8;
  uVar3 = FUN_140069500(uVar3);
  ppuVar10 = &local_a8;
  puVar5 = &local_48;
  FUN_140e63610(uVar3,param_2,&local_f8,3,puVar5,ppuVar10);
  local_80 = 0x41;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5d58);
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f6238);
  FUN_140e87440(uVar3,DAT_1419f5858,0x80000000,&local_58,(ulonglong)puVar5 & 0xffffffffffffff00,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  if ((int)local_38[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1403c0ad1:
    local_e8 = *(undefined4 *)puVar5;
    uStack_e4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_e0 = *(undefined4 *)(puVar5 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_e8);
  }
  else {
    puVar5 = (undefined8 *)*local_30;
    if (puVar5 != &local_d8) goto LAB_1403c0ad1;
  }
  local_a8 = &local_d8;
  if (puVar4 != local_c8) {
    local_e8 = *puVar4;
    uStack_e4 = puVar4[1];
    uStack_e0 = puVar4[2];
    uStack_dc = puVar4[3];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_e8);
  }
  local_a0 = local_c8;
  if ((int)local_38[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_1403c0b65:
    local_e8 = *(undefined4 *)puVar5;
    uStack_e4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_e0 = *(undefined4 *)(puVar5 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_e8);
  }
  else {
    puVar5 = (undefined8 *)local_30[1];
    if (puVar5 != &local_b8) goto LAB_1403c0b65;
  }
  local_98 = &local_b8;
  uVar3 = FUN_140069500(uVar3);
  ppuVar10 = &local_a8;
  puVar5 = &local_58;
  FUN_140e63610(uVar3,param_2,&local_f8,3,puVar5,ppuVar10);
  local_80 = 0x4c;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ea8);
  uStack_6c = 0;
  local_78 = &DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(uVar3,&local_78,DAT_141955260,0);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (iVar2 == 0) goto LAB_1403c0dc6;
  local_80 = 0x4d;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f6238);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ea8);
  FUN_140e87440(uVar3,DAT_1419f5858,0x80000000,&local_68,(ulonglong)puVar5 & 0xffffffffffffff00,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  if ((int)local_38[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1403c0ccb:
    local_e8 = *(undefined4 *)puVar5;
    uStack_e4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_e0 = *(undefined4 *)(puVar5 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_e8);
  }
  else {
    puVar5 = (undefined8 *)*local_30;
    if (puVar5 != &local_d8) goto LAB_1403c0ccb;
  }
  local_a8 = &local_d8;
  if (puVar4 != local_c8) {
    local_e8 = *puVar4;
    uStack_e4 = puVar4[1];
    uStack_e0 = puVar4[2];
    uStack_dc = puVar4[3];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_e8);
  }
  local_a0 = local_c8;
  if (((int)local_38[0] < 2) || (puVar6 = (undefined8 *)local_30[1], puVar6 != &local_b8)) {
    local_e8 = *(undefined4 *)puVar6;
    uStack_e4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_e0 = *(undefined4 *)(puVar6 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_e8);
  }
  local_98 = &local_b8;
  uVar3 = FUN_140069500(uVar3);
  FUN_140e63610(uVar3,param_2,&local_f8,3,&local_68,&local_a8);
LAB_1403c0dc6:
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,3,FUN_140041b30);
  if (0 < (int)local_38[0]) {
    puVar6 = local_30;
    do {
      puVar5 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_30);
  DAT_141dc7a50 = (undefined8 *)local_90;
  return param_3;
}

