// gml_Script_InputClusterResetMetadata @ 0x140304820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputClusterResetMetadata
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  ulonglong uVar15;
  undefined8 **ppuVar16;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_c0 = "gml_Script_InputClusterGetMetadata";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0xb;
  FUN_140041df0(local_68,param_4,3,param_5);
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_118,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_14c = 0;
  local_158 = 0;
  local_13c = 0;
  local_148 = 0;
  local_a4 = 0;
  local_b0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddff8) &&
     (_Init_thread_header(&DAT_141dddff8), DAT_141dddff8 == -1)) {
    DAT_141dddff0 = (longlong *)FUN_140e63aa0(DAT_1419efbe8);
    _Init_thread_footer(&DAT_141dddff8);
  }
  local_b8 = 0xb;
  puVar13 = &DAT_1419df7b0;
  uVar12 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_60[1];
  }
  iVar5 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 == 0) {
    local_b8 = 0xb;
    if ((int)local_68[0] < 2) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)local_60[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = 0;
  }
  if ((int)local_68[0] < 3) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_60[2];
  }
  iVar5 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 == 0) {
    uStack_15c = 0xd;
    local_168 = 0;
    if ((int)local_68[0] < 3) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)local_60[2];
      if (&local_168 == puVar8) goto LAB_140304a4d;
    }
    local_138 = 0;
    uStack_130 = uStack_160;
    uStack_12c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_138);
  }
LAB_140304a4d:
  if (DAT_141ddc0b9 == '\0') {
    FUN_140e64380(DAT_141dddff0,"gml_Script_InputClusterGetMetadata");
    FUN_140e64380(param_1,"gml_Script_InputClusterGetMetadata");
  }
  local_b8 = 0xd;
  if (DAT_141ddc0b9 == '\0') {
    DAT_141ddc0b9 = '\x01';
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    puVar8 = (undefined8 *)(**(code **)(*DAT_141dddff0 + 0x10))(DAT_141dddff0,DAT_141a026b8);
    FUN_140e609c0(DAT_141dddff0);
    uVar7 = 0;
    puVar9 = (undefined8 *)gml_Script___InputTrace(param_1,param_2,&local_158,0,0);
    if (puVar9 != puVar8) {
      local_168 = *puVar9;
      uStack_160 = *(undefined4 *)(puVar9 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_168);
    }
    FUN_140e60910(1);
  }
  local_b8 = 4;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((int)local_68[0] < 2) {
    puVar8 = &DAT_1419df7b0;
LAB_140304b8a:
    local_168 = *puVar8;
    uStack_160 = *(undefined4 *)(puVar8 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_168);
  }
  else {
    puVar8 = (undefined8 *)local_60[1];
    if (puVar8 != &local_118) goto LAB_140304b8a;
  }
  local_a0 = &local_118;
  ppuVar16 = &local_a0;
  ppuVar14 = (undefined8 **)CONCAT44(uVar7,DAT_141a014a8);
  uVar10 = FUN_140e634e0(param_1,param_2,&local_158,1,ppuVar14,ppuVar16);
  cVar4 = FUN_140e491e0(uVar10);
  if (cVar4 == '\0') {
    local_b8 = 5;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    uVar7 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    local_b0 = 0;
    local_a8 = 0;
    local_a4 = 5;
    if ((int)local_68[0] < 2) {
      puVar8 = &DAT_1419df7b0;
LAB_140304c72:
      local_168 = *puVar8;
      uStack_160 = *(undefined4 *)(puVar8 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_168);
    }
    else {
      puVar8 = (undefined8 *)local_60[1];
      if (puVar8 != &local_108) goto LAB_140304c72;
    }
    local_98 = &local_108;
    local_168 = CONCAT44(uRam0000000141dcf8dc,_DAT_141dcf8d8);
    uStack_160 = uRam0000000141dcf8e0;
    uStack_15c = DAT_141dcf8e4;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_168);
    local_90 = &local_f8;
    ppuVar16 = &local_98;
    puVar8 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_b0,1,CONCAT44(uVar7,DAT_1419fdc58),&local_98);
    if (puVar8 != &local_e8) {
      local_168 = *puVar8;
      uStack_160 = *(undefined4 *)(puVar8 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_168);
    }
    local_88 = &local_e8;
    local_168 = CONCAT44(uRam0000000141dcf8bc,_DAT_141dcf8b8);
    uStack_160 = uRam0000000141dcf8c0;
    uStack_15c = DAT_141dcf8c4;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_168);
    local_80 = local_d8;
    ppuVar14 = &local_90;
    FUN_14008e020(param_1,param_2,&local_148,3,ppuVar14);
  }
  local_b8 = 0xb;
  if ((int)local_68[0] < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_60[1];
  }
  uStack_15c = 0;
  local_168 = 0x3ff0000000000000;
  uVar6 = FUN_140e851f0(puVar8,&local_168,DAT_141955260,1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (uVar6 < 0x80000000) {
    local_b8 = 0xf;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_168 = CONCAT44(uRam0000000141dcf8ac,_DAT_141dcf8a8);
    uStack_160 = uRam0000000141dcf8b0;
    uStack_15c = DAT_141dcf8b4;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_168);
    local_a0 = &local_118;
    if ((int)local_68[0] < 2) {
      puVar8 = &DAT_1419df7b0;
LAB_140304ea6:
      local_168 = *puVar8;
      uStack_160 = *(undefined4 *)(puVar8 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_168);
    }
    else {
      puVar8 = (undefined8 *)local_60[1];
      if (puVar8 != &local_108) goto LAB_140304ea6;
    }
    local_98 = &local_108;
    local_168 = CONCAT44(uRam0000000141dcf89c,_DAT_141dcf898);
    uStack_160 = uRam0000000141dcf8a0;
    uStack_15c = DAT_141dcf8a4;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_168);
    local_90 = &local_f8;
    local_168 = CONCAT44(uRam00000001419e3e04,_DAT_1419e3e00);
    uStack_160 = uRam00000001419e3e08;
    uStack_15c = uRam00000001419e3e0c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_168);
    local_88 = &local_e8;
    local_168 = CONCAT44(uRam0000000141dcf8cc,_DAT_141dcf8c8);
    uStack_160 = uRam0000000141dcf8d0;
    uStack_15c = DAT_141dcf8d4;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_168);
    local_80 = local_d8;
    ppuVar14 = &local_a0;
    FUN_14008e020(param_1,param_2,&local_158,5,ppuVar14);
  }
  local_b8 = 0x15;
  if ((int)local_68[0] < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_60[1];
  }
  uStack_15c = 0;
  local_168 = 0;
  iVar5 = FUN_140e851f0(puVar8,&local_168,DAT_141955260,1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (iVar5 == -2 || -1 < iVar5) goto LAB_140305138;
  local_b8 = 0x15;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  local_138 = CONCAT44(uRam0000000141dcf8ac,_DAT_141dcf8a8);
  uStack_130 = uRam0000000141dcf8b0;
  uStack_12c = DAT_141dcf8b4;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_138);
  local_a0 = &local_118;
  if ((int)local_68[0] < 2) {
    puVar8 = &DAT_1419df7b0;
LAB_1403050a5:
    local_138 = *puVar8;
    uStack_130 = *(undefined4 *)(puVar8 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_138);
  }
  else {
    puVar8 = (undefined8 *)local_60[1];
    if (puVar8 != &local_108) goto LAB_1403050a5;
  }
  local_98 = &local_108;
  local_138 = CONCAT44(uRam0000000141dcf8ec,_DAT_141dcf8e8);
  uStack_130 = uRam0000000141dcf8f0;
  uStack_12c = DAT_141dcf8f4;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_138);
  local_90 = &local_f8;
  ppuVar14 = &local_a0;
  FUN_14008e020(param_1,param_2,&local_158,3,ppuVar14);
LAB_140305138:
  local_b8 = 0x11;
  plVar11 = (longlong *)(**(code **)(*DAT_141dddff0 + 8))(DAT_141dddff0,DAT_141a026b8);
  if ((int)local_68[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_60;
  }
  uVar7 = FUN_140e4a740(puVar8);
  if ((int)local_68[0] < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_60[1];
  }
  iVar5 = FUN_140e4a740(puVar8);
  if (((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar11, lVar1 != 0)) {
    if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
  FUN_140e87440(plVar11,DAT_1419fd848,uVar7,&local_78,uVar15,
                (ulonglong)ppuVar16 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar15 >> 0x20);
  local_168 = local_78;
  uStack_160 = uStack_70;
  uStack_15c = uStack_6c;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_168);
  local_b8 = 0x12;
  if (2 < (int)local_68[0]) {
    puVar13 = (undefined8 *)local_60[2];
  }
  cVar4 = FUN_140e491e0(puVar13);
  if (cVar4 == '\0') {
    uStack_12c = local_11c;
    uStack_130 = local_120;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
      local_138 = local_128;
    }
    else {
      FUN_1400419b0(&local_138,&local_128);
    }
    puVar13 = &local_138;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_98 = &local_128;
    puVar13 = (undefined8 *)
              FUN_140e634e0(param_1,param_2,&local_148,1,CONCAT44(uVar7,DAT_1419fd0c8),&local_98);
    uStack_15c = *(undefined4 *)((longlong)puVar13 + 0xc);
    uStack_160 = *(undefined4 *)(puVar13 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_168 = *puVar13;
    }
    else {
      FUN_1400419b0(&local_168,puVar13);
    }
    puVar13 = &local_168;
    bVar3 = true;
    bVar2 = false;
  }
  if (puVar13 != param_3) {
    local_58 = *(undefined4 *)puVar13;
    uStack_54 = *(undefined4 *)((longlong)puVar13 + 4);
    uStack_50 = *(undefined4 *)(puVar13 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar13 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_58);
  }
  if ((bVar2) && ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_138);
  }
  if ((bVar3) && ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,5,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    puVar13 = local_60;
    do {
      puVar8 = (undefined8 *)*puVar13;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xc) = 5;
      puVar13 = puVar13 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

