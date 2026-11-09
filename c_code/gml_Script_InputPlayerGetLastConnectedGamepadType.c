// gml_Script_InputPlayerGetLastConnectedGamepadType @ 0x140348520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_InputPlayerGetLastConnectedGamepadType
          (undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
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
  uint uVar12;
  undefined8 **ppuVar13;
  undefined8 **ppuVar14;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68 [2];
  undefined8 *local_60;
  
  local_e0 = "gml_Script_InputPlayerGetInactive";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 9;
  FUN_140041df0(local_68,param_4,2,param_5);
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_148,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_14c = 0;
  local_158 = 0;
  local_b4 = 0;
  local_c0 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde4ec) &&
     (_Init_thread_header(&DAT_141dde4ec), DAT_141dde4ec == -1)) {
    DAT_141dde4f0 = (longlong *)FUN_140e63aa0(DAT_1419f2a38);
    _Init_thread_footer(&DAT_141dde4ec);
  }
  local_d8 = 9;
  puVar9 = &DAT_1419df7b0;
  uVar10 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_60;
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_d8 = 9;
    if ((int)local_68[0] < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*local_60;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0x407f400000000000;
  }
  if ((int)local_68[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_60[1];
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    if ((int)local_68[0] < 2) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_60[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  if (DAT_141ddc10f == '\0') {
    FUN_140e64380(DAT_141dde4f0,"gml_Script_InputPlayerGetInactive");
    FUN_140e64380(param_1,"gml_Script_InputPlayerGetInactive");
  }
  local_d8 = 0xb;
  if (DAT_141ddc10f == '\0') {
    DAT_141ddc10f = '\x01';
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    puVar5 = (undefined8 *)(**(code **)(*DAT_141dde4f0 + 0x10))(DAT_141dde4f0,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde4f0);
    uVar11 = 0;
    puVar6 = (undefined8 *)gml_Script___InputTrace(param_1,param_2,&local_158,0,0);
    if (puVar6 != puVar5) {
      local_168 = *puVar6;
      uStack_160 = *(undefined4 *)(puVar6 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_168);
    }
    FUN_140e60910(1);
  }
  local_d8 = 4;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((int)local_68[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_140348866:
    local_168 = *puVar5;
    uStack_160 = *(undefined4 *)(puVar5 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_168);
  }
  else {
    puVar5 = (undefined8 *)local_60[1];
    if (puVar5 != &local_148) goto LAB_140348866;
  }
  local_b0 = &local_148;
  ppuVar14 = &local_b0;
  ppuVar13 = (undefined8 **)CONCAT44(uVar11,DAT_141a014a8);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_158,1,ppuVar13,ppuVar14);
  cVar2 = FUN_140e491e0(uVar7);
  uVar11 = 0;
  if (cVar2 == '\0') {
    local_d8 = 7;
    local_c0 = 0;
    local_b8 = 0;
    local_b4 = 5;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    uVar11 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    if ((int)local_68[0] < 2) {
      puVar5 = &DAT_1419df7b0;
LAB_140348931:
      local_168 = *puVar5;
      uStack_160 = *(undefined4 *)(puVar5 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_168);
    }
    else {
      puVar5 = (undefined8 *)local_60[1];
      if (puVar5 != &local_138) goto LAB_140348931;
    }
    local_a8 = &local_138;
    local_168 = CONCAT44(uRam0000000141dd0bec,_DAT_141dd0be8);
    uStack_160 = uRam0000000141dd0bf0;
    uStack_15c = DAT_141dd0bf4;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_168);
    local_a0 = &local_128;
    ppuVar14 = &local_a8;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_f8,1,CONCAT44(uVar11,DAT_1419fdc58),ppuVar14);
    if (puVar5 != &local_118) {
      local_168 = *puVar5;
      uStack_160 = *(undefined4 *)(puVar5 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_168);
    }
    local_98 = &local_118;
    local_168 = CONCAT44(uRam0000000141dd0bdc,_DAT_141dd0bd8);
    uStack_160 = uRam0000000141dd0be0;
    uStack_15c = DAT_141dd0be4;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_168);
    local_90 = local_108;
    ppuVar13 = &local_a0;
    FUN_14008e020(param_1,param_2,&local_c0,3,ppuVar13);
    uVar11 = local_b4;
  }
  local_d8 = 0xd;
  if ((int)local_68[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_60[1];
  }
  uStack_15c = 0;
  uVar12 = 0x3ff00000;
  local_168 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar5,&local_168,DAT_141955260,1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (uVar4 < 0x80000000) {
    local_d8 = 0x12;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_168 = CONCAT44(uRam0000000141dd0c0c,_DAT_141dd0c08);
    uStack_160 = uRam0000000141dd0c10;
    uStack_15c = DAT_141dd0c14;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_168);
    local_b0 = &local_148;
    if ((int)local_68[0] < 2) {
      puVar5 = &DAT_1419df7b0;
LAB_140348b73:
      local_168 = *puVar5;
      uStack_160 = *(undefined4 *)(puVar5 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_168);
    }
    else {
      puVar5 = (undefined8 *)local_60[1];
      if (puVar5 != &local_138) goto LAB_140348b73;
    }
    local_a8 = &local_138;
    local_168 = CONCAT44(uRam0000000141dd0bfc,_DAT_141dd0bf8);
    uStack_160 = uRam0000000141dd0c00;
    uStack_15c = DAT_141dd0c04;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_168);
    local_a0 = &local_128;
    local_168 = CONCAT44(uRam00000001419e4214,_DAT_1419e4210);
    uStack_160 = uRam00000001419e4218;
    uStack_15c = uRam00000001419e421c;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_168);
    local_98 = &local_118;
    local_168 = CONCAT44(uRam0000000141dd0c1c,_DAT_141dd0c18);
    uStack_160 = uRam0000000141dd0c20;
    uStack_15c = DAT_141dd0c24;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_168);
    local_90 = local_108;
    ppuVar13 = &local_b0;
    FUN_14008e020(param_1,param_2,&local_158,5,ppuVar13);
  }
  local_d8 = 0x12;
  if ((int)local_68[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_60[1];
  }
  uStack_15c = 0;
  local_168 = 0;
  iVar3 = FUN_140e851f0(puVar5,&local_168,DAT_141955260,1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_140348e1c;
  local_d8 = 0x12;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  local_78 = _DAT_141dd0c08;
  uStack_74 = uRam0000000141dd0c0c;
  uStack_70 = uRam0000000141dd0c10;
  uStack_6c = DAT_141dd0c14;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_78);
  local_b0 = &local_148;
  if ((int)local_68[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_140348d85:
    local_78 = *(undefined4 *)puVar5;
    uStack_74 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_70 = *(undefined4 *)(puVar5 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_78);
  }
  else {
    puVar5 = (undefined8 *)local_60[1];
    if (puVar5 != &local_138) goto LAB_140348d85;
  }
  local_a8 = &local_138;
  local_78 = _DAT_141dd0c28;
  uStack_74 = uRam0000000141dd0c2c;
  uStack_70 = uRam0000000141dd0c30;
  uStack_6c = DAT_141dd0c34;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_78);
  local_a0 = &local_128;
  ppuVar13 = &local_b0;
  FUN_14008e020(param_1,param_2,&local_158,3,ppuVar13);
LAB_140348e1c:
  local_d8 = 0xf;
  plVar8 = (longlong *)(**(code **)(*DAT_141dde4f0 + 8))(DAT_141dde4f0,DAT_141a026b8);
  FUN_140e85f80(param_1,DAT_1419fd2a8,0x80000000,&local_d0);
  if ((int)local_68[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_60[1];
  }
  iVar3 = FUN_140e4a740(puVar5);
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
  FUN_140e87440(plVar8,DAT_1419fd6c8,0x80000000,&local_88,(ulonglong)ppuVar13 & 0xffffffffffffff00,
                (ulonglong)ppuVar14 & 0xffffffffffffff00);
  uStack_15c = local_c4;
  uStack_160 = local_c8;
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) == 0) {
    local_168 = local_d0;
  }
  else {
    FUN_1400419b0(&local_168,&local_d0);
  }
  FUN_1400462a0(&local_168,&local_88);
  if (0 < (int)local_68[0]) {
    puVar9 = (undefined8 *)*local_60;
  }
  iVar3 = FUN_140e851f0(&local_168,puVar9,DAT_141955260,1);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (iVar3 < 1) {
    uVar12 = 0;
  }
  *param_3 = (ulonglong)uVar12 << 0x20;
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,5,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    puVar9 = local_60;
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
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

