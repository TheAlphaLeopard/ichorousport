// gml_Script_InputSetHotswap @ 0x140366170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_InputSetHotswap
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 **ppuVar16;
  ulonglong uVar17;
  undefined8 **ppuVar18;
  ulonglong uVar19;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined4 local_108 [3];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined4 *local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  uint local_90 [2];
  undefined8 *local_88;
  undefined1 local_80 [16];
  longlong local_70;
  
  local_150 = "gml_Script_InputRepeat";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0xc;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_90,param_4,4,param_5);
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_138,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_94 = 0xffffff;
  local_a0 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_16c = 0;
  local_178 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde700) &&
     (_Init_thread_header(&DAT_141dde700), DAT_141dde700 == -1)) {
    DAT_141dde6f8 = (longlong *)FUN_140e63aa0(DAT_1419f36c8);
    _Init_thread_footer(&DAT_141dde700);
  }
  local_148 = 0xc;
  puVar14 = &DAT_1419df7b0;
  uVar13 = (ulonglong)local_90[0];
  if ((int)local_90[0] < 2) {
    puVar12 = &DAT_1419df7b0;
  }
  else {
    puVar12 = (undefined8 *)local_88[1];
  }
  iVar3 = FUN_140e851f0(puVar12,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_148 = 0xc;
    if ((int)local_90[0] < 2) {
      puVar12 = &DAT_1419df7b0;
    }
    else {
      puVar12 = (undefined8 *)local_88[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar12);
    }
    *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
    *puVar12 = 0;
  }
  if ((int)local_90[0] < 3) {
    puVar12 = &DAT_1419df7b0;
  }
  else {
    puVar12 = (undefined8 *)local_88[2];
  }
  iVar3 = FUN_140e851f0(puVar12,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    if ((int)local_90[0] < 3) {
      puVar12 = &DAT_1419df7b0;
    }
    else {
      puVar12 = (undefined8 *)local_88[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar12);
    }
    *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
    *puVar12 = 0x4022000000000000;
  }
  if ((int)local_90[0] < 4) {
    puVar12 = &DAT_1419df7b0;
  }
  else {
    puVar12 = (undefined8 *)local_88[3];
  }
  iVar3 = FUN_140e851f0(puVar12,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    if ((int)local_90[0] < 4) {
      puVar12 = &DAT_1419df7b0;
    }
    else {
      puVar12 = (undefined8 *)local_88[3];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar12);
    }
    *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
    *puVar12 = 0x4039000000000000;
  }
  if (DAT_141ddc135 == '\0') {
    FUN_140e64380(DAT_141dde6f8,"gml_Script_InputRepeat");
    FUN_140e64380(local_res8,"gml_Script_InputRepeat");
  }
  local_148 = 0xe;
  if (DAT_141ddc135 == '\0') {
    DAT_141ddc135 = '\x01';
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    puVar6 = (undefined4 *)(**(code **)(*DAT_141dde6f8 + 0x10))(DAT_141dde6f8,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde6f8);
    puVar7 = (undefined4 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (local_res8,local_res10,&local_1a8,0,0);
    if (puVar7 != puVar6) {
      local_1b8 = *puVar7;
      uStack_1b4 = puVar7[1];
      uStack_1b0 = puVar7[2];
      uStack_1ac = puVar7[3];
      if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_1b8);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    puVar6 = (undefined4 *)(**(code **)(*DAT_141dde6f8 + 0x10))(DAT_141dde6f8,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde6f8);
    uVar5 = 0;
    puVar7 = (undefined4 *)gml_Script___InputTrace(local_res8,local_res10,&local_178,0,0);
    if (puVar7 != puVar6) {
      local_1b8 = *puVar7;
      uStack_1b4 = puVar7[1];
      uStack_1b0 = puVar7[2];
      uStack_1ac = puVar7[3];
      if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_1b8);
    }
    FUN_140e60910(1);
  }
  local_148 = 4;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if ((int)local_90[0] < 2) {
    puVar12 = &DAT_1419df7b0;
LAB_1403665cd:
    local_1b8 = *(undefined4 *)puVar12;
    uStack_1b4 = *(undefined4 *)((longlong)puVar12 + 4);
    uStack_1b0 = *(undefined4 *)(puVar12 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar12 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1b8);
  }
  else {
    puVar12 = (undefined8 *)local_88[1];
    if (puVar12 != &local_138) goto LAB_1403665cd;
  }
  local_c8 = &local_138;
  ppuVar18 = &local_c8;
  ppuVar16 = (undefined8 **)CONCAT44(uVar5,DAT_141a014a8);
  uVar8 = FUN_140e634e0(local_res8,local_res10,&local_1a8,1,ppuVar16,ppuVar18);
  cVar2 = FUN_140e491e0(uVar8);
  if (cVar2 == '\0') {
    local_148 = 7;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    uVar5 = (undefined4)((ulonglong)ppuVar16 >> 0x20);
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    if ((int)local_90[0] < 2) {
      puVar12 = &DAT_1419df7b0;
LAB_1403666bb:
      local_1b8 = *(undefined4 *)puVar12;
      uStack_1b4 = *(undefined4 *)((longlong)puVar12 + 4);
      uStack_1b0 = *(undefined4 *)(puVar12 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar12 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_1b8);
    }
    else {
      puVar12 = (undefined8 *)local_88[1];
      if (puVar12 != &local_128) goto LAB_1403666bb;
    }
    local_c0 = &local_128;
    local_1b8 = _DAT_141dd1648;
    uStack_1b4 = uRam0000000141dd164c;
    uStack_1b0 = uRam0000000141dd1650;
    uStack_1ac = DAT_141dd1654;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1b8);
    local_b8 = &local_118;
    ppuVar18 = &local_c0;
    puVar6 = (undefined4 *)
             FUN_140e634e0(local_res8,local_res10,&local_e8,1,CONCAT44(uVar5,DAT_1419fdc58),ppuVar18
                          );
    if (puVar6 != local_108) {
      local_1b8 = *puVar6;
      uStack_1b4 = puVar6[1];
      uStack_1b0 = puVar6[2];
      uStack_1ac = puVar6[3];
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_1b8);
    }
    local_b0 = local_108;
    local_1b8 = _DAT_141dd1688;
    uStack_1b4 = uRam0000000141dd168c;
    uStack_1b0 = uRam0000000141dd1690;
    uStack_1ac = DAT_141dd1694;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1b8);
    local_a8 = local_f8;
    ppuVar16 = &local_b8;
    FUN_14008e020(local_res8,local_res10,&local_178,3,ppuVar16);
  }
  local_148 = 0xc;
  if ((int)local_90[0] < 2) {
    puVar12 = &DAT_1419df7b0;
  }
  else {
    puVar12 = (undefined8 *)local_88[1];
  }
  local_18c = 0;
  uVar15 = 0x3ff00000;
  local_198 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar12,&local_198,DAT_141955260,1);
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if (uVar4 < 0x80000000) {
    local_148 = 0xe;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    local_1b8 = _DAT_141dd1638;
    uStack_1b4 = uRam0000000141dd163c;
    uStack_1b0 = uRam0000000141dd1640;
    uStack_1ac = DAT_141dd1644;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1b8);
    local_c8 = &local_138;
    if ((int)local_90[0] < 2) {
      puVar12 = &DAT_1419df7b0;
LAB_1403668fb:
      local_1b8 = *(undefined4 *)puVar12;
      uStack_1b4 = *(undefined4 *)((longlong)puVar12 + 4);
      uStack_1b0 = *(undefined4 *)(puVar12 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar12 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_1b8);
    }
    else {
      puVar12 = (undefined8 *)local_88[1];
      if (puVar12 != &local_128) goto LAB_1403668fb;
    }
    local_c0 = &local_128;
    local_1b8 = _DAT_141dd1668;
    uStack_1b4 = uRam0000000141dd166c;
    uStack_1b0 = uRam0000000141dd1670;
    uStack_1ac = DAT_141dd1674;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1b8);
    local_b8 = &local_118;
    local_1b8 = _DAT_1419e4440;
    uStack_1b4 = uRam00000001419e4444;
    uStack_1b0 = uRam00000001419e4448;
    uStack_1ac = uRam00000001419e444c;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_1b8);
    local_b0 = local_108;
    local_1b8 = _DAT_141dd1658;
    uStack_1b4 = uRam0000000141dd165c;
    uStack_1b0 = uRam0000000141dd1660;
    uStack_1ac = DAT_141dd1664;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1b8);
    local_a8 = local_f8;
    ppuVar16 = &local_c8;
    FUN_14008e020(local_res8,local_res10,&local_1a8,5,ppuVar16);
  }
  local_148 = 0x15;
  if ((int)local_90[0] < 2) {
    puVar12 = &DAT_1419df7b0;
  }
  else {
    puVar12 = (undefined8 *)local_88[1];
  }
  local_18c = 0;
  local_198 = 0;
  iVar3 = FUN_140e851f0(puVar12,&local_198,DAT_141955260,1);
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_140366b99;
  local_148 = 0x18;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  local_1b8 = _DAT_141dd1638;
  uStack_1b4 = uRam0000000141dd163c;
  uStack_1b0 = uRam0000000141dd1640;
  uStack_1ac = DAT_141dd1644;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_1b8);
  local_c8 = &local_138;
  if ((int)local_90[0] < 2) {
    puVar12 = &DAT_1419df7b0;
LAB_140366afe:
    local_1b8 = *(undefined4 *)puVar12;
    uStack_1b4 = *(undefined4 *)((longlong)puVar12 + 4);
    uStack_1b0 = *(undefined4 *)(puVar12 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar12 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1b8);
  }
  else {
    puVar12 = (undefined8 *)local_88[1];
    if (puVar12 != &local_128) goto LAB_140366afe;
  }
  local_c0 = &local_128;
  local_1b8 = _DAT_141dd1678;
  uStack_1b4 = uRam0000000141dd167c;
  uStack_1b0 = uRam0000000141dd1680;
  uStack_1ac = DAT_141dd1684;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_1b8);
  local_b8 = &local_118;
  ppuVar16 = &local_c8;
  FUN_14008e020(local_res8,local_res10,&local_1a8,3,ppuVar16);
LAB_140366b99:
  local_148 = 0x13;
  plVar9 = (longlong *)(**(code **)(*DAT_141dde6f8 + 8))(DAT_141dde6f8,DAT_141a026b8);
  if ((int)local_90[0] < 1) {
    puVar12 = &DAT_1419df7b0;
  }
  else {
    puVar12 = (undefined8 *)*local_88;
  }
  uVar5 = FUN_140e4a740(puVar12);
  if ((int)local_90[0] < 2) {
    puVar12 = &DAT_1419df7b0;
  }
  else {
    puVar12 = (undefined8 *)local_88[1];
  }
  iVar3 = FUN_140e4a740(puVar12);
  if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar11 = plVar9;
  }
  uVar19 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
  uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
  FUN_140e87440(plVar11,DAT_1419fd6e8,uVar5,&local_a0,uVar17,uVar19);
  iVar3 = FUN_140e63cb0(local_80,&local_res8,&local_res10,&local_a0);
  if (iVar3 < 1) {
    FUN_140e63970(local_80,&local_res8,&local_res10);
    DAT_141a67c38 = 1;
    if ((int)local_90[0] < 1) {
      puVar12 = &DAT_1419df7b0;
    }
    else {
      puVar12 = (undefined8 *)*local_88;
    }
    uVar5 = FUN_140e4a740(puVar12);
    if (1 < (int)local_90[0]) {
      puVar14 = (undefined8 *)local_88[1];
    }
    iVar3 = FUN_140e4a740(puVar14);
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
    FUN_140e87440(plVar9,DAT_1419fd6e8,uVar5,&local_a0,uVar17 & 0xffffffffffffff00,
                  uVar19 & 0xffffffffffffff00);
    DAT_141a67c38 = 0;
    DAT_141a72aac = 0;
  }
  else {
    local_148 = 0x15;
    uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd828);
    cVar2 = FUN_140e491e0(uVar8);
    if (cVar2 == '\0') {
      local_148 = 0x15;
      *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
      *param_3 = 0;
    }
    else {
      local_148 = 0x17;
      uVar8 = (**(code **)(*DAT_141dde6f8 + 8))(DAT_141dde6f8,DAT_1419fcb48);
      uVar10 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd758);
      uVar17 = uVar17 & 0xffffffffffffff00;
      FUN_140e87440(uVar8,DAT_1419fe1c8,0x80000000,&local_d8,uVar17,uVar19 & 0xffffffffffffff00);
      uVar5 = (undefined4)(uVar17 >> 0x20);
      uStack_17c = local_cc;
      uStack_180 = local_d0;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
        local_188 = local_d8;
      }
      else {
        FUN_1400419b0(&local_188,&local_d8);
      }
      FUN_1400462a0(&local_188,uVar10);
      local_1b8 = (undefined4)local_188;
      uStack_1b4 = local_188._4_4_;
      uStack_1b0 = uStack_180;
      uStack_1ac = uStack_17c;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1b8);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_148 = 0x18;
      local_18c = 0;
      local_198 = 0;
      iVar3 = FUN_140e851f0(&local_168,&local_198,DAT_141955260,0);
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if (iVar3 == 0) {
        local_148 = 0x18;
        *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
        *param_3 = 0x3ff0000000000000;
      }
      else {
        local_148 = 0x1a;
        if ((int)local_90[0] < 4) {
          puVar12 = &DAT_1419df7b0;
        }
        else {
          puVar12 = (undefined8 *)local_88[3];
        }
        FUN_1400462a0(&local_168,puVar12);
        local_148 = 0x1b;
        local_18c = 0;
        local_198 = 0;
        iVar3 = FUN_140e851f0(&local_168,&local_198,DAT_141955260,1);
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        if (iVar3 == -2 || -1 < iVar3) {
          local_148 = 0x1d;
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          local_1a8 = 0;
          local_1a0 = 0;
          local_19c = 5;
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          local_178 = 0;
          local_170 = 0;
          local_16c = 5;
          if ((int)local_90[0] < 3) {
            puVar12 = &DAT_1419df7b0;
          }
          else {
            puVar12 = (undefined8 *)local_88[2];
          }
          uStack_17c = local_15c;
          uStack_180 = local_160;
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
            local_188 = local_168;
          }
          else {
            FUN_1400419b0(&local_188,&local_168);
          }
          FUN_140046500(&local_188,puVar12);
          FUN_140041c60(&local_138,&local_188);
          if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          local_c8 = &local_138;
          uStack_17c = local_15c;
          uStack_180 = local_160;
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
            local_188 = local_168;
          }
          else {
            FUN_1400419b0(&local_188,&local_168);
          }
          uStack_1ac = 7;
          local_1b8 = 1;
          FUN_1400462a0(&local_188,&local_1b8);
          if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          if (2 < (int)local_90[0]) {
            puVar14 = (undefined8 *)local_88[2];
          }
          local_18c = uStack_17c;
          local_190 = uStack_180;
          if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
            local_198 = local_188;
          }
          else {
            FUN_1400419b0(&local_198,&local_188);
          }
          FUN_140046500(&local_198,puVar14);
          FUN_140041c60(&local_128,&local_198);
          if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          local_c0 = &local_128;
          uVar8 = FUN_140e634e0(local_res8,local_res10,&local_178,1,CONCAT44(uVar5,DAT_1419fe728),
                                &local_c0);
          uVar10 = FUN_140e634e0(local_res8,local_res10,&local_1a8,1,DAT_1419fe728,&local_c8);
          iVar3 = FUN_140e851f0(uVar10,uVar8,DAT_141955260,1);
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
          if (iVar3 < 1) {
            uVar15 = 0;
          }
          *param_3 = (ulonglong)uVar15 << 0x20;
        }
        else {
          local_148 = 0x1b;
          *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
          *param_3 = 0;
        }
      }
    }
  }
  if (local_70 != 0) {
    FUN_140e4cd60();
    local_70 = 0;
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  _eh_vector_destructor_iterator_(&local_138,0x10,5,FUN_140041b30);
  if (0 < (int)local_90[0]) {
    puVar14 = local_88;
    do {
      puVar12 = (undefined8 *)*puVar14;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar12);
      }
      *puVar12 = 0;
      *(undefined4 *)(puVar12 + 1) = 0;
      *(undefined4 *)((longlong)puVar12 + 0xc) = 5;
      puVar14 = puVar14 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  FUN_140e4cd60(local_88);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

