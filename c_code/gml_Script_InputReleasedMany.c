// gml_Script_InputReleasedMany @ 0x140364360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_InputReleasedMany
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
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
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  bool bVar14;
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
  
  local_100 = "gml_Script_InputReleased";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 8;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_88,param_4,2,param_5);
  uVar13 = 1;
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
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde6dc) &&
     (_Init_thread_header(&DAT_141dde6dc), DAT_141dde6dc == -1)) {
    DAT_141dde6e0 = (longlong *)FUN_140e63aa0(DAT_1419f3668);
    _Init_thread_footer(&DAT_141dde6dc);
  }
  local_f8 = 8;
  puVar11 = &DAT_1419df7b0;
  uVar12 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[1];
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_f8 = 8;
    if ((int)local_88[0] < 2) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_80[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
  }
  if (DAT_141ddc133 == '\0') {
    FUN_140e64380(DAT_141dde6e0,"gml_Script_InputReleased");
    FUN_140e64380(local_res8,"gml_Script_InputReleased");
  }
  local_f8 = 10;
  if (DAT_141ddc133 == '\0') {
    DAT_141ddc133 = '\x01';
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde6e0 + 0x10))(DAT_141dde6e0,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde6e0);
    uVar13 = 0;
    puVar7 = (undefined8 *)gml_Script___InputTrace(local_res8,local_res10,&local_168,0,0);
    if (puVar7 != puVar6) {
      local_178 = *puVar7;
      uStack_170 = *(undefined4 *)(puVar7 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_178);
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
    puVar6 = &DAT_1419df7b0;
LAB_14036463f:
    local_178 = *puVar6;
    uStack_170 = *(undefined4 *)(puVar6 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_178);
  }
  else {
    puVar6 = (undefined8 *)local_80[1];
    if (puVar6 != &local_158) goto LAB_14036463f;
  }
  local_d0 = &local_158;
  ppuVar18 = &local_d0;
  ppuVar16 = (undefined8 **)CONCAT44(uVar13,DAT_141a014a8);
  uVar8 = FUN_140e634e0(local_res8,local_res10,&local_168,1,ppuVar16,ppuVar18);
  cVar2 = FUN_140e491e0(uVar8);
  uVar13 = 0;
  if (cVar2 == '\0') {
    local_f8 = 8;
    local_e0 = 0;
    local_d8 = 0;
    local_d4 = 5;
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    uVar13 = (undefined4)((ulonglong)ppuVar16 >> 0x20);
    local_f0 = 0;
    local_e8 = 0;
    local_e4 = 5;
    if ((int)local_88[0] < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_140364713:
      local_178 = *puVar6;
      uStack_170 = *(undefined4 *)(puVar6 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_178);
    }
    else {
      puVar6 = (undefined8 *)local_80[1];
      if (puVar6 != &local_148) goto LAB_140364713;
    }
    local_c8 = &local_148;
    local_178 = CONCAT44(uRam0000000141dd15fc,_DAT_141dd15f8);
    uStack_170 = uRam0000000141dd1600;
    uStack_16c = DAT_141dd1604;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_178);
    local_c0 = &local_138;
    ppuVar18 = &local_c8;
    puVar6 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_f0,1,CONCAT44(uVar13,DAT_1419fdc58),
                           ppuVar18);
    if (puVar6 != &local_128) {
      local_178 = *puVar6;
      uStack_170 = *(undefined4 *)(puVar6 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_178);
    }
    local_b8 = &local_128;
    local_178 = CONCAT44(uRam0000000141dd161c,_DAT_141dd1618);
    uStack_170 = uRam0000000141dd1620;
    uStack_16c = DAT_141dd1624;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_178);
    local_b0 = local_118;
    ppuVar16 = &local_c0;
    FUN_14008e020(local_res8,local_res10,&local_e0,3,ppuVar16);
    uVar13 = local_d4;
  }
  local_f8 = 0x10;
  if ((int)local_88[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[1];
  }
  uStack_16c = 0;
  uVar15 = 0x3ff00000;
  local_178 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar6,&local_178,DAT_141955260,1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (uVar4 < 0x80000000) {
    local_f8 = 0x14;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_178 = CONCAT44(uRam0000000141dd15ec,_DAT_141dd15e8);
    uStack_170 = uRam0000000141dd15f0;
    uStack_16c = DAT_141dd15f4;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_178);
    local_d0 = &local_158;
    if ((int)local_88[0] < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_140364965:
      local_178 = *puVar6;
      uStack_170 = *(undefined4 *)(puVar6 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_178);
    }
    else {
      puVar6 = (undefined8 *)local_80[1];
      if (puVar6 != &local_148) goto LAB_140364965;
    }
    local_c8 = &local_148;
    local_178 = CONCAT44(uRam0000000141dd160c,_DAT_141dd1608);
    uStack_170 = uRam0000000141dd1610;
    uStack_16c = DAT_141dd1614;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_178);
    local_c0 = &local_138;
    local_178 = CONCAT44(uRam00000001419e4434,_DAT_1419e4430);
    uStack_170 = uRam00000001419e4438;
    uStack_16c = uRam00000001419e443c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_178);
    local_b8 = &local_128;
    local_178 = CONCAT44(uRam0000000141dd15dc,_DAT_141dd15d8);
    uStack_170 = uRam0000000141dd15e0;
    uStack_16c = DAT_141dd15e4;
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
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[1];
  }
  uStack_16c = 0;
  local_178 = 0;
  iVar3 = FUN_140e851f0(puVar6,&local_178,DAT_141955260,1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_140364c14;
  local_f8 = 0x14;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  local_98 = _DAT_141dd15e8;
  uStack_94 = uRam0000000141dd15ec;
  uStack_90 = uRam0000000141dd15f0;
  uStack_8c = DAT_141dd15f4;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_98);
  local_d0 = &local_158;
  if ((int)local_88[0] < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_140364b75:
    local_98 = *(undefined4 *)puVar6;
    uStack_94 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_90 = *(undefined4 *)(puVar6 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_98);
  }
  else {
    puVar6 = (undefined8 *)local_80[1];
    if (puVar6 != &local_148) goto LAB_140364b75;
  }
  local_c8 = &local_148;
  local_98 = _DAT_141dd1628;
  uStack_94 = uRam0000000141dd162c;
  uStack_90 = uRam0000000141dd1630;
  uStack_8c = DAT_141dd1634;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_98);
  local_c0 = &local_138;
  ppuVar16 = &local_d0;
  FUN_14008e020(local_res8,local_res10,&local_168,3,ppuVar16);
LAB_140364c14:
  local_f8 = 0xe;
  plVar9 = (longlong *)(**(code **)(*DAT_141dde6e0 + 8))(DAT_141dde6e0,DAT_141a026b8);
  if ((int)local_88[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_80;
  }
  uVar5 = FUN_140e4a740(puVar6);
  if ((int)local_88[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[1];
  }
  iVar3 = FUN_140e4a740(puVar6);
  if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar10 = plVar9;
  }
  uVar19 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
  uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
  FUN_140e87440(plVar10,DAT_1419fd6e8,uVar5,&local_a8,uVar17,uVar19);
  iVar3 = FUN_140e63cb0(local_78,&local_res8,&local_res10,&local_a8);
  if (iVar3 < 1) {
    FUN_140e63970(local_78,&local_res8,&local_res10);
    DAT_141a67c38 = 1;
    if ((int)local_88[0] < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*local_80;
    }
    uVar5 = FUN_140e4a740(puVar6);
    if (1 < (int)local_88[0]) {
      puVar11 = (undefined8 *)local_80[1];
    }
    iVar3 = FUN_140e4a740(puVar11);
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
    FUN_140e87440(plVar9,DAT_1419fd6e8,uVar5,&local_a8,uVar17 & 0xffffffffffffff00,
                  uVar19 & 0xffffffffffffff00);
    DAT_141a67c38 = 0;
    DAT_141a72aac = 0;
    plVar9 = local_res18;
  }
  else {
    local_f8 = 0x10;
    bVar14 = false;
    uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fde28);
    cVar2 = FUN_140e491e0(uVar8);
    if (cVar2 != '\0') {
      uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd828);
      cVar2 = FUN_140e491e0(uVar8);
      bVar14 = cVar2 == '\0';
    }
    plVar9 = local_res18;
    if ((1 << ((byte)*(undefined4 *)((longlong)local_res18 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_res18);
    }
    *(undefined4 *)((longlong)plVar9 + 0xc) = 0xd;
    if (!bVar14) {
      uVar15 = 0;
    }
    *plVar9 = (ulonglong)uVar15 << 0x20;
  }
  if (local_68 != 0) {
    FUN_140e4cd60();
    local_68 = 0;
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0) {
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
    puVar11 = local_80;
    do {
      puVar6 = (undefined8 *)*puVar11;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar11 = puVar11 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return plVar9;
}

