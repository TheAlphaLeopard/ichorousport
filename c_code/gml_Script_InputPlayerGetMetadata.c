// gml_Script_InputPlayerGetMetadata @ 0x140349d70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputPlayerGetMetadata
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined8 **ppuVar13;
  undefined8 **ppuVar14;
  undefined8 **ppuVar15;
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
  
  ppuVar14 = &local_78;
  local_c0 = "gml_Script_InputPlayerGetMaxThreshold";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 6;
  FUN_140041df0(local_48,param_4,2,param_5);
  uVar12 = 1;
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
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde510) &&
     (_Init_thread_header(&DAT_141dde510), DAT_141dde510 == -1)) {
    DAT_141dde508 = (longlong *)FUN_140e63aa0(DAT_1419f2ab8);
    _Init_thread_footer(&DAT_141dde510);
  }
  local_b8 = 6;
  puVar10 = &DAT_1419df7b0;
  uVar11 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_40[1];
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_b8 = 6;
    if ((int)local_48[0] < 2) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_40[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
  }
  if (DAT_141ddc111 == '\0') {
    FUN_140e64380(DAT_141dde508,"gml_Script_InputPlayerGetMaxThreshold");
    FUN_140e64380(param_1,"gml_Script_InputPlayerGetMaxThreshold");
  }
  local_b8 = 8;
  if (DAT_141ddc111 == '\0') {
    DAT_141ddc111 = '\x01';
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde508 + 0x10))(DAT_141dde508,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde508);
    uVar12 = 0;
    puVar7 = (undefined8 *)gml_Script___InputTrace(param_1,param_2,&local_138,0,0);
    if (puVar7 != puVar6) {
      local_148 = *puVar7;
      uStack_140 = *(undefined4 *)(puVar7 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_148);
    }
    FUN_140e60910(1);
  }
  local_b8 = 6;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if ((int)local_48[0] < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_14034a04d:
    local_148 = *puVar6;
    uStack_140 = *(undefined4 *)(puVar6 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
  }
  else {
    puVar6 = (undefined8 *)local_40[1];
    if (puVar6 != &local_128) goto LAB_14034a04d;
  }
  local_88 = &local_128;
  ppuVar15 = &local_88;
  ppuVar13 = (undefined8 **)CONCAT44(uVar12,DAT_141a014a8);
  uVar8 = FUN_140e634e0(param_1,param_2,&local_138,1,ppuVar13,ppuVar15);
  cVar2 = FUN_140e491e0(uVar8);
  uVar12 = 0;
  if (cVar2 == '\0') {
    local_b8 = 10;
    local_b0 = 0;
    local_a8 = 0;
    local_a4 = 5;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    uVar12 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if ((int)local_48[0] < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_14034a119:
      local_148 = *puVar6;
      uStack_140 = *(undefined4 *)(puVar6 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_148);
    }
    else {
      puVar6 = (undefined8 *)local_40[1];
      if (puVar6 != &local_118) goto LAB_14034a119;
    }
    local_80 = &local_118;
    local_148 = CONCAT44(uRam0000000141dd0cdc,_DAT_141dd0cd8);
    uStack_140 = uRam0000000141dd0ce0;
    uStack_13c = DAT_141dd0ce4;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_148);
    local_78 = &local_108;
    ppuVar15 = &local_80;
    puVar6 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar12,DAT_1419fdc58),ppuVar15);
    if (puVar6 != &local_f8) {
      local_148 = *puVar6;
      uStack_140 = *(undefined4 *)(puVar6 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_148);
    }
    local_70 = &local_f8;
    local_148 = CONCAT44(uRam0000000141dd0ccc,_DAT_141dd0cc8);
    uStack_140 = uRam0000000141dd0cd0;
    uStack_13c = DAT_141dd0cd4;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
    local_68 = local_e8;
    FUN_14008e020(param_1,param_2,&local_b0,3,ppuVar14);
    uVar12 = local_a4;
    ppuVar13 = ppuVar14;
  }
  local_b8 = 0xf;
  if ((int)local_48[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_40[1];
  }
  uStack_13c = 0;
  local_148 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar6,&local_148,DAT_141955260,1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (uVar4 < 0x80000000) {
    local_b8 = 0xf;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    local_148 = CONCAT44(uRam0000000141dd0cbc,_DAT_141dd0cb8);
    uStack_140 = uRam0000000141dd0cc0;
    uStack_13c = DAT_141dd0cc4;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
    local_88 = &local_128;
    if ((int)local_48[0] < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_14034a35d:
      local_148 = *puVar6;
      uStack_140 = *(undefined4 *)(puVar6 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_148);
    }
    else {
      puVar6 = (undefined8 *)local_40[1];
      if (puVar6 != &local_118) goto LAB_14034a35d;
    }
    local_80 = &local_118;
    local_148 = CONCAT44(uRam0000000141dd0cac,_DAT_141dd0ca8);
    uStack_140 = uRam0000000141dd0cb0;
    uStack_13c = DAT_141dd0cb4;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_148);
    local_78 = &local_108;
    local_148 = CONCAT44(uRam00000001419e4234,_DAT_1419e4230);
    uStack_140 = uRam00000001419e4238;
    uStack_13c = uRam00000001419e423c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
    local_70 = &local_f8;
    local_148 = CONCAT44(uRam0000000141dd0c9c,_DAT_141dd0c98);
    uStack_140 = uRam0000000141dd0ca0;
    uStack_13c = DAT_141dd0ca4;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
    local_68 = local_e8;
    ppuVar13 = &local_88;
    FUN_14008e020(param_1,param_2,&local_138,5,ppuVar13);
  }
  if ((int)local_48[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_40[1];
  }
  uStack_13c = 0;
  local_148 = 0;
  iVar3 = FUN_140e851f0(puVar6,&local_148,DAT_141955260,1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_14034a5fa;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  local_98 = _DAT_141dd0cb8;
  uStack_94 = uRam0000000141dd0cbc;
  uStack_90 = uRam0000000141dd0cc0;
  uStack_8c = DAT_141dd0cc4;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_98);
  local_88 = &local_128;
  if ((int)local_48[0] < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_14034a563:
    local_98 = *(undefined4 *)puVar6;
    uStack_94 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_90 = *(undefined4 *)(puVar6 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_98);
  }
  else {
    puVar6 = (undefined8 *)local_40[1];
    if (puVar6 != &local_118) goto LAB_14034a563;
  }
  local_80 = &local_118;
  local_98 = _DAT_141dd0ce8;
  uStack_94 = uRam0000000141dd0cec;
  uStack_90 = uRam0000000141dd0cf0;
  uStack_8c = DAT_141dd0cf4;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_98);
  local_78 = &local_108;
  ppuVar13 = &local_88;
  FUN_14008e020(param_1,param_2,&local_138,3,ppuVar13);
LAB_14034a5fa:
  local_b8 = 0xc;
  plVar9 = (longlong *)(**(code **)(*DAT_141dde508 + 8))(DAT_141dde508,DAT_141a026b8);
  if ((int)local_48[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_40;
  }
  uVar5 = FUN_140e4a740(puVar6);
  if (1 < (int)local_48[0]) {
    puVar10 = (undefined8 *)local_40[1];
  }
  iVar3 = FUN_140e4a740(puVar10);
  if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  FUN_140e87440(plVar9,DAT_1419fd688,uVar5,&local_58,(ulonglong)ppuVar13 & 0xffffffffffffff00,
                (ulonglong)ppuVar15 & 0xffffffffffffff00);
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
  if ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0) {
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
    puVar10 = local_40;
    do {
      puVar6 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

