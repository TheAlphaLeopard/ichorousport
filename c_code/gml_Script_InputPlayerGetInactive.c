// gml_Script_InputPlayerGetInactive @ 0x1403479b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputPlayerGetInactive
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined8 **ppuVar12;
  undefined8 **ppuVar13;
  undefined8 **ppuVar14;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48 [2];
  undefined8 *local_40;
  
  ppuVar13 = &local_78;
  local_c0 = "gml_Script_InputPlayerGetGhost";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 7;
  FUN_140041df0(local_48,param_4,1,param_5);
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_12c = 0;
  local_138 = 0;
  local_a4 = 0;
  local_b0 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde4e8) &&
     (_Init_thread_header(&DAT_141dde4e8), DAT_141dde4e8 == -1)) {
    DAT_141dde4e0 = (longlong *)FUN_140e63aa0(DAT_1419f2a18);
    _Init_thread_footer(&DAT_141dde4e8);
  }
  local_b8 = 7;
  puVar9 = &DAT_1419df7b0;
  uVar10 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_40;
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_b8 = 7;
    if ((int)local_48[0] < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*local_40;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  if (DAT_141ddc10e == '\0') {
    FUN_140e64380(DAT_141dde4e0,"gml_Script_InputPlayerGetGhost");
    FUN_140e64380(param_1,"gml_Script_InputPlayerGetGhost");
  }
  local_b8 = 9;
  if (DAT_141ddc10e == '\0') {
    DAT_141ddc10e = '\x01';
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    puVar5 = (undefined8 *)(**(code **)(*DAT_141dde4e0 + 0x10))(DAT_141dde4e0,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde4e0);
    uVar11 = 0;
    puVar6 = (undefined8 *)gml_Script___InputTrace(param_1,param_2,&local_138,0,0);
    if (puVar6 != puVar5) {
      local_148 = *puVar6;
      uStack_140 = *(undefined4 *)(puVar6 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_148);
    }
    FUN_140e60910(1);
  }
  local_b8 = 5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_140347c84:
    local_148 = *puVar5;
    uStack_140 = *(undefined4 *)(puVar5 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
  }
  else {
    puVar5 = (undefined8 *)*local_40;
    if (puVar5 != &local_128) goto LAB_140347c84;
  }
  local_88 = &local_128;
  ppuVar14 = &local_88;
  ppuVar12 = (undefined8 **)CONCAT44(uVar11,DAT_141a014a8);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_138,1,ppuVar12,ppuVar14);
  cVar2 = FUN_140e491e0(uVar7);
  uVar11 = 0;
  if (cVar2 == '\0') {
    local_b8 = 0xb;
    local_b0 = 0;
    local_a8 = 0;
    local_a4 = 5;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    uVar11 = (undefined4)((ulonglong)ppuVar12 >> 0x20);
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if ((int)local_48[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_140347d4d:
      local_148 = *puVar5;
      uStack_140 = *(undefined4 *)(puVar5 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_148);
    }
    else {
      puVar5 = (undefined8 *)*local_40;
      if (puVar5 != &local_118) goto LAB_140347d4d;
    }
    local_80 = &local_118;
    local_148 = CONCAT44(uRam0000000141dd0bcc,_DAT_141dd0bc8);
    uStack_140 = uRam0000000141dd0bd0;
    uStack_13c = DAT_141dd0bd4;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_148);
    local_78 = &local_108;
    ppuVar14 = &local_80;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar11,DAT_1419fdc58),ppuVar14);
    if (puVar5 != &local_f8) {
      local_148 = *puVar5;
      uStack_140 = *(undefined4 *)(puVar5 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_148);
    }
    local_70 = &local_f8;
    local_148 = CONCAT44(uRam0000000141dd0b7c,_DAT_141dd0b78);
    uStack_140 = uRam0000000141dd0b80;
    uStack_13c = DAT_141dd0b84;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
    local_68 = local_e8;
    FUN_14008e020(param_1,param_2,&local_b0,3,ppuVar13);
    uVar11 = local_a4;
    ppuVar12 = ppuVar13;
  }
  local_b8 = 0x10;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_40;
  }
  uStack_13c = 0;
  local_148 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar5,&local_148,DAT_141955260,1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (uVar4 < 0x80000000) {
    local_b8 = 0x10;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    local_148 = CONCAT44(uRam0000000141dd0bbc,_DAT_141dd0bb8);
    uStack_140 = uRam0000000141dd0bc0;
    uStack_13c = DAT_141dd0bc4;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
    local_88 = &local_128;
    if ((int)local_48[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_140347f8b:
      local_148 = *puVar5;
      uStack_140 = *(undefined4 *)(puVar5 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_148);
    }
    else {
      puVar5 = (undefined8 *)*local_40;
      if (puVar5 != &local_118) goto LAB_140347f8b;
    }
    local_80 = &local_118;
    local_148 = CONCAT44(uRam0000000141dd0b9c,_DAT_141dd0b98);
    uStack_140 = uRam0000000141dd0ba0;
    uStack_13c = DAT_141dd0ba4;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_148);
    local_78 = &local_108;
    local_148 = CONCAT44(uRam00000001419e4204,_DAT_1419e4200);
    uStack_140 = uRam00000001419e4208;
    uStack_13c = uRam00000001419e420c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
    local_70 = &local_f8;
    local_148 = CONCAT44(uRam0000000141dd0b8c,_DAT_141dd0b88);
    uStack_140 = uRam0000000141dd0b90;
    uStack_13c = DAT_141dd0b94;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
    local_68 = local_e8;
    ppuVar12 = &local_88;
    FUN_14008e020(param_1,param_2,&local_138,5,ppuVar12);
  }
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_40;
  }
  uStack_13c = 0;
  local_148 = 0;
  iVar3 = FUN_140e851f0(puVar5,&local_148,DAT_141955260,1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_140348222;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  local_98 = _DAT_141dd0bb8;
  uStack_94 = uRam0000000141dd0bbc;
  uStack_90 = uRam0000000141dd0bc0;
  uStack_8c = DAT_141dd0bc4;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_98);
  local_88 = &local_128;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14034818b:
    local_98 = *(undefined4 *)puVar5;
    uStack_94 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_90 = *(undefined4 *)(puVar5 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_98);
  }
  else {
    puVar5 = (undefined8 *)*local_40;
    if (puVar5 != &local_118) goto LAB_14034818b;
  }
  local_80 = &local_118;
  local_98 = _DAT_141dd0ba8;
  uStack_94 = uRam0000000141dd0bac;
  uStack_90 = uRam0000000141dd0bb0;
  uStack_8c = DAT_141dd0bb4;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_98);
  local_78 = &local_108;
  ppuVar12 = &local_88;
  FUN_14008e020(param_1,param_2,&local_138,3,ppuVar12);
LAB_140348222:
  local_b8 = 0xd;
  plVar8 = (longlong *)(**(code **)(*DAT_141dde4e0 + 8))(DAT_141dde4e0,DAT_141a026b8);
  if (0 < (int)local_48[0]) {
    puVar9 = (undefined8 *)*local_40;
  }
  iVar3 = FUN_140e4a740(puVar9);
  if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  FUN_140e87440(plVar8,DAT_1419fd708,0x80000000,&local_58,(ulonglong)ppuVar12 & 0xffffffffffffff00,
                (ulonglong)ppuVar14 & 0xffffffffffffff00);
  if (&local_58 != param_3) {
    local_98 = (undefined4)local_58;
    uStack_94 = local_58._4_4_;
    uStack_90 = uStack_50;
    uStack_8c = uStack_4c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_98);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,5,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar9 = local_40;
    do {
      puVar5 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

