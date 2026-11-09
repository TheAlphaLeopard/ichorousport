// gml_Script_InputPlayerGetMinThreshold @ 0x14034a910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputPlayerGetMinThreshold
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined4 uVar15;
  undefined8 **ppuVar13;
  ulonglong uVar14;
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
  
  local_c0 = "gml_Script_InputPlayerGetMetadata";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 10;
  bVar3 = false;
  bVar2 = true;
  FUN_140041df0(local_68,param_4,2,param_5);
  uVar15 = 1;
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
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde514) &&
     (_Init_thread_header(&DAT_141dde514), DAT_141dde514 == -1)) {
    DAT_141dde518 = (longlong *)FUN_140e63aa0(DAT_1419f2ad8);
    _Init_thread_footer(&DAT_141dde514);
  }
  local_b8 = 10;
  puVar11 = &DAT_1419df7b0;
  uVar12 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_60;
  }
  iVar5 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 == 0) {
    local_b8 = 10;
    if ((int)local_68[0] < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_60;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0;
  }
  if ((int)local_68[0] < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_60[1];
  }
  iVar5 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 == 0) {
    uStack_15c = 0xd;
    local_168 = 0;
    if ((int)local_68[0] < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)local_60[1];
      if (&local_168 == puVar7) goto LAB_14034ab35;
    }
    local_138 = 0;
    uStack_130 = uStack_160;
    uStack_12c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_138);
  }
LAB_14034ab35:
  if (DAT_141ddc112 == '\0') {
    FUN_140e64380(DAT_141dde518,"gml_Script_InputPlayerGetMetadata");
    FUN_140e64380(param_1,"gml_Script_InputPlayerGetMetadata");
  }
  local_b8 = 0xc;
  if (DAT_141ddc112 == '\0') {
    DAT_141ddc112 = '\x01';
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    puVar7 = (undefined8 *)(**(code **)(*DAT_141dde518 + 0x10))(DAT_141dde518,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde518);
    uVar15 = 0;
    puVar8 = (undefined8 *)gml_Script___InputTrace(param_1,param_2,&local_158,0,0);
    if (puVar8 != puVar7) {
      local_168 = *puVar8;
      uStack_160 = *(undefined4 *)(puVar8 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_168);
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
  if ((int)local_68[0] < 1) {
    puVar7 = &DAT_1419df7b0;
LAB_14034ac73:
    local_168 = *puVar7;
    uStack_160 = *(undefined4 *)(puVar7 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_168);
  }
  else {
    puVar7 = (undefined8 *)*local_60;
    if (puVar7 != &local_118) goto LAB_14034ac73;
  }
  local_a0 = &local_118;
  ppuVar16 = &local_a0;
  ppuVar13 = (undefined8 **)CONCAT44(uVar15,DAT_141a014a8);
  uVar9 = FUN_140e634e0(param_1,param_2,&local_158,1,ppuVar13,ppuVar16);
  cVar4 = FUN_140e491e0(uVar9);
  if (cVar4 == '\0') {
    local_b8 = 5;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    uVar15 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    local_b0 = 0;
    local_a8 = 0;
    local_a4 = 5;
    if ((int)local_68[0] < 1) {
      puVar7 = &DAT_1419df7b0;
LAB_14034ad56:
      local_168 = *puVar7;
      uStack_160 = *(undefined4 *)(puVar7 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_168);
    }
    else {
      puVar7 = (undefined8 *)*local_60;
      if (puVar7 != &local_108) goto LAB_14034ad56;
    }
    local_98 = &local_108;
    local_168 = CONCAT44(uRam0000000141dd0d4c,_DAT_141dd0d48);
    uStack_160 = uRam0000000141dd0d50;
    uStack_15c = DAT_141dd0d54;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_168);
    local_90 = &local_f8;
    ppuVar16 = &local_98;
    puVar7 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_b0,1,CONCAT44(uVar15,DAT_1419fdc58),&local_98);
    if (puVar7 != &local_e8) {
      local_168 = *puVar7;
      uStack_160 = *(undefined4 *)(puVar7 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_168);
    }
    local_88 = &local_e8;
    local_168 = CONCAT44(uRam0000000141dd0d2c,_DAT_141dd0d28);
    uStack_160 = uRam0000000141dd0d30;
    uStack_15c = DAT_141dd0d34;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_168);
    local_80 = local_d8;
    ppuVar13 = &local_90;
    FUN_14008e020(param_1,param_2,&local_148,3,ppuVar13);
  }
  local_b8 = 10;
  if ((int)local_68[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_60;
  }
  uStack_15c = 0;
  local_168 = 0x3ff0000000000000;
  uVar6 = FUN_140e851f0(puVar7,&local_168,DAT_141955260,1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (uVar6 < 0x80000000) {
    local_b8 = 0x10;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_168 = CONCAT44(uRam0000000141dd0d3c,_DAT_141dd0d38);
    uStack_160 = uRam0000000141dd0d40;
    uStack_15c = DAT_141dd0d44;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_168);
    local_a0 = &local_118;
    if ((int)local_68[0] < 1) {
      puVar7 = &DAT_1419df7b0;
LAB_14034af84:
      local_168 = *puVar7;
      uStack_160 = *(undefined4 *)(puVar7 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_168);
    }
    else {
      puVar7 = (undefined8 *)*local_60;
      if (puVar7 != &local_108) goto LAB_14034af84;
    }
    local_98 = &local_108;
    local_168 = CONCAT44(uRam0000000141dd0cfc,_DAT_141dd0cf8);
    uStack_160 = uRam0000000141dd0d00;
    uStack_15c = DAT_141dd0d04;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_168);
    local_90 = &local_f8;
    local_168 = CONCAT44(uRam00000001419e4244,_DAT_1419e4240);
    uStack_160 = uRam00000001419e4248;
    uStack_15c = uRam00000001419e424c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_168);
    local_88 = &local_e8;
    local_168 = CONCAT44(uRam0000000141dd0d1c,_DAT_141dd0d18);
    uStack_160 = uRam0000000141dd0d20;
    uStack_15c = DAT_141dd0d24;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_168);
    local_80 = local_d8;
    ppuVar13 = &local_a0;
    FUN_14008e020(param_1,param_2,&local_158,5,ppuVar13);
  }
  local_b8 = 0x14;
  if ((int)local_68[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_60;
  }
  uStack_15c = 0;
  local_168 = 0;
  iVar5 = FUN_140e851f0(puVar7,&local_168,DAT_141955260,1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (iVar5 == -2 || -1 < iVar5) goto LAB_14034b21a;
  local_b8 = 0x14;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  local_138 = CONCAT44(uRam0000000141dd0d3c,_DAT_141dd0d38);
  uStack_130 = uRam0000000141dd0d40;
  uStack_12c = DAT_141dd0d44;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_138);
  local_a0 = &local_118;
  if ((int)local_68[0] < 1) {
    puVar7 = &DAT_1419df7b0;
LAB_14034b187:
    local_138 = *puVar7;
    uStack_130 = *(undefined4 *)(puVar7 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_138);
  }
  else {
    puVar7 = (undefined8 *)*local_60;
    if (puVar7 != &local_108) goto LAB_14034b187;
  }
  local_98 = &local_108;
  local_138 = CONCAT44(uRam0000000141dd0d0c,_DAT_141dd0d08);
  uStack_130 = uRam0000000141dd0d10;
  uStack_12c = DAT_141dd0d14;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_138);
  local_90 = &local_f8;
  ppuVar13 = &local_a0;
  FUN_14008e020(param_1,param_2,&local_158,3,ppuVar13);
LAB_14034b21a:
  local_b8 = 0x10;
  plVar10 = (longlong *)(**(code **)(*DAT_141dde518 + 8))(DAT_141dde518,DAT_141a026b8);
  if ((int)local_68[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_60;
  }
  iVar5 = FUN_140e4a740(puVar7);
  if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
    if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  uVar14 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
  FUN_140e87440(plVar10,DAT_1419fd098,0x80000000,&local_78,uVar14,
                (ulonglong)ppuVar16 & 0xffffffffffffff00);
  uVar15 = (undefined4)(uVar14 >> 0x20);
  local_168 = local_78;
  uStack_160 = uStack_70;
  uStack_15c = uStack_6c;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_168);
  local_b8 = 0x11;
  if (1 < (int)local_68[0]) {
    puVar11 = (undefined8 *)local_60[1];
  }
  cVar4 = FUN_140e491e0(puVar11);
  if (cVar4 == '\0') {
    uStack_12c = local_11c;
    uStack_130 = local_120;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
      local_138 = local_128;
    }
    else {
      FUN_1400419b0(&local_138,&local_128);
    }
    puVar11 = &local_138;
  }
  else {
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_98 = &local_128;
    puVar11 = (undefined8 *)
              FUN_140e634e0(param_1,param_2,&local_148,1,CONCAT44(uVar15,DAT_1419fd0c8),&local_98);
    uStack_15c = *(undefined4 *)((longlong)puVar11 + 0xc);
    uStack_160 = *(undefined4 *)(puVar11 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_168 = *puVar11;
    }
    else {
      FUN_1400419b0(&local_168,puVar11);
    }
    puVar11 = &local_168;
    bVar3 = true;
    bVar2 = false;
  }
  if (puVar11 != param_3) {
    local_58 = *(undefined4 *)puVar11;
    uStack_54 = *(undefined4 *)((longlong)puVar11 + 4);
    uStack_50 = *(undefined4 *)(puVar11 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar11 + 0xc);
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
    puVar11 = local_60;
    do {
      puVar7 = (undefined8 *)*puVar11;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 5;
      puVar11 = puVar11 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

