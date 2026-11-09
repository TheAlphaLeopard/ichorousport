// gml_Script_InputVerbConsume @ 0x140370310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputVerbConsume
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
  ulonglong uVar15;
  undefined8 **ppuVar16;
  ulonglong uVar17;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  uint local_48 [2];
  undefined8 *local_40;
  
  ppuVar14 = &local_88;
  local_d0 = "gml_Script_InputValue";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 9;
  FUN_140041df0(local_48,param_4,2,param_5);
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_138,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_4c = 0xffffff;
  local_58 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_13c = 0;
  local_148 = 0;
  local_b4 = 0;
  local_c0 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde7a8) &&
     (_Init_thread_header(&DAT_141dde7a8), DAT_141dde7a8 == -1)) {
    DAT_141dde7a0 = (longlong *)FUN_140e63aa0(DAT_1419f3ae8);
    _Init_thread_footer(&DAT_141dde7a8);
  }
  local_c8 = 9;
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
    local_c8 = 9;
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
  if (DAT_141ddc141 == '\0') {
    FUN_140e64380(DAT_141dde7a0,"gml_Script_InputValue");
    FUN_140e64380(param_1,"gml_Script_InputValue");
  }
  local_c8 = 0xb;
  if (DAT_141ddc141 == '\0') {
    DAT_141ddc141 = '\x01';
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde7a0 + 0x10))(DAT_141dde7a0,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde7a0);
    uVar12 = 0;
    puVar7 = (undefined8 *)gml_Script___InputTrace(param_1,param_2,&local_148,0,0);
    if (puVar7 != puVar6) {
      local_158 = *puVar7;
      uStack_150 = *(undefined4 *)(puVar7 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_158);
    }
    FUN_140e60910(1);
  }
  local_c8 = 4;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((int)local_48[0] < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_1403705f9:
    local_158 = *puVar6;
    uStack_150 = *(undefined4 *)(puVar6 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
  }
  else {
    puVar6 = (undefined8 *)local_40[1];
    if (puVar6 != &local_138) goto LAB_1403705f9;
  }
  local_98 = &local_138;
  ppuVar16 = &local_98;
  ppuVar13 = (undefined8 **)CONCAT44(uVar12,DAT_141a014a8);
  uVar8 = FUN_140e634e0(param_1,param_2,&local_148,1,ppuVar13,ppuVar16);
  cVar2 = FUN_140e491e0(uVar8);
  uVar12 = 0;
  if (cVar2 == '\0') {
    local_c8 = 7;
    local_c0 = 0;
    local_b8 = 0;
    local_b4 = 5;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    uVar12 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    if ((int)local_48[0] < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_1403706c5:
      local_158 = *puVar6;
      uStack_150 = *(undefined4 *)(puVar6 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_158);
    }
    else {
      puVar6 = (undefined8 *)local_40[1];
      if (puVar6 != &local_128) goto LAB_1403706c5;
    }
    local_90 = &local_128;
    local_158 = CONCAT44(uRam0000000141dd19dc,_DAT_141dd19d8);
    uStack_150 = uRam0000000141dd19e0;
    uStack_14c = DAT_141dd19e4;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
    local_88 = &local_118;
    ppuVar16 = &local_90;
    puVar6 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_e8,1,CONCAT44(uVar12,DAT_1419fdc58),ppuVar16);
    if (puVar6 != &local_108) {
      local_158 = *puVar6;
      uStack_150 = *(undefined4 *)(puVar6 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_158);
    }
    local_80 = &local_108;
    local_158 = CONCAT44(uRam0000000141dd1a0c,_DAT_141dd1a08);
    uStack_150 = uRam0000000141dd1a10;
    uStack_14c = DAT_141dd1a14;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_158);
    local_78 = local_f8;
    FUN_14008e020(param_1,param_2,&local_c0,3,ppuVar14);
    uVar12 = local_b4;
    ppuVar13 = ppuVar14;
  }
  local_c8 = 0xf;
  if ((int)local_48[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_40[1];
  }
  uStack_14c = 0;
  local_158 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar6,&local_158,DAT_141955260,1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (uVar4 < 0x80000000) {
    local_c8 = 0x12;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_158 = CONCAT44(uRam0000000141dd19ec,_DAT_141dd19e8);
    uStack_150 = uRam0000000141dd19f0;
    uStack_14c = DAT_141dd19f4;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
    local_98 = &local_138;
    if ((int)local_48[0] < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_140370909:
      local_158 = *puVar6;
      uStack_150 = *(undefined4 *)(puVar6 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_158);
    }
    else {
      puVar6 = (undefined8 *)local_40[1];
      if (puVar6 != &local_128) goto LAB_140370909;
    }
    local_90 = &local_128;
    local_158 = CONCAT44(uRam0000000141dd19cc,_DAT_141dd19c8);
    uStack_150 = uRam0000000141dd19d0;
    uStack_14c = DAT_141dd19d4;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
    local_88 = &local_118;
    local_158 = CONCAT44(uRam00000001419e44f4,_DAT_1419e44f0);
    uStack_150 = uRam00000001419e44f8;
    uStack_14c = uRam00000001419e44fc;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
    local_80 = &local_108;
    local_158 = CONCAT44(uRam0000000141dd19fc,_DAT_141dd19f8);
    uStack_150 = uRam0000000141dd1a00;
    uStack_14c = DAT_141dd1a04;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_158);
    local_78 = local_f8;
    ppuVar13 = &local_98;
    FUN_14008e020(param_1,param_2,&local_148,5,ppuVar13);
  }
  local_c8 = 0x12;
  if ((int)local_48[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_40[1];
  }
  uStack_14c = 0;
  local_158 = 0;
  iVar3 = FUN_140e851f0(puVar6,&local_158,DAT_141955260,1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_140370bb4;
  local_c8 = 0x12;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  local_a8 = _DAT_141dd19e8;
  uStack_a4 = uRam0000000141dd19ec;
  uStack_a0 = uRam0000000141dd19f0;
  uStack_9c = DAT_141dd19f4;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_a8);
  local_98 = &local_138;
  if ((int)local_48[0] < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_140370b1d:
    local_a8 = *(undefined4 *)puVar6;
    uStack_a4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_a0 = *(undefined4 *)(puVar6 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_a8);
  }
  else {
    puVar6 = (undefined8 *)local_40[1];
    if (puVar6 != &local_128) goto LAB_140370b1d;
  }
  local_90 = &local_128;
  local_a8 = _DAT_141dd19b8;
  uStack_a4 = uRam0000000141dd19bc;
  uStack_a0 = uRam0000000141dd19c0;
  uStack_9c = DAT_141dd19c4;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_a8);
  local_88 = &local_118;
  ppuVar13 = &local_98;
  FUN_14008e020(param_1,param_2,&local_148,3,ppuVar13);
LAB_140370bb4:
  local_c8 = 0xf;
  plVar9 = (longlong *)(**(code **)(*DAT_141dde7a0 + 8))(DAT_141dde7a0,DAT_141a026b8);
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
  uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
  uVar15 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
  FUN_140e87440(plVar9,DAT_1419fd6e8,uVar5,&local_58,uVar15,uVar17);
  FUN_140e87440(&local_58,DAT_1419fd6f8,0x80000000,&local_68,uVar15 & 0xffffffffffffff00,
                uVar17 & 0xffffffffffffff00);
  if (&local_68 != param_3) {
    local_a8 = (undefined4)local_68;
    uStack_a4 = local_68._4_4_;
    uStack_a0 = uStack_60;
    uStack_9c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_a8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_138,0x10,5,FUN_140041b30);
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
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

