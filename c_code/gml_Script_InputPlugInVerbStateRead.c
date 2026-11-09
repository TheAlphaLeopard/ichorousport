// gml_Script_InputPlugInVerbStateRead @ 0x14035db60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputPlugInVerbStateRead
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
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
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 **ppuVar12;
  undefined8 **ppuVar13;
  undefined8 **ppuVar14;
  ulonglong uVar15;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
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
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined4 local_84;
  uint local_80 [2];
  undefined8 *local_78;
  undefined1 local_70 [16];
  longlong local_60;
  
  ppuVar12 = &local_a8;
  local_140 = "gml_Script_InputPlugInVerbSet";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 10;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_80,param_4,4,param_5);
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_84 = 0xffffff;
  local_90 = 0;
  local_15c = 0;
  local_168 = 0;
  local_14c = 0;
  local_158 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde69c) &&
     (_Init_thread_header(&DAT_141dde69c), DAT_141dde69c == -1)) {
    DAT_141dde6a0 = (longlong *)FUN_140e63aa0(DAT_1419f34c8);
    _Init_thread_footer(&DAT_141dde69c);
  }
  local_138 = 10;
  uVar11 = (ulonglong)local_80[0];
  if ((int)local_80[0] < 3) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_78[2];
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_138 = 10;
    if ((int)local_80[0] < 2) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_78[1];
    }
    if ((int)local_80[0] < 3) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)local_78[2];
    }
    if (puVar6 != puVar7) {
      local_178 = *puVar6;
      uStack_170 = *(undefined4 *)(puVar6 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_178);
    }
  }
  if ((int)local_80[0] < 4) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_78[3];
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    if ((int)local_80[0] < 4) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_78[3];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
  }
  if (DAT_141ddc12e == '\0') {
    FUN_140e64380(DAT_141dde6a0,"gml_Script_InputPlugInVerbSet");
    FUN_140e64380(local_res8,"gml_Script_InputPlugInVerbSet");
  }
  local_138 = 0xc;
  if (DAT_141ddc12e == '\0') {
    DAT_141ddc12e = '\x01';
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde6a0 + 0x10))(DAT_141dde6a0,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde6a0);
    puVar7 = (undefined8 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (local_res8,local_res10,&local_168,0,0);
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
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde6a0 + 0x10))(DAT_141dde6a0,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde6a0);
    uVar5 = 0;
    puVar7 = (undefined8 *)gml_Script___InputTrace(local_res8,local_res10,&local_158,0,0);
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
  local_138 = 5;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((int)local_80[0] < 4) {
    puVar6 = &DAT_1419df7b0;
LAB_14035df5e:
    local_178 = *puVar6;
    uStack_170 = *(undefined4 *)(puVar6 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_178);
  }
  else {
    puVar6 = (undefined8 *)local_78[3];
    if (puVar6 != &local_128) goto LAB_14035df5e;
  }
  local_b8 = &local_128;
  ppuVar14 = &local_b8;
  ppuVar13 = (undefined8 **)CONCAT44(uVar5,DAT_141a014a8);
  uVar8 = FUN_140e634e0(local_res8,local_res10,&local_168,1,ppuVar13,ppuVar14);
  cVar2 = FUN_140e491e0(uVar8);
  if (cVar2 == '\0') {
    local_138 = 10;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    uVar5 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    if ((int)local_80[0] < 4) {
      puVar6 = &DAT_1419df7b0;
LAB_14035e04c:
      local_178 = *puVar6;
      uStack_170 = *(undefined4 *)(puVar6 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_178);
    }
    else {
      puVar6 = (undefined8 *)local_78[3];
      if (puVar6 != &local_118) goto LAB_14035e04c;
    }
    local_b0 = &local_118;
    local_178 = CONCAT44(uRam0000000141dd13cc,_DAT_141dd13c8);
    uStack_170 = uRam0000000141dd13d0;
    uStack_16c = DAT_141dd13d4;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_178);
    local_a8 = &local_108;
    ppuVar14 = &local_b0;
    puVar6 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_c8,1,CONCAT44(uVar5,DAT_1419fdc58),ppuVar14
                          );
    if (puVar6 != &local_f8) {
      local_178 = *puVar6;
      uStack_170 = *(undefined4 *)(puVar6 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_178);
    }
    local_a0 = &local_f8;
    local_178 = CONCAT44(uRam0000000141dd13dc,_DAT_141dd13d8);
    uStack_170 = uRam0000000141dd13e0;
    uStack_16c = DAT_141dd13e4;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_178);
    local_98 = local_e8;
    FUN_14008e020(local_res8,local_res10,&local_158,3,ppuVar12);
    ppuVar13 = ppuVar12;
  }
  local_138 = 0xd;
  if ((int)local_80[0] < 4) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_78[3];
  }
  uStack_16c = 0;
  local_178 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar6,&local_178,DAT_141955260,1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (uVar4 < 0x80000000) {
    local_138 = 0x11;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_178 = CONCAT44(uRam0000000141dd13fc,_DAT_141dd13f8);
    uStack_170 = uRam0000000141dd1400;
    uStack_16c = DAT_141dd1404;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_178);
    local_b8 = &local_128;
    if ((int)local_80[0] < 4) {
      puVar6 = &DAT_1419df7b0;
LAB_14035e28e:
      local_178 = *puVar6;
      uStack_170 = *(undefined4 *)(puVar6 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_178);
    }
    else {
      puVar6 = (undefined8 *)local_78[3];
      if (puVar6 != &local_118) goto LAB_14035e28e;
    }
    local_b0 = &local_118;
    local_178 = CONCAT44(uRam0000000141dd140c,_DAT_141dd1408);
    uStack_170 = uRam0000000141dd1410;
    uStack_16c = DAT_141dd1414;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_178);
    local_a8 = &local_108;
    local_178 = CONCAT44(uRam00000001419e43a4,_DAT_1419e43a0);
    uStack_170 = uRam00000001419e43a8;
    uStack_16c = uRam00000001419e43ac;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_178);
    local_a0 = &local_f8;
    local_178 = CONCAT44(uRam0000000141dd13ec,_DAT_141dd13e8);
    uStack_170 = uRam0000000141dd13f0;
    uStack_16c = DAT_141dd13f4;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_178);
    local_98 = local_e8;
    ppuVar13 = &local_b8;
    FUN_14008e020(local_res8,local_res10,&local_168,5,ppuVar13);
  }
  local_138 = 0x18;
  if ((int)local_80[0] < 4) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_78[3];
  }
  uStack_16c = 0;
  local_178 = 0;
  iVar3 = FUN_140e851f0(puVar6,&local_178,DAT_141955260,1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_14035e528;
  local_138 = 0x1d;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  local_d8 = _DAT_141dd13f8;
  uStack_d4 = uRam0000000141dd13fc;
  uStack_d0 = uRam0000000141dd1400;
  uStack_cc = DAT_141dd1404;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_d8);
  local_b8 = &local_128;
  if ((int)local_80[0] < 4) {
    puVar6 = &DAT_1419df7b0;
LAB_14035e491:
    local_d8 = *(undefined4 *)puVar6;
    uStack_d4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_d0 = *(undefined4 *)(puVar6 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_d8);
  }
  else {
    puVar6 = (undefined8 *)local_78[3];
    if (puVar6 != &local_118) goto LAB_14035e491;
  }
  local_b0 = &local_118;
  local_d8 = _DAT_141dd13b8;
  uStack_d4 = uRam0000000141dd13bc;
  uStack_d0 = uRam0000000141dd13c0;
  uStack_cc = DAT_141dd13c4;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_d8);
  local_a8 = &local_108;
  ppuVar13 = &local_b8;
  FUN_14008e020(local_res8,local_res10,&local_168,3,ppuVar13);
LAB_14035e528:
  local_138 = 0x11;
  uVar8 = (**(code **)(*DAT_141dde6a0 + 8))(DAT_141dde6a0,DAT_1419fcb48);
  uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
  ppuVar13 = (undefined8 **)((ulonglong)ppuVar13 & 0xffffffffffffff00);
  FUN_140e87440(uVar8,DAT_141a024e8,0x80000000,&local_90,ppuVar13,uVar15);
  uStack_16c = 10;
  local_178 = 5;
  iVar3 = FUN_140e851f0(&local_90,&local_178,DAT_141955260,0);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (iVar3 != 0) {
    local_138 = 0x13;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_d8 = _DAT_141dd13a8;
    uStack_d4 = uRam0000000141dd13ac;
    uStack_d0 = uRam0000000141dd13b0;
    uStack_cc = DAT_141dd13b4;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_d8);
    local_b8 = &local_128;
    ppuVar13 = &local_b8;
    FUN_14008e020(local_res8,local_res10,&local_168,1,ppuVar13);
  }
  local_138 = 0x16;
  plVar9 = (longlong *)(**(code **)(*DAT_141dde6a0 + 8))(DAT_141dde6a0,DAT_141a026b8);
  if ((int)local_80[0] < 4) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_78[3];
  }
  iVar3 = FUN_140e4a740(puVar6);
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
  iVar3 = FUN_140e63cb0(local_70,&local_res8,&local_res10,plVar9);
  if (0 < iVar3) {
    do {
      local_138 = 0x18;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd7a8);
      FUN_140e609c0(local_res8);
      if ((int)local_80[0] < 3) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)local_78[2];
      }
      if ((int)local_80[0] < 1) {
        puVar10 = &DAT_1419df7b0;
      }
      else {
        puVar10 = (undefined8 *)*local_78;
      }
      uVar5 = FUN_140e4a740(puVar10);
      puVar10 = (undefined8 *)FUN_140e48e40(puVar6,uVar5);
      FUN_140e609c0(*(undefined8 *)*puVar6);
      if (puVar7 != puVar10) {
        local_d8 = *(undefined4 *)puVar7;
        uStack_d4 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_d0 = *(undefined4 *)(puVar7 + 1);
        uStack_cc = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar10);
        }
        FUN_140041b80(puVar10,&local_d8);
      }
      FUN_140e60910(2);
      local_138 = 0x19;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd498);
      FUN_140e609c0(local_res8);
      if ((int)local_80[0] < 2) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)local_78[1];
      }
      if ((int)local_80[0] < 1) {
        puVar10 = &DAT_1419df7b0;
      }
      else {
        puVar10 = (undefined8 *)*local_78;
      }
      uVar5 = FUN_140e4a740(puVar10);
      puVar10 = (undefined8 *)FUN_140e48e40(puVar6,uVar5);
      FUN_140e609c0(*(undefined8 *)*puVar6);
      if (puVar7 != puVar10) {
        local_d8 = *(undefined4 *)puVar7;
        uStack_d4 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_d0 = *(undefined4 *)(puVar7 + 1);
        uStack_cc = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar10);
        }
        FUN_140041b80(puVar10,&local_d8);
      }
      FUN_140e60910(2);
      cVar2 = FUN_140e643f0(local_70,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_70,&local_res8,&local_res10);
  DAT_141a67c38 = 1;
  FUN_140e87440(uVar8,DAT_141a024e8,0x80000000,&local_90,(ulonglong)ppuVar13 & 0xffffffffffffff00,
                uVar15 & 0xffffffffffffff00);
  DAT_141a67c38 = 0;
  DAT_141a72aac = 0;
  if (local_60 != 0) {
    FUN_140e4cd60();
    local_60 = 0;
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,5,FUN_140041b30);
  if (0 < (int)local_80[0]) {
    puVar6 = local_78;
    do {
      puVar7 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_78);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return param_3;
}

