// gml_Script_InputPressedMany @ 0x140362550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_InputPressedMany
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  uint uVar15;
  longlong *local_res8;
  undefined8 local_res10;
  longlong *local_res18;
  undefined8 **ppuVar16;
  ulonglong uVar17;
  undefined8 **ppuVar18;
  ulonglong uVar19;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined8 local_148;
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88 [2];
  undefined8 *local_80;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_100 = "gml_Script_InputPressed";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 8;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_88,param_4,2,param_5);
  uVar14 = 1;
  _eh_vector_constructor_iterator_(&local_158,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_15c = 0;
  local_168 = 0;
  local_d4 = 0;
  local_e0 = 0;
  local_e4 = 0;
  local_f0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde6c0) &&
     (_Init_thread_header(&DAT_141dde6c0), DAT_141dde6c0 == -1)) {
    DAT_141dde6c8 = (longlong *)FUN_140e63aa0(DAT_1419f35b8);
    _Init_thread_footer(&DAT_141dde6c0);
  }
  local_f8 = 8;
  puVar12 = &DAT_1419df7b0;
  uVar13 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_80[1];
  }
  iVar4 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_f8 = 8;
    if ((int)local_88[0] < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)local_80[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0;
  }
  if (DAT_141ddc131 == '\0') {
    FUN_140e64380(DAT_141dde6c8,"gml_Script_InputPressed");
    FUN_140e64380(local_res8,"gml_Script_InputPressed");
  }
  local_f8 = 10;
  if (DAT_141ddc131 == '\0') {
    DAT_141ddc131 = '\x01';
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    puVar7 = (undefined8 *)(**(code **)(*DAT_141dde6c8 + 0x10))(DAT_141dde6c8,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde6c8);
    uVar14 = 0;
    puVar8 = (undefined8 *)gml_Script___InputTrace(local_res8,local_res10,&local_168,0,0);
    if (puVar8 != puVar7) {
      local_178 = *puVar8;
      uStack_170 = *(undefined4 *)(puVar8 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_178);
    }
    FUN_140e60910(1);
  }
  local_f8 = 5;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((int)local_88[0] < 2) {
    puVar7 = &DAT_1419df7b0;
LAB_14036282f:
    local_178 = *puVar7;
    uStack_170 = *(undefined4 *)(puVar7 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_178);
  }
  else {
    puVar7 = (undefined8 *)local_80[1];
    if (puVar7 != &local_158) goto LAB_14036282f;
  }
  local_d0 = &local_158;
  ppuVar18 = &local_d0;
  ppuVar16 = (undefined8 **)CONCAT44(uVar14,DAT_141a014a8);
  uVar9 = FUN_140e634e0(local_res8,local_res10,&local_168,1,ppuVar16,ppuVar18);
  cVar2 = FUN_140e491e0(uVar9);
  uVar14 = 0;
  if (cVar2 == '\0') {
    local_f8 = 8;
    local_e0 = 0;
    local_d8 = 0;
    local_d4 = 5;
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    uVar14 = (undefined4)((ulonglong)ppuVar16 >> 0x20);
    local_f0 = 0;
    local_e8 = 0;
    local_e4 = 5;
    if ((int)local_88[0] < 2) {
      puVar7 = &DAT_1419df7b0;
LAB_140362903:
      local_178 = *puVar7;
      uStack_170 = *(undefined4 *)(puVar7 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_178);
    }
    else {
      puVar7 = (undefined8 *)local_80[1];
      if (puVar7 != &local_148) goto LAB_140362903;
    }
    local_c8 = &local_148;
    local_178 = CONCAT44(uRam0000000141dd15cc,_DAT_141dd15c8);
    uStack_170 = uRam0000000141dd15d0;
    uStack_16c = DAT_141dd15d4;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_178);
    local_c0 = &local_138;
    ppuVar18 = &local_c8;
    puVar7 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_f0,1,CONCAT44(uVar14,DAT_1419fdc58),
                           ppuVar18);
    if (puVar7 != &local_128) {
      local_178 = *puVar7;
      uStack_170 = *(undefined4 *)(puVar7 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_178);
    }
    local_b8 = &local_128;
    local_178 = CONCAT44(uRam0000000141dd159c,_DAT_141dd1598);
    uStack_170 = uRam0000000141dd15a0;
    uStack_16c = DAT_141dd15a4;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_178);
    local_b0 = local_118;
    ppuVar16 = &local_c0;
    FUN_14008e020(local_res8,local_res10,&local_e0,3,ppuVar16);
    uVar14 = local_d4;
  }
  local_f8 = 0x10;
  if ((int)local_88[0] < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_80[1];
  }
  uStack_16c = 0;
  uVar15 = 0x3ff00000;
  local_178 = 0x3ff0000000000000;
  uVar5 = FUN_140e851f0(puVar7,&local_178,DAT_141955260,1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (uVar5 < 0x80000000) {
    local_f8 = 0x14;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_178 = CONCAT44(uRam0000000141dd15bc,_DAT_141dd15b8);
    uStack_170 = uRam0000000141dd15c0;
    uStack_16c = DAT_141dd15c4;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_178);
    local_d0 = &local_158;
    if ((int)local_88[0] < 2) {
      puVar7 = &DAT_1419df7b0;
LAB_140362b55:
      local_178 = *puVar7;
      uStack_170 = *(undefined4 *)(puVar7 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_178);
    }
    else {
      puVar7 = (undefined8 *)local_80[1];
      if (puVar7 != &local_148) goto LAB_140362b55;
    }
    local_c8 = &local_148;
    local_178 = CONCAT44(uRam0000000141dd158c,_DAT_141dd1588);
    uStack_170 = uRam0000000141dd1590;
    uStack_16c = DAT_141dd1594;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_178);
    local_c0 = &local_138;
    local_178 = CONCAT44(uRam00000001419e4424,_DAT_1419e4420);
    uStack_170 = uRam00000001419e4428;
    uStack_16c = uRam00000001419e442c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_178);
    local_b8 = &local_128;
    local_178 = CONCAT44(uRam0000000141dd157c,_DAT_141dd1578);
    uStack_170 = uRam0000000141dd1580;
    uStack_16c = DAT_141dd1584;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_178);
    local_b0 = local_118;
    ppuVar16 = &local_d0;
    FUN_14008e020(local_res8,local_res10,&local_168,5,ppuVar16);
  }
  local_f8 = 0x14;
  if ((int)local_88[0] < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_80[1];
  }
  uStack_16c = 0;
  local_178 = 0;
  iVar4 = FUN_140e851f0(puVar7,&local_178,DAT_141955260,1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (iVar4 == -2 || -1 < iVar4) goto LAB_140362e04;
  local_f8 = 0x14;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  local_98 = _DAT_141dd15b8;
  uStack_94 = uRam0000000141dd15bc;
  uStack_90 = uRam0000000141dd15c0;
  uStack_8c = DAT_141dd15c4;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_98);
  local_d0 = &local_158;
  if ((int)local_88[0] < 2) {
    puVar7 = &DAT_1419df7b0;
LAB_140362d65:
    local_98 = *(undefined4 *)puVar7;
    uStack_94 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_90 = *(undefined4 *)(puVar7 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_98);
  }
  else {
    puVar7 = (undefined8 *)local_80[1];
    if (puVar7 != &local_148) goto LAB_140362d65;
  }
  local_c8 = &local_148;
  local_98 = _DAT_141dd15a8;
  uStack_94 = uRam0000000141dd15ac;
  uStack_90 = uRam0000000141dd15b0;
  uStack_8c = DAT_141dd15b4;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_98);
  local_c0 = &local_138;
  ppuVar16 = &local_d0;
  FUN_14008e020(local_res8,local_res10,&local_168,3,ppuVar16);
LAB_140362e04:
  local_f8 = 0xe;
  plVar10 = (longlong *)(**(code **)(*DAT_141dde6c8 + 8))(DAT_141dde6c8,DAT_141a026b8);
  if ((int)local_88[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_80;
  }
  uVar6 = FUN_140e4a740(puVar7);
  if ((int)local_88[0] < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_80[1];
  }
  iVar4 = FUN_140e4a740(puVar7);
  if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar11 = plVar10;
  }
  uVar19 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
  uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
  FUN_140e87440(plVar11,DAT_1419fd6e8,uVar6,&local_a8,uVar17,uVar19);
  iVar4 = FUN_140e63cb0(local_78,&local_res8,&local_res10,&local_a8);
  if (iVar4 < 1) {
    FUN_140e63970(local_78,&local_res8,&local_res10);
    DAT_141a67c38 = 1;
    if ((int)local_88[0] < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_80;
    }
    uVar6 = FUN_140e4a740(puVar7);
    if (1 < (int)local_88[0]) {
      puVar12 = (undefined8 *)local_80[1];
    }
    iVar4 = FUN_140e4a740(puVar12);
    if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    FUN_140e87440(plVar10,DAT_1419fd6e8,uVar6,&local_a8,uVar17 & 0xffffffffffffff00,
                  uVar19 & 0xffffffffffffff00);
    DAT_141a67c38 = 0;
    DAT_141a72aac = 0;
    plVar10 = local_res18;
  }
  else {
    local_f8 = 0x10;
    cVar3 = '\0';
    uVar9 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fde28);
    cVar2 = FUN_140e491e0(uVar9);
    if (cVar2 == '\0') {
      uVar9 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd828);
      cVar3 = FUN_140e491e0(uVar9);
    }
    plVar10 = local_res18;
    if ((1 << ((byte)*(undefined4 *)((longlong)local_res18 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_res18);
    }
    *(undefined4 *)((longlong)plVar10 + 0xc) = 0xd;
    if (cVar3 == '\0') {
      uVar15 = 0;
    }
    *plVar10 = (ulonglong)uVar15 << 0x20;
  }
  if (local_68 != 0) {
    FUN_140e4cd60();
    local_68 = 0;
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)uVar14 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_158,0x10,5,FUN_140041b30);
  if (0 < (int)local_88[0]) {
    puVar12 = local_80;
    do {
      puVar7 = (undefined8 *)*puVar12;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 5;
      puVar12 = puVar12 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return plVar10;
}

