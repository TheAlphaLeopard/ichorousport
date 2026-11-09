// gml_Script_InputColorReset @ 0x140307250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputColorReset
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  undefined8 **ppuVar12;
  undefined8 **ppuVar13;
  ulonglong in_stack_fffffffffffffea0;
  undefined8 **ppuVar14;
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
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48 [2];
  undefined8 *local_40;
  
  ppuVar13 = &local_88;
  local_d0 = "gml_Script_InputColorGet";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 8;
  FUN_140041df0(local_48,param_4,1,param_5);
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_138,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_4c = 0xffffff;
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
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde018) &&
     (_Init_thread_header(&DAT_141dde018), DAT_141dde018 == -1)) {
    DAT_141dde020 = (longlong *)FUN_140e63aa0(DAT_1419efcc8);
    _Init_thread_footer(&DAT_141dde018);
  }
  local_c8 = 8;
  puVar8 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_40;
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_c8 = 8;
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
  if (DAT_141ddc0bc == '\0') {
    FUN_140e64380(DAT_141dde020,"gml_Script_InputColorGet");
    FUN_140e64380(param_1,"gml_Script_InputColorGet");
  }
  local_c8 = 10;
  if (DAT_141ddc0bc == '\0') {
    DAT_141ddc0bc = '\x01';
    puVar5 = (undefined8 *)(**(code **)(*DAT_141dde020 + 0x10))(DAT_141dde020,DAT_141a026b8);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    uVar11 = 0;
    uVar6 = gml_Script__funcSafeReal_anon_2040__funcSplit_anon_1903___InputCompareVersions___InputCompareVersions
                      (param_1,param_2,&local_148,0,0);
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_1419fed38,0x80000000,&local_58,uVar11,
                  in_stack_fffffffffffffea0 & 0xffffffffffffff00);
    uVar10 = (undefined4)(uVar11 >> 0x20);
    FUN_140e609c0(DAT_141dde020);
    if (&local_58 != puVar5) {
      local_158 = local_58;
      uStack_150 = uStack_50;
      uStack_14c = uStack_4c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_158);
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
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_140307557:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
  }
  else {
    puVar5 = (undefined8 *)*local_40;
    if (puVar5 != &local_138) goto LAB_140307557;
  }
  local_98 = &local_138;
  ppuVar14 = &local_98;
  ppuVar12 = (undefined8 **)CONCAT44(uVar10,DAT_141a014a8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_148,1,ppuVar12,ppuVar14);
  cVar2 = FUN_140e491e0(uVar6);
  uVar10 = 0;
  if (cVar2 == '\0') {
    local_c8 = 8;
    local_c0 = 0;
    local_b8 = 0;
    local_b4 = 5;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    uVar10 = (undefined4)((ulonglong)ppuVar12 >> 0x20);
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    if ((int)local_48[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_14030762c:
      local_158 = *puVar5;
      uStack_150 = *(undefined4 *)(puVar5 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_158);
    }
    else {
      puVar5 = (undefined8 *)*local_40;
      if (puVar5 != &local_128) goto LAB_14030762c;
    }
    local_90 = &local_128;
    local_158 = CONCAT44(uRam0000000141dcf9bc,_DAT_141dcf9b8);
    uStack_150 = uRam0000000141dcf9c0;
    uStack_14c = DAT_141dcf9c4;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
    local_88 = &local_118;
    ppuVar14 = &local_90;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_e8,1,CONCAT44(uVar10,DAT_1419fdc58),ppuVar14);
    if (puVar5 != &local_108) {
      local_158 = *puVar5;
      uStack_150 = *(undefined4 *)(puVar5 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_158);
    }
    local_80 = &local_108;
    local_158 = CONCAT44(uRam0000000141dcf9dc,_DAT_141dcf9d8);
    uStack_150 = uRam0000000141dcf9e0;
    uStack_14c = DAT_141dcf9e4;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_158);
    local_78 = local_f8;
    FUN_14008e020(param_1,param_2,&local_c0,3,ppuVar13);
    uVar10 = local_b4;
    ppuVar12 = ppuVar13;
  }
  local_c8 = 0xe;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_40;
  }
  uStack_14c = 0;
  local_158 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar5,&local_158,DAT_141955260,1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (uVar4 < 0x80000000) {
    local_c8 = 0x11;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_158 = CONCAT44(uRam0000000141dcfa0c,_DAT_141dcfa08);
    uStack_150 = uRam0000000141dcfa10;
    uStack_14c = DAT_141dcfa14;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
    local_98 = &local_138;
    if ((int)local_48[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_14030786c:
      local_158 = *puVar5;
      uStack_150 = *(undefined4 *)(puVar5 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_158);
    }
    else {
      puVar5 = (undefined8 *)*local_40;
      if (puVar5 != &local_128) goto LAB_14030786c;
    }
    local_90 = &local_128;
    local_158 = CONCAT44(uRam0000000141dcf9cc,_DAT_141dcf9c8);
    uStack_150 = uRam0000000141dcf9d0;
    uStack_14c = DAT_141dcf9d4;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
    local_88 = &local_118;
    local_158 = CONCAT44(uRam00000001419e3e34,_DAT_1419e3e30);
    uStack_150 = uRam00000001419e3e38;
    uStack_14c = uRam00000001419e3e3c;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
    local_80 = &local_108;
    local_158 = CONCAT44(uRam0000000141dcf9fc,_DAT_141dcf9f8);
    uStack_150 = uRam0000000141dcfa00;
    uStack_14c = DAT_141dcfa04;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_158);
    local_78 = local_f8;
    ppuVar12 = &local_98;
    FUN_14008e020(param_1,param_2,&local_148,5,ppuVar12);
  }
  local_c8 = 0x11;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_40;
  }
  uStack_14c = 0;
  local_158 = 0;
  iVar3 = FUN_140e851f0(puVar5,&local_158,DAT_141955260,1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_140307b19;
  local_c8 = 0x11;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  local_a8 = _DAT_141dcfa08;
  uStack_a4 = uRam0000000141dcfa0c;
  uStack_a0 = uRam0000000141dcfa10;
  uStack_9c = DAT_141dcfa14;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_a8);
  local_98 = &local_138;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_140307a7e:
    local_a8 = *(undefined4 *)puVar5;
    uStack_a4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_a0 = *(undefined4 *)(puVar5 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_a8);
  }
  else {
    puVar5 = (undefined8 *)*local_40;
    if (puVar5 != &local_128) goto LAB_140307a7e;
  }
  local_90 = &local_128;
  local_a8 = _DAT_141dcf9e8;
  uStack_a4 = uRam0000000141dcf9ec;
  uStack_a0 = uRam0000000141dcf9f0;
  uStack_9c = DAT_141dcf9f4;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_a8);
  local_88 = &local_118;
  ppuVar12 = &local_98;
  FUN_14008e020(param_1,param_2,&local_148,3,ppuVar12);
LAB_140307b19:
  local_c8 = 0xe;
  plVar7 = (longlong *)(**(code **)(*DAT_141dde020 + 8))(DAT_141dde020,DAT_141a026b8);
  if (0 < (int)local_48[0]) {
    puVar8 = (undefined8 *)*local_40;
  }
  iVar3 = FUN_140e4a740(puVar8);
  if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  FUN_140e87440(plVar7,DAT_1419fec28,0x80000000,&local_68,(ulonglong)ppuVar12 & 0xffffffffffffff00,
                (ulonglong)ppuVar14 & 0xffffffffffffff00);
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
  if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_138,0x10,5,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar8 = local_40;
    do {
      puVar5 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

